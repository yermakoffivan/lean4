// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Constructor
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
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_new__wp__monad;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseMGoal_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_dec(lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "target is not SPred.and"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "and_intro"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__4_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__6_value),LEAN_SCALAR_PTR_LITERAL(248, 10, 80, 59, 91, 116, 13, 118)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "not in proof mode"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "target is not Lean.Order.meet"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meet"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "le_meet"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__3_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__5_value),LEAN_SCALAR_PTR_LITERAL(190, 114, 168, 215, 244, 74, 160, 2)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "mconstructor"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(115, 154, 195, 216, 142, 75, 110, 212)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ProofMode"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "elabMConstructorOpt"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__7_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__7_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__7_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__7_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(67, 57, 144, 138, 216, 100, 231, 177)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___redArg___boxed(lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___redArg(v_e_26_, v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1(lean_object* v_e_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___redArg(v_e_30_, v___y_32_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___boxed(lean_object* v_e_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1(v_e_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0_spec__0(lean_object* v_msgData_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
lean_object* v___x_50_; lean_object* v_env_51_; lean_object* v___x_52_; lean_object* v_mctx_53_; lean_object* v_lctx_54_; lean_object* v_options_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_50_ = lean_st_ref_get(v___y_48_);
v_env_51_ = lean_ctor_get(v___x_50_, 0);
lean_inc_ref(v_env_51_);
lean_dec(v___x_50_);
v___x_52_ = lean_st_ref_get(v___y_46_);
v_mctx_53_ = lean_ctor_get(v___x_52_, 0);
lean_inc_ref(v_mctx_53_);
lean_dec(v___x_52_);
v_lctx_54_ = lean_ctor_get(v___y_45_, 2);
v_options_55_ = lean_ctor_get(v___y_47_, 2);
lean_inc_ref(v_options_55_);
lean_inc_ref(v_lctx_54_);
v___x_56_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_56_, 0, v_env_51_);
lean_ctor_set(v___x_56_, 1, v_mctx_53_);
lean_ctor_set(v___x_56_, 2, v_lctx_54_);
lean_ctor_set(v___x_56_, 3, v_options_55_);
v___x_57_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_56_);
lean_ctor_set(v___x_57_, 1, v_msgData_44_);
v___x_58_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0_spec__0___boxed(lean_object* v_msgData_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0_spec__0(v_msgData_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
lean_dec(v___y_61_);
lean_dec_ref(v___y_60_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg(lean_object* v_msg_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_){
_start:
{
lean_object* v_ref_72_; lean_object* v___x_73_; lean_object* v_a_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_82_; 
v_ref_72_ = lean_ctor_get(v___y_69_, 5);
v___x_73_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0_spec__0(v_msg_66_, v___y_67_, v___y_68_, v___y_69_, v___y_70_);
v_a_74_ = lean_ctor_get(v___x_73_, 0);
v_isSharedCheck_82_ = !lean_is_exclusive(v___x_73_);
if (v_isSharedCheck_82_ == 0)
{
v___x_76_ = v___x_73_;
v_isShared_77_ = v_isSharedCheck_82_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_a_74_);
lean_dec(v___x_73_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_82_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v___x_78_; lean_object* v___x_80_; 
lean_inc(v_ref_72_);
v___x_78_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_78_, 0, v_ref_72_);
lean_ctor_set(v___x_78_, 1, v_a_74_);
if (v_isShared_77_ == 0)
{
lean_ctor_set_tag(v___x_76_, 1);
lean_ctor_set(v___x_76_, 0, v___x_78_);
v___x_80_ = v___x_76_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v___x_78_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
return v___x_80_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg___boxed(lean_object* v_msg_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg(v_msg_83_, v___y_84_, v___y_85_, v___y_86_, v___y_87_);
lean_dec(v___y_87_);
lean_dec_ref(v___y_86_);
lean_dec(v___y_85_);
lean_dec_ref(v___y_84_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(lean_object* v_x_90_, lean_object* v_x_91_, lean_object* v_x_92_, lean_object* v_x_93_){
_start:
{
lean_object* v_ks_94_; lean_object* v_vs_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_119_; 
v_ks_94_ = lean_ctor_get(v_x_90_, 0);
v_vs_95_ = lean_ctor_get(v_x_90_, 1);
v_isSharedCheck_119_ = !lean_is_exclusive(v_x_90_);
if (v_isSharedCheck_119_ == 0)
{
v___x_97_ = v_x_90_;
v_isShared_98_ = v_isSharedCheck_119_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_vs_95_);
lean_inc(v_ks_94_);
lean_dec(v_x_90_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_119_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_99_ = lean_array_get_size(v_ks_94_);
v___x_100_ = lean_nat_dec_lt(v_x_91_, v___x_99_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_104_; 
lean_dec(v_x_91_);
v___x_101_ = lean_array_push(v_ks_94_, v_x_92_);
v___x_102_ = lean_array_push(v_vs_95_, v_x_93_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 1, v___x_102_);
lean_ctor_set(v___x_97_, 0, v___x_101_);
v___x_104_ = v___x_97_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v___x_101_);
lean_ctor_set(v_reuseFailAlloc_105_, 1, v___x_102_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
return v___x_104_;
}
}
else
{
lean_object* v_k_x27_106_; uint8_t v___x_107_; 
v_k_x27_106_ = lean_array_fget_borrowed(v_ks_94_, v_x_91_);
v___x_107_ = l_Lean_instBEqMVarId_beq(v_x_92_, v_k_x27_106_);
if (v___x_107_ == 0)
{
lean_object* v___x_109_; 
if (v_isShared_98_ == 0)
{
v___x_109_ = v___x_97_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_ks_94_);
lean_ctor_set(v_reuseFailAlloc_113_, 1, v_vs_95_);
v___x_109_ = v_reuseFailAlloc_113_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = lean_unsigned_to_nat(1u);
v___x_111_ = lean_nat_add(v_x_91_, v___x_110_);
lean_dec(v_x_91_);
v_x_90_ = v___x_109_;
v_x_91_ = v___x_111_;
goto _start;
}
}
else
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_117_; 
v___x_114_ = lean_array_fset(v_ks_94_, v_x_91_, v_x_92_);
v___x_115_ = lean_array_fset(v_vs_95_, v_x_91_, v_x_93_);
lean_dec(v_x_91_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 1, v___x_115_);
lean_ctor_set(v___x_97_, 0, v___x_114_);
v___x_117_ = v___x_97_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v___x_114_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v___x_115_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5___redArg(lean_object* v_n_120_, lean_object* v_k_121_, lean_object* v_v_122_){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = lean_unsigned_to_nat(0u);
v___x_124_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(v_n_120_, v___x_123_, v_k_121_, v_v_122_);
return v___x_124_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__0(void){
_start:
{
size_t v___x_125_; size_t v___x_126_; size_t v___x_127_; 
v___x_125_ = ((size_t)5ULL);
v___x_126_ = ((size_t)1ULL);
v___x_127_ = lean_usize_shift_left(v___x_126_, v___x_125_);
return v___x_127_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_128_; size_t v___x_129_; size_t v___x_130_; 
v___x_128_ = ((size_t)1ULL);
v___x_129_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_130_ = lean_usize_sub(v___x_129_, v___x_128_);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg(lean_object* v_x_132_, size_t v_x_133_, size_t v_x_134_, lean_object* v_x_135_, lean_object* v_x_136_){
_start:
{
if (lean_obj_tag(v_x_132_) == 0)
{
lean_object* v_es_137_; size_t v___x_138_; size_t v___x_139_; size_t v___x_140_; size_t v___x_141_; lean_object* v_j_142_; lean_object* v___x_143_; uint8_t v___x_144_; 
v_es_137_ = lean_ctor_get(v_x_132_, 0);
v___x_138_ = ((size_t)5ULL);
v___x_139_ = ((size_t)1ULL);
v___x_140_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_141_ = lean_usize_land(v_x_133_, v___x_140_);
v_j_142_ = lean_usize_to_nat(v___x_141_);
v___x_143_ = lean_array_get_size(v_es_137_);
v___x_144_ = lean_nat_dec_lt(v_j_142_, v___x_143_);
if (v___x_144_ == 0)
{
lean_dec(v_j_142_);
lean_dec(v_x_136_);
lean_dec(v_x_135_);
return v_x_132_;
}
else
{
lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_181_; 
lean_inc_ref(v_es_137_);
v_isSharedCheck_181_ = !lean_is_exclusive(v_x_132_);
if (v_isSharedCheck_181_ == 0)
{
lean_object* v_unused_182_; 
v_unused_182_ = lean_ctor_get(v_x_132_, 0);
lean_dec(v_unused_182_);
v___x_146_ = v_x_132_;
v_isShared_147_ = v_isSharedCheck_181_;
goto v_resetjp_145_;
}
else
{
lean_dec(v_x_132_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_181_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v_v_148_; lean_object* v___x_149_; lean_object* v_xs_x27_150_; lean_object* v___y_152_; 
v_v_148_ = lean_array_fget(v_es_137_, v_j_142_);
v___x_149_ = lean_box(0);
v_xs_x27_150_ = lean_array_fset(v_es_137_, v_j_142_, v___x_149_);
switch(lean_obj_tag(v_v_148_))
{
case 0:
{
lean_object* v_key_157_; lean_object* v_val_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_168_; 
v_key_157_ = lean_ctor_get(v_v_148_, 0);
v_val_158_ = lean_ctor_get(v_v_148_, 1);
v_isSharedCheck_168_ = !lean_is_exclusive(v_v_148_);
if (v_isSharedCheck_168_ == 0)
{
v___x_160_ = v_v_148_;
v_isShared_161_ = v_isSharedCheck_168_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_val_158_);
lean_inc(v_key_157_);
lean_dec(v_v_148_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_168_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
uint8_t v___x_162_; 
v___x_162_ = l_Lean_instBEqMVarId_beq(v_x_135_, v_key_157_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; lean_object* v___x_164_; 
lean_del_object(v___x_160_);
v___x_163_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_157_, v_val_158_, v_x_135_, v_x_136_);
v___x_164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
v___y_152_ = v___x_164_;
goto v___jp_151_;
}
else
{
lean_object* v___x_166_; 
lean_dec(v_val_158_);
lean_dec(v_key_157_);
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 1, v_x_136_);
lean_ctor_set(v___x_160_, 0, v_x_135_);
v___x_166_ = v___x_160_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v_x_135_);
lean_ctor_set(v_reuseFailAlloc_167_, 1, v_x_136_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
v___y_152_ = v___x_166_;
goto v___jp_151_;
}
}
}
}
case 1:
{
lean_object* v_node_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_179_; 
v_node_169_ = lean_ctor_get(v_v_148_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v_v_148_);
if (v_isSharedCheck_179_ == 0)
{
v___x_171_ = v_v_148_;
v_isShared_172_ = v_isSharedCheck_179_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_node_169_);
lean_dec(v_v_148_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_179_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
size_t v___x_173_; size_t v___x_174_; lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_173_ = lean_usize_shift_right(v_x_133_, v___x_138_);
v___x_174_ = lean_usize_add(v_x_134_, v___x_139_);
v___x_175_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg(v_node_169_, v___x_173_, v___x_174_, v_x_135_, v_x_136_);
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 0, v___x_175_);
v___x_177_ = v___x_171_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
v___y_152_ = v___x_177_;
goto v___jp_151_;
}
}
}
default: 
{
lean_object* v___x_180_; 
v___x_180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_180_, 0, v_x_135_);
lean_ctor_set(v___x_180_, 1, v_x_136_);
v___y_152_ = v___x_180_;
goto v___jp_151_;
}
}
v___jp_151_:
{
lean_object* v___x_153_; lean_object* v___x_155_; 
v___x_153_ = lean_array_fset(v_xs_x27_150_, v_j_142_, v___y_152_);
lean_dec(v_j_142_);
if (v_isShared_147_ == 0)
{
lean_ctor_set(v___x_146_, 0, v___x_153_);
v___x_155_ = v___x_146_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v___x_153_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
}
}
}
else
{
lean_object* v_ks_183_; lean_object* v_vs_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_204_; 
v_ks_183_ = lean_ctor_get(v_x_132_, 0);
v_vs_184_ = lean_ctor_get(v_x_132_, 1);
v_isSharedCheck_204_ = !lean_is_exclusive(v_x_132_);
if (v_isSharedCheck_204_ == 0)
{
v___x_186_ = v_x_132_;
v_isShared_187_ = v_isSharedCheck_204_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_vs_184_);
lean_inc(v_ks_183_);
lean_dec(v_x_132_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_204_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_ks_183_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v_vs_184_);
v___x_189_ = v_reuseFailAlloc_203_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
lean_object* v_newNode_190_; uint8_t v___y_192_; size_t v___x_198_; uint8_t v___x_199_; 
v_newNode_190_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5___redArg(v___x_189_, v_x_135_, v_x_136_);
v___x_198_ = ((size_t)7ULL);
v___x_199_ = lean_usize_dec_le(v___x_198_, v_x_134_);
if (v___x_199_ == 0)
{
lean_object* v___x_200_; lean_object* v___x_201_; uint8_t v___x_202_; 
v___x_200_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_190_);
v___x_201_ = lean_unsigned_to_nat(4u);
v___x_202_ = lean_nat_dec_lt(v___x_200_, v___x_201_);
lean_dec(v___x_200_);
v___y_192_ = v___x_202_;
goto v___jp_191_;
}
else
{
v___y_192_ = v___x_199_;
goto v___jp_191_;
}
v___jp_191_:
{
if (v___y_192_ == 0)
{
lean_object* v_ks_193_; lean_object* v_vs_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v_ks_193_ = lean_ctor_get(v_newNode_190_, 0);
lean_inc_ref(v_ks_193_);
v_vs_194_ = lean_ctor_get(v_newNode_190_, 1);
lean_inc_ref(v_vs_194_);
lean_dec_ref(v_newNode_190_);
v___x_195_ = lean_unsigned_to_nat(0u);
v___x_196_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__2);
v___x_197_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___redArg(v_x_134_, v_ks_193_, v_vs_194_, v___x_195_, v___x_196_);
lean_dec_ref(v_vs_194_);
lean_dec_ref(v_ks_193_);
return v___x_197_;
}
else
{
return v_newNode_190_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___redArg(size_t v_depth_205_, lean_object* v_keys_206_, lean_object* v_vals_207_, lean_object* v_i_208_, lean_object* v_entries_209_){
_start:
{
lean_object* v___x_210_; uint8_t v___x_211_; 
v___x_210_ = lean_array_get_size(v_keys_206_);
v___x_211_ = lean_nat_dec_lt(v_i_208_, v___x_210_);
if (v___x_211_ == 0)
{
lean_dec(v_i_208_);
return v_entries_209_;
}
else
{
lean_object* v_k_212_; lean_object* v_v_213_; uint64_t v___x_214_; size_t v_h_215_; size_t v___x_216_; lean_object* v___x_217_; size_t v___x_218_; size_t v___x_219_; size_t v___x_220_; size_t v_h_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v_k_212_ = lean_array_fget_borrowed(v_keys_206_, v_i_208_);
v_v_213_ = lean_array_fget_borrowed(v_vals_207_, v_i_208_);
v___x_214_ = l_Lean_instHashableMVarId_hash(v_k_212_);
v_h_215_ = lean_uint64_to_usize(v___x_214_);
v___x_216_ = ((size_t)5ULL);
v___x_217_ = lean_unsigned_to_nat(1u);
v___x_218_ = ((size_t)1ULL);
v___x_219_ = lean_usize_sub(v_depth_205_, v___x_218_);
v___x_220_ = lean_usize_mul(v___x_216_, v___x_219_);
v_h_221_ = lean_usize_shift_right(v_h_215_, v___x_220_);
v___x_222_ = lean_nat_add(v_i_208_, v___x_217_);
lean_dec(v_i_208_);
lean_inc(v_v_213_);
lean_inc(v_k_212_);
v___x_223_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg(v_entries_209_, v_h_221_, v_depth_205_, v_k_212_, v_v_213_);
v_i_208_ = v___x_222_;
v_entries_209_ = v___x_223_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___redArg___boxed(lean_object* v_depth_225_, lean_object* v_keys_226_, lean_object* v_vals_227_, lean_object* v_i_228_, lean_object* v_entries_229_){
_start:
{
size_t v_depth_boxed_230_; lean_object* v_res_231_; 
v_depth_boxed_230_ = lean_unbox_usize(v_depth_225_);
lean_dec(v_depth_225_);
v_res_231_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___redArg(v_depth_boxed_230_, v_keys_226_, v_vals_227_, v_i_228_, v_entries_229_);
lean_dec_ref(v_vals_227_);
lean_dec_ref(v_keys_226_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_x_232_, lean_object* v_x_233_, lean_object* v_x_234_, lean_object* v_x_235_, lean_object* v_x_236_){
_start:
{
size_t v_x_3583__boxed_237_; size_t v_x_3584__boxed_238_; lean_object* v_res_239_; 
v_x_3583__boxed_237_ = lean_unbox_usize(v_x_233_);
lean_dec(v_x_233_);
v_x_3584__boxed_238_ = lean_unbox_usize(v_x_234_);
lean_dec(v_x_234_);
v_res_239_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg(v_x_232_, v_x_3583__boxed_237_, v_x_3584__boxed_238_, v_x_235_, v_x_236_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3___redArg(lean_object* v_x_240_, lean_object* v_x_241_, lean_object* v_x_242_){
_start:
{
uint64_t v___x_243_; size_t v___x_244_; size_t v___x_245_; lean_object* v___x_246_; 
v___x_243_ = l_Lean_instHashableMVarId_hash(v_x_241_);
v___x_244_ = lean_uint64_to_usize(v___x_243_);
v___x_245_ = ((size_t)1ULL);
v___x_246_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg(v_x_240_, v___x_244_, v___x_245_, v_x_241_, v_x_242_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___redArg(lean_object* v_mvarId_247_, lean_object* v_val_248_, lean_object* v___y_249_){
_start:
{
lean_object* v___x_251_; lean_object* v_mctx_252_; lean_object* v_cache_253_; lean_object* v_zetaDeltaFVarIds_254_; lean_object* v_postponed_255_; lean_object* v_diag_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_284_; 
v___x_251_ = lean_st_ref_take(v___y_249_);
v_mctx_252_ = lean_ctor_get(v___x_251_, 0);
v_cache_253_ = lean_ctor_get(v___x_251_, 1);
v_zetaDeltaFVarIds_254_ = lean_ctor_get(v___x_251_, 2);
v_postponed_255_ = lean_ctor_get(v___x_251_, 3);
v_diag_256_ = lean_ctor_get(v___x_251_, 4);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_284_ == 0)
{
v___x_258_ = v___x_251_;
v_isShared_259_ = v_isSharedCheck_284_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_diag_256_);
lean_inc(v_postponed_255_);
lean_inc(v_zetaDeltaFVarIds_254_);
lean_inc(v_cache_253_);
lean_inc(v_mctx_252_);
lean_dec(v___x_251_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_284_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v_depth_260_; lean_object* v_levelAssignDepth_261_; lean_object* v_lmvarCounter_262_; lean_object* v_mvarCounter_263_; lean_object* v_lDecls_264_; lean_object* v_decls_265_; lean_object* v_userNames_266_; lean_object* v_lAssignment_267_; lean_object* v_eAssignment_268_; lean_object* v_dAssignment_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_283_; 
v_depth_260_ = lean_ctor_get(v_mctx_252_, 0);
v_levelAssignDepth_261_ = lean_ctor_get(v_mctx_252_, 1);
v_lmvarCounter_262_ = lean_ctor_get(v_mctx_252_, 2);
v_mvarCounter_263_ = lean_ctor_get(v_mctx_252_, 3);
v_lDecls_264_ = lean_ctor_get(v_mctx_252_, 4);
v_decls_265_ = lean_ctor_get(v_mctx_252_, 5);
v_userNames_266_ = lean_ctor_get(v_mctx_252_, 6);
v_lAssignment_267_ = lean_ctor_get(v_mctx_252_, 7);
v_eAssignment_268_ = lean_ctor_get(v_mctx_252_, 8);
v_dAssignment_269_ = lean_ctor_get(v_mctx_252_, 9);
v_isSharedCheck_283_ = !lean_is_exclusive(v_mctx_252_);
if (v_isSharedCheck_283_ == 0)
{
v___x_271_ = v_mctx_252_;
v_isShared_272_ = v_isSharedCheck_283_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_dAssignment_269_);
lean_inc(v_eAssignment_268_);
lean_inc(v_lAssignment_267_);
lean_inc(v_userNames_266_);
lean_inc(v_decls_265_);
lean_inc(v_lDecls_264_);
lean_inc(v_mvarCounter_263_);
lean_inc(v_lmvarCounter_262_);
lean_inc(v_levelAssignDepth_261_);
lean_inc(v_depth_260_);
lean_dec(v_mctx_252_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_283_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_273_; lean_object* v___x_275_; 
v___x_273_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3___redArg(v_eAssignment_268_, v_mvarId_247_, v_val_248_);
if (v_isShared_272_ == 0)
{
lean_ctor_set(v___x_271_, 8, v___x_273_);
v___x_275_ = v___x_271_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_depth_260_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v_levelAssignDepth_261_);
lean_ctor_set(v_reuseFailAlloc_282_, 2, v_lmvarCounter_262_);
lean_ctor_set(v_reuseFailAlloc_282_, 3, v_mvarCounter_263_);
lean_ctor_set(v_reuseFailAlloc_282_, 4, v_lDecls_264_);
lean_ctor_set(v_reuseFailAlloc_282_, 5, v_decls_265_);
lean_ctor_set(v_reuseFailAlloc_282_, 6, v_userNames_266_);
lean_ctor_set(v_reuseFailAlloc_282_, 7, v_lAssignment_267_);
lean_ctor_set(v_reuseFailAlloc_282_, 8, v___x_273_);
lean_ctor_set(v_reuseFailAlloc_282_, 9, v_dAssignment_269_);
v___x_275_ = v_reuseFailAlloc_282_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
lean_object* v___x_277_; 
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 0, v___x_275_);
v___x_277_ = v___x_258_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v___x_275_);
lean_ctor_set(v_reuseFailAlloc_281_, 1, v_cache_253_);
lean_ctor_set(v_reuseFailAlloc_281_, 2, v_zetaDeltaFVarIds_254_);
lean_ctor_set(v_reuseFailAlloc_281_, 3, v_postponed_255_);
lean_ctor_set(v_reuseFailAlloc_281_, 4, v_diag_256_);
v___x_277_ = v_reuseFailAlloc_281_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_278_ = lean_st_ref_set(v___y_249_, v___x_277_);
v___x_279_ = lean_box(0);
v___x_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
return v___x_280_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___redArg___boxed(lean_object* v_mvarId_285_, lean_object* v_val_286_, lean_object* v___y_287_, lean_object* v___y_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___redArg(v_mvarId_285_, v_val_286_, v___y_287_);
lean_dec(v___y_287_);
return v_res_289_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__1(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__0));
v___x_292_ = l_Lean_stringToMessageData(v___x_291_);
return v___x_292_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__9(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__8));
v___x_305_ = l_Lean_stringToMessageData(v___x_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore(lean_object* v_mvar_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_){
_start:
{
lean_object* v___y_313_; lean_object* v___y_314_; lean_object* v___y_315_; lean_object* v___y_316_; lean_object* v___x_319_; 
lean_inc(v_mvar_306_);
v___x_319_ = l_Lean_MVarId_getType(v_mvar_306_, v_a_307_, v_a_308_, v_a_309_, v_a_310_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_object* v_a_320_; lean_object* v___x_321_; lean_object* v_a_322_; lean_object* v___x_323_; 
v_a_320_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_a_320_);
lean_dec_ref_known(v___x_319_, 1);
v___x_321_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___redArg(v_a_320_, v_a_308_);
v_a_322_ = lean_ctor_get(v___x_321_, 0);
lean_inc(v_a_322_);
lean_dec_ref(v___x_321_);
v___x_323_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_a_322_);
lean_dec(v_a_322_);
if (lean_obj_tag(v___x_323_) == 1)
{
lean_object* v_val_324_; lean_object* v_target_325_; 
v_val_324_ = lean_ctor_get(v___x_323_, 0);
lean_inc(v_val_324_);
lean_dec_ref_known(v___x_323_, 1);
v_target_325_ = lean_ctor_get(v_val_324_, 3);
lean_inc_ref(v_target_325_);
if (lean_obj_tag(v_target_325_) == 5)
{
lean_object* v_fn_326_; 
v_fn_326_ = lean_ctor_get(v_target_325_, 0);
lean_inc_ref(v_fn_326_);
if (lean_obj_tag(v_fn_326_) == 5)
{
lean_object* v_fn_327_; 
v_fn_327_ = lean_ctor_get(v_fn_326_, 0);
lean_inc_ref(v_fn_327_);
if (lean_obj_tag(v_fn_327_) == 5)
{
lean_object* v_fn_328_; 
v_fn_328_ = lean_ctor_get(v_fn_327_, 0);
if (lean_obj_tag(v_fn_328_) == 4)
{
lean_object* v_declName_329_; 
v_declName_329_ = lean_ctor_get(v_fn_328_, 0);
lean_inc(v_declName_329_);
if (lean_obj_tag(v_declName_329_) == 1)
{
lean_object* v_pre_330_; 
v_pre_330_ = lean_ctor_get(v_declName_329_, 0);
lean_inc(v_pre_330_);
if (lean_obj_tag(v_pre_330_) == 1)
{
lean_object* v_pre_331_; 
v_pre_331_ = lean_ctor_get(v_pre_330_, 0);
lean_inc(v_pre_331_);
if (lean_obj_tag(v_pre_331_) == 1)
{
lean_object* v_pre_332_; 
v_pre_332_ = lean_ctor_get(v_pre_331_, 0);
lean_inc(v_pre_332_);
if (lean_obj_tag(v_pre_332_) == 1)
{
lean_object* v_pre_333_; 
v_pre_333_ = lean_ctor_get(v_pre_332_, 0);
lean_inc(v_pre_333_);
if (lean_obj_tag(v_pre_333_) == 0)
{
lean_object* v_u_334_; lean_object* v_00_u03c3s_335_; lean_object* v_hyps_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_398_; 
v_u_334_ = lean_ctor_get(v_val_324_, 0);
v_00_u03c3s_335_ = lean_ctor_get(v_val_324_, 1);
v_hyps_336_ = lean_ctor_get(v_val_324_, 2);
v_isSharedCheck_398_ = !lean_is_exclusive(v_val_324_);
if (v_isSharedCheck_398_ == 0)
{
lean_object* v_unused_399_; 
v_unused_399_ = lean_ctor_get(v_val_324_, 3);
lean_dec(v_unused_399_);
v___x_338_ = v_val_324_;
v_isShared_339_ = v_isSharedCheck_398_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_hyps_336_);
lean_inc(v_00_u03c3s_335_);
lean_inc(v_u_334_);
lean_dec(v_val_324_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_398_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v_arg_340_; lean_object* v_arg_341_; lean_object* v_arg_342_; lean_object* v_str_343_; lean_object* v_str_344_; lean_object* v_str_345_; lean_object* v_str_346_; lean_object* v___x_347_; uint8_t v___x_348_; 
v_arg_340_ = lean_ctor_get(v_target_325_, 1);
lean_inc_ref(v_arg_340_);
lean_dec_ref_known(v_target_325_, 2);
v_arg_341_ = lean_ctor_get(v_fn_326_, 1);
lean_inc_ref(v_arg_341_);
lean_dec_ref_known(v_fn_326_, 2);
v_arg_342_ = lean_ctor_get(v_fn_327_, 1);
lean_inc_ref(v_arg_342_);
lean_dec_ref_known(v_fn_327_, 2);
v_str_343_ = lean_ctor_get(v_declName_329_, 1);
lean_inc_ref(v_str_343_);
lean_dec_ref_known(v_declName_329_, 2);
v_str_344_ = lean_ctor_get(v_pre_330_, 1);
lean_inc_ref(v_str_344_);
lean_dec_ref_known(v_pre_330_, 2);
v_str_345_ = lean_ctor_get(v_pre_331_, 1);
lean_inc_ref(v_str_345_);
lean_dec_ref_known(v_pre_331_, 2);
v_str_346_ = lean_ctor_get(v_pre_332_, 1);
lean_inc_ref(v_str_346_);
lean_dec_ref_known(v_pre_332_, 2);
v___x_347_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__2));
v___x_348_ = lean_string_dec_eq(v_str_346_, v___x_347_);
lean_dec_ref(v_str_346_);
if (v___x_348_ == 0)
{
lean_dec_ref(v_str_345_);
lean_dec_ref(v_str_344_);
lean_dec_ref(v_str_343_);
lean_dec_ref(v_arg_342_);
lean_dec_ref(v_arg_341_);
lean_dec_ref(v_arg_340_);
lean_del_object(v___x_338_);
lean_dec_ref(v_hyps_336_);
lean_dec_ref(v_00_u03c3s_335_);
lean_dec(v_u_334_);
lean_dec(v_mvar_306_);
v___y_313_ = v_a_307_;
v___y_314_ = v_a_308_;
v___y_315_ = v_a_309_;
v___y_316_ = v_a_310_;
goto v___jp_312_;
}
else
{
lean_object* v___x_349_; uint8_t v___x_350_; 
v___x_349_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3));
v___x_350_ = lean_string_dec_eq(v_str_345_, v___x_349_);
lean_dec_ref(v_str_345_);
if (v___x_350_ == 0)
{
lean_dec_ref(v_str_344_);
lean_dec_ref(v_str_343_);
lean_dec_ref(v_arg_342_);
lean_dec_ref(v_arg_341_);
lean_dec_ref(v_arg_340_);
lean_del_object(v___x_338_);
lean_dec_ref(v_hyps_336_);
lean_dec_ref(v_00_u03c3s_335_);
lean_dec(v_u_334_);
lean_dec(v_mvar_306_);
v___y_313_ = v_a_307_;
v___y_314_ = v_a_308_;
v___y_315_ = v_a_309_;
v___y_316_ = v_a_310_;
goto v___jp_312_;
}
else
{
lean_object* v___x_351_; uint8_t v___x_352_; 
v___x_351_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__4));
v___x_352_ = lean_string_dec_eq(v_str_344_, v___x_351_);
lean_dec_ref(v_str_344_);
if (v___x_352_ == 0)
{
lean_dec_ref(v_str_343_);
lean_dec_ref(v_arg_342_);
lean_dec_ref(v_arg_341_);
lean_dec_ref(v_arg_340_);
lean_del_object(v___x_338_);
lean_dec_ref(v_hyps_336_);
lean_dec_ref(v_00_u03c3s_335_);
lean_dec(v_u_334_);
lean_dec(v_mvar_306_);
v___y_313_ = v_a_307_;
v___y_314_ = v_a_308_;
v___y_315_ = v_a_309_;
v___y_316_ = v_a_310_;
goto v___jp_312_;
}
else
{
lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_353_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__5));
v___x_354_ = lean_string_dec_eq(v_str_343_, v___x_353_);
lean_dec_ref(v_str_343_);
if (v___x_354_ == 0)
{
lean_dec_ref(v_arg_342_);
lean_dec_ref(v_arg_341_);
lean_dec_ref(v_arg_340_);
lean_del_object(v___x_338_);
lean_dec_ref(v_hyps_336_);
lean_dec_ref(v_00_u03c3s_335_);
lean_dec(v_u_334_);
lean_dec(v_mvar_306_);
v___y_313_ = v_a_307_;
v___y_314_ = v_a_308_;
v___y_315_ = v_a_309_;
v___y_316_ = v_a_310_;
goto v___jp_312_;
}
else
{
lean_object* v___x_356_; 
lean_inc_ref(v_arg_341_);
lean_inc_ref(v_hyps_336_);
lean_inc_ref(v_00_u03c3s_335_);
lean_inc(v_u_334_);
if (v_isShared_339_ == 0)
{
lean_ctor_set(v___x_338_, 3, v_arg_341_);
v___x_356_ = v___x_338_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_u_334_);
lean_ctor_set(v_reuseFailAlloc_397_, 1, v_00_u03c3s_335_);
lean_ctor_set(v_reuseFailAlloc_397_, 2, v_hyps_336_);
lean_ctor_set(v_reuseFailAlloc_397_, 3, v_arg_341_);
v___x_356_ = v_reuseFailAlloc_397_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_357_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_356_);
v___x_358_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_357_, v_pre_333_, v_a_307_, v_a_308_, v_a_309_, v_a_310_);
if (lean_obj_tag(v___x_358_) == 0)
{
lean_object* v_a_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v_a_359_ = lean_ctor_get(v___x_358_, 0);
lean_inc(v_a_359_);
lean_dec_ref_known(v___x_358_, 1);
lean_inc_ref(v_arg_340_);
lean_inc_ref(v_hyps_336_);
lean_inc(v_u_334_);
v___x_360_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_360_, 0, v_u_334_);
lean_ctor_set(v___x_360_, 1, v_00_u03c3s_335_);
lean_ctor_set(v___x_360_, 2, v_hyps_336_);
lean_ctor_set(v___x_360_, 3, v_arg_340_);
v___x_361_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_360_);
v___x_362_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_361_, v_pre_333_, v_a_307_, v_a_308_, v_a_309_, v_a_310_);
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v_a_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_379_; 
v_a_363_ = lean_ctor_get(v___x_362_, 0);
lean_inc_n(v_a_363_, 2);
lean_dec_ref_known(v___x_362_, 1);
v___x_364_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__7));
v___x_365_ = lean_box(0);
v___x_366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_366_, 0, v_u_334_);
lean_ctor_set(v___x_366_, 1, v___x_365_);
v___x_367_ = l_Lean_mkConst(v___x_364_, v___x_366_);
lean_inc(v_a_359_);
v___x_368_ = l_Lean_mkApp6(v___x_367_, v_arg_342_, v_hyps_336_, v_arg_341_, v_arg_340_, v_a_359_, v_a_363_);
v___x_369_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___redArg(v_mvar_306_, v___x_368_, v_a_308_);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_379_ == 0)
{
lean_object* v_unused_380_; 
v_unused_380_ = lean_ctor_get(v___x_369_, 0);
lean_dec(v_unused_380_);
v___x_371_ = v___x_369_;
v_isShared_372_ = v_isSharedCheck_379_;
goto v_resetjp_370_;
}
else
{
lean_dec(v___x_369_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_379_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_377_; 
v___x_373_ = l_Lean_Expr_mvarId_x21(v_a_359_);
lean_dec(v_a_359_);
v___x_374_ = l_Lean_Expr_mvarId_x21(v_a_363_);
lean_dec(v_a_363_);
v___x_375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_373_);
lean_ctor_set(v___x_375_, 1, v___x_374_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 0, v___x_375_);
v___x_377_ = v___x_371_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v___x_375_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
else
{
lean_object* v_a_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_388_; 
lean_dec(v_a_359_);
lean_dec_ref(v_arg_342_);
lean_dec_ref(v_arg_341_);
lean_dec_ref(v_arg_340_);
lean_dec_ref(v_hyps_336_);
lean_dec(v_u_334_);
lean_dec(v_mvar_306_);
v_a_381_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_388_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_388_ == 0)
{
v___x_383_ = v___x_362_;
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_a_381_);
lean_dec(v___x_362_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_386_; 
if (v_isShared_384_ == 0)
{
v___x_386_ = v___x_383_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_a_381_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
}
else
{
lean_object* v_a_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_396_; 
lean_dec_ref(v_arg_342_);
lean_dec_ref(v_arg_341_);
lean_dec_ref(v_arg_340_);
lean_dec_ref(v_hyps_336_);
lean_dec_ref(v_00_u03c3s_335_);
lean_dec(v_u_334_);
lean_dec(v_mvar_306_);
v_a_389_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_396_ == 0)
{
v___x_391_ = v___x_358_;
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_a_389_);
lean_dec(v___x_358_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_394_; 
if (v_isShared_392_ == 0)
{
v___x_394_ = v___x_391_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v_a_389_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
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
lean_dec(v_pre_333_);
lean_dec_ref_known(v_pre_332_, 2);
lean_dec_ref_known(v_pre_331_, 2);
lean_dec_ref_known(v_pre_330_, 2);
lean_dec_ref_known(v_declName_329_, 2);
lean_dec_ref_known(v_fn_327_, 2);
lean_dec_ref_known(v_fn_326_, 2);
lean_dec_ref_known(v_target_325_, 2);
lean_dec(v_val_324_);
lean_dec(v_mvar_306_);
v___y_313_ = v_a_307_;
v___y_314_ = v_a_308_;
v___y_315_ = v_a_309_;
v___y_316_ = v_a_310_;
goto v___jp_312_;
}
}
else
{
lean_dec_ref_known(v_pre_331_, 2);
lean_dec(v_pre_332_);
lean_dec_ref_known(v_pre_330_, 2);
lean_dec_ref_known(v_declName_329_, 2);
lean_dec_ref_known(v_fn_327_, 2);
lean_dec_ref_known(v_fn_326_, 2);
lean_dec_ref_known(v_target_325_, 2);
lean_dec(v_val_324_);
lean_dec(v_mvar_306_);
v___y_313_ = v_a_307_;
v___y_314_ = v_a_308_;
v___y_315_ = v_a_309_;
v___y_316_ = v_a_310_;
goto v___jp_312_;
}
}
else
{
lean_dec(v_pre_331_);
lean_dec_ref_known(v_pre_330_, 2);
lean_dec_ref_known(v_declName_329_, 2);
lean_dec_ref_known(v_fn_327_, 2);
lean_dec_ref_known(v_fn_326_, 2);
lean_dec_ref_known(v_target_325_, 2);
lean_dec(v_val_324_);
lean_dec(v_mvar_306_);
v___y_313_ = v_a_307_;
v___y_314_ = v_a_308_;
v___y_315_ = v_a_309_;
v___y_316_ = v_a_310_;
goto v___jp_312_;
}
}
else
{
lean_dec(v_pre_330_);
lean_dec_ref_known(v_declName_329_, 2);
lean_dec_ref_known(v_fn_327_, 2);
lean_dec_ref_known(v_fn_326_, 2);
lean_dec_ref_known(v_target_325_, 2);
lean_dec(v_val_324_);
lean_dec(v_mvar_306_);
v___y_313_ = v_a_307_;
v___y_314_ = v_a_308_;
v___y_315_ = v_a_309_;
v___y_316_ = v_a_310_;
goto v___jp_312_;
}
}
else
{
lean_dec(v_declName_329_);
lean_dec_ref_known(v_fn_327_, 2);
lean_dec_ref_known(v_fn_326_, 2);
lean_dec_ref_known(v_target_325_, 2);
lean_dec(v_val_324_);
lean_dec(v_mvar_306_);
v___y_313_ = v_a_307_;
v___y_314_ = v_a_308_;
v___y_315_ = v_a_309_;
v___y_316_ = v_a_310_;
goto v___jp_312_;
}
}
else
{
lean_dec_ref_known(v_fn_327_, 2);
lean_dec_ref_known(v_fn_326_, 2);
lean_dec_ref_known(v_target_325_, 2);
lean_dec(v_val_324_);
lean_dec(v_mvar_306_);
v___y_313_ = v_a_307_;
v___y_314_ = v_a_308_;
v___y_315_ = v_a_309_;
v___y_316_ = v_a_310_;
goto v___jp_312_;
}
}
else
{
lean_dec_ref_known(v_fn_326_, 2);
lean_dec_ref(v_fn_327_);
lean_dec_ref_known(v_target_325_, 2);
lean_dec(v_val_324_);
lean_dec(v_mvar_306_);
v___y_313_ = v_a_307_;
v___y_314_ = v_a_308_;
v___y_315_ = v_a_309_;
v___y_316_ = v_a_310_;
goto v___jp_312_;
}
}
else
{
lean_dec_ref(v_fn_326_);
lean_dec_ref_known(v_target_325_, 2);
lean_dec(v_val_324_);
lean_dec(v_mvar_306_);
v___y_313_ = v_a_307_;
v___y_314_ = v_a_308_;
v___y_315_ = v_a_309_;
v___y_316_ = v_a_310_;
goto v___jp_312_;
}
}
else
{
lean_dec_ref(v_target_325_);
lean_dec(v_val_324_);
lean_dec(v_mvar_306_);
v___y_313_ = v_a_307_;
v___y_314_ = v_a_308_;
v___y_315_ = v_a_309_;
v___y_316_ = v_a_310_;
goto v___jp_312_;
}
}
else
{
lean_object* v___x_400_; lean_object* v___x_401_; 
lean_dec(v___x_323_);
lean_dec(v_mvar_306_);
v___x_400_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__9, &l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__9_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__9);
v___x_401_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg(v___x_400_, v_a_307_, v_a_308_, v_a_309_, v_a_310_);
return v___x_401_;
}
}
else
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_409_; 
lean_dec(v_mvar_306_);
v_a_402_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_409_ == 0)
{
v___x_404_ = v___x_319_;
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_319_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_407_; 
if (v_isShared_405_ == 0)
{
v___x_407_ = v___x_404_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_402_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
v___jp_312_:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__1);
v___x_318_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg(v___x_317_, v___y_313_, v___y_314_, v___y_315_, v___y_316_);
return v___x_318_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___boxed(lean_object* v_mvar_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore(v_mvar_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
lean_dec(v_a_414_);
lean_dec_ref(v_a_413_);
lean_dec(v_a_412_);
lean_dec_ref(v_a_411_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0(lean_object* v_00_u03b1_417_, lean_object* v_msg_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg(v_msg_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___boxed(lean_object* v_00_u03b1_425_, lean_object* v_msg_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0(v_00_u03b1_425_, v_msg_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
lean_dec(v___y_428_);
lean_dec_ref(v___y_427_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2(lean_object* v_mvarId_433_, lean_object* v_val_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___redArg(v_mvarId_433_, v_val_434_, v___y_436_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___boxed(lean_object* v_mvarId_441_, lean_object* v_val_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2(v_mvarId_441_, v_val_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec(v___y_444_);
lean_dec_ref(v___y_443_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3(lean_object* v_00_u03b2_449_, lean_object* v_x_450_, lean_object* v_x_451_, lean_object* v_x_452_){
_start:
{
lean_object* v___x_453_; 
v___x_453_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3___redArg(v_x_450_, v_x_451_, v_x_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_454_, lean_object* v_x_455_, size_t v_x_456_, size_t v_x_457_, lean_object* v_x_458_, lean_object* v_x_459_){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg(v_x_455_, v_x_456_, v_x_457_, v_x_458_, v_x_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_461_, lean_object* v_x_462_, lean_object* v_x_463_, lean_object* v_x_464_, lean_object* v_x_465_, lean_object* v_x_466_){
_start:
{
size_t v_x_4087__boxed_467_; size_t v_x_4088__boxed_468_; lean_object* v_res_469_; 
v_x_4087__boxed_467_ = lean_unbox_usize(v_x_463_);
lean_dec(v_x_463_);
v_x_4088__boxed_468_ = lean_unbox_usize(v_x_464_);
lean_dec(v_x_464_);
v_res_469_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4(v_00_u03b2_461_, v_x_462_, v_x_4087__boxed_467_, v_x_4088__boxed_468_, v_x_465_, v_x_466_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_470_, lean_object* v_n_471_, lean_object* v_k_472_, lean_object* v_v_473_){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5___redArg(v_n_471_, v_k_472_, v_v_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_475_, size_t v_depth_476_, lean_object* v_keys_477_, lean_object* v_vals_478_, lean_object* v_heq_479_, lean_object* v_i_480_, lean_object* v_entries_481_){
_start:
{
lean_object* v___x_482_; 
v___x_482_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___redArg(v_depth_476_, v_keys_477_, v_vals_478_, v_i_480_, v_entries_481_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___boxed(lean_object* v_00_u03b2_483_, lean_object* v_depth_484_, lean_object* v_keys_485_, lean_object* v_vals_486_, lean_object* v_heq_487_, lean_object* v_i_488_, lean_object* v_entries_489_){
_start:
{
size_t v_depth_boxed_490_; lean_object* v_res_491_; 
v_depth_boxed_490_ = lean_unbox_usize(v_depth_484_);
lean_dec(v_depth_484_);
v_res_491_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6(v_00_u03b2_483_, v_depth_boxed_490_, v_keys_485_, v_vals_486_, v_heq_487_, v_i_488_, v_entries_489_);
lean_dec_ref(v_vals_486_);
lean_dec_ref(v_keys_485_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_492_, lean_object* v_x_493_, lean_object* v_x_494_, lean_object* v_x_495_, lean_object* v_x_496_){
_start:
{
lean_object* v___x_497_; 
v___x_497_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(v_x_493_, v_x_494_, v_x_495_, v_x_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg___lam__0(lean_object* v_x_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
lean_object* v___x_508_; 
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
lean_inc(v___y_500_);
lean_inc_ref(v___y_499_);
v___x_508_ = lean_apply_9(v_x_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_, lean_box(0));
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg___lam__0___boxed(lean_object* v_x_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg___lam__0(v_x_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_, v___y_517_);
lean_dec(v___y_513_);
lean_dec_ref(v___y_512_);
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg(lean_object* v_mvarId_520_, lean_object* v_x_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_){
_start:
{
lean_object* v___f_531_; lean_object* v___x_532_; 
lean_inc(v___y_525_);
lean_inc_ref(v___y_524_);
lean_inc(v___y_523_);
lean_inc_ref(v___y_522_);
v___f_531_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_531_, 0, v_x_521_);
lean_closure_set(v___f_531_, 1, v___y_522_);
lean_closure_set(v___f_531_, 2, v___y_523_);
lean_closure_set(v___f_531_, 3, v___y_524_);
lean_closure_set(v___f_531_, 4, v___y_525_);
v___x_532_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_520_, v___f_531_, v___y_526_, v___y_527_, v___y_528_, v___y_529_);
if (lean_obj_tag(v___x_532_) == 0)
{
return v___x_532_;
}
else
{
lean_object* v_a_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_540_; 
v_a_533_ = lean_ctor_get(v___x_532_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_540_ == 0)
{
v___x_535_ = v___x_532_;
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_a_533_);
lean_dec(v___x_532_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_538_; 
if (v_isShared_536_ == 0)
{
v___x_538_ = v___x_535_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_a_533_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg___boxed(lean_object* v_mvarId_541_, lean_object* v_x_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg(v_mvarId_541_, v_x_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_);
lean_dec(v___y_550_);
lean_dec_ref(v___y_549_);
lean_dec(v___y_548_);
lean_dec_ref(v___y_547_);
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0(lean_object* v_00_u03b1_553_, lean_object* v_mvarId_554_, lean_object* v_x_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg(v_mvarId_554_, v_x_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_, v___y_563_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___boxed(lean_object* v_00_u03b1_566_, lean_object* v_mvarId_567_, lean_object* v_x_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0(v_00_u03b1_566_, v_mvarId_567_, v_x_568_, v___y_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
lean_dec(v___y_576_);
lean_dec_ref(v___y_575_);
lean_dec(v___y_574_);
lean_dec_ref(v___y_573_);
lean_dec(v___y_572_);
lean_dec_ref(v___y_571_);
lean_dec(v___y_570_);
lean_dec_ref(v___y_569_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg___lam__0(lean_object* v_a_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore(v_a_579_, v___y_584_, v___y_585_, v___y_586_, v___y_587_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v_a_590_; lean_object* v_fst_591_; lean_object* v_snd_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_602_; 
v_a_590_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_a_590_);
lean_dec_ref_known(v___x_589_, 1);
v_fst_591_ = lean_ctor_get(v_a_590_, 0);
v_snd_592_ = lean_ctor_get(v_a_590_, 1);
v_isSharedCheck_602_ = !lean_is_exclusive(v_a_590_);
if (v_isSharedCheck_602_ == 0)
{
v___x_594_ = v_a_590_;
v_isShared_595_ = v_isSharedCheck_602_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_snd_592_);
lean_inc(v_fst_591_);
lean_dec(v_a_590_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_602_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_596_; lean_object* v___x_598_; 
v___x_596_ = lean_box(0);
if (v_isShared_595_ == 0)
{
lean_ctor_set_tag(v___x_594_, 1);
lean_ctor_set(v___x_594_, 1, v___x_596_);
lean_ctor_set(v___x_594_, 0, v_snd_592_);
v___x_598_ = v___x_594_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_snd_592_);
lean_ctor_set(v_reuseFailAlloc_601_, 1, v___x_596_);
v___x_598_ = v_reuseFailAlloc_601_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_599_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_599_, 0, v_fst_591_);
lean_ctor_set(v___x_599_, 1, v___x_598_);
v___x_600_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_599_, v___y_581_, v___y_584_, v___y_585_, v___y_586_, v___y_587_);
return v___x_600_;
}
}
}
else
{
lean_object* v_a_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_610_; 
v_a_603_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_610_ == 0)
{
v___x_605_ = v___x_589_;
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_dec(v___x_589_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_608_; 
if (v_isShared_606_ == 0)
{
v___x_608_ = v___x_605_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_a_603_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg___lam__0___boxed(lean_object* v_a_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_){
_start:
{
lean_object* v_res_621_; 
v_res_621_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg___lam__0(v_a_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_, v___y_616_, v___y_617_, v___y_618_, v___y_619_);
lean_dec(v___y_619_);
lean_dec_ref(v___y_618_);
lean_dec(v___y_617_);
lean_dec_ref(v___y_616_);
lean_dec(v___y_615_);
lean_dec_ref(v___y_614_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg(lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_){
_start:
{
lean_object* v___x_631_; 
v___x_631_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_623_, v_a_626_, v_a_627_, v_a_628_, v_a_629_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; lean_object* v___f_633_; lean_object* v___x_634_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
lean_inc_n(v_a_632_, 2);
lean_dec_ref_known(v___x_631_, 1);
v___f_633_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_633_, 0, v_a_632_);
v___x_634_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg(v_a_632_, v___f_633_, v_a_622_, v_a_623_, v_a_624_, v_a_625_, v_a_626_, v_a_627_, v_a_628_, v_a_629_);
return v___x_634_;
}
else
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
v_a_635_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v___x_631_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_631_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg___boxed(lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg(v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_, v_a_649_, v_a_650_);
lean_dec(v_a_650_);
lean_dec_ref(v_a_649_);
lean_dec(v_a_648_);
lean_dec_ref(v_a_647_);
lean_dec(v_a_646_);
lean_dec_ref(v_a_645_);
lean_dec(v_a_644_);
lean_dec_ref(v_a_643_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor(lean_object* v_x_653_, lean_object* v_a_654_, lean_object* v_a_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_){
_start:
{
lean_object* v___x_663_; 
v___x_663_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg(v_a_654_, v_a_655_, v_a_656_, v_a_657_, v_a_658_, v_a_659_, v_a_660_, v_a_661_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___boxed(lean_object* v_x_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor(v_x_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_, v_a_669_, v_a_670_, v_a_671_, v_a_672_);
lean_dec(v_a_672_);
lean_dec_ref(v_a_671_);
lean_dec(v_a_670_);
lean_dec_ref(v_a_669_);
lean_dec(v_a_668_);
lean_dec_ref(v_a_667_);
lean_dec(v_a_666_);
lean_dec_ref(v_a_665_);
lean_dec(v_x_664_);
return v_res_674_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__1(void){
_start:
{
lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_676_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__0));
v___x_677_ = l_Lean_stringToMessageData(v___x_676_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore(lean_object* v_mvar_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_){
_start:
{
lean_object* v___y_693_; lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___x_699_; 
lean_inc(v_mvar_686_);
v___x_699_ = l_Lean_MVarId_getType(v_mvar_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_);
if (lean_obj_tag(v___x_699_) == 0)
{
lean_object* v_a_700_; lean_object* v___x_701_; lean_object* v_a_702_; lean_object* v___x_703_; 
v_a_700_ = lean_ctor_get(v___x_699_, 0);
lean_inc(v_a_700_);
lean_dec_ref_known(v___x_699_, 1);
v___x_701_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___redArg(v_a_700_, v_a_688_);
v_a_702_ = lean_ctor_get(v___x_701_, 0);
lean_inc(v_a_702_);
lean_dec_ref(v___x_701_);
v___x_703_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseMGoal_x3f(v_a_702_);
lean_dec(v_a_702_);
if (lean_obj_tag(v___x_703_) == 1)
{
lean_object* v_val_704_; lean_object* v_target_705_; 
v_val_704_ = lean_ctor_get(v___x_703_, 0);
lean_inc(v_val_704_);
lean_dec_ref_known(v___x_703_, 1);
v_target_705_ = lean_ctor_get(v_val_704_, 4);
lean_inc_ref(v_target_705_);
if (lean_obj_tag(v_target_705_) == 5)
{
lean_object* v_fn_706_; 
v_fn_706_ = lean_ctor_get(v_target_705_, 0);
lean_inc_ref(v_fn_706_);
if (lean_obj_tag(v_fn_706_) == 5)
{
lean_object* v_fn_707_; 
v_fn_707_ = lean_ctor_get(v_fn_706_, 0);
if (lean_obj_tag(v_fn_707_) == 5)
{
lean_object* v_fn_708_; 
v_fn_708_ = lean_ctor_get(v_fn_707_, 0);
if (lean_obj_tag(v_fn_708_) == 5)
{
lean_object* v_fn_709_; 
v_fn_709_ = lean_ctor_get(v_fn_708_, 0);
if (lean_obj_tag(v_fn_709_) == 4)
{
lean_object* v_declName_710_; 
v_declName_710_ = lean_ctor_get(v_fn_709_, 0);
lean_inc(v_declName_710_);
if (lean_obj_tag(v_declName_710_) == 1)
{
lean_object* v_pre_711_; 
v_pre_711_ = lean_ctor_get(v_declName_710_, 0);
lean_inc(v_pre_711_);
if (lean_obj_tag(v_pre_711_) == 1)
{
lean_object* v_pre_712_; 
v_pre_712_ = lean_ctor_get(v_pre_711_, 0);
lean_inc(v_pre_712_);
if (lean_obj_tag(v_pre_712_) == 1)
{
lean_object* v_pre_713_; 
v_pre_713_ = lean_ctor_get(v_pre_712_, 0);
lean_inc(v_pre_713_);
if (lean_obj_tag(v_pre_713_) == 0)
{
lean_object* v_u_714_; lean_object* v_l_715_; lean_object* v_cl_716_; lean_object* v_hyps_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_779_; 
v_u_714_ = lean_ctor_get(v_val_704_, 0);
v_l_715_ = lean_ctor_get(v_val_704_, 1);
v_cl_716_ = lean_ctor_get(v_val_704_, 2);
v_hyps_717_ = lean_ctor_get(v_val_704_, 3);
v_isSharedCheck_779_ = !lean_is_exclusive(v_val_704_);
if (v_isSharedCheck_779_ == 0)
{
lean_object* v_unused_780_; 
v_unused_780_ = lean_ctor_get(v_val_704_, 4);
lean_dec(v_unused_780_);
v___x_719_ = v_val_704_;
v_isShared_720_ = v_isSharedCheck_779_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_hyps_717_);
lean_inc(v_cl_716_);
lean_inc(v_l_715_);
lean_inc(v_u_714_);
lean_dec(v_val_704_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_779_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v_arg_721_; lean_object* v_arg_722_; lean_object* v_str_723_; lean_object* v_str_724_; lean_object* v_str_725_; lean_object* v___x_726_; uint8_t v___x_727_; 
v_arg_721_ = lean_ctor_get(v_target_705_, 1);
lean_inc_ref(v_arg_721_);
lean_dec_ref_known(v_target_705_, 2);
v_arg_722_ = lean_ctor_get(v_fn_706_, 1);
lean_inc_ref(v_arg_722_);
lean_dec_ref_known(v_fn_706_, 2);
v_str_723_ = lean_ctor_get(v_declName_710_, 1);
lean_inc_ref(v_str_723_);
lean_dec_ref_known(v_declName_710_, 2);
v_str_724_ = lean_ctor_get(v_pre_711_, 1);
lean_inc_ref(v_str_724_);
lean_dec_ref_known(v_pre_711_, 2);
v_str_725_ = lean_ctor_get(v_pre_712_, 1);
lean_inc_ref(v_str_725_);
lean_dec_ref_known(v_pre_712_, 2);
v___x_726_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__2));
v___x_727_ = lean_string_dec_eq(v_str_725_, v___x_726_);
lean_dec_ref(v_str_725_);
if (v___x_727_ == 0)
{
lean_dec_ref(v_str_724_);
lean_dec_ref(v_str_723_);
lean_dec_ref(v_arg_722_);
lean_dec_ref(v_arg_721_);
lean_del_object(v___x_719_);
lean_dec_ref(v_hyps_717_);
lean_dec_ref(v_cl_716_);
lean_dec_ref(v_l_715_);
lean_dec(v_u_714_);
lean_dec(v_mvar_686_);
v___y_693_ = v_a_687_;
v___y_694_ = v_a_688_;
v___y_695_ = v_a_689_;
v___y_696_ = v_a_690_;
goto v___jp_692_;
}
else
{
lean_object* v___x_728_; uint8_t v___x_729_; 
v___x_728_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__3));
v___x_729_ = lean_string_dec_eq(v_str_724_, v___x_728_);
lean_dec_ref(v_str_724_);
if (v___x_729_ == 0)
{
lean_dec_ref(v_str_723_);
lean_dec_ref(v_arg_722_);
lean_dec_ref(v_arg_721_);
lean_del_object(v___x_719_);
lean_dec_ref(v_hyps_717_);
lean_dec_ref(v_cl_716_);
lean_dec_ref(v_l_715_);
lean_dec(v_u_714_);
lean_dec(v_mvar_686_);
v___y_693_ = v_a_687_;
v___y_694_ = v_a_688_;
v___y_695_ = v_a_689_;
v___y_696_ = v_a_690_;
goto v___jp_692_;
}
else
{
lean_object* v___x_730_; uint8_t v___x_731_; 
v___x_730_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__4));
v___x_731_ = lean_string_dec_eq(v_str_723_, v___x_730_);
lean_dec_ref(v_str_723_);
if (v___x_731_ == 0)
{
lean_dec_ref(v_arg_722_);
lean_dec_ref(v_arg_721_);
lean_del_object(v___x_719_);
lean_dec_ref(v_hyps_717_);
lean_dec_ref(v_cl_716_);
lean_dec_ref(v_l_715_);
lean_dec(v_u_714_);
lean_dec(v_mvar_686_);
v___y_693_ = v_a_687_;
v___y_694_ = v_a_688_;
v___y_695_ = v_a_689_;
v___y_696_ = v_a_690_;
goto v___jp_692_;
}
else
{
lean_object* v___x_733_; 
lean_inc_ref(v_arg_722_);
lean_inc_ref(v_hyps_717_);
lean_inc_ref(v_cl_716_);
lean_inc_ref(v_l_715_);
lean_inc(v_u_714_);
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 4, v_arg_722_);
v___x_733_ = v___x_719_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_u_714_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v_l_715_);
lean_ctor_set(v_reuseFailAlloc_778_, 2, v_cl_716_);
lean_ctor_set(v_reuseFailAlloc_778_, 3, v_hyps_717_);
lean_ctor_set(v_reuseFailAlloc_778_, 4, v_arg_722_);
v___x_733_ = v_reuseFailAlloc_778_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(v___x_733_);
v___x_735_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_734_, v_pre_713_, v_a_687_, v_a_688_, v_a_689_, v_a_690_);
if (lean_obj_tag(v___x_735_) == 0)
{
lean_object* v_a_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
v_a_736_ = lean_ctor_get(v___x_735_, 0);
lean_inc(v_a_736_);
lean_dec_ref_known(v___x_735_, 1);
lean_inc_ref(v_arg_721_);
lean_inc_ref(v_hyps_717_);
lean_inc_ref(v_cl_716_);
lean_inc_ref(v_l_715_);
lean_inc(v_u_714_);
v___x_737_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_737_, 0, v_u_714_);
lean_ctor_set(v___x_737_, 1, v_l_715_);
lean_ctor_set(v___x_737_, 2, v_cl_716_);
lean_ctor_set(v___x_737_, 3, v_hyps_717_);
lean_ctor_set(v___x_737_, 4, v_arg_721_);
v___x_738_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(v___x_737_);
v___x_739_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_738_, v_pre_713_, v_a_687_, v_a_688_, v_a_689_, v_a_690_);
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v_a_740_; lean_object* v___x_741_; lean_object* v___y_743_; lean_object* v___x_760_; 
v_a_740_ = lean_ctor_get(v___x_739_, 0);
lean_inc(v_a_740_);
lean_dec_ref_known(v___x_739_, 1);
v___x_741_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__6));
v___x_760_ = l_Lean_Level_dec(v_u_714_);
if (lean_obj_tag(v___x_760_) == 0)
{
v___y_743_ = v_u_714_;
goto v___jp_742_;
}
else
{
lean_object* v_val_761_; 
lean_dec(v_u_714_);
v_val_761_ = lean_ctor_get(v___x_760_, 0);
lean_inc(v_val_761_);
lean_dec_ref_known(v___x_760_, 1);
v___y_743_ = v_val_761_;
goto v___jp_742_;
}
v___jp_742_:
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_758_; 
v___x_744_ = lean_box(0);
v___x_745_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_745_, 0, v___y_743_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v___x_746_ = l_Lean_mkConst(v___x_741_, v___x_745_);
lean_inc(v_a_740_);
lean_inc(v_a_736_);
v___x_747_ = l_Lean_mkApp7(v___x_746_, v_l_715_, v_cl_716_, v_hyps_717_, v_arg_722_, v_arg_721_, v_a_736_, v_a_740_);
v___x_748_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___redArg(v_mvar_686_, v___x_747_, v_a_688_);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_758_ == 0)
{
lean_object* v_unused_759_; 
v_unused_759_ = lean_ctor_get(v___x_748_, 0);
lean_dec(v_unused_759_);
v___x_750_ = v___x_748_;
v_isShared_751_ = v_isSharedCheck_758_;
goto v_resetjp_749_;
}
else
{
lean_dec(v___x_748_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_758_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_756_; 
v___x_752_ = l_Lean_Expr_mvarId_x21(v_a_736_);
lean_dec(v_a_736_);
v___x_753_ = l_Lean_Expr_mvarId_x21(v_a_740_);
lean_dec(v_a_740_);
v___x_754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_754_, 0, v___x_752_);
lean_ctor_set(v___x_754_, 1, v___x_753_);
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 0, v___x_754_);
v___x_756_ = v___x_750_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v___x_754_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
}
else
{
lean_object* v_a_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_769_; 
lean_dec(v_a_736_);
lean_dec_ref(v_arg_722_);
lean_dec_ref(v_arg_721_);
lean_dec_ref(v_hyps_717_);
lean_dec_ref(v_cl_716_);
lean_dec_ref(v_l_715_);
lean_dec(v_u_714_);
lean_dec(v_mvar_686_);
v_a_762_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_769_ == 0)
{
v___x_764_ = v___x_739_;
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_a_762_);
lean_dec(v___x_739_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_767_; 
if (v_isShared_765_ == 0)
{
v___x_767_ = v___x_764_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_a_762_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
}
}
else
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_777_; 
lean_dec_ref(v_arg_722_);
lean_dec_ref(v_arg_721_);
lean_dec_ref(v_hyps_717_);
lean_dec_ref(v_cl_716_);
lean_dec_ref(v_l_715_);
lean_dec(v_u_714_);
lean_dec(v_mvar_686_);
v_a_770_ = lean_ctor_get(v___x_735_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_777_ == 0)
{
v___x_772_ = v___x_735_;
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v___x_735_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_775_; 
if (v_isShared_773_ == 0)
{
v___x_775_ = v___x_772_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_a_770_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
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
lean_dec_ref_known(v_pre_712_, 2);
lean_dec(v_pre_713_);
lean_dec_ref_known(v_pre_711_, 2);
lean_dec_ref_known(v_declName_710_, 2);
lean_dec_ref_known(v_fn_706_, 2);
lean_dec_ref_known(v_target_705_, 2);
lean_dec(v_val_704_);
lean_dec(v_mvar_686_);
v___y_693_ = v_a_687_;
v___y_694_ = v_a_688_;
v___y_695_ = v_a_689_;
v___y_696_ = v_a_690_;
goto v___jp_692_;
}
}
else
{
lean_dec(v_pre_712_);
lean_dec_ref_known(v_pre_711_, 2);
lean_dec_ref_known(v_declName_710_, 2);
lean_dec_ref_known(v_fn_706_, 2);
lean_dec_ref_known(v_target_705_, 2);
lean_dec(v_val_704_);
lean_dec(v_mvar_686_);
v___y_693_ = v_a_687_;
v___y_694_ = v_a_688_;
v___y_695_ = v_a_689_;
v___y_696_ = v_a_690_;
goto v___jp_692_;
}
}
else
{
lean_dec_ref_known(v_declName_710_, 2);
lean_dec(v_pre_711_);
lean_dec_ref_known(v_fn_706_, 2);
lean_dec_ref_known(v_target_705_, 2);
lean_dec(v_val_704_);
lean_dec(v_mvar_686_);
v___y_693_ = v_a_687_;
v___y_694_ = v_a_688_;
v___y_695_ = v_a_689_;
v___y_696_ = v_a_690_;
goto v___jp_692_;
}
}
else
{
lean_dec(v_declName_710_);
lean_dec_ref_known(v_fn_706_, 2);
lean_dec_ref_known(v_target_705_, 2);
lean_dec(v_val_704_);
lean_dec(v_mvar_686_);
v___y_693_ = v_a_687_;
v___y_694_ = v_a_688_;
v___y_695_ = v_a_689_;
v___y_696_ = v_a_690_;
goto v___jp_692_;
}
}
else
{
lean_dec_ref_known(v_fn_706_, 2);
lean_dec_ref_known(v_target_705_, 2);
lean_dec(v_val_704_);
lean_dec(v_mvar_686_);
v___y_693_ = v_a_687_;
v___y_694_ = v_a_688_;
v___y_695_ = v_a_689_;
v___y_696_ = v_a_690_;
goto v___jp_692_;
}
}
else
{
lean_dec_ref_known(v_fn_706_, 2);
lean_dec_ref_known(v_target_705_, 2);
lean_dec(v_val_704_);
lean_dec(v_mvar_686_);
v___y_693_ = v_a_687_;
v___y_694_ = v_a_688_;
v___y_695_ = v_a_689_;
v___y_696_ = v_a_690_;
goto v___jp_692_;
}
}
else
{
lean_dec_ref_known(v_fn_706_, 2);
lean_dec_ref_known(v_target_705_, 2);
lean_dec(v_val_704_);
lean_dec(v_mvar_686_);
v___y_693_ = v_a_687_;
v___y_694_ = v_a_688_;
v___y_695_ = v_a_689_;
v___y_696_ = v_a_690_;
goto v___jp_692_;
}
}
else
{
lean_dec_ref(v_fn_706_);
lean_dec_ref_known(v_target_705_, 2);
lean_dec(v_val_704_);
lean_dec(v_mvar_686_);
v___y_693_ = v_a_687_;
v___y_694_ = v_a_688_;
v___y_695_ = v_a_689_;
v___y_696_ = v_a_690_;
goto v___jp_692_;
}
}
else
{
lean_dec_ref(v_target_705_);
lean_dec(v_val_704_);
lean_dec(v_mvar_686_);
v___y_693_ = v_a_687_;
v___y_694_ = v_a_688_;
v___y_695_ = v_a_689_;
v___y_696_ = v_a_690_;
goto v___jp_692_;
}
}
else
{
lean_object* v___x_781_; lean_object* v___x_782_; 
lean_dec(v___x_703_);
lean_dec(v_mvar_686_);
v___x_781_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__9, &l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__9_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__9);
v___x_782_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg(v___x_781_, v_a_687_, v_a_688_, v_a_689_, v_a_690_);
return v___x_782_;
}
}
else
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_790_; 
lean_dec(v_mvar_686_);
v_a_783_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_790_ == 0)
{
v___x_785_ = v___x_699_;
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_699_);
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
v___jp_692_:
{
lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_697_ = lean_obj_once(&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__1, &l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__1_once, _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___closed__1);
v___x_698_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg(v___x_697_, v___y_693_, v___y_694_, v___y_695_, v___y_696_);
return v___x_698_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore___boxed(lean_object* v_mvar_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_){
_start:
{
lean_object* v_res_797_; 
v_res_797_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore(v_mvar_791_, v_a_792_, v_a_793_, v_a_794_, v_a_795_);
lean_dec(v_a_795_);
lean_dec_ref(v_a_794_);
lean_dec(v_a_793_);
lean_dec_ref(v_a_792_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor___redArg___lam__0(lean_object* v_a_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mConstructorCore(v_a_798_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
if (lean_obj_tag(v___x_808_) == 0)
{
lean_object* v_a_809_; lean_object* v_fst_810_; lean_object* v_snd_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_821_; 
v_a_809_ = lean_ctor_get(v___x_808_, 0);
lean_inc(v_a_809_);
lean_dec_ref_known(v___x_808_, 1);
v_fst_810_ = lean_ctor_get(v_a_809_, 0);
v_snd_811_ = lean_ctor_get(v_a_809_, 1);
v_isSharedCheck_821_ = !lean_is_exclusive(v_a_809_);
if (v_isSharedCheck_821_ == 0)
{
v___x_813_ = v_a_809_;
v_isShared_814_ = v_isSharedCheck_821_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_snd_811_);
lean_inc(v_fst_810_);
lean_dec(v_a_809_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_821_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_815_; lean_object* v___x_817_; 
v___x_815_ = lean_box(0);
if (v_isShared_814_ == 0)
{
lean_ctor_set_tag(v___x_813_, 1);
lean_ctor_set(v___x_813_, 1, v___x_815_);
lean_ctor_set(v___x_813_, 0, v_snd_811_);
v___x_817_ = v___x_813_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_snd_811_);
lean_ctor_set(v_reuseFailAlloc_820_, 1, v___x_815_);
v___x_817_ = v_reuseFailAlloc_820_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_818_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_818_, 0, v_fst_810_);
lean_ctor_set(v___x_818_, 1, v___x_817_);
v___x_819_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_818_, v___y_800_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
return v___x_819_;
}
}
}
else
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
v_a_822_ = lean_ctor_get(v___x_808_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_808_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_808_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_808_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor___redArg___lam__0___boxed(lean_object* v_a_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor___redArg___lam__0(v_a_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_, v___y_836_, v___y_837_, v___y_838_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
lean_dec(v___y_834_);
lean_dec_ref(v___y_833_);
lean_dec(v___y_832_);
lean_dec_ref(v___y_831_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor___redArg(lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_842_, v_a_845_, v_a_846_, v_a_847_, v_a_848_);
if (lean_obj_tag(v___x_850_) == 0)
{
lean_object* v_a_851_; lean_object* v___f_852_; lean_object* v___x_853_; 
v_a_851_ = lean_ctor_get(v___x_850_, 0);
lean_inc_n(v_a_851_, 2);
lean_dec_ref_known(v___x_850_, 1);
v___f_852_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_852_, 0, v_a_851_);
v___x_853_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg(v_a_851_, v___f_852_, v_a_841_, v_a_842_, v_a_843_, v_a_844_, v_a_845_, v_a_846_, v_a_847_, v_a_848_);
return v___x_853_;
}
else
{
lean_object* v_a_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_861_; 
v_a_854_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_861_ == 0)
{
v___x_856_ = v___x_850_;
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_a_854_);
lean_dec(v___x_850_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_859_; 
if (v_isShared_857_ == 0)
{
v___x_859_ = v___x_856_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_a_854_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor___redArg___boxed(lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor___redArg(v_a_862_, v_a_863_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_);
lean_dec(v_a_869_);
lean_dec_ref(v_a_868_);
lean_dec(v_a_867_);
lean_dec_ref(v_a_866_);
lean_dec(v_a_865_);
lean_dec_ref(v_a_864_);
lean_dec(v_a_863_);
lean_dec_ref(v_a_862_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor(lean_object* v_x_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_){
_start:
{
lean_object* v___x_882_; 
v___x_882_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor___redArg(v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor___boxed(lean_object* v_x_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_){
_start:
{
lean_object* v_res_893_; 
v_res_893_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor(v_x_883_, v_a_884_, v_a_885_, v_a_886_, v_a_887_, v_a_888_, v_a_889_, v_a_890_, v_a_891_);
lean_dec(v_a_891_);
lean_dec_ref(v_a_890_);
lean_dec(v_a_889_);
lean_dec_ref(v_a_888_);
lean_dec(v_a_887_);
lean_dec_ref(v_a_886_);
lean_dec(v_a_885_);
lean_dec_ref(v_a_884_);
lean_dec(v_x_883_);
return v_res_893_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt_spec__0(lean_object* v_opts_894_, lean_object* v_opt_895_){
_start:
{
lean_object* v_name_896_; lean_object* v_defValue_897_; lean_object* v_map_898_; lean_object* v___x_899_; 
v_name_896_ = lean_ctor_get(v_opt_895_, 0);
v_defValue_897_ = lean_ctor_get(v_opt_895_, 1);
v_map_898_ = lean_ctor_get(v_opts_894_, 0);
v___x_899_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_898_, v_name_896_);
if (lean_obj_tag(v___x_899_) == 0)
{
uint8_t v___x_900_; 
v___x_900_ = lean_unbox(v_defValue_897_);
return v___x_900_;
}
else
{
lean_object* v_val_901_; 
v_val_901_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_val_901_);
lean_dec_ref_known(v___x_899_, 1);
if (lean_obj_tag(v_val_901_) == 1)
{
uint8_t v_v_902_; 
v_v_902_ = lean_ctor_get_uint8(v_val_901_, 0);
lean_dec_ref_known(v_val_901_, 0);
return v_v_902_;
}
else
{
uint8_t v___x_903_; 
lean_dec(v_val_901_);
v___x_903_ = lean_unbox(v_defValue_897_);
return v___x_903_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt_spec__0___boxed(lean_object* v_opts_904_, lean_object* v_opt_905_){
_start:
{
uint8_t v_res_906_; lean_object* v_r_907_; 
v_res_906_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt_spec__0(v_opts_904_, v_opt_905_);
lean_dec_ref(v_opt_905_);
lean_dec_ref(v_opts_904_);
v_r_907_ = lean_box(v_res_906_);
return v_r_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___redArg(lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_){
_start:
{
lean_object* v_options_917_; lean_object* v___x_918_; uint8_t v___x_919_; 
v_options_917_ = lean_ctor_get(v_a_914_, 2);
v___x_918_ = l_new__wp__monad;
v___x_919_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt_spec__0(v_options_917_, v___x_918_);
if (v___x_919_ == 0)
{
lean_object* v___x_920_; 
v___x_920_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg(v_a_908_, v_a_909_, v_a_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_);
return v___x_920_;
}
else
{
lean_object* v___x_921_; 
v___x_921_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMConstructor___redArg(v_a_908_, v_a_909_, v_a_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_);
return v___x_921_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___redArg___boxed(lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_){
_start:
{
lean_object* v_res_931_; 
v_res_931_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___redArg(v_a_922_, v_a_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_, v_a_928_, v_a_929_);
lean_dec(v_a_929_);
lean_dec_ref(v_a_928_);
lean_dec(v_a_927_);
lean_dec_ref(v_a_926_);
lean_dec(v_a_925_);
lean_dec_ref(v_a_924_);
lean_dec(v_a_923_);
lean_dec_ref(v_a_922_);
return v_res_931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt(lean_object* v_stx_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_){
_start:
{
lean_object* v___x_942_; 
v___x_942_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___redArg(v_a_933_, v_a_934_, v_a_935_, v_a_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_);
return v___x_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___boxed(lean_object* v_stx_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt(v_stx_943_, v_a_944_, v_a_945_, v_a_946_, v_a_947_, v_a_948_, v_a_949_, v_a_950_, v_a_951_);
lean_dec(v_a_951_);
lean_dec_ref(v_a_950_);
lean_dec(v_a_949_);
lean_dec_ref(v_a_948_);
lean_dec(v_a_947_);
lean_dec_ref(v_a_946_);
lean_dec(v_a_945_);
lean_dec_ref(v_a_944_);
lean_dec(v_stx_943_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1(){
_start:
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_973_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_974_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__3));
v___x_975_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___closed__7));
v___x_976_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___boxed), 10, 0);
v___x_977_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_973_, v___x_974_, v___x_975_, v___x_976_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1___boxed(lean_object* v_a_978_){
_start:
{
lean_object* v_res_979_; 
v_res_979_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1();
return v_res_979_;
}
}
lean_object* runtime_initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Constructor(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructorOpt__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Constructor(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Constructor(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Constructor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Constructor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Constructor(builtin);
}
#ifdef __cplusplus
}
#endif
