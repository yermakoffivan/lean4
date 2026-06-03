// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Have
// Imports: public import Std.Tactic.Do.Syntax public import Lean.Elab.Tactic.Basic import Lean.Elab.Tactic.Do.ProofMode.Focus import Lean.Elab.Tactic.ElabTerm
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_ensureMGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_focusHyp(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Name_mkStr7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_dec(lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_addHypInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_Hyp_toExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
extern lean_object* l_new__wp__monad;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkApp9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHyp(lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Have"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dup"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Hypothesis "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " not found"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mdup"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__3_value),LEAN_SCALAR_PTR_LITERAL(81, 112, 88, 152, 42, 238, 157, 119)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "have"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mhave"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 47, 33, 106, 233, 48, 163, 59)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "replace"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mreplace"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 100, 86, 218, 99, 164, 72, 83)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "CompleteLattice"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMReplace___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMReplace___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMReplace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMReplace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ProofMode"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "elabMDupOpt"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__3_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__3_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(7, 221, 199, 203, 89, 208, 201, 250)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabMHaveOpt"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__1_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__1_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(161, 195, 27, 142, 168, 113, 176, 111)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "elabMReplaceOpt"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__1_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__1_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 147, 235, 103, 82, 103, 21, 237)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___boxed(lean_object* v_00_u03b1_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0(v_00_u03b1_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
lean_dec(v___y_28_);
lean_dec_ref(v___y_27_);
lean_dec(v___y_26_);
lean_dec_ref(v___y_25_);
lean_dec(v___y_24_);
lean_dec_ref(v___y_23_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg(lean_object* v___y_31_){
_start:
{
lean_object* v___x_33_; lean_object* v_ngen_34_; lean_object* v_namePrefix_35_; lean_object* v_idx_36_; lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_65_; 
v___x_33_ = lean_st_ref_get(v___y_31_);
v_ngen_34_ = lean_ctor_get(v___x_33_, 2);
lean_inc_ref(v_ngen_34_);
lean_dec(v___x_33_);
v_namePrefix_35_ = lean_ctor_get(v_ngen_34_, 0);
v_idx_36_ = lean_ctor_get(v_ngen_34_, 1);
v_isSharedCheck_65_ = !lean_is_exclusive(v_ngen_34_);
if (v_isSharedCheck_65_ == 0)
{
v___x_38_ = v_ngen_34_;
v_isShared_39_ = v_isSharedCheck_65_;
goto v_resetjp_37_;
}
else
{
lean_inc(v_idx_36_);
lean_inc(v_namePrefix_35_);
lean_dec(v_ngen_34_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_65_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
lean_object* v___x_40_; lean_object* v_env_41_; lean_object* v_nextMacroScope_42_; lean_object* v_auxDeclNGen_43_; lean_object* v_traceState_44_; lean_object* v_cache_45_; lean_object* v_messages_46_; lean_object* v_infoState_47_; lean_object* v_snapshotTasks_48_; lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_63_; 
v___x_40_ = lean_st_ref_take(v___y_31_);
v_env_41_ = lean_ctor_get(v___x_40_, 0);
v_nextMacroScope_42_ = lean_ctor_get(v___x_40_, 1);
v_auxDeclNGen_43_ = lean_ctor_get(v___x_40_, 3);
v_traceState_44_ = lean_ctor_get(v___x_40_, 4);
v_cache_45_ = lean_ctor_get(v___x_40_, 5);
v_messages_46_ = lean_ctor_get(v___x_40_, 6);
v_infoState_47_ = lean_ctor_get(v___x_40_, 7);
v_snapshotTasks_48_ = lean_ctor_get(v___x_40_, 8);
v_isSharedCheck_63_ = !lean_is_exclusive(v___x_40_);
if (v_isSharedCheck_63_ == 0)
{
lean_object* v_unused_64_; 
v_unused_64_ = lean_ctor_get(v___x_40_, 2);
lean_dec(v_unused_64_);
v___x_50_ = v___x_40_;
v_isShared_51_ = v_isSharedCheck_63_;
goto v_resetjp_49_;
}
else
{
lean_inc(v_snapshotTasks_48_);
lean_inc(v_infoState_47_);
lean_inc(v_messages_46_);
lean_inc(v_cache_45_);
lean_inc(v_traceState_44_);
lean_inc(v_auxDeclNGen_43_);
lean_inc(v_nextMacroScope_42_);
lean_inc(v_env_41_);
lean_dec(v___x_40_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_63_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v_r_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_56_; 
lean_inc(v_idx_36_);
lean_inc(v_namePrefix_35_);
v_r_52_ = l_Lean_Name_num___override(v_namePrefix_35_, v_idx_36_);
v___x_53_ = lean_unsigned_to_nat(1u);
v___x_54_ = lean_nat_add(v_idx_36_, v___x_53_);
lean_dec(v_idx_36_);
if (v_isShared_39_ == 0)
{
lean_ctor_set(v___x_38_, 1, v___x_54_);
v___x_56_ = v___x_38_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_namePrefix_35_);
lean_ctor_set(v_reuseFailAlloc_62_, 1, v___x_54_);
v___x_56_ = v_reuseFailAlloc_62_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
lean_object* v___x_58_; 
if (v_isShared_51_ == 0)
{
lean_ctor_set(v___x_50_, 2, v___x_56_);
v___x_58_ = v___x_50_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_61_; 
v_reuseFailAlloc_61_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_61_, 0, v_env_41_);
lean_ctor_set(v_reuseFailAlloc_61_, 1, v_nextMacroScope_42_);
lean_ctor_set(v_reuseFailAlloc_61_, 2, v___x_56_);
lean_ctor_set(v_reuseFailAlloc_61_, 3, v_auxDeclNGen_43_);
lean_ctor_set(v_reuseFailAlloc_61_, 4, v_traceState_44_);
lean_ctor_set(v_reuseFailAlloc_61_, 5, v_cache_45_);
lean_ctor_set(v_reuseFailAlloc_61_, 6, v_messages_46_);
lean_ctor_set(v_reuseFailAlloc_61_, 7, v_infoState_47_);
lean_ctor_set(v_reuseFailAlloc_61_, 8, v_snapshotTasks_48_);
v___x_58_ = v_reuseFailAlloc_61_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_st_ref_set(v___y_31_, v___x_58_);
v___x_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_60_, 0, v_r_52_);
return v___x_60_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg___boxed(lean_object* v___y_66_, lean_object* v___y_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg(v___y_66_);
lean_dec(v___y_66_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1(lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg(v___y_76_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___boxed(lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1(v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_, v___y_85_, v___y_86_);
lean_dec(v___y_86_);
lean_dec_ref(v___y_85_);
lean_dec(v___y_84_);
lean_dec_ref(v___y_83_);
lean_dec(v___y_82_);
lean_dec_ref(v___y_81_);
lean_dec(v___y_80_);
lean_dec_ref(v___y_79_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg___lam__0(lean_object* v_x_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_){
_start:
{
lean_object* v___x_99_; 
lean_inc(v___y_93_);
lean_inc_ref(v___y_92_);
lean_inc(v___y_91_);
lean_inc_ref(v___y_90_);
v___x_99_ = lean_apply_9(v_x_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, lean_box(0));
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg___lam__0___boxed(lean_object* v_x_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg___lam__0(v_x_100_, v___y_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_);
lean_dec(v___y_104_);
lean_dec_ref(v___y_103_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_101_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg(lean_object* v_mvarId_111_, lean_object* v_x_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_){
_start:
{
lean_object* v___f_122_; lean_object* v___x_123_; 
lean_inc(v___y_116_);
lean_inc_ref(v___y_115_);
lean_inc(v___y_114_);
lean_inc_ref(v___y_113_);
v___f_122_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_122_, 0, v_x_112_);
lean_closure_set(v___f_122_, 1, v___y_113_);
lean_closure_set(v___f_122_, 2, v___y_114_);
lean_closure_set(v___f_122_, 3, v___y_115_);
lean_closure_set(v___f_122_, 4, v___y_116_);
v___x_123_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_111_, v___f_122_, v___y_117_, v___y_118_, v___y_119_, v___y_120_);
if (lean_obj_tag(v___x_123_) == 0)
{
return v___x_123_;
}
else
{
lean_object* v_a_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_131_; 
v_a_124_ = lean_ctor_get(v___x_123_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_123_);
if (v_isSharedCheck_131_ == 0)
{
v___x_126_ = v___x_123_;
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_a_124_);
lean_dec(v___x_123_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_129_; 
if (v_isShared_127_ == 0)
{
v___x_129_ = v___x_126_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_a_124_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
return v___x_129_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg___boxed(lean_object* v_mvarId_132_, lean_object* v_x_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg(v_mvarId_132_, v_x_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_);
lean_dec(v___y_141_);
lean_dec_ref(v___y_140_);
lean_dec(v___y_139_);
lean_dec_ref(v___y_138_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4(lean_object* v_00_u03b1_144_, lean_object* v_mvarId_145_, lean_object* v_x_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg(v_mvarId_145_, v_x_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___boxed(lean_object* v_00_u03b1_157_, lean_object* v_mvarId_158_, lean_object* v_x_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4(v_00_u03b1_157_, v_mvarId_158_, v_x_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_162_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7_spec__8___redArg(lean_object* v_x_170_, lean_object* v_x_171_, lean_object* v_x_172_, lean_object* v_x_173_){
_start:
{
lean_object* v_ks_174_; lean_object* v_vs_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_199_; 
v_ks_174_ = lean_ctor_get(v_x_170_, 0);
v_vs_175_ = lean_ctor_get(v_x_170_, 1);
v_isSharedCheck_199_ = !lean_is_exclusive(v_x_170_);
if (v_isSharedCheck_199_ == 0)
{
v___x_177_ = v_x_170_;
v_isShared_178_ = v_isSharedCheck_199_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_vs_175_);
lean_inc(v_ks_174_);
lean_dec(v_x_170_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_199_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_179_ = lean_array_get_size(v_ks_174_);
v___x_180_ = lean_nat_dec_lt(v_x_171_, v___x_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_184_; 
lean_dec(v_x_171_);
v___x_181_ = lean_array_push(v_ks_174_, v_x_172_);
v___x_182_ = lean_array_push(v_vs_175_, v_x_173_);
if (v_isShared_178_ == 0)
{
lean_ctor_set(v___x_177_, 1, v___x_182_);
lean_ctor_set(v___x_177_, 0, v___x_181_);
v___x_184_ = v___x_177_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v___x_181_);
lean_ctor_set(v_reuseFailAlloc_185_, 1, v___x_182_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
else
{
lean_object* v_k_x27_186_; uint8_t v___x_187_; 
v_k_x27_186_ = lean_array_fget_borrowed(v_ks_174_, v_x_171_);
v___x_187_ = l_Lean_instBEqMVarId_beq(v_x_172_, v_k_x27_186_);
if (v___x_187_ == 0)
{
lean_object* v___x_189_; 
if (v_isShared_178_ == 0)
{
v___x_189_ = v___x_177_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v_ks_174_);
lean_ctor_set(v_reuseFailAlloc_193_, 1, v_vs_175_);
v___x_189_ = v_reuseFailAlloc_193_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = lean_unsigned_to_nat(1u);
v___x_191_ = lean_nat_add(v_x_171_, v___x_190_);
lean_dec(v_x_171_);
v_x_170_ = v___x_189_;
v_x_171_ = v___x_191_;
goto _start;
}
}
else
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_197_; 
v___x_194_ = lean_array_fset(v_ks_174_, v_x_171_, v_x_172_);
v___x_195_ = lean_array_fset(v_vs_175_, v_x_171_, v_x_173_);
lean_dec(v_x_171_);
if (v_isShared_178_ == 0)
{
lean_ctor_set(v___x_177_, 1, v___x_195_);
lean_ctor_set(v___x_177_, 0, v___x_194_);
v___x_197_ = v___x_177_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_194_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v___x_195_);
v___x_197_ = v_reuseFailAlloc_198_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
return v___x_197_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7___redArg(lean_object* v_n_200_, lean_object* v_k_201_, lean_object* v_v_202_){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_203_ = lean_unsigned_to_nat(0u);
v___x_204_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7_spec__8___redArg(v_n_200_, v___x_203_, v_k_201_, v_v_202_);
return v___x_204_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__0(void){
_start:
{
size_t v___x_205_; size_t v___x_206_; size_t v___x_207_; 
v___x_205_ = ((size_t)5ULL);
v___x_206_ = ((size_t)1ULL);
v___x_207_ = lean_usize_shift_left(v___x_206_, v___x_205_);
return v___x_207_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_208_; size_t v___x_209_; size_t v___x_210_; 
v___x_208_ = ((size_t)1ULL);
v___x_209_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__0);
v___x_210_ = lean_usize_sub(v___x_209_, v___x_208_);
return v___x_210_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg(lean_object* v_x_212_, size_t v_x_213_, size_t v_x_214_, lean_object* v_x_215_, lean_object* v_x_216_){
_start:
{
if (lean_obj_tag(v_x_212_) == 0)
{
lean_object* v_es_217_; size_t v___x_218_; size_t v___x_219_; size_t v___x_220_; size_t v___x_221_; lean_object* v_j_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v_es_217_ = lean_ctor_get(v_x_212_, 0);
v___x_218_ = ((size_t)5ULL);
v___x_219_ = ((size_t)1ULL);
v___x_220_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__1);
v___x_221_ = lean_usize_land(v_x_213_, v___x_220_);
v_j_222_ = lean_usize_to_nat(v___x_221_);
v___x_223_ = lean_array_get_size(v_es_217_);
v___x_224_ = lean_nat_dec_lt(v_j_222_, v___x_223_);
if (v___x_224_ == 0)
{
lean_dec(v_j_222_);
lean_dec(v_x_216_);
lean_dec(v_x_215_);
return v_x_212_;
}
else
{
lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_261_; 
lean_inc_ref(v_es_217_);
v_isSharedCheck_261_ = !lean_is_exclusive(v_x_212_);
if (v_isSharedCheck_261_ == 0)
{
lean_object* v_unused_262_; 
v_unused_262_ = lean_ctor_get(v_x_212_, 0);
lean_dec(v_unused_262_);
v___x_226_ = v_x_212_;
v_isShared_227_ = v_isSharedCheck_261_;
goto v_resetjp_225_;
}
else
{
lean_dec(v_x_212_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_261_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v_v_228_; lean_object* v___x_229_; lean_object* v_xs_x27_230_; lean_object* v___y_232_; 
v_v_228_ = lean_array_fget(v_es_217_, v_j_222_);
v___x_229_ = lean_box(0);
v_xs_x27_230_ = lean_array_fset(v_es_217_, v_j_222_, v___x_229_);
switch(lean_obj_tag(v_v_228_))
{
case 0:
{
lean_object* v_key_237_; lean_object* v_val_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_248_; 
v_key_237_ = lean_ctor_get(v_v_228_, 0);
v_val_238_ = lean_ctor_get(v_v_228_, 1);
v_isSharedCheck_248_ = !lean_is_exclusive(v_v_228_);
if (v_isSharedCheck_248_ == 0)
{
v___x_240_ = v_v_228_;
v_isShared_241_ = v_isSharedCheck_248_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_val_238_);
lean_inc(v_key_237_);
lean_dec(v_v_228_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_248_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
uint8_t v___x_242_; 
v___x_242_ = l_Lean_instBEqMVarId_beq(v_x_215_, v_key_237_);
if (v___x_242_ == 0)
{
lean_object* v___x_243_; lean_object* v___x_244_; 
lean_del_object(v___x_240_);
v___x_243_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_237_, v_val_238_, v_x_215_, v_x_216_);
v___x_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
v___y_232_ = v___x_244_;
goto v___jp_231_;
}
else
{
lean_object* v___x_246_; 
lean_dec(v_val_238_);
lean_dec(v_key_237_);
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 1, v_x_216_);
lean_ctor_set(v___x_240_, 0, v_x_215_);
v___x_246_ = v___x_240_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v_x_215_);
lean_ctor_set(v_reuseFailAlloc_247_, 1, v_x_216_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
v___y_232_ = v___x_246_;
goto v___jp_231_;
}
}
}
}
case 1:
{
lean_object* v_node_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_259_; 
v_node_249_ = lean_ctor_get(v_v_228_, 0);
v_isSharedCheck_259_ = !lean_is_exclusive(v_v_228_);
if (v_isSharedCheck_259_ == 0)
{
v___x_251_ = v_v_228_;
v_isShared_252_ = v_isSharedCheck_259_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_node_249_);
lean_dec(v_v_228_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_259_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
size_t v___x_253_; size_t v___x_254_; lean_object* v___x_255_; lean_object* v___x_257_; 
v___x_253_ = lean_usize_shift_right(v_x_213_, v___x_218_);
v___x_254_ = lean_usize_add(v_x_214_, v___x_219_);
v___x_255_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg(v_node_249_, v___x_253_, v___x_254_, v_x_215_, v_x_216_);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 0, v___x_255_);
v___x_257_ = v___x_251_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___x_255_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
v___y_232_ = v___x_257_;
goto v___jp_231_;
}
}
}
default: 
{
lean_object* v___x_260_; 
v___x_260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_260_, 0, v_x_215_);
lean_ctor_set(v___x_260_, 1, v_x_216_);
v___y_232_ = v___x_260_;
goto v___jp_231_;
}
}
v___jp_231_:
{
lean_object* v___x_233_; lean_object* v___x_235_; 
v___x_233_ = lean_array_fset(v_xs_x27_230_, v_j_222_, v___y_232_);
lean_dec(v_j_222_);
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 0, v___x_233_);
v___x_235_ = v___x_226_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_233_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
}
else
{
lean_object* v_ks_263_; lean_object* v_vs_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_284_; 
v_ks_263_ = lean_ctor_get(v_x_212_, 0);
v_vs_264_ = lean_ctor_get(v_x_212_, 1);
v_isSharedCheck_284_ = !lean_is_exclusive(v_x_212_);
if (v_isSharedCheck_284_ == 0)
{
v___x_266_ = v_x_212_;
v_isShared_267_ = v_isSharedCheck_284_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_vs_264_);
lean_inc(v_ks_263_);
lean_dec(v_x_212_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_284_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_ks_263_);
lean_ctor_set(v_reuseFailAlloc_283_, 1, v_vs_264_);
v___x_269_ = v_reuseFailAlloc_283_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
lean_object* v_newNode_270_; uint8_t v___y_272_; size_t v___x_278_; uint8_t v___x_279_; 
v_newNode_270_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7___redArg(v___x_269_, v_x_215_, v_x_216_);
v___x_278_ = ((size_t)7ULL);
v___x_279_ = lean_usize_dec_le(v___x_278_, v_x_214_);
if (v___x_279_ == 0)
{
lean_object* v___x_280_; lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_280_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_270_);
v___x_281_ = lean_unsigned_to_nat(4u);
v___x_282_ = lean_nat_dec_lt(v___x_280_, v___x_281_);
lean_dec(v___x_280_);
v___y_272_ = v___x_282_;
goto v___jp_271_;
}
else
{
v___y_272_ = v___x_279_;
goto v___jp_271_;
}
v___jp_271_:
{
if (v___y_272_ == 0)
{
lean_object* v_ks_273_; lean_object* v_vs_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v_ks_273_ = lean_ctor_get(v_newNode_270_, 0);
lean_inc_ref(v_ks_273_);
v_vs_274_ = lean_ctor_get(v_newNode_270_, 1);
lean_inc_ref(v_vs_274_);
lean_dec_ref(v_newNode_270_);
v___x_275_ = lean_unsigned_to_nat(0u);
v___x_276_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__2);
v___x_277_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___redArg(v_x_214_, v_ks_273_, v_vs_274_, v___x_275_, v___x_276_);
lean_dec_ref(v_vs_274_);
lean_dec_ref(v_ks_273_);
return v___x_277_;
}
else
{
return v_newNode_270_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___redArg(size_t v_depth_285_, lean_object* v_keys_286_, lean_object* v_vals_287_, lean_object* v_i_288_, lean_object* v_entries_289_){
_start:
{
lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_290_ = lean_array_get_size(v_keys_286_);
v___x_291_ = lean_nat_dec_lt(v_i_288_, v___x_290_);
if (v___x_291_ == 0)
{
lean_dec(v_i_288_);
return v_entries_289_;
}
else
{
lean_object* v_k_292_; lean_object* v_v_293_; uint64_t v___x_294_; size_t v_h_295_; size_t v___x_296_; lean_object* v___x_297_; size_t v___x_298_; size_t v___x_299_; size_t v___x_300_; size_t v_h_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v_k_292_ = lean_array_fget_borrowed(v_keys_286_, v_i_288_);
v_v_293_ = lean_array_fget_borrowed(v_vals_287_, v_i_288_);
v___x_294_ = l_Lean_instHashableMVarId_hash(v_k_292_);
v_h_295_ = lean_uint64_to_usize(v___x_294_);
v___x_296_ = ((size_t)5ULL);
v___x_297_ = lean_unsigned_to_nat(1u);
v___x_298_ = ((size_t)1ULL);
v___x_299_ = lean_usize_sub(v_depth_285_, v___x_298_);
v___x_300_ = lean_usize_mul(v___x_296_, v___x_299_);
v_h_301_ = lean_usize_shift_right(v_h_295_, v___x_300_);
v___x_302_ = lean_nat_add(v_i_288_, v___x_297_);
lean_dec(v_i_288_);
lean_inc(v_v_293_);
lean_inc(v_k_292_);
v___x_303_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg(v_entries_289_, v_h_301_, v_depth_285_, v_k_292_, v_v_293_);
v_i_288_ = v___x_302_;
v_entries_289_ = v___x_303_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_depth_305_, lean_object* v_keys_306_, lean_object* v_vals_307_, lean_object* v_i_308_, lean_object* v_entries_309_){
_start:
{
size_t v_depth_boxed_310_; lean_object* v_res_311_; 
v_depth_boxed_310_ = lean_unbox_usize(v_depth_305_);
lean_dec(v_depth_305_);
v_res_311_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___redArg(v_depth_boxed_310_, v_keys_306_, v_vals_307_, v_i_308_, v_entries_309_);
lean_dec_ref(v_vals_307_);
lean_dec_ref(v_keys_306_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___boxed(lean_object* v_x_312_, lean_object* v_x_313_, lean_object* v_x_314_, lean_object* v_x_315_, lean_object* v_x_316_){
_start:
{
size_t v_x_7757__boxed_317_; size_t v_x_7758__boxed_318_; lean_object* v_res_319_; 
v_x_7757__boxed_317_ = lean_unbox_usize(v_x_313_);
lean_dec(v_x_313_);
v_x_7758__boxed_318_ = lean_unbox_usize(v_x_314_);
lean_dec(v_x_314_);
v_res_319_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg(v_x_312_, v_x_7757__boxed_317_, v_x_7758__boxed_318_, v_x_315_, v_x_316_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2___redArg(lean_object* v_x_320_, lean_object* v_x_321_, lean_object* v_x_322_){
_start:
{
uint64_t v___x_323_; size_t v___x_324_; size_t v___x_325_; lean_object* v___x_326_; 
v___x_323_ = l_Lean_instHashableMVarId_hash(v_x_321_);
v___x_324_ = lean_uint64_to_usize(v___x_323_);
v___x_325_ = ((size_t)1ULL);
v___x_326_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg(v_x_320_, v___x_324_, v___x_325_, v_x_321_, v_x_322_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg(lean_object* v_mvarId_327_, lean_object* v_val_328_, lean_object* v___y_329_){
_start:
{
lean_object* v___x_331_; lean_object* v_mctx_332_; lean_object* v_cache_333_; lean_object* v_zetaDeltaFVarIds_334_; lean_object* v_postponed_335_; lean_object* v_diag_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_364_; 
v___x_331_ = lean_st_ref_take(v___y_329_);
v_mctx_332_ = lean_ctor_get(v___x_331_, 0);
v_cache_333_ = lean_ctor_get(v___x_331_, 1);
v_zetaDeltaFVarIds_334_ = lean_ctor_get(v___x_331_, 2);
v_postponed_335_ = lean_ctor_get(v___x_331_, 3);
v_diag_336_ = lean_ctor_get(v___x_331_, 4);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_364_ == 0)
{
v___x_338_ = v___x_331_;
v_isShared_339_ = v_isSharedCheck_364_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_diag_336_);
lean_inc(v_postponed_335_);
lean_inc(v_zetaDeltaFVarIds_334_);
lean_inc(v_cache_333_);
lean_inc(v_mctx_332_);
lean_dec(v___x_331_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_364_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v_depth_340_; lean_object* v_levelAssignDepth_341_; lean_object* v_lmvarCounter_342_; lean_object* v_mvarCounter_343_; lean_object* v_lDecls_344_; lean_object* v_decls_345_; lean_object* v_userNames_346_; lean_object* v_lAssignment_347_; lean_object* v_eAssignment_348_; lean_object* v_dAssignment_349_; lean_object* v___x_351_; uint8_t v_isShared_352_; uint8_t v_isSharedCheck_363_; 
v_depth_340_ = lean_ctor_get(v_mctx_332_, 0);
v_levelAssignDepth_341_ = lean_ctor_get(v_mctx_332_, 1);
v_lmvarCounter_342_ = lean_ctor_get(v_mctx_332_, 2);
v_mvarCounter_343_ = lean_ctor_get(v_mctx_332_, 3);
v_lDecls_344_ = lean_ctor_get(v_mctx_332_, 4);
v_decls_345_ = lean_ctor_get(v_mctx_332_, 5);
v_userNames_346_ = lean_ctor_get(v_mctx_332_, 6);
v_lAssignment_347_ = lean_ctor_get(v_mctx_332_, 7);
v_eAssignment_348_ = lean_ctor_get(v_mctx_332_, 8);
v_dAssignment_349_ = lean_ctor_get(v_mctx_332_, 9);
v_isSharedCheck_363_ = !lean_is_exclusive(v_mctx_332_);
if (v_isSharedCheck_363_ == 0)
{
v___x_351_ = v_mctx_332_;
v_isShared_352_ = v_isSharedCheck_363_;
goto v_resetjp_350_;
}
else
{
lean_inc(v_dAssignment_349_);
lean_inc(v_eAssignment_348_);
lean_inc(v_lAssignment_347_);
lean_inc(v_userNames_346_);
lean_inc(v_decls_345_);
lean_inc(v_lDecls_344_);
lean_inc(v_mvarCounter_343_);
lean_inc(v_lmvarCounter_342_);
lean_inc(v_levelAssignDepth_341_);
lean_inc(v_depth_340_);
lean_dec(v_mctx_332_);
v___x_351_ = lean_box(0);
v_isShared_352_ = v_isSharedCheck_363_;
goto v_resetjp_350_;
}
v_resetjp_350_:
{
lean_object* v___x_353_; lean_object* v___x_355_; 
v___x_353_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2___redArg(v_eAssignment_348_, v_mvarId_327_, v_val_328_);
if (v_isShared_352_ == 0)
{
lean_ctor_set(v___x_351_, 8, v___x_353_);
v___x_355_ = v___x_351_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_depth_340_);
lean_ctor_set(v_reuseFailAlloc_362_, 1, v_levelAssignDepth_341_);
lean_ctor_set(v_reuseFailAlloc_362_, 2, v_lmvarCounter_342_);
lean_ctor_set(v_reuseFailAlloc_362_, 3, v_mvarCounter_343_);
lean_ctor_set(v_reuseFailAlloc_362_, 4, v_lDecls_344_);
lean_ctor_set(v_reuseFailAlloc_362_, 5, v_decls_345_);
lean_ctor_set(v_reuseFailAlloc_362_, 6, v_userNames_346_);
lean_ctor_set(v_reuseFailAlloc_362_, 7, v_lAssignment_347_);
lean_ctor_set(v_reuseFailAlloc_362_, 8, v___x_353_);
lean_ctor_set(v_reuseFailAlloc_362_, 9, v_dAssignment_349_);
v___x_355_ = v_reuseFailAlloc_362_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
lean_object* v___x_357_; 
if (v_isShared_339_ == 0)
{
lean_ctor_set(v___x_338_, 0, v___x_355_);
v___x_357_ = v___x_338_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v___x_355_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v_cache_333_);
lean_ctor_set(v_reuseFailAlloc_361_, 2, v_zetaDeltaFVarIds_334_);
lean_ctor_set(v_reuseFailAlloc_361_, 3, v_postponed_335_);
lean_ctor_set(v_reuseFailAlloc_361_, 4, v_diag_336_);
v___x_357_ = v_reuseFailAlloc_361_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_358_ = lean_st_ref_set(v___y_329_, v___x_357_);
v___x_359_ = lean_box(0);
v___x_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
return v___x_360_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg___boxed(lean_object* v_mvarId_365_, lean_object* v_val_366_, lean_object* v___y_367_, lean_object* v___y_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg(v_mvarId_365_, v_val_366_, v___y_367_);
lean_dec(v___y_367_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3_spec__4(lean_object* v_msgData_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_){
_start:
{
lean_object* v___x_376_; lean_object* v_env_377_; lean_object* v___x_378_; lean_object* v_mctx_379_; lean_object* v_lctx_380_; lean_object* v_options_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_376_ = lean_st_ref_get(v___y_374_);
v_env_377_ = lean_ctor_get(v___x_376_, 0);
lean_inc_ref(v_env_377_);
lean_dec(v___x_376_);
v___x_378_ = lean_st_ref_get(v___y_372_);
v_mctx_379_ = lean_ctor_get(v___x_378_, 0);
lean_inc_ref(v_mctx_379_);
lean_dec(v___x_378_);
v_lctx_380_ = lean_ctor_get(v___y_371_, 2);
v_options_381_ = lean_ctor_get(v___y_373_, 2);
lean_inc_ref(v_options_381_);
lean_inc_ref(v_lctx_380_);
v___x_382_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_382_, 0, v_env_377_);
lean_ctor_set(v___x_382_, 1, v_mctx_379_);
lean_ctor_set(v___x_382_, 2, v_lctx_380_);
lean_ctor_set(v___x_382_, 3, v_options_381_);
v___x_383_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
lean_ctor_set(v___x_383_, 1, v_msgData_370_);
v___x_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3_spec__4___boxed(lean_object* v_msgData_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3_spec__4(v_msgData_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_);
lean_dec(v___y_389_);
lean_dec_ref(v___y_388_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg(lean_object* v_msg_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v_ref_398_; lean_object* v___x_399_; lean_object* v_a_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_408_; 
v_ref_398_ = lean_ctor_get(v___y_395_, 5);
v___x_399_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3_spec__4(v_msg_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
v_a_400_ = lean_ctor_get(v___x_399_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_408_ == 0)
{
v___x_402_ = v___x_399_;
v_isShared_403_ = v_isSharedCheck_408_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_a_400_);
lean_dec(v___x_399_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_408_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
lean_object* v___x_404_; lean_object* v___x_406_; 
lean_inc(v_ref_398_);
v___x_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_404_, 0, v_ref_398_);
lean_ctor_set(v___x_404_, 1, v_a_400_);
if (v_isShared_403_ == 0)
{
lean_ctor_set_tag(v___x_402_, 1);
lean_ctor_set(v___x_402_, 0, v___x_404_);
v___x_406_ = v___x_402_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_404_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg___boxed(lean_object* v_msg_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg(v_msg_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
return v_res_415_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_422_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__5));
v___x_423_ = l_Lean_stringToMessageData(v___x_422_);
return v___x_423_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8(void){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__7));
v___x_426_ = l_Lean_stringToMessageData(v___x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0(lean_object* v___x_427_, lean_object* v_snd_428_, lean_object* v___x_429_, lean_object* v___x_430_, uint8_t v___x_431_, lean_object* v___x_432_, lean_object* v_fst_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
if (lean_obj_tag(v___x_427_) == 1)
{
lean_object* v_val_443_; lean_object* v___x_444_; lean_object* v_a_445_; lean_object* v_focusHyp_446_; lean_object* v_restHyps_447_; lean_object* v_proof_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_497_; 
v_val_443_ = lean_ctor_get(v___x_427_, 0);
lean_inc(v_val_443_);
lean_dec_ref_known(v___x_427_, 1);
v___x_444_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg(v___y_441_);
v_a_445_ = lean_ctor_get(v___x_444_, 0);
lean_inc(v_a_445_);
lean_dec_ref(v___x_444_);
v_focusHyp_446_ = lean_ctor_get(v_val_443_, 0);
v_restHyps_447_ = lean_ctor_get(v_val_443_, 1);
v_proof_448_ = lean_ctor_get(v_val_443_, 2);
v_isSharedCheck_497_ = !lean_is_exclusive(v_val_443_);
if (v_isSharedCheck_497_ == 0)
{
v___x_450_ = v_val_443_;
v_isShared_451_ = v_isSharedCheck_497_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_proof_448_);
lean_inc(v_restHyps_447_);
lean_inc(v_focusHyp_446_);
lean_dec(v_val_443_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_497_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v_u_452_; lean_object* v_00_u03c3s_453_; lean_object* v_hyps_454_; lean_object* v_target_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_496_; 
v_u_452_ = lean_ctor_get(v_snd_428_, 0);
v_00_u03c3s_453_ = lean_ctor_get(v_snd_428_, 1);
v_hyps_454_ = lean_ctor_get(v_snd_428_, 2);
v_target_455_ = lean_ctor_get(v_snd_428_, 3);
v_isSharedCheck_496_ = !lean_is_exclusive(v_snd_428_);
if (v_isSharedCheck_496_ == 0)
{
v___x_457_ = v_snd_428_;
v_isShared_458_ = v_isSharedCheck_496_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_target_455_);
lean_inc(v_hyps_454_);
lean_inc(v_00_u03c3s_453_);
lean_inc(v_u_452_);
lean_dec(v_snd_428_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_496_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_462_; 
v___x_459_ = l_Lean_Syntax_getId(v___x_429_);
v___x_460_ = l_Lean_Expr_consumeMData(v_focusHyp_446_);
if (v_isShared_451_ == 0)
{
lean_ctor_set(v___x_450_, 2, v___x_460_);
lean_ctor_set(v___x_450_, 1, v_a_445_);
lean_ctor_set(v___x_450_, 0, v___x_459_);
v___x_462_ = v___x_450_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v___x_459_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v_a_445_);
lean_ctor_set(v_reuseFailAlloc_495_, 2, v___x_460_);
v___x_462_ = v_reuseFailAlloc_495_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
lean_object* v___x_463_; 
lean_inc_ref(v___x_462_);
lean_inc_ref(v_00_u03c3s_453_);
v___x_463_ = l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(v___x_430_, v_00_u03c3s_453_, v___x_462_, v___x_431_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_467_; 
lean_dec_ref_known(v___x_463_, 1);
v___x_464_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_462_);
lean_inc_ref(v_hyps_454_);
lean_inc_ref_n(v_00_u03c3s_453_, 2);
lean_inc_n(v_u_452_, 2);
v___x_465_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_u_452_, v_00_u03c3s_453_, v_hyps_454_, v___x_464_);
lean_inc_ref(v_target_455_);
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 2, v___x_465_);
v___x_467_ = v___x_457_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_u_452_);
lean_ctor_set(v_reuseFailAlloc_494_, 1, v_00_u03c3s_453_);
lean_ctor_set(v_reuseFailAlloc_494_, 2, v___x_465_);
lean_ctor_set(v_reuseFailAlloc_494_, 3, v_target_455_);
v___x_467_ = v_reuseFailAlloc_494_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_468_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_467_);
v___x_469_ = lean_box(0);
v___x_470_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_468_, v___x_469_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v_a_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v_a_471_ = lean_ctor_get(v___x_470_, 0);
lean_inc_n(v_a_471_, 2);
lean_dec_ref_known(v___x_470_, 1);
v___x_472_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0));
v___x_473_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1));
v___x_474_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2));
v___x_475_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3));
v___x_476_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__4));
v___x_477_ = l_Lean_Name_mkStr6(v___x_472_, v___x_473_, v___x_474_, v___x_432_, v___x_475_, v___x_476_);
v___x_478_ = lean_box(0);
v___x_479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_479_, 0, v_u_452_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
v___x_480_ = l_Lean_mkConst(v___x_477_, v___x_479_);
v___x_481_ = l_Lean_mkApp7(v___x_480_, v_00_u03c3s_453_, v_hyps_454_, v_restHyps_447_, v_focusHyp_446_, v_target_455_, v_proof_448_, v_a_471_);
v___x_482_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg(v_fst_433_, v___x_481_, v___y_439_);
lean_dec_ref(v___x_482_);
v___x_483_ = l_Lean_Expr_mvarId_x21(v_a_471_);
lean_dec(v_a_471_);
v___x_484_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_484_, 0, v___x_483_);
lean_ctor_set(v___x_484_, 1, v___x_478_);
v___x_485_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_484_, v___y_435_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
return v___x_485_;
}
else
{
lean_object* v_a_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_493_; 
lean_dec_ref(v_target_455_);
lean_dec_ref(v_hyps_454_);
lean_dec_ref(v_00_u03c3s_453_);
lean_dec(v_u_452_);
lean_dec_ref(v_proof_448_);
lean_dec_ref(v_restHyps_447_);
lean_dec_ref(v_focusHyp_446_);
lean_dec(v_fst_433_);
lean_dec_ref(v___x_432_);
v_a_486_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_493_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_493_ == 0)
{
v___x_488_ = v___x_470_;
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_a_486_);
lean_dec(v___x_470_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_491_; 
if (v_isShared_489_ == 0)
{
v___x_491_ = v___x_488_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v_a_486_);
v___x_491_ = v_reuseFailAlloc_492_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
return v___x_491_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_462_);
lean_del_object(v___x_457_);
lean_dec_ref(v_target_455_);
lean_dec_ref(v_hyps_454_);
lean_dec_ref(v_00_u03c3s_453_);
lean_dec(v_u_452_);
lean_dec_ref(v_proof_448_);
lean_dec_ref(v_restHyps_447_);
lean_dec_ref(v_focusHyp_446_);
lean_dec(v_fst_433_);
lean_dec_ref(v___x_432_);
return v___x_463_;
}
}
}
}
}
else
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
lean_dec(v_fst_433_);
lean_dec_ref(v___x_432_);
lean_dec_ref(v_snd_428_);
lean_dec(v___x_427_);
v___x_498_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6);
v___x_499_ = l_Lean_MessageData_ofSyntax(v___x_430_);
v___x_500_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_500_, 0, v___x_498_);
lean_ctor_set(v___x_500_, 1, v___x_499_);
v___x_501_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8);
v___x_502_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_502_, 0, v___x_500_);
lean_ctor_set(v___x_502_, 1, v___x_501_);
v___x_503_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg(v___x_502_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
return v___x_503_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___boxed(lean_object* v___x_504_, lean_object* v_snd_505_, lean_object* v___x_506_, lean_object* v___x_507_, lean_object* v___x_508_, lean_object* v___x_509_, lean_object* v_fst_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_){
_start:
{
uint8_t v___x_8063__boxed_520_; lean_object* v_res_521_; 
v___x_8063__boxed_520_ = lean_unbox(v___x_508_);
v_res_521_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0(v___x_504_, v_snd_505_, v___x_506_, v___x_507_, v___x_8063__boxed_520_, v___x_509_, v_fst_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_);
lean_dec(v___y_518_);
lean_dec_ref(v___y_517_);
lean_dec(v___y_516_);
lean_dec_ref(v___y_515_);
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec(v___x_506_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup(lean_object* v_x_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; uint8_t v___x_546_; 
v___x_544_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2));
v___x_545_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4));
lean_inc(v_x_534_);
v___x_546_ = l_Lean_Syntax_isOfKind(v_x_534_, v___x_545_);
if (v___x_546_ == 0)
{
lean_object* v___x_547_; 
lean_dec(v_x_534_);
v___x_547_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_547_;
}
else
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
v___x_548_ = lean_unsigned_to_nat(1u);
v___x_549_ = l_Lean_Syntax_getArg(v_x_534_, v___x_548_);
v___x_550_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__6));
lean_inc(v___x_549_);
v___x_551_ = l_Lean_Syntax_isOfKind(v___x_549_, v___x_550_);
if (v___x_551_ == 0)
{
lean_object* v___x_552_; 
lean_dec(v___x_549_);
lean_dec(v_x_534_);
v___x_552_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_552_;
}
else
{
lean_object* v___x_553_; lean_object* v___x_554_; uint8_t v___x_555_; 
v___x_553_ = lean_unsigned_to_nat(3u);
v___x_554_ = l_Lean_Syntax_getArg(v_x_534_, v___x_553_);
lean_dec(v_x_534_);
lean_inc(v___x_554_);
v___x_555_ = l_Lean_Syntax_isOfKind(v___x_554_, v___x_550_);
if (v___x_555_ == 0)
{
lean_object* v___x_556_; 
lean_dec(v___x_554_);
lean_dec(v___x_549_);
v___x_556_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_556_;
}
else
{
lean_object* v___x_557_; 
v___x_557_ = l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal(v_a_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_, v_a_541_, v_a_542_);
if (lean_obj_tag(v___x_557_) == 0)
{
lean_object* v_a_558_; lean_object* v_fst_559_; lean_object* v_snd_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___y_564_; lean_object* v___x_565_; 
v_a_558_ = lean_ctor_get(v___x_557_, 0);
lean_inc(v_a_558_);
lean_dec_ref_known(v___x_557_, 1);
v_fst_559_ = lean_ctor_get(v_a_558_, 0);
lean_inc_n(v_fst_559_, 2);
v_snd_560_ = lean_ctor_get(v_a_558_, 1);
lean_inc_n(v_snd_560_, 2);
lean_dec(v_a_558_);
v___x_561_ = l_Lean_Syntax_getId(v___x_549_);
v___x_562_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHyp(v_snd_560_, v___x_561_);
lean_dec(v___x_561_);
v___x_563_ = lean_box(v___x_555_);
v___y_564_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___boxed), 16, 7);
lean_closure_set(v___y_564_, 0, v___x_562_);
lean_closure_set(v___y_564_, 1, v_snd_560_);
lean_closure_set(v___y_564_, 2, v___x_554_);
lean_closure_set(v___y_564_, 3, v___x_549_);
lean_closure_set(v___y_564_, 4, v___x_563_);
lean_closure_set(v___y_564_, 5, v___x_544_);
lean_closure_set(v___y_564_, 6, v_fst_559_);
v___x_565_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg(v_fst_559_, v___y_564_, v_a_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_, v_a_541_, v_a_542_);
return v___x_565_;
}
else
{
lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_573_; 
lean_dec(v___x_554_);
lean_dec(v___x_549_);
v_a_566_ = lean_ctor_get(v___x_557_, 0);
v_isSharedCheck_573_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_573_ == 0)
{
v___x_568_ = v___x_557_;
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v___x_557_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_571_; 
if (v_isShared_569_ == 0)
{
v___x_571_ = v___x_568_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_a_566_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___boxed(lean_object* v_x_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMDup(v_x_574_, v_a_575_, v_a_576_, v_a_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_);
lean_dec(v_a_582_);
lean_dec_ref(v_a_581_);
lean_dec(v_a_580_);
lean_dec_ref(v_a_579_);
lean_dec(v_a_578_);
lean_dec_ref(v_a_577_);
lean_dec(v_a_576_);
lean_dec_ref(v_a_575_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2(lean_object* v_mvarId_585_, lean_object* v_val_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg(v_mvarId_585_, v_val_586_, v___y_592_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___boxed(lean_object* v_mvarId_597_, lean_object* v_val_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2(v_mvarId_597_, v_val_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_);
lean_dec(v___y_606_);
lean_dec_ref(v___y_605_);
lean_dec(v___y_604_);
lean_dec_ref(v___y_603_);
lean_dec(v___y_602_);
lean_dec_ref(v___y_601_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_599_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3(lean_object* v_00_u03b1_609_, lean_object* v_msg_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_){
_start:
{
lean_object* v___x_620_; 
v___x_620_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg(v_msg_610_, v___y_615_, v___y_616_, v___y_617_, v___y_618_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___boxed(lean_object* v_00_u03b1_621_, lean_object* v_msg_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3(v_00_u03b1_621_, v_msg_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
lean_dec(v___y_628_);
lean_dec_ref(v___y_627_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec(v___y_624_);
lean_dec_ref(v___y_623_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2(lean_object* v_00_u03b2_633_, lean_object* v_x_634_, lean_object* v_x_635_, lean_object* v_x_636_){
_start:
{
lean_object* v___x_637_; 
v___x_637_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2___redArg(v_x_634_, v_x_635_, v_x_636_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4(lean_object* v_00_u03b2_638_, lean_object* v_x_639_, size_t v_x_640_, size_t v_x_641_, lean_object* v_x_642_, lean_object* v_x_643_){
_start:
{
lean_object* v___x_644_; 
v___x_644_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg(v_x_639_, v_x_640_, v_x_641_, v_x_642_, v_x_643_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___boxed(lean_object* v_00_u03b2_645_, lean_object* v_x_646_, lean_object* v_x_647_, lean_object* v_x_648_, lean_object* v_x_649_, lean_object* v_x_650_){
_start:
{
size_t v_x_8400__boxed_651_; size_t v_x_8401__boxed_652_; lean_object* v_res_653_; 
v_x_8400__boxed_651_ = lean_unbox_usize(v_x_647_);
lean_dec(v_x_647_);
v_x_8401__boxed_652_ = lean_unbox_usize(v_x_648_);
lean_dec(v_x_648_);
v_res_653_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4(v_00_u03b2_645_, v_x_646_, v_x_8400__boxed_651_, v_x_8401__boxed_652_, v_x_649_, v_x_650_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_654_, lean_object* v_n_655_, lean_object* v_k_656_, lean_object* v_v_657_){
_start:
{
lean_object* v___x_658_; 
v___x_658_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7___redArg(v_n_655_, v_k_656_, v_v_657_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_659_, size_t v_depth_660_, lean_object* v_keys_661_, lean_object* v_vals_662_, lean_object* v_heq_663_, lean_object* v_i_664_, lean_object* v_entries_665_){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___redArg(v_depth_660_, v_keys_661_, v_vals_662_, v_i_664_, v_entries_665_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b2_667_, lean_object* v_depth_668_, lean_object* v_keys_669_, lean_object* v_vals_670_, lean_object* v_heq_671_, lean_object* v_i_672_, lean_object* v_entries_673_){
_start:
{
size_t v_depth_boxed_674_; lean_object* v_res_675_; 
v_depth_boxed_674_ = lean_unbox_usize(v_depth_668_);
lean_dec(v_depth_668_);
v_res_675_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8(v_00_u03b2_667_, v_depth_boxed_674_, v_keys_669_, v_vals_670_, v_heq_671_, v_i_672_, v_entries_673_);
lean_dec_ref(v_vals_670_);
lean_dec_ref(v_keys_669_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7_spec__8(lean_object* v_00_u03b2_676_, lean_object* v_x_677_, lean_object* v_x_678_, lean_object* v_x_679_, lean_object* v_x_680_){
_start:
{
lean_object* v___x_681_; 
v___x_681_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7_spec__8___redArg(v_x_677_, v_x_678_, v_x_679_, v_x_680_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0(lean_object* v___x_683_, lean_object* v_00_u03c3s_684_, uint8_t v___x_685_, lean_object* v_u_686_, lean_object* v_hyps_687_, lean_object* v___x_688_, lean_object* v_target_689_, lean_object* v___x_690_, lean_object* v___x_691_, lean_object* v___x_692_, lean_object* v___x_693_, lean_object* v___x_694_, lean_object* v_fst_695_, lean_object* v_H_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_){
_start:
{
lean_object* v___x_706_; lean_object* v_a_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_706_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg(v___y_704_);
v_a_707_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_a_707_);
lean_dec_ref(v___x_706_);
v___x_708_ = l_Lean_Syntax_getId(v___x_683_);
lean_inc_ref(v_H_696_);
v___x_709_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_709_, 0, v___x_708_);
lean_ctor_set(v___x_709_, 1, v_a_707_);
lean_ctor_set(v___x_709_, 2, v_H_696_);
lean_inc_ref(v___x_709_);
lean_inc_ref(v_00_u03c3s_684_);
v___x_710_ = l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(v___x_683_, v_00_u03c3s_684_, v___x_709_, v___x_685_, v___y_701_, v___y_702_, v___y_703_, v___y_704_);
if (lean_obj_tag(v___x_710_) == 0)
{
lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_763_; 
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_763_ == 0)
{
lean_object* v_unused_764_; 
v_unused_764_ = lean_ctor_get(v___x_710_, 0);
lean_dec(v_unused_764_);
v___x_712_ = v___x_710_;
v_isShared_713_ = v_isSharedCheck_763_;
goto v_resetjp_711_;
}
else
{
lean_dec(v___x_710_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_763_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v_fst_716_; lean_object* v_snd_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_762_; 
v___x_714_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_709_);
lean_inc_ref(v___x_714_);
lean_inc_ref(v_hyps_687_);
lean_inc_ref(v_00_u03c3s_684_);
lean_inc(v_u_686_);
v___x_715_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(v_u_686_, v_00_u03c3s_684_, v_hyps_687_, v___x_714_);
v_fst_716_ = lean_ctor_get(v___x_715_, 0);
v_snd_717_ = lean_ctor_get(v___x_715_, 1);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_762_ == 0)
{
v___x_719_ = v___x_715_;
v_isShared_720_ = v_isSharedCheck_762_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_snd_717_);
lean_inc(v_fst_716_);
lean_dec(v___x_715_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_762_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_724_; 
lean_inc_ref(v_hyps_687_);
lean_inc_ref(v_00_u03c3s_684_);
lean_inc(v_u_686_);
v___x_721_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_721_, 0, v_u_686_);
lean_ctor_set(v___x_721_, 1, v_00_u03c3s_684_);
lean_ctor_set(v___x_721_, 2, v_hyps_687_);
lean_ctor_set(v___x_721_, 3, v_H_696_);
v___x_722_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_721_);
if (v_isShared_713_ == 0)
{
lean_ctor_set_tag(v___x_712_, 1);
lean_ctor_set(v___x_712_, 0, v___x_722_);
v___x_724_ = v___x_712_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v___x_722_);
v___x_724_ = v_reuseFailAlloc_761_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
uint8_t v___x_725_; lean_object* v___x_726_; 
v___x_725_ = 0;
v___x_726_ = l_Lean_Elab_Tactic_elabTermEnsuringType(v___x_688_, v___x_724_, v___x_725_, v___y_697_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_727_);
lean_dec_ref_known(v___x_726_, 1);
lean_inc_ref(v_target_689_);
lean_inc(v_fst_716_);
lean_inc_ref(v_00_u03c3s_684_);
v___x_728_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_728_, 0, v_u_686_);
lean_ctor_set(v___x_728_, 1, v_00_u03c3s_684_);
lean_ctor_set(v___x_728_, 2, v_fst_716_);
lean_ctor_set(v___x_728_, 3, v_target_689_);
v___x_729_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_728_);
v___x_730_ = lean_box(0);
v___x_731_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_729_, v___x_730_, v___y_701_, v___y_702_, v___y_703_, v___y_704_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v_a_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_742_; 
v_a_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc_n(v_a_732_, 2);
lean_dec_ref_known(v___x_731_, 1);
v___x_733_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3));
v___x_734_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0___closed__0));
v___x_735_ = l_Lean_Name_mkStr6(v___x_690_, v___x_691_, v___x_692_, v___x_693_, v___x_733_, v___x_734_);
v___x_736_ = l_Lean_mkConst(v___x_735_, v___x_694_);
v___x_737_ = l_Lean_mkApp8(v___x_736_, v_00_u03c3s_684_, v_hyps_687_, v___x_714_, v_fst_716_, v_target_689_, v_snd_717_, v_a_727_, v_a_732_);
v___x_738_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg(v_fst_695_, v___x_737_, v___y_702_);
lean_dec_ref(v___x_738_);
v___x_739_ = l_Lean_Expr_mvarId_x21(v_a_732_);
lean_dec(v_a_732_);
v___x_740_ = lean_box(0);
if (v_isShared_720_ == 0)
{
lean_ctor_set_tag(v___x_719_, 1);
lean_ctor_set(v___x_719_, 1, v___x_740_);
lean_ctor_set(v___x_719_, 0, v___x_739_);
v___x_742_ = v___x_719_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_739_);
lean_ctor_set(v_reuseFailAlloc_744_, 1, v___x_740_);
v___x_742_ = v_reuseFailAlloc_744_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
lean_object* v___x_743_; 
v___x_743_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_742_, v___y_698_, v___y_701_, v___y_702_, v___y_703_, v___y_704_);
return v___x_743_;
}
}
else
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_752_; 
lean_dec(v_a_727_);
lean_del_object(v___x_719_);
lean_dec(v_snd_717_);
lean_dec(v_fst_716_);
lean_dec_ref(v___x_714_);
lean_dec(v_fst_695_);
lean_dec(v___x_694_);
lean_dec_ref(v___x_693_);
lean_dec_ref(v___x_692_);
lean_dec_ref(v___x_691_);
lean_dec_ref(v___x_690_);
lean_dec_ref(v_target_689_);
lean_dec_ref(v_hyps_687_);
lean_dec_ref(v_00_u03c3s_684_);
v_a_745_ = lean_ctor_get(v___x_731_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_752_ == 0)
{
v___x_747_ = v___x_731_;
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_731_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_750_; 
if (v_isShared_748_ == 0)
{
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_745_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
lean_del_object(v___x_719_);
lean_dec(v_snd_717_);
lean_dec(v_fst_716_);
lean_dec_ref(v___x_714_);
lean_dec(v_fst_695_);
lean_dec(v___x_694_);
lean_dec_ref(v___x_693_);
lean_dec_ref(v___x_692_);
lean_dec_ref(v___x_691_);
lean_dec_ref(v___x_690_);
lean_dec_ref(v_target_689_);
lean_dec_ref(v_hyps_687_);
lean_dec(v_u_686_);
lean_dec_ref(v_00_u03c3s_684_);
v_a_753_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_726_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_726_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
if (v_isShared_756_ == 0)
{
v___x_758_ = v___x_755_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_753_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_709_, 3);
lean_dec_ref(v_H_696_);
lean_dec(v_fst_695_);
lean_dec(v___x_694_);
lean_dec_ref(v___x_693_);
lean_dec_ref(v___x_692_);
lean_dec_ref(v___x_691_);
lean_dec_ref(v___x_690_);
lean_dec_ref(v_target_689_);
lean_dec(v___x_688_);
lean_dec_ref(v_hyps_687_);
lean_dec(v_u_686_);
lean_dec_ref(v_00_u03c3s_684_);
return v___x_710_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0___boxed(lean_object** _args){
lean_object* v___x_765_ = _args[0];
lean_object* v_00_u03c3s_766_ = _args[1];
lean_object* v___x_767_ = _args[2];
lean_object* v_u_768_ = _args[3];
lean_object* v_hyps_769_ = _args[4];
lean_object* v___x_770_ = _args[5];
lean_object* v_target_771_ = _args[6];
lean_object* v___x_772_ = _args[7];
lean_object* v___x_773_ = _args[8];
lean_object* v___x_774_ = _args[9];
lean_object* v___x_775_ = _args[10];
lean_object* v___x_776_ = _args[11];
lean_object* v_fst_777_ = _args[12];
lean_object* v_H_778_ = _args[13];
lean_object* v___y_779_ = _args[14];
lean_object* v___y_780_ = _args[15];
lean_object* v___y_781_ = _args[16];
lean_object* v___y_782_ = _args[17];
lean_object* v___y_783_ = _args[18];
lean_object* v___y_784_ = _args[19];
lean_object* v___y_785_ = _args[20];
lean_object* v___y_786_ = _args[21];
lean_object* v___y_787_ = _args[22];
_start:
{
uint8_t v___x_2878__boxed_788_; lean_object* v_res_789_; 
v___x_2878__boxed_788_ = lean_unbox(v___x_767_);
v_res_789_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0(v___x_765_, v_00_u03c3s_766_, v___x_2878__boxed_788_, v_u_768_, v_hyps_769_, v___x_770_, v_target_771_, v___x_772_, v___x_773_, v___x_774_, v___x_775_, v___x_776_, v_fst_777_, v_H_778_, v___y_779_, v___y_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_);
lean_dec(v___y_786_);
lean_dec_ref(v___y_785_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
lean_dec(v___y_782_);
lean_dec_ref(v___y_781_);
lean_dec(v___y_780_);
lean_dec_ref(v___y_779_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__1(lean_object* v_ty_x3f_790_, lean_object* v___x_791_, lean_object* v___f_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
if (lean_obj_tag(v_ty_x3f_790_) == 1)
{
lean_object* v_val_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_821_; 
v_val_802_ = lean_ctor_get(v_ty_x3f_790_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v_ty_x3f_790_);
if (v_isSharedCheck_821_ == 0)
{
v___x_804_ = v_ty_x3f_790_;
v_isShared_805_ = v_isSharedCheck_821_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_val_802_);
lean_dec(v_ty_x3f_790_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_821_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_807_; 
if (v_isShared_805_ == 0)
{
lean_ctor_set(v___x_804_, 0, v___x_791_);
v___x_807_ = v___x_804_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v___x_791_);
v___x_807_ = v_reuseFailAlloc_820_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
uint8_t v___x_808_; lean_object* v___x_809_; 
v___x_808_ = 0;
v___x_809_ = l_Lean_Elab_Tactic_elabTerm(v_val_802_, v___x_807_, v___x_808_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
if (lean_obj_tag(v___x_809_) == 0)
{
lean_object* v_a_810_; lean_object* v___x_811_; 
v_a_810_ = lean_ctor_get(v___x_809_, 0);
lean_inc(v_a_810_);
lean_dec_ref_known(v___x_809_, 1);
lean_inc(v___y_800_);
lean_inc_ref(v___y_799_);
lean_inc(v___y_798_);
lean_inc_ref(v___y_797_);
lean_inc(v___y_796_);
lean_inc_ref(v___y_795_);
lean_inc(v___y_794_);
lean_inc_ref(v___y_793_);
v___x_811_ = lean_apply_10(v___f_792_, v_a_810_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, lean_box(0));
return v___x_811_;
}
else
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_819_; 
lean_dec_ref(v___f_792_);
v_a_812_ = lean_ctor_get(v___x_809_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v___x_809_);
if (v_isSharedCheck_819_ == 0)
{
v___x_814_ = v___x_809_;
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_809_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_817_; 
if (v_isShared_815_ == 0)
{
v___x_817_ = v___x_814_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_a_812_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
}
}
}
else
{
lean_object* v___x_822_; uint8_t v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
lean_dec(v_ty_x3f_790_);
v___x_822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_822_, 0, v___x_791_);
v___x_823_ = 0;
v___x_824_ = lean_box(0);
v___x_825_ = l_Lean_Meta_mkFreshExprMVar(v___x_822_, v___x_823_, v___x_824_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
if (lean_obj_tag(v___x_825_) == 0)
{
lean_object* v_a_826_; lean_object* v___x_827_; 
v_a_826_ = lean_ctor_get(v___x_825_, 0);
lean_inc(v_a_826_);
lean_dec_ref_known(v___x_825_, 1);
lean_inc(v___y_800_);
lean_inc_ref(v___y_799_);
lean_inc(v___y_798_);
lean_inc_ref(v___y_797_);
lean_inc(v___y_796_);
lean_inc_ref(v___y_795_);
lean_inc(v___y_794_);
lean_inc_ref(v___y_793_);
v___x_827_ = lean_apply_10(v___f_792_, v_a_826_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, lean_box(0));
return v___x_827_;
}
else
{
lean_object* v_a_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_835_; 
lean_dec_ref(v___f_792_);
v_a_828_ = lean_ctor_get(v___x_825_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_835_ == 0)
{
v___x_830_ = v___x_825_;
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_a_828_);
lean_dec(v___x_825_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_833_; 
if (v_isShared_831_ == 0)
{
v___x_833_ = v___x_830_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_a_828_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__1___boxed(lean_object* v_ty_x3f_836_, lean_object* v___x_837_, lean_object* v___f_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__1(v_ty_x3f_836_, v___x_837_, v___f_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_);
lean_dec(v___y_846_);
lean_dec_ref(v___y_845_);
lean_dec(v___y_844_);
lean_dec_ref(v___y_843_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave(lean_object* v_x_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; uint8_t v___x_871_; 
v___x_869_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2));
v___x_870_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1));
lean_inc(v_x_859_);
v___x_871_ = l_Lean_Syntax_isOfKind(v_x_859_, v___x_870_);
if (v___x_871_ == 0)
{
lean_object* v___x_872_; 
lean_dec(v_x_859_);
v___x_872_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_872_;
}
else
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v_ty_x3f_876_; lean_object* v___y_877_; lean_object* v___y_878_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___y_882_; lean_object* v___y_883_; lean_object* v___y_884_; lean_object* v___x_921_; lean_object* v___x_922_; uint8_t v___x_923_; 
v___x_873_ = lean_unsigned_to_nat(1u);
v___x_874_ = l_Lean_Syntax_getArg(v_x_859_, v___x_873_);
v___x_921_ = lean_unsigned_to_nat(2u);
v___x_922_ = l_Lean_Syntax_getArg(v_x_859_, v___x_921_);
v___x_923_ = l_Lean_Syntax_isNone(v___x_922_);
if (v___x_923_ == 0)
{
uint8_t v___x_924_; 
lean_inc(v___x_922_);
v___x_924_ = l_Lean_Syntax_matchesNull(v___x_922_, v___x_921_);
if (v___x_924_ == 0)
{
lean_object* v___x_925_; 
lean_dec(v___x_922_);
lean_dec(v___x_874_);
lean_dec(v_x_859_);
v___x_925_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_925_;
}
else
{
lean_object* v_ty_x3f_926_; lean_object* v___x_927_; 
v_ty_x3f_926_ = l_Lean_Syntax_getArg(v___x_922_, v___x_873_);
lean_dec(v___x_922_);
v___x_927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_927_, 0, v_ty_x3f_926_);
v_ty_x3f_876_ = v___x_927_;
v___y_877_ = v_a_860_;
v___y_878_ = v_a_861_;
v___y_879_ = v_a_862_;
v___y_880_ = v_a_863_;
v___y_881_ = v_a_864_;
v___y_882_ = v_a_865_;
v___y_883_ = v_a_866_;
v___y_884_ = v_a_867_;
goto v___jp_875_;
}
}
else
{
lean_object* v___x_928_; 
lean_dec(v___x_922_);
v___x_928_ = lean_box(0);
v_ty_x3f_876_ = v___x_928_;
v___y_877_ = v_a_860_;
v___y_878_ = v_a_861_;
v___y_879_ = v_a_862_;
v___y_880_ = v_a_863_;
v___y_881_ = v_a_864_;
v___y_882_ = v_a_865_;
v___y_883_ = v_a_866_;
v___y_884_ = v_a_867_;
goto v___jp_875_;
}
v___jp_875_:
{
lean_object* v___x_885_; 
v___x_885_ = l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal(v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; lean_object* v_snd_887_; lean_object* v_fst_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_912_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_885_, 1);
v_snd_887_ = lean_ctor_get(v_a_886_, 1);
v_fst_888_ = lean_ctor_get(v_a_886_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v_a_886_);
if (v_isSharedCheck_912_ == 0)
{
v___x_890_ = v_a_886_;
v_isShared_891_ = v_isSharedCheck_912_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_snd_887_);
lean_inc(v_fst_888_);
lean_dec(v_a_886_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_912_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v_u_892_; lean_object* v_00_u03c3s_893_; lean_object* v_hyps_894_; lean_object* v_target_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_904_; 
v_u_892_ = lean_ctor_get(v_snd_887_, 0);
lean_inc_n(v_u_892_, 2);
v_00_u03c3s_893_ = lean_ctor_get(v_snd_887_, 1);
lean_inc_ref(v_00_u03c3s_893_);
v_hyps_894_ = lean_ctor_get(v_snd_887_, 2);
lean_inc_ref(v_hyps_894_);
v_target_895_ = lean_ctor_get(v_snd_887_, 3);
lean_inc_ref(v_target_895_);
lean_dec(v_snd_887_);
v___x_896_ = lean_unsigned_to_nat(4u);
v___x_897_ = l_Lean_Syntax_getArg(v_x_859_, v___x_896_);
lean_dec(v_x_859_);
v___x_898_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0));
v___x_899_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1));
v___x_900_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2));
v___x_901_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2));
v___x_902_ = lean_box(0);
if (v_isShared_891_ == 0)
{
lean_ctor_set_tag(v___x_890_, 1);
lean_ctor_set(v___x_890_, 1, v___x_902_);
lean_ctor_set(v___x_890_, 0, v_u_892_);
v___x_904_ = v___x_890_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_u_892_);
lean_ctor_set(v_reuseFailAlloc_911_, 1, v___x_902_);
v___x_904_ = v_reuseFailAlloc_911_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
lean_object* v___x_905_; lean_object* v___f_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___y_909_; lean_object* v___x_910_; 
v___x_905_ = lean_box(v___x_871_);
lean_inc(v_fst_888_);
lean_inc_ref(v___x_904_);
lean_inc_ref(v_00_u03c3s_893_);
v___f_906_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0___boxed), 23, 13);
lean_closure_set(v___f_906_, 0, v___x_874_);
lean_closure_set(v___f_906_, 1, v_00_u03c3s_893_);
lean_closure_set(v___f_906_, 2, v___x_905_);
lean_closure_set(v___f_906_, 3, v_u_892_);
lean_closure_set(v___f_906_, 4, v_hyps_894_);
lean_closure_set(v___f_906_, 5, v___x_897_);
lean_closure_set(v___f_906_, 6, v_target_895_);
lean_closure_set(v___f_906_, 7, v___x_898_);
lean_closure_set(v___f_906_, 8, v___x_899_);
lean_closure_set(v___f_906_, 9, v___x_900_);
lean_closure_set(v___f_906_, 10, v___x_869_);
lean_closure_set(v___f_906_, 11, v___x_904_);
lean_closure_set(v___f_906_, 12, v_fst_888_);
v___x_907_ = l_Lean_mkConst(v___x_901_, v___x_904_);
v___x_908_ = l_Lean_Expr_app___override(v___x_907_, v_00_u03c3s_893_);
v___y_909_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__1___boxed), 12, 3);
lean_closure_set(v___y_909_, 0, v_ty_x3f_876_);
lean_closure_set(v___y_909_, 1, v___x_908_);
lean_closure_set(v___y_909_, 2, v___f_906_);
v___x_910_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg(v_fst_888_, v___y_909_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_);
return v___x_910_;
}
}
}
else
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
lean_dec(v_ty_x3f_876_);
lean_dec(v___x_874_);
lean_dec(v_x_859_);
v_a_913_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_885_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_885_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___boxed(lean_object* v_x_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMHave(v_x_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_, v_a_937_);
lean_dec(v_a_937_);
lean_dec_ref(v_a_936_);
lean_dec(v_a_935_);
lean_dec_ref(v_a_934_);
lean_dec(v_a_933_);
lean_dec_ref(v_a_932_);
lean_dec(v_a_931_);
lean_dec_ref(v_a_930_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0(lean_object* v___x_941_, lean_object* v_u_942_, lean_object* v___x_943_, lean_object* v___x_944_, lean_object* v_00_u03c3s_945_, uint8_t v___x_946_, lean_object* v_hyps_947_, lean_object* v___x_948_, lean_object* v_target_949_, lean_object* v___x_950_, lean_object* v_fst_951_, lean_object* v_ty_x3f_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_){
_start:
{
if (lean_obj_tag(v___x_941_) == 1)
{
lean_object* v_val_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_1078_; 
v_val_962_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_964_ = v___x_941_;
v_isShared_965_ = v_isSharedCheck_1078_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_val_962_);
lean_dec(v___x_941_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_1078_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v_focusHyp_966_; lean_object* v_restHyps_967_; lean_object* v_proof_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_1077_; 
v_focusHyp_966_ = lean_ctor_get(v_val_962_, 0);
v_restHyps_967_ = lean_ctor_get(v_val_962_, 1);
v_proof_968_ = lean_ctor_get(v_val_962_, 2);
v_isSharedCheck_1077_ = !lean_is_exclusive(v_val_962_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_970_ = v_val_962_;
v_isShared_971_ = v_isSharedCheck_1077_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_proof_968_);
lean_inc(v_restHyps_967_);
lean_inc(v_focusHyp_966_);
lean_dec(v_val_962_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_1077_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v_H_x27_979_; lean_object* v___y_980_; lean_object* v___y_981_; lean_object* v___y_982_; lean_object* v___y_983_; lean_object* v___y_984_; lean_object* v___y_985_; lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_972_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0));
v___x_973_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1));
v___x_974_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2));
v___x_975_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2));
v___x_976_ = lean_box(0);
lean_inc(v_u_942_);
v___x_977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_977_, 0, v_u_942_);
lean_ctor_set(v___x_977_, 1, v___x_976_);
lean_inc_ref(v___x_977_);
v___x_1043_ = l_Lean_mkConst(v___x_975_, v___x_977_);
lean_inc_ref(v_00_u03c3s_945_);
v___x_1044_ = l_Lean_Expr_app___override(v___x_1043_, v_00_u03c3s_945_);
if (lean_obj_tag(v_ty_x3f_952_) == 1)
{
lean_object* v_val_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1063_; 
v_val_1045_ = lean_ctor_get(v_ty_x3f_952_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v_ty_x3f_952_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1047_ = v_ty_x3f_952_;
v_isShared_1048_ = v_isSharedCheck_1063_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_val_1045_);
lean_dec(v_ty_x3f_952_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1063_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1050_; 
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 0, v___x_1044_);
v___x_1050_ = v___x_1047_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1044_);
v___x_1050_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
uint8_t v___x_1051_; lean_object* v___x_1052_; 
v___x_1051_ = 0;
v___x_1052_ = l_Lean_Elab_Tactic_elabTerm(v_val_1045_, v___x_1050_, v___x_1051_, v___y_953_, v___y_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_);
if (lean_obj_tag(v___x_1052_) == 0)
{
lean_object* v_a_1053_; 
v_a_1053_ = lean_ctor_get(v___x_1052_, 0);
lean_inc(v_a_1053_);
lean_dec_ref_known(v___x_1052_, 1);
v_H_x27_979_ = v_a_1053_;
v___y_980_ = v___y_953_;
v___y_981_ = v___y_954_;
v___y_982_ = v___y_955_;
v___y_983_ = v___y_956_;
v___y_984_ = v___y_957_;
v___y_985_ = v___y_958_;
v___y_986_ = v___y_959_;
v___y_987_ = v___y_960_;
goto v___jp_978_;
}
else
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1061_; 
lean_dec_ref_known(v___x_977_, 2);
lean_del_object(v___x_970_);
lean_dec_ref(v_proof_968_);
lean_dec_ref(v_restHyps_967_);
lean_dec_ref(v_focusHyp_966_);
lean_del_object(v___x_964_);
lean_dec(v_fst_951_);
lean_dec_ref(v___x_950_);
lean_dec_ref(v_target_949_);
lean_dec(v___x_948_);
lean_dec_ref(v_hyps_947_);
lean_dec_ref(v_00_u03c3s_945_);
lean_dec(v___x_944_);
lean_dec(v___x_943_);
lean_dec(v_u_942_);
v_a_1054_ = lean_ctor_get(v___x_1052_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1052_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1056_ = v___x_1052_;
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v___x_1052_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1059_; 
if (v_isShared_1057_ == 0)
{
v___x_1059_ = v___x_1056_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v_a_1054_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
}
}
}
else
{
lean_object* v___x_1064_; uint8_t v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
lean_dec(v_ty_x3f_952_);
v___x_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1044_);
v___x_1065_ = 0;
v___x_1066_ = lean_box(0);
v___x_1067_ = l_Lean_Meta_mkFreshExprMVar(v___x_1064_, v___x_1065_, v___x_1066_, v___y_957_, v___y_958_, v___y_959_, v___y_960_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v_a_1068_; 
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_a_1068_);
lean_dec_ref_known(v___x_1067_, 1);
v_H_x27_979_ = v_a_1068_;
v___y_980_ = v___y_953_;
v___y_981_ = v___y_954_;
v___y_982_ = v___y_955_;
v___y_983_ = v___y_956_;
v___y_984_ = v___y_957_;
v___y_985_ = v___y_958_;
v___y_986_ = v___y_959_;
v___y_987_ = v___y_960_;
goto v___jp_978_;
}
else
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
lean_dec_ref_known(v___x_977_, 2);
lean_del_object(v___x_970_);
lean_dec_ref(v_proof_968_);
lean_dec_ref(v_restHyps_967_);
lean_dec_ref(v_focusHyp_966_);
lean_del_object(v___x_964_);
lean_dec(v_fst_951_);
lean_dec_ref(v___x_950_);
lean_dec_ref(v_target_949_);
lean_dec(v___x_948_);
lean_dec_ref(v_hyps_947_);
lean_dec_ref(v_00_u03c3s_945_);
lean_dec(v___x_944_);
lean_dec(v___x_943_);
lean_dec(v_u_942_);
v_a_1069_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1067_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1067_);
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
v___jp_978_:
{
lean_object* v___x_988_; lean_object* v_a_989_; lean_object* v___x_991_; 
v___x_988_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg(v___y_987_);
v_a_989_ = lean_ctor_get(v___x_988_, 0);
lean_inc(v_a_989_);
lean_dec_ref(v___x_988_);
lean_inc_ref(v_H_x27_979_);
if (v_isShared_971_ == 0)
{
lean_ctor_set(v___x_970_, 2, v_H_x27_979_);
lean_ctor_set(v___x_970_, 1, v_a_989_);
lean_ctor_set(v___x_970_, 0, v___x_943_);
v___x_991_ = v___x_970_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v___x_943_);
lean_ctor_set(v_reuseFailAlloc_1042_, 1, v_a_989_);
lean_ctor_set(v_reuseFailAlloc_1042_, 2, v_H_x27_979_);
v___x_991_ = v_reuseFailAlloc_1042_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
lean_object* v___x_992_; 
lean_inc_ref(v___x_991_);
lean_inc_ref(v_00_u03c3s_945_);
v___x_992_ = l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(v___x_944_, v_00_u03c3s_945_, v___x_991_, v___x_946_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
if (lean_obj_tag(v___x_992_) == 0)
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_996_; 
lean_dec_ref_known(v___x_992_, 1);
lean_inc_ref(v_hyps_947_);
lean_inc_ref(v_00_u03c3s_945_);
lean_inc(v_u_942_);
v___x_993_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_993_, 0, v_u_942_);
lean_ctor_set(v___x_993_, 1, v_00_u03c3s_945_);
lean_ctor_set(v___x_993_, 2, v_hyps_947_);
lean_ctor_set(v___x_993_, 3, v_H_x27_979_);
v___x_994_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_993_);
if (v_isShared_965_ == 0)
{
lean_ctor_set(v___x_964_, 0, v___x_994_);
v___x_996_ = v___x_964_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v___x_994_);
v___x_996_ = v_reuseFailAlloc_1041_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
uint8_t v___x_997_; lean_object* v___x_998_; 
v___x_997_ = 0;
v___x_998_ = l_Lean_Elab_Tactic_elabTermEnsuringType(v___x_948_, v___x_996_, v___x_997_, v___y_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v_a_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v_fst_1002_; lean_object* v_snd_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1032_; 
v_a_999_ = lean_ctor_get(v___x_998_, 0);
lean_inc(v_a_999_);
lean_dec_ref_known(v___x_998_, 1);
v___x_1000_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_991_);
lean_inc_ref(v___x_1000_);
lean_inc_ref(v_restHyps_967_);
lean_inc_ref(v_00_u03c3s_945_);
lean_inc(v_u_942_);
v___x_1001_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(v_u_942_, v_00_u03c3s_945_, v_restHyps_967_, v___x_1000_);
v_fst_1002_ = lean_ctor_get(v___x_1001_, 0);
v_snd_1003_ = lean_ctor_get(v___x_1001_, 1);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1005_ = v___x_1001_;
v_isShared_1006_ = v_isSharedCheck_1032_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_snd_1003_);
lean_inc(v_fst_1002_);
lean_dec(v___x_1001_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1032_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
lean_inc_ref(v_target_949_);
lean_inc(v_fst_1002_);
lean_inc_ref(v_00_u03c3s_945_);
v___x_1007_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1007_, 0, v_u_942_);
lean_ctor_set(v___x_1007_, 1, v_00_u03c3s_945_);
lean_ctor_set(v___x_1007_, 2, v_fst_1002_);
lean_ctor_set(v___x_1007_, 3, v_target_949_);
v___x_1008_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_1007_);
v___x_1009_ = lean_box(0);
v___x_1010_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_1008_, v___x_1009_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1021_; 
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
lean_inc_n(v_a_1011_, 2);
lean_dec_ref_known(v___x_1010_, 1);
v___x_1012_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3));
v___x_1013_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0___closed__0));
v___x_1014_ = l_Lean_Name_mkStr6(v___x_972_, v___x_973_, v___x_974_, v___x_950_, v___x_1012_, v___x_1013_);
v___x_1015_ = l_Lean_mkConst(v___x_1014_, v___x_977_);
v___x_1016_ = l_Lean_mkApp10(v___x_1015_, v_00_u03c3s_945_, v_restHyps_967_, v_focusHyp_966_, v___x_1000_, v_hyps_947_, v_fst_1002_, v_target_949_, v_proof_968_, v_snd_1003_, v_a_999_);
v___x_1017_ = l_Lean_Expr_app___override(v___x_1016_, v_a_1011_);
v___x_1018_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg(v_fst_951_, v___x_1017_, v___y_985_);
lean_dec_ref(v___x_1018_);
v___x_1019_ = l_Lean_Expr_mvarId_x21(v_a_1011_);
lean_dec(v_a_1011_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set_tag(v___x_1005_, 1);
lean_ctor_set(v___x_1005_, 1, v___x_976_);
lean_ctor_set(v___x_1005_, 0, v___x_1019_);
v___x_1021_ = v___x_1005_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1019_);
lean_ctor_set(v_reuseFailAlloc_1023_, 1, v___x_976_);
v___x_1021_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
lean_object* v___x_1022_; 
v___x_1022_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1021_, v___y_981_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
return v___x_1022_;
}
}
else
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1031_; 
lean_del_object(v___x_1005_);
lean_dec(v_snd_1003_);
lean_dec(v_fst_1002_);
lean_dec_ref(v___x_1000_);
lean_dec(v_a_999_);
lean_dec_ref_known(v___x_977_, 2);
lean_dec_ref(v_proof_968_);
lean_dec_ref(v_restHyps_967_);
lean_dec_ref(v_focusHyp_966_);
lean_dec(v_fst_951_);
lean_dec_ref(v___x_950_);
lean_dec_ref(v_target_949_);
lean_dec_ref(v_hyps_947_);
lean_dec_ref(v_00_u03c3s_945_);
v_a_1024_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1026_ = v___x_1010_;
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1010_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1029_; 
if (v_isShared_1027_ == 0)
{
v___x_1029_ = v___x_1026_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_a_1024_);
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
else
{
lean_object* v_a_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1040_; 
lean_dec_ref(v___x_991_);
lean_dec_ref_known(v___x_977_, 2);
lean_dec_ref(v_proof_968_);
lean_dec_ref(v_restHyps_967_);
lean_dec_ref(v_focusHyp_966_);
lean_dec(v_fst_951_);
lean_dec_ref(v___x_950_);
lean_dec_ref(v_target_949_);
lean_dec_ref(v_hyps_947_);
lean_dec_ref(v_00_u03c3s_945_);
lean_dec(v_u_942_);
v_a_1033_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1035_ = v___x_998_;
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_a_1033_);
lean_dec(v___x_998_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1038_; 
if (v_isShared_1036_ == 0)
{
v___x_1038_ = v___x_1035_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_a_1033_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_991_);
lean_dec_ref(v_H_x27_979_);
lean_dec_ref_known(v___x_977_, 2);
lean_dec_ref(v_proof_968_);
lean_dec_ref(v_restHyps_967_);
lean_dec_ref(v_focusHyp_966_);
lean_del_object(v___x_964_);
lean_dec(v_fst_951_);
lean_dec_ref(v___x_950_);
lean_dec_ref(v_target_949_);
lean_dec(v___x_948_);
lean_dec_ref(v_hyps_947_);
lean_dec_ref(v_00_u03c3s_945_);
lean_dec(v_u_942_);
return v___x_992_;
}
}
}
}
}
}
else
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; 
lean_dec(v_ty_x3f_952_);
lean_dec(v_fst_951_);
lean_dec_ref(v___x_950_);
lean_dec_ref(v_target_949_);
lean_dec(v___x_948_);
lean_dec_ref(v_hyps_947_);
lean_dec_ref(v_00_u03c3s_945_);
lean_dec(v___x_943_);
lean_dec(v_u_942_);
lean_dec(v___x_941_);
v___x_1079_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6);
v___x_1080_ = l_Lean_MessageData_ofSyntax(v___x_944_);
v___x_1081_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1079_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
v___x_1082_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8);
v___x_1083_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1081_);
lean_ctor_set(v___x_1083_, 1, v___x_1082_);
v___x_1084_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg(v___x_1083_, v___y_957_, v___y_958_, v___y_959_, v___y_960_);
return v___x_1084_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0___boxed(lean_object** _args){
lean_object* v___x_1085_ = _args[0];
lean_object* v_u_1086_ = _args[1];
lean_object* v___x_1087_ = _args[2];
lean_object* v___x_1088_ = _args[3];
lean_object* v_00_u03c3s_1089_ = _args[4];
lean_object* v___x_1090_ = _args[5];
lean_object* v_hyps_1091_ = _args[6];
lean_object* v___x_1092_ = _args[7];
lean_object* v_target_1093_ = _args[8];
lean_object* v___x_1094_ = _args[9];
lean_object* v_fst_1095_ = _args[10];
lean_object* v_ty_x3f_1096_ = _args[11];
lean_object* v___y_1097_ = _args[12];
lean_object* v___y_1098_ = _args[13];
lean_object* v___y_1099_ = _args[14];
lean_object* v___y_1100_ = _args[15];
lean_object* v___y_1101_ = _args[16];
lean_object* v___y_1102_ = _args[17];
lean_object* v___y_1103_ = _args[18];
lean_object* v___y_1104_ = _args[19];
lean_object* v___y_1105_ = _args[20];
_start:
{
uint8_t v___x_3617__boxed_1106_; lean_object* v_res_1107_; 
v___x_3617__boxed_1106_ = lean_unbox(v___x_1090_);
v_res_1107_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0(v___x_1085_, v_u_1086_, v___x_1087_, v___x_1088_, v_00_u03c3s_1089_, v___x_3617__boxed_1106_, v_hyps_1091_, v___x_1092_, v_target_1093_, v___x_1094_, v_fst_1095_, v_ty_x3f_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_);
lean_dec(v___y_1104_);
lean_dec_ref(v___y_1103_);
lean_dec(v___y_1102_);
lean_dec_ref(v___y_1101_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
return v_res_1107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace(lean_object* v_x_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_){
_start:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; uint8_t v___x_1126_; 
v___x_1124_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2));
v___x_1125_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1));
lean_inc(v_x_1114_);
v___x_1126_ = l_Lean_Syntax_isOfKind(v_x_1114_, v___x_1125_);
if (v___x_1126_ == 0)
{
lean_object* v___x_1127_; 
lean_dec(v_x_1114_);
v___x_1127_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_1127_;
}
else
{
lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v_ty_x3f_1131_; lean_object* v___y_1132_; lean_object* v___y_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1137_; lean_object* v___y_1138_; lean_object* v___y_1139_; lean_object* v___x_1163_; lean_object* v___x_1164_; uint8_t v___x_1165_; 
v___x_1128_ = lean_unsigned_to_nat(1u);
v___x_1129_ = l_Lean_Syntax_getArg(v_x_1114_, v___x_1128_);
v___x_1163_ = lean_unsigned_to_nat(2u);
v___x_1164_ = l_Lean_Syntax_getArg(v_x_1114_, v___x_1163_);
v___x_1165_ = l_Lean_Syntax_isNone(v___x_1164_);
if (v___x_1165_ == 0)
{
uint8_t v___x_1166_; 
lean_inc(v___x_1164_);
v___x_1166_ = l_Lean_Syntax_matchesNull(v___x_1164_, v___x_1163_);
if (v___x_1166_ == 0)
{
lean_object* v___x_1167_; 
lean_dec(v___x_1164_);
lean_dec(v___x_1129_);
lean_dec(v_x_1114_);
v___x_1167_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_1167_;
}
else
{
lean_object* v_ty_x3f_1168_; lean_object* v___x_1169_; 
v_ty_x3f_1168_ = l_Lean_Syntax_getArg(v___x_1164_, v___x_1128_);
lean_dec(v___x_1164_);
v___x_1169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1169_, 0, v_ty_x3f_1168_);
v_ty_x3f_1131_ = v___x_1169_;
v___y_1132_ = v_a_1115_;
v___y_1133_ = v_a_1116_;
v___y_1134_ = v_a_1117_;
v___y_1135_ = v_a_1118_;
v___y_1136_ = v_a_1119_;
v___y_1137_ = v_a_1120_;
v___y_1138_ = v_a_1121_;
v___y_1139_ = v_a_1122_;
goto v___jp_1130_;
}
}
else
{
lean_object* v___x_1170_; 
lean_dec(v___x_1164_);
v___x_1170_ = lean_box(0);
v_ty_x3f_1131_ = v___x_1170_;
v___y_1132_ = v_a_1115_;
v___y_1133_ = v_a_1116_;
v___y_1134_ = v_a_1117_;
v___y_1135_ = v_a_1118_;
v___y_1136_ = v_a_1119_;
v___y_1137_ = v_a_1120_;
v___y_1138_ = v_a_1121_;
v___y_1139_ = v_a_1122_;
goto v___jp_1130_;
}
v___jp_1130_:
{
lean_object* v___x_1140_; 
v___x_1140_ = l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal(v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_);
if (lean_obj_tag(v___x_1140_) == 0)
{
lean_object* v_a_1141_; lean_object* v_snd_1142_; lean_object* v_fst_1143_; lean_object* v_u_1144_; lean_object* v_00_u03c3s_1145_; lean_object* v_hyps_1146_; lean_object* v_target_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___y_1153_; lean_object* v___x_1154_; 
v_a_1141_ = lean_ctor_get(v___x_1140_, 0);
lean_inc(v_a_1141_);
lean_dec_ref_known(v___x_1140_, 1);
v_snd_1142_ = lean_ctor_get(v_a_1141_, 1);
lean_inc(v_snd_1142_);
v_fst_1143_ = lean_ctor_get(v_a_1141_, 0);
lean_inc_n(v_fst_1143_, 2);
lean_dec(v_a_1141_);
v_u_1144_ = lean_ctor_get(v_snd_1142_, 0);
lean_inc(v_u_1144_);
v_00_u03c3s_1145_ = lean_ctor_get(v_snd_1142_, 1);
lean_inc_ref(v_00_u03c3s_1145_);
v_hyps_1146_ = lean_ctor_get(v_snd_1142_, 2);
lean_inc_ref(v_hyps_1146_);
v_target_1147_ = lean_ctor_get(v_snd_1142_, 3);
lean_inc_ref(v_target_1147_);
v___x_1148_ = lean_unsigned_to_nat(4u);
v___x_1149_ = l_Lean_Syntax_getArg(v_x_1114_, v___x_1148_);
lean_dec(v_x_1114_);
v___x_1150_ = l_Lean_Syntax_getId(v___x_1129_);
v___x_1151_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHyp(v_snd_1142_, v___x_1150_);
v___x_1152_ = lean_box(v___x_1126_);
v___y_1153_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0___boxed), 21, 12);
lean_closure_set(v___y_1153_, 0, v___x_1151_);
lean_closure_set(v___y_1153_, 1, v_u_1144_);
lean_closure_set(v___y_1153_, 2, v___x_1150_);
lean_closure_set(v___y_1153_, 3, v___x_1129_);
lean_closure_set(v___y_1153_, 4, v_00_u03c3s_1145_);
lean_closure_set(v___y_1153_, 5, v___x_1152_);
lean_closure_set(v___y_1153_, 6, v_hyps_1146_);
lean_closure_set(v___y_1153_, 7, v___x_1149_);
lean_closure_set(v___y_1153_, 8, v_target_1147_);
lean_closure_set(v___y_1153_, 9, v___x_1124_);
lean_closure_set(v___y_1153_, 10, v_fst_1143_);
lean_closure_set(v___y_1153_, 11, v_ty_x3f_1131_);
v___x_1154_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg(v_fst_1143_, v___y_1153_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_);
return v___x_1154_;
}
else
{
lean_object* v_a_1155_; lean_object* v___x_1157_; uint8_t v_isShared_1158_; uint8_t v_isSharedCheck_1162_; 
lean_dec(v_ty_x3f_1131_);
lean_dec(v___x_1129_);
lean_dec(v_x_1114_);
v_a_1155_ = lean_ctor_get(v___x_1140_, 0);
v_isSharedCheck_1162_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1162_ == 0)
{
v___x_1157_ = v___x_1140_;
v_isShared_1158_ = v_isSharedCheck_1162_;
goto v_resetjp_1156_;
}
else
{
lean_inc(v_a_1155_);
lean_dec(v___x_1140_);
v___x_1157_ = lean_box(0);
v_isShared_1158_ = v_isSharedCheck_1162_;
goto v_resetjp_1156_;
}
v_resetjp_1156_:
{
lean_object* v___x_1160_; 
if (v_isShared_1158_ == 0)
{
v___x_1160_ = v___x_1157_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v_a_1155_);
v___x_1160_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
return v___x_1160_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___boxed(lean_object* v_x_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace(v_x_1171_, v_a_1172_, v_a_1173_, v_a_1174_, v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_);
lean_dec(v_a_1179_);
lean_dec_ref(v_a_1178_);
lean_dec(v_a_1177_);
lean_dec_ref(v_a_1176_);
lean_dec(v_a_1175_);
lean_dec_ref(v_a_1174_);
lean_dec(v_a_1173_);
lean_dec_ref(v_a_1172_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0(lean_object* v___x_1184_, lean_object* v_snd_1185_, lean_object* v___x_1186_, lean_object* v___x_1187_, uint8_t v___x_1188_, lean_object* v___x_1189_, lean_object* v_fst_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
if (lean_obj_tag(v___x_1184_) == 1)
{
lean_object* v_val_1200_; lean_object* v___x_1201_; lean_object* v_a_1202_; lean_object* v_focusHyp_1203_; lean_object* v_restHyps_1204_; lean_object* v_proof_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1260_; 
v_val_1200_ = lean_ctor_get(v___x_1184_, 0);
lean_inc(v_val_1200_);
lean_dec_ref_known(v___x_1184_, 1);
v___x_1201_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg(v___y_1198_);
v_a_1202_ = lean_ctor_get(v___x_1201_, 0);
lean_inc(v_a_1202_);
lean_dec_ref(v___x_1201_);
v_focusHyp_1203_ = lean_ctor_get(v_val_1200_, 0);
v_restHyps_1204_ = lean_ctor_get(v_val_1200_, 1);
v_proof_1205_ = lean_ctor_get(v_val_1200_, 2);
v_isSharedCheck_1260_ = !lean_is_exclusive(v_val_1200_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1207_ = v_val_1200_;
v_isShared_1208_ = v_isSharedCheck_1260_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_proof_1205_);
lean_inc(v_restHyps_1204_);
lean_inc(v_focusHyp_1203_);
lean_dec(v_val_1200_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1260_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v_u_1209_; lean_object* v_l_1210_; lean_object* v_cl_1211_; lean_object* v_hyps_1212_; lean_object* v_target_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1259_; 
v_u_1209_ = lean_ctor_get(v_snd_1185_, 0);
v_l_1210_ = lean_ctor_get(v_snd_1185_, 1);
v_cl_1211_ = lean_ctor_get(v_snd_1185_, 2);
v_hyps_1212_ = lean_ctor_get(v_snd_1185_, 3);
v_target_1213_ = lean_ctor_get(v_snd_1185_, 4);
v_isSharedCheck_1259_ = !lean_is_exclusive(v_snd_1185_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1215_ = v_snd_1185_;
v_isShared_1216_ = v_isSharedCheck_1259_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_target_1213_);
lean_inc(v_hyps_1212_);
lean_inc(v_cl_1211_);
lean_inc(v_l_1210_);
lean_inc(v_u_1209_);
lean_dec(v_snd_1185_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1259_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1220_; 
v___x_1217_ = l_Lean_Syntax_getId(v___x_1186_);
v___x_1218_ = l_Lean_Expr_consumeMData(v_focusHyp_1203_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 2, v___x_1218_);
lean_ctor_set(v___x_1207_, 1, v_a_1202_);
lean_ctor_set(v___x_1207_, 0, v___x_1217_);
v___x_1220_ = v___x_1207_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v___x_1217_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v_a_1202_);
lean_ctor_set(v_reuseFailAlloc_1258_, 2, v___x_1218_);
v___x_1220_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
lean_object* v___x_1221_; 
lean_inc_ref(v___x_1220_);
lean_inc_ref(v_cl_1211_);
lean_inc_ref(v_l_1210_);
lean_inc(v_u_1209_);
v___x_1221_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_addHypInfo(v___x_1187_, v_u_1209_, v_l_1210_, v_cl_1211_, v___x_1220_, v___x_1188_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_);
if (lean_obj_tag(v___x_1221_) == 0)
{
lean_object* v___x_1222_; lean_object* v___y_1224_; lean_object* v___x_1256_; 
lean_dec_ref_known(v___x_1221_, 1);
v___x_1222_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_Hyp_toExpr(v___x_1220_);
v___x_1256_ = l_Lean_Level_dec(v_u_1209_);
if (lean_obj_tag(v___x_1256_) == 0)
{
lean_inc(v_u_1209_);
v___y_1224_ = v_u_1209_;
goto v___jp_1223_;
}
else
{
lean_object* v_val_1257_; 
v_val_1257_ = lean_ctor_get(v___x_1256_, 0);
lean_inc(v_val_1257_);
lean_dec_ref_known(v___x_1256_, 1);
v___y_1224_ = v_val_1257_;
goto v___jp_1223_;
}
v___jp_1223_:
{
lean_object* v___x_1225_; lean_object* v___x_1227_; 
lean_inc_ref(v_hyps_1212_);
lean_inc_ref_n(v_cl_1211_, 2);
lean_inc_ref_n(v_l_1210_, 2);
lean_inc(v___y_1224_);
v___x_1225_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd_x21(v___y_1224_, v_l_1210_, v_cl_1211_, v_hyps_1212_, v___x_1222_);
lean_inc_ref(v_target_1213_);
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 3, v___x_1225_);
v___x_1227_ = v___x_1215_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_u_1209_);
lean_ctor_set(v_reuseFailAlloc_1255_, 1, v_l_1210_);
lean_ctor_set(v_reuseFailAlloc_1255_, 2, v_cl_1211_);
lean_ctor_set(v_reuseFailAlloc_1255_, 3, v___x_1225_);
lean_ctor_set(v_reuseFailAlloc_1255_, 4, v_target_1213_);
v___x_1227_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1228_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(v___x_1227_);
v___x_1229_ = lean_box(0);
v___x_1230_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_1228_, v___x_1229_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_);
if (lean_obj_tag(v___x_1230_) == 0)
{
lean_object* v_a_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v_a_1231_ = lean_ctor_get(v___x_1230_, 0);
lean_inc_n(v_a_1231_, 2);
lean_dec_ref_known(v___x_1230_, 1);
v___x_1232_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0));
v___x_1233_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0___closed__0));
v___x_1234_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1));
v___x_1235_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0___closed__1));
v___x_1236_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3));
v___x_1237_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__4));
v___x_1238_ = l_Lean_Name_mkStr7(v___x_1232_, v___x_1233_, v___x_1234_, v___x_1235_, v___x_1189_, v___x_1236_, v___x_1237_);
v___x_1239_ = lean_box(0);
v___x_1240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___y_1224_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
v___x_1241_ = l_Lean_mkConst(v___x_1238_, v___x_1240_);
v___x_1242_ = l_Lean_mkApp8(v___x_1241_, v_l_1210_, v_cl_1211_, v_hyps_1212_, v_restHyps_1204_, v_focusHyp_1203_, v_target_1213_, v_proof_1205_, v_a_1231_);
v___x_1243_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg(v_fst_1190_, v___x_1242_, v___y_1196_);
lean_dec_ref(v___x_1243_);
v___x_1244_ = l_Lean_Expr_mvarId_x21(v_a_1231_);
lean_dec(v_a_1231_);
v___x_1245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1244_);
lean_ctor_set(v___x_1245_, 1, v___x_1239_);
v___x_1246_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1245_, v___y_1192_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_);
return v___x_1246_;
}
else
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
lean_dec(v___y_1224_);
lean_dec_ref(v_target_1213_);
lean_dec_ref(v_hyps_1212_);
lean_dec_ref(v_cl_1211_);
lean_dec_ref(v_l_1210_);
lean_dec_ref(v_proof_1205_);
lean_dec_ref(v_restHyps_1204_);
lean_dec_ref(v_focusHyp_1203_);
lean_dec(v_fst_1190_);
lean_dec_ref(v___x_1189_);
v_a_1247_ = lean_ctor_get(v___x_1230_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1230_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1230_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1252_; 
if (v_isShared_1250_ == 0)
{
v___x_1252_ = v___x_1249_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1247_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_1220_);
lean_del_object(v___x_1215_);
lean_dec_ref(v_target_1213_);
lean_dec_ref(v_hyps_1212_);
lean_dec_ref(v_cl_1211_);
lean_dec_ref(v_l_1210_);
lean_dec(v_u_1209_);
lean_dec_ref(v_proof_1205_);
lean_dec_ref(v_restHyps_1204_);
lean_dec_ref(v_focusHyp_1203_);
lean_dec(v_fst_1190_);
lean_dec_ref(v___x_1189_);
return v___x_1221_;
}
}
}
}
}
else
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
lean_dec(v_fst_1190_);
lean_dec_ref(v___x_1189_);
lean_dec_ref(v_snd_1185_);
lean_dec(v___x_1184_);
v___x_1261_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6);
v___x_1262_ = l_Lean_MessageData_ofSyntax(v___x_1187_);
v___x_1263_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1261_);
lean_ctor_set(v___x_1263_, 1, v___x_1262_);
v___x_1264_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8);
v___x_1265_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1263_);
lean_ctor_set(v___x_1265_, 1, v___x_1264_);
v___x_1266_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg(v___x_1265_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_);
return v___x_1266_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0___boxed(lean_object* v___x_1267_, lean_object* v_snd_1268_, lean_object* v___x_1269_, lean_object* v___x_1270_, lean_object* v___x_1271_, lean_object* v___x_1272_, lean_object* v_fst_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_){
_start:
{
uint8_t v___x_3087__boxed_1283_; lean_object* v_res_1284_; 
v___x_3087__boxed_1283_ = lean_unbox(v___x_1271_);
v_res_1284_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0(v___x_1267_, v_snd_1268_, v___x_1269_, v___x_1270_, v___x_3087__boxed_1283_, v___x_1272_, v_fst_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_dec(v___y_1277_);
lean_dec_ref(v___y_1276_);
lean_dec(v___y_1275_);
lean_dec_ref(v___y_1274_);
lean_dec(v___x_1269_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup(lean_object* v_x_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_, lean_object* v_a_1291_, lean_object* v_a_1292_, lean_object* v_a_1293_){
_start:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; uint8_t v___x_1297_; 
v___x_1295_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2));
v___x_1296_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4));
lean_inc(v_x_1285_);
v___x_1297_ = l_Lean_Syntax_isOfKind(v_x_1285_, v___x_1296_);
if (v___x_1297_ == 0)
{
lean_object* v___x_1298_; 
lean_dec(v_x_1285_);
v___x_1298_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_1298_;
}
else
{
lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; uint8_t v___x_1302_; 
v___x_1299_ = lean_unsigned_to_nat(1u);
v___x_1300_ = l_Lean_Syntax_getArg(v_x_1285_, v___x_1299_);
v___x_1301_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__6));
lean_inc(v___x_1300_);
v___x_1302_ = l_Lean_Syntax_isOfKind(v___x_1300_, v___x_1301_);
if (v___x_1302_ == 0)
{
lean_object* v___x_1303_; 
lean_dec(v___x_1300_);
lean_dec(v_x_1285_);
v___x_1303_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_1303_;
}
else
{
lean_object* v___x_1304_; lean_object* v___x_1305_; uint8_t v___x_1306_; 
v___x_1304_ = lean_unsigned_to_nat(3u);
v___x_1305_ = l_Lean_Syntax_getArg(v_x_1285_, v___x_1304_);
lean_dec(v_x_1285_);
lean_inc(v___x_1305_);
v___x_1306_ = l_Lean_Syntax_isOfKind(v___x_1305_, v___x_1301_);
if (v___x_1306_ == 0)
{
lean_object* v___x_1307_; 
lean_dec(v___x_1305_);
lean_dec(v___x_1300_);
v___x_1307_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_1307_;
}
else
{
lean_object* v___x_1308_; 
v___x_1308_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_ensureMGoal___redArg(v_a_1287_, v_a_1290_, v_a_1291_, v_a_1292_, v_a_1293_);
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1309_; lean_object* v_fst_1310_; lean_object* v_snd_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___y_1315_; lean_object* v___x_1316_; 
v_a_1309_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_a_1309_);
lean_dec_ref_known(v___x_1308_, 1);
v_fst_1310_ = lean_ctor_get(v_a_1309_, 0);
lean_inc_n(v_fst_1310_, 2);
v_snd_1311_ = lean_ctor_get(v_a_1309_, 1);
lean_inc_n(v_snd_1311_, 2);
lean_dec(v_a_1309_);
v___x_1312_ = l_Lean_Syntax_getId(v___x_1300_);
v___x_1313_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_focusHyp(v_snd_1311_, v___x_1312_);
lean_dec(v___x_1312_);
v___x_1314_ = lean_box(v___x_1306_);
v___y_1315_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0___boxed), 16, 7);
lean_closure_set(v___y_1315_, 0, v___x_1313_);
lean_closure_set(v___y_1315_, 1, v_snd_1311_);
lean_closure_set(v___y_1315_, 2, v___x_1305_);
lean_closure_set(v___y_1315_, 3, v___x_1300_);
lean_closure_set(v___y_1315_, 4, v___x_1314_);
lean_closure_set(v___y_1315_, 5, v___x_1295_);
lean_closure_set(v___y_1315_, 6, v_fst_1310_);
v___x_1316_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg(v_fst_1310_, v___y_1315_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_, v_a_1291_, v_a_1292_, v_a_1293_);
return v___x_1316_;
}
else
{
lean_object* v_a_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1324_; 
lean_dec(v___x_1305_);
lean_dec(v___x_1300_);
v_a_1317_ = lean_ctor_get(v___x_1308_, 0);
v_isSharedCheck_1324_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1319_ = v___x_1308_;
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_a_1317_);
lean_dec(v___x_1308_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___boxed(lean_object* v_x_1325_, lean_object* v_a_1326_, lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup(v_x_1325_, v_a_1326_, v_a_1327_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_);
lean_dec(v_a_1333_);
lean_dec_ref(v_a_1332_);
lean_dec(v_a_1331_);
lean_dec_ref(v_a_1330_);
lean_dec(v_a_1329_);
lean_dec_ref(v_a_1328_);
lean_dec(v_a_1327_);
lean_dec_ref(v_a_1326_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave___lam__0(lean_object* v___x_1336_, lean_object* v_u_1337_, lean_object* v_l_1338_, lean_object* v_cl_1339_, uint8_t v___x_1340_, lean_object* v_hyps_1341_, lean_object* v_target_1342_, lean_object* v_fst_1343_, lean_object* v___x_1344_, lean_object* v___x_1345_, lean_object* v_H_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_){
_start:
{
lean_object* v___x_1356_; lean_object* v_a_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1356_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg(v___y_1354_);
v_a_1357_ = lean_ctor_get(v___x_1356_, 0);
lean_inc(v_a_1357_);
lean_dec_ref(v___x_1356_);
v___x_1358_ = l_Lean_Syntax_getId(v___x_1336_);
v___x_1359_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1358_);
lean_ctor_set(v___x_1359_, 1, v_a_1357_);
lean_ctor_set(v___x_1359_, 2, v_H_1346_);
lean_inc_ref(v___x_1359_);
lean_inc_ref(v_cl_1339_);
lean_inc_ref(v_l_1338_);
lean_inc(v_u_1337_);
v___x_1360_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_addHypInfo(v___x_1336_, v_u_1337_, v_l_1338_, v_cl_1339_, v___x_1359_, v___x_1340_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
if (lean_obj_tag(v___x_1360_) == 0)
{
lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1425_; 
v_isSharedCheck_1425_ = !lean_is_exclusive(v___x_1360_);
if (v_isSharedCheck_1425_ == 0)
{
lean_object* v_unused_1426_; 
v_unused_1426_ = lean_ctor_get(v___x_1360_, 0);
lean_dec(v_unused_1426_);
v___x_1362_ = v___x_1360_;
v_isShared_1363_ = v_isSharedCheck_1425_;
goto v_resetjp_1361_;
}
else
{
lean_dec(v___x_1360_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1425_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v___x_1364_; lean_object* v___y_1366_; lean_object* v___y_1367_; lean_object* v___y_1368_; lean_object* v___y_1369_; lean_object* v___y_1370_; lean_object* v___y_1371_; lean_object* v___y_1381_; lean_object* v___x_1423_; 
v___x_1364_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_Hyp_toExpr(v___x_1359_);
v___x_1423_ = l_Lean_Level_dec(v_u_1337_);
if (lean_obj_tag(v___x_1423_) == 0)
{
lean_inc(v_u_1337_);
v___y_1381_ = v_u_1337_;
goto v___jp_1380_;
}
else
{
lean_object* v_val_1424_; 
v_val_1424_ = lean_ctor_get(v___x_1423_, 0);
lean_inc(v_val_1424_);
lean_dec_ref_known(v___x_1423_, 1);
v___y_1381_ = v_val_1424_;
goto v___jp_1380_;
}
v___jp_1365_:
{
lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; 
v___x_1372_ = lean_box(0);
v___x_1373_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1373_, 0, v___y_1371_);
lean_ctor_set(v___x_1373_, 1, v___x_1372_);
v___x_1374_ = l_Lean_mkConst(v___y_1370_, v___x_1373_);
lean_inc_ref(v___y_1367_);
v___x_1375_ = l_Lean_mkApp9(v___x_1374_, v_l_1338_, v_cl_1339_, v_hyps_1341_, v___x_1364_, v___y_1369_, v_target_1342_, v___y_1368_, v___y_1366_, v___y_1367_);
v___x_1376_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg(v_fst_1343_, v___x_1375_, v___y_1352_);
lean_dec_ref(v___x_1376_);
v___x_1377_ = l_Lean_Expr_mvarId_x21(v___y_1367_);
lean_dec_ref(v___y_1367_);
v___x_1378_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1377_);
lean_ctor_set(v___x_1378_, 1, v___x_1372_);
v___x_1379_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1378_, v___y_1348_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
return v___x_1379_;
}
v___jp_1380_:
{
lean_object* v___x_1382_; lean_object* v_fst_1383_; lean_object* v_snd_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1388_; 
lean_inc_ref_n(v___x_1364_, 2);
lean_inc_ref_n(v_hyps_1341_, 2);
lean_inc_ref_n(v_cl_1339_, 2);
lean_inc_ref_n(v_l_1338_, 2);
v___x_1382_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd(v___y_1381_, v_l_1338_, v_cl_1339_, v_hyps_1341_, v___x_1364_);
v_fst_1383_ = lean_ctor_get(v___x_1382_, 0);
lean_inc(v_fst_1383_);
v_snd_1384_ = lean_ctor_get(v___x_1382_, 1);
lean_inc(v_snd_1384_);
lean_dec_ref(v___x_1382_);
lean_inc(v_u_1337_);
v___x_1385_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1385_, 0, v_u_1337_);
lean_ctor_set(v___x_1385_, 1, v_l_1338_);
lean_ctor_set(v___x_1385_, 2, v_cl_1339_);
lean_ctor_set(v___x_1385_, 3, v_hyps_1341_);
lean_ctor_set(v___x_1385_, 4, v___x_1364_);
v___x_1386_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(v___x_1385_);
if (v_isShared_1363_ == 0)
{
lean_ctor_set_tag(v___x_1362_, 1);
lean_ctor_set(v___x_1362_, 0, v___x_1386_);
v___x_1388_ = v___x_1362_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v___x_1386_);
v___x_1388_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
uint8_t v___x_1389_; lean_object* v___x_1390_; 
v___x_1389_ = 0;
v___x_1390_ = l_Lean_Elab_Tactic_elabTermEnsuringType(v___x_1344_, v___x_1388_, v___x_1389_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v_a_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_a_1391_);
lean_dec_ref_known(v___x_1390_, 1);
lean_inc_ref(v_target_1342_);
lean_inc(v_fst_1383_);
lean_inc_ref(v_cl_1339_);
lean_inc_ref(v_l_1338_);
lean_inc(v_u_1337_);
v___x_1392_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1392_, 0, v_u_1337_);
lean_ctor_set(v___x_1392_, 1, v_l_1338_);
lean_ctor_set(v___x_1392_, 2, v_cl_1339_);
lean_ctor_set(v___x_1392_, 3, v_fst_1383_);
lean_ctor_set(v___x_1392_, 4, v_target_1342_);
v___x_1393_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(v___x_1392_);
v___x_1394_ = lean_box(0);
v___x_1395_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_1393_, v___x_1394_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
if (lean_obj_tag(v___x_1395_) == 0)
{
lean_object* v_a_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; 
v_a_1396_ = lean_ctor_get(v___x_1395_, 0);
lean_inc(v_a_1396_);
lean_dec_ref_known(v___x_1395_, 1);
v___x_1397_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0));
v___x_1398_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0___closed__0));
v___x_1399_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1));
v___x_1400_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0___closed__1));
v___x_1401_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3));
v___x_1402_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0___closed__0));
v___x_1403_ = l_Lean_Name_mkStr7(v___x_1397_, v___x_1398_, v___x_1399_, v___x_1400_, v___x_1345_, v___x_1401_, v___x_1402_);
v___x_1404_ = l_Lean_Level_dec(v_u_1337_);
if (lean_obj_tag(v___x_1404_) == 0)
{
v___y_1366_ = v_a_1391_;
v___y_1367_ = v_a_1396_;
v___y_1368_ = v_snd_1384_;
v___y_1369_ = v_fst_1383_;
v___y_1370_ = v___x_1403_;
v___y_1371_ = v_u_1337_;
goto v___jp_1365_;
}
else
{
lean_object* v_val_1405_; 
lean_dec(v_u_1337_);
v_val_1405_ = lean_ctor_get(v___x_1404_, 0);
lean_inc(v_val_1405_);
lean_dec_ref_known(v___x_1404_, 1);
v___y_1366_ = v_a_1391_;
v___y_1367_ = v_a_1396_;
v___y_1368_ = v_snd_1384_;
v___y_1369_ = v_fst_1383_;
v___y_1370_ = v___x_1403_;
v___y_1371_ = v_val_1405_;
goto v___jp_1365_;
}
}
else
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1413_; 
lean_dec(v_a_1391_);
lean_dec(v_snd_1384_);
lean_dec(v_fst_1383_);
lean_dec_ref(v___x_1364_);
lean_dec_ref(v___x_1345_);
lean_dec(v_fst_1343_);
lean_dec_ref(v_target_1342_);
lean_dec_ref(v_hyps_1341_);
lean_dec_ref(v_cl_1339_);
lean_dec_ref(v_l_1338_);
lean_dec(v_u_1337_);
v_a_1406_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1408_ = v___x_1395_;
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1395_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
else
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
lean_dec(v_snd_1384_);
lean_dec(v_fst_1383_);
lean_dec_ref(v___x_1364_);
lean_dec_ref(v___x_1345_);
lean_dec(v_fst_1343_);
lean_dec_ref(v_target_1342_);
lean_dec_ref(v_hyps_1341_);
lean_dec_ref(v_cl_1339_);
lean_dec_ref(v_l_1338_);
lean_dec(v_u_1337_);
v_a_1414_ = lean_ctor_get(v___x_1390_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1416_ = v___x_1390_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___x_1390_);
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
}
}
}
else
{
lean_dec_ref_known(v___x_1359_, 3);
lean_dec_ref(v___x_1345_);
lean_dec(v___x_1344_);
lean_dec(v_fst_1343_);
lean_dec_ref(v_target_1342_);
lean_dec_ref(v_hyps_1341_);
lean_dec_ref(v_cl_1339_);
lean_dec_ref(v_l_1338_);
lean_dec(v_u_1337_);
return v___x_1360_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave___lam__0___boxed(lean_object** _args){
lean_object* v___x_1427_ = _args[0];
lean_object* v_u_1428_ = _args[1];
lean_object* v_l_1429_ = _args[2];
lean_object* v_cl_1430_ = _args[3];
lean_object* v___x_1431_ = _args[4];
lean_object* v_hyps_1432_ = _args[5];
lean_object* v_target_1433_ = _args[6];
lean_object* v_fst_1434_ = _args[7];
lean_object* v___x_1435_ = _args[8];
lean_object* v___x_1436_ = _args[9];
lean_object* v_H_1437_ = _args[10];
lean_object* v___y_1438_ = _args[11];
lean_object* v___y_1439_ = _args[12];
lean_object* v___y_1440_ = _args[13];
lean_object* v___y_1441_ = _args[14];
lean_object* v___y_1442_ = _args[15];
lean_object* v___y_1443_ = _args[16];
lean_object* v___y_1444_ = _args[17];
lean_object* v___y_1445_ = _args[18];
lean_object* v___y_1446_ = _args[19];
_start:
{
uint8_t v___x_3097__boxed_1447_; lean_object* v_res_1448_; 
v___x_3097__boxed_1447_ = lean_unbox(v___x_1431_);
v_res_1448_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave___lam__0(v___x_1427_, v_u_1428_, v_l_1429_, v_cl_1430_, v___x_3097__boxed_1447_, v_hyps_1432_, v_target_1433_, v_fst_1434_, v___x_1435_, v___x_1436_, v_H_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_);
lean_dec(v___y_1445_);
lean_dec_ref(v___y_1444_);
lean_dec(v___y_1443_);
lean_dec_ref(v___y_1442_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
return v_res_1448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave___lam__1(lean_object* v_ty_x3f_1449_, lean_object* v_l_1450_, lean_object* v___f_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_){
_start:
{
if (lean_obj_tag(v_ty_x3f_1449_) == 1)
{
lean_object* v_val_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1480_; 
v_val_1461_ = lean_ctor_get(v_ty_x3f_1449_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v_ty_x3f_1449_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1463_ = v_ty_x3f_1449_;
v_isShared_1464_ = v_isSharedCheck_1480_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_val_1461_);
lean_dec(v_ty_x3f_1449_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1480_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1466_; 
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 0, v_l_1450_);
v___x_1466_ = v___x_1463_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_l_1450_);
v___x_1466_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
uint8_t v___x_1467_; lean_object* v___x_1468_; 
v___x_1467_ = 0;
v___x_1468_ = l_Lean_Elab_Tactic_elabTerm(v_val_1461_, v___x_1466_, v___x_1467_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_object* v_a_1469_; lean_object* v___x_1470_; 
v_a_1469_ = lean_ctor_get(v___x_1468_, 0);
lean_inc(v_a_1469_);
lean_dec_ref_known(v___x_1468_, 1);
lean_inc(v___y_1459_);
lean_inc_ref(v___y_1458_);
lean_inc(v___y_1457_);
lean_inc_ref(v___y_1456_);
lean_inc(v___y_1455_);
lean_inc_ref(v___y_1454_);
lean_inc(v___y_1453_);
lean_inc_ref(v___y_1452_);
v___x_1470_ = lean_apply_10(v___f_1451_, v_a_1469_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, lean_box(0));
return v___x_1470_;
}
else
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1478_; 
lean_dec_ref(v___f_1451_);
v_a_1471_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1473_ = v___x_1468_;
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1468_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1476_; 
if (v_isShared_1474_ == 0)
{
v___x_1476_ = v___x_1473_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v_a_1471_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
return v___x_1476_;
}
}
}
}
}
}
else
{
lean_object* v___x_1481_; uint8_t v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; 
lean_dec(v_ty_x3f_1449_);
v___x_1481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1481_, 0, v_l_1450_);
v___x_1482_ = 0;
v___x_1483_ = lean_box(0);
v___x_1484_ = l_Lean_Meta_mkFreshExprMVar(v___x_1481_, v___x_1482_, v___x_1483_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_);
if (lean_obj_tag(v___x_1484_) == 0)
{
lean_object* v_a_1485_; lean_object* v___x_1486_; 
v_a_1485_ = lean_ctor_get(v___x_1484_, 0);
lean_inc(v_a_1485_);
lean_dec_ref_known(v___x_1484_, 1);
lean_inc(v___y_1459_);
lean_inc_ref(v___y_1458_);
lean_inc(v___y_1457_);
lean_inc_ref(v___y_1456_);
lean_inc(v___y_1455_);
lean_inc_ref(v___y_1454_);
lean_inc(v___y_1453_);
lean_inc_ref(v___y_1452_);
v___x_1486_ = lean_apply_10(v___f_1451_, v_a_1485_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, lean_box(0));
return v___x_1486_;
}
else
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1494_; 
lean_dec_ref(v___f_1451_);
v_a_1487_ = lean_ctor_get(v___x_1484_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1484_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1489_ = v___x_1484_;
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1484_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1492_; 
if (v_isShared_1490_ == 0)
{
v___x_1492_ = v___x_1489_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v_a_1487_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave___lam__1___boxed(lean_object* v_ty_x3f_1495_, lean_object* v_l_1496_, lean_object* v___f_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave___lam__1(v_ty_x3f_1495_, v_l_1496_, v___f_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_);
lean_dec(v___y_1505_);
lean_dec_ref(v___y_1504_);
lean_dec(v___y_1503_);
lean_dec_ref(v___y_1502_);
lean_dec(v___y_1501_);
lean_dec_ref(v___y_1500_);
lean_dec(v___y_1499_);
lean_dec_ref(v___y_1498_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave(lean_object* v_x_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_){
_start:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; uint8_t v___x_1520_; 
v___x_1518_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2));
v___x_1519_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1));
lean_inc(v_x_1508_);
v___x_1520_ = l_Lean_Syntax_isOfKind(v_x_1508_, v___x_1519_);
if (v___x_1520_ == 0)
{
lean_object* v___x_1521_; 
lean_dec(v_x_1508_);
v___x_1521_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_1521_;
}
else
{
lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v_ty_x3f_1525_; lean_object* v___y_1526_; lean_object* v___y_1527_; lean_object* v___y_1528_; lean_object* v___y_1529_; lean_object* v___y_1530_; lean_object* v___y_1531_; lean_object* v___y_1532_; lean_object* v___y_1533_; lean_object* v___x_1557_; lean_object* v___x_1558_; uint8_t v___x_1559_; 
v___x_1522_ = lean_unsigned_to_nat(1u);
v___x_1523_ = l_Lean_Syntax_getArg(v_x_1508_, v___x_1522_);
v___x_1557_ = lean_unsigned_to_nat(2u);
v___x_1558_ = l_Lean_Syntax_getArg(v_x_1508_, v___x_1557_);
v___x_1559_ = l_Lean_Syntax_isNone(v___x_1558_);
if (v___x_1559_ == 0)
{
uint8_t v___x_1560_; 
lean_inc(v___x_1558_);
v___x_1560_ = l_Lean_Syntax_matchesNull(v___x_1558_, v___x_1557_);
if (v___x_1560_ == 0)
{
lean_object* v___x_1561_; 
lean_dec(v___x_1558_);
lean_dec(v___x_1523_);
lean_dec(v_x_1508_);
v___x_1561_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_1561_;
}
else
{
lean_object* v_ty_x3f_1562_; lean_object* v___x_1563_; 
v_ty_x3f_1562_ = l_Lean_Syntax_getArg(v___x_1558_, v___x_1522_);
lean_dec(v___x_1558_);
v___x_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1563_, 0, v_ty_x3f_1562_);
v_ty_x3f_1525_ = v___x_1563_;
v___y_1526_ = v_a_1509_;
v___y_1527_ = v_a_1510_;
v___y_1528_ = v_a_1511_;
v___y_1529_ = v_a_1512_;
v___y_1530_ = v_a_1513_;
v___y_1531_ = v_a_1514_;
v___y_1532_ = v_a_1515_;
v___y_1533_ = v_a_1516_;
goto v___jp_1524_;
}
}
else
{
lean_object* v___x_1564_; 
lean_dec(v___x_1558_);
v___x_1564_ = lean_box(0);
v_ty_x3f_1525_ = v___x_1564_;
v___y_1526_ = v_a_1509_;
v___y_1527_ = v_a_1510_;
v___y_1528_ = v_a_1511_;
v___y_1529_ = v_a_1512_;
v___y_1530_ = v_a_1513_;
v___y_1531_ = v_a_1514_;
v___y_1532_ = v_a_1515_;
v___y_1533_ = v_a_1516_;
goto v___jp_1524_;
}
v___jp_1524_:
{
lean_object* v___x_1534_; 
v___x_1534_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_ensureMGoal___redArg(v___y_1527_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_);
if (lean_obj_tag(v___x_1534_) == 0)
{
lean_object* v_a_1535_; lean_object* v_snd_1536_; lean_object* v_fst_1537_; lean_object* v_u_1538_; lean_object* v_l_1539_; lean_object* v_cl_1540_; lean_object* v_hyps_1541_; lean_object* v_target_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___f_1546_; lean_object* v___y_1547_; lean_object* v___x_1548_; 
v_a_1535_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_a_1535_);
lean_dec_ref_known(v___x_1534_, 1);
v_snd_1536_ = lean_ctor_get(v_a_1535_, 1);
lean_inc(v_snd_1536_);
v_fst_1537_ = lean_ctor_get(v_a_1535_, 0);
lean_inc_n(v_fst_1537_, 2);
lean_dec(v_a_1535_);
v_u_1538_ = lean_ctor_get(v_snd_1536_, 0);
lean_inc(v_u_1538_);
v_l_1539_ = lean_ctor_get(v_snd_1536_, 1);
lean_inc_ref_n(v_l_1539_, 2);
v_cl_1540_ = lean_ctor_get(v_snd_1536_, 2);
lean_inc_ref(v_cl_1540_);
v_hyps_1541_ = lean_ctor_get(v_snd_1536_, 3);
lean_inc_ref(v_hyps_1541_);
v_target_1542_ = lean_ctor_get(v_snd_1536_, 4);
lean_inc_ref(v_target_1542_);
lean_dec(v_snd_1536_);
v___x_1543_ = lean_unsigned_to_nat(4u);
v___x_1544_ = l_Lean_Syntax_getArg(v_x_1508_, v___x_1543_);
lean_dec(v_x_1508_);
v___x_1545_ = lean_box(v___x_1520_);
v___f_1546_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave___lam__0___boxed), 20, 10);
lean_closure_set(v___f_1546_, 0, v___x_1523_);
lean_closure_set(v___f_1546_, 1, v_u_1538_);
lean_closure_set(v___f_1546_, 2, v_l_1539_);
lean_closure_set(v___f_1546_, 3, v_cl_1540_);
lean_closure_set(v___f_1546_, 4, v___x_1545_);
lean_closure_set(v___f_1546_, 5, v_hyps_1541_);
lean_closure_set(v___f_1546_, 6, v_target_1542_);
lean_closure_set(v___f_1546_, 7, v_fst_1537_);
lean_closure_set(v___f_1546_, 8, v___x_1544_);
lean_closure_set(v___f_1546_, 9, v___x_1518_);
v___y_1547_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave___lam__1___boxed), 12, 3);
lean_closure_set(v___y_1547_, 0, v_ty_x3f_1525_);
lean_closure_set(v___y_1547_, 1, v_l_1539_);
lean_closure_set(v___y_1547_, 2, v___f_1546_);
v___x_1548_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg(v_fst_1537_, v___y_1547_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_);
return v___x_1548_;
}
else
{
lean_object* v_a_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1556_; 
lean_dec(v_ty_x3f_1525_);
lean_dec(v___x_1523_);
lean_dec(v_x_1508_);
v_a_1549_ = lean_ctor_get(v___x_1534_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1534_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1551_ = v___x_1534_;
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_a_1549_);
lean_dec(v___x_1534_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
lean_object* v___x_1554_; 
if (v_isShared_1552_ == 0)
{
v___x_1554_ = v___x_1551_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v_a_1549_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave___boxed(lean_object* v_x_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_){
_start:
{
lean_object* v_res_1575_; 
v_res_1575_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave(v_x_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_);
lean_dec(v_a_1573_);
lean_dec_ref(v_a_1572_);
lean_dec(v_a_1571_);
lean_dec_ref(v_a_1570_);
lean_dec(v_a_1569_);
lean_dec_ref(v_a_1568_);
lean_dec(v_a_1567_);
lean_dec_ref(v_a_1566_);
return v_res_1575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMReplace___lam__0(lean_object* v___x_1576_, lean_object* v_l_1577_, lean_object* v_cl_1578_, lean_object* v_hyps_1579_, lean_object* v_target_1580_, lean_object* v_fst_1581_, lean_object* v_u_1582_, lean_object* v___x_1583_, lean_object* v___x_1584_, lean_object* v___x_1585_, uint8_t v___x_1586_, lean_object* v___x_1587_, lean_object* v_ty_x3f_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_){
_start:
{
if (lean_obj_tag(v___x_1576_) == 1)
{
lean_object* v_val_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1745_; 
v_val_1598_ = lean_ctor_get(v___x_1576_, 0);
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1576_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1600_ = v___x_1576_;
v_isShared_1601_ = v_isSharedCheck_1745_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_val_1598_);
lean_dec(v___x_1576_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1745_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v_focusHyp_1602_; lean_object* v_restHyps_1603_; lean_object* v_proof_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1744_; 
v_focusHyp_1602_ = lean_ctor_get(v_val_1598_, 0);
v_restHyps_1603_ = lean_ctor_get(v_val_1598_, 1);
v_proof_1604_ = lean_ctor_get(v_val_1598_, 2);
v_isSharedCheck_1744_ = !lean_is_exclusive(v_val_1598_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1606_ = v_val_1598_;
v_isShared_1607_ = v_isSharedCheck_1744_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_proof_1604_);
lean_inc(v_restHyps_1603_);
lean_inc(v_focusHyp_1602_);
lean_dec(v_val_1598_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1744_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v___y_1609_; lean_object* v___y_1610_; lean_object* v___y_1611_; lean_object* v___y_1612_; lean_object* v___y_1613_; lean_object* v___y_1614_; lean_object* v___y_1615_; lean_object* v___y_1616_; lean_object* v___y_1617_; lean_object* v___y_1618_; lean_object* v___y_1619_; lean_object* v___y_1620_; lean_object* v___y_1644_; lean_object* v___y_1645_; lean_object* v___y_1646_; lean_object* v___y_1647_; lean_object* v___y_1648_; lean_object* v___y_1649_; lean_object* v___y_1650_; lean_object* v___y_1651_; lean_object* v_H_x27_1678_; lean_object* v___y_1679_; lean_object* v___y_1680_; lean_object* v___y_1681_; lean_object* v___y_1682_; lean_object* v___y_1683_; lean_object* v___y_1684_; lean_object* v___y_1685_; lean_object* v___y_1686_; 
if (lean_obj_tag(v_ty_x3f_1588_) == 1)
{
lean_object* v_val_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1730_; 
v_val_1712_ = lean_ctor_get(v_ty_x3f_1588_, 0);
v_isSharedCheck_1730_ = !lean_is_exclusive(v_ty_x3f_1588_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1714_ = v_ty_x3f_1588_;
v_isShared_1715_ = v_isSharedCheck_1730_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_val_1712_);
lean_dec(v_ty_x3f_1588_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1730_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1717_; 
lean_inc_ref(v_l_1577_);
if (v_isShared_1715_ == 0)
{
lean_ctor_set(v___x_1714_, 0, v_l_1577_);
v___x_1717_ = v___x_1714_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_l_1577_);
v___x_1717_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
uint8_t v___x_1718_; lean_object* v___x_1719_; 
v___x_1718_ = 0;
v___x_1719_ = l_Lean_Elab_Tactic_elabTerm(v_val_1712_, v___x_1717_, v___x_1718_, v___y_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_);
if (lean_obj_tag(v___x_1719_) == 0)
{
lean_object* v_a_1720_; 
v_a_1720_ = lean_ctor_get(v___x_1719_, 0);
lean_inc(v_a_1720_);
lean_dec_ref_known(v___x_1719_, 1);
v_H_x27_1678_ = v_a_1720_;
v___y_1679_ = v___y_1589_;
v___y_1680_ = v___y_1590_;
v___y_1681_ = v___y_1591_;
v___y_1682_ = v___y_1592_;
v___y_1683_ = v___y_1593_;
v___y_1684_ = v___y_1594_;
v___y_1685_ = v___y_1595_;
v___y_1686_ = v___y_1596_;
goto v___jp_1677_;
}
else
{
lean_object* v_a_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1728_; 
lean_del_object(v___x_1606_);
lean_dec_ref(v_proof_1604_);
lean_dec_ref(v_restHyps_1603_);
lean_dec_ref(v_focusHyp_1602_);
lean_del_object(v___x_1600_);
lean_dec(v___x_1587_);
lean_dec(v___x_1585_);
lean_dec(v___x_1584_);
lean_dec_ref(v___x_1583_);
lean_dec(v_u_1582_);
lean_dec(v_fst_1581_);
lean_dec_ref(v_target_1580_);
lean_dec_ref(v_hyps_1579_);
lean_dec_ref(v_cl_1578_);
lean_dec_ref(v_l_1577_);
v_a_1721_ = lean_ctor_get(v___x_1719_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1719_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1723_ = v___x_1719_;
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_a_1721_);
lean_dec(v___x_1719_);
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
}
}
else
{
lean_object* v___x_1731_; uint8_t v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
lean_dec(v_ty_x3f_1588_);
lean_inc_ref(v_l_1577_);
v___x_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1731_, 0, v_l_1577_);
v___x_1732_ = 0;
v___x_1733_ = lean_box(0);
v___x_1734_ = l_Lean_Meta_mkFreshExprMVar(v___x_1731_, v___x_1732_, v___x_1733_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_);
if (lean_obj_tag(v___x_1734_) == 0)
{
lean_object* v_a_1735_; 
v_a_1735_ = lean_ctor_get(v___x_1734_, 0);
lean_inc(v_a_1735_);
lean_dec_ref_known(v___x_1734_, 1);
v_H_x27_1678_ = v_a_1735_;
v___y_1679_ = v___y_1589_;
v___y_1680_ = v___y_1590_;
v___y_1681_ = v___y_1591_;
v___y_1682_ = v___y_1592_;
v___y_1683_ = v___y_1593_;
v___y_1684_ = v___y_1594_;
v___y_1685_ = v___y_1595_;
v___y_1686_ = v___y_1596_;
goto v___jp_1677_;
}
else
{
lean_object* v_a_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1743_; 
lean_del_object(v___x_1606_);
lean_dec_ref(v_proof_1604_);
lean_dec_ref(v_restHyps_1603_);
lean_dec_ref(v_focusHyp_1602_);
lean_del_object(v___x_1600_);
lean_dec(v___x_1587_);
lean_dec(v___x_1585_);
lean_dec(v___x_1584_);
lean_dec_ref(v___x_1583_);
lean_dec(v_u_1582_);
lean_dec(v_fst_1581_);
lean_dec_ref(v_target_1580_);
lean_dec_ref(v_hyps_1579_);
lean_dec_ref(v_cl_1578_);
lean_dec_ref(v_l_1577_);
v_a_1736_ = lean_ctor_get(v___x_1734_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v___x_1734_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1738_ = v___x_1734_;
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_a_1736_);
lean_dec(v___x_1734_);
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
v___jp_1608_:
{
lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; 
v___x_1621_ = lean_box(0);
v___x_1622_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1622_, 0, v___y_1620_);
lean_ctor_set(v___x_1622_, 1, v___x_1621_);
v___x_1623_ = l_Lean_mkConst(v___y_1612_, v___x_1622_);
v___x_1624_ = lean_unsigned_to_nat(12u);
v___x_1625_ = lean_mk_empty_array_with_capacity(v___x_1624_);
v___x_1626_ = lean_array_push(v___x_1625_, v_l_1577_);
v___x_1627_ = lean_array_push(v___x_1626_, v_cl_1578_);
v___x_1628_ = lean_array_push(v___x_1627_, v_restHyps_1603_);
v___x_1629_ = lean_array_push(v___x_1628_, v_focusHyp_1602_);
v___x_1630_ = lean_array_push(v___x_1629_, v___y_1610_);
v___x_1631_ = lean_array_push(v___x_1630_, v_hyps_1579_);
v___x_1632_ = lean_array_push(v___x_1631_, v___y_1614_);
v___x_1633_ = lean_array_push(v___x_1632_, v_target_1580_);
v___x_1634_ = lean_array_push(v___x_1633_, v_proof_1604_);
v___x_1635_ = lean_array_push(v___x_1634_, v___y_1609_);
v___x_1636_ = lean_array_push(v___x_1635_, v___y_1618_);
lean_inc_ref(v___y_1611_);
v___x_1637_ = lean_array_push(v___x_1636_, v___y_1611_);
v___x_1638_ = l_Lean_mkAppN(v___x_1623_, v___x_1637_);
lean_dec_ref(v___x_1637_);
v___x_1639_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg(v_fst_1581_, v___x_1638_, v___y_1619_);
lean_dec_ref(v___x_1639_);
v___x_1640_ = l_Lean_Expr_mvarId_x21(v___y_1611_);
lean_dec_ref(v___y_1611_);
v___x_1641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1640_);
lean_ctor_set(v___x_1641_, 1, v___x_1621_);
v___x_1642_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1641_, v___y_1616_, v___y_1617_, v___y_1619_, v___y_1615_, v___y_1613_);
return v___x_1642_;
}
v___jp_1643_:
{
lean_object* v___x_1652_; lean_object* v_fst_1653_; lean_object* v_snd_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
lean_inc_ref(v___y_1644_);
lean_inc_ref(v_restHyps_1603_);
lean_inc_ref_n(v_cl_1578_, 2);
lean_inc_ref_n(v_l_1577_, 2);
v___x_1652_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd(v___y_1651_, v_l_1577_, v_cl_1578_, v_restHyps_1603_, v___y_1644_);
v_fst_1653_ = lean_ctor_get(v___x_1652_, 0);
lean_inc_n(v_fst_1653_, 2);
v_snd_1654_ = lean_ctor_get(v___x_1652_, 1);
lean_inc(v_snd_1654_);
lean_dec_ref(v___x_1652_);
lean_inc_ref(v_target_1580_);
lean_inc(v_u_1582_);
v___x_1655_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1655_, 0, v_u_1582_);
lean_ctor_set(v___x_1655_, 1, v_l_1577_);
lean_ctor_set(v___x_1655_, 2, v_cl_1578_);
lean_ctor_set(v___x_1655_, 3, v_fst_1653_);
lean_ctor_set(v___x_1655_, 4, v_target_1580_);
v___x_1656_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(v___x_1655_);
v___x_1657_ = lean_box(0);
v___x_1658_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_1656_, v___x_1657_, v___y_1648_, v___y_1650_, v___y_1647_, v___y_1645_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_object* v_a_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v_a_1659_ = lean_ctor_get(v___x_1658_, 0);
lean_inc(v_a_1659_);
lean_dec_ref_known(v___x_1658_, 1);
v___x_1660_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0));
v___x_1661_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0___closed__0));
v___x_1662_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1));
v___x_1663_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup___lam__0___closed__1));
v___x_1664_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3));
v___x_1665_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0___closed__0));
v___x_1666_ = l_Lean_Name_mkStr7(v___x_1660_, v___x_1661_, v___x_1662_, v___x_1663_, v___x_1583_, v___x_1664_, v___x_1665_);
v___x_1667_ = l_Lean_Level_dec(v_u_1582_);
if (lean_obj_tag(v___x_1667_) == 0)
{
v___y_1609_ = v_snd_1654_;
v___y_1610_ = v___y_1644_;
v___y_1611_ = v_a_1659_;
v___y_1612_ = v___x_1666_;
v___y_1613_ = v___y_1645_;
v___y_1614_ = v_fst_1653_;
v___y_1615_ = v___y_1647_;
v___y_1616_ = v___y_1646_;
v___y_1617_ = v___y_1648_;
v___y_1618_ = v___y_1649_;
v___y_1619_ = v___y_1650_;
v___y_1620_ = v_u_1582_;
goto v___jp_1608_;
}
else
{
lean_object* v_val_1668_; 
lean_dec(v_u_1582_);
v_val_1668_ = lean_ctor_get(v___x_1667_, 0);
lean_inc(v_val_1668_);
lean_dec_ref_known(v___x_1667_, 1);
v___y_1609_ = v_snd_1654_;
v___y_1610_ = v___y_1644_;
v___y_1611_ = v_a_1659_;
v___y_1612_ = v___x_1666_;
v___y_1613_ = v___y_1645_;
v___y_1614_ = v_fst_1653_;
v___y_1615_ = v___y_1647_;
v___y_1616_ = v___y_1646_;
v___y_1617_ = v___y_1648_;
v___y_1618_ = v___y_1649_;
v___y_1619_ = v___y_1650_;
v___y_1620_ = v_val_1668_;
goto v___jp_1608_;
}
}
else
{
lean_object* v_a_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1676_; 
lean_dec(v_snd_1654_);
lean_dec(v_fst_1653_);
lean_dec_ref(v___y_1649_);
lean_dec_ref(v___y_1644_);
lean_dec_ref(v_proof_1604_);
lean_dec_ref(v_restHyps_1603_);
lean_dec_ref(v_focusHyp_1602_);
lean_dec_ref(v___x_1583_);
lean_dec(v_u_1582_);
lean_dec(v_fst_1581_);
lean_dec_ref(v_target_1580_);
lean_dec_ref(v_hyps_1579_);
lean_dec_ref(v_cl_1578_);
lean_dec_ref(v_l_1577_);
v_a_1669_ = lean_ctor_get(v___x_1658_, 0);
v_isSharedCheck_1676_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1676_ == 0)
{
v___x_1671_ = v___x_1658_;
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_a_1669_);
lean_dec(v___x_1658_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1674_; 
if (v_isShared_1672_ == 0)
{
v___x_1674_ = v___x_1671_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v_a_1669_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
return v___x_1674_;
}
}
}
}
v___jp_1677_:
{
lean_object* v___x_1687_; lean_object* v_a_1688_; lean_object* v___x_1690_; 
v___x_1687_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg(v___y_1686_);
v_a_1688_ = lean_ctor_get(v___x_1687_, 0);
lean_inc(v_a_1688_);
lean_dec_ref(v___x_1687_);
if (v_isShared_1607_ == 0)
{
lean_ctor_set(v___x_1606_, 2, v_H_x27_1678_);
lean_ctor_set(v___x_1606_, 1, v_a_1688_);
lean_ctor_set(v___x_1606_, 0, v___x_1584_);
v___x_1690_ = v___x_1606_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v___x_1584_);
lean_ctor_set(v_reuseFailAlloc_1711_, 1, v_a_1688_);
lean_ctor_set(v_reuseFailAlloc_1711_, 2, v_H_x27_1678_);
v___x_1690_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
lean_object* v___x_1691_; 
lean_inc_ref(v___x_1690_);
lean_inc_ref(v_cl_1578_);
lean_inc_ref(v_l_1577_);
lean_inc(v_u_1582_);
v___x_1691_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_addHypInfo(v___x_1585_, v_u_1582_, v_l_1577_, v_cl_1578_, v___x_1690_, v___x_1586_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1696_; 
lean_dec_ref_known(v___x_1691_, 1);
v___x_1692_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_Hyp_toExpr(v___x_1690_);
lean_inc_ref(v___x_1692_);
lean_inc_ref(v_hyps_1579_);
lean_inc_ref(v_cl_1578_);
lean_inc_ref(v_l_1577_);
lean_inc(v_u_1582_);
v___x_1693_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1693_, 0, v_u_1582_);
lean_ctor_set(v___x_1693_, 1, v_l_1577_);
lean_ctor_set(v___x_1693_, 2, v_cl_1578_);
lean_ctor_set(v___x_1693_, 3, v_hyps_1579_);
lean_ctor_set(v___x_1693_, 4, v___x_1692_);
v___x_1694_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(v___x_1693_);
if (v_isShared_1601_ == 0)
{
lean_ctor_set(v___x_1600_, 0, v___x_1694_);
v___x_1696_ = v___x_1600_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v___x_1694_);
v___x_1696_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
uint8_t v___x_1697_; lean_object* v___x_1698_; 
v___x_1697_ = 0;
v___x_1698_ = l_Lean_Elab_Tactic_elabTermEnsuringType(v___x_1587_, v___x_1696_, v___x_1697_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_);
if (lean_obj_tag(v___x_1698_) == 0)
{
lean_object* v_a_1699_; lean_object* v___x_1700_; 
v_a_1699_ = lean_ctor_get(v___x_1698_, 0);
lean_inc(v_a_1699_);
lean_dec_ref_known(v___x_1698_, 1);
v___x_1700_ = l_Lean_Level_dec(v_u_1582_);
if (lean_obj_tag(v___x_1700_) == 0)
{
lean_inc(v_u_1582_);
v___y_1644_ = v___x_1692_;
v___y_1645_ = v___y_1686_;
v___y_1646_ = v___y_1680_;
v___y_1647_ = v___y_1685_;
v___y_1648_ = v___y_1683_;
v___y_1649_ = v_a_1699_;
v___y_1650_ = v___y_1684_;
v___y_1651_ = v_u_1582_;
goto v___jp_1643_;
}
else
{
lean_object* v_val_1701_; 
v_val_1701_ = lean_ctor_get(v___x_1700_, 0);
lean_inc(v_val_1701_);
lean_dec_ref_known(v___x_1700_, 1);
v___y_1644_ = v___x_1692_;
v___y_1645_ = v___y_1686_;
v___y_1646_ = v___y_1680_;
v___y_1647_ = v___y_1685_;
v___y_1648_ = v___y_1683_;
v___y_1649_ = v_a_1699_;
v___y_1650_ = v___y_1684_;
v___y_1651_ = v_val_1701_;
goto v___jp_1643_;
}
}
else
{
lean_object* v_a_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1709_; 
lean_dec_ref(v___x_1692_);
lean_dec_ref(v_proof_1604_);
lean_dec_ref(v_restHyps_1603_);
lean_dec_ref(v_focusHyp_1602_);
lean_dec_ref(v___x_1583_);
lean_dec(v_u_1582_);
lean_dec(v_fst_1581_);
lean_dec_ref(v_target_1580_);
lean_dec_ref(v_hyps_1579_);
lean_dec_ref(v_cl_1578_);
lean_dec_ref(v_l_1577_);
v_a_1702_ = lean_ctor_get(v___x_1698_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1698_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1704_ = v___x_1698_;
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v___x_1698_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1707_; 
if (v_isShared_1705_ == 0)
{
v___x_1707_ = v___x_1704_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_a_1702_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1690_);
lean_dec_ref(v_proof_1604_);
lean_dec_ref(v_restHyps_1603_);
lean_dec_ref(v_focusHyp_1602_);
lean_del_object(v___x_1600_);
lean_dec(v___x_1587_);
lean_dec_ref(v___x_1583_);
lean_dec(v_u_1582_);
lean_dec(v_fst_1581_);
lean_dec_ref(v_target_1580_);
lean_dec_ref(v_hyps_1579_);
lean_dec_ref(v_cl_1578_);
lean_dec_ref(v_l_1577_);
return v___x_1691_;
}
}
}
}
}
}
else
{
lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
lean_dec(v_ty_x3f_1588_);
lean_dec(v___x_1587_);
lean_dec(v___x_1584_);
lean_dec_ref(v___x_1583_);
lean_dec(v_u_1582_);
lean_dec(v_fst_1581_);
lean_dec_ref(v_target_1580_);
lean_dec_ref(v_hyps_1579_);
lean_dec_ref(v_cl_1578_);
lean_dec_ref(v_l_1577_);
lean_dec(v___x_1576_);
v___x_1746_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6);
v___x_1747_ = l_Lean_MessageData_ofSyntax(v___x_1585_);
v___x_1748_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1748_, 0, v___x_1746_);
lean_ctor_set(v___x_1748_, 1, v___x_1747_);
v___x_1749_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8);
v___x_1750_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1750_, 0, v___x_1748_);
lean_ctor_set(v___x_1750_, 1, v___x_1749_);
v___x_1751_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg(v___x_1750_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_);
return v___x_1751_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMReplace___lam__0___boxed(lean_object** _args){
lean_object* v___x_1752_ = _args[0];
lean_object* v_l_1753_ = _args[1];
lean_object* v_cl_1754_ = _args[2];
lean_object* v_hyps_1755_ = _args[3];
lean_object* v_target_1756_ = _args[4];
lean_object* v_fst_1757_ = _args[5];
lean_object* v_u_1758_ = _args[6];
lean_object* v___x_1759_ = _args[7];
lean_object* v___x_1760_ = _args[8];
lean_object* v___x_1761_ = _args[9];
lean_object* v___x_1762_ = _args[10];
lean_object* v___x_1763_ = _args[11];
lean_object* v_ty_x3f_1764_ = _args[12];
lean_object* v___y_1765_ = _args[13];
lean_object* v___y_1766_ = _args[14];
lean_object* v___y_1767_ = _args[15];
lean_object* v___y_1768_ = _args[16];
lean_object* v___y_1769_ = _args[17];
lean_object* v___y_1770_ = _args[18];
lean_object* v___y_1771_ = _args[19];
lean_object* v___y_1772_ = _args[20];
lean_object* v___y_1773_ = _args[21];
_start:
{
uint8_t v___x_4125__boxed_1774_; lean_object* v_res_1775_; 
v___x_4125__boxed_1774_ = lean_unbox(v___x_1762_);
v_res_1775_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMReplace___lam__0(v___x_1752_, v_l_1753_, v_cl_1754_, v_hyps_1755_, v_target_1756_, v_fst_1757_, v_u_1758_, v___x_1759_, v___x_1760_, v___x_1761_, v___x_4125__boxed_1774_, v___x_1763_, v_ty_x3f_1764_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_);
lean_dec(v___y_1772_);
lean_dec_ref(v___y_1771_);
lean_dec(v___y_1770_);
lean_dec_ref(v___y_1769_);
lean_dec(v___y_1768_);
lean_dec_ref(v___y_1767_);
lean_dec(v___y_1766_);
lean_dec_ref(v___y_1765_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMReplace(lean_object* v_x_1776_, lean_object* v_a_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_){
_start:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; uint8_t v___x_1788_; 
v___x_1786_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2));
v___x_1787_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1));
lean_inc(v_x_1776_);
v___x_1788_ = l_Lean_Syntax_isOfKind(v_x_1776_, v___x_1787_);
if (v___x_1788_ == 0)
{
lean_object* v___x_1789_; 
lean_dec(v_x_1776_);
v___x_1789_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_1789_;
}
else
{
lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v_ty_x3f_1793_; lean_object* v___y_1794_; lean_object* v___y_1795_; lean_object* v___y_1796_; lean_object* v___y_1797_; lean_object* v___y_1798_; lean_object* v___y_1799_; lean_object* v___y_1800_; lean_object* v___y_1801_; lean_object* v___x_1826_; lean_object* v___x_1827_; uint8_t v___x_1828_; 
v___x_1790_ = lean_unsigned_to_nat(1u);
v___x_1791_ = l_Lean_Syntax_getArg(v_x_1776_, v___x_1790_);
v___x_1826_ = lean_unsigned_to_nat(2u);
v___x_1827_ = l_Lean_Syntax_getArg(v_x_1776_, v___x_1826_);
v___x_1828_ = l_Lean_Syntax_isNone(v___x_1827_);
if (v___x_1828_ == 0)
{
uint8_t v___x_1829_; 
lean_inc(v___x_1827_);
v___x_1829_ = l_Lean_Syntax_matchesNull(v___x_1827_, v___x_1826_);
if (v___x_1829_ == 0)
{
lean_object* v___x_1830_; 
lean_dec(v___x_1827_);
lean_dec(v___x_1791_);
lean_dec(v_x_1776_);
v___x_1830_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_1830_;
}
else
{
lean_object* v_ty_x3f_1831_; lean_object* v___x_1832_; 
v_ty_x3f_1831_ = l_Lean_Syntax_getArg(v___x_1827_, v___x_1790_);
lean_dec(v___x_1827_);
v___x_1832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1832_, 0, v_ty_x3f_1831_);
v_ty_x3f_1793_ = v___x_1832_;
v___y_1794_ = v_a_1777_;
v___y_1795_ = v_a_1778_;
v___y_1796_ = v_a_1779_;
v___y_1797_ = v_a_1780_;
v___y_1798_ = v_a_1781_;
v___y_1799_ = v_a_1782_;
v___y_1800_ = v_a_1783_;
v___y_1801_ = v_a_1784_;
goto v___jp_1792_;
}
}
else
{
lean_object* v___x_1833_; 
lean_dec(v___x_1827_);
v___x_1833_ = lean_box(0);
v_ty_x3f_1793_ = v___x_1833_;
v___y_1794_ = v_a_1777_;
v___y_1795_ = v_a_1778_;
v___y_1796_ = v_a_1779_;
v___y_1797_ = v_a_1780_;
v___y_1798_ = v_a_1781_;
v___y_1799_ = v_a_1782_;
v___y_1800_ = v_a_1783_;
v___y_1801_ = v_a_1784_;
goto v___jp_1792_;
}
v___jp_1792_:
{
lean_object* v___x_1802_; 
v___x_1802_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_ensureMGoal___redArg(v___y_1795_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_);
if (lean_obj_tag(v___x_1802_) == 0)
{
lean_object* v_a_1803_; lean_object* v_snd_1804_; lean_object* v_fst_1805_; lean_object* v_u_1806_; lean_object* v_l_1807_; lean_object* v_cl_1808_; lean_object* v_hyps_1809_; lean_object* v_target_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___y_1816_; lean_object* v___x_1817_; 
v_a_1803_ = lean_ctor_get(v___x_1802_, 0);
lean_inc(v_a_1803_);
lean_dec_ref_known(v___x_1802_, 1);
v_snd_1804_ = lean_ctor_get(v_a_1803_, 1);
lean_inc(v_snd_1804_);
v_fst_1805_ = lean_ctor_get(v_a_1803_, 0);
lean_inc_n(v_fst_1805_, 2);
lean_dec(v_a_1803_);
v_u_1806_ = lean_ctor_get(v_snd_1804_, 0);
lean_inc(v_u_1806_);
v_l_1807_ = lean_ctor_get(v_snd_1804_, 1);
lean_inc_ref(v_l_1807_);
v_cl_1808_ = lean_ctor_get(v_snd_1804_, 2);
lean_inc_ref(v_cl_1808_);
v_hyps_1809_ = lean_ctor_get(v_snd_1804_, 3);
lean_inc_ref(v_hyps_1809_);
v_target_1810_ = lean_ctor_get(v_snd_1804_, 4);
lean_inc_ref(v_target_1810_);
v___x_1811_ = lean_unsigned_to_nat(4u);
v___x_1812_ = l_Lean_Syntax_getArg(v_x_1776_, v___x_1811_);
lean_dec(v_x_1776_);
v___x_1813_ = l_Lean_Syntax_getId(v___x_1791_);
v___x_1814_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_focusHyp(v_snd_1804_, v___x_1813_);
v___x_1815_ = lean_box(v___x_1788_);
v___y_1816_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMReplace___lam__0___boxed), 22, 13);
lean_closure_set(v___y_1816_, 0, v___x_1814_);
lean_closure_set(v___y_1816_, 1, v_l_1807_);
lean_closure_set(v___y_1816_, 2, v_cl_1808_);
lean_closure_set(v___y_1816_, 3, v_hyps_1809_);
lean_closure_set(v___y_1816_, 4, v_target_1810_);
lean_closure_set(v___y_1816_, 5, v_fst_1805_);
lean_closure_set(v___y_1816_, 6, v_u_1806_);
lean_closure_set(v___y_1816_, 7, v___x_1786_);
lean_closure_set(v___y_1816_, 8, v___x_1813_);
lean_closure_set(v___y_1816_, 9, v___x_1791_);
lean_closure_set(v___y_1816_, 10, v___x_1815_);
lean_closure_set(v___y_1816_, 11, v___x_1812_);
lean_closure_set(v___y_1816_, 12, v_ty_x3f_1793_);
v___x_1817_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg(v_fst_1805_, v___y_1816_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_);
return v___x_1817_;
}
else
{
lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1825_; 
lean_dec(v_ty_x3f_1793_);
lean_dec(v___x_1791_);
lean_dec(v_x_1776_);
v_a_1818_ = lean_ctor_get(v___x_1802_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1802_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1820_ = v___x_1802_;
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_a_1818_);
lean_dec(v___x_1802_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMReplace___boxed(lean_object* v_x_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_, lean_object* v_a_1837_, lean_object* v_a_1838_, lean_object* v_a_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_){
_start:
{
lean_object* v_res_1844_; 
v_res_1844_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMReplace(v_x_1834_, v_a_1835_, v_a_1836_, v_a_1837_, v_a_1838_, v_a_1839_, v_a_1840_, v_a_1841_, v_a_1842_);
lean_dec(v_a_1842_);
lean_dec_ref(v_a_1841_);
lean_dec(v_a_1840_);
lean_dec_ref(v_a_1839_);
lean_dec(v_a_1838_);
lean_dec_ref(v_a_1837_);
lean_dec(v_a_1836_);
lean_dec_ref(v_a_1835_);
return v_res_1844_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt_spec__0(lean_object* v_opts_1845_, lean_object* v_opt_1846_){
_start:
{
lean_object* v_name_1847_; lean_object* v_defValue_1848_; lean_object* v_map_1849_; lean_object* v___x_1850_; 
v_name_1847_ = lean_ctor_get(v_opt_1846_, 0);
v_defValue_1848_ = lean_ctor_get(v_opt_1846_, 1);
v_map_1849_ = lean_ctor_get(v_opts_1845_, 0);
v___x_1850_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1849_, v_name_1847_);
if (lean_obj_tag(v___x_1850_) == 0)
{
uint8_t v___x_1851_; 
v___x_1851_ = lean_unbox(v_defValue_1848_);
return v___x_1851_;
}
else
{
lean_object* v_val_1852_; 
v_val_1852_ = lean_ctor_get(v___x_1850_, 0);
lean_inc(v_val_1852_);
lean_dec_ref_known(v___x_1850_, 1);
if (lean_obj_tag(v_val_1852_) == 1)
{
uint8_t v_v_1853_; 
v_v_1853_ = lean_ctor_get_uint8(v_val_1852_, 0);
lean_dec_ref_known(v_val_1852_, 0);
return v_v_1853_;
}
else
{
uint8_t v___x_1854_; 
lean_dec(v_val_1852_);
v___x_1854_ = lean_unbox(v_defValue_1848_);
return v___x_1854_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt_spec__0___boxed(lean_object* v_opts_1855_, lean_object* v_opt_1856_){
_start:
{
uint8_t v_res_1857_; lean_object* v_r_1858_; 
v_res_1857_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt_spec__0(v_opts_1855_, v_opt_1856_);
lean_dec_ref(v_opt_1856_);
lean_dec_ref(v_opts_1855_);
v_r_1858_ = lean_box(v_res_1857_);
return v_r_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt(lean_object* v_stx_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_){
_start:
{
lean_object* v_options_1869_; lean_object* v___x_1870_; uint8_t v___x_1871_; 
v_options_1869_ = lean_ctor_get(v_a_1866_, 2);
v___x_1870_ = l_new__wp__monad;
v___x_1871_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt_spec__0(v_options_1869_, v___x_1870_);
if (v___x_1871_ == 0)
{
lean_object* v___x_1872_; 
v___x_1872_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMDup(v_stx_1859_, v_a_1860_, v_a_1861_, v_a_1862_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_);
return v___x_1872_;
}
else
{
lean_object* v___x_1873_; 
v___x_1873_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMDup(v_stx_1859_, v_a_1860_, v_a_1861_, v_a_1862_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_);
return v___x_1873_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___boxed(lean_object* v_stx_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_){
_start:
{
lean_object* v_res_1884_; 
v_res_1884_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt(v_stx_1874_, v_a_1875_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_, v_a_1880_, v_a_1881_, v_a_1882_);
lean_dec(v_a_1882_);
lean_dec_ref(v_a_1881_);
lean_dec(v_a_1880_);
lean_dec_ref(v_a_1879_);
lean_dec(v_a_1878_);
lean_dec_ref(v_a_1877_);
lean_dec(v_a_1876_);
lean_dec_ref(v_a_1875_);
return v_res_1884_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1(){
_start:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1896_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1897_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4));
v___x_1898_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___closed__3));
v___x_1899_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___boxed), 10, 0);
v___x_1900_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1896_, v___x_1897_, v___x_1898_, v___x_1899_);
return v___x_1900_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1___boxed(lean_object* v_a_1901_){
_start:
{
lean_object* v_res_1902_; 
v_res_1902_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1();
return v_res_1902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt(lean_object* v_stx_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_){
_start:
{
lean_object* v_options_1913_; lean_object* v___x_1914_; uint8_t v___x_1915_; 
v_options_1913_ = lean_ctor_get(v_a_1910_, 2);
v___x_1914_ = l_new__wp__monad;
v___x_1915_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt_spec__0(v_options_1913_, v___x_1914_);
if (v___x_1915_ == 0)
{
lean_object* v___x_1916_; 
v___x_1916_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMHave(v_stx_1903_, v_a_1904_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_, v_a_1909_, v_a_1910_, v_a_1911_);
return v___x_1916_;
}
else
{
lean_object* v___x_1917_; 
v___x_1917_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMHave(v_stx_1903_, v_a_1904_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_, v_a_1909_, v_a_1910_, v_a_1911_);
return v___x_1917_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___boxed(lean_object* v_stx_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_, lean_object* v_a_1921_, lean_object* v_a_1922_, lean_object* v_a_1923_, lean_object* v_a_1924_, lean_object* v_a_1925_, lean_object* v_a_1926_, lean_object* v_a_1927_){
_start:
{
lean_object* v_res_1928_; 
v_res_1928_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt(v_stx_1918_, v_a_1919_, v_a_1920_, v_a_1921_, v_a_1922_, v_a_1923_, v_a_1924_, v_a_1925_, v_a_1926_);
lean_dec(v_a_1926_);
lean_dec_ref(v_a_1925_);
lean_dec(v_a_1924_);
lean_dec_ref(v_a_1923_);
lean_dec(v_a_1922_);
lean_dec_ref(v_a_1921_);
lean_dec(v_a_1920_);
lean_dec_ref(v_a_1919_);
return v_res_1928_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1(){
_start:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___x_1938_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1939_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1));
v___x_1940_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___closed__1));
v___x_1941_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___boxed), 10, 0);
v___x_1942_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1938_, v___x_1939_, v___x_1940_, v___x_1941_);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1___boxed(lean_object* v_a_1943_){
_start:
{
lean_object* v_res_1944_; 
v_res_1944_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1();
return v_res_1944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt(lean_object* v_stx_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_){
_start:
{
lean_object* v_options_1955_; lean_object* v___x_1956_; uint8_t v___x_1957_; 
v_options_1955_ = lean_ctor_get(v_a_1952_, 2);
v___x_1956_ = l_new__wp__monad;
v___x_1957_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt_spec__0(v_options_1955_, v___x_1956_);
if (v___x_1957_ == 0)
{
lean_object* v___x_1958_; 
v___x_1958_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace(v_stx_1945_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, v_a_1950_, v_a_1951_, v_a_1952_, v_a_1953_);
return v___x_1958_;
}
else
{
lean_object* v___x_1959_; 
v___x_1959_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMReplace(v_stx_1945_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, v_a_1950_, v_a_1951_, v_a_1952_, v_a_1953_);
return v___x_1959_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___boxed(lean_object* v_stx_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_, lean_object* v_a_1964_, lean_object* v_a_1965_, lean_object* v_a_1966_, lean_object* v_a_1967_, lean_object* v_a_1968_, lean_object* v_a_1969_){
_start:
{
lean_object* v_res_1970_; 
v_res_1970_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt(v_stx_1960_, v_a_1961_, v_a_1962_, v_a_1963_, v_a_1964_, v_a_1965_, v_a_1966_, v_a_1967_, v_a_1968_);
lean_dec(v_a_1968_);
lean_dec_ref(v_a_1967_);
lean_dec(v_a_1966_);
lean_dec_ref(v_a_1965_);
lean_dec(v_a_1964_);
lean_dec_ref(v_a_1963_);
lean_dec(v_a_1962_);
lean_dec_ref(v_a_1961_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1(){
_start:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1980_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1981_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1));
v___x_1982_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___closed__1));
v___x_1983_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___boxed), 10, 0);
v___x_1984_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1980_, v___x_1981_, v___x_1982_, v___x_1983_);
return v___x_1984_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1___boxed(lean_object* v_a_1985_){
_start:
{
lean_object* v_res_1986_; 
v_res_1986_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1();
return v_res_1986_;
}
}
lean_object* runtime_initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Have(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDupOpt__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHaveOpt__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplaceOpt__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Have(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Have(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Have(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Have(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Have(builtin);
}
#ifdef __cplusplus
}
#endif
