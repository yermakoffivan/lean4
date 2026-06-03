// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.LeftRight
// Imports: public import Std.Tactic.Do.Syntax public import Lean.Elab.Tactic.Do.ProofMode.MGoal
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
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_new__wp__monad;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseMGoal_x3f(lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Level_dec(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "target is not SPred.or"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "or"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "or_intro_l'"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__4_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__6_value),LEAN_SCALAR_PTR_LITERAL(228, 71, 40, 178, 46, 196, 175, 16)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "or_intro_r'"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__4_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__8_value),LEAN_SCALAR_PTR_LITERAL(88, 44, 62, 183, 159, 188, 9, 155)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "not in proof mode"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRight___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRight___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRight___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "target is not Lean.Order.join"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "join"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "CompleteLattice"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__5_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__3_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__7_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__6_value),LEAN_SCALAR_PTR_LITERAL(237, 11, 99, 181, 146, 193, 255, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__7_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__6_value),LEAN_SCALAR_PTR_LITERAL(183, 126, 61, 238, 189, 101, 107, 93)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__5_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__3_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__8_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__6_value),LEAN_SCALAR_PTR_LITERAL(237, 11, 99, 181, 146, 193, 255, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__8_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__8_value),LEAN_SCALAR_PTR_LITERAL(131, 148, 139, 7, 137, 249, 239, 112)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRight___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRight___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRight___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mleft"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(121, 82, 79, 80, 116, 5, 61, 30)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ProofMode"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabMLeftOpt"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__7_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__3_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__7_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__7_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__7_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(82, 203, 89, 34, 92, 223, 121, 122)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mright"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 115, 16, 212, 5, 110, 91, 32)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "elabMRightOpt"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__3_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__3_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__3_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(24, 40, 42, 16, 45, 127, 121, 105)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__1___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v_e_1_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; lean_object* v_mctx_7_; lean_object* v___x_8_; lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; lean_object* v_cache_12_; lean_object* v_zetaDeltaFVarIds_13_; lean_object* v_postponed_14_; lean_object* v_diag_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v___x_6_ = lean_st_ref_get(v___y_2_);
v_mctx_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc_ref(v_mctx_7_);
lean_dec(v___x_6_);
v___x_8_ = l_Lean_instantiateMVarsCore(v_mctx_7_, v_e_1_);
v_fst_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v___x_8_, 1);
lean_inc(v_snd_10_);
lean_dec_ref(v___x_8_);
v___x_11_ = lean_st_ref_take(v___y_2_);
v_cache_12_ = lean_ctor_get(v___x_11_, 1);
v_zetaDeltaFVarIds_13_ = lean_ctor_get(v___x_11_, 2);
v_postponed_14_ = lean_ctor_get(v___x_11_, 3);
v_diag_15_ = lean_ctor_get(v___x_11_, 4);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_24_ == 0)
{
lean_object* v_unused_25_; 
v_unused_25_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_25_);
v___x_17_ = v___x_11_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_diag_15_);
lean_inc(v_postponed_14_);
lean_inc(v_zetaDeltaFVarIds_13_);
lean_inc(v_cache_12_);
lean_dec(v___x_11_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_20_; 
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 0, v_snd_10_);
v___x_20_ = v___x_17_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_snd_10_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_cache_12_);
lean_ctor_set(v_reuseFailAlloc_23_, 2, v_zetaDeltaFVarIds_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 3, v_postponed_14_);
lean_ctor_set(v_reuseFailAlloc_23_, 4, v_diag_15_);
v___x_20_ = v_reuseFailAlloc_23_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_st_ref_set(v___y_2_, v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v_fst_9_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__1___redArg___boxed(lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__1___redArg(v_e_26_, v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__1(lean_object* v_e_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__1___redArg(v_e_30_, v___y_32_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__1___boxed(lean_object* v_e_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__1(v_e_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(lean_object* v_x_44_, lean_object* v_x_45_, lean_object* v_x_46_, lean_object* v_x_47_){
_start:
{
lean_object* v_ks_48_; lean_object* v_vs_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_73_; 
v_ks_48_ = lean_ctor_get(v_x_44_, 0);
v_vs_49_ = lean_ctor_get(v_x_44_, 1);
v_isSharedCheck_73_ = !lean_is_exclusive(v_x_44_);
if (v_isSharedCheck_73_ == 0)
{
v___x_51_ = v_x_44_;
v_isShared_52_ = v_isSharedCheck_73_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_vs_49_);
lean_inc(v_ks_48_);
lean_dec(v_x_44_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_73_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_53_ = lean_array_get_size(v_ks_48_);
v___x_54_ = lean_nat_dec_lt(v_x_45_, v___x_53_);
if (v___x_54_ == 0)
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_58_; 
lean_dec(v_x_45_);
v___x_55_ = lean_array_push(v_ks_48_, v_x_46_);
v___x_56_ = lean_array_push(v_vs_49_, v_x_47_);
if (v_isShared_52_ == 0)
{
lean_ctor_set(v___x_51_, 1, v___x_56_);
lean_ctor_set(v___x_51_, 0, v___x_55_);
v___x_58_ = v___x_51_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_59_; 
v_reuseFailAlloc_59_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_59_, 0, v___x_55_);
lean_ctor_set(v_reuseFailAlloc_59_, 1, v___x_56_);
v___x_58_ = v_reuseFailAlloc_59_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
return v___x_58_;
}
}
else
{
lean_object* v_k_x27_60_; uint8_t v___x_61_; 
v_k_x27_60_ = lean_array_fget_borrowed(v_ks_48_, v_x_45_);
v___x_61_ = l_Lean_instBEqMVarId_beq(v_x_46_, v_k_x27_60_);
if (v___x_61_ == 0)
{
lean_object* v___x_63_; 
if (v_isShared_52_ == 0)
{
v___x_63_ = v___x_51_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v_ks_48_);
lean_ctor_set(v_reuseFailAlloc_67_, 1, v_vs_49_);
v___x_63_ = v_reuseFailAlloc_67_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_unsigned_to_nat(1u);
v___x_65_ = lean_nat_add(v_x_45_, v___x_64_);
lean_dec(v_x_45_);
v_x_44_ = v___x_63_;
v_x_45_ = v___x_65_;
goto _start;
}
}
else
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_71_; 
v___x_68_ = lean_array_fset(v_ks_48_, v_x_45_, v_x_46_);
v___x_69_ = lean_array_fset(v_vs_49_, v_x_45_, v_x_47_);
lean_dec(v_x_45_);
if (v_isShared_52_ == 0)
{
lean_ctor_set(v___x_51_, 1, v___x_69_);
lean_ctor_set(v___x_51_, 0, v___x_68_);
v___x_71_ = v___x_51_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_72_; 
v_reuseFailAlloc_72_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_72_, 0, v___x_68_);
lean_ctor_set(v_reuseFailAlloc_72_, 1, v___x_69_);
v___x_71_ = v_reuseFailAlloc_72_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
return v___x_71_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__5___redArg(lean_object* v_n_74_, lean_object* v_k_75_, lean_object* v_v_76_){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_77_ = lean_unsigned_to_nat(0u);
v___x_78_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(v_n_74_, v___x_77_, v_k_75_, v_v_76_);
return v___x_78_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__0(void){
_start:
{
size_t v___x_79_; size_t v___x_80_; size_t v___x_81_; 
v___x_79_ = ((size_t)5ULL);
v___x_80_ = ((size_t)1ULL);
v___x_81_ = lean_usize_shift_left(v___x_80_, v___x_79_);
return v___x_81_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_82_; size_t v___x_83_; size_t v___x_84_; 
v___x_82_ = ((size_t)1ULL);
v___x_83_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_84_ = lean_usize_sub(v___x_83_, v___x_82_);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg(lean_object* v_x_86_, size_t v_x_87_, size_t v_x_88_, lean_object* v_x_89_, lean_object* v_x_90_){
_start:
{
if (lean_obj_tag(v_x_86_) == 0)
{
lean_object* v_es_91_; size_t v___x_92_; size_t v___x_93_; size_t v___x_94_; size_t v___x_95_; lean_object* v_j_96_; lean_object* v___x_97_; uint8_t v___x_98_; 
v_es_91_ = lean_ctor_get(v_x_86_, 0);
v___x_92_ = ((size_t)5ULL);
v___x_93_ = ((size_t)1ULL);
v___x_94_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_95_ = lean_usize_land(v_x_87_, v___x_94_);
v_j_96_ = lean_usize_to_nat(v___x_95_);
v___x_97_ = lean_array_get_size(v_es_91_);
v___x_98_ = lean_nat_dec_lt(v_j_96_, v___x_97_);
if (v___x_98_ == 0)
{
lean_dec(v_j_96_);
lean_dec(v_x_90_);
lean_dec(v_x_89_);
return v_x_86_;
}
else
{
lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_135_; 
lean_inc_ref(v_es_91_);
v_isSharedCheck_135_ = !lean_is_exclusive(v_x_86_);
if (v_isSharedCheck_135_ == 0)
{
lean_object* v_unused_136_; 
v_unused_136_ = lean_ctor_get(v_x_86_, 0);
lean_dec(v_unused_136_);
v___x_100_ = v_x_86_;
v_isShared_101_ = v_isSharedCheck_135_;
goto v_resetjp_99_;
}
else
{
lean_dec(v_x_86_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_135_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v_v_102_; lean_object* v___x_103_; lean_object* v_xs_x27_104_; lean_object* v___y_106_; 
v_v_102_ = lean_array_fget(v_es_91_, v_j_96_);
v___x_103_ = lean_box(0);
v_xs_x27_104_ = lean_array_fset(v_es_91_, v_j_96_, v___x_103_);
switch(lean_obj_tag(v_v_102_))
{
case 0:
{
lean_object* v_key_111_; lean_object* v_val_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_122_; 
v_key_111_ = lean_ctor_get(v_v_102_, 0);
v_val_112_ = lean_ctor_get(v_v_102_, 1);
v_isSharedCheck_122_ = !lean_is_exclusive(v_v_102_);
if (v_isSharedCheck_122_ == 0)
{
v___x_114_ = v_v_102_;
v_isShared_115_ = v_isSharedCheck_122_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_val_112_);
lean_inc(v_key_111_);
lean_dec(v_v_102_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_122_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
uint8_t v___x_116_; 
v___x_116_ = l_Lean_instBEqMVarId_beq(v_x_89_, v_key_111_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; lean_object* v___x_118_; 
lean_del_object(v___x_114_);
v___x_117_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_111_, v_val_112_, v_x_89_, v_x_90_);
v___x_118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
v___y_106_ = v___x_118_;
goto v___jp_105_;
}
else
{
lean_object* v___x_120_; 
lean_dec(v_val_112_);
lean_dec(v_key_111_);
if (v_isShared_115_ == 0)
{
lean_ctor_set(v___x_114_, 1, v_x_90_);
lean_ctor_set(v___x_114_, 0, v_x_89_);
v___x_120_ = v___x_114_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_x_89_);
lean_ctor_set(v_reuseFailAlloc_121_, 1, v_x_90_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
v___y_106_ = v___x_120_;
goto v___jp_105_;
}
}
}
}
case 1:
{
lean_object* v_node_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_133_; 
v_node_123_ = lean_ctor_get(v_v_102_, 0);
v_isSharedCheck_133_ = !lean_is_exclusive(v_v_102_);
if (v_isSharedCheck_133_ == 0)
{
v___x_125_ = v_v_102_;
v_isShared_126_ = v_isSharedCheck_133_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_node_123_);
lean_dec(v_v_102_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_133_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
size_t v___x_127_; size_t v___x_128_; lean_object* v___x_129_; lean_object* v___x_131_; 
v___x_127_ = lean_usize_shift_right(v_x_87_, v___x_92_);
v___x_128_ = lean_usize_add(v_x_88_, v___x_93_);
v___x_129_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg(v_node_123_, v___x_127_, v___x_128_, v_x_89_, v_x_90_);
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 0, v___x_129_);
v___x_131_ = v___x_125_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v___x_129_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
v___y_106_ = v___x_131_;
goto v___jp_105_;
}
}
}
default: 
{
lean_object* v___x_134_; 
v___x_134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_134_, 0, v_x_89_);
lean_ctor_set(v___x_134_, 1, v_x_90_);
v___y_106_ = v___x_134_;
goto v___jp_105_;
}
}
v___jp_105_:
{
lean_object* v___x_107_; lean_object* v___x_109_; 
v___x_107_ = lean_array_fset(v_xs_x27_104_, v_j_96_, v___y_106_);
lean_dec(v_j_96_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 0, v___x_107_);
v___x_109_ = v___x_100_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v___x_107_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
}
}
}
else
{
lean_object* v_ks_137_; lean_object* v_vs_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_158_; 
v_ks_137_ = lean_ctor_get(v_x_86_, 0);
v_vs_138_ = lean_ctor_get(v_x_86_, 1);
v_isSharedCheck_158_ = !lean_is_exclusive(v_x_86_);
if (v_isSharedCheck_158_ == 0)
{
v___x_140_ = v_x_86_;
v_isShared_141_ = v_isSharedCheck_158_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_vs_138_);
lean_inc(v_ks_137_);
lean_dec(v_x_86_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_158_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_143_; 
if (v_isShared_141_ == 0)
{
v___x_143_ = v___x_140_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_ks_137_);
lean_ctor_set(v_reuseFailAlloc_157_, 1, v_vs_138_);
v___x_143_ = v_reuseFailAlloc_157_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
lean_object* v_newNode_144_; uint8_t v___y_146_; size_t v___x_152_; uint8_t v___x_153_; 
v_newNode_144_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__5___redArg(v___x_143_, v_x_89_, v_x_90_);
v___x_152_ = ((size_t)7ULL);
v___x_153_ = lean_usize_dec_le(v___x_152_, v_x_88_);
if (v___x_153_ == 0)
{
lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_154_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_144_);
v___x_155_ = lean_unsigned_to_nat(4u);
v___x_156_ = lean_nat_dec_lt(v___x_154_, v___x_155_);
lean_dec(v___x_154_);
v___y_146_ = v___x_156_;
goto v___jp_145_;
}
else
{
v___y_146_ = v___x_153_;
goto v___jp_145_;
}
v___jp_145_:
{
if (v___y_146_ == 0)
{
lean_object* v_ks_147_; lean_object* v_vs_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v_ks_147_ = lean_ctor_get(v_newNode_144_, 0);
lean_inc_ref(v_ks_147_);
v_vs_148_ = lean_ctor_get(v_newNode_144_, 1);
lean_inc_ref(v_vs_148_);
lean_dec_ref(v_newNode_144_);
v___x_149_ = lean_unsigned_to_nat(0u);
v___x_150_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___closed__2);
v___x_151_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__6___redArg(v_x_88_, v_ks_147_, v_vs_148_, v___x_149_, v___x_150_);
lean_dec_ref(v_vs_148_);
lean_dec_ref(v_ks_147_);
return v___x_151_;
}
else
{
return v_newNode_144_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__6___redArg(size_t v_depth_159_, lean_object* v_keys_160_, lean_object* v_vals_161_, lean_object* v_i_162_, lean_object* v_entries_163_){
_start:
{
lean_object* v___x_164_; uint8_t v___x_165_; 
v___x_164_ = lean_array_get_size(v_keys_160_);
v___x_165_ = lean_nat_dec_lt(v_i_162_, v___x_164_);
if (v___x_165_ == 0)
{
lean_dec(v_i_162_);
return v_entries_163_;
}
else
{
lean_object* v_k_166_; lean_object* v_v_167_; uint64_t v___x_168_; size_t v_h_169_; size_t v___x_170_; lean_object* v___x_171_; size_t v___x_172_; size_t v___x_173_; size_t v___x_174_; size_t v_h_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v_k_166_ = lean_array_fget_borrowed(v_keys_160_, v_i_162_);
v_v_167_ = lean_array_fget_borrowed(v_vals_161_, v_i_162_);
v___x_168_ = l_Lean_instHashableMVarId_hash(v_k_166_);
v_h_169_ = lean_uint64_to_usize(v___x_168_);
v___x_170_ = ((size_t)5ULL);
v___x_171_ = lean_unsigned_to_nat(1u);
v___x_172_ = ((size_t)1ULL);
v___x_173_ = lean_usize_sub(v_depth_159_, v___x_172_);
v___x_174_ = lean_usize_mul(v___x_170_, v___x_173_);
v_h_175_ = lean_usize_shift_right(v_h_169_, v___x_174_);
v___x_176_ = lean_nat_add(v_i_162_, v___x_171_);
lean_dec(v_i_162_);
lean_inc(v_v_167_);
lean_inc(v_k_166_);
v___x_177_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg(v_entries_163_, v_h_175_, v_depth_159_, v_k_166_, v_v_167_);
v_i_162_ = v___x_176_;
v_entries_163_ = v___x_177_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__6___redArg___boxed(lean_object* v_depth_179_, lean_object* v_keys_180_, lean_object* v_vals_181_, lean_object* v_i_182_, lean_object* v_entries_183_){
_start:
{
size_t v_depth_boxed_184_; lean_object* v_res_185_; 
v_depth_boxed_184_ = lean_unbox_usize(v_depth_179_);
lean_dec(v_depth_179_);
v_res_185_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__6___redArg(v_depth_boxed_184_, v_keys_180_, v_vals_181_, v_i_182_, v_entries_183_);
lean_dec_ref(v_vals_181_);
lean_dec_ref(v_keys_180_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_x_186_, lean_object* v_x_187_, lean_object* v_x_188_, lean_object* v_x_189_, lean_object* v_x_190_){
_start:
{
size_t v_x_3572__boxed_191_; size_t v_x_3573__boxed_192_; lean_object* v_res_193_; 
v_x_3572__boxed_191_ = lean_unbox_usize(v_x_187_);
lean_dec(v_x_187_);
v_x_3573__boxed_192_ = lean_unbox_usize(v_x_188_);
lean_dec(v_x_188_);
v_res_193_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg(v_x_186_, v_x_3572__boxed_191_, v_x_3573__boxed_192_, v_x_189_, v_x_190_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3___redArg(lean_object* v_x_194_, lean_object* v_x_195_, lean_object* v_x_196_){
_start:
{
uint64_t v___x_197_; size_t v___x_198_; size_t v___x_199_; lean_object* v___x_200_; 
v___x_197_ = l_Lean_instHashableMVarId_hash(v_x_195_);
v___x_198_ = lean_uint64_to_usize(v___x_197_);
v___x_199_ = ((size_t)1ULL);
v___x_200_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg(v_x_194_, v___x_198_, v___x_199_, v_x_195_, v_x_196_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2___redArg(lean_object* v_mvarId_201_, lean_object* v_val_202_, lean_object* v___y_203_){
_start:
{
lean_object* v___x_205_; lean_object* v_mctx_206_; lean_object* v_cache_207_; lean_object* v_zetaDeltaFVarIds_208_; lean_object* v_postponed_209_; lean_object* v_diag_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_238_; 
v___x_205_ = lean_st_ref_take(v___y_203_);
v_mctx_206_ = lean_ctor_get(v___x_205_, 0);
v_cache_207_ = lean_ctor_get(v___x_205_, 1);
v_zetaDeltaFVarIds_208_ = lean_ctor_get(v___x_205_, 2);
v_postponed_209_ = lean_ctor_get(v___x_205_, 3);
v_diag_210_ = lean_ctor_get(v___x_205_, 4);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_238_ == 0)
{
v___x_212_ = v___x_205_;
v_isShared_213_ = v_isSharedCheck_238_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_diag_210_);
lean_inc(v_postponed_209_);
lean_inc(v_zetaDeltaFVarIds_208_);
lean_inc(v_cache_207_);
lean_inc(v_mctx_206_);
lean_dec(v___x_205_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_238_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v_depth_214_; lean_object* v_levelAssignDepth_215_; lean_object* v_lmvarCounter_216_; lean_object* v_mvarCounter_217_; lean_object* v_lDecls_218_; lean_object* v_decls_219_; lean_object* v_userNames_220_; lean_object* v_lAssignment_221_; lean_object* v_eAssignment_222_; lean_object* v_dAssignment_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_237_; 
v_depth_214_ = lean_ctor_get(v_mctx_206_, 0);
v_levelAssignDepth_215_ = lean_ctor_get(v_mctx_206_, 1);
v_lmvarCounter_216_ = lean_ctor_get(v_mctx_206_, 2);
v_mvarCounter_217_ = lean_ctor_get(v_mctx_206_, 3);
v_lDecls_218_ = lean_ctor_get(v_mctx_206_, 4);
v_decls_219_ = lean_ctor_get(v_mctx_206_, 5);
v_userNames_220_ = lean_ctor_get(v_mctx_206_, 6);
v_lAssignment_221_ = lean_ctor_get(v_mctx_206_, 7);
v_eAssignment_222_ = lean_ctor_get(v_mctx_206_, 8);
v_dAssignment_223_ = lean_ctor_get(v_mctx_206_, 9);
v_isSharedCheck_237_ = !lean_is_exclusive(v_mctx_206_);
if (v_isSharedCheck_237_ == 0)
{
v___x_225_ = v_mctx_206_;
v_isShared_226_ = v_isSharedCheck_237_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_dAssignment_223_);
lean_inc(v_eAssignment_222_);
lean_inc(v_lAssignment_221_);
lean_inc(v_userNames_220_);
lean_inc(v_decls_219_);
lean_inc(v_lDecls_218_);
lean_inc(v_mvarCounter_217_);
lean_inc(v_lmvarCounter_216_);
lean_inc(v_levelAssignDepth_215_);
lean_inc(v_depth_214_);
lean_dec(v_mctx_206_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_237_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v___x_227_; lean_object* v___x_229_; 
v___x_227_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3___redArg(v_eAssignment_222_, v_mvarId_201_, v_val_202_);
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 8, v___x_227_);
v___x_229_ = v___x_225_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_depth_214_);
lean_ctor_set(v_reuseFailAlloc_236_, 1, v_levelAssignDepth_215_);
lean_ctor_set(v_reuseFailAlloc_236_, 2, v_lmvarCounter_216_);
lean_ctor_set(v_reuseFailAlloc_236_, 3, v_mvarCounter_217_);
lean_ctor_set(v_reuseFailAlloc_236_, 4, v_lDecls_218_);
lean_ctor_set(v_reuseFailAlloc_236_, 5, v_decls_219_);
lean_ctor_set(v_reuseFailAlloc_236_, 6, v_userNames_220_);
lean_ctor_set(v_reuseFailAlloc_236_, 7, v_lAssignment_221_);
lean_ctor_set(v_reuseFailAlloc_236_, 8, v___x_227_);
lean_ctor_set(v_reuseFailAlloc_236_, 9, v_dAssignment_223_);
v___x_229_ = v_reuseFailAlloc_236_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
lean_object* v___x_231_; 
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 0, v___x_229_);
v___x_231_ = v___x_212_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_229_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v_cache_207_);
lean_ctor_set(v_reuseFailAlloc_235_, 2, v_zetaDeltaFVarIds_208_);
lean_ctor_set(v_reuseFailAlloc_235_, 3, v_postponed_209_);
lean_ctor_set(v_reuseFailAlloc_235_, 4, v_diag_210_);
v___x_231_ = v_reuseFailAlloc_235_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_232_ = lean_st_ref_set(v___y_203_, v___x_231_);
v___x_233_ = lean_box(0);
v___x_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
return v___x_234_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2___redArg___boxed(lean_object* v_mvarId_239_, lean_object* v_val_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2___redArg(v_mvarId_239_, v_val_240_, v___y_241_);
lean_dec(v___y_241_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0_spec__0(lean_object* v_msgData_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_){
_start:
{
lean_object* v___x_250_; lean_object* v_env_251_; lean_object* v___x_252_; lean_object* v_mctx_253_; lean_object* v_lctx_254_; lean_object* v_options_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_250_ = lean_st_ref_get(v___y_248_);
v_env_251_ = lean_ctor_get(v___x_250_, 0);
lean_inc_ref(v_env_251_);
lean_dec(v___x_250_);
v___x_252_ = lean_st_ref_get(v___y_246_);
v_mctx_253_ = lean_ctor_get(v___x_252_, 0);
lean_inc_ref(v_mctx_253_);
lean_dec(v___x_252_);
v_lctx_254_ = lean_ctor_get(v___y_245_, 2);
v_options_255_ = lean_ctor_get(v___y_247_, 2);
lean_inc_ref(v_options_255_);
lean_inc_ref(v_lctx_254_);
v___x_256_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_256_, 0, v_env_251_);
lean_ctor_set(v___x_256_, 1, v_mctx_253_);
lean_ctor_set(v___x_256_, 2, v_lctx_254_);
lean_ctor_set(v___x_256_, 3, v_options_255_);
v___x_257_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
lean_ctor_set(v___x_257_, 1, v_msgData_244_);
v___x_258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0_spec__0___boxed(lean_object* v_msgData_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0_spec__0(v_msgData_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_);
lean_dec(v___y_263_);
lean_dec_ref(v___y_262_);
lean_dec(v___y_261_);
lean_dec_ref(v___y_260_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0___redArg(lean_object* v_msg_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_){
_start:
{
lean_object* v_ref_272_; lean_object* v___x_273_; lean_object* v_a_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_282_; 
v_ref_272_ = lean_ctor_get(v___y_269_, 5);
v___x_273_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0_spec__0(v_msg_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_);
v_a_274_ = lean_ctor_get(v___x_273_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_273_);
if (v_isSharedCheck_282_ == 0)
{
v___x_276_ = v___x_273_;
v_isShared_277_ = v_isSharedCheck_282_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_a_274_);
lean_dec(v___x_273_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_282_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_278_; lean_object* v___x_280_; 
lean_inc(v_ref_272_);
v___x_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_278_, 0, v_ref_272_);
lean_ctor_set(v___x_278_, 1, v_a_274_);
if (v_isShared_277_ == 0)
{
lean_ctor_set_tag(v___x_276_, 1);
lean_ctor_set(v___x_276_, 0, v___x_278_);
v___x_280_ = v___x_276_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v___x_278_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0___redArg___boxed(lean_object* v_msg_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0___redArg(v_msg_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_);
lean_dec(v___y_287_);
lean_dec_ref(v___y_286_);
lean_dec(v___y_285_);
lean_dec_ref(v___y_284_);
return v_res_289_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__1(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__0));
v___x_292_ = l_Lean_stringToMessageData(v___x_291_);
return v___x_292_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__11(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__10));
v___x_311_ = l_Lean_stringToMessageData(v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore(uint8_t v_right_312_, lean_object* v_mvar_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v___y_320_; lean_object* v___y_321_; lean_object* v___y_322_; lean_object* v___y_323_; lean_object* v___x_326_; 
lean_inc(v_mvar_313_);
v___x_326_ = l_Lean_MVarId_getType(v_mvar_313_, v_a_314_, v_a_315_, v_a_316_, v_a_317_);
if (lean_obj_tag(v___x_326_) == 0)
{
lean_object* v_a_327_; lean_object* v___x_328_; lean_object* v_a_329_; lean_object* v___x_330_; 
v_a_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc(v_a_327_);
lean_dec_ref_known(v___x_326_, 1);
v___x_328_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__1___redArg(v_a_327_, v_a_315_);
v_a_329_ = lean_ctor_get(v___x_328_, 0);
lean_inc(v_a_329_);
lean_dec_ref(v___x_328_);
v___x_330_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_a_329_);
lean_dec(v_a_329_);
if (lean_obj_tag(v___x_330_) == 1)
{
lean_object* v_val_331_; lean_object* v_target_332_; 
v_val_331_ = lean_ctor_get(v___x_330_, 0);
lean_inc(v_val_331_);
lean_dec_ref_known(v___x_330_, 1);
v_target_332_ = lean_ctor_get(v_val_331_, 3);
lean_inc_ref(v_target_332_);
if (lean_obj_tag(v_target_332_) == 5)
{
lean_object* v_fn_333_; 
v_fn_333_ = lean_ctor_get(v_target_332_, 0);
lean_inc_ref(v_fn_333_);
if (lean_obj_tag(v_fn_333_) == 5)
{
lean_object* v_fn_334_; 
v_fn_334_ = lean_ctor_get(v_fn_333_, 0);
lean_inc_ref(v_fn_334_);
if (lean_obj_tag(v_fn_334_) == 5)
{
lean_object* v_fn_335_; 
v_fn_335_ = lean_ctor_get(v_fn_334_, 0);
if (lean_obj_tag(v_fn_335_) == 4)
{
lean_object* v_declName_336_; 
v_declName_336_ = lean_ctor_get(v_fn_335_, 0);
lean_inc(v_declName_336_);
if (lean_obj_tag(v_declName_336_) == 1)
{
lean_object* v_pre_337_; 
v_pre_337_ = lean_ctor_get(v_declName_336_, 0);
lean_inc(v_pre_337_);
if (lean_obj_tag(v_pre_337_) == 1)
{
lean_object* v_pre_338_; 
v_pre_338_ = lean_ctor_get(v_pre_337_, 0);
lean_inc(v_pre_338_);
if (lean_obj_tag(v_pre_338_) == 1)
{
lean_object* v_pre_339_; 
v_pre_339_ = lean_ctor_get(v_pre_338_, 0);
lean_inc(v_pre_339_);
if (lean_obj_tag(v_pre_339_) == 1)
{
lean_object* v_u_340_; lean_object* v_00_u03c3s_341_; lean_object* v_hyps_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_395_; 
v_u_340_ = lean_ctor_get(v_val_331_, 0);
v_00_u03c3s_341_ = lean_ctor_get(v_val_331_, 1);
v_hyps_342_ = lean_ctor_get(v_val_331_, 2);
v_isSharedCheck_395_ = !lean_is_exclusive(v_val_331_);
if (v_isSharedCheck_395_ == 0)
{
lean_object* v_unused_396_; 
v_unused_396_ = lean_ctor_get(v_val_331_, 3);
lean_dec(v_unused_396_);
v___x_344_ = v_val_331_;
v_isShared_345_ = v_isSharedCheck_395_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_hyps_342_);
lean_inc(v_00_u03c3s_341_);
lean_inc(v_u_340_);
lean_dec(v_val_331_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_395_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v_arg_346_; lean_object* v_arg_347_; lean_object* v_arg_348_; lean_object* v_str_349_; lean_object* v_str_350_; lean_object* v_str_351_; lean_object* v_pre_352_; lean_object* v_str_353_; lean_object* v_fst_355_; lean_object* v_snd_356_; 
v_arg_346_ = lean_ctor_get(v_target_332_, 1);
lean_inc_ref(v_arg_346_);
lean_dec_ref_known(v_target_332_, 2);
v_arg_347_ = lean_ctor_get(v_fn_333_, 1);
lean_inc_ref(v_arg_347_);
lean_dec_ref_known(v_fn_333_, 2);
v_arg_348_ = lean_ctor_get(v_fn_334_, 1);
lean_inc_ref(v_arg_348_);
lean_dec_ref_known(v_fn_334_, 2);
v_str_349_ = lean_ctor_get(v_declName_336_, 1);
lean_inc_ref(v_str_349_);
lean_dec_ref_known(v_declName_336_, 2);
v_str_350_ = lean_ctor_get(v_pre_337_, 1);
lean_inc_ref(v_str_350_);
lean_dec_ref_known(v_pre_337_, 2);
v_str_351_ = lean_ctor_get(v_pre_338_, 1);
lean_inc_ref(v_str_351_);
lean_dec_ref_known(v_pre_338_, 2);
v_pre_352_ = lean_ctor_get(v_pre_339_, 0);
lean_inc(v_pre_352_);
v_str_353_ = lean_ctor_get(v_pre_339_, 1);
lean_inc_ref(v_str_353_);
lean_dec_ref_known(v_pre_339_, 2);
if (lean_obj_tag(v_pre_352_) == 0)
{
lean_object* v___x_385_; uint8_t v___x_386_; 
v___x_385_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__2));
v___x_386_ = lean_string_dec_eq(v_str_353_, v___x_385_);
lean_dec_ref(v_str_353_);
if (v___x_386_ == 0)
{
lean_dec_ref(v_str_351_);
lean_dec_ref(v_str_350_);
lean_dec_ref(v_str_349_);
lean_dec_ref(v_arg_348_);
lean_dec_ref(v_arg_347_);
lean_dec_ref(v_arg_346_);
lean_del_object(v___x_344_);
lean_dec_ref(v_hyps_342_);
lean_dec_ref(v_00_u03c3s_341_);
lean_dec(v_u_340_);
lean_dec(v_mvar_313_);
v___y_320_ = v_a_314_;
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
goto v___jp_319_;
}
else
{
lean_object* v___x_387_; uint8_t v___x_388_; 
v___x_387_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__3));
v___x_388_ = lean_string_dec_eq(v_str_351_, v___x_387_);
lean_dec_ref(v_str_351_);
if (v___x_388_ == 0)
{
lean_dec_ref(v_str_350_);
lean_dec_ref(v_str_349_);
lean_dec_ref(v_arg_348_);
lean_dec_ref(v_arg_347_);
lean_dec_ref(v_arg_346_);
lean_del_object(v___x_344_);
lean_dec_ref(v_hyps_342_);
lean_dec_ref(v_00_u03c3s_341_);
lean_dec(v_u_340_);
lean_dec(v_mvar_313_);
v___y_320_ = v_a_314_;
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
goto v___jp_319_;
}
else
{
lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_389_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__4));
v___x_390_ = lean_string_dec_eq(v_str_350_, v___x_389_);
lean_dec_ref(v_str_350_);
if (v___x_390_ == 0)
{
lean_dec_ref(v_str_349_);
lean_dec_ref(v_arg_348_);
lean_dec_ref(v_arg_347_);
lean_dec_ref(v_arg_346_);
lean_del_object(v___x_344_);
lean_dec_ref(v_hyps_342_);
lean_dec_ref(v_00_u03c3s_341_);
lean_dec(v_u_340_);
lean_dec(v_mvar_313_);
v___y_320_ = v_a_314_;
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
goto v___jp_319_;
}
else
{
lean_object* v___x_391_; uint8_t v___x_392_; 
v___x_391_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__5));
v___x_392_ = lean_string_dec_eq(v_str_349_, v___x_391_);
lean_dec_ref(v_str_349_);
if (v___x_392_ == 0)
{
lean_dec_ref(v_arg_348_);
lean_dec_ref(v_arg_347_);
lean_dec_ref(v_arg_346_);
lean_del_object(v___x_344_);
lean_dec_ref(v_hyps_342_);
lean_dec_ref(v_00_u03c3s_341_);
lean_dec(v_u_340_);
lean_dec(v_mvar_313_);
v___y_320_ = v_a_314_;
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
goto v___jp_319_;
}
else
{
if (v_right_312_ == 0)
{
lean_object* v___x_393_; 
v___x_393_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__7));
lean_inc_ref(v_arg_347_);
v_fst_355_ = v___x_393_;
v_snd_356_ = v_arg_347_;
goto v___jp_354_;
}
else
{
lean_object* v___x_394_; 
v___x_394_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__9));
lean_inc_ref(v_arg_346_);
v_fst_355_ = v___x_394_;
v_snd_356_ = v_arg_346_;
goto v___jp_354_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_str_353_);
lean_dec(v_pre_352_);
lean_dec_ref(v_str_351_);
lean_dec_ref(v_str_350_);
lean_dec_ref(v_str_349_);
lean_dec_ref(v_arg_348_);
lean_dec_ref(v_arg_347_);
lean_dec_ref(v_arg_346_);
lean_del_object(v___x_344_);
lean_dec_ref(v_hyps_342_);
lean_dec_ref(v_00_u03c3s_341_);
lean_dec(v_u_340_);
lean_dec(v_mvar_313_);
v___y_320_ = v_a_314_;
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
goto v___jp_319_;
}
v___jp_354_:
{
lean_object* v___x_358_; 
lean_inc_ref(v_hyps_342_);
lean_inc(v_u_340_);
if (v_isShared_345_ == 0)
{
lean_ctor_set(v___x_344_, 3, v_snd_356_);
v___x_358_ = v___x_344_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_u_340_);
lean_ctor_set(v_reuseFailAlloc_384_, 1, v_00_u03c3s_341_);
lean_ctor_set(v_reuseFailAlloc_384_, 2, v_hyps_342_);
lean_ctor_set(v_reuseFailAlloc_384_, 3, v_snd_356_);
v___x_358_ = v_reuseFailAlloc_384_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_359_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_358_);
v___x_360_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_359_, v_pre_352_, v_a_314_, v_a_315_, v_a_316_, v_a_317_);
if (lean_obj_tag(v___x_360_) == 0)
{
lean_object* v_a_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_374_; 
v_a_361_ = lean_ctor_get(v___x_360_, 0);
lean_inc_n(v_a_361_, 2);
lean_dec_ref_known(v___x_360_, 1);
v___x_362_ = lean_box(0);
v___x_363_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_363_, 0, v_u_340_);
lean_ctor_set(v___x_363_, 1, v___x_362_);
lean_inc(v_fst_355_);
v___x_364_ = l_Lean_mkConst(v_fst_355_, v___x_363_);
v___x_365_ = l_Lean_mkApp5(v___x_364_, v_arg_348_, v_hyps_342_, v_arg_347_, v_arg_346_, v_a_361_);
v___x_366_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2___redArg(v_mvar_313_, v___x_365_, v_a_315_);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_374_ == 0)
{
lean_object* v_unused_375_; 
v_unused_375_ = lean_ctor_get(v___x_366_, 0);
lean_dec(v_unused_375_);
v___x_368_ = v___x_366_;
v_isShared_369_ = v_isSharedCheck_374_;
goto v_resetjp_367_;
}
else
{
lean_dec(v___x_366_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_374_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_370_ = l_Lean_Expr_mvarId_x21(v_a_361_);
lean_dec(v_a_361_);
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 0, v___x_370_);
v___x_372_ = v___x_368_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_370_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
else
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
lean_dec_ref(v_arg_348_);
lean_dec_ref(v_arg_347_);
lean_dec_ref(v_arg_346_);
lean_dec_ref(v_hyps_342_);
lean_dec(v_u_340_);
lean_dec(v_mvar_313_);
v_a_376_ = lean_ctor_get(v___x_360_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v___x_360_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_360_);
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
}
}
else
{
lean_dec_ref_known(v_pre_338_, 2);
lean_dec(v_pre_339_);
lean_dec_ref_known(v_pre_337_, 2);
lean_dec_ref_known(v_declName_336_, 2);
lean_dec_ref_known(v_fn_334_, 2);
lean_dec_ref_known(v_fn_333_, 2);
lean_dec_ref_known(v_target_332_, 2);
lean_dec(v_val_331_);
lean_dec(v_mvar_313_);
v___y_320_ = v_a_314_;
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
goto v___jp_319_;
}
}
else
{
lean_dec(v_pre_338_);
lean_dec_ref_known(v_pre_337_, 2);
lean_dec_ref_known(v_declName_336_, 2);
lean_dec_ref_known(v_fn_334_, 2);
lean_dec_ref_known(v_fn_333_, 2);
lean_dec_ref_known(v_target_332_, 2);
lean_dec(v_val_331_);
lean_dec(v_mvar_313_);
v___y_320_ = v_a_314_;
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
goto v___jp_319_;
}
}
else
{
lean_dec(v_pre_337_);
lean_dec_ref_known(v_declName_336_, 2);
lean_dec_ref_known(v_fn_334_, 2);
lean_dec_ref_known(v_fn_333_, 2);
lean_dec_ref_known(v_target_332_, 2);
lean_dec(v_val_331_);
lean_dec(v_mvar_313_);
v___y_320_ = v_a_314_;
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
goto v___jp_319_;
}
}
else
{
lean_dec(v_declName_336_);
lean_dec_ref_known(v_fn_334_, 2);
lean_dec_ref_known(v_fn_333_, 2);
lean_dec_ref_known(v_target_332_, 2);
lean_dec(v_val_331_);
lean_dec(v_mvar_313_);
v___y_320_ = v_a_314_;
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
goto v___jp_319_;
}
}
else
{
lean_dec_ref_known(v_fn_334_, 2);
lean_dec_ref_known(v_fn_333_, 2);
lean_dec_ref_known(v_target_332_, 2);
lean_dec(v_val_331_);
lean_dec(v_mvar_313_);
v___y_320_ = v_a_314_;
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
goto v___jp_319_;
}
}
else
{
lean_dec_ref(v_fn_334_);
lean_dec_ref_known(v_fn_333_, 2);
lean_dec_ref_known(v_target_332_, 2);
lean_dec(v_val_331_);
lean_dec(v_mvar_313_);
v___y_320_ = v_a_314_;
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
goto v___jp_319_;
}
}
else
{
lean_dec_ref_known(v_target_332_, 2);
lean_dec_ref(v_fn_333_);
lean_dec(v_val_331_);
lean_dec(v_mvar_313_);
v___y_320_ = v_a_314_;
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
goto v___jp_319_;
}
}
else
{
lean_dec_ref(v_target_332_);
lean_dec(v_val_331_);
lean_dec(v_mvar_313_);
v___y_320_ = v_a_314_;
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
goto v___jp_319_;
}
}
else
{
lean_object* v___x_397_; lean_object* v___x_398_; 
lean_dec(v___x_330_);
lean_dec(v_mvar_313_);
v___x_397_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__11);
v___x_398_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0___redArg(v___x_397_, v_a_314_, v_a_315_, v_a_316_, v_a_317_);
return v___x_398_;
}
}
else
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_406_; 
lean_dec(v_mvar_313_);
v_a_399_ = lean_ctor_get(v___x_326_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_326_);
if (v_isSharedCheck_406_ == 0)
{
v___x_401_ = v___x_326_;
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_326_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_a_399_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
v___jp_319_:
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__1);
v___x_325_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0___redArg(v___x_324_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
return v___x_325_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___boxed(lean_object* v_right_407_, lean_object* v_mvar_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_){
_start:
{
uint8_t v_right_boxed_414_; lean_object* v_res_415_; 
v_right_boxed_414_ = lean_unbox(v_right_407_);
v_res_415_ = l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore(v_right_boxed_414_, v_mvar_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_);
lean_dec(v_a_412_);
lean_dec_ref(v_a_411_);
lean_dec(v_a_410_);
lean_dec_ref(v_a_409_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0(lean_object* v_00_u03b1_416_, lean_object* v_msg_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0___redArg(v_msg_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0___boxed(lean_object* v_00_u03b1_424_, lean_object* v_msg_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0(v_00_u03b1_424_, v_msg_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
lean_dec(v___y_427_);
lean_dec_ref(v___y_426_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2(lean_object* v_mvarId_432_, lean_object* v_val_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2___redArg(v_mvarId_432_, v_val_433_, v___y_435_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2___boxed(lean_object* v_mvarId_440_, lean_object* v_val_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2(v_mvarId_440_, v_val_441_, v___y_442_, v___y_443_, v___y_444_, v___y_445_);
lean_dec(v___y_445_);
lean_dec_ref(v___y_444_);
lean_dec(v___y_443_);
lean_dec_ref(v___y_442_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3(lean_object* v_00_u03b2_448_, lean_object* v_x_449_, lean_object* v_x_450_, lean_object* v_x_451_){
_start:
{
lean_object* v___x_452_; 
v___x_452_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3___redArg(v_x_449_, v_x_450_, v_x_451_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_453_, lean_object* v_x_454_, size_t v_x_455_, size_t v_x_456_, lean_object* v_x_457_, lean_object* v_x_458_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___redArg(v_x_454_, v_x_455_, v_x_456_, v_x_457_, v_x_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_460_, lean_object* v_x_461_, lean_object* v_x_462_, lean_object* v_x_463_, lean_object* v_x_464_, lean_object* v_x_465_){
_start:
{
size_t v_x_4135__boxed_466_; size_t v_x_4136__boxed_467_; lean_object* v_res_468_; 
v_x_4135__boxed_466_ = lean_unbox_usize(v_x_462_);
lean_dec(v_x_462_);
v_x_4136__boxed_467_ = lean_unbox_usize(v_x_463_);
lean_dec(v_x_463_);
v_res_468_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4(v_00_u03b2_460_, v_x_461_, v_x_4135__boxed_466_, v_x_4136__boxed_467_, v_x_464_, v_x_465_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_469_, lean_object* v_n_470_, lean_object* v_k_471_, lean_object* v_v_472_){
_start:
{
lean_object* v___x_473_; 
v___x_473_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__5___redArg(v_n_470_, v_k_471_, v_v_472_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_474_, size_t v_depth_475_, lean_object* v_keys_476_, lean_object* v_vals_477_, lean_object* v_heq_478_, lean_object* v_i_479_, lean_object* v_entries_480_){
_start:
{
lean_object* v___x_481_; 
v___x_481_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__6___redArg(v_depth_475_, v_keys_476_, v_vals_477_, v_i_479_, v_entries_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__6___boxed(lean_object* v_00_u03b2_482_, lean_object* v_depth_483_, lean_object* v_keys_484_, lean_object* v_vals_485_, lean_object* v_heq_486_, lean_object* v_i_487_, lean_object* v_entries_488_){
_start:
{
size_t v_depth_boxed_489_; lean_object* v_res_490_; 
v_depth_boxed_489_ = lean_unbox_usize(v_depth_483_);
lean_dec(v_depth_483_);
v_res_490_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__6(v_00_u03b2_482_, v_depth_boxed_489_, v_keys_484_, v_vals_485_, v_heq_486_, v_i_487_, v_entries_488_);
lean_dec_ref(v_vals_485_);
lean_dec_ref(v_keys_484_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_491_, lean_object* v_x_492_, lean_object* v_x_493_, lean_object* v_x_494_, lean_object* v_x_495_){
_start:
{
lean_object* v___x_496_; 
v___x_496_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(v_x_492_, v_x_493_, v_x_494_, v_x_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___redArg___lam__0(lean_object* v_x_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_){
_start:
{
lean_object* v___x_507_; 
lean_inc(v___y_501_);
lean_inc_ref(v___y_500_);
lean_inc(v___y_499_);
lean_inc_ref(v___y_498_);
v___x_507_ = lean_apply_9(v_x_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, lean_box(0));
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___redArg___lam__0___boxed(lean_object* v_x_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___redArg___lam__0(v_x_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_509_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___redArg(lean_object* v_mvarId_519_, lean_object* v_x_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_){
_start:
{
lean_object* v___f_530_; lean_object* v___x_531_; 
lean_inc(v___y_524_);
lean_inc_ref(v___y_523_);
lean_inc(v___y_522_);
lean_inc_ref(v___y_521_);
v___f_530_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_530_, 0, v_x_520_);
lean_closure_set(v___f_530_, 1, v___y_521_);
lean_closure_set(v___f_530_, 2, v___y_522_);
lean_closure_set(v___f_530_, 3, v___y_523_);
lean_closure_set(v___f_530_, 4, v___y_524_);
v___x_531_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_519_, v___f_530_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
if (lean_obj_tag(v___x_531_) == 0)
{
return v___x_531_;
}
else
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_531_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_531_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_a_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___redArg___boxed(lean_object* v_mvarId_540_, lean_object* v_x_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___redArg(v_mvarId_540_, v_x_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_);
lean_dec(v___y_549_);
lean_dec_ref(v___y_548_);
lean_dec(v___y_547_);
lean_dec_ref(v___y_546_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0(lean_object* v_00_u03b1_552_, lean_object* v_mvarId_553_, lean_object* v_x_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_){
_start:
{
lean_object* v___x_564_; 
v___x_564_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___redArg(v_mvarId_553_, v_x_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___boxed(lean_object* v_00_u03b1_565_, lean_object* v_mvarId_566_, lean_object* v_x_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0(v_00_u03b1_565_, v_mvarId_566_, v_x_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_);
lean_dec(v___y_575_);
lean_dec_ref(v___y_574_);
lean_dec(v___y_573_);
lean_dec_ref(v___y_572_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_568_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft___redArg___lam__0(uint8_t v___x_578_, lean_object* v_a_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore(v___x_578_, v_a_579_, v___y_584_, v___y_585_, v___y_586_, v___y_587_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v_a_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v_a_590_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_a_590_);
lean_dec_ref_known(v___x_589_, 1);
v___x_591_ = lean_box(0);
v___x_592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_592_, 0, v_a_590_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
v___x_593_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_592_, v___y_581_, v___y_584_, v___y_585_, v___y_586_, v___y_587_);
return v___x_593_;
}
else
{
lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_601_; 
v_a_594_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_601_ == 0)
{
v___x_596_ = v___x_589_;
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___x_589_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_597_ == 0)
{
v___x_599_ = v___x_596_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_a_594_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft___redArg___lam__0___boxed(lean_object* v___x_602_, lean_object* v_a_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_){
_start:
{
uint8_t v___x_1888__boxed_613_; lean_object* v_res_614_; 
v___x_1888__boxed_613_ = lean_unbox(v___x_602_);
v_res_614_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft___redArg___lam__0(v___x_1888__boxed_613_, v_a_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_, v___y_611_);
lean_dec(v___y_611_);
lean_dec_ref(v___y_610_);
lean_dec(v___y_609_);
lean_dec_ref(v___y_608_);
lean_dec(v___y_607_);
lean_dec_ref(v___y_606_);
lean_dec(v___y_605_);
lean_dec_ref(v___y_604_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft___redArg(lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_){
_start:
{
lean_object* v___x_624_; 
v___x_624_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_616_, v_a_619_, v_a_620_, v_a_621_, v_a_622_);
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_a_625_; uint8_t v___x_626_; lean_object* v___x_627_; lean_object* v___f_628_; lean_object* v___x_629_; 
v_a_625_ = lean_ctor_get(v___x_624_, 0);
lean_inc_n(v_a_625_, 2);
lean_dec_ref_known(v___x_624_, 1);
v___x_626_ = 0;
v___x_627_ = lean_box(v___x_626_);
v___f_628_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft___redArg___lam__0___boxed), 11, 2);
lean_closure_set(v___f_628_, 0, v___x_627_);
lean_closure_set(v___f_628_, 1, v_a_625_);
v___x_629_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___redArg(v_a_625_, v___f_628_, v_a_615_, v_a_616_, v_a_617_, v_a_618_, v_a_619_, v_a_620_, v_a_621_, v_a_622_);
return v___x_629_;
}
else
{
lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_637_; 
v_a_630_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_637_ == 0)
{
v___x_632_ = v___x_624_;
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v___x_624_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_635_; 
if (v_isShared_633_ == 0)
{
v___x_635_ = v___x_632_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_a_630_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft___redArg___boxed(lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft___redArg(v_a_638_, v_a_639_, v_a_640_, v_a_641_, v_a_642_, v_a_643_, v_a_644_, v_a_645_);
lean_dec(v_a_645_);
lean_dec_ref(v_a_644_);
lean_dec(v_a_643_);
lean_dec_ref(v_a_642_);
lean_dec(v_a_641_);
lean_dec_ref(v_a_640_);
lean_dec(v_a_639_);
lean_dec_ref(v_a_638_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft(lean_object* v_x_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_, lean_object* v_a_656_){
_start:
{
lean_object* v___x_658_; 
v___x_658_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft___redArg(v_a_649_, v_a_650_, v_a_651_, v_a_652_, v_a_653_, v_a_654_, v_a_655_, v_a_656_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft___boxed(lean_object* v_x_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_){
_start:
{
lean_object* v_res_669_; 
v_res_669_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft(v_x_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_, v_a_665_, v_a_666_, v_a_667_);
lean_dec(v_a_667_);
lean_dec_ref(v_a_666_);
lean_dec(v_a_665_);
lean_dec_ref(v_a_664_);
lean_dec(v_a_663_);
lean_dec_ref(v_a_662_);
lean_dec(v_a_661_);
lean_dec_ref(v_a_660_);
lean_dec(v_x_659_);
return v_res_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRight___redArg(lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_671_, v_a_674_, v_a_675_, v_a_676_, v_a_677_);
if (lean_obj_tag(v___x_679_) == 0)
{
lean_object* v_a_680_; uint8_t v___x_681_; lean_object* v___x_682_; lean_object* v___f_683_; lean_object* v___x_684_; 
v_a_680_ = lean_ctor_get(v___x_679_, 0);
lean_inc_n(v_a_680_, 2);
lean_dec_ref_known(v___x_679_, 1);
v___x_681_ = 1;
v___x_682_ = lean_box(v___x_681_);
v___f_683_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft___redArg___lam__0___boxed), 11, 2);
lean_closure_set(v___f_683_, 0, v___x_682_);
lean_closure_set(v___f_683_, 1, v_a_680_);
v___x_684_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___redArg(v_a_680_, v___f_683_, v_a_670_, v_a_671_, v_a_672_, v_a_673_, v_a_674_, v_a_675_, v_a_676_, v_a_677_);
return v___x_684_;
}
else
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_692_; 
v_a_685_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_692_ == 0)
{
v___x_687_ = v___x_679_;
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v___x_679_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_a_685_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRight___redArg___boxed(lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRight___redArg(v_a_693_, v_a_694_, v_a_695_, v_a_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_);
lean_dec(v_a_700_);
lean_dec_ref(v_a_699_);
lean_dec(v_a_698_);
lean_dec_ref(v_a_697_);
lean_dec(v_a_696_);
lean_dec_ref(v_a_695_);
lean_dec(v_a_694_);
lean_dec_ref(v_a_693_);
return v_res_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRight(lean_object* v_x_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_){
_start:
{
lean_object* v___x_713_; 
v___x_713_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRight___redArg(v_a_704_, v_a_705_, v_a_706_, v_a_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRight___boxed(lean_object* v_x_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_){
_start:
{
lean_object* v_res_724_; 
v_res_724_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRight(v_x_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_, v_a_722_);
lean_dec(v_a_722_);
lean_dec_ref(v_a_721_);
lean_dec(v_a_720_);
lean_dec_ref(v_a_719_);
lean_dec(v_a_718_);
lean_dec_ref(v_a_717_);
lean_dec(v_a_716_);
lean_dec_ref(v_a_715_);
lean_dec(v_x_714_);
return v_res_724_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__1(void){
_start:
{
lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_726_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__0));
v___x_727_ = l_Lean_stringToMessageData(v___x_726_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore(uint8_t v_right_745_, lean_object* v_mvar_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_){
_start:
{
lean_object* v___y_753_; lean_object* v___y_754_; lean_object* v___y_755_; lean_object* v___y_756_; lean_object* v___x_759_; 
lean_inc(v_mvar_746_);
v___x_759_ = l_Lean_MVarId_getType(v_mvar_746_, v_a_747_, v_a_748_, v_a_749_, v_a_750_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v_a_760_; lean_object* v___x_761_; lean_object* v_a_762_; lean_object* v___x_763_; 
v_a_760_ = lean_ctor_get(v___x_759_, 0);
lean_inc(v_a_760_);
lean_dec_ref_known(v___x_759_, 1);
v___x_761_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__1___redArg(v_a_760_, v_a_748_);
v_a_762_ = lean_ctor_get(v___x_761_, 0);
lean_inc(v_a_762_);
lean_dec_ref(v___x_761_);
v___x_763_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseMGoal_x3f(v_a_762_);
lean_dec(v_a_762_);
if (lean_obj_tag(v___x_763_) == 1)
{
lean_object* v_val_764_; lean_object* v_target_765_; 
v_val_764_ = lean_ctor_get(v___x_763_, 0);
lean_inc(v_val_764_);
lean_dec_ref_known(v___x_763_, 1);
v_target_765_ = lean_ctor_get(v_val_764_, 4);
lean_inc_ref(v_target_765_);
if (lean_obj_tag(v_target_765_) == 5)
{
lean_object* v_fn_766_; 
v_fn_766_ = lean_ctor_get(v_target_765_, 0);
lean_inc_ref(v_fn_766_);
if (lean_obj_tag(v_fn_766_) == 5)
{
lean_object* v_u_767_; lean_object* v_l_768_; lean_object* v_cl_769_; lean_object* v_hyps_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_831_; 
v_u_767_ = lean_ctor_get(v_val_764_, 0);
v_l_768_ = lean_ctor_get(v_val_764_, 1);
v_cl_769_ = lean_ctor_get(v_val_764_, 2);
v_hyps_770_ = lean_ctor_get(v_val_764_, 3);
v_isSharedCheck_831_ = !lean_is_exclusive(v_val_764_);
if (v_isSharedCheck_831_ == 0)
{
lean_object* v_unused_832_; 
v_unused_832_ = lean_ctor_get(v_val_764_, 4);
lean_dec(v_unused_832_);
v___x_772_ = v_val_764_;
v_isShared_773_ = v_isSharedCheck_831_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_hyps_770_);
lean_inc(v_cl_769_);
lean_inc(v_l_768_);
lean_inc(v_u_767_);
lean_dec(v_val_764_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_831_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v_arg_774_; lean_object* v_fn_775_; lean_object* v_arg_776_; lean_object* v___y_778_; lean_object* v___y_779_; lean_object* v___y_780_; 
v_arg_774_ = lean_ctor_get(v_target_765_, 1);
lean_inc_ref(v_arg_774_);
lean_dec_ref_known(v_target_765_, 2);
v_fn_775_ = lean_ctor_get(v_fn_766_, 0);
lean_inc_ref(v_fn_775_);
v_arg_776_ = lean_ctor_get(v_fn_766_, 1);
lean_inc_ref(v_arg_776_);
lean_dec_ref_known(v_fn_766_, 2);
if (lean_obj_tag(v_fn_775_) == 5)
{
lean_object* v_fn_795_; 
v_fn_795_ = lean_ctor_get(v_fn_775_, 0);
lean_inc_ref(v_fn_795_);
lean_dec_ref_known(v_fn_775_, 2);
if (lean_obj_tag(v_fn_795_) == 5)
{
lean_object* v_fn_796_; 
v_fn_796_ = lean_ctor_get(v_fn_795_, 0);
lean_inc_ref(v_fn_796_);
lean_dec_ref_known(v_fn_795_, 2);
if (lean_obj_tag(v_fn_796_) == 4)
{
lean_object* v_declName_797_; 
v_declName_797_ = lean_ctor_get(v_fn_796_, 0);
lean_inc(v_declName_797_);
lean_dec_ref_known(v_fn_796_, 2);
if (lean_obj_tag(v_declName_797_) == 1)
{
lean_object* v_pre_798_; 
v_pre_798_ = lean_ctor_get(v_declName_797_, 0);
lean_inc(v_pre_798_);
if (lean_obj_tag(v_pre_798_) == 1)
{
lean_object* v_pre_799_; 
v_pre_799_ = lean_ctor_get(v_pre_798_, 0);
lean_inc(v_pre_799_);
if (lean_obj_tag(v_pre_799_) == 1)
{
lean_object* v_str_800_; lean_object* v_str_801_; lean_object* v_pre_802_; lean_object* v_str_803_; lean_object* v_fst_805_; lean_object* v_snd_806_; 
v_str_800_ = lean_ctor_get(v_declName_797_, 1);
lean_inc_ref(v_str_800_);
lean_dec_ref_known(v_declName_797_, 2);
v_str_801_ = lean_ctor_get(v_pre_798_, 1);
lean_inc_ref(v_str_801_);
lean_dec_ref_known(v_pre_798_, 2);
v_pre_802_ = lean_ctor_get(v_pre_799_, 0);
lean_inc(v_pre_802_);
v_str_803_ = lean_ctor_get(v_pre_799_, 1);
lean_inc_ref(v_str_803_);
lean_dec_ref_known(v_pre_799_, 2);
if (lean_obj_tag(v_pre_802_) == 0)
{
lean_object* v___x_823_; uint8_t v___x_824_; 
v___x_823_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__2));
v___x_824_ = lean_string_dec_eq(v_str_803_, v___x_823_);
lean_dec_ref(v_str_803_);
if (v___x_824_ == 0)
{
lean_dec_ref(v_str_801_);
lean_dec_ref(v_str_800_);
lean_dec_ref(v_arg_776_);
lean_dec_ref(v_arg_774_);
lean_del_object(v___x_772_);
lean_dec_ref(v_hyps_770_);
lean_dec_ref(v_cl_769_);
lean_dec_ref(v_l_768_);
lean_dec(v_u_767_);
lean_dec(v_mvar_746_);
v___y_753_ = v_a_747_;
v___y_754_ = v_a_748_;
v___y_755_ = v_a_749_;
v___y_756_ = v_a_750_;
goto v___jp_752_;
}
else
{
lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_825_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__3));
v___x_826_ = lean_string_dec_eq(v_str_801_, v___x_825_);
lean_dec_ref(v_str_801_);
if (v___x_826_ == 0)
{
lean_dec_ref(v_str_800_);
lean_dec_ref(v_arg_776_);
lean_dec_ref(v_arg_774_);
lean_del_object(v___x_772_);
lean_dec_ref(v_hyps_770_);
lean_dec_ref(v_cl_769_);
lean_dec_ref(v_l_768_);
lean_dec(v_u_767_);
lean_dec(v_mvar_746_);
v___y_753_ = v_a_747_;
v___y_754_ = v_a_748_;
v___y_755_ = v_a_749_;
v___y_756_ = v_a_750_;
goto v___jp_752_;
}
else
{
lean_object* v___x_827_; uint8_t v___x_828_; 
v___x_827_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__4));
v___x_828_ = lean_string_dec_eq(v_str_800_, v___x_827_);
lean_dec_ref(v_str_800_);
if (v___x_828_ == 0)
{
lean_dec_ref(v_arg_776_);
lean_dec_ref(v_arg_774_);
lean_del_object(v___x_772_);
lean_dec_ref(v_hyps_770_);
lean_dec_ref(v_cl_769_);
lean_dec_ref(v_l_768_);
lean_dec(v_u_767_);
lean_dec(v_mvar_746_);
v___y_753_ = v_a_747_;
v___y_754_ = v_a_748_;
v___y_755_ = v_a_749_;
v___y_756_ = v_a_750_;
goto v___jp_752_;
}
else
{
if (v_right_745_ == 0)
{
lean_object* v___x_829_; 
v___x_829_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__7));
lean_inc_ref(v_arg_776_);
v_fst_805_ = v___x_829_;
v_snd_806_ = v_arg_776_;
goto v___jp_804_;
}
else
{
lean_object* v___x_830_; 
v___x_830_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__8));
lean_inc_ref(v_arg_774_);
v_fst_805_ = v___x_830_;
v_snd_806_ = v_arg_774_;
goto v___jp_804_;
}
}
}
}
}
else
{
lean_dec_ref(v_str_803_);
lean_dec(v_pre_802_);
lean_dec_ref(v_str_801_);
lean_dec_ref(v_str_800_);
lean_dec_ref(v_arg_776_);
lean_dec_ref(v_arg_774_);
lean_del_object(v___x_772_);
lean_dec_ref(v_hyps_770_);
lean_dec_ref(v_cl_769_);
lean_dec_ref(v_l_768_);
lean_dec(v_u_767_);
lean_dec(v_mvar_746_);
v___y_753_ = v_a_747_;
v___y_754_ = v_a_748_;
v___y_755_ = v_a_749_;
v___y_756_ = v_a_750_;
goto v___jp_752_;
}
v___jp_804_:
{
lean_object* v___x_808_; 
lean_inc_ref(v_hyps_770_);
lean_inc_ref(v_cl_769_);
lean_inc_ref(v_l_768_);
lean_inc(v_u_767_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 4, v_snd_806_);
v___x_808_ = v___x_772_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v_u_767_);
lean_ctor_set(v_reuseFailAlloc_822_, 1, v_l_768_);
lean_ctor_set(v_reuseFailAlloc_822_, 2, v_cl_769_);
lean_ctor_set(v_reuseFailAlloc_822_, 3, v_hyps_770_);
lean_ctor_set(v_reuseFailAlloc_822_, 4, v_snd_806_);
v___x_808_ = v_reuseFailAlloc_822_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_809_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(v___x_808_);
v___x_810_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_809_, v_pre_802_, v_a_747_, v_a_748_, v_a_749_, v_a_750_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_811_; lean_object* v___x_812_; 
v_a_811_ = lean_ctor_get(v___x_810_, 0);
lean_inc(v_a_811_);
lean_dec_ref_known(v___x_810_, 1);
v___x_812_ = l_Lean_Level_dec(v_u_767_);
if (lean_obj_tag(v___x_812_) == 0)
{
v___y_778_ = v_fst_805_;
v___y_779_ = v_a_811_;
v___y_780_ = v_u_767_;
goto v___jp_777_;
}
else
{
lean_object* v_val_813_; 
lean_dec(v_u_767_);
v_val_813_ = lean_ctor_get(v___x_812_, 0);
lean_inc(v_val_813_);
lean_dec_ref_known(v___x_812_, 1);
v___y_778_ = v_fst_805_;
v___y_779_ = v_a_811_;
v___y_780_ = v_val_813_;
goto v___jp_777_;
}
}
else
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
lean_dec_ref(v_arg_776_);
lean_dec_ref(v_arg_774_);
lean_dec_ref(v_hyps_770_);
lean_dec_ref(v_cl_769_);
lean_dec_ref(v_l_768_);
lean_dec(v_u_767_);
lean_dec(v_mvar_746_);
v_a_814_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_810_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_810_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
}
}
else
{
lean_dec(v_pre_799_);
lean_dec_ref_known(v_pre_798_, 2);
lean_dec_ref_known(v_declName_797_, 2);
lean_dec_ref(v_arg_776_);
lean_dec_ref(v_arg_774_);
lean_del_object(v___x_772_);
lean_dec_ref(v_hyps_770_);
lean_dec_ref(v_cl_769_);
lean_dec_ref(v_l_768_);
lean_dec(v_u_767_);
lean_dec(v_mvar_746_);
v___y_753_ = v_a_747_;
v___y_754_ = v_a_748_;
v___y_755_ = v_a_749_;
v___y_756_ = v_a_750_;
goto v___jp_752_;
}
}
else
{
lean_dec(v_pre_798_);
lean_dec_ref_known(v_declName_797_, 2);
lean_dec_ref(v_arg_776_);
lean_dec_ref(v_arg_774_);
lean_del_object(v___x_772_);
lean_dec_ref(v_hyps_770_);
lean_dec_ref(v_cl_769_);
lean_dec_ref(v_l_768_);
lean_dec(v_u_767_);
lean_dec(v_mvar_746_);
v___y_753_ = v_a_747_;
v___y_754_ = v_a_748_;
v___y_755_ = v_a_749_;
v___y_756_ = v_a_750_;
goto v___jp_752_;
}
}
else
{
lean_dec(v_declName_797_);
lean_dec_ref(v_arg_776_);
lean_dec_ref(v_arg_774_);
lean_del_object(v___x_772_);
lean_dec_ref(v_hyps_770_);
lean_dec_ref(v_cl_769_);
lean_dec_ref(v_l_768_);
lean_dec(v_u_767_);
lean_dec(v_mvar_746_);
v___y_753_ = v_a_747_;
v___y_754_ = v_a_748_;
v___y_755_ = v_a_749_;
v___y_756_ = v_a_750_;
goto v___jp_752_;
}
}
else
{
lean_dec_ref(v_fn_796_);
lean_dec_ref(v_arg_776_);
lean_dec_ref(v_arg_774_);
lean_del_object(v___x_772_);
lean_dec_ref(v_hyps_770_);
lean_dec_ref(v_cl_769_);
lean_dec_ref(v_l_768_);
lean_dec(v_u_767_);
lean_dec(v_mvar_746_);
v___y_753_ = v_a_747_;
v___y_754_ = v_a_748_;
v___y_755_ = v_a_749_;
v___y_756_ = v_a_750_;
goto v___jp_752_;
}
}
else
{
lean_dec_ref(v_fn_795_);
lean_dec_ref(v_arg_776_);
lean_dec_ref(v_arg_774_);
lean_del_object(v___x_772_);
lean_dec_ref(v_hyps_770_);
lean_dec_ref(v_cl_769_);
lean_dec_ref(v_l_768_);
lean_dec(v_u_767_);
lean_dec(v_mvar_746_);
v___y_753_ = v_a_747_;
v___y_754_ = v_a_748_;
v___y_755_ = v_a_749_;
v___y_756_ = v_a_750_;
goto v___jp_752_;
}
}
else
{
lean_dec_ref(v_arg_776_);
lean_dec_ref(v_fn_775_);
lean_dec_ref(v_arg_774_);
lean_del_object(v___x_772_);
lean_dec_ref(v_hyps_770_);
lean_dec_ref(v_cl_769_);
lean_dec_ref(v_l_768_);
lean_dec(v_u_767_);
lean_dec(v_mvar_746_);
v___y_753_ = v_a_747_;
v___y_754_ = v_a_748_;
v___y_755_ = v_a_749_;
v___y_756_ = v_a_750_;
goto v___jp_752_;
}
v___jp_777_:
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_793_; 
v___x_781_ = lean_box(0);
v___x_782_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_782_, 0, v___y_780_);
lean_ctor_set(v___x_782_, 1, v___x_781_);
lean_inc(v___y_778_);
v___x_783_ = l_Lean_mkConst(v___y_778_, v___x_782_);
lean_inc_ref(v___y_779_);
v___x_784_ = l_Lean_mkApp6(v___x_783_, v_l_768_, v_cl_769_, v_hyps_770_, v_arg_776_, v_arg_774_, v___y_779_);
v___x_785_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__2___redArg(v_mvar_746_, v___x_784_, v_a_748_);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_785_);
if (v_isSharedCheck_793_ == 0)
{
lean_object* v_unused_794_; 
v_unused_794_ = lean_ctor_get(v___x_785_, 0);
lean_dec(v_unused_794_);
v___x_787_ = v___x_785_;
v_isShared_788_ = v_isSharedCheck_793_;
goto v_resetjp_786_;
}
else
{
lean_dec(v___x_785_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_793_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_789_; lean_object* v___x_791_; 
v___x_789_ = l_Lean_Expr_mvarId_x21(v___y_779_);
lean_dec_ref(v___y_779_);
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 0, v___x_789_);
v___x_791_ = v___x_787_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_789_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_target_765_, 2);
lean_dec_ref(v_fn_766_);
lean_dec(v_val_764_);
lean_dec(v_mvar_746_);
v___y_753_ = v_a_747_;
v___y_754_ = v_a_748_;
v___y_755_ = v_a_749_;
v___y_756_ = v_a_750_;
goto v___jp_752_;
}
}
else
{
lean_dec_ref(v_target_765_);
lean_dec(v_val_764_);
lean_dec(v_mvar_746_);
v___y_753_ = v_a_747_;
v___y_754_ = v_a_748_;
v___y_755_ = v_a_749_;
v___y_756_ = v_a_750_;
goto v___jp_752_;
}
}
else
{
lean_object* v___x_833_; lean_object* v___x_834_; 
lean_dec(v___x_763_);
lean_dec(v_mvar_746_);
v___x_833_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore___closed__11);
v___x_834_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0___redArg(v___x_833_, v_a_747_, v_a_748_, v_a_749_, v_a_750_);
return v___x_834_;
}
}
else
{
lean_object* v_a_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_842_; 
lean_dec(v_mvar_746_);
v_a_835_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_842_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_842_ == 0)
{
v___x_837_ = v___x_759_;
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_a_835_);
lean_dec(v___x_759_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_840_; 
if (v_isShared_838_ == 0)
{
v___x_840_ = v___x_837_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_a_835_);
v___x_840_ = v_reuseFailAlloc_841_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
return v___x_840_;
}
}
}
v___jp_752_:
{
lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_757_ = lean_obj_once(&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__1, &l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__1_once, _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___closed__1);
v___x_758_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mLeftRightCore_spec__0___redArg(v___x_757_, v___y_753_, v___y_754_, v___y_755_, v___y_756_);
return v___x_758_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore___boxed(lean_object* v_right_843_, lean_object* v_mvar_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_){
_start:
{
uint8_t v_right_boxed_850_; lean_object* v_res_851_; 
v_right_boxed_850_ = lean_unbox(v_right_843_);
v_res_851_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore(v_right_boxed_850_, v_mvar_844_, v_a_845_, v_a_846_, v_a_847_, v_a_848_);
lean_dec(v_a_848_);
lean_dec_ref(v_a_847_);
lean_dec(v_a_846_);
lean_dec_ref(v_a_845_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft___redArg___lam__0(uint8_t v___x_852_, lean_object* v_a_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_){
_start:
{
lean_object* v___x_863_; 
v___x_863_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mLeftRightCore(v___x_852_, v_a_853_, v___y_858_, v___y_859_, v___y_860_, v___y_861_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_863_, 1);
v___x_865_ = lean_box(0);
v___x_866_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_866_, 0, v_a_864_);
lean_ctor_set(v___x_866_, 1, v___x_865_);
v___x_867_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_866_, v___y_855_, v___y_858_, v___y_859_, v___y_860_, v___y_861_);
return v___x_867_;
}
else
{
lean_object* v_a_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_875_; 
v_a_868_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_875_ == 0)
{
v___x_870_ = v___x_863_;
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_a_868_);
lean_dec(v___x_863_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_873_; 
if (v_isShared_871_ == 0)
{
v___x_873_ = v___x_870_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_a_868_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
return v___x_873_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft___redArg___lam__0___boxed(lean_object* v___x_876_, lean_object* v_a_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_){
_start:
{
uint8_t v___x_397__boxed_887_; lean_object* v_res_888_; 
v___x_397__boxed_887_ = lean_unbox(v___x_876_);
v_res_888_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft___redArg___lam__0(v___x_397__boxed_887_, v_a_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_, v___y_885_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec(v___y_879_);
lean_dec_ref(v___y_878_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft___redArg(lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_){
_start:
{
lean_object* v___x_898_; 
v___x_898_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_890_, v_a_893_, v_a_894_, v_a_895_, v_a_896_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_899_; uint8_t v___x_900_; lean_object* v___x_901_; lean_object* v___f_902_; lean_object* v___x_903_; 
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc_n(v_a_899_, 2);
lean_dec_ref_known(v___x_898_, 1);
v___x_900_ = 0;
v___x_901_ = lean_box(v___x_900_);
v___f_902_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft___redArg___lam__0___boxed), 11, 2);
lean_closure_set(v___f_902_, 0, v___x_901_);
lean_closure_set(v___f_902_, 1, v_a_899_);
v___x_903_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___redArg(v_a_899_, v___f_902_, v_a_889_, v_a_890_, v_a_891_, v_a_892_, v_a_893_, v_a_894_, v_a_895_, v_a_896_);
return v___x_903_;
}
else
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
v_a_904_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_911_ == 0)
{
v___x_906_ = v___x_898_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_898_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft___redArg___boxed(lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_){
_start:
{
lean_object* v_res_921_; 
v_res_921_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft___redArg(v_a_912_, v_a_913_, v_a_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_);
lean_dec(v_a_919_);
lean_dec_ref(v_a_918_);
lean_dec(v_a_917_);
lean_dec_ref(v_a_916_);
lean_dec(v_a_915_);
lean_dec_ref(v_a_914_);
lean_dec(v_a_913_);
lean_dec_ref(v_a_912_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft(lean_object* v_x_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_){
_start:
{
lean_object* v___x_932_; 
v___x_932_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft___redArg(v_a_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
return v___x_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft___boxed(lean_object* v_x_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_){
_start:
{
lean_object* v_res_943_; 
v_res_943_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft(v_x_933_, v_a_934_, v_a_935_, v_a_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_);
lean_dec(v_a_941_);
lean_dec_ref(v_a_940_);
lean_dec(v_a_939_);
lean_dec_ref(v_a_938_);
lean_dec(v_a_937_);
lean_dec_ref(v_a_936_);
lean_dec(v_a_935_);
lean_dec_ref(v_a_934_);
lean_dec(v_x_933_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRight___redArg(lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_){
_start:
{
lean_object* v___x_953_; 
v___x_953_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_945_, v_a_948_, v_a_949_, v_a_950_, v_a_951_);
if (lean_obj_tag(v___x_953_) == 0)
{
lean_object* v_a_954_; uint8_t v___x_955_; lean_object* v___x_956_; lean_object* v___f_957_; lean_object* v___x_958_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc_n(v_a_954_, 2);
lean_dec_ref_known(v___x_953_, 1);
v___x_955_ = 1;
v___x_956_ = lean_box(v___x_955_);
v___f_957_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft___redArg___lam__0___boxed), 11, 2);
lean_closure_set(v___f_957_, 0, v___x_956_);
lean_closure_set(v___f_957_, 1, v_a_954_);
v___x_958_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeft_spec__0___redArg(v_a_954_, v___f_957_, v_a_944_, v_a_945_, v_a_946_, v_a_947_, v_a_948_, v_a_949_, v_a_950_, v_a_951_);
return v___x_958_;
}
else
{
lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_966_; 
v_a_959_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_966_ == 0)
{
v___x_961_ = v___x_953_;
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v___x_953_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
if (v_isShared_962_ == 0)
{
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_a_959_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRight___redArg___boxed(lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_, lean_object* v_a_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRight___redArg(v_a_967_, v_a_968_, v_a_969_, v_a_970_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
lean_dec(v_a_974_);
lean_dec_ref(v_a_973_);
lean_dec(v_a_972_);
lean_dec_ref(v_a_971_);
lean_dec(v_a_970_);
lean_dec_ref(v_a_969_);
lean_dec(v_a_968_);
lean_dec_ref(v_a_967_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRight(lean_object* v_x_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_){
_start:
{
lean_object* v___x_987_; 
v___x_987_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRight___redArg(v_a_978_, v_a_979_, v_a_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRight___boxed(lean_object* v_x_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRight(v_x_988_, v_a_989_, v_a_990_, v_a_991_, v_a_992_, v_a_993_, v_a_994_, v_a_995_, v_a_996_);
lean_dec(v_a_996_);
lean_dec_ref(v_a_995_);
lean_dec(v_a_994_);
lean_dec_ref(v_a_993_);
lean_dec(v_a_992_);
lean_dec_ref(v_a_991_);
lean_dec(v_a_990_);
lean_dec_ref(v_a_989_);
lean_dec(v_x_988_);
return v_res_998_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt_spec__0(lean_object* v_opts_999_, lean_object* v_opt_1000_){
_start:
{
lean_object* v_name_1001_; lean_object* v_defValue_1002_; lean_object* v_map_1003_; lean_object* v___x_1004_; 
v_name_1001_ = lean_ctor_get(v_opt_1000_, 0);
v_defValue_1002_ = lean_ctor_get(v_opt_1000_, 1);
v_map_1003_ = lean_ctor_get(v_opts_999_, 0);
v___x_1004_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1003_, v_name_1001_);
if (lean_obj_tag(v___x_1004_) == 0)
{
uint8_t v___x_1005_; 
v___x_1005_ = lean_unbox(v_defValue_1002_);
return v___x_1005_;
}
else
{
lean_object* v_val_1006_; 
v_val_1006_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_val_1006_);
lean_dec_ref_known(v___x_1004_, 1);
if (lean_obj_tag(v_val_1006_) == 1)
{
uint8_t v_v_1007_; 
v_v_1007_ = lean_ctor_get_uint8(v_val_1006_, 0);
lean_dec_ref_known(v_val_1006_, 0);
return v_v_1007_;
}
else
{
uint8_t v___x_1008_; 
lean_dec(v_val_1006_);
v___x_1008_ = lean_unbox(v_defValue_1002_);
return v___x_1008_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt_spec__0___boxed(lean_object* v_opts_1009_, lean_object* v_opt_1010_){
_start:
{
uint8_t v_res_1011_; lean_object* v_r_1012_; 
v_res_1011_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt_spec__0(v_opts_1009_, v_opt_1010_);
lean_dec_ref(v_opt_1010_);
lean_dec_ref(v_opts_1009_);
v_r_1012_ = lean_box(v_res_1011_);
return v_r_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___redArg(lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_){
_start:
{
lean_object* v_options_1022_; lean_object* v___x_1023_; uint8_t v___x_1024_; 
v_options_1022_ = lean_ctor_get(v_a_1019_, 2);
v___x_1023_ = l_new__wp__monad;
v___x_1024_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt_spec__0(v_options_1022_, v___x_1023_);
if (v___x_1024_ == 0)
{
lean_object* v___x_1025_; 
v___x_1025_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMLeft___redArg(v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_);
return v___x_1025_;
}
else
{
lean_object* v___x_1026_; 
v___x_1026_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMLeft___redArg(v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_);
return v___x_1026_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___redArg___boxed(lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___redArg(v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_);
lean_dec(v_a_1034_);
lean_dec_ref(v_a_1033_);
lean_dec(v_a_1032_);
lean_dec_ref(v_a_1031_);
lean_dec(v_a_1030_);
lean_dec_ref(v_a_1029_);
lean_dec(v_a_1028_);
lean_dec_ref(v_a_1027_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt(lean_object* v_stx_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___redArg(v_a_1038_, v_a_1039_, v_a_1040_, v_a_1041_, v_a_1042_, v_a_1043_, v_a_1044_, v_a_1045_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___boxed(lean_object* v_stx_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_){
_start:
{
lean_object* v_res_1058_; 
v_res_1058_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt(v_stx_1048_, v_a_1049_, v_a_1050_, v_a_1051_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_);
lean_dec(v_a_1056_);
lean_dec_ref(v_a_1055_);
lean_dec(v_a_1054_);
lean_dec_ref(v_a_1053_);
lean_dec(v_a_1052_);
lean_dec_ref(v_a_1051_);
lean_dec(v_a_1050_);
lean_dec_ref(v_a_1049_);
lean_dec(v_stx_1048_);
return v_res_1058_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1(){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1078_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1079_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__3));
v___x_1080_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___closed__7));
v___x_1081_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___boxed), 10, 0);
v___x_1082_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1078_, v___x_1079_, v___x_1080_, v___x_1081_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1___boxed(lean_object* v_a_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1();
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___redArg(lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_){
_start:
{
lean_object* v_options_1094_; lean_object* v___x_1095_; uint8_t v___x_1096_; 
v_options_1094_ = lean_ctor_get(v_a_1091_, 2);
v___x_1095_ = l_new__wp__monad;
v___x_1096_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt_spec__0(v_options_1094_, v___x_1095_);
if (v___x_1096_ == 0)
{
lean_object* v___x_1097_; 
v___x_1097_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRight___redArg(v_a_1085_, v_a_1086_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_);
return v___x_1097_;
}
else
{
lean_object* v___x_1098_; 
v___x_1098_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRight___redArg(v_a_1085_, v_a_1086_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_);
return v___x_1098_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___redArg___boxed(lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_){
_start:
{
lean_object* v_res_1108_; 
v_res_1108_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___redArg(v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_, v_a_1103_, v_a_1104_, v_a_1105_, v_a_1106_);
lean_dec(v_a_1106_);
lean_dec_ref(v_a_1105_);
lean_dec(v_a_1104_);
lean_dec_ref(v_a_1103_);
lean_dec(v_a_1102_);
lean_dec_ref(v_a_1101_);
lean_dec(v_a_1100_);
lean_dec_ref(v_a_1099_);
return v_res_1108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt(lean_object* v_stx_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_){
_start:
{
lean_object* v___x_1119_; 
v___x_1119_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___redArg(v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_);
return v___x_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___boxed(lean_object* v_stx_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt(v_stx_1120_, v_a_1121_, v_a_1122_, v_a_1123_, v_a_1124_, v_a_1125_, v_a_1126_, v_a_1127_, v_a_1128_);
lean_dec(v_a_1128_);
lean_dec_ref(v_a_1127_);
lean_dec(v_a_1126_);
lean_dec_ref(v_a_1125_);
lean_dec(v_a_1124_);
lean_dec_ref(v_a_1123_);
lean_dec(v_a_1122_);
lean_dec_ref(v_a_1121_);
lean_dec(v_stx_1120_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1(){
_start:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1146_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1147_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__1));
v___x_1148_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___closed__3));
v___x_1149_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___boxed), 10, 0);
v___x_1150_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1146_, v___x_1147_, v___x_1148_, v___x_1149_);
return v___x_1150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1___boxed(lean_object* v_a_1151_){
_start:
{
lean_object* v_res_1152_; 
v_res_1152_ = l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1();
return v_res_1152_;
}
}
lean_object* runtime_initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_LeftRight(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMLeftOpt__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_LeftRight_0__Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRightOpt__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_LeftRight(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_LeftRight(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_LeftRight(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_LeftRight(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_LeftRight(builtin);
}
#ifdef __cplusplus
}
#endif
