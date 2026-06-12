// Lean compiler output
// Module: Lean.Elab.Do.Control
// Imports: import Lean.Meta.ProdN public import Lean.Elab.Do.Basic import Init.Control.Do
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
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getLabeledTarget_x3f___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarFromUserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkInstMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_mkFreshResultType___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_mkMonadApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getReturnCont___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Elab_Do_getContinueCont___redArg(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getBreakCont___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_getLocalDeclFromUserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_mkProdN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Do_bindMutVarsFromTuple(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Elab_Term_addTermInfo_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkProdMkN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getReturnCont___redArg(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_withDeadCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_ContInfo_toContInfoRefImpl(lean_object*);
lean_object* l_Lean_Elab_Do_ContInfoRef_toContInfoImpl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_unStM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "α"};
static const lean_object* l_Lean_Elab_Do_ControlStack_unStM___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_unStM___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_unStM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_unStM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(102, 24, 27, 80, 217, 159, 184, 13)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_unStM___closed__1 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_unStM___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_ControlStack_unStM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Could not take apart "};
static const lean_object* l_Lean_Elab_Do_ControlStack_unStM___closed__2 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_unStM___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_unStM___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_unStM___closed__3;
static const lean_string_object l_Lean_Elab_Do_ControlStack_unStM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " as a `"};
static const lean_object* l_Lean_Elab_Do_ControlStack_unStM___closed__4 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_unStM___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_unStM___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_unStM___closed__5;
static const lean_string_object l_Lean_Elab_Do_ControlStack_unStM___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "`. This is a bug in the `do` elaborator."};
static const lean_object* l_Lean_Elab_Do_ControlStack_unStM___closed__6 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_unStM___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_unStM___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_unStM___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_unStM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_unStM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_base___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_base___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_base___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_base___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_base___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "base"};
static const lean_object* l_Lean_Elab_Do_ControlStack_base___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_base___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_base___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_ControlStack_base___lam__2___closed__0_value)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_base___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_base___lam__2___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_base___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_base___lam__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_base___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_base___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_base___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Do_ControlStack_base___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Do_ControlStack_base___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_ControlStack_base___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_base___closed__0_value;
static const lean_closure_object l_Lean_Elab_Do_ControlStack_base___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Do_ControlStack_base___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_ControlStack_base___closed__1 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_base___closed__1_value;
static const lean_closure_object l_Lean_Elab_Do_ControlStack_base___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Do_ControlStack_base___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_ControlStack_base___closed__2 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_base___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_base(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_mutVarNames_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_mutVarNames_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_mutVarNames(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3_spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_stM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Prod"};
static const lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_stM___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_stM___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_stM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_stM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_stM___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_stM___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_stM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_stM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "StateT "};
static const lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__1;
static const lean_string_object l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " over "};
static const lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_stateT___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_stateT___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_stateT___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_stateT___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 153, 146, 175, 179, 220, 230, 134)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__3___closed__1 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_stateT___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_ControlStack_stateT_spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_ControlStack_stateT_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "State tuple type mismatch: expected "};
static const lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__1;
static const lean_string_object l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ", got "};
static const lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__2 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__3;
static const lean_string_object l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = ". This is a bug in the `do` elaborator."};
static const lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__4 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_stateT___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "StateT"};
static const lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_stateT___lam__5___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_stateT___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_stateT___lam__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(126, 164, 216, 239, 139, 104, 41, 209)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__5___closed__1 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_stateT___lam__5___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_ControlStack_stateT_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_ControlStack_stateT_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_optionT_stM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_optionT_stM___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_optionT_stM___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_optionT_stM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_optionT_stM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_optionT_stM___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_optionT_stM___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_optionT_stM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_optionT_stM___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_optionT___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "OptionT"};
static const lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_optionT___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_ControlStack_optionT___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "run"};
static const lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_optionT___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_optionT___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_optionT___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(156, 175, 92, 88, 165, 100, 98, 9)}};
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_optionT___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_ControlStack_optionT___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Do_ControlStack_optionT___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 193, 54, 32, 53, 52, 46, 31)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_optionT___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_optionT___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "OptionT over "};
static const lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_optionT___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_optionT___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "r"};
static const lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(201, 206, 29, 183, 206, 15, 98, 41)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__1 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__2 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__2_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__3 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_optionT___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "e"};
static const lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_optionT___lam__6___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_optionT___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_optionT___lam__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(26, 154, 90, 102, 217, 192, 49, 255)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__6___closed__1 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_optionT___lam__6___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_exceptT_stM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Except"};
static const lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_exceptT_stM___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_exceptT_stM___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_exceptT_stM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_exceptT_stM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(238, 113, 136, 33, 237, 151, 233, 210)}};
static const lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_exceptT_stM___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_exceptT_stM___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_exceptT_stM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_exceptT_stM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ExceptT ("};
static const lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__1;
static const lean_string_object l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ") over "};
static const lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__2 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_exceptT___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ExceptT"};
static const lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_exceptT___lam__6___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_exceptT___lam__6___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_exceptT___lam__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(254, 219, 228, 211, 167, 227, 255, 114)}};
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_exceptT___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_ControlStack_exceptT___lam__6___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_ControlStack_optionT___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(108, 127, 229, 252, 62, 92, 31, 84)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__6___closed__1 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_exceptT___lam__6___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "EarlyReturnT"};
static const lean_object* l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__0_value),LEAN_SCALAR_PTR_LITERAL(209, 141, 108, 71, 55, 35, 133, 242)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__1 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "EarlyReturn"};
static const lean_object* l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__2 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__2_value;
static const lean_string_object l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "runK"};
static const lean_object* l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__3 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__2_value),LEAN_SCALAR_PTR_LITERAL(131, 234, 189, 49, 36, 80, 19, 98)}};
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__3_value),LEAN_SCALAR_PTR_LITERAL(118, 43, 100, 225, 193, 181, 173, 166)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__4 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__4_value;
static const lean_closure_object l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Do_getReturnCont___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__5 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_earlyReturnT(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_breakT___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "`break` must be nested inside a loop"};
static const lean_object* l_Lean_Elab_Do_ControlStack_breakT___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_breakT___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_breakT___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_breakT___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_breakT___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_breakT___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Do_ControlStack_breakT___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Do_ControlStack_breakT___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_ControlStack_breakT___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_breakT___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_ControlStack_breakT___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BreakT"};
static const lean_object* l_Lean_Elab_Do_ControlStack_breakT___closed__1 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_breakT___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_breakT___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_breakT___closed__1_value),LEAN_SCALAR_PTR_LITERAL(242, 200, 41, 193, 137, 83, 48, 97)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_breakT___closed__2 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_breakT___closed__2_value;
static const lean_string_object l_Lean_Elab_Do_ControlStack_breakT___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Break"};
static const lean_object* l_Lean_Elab_Do_ControlStack_breakT___closed__3 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_breakT___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_breakT___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_breakT___closed__3_value),LEAN_SCALAR_PTR_LITERAL(25, 204, 143, 3, 84, 67, 92, 151)}};
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_breakT___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_ControlStack_breakT___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 178, 64, 100, 79, 118, 122, 28)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_breakT___closed__4 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_breakT___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_breakT(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_continueT___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "`continue` must be nested inside a loop"};
static const lean_object* l_Lean_Elab_Do_ControlStack_continueT___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_continueT___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_continueT___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_continueT___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_continueT___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_continueT___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Do_ControlStack_continueT___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Do_ControlStack_continueT___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_ControlStack_continueT___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_continueT___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_ControlStack_continueT___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ContinueT"};
static const lean_object* l_Lean_Elab_Do_ControlStack_continueT___closed__1 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_continueT___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_continueT___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_continueT___closed__1_value),LEAN_SCALAR_PTR_LITERAL(86, 192, 244, 91, 192, 8, 248, 69)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_continueT___closed__2 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_continueT___closed__2_value;
static const lean_string_object l_Lean_Elab_Do_ControlStack_continueT___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Continue"};
static const lean_object* l_Lean_Elab_Do_ControlStack_continueT___closed__3 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_continueT___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_continueT___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_continueT___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 20, 42, 129, 129, 78, 218, 176)}};
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_continueT___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_ControlStack_continueT___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__3_value),LEAN_SCALAR_PTR_LITERAL(119, 220, 172, 113, 164, 208, 2, 169)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_continueT___closed__4 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_continueT___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_continueT(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Internal error in the `do` elaborator: labeled block `"};
static const lean_object* l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__1;
static const lean_string_object l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "` is not in scope"};
static const lean_object* l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledReturnT(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Internal error in the `do` elaborator: labeled loop `"};
static const lean_object* l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledBreakT(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledContinueT___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledContinueT___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledContinueT(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_mkInstMonad___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Monad"};
static const lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_mkInstMonad___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_mkInstMonad___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_mkInstMonad___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_mkInstMonad___closed__0_value),LEAN_SCALAR_PTR_LITERAL(193, 218, 3, 131, 37, 173, 20, 218)}};
static const lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_mkInstMonad___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_mkInstMonad___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_mkInstMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_mkInstMonad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Failed to synthesize "};
static const lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__1;
static const lean_string_object l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ". "};
static const lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__3;
static const lean_string_object l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = " is not definitionally equal to "};
static const lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__4 = (const lean_object*)&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__5;
static const lean_string_object l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__6 = (const lean_object*)&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_JumpLayer_mkOptionJump___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "lifted jump result type"};
static const lean_object* l_Lean_Elab_Do_ControlStack_JumpLayer_mkOptionJump___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_JumpLayer_mkOptionJump___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_JumpLayer_mkOptionJump(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_JumpLayer_mkOptionJump___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "δ"};
static const lean_object* l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 55, 229, 44, 20, 64, 135, 12)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__1 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "return"};
static const lean_object* l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__2 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__0_value),LEAN_SCALAR_PTR_LITERAL(209, 141, 108, 71, 55, 35, 133, 242)}};
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 121, 197, 158, 207, 131, 123, 195)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__3 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "early return result type"};
static const lean_object* l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__4 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_ControlStack_mkPure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Applicative"};
static const lean_object* l_Lean_Elab_Do_ControlStack_mkPure___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_mkPure___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_ControlStack_mkPure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toPure"};
static const lean_object* l_Lean_Elab_Do_ControlStack_mkPure___closed__1 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_mkPure___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_mkPure___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_mkPure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 21, 170, 15, 195, 130, 155, 116)}};
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_mkPure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_ControlStack_mkPure___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Do_ControlStack_mkPure___closed__1_value),LEAN_SCALAR_PTR_LITERAL(222, 75, 18, 17, 200, 253, 193, 106)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_mkPure___closed__2 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_mkPure___closed__2_value;
static const lean_string_object l_Lean_Elab_Do_ControlStack_mkPure___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "toApplicative"};
static const lean_object* l_Lean_Elab_Do_ControlStack_mkPure___closed__3 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_mkPure___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_mkPure___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_mkInstMonad___closed__0_value),LEAN_SCALAR_PTR_LITERAL(193, 218, 3, 131, 37, 173, 20, 218)}};
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_mkPure___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_ControlStack_mkPure___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Do_ControlStack_mkPure___closed__3_value),LEAN_SCALAR_PTR_LITERAL(163, 196, 23, 87, 4, 45, 131, 42)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_mkPure___closed__4 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_mkPure___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_ControlStack_mkPure___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Pure"};
static const lean_object* l_Lean_Elab_Do_ControlStack_mkPure___closed__5 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_mkPure___closed__5_value;
static const lean_string_object l_Lean_Elab_Do_ControlStack_mkPure___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pure"};
static const lean_object* l_Lean_Elab_Do_ControlStack_mkPure___closed__6 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_mkPure___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_mkPure___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_mkPure___closed__5_value),LEAN_SCALAR_PTR_LITERAL(121, 135, 27, 238, 232, 181, 75, 85)}};
static const lean_ctor_object l_Lean_Elab_Do_ControlStack_mkPure___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_ControlStack_mkPure___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Do_ControlStack_mkPure___closed__6_value),LEAN_SCALAR_PTR_LITERAL(204, 106, 105, 165, 210, 13, 14, 1)}};
static const lean_object* l_Lean_Elab_Do_ControlStack_mkPure___closed__7 = (const lean_object*)&l_Lean_Elab_Do_ControlStack_mkPure___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_mkPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_mkPure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ret_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ret_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_brk_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_brk_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_cont_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_cont_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Do_ControlLifter_ofCont___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_ControlLifter_ofCont___closed__0 = (const lean_object*)&l_Lean_Elab_Do_ControlLifter_ofCont___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlLifter_ofCont___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlLifter_ofCont___closed__0_value)}};
static const lean_object* l_Lean_Elab_Do_ControlLifter_ofCont___closed__1 = (const lean_object*)&l_Lean_Elab_Do_ControlLifter_ofCont___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlLifter_ofCont___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlLifter_ofCont___closed__1_value)}};
static const lean_object* l_Lean_Elab_Do_ControlLifter_ofCont___closed__2 = (const lean_object*)&l_Lean_Elab_Do_ControlLifter_ofCont___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlLifter_ofCont___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlLifter_ofCont___closed__2_value)}};
static const lean_object* l_Lean_Elab_Do_ControlLifter_ofCont___closed__3 = (const lean_object*)&l_Lean_Elab_Do_ControlLifter_ofCont___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_ControlLifter_ofCont___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlLifter_ofCont___closed__3_value)}};
static const lean_object* l_Lean_Elab_Do_ControlLifter_ofCont___closed__4 = (const lean_object*)&l_Lean_Elab_Do_ControlLifter_ofCont___closed__4_value;
static const lean_array_object l_Lean_Elab_Do_ControlLifter_ofCont___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Do_ControlLifter_ofCont___closed__5 = (const lean_object*)&l_Lean_Elab_Do_ControlLifter_ofCont___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Do_ControlLifter_ofCont___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlLifter_ofCont___closed__6;
static lean_once_cell_t l_Lean_Elab_Do_ControlLifter_ofCont___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlLifter_ofCont___closed__7;
static const lean_array_object l_Lean_Elab_Do_ControlLifter_ofCont___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Do_ControlLifter_ofCont___closed__8 = (const lean_object*)&l_Lean_Elab_Do_ControlLifter_ofCont___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlLifter_ofCont(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlLifter_ofCont___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "Internal error in the `do` elaborator: jump to a label that was not lifted"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_lift_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_lift_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__0;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__1;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__2;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_ControlLifter_lift_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_ControlLifter_lift_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "break"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___closed__1_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_breakT___closed__1_value),LEAN_SCALAR_PTR_LITERAL(242, 200, 41, 193, 137, 83, 48, 97)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___closed__2_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(87, 247, 27, 233, 96, 191, 74, 131)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "continue"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_ControlStack_continueT___closed__1_value),LEAN_SCALAR_PTR_LITERAL(86, 192, 244, 91, 192, 8, 248, 69)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg___closed__1_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(96, 178, 162, 181, 231, 51, 24, 56)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlLifter_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlLifter_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_ControlLifter_lift_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_ControlLifter_lift_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlLifter_restoreCont(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlLifter_restoreCont___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; lean_object* v___x_9_; lean_object* v_mctx_10_; lean_object* v_lctx_11_; lean_object* v_options_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = lean_st_ref_get(v___y_3_);
v_mctx_10_ = lean_ctor_get(v___x_9_, 0);
lean_inc_ref(v_mctx_10_);
lean_dec(v___x_9_);
v_lctx_11_ = lean_ctor_get(v___y_2_, 2);
v_options_12_ = lean_ctor_get(v___y_4_, 2);
lean_inc_ref(v_options_12_);
lean_inc_ref(v_lctx_11_);
v___x_13_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_13_, 0, v_env_8_);
lean_ctor_set(v___x_13_, 1, v_mctx_10_);
lean_ctor_set(v___x_13_, 2, v_lctx_11_);
lean_ctor_set(v___x_13_, 3, v_options_12_);
v___x_14_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
lean_ctor_set(v___x_14_, 1, v_msgData_1_);
v___x_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0_spec__0___boxed(lean_object* v_msgData_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0_spec__0(v_msgData_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
lean_dec(v___y_18_);
lean_dec_ref(v___y_17_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___redArg(lean_object* v_msg_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_ref_29_; lean_object* v___x_30_; lean_object* v_a_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_39_; 
v_ref_29_ = lean_ctor_get(v___y_26_, 5);
v___x_30_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0_spec__0(v_msg_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_);
v_a_31_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_39_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_39_ == 0)
{
v___x_33_ = v___x_30_;
v_isShared_34_ = v_isSharedCheck_39_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_a_31_);
lean_dec(v___x_30_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_39_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_35_; lean_object* v___x_37_; 
lean_inc(v_ref_29_);
v___x_35_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_35_, 0, v_ref_29_);
lean_ctor_set(v___x_35_, 1, v_a_31_);
if (v_isShared_34_ == 0)
{
lean_ctor_set_tag(v___x_33_, 1);
lean_ctor_set(v___x_33_, 0, v___x_35_);
v___x_37_ = v___x_33_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v___x_35_);
v___x_37_ = v_reuseFailAlloc_38_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
return v___x_37_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___redArg___boxed(lean_object* v_msg_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___redArg(v_msg_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_);
lean_dec(v___y_44_);
lean_dec_ref(v___y_43_);
lean_dec(v___y_42_);
lean_dec_ref(v___y_41_);
return v_res_46_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_unStM___closed__3(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_unStM___closed__2));
v___x_52_ = l_Lean_stringToMessageData(v___x_51_);
return v___x_52_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_unStM___closed__5(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_unStM___closed__4));
v___x_55_ = l_Lean_stringToMessageData(v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_unStM___closed__7(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_unStM___closed__6));
v___x_58_ = l_Lean_stringToMessageData(v___x_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_unStM(lean_object* v_m_59_, lean_object* v_stM_u03b1_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_){
_start:
{
lean_object* v___x_69_; uint8_t v___x_70_; lean_object* v___x_71_; 
v___x_69_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_unStM___closed__1));
v___x_70_ = 0;
v___x_71_ = l_Lean_Elab_Do_mkFreshResultType___redArg(v___x_69_, v___x_70_, v_a_61_, v_a_64_, v_a_65_, v_a_66_, v_a_67_);
if (lean_obj_tag(v___x_71_) == 0)
{
lean_object* v_a_72_; lean_object* v_stM_73_; lean_object* v___x_74_; 
v_a_72_ = lean_ctor_get(v___x_71_, 0);
lean_inc_n(v_a_72_, 2);
lean_dec_ref_known(v___x_71_, 1);
v_stM_73_ = lean_ctor_get(v_m_59_, 2);
lean_inc_ref(v_stM_73_);
lean_dec_ref(v_m_59_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
lean_inc(v_a_65_);
lean_inc_ref(v_a_64_);
lean_inc(v_a_63_);
lean_inc_ref(v_a_62_);
lean_inc_ref(v_a_61_);
v___x_74_ = lean_apply_9(v_stM_73_, v_a_72_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, lean_box(0));
if (lean_obj_tag(v___x_74_) == 0)
{
lean_object* v_a_75_; lean_object* v___x_76_; 
v_a_75_ = lean_ctor_get(v___x_74_, 0);
lean_inc_n(v_a_75_, 2);
lean_dec_ref_known(v___x_74_, 1);
lean_inc_ref(v_stM_u03b1_60_);
v___x_76_ = l_Lean_Meta_isExprDefEq(v_stM_u03b1_60_, v_a_75_, v_a_64_, v_a_65_, v_a_66_, v_a_67_);
if (lean_obj_tag(v___x_76_) == 0)
{
lean_object* v_a_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_103_; 
v_a_77_ = lean_ctor_get(v___x_76_, 0);
v_isSharedCheck_103_ = !lean_is_exclusive(v___x_76_);
if (v_isSharedCheck_103_ == 0)
{
v___x_79_ = v___x_76_;
v_isShared_80_ = v_isSharedCheck_103_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_a_77_);
lean_dec(v___x_76_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_103_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
uint8_t v___x_81_; 
v___x_81_ = lean_unbox(v_a_77_);
lean_dec(v_a_77_);
if (v___x_81_ == 0)
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_99_; 
lean_del_object(v___x_79_);
lean_dec(v_a_72_);
v___x_82_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_unStM___closed__3, &l_Lean_Elab_Do_ControlStack_unStM___closed__3_once, _init_l_Lean_Elab_Do_ControlStack_unStM___closed__3);
v___x_83_ = l_Lean_MessageData_ofExpr(v_stM_u03b1_60_);
v___x_84_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_82_);
lean_ctor_set(v___x_84_, 1, v___x_83_);
v___x_85_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_unStM___closed__5, &l_Lean_Elab_Do_ControlStack_unStM___closed__5_once, _init_l_Lean_Elab_Do_ControlStack_unStM___closed__5);
v___x_86_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_84_);
lean_ctor_set(v___x_86_, 1, v___x_85_);
v___x_87_ = l_Lean_MessageData_ofExpr(v_a_75_);
v___x_88_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_86_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
v___x_89_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_unStM___closed__7, &l_Lean_Elab_Do_ControlStack_unStM___closed__7_once, _init_l_Lean_Elab_Do_ControlStack_unStM___closed__7);
v___x_90_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_88_);
lean_ctor_set(v___x_90_, 1, v___x_89_);
v___x_91_ = l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___redArg(v___x_90_, v_a_64_, v_a_65_, v_a_66_, v_a_67_);
v_a_92_ = lean_ctor_get(v___x_91_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v___x_91_);
if (v_isSharedCheck_99_ == 0)
{
v___x_94_ = v___x_91_;
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_91_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_a_92_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
else
{
lean_object* v___x_101_; 
lean_dec(v_a_75_);
lean_dec_ref(v_stM_u03b1_60_);
if (v_isShared_80_ == 0)
{
lean_ctor_set(v___x_79_, 0, v_a_72_);
v___x_101_ = v___x_79_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_a_72_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
}
}
else
{
lean_object* v_a_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_111_; 
lean_dec(v_a_75_);
lean_dec(v_a_72_);
lean_dec_ref(v_stM_u03b1_60_);
v_a_104_ = lean_ctor_get(v___x_76_, 0);
v_isSharedCheck_111_ = !lean_is_exclusive(v___x_76_);
if (v_isSharedCheck_111_ == 0)
{
v___x_106_ = v___x_76_;
v_isShared_107_ = v_isSharedCheck_111_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_a_104_);
lean_dec(v___x_76_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_111_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_109_; 
if (v_isShared_107_ == 0)
{
v___x_109_ = v___x_106_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_a_104_);
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
else
{
lean_dec(v_a_72_);
lean_dec_ref(v_stM_u03b1_60_);
return v___x_74_;
}
}
else
{
lean_dec_ref(v_stM_u03b1_60_);
lean_dec_ref(v_m_59_);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_unStM___boxed(lean_object* v_m_112_, lean_object* v_stM_u03b1_113_, lean_object* v_a_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_Elab_Do_ControlStack_unStM(v_m_112_, v_stM_u03b1_113_, v_a_114_, v_a_115_, v_a_116_, v_a_117_, v_a_118_, v_a_119_, v_a_120_);
lean_dec(v_a_120_);
lean_dec_ref(v_a_119_);
lean_dec(v_a_118_);
lean_dec_ref(v_a_117_);
lean_dec(v_a_116_);
lean_dec_ref(v_a_115_);
lean_dec_ref(v_a_114_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0(lean_object* v_00_u03b1_123_, lean_object* v_msg_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___redArg(v_msg_124_, v___y_128_, v___y_129_, v___y_130_, v___y_131_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___boxed(lean_object* v_00_u03b1_134_, lean_object* v_msg_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0(v_00_u03b1_134_, v_msg_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
lean_dec_ref(v___y_136_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_base___lam__0(lean_object* v_dec_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_154_, 0, v_dec_145_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_base___lam__0___boxed(lean_object* v_dec_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l_Lean_Elab_Do_ControlStack_base___lam__0(v_dec_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_);
lean_dec(v___y_162_);
lean_dec_ref(v___y_161_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
lean_dec(v___y_158_);
lean_dec_ref(v___y_157_);
lean_dec_ref(v___y_156_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_base___lam__1(lean_object* v_00_u03b1_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_){
_start:
{
lean_object* v___x_174_; 
v___x_174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_174_, 0, v_00_u03b1_165_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_base___lam__1___boxed(lean_object* v_00_u03b1_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_Lean_Elab_Do_ControlStack_base___lam__1(v_00_u03b1_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_, v___y_180_, v___y_181_, v___y_182_);
lean_dec(v___y_182_);
lean_dec_ref(v___y_181_);
lean_dec(v___y_180_);
lean_dec_ref(v___y_179_);
lean_dec(v___y_178_);
lean_dec_ref(v___y_177_);
lean_dec_ref(v___y_176_);
return v_res_184_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_base___lam__2___closed__2(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_base___lam__2___closed__1));
v___x_189_ = l_Lean_MessageData_ofFormat(v___x_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_base___lam__2(lean_object* v_x_190_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_base___lam__2___closed__2, &l_Lean_Elab_Do_ControlStack_base___lam__2___closed__2_once, _init_l_Lean_Elab_Do_ControlStack_base___lam__2___closed__2);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_base___lam__3(lean_object* v_m_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_201_, 0, v_m_192_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_base___lam__3___boxed(lean_object* v_m_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lean_Elab_Do_ControlStack_base___lam__3(v_m_202_, v___y_203_, v___y_204_, v___y_205_, v___y_206_, v___y_207_, v___y_208_, v___y_209_);
lean_dec(v___y_209_);
lean_dec_ref(v___y_208_);
lean_dec(v___y_207_);
lean_dec_ref(v___y_206_);
lean_dec(v___y_205_);
lean_dec_ref(v___y_204_);
lean_dec_ref(v___y_203_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_base(lean_object* v_mi_215_){
_start:
{
lean_object* v_m_216_; lean_object* v___f_217_; lean_object* v___f_218_; lean_object* v___f_219_; lean_object* v___f_220_; lean_object* v___x_221_; 
v_m_216_ = lean_ctor_get(v_mi_215_, 0);
lean_inc_ref(v_m_216_);
lean_dec_ref(v_mi_215_);
v___f_217_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_base___closed__0));
v___f_218_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_base___closed__1));
v___f_219_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_base___closed__2));
v___f_220_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_base___lam__3___boxed), 9, 1);
lean_closure_set(v___f_220_, 0, v_m_216_);
v___x_221_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_221_, 0, v___f_219_);
lean_ctor_set(v___x_221_, 1, v___f_220_);
lean_ctor_set(v___x_221_, 2, v___f_218_);
lean_ctor_set(v___x_221_, 3, v___f_218_);
lean_ctor_set(v___x_221_, 4, v___f_218_);
lean_ctor_set(v___x_221_, 5, v___f_217_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_mutVarNames_spec__0(size_t v_sz_222_, size_t v_i_223_, lean_object* v_bs_224_){
_start:
{
uint8_t v___x_225_; 
v___x_225_ = lean_usize_dec_lt(v_i_223_, v_sz_222_);
if (v___x_225_ == 0)
{
return v_bs_224_;
}
else
{
lean_object* v_v_226_; lean_object* v___x_227_; lean_object* v_bs_x27_228_; lean_object* v___x_229_; size_t v___x_230_; size_t v___x_231_; lean_object* v___x_232_; 
v_v_226_ = lean_array_uget(v_bs_224_, v_i_223_);
v___x_227_ = lean_unsigned_to_nat(0u);
v_bs_x27_228_ = lean_array_uset(v_bs_224_, v_i_223_, v___x_227_);
v___x_229_ = l_Lean_TSyntax_getId(v_v_226_);
lean_dec(v_v_226_);
v___x_230_ = ((size_t)1ULL);
v___x_231_ = lean_usize_add(v_i_223_, v___x_230_);
v___x_232_ = lean_array_uset(v_bs_x27_228_, v_i_223_, v___x_229_);
v_i_223_ = v___x_231_;
v_bs_224_ = v___x_232_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_mutVarNames_spec__0___boxed(lean_object* v_sz_234_, lean_object* v_i_235_, lean_object* v_bs_236_){
_start:
{
size_t v_sz_boxed_237_; size_t v_i_boxed_238_; lean_object* v_res_239_; 
v_sz_boxed_237_ = lean_unbox_usize(v_sz_234_);
lean_dec(v_sz_234_);
v_i_boxed_238_ = lean_unbox_usize(v_i_235_);
lean_dec(v_i_235_);
v_res_239_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_mutVarNames_spec__0(v_sz_boxed_237_, v_i_boxed_238_, v_bs_236_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_mutVarNames(lean_object* v_mutVarIdents_240_){
_start:
{
size_t v_sz_241_; size_t v___x_242_; lean_object* v___x_243_; 
v_sz_241_ = lean_array_size(v_mutVarIdents_240_);
v___x_242_ = ((size_t)0ULL);
v___x_243_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_mutVarNames_spec__0(v_sz_241_, v___x_242_, v_mutVarIdents_240_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3_spec__0___redArg(size_t v_sz_244_, size_t v_i_245_, lean_object* v_bs_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
uint8_t v___x_252_; 
v___x_252_ = lean_usize_dec_lt(v_i_245_, v_sz_244_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; 
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v_bs_246_);
return v___x_253_;
}
else
{
lean_object* v_v_254_; lean_object* v___x_255_; 
v_v_254_ = lean_array_uget_borrowed(v_bs_246_, v_i_245_);
lean_inc(v_v_254_);
v___x_255_ = l_Lean_Meta_getLocalDeclFromUserName(v_v_254_, v___y_247_, v___y_248_, v___y_249_, v___y_250_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v_a_256_; lean_object* v___x_257_; lean_object* v_bs_x27_258_; lean_object* v___x_259_; size_t v___x_260_; size_t v___x_261_; lean_object* v___x_262_; 
v_a_256_ = lean_ctor_get(v___x_255_, 0);
lean_inc(v_a_256_);
lean_dec_ref_known(v___x_255_, 1);
v___x_257_ = lean_unsigned_to_nat(0u);
v_bs_x27_258_ = lean_array_uset(v_bs_246_, v_i_245_, v___x_257_);
v___x_259_ = l_Lean_LocalDecl_type(v_a_256_);
lean_dec(v_a_256_);
v___x_260_ = ((size_t)1ULL);
v___x_261_ = lean_usize_add(v_i_245_, v___x_260_);
v___x_262_ = lean_array_uset(v_bs_x27_258_, v_i_245_, v___x_259_);
v_i_245_ = v___x_261_;
v_bs_246_ = v___x_262_;
goto _start;
}
else
{
lean_object* v_a_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
lean_dec_ref(v_bs_246_);
v_a_264_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v___x_255_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_255_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
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
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_264_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3_spec__0___redArg___boxed(lean_object* v_sz_272_, lean_object* v_i_273_, lean_object* v_bs_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
size_t v_sz_boxed_280_; size_t v_i_boxed_281_; lean_object* v_res_282_; 
v_sz_boxed_280_ = lean_unbox_usize(v_sz_272_);
lean_dec(v_sz_272_);
v_i_boxed_281_ = lean_unbox_usize(v_i_273_);
lean_dec(v_i_273_);
v_res_282_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3_spec__0___redArg(v_sz_boxed_280_, v_i_boxed_281_, v_bs_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_);
lean_dec(v___y_278_);
lean_dec_ref(v___y_277_);
lean_dec(v___y_276_);
lean_dec_ref(v___y_275_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3(lean_object* v_baseMonadInfo_283_, lean_object* v_mutVarIdents_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_){
_start:
{
lean_object* v___x_293_; size_t v_sz_294_; size_t v___x_295_; lean_object* v___x_296_; 
v___x_293_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_mutVarNames(v_mutVarIdents_284_);
v_sz_294_ = lean_array_size(v___x_293_);
v___x_295_ = ((size_t)0ULL);
v___x_296_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3_spec__0___redArg(v_sz_294_, v___x_295_, v___x_293_, v_a_288_, v_a_289_, v_a_290_, v_a_291_);
if (lean_obj_tag(v___x_296_) == 0)
{
lean_object* v_a_297_; lean_object* v_u_298_; lean_object* v___x_299_; 
v_a_297_ = lean_ctor_get(v___x_296_, 0);
lean_inc(v_a_297_);
lean_dec_ref_known(v___x_296_, 1);
v_u_298_ = lean_ctor_get(v_baseMonadInfo_283_, 1);
lean_inc(v_u_298_);
lean_dec_ref(v_baseMonadInfo_283_);
v___x_299_ = l_Lean_Meta_mkProdN(v_a_297_, v_u_298_, v_a_288_, v_a_289_, v_a_290_, v_a_291_);
return v___x_299_;
}
else
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_307_; 
lean_dec_ref(v_baseMonadInfo_283_);
v_a_300_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_307_ == 0)
{
v___x_302_ = v___x_296_;
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_296_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_305_; 
if (v_isShared_303_ == 0)
{
v___x_305_ = v___x_302_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_300_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3___boxed(lean_object* v_baseMonadInfo_308_, lean_object* v_mutVarIdents_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3(v_baseMonadInfo_308_, v_mutVarIdents_309_, v_a_310_, v_a_311_, v_a_312_, v_a_313_, v_a_314_, v_a_315_, v_a_316_);
lean_dec(v_a_316_);
lean_dec_ref(v_a_315_);
lean_dec(v_a_314_);
lean_dec_ref(v_a_313_);
lean_dec(v_a_312_);
lean_dec_ref(v_a_311_);
lean_dec_ref(v_a_310_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3_spec__0(size_t v_sz_319_, size_t v_i_320_, lean_object* v_bs_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3_spec__0___redArg(v_sz_319_, v_i_320_, v_bs_321_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3_spec__0___boxed(lean_object* v_sz_331_, lean_object* v_i_332_, lean_object* v_bs_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
size_t v_sz_boxed_342_; size_t v_i_boxed_343_; lean_object* v_res_344_; 
v_sz_boxed_342_ = lean_unbox_usize(v_sz_331_);
lean_dec(v_sz_331_);
v_i_boxed_343_ = lean_unbox_usize(v_i_332_);
lean_dec(v_i_332_);
v_res_344_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3_spec__0(v_sz_boxed_342_, v_i_boxed_343_, v_bs_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_);
lean_dec(v___y_340_);
lean_dec_ref(v___y_339_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
lean_dec_ref(v___y_334_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_stM(lean_object* v_baseMonadInfo_348_, lean_object* v_mutVarIdents_349_, lean_object* v_00_u03b1_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_){
_start:
{
lean_object* v___x_359_; 
lean_inc_ref(v_baseMonadInfo_348_);
v___x_359_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3(v_baseMonadInfo_348_, v_mutVarIdents_349_, v_a_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_, v_a_356_, v_a_357_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_374_; 
v_a_360_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_374_ == 0)
{
v___x_362_ = v___x_359_;
v_isShared_363_ = v_isSharedCheck_374_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_374_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v_u_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_372_; 
v_u_364_ = lean_ctor_get(v_baseMonadInfo_348_, 1);
lean_inc_n(v_u_364_, 2);
lean_dec_ref(v_baseMonadInfo_348_);
v___x_365_ = ((lean_object*)(l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_stM___closed__1));
v___x_366_ = lean_box(0);
v___x_367_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_367_, 0, v_u_364_);
lean_ctor_set(v___x_367_, 1, v___x_366_);
v___x_368_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_368_, 0, v_u_364_);
lean_ctor_set(v___x_368_, 1, v___x_367_);
v___x_369_ = l_Lean_mkConst(v___x_365_, v___x_368_);
v___x_370_ = l_Lean_mkAppB(v___x_369_, v_00_u03b1_350_, v_a_360_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v___x_370_);
v___x_372_ = v___x_362_;
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
lean_dec_ref(v_00_u03b1_350_);
lean_dec_ref(v_baseMonadInfo_348_);
return v___x_359_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_stM___boxed(lean_object* v_baseMonadInfo_375_, lean_object* v_mutVarIdents_376_, lean_object* v_00_u03b1_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_stM(v_baseMonadInfo_375_, v_mutVarIdents_376_, v_00_u03b1_377_, v_a_378_, v_a_379_, v_a_380_, v_a_381_, v_a_382_, v_a_383_, v_a_384_);
lean_dec(v_a_384_);
lean_dec_ref(v_a_383_);
lean_dec(v_a_382_);
lean_dec_ref(v_a_381_);
lean_dec(v_a_380_);
lean_dec_ref(v_a_379_);
lean_dec_ref(v_a_378_);
return v_res_386_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__1(void){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_388_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__0));
v___x_389_ = l_Lean_stringToMessageData(v___x_388_);
return v___x_389_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__3(void){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_391_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__2));
v___x_392_ = l_Lean_stringToMessageData(v___x_391_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__0(lean_object* v_base_393_, lean_object* v_00_u03c3_394_, lean_object* v_x_395_){
_start:
{
lean_object* v_description_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v_description_396_ = lean_ctor_get(v_base_393_, 0);
lean_inc_ref(v_description_396_);
lean_dec_ref(v_base_393_);
v___x_397_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__1, &l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__1_once, _init_l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__1);
v___x_398_ = l_Lean_MessageData_ofExpr(v_00_u03c3_394_);
v___x_399_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_397_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
v___x_400_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__3, &l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__3_once, _init_l_Lean_Elab_Do_ControlStack_stateT___lam__0___closed__3);
v___x_401_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_401_, 0, v___x_399_);
lean_ctor_set(v___x_401_, 1, v___x_400_);
v___x_402_ = lean_box(0);
v___x_403_ = lean_apply_1(v_description_396_, v___x_402_);
v___x_404_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_404_, 0, v___x_401_);
lean_ctor_set(v___x_404_, 1, v___x_403_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__1(lean_object* v_baseMonadInfo_405_, lean_object* v_mutVarIdents_406_, lean_object* v_base_407_, lean_object* v_00_u03b1_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_stM(v_baseMonadInfo_405_, v_mutVarIdents_406_, v_00_u03b1_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_a_418_; lean_object* v_stM_419_; lean_object* v___x_420_; 
v_a_418_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_a_418_);
lean_dec_ref_known(v___x_417_, 1);
v_stM_419_ = lean_ctor_get(v_base_407_, 2);
lean_inc_ref(v_stM_419_);
lean_dec_ref(v_base_407_);
lean_inc(v___y_415_);
lean_inc_ref(v___y_414_);
lean_inc(v___y_413_);
lean_inc_ref(v___y_412_);
lean_inc(v___y_411_);
lean_inc_ref(v___y_410_);
lean_inc_ref(v___y_409_);
v___x_420_ = lean_apply_9(v_stM_419_, v_a_418_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_, lean_box(0));
return v___x_420_;
}
else
{
lean_dec_ref(v_base_407_);
return v___x_417_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__1___boxed(lean_object* v_baseMonadInfo_421_, lean_object* v_mutVarIdents_422_, lean_object* v_base_423_, lean_object* v_00_u03b1_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lean_Elab_Do_ControlStack_stateT___lam__1(v_baseMonadInfo_421_, v_mutVarIdents_422_, v_base_423_, v_00_u03b1_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_);
lean_dec(v___y_431_);
lean_dec_ref(v___y_430_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
lean_dec(v___y_427_);
lean_dec_ref(v___y_426_);
lean_dec_ref(v___y_425_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__2(lean_object* v_a_434_, lean_object* v_mutVarIdents_435_, lean_object* v_resultName_436_, lean_object* v_k_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l_Lean_Meta_getFVarFromUserName(v_a_434_, v___y_441_, v___y_442_, v___y_443_, v___y_444_);
if (lean_obj_tag(v___x_446_) == 0)
{
lean_object* v_a_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v_a_447_ = lean_ctor_get(v___x_446_, 0);
lean_inc(v_a_447_);
lean_dec_ref_known(v___x_446_, 1);
v___x_448_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_mutVarNames(v_mutVarIdents_435_);
v___x_449_ = lean_array_to_list(v___x_448_);
v___x_450_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_450_, 0, v_resultName_436_);
lean_ctor_set(v___x_450_, 1, v___x_449_);
v___x_451_ = l_Lean_Expr_fvarId_x21(v_a_447_);
lean_dec(v_a_447_);
v___x_452_ = l_Lean_Elab_Do_bindMutVarsFromTuple(v___x_450_, v___x_451_, v_k_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_, v___y_443_, v___y_444_);
return v___x_452_;
}
else
{
lean_dec_ref(v_k_437_);
lean_dec(v_resultName_436_);
lean_dec_ref(v_mutVarIdents_435_);
return v___x_446_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__2___boxed(lean_object* v_a_453_, lean_object* v_mutVarIdents_454_, lean_object* v_resultName_455_, lean_object* v_k_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Lean_Elab_Do_ControlStack_stateT___lam__2(v_a_453_, v_mutVarIdents_454_, v_resultName_455_, v_k_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
lean_dec(v___y_459_);
lean_dec_ref(v___y_458_);
lean_dec_ref(v___y_457_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__3(lean_object* v_baseMonadInfo_469_, lean_object* v_mutVarIdents_470_, lean_object* v_base_471_, lean_object* v_dec_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_481_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_stateT___lam__3___closed__1));
v___x_482_ = l_Lean_Core_mkFreshUserName(v___x_481_, v___y_478_, v___y_479_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v_a_483_; lean_object* v_resultName_484_; lean_object* v_resultType_485_; lean_object* v_k_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_507_; 
v_a_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc(v_a_483_);
lean_dec_ref_known(v___x_482_, 1);
v_resultName_484_ = lean_ctor_get(v_dec_472_, 0);
v_resultType_485_ = lean_ctor_get(v_dec_472_, 1);
v_k_486_ = lean_ctor_get(v_dec_472_, 2);
v_isSharedCheck_507_ = !lean_is_exclusive(v_dec_472_);
if (v_isSharedCheck_507_ == 0)
{
v___x_488_ = v_dec_472_;
v_isShared_489_ = v_isSharedCheck_507_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_k_486_);
lean_inc(v_resultType_485_);
lean_inc(v_resultName_484_);
lean_dec(v_dec_472_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_507_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_490_; 
lean_inc_ref(v_mutVarIdents_470_);
v___x_490_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_stM(v_baseMonadInfo_469_, v_mutVarIdents_470_, v_resultType_485_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v_a_491_; lean_object* v_restoreCont_492_; lean_object* v___f_493_; uint8_t v___x_494_; lean_object* v___x_496_; 
v_a_491_ = lean_ctor_get(v___x_490_, 0);
lean_inc(v_a_491_);
lean_dec_ref_known(v___x_490_, 1);
v_restoreCont_492_ = lean_ctor_get(v_base_471_, 5);
lean_inc_ref(v_restoreCont_492_);
lean_dec_ref(v_base_471_);
lean_inc(v_a_483_);
v___f_493_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_stateT___lam__2___boxed), 12, 4);
lean_closure_set(v___f_493_, 0, v_a_483_);
lean_closure_set(v___f_493_, 1, v_mutVarIdents_470_);
lean_closure_set(v___f_493_, 2, v_resultName_484_);
lean_closure_set(v___f_493_, 3, v_k_486_);
v___x_494_ = 0;
if (v_isShared_489_ == 0)
{
lean_ctor_set(v___x_488_, 2, v___f_493_);
lean_ctor_set(v___x_488_, 1, v_a_491_);
lean_ctor_set(v___x_488_, 0, v_a_483_);
v___x_496_ = v___x_488_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_a_483_);
lean_ctor_set(v_reuseFailAlloc_498_, 1, v_a_491_);
lean_ctor_set(v_reuseFailAlloc_498_, 2, v___f_493_);
v___x_496_ = v_reuseFailAlloc_498_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
lean_object* v___x_497_; 
lean_ctor_set_uint8(v___x_496_, sizeof(void*)*3, v___x_494_);
lean_inc(v___y_479_);
lean_inc_ref(v___y_478_);
lean_inc(v___y_477_);
lean_inc_ref(v___y_476_);
lean_inc(v___y_475_);
lean_inc_ref(v___y_474_);
lean_inc_ref(v___y_473_);
v___x_497_ = lean_apply_9(v_restoreCont_492_, v___x_496_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, lean_box(0));
return v___x_497_;
}
}
else
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_506_; 
lean_del_object(v___x_488_);
lean_dec_ref(v_k_486_);
lean_dec(v_resultName_484_);
lean_dec(v_a_483_);
lean_dec_ref(v_base_471_);
lean_dec_ref(v_mutVarIdents_470_);
v_a_499_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_506_ == 0)
{
v___x_501_ = v___x_490_;
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_490_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_502_ == 0)
{
v___x_504_ = v___x_501_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_a_499_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
}
else
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_515_; 
lean_dec_ref(v_dec_472_);
lean_dec_ref(v_base_471_);
lean_dec_ref(v_mutVarIdents_470_);
lean_dec_ref(v_baseMonadInfo_469_);
v_a_508_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_515_ == 0)
{
v___x_510_ = v___x_482_;
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___x_482_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_513_; 
if (v_isShared_511_ == 0)
{
v___x_513_ = v___x_510_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v_a_508_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__3___boxed(lean_object* v_baseMonadInfo_516_, lean_object* v_mutVarIdents_517_, lean_object* v_base_518_, lean_object* v_dec_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_Lean_Elab_Do_ControlStack_stateT___lam__3(v_baseMonadInfo_516_, v_mutVarIdents_517_, v_base_518_, v_dec_519_, v___y_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_, v___y_526_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec_ref(v___y_520_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_ControlStack_stateT_spec__0___redArg(size_t v_sz_529_, size_t v_i_530_, lean_object* v_bs_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
uint8_t v___x_539_; 
v___x_539_ = lean_usize_dec_lt(v_i_530_, v_sz_529_);
if (v___x_539_ == 0)
{
lean_object* v___x_540_; 
v___x_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_540_, 0, v_bs_531_);
return v___x_540_;
}
else
{
lean_object* v_v_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v_v_541_ = lean_array_uget_borrowed(v_bs_531_, v_i_530_);
v___x_542_ = l_Lean_Syntax_getId(v_v_541_);
v___x_543_ = l_Lean_Meta_getLocalDeclFromUserName(v___x_542_, v___y_534_, v___y_535_, v___y_536_, v___y_537_);
if (lean_obj_tag(v___x_543_) == 0)
{
lean_object* v_a_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; uint8_t v___x_548_; lean_object* v___x_549_; 
v_a_544_ = lean_ctor_get(v___x_543_, 0);
lean_inc(v_a_544_);
lean_dec_ref_known(v___x_543_, 1);
v___x_545_ = l_Lean_LocalDecl_toExpr(v_a_544_);
v___x_546_ = lean_box(0);
v___x_547_ = lean_box(0);
v___x_548_ = 0;
lean_inc_ref(v___x_545_);
lean_inc(v_v_541_);
v___x_549_ = l_Lean_Elab_Term_addTermInfo_x27(v_v_541_, v___x_545_, v___x_546_, v___x_546_, v___x_547_, v___x_548_, v___x_548_, v___y_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_);
if (lean_obj_tag(v___x_549_) == 0)
{
lean_object* v___x_550_; lean_object* v_bs_x27_551_; size_t v___x_552_; size_t v___x_553_; lean_object* v___x_554_; 
lean_dec_ref_known(v___x_549_, 1);
v___x_550_ = lean_unsigned_to_nat(0u);
v_bs_x27_551_ = lean_array_uset(v_bs_531_, v_i_530_, v___x_550_);
v___x_552_ = ((size_t)1ULL);
v___x_553_ = lean_usize_add(v_i_530_, v___x_552_);
v___x_554_ = lean_array_uset(v_bs_x27_551_, v_i_530_, v___x_545_);
v_i_530_ = v___x_553_;
v_bs_531_ = v___x_554_;
goto _start;
}
else
{
lean_object* v_a_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_563_; 
lean_dec_ref(v___x_545_);
lean_dec_ref(v_bs_531_);
v_a_556_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_563_ == 0)
{
v___x_558_ = v___x_549_;
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_a_556_);
lean_dec(v___x_549_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___x_561_; 
if (v_isShared_559_ == 0)
{
v___x_561_ = v___x_558_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_a_556_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
}
else
{
lean_object* v_a_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_571_; 
lean_dec_ref(v_bs_531_);
v_a_564_ = lean_ctor_get(v___x_543_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_543_);
if (v_isSharedCheck_571_ == 0)
{
v___x_566_ = v___x_543_;
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_a_564_);
lean_dec(v___x_543_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_569_; 
if (v_isShared_567_ == 0)
{
v___x_569_ = v___x_566_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_a_564_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_ControlStack_stateT_spec__0___redArg___boxed(lean_object* v_sz_572_, lean_object* v_i_573_, lean_object* v_bs_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_){
_start:
{
size_t v_sz_boxed_582_; size_t v_i_boxed_583_; lean_object* v_res_584_; 
v_sz_boxed_582_ = lean_unbox_usize(v_sz_572_);
lean_dec(v_sz_572_);
v_i_boxed_583_ = lean_unbox_usize(v_i_573_);
lean_dec(v_i_573_);
v_res_584_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_ControlStack_stateT_spec__0___redArg(v_sz_boxed_582_, v_i_boxed_583_, v_bs_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
lean_dec(v___y_578_);
lean_dec_ref(v___y_577_);
lean_dec(v___y_576_);
lean_dec_ref(v___y_575_);
return v_res_584_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__1(void){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_586_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__0));
v___x_587_ = l_Lean_stringToMessageData(v___x_586_);
return v___x_587_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__3(void){
_start:
{
lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_589_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__2));
v___x_590_ = l_Lean_stringToMessageData(v___x_589_);
return v___x_590_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__5(void){
_start:
{
lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_592_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__4));
v___x_593_ = l_Lean_stringToMessageData(v___x_592_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__4(lean_object* v_mutVarIdents_594_, lean_object* v_baseMonadInfo_595_, lean_object* v_00_u03c3_596_, lean_object* v_base_597_, lean_object* v_e_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_){
_start:
{
size_t v_sz_607_; size_t v___x_608_; lean_object* v___x_609_; 
v_sz_607_ = lean_array_size(v_mutVarIdents_594_);
v___x_608_ = ((size_t)0ULL);
v___x_609_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_ControlStack_stateT_spec__0___redArg(v_sz_607_, v___x_608_, v_mutVarIdents_594_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
if (lean_obj_tag(v___x_609_) == 0)
{
lean_object* v_a_610_; lean_object* v_u_611_; lean_object* v___x_612_; 
v_a_610_ = lean_ctor_get(v___x_609_, 0);
lean_inc(v_a_610_);
lean_dec_ref_known(v___x_609_, 1);
v_u_611_ = lean_ctor_get(v_baseMonadInfo_595_, 1);
lean_inc(v_u_611_);
lean_dec_ref(v_baseMonadInfo_595_);
v___x_612_ = l_Lean_Meta_mkProdMkN(v_a_610_, v_u_611_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v_a_613_; lean_object* v_fst_614_; lean_object* v_snd_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_661_; 
v_a_613_ = lean_ctor_get(v___x_612_, 0);
lean_inc(v_a_613_);
lean_dec_ref_known(v___x_612_, 1);
v_fst_614_ = lean_ctor_get(v_a_613_, 0);
v_snd_615_ = lean_ctor_get(v_a_613_, 1);
v_isSharedCheck_661_ = !lean_is_exclusive(v_a_613_);
if (v_isSharedCheck_661_ == 0)
{
v___x_617_ = v_a_613_;
v_isShared_618_ = v_isSharedCheck_661_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_snd_615_);
lean_inc(v_fst_614_);
lean_dec(v_a_613_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_661_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___y_620_; lean_object* v___y_621_; lean_object* v___y_622_; lean_object* v___y_623_; lean_object* v___y_624_; lean_object* v___y_625_; lean_object* v___y_626_; lean_object* v___x_630_; 
lean_inc_ref(v_00_u03c3_596_);
lean_inc(v_snd_615_);
v___x_630_ = l_Lean_Meta_isExprDefEq(v_snd_615_, v_00_u03c3_596_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; uint8_t v___x_632_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_a_631_);
lean_dec_ref_known(v___x_630_, 1);
v___x_632_ = lean_unbox(v_a_631_);
lean_dec(v_a_631_);
if (v___x_632_ == 0)
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_636_; 
lean_dec(v_fst_614_);
lean_dec_ref(v_e_598_);
lean_dec_ref(v_base_597_);
v___x_633_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__1, &l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__1_once, _init_l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__1);
v___x_634_ = l_Lean_MessageData_ofExpr(v_00_u03c3_596_);
if (v_isShared_618_ == 0)
{
lean_ctor_set_tag(v___x_617_, 7);
lean_ctor_set(v___x_617_, 1, v___x_634_);
lean_ctor_set(v___x_617_, 0, v___x_633_);
v___x_636_ = v___x_617_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v___x_633_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v___x_634_);
v___x_636_ = v_reuseFailAlloc_652_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_651_; 
v___x_637_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__3, &l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__3_once, _init_l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__3);
v___x_638_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_636_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
v___x_639_ = l_Lean_MessageData_ofExpr(v_snd_615_);
v___x_640_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_638_);
lean_ctor_set(v___x_640_, 1, v___x_639_);
v___x_641_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__5, &l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__5_once, _init_l_Lean_Elab_Do_ControlStack_stateT___lam__4___closed__5);
v___x_642_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_640_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
v___x_643_ = l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___redArg(v___x_642_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
v_a_644_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_651_ == 0)
{
v___x_646_ = v___x_643_;
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_643_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_649_; 
if (v_isShared_647_ == 0)
{
v___x_649_ = v___x_646_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_a_644_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
else
{
lean_del_object(v___x_617_);
lean_dec(v_snd_615_);
lean_dec_ref(v_00_u03c3_596_);
v___y_620_ = v___y_599_;
v___y_621_ = v___y_600_;
v___y_622_ = v___y_601_;
v___y_623_ = v___y_602_;
v___y_624_ = v___y_603_;
v___y_625_ = v___y_604_;
v___y_626_ = v___y_605_;
goto v___jp_619_;
}
}
else
{
lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_660_; 
lean_del_object(v___x_617_);
lean_dec(v_snd_615_);
lean_dec(v_fst_614_);
lean_dec_ref(v_e_598_);
lean_dec_ref(v_base_597_);
lean_dec_ref(v_00_u03c3_596_);
v_a_653_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_660_ == 0)
{
v___x_655_ = v___x_630_;
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_dec(v___x_630_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_658_; 
if (v_isShared_656_ == 0)
{
v___x_658_ = v___x_655_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_a_653_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
v___jp_619_:
{
lean_object* v_runInBase_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v_runInBase_627_ = lean_ctor_get(v_base_597_, 4);
lean_inc_ref(v_runInBase_627_);
lean_dec_ref(v_base_597_);
v___x_628_ = l_Lean_Expr_app___override(v_e_598_, v_fst_614_);
lean_inc(v___y_626_);
lean_inc_ref(v___y_625_);
lean_inc(v___y_624_);
lean_inc_ref(v___y_623_);
lean_inc(v___y_622_);
lean_inc_ref(v___y_621_);
lean_inc_ref(v___y_620_);
v___x_629_ = lean_apply_9(v_runInBase_627_, v___x_628_, v___y_620_, v___y_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, lean_box(0));
return v___x_629_;
}
}
}
else
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_669_; 
lean_dec_ref(v_e_598_);
lean_dec_ref(v_base_597_);
lean_dec_ref(v_00_u03c3_596_);
v_a_662_ = lean_ctor_get(v___x_612_, 0);
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_669_ == 0)
{
v___x_664_ = v___x_612_;
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_612_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_667_; 
if (v_isShared_665_ == 0)
{
v___x_667_ = v___x_664_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_a_662_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
}
else
{
lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_677_; 
lean_dec_ref(v_e_598_);
lean_dec_ref(v_base_597_);
lean_dec_ref(v_00_u03c3_596_);
lean_dec_ref(v_baseMonadInfo_595_);
v_a_670_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_677_ == 0)
{
v___x_672_ = v___x_609_;
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_609_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_675_; 
if (v_isShared_673_ == 0)
{
v___x_675_ = v___x_672_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_a_670_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__4___boxed(lean_object* v_mutVarIdents_678_, lean_object* v_baseMonadInfo_679_, lean_object* v_00_u03c3_680_, lean_object* v_base_681_, lean_object* v_e_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l_Lean_Elab_Do_ControlStack_stateT___lam__4(v_mutVarIdents_678_, v_baseMonadInfo_679_, v_00_u03c3_680_, v_base_681_, v_e_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_);
lean_dec(v___y_689_);
lean_dec_ref(v___y_688_);
lean_dec(v___y_687_);
lean_dec_ref(v___y_686_);
lean_dec(v___y_685_);
lean_dec_ref(v___y_684_);
lean_dec_ref(v___y_683_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__5(lean_object* v_baseMonadInfo_695_, lean_object* v_mutVarIdents_696_, lean_object* v_base_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_){
_start:
{
lean_object* v___x_706_; 
lean_inc_ref(v_baseMonadInfo_695_);
v___x_706_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3(v_baseMonadInfo_695_, v_mutVarIdents_696_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v_a_707_; lean_object* v_m_708_; lean_object* v___x_709_; 
v_a_707_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_a_707_);
lean_dec_ref_known(v___x_706_, 1);
v_m_708_ = lean_ctor_get(v_base_697_, 1);
lean_inc_ref(v_m_708_);
lean_dec_ref(v_base_697_);
lean_inc(v___y_704_);
lean_inc_ref(v___y_703_);
lean_inc(v___y_702_);
lean_inc_ref(v___y_701_);
lean_inc(v___y_700_);
lean_inc_ref(v___y_699_);
lean_inc_ref(v___y_698_);
v___x_709_ = lean_apply_8(v_m_708_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_, lean_box(0));
if (lean_obj_tag(v___x_709_) == 0)
{
lean_object* v_a_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_725_; 
v_a_710_ = lean_ctor_get(v___x_709_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_725_ == 0)
{
v___x_712_ = v___x_709_;
v_isShared_713_ = v_isSharedCheck_725_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_a_710_);
lean_dec(v___x_709_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_725_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v_u_714_; lean_object* v_v_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_723_; 
v_u_714_ = lean_ctor_get(v_baseMonadInfo_695_, 1);
lean_inc(v_u_714_);
v_v_715_ = lean_ctor_get(v_baseMonadInfo_695_, 2);
lean_inc(v_v_715_);
lean_dec_ref(v_baseMonadInfo_695_);
v___x_716_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_stateT___lam__5___closed__1));
v___x_717_ = lean_box(0);
v___x_718_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_718_, 0, v_v_715_);
lean_ctor_set(v___x_718_, 1, v___x_717_);
v___x_719_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_719_, 0, v_u_714_);
lean_ctor_set(v___x_719_, 1, v___x_718_);
v___x_720_ = l_Lean_mkConst(v___x_716_, v___x_719_);
v___x_721_ = l_Lean_mkAppB(v___x_720_, v_a_707_, v_a_710_);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 0, v___x_721_);
v___x_723_ = v___x_712_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___x_721_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
else
{
lean_dec(v_a_707_);
lean_dec_ref(v_baseMonadInfo_695_);
return v___x_709_;
}
}
else
{
lean_dec_ref(v_base_697_);
lean_dec_ref(v_baseMonadInfo_695_);
return v___x_706_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT___lam__5___boxed(lean_object* v_baseMonadInfo_726_, lean_object* v_mutVarIdents_727_, lean_object* v_base_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l_Lean_Elab_Do_ControlStack_stateT___lam__5(v_baseMonadInfo_726_, v_mutVarIdents_727_, v_base_728_, v___y_729_, v___y_730_, v___y_731_, v___y_732_, v___y_733_, v___y_734_, v___y_735_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
lean_dec(v___y_733_);
lean_dec_ref(v___y_732_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
lean_dec_ref(v___y_729_);
return v_res_737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_stateT(lean_object* v_baseMonadInfo_738_, lean_object* v_mutVarIdents_739_, lean_object* v_00_u03c3_740_, lean_object* v_base_741_){
_start:
{
lean_object* v___f_742_; lean_object* v___f_743_; lean_object* v___f_744_; lean_object* v___f_745_; lean_object* v___f_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
lean_inc_ref(v_00_u03c3_740_);
lean_inc_ref_n(v_base_741_, 4);
v___f_742_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_stateT___lam__0), 3, 2);
lean_closure_set(v___f_742_, 0, v_base_741_);
lean_closure_set(v___f_742_, 1, v_00_u03c3_740_);
lean_inc_ref_n(v_mutVarIdents_739_, 4);
lean_inc_ref_n(v_baseMonadInfo_738_, 4);
v___f_743_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_stateT___lam__1___boxed), 12, 3);
lean_closure_set(v___f_743_, 0, v_baseMonadInfo_738_);
lean_closure_set(v___f_743_, 1, v_mutVarIdents_739_);
lean_closure_set(v___f_743_, 2, v_base_741_);
v___f_744_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_stateT___lam__3___boxed), 12, 3);
lean_closure_set(v___f_744_, 0, v_baseMonadInfo_738_);
lean_closure_set(v___f_744_, 1, v_mutVarIdents_739_);
lean_closure_set(v___f_744_, 2, v_base_741_);
v___f_745_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_stateT___lam__4___boxed), 13, 4);
lean_closure_set(v___f_745_, 0, v_mutVarIdents_739_);
lean_closure_set(v___f_745_, 1, v_baseMonadInfo_738_);
lean_closure_set(v___f_745_, 2, v_00_u03c3_740_);
lean_closure_set(v___f_745_, 3, v_base_741_);
v___f_746_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_stateT___lam__5___boxed), 11, 3);
lean_closure_set(v___f_746_, 0, v_baseMonadInfo_738_);
lean_closure_set(v___f_746_, 1, v_mutVarIdents_739_);
lean_closure_set(v___f_746_, 2, v_base_741_);
v___x_747_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_stM___boxed), 11, 2);
lean_closure_set(v___x_747_, 0, v_baseMonadInfo_738_);
lean_closure_set(v___x_747_, 1, v_mutVarIdents_739_);
v___x_748_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_748_, 0, v___f_742_);
lean_ctor_set(v___x_748_, 1, v___f_746_);
lean_ctor_set(v___x_748_, 2, v___f_743_);
lean_ctor_set(v___x_748_, 3, v___x_747_);
lean_ctor_set(v___x_748_, 4, v___f_745_);
lean_ctor_set(v___x_748_, 5, v___f_744_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_ControlStack_stateT_spec__0(size_t v_sz_749_, size_t v_i_750_, lean_object* v_bs_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_){
_start:
{
lean_object* v___x_760_; 
v___x_760_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_ControlStack_stateT_spec__0___redArg(v_sz_749_, v_i_750_, v_bs_751_, v___y_753_, v___y_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_ControlStack_stateT_spec__0___boxed(lean_object* v_sz_761_, lean_object* v_i_762_, lean_object* v_bs_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_){
_start:
{
size_t v_sz_boxed_772_; size_t v_i_boxed_773_; lean_object* v_res_774_; 
v_sz_boxed_772_ = lean_unbox_usize(v_sz_761_);
lean_dec(v_sz_761_);
v_i_boxed_773_ = lean_unbox_usize(v_i_762_);
lean_dec(v_i_762_);
v_res_774_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_ControlStack_stateT_spec__0(v_sz_boxed_772_, v_i_boxed_773_, v_bs_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_, v___y_770_);
lean_dec(v___y_770_);
lean_dec_ref(v___y_769_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
lean_dec_ref(v___y_764_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_optionT_stM(lean_object* v_baseMonadInfo_778_, lean_object* v_00_u03b1_779_){
_start:
{
lean_object* v_u_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v_u_780_ = lean_ctor_get(v_baseMonadInfo_778_, 1);
v___x_781_ = ((lean_object*)(l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_optionT_stM___closed__1));
v___x_782_ = lean_box(0);
lean_inc(v_u_780_);
v___x_783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_783_, 0, v_u_780_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
v___x_784_ = l_Lean_mkConst(v___x_781_, v___x_783_);
v___x_785_ = l_Lean_Expr_app___override(v___x_784_, v_00_u03b1_779_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_optionT_stM___boxed(lean_object* v_baseMonadInfo_786_, lean_object* v_00_u03b1_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_optionT_stM(v_baseMonadInfo_786_, v_00_u03b1_787_);
lean_dec_ref(v_baseMonadInfo_786_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__0(lean_object* v_runInBase_794_, lean_object* v_e_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_804_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_optionT___lam__0___closed__2));
v___x_805_ = lean_unsigned_to_nat(1u);
v___x_806_ = lean_mk_empty_array_with_capacity(v___x_805_);
v___x_807_ = lean_array_push(v___x_806_, v_e_795_);
v___x_808_ = l_Lean_Meta_mkAppM(v___x_804_, v___x_807_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
if (lean_obj_tag(v___x_808_) == 0)
{
lean_object* v_a_809_; lean_object* v___x_810_; 
v_a_809_ = lean_ctor_get(v___x_808_, 0);
lean_inc(v_a_809_);
lean_dec_ref_known(v___x_808_, 1);
lean_inc(v___y_802_);
lean_inc_ref(v___y_801_);
lean_inc(v___y_800_);
lean_inc_ref(v___y_799_);
lean_inc(v___y_798_);
lean_inc_ref(v___y_797_);
lean_inc_ref(v___y_796_);
v___x_810_ = lean_apply_9(v_runInBase_794_, v_a_809_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, lean_box(0));
return v___x_810_;
}
else
{
lean_dec_ref(v_runInBase_794_);
return v___x_808_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__0___boxed(lean_object* v_runInBase_811_, lean_object* v_e_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l_Lean_Elab_Do_ControlStack_optionT___lam__0(v_runInBase_811_, v_e_812_, v___y_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_);
lean_dec(v___y_819_);
lean_dec_ref(v___y_818_);
lean_dec(v___y_817_);
lean_dec_ref(v___y_816_);
lean_dec(v___y_815_);
lean_dec_ref(v___y_814_);
lean_dec_ref(v___y_813_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__1(lean_object* v_baseMonadInfo_822_, lean_object* v_00_u03b1_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_832_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_optionT_stM(v_baseMonadInfo_822_, v_00_u03b1_823_);
v___x_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_833_, 0, v___x_832_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__1___boxed(lean_object* v_baseMonadInfo_834_, lean_object* v_00_u03b1_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_Lean_Elab_Do_ControlStack_optionT___lam__1(v_baseMonadInfo_834_, v_00_u03b1_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec_ref(v___y_836_);
lean_dec_ref(v_baseMonadInfo_834_);
return v_res_844_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_optionT___lam__2___closed__1(void){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_846_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_optionT___lam__2___closed__0));
v___x_847_ = l_Lean_stringToMessageData(v___x_846_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__2(lean_object* v_description_848_, lean_object* v_x_849_){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_850_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_optionT___lam__2___closed__1, &l_Lean_Elab_Do_ControlStack_optionT___lam__2___closed__1_once, _init_l_Lean_Elab_Do_ControlStack_optionT___lam__2___closed__1);
v___x_851_ = lean_box(0);
v___x_852_ = lean_apply_1(v_description_848_, v___x_851_);
v___x_853_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_853_, 0, v___x_850_);
lean_ctor_set(v___x_853_, 1, v___x_852_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__3(lean_object* v_k_854_, lean_object* v_r_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_){
_start:
{
lean_object* v___x_864_; 
lean_inc(v___y_862_);
lean_inc_ref(v___y_861_);
lean_inc(v___y_860_);
lean_inc_ref(v___y_859_);
lean_inc(v___y_858_);
lean_inc_ref(v___y_857_);
lean_inc_ref(v___y_856_);
v___x_864_ = lean_apply_8(v_k_854_, v___y_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_, lean_box(0));
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; uint8_t v___x_869_; uint8_t v___x_870_; uint8_t v___x_871_; lean_object* v___x_872_; 
v_a_865_ = lean_ctor_get(v___x_864_, 0);
lean_inc(v_a_865_);
lean_dec_ref_known(v___x_864_, 1);
v___x_866_ = lean_unsigned_to_nat(1u);
v___x_867_ = lean_mk_empty_array_with_capacity(v___x_866_);
v___x_868_ = lean_array_push(v___x_867_, v_r_855_);
v___x_869_ = 0;
v___x_870_ = 1;
v___x_871_ = 1;
v___x_872_ = l_Lean_Meta_mkLambdaFVars(v___x_868_, v_a_865_, v___x_869_, v___x_870_, v___x_869_, v___x_870_, v___x_871_, v___y_859_, v___y_860_, v___y_861_, v___y_862_);
lean_dec_ref(v___x_868_);
return v___x_872_;
}
else
{
lean_dec_ref(v_r_855_);
return v___x_864_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__3___boxed(lean_object* v_k_873_, lean_object* v_r_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Lean_Elab_Do_ControlStack_optionT___lam__3(v_k_873_, v_r_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec(v___y_879_);
lean_dec_ref(v___y_878_);
lean_dec(v___y_877_);
lean_dec_ref(v___y_876_);
lean_dec_ref(v___y_875_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__4(lean_object* v_a_884_, lean_object* v_r_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_){
_start:
{
lean_object* v___x_894_; 
lean_inc(v___y_892_);
lean_inc_ref(v___y_891_);
lean_inc(v___y_890_);
lean_inc_ref(v___y_889_);
lean_inc(v___y_888_);
lean_inc_ref(v___y_887_);
lean_inc_ref(v___y_886_);
v___x_894_ = lean_apply_8(v_a_884_, v___y_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, lean_box(0));
if (lean_obj_tag(v___x_894_) == 0)
{
lean_object* v_a_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; uint8_t v___x_899_; uint8_t v___x_900_; uint8_t v___x_901_; lean_object* v___x_902_; 
v_a_895_ = lean_ctor_get(v___x_894_, 0);
lean_inc(v_a_895_);
lean_dec_ref_known(v___x_894_, 1);
v___x_896_ = lean_unsigned_to_nat(1u);
v___x_897_ = lean_mk_empty_array_with_capacity(v___x_896_);
v___x_898_ = lean_array_push(v___x_897_, v_r_885_);
v___x_899_ = 0;
v___x_900_ = 1;
v___x_901_ = 1;
v___x_902_ = l_Lean_Meta_mkLambdaFVars(v___x_898_, v_a_895_, v___x_899_, v___x_900_, v___x_899_, v___x_900_, v___x_901_, v___y_889_, v___y_890_, v___y_891_, v___y_892_);
lean_dec_ref(v___x_898_);
return v___x_902_;
}
else
{
lean_dec_ref(v_r_885_);
return v___x_894_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__4___boxed(lean_object* v_a_903_, lean_object* v_r_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l_Lean_Elab_Do_ControlStack_optionT___lam__4(v_a_903_, v_r_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_);
lean_dec(v___y_911_);
lean_dec_ref(v___y_910_);
lean_dec(v___y_909_);
lean_dec_ref(v___y_908_);
lean_dec(v___y_907_);
lean_dec_ref(v___y_906_);
lean_dec_ref(v___y_905_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0___redArg___lam__0(lean_object* v_k_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v_b_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v___x_924_; 
lean_inc(v___y_922_);
lean_inc_ref(v___y_921_);
lean_inc(v___y_920_);
lean_inc_ref(v___y_919_);
lean_inc(v___y_917_);
lean_inc_ref(v___y_916_);
lean_inc_ref(v___y_915_);
v___x_924_ = lean_apply_9(v_k_914_, v_b_918_, v___y_915_, v___y_916_, v___y_917_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, lean_box(0));
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v_b_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0___redArg___lam__0(v_k_925_, v___y_926_, v___y_927_, v___y_928_, v_b_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_);
lean_dec(v___y_933_);
lean_dec_ref(v___y_932_);
lean_dec(v___y_931_);
lean_dec_ref(v___y_930_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
lean_dec_ref(v___y_926_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0___redArg(lean_object* v_name_936_, uint8_t v_bi_937_, lean_object* v_type_938_, lean_object* v_k_939_, uint8_t v_kind_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_){
_start:
{
lean_object* v___f_949_; lean_object* v___x_950_; 
lean_inc(v___y_943_);
lean_inc_ref(v___y_942_);
lean_inc_ref(v___y_941_);
v___f_949_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_949_, 0, v_k_939_);
lean_closure_set(v___f_949_, 1, v___y_941_);
lean_closure_set(v___f_949_, 2, v___y_942_);
lean_closure_set(v___f_949_, 3, v___y_943_);
v___x_950_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_936_, v_bi_937_, v_type_938_, v___f_949_, v_kind_940_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
if (lean_obj_tag(v___x_950_) == 0)
{
return v___x_950_;
}
else
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_958_; 
v_a_951_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_958_ == 0)
{
v___x_953_ = v___x_950_;
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_950_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_954_ == 0)
{
v___x_956_ = v___x_953_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_951_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0___redArg___boxed(lean_object* v_name_959_, lean_object* v_bi_960_, lean_object* v_type_961_, lean_object* v_k_962_, lean_object* v_kind_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_){
_start:
{
uint8_t v_bi_boxed_972_; uint8_t v_kind_boxed_973_; lean_object* v_res_974_; 
v_bi_boxed_972_ = lean_unbox(v_bi_960_);
v_kind_boxed_973_ = lean_unbox(v_kind_963_);
v_res_974_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0___redArg(v_name_959_, v_bi_boxed_972_, v_type_961_, v_k_962_, v_kind_boxed_973_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
lean_dec(v___y_968_);
lean_dec_ref(v___y_967_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
lean_dec_ref(v___y_964_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0___redArg(lean_object* v_name_975_, lean_object* v_type_976_, lean_object* v_k_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_){
_start:
{
uint8_t v___x_986_; uint8_t v___x_987_; lean_object* v___x_988_; 
v___x_986_ = 0;
v___x_987_ = 0;
v___x_988_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0___redArg(v_name_975_, v___x_986_, v_type_976_, v_k_977_, v___x_987_, v___y_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0___redArg___boxed(lean_object* v_name_989_, lean_object* v_type_990_, lean_object* v_k_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0___redArg(v_name_989_, v_type_990_, v_k_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec(v___y_996_);
lean_dec_ref(v___y_995_);
lean_dec(v___y_994_);
lean_dec_ref(v___y_993_);
lean_dec_ref(v___y_992_);
return v_res_1000_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__4(void){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1007_ = lean_box(0);
v___x_1008_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__3));
v___x_1009_ = l_Lean_mkConst(v___x_1008_, v___x_1007_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__5(lean_object* v_a_1010_, lean_object* v_getCont_1011_, lean_object* v_resultName_1012_, lean_object* v_resultType_1013_, lean_object* v___f_1014_, lean_object* v_baseMonadInfo_1015_, lean_object* v_casesOnWrapper_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_){
_start:
{
lean_object* v___x_1025_; 
v___x_1025_ = l_Lean_Meta_getFVarFromUserName(v_a_1010_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_);
if (lean_obj_tag(v___x_1025_) == 0)
{
lean_object* v_a_1026_; lean_object* v___x_1027_; 
v_a_1026_ = lean_ctor_get(v___x_1025_, 0);
lean_inc(v_a_1026_);
lean_dec_ref_known(v___x_1025_, 1);
lean_inc(v___y_1023_);
lean_inc_ref(v___y_1022_);
lean_inc(v___y_1021_);
lean_inc_ref(v___y_1020_);
lean_inc(v___y_1019_);
lean_inc_ref(v___y_1018_);
lean_inc_ref(v___y_1017_);
v___x_1027_ = lean_apply_8(v_getCont_1011_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, lean_box(0));
if (lean_obj_tag(v___x_1027_) == 0)
{
lean_object* v_a_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v_a_1028_ = lean_ctor_get(v___x_1027_, 0);
lean_inc(v_a_1028_);
lean_dec_ref_known(v___x_1027_, 1);
v___x_1029_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__1));
v___x_1030_ = l_Lean_Core_mkFreshUserName(v___x_1029_, v___y_1022_, v___y_1023_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v_a_1031_; lean_object* v___f_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
v_a_1031_ = lean_ctor_get(v___x_1030_, 0);
lean_inc(v_a_1031_);
lean_dec_ref_known(v___x_1030_, 1);
v___f_1032_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_optionT___lam__4___boxed), 10, 1);
lean_closure_set(v___f_1032_, 0, v_a_1028_);
v___x_1033_ = lean_box(0);
v___x_1034_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__4, &l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__4_once, _init_l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__4);
v___x_1035_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0___redArg(v_a_1031_, v___x_1034_, v___f_1032_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v_a_1036_; lean_object* v___x_1037_; 
v_a_1036_ = lean_ctor_get(v___x_1035_, 0);
lean_inc(v_a_1036_);
lean_dec_ref_known(v___x_1035_, 1);
lean_inc_ref(v_resultType_1013_);
v___x_1037_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0___redArg(v_resultName_1012_, v_resultType_1013_, v___f_1014_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_);
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v_a_1038_; lean_object* v_doBlockResultType_1039_; lean_object* v___x_1040_; 
v_a_1038_ = lean_ctor_get(v___x_1037_, 0);
lean_inc(v_a_1038_);
lean_dec_ref_known(v___x_1037_, 1);
v_doBlockResultType_1039_ = lean_ctor_get(v___y_1017_, 3);
lean_inc_ref(v_doBlockResultType_1039_);
v___x_1040_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_1039_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1054_; 
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1043_ = v___x_1040_;
v_isShared_1044_ = v_isSharedCheck_1054_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___x_1040_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1054_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v_u_1045_; lean_object* v_v_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1052_; 
v_u_1045_ = lean_ctor_get(v_baseMonadInfo_1015_, 1);
v_v_1046_ = lean_ctor_get(v_baseMonadInfo_1015_, 2);
lean_inc(v_v_1046_);
v___x_1047_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1047_, 0, v_v_1046_);
lean_ctor_set(v___x_1047_, 1, v___x_1033_);
lean_inc(v_u_1045_);
v___x_1048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1048_, 0, v_u_1045_);
lean_ctor_set(v___x_1048_, 1, v___x_1047_);
v___x_1049_ = l_Lean_mkConst(v_casesOnWrapper_1016_, v___x_1048_);
v___x_1050_ = l_Lean_mkApp5(v___x_1049_, v_resultType_1013_, v_a_1041_, v_a_1026_, v_a_1036_, v_a_1038_);
if (v_isShared_1044_ == 0)
{
lean_ctor_set(v___x_1043_, 0, v___x_1050_);
v___x_1052_ = v___x_1043_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v___x_1050_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
}
else
{
lean_dec(v_a_1038_);
lean_dec(v_a_1036_);
lean_dec(v_a_1026_);
lean_dec(v_casesOnWrapper_1016_);
lean_dec_ref(v_resultType_1013_);
return v___x_1040_;
}
}
else
{
lean_dec(v_a_1036_);
lean_dec(v_a_1026_);
lean_dec(v_casesOnWrapper_1016_);
lean_dec_ref(v_resultType_1013_);
return v___x_1037_;
}
}
else
{
lean_dec(v_a_1026_);
lean_dec(v_casesOnWrapper_1016_);
lean_dec_ref(v___f_1014_);
lean_dec_ref(v_resultType_1013_);
lean_dec(v_resultName_1012_);
return v___x_1035_;
}
}
else
{
lean_object* v_a_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1062_; 
lean_dec(v_a_1028_);
lean_dec(v_a_1026_);
lean_dec(v_casesOnWrapper_1016_);
lean_dec_ref(v___f_1014_);
lean_dec_ref(v_resultType_1013_);
lean_dec(v_resultName_1012_);
v_a_1055_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1057_ = v___x_1030_;
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_a_1055_);
lean_dec(v___x_1030_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1060_; 
if (v_isShared_1058_ == 0)
{
v___x_1060_ = v___x_1057_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v_a_1055_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
}
else
{
lean_object* v_a_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1070_; 
lean_dec(v_a_1026_);
lean_dec(v_casesOnWrapper_1016_);
lean_dec_ref(v___f_1014_);
lean_dec_ref(v_resultType_1013_);
lean_dec(v_resultName_1012_);
v_a_1063_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1065_ = v___x_1027_;
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_a_1063_);
lean_dec(v___x_1027_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1068_; 
if (v_isShared_1066_ == 0)
{
v___x_1068_ = v___x_1065_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_a_1063_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
}
else
{
lean_dec(v_casesOnWrapper_1016_);
lean_dec_ref(v___f_1014_);
lean_dec_ref(v_resultType_1013_);
lean_dec(v_resultName_1012_);
lean_dec_ref(v_getCont_1011_);
return v___x_1025_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__5___boxed(lean_object* v_a_1071_, lean_object* v_getCont_1072_, lean_object* v_resultName_1073_, lean_object* v_resultType_1074_, lean_object* v___f_1075_, lean_object* v_baseMonadInfo_1076_, lean_object* v_casesOnWrapper_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Lean_Elab_Do_ControlStack_optionT___lam__5(v_a_1071_, v_getCont_1072_, v_resultName_1073_, v_resultType_1074_, v___f_1075_, v_baseMonadInfo_1076_, v_casesOnWrapper_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_);
lean_dec(v___y_1084_);
lean_dec_ref(v___y_1083_);
lean_dec(v___y_1082_);
lean_dec_ref(v___y_1081_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec_ref(v_baseMonadInfo_1076_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__6(lean_object* v_getCont_1090_, lean_object* v_baseMonadInfo_1091_, lean_object* v_casesOnWrapper_1092_, lean_object* v_restoreCont_1093_, lean_object* v_dec_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_optionT___lam__6___closed__1));
v___x_1104_ = l_Lean_Core_mkFreshUserName(v___x_1103_, v___y_1100_, v___y_1101_);
if (lean_obj_tag(v___x_1104_) == 0)
{
lean_object* v_a_1105_; lean_object* v_resultName_1106_; lean_object* v_resultType_1107_; lean_object* v_k_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1120_; 
v_a_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc(v_a_1105_);
lean_dec_ref_known(v___x_1104_, 1);
v_resultName_1106_ = lean_ctor_get(v_dec_1094_, 0);
v_resultType_1107_ = lean_ctor_get(v_dec_1094_, 1);
v_k_1108_ = lean_ctor_get(v_dec_1094_, 2);
v_isSharedCheck_1120_ = !lean_is_exclusive(v_dec_1094_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1110_ = v_dec_1094_;
v_isShared_1111_ = v_isSharedCheck_1120_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_k_1108_);
lean_inc(v_resultType_1107_);
lean_inc(v_resultName_1106_);
lean_dec(v_dec_1094_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1120_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___f_1112_; lean_object* v___f_1113_; lean_object* v___x_1114_; uint8_t v___x_1115_; lean_object* v___x_1117_; 
v___f_1112_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_optionT___lam__3___boxed), 10, 1);
lean_closure_set(v___f_1112_, 0, v_k_1108_);
lean_inc_ref(v_baseMonadInfo_1091_);
lean_inc_ref(v_resultType_1107_);
lean_inc(v_a_1105_);
v___f_1113_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_optionT___lam__5___boxed), 15, 7);
lean_closure_set(v___f_1113_, 0, v_a_1105_);
lean_closure_set(v___f_1113_, 1, v_getCont_1090_);
lean_closure_set(v___f_1113_, 2, v_resultName_1106_);
lean_closure_set(v___f_1113_, 3, v_resultType_1107_);
lean_closure_set(v___f_1113_, 4, v___f_1112_);
lean_closure_set(v___f_1113_, 5, v_baseMonadInfo_1091_);
lean_closure_set(v___f_1113_, 6, v_casesOnWrapper_1092_);
v___x_1114_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_optionT_stM(v_baseMonadInfo_1091_, v_resultType_1107_);
lean_dec_ref(v_baseMonadInfo_1091_);
v___x_1115_ = 0;
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 2, v___f_1113_);
lean_ctor_set(v___x_1110_, 1, v___x_1114_);
lean_ctor_set(v___x_1110_, 0, v_a_1105_);
v___x_1117_ = v___x_1110_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_a_1105_);
lean_ctor_set(v_reuseFailAlloc_1119_, 1, v___x_1114_);
lean_ctor_set(v_reuseFailAlloc_1119_, 2, v___f_1113_);
v___x_1117_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
lean_object* v___x_1118_; 
lean_ctor_set_uint8(v___x_1117_, sizeof(void*)*3, v___x_1115_);
lean_inc(v___y_1101_);
lean_inc_ref(v___y_1100_);
lean_inc(v___y_1099_);
lean_inc_ref(v___y_1098_);
lean_inc(v___y_1097_);
lean_inc_ref(v___y_1096_);
lean_inc_ref(v___y_1095_);
v___x_1118_ = lean_apply_9(v_restoreCont_1093_, v___x_1117_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_, lean_box(0));
return v___x_1118_;
}
}
}
else
{
lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1128_; 
lean_dec_ref(v_dec_1094_);
lean_dec_ref(v_restoreCont_1093_);
lean_dec(v_casesOnWrapper_1092_);
lean_dec_ref(v_baseMonadInfo_1091_);
lean_dec_ref(v_getCont_1090_);
v_a_1121_ = lean_ctor_get(v___x_1104_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1123_ = v___x_1104_;
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_dec(v___x_1104_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1126_; 
if (v_isShared_1124_ == 0)
{
v___x_1126_ = v___x_1123_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_a_1121_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__6___boxed(lean_object* v_getCont_1129_, lean_object* v_baseMonadInfo_1130_, lean_object* v_casesOnWrapper_1131_, lean_object* v_restoreCont_1132_, lean_object* v_dec_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_Lean_Elab_Do_ControlStack_optionT___lam__6(v_getCont_1129_, v_baseMonadInfo_1130_, v_casesOnWrapper_1131_, v_restoreCont_1132_, v_dec_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
lean_dec(v___y_1136_);
lean_dec_ref(v___y_1135_);
lean_dec_ref(v___y_1134_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__7(lean_object* v_baseMonadInfo_1143_, lean_object* v_stM_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_){
_start:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1154_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_optionT_stM(v_baseMonadInfo_1143_, v___y_1145_);
lean_inc(v___y_1152_);
lean_inc_ref(v___y_1151_);
lean_inc(v___y_1150_);
lean_inc_ref(v___y_1149_);
lean_inc(v___y_1148_);
lean_inc_ref(v___y_1147_);
lean_inc_ref(v___y_1146_);
v___x_1155_ = lean_apply_9(v_stM_1144_, v___x_1154_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, lean_box(0));
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__7___boxed(lean_object* v_baseMonadInfo_1156_, lean_object* v_stM_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_){
_start:
{
lean_object* v_res_1167_; 
v_res_1167_ = l_Lean_Elab_Do_ControlStack_optionT___lam__7(v_baseMonadInfo_1156_, v_stM_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_, v___y_1164_, v___y_1165_);
lean_dec(v___y_1165_);
lean_dec_ref(v___y_1164_);
lean_dec(v___y_1163_);
lean_dec_ref(v___y_1162_);
lean_dec(v___y_1161_);
lean_dec_ref(v___y_1160_);
lean_dec_ref(v___y_1159_);
lean_dec_ref(v_baseMonadInfo_1156_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__8(lean_object* v_m_1168_, lean_object* v_baseMonadInfo_1169_, lean_object* v_optionTWrapper_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v___x_1179_; 
lean_inc(v___y_1177_);
lean_inc_ref(v___y_1176_);
lean_inc(v___y_1175_);
lean_inc_ref(v___y_1174_);
lean_inc(v___y_1173_);
lean_inc_ref(v___y_1172_);
lean_inc_ref(v___y_1171_);
v___x_1179_ = lean_apply_8(v_m_1168_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_, lean_box(0));
if (lean_obj_tag(v___x_1179_) == 0)
{
lean_object* v_a_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1194_; 
v_a_1180_ = lean_ctor_get(v___x_1179_, 0);
v_isSharedCheck_1194_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1182_ = v___x_1179_;
v_isShared_1183_ = v_isSharedCheck_1194_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_a_1180_);
lean_dec(v___x_1179_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1194_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v_u_1184_; lean_object* v_v_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1192_; 
v_u_1184_ = lean_ctor_get(v_baseMonadInfo_1169_, 1);
v_v_1185_ = lean_ctor_get(v_baseMonadInfo_1169_, 2);
v___x_1186_ = lean_box(0);
lean_inc(v_v_1185_);
v___x_1187_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1187_, 0, v_v_1185_);
lean_ctor_set(v___x_1187_, 1, v___x_1186_);
lean_inc(v_u_1184_);
v___x_1188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1188_, 0, v_u_1184_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
v___x_1189_ = l_Lean_mkConst(v_optionTWrapper_1170_, v___x_1188_);
v___x_1190_ = l_Lean_Expr_app___override(v___x_1189_, v_a_1180_);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 0, v___x_1190_);
v___x_1192_ = v___x_1182_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v___x_1190_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
return v___x_1192_;
}
}
}
else
{
lean_dec(v_optionTWrapper_1170_);
return v___x_1179_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT___lam__8___boxed(lean_object* v_m_1195_, lean_object* v_baseMonadInfo_1196_, lean_object* v_optionTWrapper_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l_Lean_Elab_Do_ControlStack_optionT___lam__8(v_m_1195_, v_baseMonadInfo_1196_, v_optionTWrapper_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1199_);
lean_dec_ref(v___y_1198_);
lean_dec_ref(v_baseMonadInfo_1196_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_optionT(lean_object* v_baseMonadInfo_1207_, lean_object* v_optionTWrapper_1208_, lean_object* v_casesOnWrapper_1209_, lean_object* v_getCont_1210_, lean_object* v_base_1211_){
_start:
{
lean_object* v_description_1212_; lean_object* v_m_1213_; lean_object* v_stM_1214_; lean_object* v_runInBase_1215_; lean_object* v_restoreCont_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1229_; 
v_description_1212_ = lean_ctor_get(v_base_1211_, 0);
v_m_1213_ = lean_ctor_get(v_base_1211_, 1);
v_stM_1214_ = lean_ctor_get(v_base_1211_, 2);
v_runInBase_1215_ = lean_ctor_get(v_base_1211_, 4);
v_restoreCont_1216_ = lean_ctor_get(v_base_1211_, 5);
v_isSharedCheck_1229_ = !lean_is_exclusive(v_base_1211_);
if (v_isSharedCheck_1229_ == 0)
{
lean_object* v_unused_1230_; 
v_unused_1230_ = lean_ctor_get(v_base_1211_, 3);
lean_dec(v_unused_1230_);
v___x_1218_ = v_base_1211_;
v_isShared_1219_ = v_isSharedCheck_1229_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_restoreCont_1216_);
lean_inc(v_runInBase_1215_);
lean_inc(v_stM_1214_);
lean_inc(v_m_1213_);
lean_inc(v_description_1212_);
lean_dec(v_base_1211_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1229_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___f_1220_; lean_object* v___f_1221_; lean_object* v___f_1222_; lean_object* v___f_1223_; lean_object* v___f_1224_; lean_object* v___f_1225_; lean_object* v___x_1227_; 
v___f_1220_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_optionT___lam__0___boxed), 10, 1);
lean_closure_set(v___f_1220_, 0, v_runInBase_1215_);
lean_inc_ref_n(v_baseMonadInfo_1207_, 3);
v___f_1221_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_optionT___lam__1___boxed), 10, 1);
lean_closure_set(v___f_1221_, 0, v_baseMonadInfo_1207_);
v___f_1222_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_optionT___lam__2), 2, 1);
lean_closure_set(v___f_1222_, 0, v_description_1212_);
v___f_1223_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_optionT___lam__6___boxed), 13, 4);
lean_closure_set(v___f_1223_, 0, v_getCont_1210_);
lean_closure_set(v___f_1223_, 1, v_baseMonadInfo_1207_);
lean_closure_set(v___f_1223_, 2, v_casesOnWrapper_1209_);
lean_closure_set(v___f_1223_, 3, v_restoreCont_1216_);
v___f_1224_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_optionT___lam__7___boxed), 11, 2);
lean_closure_set(v___f_1224_, 0, v_baseMonadInfo_1207_);
lean_closure_set(v___f_1224_, 1, v_stM_1214_);
v___f_1225_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_optionT___lam__8___boxed), 11, 3);
lean_closure_set(v___f_1225_, 0, v_m_1213_);
lean_closure_set(v___f_1225_, 1, v_baseMonadInfo_1207_);
lean_closure_set(v___f_1225_, 2, v_optionTWrapper_1208_);
if (v_isShared_1219_ == 0)
{
lean_ctor_set(v___x_1218_, 5, v___f_1223_);
lean_ctor_set(v___x_1218_, 4, v___f_1220_);
lean_ctor_set(v___x_1218_, 3, v___f_1221_);
lean_ctor_set(v___x_1218_, 2, v___f_1224_);
lean_ctor_set(v___x_1218_, 1, v___f_1225_);
lean_ctor_set(v___x_1218_, 0, v___f_1222_);
v___x_1227_ = v___x_1218_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v___f_1222_);
lean_ctor_set(v_reuseFailAlloc_1228_, 1, v___f_1225_);
lean_ctor_set(v_reuseFailAlloc_1228_, 2, v___f_1224_);
lean_ctor_set(v_reuseFailAlloc_1228_, 3, v___f_1221_);
lean_ctor_set(v_reuseFailAlloc_1228_, 4, v___f_1220_);
lean_ctor_set(v_reuseFailAlloc_1228_, 5, v___f_1223_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0(lean_object* v_00_u03b1_1231_, lean_object* v_name_1232_, uint8_t v_bi_1233_, lean_object* v_type_1234_, lean_object* v_k_1235_, uint8_t v_kind_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_){
_start:
{
lean_object* v___x_1245_; 
v___x_1245_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0___redArg(v_name_1232_, v_bi_1233_, v_type_1234_, v_k_1235_, v_kind_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1246_, lean_object* v_name_1247_, lean_object* v_bi_1248_, lean_object* v_type_1249_, lean_object* v_k_1250_, lean_object* v_kind_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_){
_start:
{
uint8_t v_bi_boxed_1260_; uint8_t v_kind_boxed_1261_; lean_object* v_res_1262_; 
v_bi_boxed_1260_ = lean_unbox(v_bi_1248_);
v_kind_boxed_1261_ = lean_unbox(v_kind_1251_);
v_res_1262_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0_spec__0(v_00_u03b1_1246_, v_name_1247_, v_bi_boxed_1260_, v_type_1249_, v_k_1250_, v_kind_boxed_1261_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_);
lean_dec(v___y_1258_);
lean_dec_ref(v___y_1257_);
lean_dec(v___y_1256_);
lean_dec_ref(v___y_1255_);
lean_dec(v___y_1254_);
lean_dec_ref(v___y_1253_);
lean_dec_ref(v___y_1252_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0(lean_object* v_00_u03b1_1263_, lean_object* v_name_1264_, lean_object* v_type_1265_, lean_object* v_k_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
lean_object* v___x_1275_; 
v___x_1275_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0___redArg(v_name_1264_, v_type_1265_, v_k_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_);
return v___x_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0___boxed(lean_object* v_00_u03b1_1276_, lean_object* v_name_1277_, lean_object* v_type_1278_, lean_object* v_k_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_){
_start:
{
lean_object* v_res_1288_; 
v_res_1288_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0(v_00_u03b1_1276_, v_name_1277_, v_type_1278_, v_k_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_);
lean_dec(v___y_1286_);
lean_dec_ref(v___y_1285_);
lean_dec(v___y_1284_);
lean_dec_ref(v___y_1283_);
lean_dec(v___y_1282_);
lean_dec_ref(v___y_1281_);
lean_dec_ref(v___y_1280_);
return v_res_1288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_exceptT_stM(lean_object* v_baseMonadInfo_1292_, lean_object* v_getCont_1293_, lean_object* v_00_u03b1_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_){
_start:
{
lean_object* v___x_1303_; 
lean_inc(v_a_1301_);
lean_inc_ref(v_a_1300_);
lean_inc(v_a_1299_);
lean_inc_ref(v_a_1298_);
lean_inc(v_a_1297_);
lean_inc_ref(v_a_1296_);
lean_inc_ref(v_a_1295_);
v___x_1303_ = lean_apply_8(v_getCont_1293_, v_a_1295_, v_a_1296_, v_a_1297_, v_a_1298_, v_a_1299_, v_a_1300_, v_a_1301_, lean_box(0));
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_object* v_a_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1326_; 
v_a_1304_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1306_ = v___x_1303_;
v_isShared_1307_ = v_isSharedCheck_1326_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_a_1304_);
lean_dec(v___x_1303_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1326_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v_u_1308_; lean_object* v_resultType_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1324_; 
v_u_1308_ = lean_ctor_get(v_baseMonadInfo_1292_, 1);
v_resultType_1309_ = lean_ctor_get(v_a_1304_, 0);
v_isSharedCheck_1324_ = !lean_is_exclusive(v_a_1304_);
if (v_isSharedCheck_1324_ == 0)
{
lean_object* v_unused_1325_; 
v_unused_1325_ = lean_ctor_get(v_a_1304_, 1);
lean_dec(v_unused_1325_);
v___x_1311_ = v_a_1304_;
v_isShared_1312_ = v_isSharedCheck_1324_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_resultType_1309_);
lean_dec(v_a_1304_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1324_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1313_; lean_object* v___x_1315_; 
v___x_1313_ = lean_box(0);
lean_inc(v_u_1308_);
if (v_isShared_1312_ == 0)
{
lean_ctor_set_tag(v___x_1311_, 1);
lean_ctor_set(v___x_1311_, 1, v___x_1313_);
lean_ctor_set(v___x_1311_, 0, v_u_1308_);
v___x_1315_ = v___x_1311_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_u_1308_);
lean_ctor_set(v_reuseFailAlloc_1323_, 1, v___x_1313_);
v___x_1315_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1321_; 
v___x_1316_ = ((lean_object*)(l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_exceptT_stM___closed__1));
lean_inc(v_u_1308_);
v___x_1317_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1317_, 0, v_u_1308_);
lean_ctor_set(v___x_1317_, 1, v___x_1315_);
v___x_1318_ = l_Lean_mkConst(v___x_1316_, v___x_1317_);
v___x_1319_ = l_Lean_mkAppB(v___x_1318_, v_resultType_1309_, v_00_u03b1_1294_);
if (v_isShared_1307_ == 0)
{
lean_ctor_set(v___x_1306_, 0, v___x_1319_);
v___x_1321_ = v___x_1306_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v___x_1319_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
}
}
}
else
{
lean_object* v_a_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1334_; 
lean_dec_ref(v_00_u03b1_1294_);
v_a_1327_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1329_ = v___x_1303_;
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_a_1327_);
lean_dec(v___x_1303_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1332_; 
if (v_isShared_1330_ == 0)
{
v___x_1332_ = v___x_1329_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v_a_1327_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
return v___x_1332_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_exceptT_stM___boxed(lean_object* v_baseMonadInfo_1335_, lean_object* v_getCont_1336_, lean_object* v_00_u03b1_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_, lean_object* v_a_1344_, lean_object* v_a_1345_){
_start:
{
lean_object* v_res_1346_; 
v_res_1346_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_exceptT_stM(v_baseMonadInfo_1335_, v_getCont_1336_, v_00_u03b1_1337_, v_a_1338_, v_a_1339_, v_a_1340_, v_a_1341_, v_a_1342_, v_a_1343_, v_a_1344_);
lean_dec(v_a_1344_);
lean_dec_ref(v_a_1343_);
lean_dec(v_a_1342_);
lean_dec_ref(v_a_1341_);
lean_dec(v_a_1340_);
lean_dec_ref(v_a_1339_);
lean_dec_ref(v_a_1338_);
lean_dec_ref(v_baseMonadInfo_1335_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__0(lean_object* v_k_1347_, lean_object* v_r_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v___x_1357_; 
lean_inc(v___y_1355_);
lean_inc_ref(v___y_1354_);
lean_inc(v___y_1353_);
lean_inc_ref(v___y_1352_);
lean_inc(v___y_1351_);
lean_inc_ref(v___y_1350_);
lean_inc_ref(v___y_1349_);
v___x_1357_ = lean_apply_8(v_k_1347_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, lean_box(0));
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v_a_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; uint8_t v___x_1362_; uint8_t v___x_1363_; uint8_t v___x_1364_; lean_object* v___x_1365_; 
v_a_1358_ = lean_ctor_get(v___x_1357_, 0);
lean_inc_n(v_a_1358_, 2);
lean_dec_ref_known(v___x_1357_, 1);
v___x_1359_ = lean_unsigned_to_nat(1u);
v___x_1360_ = lean_mk_empty_array_with_capacity(v___x_1359_);
v___x_1361_ = lean_array_push(v___x_1360_, v_r_1348_);
v___x_1362_ = 0;
v___x_1363_ = 1;
v___x_1364_ = 1;
v___x_1365_ = l_Lean_Meta_mkLambdaFVars(v___x_1361_, v_a_1358_, v___x_1362_, v___x_1363_, v___x_1362_, v___x_1363_, v___x_1364_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_);
lean_dec_ref(v___x_1361_);
if (lean_obj_tag(v___x_1365_) == 0)
{
lean_object* v_a_1366_; lean_object* v___x_1367_; 
v_a_1366_ = lean_ctor_get(v___x_1365_, 0);
lean_inc(v_a_1366_);
lean_dec_ref_known(v___x_1365_, 1);
lean_inc(v___y_1355_);
lean_inc_ref(v___y_1354_);
lean_inc(v___y_1353_);
lean_inc_ref(v___y_1352_);
v___x_1367_ = lean_infer_type(v_a_1358_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_object* v_a_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1376_; 
v_a_1368_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1376_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1376_ == 0)
{
v___x_1370_ = v___x_1367_;
v_isShared_1371_ = v_isSharedCheck_1376_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_a_1368_);
lean_dec(v___x_1367_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1376_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1372_; lean_object* v___x_1374_; 
v___x_1372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1372_, 0, v_a_1366_);
lean_ctor_set(v___x_1372_, 1, v_a_1368_);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 0, v___x_1372_);
v___x_1374_ = v___x_1370_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v___x_1372_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
return v___x_1374_;
}
}
}
else
{
lean_object* v_a_1377_; lean_object* v___x_1379_; uint8_t v_isShared_1380_; uint8_t v_isSharedCheck_1384_; 
lean_dec(v_a_1366_);
v_a_1377_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1384_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1384_ == 0)
{
v___x_1379_ = v___x_1367_;
v_isShared_1380_ = v_isSharedCheck_1384_;
goto v_resetjp_1378_;
}
else
{
lean_inc(v_a_1377_);
lean_dec(v___x_1367_);
v___x_1379_ = lean_box(0);
v_isShared_1380_ = v_isSharedCheck_1384_;
goto v_resetjp_1378_;
}
v_resetjp_1378_:
{
lean_object* v___x_1382_; 
if (v_isShared_1380_ == 0)
{
v___x_1382_ = v___x_1379_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v_a_1377_);
v___x_1382_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
return v___x_1382_;
}
}
}
}
else
{
lean_object* v_a_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1392_; 
lean_dec(v_a_1358_);
v_a_1385_ = lean_ctor_get(v___x_1365_, 0);
v_isSharedCheck_1392_ = !lean_is_exclusive(v___x_1365_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1387_ = v___x_1365_;
v_isShared_1388_ = v_isSharedCheck_1392_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_a_1385_);
lean_dec(v___x_1365_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1392_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v___x_1390_; 
if (v_isShared_1388_ == 0)
{
v___x_1390_ = v___x_1387_;
goto v_reusejp_1389_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v_a_1385_);
v___x_1390_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1389_;
}
v_reusejp_1389_:
{
return v___x_1390_;
}
}
}
}
else
{
lean_object* v_a_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1400_; 
lean_dec_ref(v_r_1348_);
v_a_1393_ = lean_ctor_get(v___x_1357_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1395_ = v___x_1357_;
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_a_1393_);
lean_dec(v___x_1357_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1398_; 
if (v_isShared_1396_ == 0)
{
v___x_1398_ = v___x_1395_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v_a_1393_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
return v___x_1398_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__0___boxed(lean_object* v_k_1401_, lean_object* v_r_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v_res_1411_; 
v_res_1411_ = l_Lean_Elab_Do_ControlStack_exceptT___lam__0(v_k_1401_, v_r_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec(v___y_1405_);
lean_dec_ref(v___y_1404_);
lean_dec_ref(v___y_1403_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__1(lean_object* v_k_1412_, lean_object* v_r_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_){
_start:
{
lean_object* v___x_1422_; 
lean_inc(v___y_1420_);
lean_inc_ref(v___y_1419_);
lean_inc(v___y_1418_);
lean_inc_ref(v___y_1417_);
lean_inc(v___y_1416_);
lean_inc_ref(v___y_1415_);
lean_inc_ref(v___y_1414_);
lean_inc_ref(v_r_1413_);
v___x_1422_ = lean_apply_9(v_k_1412_, v_r_1413_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_, lean_box(0));
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_a_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; uint8_t v___x_1427_; uint8_t v___x_1428_; uint8_t v___x_1429_; lean_object* v___x_1430_; 
v_a_1423_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_a_1423_);
lean_dec_ref_known(v___x_1422_, 1);
v___x_1424_ = lean_unsigned_to_nat(1u);
v___x_1425_ = lean_mk_empty_array_with_capacity(v___x_1424_);
v___x_1426_ = lean_array_push(v___x_1425_, v_r_1413_);
v___x_1427_ = 0;
v___x_1428_ = 1;
v___x_1429_ = 1;
v___x_1430_ = l_Lean_Meta_mkLambdaFVars(v___x_1426_, v_a_1423_, v___x_1427_, v___x_1428_, v___x_1427_, v___x_1428_, v___x_1429_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_);
lean_dec_ref(v___x_1426_);
return v___x_1430_;
}
else
{
lean_dec_ref(v_r_1413_);
return v___x_1422_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__1___boxed(lean_object* v_k_1431_, lean_object* v_r_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l_Lean_Elab_Do_ControlStack_exceptT___lam__1(v_k_1431_, v_r_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
lean_dec(v___y_1437_);
lean_dec_ref(v___y_1436_);
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec_ref(v___y_1433_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__2(lean_object* v_a_1442_, lean_object* v_getCont_1443_, lean_object* v_resultName_1444_, lean_object* v_resultType_1445_, lean_object* v___f_1446_, lean_object* v_baseMonadInfo_1447_, lean_object* v_casesOnWrapper_1448_, lean_object* v_00_u03b5_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_){
_start:
{
lean_object* v___x_1458_; 
v___x_1458_ = l_Lean_Meta_getFVarFromUserName(v_a_1442_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_);
if (lean_obj_tag(v___x_1458_) == 0)
{
lean_object* v_a_1459_; lean_object* v___x_1460_; 
v_a_1459_ = lean_ctor_get(v___x_1458_, 0);
lean_inc(v_a_1459_);
lean_dec_ref_known(v___x_1458_, 1);
lean_inc(v___y_1456_);
lean_inc_ref(v___y_1455_);
lean_inc(v___y_1454_);
lean_inc_ref(v___y_1453_);
lean_inc(v___y_1452_);
lean_inc_ref(v___y_1451_);
lean_inc_ref(v___y_1450_);
v___x_1460_ = lean_apply_8(v_getCont_1443_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, lean_box(0));
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_object* v_a_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; 
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
lean_inc(v_a_1461_);
lean_dec_ref_known(v___x_1460_, 1);
v___x_1462_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_optionT___lam__5___closed__1));
v___x_1463_ = l_Lean_Core_mkFreshUserName(v___x_1462_, v___y_1455_, v___y_1456_);
if (lean_obj_tag(v___x_1463_) == 0)
{
lean_object* v_a_1464_; lean_object* v_resultType_1465_; lean_object* v_k_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1507_; 
v_a_1464_ = lean_ctor_get(v___x_1463_, 0);
lean_inc(v_a_1464_);
lean_dec_ref_known(v___x_1463_, 1);
v_resultType_1465_ = lean_ctor_get(v_a_1461_, 0);
v_k_1466_ = lean_ctor_get(v_a_1461_, 1);
v_isSharedCheck_1507_ = !lean_is_exclusive(v_a_1461_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1468_ = v_a_1461_;
v_isShared_1469_ = v_isSharedCheck_1507_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_k_1466_);
lean_inc(v_resultType_1465_);
lean_dec(v_a_1461_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1507_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___f_1470_; lean_object* v___x_1471_; 
v___f_1470_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_exceptT___lam__1___boxed), 10, 1);
lean_closure_set(v___f_1470_, 0, v_k_1466_);
v___x_1471_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0___redArg(v_a_1464_, v_resultType_1465_, v___f_1470_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_);
if (lean_obj_tag(v___x_1471_) == 0)
{
lean_object* v_a_1472_; lean_object* v___x_1473_; 
v_a_1472_ = lean_ctor_get(v___x_1471_, 0);
lean_inc(v_a_1472_);
lean_dec_ref_known(v___x_1471_, 1);
lean_inc_ref(v_resultType_1445_);
v___x_1473_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Do_ControlStack_optionT_spec__0___redArg(v_resultName_1444_, v_resultType_1445_, v___f_1446_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_);
if (lean_obj_tag(v___x_1473_) == 0)
{
lean_object* v_a_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1498_; 
v_a_1474_ = lean_ctor_get(v___x_1473_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1476_ = v___x_1473_;
v_isShared_1477_ = v_isSharedCheck_1498_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_a_1474_);
lean_dec(v___x_1473_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1498_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v_fst_1478_; lean_object* v_snd_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1497_; 
v_fst_1478_ = lean_ctor_get(v_a_1474_, 0);
v_snd_1479_ = lean_ctor_get(v_a_1474_, 1);
v_isSharedCheck_1497_ = !lean_is_exclusive(v_a_1474_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1481_ = v_a_1474_;
v_isShared_1482_ = v_isSharedCheck_1497_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_snd_1479_);
lean_inc(v_fst_1478_);
lean_dec(v_a_1474_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1497_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v_u_1483_; lean_object* v_v_1484_; lean_object* v___x_1485_; lean_object* v___x_1487_; 
v_u_1483_ = lean_ctor_get(v_baseMonadInfo_1447_, 1);
v_v_1484_ = lean_ctor_get(v_baseMonadInfo_1447_, 2);
v___x_1485_ = lean_box(0);
lean_inc(v_v_1484_);
if (v_isShared_1482_ == 0)
{
lean_ctor_set_tag(v___x_1481_, 1);
lean_ctor_set(v___x_1481_, 1, v___x_1485_);
lean_ctor_set(v___x_1481_, 0, v_v_1484_);
v___x_1487_ = v___x_1481_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v_v_1484_);
lean_ctor_set(v_reuseFailAlloc_1496_, 1, v___x_1485_);
v___x_1487_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
lean_object* v___x_1489_; 
lean_inc(v_u_1483_);
if (v_isShared_1469_ == 0)
{
lean_ctor_set_tag(v___x_1468_, 1);
lean_ctor_set(v___x_1468_, 1, v___x_1487_);
lean_ctor_set(v___x_1468_, 0, v_u_1483_);
v___x_1489_ = v___x_1468_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_u_1483_);
lean_ctor_set(v_reuseFailAlloc_1495_, 1, v___x_1487_);
v___x_1489_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1493_; 
v___x_1490_ = l_Lean_mkConst(v_casesOnWrapper_1448_, v___x_1489_);
v___x_1491_ = l_Lean_mkApp6(v___x_1490_, v_00_u03b5_1449_, v_resultType_1445_, v_snd_1479_, v_a_1459_, v_a_1472_, v_fst_1478_);
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 0, v___x_1491_);
v___x_1493_ = v___x_1476_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v___x_1491_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
}
}
}
else
{
lean_object* v_a_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1506_; 
lean_dec(v_a_1472_);
lean_del_object(v___x_1468_);
lean_dec(v_a_1459_);
lean_dec_ref(v_00_u03b5_1449_);
lean_dec(v_casesOnWrapper_1448_);
lean_dec_ref(v_resultType_1445_);
v_a_1499_ = lean_ctor_get(v___x_1473_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1501_ = v___x_1473_;
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_a_1499_);
lean_dec(v___x_1473_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v___x_1504_; 
if (v_isShared_1502_ == 0)
{
v___x_1504_ = v___x_1501_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_a_1499_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
}
else
{
lean_del_object(v___x_1468_);
lean_dec(v_a_1459_);
lean_dec_ref(v_00_u03b5_1449_);
lean_dec(v_casesOnWrapper_1448_);
lean_dec_ref(v___f_1446_);
lean_dec_ref(v_resultType_1445_);
lean_dec(v_resultName_1444_);
return v___x_1471_;
}
}
}
else
{
lean_object* v_a_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1515_; 
lean_dec(v_a_1461_);
lean_dec(v_a_1459_);
lean_dec_ref(v_00_u03b5_1449_);
lean_dec(v_casesOnWrapper_1448_);
lean_dec_ref(v___f_1446_);
lean_dec_ref(v_resultType_1445_);
lean_dec(v_resultName_1444_);
v_a_1508_ = lean_ctor_get(v___x_1463_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1463_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1510_ = v___x_1463_;
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_a_1508_);
lean_dec(v___x_1463_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1513_; 
if (v_isShared_1511_ == 0)
{
v___x_1513_ = v___x_1510_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_a_1508_);
v___x_1513_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
return v___x_1513_;
}
}
}
}
else
{
lean_object* v_a_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1523_; 
lean_dec(v_a_1459_);
lean_dec_ref(v_00_u03b5_1449_);
lean_dec(v_casesOnWrapper_1448_);
lean_dec_ref(v___f_1446_);
lean_dec_ref(v_resultType_1445_);
lean_dec(v_resultName_1444_);
v_a_1516_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1518_ = v___x_1460_;
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_a_1516_);
lean_dec(v___x_1460_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
lean_object* v___x_1521_; 
if (v_isShared_1519_ == 0)
{
v___x_1521_ = v___x_1518_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v_a_1516_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
}
}
else
{
lean_dec_ref(v_00_u03b5_1449_);
lean_dec(v_casesOnWrapper_1448_);
lean_dec_ref(v___f_1446_);
lean_dec_ref(v_resultType_1445_);
lean_dec(v_resultName_1444_);
lean_dec_ref(v_getCont_1443_);
return v___x_1458_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__2___boxed(lean_object* v_a_1524_, lean_object* v_getCont_1525_, lean_object* v_resultName_1526_, lean_object* v_resultType_1527_, lean_object* v___f_1528_, lean_object* v_baseMonadInfo_1529_, lean_object* v_casesOnWrapper_1530_, lean_object* v_00_u03b5_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l_Lean_Elab_Do_ControlStack_exceptT___lam__2(v_a_1524_, v_getCont_1525_, v_resultName_1526_, v_resultType_1527_, v___f_1528_, v_baseMonadInfo_1529_, v_casesOnWrapper_1530_, v_00_u03b5_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_);
lean_dec(v___y_1538_);
lean_dec_ref(v___y_1537_);
lean_dec(v___y_1536_);
lean_dec_ref(v___y_1535_);
lean_dec(v___y_1534_);
lean_dec_ref(v___y_1533_);
lean_dec_ref(v___y_1532_);
lean_dec_ref(v_baseMonadInfo_1529_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__3(lean_object* v_baseMonadInfo_1541_, lean_object* v_getCont_1542_, lean_object* v_casesOnWrapper_1543_, lean_object* v_00_u03b5_1544_, lean_object* v_restoreCont_1545_, lean_object* v_dec_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1555_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_optionT___lam__6___closed__1));
v___x_1556_ = l_Lean_Core_mkFreshUserName(v___x_1555_, v___y_1552_, v___y_1553_);
if (lean_obj_tag(v___x_1556_) == 0)
{
lean_object* v_a_1557_; lean_object* v_resultName_1558_; lean_object* v_resultType_1559_; lean_object* v_k_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1581_; 
v_a_1557_ = lean_ctor_get(v___x_1556_, 0);
lean_inc(v_a_1557_);
lean_dec_ref_known(v___x_1556_, 1);
v_resultName_1558_ = lean_ctor_get(v_dec_1546_, 0);
v_resultType_1559_ = lean_ctor_get(v_dec_1546_, 1);
v_k_1560_ = lean_ctor_get(v_dec_1546_, 2);
v_isSharedCheck_1581_ = !lean_is_exclusive(v_dec_1546_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1562_ = v_dec_1546_;
v_isShared_1563_ = v_isSharedCheck_1581_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_k_1560_);
lean_inc(v_resultType_1559_);
lean_inc(v_resultName_1558_);
lean_dec(v_dec_1546_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1581_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___x_1564_; 
lean_inc_ref(v_resultType_1559_);
lean_inc_ref(v_getCont_1542_);
v___x_1564_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_exceptT_stM(v_baseMonadInfo_1541_, v_getCont_1542_, v_resultType_1559_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_);
if (lean_obj_tag(v___x_1564_) == 0)
{
lean_object* v_a_1565_; lean_object* v___f_1566_; lean_object* v___f_1567_; uint8_t v___x_1568_; lean_object* v___x_1570_; 
v_a_1565_ = lean_ctor_get(v___x_1564_, 0);
lean_inc(v_a_1565_);
lean_dec_ref_known(v___x_1564_, 1);
v___f_1566_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_exceptT___lam__0___boxed), 10, 1);
lean_closure_set(v___f_1566_, 0, v_k_1560_);
lean_inc(v_a_1557_);
v___f_1567_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_exceptT___lam__2___boxed), 16, 8);
lean_closure_set(v___f_1567_, 0, v_a_1557_);
lean_closure_set(v___f_1567_, 1, v_getCont_1542_);
lean_closure_set(v___f_1567_, 2, v_resultName_1558_);
lean_closure_set(v___f_1567_, 3, v_resultType_1559_);
lean_closure_set(v___f_1567_, 4, v___f_1566_);
lean_closure_set(v___f_1567_, 5, v_baseMonadInfo_1541_);
lean_closure_set(v___f_1567_, 6, v_casesOnWrapper_1543_);
lean_closure_set(v___f_1567_, 7, v_00_u03b5_1544_);
v___x_1568_ = 0;
if (v_isShared_1563_ == 0)
{
lean_ctor_set(v___x_1562_, 2, v___f_1567_);
lean_ctor_set(v___x_1562_, 1, v_a_1565_);
lean_ctor_set(v___x_1562_, 0, v_a_1557_);
v___x_1570_ = v___x_1562_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_a_1557_);
lean_ctor_set(v_reuseFailAlloc_1572_, 1, v_a_1565_);
lean_ctor_set(v_reuseFailAlloc_1572_, 2, v___f_1567_);
v___x_1570_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
lean_object* v___x_1571_; 
lean_ctor_set_uint8(v___x_1570_, sizeof(void*)*3, v___x_1568_);
lean_inc(v___y_1553_);
lean_inc_ref(v___y_1552_);
lean_inc(v___y_1551_);
lean_inc_ref(v___y_1550_);
lean_inc(v___y_1549_);
lean_inc_ref(v___y_1548_);
lean_inc_ref(v___y_1547_);
v___x_1571_ = lean_apply_9(v_restoreCont_1545_, v___x_1570_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, lean_box(0));
return v___x_1571_;
}
}
else
{
lean_object* v_a_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1580_; 
lean_del_object(v___x_1562_);
lean_dec_ref(v_k_1560_);
lean_dec_ref(v_resultType_1559_);
lean_dec(v_resultName_1558_);
lean_dec(v_a_1557_);
lean_dec_ref(v_restoreCont_1545_);
lean_dec_ref(v_00_u03b5_1544_);
lean_dec(v_casesOnWrapper_1543_);
lean_dec_ref(v_getCont_1542_);
lean_dec_ref(v_baseMonadInfo_1541_);
v_a_1573_ = lean_ctor_get(v___x_1564_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1575_ = v___x_1564_;
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_a_1573_);
lean_dec(v___x_1564_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v___x_1578_; 
if (v_isShared_1576_ == 0)
{
v___x_1578_ = v___x_1575_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_a_1573_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
}
}
else
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
lean_dec_ref(v_dec_1546_);
lean_dec_ref(v_restoreCont_1545_);
lean_dec_ref(v_00_u03b5_1544_);
lean_dec(v_casesOnWrapper_1543_);
lean_dec_ref(v_getCont_1542_);
lean_dec_ref(v_baseMonadInfo_1541_);
v_a_1582_ = lean_ctor_get(v___x_1556_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1556_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v___x_1556_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1556_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__3___boxed(lean_object* v_baseMonadInfo_1590_, lean_object* v_getCont_1591_, lean_object* v_casesOnWrapper_1592_, lean_object* v_00_u03b5_1593_, lean_object* v_restoreCont_1594_, lean_object* v_dec_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_){
_start:
{
lean_object* v_res_1604_; 
v_res_1604_ = l_Lean_Elab_Do_ControlStack_exceptT___lam__3(v_baseMonadInfo_1590_, v_getCont_1591_, v_casesOnWrapper_1592_, v_00_u03b5_1593_, v_restoreCont_1594_, v_dec_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_);
lean_dec(v___y_1602_);
lean_dec_ref(v___y_1601_);
lean_dec(v___y_1600_);
lean_dec_ref(v___y_1599_);
lean_dec(v___y_1598_);
lean_dec_ref(v___y_1597_);
lean_dec_ref(v___y_1596_);
return v_res_1604_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__1(void){
_start:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1606_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__0));
v___x_1607_ = l_Lean_stringToMessageData(v___x_1606_);
return v___x_1607_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__3(void){
_start:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1609_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__2));
v___x_1610_ = l_Lean_stringToMessageData(v___x_1609_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__4(lean_object* v_00_u03b5_1611_, lean_object* v_description_1612_, lean_object* v_x_1613_){
_start:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1614_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__1, &l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__1_once, _init_l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__1);
v___x_1615_ = l_Lean_MessageData_ofExpr(v_00_u03b5_1611_);
v___x_1616_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1616_, 0, v___x_1614_);
lean_ctor_set(v___x_1616_, 1, v___x_1615_);
v___x_1617_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__3, &l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__3_once, _init_l_Lean_Elab_Do_ControlStack_exceptT___lam__4___closed__3);
v___x_1618_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1618_, 0, v___x_1616_);
lean_ctor_set(v___x_1618_, 1, v___x_1617_);
v___x_1619_ = lean_box(0);
v___x_1620_ = lean_apply_1(v_description_1612_, v___x_1619_);
v___x_1621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1618_);
lean_ctor_set(v___x_1621_, 1, v___x_1620_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__5(lean_object* v_baseMonadInfo_1622_, lean_object* v_getCont_1623_, lean_object* v_stM_1624_, lean_object* v_00_u03b1_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_){
_start:
{
lean_object* v___x_1634_; 
v___x_1634_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_exceptT_stM(v_baseMonadInfo_1622_, v_getCont_1623_, v_00_u03b1_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_);
if (lean_obj_tag(v___x_1634_) == 0)
{
lean_object* v_a_1635_; lean_object* v___x_1636_; 
v_a_1635_ = lean_ctor_get(v___x_1634_, 0);
lean_inc(v_a_1635_);
lean_dec_ref_known(v___x_1634_, 1);
lean_inc(v___y_1632_);
lean_inc_ref(v___y_1631_);
lean_inc(v___y_1630_);
lean_inc_ref(v___y_1629_);
lean_inc(v___y_1628_);
lean_inc_ref(v___y_1627_);
lean_inc_ref(v___y_1626_);
v___x_1636_ = lean_apply_9(v_stM_1624_, v_a_1635_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, lean_box(0));
return v___x_1636_;
}
else
{
lean_dec_ref(v_stM_1624_);
return v___x_1634_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__5___boxed(lean_object* v_baseMonadInfo_1637_, lean_object* v_getCont_1638_, lean_object* v_stM_1639_, lean_object* v_00_u03b1_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l_Lean_Elab_Do_ControlStack_exceptT___lam__5(v_baseMonadInfo_1637_, v_getCont_1638_, v_stM_1639_, v_00_u03b1_1640_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec_ref(v___y_1641_);
lean_dec_ref(v_baseMonadInfo_1637_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__6(lean_object* v_runInBase_1654_, lean_object* v_e_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_){
_start:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v___x_1664_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_exceptT___lam__6___closed__1));
v___x_1665_ = lean_unsigned_to_nat(1u);
v___x_1666_ = lean_mk_empty_array_with_capacity(v___x_1665_);
v___x_1667_ = lean_array_push(v___x_1666_, v_e_1655_);
v___x_1668_ = l_Lean_Meta_mkAppM(v___x_1664_, v___x_1667_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_);
if (lean_obj_tag(v___x_1668_) == 0)
{
lean_object* v_a_1669_; lean_object* v___x_1670_; 
v_a_1669_ = lean_ctor_get(v___x_1668_, 0);
lean_inc(v_a_1669_);
lean_dec_ref_known(v___x_1668_, 1);
lean_inc(v___y_1662_);
lean_inc_ref(v___y_1661_);
lean_inc(v___y_1660_);
lean_inc_ref(v___y_1659_);
lean_inc(v___y_1658_);
lean_inc_ref(v___y_1657_);
lean_inc_ref(v___y_1656_);
v___x_1670_ = lean_apply_9(v_runInBase_1654_, v_a_1669_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, lean_box(0));
return v___x_1670_;
}
else
{
lean_dec_ref(v_runInBase_1654_);
return v___x_1668_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__6___boxed(lean_object* v_runInBase_1671_, lean_object* v_e_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_){
_start:
{
lean_object* v_res_1681_; 
v_res_1681_ = l_Lean_Elab_Do_ControlStack_exceptT___lam__6(v_runInBase_1671_, v_e_1672_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_);
lean_dec(v___y_1679_);
lean_dec_ref(v___y_1678_);
lean_dec(v___y_1677_);
lean_dec_ref(v___y_1676_);
lean_dec(v___y_1675_);
lean_dec_ref(v___y_1674_);
lean_dec_ref(v___y_1673_);
return v_res_1681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__7(lean_object* v_m_1682_, lean_object* v_baseMonadInfo_1683_, lean_object* v_exceptTWrapper_1684_, lean_object* v_00_u03b5_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
lean_object* v___x_1694_; 
lean_inc(v___y_1692_);
lean_inc_ref(v___y_1691_);
lean_inc(v___y_1690_);
lean_inc_ref(v___y_1689_);
lean_inc(v___y_1688_);
lean_inc_ref(v___y_1687_);
lean_inc_ref(v___y_1686_);
v___x_1694_ = lean_apply_8(v_m_1682_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_, lean_box(0));
if (lean_obj_tag(v___x_1694_) == 0)
{
lean_object* v_a_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1709_; 
v_a_1695_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1697_ = v___x_1694_;
v_isShared_1698_ = v_isSharedCheck_1709_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_a_1695_);
lean_dec(v___x_1694_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1709_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v_u_1699_; lean_object* v_v_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1707_; 
v_u_1699_ = lean_ctor_get(v_baseMonadInfo_1683_, 1);
v_v_1700_ = lean_ctor_get(v_baseMonadInfo_1683_, 2);
v___x_1701_ = lean_box(0);
lean_inc(v_v_1700_);
v___x_1702_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1702_, 0, v_v_1700_);
lean_ctor_set(v___x_1702_, 1, v___x_1701_);
lean_inc(v_u_1699_);
v___x_1703_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1703_, 0, v_u_1699_);
lean_ctor_set(v___x_1703_, 1, v___x_1702_);
v___x_1704_ = l_Lean_mkConst(v_exceptTWrapper_1684_, v___x_1703_);
v___x_1705_ = l_Lean_mkAppB(v___x_1704_, v_00_u03b5_1685_, v_a_1695_);
if (v_isShared_1698_ == 0)
{
lean_ctor_set(v___x_1697_, 0, v___x_1705_);
v___x_1707_ = v___x_1697_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v___x_1705_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
}
else
{
lean_dec_ref(v_00_u03b5_1685_);
lean_dec(v_exceptTWrapper_1684_);
return v___x_1694_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT___lam__7___boxed(lean_object* v_m_1710_, lean_object* v_baseMonadInfo_1711_, lean_object* v_exceptTWrapper_1712_, lean_object* v_00_u03b5_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_){
_start:
{
lean_object* v_res_1722_; 
v_res_1722_ = l_Lean_Elab_Do_ControlStack_exceptT___lam__7(v_m_1710_, v_baseMonadInfo_1711_, v_exceptTWrapper_1712_, v_00_u03b5_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_);
lean_dec(v___y_1720_);
lean_dec_ref(v___y_1719_);
lean_dec(v___y_1718_);
lean_dec_ref(v___y_1717_);
lean_dec(v___y_1716_);
lean_dec_ref(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec_ref(v_baseMonadInfo_1711_);
return v_res_1722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_exceptT(lean_object* v_baseMonadInfo_1723_, lean_object* v_exceptTWrapper_1724_, lean_object* v_casesOnWrapper_1725_, lean_object* v_getCont_1726_, lean_object* v_00_u03b5_1727_, lean_object* v_base_1728_){
_start:
{
lean_object* v_description_1729_; lean_object* v_m_1730_; lean_object* v_stM_1731_; lean_object* v_runInBase_1732_; lean_object* v_restoreCont_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1746_; 
v_description_1729_ = lean_ctor_get(v_base_1728_, 0);
v_m_1730_ = lean_ctor_get(v_base_1728_, 1);
v_stM_1731_ = lean_ctor_get(v_base_1728_, 2);
v_runInBase_1732_ = lean_ctor_get(v_base_1728_, 4);
v_restoreCont_1733_ = lean_ctor_get(v_base_1728_, 5);
v_isSharedCheck_1746_ = !lean_is_exclusive(v_base_1728_);
if (v_isSharedCheck_1746_ == 0)
{
lean_object* v_unused_1747_; 
v_unused_1747_ = lean_ctor_get(v_base_1728_, 3);
lean_dec(v_unused_1747_);
v___x_1735_ = v_base_1728_;
v_isShared_1736_ = v_isSharedCheck_1746_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_restoreCont_1733_);
lean_inc(v_runInBase_1732_);
lean_inc(v_stM_1731_);
lean_inc(v_m_1730_);
lean_inc(v_description_1729_);
lean_dec(v_base_1728_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1746_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___f_1737_; lean_object* v___f_1738_; lean_object* v___f_1739_; lean_object* v___f_1740_; lean_object* v___f_1741_; lean_object* v___x_1742_; lean_object* v___x_1744_; 
lean_inc_ref_n(v_00_u03b5_1727_, 2);
lean_inc_ref_n(v_getCont_1726_, 2);
lean_inc_ref_n(v_baseMonadInfo_1723_, 3);
v___f_1737_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_exceptT___lam__3___boxed), 14, 5);
lean_closure_set(v___f_1737_, 0, v_baseMonadInfo_1723_);
lean_closure_set(v___f_1737_, 1, v_getCont_1726_);
lean_closure_set(v___f_1737_, 2, v_casesOnWrapper_1725_);
lean_closure_set(v___f_1737_, 3, v_00_u03b5_1727_);
lean_closure_set(v___f_1737_, 4, v_restoreCont_1733_);
v___f_1738_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_exceptT___lam__4), 3, 2);
lean_closure_set(v___f_1738_, 0, v_00_u03b5_1727_);
lean_closure_set(v___f_1738_, 1, v_description_1729_);
v___f_1739_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_exceptT___lam__5___boxed), 12, 3);
lean_closure_set(v___f_1739_, 0, v_baseMonadInfo_1723_);
lean_closure_set(v___f_1739_, 1, v_getCont_1726_);
lean_closure_set(v___f_1739_, 2, v_stM_1731_);
v___f_1740_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_exceptT___lam__6___boxed), 10, 1);
lean_closure_set(v___f_1740_, 0, v_runInBase_1732_);
v___f_1741_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_exceptT___lam__7___boxed), 12, 4);
lean_closure_set(v___f_1741_, 0, v_m_1730_);
lean_closure_set(v___f_1741_, 1, v_baseMonadInfo_1723_);
lean_closure_set(v___f_1741_, 2, v_exceptTWrapper_1724_);
lean_closure_set(v___f_1741_, 3, v_00_u03b5_1727_);
v___x_1742_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_exceptT_stM___boxed), 11, 2);
lean_closure_set(v___x_1742_, 0, v_baseMonadInfo_1723_);
lean_closure_set(v___x_1742_, 1, v_getCont_1726_);
if (v_isShared_1736_ == 0)
{
lean_ctor_set(v___x_1735_, 5, v___f_1737_);
lean_ctor_set(v___x_1735_, 4, v___f_1740_);
lean_ctor_set(v___x_1735_, 3, v___x_1742_);
lean_ctor_set(v___x_1735_, 2, v___f_1739_);
lean_ctor_set(v___x_1735_, 1, v___f_1741_);
lean_ctor_set(v___x_1735_, 0, v___f_1738_);
v___x_1744_ = v___x_1735_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v___f_1738_);
lean_ctor_set(v_reuseFailAlloc_1745_, 1, v___f_1741_);
lean_ctor_set(v_reuseFailAlloc_1745_, 2, v___f_1739_);
lean_ctor_set(v_reuseFailAlloc_1745_, 3, v___x_1742_);
lean_ctor_set(v_reuseFailAlloc_1745_, 4, v___f_1740_);
lean_ctor_set(v_reuseFailAlloc_1745_, 5, v___f_1737_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
return v___x_1744_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_earlyReturnT(lean_object* v_baseMonadInfo_1757_, lean_object* v_00_u03c1_1758_, lean_object* v_m_1759_){
_start:
{
lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
v___x_1760_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__1));
v___x_1761_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__4));
v___x_1762_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__5));
v___x_1763_ = l_Lean_Elab_Do_ControlStack_exceptT(v_baseMonadInfo_1757_, v___x_1760_, v___x_1761_, v___x_1762_, v_00_u03c1_1758_, v_m_1759_);
return v___x_1763_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_breakT___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1765_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_breakT___lam__0___closed__0));
v___x_1766_ = l_Lean_stringToMessageData(v___x_1765_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_breakT___lam__0(lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_){
_start:
{
lean_object* v___x_1775_; 
v___x_1775_ = l_Lean_Elab_Do_getBreakCont___redArg(v___y_1767_);
if (lean_obj_tag(v___x_1775_) == 0)
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1786_; 
v_a_1776_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1778_ = v___x_1775_;
v_isShared_1779_ = v_isSharedCheck_1786_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1775_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1786_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
if (lean_obj_tag(v_a_1776_) == 0)
{
lean_object* v___x_1780_; lean_object* v___x_1781_; 
lean_del_object(v___x_1778_);
v___x_1780_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_breakT___lam__0___closed__1, &l_Lean_Elab_Do_ControlStack_breakT___lam__0___closed__1_once, _init_l_Lean_Elab_Do_ControlStack_breakT___lam__0___closed__1);
v___x_1781_ = l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___redArg(v___x_1780_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_);
return v___x_1781_;
}
else
{
lean_object* v_val_1782_; lean_object* v___x_1784_; 
v_val_1782_ = lean_ctor_get(v_a_1776_, 0);
lean_inc(v_val_1782_);
lean_dec_ref_known(v_a_1776_, 1);
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 0, v_val_1782_);
v___x_1784_ = v___x_1778_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_val_1782_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
else
{
lean_object* v_a_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1794_; 
v_a_1787_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1794_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1794_ == 0)
{
v___x_1789_ = v___x_1775_;
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_a_1787_);
lean_dec(v___x_1775_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1792_; 
if (v_isShared_1790_ == 0)
{
v___x_1792_ = v___x_1789_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v_a_1787_);
v___x_1792_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
return v___x_1792_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_breakT___lam__0___boxed(lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_){
_start:
{
lean_object* v_res_1803_; 
v_res_1803_ = l_Lean_Elab_Do_ControlStack_breakT___lam__0(v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
lean_dec(v___y_1799_);
lean_dec_ref(v___y_1798_);
lean_dec(v___y_1797_);
lean_dec_ref(v___y_1796_);
lean_dec_ref(v___y_1795_);
return v_res_1803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_breakT(lean_object* v_baseMonadInfo_1812_, lean_object* v_m_1813_){
_start:
{
lean_object* v_getCont_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; 
v_getCont_1814_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_breakT___closed__0));
v___x_1815_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_breakT___closed__2));
v___x_1816_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_breakT___closed__4));
v___x_1817_ = l_Lean_Elab_Do_ControlStack_optionT(v_baseMonadInfo_1812_, v___x_1815_, v___x_1816_, v_getCont_1814_, v_m_1813_);
return v___x_1817_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_continueT___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1819_; lean_object* v___x_1820_; 
v___x_1819_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_continueT___lam__0___closed__0));
v___x_1820_ = l_Lean_stringToMessageData(v___x_1819_);
return v___x_1820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_continueT___lam__0(lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_){
_start:
{
lean_object* v___x_1829_; 
v___x_1829_ = l_Lean_Elab_Do_getContinueCont___redArg(v___y_1821_);
if (lean_obj_tag(v___x_1829_) == 0)
{
lean_object* v_a_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1840_; 
v_a_1830_ = lean_ctor_get(v___x_1829_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1829_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1832_ = v___x_1829_;
v_isShared_1833_ = v_isSharedCheck_1840_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_a_1830_);
lean_dec(v___x_1829_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1840_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
if (lean_obj_tag(v_a_1830_) == 0)
{
lean_object* v___x_1834_; lean_object* v___x_1835_; 
lean_del_object(v___x_1832_);
v___x_1834_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_continueT___lam__0___closed__1, &l_Lean_Elab_Do_ControlStack_continueT___lam__0___closed__1_once, _init_l_Lean_Elab_Do_ControlStack_continueT___lam__0___closed__1);
v___x_1835_ = l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___redArg(v___x_1834_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_);
return v___x_1835_;
}
else
{
lean_object* v_val_1836_; lean_object* v___x_1838_; 
v_val_1836_ = lean_ctor_get(v_a_1830_, 0);
lean_inc(v_val_1836_);
lean_dec_ref_known(v_a_1830_, 1);
if (v_isShared_1833_ == 0)
{
lean_ctor_set(v___x_1832_, 0, v_val_1836_);
v___x_1838_ = v___x_1832_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_val_1836_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
}
else
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1848_; 
v_a_1841_ = lean_ctor_get(v___x_1829_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1829_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1843_ = v___x_1829_;
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1829_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
if (v_isShared_1844_ == 0)
{
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_a_1841_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_continueT___lam__0___boxed(lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_){
_start:
{
lean_object* v_res_1857_; 
v_res_1857_ = l_Lean_Elab_Do_ControlStack_continueT___lam__0(v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_);
lean_dec(v___y_1855_);
lean_dec_ref(v___y_1854_);
lean_dec(v___y_1853_);
lean_dec_ref(v___y_1852_);
lean_dec(v___y_1851_);
lean_dec_ref(v___y_1850_);
lean_dec_ref(v___y_1849_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_continueT(lean_object* v_baseMonadInfo_1866_, lean_object* v_m_1867_){
_start:
{
lean_object* v_getCont_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v_getCont_1868_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_continueT___closed__0));
v___x_1869_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_continueT___closed__2));
v___x_1870_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_continueT___closed__4));
v___x_1871_ = l_Lean_Elab_Do_ControlStack_optionT(v_baseMonadInfo_1866_, v___x_1869_, v___x_1870_, v_getCont_1868_, v_m_1867_);
return v___x_1871_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1873_; lean_object* v___x_1874_; 
v___x_1873_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__0));
v___x_1874_ = l_Lean_stringToMessageData(v___x_1873_);
return v___x_1874_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1876_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__2));
v___x_1877_ = l_Lean_stringToMessageData(v___x_1876_);
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0(lean_object* v_l_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_){
_start:
{
lean_object* v___x_1887_; 
v___x_1887_ = l_Lean_Elab_Do_getLabeledTarget_x3f___redArg(v_l_1878_, v___y_1879_);
if (lean_obj_tag(v___x_1887_) == 0)
{
lean_object* v_a_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1908_; 
v_a_1888_ = lean_ctor_get(v___x_1887_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1887_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1890_ = v___x_1887_;
v_isShared_1891_ = v_isSharedCheck_1908_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_a_1888_);
lean_dec(v___x_1887_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1908_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
lean_object* v___y_1893_; lean_object* v___y_1894_; lean_object* v___y_1895_; lean_object* v___y_1896_; 
if (lean_obj_tag(v_a_1888_) == 1)
{
lean_object* v_val_1903_; 
v_val_1903_ = lean_ctor_get(v_a_1888_, 0);
lean_inc(v_val_1903_);
lean_dec_ref_known(v_a_1888_, 1);
if (lean_obj_tag(v_val_1903_) == 0)
{
lean_object* v_returnCont_1904_; lean_object* v___x_1906_; 
lean_dec(v_l_1878_);
v_returnCont_1904_ = lean_ctor_get(v_val_1903_, 0);
lean_inc_ref(v_returnCont_1904_);
lean_dec_ref_known(v_val_1903_, 1);
if (v_isShared_1891_ == 0)
{
lean_ctor_set(v___x_1890_, 0, v_returnCont_1904_);
v___x_1906_ = v___x_1890_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_returnCont_1904_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
else
{
lean_dec(v_val_1903_);
lean_del_object(v___x_1890_);
v___y_1893_ = v___y_1882_;
v___y_1894_ = v___y_1883_;
v___y_1895_ = v___y_1884_;
v___y_1896_ = v___y_1885_;
goto v___jp_1892_;
}
}
else
{
lean_del_object(v___x_1890_);
lean_dec(v_a_1888_);
v___y_1893_ = v___y_1882_;
v___y_1894_ = v___y_1883_;
v___y_1895_ = v___y_1884_;
v___y_1896_ = v___y_1885_;
goto v___jp_1892_;
}
v___jp_1892_:
{
lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___x_1897_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__1, &l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__1_once, _init_l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__1);
v___x_1898_ = l_Lean_MessageData_ofName(v_l_1878_);
v___x_1899_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1899_, 0, v___x_1897_);
lean_ctor_set(v___x_1899_, 1, v___x_1898_);
v___x_1900_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__3, &l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__3_once, _init_l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__3);
v___x_1901_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1899_);
lean_ctor_set(v___x_1901_, 1, v___x_1900_);
v___x_1902_ = l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___redArg(v___x_1901_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_);
return v___x_1902_;
}
}
}
else
{
lean_object* v_a_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1916_; 
lean_dec(v_l_1878_);
v_a_1909_ = lean_ctor_get(v___x_1887_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1887_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1911_ = v___x_1887_;
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_a_1909_);
lean_dec(v___x_1887_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v___x_1914_; 
if (v_isShared_1912_ == 0)
{
v___x_1914_ = v___x_1911_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_a_1909_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___boxed(lean_object* v_l_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0(v_l_1917_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_);
lean_dec(v___y_1924_);
lean_dec_ref(v___y_1923_);
lean_dec(v___y_1922_);
lean_dec_ref(v___y_1921_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
lean_dec_ref(v___y_1918_);
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledReturnT(lean_object* v_baseMonadInfo_1927_, lean_object* v_l_1928_, lean_object* v_00_u03c1_1929_, lean_object* v_m_1930_){
_start:
{
lean_object* v_getCont_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; 
v_getCont_1931_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___boxed), 9, 1);
lean_closure_set(v_getCont_1931_, 0, v_l_1928_);
v___x_1932_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__1));
v___x_1933_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_earlyReturnT___closed__4));
v___x_1934_ = l_Lean_Elab_Do_ControlStack_exceptT(v_baseMonadInfo_1927_, v___x_1932_, v___x_1933_, v_getCont_1931_, v_00_u03c1_1929_, v_m_1930_);
return v___x_1934_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1936_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0___closed__0));
v___x_1937_ = l_Lean_stringToMessageData(v___x_1936_);
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0(lean_object* v_l_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_){
_start:
{
lean_object* v___x_1947_; 
v___x_1947_ = l_Lean_Elab_Do_getLabeledTarget_x3f___redArg(v_l_1938_, v___y_1939_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1968_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1950_ = v___x_1947_;
v_isShared_1951_ = v_isSharedCheck_1968_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1947_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1968_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___y_1953_; lean_object* v___y_1954_; lean_object* v___y_1955_; lean_object* v___y_1956_; 
if (lean_obj_tag(v_a_1948_) == 1)
{
lean_object* v_val_1963_; 
v_val_1963_ = lean_ctor_get(v_a_1948_, 0);
lean_inc(v_val_1963_);
lean_dec_ref_known(v_a_1948_, 1);
if (lean_obj_tag(v_val_1963_) == 1)
{
lean_object* v_breakCont_1964_; lean_object* v___x_1966_; 
lean_dec(v_l_1938_);
v_breakCont_1964_ = lean_ctor_get(v_val_1963_, 0);
lean_inc_ref(v_breakCont_1964_);
lean_dec_ref_known(v_val_1963_, 2);
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 0, v_breakCont_1964_);
v___x_1966_ = v___x_1950_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v_breakCont_1964_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
return v___x_1966_;
}
}
else
{
lean_dec(v_val_1963_);
lean_del_object(v___x_1950_);
v___y_1953_ = v___y_1942_;
v___y_1954_ = v___y_1943_;
v___y_1955_ = v___y_1944_;
v___y_1956_ = v___y_1945_;
goto v___jp_1952_;
}
}
else
{
lean_del_object(v___x_1950_);
lean_dec(v_a_1948_);
v___y_1953_ = v___y_1942_;
v___y_1954_ = v___y_1943_;
v___y_1955_ = v___y_1944_;
v___y_1956_ = v___y_1945_;
goto v___jp_1952_;
}
v___jp_1952_:
{
lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1957_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0___closed__1, &l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0___closed__1_once, _init_l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0___closed__1);
v___x_1958_ = l_Lean_MessageData_ofName(v_l_1938_);
v___x_1959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1959_, 0, v___x_1957_);
lean_ctor_set(v___x_1959_, 1, v___x_1958_);
v___x_1960_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__3, &l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__3_once, _init_l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__3);
v___x_1961_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1959_);
lean_ctor_set(v___x_1961_, 1, v___x_1960_);
v___x_1962_ = l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___redArg(v___x_1961_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_);
return v___x_1962_;
}
}
}
else
{
lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1976_; 
lean_dec(v_l_1938_);
v_a_1969_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1976_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1971_ = v___x_1947_;
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_dec(v___x_1947_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1974_; 
if (v_isShared_1972_ == 0)
{
v___x_1974_ = v___x_1971_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_a_1969_);
v___x_1974_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
return v___x_1974_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0___boxed(lean_object* v_l_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_){
_start:
{
lean_object* v_res_1986_; 
v_res_1986_ = l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0(v_l_1977_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1981_);
lean_dec(v___y_1980_);
lean_dec_ref(v___y_1979_);
lean_dec_ref(v___y_1978_);
return v_res_1986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledBreakT(lean_object* v_baseMonadInfo_1987_, lean_object* v_l_1988_, lean_object* v_m_1989_){
_start:
{
lean_object* v_getCont_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; 
v_getCont_1990_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0___boxed), 9, 1);
lean_closure_set(v_getCont_1990_, 0, v_l_1988_);
v___x_1991_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_breakT___closed__2));
v___x_1992_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_breakT___closed__4));
v___x_1993_ = l_Lean_Elab_Do_ControlStack_optionT(v_baseMonadInfo_1987_, v___x_1991_, v___x_1992_, v_getCont_1990_, v_m_1989_);
return v___x_1993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledContinueT___lam__0(lean_object* v_l_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_){
_start:
{
lean_object* v___x_2003_; 
v___x_2003_ = l_Lean_Elab_Do_getLabeledTarget_x3f___redArg(v_l_1994_, v___y_1995_);
if (lean_obj_tag(v___x_2003_) == 0)
{
lean_object* v_a_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2024_; 
v_a_2004_ = lean_ctor_get(v___x_2003_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2006_ = v___x_2003_;
v_isShared_2007_ = v_isSharedCheck_2024_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_a_2004_);
lean_dec(v___x_2003_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2024_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v___y_2009_; lean_object* v___y_2010_; lean_object* v___y_2011_; lean_object* v___y_2012_; 
if (lean_obj_tag(v_a_2004_) == 1)
{
lean_object* v_val_2019_; 
v_val_2019_ = lean_ctor_get(v_a_2004_, 0);
lean_inc(v_val_2019_);
lean_dec_ref_known(v_a_2004_, 1);
if (lean_obj_tag(v_val_2019_) == 1)
{
lean_object* v_continueCont_2020_; lean_object* v___x_2022_; 
lean_dec(v_l_1994_);
v_continueCont_2020_ = lean_ctor_get(v_val_2019_, 1);
lean_inc_ref(v_continueCont_2020_);
lean_dec_ref_known(v_val_2019_, 2);
if (v_isShared_2007_ == 0)
{
lean_ctor_set(v___x_2006_, 0, v_continueCont_2020_);
v___x_2022_ = v___x_2006_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_continueCont_2020_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
else
{
lean_dec(v_val_2019_);
lean_del_object(v___x_2006_);
v___y_2009_ = v___y_1998_;
v___y_2010_ = v___y_1999_;
v___y_2011_ = v___y_2000_;
v___y_2012_ = v___y_2001_;
goto v___jp_2008_;
}
}
else
{
lean_del_object(v___x_2006_);
lean_dec(v_a_2004_);
v___y_2009_ = v___y_1998_;
v___y_2010_ = v___y_1999_;
v___y_2011_ = v___y_2000_;
v___y_2012_ = v___y_2001_;
goto v___jp_2008_;
}
v___jp_2008_:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; 
v___x_2013_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0___closed__1, &l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0___closed__1_once, _init_l_Lean_Elab_Do_ControlStack_labeledBreakT___lam__0___closed__1);
v___x_2014_ = l_Lean_MessageData_ofName(v_l_1994_);
v___x_2015_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2015_, 0, v___x_2013_);
lean_ctor_set(v___x_2015_, 1, v___x_2014_);
v___x_2016_ = lean_obj_once(&l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__3, &l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__3_once, _init_l_Lean_Elab_Do_ControlStack_labeledReturnT___lam__0___closed__3);
v___x_2017_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2017_, 0, v___x_2015_);
lean_ctor_set(v___x_2017_, 1, v___x_2016_);
v___x_2018_ = l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___redArg(v___x_2017_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_);
return v___x_2018_;
}
}
}
else
{
lean_object* v_a_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2032_; 
lean_dec(v_l_1994_);
v_a_2025_ = lean_ctor_get(v___x_2003_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2027_ = v___x_2003_;
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_a_2025_);
lean_dec(v___x_2003_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2030_; 
if (v_isShared_2028_ == 0)
{
v___x_2030_ = v___x_2027_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_a_2025_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
return v___x_2030_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledContinueT___lam__0___boxed(lean_object* v_l_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l_Lean_Elab_Do_ControlStack_labeledContinueT___lam__0(v_l_2033_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_);
lean_dec(v___y_2040_);
lean_dec_ref(v___y_2039_);
lean_dec(v___y_2038_);
lean_dec_ref(v___y_2037_);
lean_dec(v___y_2036_);
lean_dec_ref(v___y_2035_);
lean_dec_ref(v___y_2034_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_labeledContinueT(lean_object* v_baseMonadInfo_2043_, lean_object* v_l_2044_, lean_object* v_m_2045_){
_start:
{
lean_object* v_getCont_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; 
v_getCont_2046_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_labeledContinueT___lam__0___boxed), 9, 1);
lean_closure_set(v_getCont_2046_, 0, v_l_2044_);
v___x_2047_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_continueT___closed__2));
v___x_2048_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_continueT___closed__4));
v___x_2049_ = l_Lean_Elab_Do_ControlStack_optionT(v_baseMonadInfo_2043_, v___x_2047_, v___x_2048_, v_getCont_2046_, v_m_2045_);
return v___x_2049_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_mkInstMonad(lean_object* v_mi_2053_, lean_object* v_a_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_){
_start:
{
lean_object* v_m_2061_; lean_object* v_u_2062_; lean_object* v_v_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; 
v_m_2061_ = lean_ctor_get(v_mi_2053_, 0);
lean_inc_ref(v_m_2061_);
v_u_2062_ = lean_ctor_get(v_mi_2053_, 1);
lean_inc(v_u_2062_);
v_v_2063_ = lean_ctor_get(v_mi_2053_, 2);
lean_inc(v_v_2063_);
lean_dec_ref(v_mi_2053_);
v___x_2064_ = ((lean_object*)(l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_mkInstMonad___closed__1));
v___x_2065_ = lean_box(0);
v___x_2066_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2066_, 0, v_v_2063_);
lean_ctor_set(v___x_2066_, 1, v___x_2065_);
v___x_2067_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2067_, 0, v_u_2062_);
lean_ctor_set(v___x_2067_, 1, v___x_2066_);
v___x_2068_ = l_Lean_mkConst(v___x_2064_, v___x_2067_);
v___x_2069_ = l_Lean_Expr_app___override(v___x_2068_, v_m_2061_);
v___x_2070_ = lean_box(0);
v___x_2071_ = l_Lean_Elab_Term_mkInstMVar(v___x_2069_, v___x_2070_, v_a_2054_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_, v_a_2059_);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_mkInstMonad___boxed(lean_object* v_mi_2072_, lean_object* v_a_2073_, lean_object* v_a_2074_, lean_object* v_a_2075_, lean_object* v_a_2076_, lean_object* v_a_2077_, lean_object* v_a_2078_, lean_object* v_a_2079_){
_start:
{
lean_object* v_res_2080_; 
v_res_2080_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_mkInstMonad(v_mi_2072_, v_a_2073_, v_a_2074_, v_a_2075_, v_a_2076_, v_a_2077_, v_a_2078_);
lean_dec(v_a_2078_);
lean_dec_ref(v_a_2077_);
lean_dec(v_a_2076_);
lean_dec_ref(v_a_2075_);
lean_dec(v_a_2074_);
lean_dec_ref(v_a_2073_);
return v_res_2080_;
}
}
static lean_object* _init_l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__1(void){
_start:
{
lean_object* v___x_2082_; lean_object* v___x_2083_; 
v___x_2082_ = ((lean_object*)(l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__0));
v___x_2083_ = l_Lean_stringToMessageData(v___x_2082_);
return v___x_2083_;
}
}
static lean_object* _init_l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__3(void){
_start:
{
lean_object* v___x_2085_; lean_object* v___x_2086_; 
v___x_2085_ = ((lean_object*)(l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__2));
v___x_2086_ = l_Lean_stringToMessageData(v___x_2085_);
return v___x_2086_;
}
}
static lean_object* _init_l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__5(void){
_start:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; 
v___x_2088_ = ((lean_object*)(l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__4));
v___x_2089_ = l_Lean_stringToMessageData(v___x_2088_);
return v___x_2089_;
}
}
static lean_object* _init_l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__7(void){
_start:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; 
v___x_2091_ = ((lean_object*)(l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__6));
v___x_2092_ = l_Lean_stringToMessageData(v___x_2091_);
return v___x_2092_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg(lean_object* v_msg_2093_, lean_object* v_expected_2094_, lean_object* v_actual_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_){
_start:
{
lean_object* v___x_2101_; 
lean_inc_ref(v_actual_2095_);
lean_inc_ref(v_expected_2094_);
v___x_2101_ = l_Lean_Meta_isExprDefEq(v_expected_2094_, v_actual_2095_, v_a_2096_, v_a_2097_, v_a_2098_, v_a_2099_);
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_object* v_a_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2125_; 
v_a_2102_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2125_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2104_ = v___x_2101_;
v_isShared_2105_ = v_isSharedCheck_2125_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_a_2102_);
lean_dec(v___x_2101_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2125_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
uint8_t v___x_2106_; 
v___x_2106_ = lean_unbox(v_a_2102_);
lean_dec(v_a_2102_);
if (v___x_2106_ == 0)
{
lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; 
lean_del_object(v___x_2104_);
v___x_2107_ = lean_obj_once(&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__1, &l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__1_once, _init_l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__1);
v___x_2108_ = l_Lean_stringToMessageData(v_msg_2093_);
v___x_2109_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2107_);
lean_ctor_set(v___x_2109_, 1, v___x_2108_);
v___x_2110_ = lean_obj_once(&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__3, &l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__3_once, _init_l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__3);
v___x_2111_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2109_);
lean_ctor_set(v___x_2111_, 1, v___x_2110_);
v___x_2112_ = l_Lean_MessageData_ofExpr(v_expected_2094_);
v___x_2113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2111_);
lean_ctor_set(v___x_2113_, 1, v___x_2112_);
v___x_2114_ = lean_obj_once(&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__5, &l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__5_once, _init_l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__5);
v___x_2115_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2115_, 0, v___x_2113_);
lean_ctor_set(v___x_2115_, 1, v___x_2114_);
v___x_2116_ = l_Lean_MessageData_ofExpr(v_actual_2095_);
v___x_2117_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2115_);
lean_ctor_set(v___x_2117_, 1, v___x_2116_);
v___x_2118_ = lean_obj_once(&l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__7, &l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__7_once, _init_l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___closed__7);
v___x_2119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2117_);
lean_ctor_set(v___x_2119_, 1, v___x_2118_);
v___x_2120_ = l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___redArg(v___x_2119_, v_a_2096_, v_a_2097_, v_a_2098_, v_a_2099_);
return v___x_2120_;
}
else
{
lean_object* v___x_2121_; lean_object* v___x_2123_; 
lean_dec_ref(v_actual_2095_);
lean_dec_ref(v_expected_2094_);
lean_dec_ref(v_msg_2093_);
v___x_2121_ = lean_box(0);
if (v_isShared_2105_ == 0)
{
lean_ctor_set(v___x_2104_, 0, v___x_2121_);
v___x_2123_ = v___x_2104_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v___x_2121_);
v___x_2123_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
return v___x_2123_;
}
}
}
}
else
{
lean_object* v_a_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2133_; 
lean_dec_ref(v_actual_2095_);
lean_dec_ref(v_expected_2094_);
lean_dec_ref(v_msg_2093_);
v_a_2126_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2133_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2133_ == 0)
{
v___x_2128_ = v___x_2101_;
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_a_2126_);
lean_dec(v___x_2101_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v___x_2131_; 
if (v_isShared_2129_ == 0)
{
v___x_2131_ = v___x_2128_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v_a_2126_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
return v___x_2131_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg___boxed(lean_object* v_msg_2134_, lean_object* v_expected_2135_, lean_object* v_actual_2136_, lean_object* v_a_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_){
_start:
{
lean_object* v_res_2142_; 
v_res_2142_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg(v_msg_2134_, v_expected_2135_, v_actual_2136_, v_a_2137_, v_a_2138_, v_a_2139_, v_a_2140_);
lean_dec(v_a_2140_);
lean_dec_ref(v_a_2139_);
lean_dec(v_a_2138_);
lean_dec_ref(v_a_2137_);
return v_res_2142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq(lean_object* v_msg_2143_, lean_object* v_expected_2144_, lean_object* v_actual_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_, lean_object* v_a_2149_, lean_object* v_a_2150_, lean_object* v_a_2151_, lean_object* v_a_2152_){
_start:
{
lean_object* v___x_2154_; 
v___x_2154_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg(v_msg_2143_, v_expected_2144_, v_actual_2145_, v_a_2149_, v_a_2150_, v_a_2151_, v_a_2152_);
return v___x_2154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___boxed(lean_object* v_msg_2155_, lean_object* v_expected_2156_, lean_object* v_actual_2157_, lean_object* v_a_2158_, lean_object* v_a_2159_, lean_object* v_a_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_, lean_object* v_a_2165_){
_start:
{
lean_object* v_res_2166_; 
v_res_2166_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq(v_msg_2155_, v_expected_2156_, v_actual_2157_, v_a_2158_, v_a_2159_, v_a_2160_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_);
lean_dec(v_a_2164_);
lean_dec_ref(v_a_2163_);
lean_dec(v_a_2162_);
lean_dec_ref(v_a_2161_);
lean_dec(v_a_2160_);
lean_dec_ref(v_a_2159_);
lean_dec_ref(v_a_2158_);
return v_res_2166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_JumpLayer_mkOptionJump(lean_object* v_jp_2168_, lean_object* v_jumpFn_2169_, lean_object* v_a_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_, lean_object* v_a_2175_, lean_object* v_a_2176_){
_start:
{
lean_object* v_base_2178_; lean_object* v_stMAbove_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2233_; 
v_base_2178_ = lean_ctor_get(v_jp_2168_, 0);
v_stMAbove_2179_ = lean_ctor_get(v_jp_2168_, 1);
v_isSharedCheck_2233_ = !lean_is_exclusive(v_jp_2168_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2181_ = v_jp_2168_;
v_isShared_2182_ = v_isSharedCheck_2233_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_stMAbove_2179_);
lean_inc(v_base_2178_);
lean_dec(v_jp_2168_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2233_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v_m_2183_; lean_object* v_runInBase_2184_; lean_object* v___x_2185_; 
v_m_2183_ = lean_ctor_get(v_base_2178_, 1);
lean_inc_ref(v_m_2183_);
v_runInBase_2184_ = lean_ctor_get(v_base_2178_, 4);
lean_inc_ref(v_runInBase_2184_);
lean_dec_ref(v_base_2178_);
lean_inc(v_a_2176_);
lean_inc_ref(v_a_2175_);
lean_inc(v_a_2174_);
lean_inc_ref(v_a_2173_);
lean_inc(v_a_2172_);
lean_inc_ref(v_a_2171_);
lean_inc_ref(v_a_2170_);
v___x_2185_ = lean_apply_8(v_m_2183_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_, v_a_2176_, lean_box(0));
if (lean_obj_tag(v___x_2185_) == 0)
{
lean_object* v_monadInfo_2186_; lean_object* v_a_2187_; lean_object* v_doBlockResultType_2188_; lean_object* v_u_2189_; lean_object* v_v_2190_; lean_object* v_cachedPUnit_2191_; lean_object* v_cachedPUnitUnit_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; 
v_monadInfo_2186_ = lean_ctor_get(v_a_2170_, 0);
v_a_2187_ = lean_ctor_get(v___x_2185_, 0);
lean_inc_n(v_a_2187_, 2);
lean_dec_ref_known(v___x_2185_, 1);
v_doBlockResultType_2188_ = lean_ctor_get(v_a_2170_, 3);
v_u_2189_ = lean_ctor_get(v_monadInfo_2186_, 1);
v_v_2190_ = lean_ctor_get(v_monadInfo_2186_, 2);
v_cachedPUnit_2191_ = lean_ctor_get(v_monadInfo_2186_, 3);
v_cachedPUnitUnit_2192_ = lean_ctor_get(v_monadInfo_2186_, 4);
lean_inc_ref(v_cachedPUnitUnit_2192_);
lean_inc_ref(v_cachedPUnit_2191_);
lean_inc(v_v_2190_);
lean_inc(v_u_2189_);
v___x_2193_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2193_, 0, v_a_2187_);
lean_ctor_set(v___x_2193_, 1, v_u_2189_);
lean_ctor_set(v___x_2193_, 2, v_v_2190_);
lean_ctor_set(v___x_2193_, 3, v_cachedPUnit_2191_);
lean_ctor_set(v___x_2193_, 4, v_cachedPUnitUnit_2192_);
v___x_2194_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_mkInstMonad(v___x_2193_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_, v_a_2176_);
if (lean_obj_tag(v___x_2194_) == 0)
{
lean_object* v_a_2195_; lean_object* v___x_2196_; uint8_t v___x_2197_; lean_object* v___x_2198_; 
v_a_2195_ = lean_ctor_get(v___x_2194_, 0);
lean_inc(v_a_2195_);
lean_dec_ref_known(v___x_2194_, 1);
v___x_2196_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_unStM___closed__1));
v___x_2197_ = 0;
v___x_2198_ = l_Lean_Elab_Do_mkFreshResultType___redArg(v___x_2196_, v___x_2197_, v_a_2170_, v_a_2173_, v_a_2174_, v_a_2175_, v_a_2176_);
if (lean_obj_tag(v___x_2198_) == 0)
{
lean_object* v_a_2199_; lean_object* v___x_2200_; 
v_a_2199_ = lean_ctor_get(v___x_2198_, 0);
lean_inc(v_a_2199_);
lean_dec_ref_known(v___x_2198_, 1);
lean_inc(v_a_2176_);
lean_inc_ref(v_a_2175_);
lean_inc(v_a_2174_);
lean_inc_ref(v_a_2173_);
lean_inc(v_a_2172_);
lean_inc_ref(v_a_2171_);
lean_inc_ref(v_a_2170_);
v___x_2200_ = lean_apply_9(v_stMAbove_2179_, v_a_2199_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_, v_a_2176_, lean_box(0));
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v_a_2201_; lean_object* v___x_2202_; 
v_a_2201_ = lean_ctor_get(v___x_2200_, 0);
lean_inc(v_a_2201_);
lean_dec_ref_known(v___x_2200_, 1);
lean_inc_ref(v_doBlockResultType_2188_);
v___x_2202_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_2188_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_, v_a_2176_);
if (lean_obj_tag(v___x_2202_) == 0)
{
lean_object* v_a_2203_; lean_object* v___x_2204_; lean_object* v___x_2206_; 
v_a_2203_ = lean_ctor_get(v___x_2202_, 0);
lean_inc(v_a_2203_);
lean_dec_ref_known(v___x_2202_, 1);
v___x_2204_ = lean_box(0);
lean_inc(v_v_2190_);
if (v_isShared_2182_ == 0)
{
lean_ctor_set_tag(v___x_2181_, 1);
lean_ctor_set(v___x_2181_, 1, v___x_2204_);
lean_ctor_set(v___x_2181_, 0, v_v_2190_);
v___x_2206_ = v___x_2181_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v_v_2190_);
lean_ctor_set(v_reuseFailAlloc_2232_, 1, v___x_2204_);
v___x_2206_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
lean_inc(v_u_2189_);
v___x_2207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2207_, 0, v_u_2189_);
lean_ctor_set(v___x_2207_, 1, v___x_2206_);
v___x_2208_ = l_Lean_mkConst(v_jumpFn_2169_, v___x_2207_);
v___x_2209_ = l_Lean_mkApp3(v___x_2208_, v_a_2201_, v_a_2187_, v_a_2195_);
lean_inc(v_a_2176_);
lean_inc_ref(v_a_2175_);
lean_inc(v_a_2174_);
lean_inc_ref(v_a_2173_);
lean_inc(v_a_2172_);
lean_inc_ref(v_a_2171_);
lean_inc_ref(v_a_2170_);
v___x_2210_ = lean_apply_9(v_runInBase_2184_, v___x_2209_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_, v_a_2176_, lean_box(0));
if (lean_obj_tag(v___x_2210_) == 0)
{
lean_object* v_a_2211_; lean_object* v___x_2212_; 
v_a_2211_ = lean_ctor_get(v___x_2210_, 0);
lean_inc_n(v_a_2211_, 2);
lean_dec_ref_known(v___x_2210_, 1);
lean_inc(v_a_2176_);
lean_inc_ref(v_a_2175_);
lean_inc(v_a_2174_);
lean_inc_ref(v_a_2173_);
v___x_2212_ = lean_infer_type(v_a_2211_, v_a_2173_, v_a_2174_, v_a_2175_, v_a_2176_);
if (lean_obj_tag(v___x_2212_) == 0)
{
lean_object* v_a_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; 
v_a_2213_ = lean_ctor_get(v___x_2212_, 0);
lean_inc(v_a_2213_);
lean_dec_ref_known(v___x_2212_, 1);
v___x_2214_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_JumpLayer_mkOptionJump___closed__0));
v___x_2215_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg(v___x_2214_, v_a_2203_, v_a_2213_, v_a_2173_, v_a_2174_, v_a_2175_, v_a_2176_);
if (lean_obj_tag(v___x_2215_) == 0)
{
lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2222_; 
v_isSharedCheck_2222_ = !lean_is_exclusive(v___x_2215_);
if (v_isSharedCheck_2222_ == 0)
{
lean_object* v_unused_2223_; 
v_unused_2223_ = lean_ctor_get(v___x_2215_, 0);
lean_dec(v_unused_2223_);
v___x_2217_ = v___x_2215_;
v_isShared_2218_ = v_isSharedCheck_2222_;
goto v_resetjp_2216_;
}
else
{
lean_dec(v___x_2215_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2222_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2220_; 
if (v_isShared_2218_ == 0)
{
lean_ctor_set(v___x_2217_, 0, v_a_2211_);
v___x_2220_ = v___x_2217_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v_a_2211_);
v___x_2220_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
return v___x_2220_;
}
}
}
else
{
lean_object* v_a_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2231_; 
lean_dec(v_a_2211_);
v_a_2224_ = lean_ctor_get(v___x_2215_, 0);
v_isSharedCheck_2231_ = !lean_is_exclusive(v___x_2215_);
if (v_isSharedCheck_2231_ == 0)
{
v___x_2226_ = v___x_2215_;
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_a_2224_);
lean_dec(v___x_2215_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___x_2229_; 
if (v_isShared_2227_ == 0)
{
v___x_2229_ = v___x_2226_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v_a_2224_);
v___x_2229_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
return v___x_2229_;
}
}
}
}
else
{
lean_dec(v_a_2211_);
lean_dec(v_a_2203_);
return v___x_2212_;
}
}
else
{
lean_dec(v_a_2203_);
return v___x_2210_;
}
}
}
else
{
lean_dec(v_a_2201_);
lean_dec(v_a_2195_);
lean_dec(v_a_2187_);
lean_dec_ref(v_runInBase_2184_);
lean_del_object(v___x_2181_);
lean_dec(v_jumpFn_2169_);
return v___x_2202_;
}
}
else
{
lean_dec(v_a_2195_);
lean_dec(v_a_2187_);
lean_dec_ref(v_runInBase_2184_);
lean_del_object(v___x_2181_);
lean_dec(v_jumpFn_2169_);
return v___x_2200_;
}
}
else
{
lean_dec(v_a_2195_);
lean_dec(v_a_2187_);
lean_dec_ref(v_runInBase_2184_);
lean_del_object(v___x_2181_);
lean_dec_ref(v_stMAbove_2179_);
lean_dec(v_jumpFn_2169_);
return v___x_2198_;
}
}
else
{
lean_dec(v_a_2187_);
lean_dec_ref(v_runInBase_2184_);
lean_del_object(v___x_2181_);
lean_dec_ref(v_stMAbove_2179_);
lean_dec(v_jumpFn_2169_);
return v___x_2194_;
}
}
else
{
lean_dec_ref(v_runInBase_2184_);
lean_del_object(v___x_2181_);
lean_dec_ref(v_stMAbove_2179_);
lean_dec(v_jumpFn_2169_);
return v___x_2185_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_JumpLayer_mkOptionJump___boxed(lean_object* v_jp_2234_, lean_object* v_jumpFn_2235_, lean_object* v_a_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_){
_start:
{
lean_object* v_res_2244_; 
v_res_2244_ = l_Lean_Elab_Do_ControlStack_JumpLayer_mkOptionJump(v_jp_2234_, v_jumpFn_2235_, v_a_2236_, v_a_2237_, v_a_2238_, v_a_2239_, v_a_2240_, v_a_2241_, v_a_2242_);
lean_dec(v_a_2242_);
lean_dec_ref(v_a_2241_);
lean_dec(v_a_2240_);
lean_dec_ref(v_a_2239_);
lean_dec(v_a_2238_);
lean_dec_ref(v_a_2237_);
lean_dec_ref(v_a_2236_);
return v_res_2244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn(lean_object* v_jp_2253_, lean_object* v_r_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_){
_start:
{
lean_object* v_base_2263_; lean_object* v_stMAbove_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2321_; 
v_base_2263_ = lean_ctor_get(v_jp_2253_, 0);
v_stMAbove_2264_ = lean_ctor_get(v_jp_2253_, 1);
v_isSharedCheck_2321_ = !lean_is_exclusive(v_jp_2253_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2266_ = v_jp_2253_;
v_isShared_2267_ = v_isSharedCheck_2321_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_stMAbove_2264_);
lean_inc(v_base_2263_);
lean_dec(v_jp_2253_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2321_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v_m_2268_; lean_object* v_runInBase_2269_; lean_object* v___x_2270_; 
v_m_2268_ = lean_ctor_get(v_base_2263_, 1);
lean_inc_ref(v_m_2268_);
v_runInBase_2269_ = lean_ctor_get(v_base_2263_, 4);
lean_inc_ref(v_runInBase_2269_);
lean_dec_ref(v_base_2263_);
lean_inc(v_a_2261_);
lean_inc_ref(v_a_2260_);
lean_inc(v_a_2259_);
lean_inc_ref(v_a_2258_);
lean_inc(v_a_2257_);
lean_inc_ref(v_a_2256_);
lean_inc_ref(v_a_2255_);
v___x_2270_ = lean_apply_8(v_m_2268_, v_a_2255_, v_a_2256_, v_a_2257_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_, lean_box(0));
if (lean_obj_tag(v___x_2270_) == 0)
{
lean_object* v_monadInfo_2271_; lean_object* v_a_2272_; lean_object* v_doBlockResultType_2273_; lean_object* v_u_2274_; lean_object* v_v_2275_; lean_object* v_cachedPUnit_2276_; lean_object* v_cachedPUnitUnit_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
v_monadInfo_2271_ = lean_ctor_get(v_a_2255_, 0);
v_a_2272_ = lean_ctor_get(v___x_2270_, 0);
lean_inc_n(v_a_2272_, 2);
lean_dec_ref_known(v___x_2270_, 1);
v_doBlockResultType_2273_ = lean_ctor_get(v_a_2255_, 3);
v_u_2274_ = lean_ctor_get(v_monadInfo_2271_, 1);
v_v_2275_ = lean_ctor_get(v_monadInfo_2271_, 2);
v_cachedPUnit_2276_ = lean_ctor_get(v_monadInfo_2271_, 3);
v_cachedPUnitUnit_2277_ = lean_ctor_get(v_monadInfo_2271_, 4);
lean_inc_ref(v_cachedPUnitUnit_2277_);
lean_inc_ref(v_cachedPUnit_2276_);
lean_inc(v_v_2275_);
lean_inc(v_u_2274_);
v___x_2278_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2278_, 0, v_a_2272_);
lean_ctor_set(v___x_2278_, 1, v_u_2274_);
lean_ctor_set(v___x_2278_, 2, v_v_2275_);
lean_ctor_set(v___x_2278_, 3, v_cachedPUnit_2276_);
lean_ctor_set(v___x_2278_, 4, v_cachedPUnitUnit_2277_);
v___x_2279_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_mkInstMonad(v___x_2278_, v_a_2256_, v_a_2257_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_);
if (lean_obj_tag(v___x_2279_) == 0)
{
lean_object* v_a_2280_; lean_object* v___x_2281_; 
v_a_2280_ = lean_ctor_get(v___x_2279_, 0);
lean_inc(v_a_2280_);
lean_dec_ref_known(v___x_2279_, 1);
lean_inc(v_a_2261_);
lean_inc_ref(v_a_2260_);
lean_inc(v_a_2259_);
lean_inc_ref(v_a_2258_);
lean_inc_ref(v_r_2254_);
v___x_2281_ = lean_infer_type(v_r_2254_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_);
if (lean_obj_tag(v___x_2281_) == 0)
{
lean_object* v_a_2282_; lean_object* v___x_2283_; uint8_t v___x_2284_; lean_object* v___x_2285_; 
v_a_2282_ = lean_ctor_get(v___x_2281_, 0);
lean_inc(v_a_2282_);
lean_dec_ref_known(v___x_2281_, 1);
v___x_2283_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__1));
v___x_2284_ = 0;
v___x_2285_ = l_Lean_Elab_Do_mkFreshResultType___redArg(v___x_2283_, v___x_2284_, v_a_2255_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; lean_object* v___x_2287_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
lean_inc(v_a_2286_);
lean_dec_ref_known(v___x_2285_, 1);
lean_inc(v_a_2261_);
lean_inc_ref(v_a_2260_);
lean_inc(v_a_2259_);
lean_inc_ref(v_a_2258_);
lean_inc(v_a_2257_);
lean_inc_ref(v_a_2256_);
lean_inc_ref(v_a_2255_);
v___x_2287_ = lean_apply_9(v_stMAbove_2264_, v_a_2286_, v_a_2255_, v_a_2256_, v_a_2257_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_, lean_box(0));
if (lean_obj_tag(v___x_2287_) == 0)
{
lean_object* v_a_2288_; lean_object* v___x_2289_; 
v_a_2288_ = lean_ctor_get(v___x_2287_, 0);
lean_inc(v_a_2288_);
lean_dec_ref_known(v___x_2287_, 1);
lean_inc_ref(v_doBlockResultType_2273_);
v___x_2289_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_2273_, v_a_2255_, v_a_2256_, v_a_2257_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_);
if (lean_obj_tag(v___x_2289_) == 0)
{
lean_object* v_a_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2294_; 
v_a_2290_ = lean_ctor_get(v___x_2289_, 0);
lean_inc(v_a_2290_);
lean_dec_ref_known(v___x_2289_, 1);
v___x_2291_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__3));
v___x_2292_ = lean_box(0);
lean_inc(v_v_2275_);
if (v_isShared_2267_ == 0)
{
lean_ctor_set_tag(v___x_2266_, 1);
lean_ctor_set(v___x_2266_, 1, v___x_2292_);
lean_ctor_set(v___x_2266_, 0, v_v_2275_);
v___x_2294_ = v___x_2266_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v_v_2275_);
lean_ctor_set(v_reuseFailAlloc_2320_, 1, v___x_2292_);
v___x_2294_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
lean_inc(v_u_2274_);
v___x_2295_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2295_, 0, v_u_2274_);
lean_ctor_set(v___x_2295_, 1, v___x_2294_);
v___x_2296_ = l_Lean_mkConst(v___x_2291_, v___x_2295_);
v___x_2297_ = l_Lean_mkApp5(v___x_2296_, v_a_2282_, v_a_2272_, v_a_2288_, v_a_2280_, v_r_2254_);
lean_inc(v_a_2261_);
lean_inc_ref(v_a_2260_);
lean_inc(v_a_2259_);
lean_inc_ref(v_a_2258_);
lean_inc(v_a_2257_);
lean_inc_ref(v_a_2256_);
lean_inc_ref(v_a_2255_);
v___x_2298_ = lean_apply_9(v_runInBase_2269_, v___x_2297_, v_a_2255_, v_a_2256_, v_a_2257_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_, lean_box(0));
if (lean_obj_tag(v___x_2298_) == 0)
{
lean_object* v_a_2299_; lean_object* v___x_2300_; 
v_a_2299_ = lean_ctor_get(v___x_2298_, 0);
lean_inc_n(v_a_2299_, 2);
lean_dec_ref_known(v___x_2298_, 1);
lean_inc(v_a_2261_);
lean_inc_ref(v_a_2260_);
lean_inc(v_a_2259_);
lean_inc_ref(v_a_2258_);
v___x_2300_ = lean_infer_type(v_a_2299_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_);
if (lean_obj_tag(v___x_2300_) == 0)
{
lean_object* v_a_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v_a_2301_ = lean_ctor_get(v___x_2300_, 0);
lean_inc(v_a_2301_);
lean_dec_ref_known(v___x_2300_, 1);
v___x_2302_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___closed__4));
v___x_2303_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_synthUsingDefEq___redArg(v___x_2302_, v_a_2290_, v_a_2301_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_);
if (lean_obj_tag(v___x_2303_) == 0)
{
lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2310_; 
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2310_ == 0)
{
lean_object* v_unused_2311_; 
v_unused_2311_ = lean_ctor_get(v___x_2303_, 0);
lean_dec(v_unused_2311_);
v___x_2305_ = v___x_2303_;
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
else
{
lean_dec(v___x_2303_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2308_; 
if (v_isShared_2306_ == 0)
{
lean_ctor_set(v___x_2305_, 0, v_a_2299_);
v___x_2308_ = v___x_2305_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_a_2299_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
else
{
lean_object* v_a_2312_; lean_object* v___x_2314_; uint8_t v_isShared_2315_; uint8_t v_isSharedCheck_2319_; 
lean_dec(v_a_2299_);
v_a_2312_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2319_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2319_ == 0)
{
v___x_2314_ = v___x_2303_;
v_isShared_2315_ = v_isSharedCheck_2319_;
goto v_resetjp_2313_;
}
else
{
lean_inc(v_a_2312_);
lean_dec(v___x_2303_);
v___x_2314_ = lean_box(0);
v_isShared_2315_ = v_isSharedCheck_2319_;
goto v_resetjp_2313_;
}
v_resetjp_2313_:
{
lean_object* v___x_2317_; 
if (v_isShared_2315_ == 0)
{
v___x_2317_ = v___x_2314_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2318_; 
v_reuseFailAlloc_2318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2318_, 0, v_a_2312_);
v___x_2317_ = v_reuseFailAlloc_2318_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
return v___x_2317_;
}
}
}
}
else
{
lean_dec(v_a_2299_);
lean_dec(v_a_2290_);
return v___x_2300_;
}
}
else
{
lean_dec(v_a_2290_);
return v___x_2298_;
}
}
}
else
{
lean_dec(v_a_2288_);
lean_dec(v_a_2282_);
lean_dec(v_a_2280_);
lean_dec(v_a_2272_);
lean_dec_ref(v_runInBase_2269_);
lean_del_object(v___x_2266_);
lean_dec_ref(v_r_2254_);
return v___x_2289_;
}
}
else
{
lean_dec(v_a_2282_);
lean_dec(v_a_2280_);
lean_dec(v_a_2272_);
lean_dec_ref(v_runInBase_2269_);
lean_del_object(v___x_2266_);
lean_dec_ref(v_r_2254_);
return v___x_2287_;
}
}
else
{
lean_dec(v_a_2282_);
lean_dec(v_a_2280_);
lean_dec(v_a_2272_);
lean_dec_ref(v_runInBase_2269_);
lean_del_object(v___x_2266_);
lean_dec_ref(v_stMAbove_2264_);
lean_dec_ref(v_r_2254_);
return v___x_2285_;
}
}
else
{
lean_dec(v_a_2280_);
lean_dec(v_a_2272_);
lean_dec_ref(v_runInBase_2269_);
lean_del_object(v___x_2266_);
lean_dec_ref(v_stMAbove_2264_);
lean_dec_ref(v_r_2254_);
return v___x_2281_;
}
}
else
{
lean_dec(v_a_2272_);
lean_dec_ref(v_runInBase_2269_);
lean_del_object(v___x_2266_);
lean_dec_ref(v_stMAbove_2264_);
lean_dec_ref(v_r_2254_);
return v___x_2279_;
}
}
else
{
lean_dec_ref(v_runInBase_2269_);
lean_del_object(v___x_2266_);
lean_dec_ref(v_stMAbove_2264_);
lean_dec_ref(v_r_2254_);
return v___x_2270_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___boxed(lean_object* v_jp_2322_, lean_object* v_r_2323_, lean_object* v_a_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_, lean_object* v_a_2330_, lean_object* v_a_2331_){
_start:
{
lean_object* v_res_2332_; 
v_res_2332_ = l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn(v_jp_2322_, v_r_2323_, v_a_2324_, v_a_2325_, v_a_2326_, v_a_2327_, v_a_2328_, v_a_2329_, v_a_2330_);
lean_dec(v_a_2330_);
lean_dec_ref(v_a_2329_);
lean_dec(v_a_2328_);
lean_dec_ref(v_a_2327_);
lean_dec(v_a_2326_);
lean_dec_ref(v_a_2325_);
lean_dec_ref(v_a_2324_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_mkPure(lean_object* v_base_2347_, lean_object* v_resultName_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_, lean_object* v_a_2354_, lean_object* v_a_2355_){
_start:
{
lean_object* v_m_2357_; lean_object* v_runInBase_2358_; lean_object* v___x_2359_; 
v_m_2357_ = lean_ctor_get(v_base_2347_, 1);
lean_inc_ref(v_m_2357_);
v_runInBase_2358_ = lean_ctor_get(v_base_2347_, 4);
lean_inc_ref(v_runInBase_2358_);
lean_dec_ref(v_base_2347_);
lean_inc(v_a_2355_);
lean_inc_ref(v_a_2354_);
lean_inc(v_a_2353_);
lean_inc_ref(v_a_2352_);
lean_inc(v_a_2351_);
lean_inc_ref(v_a_2350_);
lean_inc_ref(v_a_2349_);
v___x_2359_ = lean_apply_8(v_m_2357_, v_a_2349_, v_a_2350_, v_a_2351_, v_a_2352_, v_a_2353_, v_a_2354_, v_a_2355_, lean_box(0));
if (lean_obj_tag(v___x_2359_) == 0)
{
lean_object* v_monadInfo_2360_; lean_object* v_a_2361_; lean_object* v_u_2362_; lean_object* v_v_2363_; lean_object* v_cachedPUnit_2364_; lean_object* v_cachedPUnitUnit_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; 
v_monadInfo_2360_ = lean_ctor_get(v_a_2349_, 0);
v_a_2361_ = lean_ctor_get(v___x_2359_, 0);
lean_inc_n(v_a_2361_, 2);
lean_dec_ref_known(v___x_2359_, 1);
v_u_2362_ = lean_ctor_get(v_monadInfo_2360_, 1);
v_v_2363_ = lean_ctor_get(v_monadInfo_2360_, 2);
v_cachedPUnit_2364_ = lean_ctor_get(v_monadInfo_2360_, 3);
v_cachedPUnitUnit_2365_ = lean_ctor_get(v_monadInfo_2360_, 4);
lean_inc_ref(v_cachedPUnitUnit_2365_);
lean_inc_ref(v_cachedPUnit_2364_);
lean_inc(v_v_2363_);
lean_inc(v_u_2362_);
v___x_2366_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2366_, 0, v_a_2361_);
lean_ctor_set(v___x_2366_, 1, v_u_2362_);
lean_ctor_set(v___x_2366_, 2, v_v_2363_);
lean_ctor_set(v___x_2366_, 3, v_cachedPUnit_2364_);
lean_ctor_set(v___x_2366_, 4, v_cachedPUnitUnit_2365_);
v___x_2367_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_mkInstMonad(v___x_2366_, v_a_2350_, v_a_2351_, v_a_2352_, v_a_2353_, v_a_2354_, v_a_2355_);
if (lean_obj_tag(v___x_2367_) == 0)
{
lean_object* v_a_2368_; lean_object* v___x_2369_; 
v_a_2368_ = lean_ctor_get(v___x_2367_, 0);
lean_inc(v_a_2368_);
lean_dec_ref_known(v___x_2367_, 1);
v___x_2369_ = l_Lean_Meta_getFVarFromUserName(v_resultName_2348_, v_a_2352_, v_a_2353_, v_a_2354_, v_a_2355_);
if (lean_obj_tag(v___x_2369_) == 0)
{
lean_object* v_a_2370_; lean_object* v___x_2371_; 
v_a_2370_ = lean_ctor_get(v___x_2369_, 0);
lean_inc_n(v_a_2370_, 2);
lean_dec_ref_known(v___x_2369_, 1);
lean_inc(v_a_2355_);
lean_inc_ref(v_a_2354_);
lean_inc(v_a_2353_);
lean_inc_ref(v_a_2352_);
v___x_2371_ = lean_infer_type(v_a_2370_, v_a_2352_, v_a_2353_, v_a_2354_, v_a_2355_);
if (lean_obj_tag(v___x_2371_) == 0)
{
lean_object* v_a_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; 
v_a_2372_ = lean_ctor_get(v___x_2371_, 0);
lean_inc(v_a_2372_);
lean_dec_ref_known(v___x_2371_, 1);
v___x_2373_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_mkPure___closed__2));
v___x_2374_ = lean_box(0);
lean_inc(v_v_2363_);
v___x_2375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2375_, 0, v_v_2363_);
lean_ctor_set(v___x_2375_, 1, v___x_2374_);
lean_inc(v_u_2362_);
v___x_2376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2376_, 0, v_u_2362_);
lean_ctor_set(v___x_2376_, 1, v___x_2375_);
lean_inc_ref_n(v___x_2376_, 2);
v___x_2377_ = l_Lean_mkConst(v___x_2373_, v___x_2376_);
v___x_2378_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_mkPure___closed__4));
v___x_2379_ = l_Lean_mkConst(v___x_2378_, v___x_2376_);
lean_inc_n(v_a_2361_, 2);
v___x_2380_ = l_Lean_mkAppB(v___x_2379_, v_a_2361_, v_a_2368_);
v___x_2381_ = l_Lean_mkAppB(v___x_2377_, v_a_2361_, v___x_2380_);
v___x_2382_ = ((lean_object*)(l_Lean_Elab_Do_ControlStack_mkPure___closed__7));
v___x_2383_ = l_Lean_mkConst(v___x_2382_, v___x_2376_);
v___x_2384_ = l_Lean_mkApp4(v___x_2383_, v_a_2361_, v___x_2381_, v_a_2372_, v_a_2370_);
lean_inc(v_a_2355_);
lean_inc_ref(v_a_2354_);
lean_inc(v_a_2353_);
lean_inc_ref(v_a_2352_);
lean_inc(v_a_2351_);
lean_inc_ref(v_a_2350_);
lean_inc_ref(v_a_2349_);
v___x_2385_ = lean_apply_9(v_runInBase_2358_, v___x_2384_, v_a_2349_, v_a_2350_, v_a_2351_, v_a_2352_, v_a_2353_, v_a_2354_, v_a_2355_, lean_box(0));
return v___x_2385_;
}
else
{
lean_dec(v_a_2370_);
lean_dec(v_a_2368_);
lean_dec(v_a_2361_);
lean_dec_ref(v_runInBase_2358_);
return v___x_2371_;
}
}
else
{
lean_dec(v_a_2368_);
lean_dec(v_a_2361_);
lean_dec_ref(v_runInBase_2358_);
return v___x_2369_;
}
}
else
{
lean_dec(v_a_2361_);
lean_dec_ref(v_runInBase_2358_);
lean_dec(v_resultName_2348_);
return v___x_2367_;
}
}
else
{
lean_dec_ref(v_runInBase_2358_);
lean_dec(v_resultName_2348_);
return v___x_2359_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlStack_mkPure___boxed(lean_object* v_base_2386_, lean_object* v_resultName_2387_, lean_object* v_a_2388_, lean_object* v_a_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_){
_start:
{
lean_object* v_res_2396_; 
v_res_2396_ = l_Lean_Elab_Do_ControlStack_mkPure(v_base_2386_, v_resultName_2387_, v_a_2388_, v_a_2389_, v_a_2390_, v_a_2391_, v_a_2392_, v_a_2393_, v_a_2394_);
lean_dec(v_a_2394_);
lean_dec_ref(v_a_2393_);
lean_dec(v_a_2392_);
lean_dec_ref(v_a_2391_);
lean_dec(v_a_2390_);
lean_dec_ref(v_a_2389_);
lean_dec_ref(v_a_2388_);
return v_res_2396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorIdx(lean_object* v_x_2397_){
_start:
{
switch(lean_obj_tag(v_x_2397_))
{
case 0:
{
lean_object* v___x_2398_; 
v___x_2398_ = lean_unsigned_to_nat(0u);
return v___x_2398_;
}
case 1:
{
lean_object* v___x_2399_; 
v___x_2399_ = lean_unsigned_to_nat(1u);
return v___x_2399_;
}
default: 
{
lean_object* v___x_2400_; 
v___x_2400_ = lean_unsigned_to_nat(2u);
return v___x_2400_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorIdx___boxed(lean_object* v_x_2401_){
_start:
{
lean_object* v_res_2402_; 
v_res_2402_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorIdx(v_x_2401_);
lean_dec_ref(v_x_2401_);
return v_res_2402_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorElim___redArg(lean_object* v_t_2403_, lean_object* v_k_2404_){
_start:
{
if (lean_obj_tag(v_t_2403_) == 0)
{
lean_object* v_l_2405_; lean_object* v_resultType_2406_; lean_object* v___x_2407_; 
v_l_2405_ = lean_ctor_get(v_t_2403_, 0);
lean_inc(v_l_2405_);
v_resultType_2406_ = lean_ctor_get(v_t_2403_, 1);
lean_inc_ref(v_resultType_2406_);
lean_dec_ref_known(v_t_2403_, 2);
v___x_2407_ = lean_apply_2(v_k_2404_, v_l_2405_, v_resultType_2406_);
return v___x_2407_;
}
else
{
lean_object* v_l_2408_; lean_object* v___x_2409_; 
v_l_2408_ = lean_ctor_get(v_t_2403_, 0);
lean_inc(v_l_2408_);
lean_dec_ref(v_t_2403_);
v___x_2409_ = lean_apply_1(v_k_2404_, v_l_2408_);
return v___x_2409_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorElim(lean_object* v_motive_2410_, lean_object* v_ctorIdx_2411_, lean_object* v_t_2412_, lean_object* v_h_2413_, lean_object* v_k_2414_){
_start:
{
lean_object* v___x_2415_; 
v___x_2415_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorElim___redArg(v_t_2412_, v_k_2414_);
return v___x_2415_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorElim___boxed(lean_object* v_motive_2416_, lean_object* v_ctorIdx_2417_, lean_object* v_t_2418_, lean_object* v_h_2419_, lean_object* v_k_2420_){
_start:
{
lean_object* v_res_2421_; 
v_res_2421_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorElim(v_motive_2416_, v_ctorIdx_2417_, v_t_2418_, v_h_2419_, v_k_2420_);
lean_dec(v_ctorIdx_2417_);
return v_res_2421_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ret_elim___redArg(lean_object* v_t_2422_, lean_object* v_ret_2423_){
_start:
{
lean_object* v___x_2424_; 
v___x_2424_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorElim___redArg(v_t_2422_, v_ret_2423_);
return v___x_2424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ret_elim(lean_object* v_motive_2425_, lean_object* v_t_2426_, lean_object* v_h_2427_, lean_object* v_ret_2428_){
_start:
{
lean_object* v___x_2429_; 
v___x_2429_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorElim___redArg(v_t_2426_, v_ret_2428_);
return v___x_2429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_brk_elim___redArg(lean_object* v_t_2430_, lean_object* v_brk_2431_){
_start:
{
lean_object* v___x_2432_; 
v___x_2432_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorElim___redArg(v_t_2430_, v_brk_2431_);
return v___x_2432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_brk_elim(lean_object* v_motive_2433_, lean_object* v_t_2434_, lean_object* v_h_2435_, lean_object* v_brk_2436_){
_start:
{
lean_object* v___x_2437_; 
v___x_2437_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorElim___redArg(v_t_2434_, v_brk_2436_);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_cont_elim___redArg(lean_object* v_t_2438_, lean_object* v_cont_2439_){
_start:
{
lean_object* v___x_2440_; 
v___x_2440_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorElim___redArg(v_t_2438_, v_cont_2439_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_cont_elim(lean_object* v_motive_2441_, lean_object* v_t_2442_, lean_object* v_h_2443_, lean_object* v_cont_2444_){
_start:
{
lean_object* v___x_2445_; 
v___x_2445_ = l___private_Lean_Elab_Do_Control_0__Lean_Elab_Do_LiftedJump_ctorElim___redArg(v_t_2442_, v_cont_2444_);
return v___x_2445_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__6___redArg(lean_object* v___x_2446_, lean_object* v_as_x27_2447_, lean_object* v_b_2448_, lean_object* v___y_2449_){
_start:
{
if (lean_obj_tag(v_as_x27_2447_) == 0)
{
lean_object* v___x_2451_; 
lean_dec_ref(v___x_2446_);
v___x_2451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2451_, 0, v_b_2448_);
return v___x_2451_;
}
else
{
lean_object* v_head_2452_; lean_object* v_snd_2453_; lean_object* v_tail_2454_; lean_object* v_fst_2455_; lean_object* v_fst_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2516_; 
v_head_2452_ = lean_ctor_get(v_as_x27_2447_, 0);
v_snd_2453_ = lean_ctor_get(v_b_2448_, 1);
lean_inc(v_snd_2453_);
v_tail_2454_ = lean_ctor_get(v_as_x27_2447_, 1);
v_fst_2455_ = lean_ctor_get(v_head_2452_, 0);
v_fst_2456_ = lean_ctor_get(v_b_2448_, 0);
v_isSharedCheck_2516_ = !lean_is_exclusive(v_b_2448_);
if (v_isSharedCheck_2516_ == 0)
{
lean_object* v_unused_2517_; 
v_unused_2517_ = lean_ctor_get(v_b_2448_, 1);
lean_dec(v_unused_2517_);
v___x_2458_ = v_b_2448_;
v_isShared_2459_ = v_isSharedCheck_2516_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_fst_2456_);
lean_dec(v_b_2448_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2516_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
lean_object* v_fst_2460_; lean_object* v_snd_2461_; lean_object* v___x_2463_; uint8_t v_isShared_2464_; uint8_t v_isSharedCheck_2515_; 
v_fst_2460_ = lean_ctor_get(v_snd_2453_, 0);
v_snd_2461_ = lean_ctor_get(v_snd_2453_, 1);
v_isSharedCheck_2515_ = !lean_is_exclusive(v_snd_2453_);
if (v_isSharedCheck_2515_ == 0)
{
v___x_2463_ = v_snd_2453_;
v_isShared_2464_ = v_isSharedCheck_2515_;
goto v_resetjp_2462_;
}
else
{
lean_inc(v_snd_2461_);
lean_inc(v_fst_2460_);
lean_dec(v_snd_2453_);
v___x_2463_ = lean_box(0);
v_isShared_2464_ = v_isSharedCheck_2515_;
goto v_resetjp_2462_;
}
v_resetjp_2462_:
{
lean_object* v___x_2465_; uint8_t v___x_2466_; 
v___x_2465_ = lean_box(0);
v___x_2466_ = lean_name_eq(v_fst_2455_, v___x_2465_);
if (v___x_2466_ == 0)
{
lean_object* v___x_2467_; 
v___x_2467_ = l_Lean_Elab_Do_getLabeledTarget_x3f___redArg(v_fst_2455_, v___y_2449_);
if (lean_obj_tag(v___x_2467_) == 0)
{
lean_object* v_a_2468_; 
v_a_2468_ = lean_ctor_get(v___x_2467_, 0);
lean_inc(v_a_2468_);
lean_dec_ref_known(v___x_2467_, 1);
if (lean_obj_tag(v_a_2468_) == 1)
{
lean_object* v_val_2477_; 
v_val_2477_ = lean_ctor_get(v_a_2468_, 0);
lean_inc(v_val_2477_);
lean_dec_ref_known(v_a_2468_, 1);
if (lean_obj_tag(v_val_2477_) == 0)
{
lean_object* v_returnCont_2478_; lean_object* v_resultType_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2498_; 
lean_del_object(v___x_2463_);
lean_del_object(v___x_2458_);
v_returnCont_2478_ = lean_ctor_get(v_val_2477_, 0);
lean_inc_ref(v_returnCont_2478_);
lean_dec_ref_known(v_val_2477_, 1);
v_resultType_2479_ = lean_ctor_get(v_returnCont_2478_, 0);
v_isSharedCheck_2498_ = !lean_is_exclusive(v_returnCont_2478_);
if (v_isSharedCheck_2498_ == 0)
{
lean_object* v_unused_2499_; 
v_unused_2499_ = lean_ctor_get(v_returnCont_2478_, 1);
lean_dec(v_unused_2499_);
v___x_2481_ = v_returnCont_2478_;
v_isShared_2482_ = v_isSharedCheck_2498_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_resultType_2479_);
lean_dec(v_returnCont_2478_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2498_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2484_; 
lean_inc_ref(v_resultType_2479_);
lean_inc(v_fst_2455_);
if (v_isShared_2482_ == 0)
{
lean_ctor_set(v___x_2481_, 1, v_resultType_2479_);
lean_ctor_set(v___x_2481_, 0, v_fst_2455_);
v___x_2484_ = v___x_2481_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_fst_2455_);
lean_ctor_set(v_reuseFailAlloc_2497_, 1, v_resultType_2479_);
v___x_2484_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v_localStM_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
v___x_2485_ = lean_array_get_size(v_snd_2461_);
v___x_2486_ = lean_unsigned_to_nat(1u);
v___x_2487_ = lean_nat_add(v___x_2485_, v___x_2486_);
lean_inc(v_fst_2460_);
v___x_2488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2488_, 0, v_fst_2460_);
lean_ctor_set(v___x_2488_, 1, v___x_2487_);
lean_inc(v_fst_2455_);
lean_inc_ref(v___x_2446_);
v___x_2489_ = l_Lean_Elab_Do_ControlStack_labeledReturnT(v___x_2446_, v_fst_2455_, v_resultType_2479_, v_fst_2460_);
v_localStM_2490_ = lean_ctor_get(v___x_2489_, 3);
lean_inc_ref(v_localStM_2490_);
v___x_2491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2491_, 0, v___x_2484_);
lean_ctor_set(v___x_2491_, 1, v___x_2488_);
v___x_2492_ = lean_array_push(v_fst_2456_, v___x_2491_);
v___x_2493_ = lean_array_push(v_snd_2461_, v_localStM_2490_);
v___x_2494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2494_, 0, v___x_2489_);
lean_ctor_set(v___x_2494_, 1, v___x_2493_);
v___x_2495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2495_, 0, v___x_2492_);
lean_ctor_set(v___x_2495_, 1, v___x_2494_);
v_as_x27_2447_ = v_tail_2454_;
v_b_2448_ = v___x_2495_;
goto _start;
}
}
}
else
{
lean_dec(v_val_2477_);
goto v___jp_2469_;
}
}
else
{
lean_dec(v_a_2468_);
goto v___jp_2469_;
}
v___jp_2469_:
{
lean_object* v___x_2471_; 
if (v_isShared_2464_ == 0)
{
v___x_2471_ = v___x_2463_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_fst_2460_);
lean_ctor_set(v_reuseFailAlloc_2476_, 1, v_snd_2461_);
v___x_2471_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
lean_object* v___x_2473_; 
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 1, v___x_2471_);
v___x_2473_ = v___x_2458_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v_fst_2456_);
lean_ctor_set(v_reuseFailAlloc_2475_, 1, v___x_2471_);
v___x_2473_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
v_as_x27_2447_ = v_tail_2454_;
v_b_2448_ = v___x_2473_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2507_; 
lean_del_object(v___x_2463_);
lean_dec(v_snd_2461_);
lean_dec(v_fst_2460_);
lean_del_object(v___x_2458_);
lean_dec(v_fst_2456_);
lean_dec_ref(v___x_2446_);
v_a_2500_ = lean_ctor_get(v___x_2467_, 0);
v_isSharedCheck_2507_ = !lean_is_exclusive(v___x_2467_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2502_ = v___x_2467_;
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_a_2500_);
lean_dec(v___x_2467_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
lean_object* v___x_2505_; 
if (v_isShared_2503_ == 0)
{
v___x_2505_ = v___x_2502_;
goto v_reusejp_2504_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v_a_2500_);
v___x_2505_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2504_;
}
v_reusejp_2504_:
{
return v___x_2505_;
}
}
}
}
else
{
lean_object* v___x_2509_; 
if (v_isShared_2464_ == 0)
{
v___x_2509_ = v___x_2463_;
goto v_reusejp_2508_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v_fst_2460_);
lean_ctor_set(v_reuseFailAlloc_2514_, 1, v_snd_2461_);
v___x_2509_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2508_;
}
v_reusejp_2508_:
{
lean_object* v___x_2511_; 
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 1, v___x_2509_);
v___x_2511_ = v___x_2458_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v_fst_2456_);
lean_ctor_set(v_reuseFailAlloc_2513_, 1, v___x_2509_);
v___x_2511_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
v_as_x27_2447_ = v_tail_2454_;
v_b_2448_ = v___x_2511_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__6___redArg___boxed(lean_object* v___x_2518_, lean_object* v_as_x27_2519_, lean_object* v_b_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_){
_start:
{
lean_object* v_res_2523_; 
v_res_2523_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__6___redArg(v___x_2518_, v_as_x27_2519_, v_b_2520_, v___y_2521_);
lean_dec_ref(v___y_2521_);
lean_dec(v_as_x27_2519_);
return v_res_2523_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__3___redArg(lean_object* v_as_x27_2524_, lean_object* v_b_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_){
_start:
{
if (lean_obj_tag(v_as_x27_2524_) == 0)
{
lean_object* v___x_2534_; 
v___x_2534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2534_, 0, v_b_2525_);
return v___x_2534_;
}
else
{
lean_object* v_head_2535_; lean_object* v_tail_2536_; lean_object* v___x_2537_; 
v_head_2535_ = lean_ctor_get(v_as_x27_2524_, 0);
v_tail_2536_ = lean_ctor_get(v_as_x27_2524_, 1);
lean_inc(v_head_2535_);
lean_inc(v___y_2532_);
lean_inc_ref(v___y_2531_);
lean_inc(v___y_2530_);
lean_inc_ref(v___y_2529_);
lean_inc(v___y_2528_);
lean_inc_ref(v___y_2527_);
lean_inc_ref(v___y_2526_);
v___x_2537_ = lean_apply_9(v_head_2535_, v_b_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, lean_box(0));
if (lean_obj_tag(v___x_2537_) == 0)
{
lean_object* v_a_2538_; 
v_a_2538_ = lean_ctor_get(v___x_2537_, 0);
lean_inc(v_a_2538_);
lean_dec_ref_known(v___x_2537_, 1);
v_as_x27_2524_ = v_tail_2536_;
v_b_2525_ = v_a_2538_;
goto _start;
}
else
{
return v___x_2537_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__3___redArg___boxed(lean_object* v_as_x27_2540_, lean_object* v_b_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_){
_start:
{
lean_object* v_res_2550_; 
v_res_2550_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__3___redArg(v_as_x27_2540_, v_b_2541_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_);
lean_dec(v___y_2548_);
lean_dec_ref(v___y_2547_);
lean_dec(v___y_2546_);
lean_dec_ref(v___y_2545_);
lean_dec(v___y_2544_);
lean_dec_ref(v___y_2543_);
lean_dec_ref(v___y_2542_);
lean_dec(v_as_x27_2540_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4___redArg___lam__0(lean_object* v___x_2551_, lean_object* v_snd_2552_, lean_object* v_00_u03b1_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_){
_start:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; 
v___x_2562_ = lean_array_to_list(v___x_2551_);
v___x_2563_ = l_List_drop___redArg(v_snd_2552_, v___x_2562_);
lean_dec(v___x_2562_);
v___x_2564_ = l_List_reverse___redArg(v___x_2563_);
v___x_2565_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__3___redArg(v___x_2564_, v_00_u03b1_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_);
lean_dec(v___x_2564_);
return v___x_2565_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4___redArg___lam__0___boxed(lean_object* v___x_2566_, lean_object* v_snd_2567_, lean_object* v_00_u03b1_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4___redArg___lam__0(v___x_2566_, v_snd_2567_, v_00_u03b1_2568_, v___y_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_);
lean_dec(v___y_2575_);
lean_dec_ref(v___y_2574_);
lean_dec(v___y_2573_);
lean_dec_ref(v___y_2572_);
lean_dec(v___y_2571_);
lean_dec_ref(v___y_2570_);
lean_dec_ref(v___y_2569_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4___redArg(lean_object* v___x_2578_, lean_object* v_as_2579_, size_t v_sz_2580_, size_t v_i_2581_, lean_object* v_b_2582_){
_start:
{
lean_object* v_a_2585_; uint8_t v___x_2589_; 
v___x_2589_ = lean_usize_dec_lt(v_i_2581_, v_sz_2580_);
if (v___x_2589_ == 0)
{
lean_object* v___x_2590_; 
lean_dec_ref(v___x_2578_);
v___x_2590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2590_, 0, v_b_2582_);
return v___x_2590_;
}
else
{
lean_object* v_a_2591_; lean_object* v_snd_2592_; lean_object* v_snd_2593_; lean_object* v_snd_2594_; lean_object* v_snd_2595_; lean_object* v_snd_2596_; lean_object* v_fst_2597_; lean_object* v___x_2599_; uint8_t v_isShared_2600_; uint8_t v_isSharedCheck_2775_; 
v_a_2591_ = lean_array_uget(v_as_2579_, v_i_2581_);
v_snd_2592_ = lean_ctor_get(v_a_2591_, 1);
lean_inc(v_snd_2592_);
v_snd_2593_ = lean_ctor_get(v_b_2582_, 1);
lean_inc(v_snd_2593_);
v_snd_2594_ = lean_ctor_get(v_snd_2593_, 1);
lean_inc(v_snd_2594_);
v_snd_2595_ = lean_ctor_get(v_snd_2594_, 1);
lean_inc(v_snd_2595_);
v_snd_2596_ = lean_ctor_get(v_snd_2595_, 1);
lean_inc(v_snd_2596_);
v_fst_2597_ = lean_ctor_get(v_a_2591_, 0);
v_isSharedCheck_2775_ = !lean_is_exclusive(v_a_2591_);
if (v_isSharedCheck_2775_ == 0)
{
lean_object* v_unused_2776_; 
v_unused_2776_ = lean_ctor_get(v_a_2591_, 1);
lean_dec(v_unused_2776_);
v___x_2599_ = v_a_2591_;
v_isShared_2600_ = v_isSharedCheck_2775_;
goto v_resetjp_2598_;
}
else
{
lean_inc(v_fst_2597_);
lean_dec(v_a_2591_);
v___x_2599_ = lean_box(0);
v_isShared_2600_ = v_isSharedCheck_2775_;
goto v_resetjp_2598_;
}
v_resetjp_2598_:
{
lean_object* v_fst_2601_; lean_object* v_snd_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2774_; 
v_fst_2601_ = lean_ctor_get(v_snd_2592_, 0);
v_snd_2602_ = lean_ctor_get(v_snd_2592_, 1);
v_isSharedCheck_2774_ = !lean_is_exclusive(v_snd_2592_);
if (v_isSharedCheck_2774_ == 0)
{
v___x_2604_ = v_snd_2592_;
v_isShared_2605_ = v_isSharedCheck_2774_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_snd_2602_);
lean_inc(v_fst_2601_);
lean_dec(v_snd_2592_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2774_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
lean_object* v_fst_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2772_; 
v_fst_2606_ = lean_ctor_get(v_b_2582_, 0);
v_isSharedCheck_2772_ = !lean_is_exclusive(v_b_2582_);
if (v_isSharedCheck_2772_ == 0)
{
lean_object* v_unused_2773_; 
v_unused_2773_ = lean_ctor_get(v_b_2582_, 1);
lean_dec(v_unused_2773_);
v___x_2608_ = v_b_2582_;
v_isShared_2609_ = v_isSharedCheck_2772_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_fst_2606_);
lean_dec(v_b_2582_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2772_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v_fst_2610_; lean_object* v___x_2612_; uint8_t v_isShared_2613_; uint8_t v_isSharedCheck_2770_; 
v_fst_2610_ = lean_ctor_get(v_snd_2593_, 0);
v_isSharedCheck_2770_ = !lean_is_exclusive(v_snd_2593_);
if (v_isSharedCheck_2770_ == 0)
{
lean_object* v_unused_2771_; 
v_unused_2771_ = lean_ctor_get(v_snd_2593_, 1);
lean_dec(v_unused_2771_);
v___x_2612_ = v_snd_2593_;
v_isShared_2613_ = v_isSharedCheck_2770_;
goto v_resetjp_2611_;
}
else
{
lean_inc(v_fst_2610_);
lean_dec(v_snd_2593_);
v___x_2612_ = lean_box(0);
v_isShared_2613_ = v_isSharedCheck_2770_;
goto v_resetjp_2611_;
}
v_resetjp_2611_:
{
lean_object* v_fst_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2768_; 
v_fst_2614_ = lean_ctor_get(v_snd_2594_, 0);
v_isSharedCheck_2768_ = !lean_is_exclusive(v_snd_2594_);
if (v_isSharedCheck_2768_ == 0)
{
lean_object* v_unused_2769_; 
v_unused_2769_ = lean_ctor_get(v_snd_2594_, 1);
lean_dec(v_unused_2769_);
v___x_2616_ = v_snd_2594_;
v_isShared_2617_ = v_isSharedCheck_2768_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_fst_2614_);
lean_dec(v_snd_2594_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2768_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
lean_object* v_fst_2618_; lean_object* v___x_2620_; uint8_t v_isShared_2621_; uint8_t v_isSharedCheck_2766_; 
v_fst_2618_ = lean_ctor_get(v_snd_2595_, 0);
v_isSharedCheck_2766_ = !lean_is_exclusive(v_snd_2595_);
if (v_isSharedCheck_2766_ == 0)
{
lean_object* v_unused_2767_; 
v_unused_2767_ = lean_ctor_get(v_snd_2595_, 1);
lean_dec(v_unused_2767_);
v___x_2620_ = v_snd_2595_;
v_isShared_2621_ = v_isSharedCheck_2766_;
goto v_resetjp_2619_;
}
else
{
lean_inc(v_fst_2618_);
lean_dec(v_snd_2595_);
v___x_2620_ = lean_box(0);
v_isShared_2621_ = v_isSharedCheck_2766_;
goto v_resetjp_2619_;
}
v_resetjp_2619_:
{
lean_object* v_fst_2622_; lean_object* v_snd_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2765_; 
v_fst_2622_ = lean_ctor_get(v_snd_2596_, 0);
v_snd_2623_ = lean_ctor_get(v_snd_2596_, 1);
v_isSharedCheck_2765_ = !lean_is_exclusive(v_snd_2596_);
if (v_isSharedCheck_2765_ == 0)
{
v___x_2625_ = v_snd_2596_;
v_isShared_2626_ = v_isSharedCheck_2765_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_snd_2623_);
lean_inc(v_fst_2622_);
lean_dec(v_snd_2596_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2765_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v___f_2627_; lean_object* v___x_2628_; 
lean_inc_ref(v___x_2578_);
v___f_2627_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4___redArg___lam__0___boxed), 11, 2);
lean_closure_set(v___f_2627_, 0, v___x_2578_);
lean_closure_set(v___f_2627_, 1, v_snd_2602_);
v___x_2628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2628_, 0, v_fst_2601_);
lean_ctor_set(v___x_2628_, 1, v___f_2627_);
switch(lean_obj_tag(v_fst_2597_))
{
case 0:
{
lean_object* v_l_2629_; lean_object* v_resultType_2630_; lean_object* v___x_2632_; uint8_t v_isShared_2633_; uint8_t v_isSharedCheck_2676_; 
v_l_2629_ = lean_ctor_get(v_fst_2597_, 0);
v_resultType_2630_ = lean_ctor_get(v_fst_2597_, 1);
v_isSharedCheck_2676_ = !lean_is_exclusive(v_fst_2597_);
if (v_isSharedCheck_2676_ == 0)
{
v___x_2632_ = v_fst_2597_;
v_isShared_2633_ = v_isSharedCheck_2676_;
goto v_resetjp_2631_;
}
else
{
lean_inc(v_resultType_2630_);
lean_inc(v_l_2629_);
lean_dec(v_fst_2597_);
v___x_2632_ = lean_box(0);
v_isShared_2633_ = v_isSharedCheck_2676_;
goto v_resetjp_2631_;
}
v_resetjp_2631_:
{
lean_object* v___x_2634_; uint8_t v___x_2635_; 
v___x_2634_ = lean_box(0);
v___x_2635_ = lean_name_eq(v_l_2629_, v___x_2634_);
if (v___x_2635_ == 0)
{
lean_object* v___x_2637_; 
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 1, v___x_2628_);
lean_ctor_set(v___x_2625_, 0, v_resultType_2630_);
v___x_2637_ = v___x_2625_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v_resultType_2630_);
lean_ctor_set(v_reuseFailAlloc_2659_, 1, v___x_2628_);
v___x_2637_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
lean_object* v___x_2639_; 
if (v_isShared_2621_ == 0)
{
lean_ctor_set(v___x_2620_, 1, v___x_2637_);
lean_ctor_set(v___x_2620_, 0, v_l_2629_);
v___x_2639_ = v___x_2620_;
goto v_reusejp_2638_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v_l_2629_);
lean_ctor_set(v_reuseFailAlloc_2658_, 1, v___x_2637_);
v___x_2639_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2638_;
}
v_reusejp_2638_:
{
lean_object* v___x_2641_; 
if (v_isShared_2633_ == 0)
{
lean_ctor_set_tag(v___x_2632_, 1);
lean_ctor_set(v___x_2632_, 1, v_fst_2618_);
lean_ctor_set(v___x_2632_, 0, v___x_2639_);
v___x_2641_ = v___x_2632_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v___x_2639_);
lean_ctor_set(v_reuseFailAlloc_2657_, 1, v_fst_2618_);
v___x_2641_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
lean_object* v___x_2643_; 
if (v_isShared_2617_ == 0)
{
lean_ctor_set(v___x_2616_, 1, v_snd_2623_);
lean_ctor_set(v___x_2616_, 0, v_fst_2622_);
v___x_2643_ = v___x_2616_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v_fst_2622_);
lean_ctor_set(v_reuseFailAlloc_2656_, 1, v_snd_2623_);
v___x_2643_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
lean_object* v___x_2645_; 
if (v_isShared_2613_ == 0)
{
lean_ctor_set(v___x_2612_, 1, v___x_2643_);
lean_ctor_set(v___x_2612_, 0, v___x_2641_);
v___x_2645_ = v___x_2612_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2655_; 
v_reuseFailAlloc_2655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2655_, 0, v___x_2641_);
lean_ctor_set(v_reuseFailAlloc_2655_, 1, v___x_2643_);
v___x_2645_ = v_reuseFailAlloc_2655_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
lean_object* v___x_2647_; 
if (v_isShared_2609_ == 0)
{
lean_ctor_set(v___x_2608_, 1, v___x_2645_);
lean_ctor_set(v___x_2608_, 0, v_fst_2614_);
v___x_2647_ = v___x_2608_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v_fst_2614_);
lean_ctor_set(v_reuseFailAlloc_2654_, 1, v___x_2645_);
v___x_2647_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
lean_object* v___x_2649_; 
if (v_isShared_2605_ == 0)
{
lean_ctor_set(v___x_2604_, 1, v___x_2647_);
lean_ctor_set(v___x_2604_, 0, v_fst_2610_);
v___x_2649_ = v___x_2604_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v_fst_2610_);
lean_ctor_set(v_reuseFailAlloc_2653_, 1, v___x_2647_);
v___x_2649_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
lean_object* v___x_2651_; 
if (v_isShared_2600_ == 0)
{
lean_ctor_set(v___x_2599_, 1, v___x_2649_);
lean_ctor_set(v___x_2599_, 0, v_fst_2606_);
v___x_2651_ = v___x_2599_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v_fst_2606_);
lean_ctor_set(v_reuseFailAlloc_2652_, 1, v___x_2649_);
v___x_2651_ = v_reuseFailAlloc_2652_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
v_a_2585_ = v___x_2651_;
goto v___jp_2584_;
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
lean_object* v___x_2660_; lean_object* v___x_2662_; 
lean_del_object(v___x_2632_);
lean_dec_ref(v_resultType_2630_);
lean_dec(v_l_2629_);
lean_dec(v_fst_2606_);
lean_del_object(v___x_2604_);
lean_del_object(v___x_2599_);
v___x_2660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2660_, 0, v___x_2628_);
if (v_isShared_2626_ == 0)
{
v___x_2662_ = v___x_2625_;
goto v_reusejp_2661_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v_fst_2622_);
lean_ctor_set(v_reuseFailAlloc_2675_, 1, v_snd_2623_);
v___x_2662_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2661_;
}
v_reusejp_2661_:
{
lean_object* v___x_2664_; 
if (v_isShared_2621_ == 0)
{
lean_ctor_set(v___x_2620_, 1, v___x_2662_);
v___x_2664_ = v___x_2620_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_fst_2618_);
lean_ctor_set(v_reuseFailAlloc_2674_, 1, v___x_2662_);
v___x_2664_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
lean_object* v___x_2666_; 
if (v_isShared_2617_ == 0)
{
lean_ctor_set(v___x_2616_, 1, v___x_2664_);
v___x_2666_ = v___x_2616_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v_fst_2614_);
lean_ctor_set(v_reuseFailAlloc_2673_, 1, v___x_2664_);
v___x_2666_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
lean_object* v___x_2668_; 
if (v_isShared_2613_ == 0)
{
lean_ctor_set(v___x_2612_, 1, v___x_2666_);
v___x_2668_ = v___x_2612_;
goto v_reusejp_2667_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v_fst_2610_);
lean_ctor_set(v_reuseFailAlloc_2672_, 1, v___x_2666_);
v___x_2668_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2667_;
}
v_reusejp_2667_:
{
lean_object* v___x_2670_; 
if (v_isShared_2609_ == 0)
{
lean_ctor_set(v___x_2608_, 1, v___x_2668_);
lean_ctor_set(v___x_2608_, 0, v___x_2660_);
v___x_2670_ = v___x_2608_;
goto v_reusejp_2669_;
}
else
{
lean_object* v_reuseFailAlloc_2671_; 
v_reuseFailAlloc_2671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2671_, 0, v___x_2660_);
lean_ctor_set(v_reuseFailAlloc_2671_, 1, v___x_2668_);
v___x_2670_ = v_reuseFailAlloc_2671_;
goto v_reusejp_2669_;
}
v_reusejp_2669_:
{
v_a_2585_ = v___x_2670_;
goto v___jp_2584_;
}
}
}
}
}
}
}
}
case 1:
{
lean_object* v_l_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2720_; 
lean_del_object(v___x_2599_);
v_l_2677_ = lean_ctor_get(v_fst_2597_, 0);
v_isSharedCheck_2720_ = !lean_is_exclusive(v_fst_2597_);
if (v_isSharedCheck_2720_ == 0)
{
v___x_2679_ = v_fst_2597_;
v_isShared_2680_ = v_isSharedCheck_2720_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_l_2677_);
lean_dec(v_fst_2597_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2720_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v___x_2681_; uint8_t v___x_2682_; 
v___x_2681_ = lean_box(0);
v___x_2682_ = lean_name_eq(v_l_2677_, v___x_2681_);
if (v___x_2682_ == 0)
{
lean_object* v___x_2684_; 
lean_del_object(v___x_2679_);
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 1, v___x_2628_);
lean_ctor_set(v___x_2625_, 0, v_l_2677_);
v___x_2684_ = v___x_2625_;
goto v_reusejp_2683_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_l_2677_);
lean_ctor_set(v_reuseFailAlloc_2701_, 1, v___x_2628_);
v___x_2684_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2683_;
}
v_reusejp_2683_:
{
lean_object* v___x_2685_; lean_object* v___x_2687_; 
v___x_2685_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2685_, 0, v___x_2684_);
lean_ctor_set(v___x_2685_, 1, v_fst_2622_);
if (v_isShared_2621_ == 0)
{
lean_ctor_set(v___x_2620_, 1, v_snd_2623_);
lean_ctor_set(v___x_2620_, 0, v___x_2685_);
v___x_2687_ = v___x_2620_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v___x_2685_);
lean_ctor_set(v_reuseFailAlloc_2700_, 1, v_snd_2623_);
v___x_2687_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
lean_object* v___x_2689_; 
if (v_isShared_2617_ == 0)
{
lean_ctor_set(v___x_2616_, 1, v___x_2687_);
lean_ctor_set(v___x_2616_, 0, v_fst_2618_);
v___x_2689_ = v___x_2616_;
goto v_reusejp_2688_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v_fst_2618_);
lean_ctor_set(v_reuseFailAlloc_2699_, 1, v___x_2687_);
v___x_2689_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2688_;
}
v_reusejp_2688_:
{
lean_object* v___x_2691_; 
if (v_isShared_2613_ == 0)
{
lean_ctor_set(v___x_2612_, 1, v___x_2689_);
lean_ctor_set(v___x_2612_, 0, v_fst_2614_);
v___x_2691_ = v___x_2612_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v_fst_2614_);
lean_ctor_set(v_reuseFailAlloc_2698_, 1, v___x_2689_);
v___x_2691_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
lean_object* v___x_2693_; 
if (v_isShared_2609_ == 0)
{
lean_ctor_set(v___x_2608_, 1, v___x_2691_);
lean_ctor_set(v___x_2608_, 0, v_fst_2610_);
v___x_2693_ = v___x_2608_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_fst_2610_);
lean_ctor_set(v_reuseFailAlloc_2697_, 1, v___x_2691_);
v___x_2693_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
lean_object* v___x_2695_; 
if (v_isShared_2605_ == 0)
{
lean_ctor_set(v___x_2604_, 1, v___x_2693_);
lean_ctor_set(v___x_2604_, 0, v_fst_2606_);
v___x_2695_ = v___x_2604_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v_fst_2606_);
lean_ctor_set(v_reuseFailAlloc_2696_, 1, v___x_2693_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
v_a_2585_ = v___x_2695_;
goto v___jp_2584_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2703_; 
lean_dec(v_l_2677_);
lean_dec(v_fst_2610_);
lean_del_object(v___x_2604_);
if (v_isShared_2680_ == 0)
{
lean_ctor_set(v___x_2679_, 0, v___x_2628_);
v___x_2703_ = v___x_2679_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v___x_2628_);
v___x_2703_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
lean_object* v___x_2705_; 
if (v_isShared_2626_ == 0)
{
v___x_2705_ = v___x_2625_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v_fst_2622_);
lean_ctor_set(v_reuseFailAlloc_2718_, 1, v_snd_2623_);
v___x_2705_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
lean_object* v___x_2707_; 
if (v_isShared_2621_ == 0)
{
lean_ctor_set(v___x_2620_, 1, v___x_2705_);
v___x_2707_ = v___x_2620_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v_fst_2618_);
lean_ctor_set(v_reuseFailAlloc_2717_, 1, v___x_2705_);
v___x_2707_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
lean_object* v___x_2709_; 
if (v_isShared_2617_ == 0)
{
lean_ctor_set(v___x_2616_, 1, v___x_2707_);
v___x_2709_ = v___x_2616_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_fst_2614_);
lean_ctor_set(v_reuseFailAlloc_2716_, 1, v___x_2707_);
v___x_2709_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
lean_object* v___x_2711_; 
if (v_isShared_2613_ == 0)
{
lean_ctor_set(v___x_2612_, 1, v___x_2709_);
lean_ctor_set(v___x_2612_, 0, v___x_2703_);
v___x_2711_ = v___x_2612_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v___x_2703_);
lean_ctor_set(v_reuseFailAlloc_2715_, 1, v___x_2709_);
v___x_2711_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
lean_object* v___x_2713_; 
if (v_isShared_2609_ == 0)
{
lean_ctor_set(v___x_2608_, 1, v___x_2711_);
v___x_2713_ = v___x_2608_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v_fst_2606_);
lean_ctor_set(v_reuseFailAlloc_2714_, 1, v___x_2711_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
v_a_2585_ = v___x_2713_;
goto v___jp_2584_;
}
}
}
}
}
}
}
}
}
default: 
{
lean_object* v_l_2721_; lean_object* v___x_2723_; uint8_t v_isShared_2724_; uint8_t v_isSharedCheck_2764_; 
lean_del_object(v___x_2599_);
v_l_2721_ = lean_ctor_get(v_fst_2597_, 0);
v_isSharedCheck_2764_ = !lean_is_exclusive(v_fst_2597_);
if (v_isSharedCheck_2764_ == 0)
{
v___x_2723_ = v_fst_2597_;
v_isShared_2724_ = v_isSharedCheck_2764_;
goto v_resetjp_2722_;
}
else
{
lean_inc(v_l_2721_);
lean_dec(v_fst_2597_);
v___x_2723_ = lean_box(0);
v_isShared_2724_ = v_isSharedCheck_2764_;
goto v_resetjp_2722_;
}
v_resetjp_2722_:
{
lean_object* v___x_2725_; uint8_t v___x_2726_; 
v___x_2725_ = lean_box(0);
v___x_2726_ = lean_name_eq(v_l_2721_, v___x_2725_);
if (v___x_2726_ == 0)
{
lean_object* v___x_2728_; 
lean_del_object(v___x_2723_);
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 1, v___x_2628_);
lean_ctor_set(v___x_2625_, 0, v_l_2721_);
v___x_2728_ = v___x_2625_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v_l_2721_);
lean_ctor_set(v_reuseFailAlloc_2745_, 1, v___x_2628_);
v___x_2728_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
lean_object* v___x_2729_; lean_object* v___x_2731_; 
v___x_2729_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2729_, 0, v___x_2728_);
lean_ctor_set(v___x_2729_, 1, v_snd_2623_);
if (v_isShared_2621_ == 0)
{
lean_ctor_set(v___x_2620_, 1, v___x_2729_);
lean_ctor_set(v___x_2620_, 0, v_fst_2622_);
v___x_2731_ = v___x_2620_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2744_; 
v_reuseFailAlloc_2744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2744_, 0, v_fst_2622_);
lean_ctor_set(v_reuseFailAlloc_2744_, 1, v___x_2729_);
v___x_2731_ = v_reuseFailAlloc_2744_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
lean_object* v___x_2733_; 
if (v_isShared_2617_ == 0)
{
lean_ctor_set(v___x_2616_, 1, v___x_2731_);
lean_ctor_set(v___x_2616_, 0, v_fst_2618_);
v___x_2733_ = v___x_2616_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v_fst_2618_);
lean_ctor_set(v_reuseFailAlloc_2743_, 1, v___x_2731_);
v___x_2733_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
lean_object* v___x_2735_; 
if (v_isShared_2613_ == 0)
{
lean_ctor_set(v___x_2612_, 1, v___x_2733_);
lean_ctor_set(v___x_2612_, 0, v_fst_2614_);
v___x_2735_ = v___x_2612_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_fst_2614_);
lean_ctor_set(v_reuseFailAlloc_2742_, 1, v___x_2733_);
v___x_2735_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
lean_object* v___x_2737_; 
if (v_isShared_2609_ == 0)
{
lean_ctor_set(v___x_2608_, 1, v___x_2735_);
lean_ctor_set(v___x_2608_, 0, v_fst_2610_);
v___x_2737_ = v___x_2608_;
goto v_reusejp_2736_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v_fst_2610_);
lean_ctor_set(v_reuseFailAlloc_2741_, 1, v___x_2735_);
v___x_2737_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2736_;
}
v_reusejp_2736_:
{
lean_object* v___x_2739_; 
if (v_isShared_2605_ == 0)
{
lean_ctor_set(v___x_2604_, 1, v___x_2737_);
lean_ctor_set(v___x_2604_, 0, v_fst_2606_);
v___x_2739_ = v___x_2604_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_fst_2606_);
lean_ctor_set(v_reuseFailAlloc_2740_, 1, v___x_2737_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
v_a_2585_ = v___x_2739_;
goto v___jp_2584_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2747_; 
lean_dec(v_l_2721_);
lean_dec(v_fst_2614_);
lean_del_object(v___x_2604_);
if (v_isShared_2724_ == 0)
{
lean_ctor_set_tag(v___x_2723_, 1);
lean_ctor_set(v___x_2723_, 0, v___x_2628_);
v___x_2747_ = v___x_2723_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2763_; 
v_reuseFailAlloc_2763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2763_, 0, v___x_2628_);
v___x_2747_ = v_reuseFailAlloc_2763_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
lean_object* v___x_2749_; 
if (v_isShared_2626_ == 0)
{
v___x_2749_ = v___x_2625_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_fst_2622_);
lean_ctor_set(v_reuseFailAlloc_2762_, 1, v_snd_2623_);
v___x_2749_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
lean_object* v___x_2751_; 
if (v_isShared_2621_ == 0)
{
lean_ctor_set(v___x_2620_, 1, v___x_2749_);
v___x_2751_ = v___x_2620_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2761_; 
v_reuseFailAlloc_2761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2761_, 0, v_fst_2618_);
lean_ctor_set(v_reuseFailAlloc_2761_, 1, v___x_2749_);
v___x_2751_ = v_reuseFailAlloc_2761_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
lean_object* v___x_2753_; 
if (v_isShared_2617_ == 0)
{
lean_ctor_set(v___x_2616_, 1, v___x_2751_);
lean_ctor_set(v___x_2616_, 0, v___x_2747_);
v___x_2753_ = v___x_2616_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v___x_2747_);
lean_ctor_set(v_reuseFailAlloc_2760_, 1, v___x_2751_);
v___x_2753_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
lean_object* v___x_2755_; 
if (v_isShared_2613_ == 0)
{
lean_ctor_set(v___x_2612_, 1, v___x_2753_);
v___x_2755_ = v___x_2612_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_fst_2610_);
lean_ctor_set(v_reuseFailAlloc_2759_, 1, v___x_2753_);
v___x_2755_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
lean_object* v___x_2757_; 
if (v_isShared_2609_ == 0)
{
lean_ctor_set(v___x_2608_, 1, v___x_2755_);
v___x_2757_ = v___x_2608_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v_fst_2606_);
lean_ctor_set(v_reuseFailAlloc_2758_, 1, v___x_2755_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
v_a_2585_ = v___x_2757_;
goto v___jp_2584_;
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
}
}
}
}
v___jp_2584_:
{
size_t v___x_2586_; size_t v___x_2587_; 
v___x_2586_ = ((size_t)1ULL);
v___x_2587_ = lean_usize_add(v_i_2581_, v___x_2586_);
v_i_2581_ = v___x_2587_;
v_b_2582_ = v_a_2585_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4___redArg___boxed(lean_object* v___x_2777_, lean_object* v_as_2778_, lean_object* v_sz_2779_, lean_object* v_i_2780_, lean_object* v_b_2781_, lean_object* v___y_2782_){
_start:
{
size_t v_sz_boxed_2783_; size_t v_i_boxed_2784_; lean_object* v_res_2785_; 
v_sz_boxed_2783_ = lean_unbox_usize(v_sz_2779_);
lean_dec(v_sz_2779_);
v_i_boxed_2784_ = lean_unbox_usize(v_i_2780_);
lean_dec(v_i_2780_);
v_res_2785_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4___redArg(v___x_2777_, v_as_2778_, v_sz_boxed_2783_, v_i_boxed_2784_, v_b_2781_);
lean_dec_ref(v_as_2778_);
return v_res_2785_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__2___redArg(lean_object* v___x_2786_, lean_object* v_as_x27_2787_, lean_object* v_b_2788_, lean_object* v___y_2789_){
_start:
{
if (lean_obj_tag(v_as_x27_2787_) == 0)
{
lean_object* v___x_2791_; 
lean_dec_ref(v___x_2786_);
v___x_2791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2791_, 0, v_b_2788_);
return v___x_2791_;
}
else
{
lean_object* v_snd_2792_; lean_object* v_head_2793_; lean_object* v_tail_2794_; lean_object* v_fst_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2860_; 
v_snd_2792_ = lean_ctor_get(v_b_2788_, 1);
lean_inc(v_snd_2792_);
v_head_2793_ = lean_ctor_get(v_as_x27_2787_, 0);
v_tail_2794_ = lean_ctor_get(v_as_x27_2787_, 1);
v_fst_2795_ = lean_ctor_get(v_b_2788_, 0);
v_isSharedCheck_2860_ = !lean_is_exclusive(v_b_2788_);
if (v_isSharedCheck_2860_ == 0)
{
lean_object* v_unused_2861_; 
v_unused_2861_ = lean_ctor_get(v_b_2788_, 1);
lean_dec(v_unused_2861_);
v___x_2797_ = v_b_2788_;
v_isShared_2798_ = v_isSharedCheck_2860_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_fst_2795_);
lean_dec(v_b_2788_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2860_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v_fst_2799_; lean_object* v_snd_2800_; lean_object* v___x_2802_; uint8_t v_isShared_2803_; uint8_t v_isSharedCheck_2859_; 
v_fst_2799_ = lean_ctor_get(v_snd_2792_, 0);
v_snd_2800_ = lean_ctor_get(v_snd_2792_, 1);
v_isSharedCheck_2859_ = !lean_is_exclusive(v_snd_2792_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2802_ = v_snd_2792_;
v_isShared_2803_ = v_isSharedCheck_2859_;
goto v_resetjp_2801_;
}
else
{
lean_inc(v_snd_2800_);
lean_inc(v_fst_2799_);
lean_dec(v_snd_2792_);
v___x_2802_ = lean_box(0);
v_isShared_2803_ = v_isSharedCheck_2859_;
goto v_resetjp_2801_;
}
v_resetjp_2801_:
{
lean_object* v___x_2804_; uint8_t v___x_2805_; 
v___x_2804_ = lean_box(0);
v___x_2805_ = lean_name_eq(v_head_2793_, v___x_2804_);
if (v___x_2805_ == 0)
{
lean_object* v___x_2806_; 
v___x_2806_ = l_Lean_Elab_Do_getLabeledTarget_x3f___redArg(v_head_2793_, v___y_2789_);
if (lean_obj_tag(v___x_2806_) == 0)
{
lean_object* v_a_2807_; 
v_a_2807_ = lean_ctor_get(v___x_2806_, 0);
lean_inc(v_a_2807_);
lean_dec_ref_known(v___x_2806_, 1);
if (lean_obj_tag(v_a_2807_) == 1)
{
lean_object* v_val_2816_; lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2843_; 
v_val_2816_ = lean_ctor_get(v_a_2807_, 0);
v_isSharedCheck_2843_ = !lean_is_exclusive(v_a_2807_);
if (v_isSharedCheck_2843_ == 0)
{
v___x_2818_ = v_a_2807_;
v_isShared_2819_ = v_isSharedCheck_2843_;
goto v_resetjp_2817_;
}
else
{
lean_inc(v_val_2816_);
lean_dec(v_a_2807_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2843_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
if (lean_obj_tag(v_val_2816_) == 1)
{
lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2840_; 
lean_del_object(v___x_2802_);
lean_del_object(v___x_2797_);
v_isSharedCheck_2840_ = !lean_is_exclusive(v_val_2816_);
if (v_isSharedCheck_2840_ == 0)
{
lean_object* v_unused_2841_; lean_object* v_unused_2842_; 
v_unused_2841_ = lean_ctor_get(v_val_2816_, 1);
lean_dec(v_unused_2841_);
v_unused_2842_ = lean_ctor_get(v_val_2816_, 0);
lean_dec(v_unused_2842_);
v___x_2821_ = v_val_2816_;
v_isShared_2822_ = v_isSharedCheck_2840_;
goto v_resetjp_2820_;
}
else
{
lean_dec(v_val_2816_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2840_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
lean_object* v___x_2824_; 
lean_inc(v_head_2793_);
if (v_isShared_2819_ == 0)
{
lean_ctor_set_tag(v___x_2818_, 2);
lean_ctor_set(v___x_2818_, 0, v_head_2793_);
v___x_2824_ = v___x_2818_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_head_2793_);
v___x_2824_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2829_; 
v___x_2825_ = lean_array_get_size(v_snd_2800_);
v___x_2826_ = lean_unsigned_to_nat(1u);
v___x_2827_ = lean_nat_add(v___x_2825_, v___x_2826_);
lean_inc(v_fst_2799_);
if (v_isShared_2822_ == 0)
{
lean_ctor_set_tag(v___x_2821_, 0);
lean_ctor_set(v___x_2821_, 1, v___x_2827_);
lean_ctor_set(v___x_2821_, 0, v_fst_2799_);
v___x_2829_ = v___x_2821_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v_fst_2799_);
lean_ctor_set(v_reuseFailAlloc_2838_, 1, v___x_2827_);
v___x_2829_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
lean_object* v___x_2830_; lean_object* v_localStM_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; 
lean_inc(v_head_2793_);
lean_inc_ref(v___x_2786_);
v___x_2830_ = l_Lean_Elab_Do_ControlStack_labeledContinueT(v___x_2786_, v_head_2793_, v_fst_2799_);
v_localStM_2831_ = lean_ctor_get(v___x_2830_, 3);
lean_inc_ref(v_localStM_2831_);
v___x_2832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2832_, 0, v___x_2824_);
lean_ctor_set(v___x_2832_, 1, v___x_2829_);
v___x_2833_ = lean_array_push(v_fst_2795_, v___x_2832_);
v___x_2834_ = lean_array_push(v_snd_2800_, v_localStM_2831_);
v___x_2835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2830_);
lean_ctor_set(v___x_2835_, 1, v___x_2834_);
v___x_2836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2836_, 0, v___x_2833_);
lean_ctor_set(v___x_2836_, 1, v___x_2835_);
v_as_x27_2787_ = v_tail_2794_;
v_b_2788_ = v___x_2836_;
goto _start;
}
}
}
}
else
{
lean_del_object(v___x_2818_);
lean_dec(v_val_2816_);
goto v___jp_2808_;
}
}
}
else
{
lean_dec(v_a_2807_);
goto v___jp_2808_;
}
v___jp_2808_:
{
lean_object* v___x_2810_; 
if (v_isShared_2803_ == 0)
{
v___x_2810_ = v___x_2802_;
goto v_reusejp_2809_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v_fst_2799_);
lean_ctor_set(v_reuseFailAlloc_2815_, 1, v_snd_2800_);
v___x_2810_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2809_;
}
v_reusejp_2809_:
{
lean_object* v___x_2812_; 
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 1, v___x_2810_);
v___x_2812_ = v___x_2797_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v_fst_2795_);
lean_ctor_set(v_reuseFailAlloc_2814_, 1, v___x_2810_);
v___x_2812_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
v_as_x27_2787_ = v_tail_2794_;
v_b_2788_ = v___x_2812_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2851_; 
lean_del_object(v___x_2802_);
lean_dec(v_snd_2800_);
lean_dec(v_fst_2799_);
lean_del_object(v___x_2797_);
lean_dec(v_fst_2795_);
lean_dec_ref(v___x_2786_);
v_a_2844_ = lean_ctor_get(v___x_2806_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v___x_2806_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2846_ = v___x_2806_;
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_a_2844_);
lean_dec(v___x_2806_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2849_; 
if (v_isShared_2847_ == 0)
{
v___x_2849_ = v___x_2846_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v_a_2844_);
v___x_2849_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2848_;
}
v_reusejp_2848_:
{
return v___x_2849_;
}
}
}
}
else
{
lean_object* v___x_2853_; 
if (v_isShared_2803_ == 0)
{
v___x_2853_ = v___x_2802_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v_fst_2799_);
lean_ctor_set(v_reuseFailAlloc_2858_, 1, v_snd_2800_);
v___x_2853_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
lean_object* v___x_2855_; 
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 1, v___x_2853_);
v___x_2855_ = v___x_2797_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v_fst_2795_);
lean_ctor_set(v_reuseFailAlloc_2857_, 1, v___x_2853_);
v___x_2855_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
v_as_x27_2787_ = v_tail_2794_;
v_b_2788_ = v___x_2855_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__2___redArg___boxed(lean_object* v___x_2862_, lean_object* v_as_x27_2863_, lean_object* v_b_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_){
_start:
{
lean_object* v_res_2867_; 
v_res_2867_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__2___redArg(v___x_2862_, v_as_x27_2863_, v_b_2864_, v___y_2865_);
lean_dec_ref(v___y_2865_);
lean_dec(v_as_x27_2863_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__1___redArg(lean_object* v___x_2868_, lean_object* v_as_x27_2869_, lean_object* v_b_2870_, lean_object* v___y_2871_){
_start:
{
if (lean_obj_tag(v_as_x27_2869_) == 0)
{
lean_object* v___x_2873_; 
lean_dec_ref(v___x_2868_);
v___x_2873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2873_, 0, v_b_2870_);
return v___x_2873_;
}
else
{
lean_object* v_snd_2874_; lean_object* v_head_2875_; lean_object* v_tail_2876_; lean_object* v_fst_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2942_; 
v_snd_2874_ = lean_ctor_get(v_b_2870_, 1);
lean_inc(v_snd_2874_);
v_head_2875_ = lean_ctor_get(v_as_x27_2869_, 0);
v_tail_2876_ = lean_ctor_get(v_as_x27_2869_, 1);
v_fst_2877_ = lean_ctor_get(v_b_2870_, 0);
v_isSharedCheck_2942_ = !lean_is_exclusive(v_b_2870_);
if (v_isSharedCheck_2942_ == 0)
{
lean_object* v_unused_2943_; 
v_unused_2943_ = lean_ctor_get(v_b_2870_, 1);
lean_dec(v_unused_2943_);
v___x_2879_ = v_b_2870_;
v_isShared_2880_ = v_isSharedCheck_2942_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_fst_2877_);
lean_dec(v_b_2870_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2942_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v_fst_2881_; lean_object* v_snd_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2941_; 
v_fst_2881_ = lean_ctor_get(v_snd_2874_, 0);
v_snd_2882_ = lean_ctor_get(v_snd_2874_, 1);
v_isSharedCheck_2941_ = !lean_is_exclusive(v_snd_2874_);
if (v_isSharedCheck_2941_ == 0)
{
v___x_2884_ = v_snd_2874_;
v_isShared_2885_ = v_isSharedCheck_2941_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_snd_2882_);
lean_inc(v_fst_2881_);
lean_dec(v_snd_2874_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2941_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
lean_object* v___x_2886_; uint8_t v___x_2887_; 
v___x_2886_ = lean_box(0);
v___x_2887_ = lean_name_eq(v_head_2875_, v___x_2886_);
if (v___x_2887_ == 0)
{
lean_object* v___x_2888_; 
v___x_2888_ = l_Lean_Elab_Do_getLabeledTarget_x3f___redArg(v_head_2875_, v___y_2871_);
if (lean_obj_tag(v___x_2888_) == 0)
{
lean_object* v_a_2889_; 
v_a_2889_ = lean_ctor_get(v___x_2888_, 0);
lean_inc(v_a_2889_);
lean_dec_ref_known(v___x_2888_, 1);
if (lean_obj_tag(v_a_2889_) == 1)
{
lean_object* v_val_2898_; lean_object* v___x_2900_; uint8_t v_isShared_2901_; uint8_t v_isSharedCheck_2925_; 
v_val_2898_ = lean_ctor_get(v_a_2889_, 0);
v_isSharedCheck_2925_ = !lean_is_exclusive(v_a_2889_);
if (v_isSharedCheck_2925_ == 0)
{
v___x_2900_ = v_a_2889_;
v_isShared_2901_ = v_isSharedCheck_2925_;
goto v_resetjp_2899_;
}
else
{
lean_inc(v_val_2898_);
lean_dec(v_a_2889_);
v___x_2900_ = lean_box(0);
v_isShared_2901_ = v_isSharedCheck_2925_;
goto v_resetjp_2899_;
}
v_resetjp_2899_:
{
if (lean_obj_tag(v_val_2898_) == 1)
{
lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2922_; 
lean_del_object(v___x_2884_);
lean_del_object(v___x_2879_);
v_isSharedCheck_2922_ = !lean_is_exclusive(v_val_2898_);
if (v_isSharedCheck_2922_ == 0)
{
lean_object* v_unused_2923_; lean_object* v_unused_2924_; 
v_unused_2923_ = lean_ctor_get(v_val_2898_, 1);
lean_dec(v_unused_2923_);
v_unused_2924_ = lean_ctor_get(v_val_2898_, 0);
lean_dec(v_unused_2924_);
v___x_2903_ = v_val_2898_;
v_isShared_2904_ = v_isSharedCheck_2922_;
goto v_resetjp_2902_;
}
else
{
lean_dec(v_val_2898_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2922_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2906_; 
lean_inc(v_head_2875_);
if (v_isShared_2901_ == 0)
{
lean_ctor_set(v___x_2900_, 0, v_head_2875_);
v___x_2906_ = v___x_2900_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2921_; 
v_reuseFailAlloc_2921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2921_, 0, v_head_2875_);
v___x_2906_ = v_reuseFailAlloc_2921_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2911_; 
v___x_2907_ = lean_array_get_size(v_snd_2882_);
v___x_2908_ = lean_unsigned_to_nat(1u);
v___x_2909_ = lean_nat_add(v___x_2907_, v___x_2908_);
lean_inc(v_fst_2881_);
if (v_isShared_2904_ == 0)
{
lean_ctor_set_tag(v___x_2903_, 0);
lean_ctor_set(v___x_2903_, 1, v___x_2909_);
lean_ctor_set(v___x_2903_, 0, v_fst_2881_);
v___x_2911_ = v___x_2903_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v_fst_2881_);
lean_ctor_set(v_reuseFailAlloc_2920_, 1, v___x_2909_);
v___x_2911_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
lean_object* v___x_2912_; lean_object* v_localStM_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; 
lean_inc(v_head_2875_);
lean_inc_ref(v___x_2868_);
v___x_2912_ = l_Lean_Elab_Do_ControlStack_labeledBreakT(v___x_2868_, v_head_2875_, v_fst_2881_);
v_localStM_2913_ = lean_ctor_get(v___x_2912_, 3);
lean_inc_ref(v_localStM_2913_);
v___x_2914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2906_);
lean_ctor_set(v___x_2914_, 1, v___x_2911_);
v___x_2915_ = lean_array_push(v_fst_2877_, v___x_2914_);
v___x_2916_ = lean_array_push(v_snd_2882_, v_localStM_2913_);
v___x_2917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2917_, 0, v___x_2912_);
lean_ctor_set(v___x_2917_, 1, v___x_2916_);
v___x_2918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2918_, 0, v___x_2915_);
lean_ctor_set(v___x_2918_, 1, v___x_2917_);
v_as_x27_2869_ = v_tail_2876_;
v_b_2870_ = v___x_2918_;
goto _start;
}
}
}
}
else
{
lean_del_object(v___x_2900_);
lean_dec(v_val_2898_);
goto v___jp_2890_;
}
}
}
else
{
lean_dec(v_a_2889_);
goto v___jp_2890_;
}
v___jp_2890_:
{
lean_object* v___x_2892_; 
if (v_isShared_2885_ == 0)
{
v___x_2892_ = v___x_2884_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_fst_2881_);
lean_ctor_set(v_reuseFailAlloc_2897_, 1, v_snd_2882_);
v___x_2892_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
lean_object* v___x_2894_; 
if (v_isShared_2880_ == 0)
{
lean_ctor_set(v___x_2879_, 1, v___x_2892_);
v___x_2894_ = v___x_2879_;
goto v_reusejp_2893_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v_fst_2877_);
lean_ctor_set(v_reuseFailAlloc_2896_, 1, v___x_2892_);
v___x_2894_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2893_;
}
v_reusejp_2893_:
{
v_as_x27_2869_ = v_tail_2876_;
v_b_2870_ = v___x_2894_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2926_; lean_object* v___x_2928_; uint8_t v_isShared_2929_; uint8_t v_isSharedCheck_2933_; 
lean_del_object(v___x_2884_);
lean_dec(v_snd_2882_);
lean_dec(v_fst_2881_);
lean_del_object(v___x_2879_);
lean_dec(v_fst_2877_);
lean_dec_ref(v___x_2868_);
v_a_2926_ = lean_ctor_get(v___x_2888_, 0);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2888_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2928_ = v___x_2888_;
v_isShared_2929_ = v_isSharedCheck_2933_;
goto v_resetjp_2927_;
}
else
{
lean_inc(v_a_2926_);
lean_dec(v___x_2888_);
v___x_2928_ = lean_box(0);
v_isShared_2929_ = v_isSharedCheck_2933_;
goto v_resetjp_2927_;
}
v_resetjp_2927_:
{
lean_object* v___x_2931_; 
if (v_isShared_2929_ == 0)
{
v___x_2931_ = v___x_2928_;
goto v_reusejp_2930_;
}
else
{
lean_object* v_reuseFailAlloc_2932_; 
v_reuseFailAlloc_2932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2932_, 0, v_a_2926_);
v___x_2931_ = v_reuseFailAlloc_2932_;
goto v_reusejp_2930_;
}
v_reusejp_2930_:
{
return v___x_2931_;
}
}
}
}
else
{
lean_object* v___x_2935_; 
if (v_isShared_2885_ == 0)
{
v___x_2935_ = v___x_2884_;
goto v_reusejp_2934_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v_fst_2881_);
lean_ctor_set(v_reuseFailAlloc_2940_, 1, v_snd_2882_);
v___x_2935_ = v_reuseFailAlloc_2940_;
goto v_reusejp_2934_;
}
v_reusejp_2934_:
{
lean_object* v___x_2937_; 
if (v_isShared_2880_ == 0)
{
lean_ctor_set(v___x_2879_, 1, v___x_2935_);
v___x_2937_ = v___x_2879_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_fst_2877_);
lean_ctor_set(v_reuseFailAlloc_2939_, 1, v___x_2935_);
v___x_2937_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
v_as_x27_2869_ = v_tail_2876_;
v_b_2870_ = v___x_2937_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__1___redArg___boxed(lean_object* v___x_2944_, lean_object* v_as_x27_2945_, lean_object* v_b_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_){
_start:
{
lean_object* v_res_2949_; 
v_res_2949_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__1___redArg(v___x_2944_, v_as_x27_2945_, v_b_2946_, v___y_2947_);
lean_dec_ref(v___y_2947_);
lean_dec(v_as_x27_2945_);
return v_res_2949_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__5(lean_object* v_init_2950_, lean_object* v_x_2951_){
_start:
{
if (lean_obj_tag(v_x_2951_) == 0)
{
lean_object* v_k_2952_; lean_object* v_v_2953_; lean_object* v_l_2954_; lean_object* v_r_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; 
v_k_2952_ = lean_ctor_get(v_x_2951_, 1);
v_v_2953_ = lean_ctor_get(v_x_2951_, 2);
v_l_2954_ = lean_ctor_get(v_x_2951_, 3);
v_r_2955_ = lean_ctor_get(v_x_2951_, 4);
v___x_2956_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__5(v_init_2950_, v_r_2955_);
lean_inc(v_v_2953_);
lean_inc(v_k_2952_);
v___x_2957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2957_, 0, v_k_2952_);
lean_ctor_set(v___x_2957_, 1, v_v_2953_);
v___x_2958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2958_, 0, v___x_2957_);
lean_ctor_set(v___x_2958_, 1, v___x_2956_);
v_init_2950_ = v___x_2958_;
v_x_2951_ = v_l_2954_;
goto _start;
}
else
{
return v_init_2950_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__5___boxed(lean_object* v_init_2960_, lean_object* v_x_2961_){
_start:
{
lean_object* v_res_2962_; 
v_res_2962_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__5(v_init_2960_, v_x_2961_);
lean_dec(v_x_2961_);
return v_res_2962_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__7(lean_object* v_info_2963_, lean_object* v_as_2964_, size_t v_i_2965_, size_t v_stop_2966_, lean_object* v_b_2967_){
_start:
{
lean_object* v___y_2969_; uint8_t v___x_2973_; 
v___x_2973_ = lean_usize_dec_eq(v_i_2965_, v_stop_2966_);
if (v___x_2973_ == 0)
{
lean_object* v_reassigns_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; uint8_t v___x_2977_; 
v_reassigns_2974_ = lean_ctor_get(v_info_2963_, 4);
v___x_2975_ = lean_array_uget_borrowed(v_as_2964_, v_i_2965_);
v___x_2976_ = l_Lean_TSyntax_getId(v___x_2975_);
v___x_2977_ = l_Lean_NameSet_contains(v_reassigns_2974_, v___x_2976_);
lean_dec(v___x_2976_);
if (v___x_2977_ == 0)
{
v___y_2969_ = v_b_2967_;
goto v___jp_2968_;
}
else
{
lean_object* v___x_2978_; 
lean_inc(v___x_2975_);
v___x_2978_ = lean_array_push(v_b_2967_, v___x_2975_);
v___y_2969_ = v___x_2978_;
goto v___jp_2968_;
}
}
else
{
return v_b_2967_;
}
v___jp_2968_:
{
size_t v___x_2970_; size_t v___x_2971_; 
v___x_2970_ = ((size_t)1ULL);
v___x_2971_ = lean_usize_add(v_i_2965_, v___x_2970_);
v_i_2965_ = v___x_2971_;
v_b_2967_ = v___y_2969_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__7___boxed(lean_object* v_info_2979_, lean_object* v_as_2980_, lean_object* v_i_2981_, lean_object* v_stop_2982_, lean_object* v_b_2983_){
_start:
{
size_t v_i_boxed_2984_; size_t v_stop_boxed_2985_; lean_object* v_res_2986_; 
v_i_boxed_2984_ = lean_unbox_usize(v_i_2981_);
lean_dec(v_i_2981_);
v_stop_boxed_2985_ = lean_unbox_usize(v_stop_2982_);
lean_dec(v_stop_2982_);
v_res_2986_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__7(v_info_2979_, v_as_2980_, v_i_boxed_2984_, v_stop_boxed_2985_, v_b_2983_);
lean_dec_ref(v_as_2980_);
lean_dec_ref(v_info_2979_);
return v_res_2986_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__0(lean_object* v_init_2987_, lean_object* v_x_2988_){
_start:
{
if (lean_obj_tag(v_x_2988_) == 0)
{
lean_object* v_k_2989_; lean_object* v_l_2990_; lean_object* v_r_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; 
v_k_2989_ = lean_ctor_get(v_x_2988_, 1);
v_l_2990_ = lean_ctor_get(v_x_2988_, 3);
v_r_2991_ = lean_ctor_get(v_x_2988_, 4);
v___x_2992_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__0(v_init_2987_, v_r_2991_);
lean_inc(v_k_2989_);
v___x_2993_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2993_, 0, v_k_2989_);
lean_ctor_set(v___x_2993_, 1, v___x_2992_);
v_init_2987_ = v___x_2993_;
v_x_2988_ = v_l_2990_;
goto _start;
}
else
{
return v_init_2987_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__0___boxed(lean_object* v_init_2995_, lean_object* v_x_2996_){
_start:
{
lean_object* v_res_2997_; 
v_res_2997_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__0(v_init_2995_, v_x_2996_);
lean_dec(v_x_2996_);
return v_res_2997_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlLifter_ofCont___closed__6(void){
_start:
{
lean_object* v___x_3014_; lean_object* v___x_3015_; 
v___x_3014_ = ((lean_object*)(l_Lean_Elab_Do_ControlLifter_ofCont___closed__5));
v___x_3015_ = lean_array_get_size(v___x_3014_);
return v___x_3015_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlLifter_ofCont___closed__7(void){
_start:
{
lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; 
v___x_3016_ = lean_unsigned_to_nat(1u);
v___x_3017_ = lean_obj_once(&l_Lean_Elab_Do_ControlLifter_ofCont___closed__6, &l_Lean_Elab_Do_ControlLifter_ofCont___closed__6_once, _init_l_Lean_Elab_Do_ControlLifter_ofCont___closed__6);
v___x_3018_ = lean_nat_add(v___x_3017_, v___x_3016_);
return v___x_3018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlLifter_ofCont(lean_object* v_info_3021_, lean_object* v_dec_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_, lean_object* v_a_3029_){
_start:
{
lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v___y_3034_; lean_object* v___y_3035_; lean_object* v___y_3036_; lean_object* v___y_3037_; lean_object* v___y_3038_; lean_object* v___y_3039_; uint8_t v___y_3040_; lean_object* v_monadInfo_3043_; lean_object* v_mutVars_3044_; lean_object* v_pending_3046_; lean_object* v_top_3047_; lean_object* v_locals_3048_; lean_object* v___y_3049_; lean_object* v___y_3050_; lean_object* v___y_3051_; lean_object* v___y_3052_; lean_object* v___y_3053_; lean_object* v___y_3054_; lean_object* v___y_3055_; lean_object* v___y_3151_; lean_object* v___y_3152_; lean_object* v___y_3153_; lean_object* v___y_3154_; lean_object* v___y_3155_; lean_object* v___y_3156_; lean_object* v___y_3157_; lean_object* v___y_3158_; lean_object* v___y_3159_; lean_object* v___y_3160_; lean_object* v___y_3161_; uint8_t v___y_3162_; lean_object* v_pending_3174_; lean_object* v_top_3175_; lean_object* v_locals_3176_; lean_object* v___y_3177_; lean_object* v___y_3178_; lean_object* v___y_3179_; lean_object* v___y_3180_; lean_object* v___y_3181_; lean_object* v___y_3182_; lean_object* v___y_3183_; lean_object* v___y_3198_; lean_object* v___y_3199_; lean_object* v___y_3200_; lean_object* v___y_3201_; lean_object* v___y_3202_; lean_object* v___y_3203_; lean_object* v___y_3204_; lean_object* v___y_3205_; lean_object* v___y_3206_; lean_object* v___y_3207_; lean_object* v___y_3208_; uint8_t v___y_3209_; lean_object* v___y_3221_; lean_object* v_top_3222_; lean_object* v_locals_3223_; lean_object* v___y_3224_; lean_object* v___y_3225_; lean_object* v___y_3226_; lean_object* v___y_3227_; lean_object* v___y_3228_; lean_object* v___y_3229_; lean_object* v___y_3230_; lean_object* v___y_3264_; lean_object* v___y_3265_; lean_object* v_pending_3266_; lean_object* v_top_3267_; lean_object* v_locals_3268_; lean_object* v___y_3269_; lean_object* v___y_3270_; lean_object* v___y_3271_; lean_object* v___y_3272_; lean_object* v___y_3273_; lean_object* v___y_3274_; lean_object* v___y_3275_; lean_object* v___y_3283_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; uint8_t v___x_3343_; 
v_monadInfo_3043_ = lean_ctor_get(v_a_3023_, 0);
v_mutVars_3044_ = lean_ctor_get(v_a_3023_, 1);
v___x_3340_ = lean_unsigned_to_nat(0u);
v___x_3341_ = lean_array_get_size(v_mutVars_3044_);
v___x_3342_ = ((lean_object*)(l_Lean_Elab_Do_ControlLifter_ofCont___closed__8));
v___x_3343_ = lean_nat_dec_lt(v___x_3340_, v___x_3341_);
if (v___x_3343_ == 0)
{
v___y_3283_ = v___x_3342_;
goto v___jp_3282_;
}
else
{
uint8_t v___x_3344_; 
v___x_3344_ = lean_nat_dec_le(v___x_3341_, v___x_3341_);
if (v___x_3344_ == 0)
{
if (v___x_3343_ == 0)
{
v___y_3283_ = v___x_3342_;
goto v___jp_3282_;
}
else
{
size_t v___x_3345_; size_t v___x_3346_; lean_object* v___x_3347_; 
v___x_3345_ = ((size_t)0ULL);
v___x_3346_ = lean_usize_of_nat(v___x_3341_);
v___x_3347_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__7(v_info_3021_, v_mutVars_3044_, v___x_3345_, v___x_3346_, v___x_3342_);
v___y_3283_ = v___x_3347_;
goto v___jp_3282_;
}
}
else
{
size_t v___x_3348_; size_t v___x_3349_; lean_object* v___x_3350_; 
v___x_3348_ = ((size_t)0ULL);
v___x_3349_ = lean_usize_of_nat(v___x_3341_);
v___x_3350_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__7(v_info_3021_, v_mutVars_3044_, v___x_3348_, v___x_3349_, v___x_3342_);
v___y_3283_ = v___x_3350_;
goto v___jp_3282_;
}
}
v___jp_3031_:
{
lean_object* v___x_3041_; lean_object* v___x_3042_; 
v___x_3041_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v___x_3041_, 0, v_dec_3022_);
lean_ctor_set(v___x_3041_, 1, v___y_3034_);
lean_ctor_set(v___x_3041_, 2, v___y_3033_);
lean_ctor_set(v___x_3041_, 3, v___y_3037_);
lean_ctor_set(v___x_3041_, 4, v___y_3032_);
lean_ctor_set(v___x_3041_, 5, v___y_3035_);
lean_ctor_set(v___x_3041_, 6, v___y_3036_);
lean_ctor_set(v___x_3041_, 7, v___y_3039_);
lean_ctor_set(v___x_3041_, 8, v___y_3038_);
lean_ctor_set_uint8(v___x_3041_, sizeof(void*)*9, v___y_3040_);
v___x_3042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3042_, 0, v___x_3041_);
return v___x_3042_;
}
v___jp_3045_:
{
lean_object* v_breaks_3056_; lean_object* v_continues_3057_; uint8_t v_noFallthrough_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; 
v_breaks_3056_ = lean_ctor_get(v_info_3021_, 0);
v_continues_3057_ = lean_ctor_get(v_info_3021_, 1);
v_noFallthrough_3058_ = lean_ctor_get_uint8(v_info_3021_, sizeof(void*)*5);
v___x_3059_ = lean_box(0);
v___x_3060_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__0(v___x_3059_, v_breaks_3056_);
v___x_3061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3061_, 0, v_top_3047_);
lean_ctor_set(v___x_3061_, 1, v_locals_3048_);
v___x_3062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3062_, 0, v_pending_3046_);
lean_ctor_set(v___x_3062_, 1, v___x_3061_);
lean_inc_ref(v_monadInfo_3043_);
v___x_3063_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__1___redArg(v_monadInfo_3043_, v___x_3060_, v___x_3062_, v___y_3049_);
lean_dec(v___x_3060_);
if (lean_obj_tag(v___x_3063_) == 0)
{
lean_object* v_a_3064_; lean_object* v_snd_3065_; lean_object* v_fst_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3141_; 
v_a_3064_ = lean_ctor_get(v___x_3063_, 0);
lean_inc(v_a_3064_);
lean_dec_ref_known(v___x_3063_, 1);
v_snd_3065_ = lean_ctor_get(v_a_3064_, 1);
v_fst_3066_ = lean_ctor_get(v_a_3064_, 0);
v_isSharedCheck_3141_ = !lean_is_exclusive(v_a_3064_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3068_ = v_a_3064_;
v_isShared_3069_ = v_isSharedCheck_3141_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_snd_3065_);
lean_inc(v_fst_3066_);
lean_dec(v_a_3064_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3141_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v_fst_3070_; lean_object* v_snd_3071_; lean_object* v___x_3073_; uint8_t v_isShared_3074_; uint8_t v_isSharedCheck_3140_; 
v_fst_3070_ = lean_ctor_get(v_snd_3065_, 0);
v_snd_3071_ = lean_ctor_get(v_snd_3065_, 1);
v_isSharedCheck_3140_ = !lean_is_exclusive(v_snd_3065_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3073_ = v_snd_3065_;
v_isShared_3074_ = v_isSharedCheck_3140_;
goto v_resetjp_3072_;
}
else
{
lean_inc(v_snd_3071_);
lean_inc(v_fst_3070_);
lean_dec(v_snd_3065_);
v___x_3073_ = lean_box(0);
v_isShared_3074_ = v_isSharedCheck_3140_;
goto v_resetjp_3072_;
}
v_resetjp_3072_:
{
lean_object* v___x_3075_; lean_object* v___x_3077_; 
v___x_3075_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__0(v___x_3059_, v_continues_3057_);
if (v_isShared_3074_ == 0)
{
v___x_3077_ = v___x_3073_;
goto v_reusejp_3076_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_fst_3070_);
lean_ctor_set(v_reuseFailAlloc_3139_, 1, v_snd_3071_);
v___x_3077_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3076_;
}
v_reusejp_3076_:
{
lean_object* v___x_3079_; 
if (v_isShared_3069_ == 0)
{
lean_ctor_set(v___x_3068_, 1, v___x_3077_);
v___x_3079_ = v___x_3068_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v_fst_3066_);
lean_ctor_set(v_reuseFailAlloc_3138_, 1, v___x_3077_);
v___x_3079_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
lean_object* v___x_3080_; 
lean_inc_ref(v_monadInfo_3043_);
v___x_3080_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__2___redArg(v_monadInfo_3043_, v___x_3075_, v___x_3079_, v___y_3049_);
lean_dec(v___x_3075_);
if (lean_obj_tag(v___x_3080_) == 0)
{
lean_object* v_a_3081_; lean_object* v_snd_3082_; lean_object* v_fst_3083_; lean_object* v_fst_3084_; lean_object* v_snd_3085_; lean_object* v___x_3086_; size_t v_sz_3087_; size_t v___x_3088_; lean_object* v___x_3089_; 
v_a_3081_ = lean_ctor_get(v___x_3080_, 0);
lean_inc(v_a_3081_);
lean_dec_ref_known(v___x_3080_, 1);
v_snd_3082_ = lean_ctor_get(v_a_3081_, 1);
lean_inc(v_snd_3082_);
v_fst_3083_ = lean_ctor_get(v_a_3081_, 0);
lean_inc(v_fst_3083_);
lean_dec(v_a_3081_);
v_fst_3084_ = lean_ctor_get(v_snd_3082_, 0);
lean_inc(v_fst_3084_);
v_snd_3085_ = lean_ctor_get(v_snd_3082_, 1);
lean_inc(v_snd_3085_);
lean_dec(v_snd_3082_);
v___x_3086_ = ((lean_object*)(l_Lean_Elab_Do_ControlLifter_ofCont___closed__4));
v_sz_3087_ = lean_array_size(v_fst_3083_);
v___x_3088_ = ((size_t)0ULL);
v___x_3089_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4___redArg(v_snd_3085_, v_fst_3083_, v_sz_3087_, v___x_3088_, v___x_3086_);
lean_dec(v_fst_3083_);
if (lean_obj_tag(v___x_3089_) == 0)
{
lean_object* v_a_3090_; lean_object* v_stM_3091_; lean_object* v_resultType_3092_; lean_object* v___x_3093_; 
v_a_3090_ = lean_ctor_get(v___x_3089_, 0);
lean_inc(v_a_3090_);
lean_dec_ref_known(v___x_3089_, 1);
v_stM_3091_ = lean_ctor_get(v_fst_3084_, 2);
v_resultType_3092_ = lean_ctor_get(v_dec_3022_, 1);
lean_inc_ref(v_stM_3091_);
lean_inc(v___y_3055_);
lean_inc_ref(v___y_3054_);
lean_inc(v___y_3053_);
lean_inc_ref(v___y_3052_);
lean_inc(v___y_3051_);
lean_inc_ref(v___y_3050_);
lean_inc_ref(v___y_3049_);
lean_inc_ref(v_resultType_3092_);
v___x_3093_ = lean_apply_9(v_stM_3091_, v_resultType_3092_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, lean_box(0));
if (lean_obj_tag(v___x_3093_) == 0)
{
lean_object* v_snd_3094_; lean_object* v_snd_3095_; lean_object* v_snd_3096_; lean_object* v_snd_3097_; 
v_snd_3094_ = lean_ctor_get(v_a_3090_, 1);
lean_inc(v_snd_3094_);
v_snd_3095_ = lean_ctor_get(v_snd_3094_, 1);
lean_inc(v_snd_3095_);
v_snd_3096_ = lean_ctor_get(v_snd_3095_, 1);
lean_inc(v_snd_3096_);
v_snd_3097_ = lean_ctor_get(v_snd_3096_, 1);
lean_inc(v_snd_3097_);
if (v_noFallthrough_3058_ == 0)
{
lean_object* v_a_3098_; lean_object* v_fst_3099_; lean_object* v_fst_3100_; lean_object* v_fst_3101_; lean_object* v_fst_3102_; lean_object* v_fst_3103_; lean_object* v_snd_3104_; uint8_t v___x_3105_; 
v_a_3098_ = lean_ctor_get(v___x_3093_, 0);
lean_inc(v_a_3098_);
lean_dec_ref_known(v___x_3093_, 1);
v_fst_3099_ = lean_ctor_get(v_a_3090_, 0);
lean_inc(v_fst_3099_);
lean_dec(v_a_3090_);
v_fst_3100_ = lean_ctor_get(v_snd_3094_, 0);
lean_inc(v_fst_3100_);
lean_dec(v_snd_3094_);
v_fst_3101_ = lean_ctor_get(v_snd_3095_, 0);
lean_inc(v_fst_3101_);
lean_dec(v_snd_3095_);
v_fst_3102_ = lean_ctor_get(v_snd_3096_, 0);
lean_inc(v_fst_3102_);
lean_dec(v_snd_3096_);
v_fst_3103_ = lean_ctor_get(v_snd_3097_, 0);
lean_inc(v_fst_3103_);
v_snd_3104_ = lean_ctor_get(v_snd_3097_, 1);
lean_inc(v_snd_3104_);
lean_dec(v_snd_3097_);
v___x_3105_ = 2;
v___y_3032_ = v_fst_3102_;
v___y_3033_ = v_fst_3100_;
v___y_3034_ = v_fst_3099_;
v___y_3035_ = v_fst_3103_;
v___y_3036_ = v_snd_3104_;
v___y_3037_ = v_fst_3101_;
v___y_3038_ = v_a_3098_;
v___y_3039_ = v_fst_3084_;
v___y_3040_ = v___x_3105_;
goto v___jp_3031_;
}
else
{
lean_object* v_a_3106_; lean_object* v_fst_3107_; lean_object* v_fst_3108_; lean_object* v_fst_3109_; lean_object* v_fst_3110_; lean_object* v_fst_3111_; lean_object* v_snd_3112_; uint8_t v___x_3113_; 
v_a_3106_ = lean_ctor_get(v___x_3093_, 0);
lean_inc(v_a_3106_);
lean_dec_ref_known(v___x_3093_, 1);
v_fst_3107_ = lean_ctor_get(v_a_3090_, 0);
lean_inc(v_fst_3107_);
lean_dec(v_a_3090_);
v_fst_3108_ = lean_ctor_get(v_snd_3094_, 0);
lean_inc(v_fst_3108_);
lean_dec(v_snd_3094_);
v_fst_3109_ = lean_ctor_get(v_snd_3095_, 0);
lean_inc(v_fst_3109_);
lean_dec(v_snd_3095_);
v_fst_3110_ = lean_ctor_get(v_snd_3096_, 0);
lean_inc(v_fst_3110_);
lean_dec(v_snd_3096_);
v_fst_3111_ = lean_ctor_get(v_snd_3097_, 0);
lean_inc(v_fst_3111_);
v_snd_3112_ = lean_ctor_get(v_snd_3097_, 1);
lean_inc(v_snd_3112_);
lean_dec(v_snd_3097_);
v___x_3113_ = 1;
v___y_3032_ = v_fst_3110_;
v___y_3033_ = v_fst_3108_;
v___y_3034_ = v_fst_3107_;
v___y_3035_ = v_fst_3111_;
v___y_3036_ = v_snd_3112_;
v___y_3037_ = v_fst_3109_;
v___y_3038_ = v_a_3106_;
v___y_3039_ = v_fst_3084_;
v___y_3040_ = v___x_3113_;
goto v___jp_3031_;
}
}
else
{
lean_object* v_a_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3121_; 
lean_dec(v_a_3090_);
lean_dec(v_fst_3084_);
lean_dec_ref(v_dec_3022_);
v_a_3114_ = lean_ctor_get(v___x_3093_, 0);
v_isSharedCheck_3121_ = !lean_is_exclusive(v___x_3093_);
if (v_isSharedCheck_3121_ == 0)
{
v___x_3116_ = v___x_3093_;
v_isShared_3117_ = v_isSharedCheck_3121_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_a_3114_);
lean_dec(v___x_3093_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3121_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v___x_3119_; 
if (v_isShared_3117_ == 0)
{
v___x_3119_ = v___x_3116_;
goto v_reusejp_3118_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v_a_3114_);
v___x_3119_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3118_;
}
v_reusejp_3118_:
{
return v___x_3119_;
}
}
}
}
else
{
lean_object* v_a_3122_; lean_object* v___x_3124_; uint8_t v_isShared_3125_; uint8_t v_isSharedCheck_3129_; 
lean_dec(v_fst_3084_);
lean_dec_ref(v_dec_3022_);
v_a_3122_ = lean_ctor_get(v___x_3089_, 0);
v_isSharedCheck_3129_ = !lean_is_exclusive(v___x_3089_);
if (v_isSharedCheck_3129_ == 0)
{
v___x_3124_ = v___x_3089_;
v_isShared_3125_ = v_isSharedCheck_3129_;
goto v_resetjp_3123_;
}
else
{
lean_inc(v_a_3122_);
lean_dec(v___x_3089_);
v___x_3124_ = lean_box(0);
v_isShared_3125_ = v_isSharedCheck_3129_;
goto v_resetjp_3123_;
}
v_resetjp_3123_:
{
lean_object* v___x_3127_; 
if (v_isShared_3125_ == 0)
{
v___x_3127_ = v___x_3124_;
goto v_reusejp_3126_;
}
else
{
lean_object* v_reuseFailAlloc_3128_; 
v_reuseFailAlloc_3128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3128_, 0, v_a_3122_);
v___x_3127_ = v_reuseFailAlloc_3128_;
goto v_reusejp_3126_;
}
v_reusejp_3126_:
{
return v___x_3127_;
}
}
}
}
else
{
lean_object* v_a_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3137_; 
lean_dec_ref(v_dec_3022_);
v_a_3130_ = lean_ctor_get(v___x_3080_, 0);
v_isSharedCheck_3137_ = !lean_is_exclusive(v___x_3080_);
if (v_isSharedCheck_3137_ == 0)
{
v___x_3132_ = v___x_3080_;
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
else
{
lean_inc(v_a_3130_);
lean_dec(v___x_3080_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v___x_3135_; 
if (v_isShared_3133_ == 0)
{
v___x_3135_ = v___x_3132_;
goto v_reusejp_3134_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v_a_3130_);
v___x_3135_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3134_;
}
v_reusejp_3134_:
{
return v___x_3135_;
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
lean_object* v_a_3142_; lean_object* v___x_3144_; uint8_t v_isShared_3145_; uint8_t v_isSharedCheck_3149_; 
lean_dec_ref(v_dec_3022_);
v_a_3142_ = lean_ctor_get(v___x_3063_, 0);
v_isSharedCheck_3149_ = !lean_is_exclusive(v___x_3063_);
if (v_isSharedCheck_3149_ == 0)
{
v___x_3144_ = v___x_3063_;
v_isShared_3145_ = v_isSharedCheck_3149_;
goto v_resetjp_3143_;
}
else
{
lean_inc(v_a_3142_);
lean_dec(v___x_3063_);
v___x_3144_ = lean_box(0);
v_isShared_3145_ = v_isSharedCheck_3149_;
goto v_resetjp_3143_;
}
v_resetjp_3143_:
{
lean_object* v___x_3147_; 
if (v_isShared_3145_ == 0)
{
v___x_3147_ = v___x_3144_;
goto v_reusejp_3146_;
}
else
{
lean_object* v_reuseFailAlloc_3148_; 
v_reuseFailAlloc_3148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3148_, 0, v_a_3142_);
v___x_3147_ = v_reuseFailAlloc_3148_;
goto v_reusejp_3146_;
}
v_reusejp_3146_:
{
return v___x_3147_;
}
}
}
}
v___jp_3150_:
{
if (v___y_3162_ == 0)
{
v_pending_3046_ = v___y_3159_;
v_top_3047_ = v___y_3161_;
v_locals_3048_ = v___y_3157_;
v___y_3049_ = v___y_3155_;
v___y_3050_ = v___y_3160_;
v___y_3051_ = v___y_3154_;
v___y_3052_ = v___y_3158_;
v___y_3053_ = v___y_3151_;
v___y_3054_ = v___y_3152_;
v___y_3055_ = v___y_3153_;
goto v___jp_3045_;
}
else
{
lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v_localStM_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3163_ = lean_array_get_size(v___y_3157_);
v___x_3164_ = lean_unsigned_to_nat(1u);
v___x_3165_ = lean_nat_add(v___x_3163_, v___x_3164_);
lean_inc_ref(v___y_3161_);
v___x_3166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3166_, 0, v___y_3161_);
lean_ctor_set(v___x_3166_, 1, v___x_3165_);
lean_inc_ref(v_monadInfo_3043_);
v___x_3167_ = l_Lean_Elab_Do_ControlStack_continueT(v_monadInfo_3043_, v___y_3161_);
v_localStM_3168_ = lean_ctor_get(v___x_3167_, 3);
lean_inc_ref(v_localStM_3168_);
lean_inc(v___y_3156_);
v___x_3169_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3169_, 0, v___y_3156_);
v___x_3170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3170_, 0, v___x_3169_);
lean_ctor_set(v___x_3170_, 1, v___x_3166_);
v___x_3171_ = lean_array_push(v___y_3159_, v___x_3170_);
v___x_3172_ = lean_array_push(v___y_3157_, v_localStM_3168_);
v_pending_3046_ = v___x_3171_;
v_top_3047_ = v___x_3167_;
v_locals_3048_ = v___x_3172_;
v___y_3049_ = v___y_3155_;
v___y_3050_ = v___y_3160_;
v___y_3051_ = v___y_3154_;
v___y_3052_ = v___y_3158_;
v___y_3053_ = v___y_3151_;
v___y_3054_ = v___y_3152_;
v___y_3055_ = v___y_3153_;
goto v___jp_3045_;
}
}
v___jp_3173_:
{
lean_object* v___x_3184_; 
v___x_3184_ = l_Lean_Elab_Do_getContinueCont___redArg(v___y_3177_);
if (lean_obj_tag(v___x_3184_) == 0)
{
lean_object* v_a_3185_; lean_object* v_continues_3186_; lean_object* v___x_3187_; uint8_t v___x_3188_; 
v_a_3185_ = lean_ctor_get(v___x_3184_, 0);
lean_inc(v_a_3185_);
lean_dec_ref_known(v___x_3184_, 1);
v_continues_3186_ = lean_ctor_get(v_info_3021_, 1);
v___x_3187_ = lean_box(0);
v___x_3188_ = l_Lean_NameSet_contains(v_continues_3186_, v___x_3187_);
if (v___x_3188_ == 0)
{
lean_dec(v_a_3185_);
v___y_3151_ = v___y_3181_;
v___y_3152_ = v___y_3182_;
v___y_3153_ = v___y_3183_;
v___y_3154_ = v___y_3179_;
v___y_3155_ = v___y_3177_;
v___y_3156_ = v___x_3187_;
v___y_3157_ = v_locals_3176_;
v___y_3158_ = v___y_3180_;
v___y_3159_ = v_pending_3174_;
v___y_3160_ = v___y_3178_;
v___y_3161_ = v_top_3175_;
v___y_3162_ = v___x_3188_;
goto v___jp_3150_;
}
else
{
if (lean_obj_tag(v_a_3185_) == 0)
{
v_pending_3046_ = v_pending_3174_;
v_top_3047_ = v_top_3175_;
v_locals_3048_ = v_locals_3176_;
v___y_3049_ = v___y_3177_;
v___y_3050_ = v___y_3178_;
v___y_3051_ = v___y_3179_;
v___y_3052_ = v___y_3180_;
v___y_3053_ = v___y_3181_;
v___y_3054_ = v___y_3182_;
v___y_3055_ = v___y_3183_;
goto v___jp_3045_;
}
else
{
lean_dec_ref_known(v_a_3185_, 1);
v___y_3151_ = v___y_3181_;
v___y_3152_ = v___y_3182_;
v___y_3153_ = v___y_3183_;
v___y_3154_ = v___y_3179_;
v___y_3155_ = v___y_3177_;
v___y_3156_ = v___x_3187_;
v___y_3157_ = v_locals_3176_;
v___y_3158_ = v___y_3180_;
v___y_3159_ = v_pending_3174_;
v___y_3160_ = v___y_3178_;
v___y_3161_ = v_top_3175_;
v___y_3162_ = v___x_3188_;
goto v___jp_3150_;
}
}
}
else
{
lean_object* v_a_3189_; lean_object* v___x_3191_; uint8_t v_isShared_3192_; uint8_t v_isSharedCheck_3196_; 
lean_dec_ref(v_locals_3176_);
lean_dec_ref(v_top_3175_);
lean_dec_ref(v_pending_3174_);
lean_dec_ref(v_dec_3022_);
v_a_3189_ = lean_ctor_get(v___x_3184_, 0);
v_isSharedCheck_3196_ = !lean_is_exclusive(v___x_3184_);
if (v_isSharedCheck_3196_ == 0)
{
v___x_3191_ = v___x_3184_;
v_isShared_3192_ = v_isSharedCheck_3196_;
goto v_resetjp_3190_;
}
else
{
lean_inc(v_a_3189_);
lean_dec(v___x_3184_);
v___x_3191_ = lean_box(0);
v_isShared_3192_ = v_isSharedCheck_3196_;
goto v_resetjp_3190_;
}
v_resetjp_3190_:
{
lean_object* v___x_3194_; 
if (v_isShared_3192_ == 0)
{
v___x_3194_ = v___x_3191_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v_a_3189_);
v___x_3194_ = v_reuseFailAlloc_3195_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
return v___x_3194_;
}
}
}
}
v___jp_3197_:
{
if (v___y_3209_ == 0)
{
v_pending_3174_ = v___y_3198_;
v_top_3175_ = v___y_3200_;
v_locals_3176_ = v___y_3206_;
v___y_3177_ = v___y_3208_;
v___y_3178_ = v___y_3205_;
v___y_3179_ = v___y_3199_;
v___y_3180_ = v___y_3201_;
v___y_3181_ = v___y_3207_;
v___y_3182_ = v___y_3203_;
v___y_3183_ = v___y_3204_;
goto v___jp_3173_;
}
else
{
lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v_localStM_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3210_ = lean_array_get_size(v___y_3206_);
v___x_3211_ = lean_unsigned_to_nat(1u);
v___x_3212_ = lean_nat_add(v___x_3210_, v___x_3211_);
lean_inc(v___y_3200_);
v___x_3213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3213_, 0, v___y_3200_);
lean_ctor_set(v___x_3213_, 1, v___x_3212_);
lean_inc_ref(v_monadInfo_3043_);
v___x_3214_ = l_Lean_Elab_Do_ControlStack_breakT(v_monadInfo_3043_, v___y_3200_);
v_localStM_3215_ = lean_ctor_get(v___x_3214_, 3);
lean_inc_ref(v_localStM_3215_);
lean_inc(v___y_3202_);
v___x_3216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3216_, 0, v___y_3202_);
v___x_3217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3217_, 0, v___x_3216_);
lean_ctor_set(v___x_3217_, 1, v___x_3213_);
v___x_3218_ = lean_array_push(v___y_3198_, v___x_3217_);
v___x_3219_ = lean_array_push(v___y_3206_, v_localStM_3215_);
v_pending_3174_ = v___x_3218_;
v_top_3175_ = v___x_3214_;
v_locals_3176_ = v___x_3219_;
v___y_3177_ = v___y_3208_;
v___y_3178_ = v___y_3205_;
v___y_3179_ = v___y_3199_;
v___y_3180_ = v___y_3201_;
v___y_3181_ = v___y_3207_;
v___y_3182_ = v___y_3203_;
v___y_3183_ = v___y_3204_;
goto v___jp_3173_;
}
}
v___jp_3220_:
{
lean_object* v_breaks_3231_; lean_object* v_returns_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; 
v_breaks_3231_ = lean_ctor_get(v_info_3021_, 0);
v_returns_3232_ = lean_ctor_get(v_info_3021_, 2);
v___x_3233_ = lean_box(0);
v___x_3234_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__5(v___x_3233_, v_returns_3232_);
v___x_3235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3235_, 0, v_top_3222_);
lean_ctor_set(v___x_3235_, 1, v_locals_3223_);
v___x_3236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3236_, 0, v___y_3221_);
lean_ctor_set(v___x_3236_, 1, v___x_3235_);
lean_inc_ref(v_monadInfo_3043_);
v___x_3237_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__6___redArg(v_monadInfo_3043_, v___x_3234_, v___x_3236_, v___y_3224_);
lean_dec(v___x_3234_);
if (lean_obj_tag(v___x_3237_) == 0)
{
lean_object* v_a_3238_; lean_object* v___x_3239_; 
v_a_3238_ = lean_ctor_get(v___x_3237_, 0);
lean_inc(v_a_3238_);
lean_dec_ref_known(v___x_3237_, 1);
v___x_3239_ = l_Lean_Elab_Do_getBreakCont___redArg(v___y_3224_);
if (lean_obj_tag(v___x_3239_) == 0)
{
lean_object* v_snd_3240_; lean_object* v_a_3241_; lean_object* v_fst_3242_; lean_object* v_fst_3243_; lean_object* v_snd_3244_; lean_object* v___x_3245_; uint8_t v___x_3246_; 
v_snd_3240_ = lean_ctor_get(v_a_3238_, 1);
lean_inc(v_snd_3240_);
v_a_3241_ = lean_ctor_get(v___x_3239_, 0);
lean_inc(v_a_3241_);
lean_dec_ref_known(v___x_3239_, 1);
v_fst_3242_ = lean_ctor_get(v_a_3238_, 0);
lean_inc(v_fst_3242_);
lean_dec(v_a_3238_);
v_fst_3243_ = lean_ctor_get(v_snd_3240_, 0);
lean_inc(v_fst_3243_);
v_snd_3244_ = lean_ctor_get(v_snd_3240_, 1);
lean_inc(v_snd_3244_);
lean_dec(v_snd_3240_);
v___x_3245_ = lean_box(0);
v___x_3246_ = l_Lean_NameSet_contains(v_breaks_3231_, v___x_3245_);
if (v___x_3246_ == 0)
{
lean_dec(v_a_3241_);
v___y_3198_ = v_fst_3242_;
v___y_3199_ = v___y_3226_;
v___y_3200_ = v_fst_3243_;
v___y_3201_ = v___y_3227_;
v___y_3202_ = v___x_3245_;
v___y_3203_ = v___y_3229_;
v___y_3204_ = v___y_3230_;
v___y_3205_ = v___y_3225_;
v___y_3206_ = v_snd_3244_;
v___y_3207_ = v___y_3228_;
v___y_3208_ = v___y_3224_;
v___y_3209_ = v___x_3246_;
goto v___jp_3197_;
}
else
{
if (lean_obj_tag(v_a_3241_) == 0)
{
v_pending_3174_ = v_fst_3242_;
v_top_3175_ = v_fst_3243_;
v_locals_3176_ = v_snd_3244_;
v___y_3177_ = v___y_3224_;
v___y_3178_ = v___y_3225_;
v___y_3179_ = v___y_3226_;
v___y_3180_ = v___y_3227_;
v___y_3181_ = v___y_3228_;
v___y_3182_ = v___y_3229_;
v___y_3183_ = v___y_3230_;
goto v___jp_3173_;
}
else
{
lean_dec_ref_known(v_a_3241_, 1);
v___y_3198_ = v_fst_3242_;
v___y_3199_ = v___y_3226_;
v___y_3200_ = v_fst_3243_;
v___y_3201_ = v___y_3227_;
v___y_3202_ = v___x_3245_;
v___y_3203_ = v___y_3229_;
v___y_3204_ = v___y_3230_;
v___y_3205_ = v___y_3225_;
v___y_3206_ = v_snd_3244_;
v___y_3207_ = v___y_3228_;
v___y_3208_ = v___y_3224_;
v___y_3209_ = v___x_3246_;
goto v___jp_3197_;
}
}
}
else
{
lean_object* v_a_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3254_; 
lean_dec(v_a_3238_);
lean_dec_ref(v_dec_3022_);
v_a_3247_ = lean_ctor_get(v___x_3239_, 0);
v_isSharedCheck_3254_ = !lean_is_exclusive(v___x_3239_);
if (v_isSharedCheck_3254_ == 0)
{
v___x_3249_ = v___x_3239_;
v_isShared_3250_ = v_isSharedCheck_3254_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_a_3247_);
lean_dec(v___x_3239_);
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
else
{
lean_object* v_a_3255_; lean_object* v___x_3257_; uint8_t v_isShared_3258_; uint8_t v_isSharedCheck_3262_; 
lean_dec_ref(v_dec_3022_);
v_a_3255_ = lean_ctor_get(v___x_3237_, 0);
v_isSharedCheck_3262_ = !lean_is_exclusive(v___x_3237_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3257_ = v___x_3237_;
v_isShared_3258_ = v_isSharedCheck_3262_;
goto v_resetjp_3256_;
}
else
{
lean_inc(v_a_3255_);
lean_dec(v___x_3237_);
v___x_3257_ = lean_box(0);
v_isShared_3258_ = v_isSharedCheck_3262_;
goto v_resetjp_3256_;
}
v_resetjp_3256_:
{
lean_object* v___x_3260_; 
if (v_isShared_3258_ == 0)
{
v___x_3260_ = v___x_3257_;
goto v_reusejp_3259_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v_a_3255_);
v___x_3260_ = v_reuseFailAlloc_3261_;
goto v_reusejp_3259_;
}
v_reusejp_3259_:
{
return v___x_3260_;
}
}
}
}
v___jp_3263_:
{
lean_object* v___x_3276_; lean_object* v___x_3277_; uint8_t v___x_3278_; 
v___x_3276_ = lean_array_get_size(v___y_3265_);
v___x_3277_ = lean_unsigned_to_nat(0u);
v___x_3278_ = lean_nat_dec_eq(v___x_3276_, v___x_3277_);
if (v___x_3278_ == 0)
{
lean_object* v___x_3279_; lean_object* v_localStM_3280_; lean_object* v___x_3281_; 
lean_inc_ref(v_monadInfo_3043_);
v___x_3279_ = l_Lean_Elab_Do_ControlStack_stateT(v_monadInfo_3043_, v___y_3265_, v___y_3264_, v_top_3267_);
v_localStM_3280_ = lean_ctor_get(v___x_3279_, 3);
lean_inc_ref(v_localStM_3280_);
v___x_3281_ = lean_array_push(v_locals_3268_, v_localStM_3280_);
v___y_3221_ = v_pending_3266_;
v_top_3222_ = v___x_3279_;
v_locals_3223_ = v___x_3281_;
v___y_3224_ = v___y_3269_;
v___y_3225_ = v___y_3270_;
v___y_3226_ = v___y_3271_;
v___y_3227_ = v___y_3272_;
v___y_3228_ = v___y_3273_;
v___y_3229_ = v___y_3274_;
v___y_3230_ = v___y_3275_;
goto v___jp_3220_;
}
else
{
lean_dec_ref(v___y_3265_);
lean_dec_ref(v___y_3264_);
v___y_3221_ = v_pending_3266_;
v_top_3222_ = v_top_3267_;
v_locals_3223_ = v_locals_3268_;
v___y_3224_ = v___y_3269_;
v___y_3225_ = v___y_3270_;
v___y_3226_ = v___y_3271_;
v___y_3227_ = v___y_3272_;
v___y_3228_ = v___y_3273_;
v___y_3229_ = v___y_3274_;
v___y_3230_ = v___y_3275_;
goto v___jp_3220_;
}
}
v___jp_3282_:
{
size_t v_sz_3284_; size_t v___x_3285_; lean_object* v___x_3286_; size_t v_sz_3287_; lean_object* v___x_3288_; 
v_sz_3284_ = lean_array_size(v___y_3283_);
v___x_3285_ = ((size_t)0ULL);
lean_inc_ref(v___y_3283_);
v___x_3286_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_mutVarNames_spec__0(v_sz_3284_, v___x_3285_, v___y_3283_);
v_sz_3287_ = lean_array_size(v___x_3286_);
v___x_3288_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Do_Control_0__Lean_Elab_Do_ControlStack_stateT_get_u03c3_spec__0___redArg(v_sz_3287_, v___x_3285_, v___x_3286_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_);
if (lean_obj_tag(v___x_3288_) == 0)
{
lean_object* v_a_3289_; lean_object* v_u_3290_; lean_object* v___x_3291_; 
v_a_3289_ = lean_ctor_get(v___x_3288_, 0);
lean_inc(v_a_3289_);
lean_dec_ref_known(v___x_3288_, 1);
v_u_3290_ = lean_ctor_get(v_monadInfo_3043_, 1);
lean_inc(v_u_3290_);
v___x_3291_ = l_Lean_Meta_mkProdN(v_a_3289_, v_u_3290_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_);
if (lean_obj_tag(v___x_3291_) == 0)
{
lean_object* v_a_3292_; lean_object* v_returns_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; uint8_t v___x_3297_; 
v_a_3292_ = lean_ctor_get(v___x_3291_, 0);
lean_inc(v_a_3292_);
lean_dec_ref_known(v___x_3291_, 1);
v_returns_3293_ = lean_ctor_get(v_info_3021_, 2);
v___x_3294_ = ((lean_object*)(l_Lean_Elab_Do_ControlLifter_ofCont___closed__5));
lean_inc_ref(v_monadInfo_3043_);
v___x_3295_ = l_Lean_Elab_Do_ControlStack_base(v_monadInfo_3043_);
v___x_3296_ = lean_box(0);
v___x_3297_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v___x_3296_, v_returns_3293_);
if (v___x_3297_ == 0)
{
v___y_3264_ = v_a_3292_;
v___y_3265_ = v___y_3283_;
v_pending_3266_ = v___x_3294_;
v_top_3267_ = v___x_3295_;
v_locals_3268_ = v___x_3294_;
v___y_3269_ = v_a_3023_;
v___y_3270_ = v_a_3024_;
v___y_3271_ = v_a_3025_;
v___y_3272_ = v_a_3026_;
v___y_3273_ = v_a_3027_;
v___y_3274_ = v_a_3028_;
v___y_3275_ = v_a_3029_;
goto v___jp_3263_;
}
else
{
lean_object* v___x_3298_; 
v___x_3298_ = l_Lean_Elab_Do_getReturnCont___redArg(v_a_3023_);
if (lean_obj_tag(v___x_3298_) == 0)
{
lean_object* v_a_3299_; lean_object* v_resultType_3300_; lean_object* v___x_3302_; uint8_t v_isShared_3303_; uint8_t v_isSharedCheck_3314_; 
v_a_3299_ = lean_ctor_get(v___x_3298_, 0);
lean_inc(v_a_3299_);
lean_dec_ref_known(v___x_3298_, 1);
v_resultType_3300_ = lean_ctor_get(v_a_3299_, 0);
v_isSharedCheck_3314_ = !lean_is_exclusive(v_a_3299_);
if (v_isSharedCheck_3314_ == 0)
{
lean_object* v_unused_3315_; 
v_unused_3315_ = lean_ctor_get(v_a_3299_, 1);
lean_dec(v_unused_3315_);
v___x_3302_ = v_a_3299_;
v_isShared_3303_ = v_isSharedCheck_3314_;
goto v_resetjp_3301_;
}
else
{
lean_inc(v_resultType_3300_);
lean_dec(v_a_3299_);
v___x_3302_ = lean_box(0);
v_isShared_3303_ = v_isSharedCheck_3314_;
goto v_resetjp_3301_;
}
v_resetjp_3301_:
{
lean_object* v___x_3305_; 
lean_inc_ref(v_resultType_3300_);
if (v_isShared_3303_ == 0)
{
lean_ctor_set(v___x_3302_, 1, v_resultType_3300_);
lean_ctor_set(v___x_3302_, 0, v___x_3296_);
v___x_3305_ = v___x_3302_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3313_; 
v_reuseFailAlloc_3313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3313_, 0, v___x_3296_);
lean_ctor_set(v_reuseFailAlloc_3313_, 1, v_resultType_3300_);
v___x_3305_ = v_reuseFailAlloc_3313_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v_localStM_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; 
v___x_3306_ = lean_obj_once(&l_Lean_Elab_Do_ControlLifter_ofCont___closed__7, &l_Lean_Elab_Do_ControlLifter_ofCont___closed__7_once, _init_l_Lean_Elab_Do_ControlLifter_ofCont___closed__7);
lean_inc_ref(v___x_3295_);
v___x_3307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3307_, 0, v___x_3295_);
lean_ctor_set(v___x_3307_, 1, v___x_3306_);
lean_inc_ref(v_monadInfo_3043_);
v___x_3308_ = l_Lean_Elab_Do_ControlStack_earlyReturnT(v_monadInfo_3043_, v_resultType_3300_, v___x_3295_);
v_localStM_3309_ = lean_ctor_get(v___x_3308_, 3);
lean_inc_ref(v_localStM_3309_);
v___x_3310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3310_, 0, v___x_3305_);
lean_ctor_set(v___x_3310_, 1, v___x_3307_);
v___x_3311_ = lean_array_push(v___x_3294_, v___x_3310_);
v___x_3312_ = lean_array_push(v___x_3294_, v_localStM_3309_);
v___y_3264_ = v_a_3292_;
v___y_3265_ = v___y_3283_;
v_pending_3266_ = v___x_3311_;
v_top_3267_ = v___x_3308_;
v_locals_3268_ = v___x_3312_;
v___y_3269_ = v_a_3023_;
v___y_3270_ = v_a_3024_;
v___y_3271_ = v_a_3025_;
v___y_3272_ = v_a_3026_;
v___y_3273_ = v_a_3027_;
v___y_3274_ = v_a_3028_;
v___y_3275_ = v_a_3029_;
goto v___jp_3263_;
}
}
}
else
{
lean_object* v_a_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3323_; 
lean_dec_ref(v___x_3295_);
lean_dec(v_a_3292_);
lean_dec_ref(v___y_3283_);
lean_dec_ref(v_dec_3022_);
v_a_3316_ = lean_ctor_get(v___x_3298_, 0);
v_isSharedCheck_3323_ = !lean_is_exclusive(v___x_3298_);
if (v_isSharedCheck_3323_ == 0)
{
v___x_3318_ = v___x_3298_;
v_isShared_3319_ = v_isSharedCheck_3323_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_a_3316_);
lean_dec(v___x_3298_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3323_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v___x_3321_; 
if (v_isShared_3319_ == 0)
{
v___x_3321_ = v___x_3318_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3322_; 
v_reuseFailAlloc_3322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3322_, 0, v_a_3316_);
v___x_3321_ = v_reuseFailAlloc_3322_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
return v___x_3321_;
}
}
}
}
}
else
{
lean_object* v_a_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3331_; 
lean_dec_ref(v___y_3283_);
lean_dec_ref(v_dec_3022_);
v_a_3324_ = lean_ctor_get(v___x_3291_, 0);
v_isSharedCheck_3331_ = !lean_is_exclusive(v___x_3291_);
if (v_isSharedCheck_3331_ == 0)
{
v___x_3326_ = v___x_3291_;
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_a_3324_);
lean_dec(v___x_3291_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
lean_object* v___x_3329_; 
if (v_isShared_3327_ == 0)
{
v___x_3329_ = v___x_3326_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3330_; 
v_reuseFailAlloc_3330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3330_, 0, v_a_3324_);
v___x_3329_ = v_reuseFailAlloc_3330_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
return v___x_3329_;
}
}
}
}
else
{
lean_object* v_a_3332_; lean_object* v___x_3334_; uint8_t v_isShared_3335_; uint8_t v_isSharedCheck_3339_; 
lean_dec_ref(v___y_3283_);
lean_dec_ref(v_dec_3022_);
v_a_3332_ = lean_ctor_get(v___x_3288_, 0);
v_isSharedCheck_3339_ = !lean_is_exclusive(v___x_3288_);
if (v_isSharedCheck_3339_ == 0)
{
v___x_3334_ = v___x_3288_;
v_isShared_3335_ = v_isSharedCheck_3339_;
goto v_resetjp_3333_;
}
else
{
lean_inc(v_a_3332_);
lean_dec(v___x_3288_);
v___x_3334_ = lean_box(0);
v_isShared_3335_ = v_isSharedCheck_3339_;
goto v_resetjp_3333_;
}
v_resetjp_3333_:
{
lean_object* v___x_3337_; 
if (v_isShared_3335_ == 0)
{
v___x_3337_ = v___x_3334_;
goto v_reusejp_3336_;
}
else
{
lean_object* v_reuseFailAlloc_3338_; 
v_reuseFailAlloc_3338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3338_, 0, v_a_3332_);
v___x_3337_ = v_reuseFailAlloc_3338_;
goto v_reusejp_3336_;
}
v_reusejp_3336_:
{
return v___x_3337_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlLifter_ofCont___boxed(lean_object* v_info_3351_, lean_object* v_dec_3352_, lean_object* v_a_3353_, lean_object* v_a_3354_, lean_object* v_a_3355_, lean_object* v_a_3356_, lean_object* v_a_3357_, lean_object* v_a_3358_, lean_object* v_a_3359_, lean_object* v_a_3360_){
_start:
{
lean_object* v_res_3361_; 
v_res_3361_ = l_Lean_Elab_Do_ControlLifter_ofCont(v_info_3351_, v_dec_3352_, v_a_3353_, v_a_3354_, v_a_3355_, v_a_3356_, v_a_3357_, v_a_3358_, v_a_3359_);
lean_dec(v_a_3359_);
lean_dec_ref(v_a_3358_);
lean_dec(v_a_3357_);
lean_dec_ref(v_a_3356_);
lean_dec(v_a_3355_);
lean_dec_ref(v_a_3354_);
lean_dec_ref(v_a_3353_);
lean_dec_ref(v_info_3351_);
return v_res_3361_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__1(lean_object* v___x_3362_, lean_object* v_as_3363_, lean_object* v_as_x27_3364_, lean_object* v_b_3365_, lean_object* v_a_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_){
_start:
{
lean_object* v___x_3375_; 
v___x_3375_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__1___redArg(v___x_3362_, v_as_x27_3364_, v_b_3365_, v___y_3367_);
return v___x_3375_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__1___boxed(lean_object* v___x_3376_, lean_object* v_as_3377_, lean_object* v_as_x27_3378_, lean_object* v_b_3379_, lean_object* v_a_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_){
_start:
{
lean_object* v_res_3389_; 
v_res_3389_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__1(v___x_3376_, v_as_3377_, v_as_x27_3378_, v_b_3379_, v_a_3380_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_, v___y_3385_, v___y_3386_, v___y_3387_);
lean_dec(v___y_3387_);
lean_dec_ref(v___y_3386_);
lean_dec(v___y_3385_);
lean_dec_ref(v___y_3384_);
lean_dec(v___y_3383_);
lean_dec_ref(v___y_3382_);
lean_dec_ref(v___y_3381_);
lean_dec(v_as_x27_3378_);
lean_dec(v_as_3377_);
return v_res_3389_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__2(lean_object* v___x_3390_, lean_object* v_as_3391_, lean_object* v_as_x27_3392_, lean_object* v_b_3393_, lean_object* v_a_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_){
_start:
{
lean_object* v___x_3403_; 
v___x_3403_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__2___redArg(v___x_3390_, v_as_x27_3392_, v_b_3393_, v___y_3395_);
return v___x_3403_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__2___boxed(lean_object* v___x_3404_, lean_object* v_as_3405_, lean_object* v_as_x27_3406_, lean_object* v_b_3407_, lean_object* v_a_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_){
_start:
{
lean_object* v_res_3417_; 
v_res_3417_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__2(v___x_3404_, v_as_3405_, v_as_x27_3406_, v_b_3407_, v_a_3408_, v___y_3409_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_);
lean_dec(v___y_3415_);
lean_dec_ref(v___y_3414_);
lean_dec(v___y_3413_);
lean_dec_ref(v___y_3412_);
lean_dec(v___y_3411_);
lean_dec_ref(v___y_3410_);
lean_dec_ref(v___y_3409_);
lean_dec(v_as_x27_3406_);
lean_dec(v_as_3405_);
return v_res_3417_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__3(lean_object* v_as_3418_, lean_object* v_as_x27_3419_, lean_object* v_b_3420_, lean_object* v_a_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_){
_start:
{
lean_object* v___x_3430_; 
v___x_3430_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__3___redArg(v_as_x27_3419_, v_b_3420_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_, v___y_3427_, v___y_3428_);
return v___x_3430_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__3___boxed(lean_object* v_as_3431_, lean_object* v_as_x27_3432_, lean_object* v_b_3433_, lean_object* v_a_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_){
_start:
{
lean_object* v_res_3443_; 
v_res_3443_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__3(v_as_3431_, v_as_x27_3432_, v_b_3433_, v_a_3434_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_, v___y_3439_, v___y_3440_, v___y_3441_);
lean_dec(v___y_3441_);
lean_dec_ref(v___y_3440_);
lean_dec(v___y_3439_);
lean_dec_ref(v___y_3438_);
lean_dec(v___y_3437_);
lean_dec_ref(v___y_3436_);
lean_dec_ref(v___y_3435_);
lean_dec(v_as_x27_3432_);
lean_dec(v_as_3431_);
return v_res_3443_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4(lean_object* v___x_3444_, lean_object* v_as_3445_, size_t v_sz_3446_, size_t v_i_3447_, lean_object* v_b_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_){
_start:
{
lean_object* v___x_3457_; 
v___x_3457_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4___redArg(v___x_3444_, v_as_3445_, v_sz_3446_, v_i_3447_, v_b_3448_);
return v___x_3457_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4___boxed(lean_object* v___x_3458_, lean_object* v_as_3459_, lean_object* v_sz_3460_, lean_object* v_i_3461_, lean_object* v_b_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_){
_start:
{
size_t v_sz_boxed_3471_; size_t v_i_boxed_3472_; lean_object* v_res_3473_; 
v_sz_boxed_3471_ = lean_unbox_usize(v_sz_3460_);
lean_dec(v_sz_3460_);
v_i_boxed_3472_ = lean_unbox_usize(v_i_3461_);
lean_dec(v_i_3461_);
v_res_3473_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__4(v___x_3458_, v_as_3459_, v_sz_boxed_3471_, v_i_boxed_3472_, v_b_3462_, v___y_3463_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
lean_dec(v___y_3469_);
lean_dec_ref(v___y_3468_);
lean_dec(v___y_3467_);
lean_dec_ref(v___y_3466_);
lean_dec(v___y_3465_);
lean_dec_ref(v___y_3464_);
lean_dec_ref(v___y_3463_);
lean_dec_ref(v_as_3459_);
return v_res_3473_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__6(lean_object* v___x_3474_, lean_object* v_as_3475_, lean_object* v_as_x27_3476_, lean_object* v_b_3477_, lean_object* v_a_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_){
_start:
{
lean_object* v___x_3487_; 
v___x_3487_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__6___redArg(v___x_3474_, v_as_x27_3476_, v_b_3477_, v___y_3479_);
return v___x_3487_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__6___boxed(lean_object* v___x_3488_, lean_object* v_as_3489_, lean_object* v_as_x27_3490_, lean_object* v_b_3491_, lean_object* v_a_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_){
_start:
{
lean_object* v_res_3501_; 
v_res_3501_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_ofCont_spec__6(v___x_3488_, v_as_3489_, v_as_x27_3490_, v_b_3491_, v_a_3492_, v___y_3493_, v___y_3494_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
lean_dec(v___y_3499_);
lean_dec_ref(v___y_3498_);
lean_dec(v___y_3497_);
lean_dec_ref(v___y_3496_);
lean_dec(v___y_3495_);
lean_dec_ref(v___y_3494_);
lean_dec_ref(v___y_3493_);
lean_dec(v_as_x27_3490_);
lean_dec(v_as_3489_);
return v_res_3501_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___lam__1(lean_object* v_fst_3502_, lean_object* v___x_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_){
_start:
{
if (lean_obj_tag(v_fst_3502_) == 0)
{
lean_object* v___x_3512_; 
v___x_3512_ = l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___redArg(v___x_3503_, v___y_3507_, v___y_3508_, v___y_3509_, v___y_3510_);
return v___x_3512_;
}
else
{
lean_object* v_val_3513_; lean_object* v___x_3514_; 
lean_dec_ref(v___x_3503_);
v_val_3513_ = lean_ctor_get(v_fst_3502_, 0);
lean_inc(v_val_3513_);
lean_dec_ref_known(v_fst_3502_, 1);
lean_inc(v___y_3510_);
lean_inc_ref(v___y_3509_);
lean_inc(v___y_3508_);
lean_inc_ref(v___y_3507_);
lean_inc(v___y_3506_);
lean_inc_ref(v___y_3505_);
lean_inc_ref(v___y_3504_);
v___x_3514_ = lean_apply_8(v_val_3513_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_, v___y_3509_, v___y_3510_, lean_box(0));
return v___x_3514_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___lam__1___boxed(lean_object* v_fst_3515_, lean_object* v___x_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_){
_start:
{
lean_object* v_res_3525_; 
v_res_3525_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___lam__1(v_fst_3515_, v___x_3516_, v___y_3517_, v___y_3518_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_);
lean_dec(v___y_3523_);
lean_dec_ref(v___y_3522_);
lean_dec(v___y_3521_);
lean_dec_ref(v___y_3520_);
lean_dec(v___y_3519_);
lean_dec_ref(v___y_3518_);
lean_dec_ref(v___y_3517_);
return v_res_3525_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___lam__0(lean_object* v_snd_3526_, lean_object* v___x_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_){
_start:
{
if (lean_obj_tag(v_snd_3526_) == 0)
{
lean_object* v___x_3536_; 
v___x_3536_ = l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___redArg(v___x_3527_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_);
return v___x_3536_;
}
else
{
lean_object* v_val_3537_; lean_object* v___x_3538_; 
lean_dec_ref(v___x_3527_);
v_val_3537_ = lean_ctor_get(v_snd_3526_, 0);
lean_inc(v_val_3537_);
lean_dec_ref_known(v_snd_3526_, 1);
lean_inc(v___y_3534_);
lean_inc_ref(v___y_3533_);
lean_inc(v___y_3532_);
lean_inc_ref(v___y_3531_);
lean_inc(v___y_3530_);
lean_inc_ref(v___y_3529_);
lean_inc_ref(v___y_3528_);
v___x_3538_ = lean_apply_8(v_val_3537_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_, lean_box(0));
return v___x_3538_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___lam__0___boxed(lean_object* v_snd_3539_, lean_object* v___x_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_, lean_object* v___y_3543_, lean_object* v___y_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_){
_start:
{
lean_object* v_res_3549_; 
v_res_3549_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___lam__0(v_snd_3539_, v___x_3540_, v___y_3541_, v___y_3542_, v___y_3543_, v___y_3544_, v___y_3545_, v___y_3546_, v___y_3547_);
lean_dec(v___y_3547_);
lean_dec_ref(v___y_3546_);
lean_dec(v___y_3545_);
lean_dec_ref(v___y_3544_);
lean_dec(v___y_3543_);
lean_dec_ref(v___y_3542_);
lean_dec_ref(v___y_3541_);
return v_res_3549_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_3551_; lean_object* v___x_3552_; 
v___x_3551_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___closed__0));
v___x_3552_ = l_Lean_stringToMessageData(v___x_3551_);
return v___x_3552_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg(lean_object* v_as_x27_3553_, lean_object* v_b_3554_){
_start:
{
if (lean_obj_tag(v_as_x27_3553_) == 0)
{
lean_object* v___x_3556_; 
v___x_3556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3556_, 0, v_b_3554_);
return v___x_3556_;
}
else
{
lean_object* v_head_3557_; lean_object* v_snd_3558_; lean_object* v_tail_3559_; lean_object* v_fst_3560_; lean_object* v_fst_3561_; lean_object* v_snd_3562_; lean_object* v___x_3563_; lean_object* v___y_3564_; lean_object* v___y_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; 
v_head_3557_ = lean_ctor_get(v_as_x27_3553_, 0);
v_snd_3558_ = lean_ctor_get(v_head_3557_, 1);
v_tail_3559_ = lean_ctor_get(v_as_x27_3553_, 1);
v_fst_3560_ = lean_ctor_get(v_head_3557_, 0);
v_fst_3561_ = lean_ctor_get(v_snd_3558_, 0);
v_snd_3562_ = lean_ctor_get(v_snd_3558_, 1);
v___x_3563_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___closed__1, &l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___closed__1);
lean_inc(v_snd_3562_);
v___y_3564_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___y_3564_, 0, v_snd_3562_);
lean_closure_set(v___y_3564_, 1, v___x_3563_);
lean_inc(v_fst_3561_);
v___y_3565_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___lam__1___boxed), 10, 2);
lean_closure_set(v___y_3565_, 0, v_fst_3561_);
lean_closure_set(v___y_3565_, 1, v___x_3563_);
v___x_3566_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3566_, 0, v___y_3565_);
lean_ctor_set(v___x_3566_, 1, v___y_3564_);
lean_inc(v_fst_3560_);
v___x_3567_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_3560_, v___x_3566_, v_b_3554_);
v_as_x27_3553_ = v_tail_3559_;
v_b_3554_ = v___x_3567_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___boxed(lean_object* v_as_x27_3569_, lean_object* v_b_3570_, lean_object* v___y_3571_){
_start:
{
lean_object* v_res_3572_; 
v_res_3572_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg(v_as_x27_3569_, v_b_3570_);
lean_dec(v_as_x27_3569_);
return v_res_3572_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_lift_spec__4(lean_object* v_init_3573_, lean_object* v_x_3574_){
_start:
{
if (lean_obj_tag(v_x_3574_) == 0)
{
lean_object* v_k_3575_; lean_object* v_v_3576_; lean_object* v_l_3577_; lean_object* v_r_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; 
v_k_3575_ = lean_ctor_get(v_x_3574_, 1);
v_v_3576_ = lean_ctor_get(v_x_3574_, 2);
v_l_3577_ = lean_ctor_get(v_x_3574_, 3);
v_r_3578_ = lean_ctor_get(v_x_3574_, 4);
v___x_3579_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_lift_spec__4(v_init_3573_, v_r_3578_);
lean_inc(v_v_3576_);
lean_inc(v_k_3575_);
v___x_3580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3580_, 0, v_k_3575_);
lean_ctor_set(v___x_3580_, 1, v_v_3576_);
v___x_3581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3581_, 0, v___x_3580_);
lean_ctor_set(v___x_3581_, 1, v___x_3579_);
v_init_3573_ = v___x_3581_;
v_x_3574_ = v_l_3577_;
goto _start;
}
else
{
return v_init_3573_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_lift_spec__4___boxed(lean_object* v_init_3583_, lean_object* v_x_3584_){
_start:
{
lean_object* v_res_3585_; 
v_res_3585_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_lift_spec__4(v_init_3583_, v_x_3584_);
lean_dec(v_x_3584_);
return v_res_3585_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__1___redArg(lean_object* v_as_x27_3586_, lean_object* v_b_3587_){
_start:
{
if (lean_obj_tag(v_as_x27_3586_) == 0)
{
lean_object* v___x_3589_; 
v___x_3589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3589_, 0, v_b_3587_);
return v___x_3589_;
}
else
{
lean_object* v_head_3590_; lean_object* v_snd_3591_; lean_object* v_tail_3592_; lean_object* v_fst_3593_; lean_object* v_fst_3594_; lean_object* v_snd_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; 
v_head_3590_ = lean_ctor_get(v_as_x27_3586_, 0);
v_snd_3591_ = lean_ctor_get(v_head_3590_, 1);
v_tail_3592_ = lean_ctor_get(v_as_x27_3586_, 1);
v_fst_3593_ = lean_ctor_get(v_head_3590_, 0);
v_fst_3594_ = lean_ctor_get(v_snd_3591_, 0);
v_snd_3595_ = lean_ctor_get(v_snd_3591_, 1);
lean_inc(v_snd_3595_);
v___x_3596_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___boxed), 10, 1);
lean_closure_set(v___x_3596_, 0, v_snd_3595_);
lean_inc(v_fst_3594_);
v___x_3597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3597_, 0, v_fst_3594_);
lean_ctor_set(v___x_3597_, 1, v___x_3596_);
v___x_3598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3598_, 0, v___x_3597_);
lean_inc(v_fst_3593_);
v___x_3599_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_3593_, v___x_3598_, v_b_3587_);
v_as_x27_3586_ = v_tail_3592_;
v_b_3587_ = v___x_3599_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__1___redArg___boxed(lean_object* v_as_x27_3601_, lean_object* v_b_3602_, lean_object* v___y_3603_){
_start:
{
lean_object* v_res_3604_; 
v_res_3604_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__1___redArg(v_as_x27_3601_, v_b_3602_);
lean_dec(v_as_x27_3601_);
return v_res_3604_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___lam__0(lean_object* v___x_3605_, lean_object* v_x_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_){
_start:
{
lean_object* v___x_3615_; 
v___x_3615_ = l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___redArg(v___x_3605_, v___y_3610_, v___y_3611_, v___y_3612_, v___y_3613_);
return v___x_3615_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___lam__0___boxed(lean_object* v___x_3616_, lean_object* v_x_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_, lean_object* v___y_3625_){
_start:
{
lean_object* v_res_3626_; 
v_res_3626_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___lam__0(v___x_3616_, v_x_3617_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_, v___y_3624_);
lean_dec(v___y_3624_);
lean_dec_ref(v___y_3623_);
lean_dec(v___y_3622_);
lean_dec_ref(v___y_3621_);
lean_dec(v___y_3620_);
lean_dec_ref(v___y_3619_);
lean_dec_ref(v___y_3618_);
lean_dec_ref(v_x_3617_);
return v_res_3626_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_3627_; lean_object* v___f_3628_; 
v___x_3627_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___closed__1, &l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___closed__1);
v___f_3628_ = lean_alloc_closure((void*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_3628_, 0, v___x_3627_);
return v___f_3628_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_3629_; lean_object* v___x_3630_; 
v___x_3629_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___closed__1, &l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg___closed__1);
v___x_3630_ = lean_alloc_closure((void*)(l_Lean_throwError___at___00Lean_Elab_Do_ControlStack_unStM_spec__0___boxed), 10, 2);
lean_closure_set(v___x_3630_, 0, lean_box(0));
lean_closure_set(v___x_3630_, 1, v___x_3629_);
return v___x_3630_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_3631_; lean_object* v___x_3632_; 
v___x_3631_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__1, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__1_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__1);
v___x_3632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3632_, 0, v___x_3631_);
lean_ctor_set(v___x_3632_, 1, v___x_3631_);
return v___x_3632_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg(lean_object* v_init_3633_, lean_object* v_x_3634_){
_start:
{
if (lean_obj_tag(v_x_3634_) == 0)
{
lean_object* v_k_3636_; lean_object* v_v_3637_; lean_object* v_l_3638_; lean_object* v_r_3639_; lean_object* v___x_3640_; lean_object* v_a_3641_; lean_object* v_a_3642_; lean_object* v___y_3644_; 
v_k_3636_ = lean_ctor_get(v_x_3634_, 1);
lean_inc(v_k_3636_);
v_v_3637_ = lean_ctor_get(v_x_3634_, 2);
lean_inc(v_v_3637_);
v_l_3638_ = lean_ctor_get(v_x_3634_, 3);
lean_inc(v_l_3638_);
v_r_3639_ = lean_ctor_get(v_x_3634_, 4);
lean_inc(v_r_3639_);
lean_dec_ref_known(v_x_3634_, 5);
v___x_3640_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg(v_init_3633_, v_l_3638_);
v_a_3641_ = lean_ctor_get(v___x_3640_, 0);
lean_inc(v_a_3641_);
lean_dec_ref(v___x_3640_);
v_a_3642_ = lean_ctor_get(v_a_3641_, 0);
lean_inc(v_a_3642_);
lean_dec(v_a_3641_);
if (lean_obj_tag(v_v_3637_) == 0)
{
lean_object* v_returnCont_3647_; lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3664_; 
v_returnCont_3647_ = lean_ctor_get(v_v_3637_, 0);
v_isSharedCheck_3664_ = !lean_is_exclusive(v_v_3637_);
if (v_isSharedCheck_3664_ == 0)
{
v___x_3649_ = v_v_3637_;
v_isShared_3650_ = v_isSharedCheck_3664_;
goto v_resetjp_3648_;
}
else
{
lean_inc(v_returnCont_3647_);
lean_dec(v_v_3637_);
v___x_3649_ = lean_box(0);
v_isShared_3650_ = v_isSharedCheck_3664_;
goto v_resetjp_3648_;
}
v_resetjp_3648_:
{
lean_object* v_resultType_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3662_; 
v_resultType_3651_ = lean_ctor_get(v_returnCont_3647_, 0);
v_isSharedCheck_3662_ = !lean_is_exclusive(v_returnCont_3647_);
if (v_isSharedCheck_3662_ == 0)
{
lean_object* v_unused_3663_; 
v_unused_3663_ = lean_ctor_get(v_returnCont_3647_, 1);
lean_dec(v_unused_3663_);
v___x_3653_ = v_returnCont_3647_;
v_isShared_3654_ = v_isSharedCheck_3662_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_resultType_3651_);
lean_dec(v_returnCont_3647_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3662_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___f_3655_; lean_object* v___x_3657_; 
v___f_3655_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__0, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__0_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__0);
if (v_isShared_3654_ == 0)
{
lean_ctor_set(v___x_3653_, 1, v___f_3655_);
v___x_3657_ = v___x_3653_;
goto v_reusejp_3656_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v_resultType_3651_);
lean_ctor_set(v_reuseFailAlloc_3661_, 1, v___f_3655_);
v___x_3657_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3656_;
}
v_reusejp_3656_:
{
lean_object* v___x_3659_; 
if (v_isShared_3650_ == 0)
{
lean_ctor_set(v___x_3649_, 0, v___x_3657_);
v___x_3659_ = v___x_3649_;
goto v_reusejp_3658_;
}
else
{
lean_object* v_reuseFailAlloc_3660_; 
v_reuseFailAlloc_3660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3660_, 0, v___x_3657_);
v___x_3659_ = v_reuseFailAlloc_3660_;
goto v_reusejp_3658_;
}
v_reusejp_3658_:
{
v___y_3644_ = v___x_3659_;
goto v___jp_3643_;
}
}
}
}
}
else
{
lean_object* v___x_3665_; 
lean_dec_ref_known(v_v_3637_, 2);
v___x_3665_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__2, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__2_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___closed__2);
v___y_3644_ = v___x_3665_;
goto v___jp_3643_;
}
v___jp_3643_:
{
lean_object* v___x_3645_; 
v___x_3645_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_3636_, v___y_3644_, v_a_3642_);
v_init_3633_ = v___x_3645_;
v_x_3634_ = v_r_3639_;
goto _start;
}
}
else
{
lean_object* v___x_3666_; lean_object* v___x_3667_; 
v___x_3666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3666_, 0, v_init_3633_);
v___x_3667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3667_, 0, v___x_3666_);
return v___x_3667_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg___boxed(lean_object* v_init_3668_, lean_object* v_x_3669_, lean_object* v___y_3670_){
_start:
{
lean_object* v_res_3671_; 
v_res_3671_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg(v_init_3668_, v_x_3669_);
return v_res_3671_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_ControlLifter_lift_spec__0___redArg(lean_object* v_t_3672_, lean_object* v_k_3673_, lean_object* v_fallback_3674_){
_start:
{
if (lean_obj_tag(v_t_3672_) == 0)
{
lean_object* v_k_3675_; lean_object* v_v_3676_; lean_object* v_l_3677_; lean_object* v_r_3678_; uint8_t v___x_3679_; 
v_k_3675_ = lean_ctor_get(v_t_3672_, 1);
v_v_3676_ = lean_ctor_get(v_t_3672_, 2);
v_l_3677_ = lean_ctor_get(v_t_3672_, 3);
v_r_3678_ = lean_ctor_get(v_t_3672_, 4);
v___x_3679_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3673_, v_k_3675_);
switch(v___x_3679_)
{
case 0:
{
v_t_3672_ = v_l_3677_;
goto _start;
}
case 1:
{
lean_inc(v_v_3676_);
return v_v_3676_;
}
default: 
{
v_t_3672_ = v_r_3678_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_3674_);
return v_fallback_3674_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_ControlLifter_lift_spec__0___redArg___boxed(lean_object* v_t_3682_, lean_object* v_k_3683_, lean_object* v_fallback_3684_){
_start:
{
lean_object* v_res_3685_; 
v_res_3685_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_ControlLifter_lift_spec__0___redArg(v_t_3682_, v_k_3683_, v_fallback_3684_);
lean_dec(v_fallback_3684_);
lean_dec(v_k_3683_);
lean_dec(v_t_3682_);
return v_res_3685_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg(lean_object* v_as_x27_3692_, lean_object* v_b_3693_){
_start:
{
if (lean_obj_tag(v_as_x27_3692_) == 0)
{
lean_object* v___x_3695_; 
v___x_3695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3695_, 0, v_b_3693_);
return v___x_3695_;
}
else
{
lean_object* v_head_3696_; lean_object* v_tail_3697_; lean_object* v_fst_3698_; lean_object* v_snd_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v_snd_3702_; lean_object* v___x_3704_; uint8_t v_isShared_3705_; uint8_t v_isSharedCheck_3714_; 
v_head_3696_ = lean_ctor_get(v_as_x27_3692_, 0);
v_tail_3697_ = lean_ctor_get(v_as_x27_3692_, 1);
v_fst_3698_ = lean_ctor_get(v_head_3696_, 0);
v_snd_3699_ = lean_ctor_get(v_head_3696_, 1);
v___x_3700_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___closed__0));
v___x_3701_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_ControlLifter_lift_spec__0___redArg(v_b_3693_, v_fst_3698_, v___x_3700_);
v_snd_3702_ = lean_ctor_get(v___x_3701_, 1);
v_isSharedCheck_3714_ = !lean_is_exclusive(v___x_3701_);
if (v_isSharedCheck_3714_ == 0)
{
lean_object* v_unused_3715_; 
v_unused_3715_ = lean_ctor_get(v___x_3701_, 0);
lean_dec(v_unused_3715_);
v___x_3704_ = v___x_3701_;
v_isShared_3705_ = v_isSharedCheck_3714_;
goto v_resetjp_3703_;
}
else
{
lean_inc(v_snd_3702_);
lean_dec(v___x_3701_);
v___x_3704_ = lean_box(0);
v_isShared_3705_ = v_isSharedCheck_3714_;
goto v_resetjp_3703_;
}
v_resetjp_3703_:
{
lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3710_; 
v___x_3706_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___closed__2));
lean_inc(v_snd_3699_);
v___x_3707_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_JumpLayer_mkOptionJump___boxed), 10, 2);
lean_closure_set(v___x_3707_, 0, v_snd_3699_);
lean_closure_set(v___x_3707_, 1, v___x_3706_);
v___x_3708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3708_, 0, v___x_3707_);
if (v_isShared_3705_ == 0)
{
lean_ctor_set(v___x_3704_, 0, v___x_3708_);
v___x_3710_ = v___x_3704_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3713_; 
v_reuseFailAlloc_3713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3713_, 0, v___x_3708_);
lean_ctor_set(v_reuseFailAlloc_3713_, 1, v_snd_3702_);
v___x_3710_ = v_reuseFailAlloc_3713_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
lean_object* v___x_3711_; 
lean_inc(v_fst_3698_);
v___x_3711_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_3698_, v___x_3710_, v_b_3693_);
v_as_x27_3692_ = v_tail_3697_;
v_b_3693_ = v___x_3711_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___boxed(lean_object* v_as_x27_3716_, lean_object* v_b_3717_, lean_object* v___y_3718_){
_start:
{
lean_object* v_res_3719_; 
v_res_3719_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg(v_as_x27_3716_, v_b_3717_);
lean_dec(v_as_x27_3716_);
return v_res_3719_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg(lean_object* v_as_x27_3724_, lean_object* v_b_3725_){
_start:
{
if (lean_obj_tag(v_as_x27_3724_) == 0)
{
lean_object* v___x_3727_; 
v___x_3727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3727_, 0, v_b_3725_);
return v___x_3727_;
}
else
{
lean_object* v_head_3728_; lean_object* v_tail_3729_; lean_object* v_fst_3730_; lean_object* v_snd_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v_fst_3734_; lean_object* v___x_3736_; uint8_t v_isShared_3737_; uint8_t v_isSharedCheck_3746_; 
v_head_3728_ = lean_ctor_get(v_as_x27_3724_, 0);
v_tail_3729_ = lean_ctor_get(v_as_x27_3724_, 1);
v_fst_3730_ = lean_ctor_get(v_head_3728_, 0);
v_snd_3731_ = lean_ctor_get(v_head_3728_, 1);
v___x_3732_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___closed__0));
v___x_3733_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_ControlLifter_lift_spec__0___redArg(v_b_3725_, v_fst_3730_, v___x_3732_);
v_fst_3734_ = lean_ctor_get(v___x_3733_, 0);
v_isSharedCheck_3746_ = !lean_is_exclusive(v___x_3733_);
if (v_isSharedCheck_3746_ == 0)
{
lean_object* v_unused_3747_; 
v_unused_3747_ = lean_ctor_get(v___x_3733_, 1);
lean_dec(v_unused_3747_);
v___x_3736_ = v___x_3733_;
v_isShared_3737_ = v_isSharedCheck_3746_;
goto v_resetjp_3735_;
}
else
{
lean_inc(v_fst_3734_);
lean_dec(v___x_3733_);
v___x_3736_ = lean_box(0);
v_isShared_3737_ = v_isSharedCheck_3746_;
goto v_resetjp_3735_;
}
v_resetjp_3735_:
{
lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3742_; 
v___x_3738_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg___closed__1));
lean_inc(v_snd_3731_);
v___x_3739_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_JumpLayer_mkOptionJump___boxed), 10, 2);
lean_closure_set(v___x_3739_, 0, v_snd_3731_);
lean_closure_set(v___x_3739_, 1, v___x_3738_);
v___x_3740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3740_, 0, v___x_3739_);
if (v_isShared_3737_ == 0)
{
lean_ctor_set(v___x_3736_, 1, v___x_3740_);
v___x_3742_ = v___x_3736_;
goto v_reusejp_3741_;
}
else
{
lean_object* v_reuseFailAlloc_3745_; 
v_reuseFailAlloc_3745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3745_, 0, v_fst_3734_);
lean_ctor_set(v_reuseFailAlloc_3745_, 1, v___x_3740_);
v___x_3742_ = v_reuseFailAlloc_3745_;
goto v_reusejp_3741_;
}
v_reusejp_3741_:
{
lean_object* v___x_3743_; 
lean_inc(v_fst_3730_);
v___x_3743_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_3730_, v___x_3742_, v_b_3725_);
v_as_x27_3724_ = v_tail_3729_;
v_b_3725_ = v___x_3743_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg___boxed(lean_object* v_as_x27_3748_, lean_object* v_b_3749_, lean_object* v___y_3750_){
_start:
{
lean_object* v_res_3751_; 
v_res_3751_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg(v_as_x27_3748_, v_b_3749_);
lean_dec(v_as_x27_3748_);
return v_res_3751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlLifter_lift(lean_object* v_l_3752_, lean_object* v_elabElem_3753_, lean_object* v_a_3754_, lean_object* v_a_3755_, lean_object* v_a_3756_, lean_object* v_a_3757_, lean_object* v_a_3758_, lean_object* v_a_3759_, lean_object* v_a_3760_){
_start:
{
lean_object* v_monadInfo_3762_; lean_object* v_mutVars_3763_; lean_object* v_mutVarDefs_3764_; lean_object* v_contInfo_3765_; uint8_t v_deadCode_3766_; lean_object* v_ops_3767_; lean_object* v_origCont_3768_; lean_object* v_returnJump_x3f_3769_; lean_object* v_breakJump_x3f_3770_; lean_object* v_continueJump_x3f_3771_; lean_object* v_labeledReturnJumps_3772_; lean_object* v_labeledBreakJumps_3773_; lean_object* v_labeledContinueJumps_3774_; lean_object* v_pureBase_3775_; lean_object* v_liftedDoBlockResultType_3776_; lean_object* v___y_3778_; lean_object* v___y_3779_; lean_object* v___y_3780_; lean_object* v_a_3781_; lean_object* v___x_3809_; lean_object* v___y_3811_; lean_object* v___y_3812_; lean_object* v___y_3813_; lean_object* v___y_3820_; lean_object* v___y_3821_; lean_object* v___y_3836_; 
v_monadInfo_3762_ = lean_ctor_get(v_a_3754_, 0);
v_mutVars_3763_ = lean_ctor_get(v_a_3754_, 1);
v_mutVarDefs_3764_ = lean_ctor_get(v_a_3754_, 2);
v_contInfo_3765_ = lean_ctor_get(v_a_3754_, 4);
v_deadCode_3766_ = lean_ctor_get_uint8(v_a_3754_, sizeof(void*)*6);
v_ops_3767_ = lean_ctor_get(v_a_3754_, 5);
v_origCont_3768_ = lean_ctor_get(v_l_3752_, 0);
lean_inc_ref(v_origCont_3768_);
v_returnJump_x3f_3769_ = lean_ctor_get(v_l_3752_, 1);
lean_inc(v_returnJump_x3f_3769_);
v_breakJump_x3f_3770_ = lean_ctor_get(v_l_3752_, 2);
lean_inc(v_breakJump_x3f_3770_);
v_continueJump_x3f_3771_ = lean_ctor_get(v_l_3752_, 3);
lean_inc(v_continueJump_x3f_3771_);
v_labeledReturnJumps_3772_ = lean_ctor_get(v_l_3752_, 4);
lean_inc(v_labeledReturnJumps_3772_);
v_labeledBreakJumps_3773_ = lean_ctor_get(v_l_3752_, 5);
lean_inc(v_labeledBreakJumps_3773_);
v_labeledContinueJumps_3774_ = lean_ctor_get(v_l_3752_, 6);
lean_inc(v_labeledContinueJumps_3774_);
v_pureBase_3775_ = lean_ctor_get(v_l_3752_, 7);
lean_inc_ref(v_pureBase_3775_);
v_liftedDoBlockResultType_3776_ = lean_ctor_get(v_l_3752_, 8);
lean_inc_ref(v_liftedDoBlockResultType_3776_);
lean_dec_ref(v_l_3752_);
v___x_3809_ = l_Lean_Elab_Do_ContInfoRef_toContInfoImpl(v_contInfo_3765_);
if (lean_obj_tag(v_breakJump_x3f_3770_) == 0)
{
lean_object* v_breakCont_3848_; 
v_breakCont_3848_ = lean_ctor_get(v___x_3809_, 1);
lean_inc(v_breakCont_3848_);
v___y_3836_ = v_breakCont_3848_;
goto v___jp_3835_;
}
else
{
lean_object* v_val_3849_; lean_object* v___x_3851_; uint8_t v_isShared_3852_; uint8_t v_isSharedCheck_3858_; 
v_val_3849_ = lean_ctor_get(v_breakJump_x3f_3770_, 0);
v_isSharedCheck_3858_ = !lean_is_exclusive(v_breakJump_x3f_3770_);
if (v_isSharedCheck_3858_ == 0)
{
v___x_3851_ = v_breakJump_x3f_3770_;
v_isShared_3852_ = v_isSharedCheck_3858_;
goto v_resetjp_3850_;
}
else
{
lean_inc(v_val_3849_);
lean_dec(v_breakJump_x3f_3770_);
v___x_3851_ = lean_box(0);
v_isShared_3852_ = v_isSharedCheck_3858_;
goto v_resetjp_3850_;
}
v_resetjp_3850_:
{
lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3856_; 
v___x_3853_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg___closed__2));
v___x_3854_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_JumpLayer_mkOptionJump___boxed), 10, 2);
lean_closure_set(v___x_3854_, 0, v_val_3849_);
lean_closure_set(v___x_3854_, 1, v___x_3853_);
if (v_isShared_3852_ == 0)
{
lean_ctor_set(v___x_3851_, 0, v___x_3854_);
v___x_3856_ = v___x_3851_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3857_; 
v_reuseFailAlloc_3857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3857_, 0, v___x_3854_);
v___x_3856_ = v_reuseFailAlloc_3857_;
goto v_reusejp_3855_;
}
v_reusejp_3855_:
{
v___y_3836_ = v___x_3856_;
goto v___jp_3835_;
}
}
}
v___jp_3777_:
{
lean_object* v___x_3782_; lean_object* v_a_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v_a_3786_; lean_object* v___x_3787_; lean_object* v_a_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v_a_3792_; lean_object* v_resultName_3793_; lean_object* v_resultType_3794_; lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3807_; 
v___x_3782_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__1___redArg(v_labeledReturnJumps_3772_, v_a_3781_);
lean_dec(v_labeledReturnJumps_3772_);
v_a_3783_ = lean_ctor_get(v___x_3782_, 0);
lean_inc(v_a_3783_);
lean_dec_ref(v___x_3782_);
v___x_3784_ = lean_box(1);
v___x_3785_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg(v_labeledBreakJumps_3773_, v___x_3784_);
lean_dec(v_labeledBreakJumps_3773_);
v_a_3786_ = lean_ctor_get(v___x_3785_, 0);
lean_inc(v_a_3786_);
lean_dec_ref(v___x_3785_);
v___x_3787_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg(v_labeledContinueJumps_3774_, v_a_3786_);
lean_dec(v_labeledContinueJumps_3774_);
v_a_3788_ = lean_ctor_get(v___x_3787_, 0);
lean_inc(v_a_3788_);
lean_dec_ref(v___x_3787_);
v___x_3789_ = lean_box(0);
v___x_3790_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_ControlLifter_lift_spec__4(v___x_3789_, v_a_3788_);
lean_dec(v_a_3788_);
v___x_3791_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg(v___x_3790_, v_a_3783_);
lean_dec(v___x_3790_);
v_a_3792_ = lean_ctor_get(v___x_3791_, 0);
lean_inc(v_a_3792_);
lean_dec_ref(v___x_3791_);
v_resultName_3793_ = lean_ctor_get(v_origCont_3768_, 0);
v_resultType_3794_ = lean_ctor_get(v_origCont_3768_, 1);
v_isSharedCheck_3807_ = !lean_is_exclusive(v_origCont_3768_);
if (v_isSharedCheck_3807_ == 0)
{
lean_object* v_unused_3808_; 
v_unused_3808_ = lean_ctor_get(v_origCont_3768_, 2);
lean_dec(v_unused_3808_);
v___x_3796_ = v_origCont_3768_;
v_isShared_3797_ = v_isSharedCheck_3807_;
goto v_resetjp_3795_;
}
else
{
lean_inc(v_resultType_3794_);
lean_inc(v_resultName_3793_);
lean_dec(v_origCont_3768_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3807_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; uint8_t v___x_3801_; lean_object* v___x_3803_; 
v___x_3798_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3798_, 0, v___y_3779_);
lean_ctor_set(v___x_3798_, 1, v___y_3780_);
lean_ctor_set(v___x_3798_, 2, v___y_3778_);
lean_ctor_set(v___x_3798_, 3, v_a_3792_);
v___x_3799_ = l_Lean_Elab_Do_ContInfo_toContInfoRefImpl(v___x_3798_);
lean_dec_ref_known(v___x_3798_, 4);
lean_inc(v_resultName_3793_);
v___x_3800_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_mkPure___boxed), 10, 2);
lean_closure_set(v___x_3800_, 0, v_pureBase_3775_);
lean_closure_set(v___x_3800_, 1, v_resultName_3793_);
v___x_3801_ = 1;
if (v_isShared_3797_ == 0)
{
lean_ctor_set(v___x_3796_, 2, v___x_3800_);
v___x_3803_ = v___x_3796_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3806_; 
v_reuseFailAlloc_3806_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3806_, 0, v_resultName_3793_);
lean_ctor_set(v_reuseFailAlloc_3806_, 1, v_resultType_3794_);
lean_ctor_set(v_reuseFailAlloc_3806_, 2, v___x_3800_);
v___x_3803_ = v_reuseFailAlloc_3806_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
lean_object* v___x_3804_; lean_object* v___x_3805_; 
lean_ctor_set_uint8(v___x_3803_, sizeof(void*)*3, v___x_3801_);
lean_inc(v_ops_3767_);
lean_inc_ref(v_mutVarDefs_3764_);
lean_inc_ref(v_mutVars_3763_);
lean_inc_ref(v_monadInfo_3762_);
v___x_3804_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_3804_, 0, v_monadInfo_3762_);
lean_ctor_set(v___x_3804_, 1, v_mutVars_3763_);
lean_ctor_set(v___x_3804_, 2, v_mutVarDefs_3764_);
lean_ctor_set(v___x_3804_, 3, v_liftedDoBlockResultType_3776_);
lean_ctor_set(v___x_3804_, 4, v___x_3799_);
lean_ctor_set(v___x_3804_, 5, v_ops_3767_);
lean_ctor_set_uint8(v___x_3804_, sizeof(void*)*6, v_deadCode_3766_);
lean_inc(v_a_3760_);
lean_inc_ref(v_a_3759_);
lean_inc(v_a_3758_);
lean_inc_ref(v_a_3757_);
lean_inc(v_a_3756_);
lean_inc_ref(v_a_3755_);
v___x_3805_ = lean_apply_9(v_elabElem_3753_, v___x_3803_, v___x_3804_, v_a_3755_, v_a_3756_, v_a_3757_, v_a_3758_, v_a_3759_, v_a_3760_, lean_box(0));
return v___x_3805_;
}
}
}
v___jp_3810_:
{
lean_object* v_labeled_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v_a_3817_; lean_object* v_a_3818_; 
v_labeled_3814_ = lean_ctor_get(v___x_3809_, 3);
lean_inc(v_labeled_3814_);
lean_dec_ref(v___x_3809_);
v___x_3815_ = lean_box(1);
v___x_3816_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg(v___x_3815_, v_labeled_3814_);
v_a_3817_ = lean_ctor_get(v___x_3816_, 0);
lean_inc(v_a_3817_);
lean_dec_ref(v___x_3816_);
v_a_3818_ = lean_ctor_get(v_a_3817_, 0);
lean_inc(v_a_3818_);
lean_dec(v_a_3817_);
v___y_3778_ = v___y_3811_;
v___y_3779_ = v___y_3813_;
v___y_3780_ = v___y_3812_;
v_a_3781_ = v_a_3818_;
goto v___jp_3777_;
}
v___jp_3819_:
{
if (lean_obj_tag(v_returnJump_x3f_3769_) == 0)
{
lean_object* v_returnCont_3822_; 
v_returnCont_3822_ = lean_ctor_get(v___x_3809_, 0);
lean_inc_ref(v_returnCont_3822_);
v___y_3811_ = v___y_3821_;
v___y_3812_ = v___y_3820_;
v___y_3813_ = v_returnCont_3822_;
goto v___jp_3810_;
}
else
{
lean_object* v_returnCont_3823_; lean_object* v_val_3824_; lean_object* v_resultType_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3833_; 
v_returnCont_3823_ = lean_ctor_get(v___x_3809_, 0);
lean_inc_ref(v_returnCont_3823_);
v_val_3824_ = lean_ctor_get(v_returnJump_x3f_3769_, 0);
lean_inc(v_val_3824_);
lean_dec_ref_known(v_returnJump_x3f_3769_, 1);
v_resultType_3825_ = lean_ctor_get(v_returnCont_3823_, 0);
v_isSharedCheck_3833_ = !lean_is_exclusive(v_returnCont_3823_);
if (v_isSharedCheck_3833_ == 0)
{
lean_object* v_unused_3834_; 
v_unused_3834_ = lean_ctor_get(v_returnCont_3823_, 1);
lean_dec(v_unused_3834_);
v___x_3827_ = v_returnCont_3823_;
v_isShared_3828_ = v_isSharedCheck_3833_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_resultType_3825_);
lean_dec(v_returnCont_3823_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3833_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
lean_object* v___x_3829_; lean_object* v___x_3831_; 
v___x_3829_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_JumpLayer_mkReturn___boxed), 10, 1);
lean_closure_set(v___x_3829_, 0, v_val_3824_);
if (v_isShared_3828_ == 0)
{
lean_ctor_set(v___x_3827_, 1, v___x_3829_);
v___x_3831_ = v___x_3827_;
goto v_reusejp_3830_;
}
else
{
lean_object* v_reuseFailAlloc_3832_; 
v_reuseFailAlloc_3832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3832_, 0, v_resultType_3825_);
lean_ctor_set(v_reuseFailAlloc_3832_, 1, v___x_3829_);
v___x_3831_ = v_reuseFailAlloc_3832_;
goto v_reusejp_3830_;
}
v_reusejp_3830_:
{
v___y_3811_ = v___y_3821_;
v___y_3812_ = v___y_3820_;
v___y_3813_ = v___x_3831_;
goto v___jp_3810_;
}
}
}
}
v___jp_3835_:
{
if (lean_obj_tag(v_continueJump_x3f_3771_) == 0)
{
lean_object* v_continueCont_3837_; 
v_continueCont_3837_ = lean_ctor_get(v___x_3809_, 2);
lean_inc(v_continueCont_3837_);
v___y_3820_ = v___y_3836_;
v___y_3821_ = v_continueCont_3837_;
goto v___jp_3819_;
}
else
{
lean_object* v_val_3838_; lean_object* v___x_3840_; uint8_t v_isShared_3841_; uint8_t v_isSharedCheck_3847_; 
v_val_3838_ = lean_ctor_get(v_continueJump_x3f_3771_, 0);
v_isSharedCheck_3847_ = !lean_is_exclusive(v_continueJump_x3f_3771_);
if (v_isSharedCheck_3847_ == 0)
{
v___x_3840_ = v_continueJump_x3f_3771_;
v_isShared_3841_ = v_isSharedCheck_3847_;
goto v_resetjp_3839_;
}
else
{
lean_inc(v_val_3838_);
lean_dec(v_continueJump_x3f_3771_);
v___x_3840_ = lean_box(0);
v_isShared_3841_ = v_isSharedCheck_3847_;
goto v_resetjp_3839_;
}
v_resetjp_3839_:
{
lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3845_; 
v___x_3842_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg___closed__1));
v___x_3843_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_ControlStack_JumpLayer_mkOptionJump___boxed), 10, 2);
lean_closure_set(v___x_3843_, 0, v_val_3838_);
lean_closure_set(v___x_3843_, 1, v___x_3842_);
if (v_isShared_3841_ == 0)
{
lean_ctor_set(v___x_3840_, 0, v___x_3843_);
v___x_3845_ = v___x_3840_;
goto v_reusejp_3844_;
}
else
{
lean_object* v_reuseFailAlloc_3846_; 
v_reuseFailAlloc_3846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3846_, 0, v___x_3843_);
v___x_3845_ = v_reuseFailAlloc_3846_;
goto v_reusejp_3844_;
}
v_reusejp_3844_:
{
v___y_3820_ = v___y_3836_;
v___y_3821_ = v___x_3845_;
goto v___jp_3819_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlLifter_lift___boxed(lean_object* v_l_3859_, lean_object* v_elabElem_3860_, lean_object* v_a_3861_, lean_object* v_a_3862_, lean_object* v_a_3863_, lean_object* v_a_3864_, lean_object* v_a_3865_, lean_object* v_a_3866_, lean_object* v_a_3867_, lean_object* v_a_3868_){
_start:
{
lean_object* v_res_3869_; 
v_res_3869_ = l_Lean_Elab_Do_ControlLifter_lift(v_l_3859_, v_elabElem_3860_, v_a_3861_, v_a_3862_, v_a_3863_, v_a_3864_, v_a_3865_, v_a_3866_, v_a_3867_);
lean_dec(v_a_3867_);
lean_dec_ref(v_a_3866_);
lean_dec(v_a_3865_);
lean_dec_ref(v_a_3864_);
lean_dec(v_a_3863_);
lean_dec_ref(v_a_3862_);
lean_dec_ref(v_a_3861_);
return v_res_3869_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_ControlLifter_lift_spec__0(lean_object* v_00_u03b4_3870_, lean_object* v_t_3871_, lean_object* v_k_3872_, lean_object* v_fallback_3873_){
_start:
{
lean_object* v___x_3874_; 
v___x_3874_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_ControlLifter_lift_spec__0___redArg(v_t_3871_, v_k_3872_, v_fallback_3873_);
return v___x_3874_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_ControlLifter_lift_spec__0___boxed(lean_object* v_00_u03b4_3875_, lean_object* v_t_3876_, lean_object* v_k_3877_, lean_object* v_fallback_3878_){
_start:
{
lean_object* v_res_3879_; 
v_res_3879_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_ControlLifter_lift_spec__0(v_00_u03b4_3875_, v_t_3876_, v_k_3877_, v_fallback_3878_);
lean_dec(v_fallback_3878_);
lean_dec(v_k_3877_);
lean_dec(v_t_3876_);
return v_res_3879_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__1(lean_object* v_as_3880_, lean_object* v_as_x27_3881_, lean_object* v_b_3882_, lean_object* v_a_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_){
_start:
{
lean_object* v___x_3892_; 
v___x_3892_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__1___redArg(v_as_x27_3881_, v_b_3882_);
return v___x_3892_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__1___boxed(lean_object* v_as_3893_, lean_object* v_as_x27_3894_, lean_object* v_b_3895_, lean_object* v_a_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_){
_start:
{
lean_object* v_res_3905_; 
v_res_3905_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__1(v_as_3893_, v_as_x27_3894_, v_b_3895_, v_a_3896_, v___y_3897_, v___y_3898_, v___y_3899_, v___y_3900_, v___y_3901_, v___y_3902_, v___y_3903_);
lean_dec(v___y_3903_);
lean_dec_ref(v___y_3902_);
lean_dec(v___y_3901_);
lean_dec_ref(v___y_3900_);
lean_dec(v___y_3899_);
lean_dec_ref(v___y_3898_);
lean_dec_ref(v___y_3897_);
lean_dec(v_as_x27_3894_);
lean_dec(v_as_3893_);
return v_res_3905_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2(lean_object* v_as_3906_, lean_object* v_as_x27_3907_, lean_object* v_b_3908_, lean_object* v_a_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_){
_start:
{
lean_object* v___x_3918_; 
v___x_3918_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___redArg(v_as_x27_3907_, v_b_3908_);
return v___x_3918_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2___boxed(lean_object* v_as_3919_, lean_object* v_as_x27_3920_, lean_object* v_b_3921_, lean_object* v_a_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_){
_start:
{
lean_object* v_res_3931_; 
v_res_3931_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__2(v_as_3919_, v_as_x27_3920_, v_b_3921_, v_a_3922_, v___y_3923_, v___y_3924_, v___y_3925_, v___y_3926_, v___y_3927_, v___y_3928_, v___y_3929_);
lean_dec(v___y_3929_);
lean_dec_ref(v___y_3928_);
lean_dec(v___y_3927_);
lean_dec_ref(v___y_3926_);
lean_dec(v___y_3925_);
lean_dec_ref(v___y_3924_);
lean_dec_ref(v___y_3923_);
lean_dec(v_as_x27_3920_);
lean_dec(v_as_3919_);
return v_res_3931_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3(lean_object* v_as_3932_, lean_object* v_as_x27_3933_, lean_object* v_b_3934_, lean_object* v_a_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_){
_start:
{
lean_object* v___x_3944_; 
v___x_3944_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___redArg(v_as_x27_3933_, v_b_3934_);
return v___x_3944_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3___boxed(lean_object* v_as_3945_, lean_object* v_as_x27_3946_, lean_object* v_b_3947_, lean_object* v_a_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_){
_start:
{
lean_object* v_res_3957_; 
v_res_3957_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__3(v_as_3945_, v_as_x27_3946_, v_b_3947_, v_a_3948_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_, v___y_3955_);
lean_dec(v___y_3955_);
lean_dec_ref(v___y_3954_);
lean_dec(v___y_3953_);
lean_dec_ref(v___y_3952_);
lean_dec(v___y_3951_);
lean_dec_ref(v___y_3950_);
lean_dec_ref(v___y_3949_);
lean_dec(v_as_x27_3946_);
lean_dec(v_as_3945_);
return v_res_3957_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5(lean_object* v_as_3958_, lean_object* v_as_x27_3959_, lean_object* v_b_3960_, lean_object* v_a_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_){
_start:
{
lean_object* v___x_3970_; 
v___x_3970_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___redArg(v_as_x27_3959_, v_b_3960_);
return v___x_3970_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5___boxed(lean_object* v_as_3971_, lean_object* v_as_x27_3972_, lean_object* v_b_3973_, lean_object* v_a_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_){
_start:
{
lean_object* v_res_3983_; 
v_res_3983_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_ControlLifter_lift_spec__5(v_as_3971_, v_as_x27_3972_, v_b_3973_, v_a_3974_, v___y_3975_, v___y_3976_, v___y_3977_, v___y_3978_, v___y_3979_, v___y_3980_, v___y_3981_);
lean_dec(v___y_3981_);
lean_dec_ref(v___y_3980_);
lean_dec(v___y_3979_);
lean_dec_ref(v___y_3978_);
lean_dec(v___y_3977_);
lean_dec_ref(v___y_3976_);
lean_dec_ref(v___y_3975_);
lean_dec(v_as_x27_3972_);
lean_dec(v_as_3971_);
return v_res_3983_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6(lean_object* v_init_3984_, lean_object* v_x_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_){
_start:
{
lean_object* v___x_3994_; 
v___x_3994_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___redArg(v_init_3984_, v_x_3985_);
return v___x_3994_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6___boxed(lean_object* v_init_3995_, lean_object* v_x_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_, lean_object* v___y_4004_){
_start:
{
lean_object* v_res_4005_; 
v_res_4005_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Elab_Do_ControlLifter_lift_spec__6(v_init_3995_, v_x_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_);
lean_dec(v___y_4003_);
lean_dec_ref(v___y_4002_);
lean_dec(v___y_4001_);
lean_dec_ref(v___y_4000_);
lean_dec(v___y_3999_);
lean_dec_ref(v___y_3998_);
lean_dec_ref(v___y_3997_);
return v_res_4005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlLifter_restoreCont(lean_object* v_l_4006_, lean_object* v_a_4007_, lean_object* v_a_4008_, lean_object* v_a_4009_, lean_object* v_a_4010_, lean_object* v_a_4011_, lean_object* v_a_4012_, lean_object* v_a_4013_){
_start:
{
lean_object* v_pureBase_4015_; lean_object* v_origCont_4016_; uint8_t v_pureDeadCode_4017_; lean_object* v_restoreCont_4018_; lean_object* v_resultName_4019_; lean_object* v_resultType_4020_; lean_object* v_k_4021_; uint8_t v_kind_4022_; lean_object* v___x_4024_; uint8_t v_isShared_4025_; uint8_t v_isSharedCheck_4032_; 
v_pureBase_4015_ = lean_ctor_get(v_l_4006_, 7);
lean_inc_ref(v_pureBase_4015_);
v_origCont_4016_ = lean_ctor_get(v_l_4006_, 0);
lean_inc_ref(v_origCont_4016_);
v_pureDeadCode_4017_ = lean_ctor_get_uint8(v_l_4006_, sizeof(void*)*9);
lean_dec_ref(v_l_4006_);
v_restoreCont_4018_ = lean_ctor_get(v_pureBase_4015_, 5);
lean_inc_ref(v_restoreCont_4018_);
lean_dec_ref(v_pureBase_4015_);
v_resultName_4019_ = lean_ctor_get(v_origCont_4016_, 0);
v_resultType_4020_ = lean_ctor_get(v_origCont_4016_, 1);
v_k_4021_ = lean_ctor_get(v_origCont_4016_, 2);
v_kind_4022_ = lean_ctor_get_uint8(v_origCont_4016_, sizeof(void*)*3);
v_isSharedCheck_4032_ = !lean_is_exclusive(v_origCont_4016_);
if (v_isSharedCheck_4032_ == 0)
{
v___x_4024_ = v_origCont_4016_;
v_isShared_4025_ = v_isSharedCheck_4032_;
goto v_resetjp_4023_;
}
else
{
lean_inc(v_k_4021_);
lean_inc(v_resultType_4020_);
lean_inc(v_resultName_4019_);
lean_dec(v_origCont_4016_);
v___x_4024_ = lean_box(0);
v_isShared_4025_ = v_isSharedCheck_4032_;
goto v_resetjp_4023_;
}
v_resetjp_4023_:
{
lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4029_; 
v___x_4026_ = lean_box(v_pureDeadCode_4017_);
v___x_4027_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_withDeadCode___boxed), 11, 3);
lean_closure_set(v___x_4027_, 0, lean_box(0));
lean_closure_set(v___x_4027_, 1, v___x_4026_);
lean_closure_set(v___x_4027_, 2, v_k_4021_);
if (v_isShared_4025_ == 0)
{
lean_ctor_set(v___x_4024_, 2, v___x_4027_);
v___x_4029_ = v___x_4024_;
goto v_reusejp_4028_;
}
else
{
lean_object* v_reuseFailAlloc_4031_; 
v_reuseFailAlloc_4031_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_4031_, 0, v_resultName_4019_);
lean_ctor_set(v_reuseFailAlloc_4031_, 1, v_resultType_4020_);
lean_ctor_set(v_reuseFailAlloc_4031_, 2, v___x_4027_);
lean_ctor_set_uint8(v_reuseFailAlloc_4031_, sizeof(void*)*3, v_kind_4022_);
v___x_4029_ = v_reuseFailAlloc_4031_;
goto v_reusejp_4028_;
}
v_reusejp_4028_:
{
lean_object* v___x_4030_; 
lean_inc(v_a_4013_);
lean_inc_ref(v_a_4012_);
lean_inc(v_a_4011_);
lean_inc_ref(v_a_4010_);
lean_inc(v_a_4009_);
lean_inc_ref(v_a_4008_);
lean_inc_ref(v_a_4007_);
v___x_4030_ = lean_apply_9(v_restoreCont_4018_, v___x_4029_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_, v_a_4011_, v_a_4012_, v_a_4013_, lean_box(0));
return v___x_4030_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlLifter_restoreCont___boxed(lean_object* v_l_4033_, lean_object* v_a_4034_, lean_object* v_a_4035_, lean_object* v_a_4036_, lean_object* v_a_4037_, lean_object* v_a_4038_, lean_object* v_a_4039_, lean_object* v_a_4040_, lean_object* v_a_4041_){
_start:
{
lean_object* v_res_4042_; 
v_res_4042_ = l_Lean_Elab_Do_ControlLifter_restoreCont(v_l_4033_, v_a_4034_, v_a_4035_, v_a_4036_, v_a_4037_, v_a_4038_, v_a_4039_, v_a_4040_);
lean_dec(v_a_4040_);
lean_dec_ref(v_a_4039_);
lean_dec(v_a_4038_);
lean_dec_ref(v_a_4037_);
lean_dec(v_a_4036_);
lean_dec_ref(v_a_4035_);
lean_dec_ref(v_a_4034_);
return v_res_4042_;
}
}
lean_object* runtime_initialize_Lean_Meta_ProdN(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_Do(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Do_Control(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_ProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Do_Control(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_ProdN(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* initialize_Init_Control_Do(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Do_Control(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_ProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_Control(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Do_Control(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Do_Control(builtin);
}
#ifdef __cplusplus
}
#endif
