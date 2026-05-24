// Lean compiler output
// Module: Lean.Elab.Tactic.BVDecide.Frontend.Normalize.EmbeddedConstraint
// Imports: public import Std.Tactic.BVDecide.Normalize.Bool public import Lean.Elab.Tactic.BVDecide.Frontend.Normalize.Basic
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
extern lean_object* l_Lean_Meta_simpGlobalConfig;
lean_object* l_Lean_Meta_SimpTheoremsArray_addTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_getPropHyps(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_MVarId_tryClearMany(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpGoal(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__9;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__10;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__2___boxed, .m_arity = 11, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__0_value)} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "embeddedConstraintSubstitution"};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__2_value),LEAN_SCALAR_PTR_LITERAL(152, 224, 35, 207, 121, 34, 254, 217)}};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__3_value),((lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__1_value)}};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___closed__4_value;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3___redArg___lam__0(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_){
_start:
{
lean_object* v___x_11_; 
lean_inc(v___y_5_);
lean_inc_ref(v___y_4_);
lean_inc(v___y_3_);
lean_inc_ref(v___y_2_);
v___x_11_ = lean_apply_9(v_x_1_, v___y_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, lean_box(0));
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3___redArg___lam__0___boxed(lean_object* v_x_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3___redArg___lam__0(v_x_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3___redArg(lean_object* v_mvarId_23_, lean_object* v_x_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v___f_34_; lean_object* v___x_35_; 
lean_inc(v___y_28_);
lean_inc_ref(v___y_27_);
lean_inc(v___y_26_);
lean_inc_ref(v___y_25_);
v___f_34_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_34_, 0, v_x_24_);
lean_closure_set(v___f_34_, 1, v___y_25_);
lean_closure_set(v___f_34_, 2, v___y_26_);
lean_closure_set(v___f_34_, 3, v___y_27_);
lean_closure_set(v___f_34_, 4, v___y_28_);
v___x_35_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_23_, v___f_34_, v___y_29_, v___y_30_, v___y_31_, v___y_32_);
if (lean_obj_tag(v___x_35_) == 0)
{
return v___x_35_;
}
else
{
lean_object* v_a_36_; lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_43_; 
v_a_36_ = lean_ctor_get(v___x_35_, 0);
v_isSharedCheck_43_ = !lean_is_exclusive(v___x_35_);
if (v_isSharedCheck_43_ == 0)
{
v___x_38_ = v___x_35_;
v_isShared_39_ = v_isSharedCheck_43_;
goto v_resetjp_37_;
}
else
{
lean_inc(v_a_36_);
lean_dec(v___x_35_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_43_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
lean_object* v___x_41_; 
if (v_isShared_39_ == 0)
{
v___x_41_ = v___x_38_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v_a_36_);
v___x_41_ = v_reuseFailAlloc_42_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
return v___x_41_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3___redArg___boxed(lean_object* v_mvarId_44_, lean_object* v_x_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3___redArg(v_mvarId_44_, v_x_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
lean_dec(v___y_49_);
lean_dec_ref(v___y_48_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3(lean_object* v_00_u03b1_56_, lean_object* v_mvarId_57_, lean_object* v_x_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3___redArg(v_mvarId_57_, v_x_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3___boxed(lean_object* v_00_u03b1_69_, lean_object* v_mvarId_70_, lean_object* v_x_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3(v_00_u03b1_69_, v_mvarId_70_, v_x_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
lean_dec(v___y_75_);
lean_dec_ref(v___y_74_);
lean_dec(v___y_73_);
lean_dec_ref(v___y_72_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__0(lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Lean_Meta_getPropHyps(v___y_86_, v___y_87_, v___y_88_, v___y_89_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__0___boxed(lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__0(v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_);
lean_dec(v___y_99_);
lean_dec_ref(v___y_98_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2_spec__4_spec__6___redArg(lean_object* v_x_102_, lean_object* v_x_103_){
_start:
{
if (lean_obj_tag(v_x_103_) == 0)
{
return v_x_102_;
}
else
{
lean_object* v_key_104_; lean_object* v_value_105_; lean_object* v_tail_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_129_; 
v_key_104_ = lean_ctor_get(v_x_103_, 0);
v_value_105_ = lean_ctor_get(v_x_103_, 1);
v_tail_106_ = lean_ctor_get(v_x_103_, 2);
v_isSharedCheck_129_ = !lean_is_exclusive(v_x_103_);
if (v_isSharedCheck_129_ == 0)
{
v___x_108_ = v_x_103_;
v_isShared_109_ = v_isSharedCheck_129_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_tail_106_);
lean_inc(v_value_105_);
lean_inc(v_key_104_);
lean_dec(v_x_103_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_129_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___x_110_; uint64_t v___x_111_; uint64_t v___x_112_; uint64_t v___x_113_; uint64_t v_fold_114_; uint64_t v___x_115_; uint64_t v___x_116_; uint64_t v___x_117_; size_t v___x_118_; size_t v___x_119_; size_t v___x_120_; size_t v___x_121_; size_t v___x_122_; lean_object* v___x_123_; lean_object* v___x_125_; 
v___x_110_ = lean_array_get_size(v_x_102_);
v___x_111_ = l_Lean_Expr_hash(v_key_104_);
v___x_112_ = 32ULL;
v___x_113_ = lean_uint64_shift_right(v___x_111_, v___x_112_);
v_fold_114_ = lean_uint64_xor(v___x_111_, v___x_113_);
v___x_115_ = 16ULL;
v___x_116_ = lean_uint64_shift_right(v_fold_114_, v___x_115_);
v___x_117_ = lean_uint64_xor(v_fold_114_, v___x_116_);
v___x_118_ = lean_uint64_to_usize(v___x_117_);
v___x_119_ = lean_usize_of_nat(v___x_110_);
v___x_120_ = ((size_t)1ULL);
v___x_121_ = lean_usize_sub(v___x_119_, v___x_120_);
v___x_122_ = lean_usize_land(v___x_118_, v___x_121_);
v___x_123_ = lean_array_uget_borrowed(v_x_102_, v___x_122_);
lean_inc(v___x_123_);
if (v_isShared_109_ == 0)
{
lean_ctor_set(v___x_108_, 2, v___x_123_);
v___x_125_ = v___x_108_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_key_104_);
lean_ctor_set(v_reuseFailAlloc_128_, 1, v_value_105_);
lean_ctor_set(v_reuseFailAlloc_128_, 2, v___x_123_);
v___x_125_ = v_reuseFailAlloc_128_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
lean_object* v___x_126_; 
v___x_126_ = lean_array_uset(v_x_102_, v___x_122_, v___x_125_);
v_x_102_ = v___x_126_;
v_x_103_ = v_tail_106_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2_spec__4___redArg(lean_object* v_i_130_, lean_object* v_source_131_, lean_object* v_target_132_){
_start:
{
lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_133_ = lean_array_get_size(v_source_131_);
v___x_134_ = lean_nat_dec_lt(v_i_130_, v___x_133_);
if (v___x_134_ == 0)
{
lean_dec_ref(v_source_131_);
lean_dec(v_i_130_);
return v_target_132_;
}
else
{
lean_object* v_es_135_; lean_object* v___x_136_; lean_object* v_source_137_; lean_object* v_target_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v_es_135_ = lean_array_fget(v_source_131_, v_i_130_);
v___x_136_ = lean_box(0);
v_source_137_ = lean_array_fset(v_source_131_, v_i_130_, v___x_136_);
v_target_138_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2_spec__4_spec__6___redArg(v_target_132_, v_es_135_);
v___x_139_ = lean_unsigned_to_nat(1u);
v___x_140_ = lean_nat_add(v_i_130_, v___x_139_);
lean_dec(v_i_130_);
v_i_130_ = v___x_140_;
v_source_131_ = v_source_137_;
v_target_132_ = v_target_138_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2___redArg(lean_object* v_data_142_){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v_nbuckets_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_143_ = lean_array_get_size(v_data_142_);
v___x_144_ = lean_unsigned_to_nat(2u);
v_nbuckets_145_ = lean_nat_mul(v___x_143_, v___x_144_);
v___x_146_ = lean_unsigned_to_nat(0u);
v___x_147_ = lean_box(0);
v___x_148_ = lean_mk_array(v_nbuckets_145_, v___x_147_);
v___x_149_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2_spec__4___redArg(v___x_146_, v_data_142_, v___x_148_);
return v___x_149_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0_spec__0___redArg(lean_object* v_a_150_, lean_object* v_x_151_){
_start:
{
if (lean_obj_tag(v_x_151_) == 0)
{
uint8_t v___x_152_; 
v___x_152_ = 0;
return v___x_152_;
}
else
{
lean_object* v_key_153_; lean_object* v_tail_154_; uint8_t v___x_155_; 
v_key_153_ = lean_ctor_get(v_x_151_, 0);
v_tail_154_ = lean_ctor_get(v_x_151_, 2);
v___x_155_ = lean_expr_eqv(v_key_153_, v_a_150_);
if (v___x_155_ == 0)
{
v_x_151_ = v_tail_154_;
goto _start;
}
else
{
return v___x_155_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0_spec__0___redArg___boxed(lean_object* v_a_157_, lean_object* v_x_158_){
_start:
{
uint8_t v_res_159_; lean_object* v_r_160_; 
v_res_159_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0_spec__0___redArg(v_a_157_, v_x_158_);
lean_dec(v_x_158_);
lean_dec_ref(v_a_157_);
v_r_160_ = lean_box(v_res_159_);
return v_r_160_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1___redArg(lean_object* v_m_161_, lean_object* v_a_162_, lean_object* v_b_163_){
_start:
{
lean_object* v_size_164_; lean_object* v_buckets_165_; lean_object* v___x_166_; uint64_t v___x_167_; uint64_t v___x_168_; uint64_t v___x_169_; uint64_t v_fold_170_; uint64_t v___x_171_; uint64_t v___x_172_; uint64_t v___x_173_; size_t v___x_174_; size_t v___x_175_; size_t v___x_176_; size_t v___x_177_; size_t v___x_178_; lean_object* v_bkt_179_; uint8_t v___x_180_; 
v_size_164_ = lean_ctor_get(v_m_161_, 0);
v_buckets_165_ = lean_ctor_get(v_m_161_, 1);
v___x_166_ = lean_array_get_size(v_buckets_165_);
v___x_167_ = l_Lean_Expr_hash(v_a_162_);
v___x_168_ = 32ULL;
v___x_169_ = lean_uint64_shift_right(v___x_167_, v___x_168_);
v_fold_170_ = lean_uint64_xor(v___x_167_, v___x_169_);
v___x_171_ = 16ULL;
v___x_172_ = lean_uint64_shift_right(v_fold_170_, v___x_171_);
v___x_173_ = lean_uint64_xor(v_fold_170_, v___x_172_);
v___x_174_ = lean_uint64_to_usize(v___x_173_);
v___x_175_ = lean_usize_of_nat(v___x_166_);
v___x_176_ = ((size_t)1ULL);
v___x_177_ = lean_usize_sub(v___x_175_, v___x_176_);
v___x_178_ = lean_usize_land(v___x_174_, v___x_177_);
v_bkt_179_ = lean_array_uget_borrowed(v_buckets_165_, v___x_178_);
v___x_180_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0_spec__0___redArg(v_a_162_, v_bkt_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_201_; 
lean_inc_ref(v_buckets_165_);
lean_inc(v_size_164_);
v_isSharedCheck_201_ = !lean_is_exclusive(v_m_161_);
if (v_isSharedCheck_201_ == 0)
{
lean_object* v_unused_202_; lean_object* v_unused_203_; 
v_unused_202_ = lean_ctor_get(v_m_161_, 1);
lean_dec(v_unused_202_);
v_unused_203_ = lean_ctor_get(v_m_161_, 0);
lean_dec(v_unused_203_);
v___x_182_ = v_m_161_;
v_isShared_183_ = v_isSharedCheck_201_;
goto v_resetjp_181_;
}
else
{
lean_dec(v_m_161_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_201_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_184_; lean_object* v_size_x27_185_; lean_object* v___x_186_; lean_object* v_buckets_x27_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v___x_193_; 
v___x_184_ = lean_unsigned_to_nat(1u);
v_size_x27_185_ = lean_nat_add(v_size_164_, v___x_184_);
lean_dec(v_size_164_);
lean_inc(v_bkt_179_);
v___x_186_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_186_, 0, v_a_162_);
lean_ctor_set(v___x_186_, 1, v_b_163_);
lean_ctor_set(v___x_186_, 2, v_bkt_179_);
v_buckets_x27_187_ = lean_array_uset(v_buckets_165_, v___x_178_, v___x_186_);
v___x_188_ = lean_unsigned_to_nat(4u);
v___x_189_ = lean_nat_mul(v_size_x27_185_, v___x_188_);
v___x_190_ = lean_unsigned_to_nat(3u);
v___x_191_ = lean_nat_div(v___x_189_, v___x_190_);
lean_dec(v___x_189_);
v___x_192_ = lean_array_get_size(v_buckets_x27_187_);
v___x_193_ = lean_nat_dec_le(v___x_191_, v___x_192_);
lean_dec(v___x_191_);
if (v___x_193_ == 0)
{
lean_object* v_val_194_; lean_object* v___x_196_; 
v_val_194_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2___redArg(v_buckets_x27_187_);
if (v_isShared_183_ == 0)
{
lean_ctor_set(v___x_182_, 1, v_val_194_);
lean_ctor_set(v___x_182_, 0, v_size_x27_185_);
v___x_196_ = v___x_182_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_size_x27_185_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v_val_194_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
else
{
lean_object* v___x_199_; 
if (v_isShared_183_ == 0)
{
lean_ctor_set(v___x_182_, 1, v_buckets_x27_187_);
lean_ctor_set(v___x_182_, 0, v_size_x27_185_);
v___x_199_ = v___x_182_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_size_x27_185_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v_buckets_x27_187_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
}
}
else
{
lean_dec(v_b_163_);
lean_dec_ref(v_a_162_);
return v_m_161_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0___redArg(lean_object* v_m_204_, lean_object* v_a_205_){
_start:
{
lean_object* v_buckets_206_; lean_object* v___x_207_; uint64_t v___x_208_; uint64_t v___x_209_; uint64_t v___x_210_; uint64_t v_fold_211_; uint64_t v___x_212_; uint64_t v___x_213_; uint64_t v___x_214_; size_t v___x_215_; size_t v___x_216_; size_t v___x_217_; size_t v___x_218_; size_t v___x_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v_buckets_206_ = lean_ctor_get(v_m_204_, 1);
v___x_207_ = lean_array_get_size(v_buckets_206_);
v___x_208_ = l_Lean_Expr_hash(v_a_205_);
v___x_209_ = 32ULL;
v___x_210_ = lean_uint64_shift_right(v___x_208_, v___x_209_);
v_fold_211_ = lean_uint64_xor(v___x_208_, v___x_210_);
v___x_212_ = 16ULL;
v___x_213_ = lean_uint64_shift_right(v_fold_211_, v___x_212_);
v___x_214_ = lean_uint64_xor(v_fold_211_, v___x_213_);
v___x_215_ = lean_uint64_to_usize(v___x_214_);
v___x_216_ = lean_usize_of_nat(v___x_207_);
v___x_217_ = ((size_t)1ULL);
v___x_218_ = lean_usize_sub(v___x_216_, v___x_217_);
v___x_219_ = lean_usize_land(v___x_215_, v___x_218_);
v___x_220_ = lean_array_uget_borrowed(v_buckets_206_, v___x_219_);
v___x_221_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0_spec__0___redArg(v_a_205_, v___x_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0___redArg___boxed(lean_object* v_m_222_, lean_object* v_a_223_){
_start:
{
uint8_t v_res_224_; lean_object* v_r_225_; 
v_res_224_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0___redArg(v_m_222_, v_a_223_);
lean_dec_ref(v_a_223_);
lean_dec_ref(v_m_222_);
v_r_225_ = lean_box(v_res_224_);
return v_r_225_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg(lean_object* v_as_234_, size_t v_sz_235_, size_t v_i_236_, lean_object* v_b_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_){
_start:
{
lean_object* v_a_244_; uint8_t v___x_248_; 
v___x_248_ = lean_usize_dec_lt(v_i_236_, v_sz_235_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; 
v___x_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_249_, 0, v_b_237_);
return v___x_249_;
}
else
{
lean_object* v_a_250_; lean_object* v___x_251_; 
v_a_250_ = lean_array_uget_borrowed(v_as_234_, v_i_236_);
lean_inc(v_a_250_);
v___x_251_ = l_Lean_FVarId_getType___redArg(v_a_250_, v___y_238_, v___y_240_, v___y_241_);
if (lean_obj_tag(v___x_251_) == 0)
{
lean_object* v_snd_252_; lean_object* v_a_253_; lean_object* v_fst_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_318_; 
v_snd_252_ = lean_ctor_get(v_b_237_, 1);
lean_inc(v_snd_252_);
v_a_253_ = lean_ctor_get(v___x_251_, 0);
lean_inc(v_a_253_);
lean_dec_ref_known(v___x_251_, 1);
v_fst_254_ = lean_ctor_get(v_b_237_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v_b_237_);
if (v_isSharedCheck_318_ == 0)
{
lean_object* v_unused_319_; 
v_unused_319_ = lean_ctor_get(v_b_237_, 1);
lean_dec(v_unused_319_);
v___x_256_ = v_b_237_;
v_isShared_257_ = v_isSharedCheck_318_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_fst_254_);
lean_dec(v_b_237_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_318_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v_fst_258_; lean_object* v_snd_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_317_; 
v_fst_258_ = lean_ctor_get(v_snd_252_, 0);
v_snd_259_ = lean_ctor_get(v_snd_252_, 1);
v_isSharedCheck_317_ = !lean_is_exclusive(v_snd_252_);
if (v_isSharedCheck_317_ == 0)
{
v___x_261_ = v_snd_252_;
v_isShared_262_ = v_isSharedCheck_317_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_snd_259_);
lean_inc(v_fst_258_);
lean_dec(v_snd_252_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_317_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_270_; uint8_t v___x_271_; 
v___x_270_ = l_Lean_Expr_cleanupAnnotations(v_a_253_);
v___x_271_ = l_Lean_Expr_isApp(v___x_270_);
if (v___x_271_ == 0)
{
lean_dec_ref(v___x_270_);
goto v___jp_263_;
}
else
{
lean_object* v_arg_272_; lean_object* v___x_273_; uint8_t v___x_274_; 
v_arg_272_ = lean_ctor_get(v___x_270_, 1);
lean_inc_ref(v_arg_272_);
v___x_273_ = l_Lean_Expr_appFnCleanup___redArg(v___x_270_);
v___x_274_ = l_Lean_Expr_isApp(v___x_273_);
if (v___x_274_ == 0)
{
lean_dec_ref(v___x_273_);
lean_dec_ref(v_arg_272_);
goto v___jp_263_;
}
else
{
lean_object* v_arg_275_; lean_object* v___x_276_; uint8_t v___x_277_; 
v_arg_275_ = lean_ctor_get(v___x_273_, 1);
lean_inc_ref(v_arg_275_);
v___x_276_ = l_Lean_Expr_appFnCleanup___redArg(v___x_273_);
v___x_277_ = l_Lean_Expr_isApp(v___x_276_);
if (v___x_277_ == 0)
{
lean_dec_ref(v___x_276_);
lean_dec_ref(v_arg_275_);
lean_dec_ref(v_arg_272_);
goto v___jp_263_;
}
else
{
lean_object* v___x_278_; lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_278_ = l_Lean_Expr_appFnCleanup___redArg(v___x_276_);
v___x_279_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__1));
v___x_280_ = l_Lean_Expr_isConstOf(v___x_278_, v___x_279_);
lean_dec_ref(v___x_278_);
if (v___x_280_ == 0)
{
lean_dec_ref(v_arg_275_);
lean_dec_ref(v_arg_272_);
goto v___jp_263_;
}
else
{
lean_object* v___x_281_; lean_object* v___x_282_; uint8_t v___x_283_; 
lean_del_object(v___x_261_);
lean_del_object(v___x_256_);
v___x_281_ = l_Lean_Expr_cleanupAnnotations(v_arg_272_);
v___x_282_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___closed__4));
v___x_283_ = l_Lean_Expr_isConstOf(v___x_281_, v___x_282_);
lean_dec_ref(v___x_281_);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; lean_object* v___x_285_; 
lean_dec_ref(v_arg_275_);
v___x_284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_284_, 0, v_fst_258_);
lean_ctor_set(v___x_284_, 1, v_snd_259_);
v___x_285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_285_, 0, v_fst_254_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v_a_244_ = v___x_285_;
goto v___jp_243_;
}
else
{
uint8_t v___x_286_; 
v___x_286_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0___redArg(v_fst_258_, v_arg_275_);
if (v___x_286_ == 0)
{
lean_object* v___x_287_; 
lean_inc(v_a_250_);
v___x_287_ = l_Lean_FVarId_getDecl___redArg(v_a_250_, v___y_238_, v___y_240_, v___y_241_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v_a_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v_a_288_ = lean_ctor_get(v___x_287_, 0);
lean_inc(v_a_288_);
lean_dec_ref_known(v___x_287_, 1);
v___x_289_ = l_Lean_LocalDecl_toExpr(v_a_288_);
lean_inc(v_a_250_);
v___x_290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_290_, 0, v_a_250_);
v___x_291_ = l_Lean_Meta_simpGlobalConfig;
v___x_292_ = l_Lean_Meta_SimpTheoremsArray_addTheorem(v_fst_254_, v___x_290_, v___x_289_, v___x_291_, v___y_238_, v___y_239_, v___y_240_, v___y_241_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_293_);
lean_dec_ref_known(v___x_292_, 1);
v___x_294_ = lean_box(0);
v___x_295_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1___redArg(v_fst_258_, v_arg_275_, v___x_294_);
v___x_296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
lean_ctor_set(v___x_296_, 1, v_snd_259_);
v___x_297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_297_, 0, v_a_293_);
lean_ctor_set(v___x_297_, 1, v___x_296_);
v_a_244_ = v___x_297_;
goto v___jp_243_;
}
else
{
lean_object* v_a_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_305_; 
lean_dec_ref(v_arg_275_);
lean_dec(v_snd_259_);
lean_dec(v_fst_258_);
v_a_298_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_305_ == 0)
{
v___x_300_ = v___x_292_;
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_a_298_);
lean_dec(v___x_292_);
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
else
{
lean_object* v_a_306_; lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_313_; 
lean_dec_ref(v_arg_275_);
lean_dec(v_snd_259_);
lean_dec(v_fst_258_);
lean_dec(v_fst_254_);
v_a_306_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_313_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_313_ == 0)
{
v___x_308_ = v___x_287_;
v_isShared_309_ = v_isSharedCheck_313_;
goto v_resetjp_307_;
}
else
{
lean_inc(v_a_306_);
lean_dec(v___x_287_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_313_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v___x_311_; 
if (v_isShared_309_ == 0)
{
v___x_311_ = v___x_308_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v_a_306_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
}
}
else
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
lean_dec_ref(v_arg_275_);
lean_inc(v_a_250_);
v___x_314_ = lean_array_push(v_snd_259_, v_a_250_);
v___x_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_315_, 0, v_fst_258_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
v___x_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_316_, 0, v_fst_254_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
v_a_244_ = v___x_316_;
goto v___jp_243_;
}
}
}
}
}
}
v___jp_263_:
{
lean_object* v___x_265_; 
if (v_isShared_262_ == 0)
{
v___x_265_ = v___x_261_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_fst_258_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v_snd_259_);
v___x_265_ = v_reuseFailAlloc_269_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
lean_object* v___x_267_; 
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 1, v___x_265_);
v___x_267_ = v___x_256_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_fst_254_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v___x_265_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
v_a_244_ = v___x_267_;
goto v___jp_243_;
}
}
}
}
}
}
else
{
lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_327_; 
lean_dec_ref(v_b_237_);
v_a_320_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_327_ == 0)
{
v___x_322_ = v___x_251_;
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v___x_251_);
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
v___jp_243_:
{
size_t v___x_245_; size_t v___x_246_; 
v___x_245_ = ((size_t)1ULL);
v___x_246_ = lean_usize_add(v_i_236_, v___x_245_);
v_i_236_ = v___x_246_;
v_b_237_ = v_a_244_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg___boxed(lean_object* v_as_328_, lean_object* v_sz_329_, lean_object* v_i_330_, lean_object* v_b_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_){
_start:
{
size_t v_sz_boxed_337_; size_t v_i_boxed_338_; lean_object* v_res_339_; 
v_sz_boxed_337_ = lean_unbox_usize(v_sz_329_);
lean_dec(v_sz_329_);
v_i_boxed_338_ = lean_unbox_usize(v_i_330_);
lean_dec(v_i_330_);
v_res_339_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg(v_as_328_, v_sz_boxed_337_, v_i_boxed_338_, v_b_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_);
lean_dec(v___y_335_);
lean_dec_ref(v___y_334_);
lean_dec(v___y_333_);
lean_dec_ref(v___y_332_);
lean_dec_ref(v_as_328_);
return v_res_339_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__1(void){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_342_ = lean_box(0);
v___x_343_ = lean_unsigned_to_nat(16u);
v___x_344_ = lean_mk_array(v___x_343_, v___x_342_);
return v___x_344_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__2(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v_seen_347_; 
v___x_345_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__1);
v___x_346_ = lean_unsigned_to_nat(0u);
v_seen_347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_seen_347_, 0, v___x_346_);
lean_ctor_set(v_seen_347_, 1, v___x_345_);
return v_seen_347_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__3(void){
_start:
{
lean_object* v_relevantHyps_348_; lean_object* v_seen_349_; lean_object* v___x_350_; 
v_relevantHyps_348_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__0));
v_seen_349_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__2);
v___x_350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_350_, 0, v_seen_349_);
lean_ctor_set(v___x_350_, 1, v_relevantHyps_348_);
return v___x_350_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__4(void){
_start:
{
lean_object* v___x_351_; lean_object* v_relevantHyps_352_; lean_object* v___x_353_; 
v___x_351_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__3);
v_relevantHyps_352_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__0));
v___x_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_353_, 0, v_relevantHyps_352_);
lean_ctor_set(v___x_353_, 1, v___x_351_);
return v___x_353_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__5(void){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_354_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__6(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__5, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__5_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__5);
v___x_356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
return v___x_356_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__7(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_357_ = lean_unsigned_to_nat(0u);
v___x_358_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__6, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__6_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__6);
v___x_359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
lean_ctor_set(v___x_359_, 1, v___x_357_);
return v___x_359_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__8(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_360_ = lean_unsigned_to_nat(32u);
v___x_361_ = lean_mk_empty_array_with_capacity(v___x_360_);
v___x_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_362_, 0, v___x_361_);
return v___x_362_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__9(void){
_start:
{
size_t v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_363_ = ((size_t)5ULL);
v___x_364_ = lean_unsigned_to_nat(0u);
v___x_365_ = lean_unsigned_to_nat(32u);
v___x_366_ = lean_mk_empty_array_with_capacity(v___x_365_);
v___x_367_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__8, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__8_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__8);
v___x_368_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_368_, 0, v___x_367_);
lean_ctor_set(v___x_368_, 1, v___x_366_);
lean_ctor_set(v___x_368_, 2, v___x_364_);
lean_ctor_set(v___x_368_, 3, v___x_364_);
lean_ctor_set_usize(v___x_368_, 4, v___x_363_);
return v___x_368_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__10(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_369_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__9, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__9_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__9);
v___x_370_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__6, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__6_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__6);
v___x_371_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_371_, 0, v___x_370_);
lean_ctor_set(v___x_371_, 1, v___x_370_);
lean_ctor_set(v___x_371_, 2, v___x_370_);
lean_ctor_set(v___x_371_, 3, v___x_369_);
return v___x_371_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__11(void){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_372_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__10, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__10_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__10);
v___x_373_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__7, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__7_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__7);
v___x_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
lean_ctor_set(v___x_374_, 1, v___x_372_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1(lean_object* v_goal_375_, lean_object* v___f_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = l_Lean_Meta_getPropHyps(v___y_381_, v___y_382_, v___y_383_, v___y_384_);
if (lean_obj_tag(v___x_386_) == 0)
{
lean_object* v_a_387_; lean_object* v___x_388_; lean_object* v_relevantHyps_389_; lean_object* v___x_390_; size_t v_sz_391_; size_t v___x_392_; lean_object* v___x_393_; 
v_a_387_ = lean_ctor_get(v___x_386_, 0);
lean_inc(v_a_387_);
lean_dec_ref_known(v___x_386_, 1);
v___x_388_ = lean_unsigned_to_nat(0u);
v_relevantHyps_389_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__0));
v___x_390_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__4, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__4_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__4);
v_sz_391_ = lean_array_size(v_a_387_);
v___x_392_ = ((size_t)0ULL);
v___x_393_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg(v_a_387_, v_sz_391_, v___x_392_, v___x_390_, v___y_381_, v___y_382_, v___y_383_, v___y_384_);
lean_dec(v_a_387_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v_a_394_; lean_object* v_snd_395_; lean_object* v_fst_396_; lean_object* v_snd_397_; lean_object* v___x_398_; 
v_a_394_ = lean_ctor_get(v___x_393_, 0);
lean_inc(v_a_394_);
lean_dec_ref_known(v___x_393_, 1);
v_snd_395_ = lean_ctor_get(v_a_394_, 1);
lean_inc(v_snd_395_);
v_fst_396_ = lean_ctor_get(v_a_394_, 0);
lean_inc(v_fst_396_);
lean_dec(v_a_394_);
v_snd_397_ = lean_ctor_get(v_snd_395_, 1);
lean_inc(v_snd_397_);
lean_dec(v_snd_395_);
v___x_398_ = l_Lean_MVarId_tryClearMany(v_goal_375_, v_snd_397_, v___y_381_, v___y_382_, v___y_383_, v___y_384_);
lean_dec(v_snd_397_);
if (lean_obj_tag(v___x_398_) == 0)
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_477_; 
v_a_399_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_477_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_477_ == 0)
{
v___x_401_ = v___x_398_;
v_isShared_402_ = v_isSharedCheck_477_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_398_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_477_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_403_; uint8_t v___x_404_; 
v___x_403_ = lean_array_get_size(v_fst_396_);
v___x_404_ = lean_nat_dec_eq(v___x_403_, v___x_388_);
if (v___x_404_ == 0)
{
lean_object* v___x_405_; 
lean_del_object(v___x_401_);
lean_inc(v_a_399_);
v___x_405_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3___redArg(v_a_399_, v___f_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v_a_406_; lean_object* v___x_407_; 
v_a_406_ = lean_ctor_get(v___x_405_, 0);
lean_inc(v_a_406_);
lean_dec_ref_known(v___x_405_, 1);
v___x_407_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v___y_384_);
if (lean_obj_tag(v___x_407_) == 0)
{
lean_object* v_a_408_; lean_object* v_maxSteps_409_; uint8_t v___x_410_; lean_object* v___x_411_; uint8_t v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v_a_408_ = lean_ctor_get(v___x_407_, 0);
lean_inc(v_a_408_);
lean_dec_ref_known(v___x_407_, 1);
v_maxSteps_409_ = lean_ctor_get(v___y_377_, 1);
v___x_410_ = 1;
v___x_411_ = lean_unsigned_to_nat(2u);
v___x_412_ = 0;
v___x_413_ = lean_box(0);
lean_inc(v_maxSteps_409_);
v___x_414_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_414_, 0, v_maxSteps_409_);
lean_ctor_set(v___x_414_, 1, v___x_411_);
lean_ctor_set(v___x_414_, 2, v___x_413_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3, v___x_404_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 1, v___x_410_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 2, v___x_404_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 3, v___x_410_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 4, v___x_410_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 5, v___x_410_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 6, v___x_412_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 7, v___x_410_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 8, v___x_410_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 9, v___x_404_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 10, v___x_404_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 11, v___x_404_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 12, v___x_410_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 13, v___x_404_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 14, v___x_404_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 15, v___x_404_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 16, v___x_404_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 17, v___x_410_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 18, v___x_404_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 19, v___x_410_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 20, v___x_410_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 21, v___x_410_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 22, v___x_410_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 23, v___x_410_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 24, v___x_410_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 25, v___x_410_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 26, v___x_404_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 27, v___x_404_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*3 + 28, v___x_410_);
v___x_415_ = l_Lean_Options_empty;
v___x_416_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_414_, v_fst_396_, v_a_408_, v___x_415_, v___y_381_, v___y_383_, v___y_384_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_object* v_a_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v_a_417_ = lean_ctor_get(v___x_416_, 0);
lean_inc(v_a_417_);
lean_dec_ref_known(v___x_416_, 1);
v___x_418_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__11, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__11_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___closed__11);
v___x_419_ = l_Lean_Meta_simpGoal(v_a_399_, v_a_417_, v_relevantHyps_389_, v___x_413_, v___x_410_, v_a_406_, v___x_418_, v___y_381_, v___y_382_, v___y_383_, v___y_384_);
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_440_; 
v_a_420_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_440_ == 0)
{
v___x_422_ = v___x_419_;
v_isShared_423_ = v_isSharedCheck_440_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_419_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_440_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v_fst_424_; 
v_fst_424_ = lean_ctor_get(v_a_420_, 0);
lean_inc(v_fst_424_);
lean_dec(v_a_420_);
if (lean_obj_tag(v_fst_424_) == 1)
{
lean_object* v_val_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_436_; 
v_val_425_ = lean_ctor_get(v_fst_424_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v_fst_424_);
if (v_isSharedCheck_436_ == 0)
{
v___x_427_ = v_fst_424_;
v_isShared_428_ = v_isSharedCheck_436_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_val_425_);
lean_dec(v_fst_424_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_436_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v_snd_429_; lean_object* v___x_431_; 
v_snd_429_ = lean_ctor_get(v_val_425_, 1);
lean_inc(v_snd_429_);
lean_dec(v_val_425_);
if (v_isShared_428_ == 0)
{
lean_ctor_set(v___x_427_, 0, v_snd_429_);
v___x_431_ = v___x_427_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_snd_429_);
v___x_431_ = v_reuseFailAlloc_435_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
lean_object* v___x_433_; 
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v___x_431_);
v___x_433_ = v___x_422_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v___x_431_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
}
else
{
lean_object* v___x_438_; 
lean_dec(v_fst_424_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v___x_413_);
v___x_438_ = v___x_422_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v___x_413_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
}
else
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_448_; 
v_a_441_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_448_ == 0)
{
v___x_443_ = v___x_419_;
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_419_);
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
else
{
lean_object* v_a_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_456_; 
lean_dec(v_a_406_);
lean_dec(v_a_399_);
v_a_449_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_456_ == 0)
{
v___x_451_ = v___x_416_;
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_a_449_);
lean_dec(v___x_416_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_454_; 
if (v_isShared_452_ == 0)
{
v___x_454_ = v___x_451_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_a_449_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
lean_dec(v_a_406_);
lean_dec(v_a_399_);
lean_dec(v_fst_396_);
v_a_457_ = lean_ctor_get(v___x_407_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_407_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_407_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_457_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
else
{
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_472_; 
lean_dec(v_a_399_);
lean_dec(v_fst_396_);
v_a_465_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_472_ == 0)
{
v___x_467_ = v___x_405_;
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v___x_405_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_470_; 
if (v_isShared_468_ == 0)
{
v___x_470_ = v___x_467_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_a_465_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
else
{
lean_object* v___x_473_; lean_object* v___x_475_; 
lean_dec(v_fst_396_);
lean_dec_ref(v___f_376_);
v___x_473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_473_, 0, v_a_399_);
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 0, v___x_473_);
v___x_475_ = v___x_401_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v___x_473_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
}
else
{
lean_object* v_a_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_485_; 
lean_dec(v_fst_396_);
lean_dec_ref(v___f_376_);
v_a_478_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_485_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_485_ == 0)
{
v___x_480_ = v___x_398_;
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_a_478_);
lean_dec(v___x_398_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v___x_483_; 
if (v_isShared_481_ == 0)
{
v___x_483_ = v___x_480_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v_a_478_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
return v___x_483_;
}
}
}
}
else
{
lean_object* v_a_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_493_; 
lean_dec_ref(v___f_376_);
lean_dec(v_goal_375_);
v_a_486_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_493_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_493_ == 0)
{
v___x_488_ = v___x_393_;
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_a_486_);
lean_dec(v___x_393_);
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
else
{
lean_object* v_a_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_501_; 
lean_dec_ref(v___f_376_);
lean_dec(v_goal_375_);
v_a_494_ = lean_ctor_get(v___x_386_, 0);
v_isSharedCheck_501_ = !lean_is_exclusive(v___x_386_);
if (v_isSharedCheck_501_ == 0)
{
v___x_496_ = v___x_386_;
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_a_494_);
lean_dec(v___x_386_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_499_; 
if (v_isShared_497_ == 0)
{
v___x_499_ = v___x_496_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_a_494_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___boxed(lean_object* v_goal_502_, lean_object* v___f_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1(v_goal_502_, v___f_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_);
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__2(lean_object* v___f_514_, lean_object* v_goal_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_){
_start:
{
lean_object* v___f_525_; lean_object* v___x_526_; 
lean_inc(v_goal_515_);
v___f_525_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__1___boxed), 11, 2);
lean_closure_set(v___f_525_, 0, v_goal_515_);
lean_closure_set(v___f_525_, 1, v___f_514_);
v___x_526_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__3___redArg(v_goal_515_, v___f_525_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, v___y_523_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__2___boxed(lean_object* v___f_527_, lean_object* v_goal_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass___lam__2(v___f_527_, v_goal_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec(v___y_534_);
lean_dec_ref(v___y_533_);
lean_dec(v___y_532_);
lean_dec_ref(v___y_531_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
return v_res_538_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0(lean_object* v_00_u03b2_549_, lean_object* v_m_550_, lean_object* v_a_551_){
_start:
{
uint8_t v___x_552_; 
v___x_552_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0___redArg(v_m_550_, v_a_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0___boxed(lean_object* v_00_u03b2_553_, lean_object* v_m_554_, lean_object* v_a_555_){
_start:
{
uint8_t v_res_556_; lean_object* v_r_557_; 
v_res_556_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0(v_00_u03b2_553_, v_m_554_, v_a_555_);
lean_dec_ref(v_a_555_);
lean_dec_ref(v_m_554_);
v_r_557_ = lean_box(v_res_556_);
return v_r_557_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1(lean_object* v_00_u03b2_558_, lean_object* v_m_559_, lean_object* v_a_560_, lean_object* v_b_561_){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1___redArg(v_m_559_, v_a_560_, v_b_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2(lean_object* v_as_563_, size_t v_sz_564_, size_t v_i_565_, lean_object* v_b_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_){
_start:
{
lean_object* v___x_576_; 
v___x_576_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___redArg(v_as_563_, v_sz_564_, v_i_565_, v_b_566_, v___y_571_, v___y_572_, v___y_573_, v___y_574_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2___boxed(lean_object* v_as_577_, lean_object* v_sz_578_, lean_object* v_i_579_, lean_object* v_b_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
size_t v_sz_boxed_590_; size_t v_i_boxed_591_; lean_object* v_res_592_; 
v_sz_boxed_590_ = lean_unbox_usize(v_sz_578_);
lean_dec(v_sz_578_);
v_i_boxed_591_ = lean_unbox_usize(v_i_579_);
lean_dec(v_i_579_);
v_res_592_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__2(v_as_577_, v_sz_boxed_590_, v_i_boxed_591_, v_b_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
lean_dec_ref(v_as_577_);
return v_res_592_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0_spec__0(lean_object* v_00_u03b2_593_, lean_object* v_a_594_, lean_object* v_x_595_){
_start:
{
uint8_t v___x_596_; 
v___x_596_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0_spec__0___redArg(v_a_594_, v_x_595_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0_spec__0___boxed(lean_object* v_00_u03b2_597_, lean_object* v_a_598_, lean_object* v_x_599_){
_start:
{
uint8_t v_res_600_; lean_object* v_r_601_; 
v_res_600_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__0_spec__0(v_00_u03b2_597_, v_a_598_, v_x_599_);
lean_dec(v_x_599_);
lean_dec_ref(v_a_598_);
v_r_601_ = lean_box(v_res_600_);
return v_r_601_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2(lean_object* v_00_u03b2_602_, lean_object* v_data_603_){
_start:
{
lean_object* v___x_604_; 
v___x_604_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2___redArg(v_data_603_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_605_, lean_object* v_i_606_, lean_object* v_source_607_, lean_object* v_target_608_){
_start:
{
lean_object* v___x_609_; 
v___x_609_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2_spec__4___redArg(v_i_606_, v_source_607_, v_target_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_610_, lean_object* v_x_611_, lean_object* v_x_612_){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_embeddedConstraintPass_spec__1_spec__2_spec__4_spec__6___redArg(v_x_611_, v_x_612_);
return v___x_613_;
}
}
lean_object* runtime_initialize_Std_Tactic_BVDecide_Normalize_Bool(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_EmbeddedConstraint(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Tactic_BVDecide_Normalize_Bool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_EmbeddedConstraint(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Tactic_BVDecide_Normalize_Bool(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_EmbeddedConstraint(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_BVDecide_Normalize_Bool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_EmbeddedConstraint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_EmbeddedConstraint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_EmbeddedConstraint(builtin);
}
#ifdef __cplusplus
}
#endif
