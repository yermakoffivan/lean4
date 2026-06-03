// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Basic
// Imports: public import Std.Tactic.Do.Syntax public import Lean.Elab.Tactic.Do.ProofMode.MGoal public import Lean.Elab.Tactic.Do.Options
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
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseMGoal_x3f(lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_instantiate_level_mvars(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_emptyHyp(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
extern lean_object* l_new__wp__monad;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip(lean_object*);
lean_object* l_Lean_MVarId_setType___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_strip(lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "PropAsSPredTautology"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4_value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__5_value),LEAN_SCALAR_PTR_LITERAL(48, 191, 216, 96, 0, 209, 179, 40)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ProofMode"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "start_entails"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4_value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7_value),LEAN_SCALAR_PTR_LITERAL(21, 12, 10, 60, 47, 13, 234, 221)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__8_value),LEAN_SCALAR_PTR_LITERAL(47, 181, 74, 89, 75, 246, 200, 35)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "The goal type of `"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "` is not a proposition. It has type `"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStart(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "not in proof mode"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "CompleteLattice"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 140, 127, 117, 148, 144, 166, 107)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "PropAsCompleteLatticeTautology"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__4_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__6_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__2_value),LEAN_SCALAR_PTR_LITERAL(237, 11, 99, 181, 146, 193, 255, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__6_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__6_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4_value),LEAN_SCALAR_PTR_LITERAL(84, 59, 209, 245, 191, 85, 47, 162)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__6_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__5_value),LEAN_SCALAR_PTR_LITERAL(190, 150, 119, 103, 58, 92, 126, 159)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__4_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__7_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__2_value),LEAN_SCALAR_PTR_LITERAL(237, 11, 99, 181, 146, 193, 255, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__7_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__7_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4_value),LEAN_SCALAR_PTR_LITERAL(84, 59, 209, 245, 191, 85, 47, 162)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__7_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__7_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7_value),LEAN_SCALAR_PTR_LITERAL(90, 115, 204, 0, 69, 33, 244, 92)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__7_value_aux_5),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__8_value),LEAN_SCALAR_PTR_LITERAL(172, 119, 140, 98, 233, 47, 86, 92)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMVar___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMVar___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStart___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStart___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStart(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStart___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mstart"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(12, 72, 234, 250, 239, 149, 139, 165)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "elabMStartOpt"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__5_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__5_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__5_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(215, 213, 204, 138, 121, 152, 246, 78)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mstop"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(186, 209, 80, 25, 253, 26, 68, 170)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabMStopOpt"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__3_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__3_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__3_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(57, 134, 177, 143, 193, 222, 208, 188)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___redArg(lean_object* v_l_1_, lean_object* v___y_2_){
_start:
{
lean_object* v___x_4_; lean_object* v_mctx_5_; lean_object* v___x_6_; lean_object* v_fst_7_; lean_object* v_snd_8_; lean_object* v___x_9_; lean_object* v_cache_10_; lean_object* v_zetaDeltaFVarIds_11_; lean_object* v_postponed_12_; lean_object* v_diag_13_; lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_22_; 
v___x_4_ = lean_st_ref_get(v___y_2_);
v_mctx_5_ = lean_ctor_get(v___x_4_, 0);
lean_inc_ref(v_mctx_5_);
lean_dec(v___x_4_);
v___x_6_ = lean_instantiate_level_mvars(v_mctx_5_, v_l_1_);
v_fst_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_fst_7_);
v_snd_8_ = lean_ctor_get(v___x_6_, 1);
lean_inc(v_snd_8_);
lean_dec_ref(v___x_6_);
v___x_9_ = lean_st_ref_take(v___y_2_);
v_cache_10_ = lean_ctor_get(v___x_9_, 1);
v_zetaDeltaFVarIds_11_ = lean_ctor_get(v___x_9_, 2);
v_postponed_12_ = lean_ctor_get(v___x_9_, 3);
v_diag_13_ = lean_ctor_get(v___x_9_, 4);
v_isSharedCheck_22_ = !lean_is_exclusive(v___x_9_);
if (v_isSharedCheck_22_ == 0)
{
lean_object* v_unused_23_; 
v_unused_23_ = lean_ctor_get(v___x_9_, 0);
lean_dec(v_unused_23_);
v___x_15_ = v___x_9_;
v_isShared_16_ = v_isSharedCheck_22_;
goto v_resetjp_14_;
}
else
{
lean_inc(v_diag_13_);
lean_inc(v_postponed_12_);
lean_inc(v_zetaDeltaFVarIds_11_);
lean_inc(v_cache_10_);
lean_dec(v___x_9_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_22_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
lean_object* v___x_18_; 
if (v_isShared_16_ == 0)
{
lean_ctor_set(v___x_15_, 0, v_fst_7_);
v___x_18_ = v___x_15_;
goto v_reusejp_17_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v_fst_7_);
lean_ctor_set(v_reuseFailAlloc_21_, 1, v_cache_10_);
lean_ctor_set(v_reuseFailAlloc_21_, 2, v_zetaDeltaFVarIds_11_);
lean_ctor_set(v_reuseFailAlloc_21_, 3, v_postponed_12_);
lean_ctor_set(v_reuseFailAlloc_21_, 4, v_diag_13_);
v___x_18_ = v_reuseFailAlloc_21_;
goto v_reusejp_17_;
}
v_reusejp_17_:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_st_ref_set(v___y_2_, v___x_18_);
v___x_20_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_20_, 0, v_snd_8_);
return v___x_20_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___redArg___boxed(lean_object* v_l_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___redArg(v_l_24_, v___y_25_);
lean_dec(v___y_25_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0(lean_object* v_l_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___redArg(v_l_28_, v___y_30_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___boxed(lean_object* v_l_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0(v_l_35_, v___y_36_, v___y_37_, v___y_38_, v___y_39_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
lean_dec(v___y_37_);
lean_dec_ref(v___y_36_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg(lean_object* v_e_42_, lean_object* v___y_43_){
_start:
{
uint8_t v___x_45_; 
v___x_45_ = l_Lean_Expr_hasMVar(v_e_42_);
if (v___x_45_ == 0)
{
lean_object* v___x_46_; 
v___x_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_46_, 0, v_e_42_);
return v___x_46_;
}
else
{
lean_object* v___x_47_; lean_object* v_mctx_48_; lean_object* v___x_49_; lean_object* v_fst_50_; lean_object* v_snd_51_; lean_object* v___x_52_; lean_object* v_cache_53_; lean_object* v_zetaDeltaFVarIds_54_; lean_object* v_postponed_55_; lean_object* v_diag_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_65_; 
v___x_47_ = lean_st_ref_get(v___y_43_);
v_mctx_48_ = lean_ctor_get(v___x_47_, 0);
lean_inc_ref(v_mctx_48_);
lean_dec(v___x_47_);
v___x_49_ = l_Lean_instantiateMVarsCore(v_mctx_48_, v_e_42_);
v_fst_50_ = lean_ctor_get(v___x_49_, 0);
lean_inc(v_fst_50_);
v_snd_51_ = lean_ctor_get(v___x_49_, 1);
lean_inc(v_snd_51_);
lean_dec_ref(v___x_49_);
v___x_52_ = lean_st_ref_take(v___y_43_);
v_cache_53_ = lean_ctor_get(v___x_52_, 1);
v_zetaDeltaFVarIds_54_ = lean_ctor_get(v___x_52_, 2);
v_postponed_55_ = lean_ctor_get(v___x_52_, 3);
v_diag_56_ = lean_ctor_get(v___x_52_, 4);
v_isSharedCheck_65_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_65_ == 0)
{
lean_object* v_unused_66_; 
v_unused_66_ = lean_ctor_get(v___x_52_, 0);
lean_dec(v_unused_66_);
v___x_58_ = v___x_52_;
v_isShared_59_ = v_isSharedCheck_65_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_diag_56_);
lean_inc(v_postponed_55_);
lean_inc(v_zetaDeltaFVarIds_54_);
lean_inc(v_cache_53_);
lean_dec(v___x_52_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_65_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_61_; 
if (v_isShared_59_ == 0)
{
lean_ctor_set(v___x_58_, 0, v_snd_51_);
v___x_61_ = v___x_58_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_snd_51_);
lean_ctor_set(v_reuseFailAlloc_64_, 1, v_cache_53_);
lean_ctor_set(v_reuseFailAlloc_64_, 2, v_zetaDeltaFVarIds_54_);
lean_ctor_set(v_reuseFailAlloc_64_, 3, v_postponed_55_);
lean_ctor_set(v_reuseFailAlloc_64_, 4, v_diag_56_);
v___x_61_ = v_reuseFailAlloc_64_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_st_ref_set(v___y_43_, v___x_61_);
v___x_63_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_63_, 0, v_fst_50_);
return v___x_63_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg___boxed(lean_object* v_e_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg(v_e_67_, v___y_68_);
lean_dec(v___y_68_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1(lean_object* v_e_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg(v_e_71_, v___y_73_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___boxed(lean_object* v_e_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1(v_e_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_);
lean_dec(v___y_82_);
lean_dec_ref(v___y_81_);
lean_dec(v___y_80_);
lean_dec_ref(v___y_79_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart(lean_object* v_goal_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_goal_109_);
if (lean_obj_tag(v___x_115_) == 1)
{
lean_object* v_val_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_125_; 
lean_dec_ref(v_goal_109_);
v_val_116_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_125_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_125_ == 0)
{
v___x_118_ = v___x_115_;
v_isShared_119_ = v_isSharedCheck_125_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_val_116_);
lean_dec(v___x_115_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_125_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_123_; 
v___x_120_ = lean_box(0);
v___x_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_121_, 0, v_val_116_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
if (v_isShared_119_ == 0)
{
lean_ctor_set_tag(v___x_118_, 0);
lean_ctor_set(v___x_118_, 0, v___x_121_);
v___x_123_ = v___x_118_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_121_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
}
else
{
lean_object* v___x_126_; 
lean_dec(v___x_115_);
v___x_126_ = l_Lean_Meta_mkFreshLevelMVar(v_a_110_, v_a_111_, v_a_112_, v_a_113_);
if (lean_obj_tag(v___x_126_) == 0)
{
lean_object* v_a_127_; lean_object* v___x_128_; lean_object* v___x_129_; uint8_t v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v_a_127_ = lean_ctor_get(v___x_126_, 0);
lean_inc_n(v_a_127_, 2);
lean_dec_ref_known(v___x_126_, 1);
v___x_128_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType(v_a_127_);
v___x_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
v___x_130_ = 0;
v___x_131_ = lean_box(0);
v___x_132_ = l_Lean_Meta_mkFreshExprMVar(v___x_129_, v___x_130_, v___x_131_, v_a_110_, v_a_111_, v_a_112_, v_a_113_);
if (lean_obj_tag(v___x_132_) == 0)
{
lean_object* v_a_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v_a_133_ = lean_ctor_get(v___x_132_, 0);
lean_inc_n(v_a_133_, 2);
lean_dec_ref_known(v___x_132_, 1);
v___x_134_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__3));
v___x_135_ = lean_box(0);
lean_inc(v_a_127_);
v___x_136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_136_, 0, v_a_127_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
lean_inc_ref(v___x_136_);
v___x_137_ = l_Lean_mkConst(v___x_134_, v___x_136_);
v___x_138_ = l_Lean_Expr_app___override(v___x_137_, v_a_133_);
v___x_139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
v___x_140_ = l_Lean_Meta_mkFreshExprMVar(v___x_139_, v___x_130_, v___x_131_, v_a_110_, v_a_111_, v_a_112_, v_a_113_);
if (lean_obj_tag(v___x_140_) == 0)
{
lean_object* v_a_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v_a_141_ = lean_ctor_get(v___x_140_, 0);
lean_inc_n(v_a_141_, 2);
lean_dec_ref_known(v___x_140_, 1);
v___x_142_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6));
v___x_143_ = l_Lean_mkConst(v___x_142_, v___x_136_);
lean_inc(v_a_133_);
lean_inc_ref(v_goal_109_);
v___x_144_ = l_Lean_mkApp3(v___x_143_, v_goal_109_, v_a_133_, v_a_141_);
v___x_145_ = lean_box(0);
v___x_146_ = l_Lean_Meta_synthInstance(v___x_144_, v___x_145_, v_a_110_, v_a_111_, v_a_112_, v_a_113_);
if (lean_obj_tag(v___x_146_) == 0)
{
lean_object* v_a_147_; lean_object* v___x_148_; lean_object* v_a_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_172_; 
v_a_147_ = lean_ctor_get(v___x_146_, 0);
lean_inc(v_a_147_);
lean_dec_ref_known(v___x_146_, 1);
v___x_148_ = l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___redArg(v_a_127_, v_a_111_);
v_a_149_ = lean_ctor_get(v___x_148_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v___x_148_);
if (v_isSharedCheck_172_ == 0)
{
v___x_151_ = v___x_148_;
v_isShared_152_ = v_isSharedCheck_172_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_a_149_);
lean_dec(v___x_148_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_172_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v_a_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_171_; 
v___x_153_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9));
lean_inc(v_a_149_);
v___x_154_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_154_, 0, v_a_149_);
lean_ctor_set(v___x_154_, 1, v___x_135_);
v___x_155_ = l_Lean_mkConst(v___x_153_, v___x_154_);
lean_inc(v_a_141_);
lean_inc(v_a_133_);
v___x_156_ = l_Lean_mkApp4(v___x_155_, v_a_133_, v_a_141_, v_goal_109_, v_a_147_);
v___x_157_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg(v_a_141_, v_a_111_);
v_a_158_ = lean_ctor_get(v___x_157_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_171_ == 0)
{
v___x_160_ = v___x_157_;
v_isShared_161_ = v_isSharedCheck_171_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_a_158_);
lean_dec(v___x_157_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_171_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_165_; 
lean_inc(v_a_133_);
lean_inc(v_a_149_);
v___x_162_ = l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp(v_a_149_, v_a_133_);
v___x_163_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_163_, 0, v_a_149_);
lean_ctor_set(v___x_163_, 1, v_a_133_);
lean_ctor_set(v___x_163_, 2, v___x_162_);
lean_ctor_set(v___x_163_, 3, v_a_158_);
if (v_isShared_152_ == 0)
{
lean_ctor_set_tag(v___x_151_, 1);
lean_ctor_set(v___x_151_, 0, v___x_156_);
v___x_165_ = v___x_151_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_156_);
v___x_165_ = v_reuseFailAlloc_170_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
lean_object* v___x_166_; lean_object* v___x_168_; 
v___x_166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_163_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 0, v___x_166_);
v___x_168_ = v___x_160_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_166_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
return v___x_168_;
}
}
}
}
}
else
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_180_; 
lean_dec(v_a_141_);
lean_dec(v_a_133_);
lean_dec(v_a_127_);
lean_dec_ref(v_goal_109_);
v_a_173_ = lean_ctor_get(v___x_146_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_146_);
if (v_isSharedCheck_180_ == 0)
{
v___x_175_ = v___x_146_;
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_146_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_178_; 
if (v_isShared_176_ == 0)
{
v___x_178_ = v___x_175_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_a_173_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
}
else
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_188_; 
lean_dec_ref_known(v___x_136_, 2);
lean_dec(v_a_133_);
lean_dec(v_a_127_);
lean_dec_ref(v_goal_109_);
v_a_181_ = lean_ctor_get(v___x_140_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_188_ == 0)
{
v___x_183_ = v___x_140_;
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_140_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_186_; 
if (v_isShared_184_ == 0)
{
v___x_186_ = v___x_183_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_a_181_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
else
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_196_; 
lean_dec(v_a_127_);
lean_dec_ref(v_goal_109_);
v_a_189_ = lean_ctor_get(v___x_132_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_132_);
if (v_isSharedCheck_196_ == 0)
{
v___x_191_ = v___x_132_;
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v___x_132_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_194_; 
if (v_isShared_192_ == 0)
{
v___x_194_ = v___x_191_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_a_189_);
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
else
{
lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_204_; 
lean_dec_ref(v_goal_109_);
v_a_197_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_204_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_204_ == 0)
{
v___x_199_ = v___x_126_;
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_126_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_202_; 
if (v_isShared_200_ == 0)
{
v___x_202_ = v___x_199_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_a_197_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___boxed(lean_object* v_goal_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lean_Elab_Tactic_Do_ProofMode_mStart(v_goal_205_, v_a_206_, v_a_207_, v_a_208_, v_a_209_);
lean_dec(v_a_209_);
lean_dec_ref(v_a_208_);
lean_dec(v_a_207_);
lean_dec_ref(v_a_206_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___redArg(lean_object* v_mvarId_212_, lean_object* v_x_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_212_, v_x_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_);
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v_a_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_227_; 
v_a_220_ = lean_ctor_get(v___x_219_, 0);
v_isSharedCheck_227_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_227_ == 0)
{
v___x_222_ = v___x_219_;
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_a_220_);
lean_dec(v___x_219_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_225_; 
if (v_isShared_223_ == 0)
{
v___x_225_ = v___x_222_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v_a_220_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
else
{
lean_object* v_a_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_235_; 
v_a_228_ = lean_ctor_get(v___x_219_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_235_ == 0)
{
v___x_230_ = v___x_219_;
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_a_228_);
lean_dec(v___x_219_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_233_; 
if (v_isShared_231_ == 0)
{
v___x_233_ = v___x_230_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v_a_228_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___redArg___boxed(lean_object* v_mvarId_236_, lean_object* v_x_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___redArg(v_mvarId_236_, v_x_237_, v___y_238_, v___y_239_, v___y_240_, v___y_241_);
lean_dec(v___y_241_);
lean_dec_ref(v___y_240_);
lean_dec(v___y_239_);
lean_dec_ref(v___y_238_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2(lean_object* v_00_u03b1_244_, lean_object* v_mvarId_245_, lean_object* v_x_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___redArg(v_mvarId_245_, v_x_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___boxed(lean_object* v_00_u03b1_253_, lean_object* v_mvarId_254_, lean_object* v_x_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2(v_00_u03b1_253_, v_mvarId_254_, v_x_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
lean_dec(v___y_257_);
lean_dec_ref(v___y_256_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5_spec__6___redArg(lean_object* v_x_262_, lean_object* v_x_263_, lean_object* v_x_264_, lean_object* v_x_265_){
_start:
{
lean_object* v_ks_266_; lean_object* v_vs_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_291_; 
v_ks_266_ = lean_ctor_get(v_x_262_, 0);
v_vs_267_ = lean_ctor_get(v_x_262_, 1);
v_isSharedCheck_291_ = !lean_is_exclusive(v_x_262_);
if (v_isSharedCheck_291_ == 0)
{
v___x_269_ = v_x_262_;
v_isShared_270_ = v_isSharedCheck_291_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_vs_267_);
lean_inc(v_ks_266_);
lean_dec(v_x_262_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_291_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_271_ = lean_array_get_size(v_ks_266_);
v___x_272_ = lean_nat_dec_lt(v_x_263_, v___x_271_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_276_; 
lean_dec(v_x_263_);
v___x_273_ = lean_array_push(v_ks_266_, v_x_264_);
v___x_274_ = lean_array_push(v_vs_267_, v_x_265_);
if (v_isShared_270_ == 0)
{
lean_ctor_set(v___x_269_, 1, v___x_274_);
lean_ctor_set(v___x_269_, 0, v___x_273_);
v___x_276_ = v___x_269_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_273_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v___x_274_);
v___x_276_ = v_reuseFailAlloc_277_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
return v___x_276_;
}
}
else
{
lean_object* v_k_x27_278_; uint8_t v___x_279_; 
v_k_x27_278_ = lean_array_fget_borrowed(v_ks_266_, v_x_263_);
v___x_279_ = l_Lean_instBEqMVarId_beq(v_x_264_, v_k_x27_278_);
if (v___x_279_ == 0)
{
lean_object* v___x_281_; 
if (v_isShared_270_ == 0)
{
v___x_281_ = v___x_269_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_ks_266_);
lean_ctor_set(v_reuseFailAlloc_285_, 1, v_vs_267_);
v___x_281_ = v_reuseFailAlloc_285_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = lean_unsigned_to_nat(1u);
v___x_283_ = lean_nat_add(v_x_263_, v___x_282_);
lean_dec(v_x_263_);
v_x_262_ = v___x_281_;
v_x_263_ = v___x_283_;
goto _start;
}
}
else
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_289_; 
v___x_286_ = lean_array_fset(v_ks_266_, v_x_263_, v_x_264_);
v___x_287_ = lean_array_fset(v_vs_267_, v_x_263_, v_x_265_);
lean_dec(v_x_263_);
if (v_isShared_270_ == 0)
{
lean_ctor_set(v___x_269_, 1, v___x_287_);
lean_ctor_set(v___x_269_, 0, v___x_286_);
v___x_289_ = v___x_269_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v___x_286_);
lean_ctor_set(v_reuseFailAlloc_290_, 1, v___x_287_);
v___x_289_ = v_reuseFailAlloc_290_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
return v___x_289_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5___redArg(lean_object* v_n_292_, lean_object* v_k_293_, lean_object* v_v_294_){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = lean_unsigned_to_nat(0u);
v___x_296_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5_spec__6___redArg(v_n_292_, v___x_295_, v_k_293_, v_v_294_);
return v___x_296_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
size_t v___x_297_; size_t v___x_298_; size_t v___x_299_; 
v___x_297_ = ((size_t)5ULL);
v___x_298_ = ((size_t)1ULL);
v___x_299_ = lean_usize_shift_left(v___x_298_, v___x_297_);
return v___x_299_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__1(void){
_start:
{
size_t v___x_300_; size_t v___x_301_; size_t v___x_302_; 
v___x_300_ = ((size_t)1ULL);
v___x_301_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_302_ = lean_usize_sub(v___x_301_, v___x_300_);
return v___x_302_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg(lean_object* v_x_304_, size_t v_x_305_, size_t v_x_306_, lean_object* v_x_307_, lean_object* v_x_308_){
_start:
{
if (lean_obj_tag(v_x_304_) == 0)
{
lean_object* v_es_309_; size_t v___x_310_; size_t v___x_311_; size_t v___x_312_; size_t v___x_313_; lean_object* v_j_314_; lean_object* v___x_315_; uint8_t v___x_316_; 
v_es_309_ = lean_ctor_get(v_x_304_, 0);
v___x_310_ = ((size_t)5ULL);
v___x_311_ = ((size_t)1ULL);
v___x_312_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_313_ = lean_usize_land(v_x_305_, v___x_312_);
v_j_314_ = lean_usize_to_nat(v___x_313_);
v___x_315_ = lean_array_get_size(v_es_309_);
v___x_316_ = lean_nat_dec_lt(v_j_314_, v___x_315_);
if (v___x_316_ == 0)
{
lean_dec(v_j_314_);
lean_dec(v_x_308_);
lean_dec(v_x_307_);
return v_x_304_;
}
else
{
lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_353_; 
lean_inc_ref(v_es_309_);
v_isSharedCheck_353_ = !lean_is_exclusive(v_x_304_);
if (v_isSharedCheck_353_ == 0)
{
lean_object* v_unused_354_; 
v_unused_354_ = lean_ctor_get(v_x_304_, 0);
lean_dec(v_unused_354_);
v___x_318_ = v_x_304_;
v_isShared_319_ = v_isSharedCheck_353_;
goto v_resetjp_317_;
}
else
{
lean_dec(v_x_304_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_353_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v_v_320_; lean_object* v___x_321_; lean_object* v_xs_x27_322_; lean_object* v___y_324_; 
v_v_320_ = lean_array_fget(v_es_309_, v_j_314_);
v___x_321_ = lean_box(0);
v_xs_x27_322_ = lean_array_fset(v_es_309_, v_j_314_, v___x_321_);
switch(lean_obj_tag(v_v_320_))
{
case 0:
{
lean_object* v_key_329_; lean_object* v_val_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_340_; 
v_key_329_ = lean_ctor_get(v_v_320_, 0);
v_val_330_ = lean_ctor_get(v_v_320_, 1);
v_isSharedCheck_340_ = !lean_is_exclusive(v_v_320_);
if (v_isSharedCheck_340_ == 0)
{
v___x_332_ = v_v_320_;
v_isShared_333_ = v_isSharedCheck_340_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_val_330_);
lean_inc(v_key_329_);
lean_dec(v_v_320_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_340_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
uint8_t v___x_334_; 
v___x_334_ = l_Lean_instBEqMVarId_beq(v_x_307_, v_key_329_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; lean_object* v___x_336_; 
lean_del_object(v___x_332_);
v___x_335_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_329_, v_val_330_, v_x_307_, v_x_308_);
v___x_336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
v___y_324_ = v___x_336_;
goto v___jp_323_;
}
else
{
lean_object* v___x_338_; 
lean_dec(v_val_330_);
lean_dec(v_key_329_);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 1, v_x_308_);
lean_ctor_set(v___x_332_, 0, v_x_307_);
v___x_338_ = v___x_332_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_x_307_);
lean_ctor_set(v_reuseFailAlloc_339_, 1, v_x_308_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
v___y_324_ = v___x_338_;
goto v___jp_323_;
}
}
}
}
case 1:
{
lean_object* v_node_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_351_; 
v_node_341_ = lean_ctor_get(v_v_320_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v_v_320_);
if (v_isSharedCheck_351_ == 0)
{
v___x_343_ = v_v_320_;
v_isShared_344_ = v_isSharedCheck_351_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_node_341_);
lean_dec(v_v_320_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_351_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
size_t v___x_345_; size_t v___x_346_; lean_object* v___x_347_; lean_object* v___x_349_; 
v___x_345_ = lean_usize_shift_right(v_x_305_, v___x_310_);
v___x_346_ = lean_usize_add(v_x_306_, v___x_311_);
v___x_347_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg(v_node_341_, v___x_345_, v___x_346_, v_x_307_, v_x_308_);
if (v_isShared_344_ == 0)
{
lean_ctor_set(v___x_343_, 0, v___x_347_);
v___x_349_ = v___x_343_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v___x_347_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
v___y_324_ = v___x_349_;
goto v___jp_323_;
}
}
}
default: 
{
lean_object* v___x_352_; 
v___x_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_352_, 0, v_x_307_);
lean_ctor_set(v___x_352_, 1, v_x_308_);
v___y_324_ = v___x_352_;
goto v___jp_323_;
}
}
v___jp_323_:
{
lean_object* v___x_325_; lean_object* v___x_327_; 
v___x_325_ = lean_array_fset(v_xs_x27_322_, v_j_314_, v___y_324_);
lean_dec(v_j_314_);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 0, v___x_325_);
v___x_327_ = v___x_318_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v___x_325_);
v___x_327_ = v_reuseFailAlloc_328_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
return v___x_327_;
}
}
}
}
}
else
{
lean_object* v_ks_355_; lean_object* v_vs_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_376_; 
v_ks_355_ = lean_ctor_get(v_x_304_, 0);
v_vs_356_ = lean_ctor_get(v_x_304_, 1);
v_isSharedCheck_376_ = !lean_is_exclusive(v_x_304_);
if (v_isSharedCheck_376_ == 0)
{
v___x_358_ = v_x_304_;
v_isShared_359_ = v_isSharedCheck_376_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_vs_356_);
lean_inc(v_ks_355_);
lean_dec(v_x_304_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_376_;
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
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_ks_355_);
lean_ctor_set(v_reuseFailAlloc_375_, 1, v_vs_356_);
v___x_361_ = v_reuseFailAlloc_375_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
lean_object* v_newNode_362_; uint8_t v___y_364_; size_t v___x_370_; uint8_t v___x_371_; 
v_newNode_362_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5___redArg(v___x_361_, v_x_307_, v_x_308_);
v___x_370_ = ((size_t)7ULL);
v___x_371_ = lean_usize_dec_le(v___x_370_, v_x_306_);
if (v___x_371_ == 0)
{
lean_object* v___x_372_; lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_372_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_362_);
v___x_373_ = lean_unsigned_to_nat(4u);
v___x_374_ = lean_nat_dec_lt(v___x_372_, v___x_373_);
lean_dec(v___x_372_);
v___y_364_ = v___x_374_;
goto v___jp_363_;
}
else
{
v___y_364_ = v___x_371_;
goto v___jp_363_;
}
v___jp_363_:
{
if (v___y_364_ == 0)
{
lean_object* v_ks_365_; lean_object* v_vs_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v_ks_365_ = lean_ctor_get(v_newNode_362_, 0);
lean_inc_ref(v_ks_365_);
v_vs_366_ = lean_ctor_get(v_newNode_362_, 1);
lean_inc_ref(v_vs_366_);
lean_dec_ref(v_newNode_362_);
v___x_367_ = lean_unsigned_to_nat(0u);
v___x_368_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__2);
v___x_369_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___redArg(v_x_306_, v_ks_365_, v_vs_366_, v___x_367_, v___x_368_);
lean_dec_ref(v_vs_366_);
lean_dec_ref(v_ks_365_);
return v___x_369_;
}
else
{
return v_newNode_362_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___redArg(size_t v_depth_377_, lean_object* v_keys_378_, lean_object* v_vals_379_, lean_object* v_i_380_, lean_object* v_entries_381_){
_start:
{
lean_object* v___x_382_; uint8_t v___x_383_; 
v___x_382_ = lean_array_get_size(v_keys_378_);
v___x_383_ = lean_nat_dec_lt(v_i_380_, v___x_382_);
if (v___x_383_ == 0)
{
lean_dec(v_i_380_);
return v_entries_381_;
}
else
{
lean_object* v_k_384_; lean_object* v_v_385_; uint64_t v___x_386_; size_t v_h_387_; size_t v___x_388_; lean_object* v___x_389_; size_t v___x_390_; size_t v___x_391_; size_t v___x_392_; size_t v_h_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v_k_384_ = lean_array_fget_borrowed(v_keys_378_, v_i_380_);
v_v_385_ = lean_array_fget_borrowed(v_vals_379_, v_i_380_);
v___x_386_ = l_Lean_instHashableMVarId_hash(v_k_384_);
v_h_387_ = lean_uint64_to_usize(v___x_386_);
v___x_388_ = ((size_t)5ULL);
v___x_389_ = lean_unsigned_to_nat(1u);
v___x_390_ = ((size_t)1ULL);
v___x_391_ = lean_usize_sub(v_depth_377_, v___x_390_);
v___x_392_ = lean_usize_mul(v___x_388_, v___x_391_);
v_h_393_ = lean_usize_shift_right(v_h_387_, v___x_392_);
v___x_394_ = lean_nat_add(v_i_380_, v___x_389_);
lean_dec(v_i_380_);
lean_inc(v_v_385_);
lean_inc(v_k_384_);
v___x_395_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg(v_entries_381_, v_h_393_, v_depth_377_, v_k_384_, v_v_385_);
v_i_380_ = v___x_394_;
v_entries_381_ = v___x_395_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___redArg___boxed(lean_object* v_depth_397_, lean_object* v_keys_398_, lean_object* v_vals_399_, lean_object* v_i_400_, lean_object* v_entries_401_){
_start:
{
size_t v_depth_boxed_402_; lean_object* v_res_403_; 
v_depth_boxed_402_ = lean_unbox_usize(v_depth_397_);
lean_dec(v_depth_397_);
v_res_403_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___redArg(v_depth_boxed_402_, v_keys_398_, v_vals_399_, v_i_400_, v_entries_401_);
lean_dec_ref(v_vals_399_);
lean_dec_ref(v_keys_398_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_404_, lean_object* v_x_405_, lean_object* v_x_406_, lean_object* v_x_407_, lean_object* v_x_408_){
_start:
{
size_t v_x_3527__boxed_409_; size_t v_x_3528__boxed_410_; lean_object* v_res_411_; 
v_x_3527__boxed_409_ = lean_unbox_usize(v_x_405_);
lean_dec(v_x_405_);
v_x_3528__boxed_410_ = lean_unbox_usize(v_x_406_);
lean_dec(v_x_406_);
v_res_411_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg(v_x_404_, v_x_3527__boxed_409_, v_x_3528__boxed_410_, v_x_407_, v_x_408_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0___redArg(lean_object* v_x_412_, lean_object* v_x_413_, lean_object* v_x_414_){
_start:
{
uint64_t v___x_415_; size_t v___x_416_; size_t v___x_417_; lean_object* v___x_418_; 
v___x_415_ = l_Lean_instHashableMVarId_hash(v_x_413_);
v___x_416_ = lean_uint64_to_usize(v___x_415_);
v___x_417_ = ((size_t)1ULL);
v___x_418_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg(v_x_412_, v___x_416_, v___x_417_, v_x_413_, v_x_414_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___redArg(lean_object* v_mvarId_419_, lean_object* v_val_420_, lean_object* v___y_421_){
_start:
{
lean_object* v___x_423_; lean_object* v_mctx_424_; lean_object* v_cache_425_; lean_object* v_zetaDeltaFVarIds_426_; lean_object* v_postponed_427_; lean_object* v_diag_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_456_; 
v___x_423_ = lean_st_ref_take(v___y_421_);
v_mctx_424_ = lean_ctor_get(v___x_423_, 0);
v_cache_425_ = lean_ctor_get(v___x_423_, 1);
v_zetaDeltaFVarIds_426_ = lean_ctor_get(v___x_423_, 2);
v_postponed_427_ = lean_ctor_get(v___x_423_, 3);
v_diag_428_ = lean_ctor_get(v___x_423_, 4);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_456_ == 0)
{
v___x_430_ = v___x_423_;
v_isShared_431_ = v_isSharedCheck_456_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_diag_428_);
lean_inc(v_postponed_427_);
lean_inc(v_zetaDeltaFVarIds_426_);
lean_inc(v_cache_425_);
lean_inc(v_mctx_424_);
lean_dec(v___x_423_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_456_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v_depth_432_; lean_object* v_levelAssignDepth_433_; lean_object* v_lmvarCounter_434_; lean_object* v_mvarCounter_435_; lean_object* v_lDecls_436_; lean_object* v_decls_437_; lean_object* v_userNames_438_; lean_object* v_lAssignment_439_; lean_object* v_eAssignment_440_; lean_object* v_dAssignment_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_455_; 
v_depth_432_ = lean_ctor_get(v_mctx_424_, 0);
v_levelAssignDepth_433_ = lean_ctor_get(v_mctx_424_, 1);
v_lmvarCounter_434_ = lean_ctor_get(v_mctx_424_, 2);
v_mvarCounter_435_ = lean_ctor_get(v_mctx_424_, 3);
v_lDecls_436_ = lean_ctor_get(v_mctx_424_, 4);
v_decls_437_ = lean_ctor_get(v_mctx_424_, 5);
v_userNames_438_ = lean_ctor_get(v_mctx_424_, 6);
v_lAssignment_439_ = lean_ctor_get(v_mctx_424_, 7);
v_eAssignment_440_ = lean_ctor_get(v_mctx_424_, 8);
v_dAssignment_441_ = lean_ctor_get(v_mctx_424_, 9);
v_isSharedCheck_455_ = !lean_is_exclusive(v_mctx_424_);
if (v_isSharedCheck_455_ == 0)
{
v___x_443_ = v_mctx_424_;
v_isShared_444_ = v_isSharedCheck_455_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_dAssignment_441_);
lean_inc(v_eAssignment_440_);
lean_inc(v_lAssignment_439_);
lean_inc(v_userNames_438_);
lean_inc(v_decls_437_);
lean_inc(v_lDecls_436_);
lean_inc(v_mvarCounter_435_);
lean_inc(v_lmvarCounter_434_);
lean_inc(v_levelAssignDepth_433_);
lean_inc(v_depth_432_);
lean_dec(v_mctx_424_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_455_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_445_; lean_object* v___x_447_; 
v___x_445_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0___redArg(v_eAssignment_440_, v_mvarId_419_, v_val_420_);
if (v_isShared_444_ == 0)
{
lean_ctor_set(v___x_443_, 8, v___x_445_);
v___x_447_ = v___x_443_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_depth_432_);
lean_ctor_set(v_reuseFailAlloc_454_, 1, v_levelAssignDepth_433_);
lean_ctor_set(v_reuseFailAlloc_454_, 2, v_lmvarCounter_434_);
lean_ctor_set(v_reuseFailAlloc_454_, 3, v_mvarCounter_435_);
lean_ctor_set(v_reuseFailAlloc_454_, 4, v_lDecls_436_);
lean_ctor_set(v_reuseFailAlloc_454_, 5, v_decls_437_);
lean_ctor_set(v_reuseFailAlloc_454_, 6, v_userNames_438_);
lean_ctor_set(v_reuseFailAlloc_454_, 7, v_lAssignment_439_);
lean_ctor_set(v_reuseFailAlloc_454_, 8, v___x_445_);
lean_ctor_set(v_reuseFailAlloc_454_, 9, v_dAssignment_441_);
v___x_447_ = v_reuseFailAlloc_454_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
lean_object* v___x_449_; 
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 0, v___x_447_);
v___x_449_ = v___x_430_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v___x_447_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v_cache_425_);
lean_ctor_set(v_reuseFailAlloc_453_, 2, v_zetaDeltaFVarIds_426_);
lean_ctor_set(v_reuseFailAlloc_453_, 3, v_postponed_427_);
lean_ctor_set(v_reuseFailAlloc_453_, 4, v_diag_428_);
v___x_449_ = v_reuseFailAlloc_453_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_450_ = lean_st_ref_set(v___y_421_, v___x_449_);
v___x_451_ = lean_box(0);
v___x_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_452_, 0, v___x_451_);
return v___x_452_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___redArg___boxed(lean_object* v_mvarId_457_, lean_object* v_val_458_, lean_object* v___y_459_, lean_object* v___y_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___redArg(v_mvarId_457_, v_val_458_, v___y_459_);
lean_dec(v___y_459_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1_spec__2(lean_object* v_msgData_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_){
_start:
{
lean_object* v___x_468_; lean_object* v_env_469_; lean_object* v___x_470_; lean_object* v_mctx_471_; lean_object* v_lctx_472_; lean_object* v_options_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_468_ = lean_st_ref_get(v___y_466_);
v_env_469_ = lean_ctor_get(v___x_468_, 0);
lean_inc_ref(v_env_469_);
lean_dec(v___x_468_);
v___x_470_ = lean_st_ref_get(v___y_464_);
v_mctx_471_ = lean_ctor_get(v___x_470_, 0);
lean_inc_ref(v_mctx_471_);
lean_dec(v___x_470_);
v_lctx_472_ = lean_ctor_get(v___y_463_, 2);
v_options_473_ = lean_ctor_get(v___y_465_, 2);
lean_inc_ref(v_options_473_);
lean_inc_ref(v_lctx_472_);
v___x_474_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_474_, 0, v_env_469_);
lean_ctor_set(v___x_474_, 1, v_mctx_471_);
lean_ctor_set(v___x_474_, 2, v_lctx_472_);
lean_ctor_set(v___x_474_, 3, v_options_473_);
v___x_475_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_475_, 0, v___x_474_);
lean_ctor_set(v___x_475_, 1, v_msgData_462_);
v___x_476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1_spec__2___boxed(lean_object* v_msgData_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1_spec__2(v_msgData_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_);
lean_dec(v___y_481_);
lean_dec_ref(v___y_480_);
lean_dec(v___y_479_);
lean_dec_ref(v___y_478_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___redArg(lean_object* v_msg_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_){
_start:
{
lean_object* v_ref_490_; lean_object* v___x_491_; lean_object* v_a_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_500_; 
v_ref_490_ = lean_ctor_get(v___y_487_, 5);
v___x_491_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1_spec__2(v_msg_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_);
v_a_492_ = lean_ctor_get(v___x_491_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_500_ == 0)
{
v___x_494_ = v___x_491_;
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_a_492_);
lean_dec(v___x_491_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_496_; lean_object* v___x_498_; 
lean_inc(v_ref_490_);
v___x_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_496_, 0, v_ref_490_);
lean_ctor_set(v___x_496_, 1, v_a_492_);
if (v_isShared_495_ == 0)
{
lean_ctor_set_tag(v___x_494_, 1);
lean_ctor_set(v___x_494_, 0, v___x_496_);
v___x_498_ = v___x_494_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___redArg___boxed(lean_object* v_msg_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___redArg(v_msg_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
return v_res_507_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__1(void){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_509_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__0));
v___x_510_ = l_Lean_stringToMessageData(v___x_509_);
return v___x_510_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__3(void){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__2));
v___x_513_ = l_Lean_stringToMessageData(v___x_512_);
return v___x_513_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__5(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__4));
v___x_516_ = l_Lean_stringToMessageData(v___x_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0(lean_object* v_mvar_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_){
_start:
{
lean_object* v___x_523_; 
lean_inc(v_mvar_517_);
v___x_523_ = l_Lean_MVarId_getType(v_mvar_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
if (lean_obj_tag(v___x_523_) == 0)
{
lean_object* v_a_524_; lean_object* v___x_525_; lean_object* v_a_526_; lean_object* v___y_528_; lean_object* v___y_529_; lean_object* v___y_530_; lean_object* v___y_531_; lean_object* v___x_601_; 
v_a_524_ = lean_ctor_get(v___x_523_, 0);
lean_inc(v_a_524_);
lean_dec_ref_known(v___x_523_, 1);
v___x_525_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg(v_a_524_, v___y_519_);
v_a_526_ = lean_ctor_get(v___x_525_, 0);
lean_inc_n(v_a_526_, 2);
lean_dec_ref(v___x_525_);
v___x_601_ = l_Lean_Meta_isProp(v_a_526_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; uint8_t v___x_603_; 
v_a_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc(v_a_602_);
lean_dec_ref_known(v___x_601_, 1);
v___x_603_ = lean_unbox(v_a_602_);
lean_dec(v_a_602_);
if (v___x_603_ == 0)
{
lean_object* v___x_604_; 
lean_inc(v___y_521_);
lean_inc_ref(v___y_520_);
lean_inc(v___y_519_);
lean_inc_ref(v___y_518_);
v___x_604_ = lean_infer_type(v_a_526_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
if (lean_obj_tag(v___x_604_) == 0)
{
lean_object* v_a_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v_a_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_624_; 
v_a_605_ = lean_ctor_get(v___x_604_, 0);
lean_inc(v_a_605_);
lean_dec_ref_known(v___x_604_, 1);
v___x_606_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__1);
v___x_607_ = l_Lean_mkMVar(v_mvar_517_);
v___x_608_ = l_Lean_MessageData_ofExpr(v___x_607_);
v___x_609_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_609_, 0, v___x_606_);
lean_ctor_set(v___x_609_, 1, v___x_608_);
v___x_610_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__3);
v___x_611_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_609_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
v___x_612_ = l_Lean_MessageData_ofExpr(v_a_605_);
v___x_613_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_613_, 0, v___x_611_);
lean_ctor_set(v___x_613_, 1, v___x_612_);
v___x_614_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__5);
v___x_615_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_615_, 0, v___x_613_);
lean_ctor_set(v___x_615_, 1, v___x_614_);
v___x_616_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___redArg(v___x_615_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
v_a_617_ = lean_ctor_get(v___x_616_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_616_);
if (v_isSharedCheck_624_ == 0)
{
v___x_619_ = v___x_616_;
v_isShared_620_ = v_isSharedCheck_624_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_a_617_);
lean_dec(v___x_616_);
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
else
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_632_; 
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
lean_dec(v_mvar_517_);
v_a_625_ = lean_ctor_get(v___x_604_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_604_);
if (v_isSharedCheck_632_ == 0)
{
v___x_627_ = v___x_604_;
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_604_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
if (v_isShared_628_ == 0)
{
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_a_625_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
else
{
v___y_528_ = v___y_518_;
v___y_529_ = v___y_519_;
v___y_530_ = v___y_520_;
v___y_531_ = v___y_521_;
goto v___jp_527_;
}
}
else
{
lean_object* v_a_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_640_; 
lean_dec(v_a_526_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
lean_dec(v_mvar_517_);
v_a_633_ = lean_ctor_get(v___x_601_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_640_ == 0)
{
v___x_635_ = v___x_601_;
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_a_633_);
lean_dec(v___x_601_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_638_; 
if (v_isShared_636_ == 0)
{
v___x_638_ = v___x_635_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_a_633_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
v___jp_527_:
{
lean_object* v___x_532_; 
v___x_532_ = l_Lean_Elab_Tactic_Do_ProofMode_mStart(v_a_526_, v___y_528_, v___y_529_, v___y_530_, v___y_531_);
if (lean_obj_tag(v___x_532_) == 0)
{
lean_object* v_a_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_592_; 
v_a_533_ = lean_ctor_get(v___x_532_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_592_ == 0)
{
v___x_535_ = v___x_532_;
v_isShared_536_ = v_isSharedCheck_592_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_a_533_);
lean_dec(v___x_532_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_592_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v_proof_x3f_537_; 
v_proof_x3f_537_ = lean_ctor_get(v_a_533_, 1);
if (lean_obj_tag(v_proof_x3f_537_) == 1)
{
lean_object* v_goal_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_578_; 
lean_inc_ref(v_proof_x3f_537_);
lean_del_object(v___x_535_);
v_goal_538_ = lean_ctor_get(v_a_533_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v_a_533_);
if (v_isSharedCheck_578_ == 0)
{
lean_object* v_unused_579_; 
v_unused_579_ = lean_ctor_get(v_a_533_, 1);
lean_dec(v_unused_579_);
v___x_540_ = v_a_533_;
v_isShared_541_ = v_isSharedCheck_578_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_goal_538_);
lean_dec(v_a_533_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_578_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v_val_542_; lean_object* v___x_543_; 
v_val_542_ = lean_ctor_get(v_proof_x3f_537_, 0);
lean_inc(v_val_542_);
lean_dec_ref_known(v_proof_x3f_537_, 1);
lean_inc(v_mvar_517_);
v___x_543_ = l_Lean_MVarId_getTag(v_mvar_517_, v___y_528_, v___y_529_, v___y_530_, v___y_531_);
if (lean_obj_tag(v___x_543_) == 0)
{
lean_object* v_a_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v_a_544_ = lean_ctor_get(v___x_543_, 0);
lean_inc(v_a_544_);
lean_dec_ref_known(v___x_543_, 1);
lean_inc_ref(v_goal_538_);
v___x_545_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v_goal_538_);
v___x_546_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_545_, v_a_544_, v___y_528_, v___y_529_, v___y_530_, v___y_531_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec_ref(v___y_528_);
if (lean_obj_tag(v___x_546_) == 0)
{
lean_object* v_a_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_560_; 
v_a_547_ = lean_ctor_get(v___x_546_, 0);
lean_inc_n(v_a_547_, 2);
lean_dec_ref_known(v___x_546_, 1);
v___x_548_ = l_Lean_Expr_app___override(v_val_542_, v_a_547_);
v___x_549_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___redArg(v_mvar_517_, v___x_548_, v___y_529_);
lean_dec(v___y_529_);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_560_ == 0)
{
lean_object* v_unused_561_; 
v_unused_561_ = lean_ctor_get(v___x_549_, 0);
lean_dec(v_unused_561_);
v___x_551_ = v___x_549_;
v_isShared_552_ = v_isSharedCheck_560_;
goto v_resetjp_550_;
}
else
{
lean_dec(v___x_549_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_560_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_553_; lean_object* v___x_555_; 
v___x_553_ = l_Lean_Expr_mvarId_x21(v_a_547_);
lean_dec(v_a_547_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 1, v_goal_538_);
lean_ctor_set(v___x_540_, 0, v___x_553_);
v___x_555_ = v___x_540_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v___x_553_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v_goal_538_);
v___x_555_ = v_reuseFailAlloc_559_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
lean_object* v___x_557_; 
if (v_isShared_552_ == 0)
{
lean_ctor_set(v___x_551_, 0, v___x_555_);
v___x_557_ = v___x_551_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v___x_555_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
}
else
{
lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_569_; 
lean_dec(v_val_542_);
lean_del_object(v___x_540_);
lean_dec_ref(v_goal_538_);
lean_dec(v___y_529_);
lean_dec(v_mvar_517_);
v_a_562_ = lean_ctor_get(v___x_546_, 0);
v_isSharedCheck_569_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_569_ == 0)
{
v___x_564_ = v___x_546_;
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_546_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
if (v_isShared_565_ == 0)
{
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_a_562_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
}
else
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_577_; 
lean_dec(v_val_542_);
lean_del_object(v___x_540_);
lean_dec_ref(v_goal_538_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec(v___y_529_);
lean_dec_ref(v___y_528_);
lean_dec(v_mvar_517_);
v_a_570_ = lean_ctor_get(v___x_543_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_543_);
if (v_isSharedCheck_577_ == 0)
{
v___x_572_ = v___x_543_;
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v___x_543_);
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
v_reuseFailAlloc_576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_a_570_);
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
else
{
lean_object* v_goal_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_590_; 
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec(v___y_529_);
lean_dec_ref(v___y_528_);
v_goal_580_ = lean_ctor_get(v_a_533_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v_a_533_);
if (v_isSharedCheck_590_ == 0)
{
lean_object* v_unused_591_; 
v_unused_591_ = lean_ctor_get(v_a_533_, 1);
lean_dec(v_unused_591_);
v___x_582_ = v_a_533_;
v_isShared_583_ = v_isSharedCheck_590_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_goal_580_);
lean_dec(v_a_533_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_590_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_585_; 
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 1, v_goal_580_);
lean_ctor_set(v___x_582_, 0, v_mvar_517_);
v___x_585_ = v___x_582_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_mvar_517_);
lean_ctor_set(v_reuseFailAlloc_589_, 1, v_goal_580_);
v___x_585_ = v_reuseFailAlloc_589_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
lean_object* v___x_587_; 
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 0, v___x_585_);
v___x_587_ = v___x_535_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_585_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
}
}
else
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_600_; 
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec(v___y_529_);
lean_dec_ref(v___y_528_);
lean_dec(v_mvar_517_);
v_a_593_ = lean_ctor_get(v___x_532_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_600_ == 0)
{
v___x_595_ = v___x_532_;
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_532_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_598_; 
if (v_isShared_596_ == 0)
{
v___x_598_ = v___x_595_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_a_593_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
}
}
}
else
{
lean_object* v_a_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_648_; 
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
lean_dec(v_mvar_517_);
v_a_641_ = lean_ctor_get(v___x_523_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_648_ == 0)
{
v___x_643_ = v___x_523_;
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_a_641_);
lean_dec(v___x_523_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_646_; 
if (v_isShared_644_ == 0)
{
v___x_646_ = v___x_643_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_a_641_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___boxed(lean_object* v_mvar_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0(v_mvar_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar(lean_object* v_mvar_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_){
_start:
{
lean_object* v___f_662_; lean_object* v___x_663_; 
lean_inc(v_mvar_656_);
v___f_662_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___boxed), 6, 1);
lean_closure_set(v___f_662_, 0, v_mvar_656_);
v___x_663_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___redArg(v_mvar_656_, v___f_662_, v_a_657_, v_a_658_, v_a_659_, v_a_660_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___boxed(lean_object* v_mvar_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar(v_mvar_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_);
lean_dec(v_a_668_);
lean_dec_ref(v_a_667_);
lean_dec(v_a_666_);
lean_dec_ref(v_a_665_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0(lean_object* v_mvarId_671_, lean_object* v_val_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___redArg(v_mvarId_671_, v_val_672_, v___y_674_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___boxed(lean_object* v_mvarId_679_, lean_object* v_val_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0(v_mvarId_679_, v_val_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
lean_dec(v___y_682_);
lean_dec_ref(v___y_681_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1(lean_object* v_00_u03b1_687_, lean_object* v_msg_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_){
_start:
{
lean_object* v___x_694_; 
v___x_694_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___redArg(v_msg_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___boxed(lean_object* v_00_u03b1_695_, lean_object* v_msg_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1(v_00_u03b1_695_, v_msg_696_, v___y_697_, v___y_698_, v___y_699_, v___y_700_);
lean_dec(v___y_700_);
lean_dec_ref(v___y_699_);
lean_dec(v___y_698_);
lean_dec_ref(v___y_697_);
return v_res_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0(lean_object* v_00_u03b2_703_, lean_object* v_x_704_, lean_object* v_x_705_, lean_object* v_x_706_){
_start:
{
lean_object* v___x_707_; 
v___x_707_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0___redArg(v_x_704_, v_x_705_, v_x_706_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_708_, lean_object* v_x_709_, size_t v_x_710_, size_t v_x_711_, lean_object* v_x_712_, lean_object* v_x_713_){
_start:
{
lean_object* v___x_714_; 
v___x_714_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg(v_x_709_, v_x_710_, v_x_711_, v_x_712_, v_x_713_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_715_, lean_object* v_x_716_, lean_object* v_x_717_, lean_object* v_x_718_, lean_object* v_x_719_, lean_object* v_x_720_){
_start:
{
size_t v_x_4149__boxed_721_; size_t v_x_4150__boxed_722_; lean_object* v_res_723_; 
v_x_4149__boxed_721_ = lean_unbox_usize(v_x_717_);
lean_dec(v_x_717_);
v_x_4150__boxed_722_ = lean_unbox_usize(v_x_718_);
lean_dec(v_x_718_);
v_res_723_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2(v_00_u03b2_715_, v_x_716_, v_x_4149__boxed_721_, v_x_4150__boxed_722_, v_x_719_, v_x_720_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_724_, lean_object* v_n_725_, lean_object* v_k_726_, lean_object* v_v_727_){
_start:
{
lean_object* v___x_728_; 
v___x_728_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5___redArg(v_n_725_, v_k_726_, v_v_727_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_729_, size_t v_depth_730_, lean_object* v_keys_731_, lean_object* v_vals_732_, lean_object* v_heq_733_, lean_object* v_i_734_, lean_object* v_entries_735_){
_start:
{
lean_object* v___x_736_; 
v___x_736_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___redArg(v_depth_730_, v_keys_731_, v_vals_732_, v_i_734_, v_entries_735_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___boxed(lean_object* v_00_u03b2_737_, lean_object* v_depth_738_, lean_object* v_keys_739_, lean_object* v_vals_740_, lean_object* v_heq_741_, lean_object* v_i_742_, lean_object* v_entries_743_){
_start:
{
size_t v_depth_boxed_744_; lean_object* v_res_745_; 
v_depth_boxed_744_ = lean_unbox_usize(v_depth_738_);
lean_dec(v_depth_738_);
v_res_745_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6(v_00_u03b2_737_, v_depth_boxed_744_, v_keys_739_, v_vals_740_, v_heq_741_, v_i_742_, v_entries_743_);
lean_dec_ref(v_vals_740_);
lean_dec_ref(v_keys_739_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5_spec__6(lean_object* v_00_u03b2_746_, lean_object* v_x_747_, lean_object* v_x_748_, lean_object* v_x_749_, lean_object* v_x_750_){
_start:
{
lean_object* v___x_751_; 
v___x_751_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5_spec__6___redArg(v_x_747_, v_x_748_, v_x_749_, v_x_750_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_752_, v_a_753_, v_a_754_, v_a_755_, v_a_756_);
if (lean_obj_tag(v___x_758_) == 0)
{
lean_object* v_a_759_; lean_object* v___x_760_; 
v_a_759_ = lean_ctor_get(v___x_758_, 0);
lean_inc(v_a_759_);
lean_dec_ref_known(v___x_758_, 1);
v___x_760_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar(v_a_759_, v_a_753_, v_a_754_, v_a_755_, v_a_756_);
if (lean_obj_tag(v___x_760_) == 0)
{
lean_object* v_a_761_; lean_object* v_fst_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v_a_761_ = lean_ctor_get(v___x_760_, 0);
lean_inc(v_a_761_);
lean_dec_ref_known(v___x_760_, 1);
v_fst_762_ = lean_ctor_get(v_a_761_, 0);
v___x_763_ = lean_box(0);
lean_inc(v_fst_762_);
v___x_764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_764_, 0, v_fst_762_);
lean_ctor_set(v___x_764_, 1, v___x_763_);
v___x_765_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_764_, v_a_752_, v_a_753_, v_a_754_, v_a_755_, v_a_756_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_772_; 
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_772_ == 0)
{
lean_object* v_unused_773_; 
v_unused_773_ = lean_ctor_get(v___x_765_, 0);
lean_dec(v_unused_773_);
v___x_767_ = v___x_765_;
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
else
{
lean_dec(v___x_765_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 0, v_a_761_);
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_a_761_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
else
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_781_; 
lean_dec(v_a_761_);
v_a_774_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_781_ == 0)
{
v___x_776_ = v___x_765_;
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_765_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_779_; 
if (v_isShared_777_ == 0)
{
v___x_779_ = v___x_776_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_a_774_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
}
}
else
{
return v___x_760_;
}
}
else
{
lean_object* v_a_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_789_; 
v_a_782_ = lean_ctor_get(v___x_758_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_789_ == 0)
{
v___x_784_ = v___x_758_;
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_a_782_);
lean_dec(v___x_758_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_787_; 
if (v_isShared_785_ == 0)
{
v___x_787_ = v___x_784_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_a_782_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg___boxed(lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(v_a_790_, v_a_791_, v_a_792_, v_a_793_, v_a_794_);
lean_dec(v_a_794_);
lean_dec_ref(v_a_793_);
lean_dec(v_a_792_);
lean_dec_ref(v_a_791_);
lean_dec(v_a_790_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal(lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_){
_start:
{
lean_object* v___x_806_; 
v___x_806_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(v_a_798_, v_a_801_, v_a_802_, v_a_803_, v_a_804_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___boxed(lean_object* v_a_807_, lean_object* v_a_808_, lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal(v_a_807_, v_a_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_, v_a_814_);
lean_dec(v_a_814_);
lean_dec_ref(v_a_813_);
lean_dec(v_a_812_);
lean_dec_ref(v_a_811_);
lean_dec(v_a_810_);
lean_dec_ref(v_a_809_);
lean_dec(v_a_808_);
lean_dec_ref(v_a_807_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___redArg(lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_){
_start:
{
lean_object* v___x_823_; 
v___x_823_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(v_a_817_, v_a_818_, v_a_819_, v_a_820_, v_a_821_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_831_; 
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_831_ == 0)
{
lean_object* v_unused_832_; 
v_unused_832_ = lean_ctor_get(v___x_823_, 0);
lean_dec(v_unused_832_);
v___x_825_ = v___x_823_;
v_isShared_826_ = v_isSharedCheck_831_;
goto v_resetjp_824_;
}
else
{
lean_dec(v___x_823_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_831_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_827_; lean_object* v___x_829_; 
v___x_827_ = lean_box(0);
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 0, v___x_827_);
v___x_829_ = v___x_825_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v___x_827_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
else
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_840_; 
v_a_833_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_840_ == 0)
{
v___x_835_ = v___x_823_;
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_823_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___redArg___boxed(lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_, lean_object* v_a_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___redArg(v_a_841_, v_a_842_, v_a_843_, v_a_844_, v_a_845_);
lean_dec(v_a_845_);
lean_dec_ref(v_a_844_);
lean_dec(v_a_843_);
lean_dec_ref(v_a_842_);
lean_dec(v_a_841_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStart(lean_object* v_x_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_){
_start:
{
lean_object* v___x_858_; 
v___x_858_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___redArg(v_a_850_, v_a_853_, v_a_854_, v_a_855_, v_a_856_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___boxed(lean_object* v_x_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStart(v_x_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_, v_a_864_, v_a_865_, v_a_866_, v_a_867_);
lean_dec(v_a_867_);
lean_dec_ref(v_a_866_);
lean_dec(v_a_865_);
lean_dec_ref(v_a_864_);
lean_dec(v_a_863_);
lean_dec_ref(v_a_862_);
lean_dec(v_a_861_);
lean_dec_ref(v_a_860_);
lean_dec(v_x_859_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___redArg(lean_object* v_e_870_, lean_object* v___y_871_){
_start:
{
uint8_t v___x_873_; 
v___x_873_ = l_Lean_Expr_hasMVar(v_e_870_);
if (v___x_873_ == 0)
{
lean_object* v___x_874_; 
v___x_874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_874_, 0, v_e_870_);
return v___x_874_;
}
else
{
lean_object* v___x_875_; lean_object* v_mctx_876_; lean_object* v___x_877_; lean_object* v_fst_878_; lean_object* v_snd_879_; lean_object* v___x_880_; lean_object* v_cache_881_; lean_object* v_zetaDeltaFVarIds_882_; lean_object* v_postponed_883_; lean_object* v_diag_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_893_; 
v___x_875_ = lean_st_ref_get(v___y_871_);
v_mctx_876_ = lean_ctor_get(v___x_875_, 0);
lean_inc_ref(v_mctx_876_);
lean_dec(v___x_875_);
v___x_877_ = l_Lean_instantiateMVarsCore(v_mctx_876_, v_e_870_);
v_fst_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_fst_878_);
v_snd_879_ = lean_ctor_get(v___x_877_, 1);
lean_inc(v_snd_879_);
lean_dec_ref(v___x_877_);
v___x_880_ = lean_st_ref_take(v___y_871_);
v_cache_881_ = lean_ctor_get(v___x_880_, 1);
v_zetaDeltaFVarIds_882_ = lean_ctor_get(v___x_880_, 2);
v_postponed_883_ = lean_ctor_get(v___x_880_, 3);
v_diag_884_ = lean_ctor_get(v___x_880_, 4);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_893_ == 0)
{
lean_object* v_unused_894_; 
v_unused_894_ = lean_ctor_get(v___x_880_, 0);
lean_dec(v_unused_894_);
v___x_886_ = v___x_880_;
v_isShared_887_ = v_isSharedCheck_893_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_diag_884_);
lean_inc(v_postponed_883_);
lean_inc(v_zetaDeltaFVarIds_882_);
lean_inc(v_cache_881_);
lean_dec(v___x_880_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_893_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_889_; 
if (v_isShared_887_ == 0)
{
lean_ctor_set(v___x_886_, 0, v_snd_879_);
v___x_889_ = v___x_886_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_snd_879_);
lean_ctor_set(v_reuseFailAlloc_892_, 1, v_cache_881_);
lean_ctor_set(v_reuseFailAlloc_892_, 2, v_zetaDeltaFVarIds_882_);
lean_ctor_set(v_reuseFailAlloc_892_, 3, v_postponed_883_);
lean_ctor_set(v_reuseFailAlloc_892_, 4, v_diag_884_);
v___x_889_ = v_reuseFailAlloc_892_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_890_ = lean_st_ref_set(v___y_871_, v___x_889_);
v___x_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_891_, 0, v_fst_878_);
return v___x_891_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___redArg___boxed(lean_object* v_e_895_, lean_object* v___y_896_, lean_object* v___y_897_){
_start:
{
lean_object* v_res_898_; 
v_res_898_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___redArg(v_e_895_, v___y_896_);
lean_dec(v___y_896_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0(lean_object* v_e_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_){
_start:
{
lean_object* v___x_909_; 
v___x_909_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___redArg(v_e_899_, v___y_905_);
return v___x_909_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___boxed(lean_object* v_e_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0(v_e_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
lean_dec(v___y_916_);
lean_dec_ref(v___y_915_);
lean_dec(v___y_914_);
lean_dec_ref(v___y_913_);
lean_dec(v___y_912_);
lean_dec_ref(v___y_911_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg___lam__0(lean_object* v_x_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
lean_object* v___x_931_; 
lean_inc(v___y_925_);
lean_inc_ref(v___y_924_);
lean_inc(v___y_923_);
lean_inc_ref(v___y_922_);
v___x_931_ = lean_apply_9(v_x_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, lean_box(0));
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg___lam__0___boxed(lean_object* v_x_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg___lam__0(v_x_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
lean_dec(v___y_936_);
lean_dec_ref(v___y_935_);
lean_dec(v___y_934_);
lean_dec_ref(v___y_933_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg(lean_object* v_mvarId_943_, lean_object* v_x_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_){
_start:
{
lean_object* v___f_954_; lean_object* v___x_955_; 
lean_inc(v___y_948_);
lean_inc_ref(v___y_947_);
lean_inc(v___y_946_);
lean_inc_ref(v___y_945_);
v___f_954_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_954_, 0, v_x_944_);
lean_closure_set(v___f_954_, 1, v___y_945_);
lean_closure_set(v___f_954_, 2, v___y_946_);
lean_closure_set(v___f_954_, 3, v___y_947_);
lean_closure_set(v___f_954_, 4, v___y_948_);
v___x_955_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_943_, v___f_954_, v___y_949_, v___y_950_, v___y_951_, v___y_952_);
if (lean_obj_tag(v___x_955_) == 0)
{
return v___x_955_;
}
else
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
v_a_956_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_955_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_955_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_956_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg___boxed(lean_object* v_mvarId_964_, lean_object* v_x_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg(v_mvarId_964_, v_x_965_, v___y_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
lean_dec(v___y_971_);
lean_dec_ref(v___y_970_);
lean_dec(v___y_969_);
lean_dec_ref(v___y_968_);
lean_dec(v___y_967_);
lean_dec_ref(v___y_966_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2(lean_object* v_00_u03b1_976_, lean_object* v_mvarId_977_, lean_object* v_x_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_){
_start:
{
lean_object* v___x_988_; 
v___x_988_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg(v_mvarId_977_, v_x_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___boxed(lean_object* v_00_u03b1_989_, lean_object* v_mvarId_990_, lean_object* v_x_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2(v_00_u03b1_989_, v_mvarId_990_, v_x_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_);
lean_dec(v___y_999_);
lean_dec_ref(v___y_998_);
lean_dec(v___y_997_);
lean_dec_ref(v___y_996_);
lean_dec(v___y_995_);
lean_dec_ref(v___y_994_);
lean_dec(v___y_993_);
lean_dec_ref(v___y_992_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___redArg(lean_object* v_msg_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v_ref_1008_; lean_object* v___x_1009_; lean_object* v_a_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1018_; 
v_ref_1008_ = lean_ctor_get(v___y_1005_, 5);
v___x_1009_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1_spec__2(v_msg_1002_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_);
v_a_1010_ = lean_ctor_get(v___x_1009_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1012_ = v___x_1009_;
v_isShared_1013_ = v_isSharedCheck_1018_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_a_1010_);
lean_dec(v___x_1009_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1018_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1014_; lean_object* v___x_1016_; 
lean_inc(v_ref_1008_);
v___x_1014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1014_, 0, v_ref_1008_);
lean_ctor_set(v___x_1014_, 1, v_a_1010_);
if (v_isShared_1013_ == 0)
{
lean_ctor_set_tag(v___x_1012_, 1);
lean_ctor_set(v___x_1012_, 0, v___x_1014_);
v___x_1016_ = v___x_1012_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v___x_1014_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___redArg___boxed(lean_object* v_msg_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_){
_start:
{
lean_object* v_res_1025_; 
v_res_1025_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___redArg(v_msg_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_);
lean_dec(v___y_1023_);
lean_dec_ref(v___y_1022_);
lean_dec(v___y_1021_);
lean_dec_ref(v___y_1020_);
return v_res_1025_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1027_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__0));
v___x_1028_ = l_Lean_stringToMessageData(v___x_1027_);
return v___x_1028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0(lean_object* v_a_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_){
_start:
{
lean_object* v___x_1039_; 
lean_inc(v_a_1029_);
v___x_1039_ = l_Lean_MVarId_getType(v_a_1029_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_);
if (lean_obj_tag(v___x_1039_) == 0)
{
lean_object* v_a_1040_; lean_object* v___x_1041_; lean_object* v_a_1042_; lean_object* v___x_1043_; 
v_a_1040_ = lean_ctor_get(v___x_1039_, 0);
lean_inc(v_a_1040_);
lean_dec_ref_known(v___x_1039_, 1);
v___x_1041_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___redArg(v_a_1040_, v___y_1035_);
v_a_1042_ = lean_ctor_get(v___x_1041_, 0);
lean_inc(v_a_1042_);
lean_dec_ref(v___x_1041_);
v___x_1043_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_a_1042_);
lean_dec(v_a_1042_);
if (lean_obj_tag(v___x_1043_) == 1)
{
lean_object* v_val_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; 
v_val_1044_ = lean_ctor_get(v___x_1043_, 0);
lean_inc(v_val_1044_);
lean_dec_ref_known(v___x_1043_, 1);
v___x_1045_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip(v_val_1044_);
v___x_1046_ = l_Lean_MVarId_setType___redArg(v_a_1029_, v___x_1045_, v___y_1035_);
return v___x_1046_;
}
else
{
lean_object* v___x_1047_; lean_object* v___x_1048_; 
lean_dec(v___x_1043_);
lean_dec(v_a_1029_);
v___x_1047_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__1);
v___x_1048_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___redArg(v___x_1047_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_);
return v___x_1048_;
}
}
else
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1056_; 
lean_dec(v_a_1029_);
v_a_1049_ = lean_ctor_get(v___x_1039_, 0);
v_isSharedCheck_1056_ = !lean_is_exclusive(v___x_1039_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1051_ = v___x_1039_;
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___x_1039_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1054_; 
if (v_isShared_1052_ == 0)
{
v___x_1054_ = v___x_1051_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_a_1049_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___boxed(lean_object* v_a_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
lean_object* v_res_1067_; 
v_res_1067_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0(v_a_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
lean_dec(v___y_1061_);
lean_dec_ref(v___y_1060_);
lean_dec(v___y_1059_);
lean_dec_ref(v___y_1058_);
return v_res_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg(lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_){
_start:
{
lean_object* v___x_1077_; 
v___x_1077_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_1069_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_a_1078_; lean_object* v___f_1079_; lean_object* v___x_1080_; 
v_a_1078_ = lean_ctor_get(v___x_1077_, 0);
lean_inc_n(v_a_1078_, 2);
lean_dec_ref_known(v___x_1077_, 1);
v___f_1079_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_1079_, 0, v_a_1078_);
v___x_1080_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg(v_a_1078_, v___f_1079_, v_a_1068_, v_a_1069_, v_a_1070_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_);
return v___x_1080_;
}
else
{
lean_object* v_a_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1088_; 
v_a_1081_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1083_ = v___x_1077_;
v_isShared_1084_ = v_isSharedCheck_1088_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_a_1081_);
lean_dec(v___x_1077_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1088_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v___x_1086_; 
if (v_isShared_1084_ == 0)
{
v___x_1086_ = v___x_1083_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v_a_1081_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___boxed(lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg(v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
lean_dec(v_a_1096_);
lean_dec_ref(v_a_1095_);
lean_dec(v_a_1094_);
lean_dec_ref(v_a_1093_);
lean_dec(v_a_1092_);
lean_dec_ref(v_a_1091_);
lean_dec(v_a_1090_);
lean_dec_ref(v_a_1089_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop(lean_object* v_x_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_){
_start:
{
lean_object* v___x_1109_; 
v___x_1109_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg(v_a_1100_, v_a_1101_, v_a_1102_, v_a_1103_, v_a_1104_, v_a_1105_, v_a_1106_, v_a_1107_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___boxed(lean_object* v_x_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStop(v_x_1110_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_);
lean_dec(v_a_1118_);
lean_dec_ref(v_a_1117_);
lean_dec(v_a_1116_);
lean_dec_ref(v_a_1115_);
lean_dec(v_a_1114_);
lean_dec_ref(v_a_1113_);
lean_dec(v_a_1112_);
lean_dec_ref(v_a_1111_);
lean_dec(v_x_1110_);
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1(lean_object* v_00_u03b1_1121_, lean_object* v_msg_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_){
_start:
{
lean_object* v___x_1132_; 
v___x_1132_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___redArg(v_msg_1122_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___boxed(lean_object* v_00_u03b1_1133_, lean_object* v_msg_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1(v_00_u03b1_1133_, v_msg_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_);
lean_dec(v___y_1142_);
lean_dec_ref(v___y_1141_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
lean_dec(v___y_1136_);
lean_dec_ref(v___y_1135_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart(lean_object* v_goal_1169_, lean_object* v_a_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_){
_start:
{
lean_object* v___x_1175_; 
v___x_1175_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseMGoal_x3f(v_goal_1169_);
if (lean_obj_tag(v___x_1175_) == 1)
{
lean_object* v_val_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1185_; 
lean_dec_ref(v_goal_1169_);
v_val_1176_ = lean_ctor_get(v___x_1175_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1178_ = v___x_1175_;
v_isShared_1179_ = v_isSharedCheck_1185_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_val_1176_);
lean_dec(v___x_1175_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1185_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1183_; 
v___x_1180_ = lean_box(0);
v___x_1181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1181_, 0, v_val_1176_);
lean_ctor_set(v___x_1181_, 1, v___x_1180_);
if (v_isShared_1179_ == 0)
{
lean_ctor_set_tag(v___x_1178_, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1181_);
v___x_1183_ = v___x_1178_;
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
}
else
{
lean_object* v___x_1186_; 
lean_dec(v___x_1175_);
v___x_1186_ = l_Lean_Meta_mkFreshLevelMVar(v_a_1170_, v_a_1171_, v_a_1172_, v_a_1173_);
if (lean_obj_tag(v___x_1186_) == 0)
{
lean_object* v_a_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; uint8_t v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; 
v_a_1187_ = lean_ctor_get(v___x_1186_, 0);
lean_inc_n(v_a_1187_, 2);
lean_dec_ref_known(v___x_1186_, 1);
v___x_1188_ = l_Lean_Level_succ___override(v_a_1187_);
lean_inc(v___x_1188_);
v___x_1189_ = l_Lean_mkSort(v___x_1188_);
v___x_1190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
v___x_1191_ = 0;
v___x_1192_ = lean_box(0);
v___x_1193_ = l_Lean_Meta_mkFreshExprMVar(v___x_1190_, v___x_1191_, v___x_1192_, v_a_1170_, v_a_1171_, v_a_1172_, v_a_1173_);
if (lean_obj_tag(v___x_1193_) == 0)
{
lean_object* v_a_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v_a_1194_ = lean_ctor_get(v___x_1193_, 0);
lean_inc_n(v_a_1194_, 2);
lean_dec_ref_known(v___x_1193_, 1);
v___x_1195_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__3));
v___x_1196_ = lean_box(0);
v___x_1197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1188_);
lean_ctor_set(v___x_1197_, 1, v___x_1196_);
v___x_1198_ = l_Lean_mkConst(v___x_1195_, v___x_1197_);
v___x_1199_ = l_Lean_Expr_app___override(v___x_1198_, v_a_1194_);
v___x_1200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1200_, 0, v___x_1199_);
v___x_1201_ = l_Lean_Meta_mkFreshExprMVar(v___x_1200_, v___x_1191_, v___x_1192_, v_a_1170_, v_a_1171_, v_a_1172_, v_a_1173_);
if (lean_obj_tag(v___x_1201_) == 0)
{
lean_object* v_a_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
v_a_1202_ = lean_ctor_get(v___x_1201_, 0);
lean_inc(v_a_1202_);
lean_dec_ref_known(v___x_1201_, 1);
lean_inc(v_a_1194_);
v___x_1203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1203_, 0, v_a_1194_);
v___x_1204_ = l_Lean_Meta_mkFreshExprMVar(v___x_1203_, v___x_1191_, v___x_1192_, v_a_1170_, v_a_1171_, v_a_1172_, v_a_1173_);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
lean_inc_n(v_a_1205_, 2);
lean_dec_ref_known(v___x_1204_, 1);
v___x_1206_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__6));
lean_inc(v_a_1187_);
v___x_1207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1207_, 0, v_a_1187_);
lean_ctor_set(v___x_1207_, 1, v___x_1196_);
v___x_1208_ = l_Lean_mkConst(v___x_1206_, v___x_1207_);
lean_inc(v_a_1202_);
lean_inc(v_a_1194_);
lean_inc_ref(v_goal_1169_);
v___x_1209_ = l_Lean_mkApp4(v___x_1208_, v_goal_1169_, v_a_1194_, v_a_1202_, v_a_1205_);
v___x_1210_ = lean_box(0);
v___x_1211_ = l_Lean_Meta_synthInstance(v___x_1209_, v___x_1210_, v_a_1170_, v_a_1171_, v_a_1172_, v_a_1173_);
if (lean_obj_tag(v___x_1211_) == 0)
{
lean_object* v_a_1212_; lean_object* v___x_1213_; lean_object* v_a_1214_; lean_object* v___x_1215_; lean_object* v_a_1216_; lean_object* v___x_1217_; lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1242_; 
v_a_1212_ = lean_ctor_get(v___x_1211_, 0);
lean_inc(v_a_1212_);
lean_dec_ref_known(v___x_1211_, 1);
v___x_1213_ = l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___redArg(v_a_1187_, v_a_1171_);
v_a_1214_ = lean_ctor_get(v___x_1213_, 0);
lean_inc(v_a_1214_);
lean_dec_ref(v___x_1213_);
v___x_1215_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg(v_a_1194_, v_a_1171_);
v_a_1216_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_a_1216_);
lean_dec_ref(v___x_1215_);
v___x_1217_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg(v_a_1202_, v_a_1171_);
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1242_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1220_ = v___x_1217_;
v_isShared_1221_ = v_isSharedCheck_1242_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1217_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1242_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1222_; lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1241_; 
v___x_1222_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg(v_a_1205_, v_a_1171_);
v_a_1223_ = lean_ctor_get(v___x_1222_, 0);
v_isSharedCheck_1241_ = !lean_is_exclusive(v___x_1222_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1225_ = v___x_1222_;
v_isShared_1226_ = v_isSharedCheck_1241_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_dec(v___x_1222_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1241_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1235_; 
v___x_1227_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___closed__7));
lean_inc_n(v_a_1214_, 2);
v___x_1228_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1228_, 0, v_a_1214_);
lean_ctor_set(v___x_1228_, 1, v___x_1196_);
v___x_1229_ = l_Lean_mkConst(v___x_1227_, v___x_1228_);
lean_inc(v_a_1223_);
lean_inc_n(v_a_1218_, 2);
lean_inc_n(v_a_1216_, 2);
v___x_1230_ = l_Lean_mkApp5(v___x_1229_, v_a_1216_, v_a_1218_, v_a_1223_, v_goal_1169_, v_a_1212_);
v___x_1231_ = l_Lean_Level_succ___override(v_a_1214_);
v___x_1232_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_emptyHyp(v_a_1214_, v_a_1216_, v_a_1218_);
v___x_1233_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1233_, 0, v___x_1231_);
lean_ctor_set(v___x_1233_, 1, v_a_1216_);
lean_ctor_set(v___x_1233_, 2, v_a_1218_);
lean_ctor_set(v___x_1233_, 3, v___x_1232_);
lean_ctor_set(v___x_1233_, 4, v_a_1223_);
if (v_isShared_1221_ == 0)
{
lean_ctor_set_tag(v___x_1220_, 1);
lean_ctor_set(v___x_1220_, 0, v___x_1230_);
v___x_1235_ = v___x_1220_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v___x_1230_);
v___x_1235_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
lean_object* v___x_1236_; lean_object* v___x_1238_; 
v___x_1236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1236_, 0, v___x_1233_);
lean_ctor_set(v___x_1236_, 1, v___x_1235_);
if (v_isShared_1226_ == 0)
{
lean_ctor_set(v___x_1225_, 0, v___x_1236_);
v___x_1238_ = v___x_1225_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v___x_1236_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
}
}
}
else
{
lean_object* v_a_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1250_; 
lean_dec(v_a_1205_);
lean_dec(v_a_1202_);
lean_dec(v_a_1194_);
lean_dec(v_a_1187_);
lean_dec_ref(v_goal_1169_);
v_a_1243_ = lean_ctor_get(v___x_1211_, 0);
v_isSharedCheck_1250_ = !lean_is_exclusive(v___x_1211_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1245_ = v___x_1211_;
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_a_1243_);
lean_dec(v___x_1211_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1248_; 
if (v_isShared_1246_ == 0)
{
v___x_1248_ = v___x_1245_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v_a_1243_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
}
}
else
{
lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1258_; 
lean_dec(v_a_1202_);
lean_dec(v_a_1194_);
lean_dec(v_a_1187_);
lean_dec_ref(v_goal_1169_);
v_a_1251_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1258_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1258_ == 0)
{
v___x_1253_ = v___x_1204_;
v_isShared_1254_ = v_isSharedCheck_1258_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v___x_1204_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1258_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1256_; 
if (v_isShared_1254_ == 0)
{
v___x_1256_ = v___x_1253_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v_a_1251_);
v___x_1256_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
return v___x_1256_;
}
}
}
}
else
{
lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1266_; 
lean_dec(v_a_1194_);
lean_dec(v_a_1187_);
lean_dec_ref(v_goal_1169_);
v_a_1259_ = lean_ctor_get(v___x_1201_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1261_ = v___x_1201_;
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_dec(v___x_1201_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v___x_1264_; 
if (v_isShared_1262_ == 0)
{
v___x_1264_ = v___x_1261_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_a_1259_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
}
}
else
{
lean_object* v_a_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1274_; 
lean_dec(v___x_1188_);
lean_dec(v_a_1187_);
lean_dec_ref(v_goal_1169_);
v_a_1267_ = lean_ctor_get(v___x_1193_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1193_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1269_ = v___x_1193_;
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_a_1267_);
lean_dec(v___x_1193_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v___x_1272_; 
if (v_isShared_1270_ == 0)
{
v___x_1272_ = v___x_1269_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_a_1267_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
}
}
else
{
lean_object* v_a_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1282_; 
lean_dec_ref(v_goal_1169_);
v_a_1275_ = lean_ctor_get(v___x_1186_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v___x_1186_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1277_ = v___x_1186_;
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_a_1275_);
lean_dec(v___x_1186_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1280_; 
if (v_isShared_1278_ == 0)
{
v___x_1280_ = v___x_1277_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v_a_1275_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart___boxed(lean_object* v_goal_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart(v_goal_1283_, v_a_1284_, v_a_1285_, v_a_1286_, v_a_1287_);
lean_dec(v_a_1287_);
lean_dec_ref(v_a_1286_);
lean_dec(v_a_1285_);
lean_dec_ref(v_a_1284_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMVar___lam__0(lean_object* v_mvar_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_){
_start:
{
lean_object* v___x_1296_; 
lean_inc(v_mvar_1290_);
v___x_1296_ = l_Lean_MVarId_getType(v_mvar_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_);
if (lean_obj_tag(v___x_1296_) == 0)
{
lean_object* v_a_1297_; lean_object* v___x_1298_; lean_object* v_a_1299_; lean_object* v___y_1301_; lean_object* v___y_1302_; lean_object* v___y_1303_; lean_object* v___y_1304_; lean_object* v___x_1374_; 
v_a_1297_ = lean_ctor_get(v___x_1296_, 0);
lean_inc(v_a_1297_);
lean_dec_ref_known(v___x_1296_, 1);
v___x_1298_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg(v_a_1297_, v___y_1292_);
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
lean_inc_n(v_a_1299_, 2);
lean_dec_ref(v___x_1298_);
v___x_1374_ = l_Lean_Meta_isProp(v_a_1299_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_);
if (lean_obj_tag(v___x_1374_) == 0)
{
lean_object* v_a_1375_; uint8_t v___x_1376_; 
v_a_1375_ = lean_ctor_get(v___x_1374_, 0);
lean_inc(v_a_1375_);
lean_dec_ref_known(v___x_1374_, 1);
v___x_1376_ = lean_unbox(v_a_1375_);
lean_dec(v_a_1375_);
if (v___x_1376_ == 0)
{
lean_object* v___x_1377_; 
lean_inc(v___y_1294_);
lean_inc_ref(v___y_1293_);
lean_inc(v___y_1292_);
lean_inc_ref(v___y_1291_);
v___x_1377_ = lean_infer_type(v_a_1299_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_);
if (lean_obj_tag(v___x_1377_) == 0)
{
lean_object* v_a_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v_a_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1397_; 
v_a_1378_ = lean_ctor_get(v___x_1377_, 0);
lean_inc(v_a_1378_);
lean_dec_ref_known(v___x_1377_, 1);
v___x_1379_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__1);
v___x_1380_ = l_Lean_mkMVar(v_mvar_1290_);
v___x_1381_ = l_Lean_MessageData_ofExpr(v___x_1380_);
v___x_1382_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1382_, 0, v___x_1379_);
lean_ctor_set(v___x_1382_, 1, v___x_1381_);
v___x_1383_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__3);
v___x_1384_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1382_);
lean_ctor_set(v___x_1384_, 1, v___x_1383_);
v___x_1385_ = l_Lean_MessageData_ofExpr(v_a_1378_);
v___x_1386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1386_, 0, v___x_1384_);
lean_ctor_set(v___x_1386_, 1, v___x_1385_);
v___x_1387_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__5);
v___x_1388_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1386_);
lean_ctor_set(v___x_1388_, 1, v___x_1387_);
v___x_1389_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___redArg(v___x_1388_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_);
lean_dec(v___y_1294_);
lean_dec_ref(v___y_1293_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
v_a_1390_ = lean_ctor_get(v___x_1389_, 0);
v_isSharedCheck_1397_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1392_ = v___x_1389_;
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_a_1390_);
lean_dec(v___x_1389_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1395_; 
if (v_isShared_1393_ == 0)
{
v___x_1395_ = v___x_1392_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v_a_1390_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
}
else
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1405_; 
lean_dec(v___y_1294_);
lean_dec_ref(v___y_1293_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
lean_dec(v_mvar_1290_);
v_a_1398_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1400_ = v___x_1377_;
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1377_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1403_; 
if (v_isShared_1401_ == 0)
{
v___x_1403_ = v___x_1400_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v_a_1398_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
}
}
else
{
v___y_1301_ = v___y_1291_;
v___y_1302_ = v___y_1292_;
v___y_1303_ = v___y_1293_;
v___y_1304_ = v___y_1294_;
goto v___jp_1300_;
}
}
else
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1413_; 
lean_dec(v_a_1299_);
lean_dec(v___y_1294_);
lean_dec_ref(v___y_1293_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
lean_dec(v_mvar_1290_);
v_a_1406_ = lean_ctor_get(v___x_1374_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1374_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1408_ = v___x_1374_;
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1374_);
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
v___jp_1300_:
{
lean_object* v___x_1305_; 
v___x_1305_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStart(v_a_1299_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
if (lean_obj_tag(v___x_1305_) == 0)
{
lean_object* v_a_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1365_; 
v_a_1306_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1308_ = v___x_1305_;
v_isShared_1309_ = v_isSharedCheck_1365_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_a_1306_);
lean_dec(v___x_1305_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1365_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v_proof_x3f_1310_; 
v_proof_x3f_1310_ = lean_ctor_get(v_a_1306_, 1);
if (lean_obj_tag(v_proof_x3f_1310_) == 1)
{
lean_object* v_goal_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1351_; 
lean_inc_ref(v_proof_x3f_1310_);
lean_del_object(v___x_1308_);
v_goal_1311_ = lean_ctor_get(v_a_1306_, 0);
v_isSharedCheck_1351_ = !lean_is_exclusive(v_a_1306_);
if (v_isSharedCheck_1351_ == 0)
{
lean_object* v_unused_1352_; 
v_unused_1352_ = lean_ctor_get(v_a_1306_, 1);
lean_dec(v_unused_1352_);
v___x_1313_ = v_a_1306_;
v_isShared_1314_ = v_isSharedCheck_1351_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_goal_1311_);
lean_dec(v_a_1306_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1351_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v_val_1315_; lean_object* v___x_1316_; 
v_val_1315_ = lean_ctor_get(v_proof_x3f_1310_, 0);
lean_inc(v_val_1315_);
lean_dec_ref_known(v_proof_x3f_1310_, 1);
lean_inc(v_mvar_1290_);
v___x_1316_ = l_Lean_MVarId_getTag(v_mvar_1290_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v_a_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v_a_1317_ = lean_ctor_get(v___x_1316_, 0);
lean_inc(v_a_1317_);
lean_dec_ref_known(v___x_1316_, 1);
lean_inc_ref(v_goal_1311_);
v___x_1318_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(v_goal_1311_);
v___x_1319_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_1318_, v_a_1317_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec_ref(v___y_1301_);
if (lean_obj_tag(v___x_1319_) == 0)
{
lean_object* v_a_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1333_; 
v_a_1320_ = lean_ctor_get(v___x_1319_, 0);
lean_inc_n(v_a_1320_, 2);
lean_dec_ref_known(v___x_1319_, 1);
v___x_1321_ = l_Lean_Expr_app___override(v_val_1315_, v_a_1320_);
v___x_1322_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___redArg(v_mvar_1290_, v___x_1321_, v___y_1302_);
lean_dec(v___y_1302_);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1333_ == 0)
{
lean_object* v_unused_1334_; 
v_unused_1334_ = lean_ctor_get(v___x_1322_, 0);
lean_dec(v_unused_1334_);
v___x_1324_ = v___x_1322_;
v_isShared_1325_ = v_isSharedCheck_1333_;
goto v_resetjp_1323_;
}
else
{
lean_dec(v___x_1322_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1333_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
lean_object* v___x_1326_; lean_object* v___x_1328_; 
v___x_1326_ = l_Lean_Expr_mvarId_x21(v_a_1320_);
lean_dec(v_a_1320_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 1, v_goal_1311_);
lean_ctor_set(v___x_1313_, 0, v___x_1326_);
v___x_1328_ = v___x_1313_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v___x_1326_);
lean_ctor_set(v_reuseFailAlloc_1332_, 1, v_goal_1311_);
v___x_1328_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
lean_object* v___x_1330_; 
if (v_isShared_1325_ == 0)
{
lean_ctor_set(v___x_1324_, 0, v___x_1328_);
v___x_1330_ = v___x_1324_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v___x_1328_);
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
lean_object* v_a_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1342_; 
lean_dec(v_val_1315_);
lean_del_object(v___x_1313_);
lean_dec_ref(v_goal_1311_);
lean_dec(v___y_1302_);
lean_dec(v_mvar_1290_);
v_a_1335_ = lean_ctor_get(v___x_1319_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1319_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1337_ = v___x_1319_;
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_a_1335_);
lean_dec(v___x_1319_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1340_; 
if (v_isShared_1338_ == 0)
{
v___x_1340_ = v___x_1337_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_a_1335_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
}
else
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1350_; 
lean_dec(v_val_1315_);
lean_del_object(v___x_1313_);
lean_dec_ref(v_goal_1311_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v_mvar_1290_);
v_a_1343_ = lean_ctor_get(v___x_1316_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1316_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1345_ = v___x_1316_;
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1316_);
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
}
else
{
lean_object* v_goal_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1363_; 
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
v_goal_1353_ = lean_ctor_get(v_a_1306_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v_a_1306_);
if (v_isSharedCheck_1363_ == 0)
{
lean_object* v_unused_1364_; 
v_unused_1364_ = lean_ctor_get(v_a_1306_, 1);
lean_dec(v_unused_1364_);
v___x_1355_ = v_a_1306_;
v_isShared_1356_ = v_isSharedCheck_1363_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_goal_1353_);
lean_dec(v_a_1306_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1363_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
lean_object* v___x_1358_; 
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 1, v_goal_1353_);
lean_ctor_set(v___x_1355_, 0, v_mvar_1290_);
v___x_1358_ = v___x_1355_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_mvar_1290_);
lean_ctor_set(v_reuseFailAlloc_1362_, 1, v_goal_1353_);
v___x_1358_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
lean_object* v___x_1360_; 
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 0, v___x_1358_);
v___x_1360_ = v___x_1308_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v___x_1358_);
v___x_1360_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
return v___x_1360_;
}
}
}
}
}
}
else
{
lean_object* v_a_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1373_; 
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v_mvar_1290_);
v_a_1366_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1373_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1368_ = v___x_1305_;
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_a_1366_);
lean_dec(v___x_1305_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v___x_1371_; 
if (v_isShared_1369_ == 0)
{
v___x_1371_ = v___x_1368_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_a_1366_);
v___x_1371_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
return v___x_1371_;
}
}
}
}
}
else
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
lean_dec(v___y_1294_);
lean_dec_ref(v___y_1293_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
lean_dec(v_mvar_1290_);
v_a_1414_ = lean_ctor_get(v___x_1296_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1416_ = v___x_1296_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___x_1296_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMVar___lam__0___boxed(lean_object* v_mvar_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMVar___lam__0(v_mvar_1422_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMVar(lean_object* v_mvar_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_, lean_object* v_a_1433_){
_start:
{
lean_object* v___f_1435_; lean_object* v___x_1436_; 
lean_inc(v_mvar_1429_);
v___f_1435_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMVar___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1435_, 0, v_mvar_1429_);
v___x_1436_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___redArg(v_mvar_1429_, v___f_1435_, v_a_1430_, v_a_1431_, v_a_1432_, v_a_1433_);
return v___x_1436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMVar___boxed(lean_object* v_mvar_1437_, lean_object* v_a_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMVar(v_mvar_1437_, v_a_1438_, v_a_1439_, v_a_1440_, v_a_1441_);
lean_dec(v_a_1441_);
lean_dec_ref(v_a_1440_);
lean_dec(v_a_1439_);
lean_dec_ref(v_a_1438_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal___redArg(lean_object* v_a_1444_, lean_object* v_a_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_){
_start:
{
lean_object* v___x_1450_; 
v___x_1450_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_1444_, v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_);
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_object* v_a_1451_; lean_object* v___x_1452_; 
v_a_1451_ = lean_ctor_get(v___x_1450_, 0);
lean_inc(v_a_1451_);
lean_dec_ref_known(v___x_1450_, 1);
v___x_1452_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMVar(v_a_1451_, v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v_a_1453_; lean_object* v_fst_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
lean_inc(v_a_1453_);
lean_dec_ref_known(v___x_1452_, 1);
v_fst_1454_ = lean_ctor_get(v_a_1453_, 0);
v___x_1455_ = lean_box(0);
lean_inc(v_fst_1454_);
v___x_1456_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1456_, 0, v_fst_1454_);
lean_ctor_set(v___x_1456_, 1, v___x_1455_);
v___x_1457_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1456_, v_a_1444_, v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_);
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1464_; 
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1457_);
if (v_isSharedCheck_1464_ == 0)
{
lean_object* v_unused_1465_; 
v_unused_1465_ = lean_ctor_get(v___x_1457_, 0);
lean_dec(v_unused_1465_);
v___x_1459_ = v___x_1457_;
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
else
{
lean_dec(v___x_1457_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1462_; 
if (v_isShared_1460_ == 0)
{
lean_ctor_set(v___x_1459_, 0, v_a_1453_);
v___x_1462_ = v___x_1459_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_a_1453_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
else
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1473_; 
lean_dec(v_a_1453_);
v_a_1466_ = lean_ctor_get(v___x_1457_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1457_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1468_ = v___x_1457_;
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1457_);
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
else
{
return v___x_1452_;
}
}
else
{
lean_object* v_a_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1481_; 
v_a_1474_ = lean_ctor_get(v___x_1450_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1476_ = v___x_1450_;
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_a_1474_);
lean_dec(v___x_1450_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1479_; 
if (v_isShared_1477_ == 0)
{
v___x_1479_ = v___x_1476_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_a_1474_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal___redArg___boxed(lean_object* v_a_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_){
_start:
{
lean_object* v_res_1488_; 
v_res_1488_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal___redArg(v_a_1482_, v_a_1483_, v_a_1484_, v_a_1485_, v_a_1486_);
lean_dec(v_a_1486_);
lean_dec_ref(v_a_1485_);
lean_dec(v_a_1484_);
lean_dec_ref(v_a_1483_);
lean_dec(v_a_1482_);
return v_res_1488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal(lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_){
_start:
{
lean_object* v___x_1498_; 
v___x_1498_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal___redArg(v_a_1490_, v_a_1493_, v_a_1494_, v_a_1495_, v_a_1496_);
return v___x_1498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal___boxed(lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_, lean_object* v_a_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_){
_start:
{
lean_object* v_res_1508_; 
v_res_1508_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal(v_a_1499_, v_a_1500_, v_a_1501_, v_a_1502_, v_a_1503_, v_a_1504_, v_a_1505_, v_a_1506_);
lean_dec(v_a_1506_);
lean_dec_ref(v_a_1505_);
lean_dec(v_a_1504_);
lean_dec_ref(v_a_1503_);
lean_dec(v_a_1502_);
lean_dec_ref(v_a_1501_);
lean_dec(v_a_1500_);
lean_dec_ref(v_a_1499_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStart___redArg(lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal___redArg(v_a_1509_, v_a_1510_, v_a_1511_, v_a_1512_, v_a_1513_);
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1523_; 
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1523_ == 0)
{
lean_object* v_unused_1524_; 
v_unused_1524_ = lean_ctor_get(v___x_1515_, 0);
lean_dec(v_unused_1524_);
v___x_1517_ = v___x_1515_;
v_isShared_1518_ = v_isSharedCheck_1523_;
goto v_resetjp_1516_;
}
else
{
lean_dec(v___x_1515_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1523_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1519_; lean_object* v___x_1521_; 
v___x_1519_ = lean_box(0);
if (v_isShared_1518_ == 0)
{
lean_ctor_set(v___x_1517_, 0, v___x_1519_);
v___x_1521_ = v___x_1517_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v___x_1519_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
}
else
{
lean_object* v_a_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1532_; 
v_a_1525_ = lean_ctor_get(v___x_1515_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1527_ = v___x_1515_;
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_a_1525_);
lean_dec(v___x_1515_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStart___redArg___boxed(lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStart___redArg(v_a_1533_, v_a_1534_, v_a_1535_, v_a_1536_, v_a_1537_);
lean_dec(v_a_1537_);
lean_dec_ref(v_a_1536_);
lean_dec(v_a_1535_);
lean_dec_ref(v_a_1534_);
lean_dec(v_a_1533_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStart(lean_object* v_x_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_){
_start:
{
lean_object* v___x_1550_; 
v___x_1550_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStart___redArg(v_a_1542_, v_a_1545_, v_a_1546_, v_a_1547_, v_a_1548_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStart___boxed(lean_object* v_x_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_){
_start:
{
lean_object* v_res_1561_; 
v_res_1561_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStart(v_x_1551_, v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_);
lean_dec(v_a_1559_);
lean_dec_ref(v_a_1558_);
lean_dec(v_a_1557_);
lean_dec_ref(v_a_1556_);
lean_dec(v_a_1555_);
lean_dec_ref(v_a_1554_);
lean_dec(v_a_1553_);
lean_dec_ref(v_a_1552_);
lean_dec(v_x_1551_);
return v_res_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop___redArg___lam__0(lean_object* v_a_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_){
_start:
{
lean_object* v___x_1572_; 
lean_inc(v_a_1562_);
v___x_1572_ = l_Lean_MVarId_getType(v_a_1562_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_);
if (lean_obj_tag(v___x_1572_) == 0)
{
lean_object* v_a_1573_; lean_object* v___x_1574_; lean_object* v_a_1575_; lean_object* v___x_1576_; 
v_a_1573_ = lean_ctor_get(v___x_1572_, 0);
lean_inc(v_a_1573_);
lean_dec_ref_known(v___x_1572_, 1);
v___x_1574_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___redArg(v_a_1573_, v___y_1568_);
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
lean_inc(v_a_1575_);
lean_dec_ref(v___x_1574_);
v___x_1576_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseMGoal_x3f(v_a_1575_);
lean_dec(v_a_1575_);
if (lean_obj_tag(v___x_1576_) == 1)
{
lean_object* v_val_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; 
v_val_1577_ = lean_ctor_get(v___x_1576_, 0);
lean_inc(v_val_1577_);
lean_dec_ref_known(v___x_1576_, 1);
v___x_1578_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_strip(v_val_1577_);
v___x_1579_ = l_Lean_MVarId_setType___redArg(v_a_1562_, v___x_1578_, v___y_1568_);
return v___x_1579_;
}
else
{
lean_object* v___x_1580_; lean_object* v___x_1581_; 
lean_dec(v___x_1576_);
lean_dec(v_a_1562_);
v___x_1580_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__1);
v___x_1581_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___redArg(v___x_1580_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_);
return v___x_1581_;
}
}
else
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
lean_dec(v_a_1562_);
v_a_1582_ = lean_ctor_get(v___x_1572_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1572_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v___x_1572_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1572_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1582_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop___redArg___lam__0___boxed(lean_object* v_a_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v_res_1600_; 
v_res_1600_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop___redArg___lam__0(v_a_1590_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
lean_dec(v___y_1598_);
lean_dec_ref(v___y_1597_);
lean_dec(v___y_1596_);
lean_dec_ref(v___y_1595_);
lean_dec(v___y_1594_);
lean_dec_ref(v___y_1593_);
lean_dec(v___y_1592_);
lean_dec_ref(v___y_1591_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop___redArg(lean_object* v_a_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_, lean_object* v_a_1608_){
_start:
{
lean_object* v___x_1610_; 
v___x_1610_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_1602_, v_a_1605_, v_a_1606_, v_a_1607_, v_a_1608_);
if (lean_obj_tag(v___x_1610_) == 0)
{
lean_object* v_a_1611_; lean_object* v___f_1612_; lean_object* v___x_1613_; 
v_a_1611_ = lean_ctor_get(v___x_1610_, 0);
lean_inc_n(v_a_1611_, 2);
lean_dec_ref_known(v___x_1610_, 1);
v___f_1612_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_1612_, 0, v_a_1611_);
v___x_1613_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg(v_a_1611_, v___f_1612_, v_a_1601_, v_a_1602_, v_a_1603_, v_a_1604_, v_a_1605_, v_a_1606_, v_a_1607_, v_a_1608_);
return v___x_1613_;
}
else
{
lean_object* v_a_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1621_; 
v_a_1614_ = lean_ctor_get(v___x_1610_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1610_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1616_ = v___x_1610_;
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_a_1614_);
lean_dec(v___x_1610_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___x_1619_; 
if (v_isShared_1617_ == 0)
{
v___x_1619_ = v___x_1616_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v_a_1614_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
return v___x_1619_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop___redArg___boxed(lean_object* v_a_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop___redArg(v_a_1622_, v_a_1623_, v_a_1624_, v_a_1625_, v_a_1626_, v_a_1627_, v_a_1628_, v_a_1629_);
lean_dec(v_a_1629_);
lean_dec_ref(v_a_1628_);
lean_dec(v_a_1627_);
lean_dec_ref(v_a_1626_);
lean_dec(v_a_1625_);
lean_dec_ref(v_a_1624_);
lean_dec(v_a_1623_);
lean_dec_ref(v_a_1622_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop(lean_object* v_x_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_, lean_object* v_a_1639_, lean_object* v_a_1640_){
_start:
{
lean_object* v___x_1642_; 
v___x_1642_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop___redArg(v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_, v_a_1640_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop___boxed(lean_object* v_x_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_){
_start:
{
lean_object* v_res_1653_; 
v_res_1653_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop(v_x_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_, v_a_1651_);
lean_dec(v_a_1651_);
lean_dec_ref(v_a_1650_);
lean_dec(v_a_1649_);
lean_dec_ref(v_a_1648_);
lean_dec(v_a_1647_);
lean_dec_ref(v_a_1646_);
lean_dec(v_a_1645_);
lean_dec_ref(v_a_1644_);
lean_dec(v_x_1643_);
return v_res_1653_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt_spec__0(lean_object* v_opts_1654_, lean_object* v_opt_1655_){
_start:
{
lean_object* v_name_1656_; lean_object* v_defValue_1657_; lean_object* v_map_1658_; lean_object* v___x_1659_; 
v_name_1656_ = lean_ctor_get(v_opt_1655_, 0);
v_defValue_1657_ = lean_ctor_get(v_opt_1655_, 1);
v_map_1658_ = lean_ctor_get(v_opts_1654_, 0);
v___x_1659_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1658_, v_name_1656_);
if (lean_obj_tag(v___x_1659_) == 0)
{
uint8_t v___x_1660_; 
v___x_1660_ = lean_unbox(v_defValue_1657_);
return v___x_1660_;
}
else
{
lean_object* v_val_1661_; 
v_val_1661_ = lean_ctor_get(v___x_1659_, 0);
lean_inc(v_val_1661_);
lean_dec_ref_known(v___x_1659_, 1);
if (lean_obj_tag(v_val_1661_) == 1)
{
uint8_t v_v_1662_; 
v_v_1662_ = lean_ctor_get_uint8(v_val_1661_, 0);
lean_dec_ref_known(v_val_1661_, 0);
return v_v_1662_;
}
else
{
uint8_t v___x_1663_; 
lean_dec(v_val_1661_);
v___x_1663_ = lean_unbox(v_defValue_1657_);
return v___x_1663_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt_spec__0___boxed(lean_object* v_opts_1664_, lean_object* v_opt_1665_){
_start:
{
uint8_t v_res_1666_; lean_object* v_r_1667_; 
v_res_1666_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt_spec__0(v_opts_1664_, v_opt_1665_);
lean_dec_ref(v_opt_1665_);
lean_dec_ref(v_opts_1664_);
v_r_1667_ = lean_box(v_res_1666_);
return v_r_1667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___redArg(lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_){
_start:
{
lean_object* v_options_1674_; lean_object* v___x_1675_; uint8_t v___x_1676_; 
v_options_1674_ = lean_ctor_get(v_a_1671_, 2);
v___x_1675_ = l_new__wp__monad;
v___x_1676_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt_spec__0(v_options_1674_, v___x_1675_);
if (v___x_1676_ == 0)
{
lean_object* v___x_1677_; 
v___x_1677_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___redArg(v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_);
return v___x_1677_;
}
else
{
lean_object* v___x_1678_; 
v___x_1678_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStart___redArg(v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_);
return v___x_1678_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___redArg___boxed(lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_){
_start:
{
lean_object* v_res_1685_; 
v_res_1685_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___redArg(v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_);
lean_dec(v_a_1683_);
lean_dec_ref(v_a_1682_);
lean_dec(v_a_1681_);
lean_dec_ref(v_a_1680_);
lean_dec(v_a_1679_);
return v_res_1685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt(lean_object* v___stx_1686_, lean_object* v_a_1687_, lean_object* v_a_1688_, lean_object* v_a_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_, lean_object* v_a_1692_, lean_object* v_a_1693_, lean_object* v_a_1694_){
_start:
{
lean_object* v___x_1696_; 
v___x_1696_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___redArg(v_a_1688_, v_a_1691_, v_a_1692_, v_a_1693_, v_a_1694_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___boxed(lean_object* v___stx_1697_, lean_object* v_a_1698_, lean_object* v_a_1699_, lean_object* v_a_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt(v___stx_1697_, v_a_1698_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_, v_a_1704_, v_a_1705_);
lean_dec(v_a_1705_);
lean_dec_ref(v_a_1704_);
lean_dec(v_a_1703_);
lean_dec_ref(v_a_1702_);
lean_dec(v_a_1701_);
lean_dec_ref(v_a_1700_);
lean_dec(v_a_1699_);
lean_dec_ref(v_a_1698_);
lean_dec(v___stx_1697_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1(){
_start:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1725_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1726_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__2));
v___x_1727_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___closed__5));
v___x_1728_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___boxed), 10, 0);
v___x_1729_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1725_, v___x_1726_, v___x_1727_, v___x_1728_);
return v___x_1729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1___boxed(lean_object* v_a_1730_){
_start:
{
lean_object* v_res_1731_; 
v_res_1731_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1();
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___redArg(lean_object* v_a_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_){
_start:
{
lean_object* v_options_1741_; lean_object* v___x_1742_; uint8_t v___x_1743_; 
v_options_1741_ = lean_ctor_get(v_a_1738_, 2);
v___x_1742_ = l_new__wp__monad;
v___x_1743_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt_spec__0(v_options_1741_, v___x_1742_);
if (v___x_1743_ == 0)
{
lean_object* v___x_1744_; 
v___x_1744_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg(v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_, v_a_1739_);
return v___x_1744_;
}
else
{
lean_object* v___x_1745_; 
v___x_1745_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMStop___redArg(v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_, v_a_1739_);
return v___x_1745_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___redArg___boxed(lean_object* v_a_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_, lean_object* v_a_1749_, lean_object* v_a_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_, lean_object* v_a_1753_, lean_object* v_a_1754_){
_start:
{
lean_object* v_res_1755_; 
v_res_1755_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___redArg(v_a_1746_, v_a_1747_, v_a_1748_, v_a_1749_, v_a_1750_, v_a_1751_, v_a_1752_, v_a_1753_);
lean_dec(v_a_1753_);
lean_dec_ref(v_a_1752_);
lean_dec(v_a_1751_);
lean_dec_ref(v_a_1750_);
lean_dec(v_a_1749_);
lean_dec_ref(v_a_1748_);
lean_dec(v_a_1747_);
lean_dec_ref(v_a_1746_);
return v_res_1755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt(lean_object* v___stx_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_, lean_object* v_a_1762_, lean_object* v_a_1763_, lean_object* v_a_1764_){
_start:
{
lean_object* v___x_1766_; 
v___x_1766_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___redArg(v_a_1757_, v_a_1758_, v_a_1759_, v_a_1760_, v_a_1761_, v_a_1762_, v_a_1763_, v_a_1764_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___boxed(lean_object* v___stx_1767_, lean_object* v_a_1768_, lean_object* v_a_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_, lean_object* v_a_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt(v___stx_1767_, v_a_1768_, v_a_1769_, v_a_1770_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_, v_a_1775_);
lean_dec(v_a_1775_);
lean_dec_ref(v_a_1774_);
lean_dec(v_a_1773_);
lean_dec_ref(v_a_1772_);
lean_dec(v_a_1771_);
lean_dec_ref(v_a_1770_);
lean_dec(v_a_1769_);
lean_dec_ref(v_a_1768_);
lean_dec(v___stx_1767_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1(){
_start:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___x_1793_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1794_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__1));
v___x_1795_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___closed__3));
v___x_1796_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___boxed), 10, 0);
v___x_1797_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1793_, v___x_1794_, v___x_1795_, v___x_1796_);
return v___x_1797_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1___boxed(lean_object* v_a_1798_){
_start:
{
lean_object* v_res_1799_; 
v_res_1799_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1();
return v_res_1799_;
}
}
lean_object* runtime_initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Options(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStartOpt__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStopOpt__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Options(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
