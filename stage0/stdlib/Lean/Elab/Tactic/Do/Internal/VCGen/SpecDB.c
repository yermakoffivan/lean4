// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Internal.VCGen.SpecDB
// Imports: public import Lean.Meta.Sym public import Std.Internal.Do public import Lean.Elab.Command public import Lean.Elab.Tactic.Basic public import Lean.Elab.Tactic.Meta public import Lean.Elab.Tactic.Simp public import Lean.Elab.Tactic.Do.Attr public meta import Lean.Elab.Tactic.Basic public meta import Lean.Elab.Tactic.Do.Attr public import Std.Internal.Do.Triple.SpecLemmas
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
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Meta_DiscrTree_Key_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t l_Lean_Meta_DiscrTree_instBEqKey_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
uint8_t l_Lean_Elab_Tactic_Do_Internal_SpecAttr_instBEqSpecProof_beq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instInhabited(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecProof_key(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_Meta_Sym_Pattern_mkDiscrTreeKeys(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecProof_ofOrigin(lean_object*);
lean_object* l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_preprocessDeclPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_mkPatternFromTypeWithKey_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* lean_expr_lift_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_ofFn___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Meta_Sym_Pattern_match_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_empty(lean_object*);
extern lean_object* l_Lean_Elab_Tactic_Do_Internal_SpecAttr_instInhabitedSpecProof_default;
extern lean_object* l_Lean_Meta_Sym_instInhabitedPattern_default;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_preprocessExprPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecProof_instantiate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Meta_forallMetaBoundedTelescope(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_getEqnsFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getMatch___redArg(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_spec_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_spec_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_simp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_simp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremKind_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremKind;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremNew_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremNew_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremNew_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremNew;
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_Internal_VCGen_instBEqSpecTheoremNew___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_instBEqSpecTheoremNew___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_instBEqSpecTheoremNew___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_VCGen_instBEqSpecTheoremNew___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_instBEqSpecTheoremNew___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_instBEqSpecTheoremNew___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_instBEqSpecTheoremNew = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_instBEqSpecTheoremNew___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default_spec__0___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default_spec__0(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Triple"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(190, 57, 218, 157, 42, 52, 8, 129)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PartialOrder"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rel"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(179, 3, 218, 237, 219, 72, 94, 177)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(41, 174, 7, 105, 99, 77, 97, 125)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 23, .m_data = "expected Triple or ⊑ wp"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__10_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__11;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 32, .m_data = "RHS of ⊑ is not a wp application"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__12_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__13;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wp"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__15_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__15_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__15_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__14_value),LEAN_SCALAR_PTR_LITERAL(147, 6, 42, 106, 0, 77, 75, 237)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__15 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__15_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg___closed__0_value;
static const lean_array_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__4___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__6_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__6(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3___closed__0_value),((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.DiscrTree.Basic"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.DiscrTree.insertKeyValue"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid key sequence"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_etaExpandEqPattern_collectDomains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_etaExpandEqPattern___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_etaExpandEqPattern___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_etaExpandEqPattern(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "conclusion is not an equality"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__7___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__6___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__13___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "VCGen"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "vcgen"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(232, 135, 166, 206, 84, 210, 155, 104)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4_value_aux_4),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 214, 136, 164, 237, 239, 105, 243)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4_value_aux_5),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__3_value),LEAN_SCALAR_PTR_LITERAL(154, 163, 44, 133, 212, 138, 246, 146)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__5_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Failed to migrate simp spec "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__9;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__10_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__11;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8___boxed(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Failed to migrate unfold spec "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__0_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__1_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__3___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__3_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__4, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19_spec__23___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__6(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Candidates: "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Finding specs for "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_ctorIdx(v_x_4_);
lean_dec(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
return v_k_7_;
}
else
{
lean_object* v_etaArgs_8_; lean_object* v___x_9_; 
v_etaArgs_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_etaArgs_8_);
lean_dec_ref_known(v_t_6_, 1);
v___x_9_ = lean_apply_1(v_k_7_, v_etaArgs_8_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, lean_object* v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_ctorElim___redArg(v_t_12_, v_k_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_18_, v_h_19_, v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_spec_elim___redArg(lean_object* v_t_22_, lean_object* v_spec_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_ctorElim___redArg(v_t_22_, v_spec_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_spec_elim(lean_object* v_motive_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_spec_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_ctorElim___redArg(v_t_26_, v_spec_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_simp_elim___redArg(lean_object* v_t_30_, lean_object* v_simp_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_ctorElim___redArg(v_t_30_, v_simp_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_simp_elim(lean_object* v_motive_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_simp_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremKind_ctorElim___redArg(v_t_34_, v_simp_36_);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremKind_default(void){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lean_box(0);
return v___x_38_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremKind(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_box(0);
return v___x_39_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremNew_default___closed__0(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_40_ = lean_unsigned_to_nat(1000u);
v___x_41_ = lean_box(0);
v___x_42_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_instInhabitedSpecProof_default;
v___x_43_ = l_Lean_Meta_Sym_instInhabitedPattern_default;
v___x_44_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
lean_ctor_set(v___x_44_, 1, v___x_42_);
lean_ctor_set(v___x_44_, 2, v___x_41_);
lean_ctor_set(v___x_44_, 3, v___x_40_);
return v___x_44_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremNew_default(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremNew_default___closed__0, &l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremNew_default___closed__0_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremNew_default___closed__0);
return v___x_45_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremNew(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremNew_default;
return v___x_46_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_Internal_VCGen_instBEqSpecTheoremNew___lam__0(lean_object* v_a_47_, lean_object* v_b_48_){
_start:
{
lean_object* v_proof_49_; lean_object* v_proof_50_; uint8_t v___x_51_; 
v_proof_49_ = lean_ctor_get(v_a_47_, 1);
lean_inc_ref(v_proof_49_);
lean_dec_ref(v_a_47_);
v_proof_50_ = lean_ctor_get(v_b_48_, 1);
lean_inc_ref(v_proof_50_);
lean_dec_ref(v_b_48_);
v___x_51_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_instBEqSpecProof_beq(v_proof_49_, v_proof_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_instBEqSpecTheoremNew___lam__0___boxed(lean_object* v_a_52_, lean_object* v_b_53_){
_start:
{
uint8_t v_res_54_; lean_object* v_r_55_; 
v_res_54_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_instBEqSpecTheoremNew___lam__0(v_a_52_, v_b_53_);
v_r_55_ = lean_box(v_res_54_);
return v_r_55_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate_spec__0(lean_object* v_as_58_, size_t v_i_59_, size_t v_stop_60_, lean_object* v_b_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_){
_start:
{
uint8_t v___x_67_; 
v___x_67_ = lean_usize_dec_eq(v_i_59_, v_stop_60_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_array_uget_borrowed(v_as_58_, v_i_59_);
lean_inc(v___x_68_);
v___x_69_ = l_Lean_Meta_mkCongrFun(v_b_61_, v___x_68_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
if (lean_obj_tag(v___x_69_) == 0)
{
lean_object* v_a_70_; size_t v___x_71_; size_t v___x_72_; 
v_a_70_ = lean_ctor_get(v___x_69_, 0);
lean_inc(v_a_70_);
lean_dec_ref_known(v___x_69_, 1);
v___x_71_ = ((size_t)1ULL);
v___x_72_ = lean_usize_add(v_i_59_, v___x_71_);
v_i_59_ = v___x_72_;
v_b_61_ = v_a_70_;
goto _start;
}
else
{
return v___x_69_;
}
}
else
{
lean_object* v___x_74_; 
v___x_74_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_74_, 0, v_b_61_);
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate_spec__0___boxed(lean_object* v_as_75_, lean_object* v_i_76_, lean_object* v_stop_77_, lean_object* v_b_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
size_t v_i_boxed_84_; size_t v_stop_boxed_85_; lean_object* v_res_86_; 
v_i_boxed_84_ = lean_unbox_usize(v_i_76_);
lean_dec(v_i_76_);
v_stop_boxed_85_ = lean_unbox_usize(v_stop_77_);
lean_dec(v_stop_77_);
v_res_86_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate_spec__0(v_as_75_, v_i_boxed_84_, v_stop_boxed_85_, v_b_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_);
lean_dec(v___y_82_);
lean_dec_ref(v___y_81_);
lean_dec(v___y_80_);
lean_dec_ref(v___y_79_);
lean_dec_ref(v_as_75_);
return v_res_86_;
}
}
static uint64_t _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate___closed__2(void){
_start:
{
uint8_t v___x_90_; uint64_t v___x_91_; 
v___x_90_ = 2;
v___x_91_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_90_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate(lean_object* v_specThm_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_){
_start:
{
lean_object* v_proof_98_; lean_object* v_kind_99_; lean_object* v___x_100_; 
v_proof_98_ = lean_ctor_get(v_specThm_92_, 1);
lean_inc_ref(v_proof_98_);
v_kind_99_ = lean_ctor_get(v_specThm_92_, 2);
lean_inc(v_kind_99_);
lean_dec_ref(v_specThm_92_);
v___x_100_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecProof_instantiate(v_proof_98_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
if (lean_obj_tag(v___x_100_) == 0)
{
lean_object* v_a_101_; lean_object* v_snd_102_; lean_object* v_snd_103_; 
v_a_101_ = lean_ctor_get(v___x_100_, 0);
lean_inc(v_a_101_);
v_snd_102_ = lean_ctor_get(v_a_101_, 1);
lean_inc(v_snd_102_);
v_snd_103_ = lean_ctor_get(v_snd_102_, 1);
lean_inc(v_snd_103_);
if (lean_obj_tag(v_kind_99_) == 1)
{
lean_object* v_fst_104_; lean_object* v_fst_105_; lean_object* v_fst_106_; lean_object* v_snd_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_242_; 
v_fst_104_ = lean_ctor_get(v_a_101_, 0);
lean_inc(v_fst_104_);
lean_dec(v_a_101_);
v_fst_105_ = lean_ctor_get(v_snd_102_, 0);
lean_inc(v_fst_105_);
lean_dec(v_snd_102_);
v_fst_106_ = lean_ctor_get(v_snd_103_, 0);
v_snd_107_ = lean_ctor_get(v_snd_103_, 1);
v_isSharedCheck_242_ = !lean_is_exclusive(v_snd_103_);
if (v_isSharedCheck_242_ == 0)
{
v___x_109_ = v_snd_103_;
v_isShared_110_ = v_isSharedCheck_242_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_snd_107_);
lean_inc(v_fst_106_);
lean_dec(v_snd_103_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_242_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v_etaArgs_111_; lean_object* v___x_112_; uint8_t v___x_113_; 
v_etaArgs_111_ = lean_ctor_get(v_kind_99_, 0);
lean_inc(v_etaArgs_111_);
lean_dec_ref_known(v_kind_99_, 1);
v___x_112_ = lean_unsigned_to_nat(0u);
v___x_113_ = lean_nat_dec_eq(v_etaArgs_111_, v___x_112_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_114_ = l_Lean_Expr_cleanupAnnotations(v_snd_107_);
v___x_115_ = l_Lean_Expr_isApp(v___x_114_);
if (v___x_115_ == 0)
{
lean_dec_ref(v___x_114_);
lean_dec(v_etaArgs_111_);
lean_del_object(v___x_109_);
lean_dec(v_fst_106_);
lean_dec(v_fst_105_);
lean_dec(v_fst_104_);
return v___x_100_;
}
else
{
lean_object* v___x_116_; uint8_t v___x_117_; 
v___x_116_ = l_Lean_Expr_appFnCleanup___redArg(v___x_114_);
v___x_117_ = l_Lean_Expr_isApp(v___x_116_);
if (v___x_117_ == 0)
{
lean_dec_ref(v___x_116_);
lean_dec(v_etaArgs_111_);
lean_del_object(v___x_109_);
lean_dec(v_fst_106_);
lean_dec(v_fst_105_);
lean_dec(v_fst_104_);
return v___x_100_;
}
else
{
lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_118_ = l_Lean_Expr_appFnCleanup___redArg(v___x_116_);
v___x_119_ = l_Lean_Expr_isApp(v___x_118_);
if (v___x_119_ == 0)
{
lean_dec_ref(v___x_118_);
lean_dec(v_etaArgs_111_);
lean_del_object(v___x_109_);
lean_dec(v_fst_106_);
lean_dec(v_fst_105_);
lean_dec(v_fst_104_);
return v___x_100_;
}
else
{
lean_object* v_arg_120_; lean_object* v___x_121_; lean_object* v___x_122_; uint8_t v___x_123_; 
v_arg_120_ = lean_ctor_get(v___x_118_, 1);
lean_inc_ref(v_arg_120_);
v___x_121_ = l_Lean_Expr_appFnCleanup___redArg(v___x_118_);
v___x_122_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate___closed__1));
v___x_123_ = l_Lean_Expr_isConstOf(v___x_121_, v___x_122_);
lean_dec_ref(v___x_121_);
if (v___x_123_ == 0)
{
lean_dec_ref(v_arg_120_);
lean_dec(v_etaArgs_111_);
lean_del_object(v___x_109_);
lean_dec(v_fst_106_);
lean_dec(v_fst_105_);
lean_dec(v_fst_104_);
return v___x_100_;
}
else
{
lean_object* v___x_124_; uint8_t v_foApprox_125_; uint8_t v_ctxApprox_126_; uint8_t v_quasiPatternApprox_127_; uint8_t v_constApprox_128_; uint8_t v_isDefEqStuckEx_129_; uint8_t v_unificationHints_130_; uint8_t v_proofIrrelevance_131_; uint8_t v_assignSyntheticOpaque_132_; uint8_t v_offsetCnstrs_133_; uint8_t v_etaStruct_134_; uint8_t v_univApprox_135_; uint8_t v_iota_136_; uint8_t v_beta_137_; uint8_t v_proj_138_; uint8_t v_zeta_139_; uint8_t v_zetaDelta_140_; uint8_t v_zetaUnused_141_; uint8_t v_zetaHave_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_241_; 
lean_dec_ref_known(v___x_100_, 1);
v___x_124_ = l_Lean_Meta_Context_config(v_a_93_);
v_foApprox_125_ = lean_ctor_get_uint8(v___x_124_, 0);
v_ctxApprox_126_ = lean_ctor_get_uint8(v___x_124_, 1);
v_quasiPatternApprox_127_ = lean_ctor_get_uint8(v___x_124_, 2);
v_constApprox_128_ = lean_ctor_get_uint8(v___x_124_, 3);
v_isDefEqStuckEx_129_ = lean_ctor_get_uint8(v___x_124_, 4);
v_unificationHints_130_ = lean_ctor_get_uint8(v___x_124_, 5);
v_proofIrrelevance_131_ = lean_ctor_get_uint8(v___x_124_, 6);
v_assignSyntheticOpaque_132_ = lean_ctor_get_uint8(v___x_124_, 7);
v_offsetCnstrs_133_ = lean_ctor_get_uint8(v___x_124_, 8);
v_etaStruct_134_ = lean_ctor_get_uint8(v___x_124_, 10);
v_univApprox_135_ = lean_ctor_get_uint8(v___x_124_, 11);
v_iota_136_ = lean_ctor_get_uint8(v___x_124_, 12);
v_beta_137_ = lean_ctor_get_uint8(v___x_124_, 13);
v_proj_138_ = lean_ctor_get_uint8(v___x_124_, 14);
v_zeta_139_ = lean_ctor_get_uint8(v___x_124_, 15);
v_zetaDelta_140_ = lean_ctor_get_uint8(v___x_124_, 16);
v_zetaUnused_141_ = lean_ctor_get_uint8(v___x_124_, 17);
v_zetaHave_142_ = lean_ctor_get_uint8(v___x_124_, 18);
v_isSharedCheck_241_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_241_ == 0)
{
v___x_144_ = v___x_124_;
v_isShared_145_ = v_isSharedCheck_241_;
goto v_resetjp_143_;
}
else
{
lean_dec(v___x_124_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_241_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
uint8_t v_trackZetaDelta_146_; lean_object* v_zetaDeltaSet_147_; lean_object* v_lctx_148_; lean_object* v_localInstances_149_; lean_object* v_defEqCtx_x3f_150_; lean_object* v_synthPendingDepth_151_; lean_object* v_canUnfold_x3f_152_; uint8_t v_univApprox_153_; uint8_t v_inTypeClassResolution_154_; uint8_t v_cacheInferType_155_; uint8_t v___x_156_; lean_object* v_config_158_; 
v_trackZetaDelta_146_ = lean_ctor_get_uint8(v_a_93_, sizeof(void*)*7);
v_zetaDeltaSet_147_ = lean_ctor_get(v_a_93_, 1);
v_lctx_148_ = lean_ctor_get(v_a_93_, 2);
v_localInstances_149_ = lean_ctor_get(v_a_93_, 3);
v_defEqCtx_x3f_150_ = lean_ctor_get(v_a_93_, 4);
v_synthPendingDepth_151_ = lean_ctor_get(v_a_93_, 5);
v_canUnfold_x3f_152_ = lean_ctor_get(v_a_93_, 6);
v_univApprox_153_ = lean_ctor_get_uint8(v_a_93_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_154_ = lean_ctor_get_uint8(v_a_93_, sizeof(void*)*7 + 2);
v_cacheInferType_155_ = lean_ctor_get_uint8(v_a_93_, sizeof(void*)*7 + 3);
v___x_156_ = 2;
if (v_isShared_145_ == 0)
{
v_config_158_ = v___x_144_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 0, v_foApprox_125_);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 1, v_ctxApprox_126_);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 2, v_quasiPatternApprox_127_);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 3, v_constApprox_128_);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 4, v_isDefEqStuckEx_129_);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 5, v_unificationHints_130_);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 6, v_proofIrrelevance_131_);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 7, v_assignSyntheticOpaque_132_);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 8, v_offsetCnstrs_133_);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 10, v_etaStruct_134_);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 11, v_univApprox_135_);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 12, v_iota_136_);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 13, v_beta_137_);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 14, v_proj_138_);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 15, v_zeta_139_);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 16, v_zetaDelta_140_);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 17, v_zetaUnused_141_);
lean_ctor_set_uint8(v_reuseFailAlloc_240_, 18, v_zetaHave_142_);
v_config_158_ = v_reuseFailAlloc_240_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
uint64_t v___x_159_; uint64_t v___x_160_; uint64_t v___x_161_; uint8_t v___x_162_; uint64_t v___x_163_; uint64_t v___x_164_; uint64_t v_key_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
lean_ctor_set_uint8(v_config_158_, 9, v___x_156_);
v___x_159_ = l_Lean_Meta_Context_configKey(v_a_93_);
v___x_160_ = 3ULL;
v___x_161_ = lean_uint64_shift_right(v___x_159_, v___x_160_);
v___x_162_ = 0;
v___x_163_ = lean_uint64_shift_left(v___x_161_, v___x_160_);
v___x_164_ = lean_uint64_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate___closed__2, &l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate___closed__2_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate___closed__2);
v_key_165_ = lean_uint64_lor(v___x_163_, v___x_164_);
v___x_166_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_166_, 0, v_config_158_);
lean_ctor_set_uint64(v___x_166_, sizeof(void*)*1, v_key_165_);
lean_inc(v_canUnfold_x3f_152_);
lean_inc(v_synthPendingDepth_151_);
lean_inc(v_defEqCtx_x3f_150_);
lean_inc_ref(v_localInstances_149_);
lean_inc_ref(v_lctx_148_);
lean_inc(v_zetaDeltaSet_147_);
v___x_167_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_167_, 0, v___x_166_);
lean_ctor_set(v___x_167_, 1, v_zetaDeltaSet_147_);
lean_ctor_set(v___x_167_, 2, v_lctx_148_);
lean_ctor_set(v___x_167_, 3, v_localInstances_149_);
lean_ctor_set(v___x_167_, 4, v_defEqCtx_x3f_150_);
lean_ctor_set(v___x_167_, 5, v_synthPendingDepth_151_);
lean_ctor_set(v___x_167_, 6, v_canUnfold_x3f_152_);
lean_ctor_set_uint8(v___x_167_, sizeof(void*)*7, v_trackZetaDelta_146_);
lean_ctor_set_uint8(v___x_167_, sizeof(void*)*7 + 1, v_univApprox_153_);
lean_ctor_set_uint8(v___x_167_, sizeof(void*)*7 + 2, v_inTypeClassResolution_154_);
lean_ctor_set_uint8(v___x_167_, sizeof(void*)*7 + 3, v_cacheInferType_155_);
v___x_168_ = l_Lean_Meta_forallMetaBoundedTelescope(v_arg_120_, v_etaArgs_111_, v___x_162_, v___x_167_, v_a_94_, v_a_95_, v_a_96_);
lean_dec_ref_known(v___x_167_, 7);
if (lean_obj_tag(v___x_168_) == 0)
{
lean_object* v_a_169_; lean_object* v_snd_170_; lean_object* v_fst_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_231_; 
v_a_169_ = lean_ctor_get(v___x_168_, 0);
lean_inc(v_a_169_);
lean_dec_ref_known(v___x_168_, 1);
v_snd_170_ = lean_ctor_get(v_a_169_, 1);
v_fst_171_ = lean_ctor_get(v_a_169_, 0);
v_isSharedCheck_231_ = !lean_is_exclusive(v_a_169_);
if (v_isSharedCheck_231_ == 0)
{
v___x_173_ = v_a_169_;
v_isShared_174_ = v_isSharedCheck_231_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_snd_170_);
lean_inc(v_fst_171_);
lean_dec(v_a_169_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_231_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v_fst_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_229_; 
v_fst_175_ = lean_ctor_get(v_snd_170_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v_snd_170_);
if (v_isSharedCheck_229_ == 0)
{
lean_object* v_unused_230_; 
v_unused_230_ = lean_ctor_get(v_snd_170_, 1);
lean_dec(v_unused_230_);
v___x_177_ = v_snd_170_;
v_isShared_178_ = v_isSharedCheck_229_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_fst_175_);
lean_dec(v_snd_170_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_229_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v_a_180_; lean_object* v___y_210_; lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_220_ = lean_array_get_size(v_fst_171_);
v___x_221_ = lean_nat_dec_lt(v___x_112_, v___x_220_);
if (v___x_221_ == 0)
{
v_a_180_ = v_fst_106_;
goto v___jp_179_;
}
else
{
uint8_t v___x_222_; 
v___x_222_ = lean_nat_dec_le(v___x_220_, v___x_220_);
if (v___x_222_ == 0)
{
if (v___x_221_ == 0)
{
v_a_180_ = v_fst_106_;
goto v___jp_179_;
}
else
{
size_t v___x_223_; size_t v___x_224_; lean_object* v___x_225_; 
v___x_223_ = ((size_t)0ULL);
v___x_224_ = lean_usize_of_nat(v___x_220_);
v___x_225_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate_spec__0(v_fst_171_, v___x_223_, v___x_224_, v_fst_106_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
v___y_210_ = v___x_225_;
goto v___jp_209_;
}
}
else
{
size_t v___x_226_; size_t v___x_227_; lean_object* v___x_228_; 
v___x_226_ = ((size_t)0ULL);
v___x_227_ = lean_usize_of_nat(v___x_220_);
v___x_228_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate_spec__0(v_fst_171_, v___x_226_, v___x_227_, v_fst_106_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
v___y_210_ = v___x_228_;
goto v___jp_209_;
}
}
v___jp_179_:
{
lean_object* v___x_181_; 
lean_inc(v_a_96_);
lean_inc_ref(v_a_95_);
lean_inc(v_a_94_);
lean_inc_ref(v_a_93_);
lean_inc_ref(v_a_180_);
v___x_181_ = lean_infer_type(v_a_180_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_200_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_200_ == 0)
{
v___x_184_ = v___x_181_;
v_isShared_185_ = v_isSharedCheck_200_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_a_182_);
lean_dec(v___x_181_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_200_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_189_; 
v___x_186_ = l_Array_append___redArg(v_fst_104_, v_fst_171_);
lean_dec(v_fst_171_);
v___x_187_ = l_Array_append___redArg(v_fst_105_, v_fst_175_);
lean_dec(v_fst_175_);
if (v_isShared_178_ == 0)
{
lean_ctor_set(v___x_177_, 1, v_a_182_);
lean_ctor_set(v___x_177_, 0, v_a_180_);
v___x_189_ = v___x_177_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_a_180_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v_a_182_);
v___x_189_ = v_reuseFailAlloc_199_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
lean_object* v___x_191_; 
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 1, v___x_189_);
lean_ctor_set(v___x_173_, 0, v___x_187_);
v___x_191_ = v___x_173_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_187_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v___x_189_);
v___x_191_ = v_reuseFailAlloc_198_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
lean_object* v___x_193_; 
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 1, v___x_191_);
lean_ctor_set(v___x_109_, 0, v___x_186_);
v___x_193_ = v___x_109_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_186_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v___x_191_);
v___x_193_ = v_reuseFailAlloc_197_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
lean_object* v___x_195_; 
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 0, v___x_193_);
v___x_195_ = v___x_184_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v___x_193_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
}
}
}
}
else
{
lean_object* v_a_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_208_; 
lean_dec_ref(v_a_180_);
lean_del_object(v___x_177_);
lean_dec(v_fst_175_);
lean_del_object(v___x_173_);
lean_dec(v_fst_171_);
lean_del_object(v___x_109_);
lean_dec(v_fst_105_);
lean_dec(v_fst_104_);
v_a_201_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_208_ == 0)
{
v___x_203_ = v___x_181_;
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_a_201_);
lean_dec(v___x_181_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_206_; 
if (v_isShared_204_ == 0)
{
v___x_206_ = v___x_203_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_a_201_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
return v___x_206_;
}
}
}
}
v___jp_209_:
{
if (lean_obj_tag(v___y_210_) == 0)
{
lean_object* v_a_211_; 
v_a_211_ = lean_ctor_get(v___y_210_, 0);
lean_inc(v_a_211_);
lean_dec_ref_known(v___y_210_, 1);
v_a_180_ = v_a_211_;
goto v___jp_179_;
}
else
{
lean_object* v_a_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_219_; 
lean_del_object(v___x_177_);
lean_dec(v_fst_175_);
lean_del_object(v___x_173_);
lean_dec(v_fst_171_);
lean_del_object(v___x_109_);
lean_dec(v_fst_105_);
lean_dec(v_fst_104_);
v_a_212_ = lean_ctor_get(v___y_210_, 0);
v_isSharedCheck_219_ = !lean_is_exclusive(v___y_210_);
if (v_isSharedCheck_219_ == 0)
{
v___x_214_ = v___y_210_;
v_isShared_215_ = v_isSharedCheck_219_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_a_212_);
lean_dec(v___y_210_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_219_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v___x_217_; 
if (v_isShared_215_ == 0)
{
v___x_217_ = v___x_214_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v_a_212_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_239_; 
lean_del_object(v___x_109_);
lean_dec(v_fst_106_);
lean_dec(v_fst_105_);
lean_dec(v_fst_104_);
v_a_232_ = lean_ctor_get(v___x_168_, 0);
v_isSharedCheck_239_ = !lean_is_exclusive(v___x_168_);
if (v_isSharedCheck_239_ == 0)
{
v___x_234_ = v___x_168_;
v_isShared_235_ = v_isSharedCheck_239_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_a_232_);
lean_dec(v___x_168_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_239_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_237_; 
if (v_isShared_235_ == 0)
{
v___x_237_ = v___x_234_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_a_232_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
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
lean_dec(v_etaArgs_111_);
lean_del_object(v___x_109_);
lean_dec(v_snd_107_);
lean_dec(v_fst_106_);
lean_dec(v_fst_105_);
lean_dec(v_fst_104_);
return v___x_100_;
}
}
}
else
{
lean_dec(v_snd_103_);
lean_dec(v_snd_102_);
lean_dec(v_a_101_);
lean_dec(v_kind_99_);
return v___x_100_;
}
}
else
{
lean_dec(v_kind_99_);
return v___x_100_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate___boxed(lean_object* v_specThm_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate(v_specThm_243_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
lean_dec(v_a_247_);
lean_dec_ref(v_a_246_);
lean_dec(v_a_245_);
lean_dec_ref(v_a_244_);
return v_res_249_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default_spec__0___closed__0(void){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_250_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default_spec__0___closed__1(void){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_251_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default_spec__0___closed__0);
v___x_252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default_spec__0(lean_object* v_00_u03b2_253_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default_spec__0___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default_spec__0___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default_spec__0___closed__1);
return v___x_254_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__0(void){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = l_Lean_Meta_DiscrTree_empty(lean_box(0));
return v___x_255_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__1(void){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default_spec__0(lean_box(0));
return v___x_256_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__2(void){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_257_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__1);
v___x_258_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__0, &l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__0_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__0);
v___x_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
lean_ctor_set(v___x_259_, 1, v___x_257_);
return v___x_259_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default(void){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__2, &l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__2_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__2);
return v___x_260_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew(void){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default;
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0_spec__0(lean_object* v_msgData_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v___x_268_; lean_object* v_env_269_; lean_object* v___x_270_; lean_object* v_mctx_271_; lean_object* v_lctx_272_; lean_object* v_options_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_268_ = lean_st_ref_get(v___y_266_);
v_env_269_ = lean_ctor_get(v___x_268_, 0);
lean_inc_ref(v_env_269_);
lean_dec(v___x_268_);
v___x_270_ = lean_st_ref_get(v___y_264_);
v_mctx_271_ = lean_ctor_get(v___x_270_, 0);
lean_inc_ref(v_mctx_271_);
lean_dec(v___x_270_);
v_lctx_272_ = lean_ctor_get(v___y_263_, 2);
v_options_273_ = lean_ctor_get(v___y_265_, 2);
lean_inc_ref(v_options_273_);
lean_inc_ref(v_lctx_272_);
v___x_274_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_274_, 0, v_env_269_);
lean_ctor_set(v___x_274_, 1, v_mctx_271_);
lean_ctor_set(v___x_274_, 2, v_lctx_272_);
lean_ctor_set(v___x_274_, 3, v_options_273_);
v___x_275_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
lean_ctor_set(v___x_275_, 1, v_msgData_262_);
v___x_276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0_spec__0___boxed(lean_object* v_msgData_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0_spec__0(v_msgData_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_);
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0___redArg(lean_object* v_msg_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_){
_start:
{
lean_object* v_ref_290_; lean_object* v___x_291_; lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_300_; 
v_ref_290_ = lean_ctor_get(v___y_287_, 5);
v___x_291_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0_spec__0(v_msg_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_);
v_a_292_ = lean_ctor_get(v___x_291_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_291_);
if (v_isSharedCheck_300_ == 0)
{
v___x_294_ = v___x_291_;
v_isShared_295_ = v_isSharedCheck_300_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___x_291_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_300_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_296_; lean_object* v___x_298_; 
lean_inc(v_ref_290_);
v___x_296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_296_, 0, v_ref_290_);
lean_ctor_set(v___x_296_, 1, v_a_292_);
if (v_isShared_295_ == 0)
{
lean_ctor_set_tag(v___x_294_, 1);
lean_ctor_set(v___x_294_, 0, v___x_296_);
v___x_298_ = v___x_294_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v___x_296_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0___redArg___boxed(lean_object* v_msg_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0___redArg(v_msg_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_);
lean_dec(v___y_305_);
lean_dec_ref(v___y_304_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
return v_res_307_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__11(void){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__10));
v___x_328_ = l_Lean_stringToMessageData(v___x_327_);
return v___x_328_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__13(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__12));
v___x_331_ = l_Lean_stringToMessageData(v___x_330_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg(lean_object* v_type_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_){
_start:
{
lean_object* v___x_344_; 
v___x_344_ = l_Lean_Meta_whnfR(v_type_338_, v_a_339_, v_a_340_, v_a_341_, v_a_342_);
if (lean_obj_tag(v___x_344_) == 0)
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_416_; 
v_a_345_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_416_ == 0)
{
v___x_347_ = v___x_344_;
v_isShared_348_ = v_isSharedCheck_416_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_344_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_416_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_349_; lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_349_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__4));
v___x_350_ = lean_unsigned_to_nat(12u);
v___x_351_ = l_Lean_Expr_isAppOfArity(v_a_345_, v___x_349_, v___x_350_);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_352_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__9));
v___x_353_ = lean_unsigned_to_nat(4u);
v___x_354_ = l_Lean_Expr_isAppOfArity(v_a_345_, v___x_352_, v___x_353_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
lean_del_object(v___x_347_);
v___x_355_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__11, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__11_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__11);
v___x_356_ = l_Lean_indentExpr(v_a_345_);
v___x_357_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_357_, 0, v___x_355_);
lean_ctor_set(v___x_357_, 1, v___x_356_);
v___x_358_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0___redArg(v___x_357_, v_a_339_, v_a_340_, v_a_341_, v_a_342_);
return v___x_358_;
}
else
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___y_366_; lean_object* v___y_367_; lean_object* v___y_368_; lean_object* v___y_369_; lean_object* v___x_374_; uint8_t v___x_375_; 
v___x_359_ = lean_unsigned_to_nat(3u);
v___x_360_ = l_Lean_Expr_getAppNumArgs(v_a_345_);
v___x_361_ = lean_nat_sub(v___x_360_, v___x_359_);
lean_dec(v___x_360_);
v___x_362_ = lean_unsigned_to_nat(1u);
v___x_363_ = lean_nat_sub(v___x_361_, v___x_362_);
lean_dec(v___x_361_);
v___x_364_ = l_Lean_Expr_getRevArg_x21(v_a_345_, v___x_363_);
lean_dec(v_a_345_);
lean_inc_ref(v___x_364_);
v___x_374_ = l_Lean_Expr_cleanupAnnotations(v___x_364_);
v___x_375_ = l_Lean_Expr_isApp(v___x_374_);
if (v___x_375_ == 0)
{
lean_dec_ref(v___x_374_);
lean_del_object(v___x_347_);
v___y_366_ = v_a_339_;
v___y_367_ = v_a_340_;
v___y_368_ = v_a_341_;
v___y_369_ = v_a_342_;
goto v___jp_365_;
}
else
{
lean_object* v___x_376_; uint8_t v___x_377_; 
v___x_376_ = l_Lean_Expr_appFnCleanup___redArg(v___x_374_);
v___x_377_ = l_Lean_Expr_isApp(v___x_376_);
if (v___x_377_ == 0)
{
lean_dec_ref(v___x_376_);
lean_del_object(v___x_347_);
v___y_366_ = v_a_339_;
v___y_367_ = v_a_340_;
v___y_368_ = v_a_341_;
v___y_369_ = v_a_342_;
goto v___jp_365_;
}
else
{
lean_object* v___x_378_; uint8_t v___x_379_; 
v___x_378_ = l_Lean_Expr_appFnCleanup___redArg(v___x_376_);
v___x_379_ = l_Lean_Expr_isApp(v___x_378_);
if (v___x_379_ == 0)
{
lean_dec_ref(v___x_378_);
lean_del_object(v___x_347_);
v___y_366_ = v_a_339_;
v___y_367_ = v_a_340_;
v___y_368_ = v_a_341_;
v___y_369_ = v_a_342_;
goto v___jp_365_;
}
else
{
lean_object* v_arg_380_; lean_object* v___x_381_; uint8_t v___x_382_; 
v_arg_380_ = lean_ctor_get(v___x_378_, 1);
lean_inc_ref(v_arg_380_);
v___x_381_ = l_Lean_Expr_appFnCleanup___redArg(v___x_378_);
v___x_382_ = l_Lean_Expr_isApp(v___x_381_);
if (v___x_382_ == 0)
{
lean_dec_ref(v___x_381_);
lean_dec_ref(v_arg_380_);
lean_del_object(v___x_347_);
v___y_366_ = v_a_339_;
v___y_367_ = v_a_340_;
v___y_368_ = v_a_341_;
v___y_369_ = v_a_342_;
goto v___jp_365_;
}
else
{
lean_object* v___x_383_; uint8_t v___x_384_; 
v___x_383_ = l_Lean_Expr_appFnCleanup___redArg(v___x_381_);
v___x_384_ = l_Lean_Expr_isApp(v___x_383_);
if (v___x_384_ == 0)
{
lean_dec_ref(v___x_383_);
lean_dec_ref(v_arg_380_);
lean_del_object(v___x_347_);
v___y_366_ = v_a_339_;
v___y_367_ = v_a_340_;
v___y_368_ = v_a_341_;
v___y_369_ = v_a_342_;
goto v___jp_365_;
}
else
{
lean_object* v___x_385_; uint8_t v___x_386_; 
v___x_385_ = l_Lean_Expr_appFnCleanup___redArg(v___x_383_);
v___x_386_ = l_Lean_Expr_isApp(v___x_385_);
if (v___x_386_ == 0)
{
lean_dec_ref(v___x_385_);
lean_dec_ref(v_arg_380_);
lean_del_object(v___x_347_);
v___y_366_ = v_a_339_;
v___y_367_ = v_a_340_;
v___y_368_ = v_a_341_;
v___y_369_ = v_a_342_;
goto v___jp_365_;
}
else
{
lean_object* v___x_387_; uint8_t v___x_388_; 
v___x_387_ = l_Lean_Expr_appFnCleanup___redArg(v___x_385_);
v___x_388_ = l_Lean_Expr_isApp(v___x_387_);
if (v___x_388_ == 0)
{
lean_dec_ref(v___x_387_);
lean_dec_ref(v_arg_380_);
lean_del_object(v___x_347_);
v___y_366_ = v_a_339_;
v___y_367_ = v_a_340_;
v___y_368_ = v_a_341_;
v___y_369_ = v_a_342_;
goto v___jp_365_;
}
else
{
lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_389_ = l_Lean_Expr_appFnCleanup___redArg(v___x_387_);
v___x_390_ = l_Lean_Expr_isApp(v___x_389_);
if (v___x_390_ == 0)
{
lean_dec_ref(v___x_389_);
lean_dec_ref(v_arg_380_);
lean_del_object(v___x_347_);
v___y_366_ = v_a_339_;
v___y_367_ = v_a_340_;
v___y_368_ = v_a_341_;
v___y_369_ = v_a_342_;
goto v___jp_365_;
}
else
{
lean_object* v___x_391_; uint8_t v___x_392_; 
v___x_391_ = l_Lean_Expr_appFnCleanup___redArg(v___x_389_);
v___x_392_ = l_Lean_Expr_isApp(v___x_391_);
if (v___x_392_ == 0)
{
lean_dec_ref(v___x_391_);
lean_dec_ref(v_arg_380_);
lean_del_object(v___x_347_);
v___y_366_ = v_a_339_;
v___y_367_ = v_a_340_;
v___y_368_ = v_a_341_;
v___y_369_ = v_a_342_;
goto v___jp_365_;
}
else
{
lean_object* v___x_393_; uint8_t v___x_394_; 
v___x_393_ = l_Lean_Expr_appFnCleanup___redArg(v___x_391_);
v___x_394_ = l_Lean_Expr_isApp(v___x_393_);
if (v___x_394_ == 0)
{
lean_dec_ref(v___x_393_);
lean_dec_ref(v_arg_380_);
lean_del_object(v___x_347_);
v___y_366_ = v_a_339_;
v___y_367_ = v_a_340_;
v___y_368_ = v_a_341_;
v___y_369_ = v_a_342_;
goto v___jp_365_;
}
else
{
lean_object* v___x_395_; uint8_t v___x_396_; 
v___x_395_ = l_Lean_Expr_appFnCleanup___redArg(v___x_393_);
v___x_396_ = l_Lean_Expr_isApp(v___x_395_);
if (v___x_396_ == 0)
{
lean_dec_ref(v___x_395_);
lean_dec_ref(v_arg_380_);
lean_del_object(v___x_347_);
v___y_366_ = v_a_339_;
v___y_367_ = v_a_340_;
v___y_368_ = v_a_341_;
v___y_369_ = v_a_342_;
goto v___jp_365_;
}
else
{
lean_object* v___x_397_; lean_object* v___x_398_; uint8_t v___x_399_; 
v___x_397_ = l_Lean_Expr_appFnCleanup___redArg(v___x_395_);
v___x_398_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__15));
v___x_399_ = l_Lean_Expr_isConstOf(v___x_397_, v___x_398_);
lean_dec_ref(v___x_397_);
if (v___x_399_ == 0)
{
lean_dec_ref(v_arg_380_);
lean_del_object(v___x_347_);
v___y_366_ = v_a_339_;
v___y_367_ = v_a_340_;
v___y_368_ = v_a_341_;
v___y_369_ = v_a_342_;
goto v___jp_365_;
}
else
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_403_; 
lean_dec_ref(v___x_364_);
v___x_400_ = lean_box(0);
v___x_401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_401_, 0, v_arg_380_);
lean_ctor_set(v___x_401_, 1, v___x_400_);
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 0, v___x_401_);
v___x_403_ = v___x_347_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v___x_401_);
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
}
}
}
}
}
}
}
}
v___jp_365_:
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_370_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__13, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__13_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___closed__13);
v___x_371_ = l_Lean_indentExpr(v___x_364_);
v___x_372_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_370_);
lean_ctor_set(v___x_372_, 1, v___x_371_);
v___x_373_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0___redArg(v___x_372_, v___y_366_, v___y_367_, v___y_368_, v___y_369_);
return v___x_373_;
}
}
}
else
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_414_; 
v___x_405_ = lean_unsigned_to_nat(9u);
v___x_406_ = l_Lean_Expr_getAppNumArgs(v_a_345_);
v___x_407_ = lean_nat_sub(v___x_406_, v___x_405_);
lean_dec(v___x_406_);
v___x_408_ = lean_unsigned_to_nat(1u);
v___x_409_ = lean_nat_sub(v___x_407_, v___x_408_);
lean_dec(v___x_407_);
v___x_410_ = l_Lean_Expr_getRevArg_x21(v_a_345_, v___x_409_);
lean_dec(v_a_345_);
v___x_411_ = lean_box(0);
v___x_412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_410_);
lean_ctor_set(v___x_412_, 1, v___x_411_);
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 0, v___x_412_);
v___x_414_ = v___x_347_;
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
}
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
v_a_417_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_344_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_344_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg___boxed(lean_object* v_type_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg(v_type_425_, v_a_426_, v_a_427_, v_a_428_, v_a_429_);
lean_dec(v_a_429_);
lean_dec_ref(v_a_428_);
lean_dec(v_a_427_);
lean_dec_ref(v_a_426_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0(lean_object* v_00_u03b1_432_, lean_object* v_msg_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0___redArg(v_msg_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0___boxed(lean_object* v_00_u03b1_440_, lean_object* v_msg_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0(v_00_u03b1_440_, v_msg_441_, v___y_442_, v___y_443_, v___y_444_, v___y_445_);
lean_dec(v___y_445_);
lean_dec_ref(v___y_444_);
lean_dec(v___y_443_);
lean_dec_ref(v___y_442_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg(lean_object* v_proof_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_){
_start:
{
switch(lean_obj_tag(v_proof_451_))
{
case 0:
{
lean_object* v_declName_457_; lean_object* v___x_458_; 
v_declName_457_ = lean_ctor_get(v_proof_451_, 0);
lean_inc(v_declName_457_);
lean_dec_ref_known(v_proof_451_, 1);
v___x_458_ = l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_preprocessDeclPattern(v_declName_457_, v_a_452_, v_a_453_, v_a_454_, v_a_455_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v_a_459_; lean_object* v_fst_460_; lean_object* v_snd_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v_a_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_a_459_);
lean_dec_ref_known(v___x_458_, 1);
v_fst_460_ = lean_ctor_get(v_a_459_, 0);
lean_inc(v_fst_460_);
v_snd_461_ = lean_ctor_get(v_a_459_, 1);
lean_inc_n(v_snd_461_, 2);
lean_dec(v_a_459_);
v___x_462_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg___closed__0));
v___x_463_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg___closed__1));
v___x_464_ = l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_mkPatternFromTypeWithKey_go(lean_box(0), v_fst_460_, v_snd_461_, v___x_462_, v_snd_461_, v___x_463_, v_a_452_, v_a_453_, v_a_454_, v_a_455_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_473_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_473_ == 0)
{
v___x_467_ = v___x_464_;
v_isShared_468_ = v_isSharedCheck_473_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v___x_464_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_473_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v_fst_469_; lean_object* v___x_471_; 
v_fst_469_ = lean_ctor_get(v_a_465_, 0);
lean_inc(v_fst_469_);
lean_dec(v_a_465_);
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 0, v_fst_469_);
v___x_471_ = v___x_467_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_fst_469_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
else
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
v_a_474_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_481_ == 0)
{
v___x_476_ = v___x_464_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_464_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_474_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
}
else
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_489_; 
v_a_482_ = lean_ctor_get(v___x_458_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_489_ == 0)
{
v___x_484_ = v___x_458_;
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v___x_458_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
if (v_isShared_485_ == 0)
{
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_a_482_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_490_; lean_object* v_e_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v_fvarId_490_ = lean_ctor_get(v_proof_451_, 0);
lean_inc(v_fvarId_490_);
lean_dec_ref_known(v_proof_451_, 1);
v_e_491_ = l_Lean_mkFVar(v_fvarId_490_);
v___x_492_ = lean_box(0);
v___x_493_ = l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_preprocessExprPattern(v_e_491_, v___x_492_, v_a_452_, v_a_453_, v_a_454_, v_a_455_);
if (lean_obj_tag(v___x_493_) == 0)
{
lean_object* v_a_494_; lean_object* v_fst_495_; lean_object* v_snd_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v_a_494_ = lean_ctor_get(v___x_493_, 0);
lean_inc(v_a_494_);
lean_dec_ref_known(v___x_493_, 1);
v_fst_495_ = lean_ctor_get(v_a_494_, 0);
lean_inc(v_fst_495_);
v_snd_496_ = lean_ctor_get(v_a_494_, 1);
lean_inc_n(v_snd_496_, 2);
lean_dec(v_a_494_);
v___x_497_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg___closed__0));
v___x_498_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg___closed__1));
v___x_499_ = l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_mkPatternFromTypeWithKey_go(lean_box(0), v_fst_495_, v_snd_496_, v___x_497_, v_snd_496_, v___x_498_, v_a_452_, v_a_453_, v_a_454_, v_a_455_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_508_; 
v_a_500_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_508_ == 0)
{
v___x_502_ = v___x_499_;
v_isShared_503_ = v_isSharedCheck_508_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_499_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_508_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v_fst_504_; lean_object* v___x_506_; 
v_fst_504_ = lean_ctor_get(v_a_500_, 0);
lean_inc(v_fst_504_);
lean_dec(v_a_500_);
if (v_isShared_503_ == 0)
{
lean_ctor_set(v___x_502_, 0, v_fst_504_);
v___x_506_ = v___x_502_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_fst_504_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
else
{
lean_object* v_a_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_516_; 
v_a_509_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_516_ == 0)
{
v___x_511_ = v___x_499_;
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_a_509_);
lean_dec(v___x_499_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_514_; 
if (v_isShared_512_ == 0)
{
v___x_514_ = v___x_511_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_a_509_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
}
else
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_524_; 
v_a_517_ = lean_ctor_get(v___x_493_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_493_);
if (v_isSharedCheck_524_ == 0)
{
v___x_519_ = v___x_493_;
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v___x_493_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_522_; 
if (v_isShared_520_ == 0)
{
v___x_522_ = v___x_519_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_a_517_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
}
}
default: 
{
lean_object* v_proof_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v_proof_525_ = lean_ctor_get(v_proof_451_, 2);
lean_inc_ref(v_proof_525_);
lean_dec_ref_known(v_proof_451_, 3);
v___x_526_ = lean_box(0);
v___x_527_ = l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_preprocessExprPattern(v_proof_525_, v___x_526_, v_a_452_, v_a_453_, v_a_454_, v_a_455_);
if (lean_obj_tag(v___x_527_) == 0)
{
lean_object* v_a_528_; lean_object* v_fst_529_; lean_object* v_snd_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v_a_528_ = lean_ctor_get(v___x_527_, 0);
lean_inc(v_a_528_);
lean_dec_ref_known(v___x_527_, 1);
v_fst_529_ = lean_ctor_get(v_a_528_, 0);
lean_inc(v_fst_529_);
v_snd_530_ = lean_ctor_get(v_a_528_, 1);
lean_inc_n(v_snd_530_, 2);
lean_dec(v_a_528_);
v___x_531_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg___closed__0));
v___x_532_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg___closed__1));
v___x_533_ = l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_mkPatternFromTypeWithKey_go(lean_box(0), v_fst_529_, v_snd_530_, v___x_531_, v_snd_530_, v___x_532_, v_a_452_, v_a_453_, v_a_454_, v_a_455_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_542_; 
v_a_534_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_542_ == 0)
{
v___x_536_ = v___x_533_;
v_isShared_537_ = v_isSharedCheck_542_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_dec(v___x_533_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_542_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v_fst_538_; lean_object* v___x_540_; 
v_fst_538_ = lean_ctor_get(v_a_534_, 0);
lean_inc(v_fst_538_);
lean_dec(v_a_534_);
if (v_isShared_537_ == 0)
{
lean_ctor_set(v___x_536_, 0, v_fst_538_);
v___x_540_ = v___x_536_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_fst_538_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
else
{
lean_object* v_a_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_550_; 
v_a_543_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_550_ == 0)
{
v___x_545_ = v___x_533_;
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_a_543_);
lean_dec(v___x_533_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_548_; 
if (v_isShared_546_ == 0)
{
v___x_548_ = v___x_545_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_a_543_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
}
else
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_558_; 
v_a_551_ = lean_ctor_get(v___x_527_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_527_);
if (v_isSharedCheck_558_ == 0)
{
v___x_553_ = v___x_527_;
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v___x_527_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_554_ == 0)
{
v___x_556_ = v___x_553_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_551_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg___boxed(lean_object* v_proof_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg(v_proof_559_, v_a_560_, v_a_561_, v_a_562_, v_a_563_);
lean_dec(v_a_563_);
lean_dec_ref(v_a_562_);
lean_dec(v_a_561_);
lean_dec_ref(v_a_560_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern(lean_object* v_proof_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg(v_proof_566_, v_a_569_, v_a_570_, v_a_571_, v_a_572_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___boxed(lean_object* v_proof_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern(v_proof_575_, v_a_576_, v_a_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_);
lean_dec(v_a_581_);
lean_dec_ref(v_a_580_);
lean_dec(v_a_579_);
lean_dec_ref(v_a_578_);
lean_dec(v_a_577_);
lean_dec_ref(v_a_576_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew___redArg(lean_object* v_spec_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_){
_start:
{
lean_object* v_proof_590_; lean_object* v_priority_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_616_; 
v_proof_590_ = lean_ctor_get(v_spec_584_, 2);
v_priority_591_ = lean_ctor_get(v_spec_584_, 3);
v_isSharedCheck_616_ = !lean_is_exclusive(v_spec_584_);
if (v_isSharedCheck_616_ == 0)
{
lean_object* v_unused_617_; lean_object* v_unused_618_; 
v_unused_617_ = lean_ctor_get(v_spec_584_, 1);
lean_dec(v_unused_617_);
v_unused_618_ = lean_ctor_get(v_spec_584_, 0);
lean_dec(v_unused_618_);
v___x_593_ = v_spec_584_;
v_isShared_594_ = v_isSharedCheck_616_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_priority_591_);
lean_inc(v_proof_590_);
lean_dec(v_spec_584_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_616_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_595_; 
lean_inc_ref(v_proof_590_);
v___x_595_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg(v_proof_590_, v_a_585_, v_a_586_, v_a_587_, v_a_588_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_607_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_607_ == 0)
{
v___x_598_ = v___x_595_;
v_isShared_599_ = v_isSharedCheck_607_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_595_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_607_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_600_; lean_object* v___x_602_; 
v___x_600_ = lean_box(0);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 2, v___x_600_);
lean_ctor_set(v___x_593_, 1, v_proof_590_);
lean_ctor_set(v___x_593_, 0, v_a_596_);
v___x_602_ = v___x_593_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_a_596_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v_proof_590_);
lean_ctor_set(v_reuseFailAlloc_606_, 2, v___x_600_);
lean_ctor_set(v_reuseFailAlloc_606_, 3, v_priority_591_);
v___x_602_ = v_reuseFailAlloc_606_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
lean_object* v___x_604_; 
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 0, v___x_602_);
v___x_604_ = v___x_598_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v___x_602_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
return v___x_604_;
}
}
}
}
else
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_615_; 
lean_del_object(v___x_593_);
lean_dec(v_priority_591_);
lean_dec_ref(v_proof_590_);
v_a_608_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_615_ == 0)
{
v___x_610_ = v___x_595_;
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v___x_595_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_613_; 
if (v_isShared_611_ == 0)
{
v___x_613_ = v___x_610_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_a_608_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew___redArg___boxed(lean_object* v_spec_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew___redArg(v_spec_619_, v_a_620_, v_a_621_, v_a_622_, v_a_623_);
lean_dec(v_a_623_);
lean_dec_ref(v_a_622_);
lean_dec(v_a_621_);
lean_dec_ref(v_a_620_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew(lean_object* v_spec_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_){
_start:
{
lean_object* v___x_634_; 
v___x_634_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew___redArg(v_spec_626_, v_a_629_, v_a_630_, v_a_631_, v_a_632_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew___boxed(lean_object* v_spec_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_){
_start:
{
lean_object* v_res_643_; 
v_res_643_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew(v_spec_635_, v_a_636_, v_a_637_, v_a_638_, v_a_639_, v_a_640_, v_a_641_);
lean_dec(v_a_641_);
lean_dec_ref(v_a_640_);
lean_dec(v_a_639_);
lean_dec_ref(v_a_638_);
lean_dec(v_a_637_);
lean_dec_ref(v_a_636_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew_x3f___redArg(lean_object* v_proof_644_, lean_object* v_prio_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_){
_start:
{
lean_object* v___x_651_; 
lean_inc_ref(v_proof_644_);
v___x_651_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg(v_proof_644_, v_a_646_, v_a_647_, v_a_648_, v_a_649_);
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v_a_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_662_; 
v_a_652_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_662_ == 0)
{
v___x_654_ = v___x_651_;
v_isShared_655_ = v_isSharedCheck_662_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_a_652_);
lean_dec(v___x_651_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_662_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_660_; 
v___x_656_ = lean_box(0);
v___x_657_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_657_, 0, v_a_652_);
lean_ctor_set(v___x_657_, 1, v_proof_644_);
lean_ctor_set(v___x_657_, 2, v___x_656_);
lean_ctor_set(v___x_657_, 3, v_prio_645_);
v___x_658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 0, v___x_658_);
v___x_660_ = v___x_654_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v___x_658_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
else
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_678_; 
lean_dec(v_prio_645_);
lean_dec_ref(v_proof_644_);
v_a_663_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_678_ == 0)
{
v___x_665_ = v___x_651_;
v_isShared_666_ = v_isSharedCheck_678_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_651_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_678_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
uint8_t v___y_668_; uint8_t v___x_676_; 
v___x_676_ = l_Lean_Exception_isInterrupt(v_a_663_);
if (v___x_676_ == 0)
{
uint8_t v___x_677_; 
lean_inc(v_a_663_);
v___x_677_ = l_Lean_Exception_isRuntime(v_a_663_);
v___y_668_ = v___x_677_;
goto v___jp_667_;
}
else
{
v___y_668_ = v___x_676_;
goto v___jp_667_;
}
v___jp_667_:
{
if (v___y_668_ == 0)
{
lean_object* v___x_669_; lean_object* v___x_671_; 
lean_dec(v_a_663_);
v___x_669_ = lean_box(0);
if (v_isShared_666_ == 0)
{
lean_ctor_set_tag(v___x_665_, 0);
lean_ctor_set(v___x_665_, 0, v___x_669_);
v___x_671_ = v___x_665_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v___x_669_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
else
{
lean_object* v___x_674_; 
if (v_isShared_666_ == 0)
{
v___x_674_ = v___x_665_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_a_663_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew_x3f___redArg___boxed(lean_object* v_proof_679_, lean_object* v_prio_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew_x3f___redArg(v_proof_679_, v_prio_680_, v_a_681_, v_a_682_, v_a_683_, v_a_684_);
lean_dec(v_a_684_);
lean_dec_ref(v_a_683_);
lean_dec(v_a_682_);
lean_dec_ref(v_a_681_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew_x3f(lean_object* v_proof_687_, lean_object* v_prio_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_){
_start:
{
lean_object* v___x_696_; 
v___x_696_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew_x3f___redArg(v_proof_687_, v_prio_688_, v_a_691_, v_a_692_, v_a_693_, v_a_694_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew_x3f___boxed(lean_object* v_proof_697_, lean_object* v_prio_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew_x3f(v_proof_697_, v_prio_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_);
lean_dec(v_a_704_);
lean_dec_ref(v_a_703_);
lean_dec(v_a_702_);
lean_dec_ref(v_a_701_);
lean_dec(v_a_700_);
lean_dec_ref(v_a_699_);
return v_res_706_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__4___closed__0(void){
_start:
{
lean_object* v___x_707_; 
v___x_707_ = l_Lean_Meta_DiscrTree_instInhabited(lean_box(0));
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__4(lean_object* v_msg_708_){
_start:
{
lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_709_ = lean_obj_once(&l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__4___closed__0, &l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__4___closed__0_once, _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__4___closed__0);
v___x_710_ = lean_panic_fn_borrowed(v___x_709_, v_msg_708_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_keys_711_, lean_object* v_vals_712_, lean_object* v_i_713_, lean_object* v_k_714_){
_start:
{
lean_object* v___x_715_; uint8_t v___x_716_; 
v___x_715_ = lean_array_get_size(v_keys_711_);
v___x_716_ = lean_nat_dec_lt(v_i_713_, v___x_715_);
if (v___x_716_ == 0)
{
lean_object* v___x_717_; 
lean_dec(v_i_713_);
v___x_717_ = lean_box(0);
return v___x_717_;
}
else
{
lean_object* v_k_x27_718_; uint8_t v___x_719_; 
v_k_x27_718_ = lean_array_fget_borrowed(v_keys_711_, v_i_713_);
v___x_719_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_k_714_, v_k_x27_718_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_720_ = lean_unsigned_to_nat(1u);
v___x_721_ = lean_nat_add(v_i_713_, v___x_720_);
lean_dec(v_i_713_);
v_i_713_ = v___x_721_;
goto _start;
}
else
{
lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_723_ = lean_array_fget_borrowed(v_vals_712_, v_i_713_);
lean_dec(v_i_713_);
lean_inc(v___x_723_);
v___x_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_724_, 0, v___x_723_);
return v___x_724_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_keys_725_, lean_object* v_vals_726_, lean_object* v_i_727_, lean_object* v_k_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_keys_725_, v_vals_726_, v_i_727_, v_k_728_);
lean_dec(v_k_728_);
lean_dec_ref(v_vals_726_);
lean_dec_ref(v_keys_725_);
return v_res_729_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__0(void){
_start:
{
size_t v___x_730_; size_t v___x_731_; size_t v___x_732_; 
v___x_730_ = ((size_t)5ULL);
v___x_731_ = ((size_t)1ULL);
v___x_732_ = lean_usize_shift_left(v___x_731_, v___x_730_);
return v___x_732_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1(void){
_start:
{
size_t v___x_733_; size_t v___x_734_; size_t v___x_735_; 
v___x_733_ = ((size_t)1ULL);
v___x_734_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__0);
v___x_735_ = lean_usize_sub(v___x_734_, v___x_733_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_736_, size_t v_x_737_, lean_object* v_x_738_){
_start:
{
if (lean_obj_tag(v_x_736_) == 0)
{
lean_object* v_es_739_; lean_object* v___x_740_; size_t v___x_741_; size_t v___x_742_; size_t v___x_743_; lean_object* v_j_744_; lean_object* v___x_745_; 
v_es_739_ = lean_ctor_get(v_x_736_, 0);
v___x_740_ = lean_box(2);
v___x_741_ = ((size_t)5ULL);
v___x_742_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1);
v___x_743_ = lean_usize_land(v_x_737_, v___x_742_);
v_j_744_ = lean_usize_to_nat(v___x_743_);
v___x_745_ = lean_array_get_borrowed(v___x_740_, v_es_739_, v_j_744_);
lean_dec(v_j_744_);
switch(lean_obj_tag(v___x_745_))
{
case 0:
{
lean_object* v_key_746_; lean_object* v_val_747_; uint8_t v___x_748_; 
v_key_746_ = lean_ctor_get(v___x_745_, 0);
v_val_747_ = lean_ctor_get(v___x_745_, 1);
v___x_748_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_738_, v_key_746_);
if (v___x_748_ == 0)
{
lean_object* v___x_749_; 
v___x_749_ = lean_box(0);
return v___x_749_;
}
else
{
lean_object* v___x_750_; 
lean_inc(v_val_747_);
v___x_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_750_, 0, v_val_747_);
return v___x_750_;
}
}
case 1:
{
lean_object* v_node_751_; size_t v___x_752_; 
v_node_751_ = lean_ctor_get(v___x_745_, 0);
v___x_752_ = lean_usize_shift_right(v_x_737_, v___x_741_);
v_x_736_ = v_node_751_;
v_x_737_ = v___x_752_;
goto _start;
}
default: 
{
lean_object* v___x_754_; 
v___x_754_ = lean_box(0);
return v___x_754_;
}
}
}
else
{
lean_object* v_ks_755_; lean_object* v_vs_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
v_ks_755_ = lean_ctor_get(v_x_736_, 0);
v_vs_756_ = lean_ctor_get(v_x_736_, 1);
v___x_757_ = lean_unsigned_to_nat(0u);
v___x_758_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ks_755_, v_vs_756_, v___x_757_, v_x_738_);
return v___x_758_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_x_759_, lean_object* v_x_760_, lean_object* v_x_761_){
_start:
{
size_t v_x_1564__boxed_762_; lean_object* v_res_763_; 
v_x_1564__boxed_762_ = lean_unbox_usize(v_x_760_);
lean_dec(v_x_760_);
v_res_763_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_x_759_, v_x_1564__boxed_762_, v_x_761_);
lean_dec(v_x_761_);
lean_dec_ref(v_x_759_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1___redArg(lean_object* v_x_764_, lean_object* v_x_765_){
_start:
{
uint64_t v___x_766_; size_t v___x_767_; lean_object* v___x_768_; 
v___x_766_ = l_Lean_Meta_DiscrTree_Key_hash(v_x_765_);
v___x_767_ = lean_uint64_to_usize(v___x_766_);
v___x_768_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_x_764_, v___x_767_, v_x_765_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_769_, lean_object* v_x_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1___redArg(v_x_769_, v_x_770_);
lean_dec(v_x_770_);
lean_dec_ref(v_x_769_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__7_spec__9___redArg(lean_object* v_x_772_, lean_object* v_x_773_, lean_object* v_x_774_, lean_object* v_x_775_){
_start:
{
lean_object* v_ks_776_; lean_object* v_vs_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_801_; 
v_ks_776_ = lean_ctor_get(v_x_772_, 0);
v_vs_777_ = lean_ctor_get(v_x_772_, 1);
v_isSharedCheck_801_ = !lean_is_exclusive(v_x_772_);
if (v_isSharedCheck_801_ == 0)
{
v___x_779_ = v_x_772_;
v_isShared_780_ = v_isSharedCheck_801_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_vs_777_);
lean_inc(v_ks_776_);
lean_dec(v_x_772_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_801_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_781_; uint8_t v___x_782_; 
v___x_781_ = lean_array_get_size(v_ks_776_);
v___x_782_ = lean_nat_dec_lt(v_x_773_, v___x_781_);
if (v___x_782_ == 0)
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_786_; 
lean_dec(v_x_773_);
v___x_783_ = lean_array_push(v_ks_776_, v_x_774_);
v___x_784_ = lean_array_push(v_vs_777_, v_x_775_);
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 1, v___x_784_);
lean_ctor_set(v___x_779_, 0, v___x_783_);
v___x_786_ = v___x_779_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v___x_783_);
lean_ctor_set(v_reuseFailAlloc_787_, 1, v___x_784_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
else
{
lean_object* v_k_x27_788_; uint8_t v___x_789_; 
v_k_x27_788_ = lean_array_fget_borrowed(v_ks_776_, v_x_773_);
v___x_789_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_774_, v_k_x27_788_);
if (v___x_789_ == 0)
{
lean_object* v___x_791_; 
if (v_isShared_780_ == 0)
{
v___x_791_ = v___x_779_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_ks_776_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v_vs_777_);
v___x_791_ = v_reuseFailAlloc_795_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_792_ = lean_unsigned_to_nat(1u);
v___x_793_ = lean_nat_add(v_x_773_, v___x_792_);
lean_dec(v_x_773_);
v_x_772_ = v___x_791_;
v_x_773_ = v___x_793_;
goto _start;
}
}
else
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_799_; 
v___x_796_ = lean_array_fset(v_ks_776_, v_x_773_, v_x_774_);
v___x_797_ = lean_array_fset(v_vs_777_, v_x_773_, v_x_775_);
lean_dec(v_x_773_);
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 1, v___x_797_);
lean_ctor_set(v___x_779_, 0, v___x_796_);
v___x_799_ = v___x_779_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v___x_796_);
lean_ctor_set(v_reuseFailAlloc_800_, 1, v___x_797_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__7___redArg(lean_object* v_n_802_, lean_object* v_k_803_, lean_object* v_v_804_){
_start:
{
lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_805_ = lean_unsigned_to_nat(0u);
v___x_806_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__7_spec__9___redArg(v_n_802_, v___x_805_, v_k_803_, v_v_804_);
return v___x_806_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_807_; 
v___x_807_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_x_808_, size_t v_x_809_, size_t v_x_810_, lean_object* v_x_811_, lean_object* v_x_812_){
_start:
{
if (lean_obj_tag(v_x_808_) == 0)
{
lean_object* v_es_813_; size_t v___x_814_; size_t v___x_815_; size_t v___x_816_; size_t v___x_817_; lean_object* v_j_818_; lean_object* v___x_819_; uint8_t v___x_820_; 
v_es_813_ = lean_ctor_get(v_x_808_, 0);
v___x_814_ = ((size_t)5ULL);
v___x_815_ = ((size_t)1ULL);
v___x_816_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1);
v___x_817_ = lean_usize_land(v_x_809_, v___x_816_);
v_j_818_ = lean_usize_to_nat(v___x_817_);
v___x_819_ = lean_array_get_size(v_es_813_);
v___x_820_ = lean_nat_dec_lt(v_j_818_, v___x_819_);
if (v___x_820_ == 0)
{
lean_dec(v_j_818_);
lean_dec(v_x_812_);
lean_dec(v_x_811_);
return v_x_808_;
}
else
{
lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_857_; 
lean_inc_ref(v_es_813_);
v_isSharedCheck_857_ = !lean_is_exclusive(v_x_808_);
if (v_isSharedCheck_857_ == 0)
{
lean_object* v_unused_858_; 
v_unused_858_ = lean_ctor_get(v_x_808_, 0);
lean_dec(v_unused_858_);
v___x_822_ = v_x_808_;
v_isShared_823_ = v_isSharedCheck_857_;
goto v_resetjp_821_;
}
else
{
lean_dec(v_x_808_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_857_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v_v_824_; lean_object* v___x_825_; lean_object* v_xs_x27_826_; lean_object* v___y_828_; 
v_v_824_ = lean_array_fget(v_es_813_, v_j_818_);
v___x_825_ = lean_box(0);
v_xs_x27_826_ = lean_array_fset(v_es_813_, v_j_818_, v___x_825_);
switch(lean_obj_tag(v_v_824_))
{
case 0:
{
lean_object* v_key_833_; lean_object* v_val_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_844_; 
v_key_833_ = lean_ctor_get(v_v_824_, 0);
v_val_834_ = lean_ctor_get(v_v_824_, 1);
v_isSharedCheck_844_ = !lean_is_exclusive(v_v_824_);
if (v_isSharedCheck_844_ == 0)
{
v___x_836_ = v_v_824_;
v_isShared_837_ = v_isSharedCheck_844_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_val_834_);
lean_inc(v_key_833_);
lean_dec(v_v_824_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_844_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
uint8_t v___x_838_; 
v___x_838_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_811_, v_key_833_);
if (v___x_838_ == 0)
{
lean_object* v___x_839_; lean_object* v___x_840_; 
lean_del_object(v___x_836_);
v___x_839_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_833_, v_val_834_, v_x_811_, v_x_812_);
v___x_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
v___y_828_ = v___x_840_;
goto v___jp_827_;
}
else
{
lean_object* v___x_842_; 
lean_dec(v_val_834_);
lean_dec(v_key_833_);
if (v_isShared_837_ == 0)
{
lean_ctor_set(v___x_836_, 1, v_x_812_);
lean_ctor_set(v___x_836_, 0, v_x_811_);
v___x_842_ = v___x_836_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_x_811_);
lean_ctor_set(v_reuseFailAlloc_843_, 1, v_x_812_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
v___y_828_ = v___x_842_;
goto v___jp_827_;
}
}
}
}
case 1:
{
lean_object* v_node_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_855_; 
v_node_845_ = lean_ctor_get(v_v_824_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v_v_824_);
if (v_isSharedCheck_855_ == 0)
{
v___x_847_ = v_v_824_;
v_isShared_848_ = v_isSharedCheck_855_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_node_845_);
lean_dec(v_v_824_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_855_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
size_t v___x_849_; size_t v___x_850_; lean_object* v___x_851_; lean_object* v___x_853_; 
v___x_849_ = lean_usize_shift_right(v_x_809_, v___x_814_);
v___x_850_ = lean_usize_add(v_x_810_, v___x_815_);
v___x_851_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4___redArg(v_node_845_, v___x_849_, v___x_850_, v_x_811_, v_x_812_);
if (v_isShared_848_ == 0)
{
lean_ctor_set(v___x_847_, 0, v___x_851_);
v___x_853_ = v___x_847_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v___x_851_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
v___y_828_ = v___x_853_;
goto v___jp_827_;
}
}
}
default: 
{
lean_object* v___x_856_; 
v___x_856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_856_, 0, v_x_811_);
lean_ctor_set(v___x_856_, 1, v_x_812_);
v___y_828_ = v___x_856_;
goto v___jp_827_;
}
}
v___jp_827_:
{
lean_object* v___x_829_; lean_object* v___x_831_; 
v___x_829_ = lean_array_fset(v_xs_x27_826_, v_j_818_, v___y_828_);
lean_dec(v_j_818_);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 0, v___x_829_);
v___x_831_ = v___x_822_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_829_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
}
}
else
{
lean_object* v_ks_859_; lean_object* v_vs_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_880_; 
v_ks_859_ = lean_ctor_get(v_x_808_, 0);
v_vs_860_ = lean_ctor_get(v_x_808_, 1);
v_isSharedCheck_880_ = !lean_is_exclusive(v_x_808_);
if (v_isSharedCheck_880_ == 0)
{
v___x_862_ = v_x_808_;
v_isShared_863_ = v_isSharedCheck_880_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_vs_860_);
lean_inc(v_ks_859_);
lean_dec(v_x_808_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_880_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_865_; 
if (v_isShared_863_ == 0)
{
v___x_865_ = v___x_862_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_ks_859_);
lean_ctor_set(v_reuseFailAlloc_879_, 1, v_vs_860_);
v___x_865_ = v_reuseFailAlloc_879_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
lean_object* v_newNode_866_; uint8_t v___y_868_; size_t v___x_874_; uint8_t v___x_875_; 
v_newNode_866_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__7___redArg(v___x_865_, v_x_811_, v_x_812_);
v___x_874_ = ((size_t)7ULL);
v___x_875_ = lean_usize_dec_le(v___x_874_, v_x_810_);
if (v___x_875_ == 0)
{
lean_object* v___x_876_; lean_object* v___x_877_; uint8_t v___x_878_; 
v___x_876_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_866_);
v___x_877_ = lean_unsigned_to_nat(4u);
v___x_878_ = lean_nat_dec_lt(v___x_876_, v___x_877_);
lean_dec(v___x_876_);
v___y_868_ = v___x_878_;
goto v___jp_867_;
}
else
{
v___y_868_ = v___x_875_;
goto v___jp_867_;
}
v___jp_867_:
{
if (v___y_868_ == 0)
{
lean_object* v_ks_869_; lean_object* v_vs_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
v_ks_869_ = lean_ctor_get(v_newNode_866_, 0);
lean_inc_ref(v_ks_869_);
v_vs_870_ = lean_ctor_get(v_newNode_866_, 1);
lean_inc_ref(v_vs_870_);
lean_dec_ref(v_newNode_866_);
v___x_871_ = lean_unsigned_to_nat(0u);
v___x_872_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4___redArg___closed__0);
v___x_873_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__8___redArg(v_x_810_, v_ks_869_, v_vs_870_, v___x_871_, v___x_872_);
lean_dec_ref(v_vs_870_);
lean_dec_ref(v_ks_869_);
return v___x_873_;
}
else
{
return v_newNode_866_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__8___redArg(size_t v_depth_881_, lean_object* v_keys_882_, lean_object* v_vals_883_, lean_object* v_i_884_, lean_object* v_entries_885_){
_start:
{
lean_object* v___x_886_; uint8_t v___x_887_; 
v___x_886_ = lean_array_get_size(v_keys_882_);
v___x_887_ = lean_nat_dec_lt(v_i_884_, v___x_886_);
if (v___x_887_ == 0)
{
lean_dec(v_i_884_);
return v_entries_885_;
}
else
{
lean_object* v_k_888_; lean_object* v_v_889_; uint64_t v___x_890_; size_t v_h_891_; size_t v___x_892_; lean_object* v___x_893_; size_t v___x_894_; size_t v___x_895_; size_t v___x_896_; size_t v_h_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v_k_888_ = lean_array_fget_borrowed(v_keys_882_, v_i_884_);
v_v_889_ = lean_array_fget_borrowed(v_vals_883_, v_i_884_);
v___x_890_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_888_);
v_h_891_ = lean_uint64_to_usize(v___x_890_);
v___x_892_ = ((size_t)5ULL);
v___x_893_ = lean_unsigned_to_nat(1u);
v___x_894_ = ((size_t)1ULL);
v___x_895_ = lean_usize_sub(v_depth_881_, v___x_894_);
v___x_896_ = lean_usize_mul(v___x_892_, v___x_895_);
v_h_897_ = lean_usize_shift_right(v_h_891_, v___x_896_);
v___x_898_ = lean_nat_add(v_i_884_, v___x_893_);
lean_dec(v_i_884_);
lean_inc(v_v_889_);
lean_inc(v_k_888_);
v___x_899_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4___redArg(v_entries_885_, v_h_897_, v_depth_881_, v_k_888_, v_v_889_);
v_i_884_ = v___x_898_;
v_entries_885_ = v___x_899_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_depth_901_, lean_object* v_keys_902_, lean_object* v_vals_903_, lean_object* v_i_904_, lean_object* v_entries_905_){
_start:
{
size_t v_depth_boxed_906_; lean_object* v_res_907_; 
v_depth_boxed_906_ = lean_unbox_usize(v_depth_901_);
lean_dec(v_depth_901_);
v_res_907_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__8___redArg(v_depth_boxed_906_, v_keys_902_, v_vals_903_, v_i_904_, v_entries_905_);
lean_dec_ref(v_vals_903_);
lean_dec_ref(v_keys_902_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_x_908_, lean_object* v_x_909_, lean_object* v_x_910_, lean_object* v_x_911_, lean_object* v_x_912_){
_start:
{
size_t v_x_1711__boxed_913_; size_t v_x_1712__boxed_914_; lean_object* v_res_915_; 
v_x_1711__boxed_913_ = lean_unbox_usize(v_x_909_);
lean_dec(v_x_909_);
v_x_1712__boxed_914_ = lean_unbox_usize(v_x_910_);
lean_dec(v_x_910_);
v_res_915_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4___redArg(v_x_908_, v_x_1711__boxed_913_, v_x_1712__boxed_914_, v_x_911_, v_x_912_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2___redArg(lean_object* v_x_916_, lean_object* v_x_917_, lean_object* v_x_918_){
_start:
{
uint64_t v___x_919_; size_t v___x_920_; size_t v___x_921_; lean_object* v___x_922_; 
v___x_919_ = l_Lean_Meta_DiscrTree_Key_hash(v_x_917_);
v___x_920_ = lean_uint64_to_usize(v___x_919_);
v___x_921_ = ((size_t)1ULL);
v___x_922_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4___redArg(v_x_916_, v___x_920_, v___x_921_, v_x_917_, v_x_918_);
return v___x_922_;
}
}
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__1(lean_object* v_a_923_, lean_object* v_b_924_){
_start:
{
lean_object* v_fst_925_; lean_object* v_fst_926_; uint8_t v___x_927_; 
v_fst_925_ = lean_ctor_get(v_a_923_, 0);
v_fst_926_ = lean_ctor_get(v_b_924_, 0);
v___x_927_ = l_Lean_Meta_DiscrTree_Key_lt(v_fst_925_, v_fst_926_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__1___boxed(lean_object* v_a_928_, lean_object* v_b_929_){
_start:
{
uint8_t v_res_930_; lean_object* v_r_931_; 
v_res_930_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__1(v_a_928_, v_b_929_);
lean_dec_ref(v_b_929_);
lean_dec_ref(v_a_928_);
v_r_931_ = lean_box(v_res_930_);
return v_r_931_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__0(lean_object* v_x_932_, lean_object* v_keys_933_, lean_object* v_v_934_, lean_object* v_k_935_, lean_object* v_x_936_){
_start:
{
lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v_c_939_; lean_object* v___x_940_; 
v___x_937_ = lean_unsigned_to_nat(1u);
v___x_938_ = lean_nat_add(v_x_932_, v___x_937_);
v_c_939_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_933_, v_v_934_, v___x_938_);
lean_dec(v___x_938_);
v___x_940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_940_, 0, v_k_935_);
lean_ctor_set(v___x_940_, 1, v_c_939_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__0___boxed(lean_object* v_x_941_, lean_object* v_keys_942_, lean_object* v_v_943_, lean_object* v_k_944_, lean_object* v_x_945_){
_start:
{
lean_object* v_res_946_; 
v_res_946_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__0(v_x_941_, v_keys_942_, v_v_943_, v_k_944_, v_x_945_);
lean_dec_ref(v_keys_942_);
lean_dec(v_x_941_);
return v_res_946_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__6_spec__11(lean_object* v_vs_947_, lean_object* v_v_948_, lean_object* v_i_949_){
_start:
{
lean_object* v___x_950_; uint8_t v___x_951_; 
v___x_950_ = lean_array_get_size(v_vs_947_);
v___x_951_ = lean_nat_dec_lt(v_i_949_, v___x_950_);
if (v___x_951_ == 0)
{
lean_object* v___x_952_; 
lean_dec(v_i_949_);
v___x_952_ = lean_array_push(v_vs_947_, v_v_948_);
return v___x_952_;
}
else
{
lean_object* v_proof_953_; lean_object* v___x_954_; lean_object* v_proof_955_; uint8_t v___x_956_; 
v_proof_953_ = lean_ctor_get(v_v_948_, 1);
v___x_954_ = lean_array_fget_borrowed(v_vs_947_, v_i_949_);
v_proof_955_ = lean_ctor_get(v___x_954_, 1);
lean_inc_ref(v_proof_955_);
lean_inc_ref(v_proof_953_);
v___x_956_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_instBEqSpecProof_beq(v_proof_953_, v_proof_955_);
if (v___x_956_ == 0)
{
lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_957_ = lean_unsigned_to_nat(1u);
v___x_958_ = lean_nat_add(v_i_949_, v___x_957_);
lean_dec(v_i_949_);
v_i_949_ = v___x_958_;
goto _start;
}
else
{
lean_object* v___x_960_; 
v___x_960_ = lean_array_fset(v_vs_947_, v_i_949_, v_v_948_);
lean_dec(v_i_949_);
return v___x_960_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__6(lean_object* v_vs_961_, lean_object* v_v_962_){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_963_ = lean_unsigned_to_nat(0u);
v___x_964_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__6_spec__11(v_vs_961_, v_v_962_, v___x_963_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7_spec__13___redArg(lean_object* v_x_969_, lean_object* v_keys_970_, lean_object* v_v_971_, lean_object* v_k_972_, lean_object* v_as_973_, lean_object* v_k_974_, lean_object* v_x_975_, lean_object* v_x_976_){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v_mid_979_; lean_object* v_midVal_980_; uint8_t v___x_981_; 
v___x_977_ = lean_nat_add(v_x_975_, v_x_976_);
v___x_978_ = lean_unsigned_to_nat(1u);
v_mid_979_ = lean_nat_shiftr(v___x_977_, v___x_978_);
lean_dec(v___x_977_);
v_midVal_980_ = lean_array_fget(v_as_973_, v_mid_979_);
v___x_981_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__1(v_midVal_980_, v_k_974_);
if (v___x_981_ == 0)
{
uint8_t v___x_982_; 
lean_dec(v_x_976_);
v___x_982_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__1(v_k_974_, v_midVal_980_);
if (v___x_982_ == 0)
{
lean_object* v___x_983_; uint8_t v___x_984_; 
lean_dec(v_x_975_);
v___x_983_ = lean_array_get_size(v_as_973_);
v___x_984_ = lean_nat_dec_lt(v_mid_979_, v___x_983_);
if (v___x_984_ == 0)
{
lean_dec(v_midVal_980_);
lean_dec(v_mid_979_);
lean_dec(v_k_972_);
lean_dec_ref(v_v_971_);
return v_as_973_;
}
else
{
lean_object* v_snd_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_997_; 
v_snd_985_ = lean_ctor_get(v_midVal_980_, 1);
v_isSharedCheck_997_ = !lean_is_exclusive(v_midVal_980_);
if (v_isSharedCheck_997_ == 0)
{
lean_object* v_unused_998_; 
v_unused_998_ = lean_ctor_get(v_midVal_980_, 0);
lean_dec(v_unused_998_);
v___x_987_ = v_midVal_980_;
v_isShared_988_ = v_isSharedCheck_997_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_snd_985_);
lean_dec(v_midVal_980_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_997_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_989_; lean_object* v_xs_x27_990_; lean_object* v___x_991_; lean_object* v_c_992_; lean_object* v___x_994_; 
v___x_989_ = lean_box(0);
v_xs_x27_990_ = lean_array_fset(v_as_973_, v_mid_979_, v___x_989_);
v___x_991_ = lean_nat_add(v_x_969_, v___x_978_);
v_c_992_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3(v_keys_970_, v_v_971_, v___x_991_, v_snd_985_);
lean_dec(v___x_991_);
if (v_isShared_988_ == 0)
{
lean_ctor_set(v___x_987_, 1, v_c_992_);
lean_ctor_set(v___x_987_, 0, v_k_972_);
v___x_994_ = v___x_987_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_k_972_);
lean_ctor_set(v_reuseFailAlloc_996_, 1, v_c_992_);
v___x_994_ = v_reuseFailAlloc_996_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
lean_object* v___x_995_; 
v___x_995_ = lean_array_fset(v_xs_x27_990_, v_mid_979_, v___x_994_);
lean_dec(v_mid_979_);
return v___x_995_;
}
}
}
}
else
{
lean_dec(v_midVal_980_);
v_x_976_ = v_mid_979_;
goto _start;
}
}
else
{
uint8_t v___x_1000_; 
lean_dec(v_midVal_980_);
v___x_1000_ = lean_nat_dec_eq(v_mid_979_, v_x_975_);
if (v___x_1000_ == 0)
{
lean_dec(v_x_975_);
v_x_975_ = v_mid_979_;
goto _start;
}
else
{
lean_object* v___x_1002_; lean_object* v_c_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v_j_1006_; lean_object* v_as_1007_; lean_object* v___x_1008_; 
lean_dec(v_mid_979_);
lean_dec(v_x_976_);
v___x_1002_ = lean_nat_add(v_x_969_, v___x_978_);
v_c_1003_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_970_, v_v_971_, v___x_1002_);
lean_dec(v___x_1002_);
v___x_1004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1004_, 0, v_k_972_);
lean_ctor_set(v___x_1004_, 1, v_c_1003_);
v___x_1005_ = lean_nat_add(v_x_975_, v___x_978_);
lean_dec(v_x_975_);
v_j_1006_ = lean_array_get_size(v_as_973_);
v_as_1007_ = lean_array_push(v_as_973_, v___x_1004_);
v___x_1008_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_1005_, v_as_1007_, v_j_1006_);
lean_dec(v___x_1005_);
return v___x_1008_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7(lean_object* v_x_1009_, lean_object* v_keys_1010_, lean_object* v_v_1011_, lean_object* v_k_1012_, lean_object* v_as_1013_, lean_object* v_k_1014_){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; uint8_t v___x_1017_; 
v___x_1015_ = lean_array_get_size(v_as_1013_);
v___x_1016_ = lean_unsigned_to_nat(0u);
v___x_1017_ = lean_nat_dec_eq(v___x_1015_, v___x_1016_);
if (v___x_1017_ == 0)
{
lean_object* v___x_1018_; uint8_t v___x_1019_; 
v___x_1018_ = lean_array_fget_borrowed(v_as_1013_, v___x_1016_);
v___x_1019_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__1(v_k_1014_, v___x_1018_);
if (v___x_1019_ == 0)
{
uint8_t v___x_1020_; 
v___x_1020_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__1(v___x_1018_, v_k_1014_);
if (v___x_1020_ == 0)
{
uint8_t v___x_1021_; 
v___x_1021_ = lean_nat_dec_lt(v___x_1016_, v___x_1015_);
if (v___x_1021_ == 0)
{
lean_dec(v_k_1012_);
lean_dec_ref(v_v_1011_);
return v_as_1013_;
}
else
{
lean_object* v___x_1022_; lean_object* v_xs_x27_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
lean_inc(v___x_1018_);
v___x_1022_ = lean_box(0);
v_xs_x27_1023_ = lean_array_fset(v_as_1013_, v___x_1016_, v___x_1022_);
v___x_1024_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__2(v_x_1009_, v_keys_1010_, v_v_1011_, v_k_1012_, v___x_1018_);
v___x_1025_ = lean_array_fset(v_xs_x27_1023_, v___x_1016_, v___x_1024_);
return v___x_1025_;
}
}
else
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; uint8_t v___x_1029_; 
v___x_1026_ = lean_unsigned_to_nat(1u);
v___x_1027_ = lean_nat_sub(v___x_1015_, v___x_1026_);
v___x_1028_ = lean_array_fget_borrowed(v_as_1013_, v___x_1027_);
v___x_1029_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__1(v___x_1028_, v_k_1014_);
if (v___x_1029_ == 0)
{
uint8_t v___x_1030_; 
v___x_1030_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__1(v_k_1014_, v___x_1028_);
if (v___x_1030_ == 0)
{
uint8_t v___x_1031_; 
v___x_1031_ = lean_nat_dec_lt(v___x_1027_, v___x_1015_);
if (v___x_1031_ == 0)
{
lean_dec(v___x_1027_);
lean_dec(v_k_1012_);
lean_dec_ref(v_v_1011_);
return v_as_1013_;
}
else
{
lean_object* v___x_1032_; lean_object* v_xs_x27_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
lean_inc(v___x_1028_);
v___x_1032_ = lean_box(0);
v_xs_x27_1033_ = lean_array_fset(v_as_1013_, v___x_1027_, v___x_1032_);
v___x_1034_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__2(v_x_1009_, v_keys_1010_, v_v_1011_, v_k_1012_, v___x_1028_);
v___x_1035_ = lean_array_fset(v_xs_x27_1033_, v___x_1027_, v___x_1034_);
lean_dec(v___x_1027_);
return v___x_1035_;
}
}
else
{
lean_object* v___x_1036_; 
v___x_1036_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7_spec__13___redArg(v_x_1009_, v_keys_1010_, v_v_1011_, v_k_1012_, v_as_1013_, v_k_1014_, v___x_1016_, v___x_1027_);
return v___x_1036_;
}
}
else
{
lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; 
lean_dec(v___x_1027_);
v___x_1037_ = lean_box(0);
v___x_1038_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__0(v_x_1009_, v_keys_1010_, v_v_1011_, v_k_1012_, v___x_1037_);
v___x_1039_ = lean_array_push(v_as_1013_, v___x_1038_);
return v___x_1039_;
}
}
}
else
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v_as_1042_; lean_object* v___x_1043_; 
v___x_1040_ = lean_box(0);
v___x_1041_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__0(v_x_1009_, v_keys_1010_, v_v_1011_, v_k_1012_, v___x_1040_);
v_as_1042_ = lean_array_push(v_as_1013_, v___x_1041_);
v___x_1043_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_1016_, v_as_1042_, v___x_1015_);
return v___x_1043_;
}
}
else
{
lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1044_ = lean_box(0);
v___x_1045_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__0(v_x_1009_, v_keys_1010_, v_v_1011_, v_k_1012_, v___x_1044_);
v___x_1046_ = lean_array_push(v_as_1013_, v___x_1045_);
return v___x_1046_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3(lean_object* v_keys_1047_, lean_object* v_v_1048_, lean_object* v_x_1049_, lean_object* v_x_1050_){
_start:
{
lean_object* v_vs_1051_; lean_object* v_children_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1069_; 
v_vs_1051_ = lean_ctor_get(v_x_1050_, 0);
v_children_1052_ = lean_ctor_get(v_x_1050_, 1);
v_isSharedCheck_1069_ = !lean_is_exclusive(v_x_1050_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1054_ = v_x_1050_;
v_isShared_1055_ = v_isSharedCheck_1069_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_children_1052_);
lean_inc(v_vs_1051_);
lean_dec(v_x_1050_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1069_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1056_; uint8_t v___x_1057_; 
v___x_1056_ = lean_array_get_size(v_keys_1047_);
v___x_1057_ = lean_nat_dec_lt(v_x_1049_, v___x_1056_);
if (v___x_1057_ == 0)
{
lean_object* v___x_1058_; lean_object* v___x_1060_; 
v___x_1058_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__6(v_vs_1051_, v_v_1048_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 0, v___x_1058_);
v___x_1060_ = v___x_1054_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1058_);
lean_ctor_set(v_reuseFailAlloc_1061_, 1, v_children_1052_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
else
{
lean_object* v_k_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v_c_1065_; lean_object* v___x_1067_; 
v_k_1062_ = lean_array_fget_borrowed(v_keys_1047_, v_x_1049_);
v___x_1063_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3___closed__1));
lean_inc_n(v_k_1062_, 2);
v___x_1064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1064_, 0, v_k_1062_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
v_c_1065_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7(v_x_1049_, v_keys_1047_, v_v_1048_, v_k_1062_, v_children_1052_, v___x_1064_);
lean_dec_ref_known(v___x_1064_, 2);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 1, v_c_1065_);
v___x_1067_ = v___x_1054_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_vs_1051_);
lean_ctor_set(v_reuseFailAlloc_1068_, 1, v_c_1065_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__2(lean_object* v_x_1070_, lean_object* v_keys_1071_, lean_object* v_v_1072_, lean_object* v_k_1073_, lean_object* v_x_1074_){
_start:
{
lean_object* v_snd_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1085_; 
v_snd_1075_ = lean_ctor_get(v_x_1074_, 1);
v_isSharedCheck_1085_ = !lean_is_exclusive(v_x_1074_);
if (v_isSharedCheck_1085_ == 0)
{
lean_object* v_unused_1086_; 
v_unused_1086_ = lean_ctor_get(v_x_1074_, 0);
lean_dec(v_unused_1086_);
v___x_1077_ = v_x_1074_;
v_isShared_1078_ = v_isSharedCheck_1085_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_snd_1075_);
lean_dec(v_x_1074_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1085_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v_c_1081_; lean_object* v___x_1083_; 
v___x_1079_ = lean_unsigned_to_nat(1u);
v___x_1080_ = lean_nat_add(v_x_1070_, v___x_1079_);
v_c_1081_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3(v_keys_1071_, v_v_1072_, v___x_1080_, v_snd_1075_);
lean_dec(v___x_1080_);
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 1, v_c_1081_);
lean_ctor_set(v___x_1077_, 0, v_k_1073_);
v___x_1083_ = v___x_1077_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v_k_1073_);
lean_ctor_set(v_reuseFailAlloc_1084_, 1, v_c_1081_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__2___boxed(lean_object* v_x_1087_, lean_object* v_keys_1088_, lean_object* v_v_1089_, lean_object* v_k_1090_, lean_object* v_x_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___lam__2(v_x_1087_, v_keys_1088_, v_v_1089_, v_k_1090_, v_x_1091_);
lean_dec_ref(v_keys_1088_);
lean_dec(v_x_1087_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3___boxed(lean_object* v_keys_1093_, lean_object* v_v_1094_, lean_object* v_x_1095_, lean_object* v_x_1096_){
_start:
{
lean_object* v_res_1097_; 
v_res_1097_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3(v_keys_1093_, v_v_1094_, v_x_1095_, v_x_1096_);
lean_dec(v_x_1095_);
lean_dec_ref(v_keys_1093_);
return v_res_1097_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7_spec__13___redArg___boxed(lean_object* v_x_1098_, lean_object* v_keys_1099_, lean_object* v_v_1100_, lean_object* v_k_1101_, lean_object* v_as_1102_, lean_object* v_k_1103_, lean_object* v_x_1104_, lean_object* v_x_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7_spec__13___redArg(v_x_1098_, v_keys_1099_, v_v_1100_, v_k_1101_, v_as_1102_, v_k_1103_, v_x_1104_, v_x_1105_);
lean_dec_ref(v_k_1103_);
lean_dec_ref(v_keys_1099_);
lean_dec(v_x_1098_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7___boxed(lean_object* v_x_1107_, lean_object* v_keys_1108_, lean_object* v_v_1109_, lean_object* v_k_1110_, lean_object* v_as_1111_, lean_object* v_k_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7(v_x_1107_, v_keys_1108_, v_v_1109_, v_k_1110_, v_as_1111_, v_k_1112_);
lean_dec_ref(v_k_1112_);
lean_dec_ref(v_keys_1108_);
lean_dec(v_x_1107_);
return v_res_1113_;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1117_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__2));
v___x_1118_ = lean_unsigned_to_nat(23u);
v___x_1119_ = lean_unsigned_to_nat(166u);
v___x_1120_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__1));
v___x_1121_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__0));
v___x_1122_ = l_mkPanicMessageWithDecl(v___x_1121_, v___x_1120_, v___x_1119_, v___x_1118_, v___x_1117_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0(lean_object* v_d_1123_, lean_object* v_keys_1124_, lean_object* v_v_1125_){
_start:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; uint8_t v___x_1128_; 
v___x_1126_ = lean_array_get_size(v_keys_1124_);
v___x_1127_ = lean_unsigned_to_nat(0u);
v___x_1128_ = lean_nat_dec_eq(v___x_1126_, v___x_1127_);
if (v___x_1128_ == 0)
{
lean_object* v___x_1129_; lean_object* v_k_1130_; lean_object* v___x_1131_; 
v___x_1129_ = lean_box(0);
v_k_1130_ = lean_array_get_borrowed(v___x_1129_, v_keys_1124_, v___x_1127_);
v___x_1131_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1___redArg(v_d_1123_, v_k_1130_);
if (lean_obj_tag(v___x_1131_) == 0)
{
lean_object* v___x_1132_; lean_object* v_c_1133_; lean_object* v___x_1134_; 
v___x_1132_ = lean_unsigned_to_nat(1u);
v_c_1133_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_1124_, v_v_1125_, v___x_1132_);
lean_inc(v_k_1130_);
v___x_1134_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2___redArg(v_d_1123_, v_k_1130_, v_c_1133_);
return v___x_1134_;
}
else
{
lean_object* v_val_1135_; lean_object* v___x_1136_; lean_object* v_c_1137_; lean_object* v___x_1138_; 
v_val_1135_ = lean_ctor_get(v___x_1131_, 0);
lean_inc(v_val_1135_);
lean_dec_ref_known(v___x_1131_, 1);
v___x_1136_ = lean_unsigned_to_nat(1u);
v_c_1137_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3(v_keys_1124_, v_v_1125_, v___x_1136_, v_val_1135_);
lean_inc(v_k_1130_);
v___x_1138_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2___redArg(v_d_1123_, v_k_1130_, v_c_1137_);
return v___x_1138_;
}
}
else
{
lean_object* v___x_1139_; lean_object* v___x_1140_; 
lean_dec_ref(v_v_1125_);
lean_dec_ref(v_d_1123_);
v___x_1139_ = lean_obj_once(&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__3, &l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__3_once, _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___closed__3);
v___x_1140_ = l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__4(v___x_1139_);
return v___x_1140_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0___boxed(lean_object* v_d_1141_, lean_object* v_keys_1142_, lean_object* v_v_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0(v_d_1141_, v_keys_1142_, v_v_1143_);
lean_dec_ref(v_keys_1142_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0(lean_object* v_d_1145_, lean_object* v_p_1146_, lean_object* v_v_1147_){
_start:
{
lean_object* v_keys_1148_; lean_object* v___x_1149_; 
v_keys_1148_ = l_Lean_Meta_Sym_Pattern_mkDiscrTreeKeys(v_p_1146_);
v___x_1149_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0(v_d_1145_, v_keys_1148_, v_v_1147_);
lean_dec_ref(v_keys_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert(lean_object* v_database_1150_, lean_object* v_thm_1151_){
_start:
{
lean_object* v_specs_1152_; lean_object* v_erased_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1162_; 
v_specs_1152_ = lean_ctor_get(v_database_1150_, 0);
v_erased_1153_ = lean_ctor_get(v_database_1150_, 1);
v_isSharedCheck_1162_ = !lean_is_exclusive(v_database_1150_);
if (v_isSharedCheck_1162_ == 0)
{
v___x_1155_ = v_database_1150_;
v_isShared_1156_ = v_isSharedCheck_1162_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_erased_1153_);
lean_inc(v_specs_1152_);
lean_dec(v_database_1150_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1162_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v_pattern_1157_; lean_object* v___x_1158_; lean_object* v___x_1160_; 
v_pattern_1157_ = lean_ctor_get(v_thm_1151_, 0);
lean_inc_ref(v_pattern_1157_);
v___x_1158_ = l_Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0(v_specs_1152_, v_pattern_1157_, v_thm_1151_);
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 0, v___x_1158_);
v___x_1160_ = v___x_1155_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v___x_1158_);
lean_ctor_set(v_reuseFailAlloc_1161_, 1, v_erased_1153_);
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1163_, lean_object* v_x_1164_, lean_object* v_x_1165_){
_start:
{
lean_object* v___x_1166_; 
v___x_1166_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1___redArg(v_x_1164_, v_x_1165_);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1167_, lean_object* v_x_1168_, lean_object* v_x_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1(v_00_u03b2_1167_, v_x_1168_, v_x_1169_);
lean_dec(v_x_1169_);
lean_dec_ref(v_x_1168_);
return v_res_1170_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1171_, lean_object* v_x_1172_, lean_object* v_x_1173_, lean_object* v_x_1174_){
_start:
{
lean_object* v___x_1175_; 
v___x_1175_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2___redArg(v_x_1172_, v_x_1173_, v_x_1174_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1176_, lean_object* v_x_1177_, size_t v_x_1178_, lean_object* v_x_1179_){
_start:
{
lean_object* v___x_1180_; 
v___x_1180_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_x_1177_, v_x_1178_, v_x_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1181_, lean_object* v_x_1182_, lean_object* v_x_1183_, lean_object* v_x_1184_){
_start:
{
size_t v_x_2206__boxed_1185_; lean_object* v_res_1186_; 
v_x_2206__boxed_1185_ = lean_unbox_usize(v_x_1183_);
lean_dec(v_x_1183_);
v_res_1186_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2(v_00_u03b2_1181_, v_x_1182_, v_x_2206__boxed_1185_, v_x_1184_);
lean_dec(v_x_1184_);
lean_dec_ref(v_x_1182_);
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_1187_, lean_object* v_x_1188_, size_t v_x_1189_, size_t v_x_1190_, lean_object* v_x_1191_, lean_object* v_x_1192_){
_start:
{
lean_object* v___x_1193_; 
v___x_1193_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4___redArg(v_x_1188_, v_x_1189_, v_x_1190_, v_x_1191_, v_x_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1194_, lean_object* v_x_1195_, lean_object* v_x_1196_, lean_object* v_x_1197_, lean_object* v_x_1198_, lean_object* v_x_1199_){
_start:
{
size_t v_x_2217__boxed_1200_; size_t v_x_2218__boxed_1201_; lean_object* v_res_1202_; 
v_x_2217__boxed_1200_ = lean_unbox_usize(v_x_1196_);
lean_dec(v_x_1196_);
v_x_2218__boxed_1201_ = lean_unbox_usize(v_x_1197_);
lean_dec(v_x_1197_);
v_res_1202_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4(v_00_u03b2_1194_, v_x_1195_, v_x_2217__boxed_1200_, v_x_2218__boxed_1201_, v_x_1198_, v_x_1199_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1203_, lean_object* v_keys_1204_, lean_object* v_vals_1205_, lean_object* v_heq_1206_, lean_object* v_i_1207_, lean_object* v_k_1208_){
_start:
{
lean_object* v___x_1209_; 
v___x_1209_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_keys_1204_, v_vals_1205_, v_i_1207_, v_k_1208_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1210_, lean_object* v_keys_1211_, lean_object* v_vals_1212_, lean_object* v_heq_1213_, lean_object* v_i_1214_, lean_object* v_k_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2_spec__4(v_00_u03b2_1210_, v_keys_1211_, v_vals_1212_, v_heq_1213_, v_i_1214_, v_k_1215_);
lean_dec(v_k_1215_);
lean_dec_ref(v_vals_1212_);
lean_dec_ref(v_keys_1211_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_1217_, lean_object* v_n_1218_, lean_object* v_k_1219_, lean_object* v_v_1220_){
_start:
{
lean_object* v___x_1221_; 
v___x_1221_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__7___redArg(v_n_1218_, v_k_1219_, v_v_1220_);
return v___x_1221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_1222_, size_t v_depth_1223_, lean_object* v_keys_1224_, lean_object* v_vals_1225_, lean_object* v_heq_1226_, lean_object* v_i_1227_, lean_object* v_entries_1228_){
_start:
{
lean_object* v___x_1229_; 
v___x_1229_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__8___redArg(v_depth_1223_, v_keys_1224_, v_vals_1225_, v_i_1227_, v_entries_1228_);
return v___x_1229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b2_1230_, lean_object* v_depth_1231_, lean_object* v_keys_1232_, lean_object* v_vals_1233_, lean_object* v_heq_1234_, lean_object* v_i_1235_, lean_object* v_entries_1236_){
_start:
{
size_t v_depth_boxed_1237_; lean_object* v_res_1238_; 
v_depth_boxed_1237_ = lean_unbox_usize(v_depth_1231_);
lean_dec(v_depth_1231_);
v_res_1238_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__8(v_00_u03b2_1230_, v_depth_boxed_1237_, v_keys_1232_, v_vals_1233_, v_heq_1234_, v_i_1235_, v_entries_1236_);
lean_dec_ref(v_vals_1233_);
lean_dec_ref(v_keys_1232_);
return v_res_1238_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7_spec__13(lean_object* v_x_1239_, lean_object* v_keys_1240_, lean_object* v_v_1241_, lean_object* v_k_1242_, lean_object* v_as_1243_, lean_object* v_k_1244_, lean_object* v_x_1245_, lean_object* v_x_1246_, lean_object* v_x_1247_, lean_object* v_x_1248_){
_start:
{
lean_object* v___x_1249_; 
v___x_1249_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7_spec__13___redArg(v_x_1239_, v_keys_1240_, v_v_1241_, v_k_1242_, v_as_1243_, v_k_1244_, v_x_1245_, v_x_1246_);
return v___x_1249_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7_spec__13___boxed(lean_object* v_x_1250_, lean_object* v_keys_1251_, lean_object* v_v_1252_, lean_object* v_k_1253_, lean_object* v_as_1254_, lean_object* v_k_1255_, lean_object* v_x_1256_, lean_object* v_x_1257_, lean_object* v_x_1258_, lean_object* v_x_1259_){
_start:
{
lean_object* v_res_1260_; 
v_res_1260_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3_spec__7_spec__13(v_x_1250_, v_keys_1251_, v_v_1252_, v_k_1253_, v_as_1254_, v_k_1255_, v_x_1256_, v_x_1257_, v_x_1258_, v_x_1259_);
lean_dec_ref(v_k_1255_);
lean_dec_ref(v_keys_1251_);
lean_dec(v_x_1250_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__7_spec__9(lean_object* v_00_u03b2_1261_, lean_object* v_x_1262_, lean_object* v_x_1263_, lean_object* v_x_1264_, lean_object* v_x_1265_){
_start:
{
lean_object* v___x_1266_; 
v___x_1266_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__2_spec__4_spec__7_spec__9___redArg(v_x_1262_, v_x_1263_, v_x_1264_, v_x_1265_);
return v___x_1266_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_etaExpandEqPattern_collectDomains(lean_object* v_ty_1267_, lean_object* v_acc_1268_){
_start:
{
if (lean_obj_tag(v_ty_1267_) == 7)
{
lean_object* v_binderType_1269_; lean_object* v_body_1270_; lean_object* v___x_1271_; 
v_binderType_1269_ = lean_ctor_get(v_ty_1267_, 1);
lean_inc_ref(v_binderType_1269_);
v_body_1270_ = lean_ctor_get(v_ty_1267_, 2);
lean_inc_ref(v_body_1270_);
lean_dec_ref_known(v_ty_1267_, 3);
v___x_1271_ = lean_array_push(v_acc_1268_, v_binderType_1269_);
v_ty_1267_ = v_body_1270_;
v_acc_1268_ = v___x_1271_;
goto _start;
}
else
{
lean_dec_ref(v_ty_1267_);
return v_acc_1268_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_etaExpandEqPattern___lam__0(lean_object* v_k_1273_, lean_object* v_i_1274_){
_start:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1275_ = lean_unsigned_to_nat(1u);
v___x_1276_ = lean_nat_sub(v_k_1273_, v___x_1275_);
v___x_1277_ = lean_nat_sub(v___x_1276_, v_i_1274_);
lean_dec(v___x_1276_);
v___x_1278_ = l_Lean_mkBVar(v___x_1277_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_etaExpandEqPattern___lam__0___boxed(lean_object* v_k_1279_, lean_object* v_i_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_etaExpandEqPattern___lam__0(v_k_1279_, v_i_1280_);
lean_dec(v_i_1280_);
lean_dec(v_k_1279_);
return v_res_1281_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_etaExpandEqPattern(lean_object* v_pattern_1282_, lean_object* v_eqTy_1283_){
_start:
{
uint8_t v___x_1284_; 
v___x_1284_ = l_Lean_Expr_isForall(v_eqTy_1283_);
if (v___x_1284_ == 0)
{
lean_object* v___x_1285_; lean_object* v___x_1286_; 
lean_dec_ref(v_eqTy_1283_);
v___x_1285_ = lean_unsigned_to_nat(0u);
v___x_1286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1286_, 0, v_pattern_1282_);
lean_ctor_set(v___x_1286_, 1, v___x_1285_);
return v___x_1286_;
}
else
{
lean_object* v_levelParams_1287_; lean_object* v_varTypes_1288_; lean_object* v_pattern_1289_; lean_object* v_fnInfos_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1308_; 
v_levelParams_1287_ = lean_ctor_get(v_pattern_1282_, 0);
v_varTypes_1288_ = lean_ctor_get(v_pattern_1282_, 1);
v_pattern_1289_ = lean_ctor_get(v_pattern_1282_, 3);
v_fnInfos_1290_ = lean_ctor_get(v_pattern_1282_, 4);
v_isSharedCheck_1308_ = !lean_is_exclusive(v_pattern_1282_);
if (v_isSharedCheck_1308_ == 0)
{
lean_object* v_unused_1309_; lean_object* v_unused_1310_; 
v_unused_1309_ = lean_ctor_get(v_pattern_1282_, 5);
lean_dec(v_unused_1309_);
v_unused_1310_ = lean_ctor_get(v_pattern_1282_, 2);
lean_dec(v_unused_1310_);
v___x_1292_ = v_pattern_1282_;
v_isShared_1293_ = v_isSharedCheck_1308_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_fnInfos_1290_);
lean_inc(v_pattern_1289_);
lean_inc(v_varTypes_1288_);
lean_inc(v_levelParams_1287_);
lean_dec(v_pattern_1282_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1308_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v_extraDomains_1296_; lean_object* v_k_1297_; lean_object* v___f_1298_; lean_object* v_liftedPattern_1299_; lean_object* v_newBVars_1300_; lean_object* v_newPatternExpr_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v_newPattern_1305_; 
v___x_1294_ = lean_unsigned_to_nat(0u);
v___x_1295_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg___closed__1));
v_extraDomains_1296_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_etaExpandEqPattern_collectDomains(v_eqTy_1283_, v___x_1295_);
v_k_1297_ = lean_array_get_size(v_extraDomains_1296_);
v___f_1298_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_etaExpandEqPattern___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1298_, 0, v_k_1297_);
v_liftedPattern_1299_ = lean_expr_lift_loose_bvars(v_pattern_1289_, v___x_1294_, v_k_1297_);
lean_dec_ref(v_pattern_1289_);
v_newBVars_1300_ = l_Array_ofFn___redArg(v_k_1297_, v___f_1298_);
v_newPatternExpr_1301_ = l_Lean_mkAppN(v_liftedPattern_1299_, v_newBVars_1300_);
lean_dec_ref(v_newBVars_1300_);
v___x_1302_ = l_Array_append___redArg(v_varTypes_1288_, v_extraDomains_1296_);
lean_dec_ref(v_extraDomains_1296_);
v___x_1303_ = lean_box(0);
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 5, v___x_1303_);
lean_ctor_set(v___x_1292_, 3, v_newPatternExpr_1301_);
lean_ctor_set(v___x_1292_, 2, v___x_1303_);
lean_ctor_set(v___x_1292_, 1, v___x_1302_);
v_newPattern_1305_ = v___x_1292_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_levelParams_1287_);
lean_ctor_set(v_reuseFailAlloc_1307_, 1, v___x_1302_);
lean_ctor_set(v_reuseFailAlloc_1307_, 2, v___x_1303_);
lean_ctor_set(v_reuseFailAlloc_1307_, 3, v_newPatternExpr_1301_);
lean_ctor_set(v_reuseFailAlloc_1307_, 4, v_fnInfos_1290_);
lean_ctor_set(v_reuseFailAlloc_1307_, 5, v___x_1303_);
v_newPattern_1305_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
lean_object* v___x_1306_; 
v___x_1306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1306_, 0, v_newPattern_1305_);
lean_ctor_set(v___x_1306_, 1, v_k_1297_);
return v___x_1306_;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1312_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__0));
v___x_1313_ = l_Lean_stringToMessageData(v___x_1312_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___lam__0(lean_object* v_body_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_){
_start:
{
lean_object* v___x_1325_; uint8_t v___x_1326_; 
lean_inc_ref(v_body_1314_);
v___x_1325_ = l_Lean_Expr_cleanupAnnotations(v_body_1314_);
v___x_1326_ = l_Lean_Expr_isApp(v___x_1325_);
if (v___x_1326_ == 0)
{
lean_dec_ref(v___x_1325_);
goto v___jp_1320_;
}
else
{
lean_object* v_arg_1327_; lean_object* v___x_1328_; uint8_t v___x_1329_; 
v_arg_1327_ = lean_ctor_get(v___x_1325_, 1);
lean_inc_ref(v_arg_1327_);
v___x_1328_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1325_);
v___x_1329_ = l_Lean_Expr_isApp(v___x_1328_);
if (v___x_1329_ == 0)
{
lean_dec_ref(v___x_1328_);
lean_dec_ref(v_arg_1327_);
goto v___jp_1320_;
}
else
{
lean_object* v_arg_1330_; lean_object* v___x_1331_; uint8_t v___x_1332_; 
v_arg_1330_ = lean_ctor_get(v___x_1328_, 1);
lean_inc_ref(v_arg_1330_);
v___x_1331_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1328_);
v___x_1332_ = l_Lean_Expr_isApp(v___x_1331_);
if (v___x_1332_ == 0)
{
lean_dec_ref(v___x_1331_);
lean_dec_ref(v_arg_1330_);
lean_dec_ref(v_arg_1327_);
goto v___jp_1320_;
}
else
{
lean_object* v_arg_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; uint8_t v___x_1336_; 
v_arg_1333_ = lean_ctor_get(v___x_1331_, 1);
lean_inc_ref(v_arg_1333_);
v___x_1334_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1331_);
v___x_1335_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate___closed__1));
v___x_1336_ = l_Lean_Expr_isConstOf(v___x_1334_, v___x_1335_);
lean_dec_ref(v___x_1334_);
if (v___x_1336_ == 0)
{
lean_dec_ref(v_arg_1333_);
lean_dec_ref(v_arg_1330_);
lean_dec_ref(v_arg_1327_);
goto v___jp_1320_;
}
else
{
lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; 
lean_dec_ref(v_body_1314_);
v___x_1337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1337_, 0, v_arg_1333_);
lean_ctor_set(v___x_1337_, 1, v_arg_1327_);
v___x_1338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1338_, 0, v_arg_1330_);
lean_ctor_set(v___x_1338_, 1, v___x_1337_);
v___x_1339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1338_);
return v___x_1339_;
}
}
}
}
v___jp_1320_:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1321_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__1);
v___x_1322_ = l_Lean_indentExpr(v_body_1314_);
v___x_1323_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1321_);
lean_ctor_set(v___x_1323_, 1, v___x_1322_);
v___x_1324_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0___redArg(v___x_1323_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_);
return v___x_1324_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___boxed(lean_object* v_body_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
lean_object* v_res_1346_; 
v_res_1346_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___lam__0(v_body_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
lean_dec(v___y_1342_);
lean_dec_ref(v___y_1341_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f(lean_object* v_declName_1348_, lean_object* v_prio_1349_, lean_object* v_a_1350_, lean_object* v_a_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_){
_start:
{
lean_object* v___x_1355_; 
lean_inc(v_declName_1348_);
v___x_1355_ = l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_preprocessDeclPattern(v_declName_1348_, v_a_1350_, v_a_1351_, v_a_1352_, v_a_1353_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v_a_1356_; lean_object* v_fst_1357_; lean_object* v_snd_1358_; lean_object* v___f_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
lean_inc(v_a_1356_);
lean_dec_ref_known(v___x_1355_, 1);
v_fst_1357_ = lean_ctor_get(v_a_1356_, 0);
lean_inc(v_fst_1357_);
v_snd_1358_ = lean_ctor_get(v_a_1356_, 1);
lean_inc_n(v_snd_1358_, 2);
lean_dec(v_a_1356_);
v___f_1359_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___closed__0));
v___x_1360_ = lean_unsigned_to_nat(0u);
v___x_1361_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecPattern___redArg___closed__1));
v___x_1362_ = l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_mkPatternFromTypeWithKey_go(lean_box(0), v_fst_1357_, v_snd_1358_, v___f_1359_, v_snd_1358_, v___x_1361_, v_a_1350_, v_a_1351_, v_a_1352_, v_a_1353_);
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1390_; 
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1365_ = v___x_1362_;
v_isShared_1366_ = v_isSharedCheck_1390_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1362_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1390_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v_snd_1367_; lean_object* v_fst_1368_; lean_object* v_fst_1369_; lean_object* v_snd_1370_; lean_object* v___x_1371_; lean_object* v_fst_1372_; lean_object* v_snd_1373_; uint8_t v___y_1375_; uint8_t v___x_1387_; 
v_snd_1367_ = lean_ctor_get(v_a_1363_, 1);
lean_inc(v_snd_1367_);
v_fst_1368_ = lean_ctor_get(v_a_1363_, 0);
lean_inc(v_fst_1368_);
lean_dec(v_a_1363_);
v_fst_1369_ = lean_ctor_get(v_snd_1367_, 0);
lean_inc(v_fst_1369_);
v_snd_1370_ = lean_ctor_get(v_snd_1367_, 1);
lean_inc(v_snd_1370_);
lean_dec(v_snd_1367_);
v___x_1371_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_etaExpandEqPattern(v_fst_1368_, v_fst_1369_);
v_fst_1372_ = lean_ctor_get(v___x_1371_, 0);
lean_inc(v_fst_1372_);
v_snd_1373_ = lean_ctor_get(v___x_1371_, 1);
lean_inc(v_snd_1373_);
lean_dec_ref(v___x_1371_);
v___x_1387_ = lean_nat_dec_eq(v_snd_1373_, v___x_1360_);
if (v___x_1387_ == 0)
{
lean_dec(v_snd_1370_);
v___y_1375_ = v___x_1387_;
goto v___jp_1374_;
}
else
{
lean_object* v_pattern_1388_; uint8_t v___x_1389_; 
v_pattern_1388_ = lean_ctor_get(v_fst_1372_, 3);
v___x_1389_ = lean_expr_eqv(v_pattern_1388_, v_snd_1370_);
lean_dec(v_snd_1370_);
v___y_1375_ = v___x_1389_;
goto v___jp_1374_;
}
v___jp_1374_:
{
if (v___y_1375_ == 0)
{
lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1381_; 
v___x_1376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1376_, 0, v_declName_1348_);
v___x_1377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1377_, 0, v_snd_1373_);
v___x_1378_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1378_, 0, v_fst_1372_);
lean_ctor_set(v___x_1378_, 1, v___x_1376_);
lean_ctor_set(v___x_1378_, 2, v___x_1377_);
lean_ctor_set(v___x_1378_, 3, v_prio_1349_);
v___x_1379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1379_, 0, v___x_1378_);
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 0, v___x_1379_);
v___x_1381_ = v___x_1365_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v___x_1379_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
}
}
else
{
lean_object* v___x_1383_; lean_object* v___x_1385_; 
lean_dec(v_snd_1373_);
lean_dec(v_fst_1372_);
lean_dec(v_prio_1349_);
lean_dec(v_declName_1348_);
v___x_1383_ = lean_box(0);
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 0, v___x_1383_);
v___x_1385_ = v___x_1365_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v___x_1383_);
v___x_1385_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
return v___x_1385_;
}
}
}
}
}
else
{
lean_object* v_a_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1398_; 
lean_dec(v_prio_1349_);
lean_dec(v_declName_1348_);
v_a_1391_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1393_ = v___x_1362_;
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_a_1391_);
lean_dec(v___x_1362_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1396_; 
if (v_isShared_1394_ == 0)
{
v___x_1396_ = v___x_1393_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_a_1391_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
}
}
else
{
lean_object* v_a_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1406_; 
lean_dec(v_prio_1349_);
lean_dec(v_declName_1348_);
v_a_1399_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1406_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1401_ = v___x_1355_;
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_a_1399_);
lean_dec(v___x_1355_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1404_; 
if (v_isShared_1402_ == 0)
{
v___x_1404_ = v___x_1401_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_a_1399_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f___boxed(lean_object* v_declName_1407_, lean_object* v_prio_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_){
_start:
{
lean_object* v_res_1414_; 
v_res_1414_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f(v_declName_1407_, v_prio_1408_, v_a_1409_, v_a_1410_, v_a_1411_, v_a_1412_);
lean_dec(v_a_1412_);
lean_dec_ref(v_a_1411_);
lean_dec(v_a_1410_);
lean_dec_ref(v_a_1409_);
return v_res_1414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__0(lean_object* v_x1_1415_, lean_object* v_x2_1416_){
_start:
{
lean_object* v___x_1417_; 
v___x_1417_ = lean_array_push(v_x1_1415_, v_x2_1416_);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__7___redArg(lean_object* v_f_1418_, lean_object* v_as_1419_, size_t v_i_1420_, size_t v_stop_1421_, lean_object* v_b_1422_){
_start:
{
uint8_t v___x_1423_; 
v___x_1423_ = lean_usize_dec_eq(v_i_1420_, v_stop_1421_);
if (v___x_1423_ == 0)
{
lean_object* v___x_1424_; lean_object* v___x_1425_; size_t v___x_1426_; size_t v___x_1427_; 
v___x_1424_ = lean_array_uget_borrowed(v_as_1419_, v_i_1420_);
lean_inc(v_f_1418_);
lean_inc(v___x_1424_);
v___x_1425_ = lean_apply_2(v_f_1418_, v_b_1422_, v___x_1424_);
v___x_1426_ = ((size_t)1ULL);
v___x_1427_ = lean_usize_add(v_i_1420_, v___x_1426_);
v_i_1420_ = v___x_1427_;
v_b_1422_ = v___x_1425_;
goto _start;
}
else
{
lean_dec(v_f_1418_);
return v_b_1422_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__7___redArg___boxed(lean_object* v_f_1429_, lean_object* v_as_1430_, lean_object* v_i_1431_, lean_object* v_stop_1432_, lean_object* v_b_1433_){
_start:
{
size_t v_i_boxed_1434_; size_t v_stop_boxed_1435_; lean_object* v_res_1436_; 
v_i_boxed_1434_ = lean_unbox_usize(v_i_1431_);
lean_dec(v_i_1431_);
v_stop_boxed_1435_ = lean_unbox_usize(v_stop_1432_);
lean_dec(v_stop_1432_);
v_res_1436_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__7___redArg(v_f_1429_, v_as_1430_, v_i_boxed_1434_, v_stop_boxed_1435_, v_b_1433_);
lean_dec_ref(v_as_1430_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4___redArg(lean_object* v_f_1437_, lean_object* v_x_1438_, lean_object* v_x_1439_){
_start:
{
lean_object* v_vs_1440_; lean_object* v_children_1441_; lean_object* v___x_1442_; lean_object* v_s_1444_; lean_object* v___x_1454_; uint8_t v___x_1455_; 
v_vs_1440_ = lean_ctor_get(v_x_1439_, 0);
v_children_1441_ = lean_ctor_get(v_x_1439_, 1);
v___x_1442_ = lean_unsigned_to_nat(0u);
v___x_1454_ = lean_array_get_size(v_vs_1440_);
v___x_1455_ = lean_nat_dec_lt(v___x_1442_, v___x_1454_);
if (v___x_1455_ == 0)
{
lean_object* v___x_1456_; uint8_t v___x_1457_; 
v___x_1456_ = lean_array_get_size(v_children_1441_);
v___x_1457_ = lean_nat_dec_lt(v___x_1442_, v___x_1456_);
if (v___x_1457_ == 0)
{
lean_dec(v_f_1437_);
return v_x_1438_;
}
else
{
uint8_t v___x_1458_; 
v___x_1458_ = lean_nat_dec_le(v___x_1456_, v___x_1456_);
if (v___x_1458_ == 0)
{
if (v___x_1457_ == 0)
{
lean_dec(v_f_1437_);
return v_x_1438_;
}
else
{
size_t v___x_1459_; size_t v___x_1460_; lean_object* v___x_1461_; 
v___x_1459_ = ((size_t)0ULL);
v___x_1460_ = lean_usize_of_nat(v___x_1456_);
v___x_1461_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__6___redArg(v_f_1437_, v_children_1441_, v___x_1459_, v___x_1460_, v_x_1438_);
return v___x_1461_;
}
}
else
{
size_t v___x_1462_; size_t v___x_1463_; lean_object* v___x_1464_; 
v___x_1462_ = ((size_t)0ULL);
v___x_1463_ = lean_usize_of_nat(v___x_1456_);
v___x_1464_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__6___redArg(v_f_1437_, v_children_1441_, v___x_1462_, v___x_1463_, v_x_1438_);
return v___x_1464_;
}
}
}
else
{
uint8_t v___x_1465_; 
v___x_1465_ = lean_nat_dec_le(v___x_1454_, v___x_1454_);
if (v___x_1465_ == 0)
{
if (v___x_1455_ == 0)
{
v_s_1444_ = v_x_1438_;
goto v___jp_1443_;
}
else
{
size_t v___x_1466_; size_t v___x_1467_; lean_object* v___x_1468_; 
v___x_1466_ = ((size_t)0ULL);
v___x_1467_ = lean_usize_of_nat(v___x_1454_);
lean_inc(v_f_1437_);
v___x_1468_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__7___redArg(v_f_1437_, v_vs_1440_, v___x_1466_, v___x_1467_, v_x_1438_);
v_s_1444_ = v___x_1468_;
goto v___jp_1443_;
}
}
else
{
size_t v___x_1469_; size_t v___x_1470_; lean_object* v___x_1471_; 
v___x_1469_ = ((size_t)0ULL);
v___x_1470_ = lean_usize_of_nat(v___x_1454_);
lean_inc(v_f_1437_);
v___x_1471_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__7___redArg(v_f_1437_, v_vs_1440_, v___x_1469_, v___x_1470_, v_x_1438_);
v_s_1444_ = v___x_1471_;
goto v___jp_1443_;
}
}
v___jp_1443_:
{
lean_object* v___x_1445_; uint8_t v___x_1446_; 
v___x_1445_ = lean_array_get_size(v_children_1441_);
v___x_1446_ = lean_nat_dec_lt(v___x_1442_, v___x_1445_);
if (v___x_1446_ == 0)
{
lean_dec(v_f_1437_);
return v_s_1444_;
}
else
{
uint8_t v___x_1447_; 
v___x_1447_ = lean_nat_dec_le(v___x_1445_, v___x_1445_);
if (v___x_1447_ == 0)
{
if (v___x_1446_ == 0)
{
lean_dec(v_f_1437_);
return v_s_1444_;
}
else
{
size_t v___x_1448_; size_t v___x_1449_; lean_object* v___x_1450_; 
v___x_1448_ = ((size_t)0ULL);
v___x_1449_ = lean_usize_of_nat(v___x_1445_);
v___x_1450_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__6___redArg(v_f_1437_, v_children_1441_, v___x_1448_, v___x_1449_, v_s_1444_);
return v___x_1450_;
}
}
else
{
size_t v___x_1451_; size_t v___x_1452_; lean_object* v___x_1453_; 
v___x_1451_ = ((size_t)0ULL);
v___x_1452_ = lean_usize_of_nat(v___x_1445_);
v___x_1453_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__6___redArg(v_f_1437_, v_children_1441_, v___x_1451_, v___x_1452_, v_s_1444_);
return v___x_1453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__6___redArg(lean_object* v_f_1472_, lean_object* v_as_1473_, size_t v_i_1474_, size_t v_stop_1475_, lean_object* v_b_1476_){
_start:
{
uint8_t v___x_1477_; 
v___x_1477_ = lean_usize_dec_eq(v_i_1474_, v_stop_1475_);
if (v___x_1477_ == 0)
{
lean_object* v___x_1478_; lean_object* v_snd_1479_; lean_object* v___x_1480_; size_t v___x_1481_; size_t v___x_1482_; 
v___x_1478_ = lean_array_uget_borrowed(v_as_1473_, v_i_1474_);
v_snd_1479_ = lean_ctor_get(v___x_1478_, 1);
lean_inc(v_f_1472_);
v___x_1480_ = l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4___redArg(v_f_1472_, v_b_1476_, v_snd_1479_);
v___x_1481_ = ((size_t)1ULL);
v___x_1482_ = lean_usize_add(v_i_1474_, v___x_1481_);
v_i_1474_ = v___x_1482_;
v_b_1476_ = v___x_1480_;
goto _start;
}
else
{
lean_dec(v_f_1472_);
return v_b_1476_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__6___redArg___boxed(lean_object* v_f_1484_, lean_object* v_as_1485_, lean_object* v_i_1486_, lean_object* v_stop_1487_, lean_object* v_b_1488_){
_start:
{
size_t v_i_boxed_1489_; size_t v_stop_boxed_1490_; lean_object* v_res_1491_; 
v_i_boxed_1489_ = lean_unbox_usize(v_i_1486_);
lean_dec(v_i_1486_);
v_stop_boxed_1490_ = lean_unbox_usize(v_stop_1487_);
lean_dec(v_stop_1487_);
v_res_1491_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__6___redArg(v_f_1484_, v_as_1485_, v_i_boxed_1489_, v_stop_boxed_1490_, v_b_1488_);
lean_dec_ref(v_as_1485_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4___redArg___boxed(lean_object* v_f_1492_, lean_object* v_x_1493_, lean_object* v_x_1494_){
_start:
{
lean_object* v_res_1495_; 
v_res_1495_ = l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4___redArg(v_f_1492_, v_x_1493_, v_x_1494_);
lean_dec_ref(v_x_1494_);
return v_res_1495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__1(lean_object* v___f_1496_, lean_object* v_s_1497_, lean_object* v_x_1498_, lean_object* v_t_1499_){
_start:
{
lean_object* v___x_1500_; 
v___x_1500_ = l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4___redArg(v___f_1496_, v_s_1497_, v_t_1499_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__1___boxed(lean_object* v___f_1501_, lean_object* v_s_1502_, lean_object* v_x_1503_, lean_object* v_t_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__1(v___f_1501_, v_s_1502_, v_x_1503_, v_t_1504_);
lean_dec_ref(v_t_1504_);
lean_dec(v_x_1503_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__2(lean_object* v_x1_1506_, lean_object* v_x2_1507_){
_start:
{
lean_object* v___x_1508_; 
v___x_1508_ = lean_array_push(v_x1_1506_, v_x2_1507_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__3(lean_object* v___f_1509_, lean_object* v_s_1510_, lean_object* v_x_1511_, lean_object* v_t_1512_){
_start:
{
lean_object* v___x_1513_; 
v___x_1513_ = l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4___redArg(v___f_1509_, v_s_1510_, v_t_1512_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__3___boxed(lean_object* v___f_1514_, lean_object* v_s_1515_, lean_object* v_x_1516_, lean_object* v_t_1517_){
_start:
{
lean_object* v_res_1518_; 
v_res_1518_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__3(v___f_1514_, v_s_1515_, v_x_1516_, v_t_1517_);
lean_dec_ref(v_t_1517_);
lean_dec(v_x_1516_);
return v_res_1518_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1_spec__12___redArg(lean_object* v_x_1519_, lean_object* v_x_1520_, lean_object* v_x_1521_, lean_object* v_x_1522_){
_start:
{
lean_object* v_ks_1523_; lean_object* v_vs_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1548_; 
v_ks_1523_ = lean_ctor_get(v_x_1519_, 0);
v_vs_1524_ = lean_ctor_get(v_x_1519_, 1);
v_isSharedCheck_1548_ = !lean_is_exclusive(v_x_1519_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1526_ = v_x_1519_;
v_isShared_1527_ = v_isSharedCheck_1548_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_vs_1524_);
lean_inc(v_ks_1523_);
lean_dec(v_x_1519_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1548_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v___x_1528_; uint8_t v___x_1529_; 
v___x_1528_ = lean_array_get_size(v_ks_1523_);
v___x_1529_ = lean_nat_dec_lt(v_x_1520_, v___x_1528_);
if (v___x_1529_ == 0)
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1533_; 
lean_dec(v_x_1520_);
v___x_1530_ = lean_array_push(v_ks_1523_, v_x_1521_);
v___x_1531_ = lean_array_push(v_vs_1524_, v_x_1522_);
if (v_isShared_1527_ == 0)
{
lean_ctor_set(v___x_1526_, 1, v___x_1531_);
lean_ctor_set(v___x_1526_, 0, v___x_1530_);
v___x_1533_ = v___x_1526_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v___x_1530_);
lean_ctor_set(v_reuseFailAlloc_1534_, 1, v___x_1531_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
else
{
lean_object* v_k_x27_1535_; uint8_t v___x_1536_; 
v_k_x27_1535_ = lean_array_fget_borrowed(v_ks_1523_, v_x_1520_);
lean_inc(v_k_x27_1535_);
lean_inc_ref(v_x_1521_);
v___x_1536_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_instBEqSpecProof_beq(v_x_1521_, v_k_x27_1535_);
if (v___x_1536_ == 0)
{
lean_object* v___x_1538_; 
if (v_isShared_1527_ == 0)
{
v___x_1538_ = v___x_1526_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v_ks_1523_);
lean_ctor_set(v_reuseFailAlloc_1542_, 1, v_vs_1524_);
v___x_1538_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1539_ = lean_unsigned_to_nat(1u);
v___x_1540_ = lean_nat_add(v_x_1520_, v___x_1539_);
lean_dec(v_x_1520_);
v_x_1519_ = v___x_1538_;
v_x_1520_ = v___x_1540_;
goto _start;
}
}
else
{
lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1546_; 
v___x_1543_ = lean_array_fset(v_ks_1523_, v_x_1520_, v_x_1521_);
v___x_1544_ = lean_array_fset(v_vs_1524_, v_x_1520_, v_x_1522_);
lean_dec(v_x_1520_);
if (v_isShared_1527_ == 0)
{
lean_ctor_set(v___x_1526_, 1, v___x_1544_);
lean_ctor_set(v___x_1526_, 0, v___x_1543_);
v___x_1546_ = v___x_1526_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v___x_1543_);
lean_ctor_set(v_reuseFailAlloc_1547_, 1, v___x_1544_);
v___x_1546_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
return v___x_1546_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1___redArg(lean_object* v_n_1549_, lean_object* v_k_1550_, lean_object* v_v_1551_){
_start:
{
lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1552_ = lean_unsigned_to_nat(0u);
v___x_1553_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1_spec__12___redArg(v_n_1549_, v___x_1552_, v_k_1550_, v_v_1551_);
return v___x_1553_;
}
}
static uint64_t _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1554_; uint64_t v___x_1555_; 
v___x_1554_ = lean_unsigned_to_nat(1723u);
v___x_1555_ = lean_uint64_of_nat(v___x_1554_);
return v___x_1555_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1556_; 
v___x_1556_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg(lean_object* v_x_1557_, size_t v_x_1558_, size_t v_x_1559_, lean_object* v_x_1560_, lean_object* v_x_1561_){
_start:
{
if (lean_obj_tag(v_x_1557_) == 0)
{
lean_object* v_es_1562_; size_t v___x_1563_; size_t v___x_1564_; size_t v___x_1565_; size_t v___x_1566_; lean_object* v_j_1567_; lean_object* v___x_1568_; uint8_t v___x_1569_; 
v_es_1562_ = lean_ctor_get(v_x_1557_, 0);
v___x_1563_ = ((size_t)5ULL);
v___x_1564_ = ((size_t)1ULL);
v___x_1565_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1);
v___x_1566_ = lean_usize_land(v_x_1558_, v___x_1565_);
v_j_1567_ = lean_usize_to_nat(v___x_1566_);
v___x_1568_ = lean_array_get_size(v_es_1562_);
v___x_1569_ = lean_nat_dec_lt(v_j_1567_, v___x_1568_);
if (v___x_1569_ == 0)
{
lean_dec(v_j_1567_);
lean_dec(v_x_1561_);
lean_dec_ref(v_x_1560_);
return v_x_1557_;
}
else
{
lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1606_; 
lean_inc_ref(v_es_1562_);
v_isSharedCheck_1606_ = !lean_is_exclusive(v_x_1557_);
if (v_isSharedCheck_1606_ == 0)
{
lean_object* v_unused_1607_; 
v_unused_1607_ = lean_ctor_get(v_x_1557_, 0);
lean_dec(v_unused_1607_);
v___x_1571_ = v_x_1557_;
v_isShared_1572_ = v_isSharedCheck_1606_;
goto v_resetjp_1570_;
}
else
{
lean_dec(v_x_1557_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1606_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v_v_1573_; lean_object* v___x_1574_; lean_object* v_xs_x27_1575_; lean_object* v___y_1577_; 
v_v_1573_ = lean_array_fget(v_es_1562_, v_j_1567_);
v___x_1574_ = lean_box(0);
v_xs_x27_1575_ = lean_array_fset(v_es_1562_, v_j_1567_, v___x_1574_);
switch(lean_obj_tag(v_v_1573_))
{
case 0:
{
lean_object* v_key_1582_; lean_object* v_val_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1593_; 
v_key_1582_ = lean_ctor_get(v_v_1573_, 0);
v_val_1583_ = lean_ctor_get(v_v_1573_, 1);
v_isSharedCheck_1593_ = !lean_is_exclusive(v_v_1573_);
if (v_isSharedCheck_1593_ == 0)
{
v___x_1585_ = v_v_1573_;
v_isShared_1586_ = v_isSharedCheck_1593_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_val_1583_);
lean_inc(v_key_1582_);
lean_dec(v_v_1573_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1593_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
uint8_t v___x_1587_; 
lean_inc(v_key_1582_);
lean_inc_ref(v_x_1560_);
v___x_1587_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_instBEqSpecProof_beq(v_x_1560_, v_key_1582_);
if (v___x_1587_ == 0)
{
lean_object* v___x_1588_; lean_object* v___x_1589_; 
lean_del_object(v___x_1585_);
v___x_1588_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1582_, v_val_1583_, v_x_1560_, v_x_1561_);
v___x_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1588_);
v___y_1577_ = v___x_1589_;
goto v___jp_1576_;
}
else
{
lean_object* v___x_1591_; 
lean_dec(v_val_1583_);
lean_dec(v_key_1582_);
if (v_isShared_1586_ == 0)
{
lean_ctor_set(v___x_1585_, 1, v_x_1561_);
lean_ctor_set(v___x_1585_, 0, v_x_1560_);
v___x_1591_ = v___x_1585_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v_x_1560_);
lean_ctor_set(v_reuseFailAlloc_1592_, 1, v_x_1561_);
v___x_1591_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
v___y_1577_ = v___x_1591_;
goto v___jp_1576_;
}
}
}
}
case 1:
{
lean_object* v_node_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1604_; 
v_node_1594_ = lean_ctor_get(v_v_1573_, 0);
v_isSharedCheck_1604_ = !lean_is_exclusive(v_v_1573_);
if (v_isSharedCheck_1604_ == 0)
{
v___x_1596_ = v_v_1573_;
v_isShared_1597_ = v_isSharedCheck_1604_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_node_1594_);
lean_dec(v_v_1573_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1604_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
size_t v___x_1598_; size_t v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1602_; 
v___x_1598_ = lean_usize_shift_right(v_x_1558_, v___x_1563_);
v___x_1599_ = lean_usize_add(v_x_1559_, v___x_1564_);
v___x_1600_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg(v_node_1594_, v___x_1598_, v___x_1599_, v_x_1560_, v_x_1561_);
if (v_isShared_1597_ == 0)
{
lean_ctor_set(v___x_1596_, 0, v___x_1600_);
v___x_1602_ = v___x_1596_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v___x_1600_);
v___x_1602_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
v___y_1577_ = v___x_1602_;
goto v___jp_1576_;
}
}
}
default: 
{
lean_object* v___x_1605_; 
v___x_1605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1605_, 0, v_x_1560_);
lean_ctor_set(v___x_1605_, 1, v_x_1561_);
v___y_1577_ = v___x_1605_;
goto v___jp_1576_;
}
}
v___jp_1576_:
{
lean_object* v___x_1578_; lean_object* v___x_1580_; 
v___x_1578_ = lean_array_fset(v_xs_x27_1575_, v_j_1567_, v___y_1577_);
lean_dec(v_j_1567_);
if (v_isShared_1572_ == 0)
{
lean_ctor_set(v___x_1571_, 0, v___x_1578_);
v___x_1580_ = v___x_1571_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v___x_1578_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
return v___x_1580_;
}
}
}
}
}
else
{
lean_object* v_ks_1608_; lean_object* v_vs_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1629_; 
v_ks_1608_ = lean_ctor_get(v_x_1557_, 0);
v_vs_1609_ = lean_ctor_get(v_x_1557_, 1);
v_isSharedCheck_1629_ = !lean_is_exclusive(v_x_1557_);
if (v_isSharedCheck_1629_ == 0)
{
v___x_1611_ = v_x_1557_;
v_isShared_1612_ = v_isSharedCheck_1629_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_vs_1609_);
lean_inc(v_ks_1608_);
lean_dec(v_x_1557_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1629_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1614_; 
if (v_isShared_1612_ == 0)
{
v___x_1614_ = v___x_1611_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v_ks_1608_);
lean_ctor_set(v_reuseFailAlloc_1628_, 1, v_vs_1609_);
v___x_1614_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
lean_object* v_newNode_1615_; uint8_t v___y_1617_; size_t v___x_1623_; uint8_t v___x_1624_; 
v_newNode_1615_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1___redArg(v___x_1614_, v_x_1560_, v_x_1561_);
v___x_1623_ = ((size_t)7ULL);
v___x_1624_ = lean_usize_dec_le(v___x_1623_, v_x_1559_);
if (v___x_1624_ == 0)
{
lean_object* v___x_1625_; lean_object* v___x_1626_; uint8_t v___x_1627_; 
v___x_1625_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1615_);
v___x_1626_ = lean_unsigned_to_nat(4u);
v___x_1627_ = lean_nat_dec_lt(v___x_1625_, v___x_1626_);
lean_dec(v___x_1625_);
v___y_1617_ = v___x_1627_;
goto v___jp_1616_;
}
else
{
v___y_1617_ = v___x_1624_;
goto v___jp_1616_;
}
v___jp_1616_:
{
if (v___y_1617_ == 0)
{
lean_object* v_ks_1618_; lean_object* v_vs_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; 
v_ks_1618_ = lean_ctor_get(v_newNode_1615_, 0);
lean_inc_ref(v_ks_1618_);
v_vs_1619_ = lean_ctor_get(v_newNode_1615_, 1);
lean_inc_ref(v_vs_1619_);
lean_dec_ref(v_newNode_1615_);
v___x_1620_ = lean_unsigned_to_nat(0u);
v___x_1621_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg___closed__0);
v___x_1622_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg(v_x_1559_, v_ks_1618_, v_vs_1619_, v___x_1620_, v___x_1621_);
lean_dec_ref(v_vs_1619_);
lean_dec_ref(v_ks_1618_);
return v___x_1622_;
}
else
{
return v_newNode_1615_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg(size_t v_depth_1630_, lean_object* v_keys_1631_, lean_object* v_vals_1632_, lean_object* v_i_1633_, lean_object* v_entries_1634_){
_start:
{
lean_object* v___x_1635_; uint8_t v___x_1636_; 
v___x_1635_ = lean_array_get_size(v_keys_1631_);
v___x_1636_ = lean_nat_dec_lt(v_i_1633_, v___x_1635_);
if (v___x_1636_ == 0)
{
lean_dec(v_i_1633_);
return v_entries_1634_;
}
else
{
lean_object* v_k_1637_; lean_object* v_v_1638_; uint64_t v___y_1640_; lean_object* v___x_1651_; 
v_k_1637_ = lean_array_fget_borrowed(v_keys_1631_, v_i_1633_);
v_v_1638_ = lean_array_fget_borrowed(v_vals_1632_, v_i_1633_);
v___x_1651_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecProof_key(v_k_1637_);
if (lean_obj_tag(v___x_1651_) == 0)
{
uint64_t v___x_1652_; 
v___x_1652_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0);
v___y_1640_ = v___x_1652_;
goto v___jp_1639_;
}
else
{
uint64_t v_hash_1653_; 
v_hash_1653_ = lean_ctor_get_uint64(v___x_1651_, sizeof(void*)*2);
lean_dec(v___x_1651_);
v___y_1640_ = v_hash_1653_;
goto v___jp_1639_;
}
v___jp_1639_:
{
size_t v_h_1641_; size_t v___x_1642_; lean_object* v___x_1643_; size_t v___x_1644_; size_t v___x_1645_; size_t v___x_1646_; size_t v_h_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; 
v_h_1641_ = lean_uint64_to_usize(v___y_1640_);
v___x_1642_ = ((size_t)5ULL);
v___x_1643_ = lean_unsigned_to_nat(1u);
v___x_1644_ = ((size_t)1ULL);
v___x_1645_ = lean_usize_sub(v_depth_1630_, v___x_1644_);
v___x_1646_ = lean_usize_mul(v___x_1642_, v___x_1645_);
v_h_1647_ = lean_usize_shift_right(v_h_1641_, v___x_1646_);
v___x_1648_ = lean_nat_add(v_i_1633_, v___x_1643_);
lean_dec(v_i_1633_);
lean_inc(v_v_1638_);
lean_inc(v_k_1637_);
v___x_1649_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg(v_entries_1634_, v_h_1647_, v_depth_1630_, v_k_1637_, v_v_1638_);
v_i_1633_ = v___x_1648_;
v_entries_1634_ = v___x_1649_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_1654_, lean_object* v_keys_1655_, lean_object* v_vals_1656_, lean_object* v_i_1657_, lean_object* v_entries_1658_){
_start:
{
size_t v_depth_boxed_1659_; lean_object* v_res_1660_; 
v_depth_boxed_1659_ = lean_unbox_usize(v_depth_1654_);
lean_dec(v_depth_1654_);
v_res_1660_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg(v_depth_boxed_1659_, v_keys_1655_, v_vals_1656_, v_i_1657_, v_entries_1658_);
lean_dec_ref(v_vals_1656_);
lean_dec_ref(v_keys_1655_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg___boxed(lean_object* v_x_1661_, lean_object* v_x_1662_, lean_object* v_x_1663_, lean_object* v_x_1664_, lean_object* v_x_1665_){
_start:
{
size_t v_x_26187__boxed_1666_; size_t v_x_26188__boxed_1667_; lean_object* v_res_1668_; 
v_x_26187__boxed_1666_ = lean_unbox_usize(v_x_1662_);
lean_dec(v_x_1662_);
v_x_26188__boxed_1667_ = lean_unbox_usize(v_x_1663_);
lean_dec(v_x_1663_);
v_res_1668_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg(v_x_1661_, v_x_26187__boxed_1666_, v_x_26188__boxed_1667_, v_x_1664_, v_x_1665_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0___redArg(lean_object* v_x_1669_, lean_object* v_x_1670_, lean_object* v_x_1671_){
_start:
{
uint64_t v___y_1673_; lean_object* v___x_1677_; 
v___x_1677_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecProof_key(v_x_1670_);
if (lean_obj_tag(v___x_1677_) == 0)
{
uint64_t v___x_1678_; 
v___x_1678_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0);
v___y_1673_ = v___x_1678_;
goto v___jp_1672_;
}
else
{
uint64_t v_hash_1679_; 
v_hash_1679_ = lean_ctor_get_uint64(v___x_1677_, sizeof(void*)*2);
lean_dec(v___x_1677_);
v___y_1673_ = v_hash_1679_;
goto v___jp_1672_;
}
v___jp_1672_:
{
size_t v___x_1674_; size_t v___x_1675_; lean_object* v___x_1676_; 
v___x_1674_ = lean_uint64_to_usize(v___y_1673_);
v___x_1675_ = ((size_t)1ULL);
v___x_1676_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg(v_x_1669_, v___x_1674_, v___x_1675_, v_x_1670_, v_x_1671_);
return v___x_1676_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___lam__4(lean_object* v_d_1680_, lean_object* v_a_1681_, lean_object* v_x_1682_){
_start:
{
lean_object* v___x_1683_; 
v___x_1683_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecProof_ofOrigin(v_a_1681_);
if (lean_obj_tag(v___x_1683_) == 0)
{
return v_d_1680_;
}
else
{
lean_object* v_val_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; 
v_val_1684_ = lean_ctor_get(v___x_1683_, 0);
lean_inc(v_val_1684_);
lean_dec_ref_known(v___x_1683_, 1);
v___x_1685_ = lean_box(0);
v___x_1686_ = l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0___redArg(v_d_1680_, v_val_1684_, v___x_1685_);
return v___x_1686_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__6___redArg(lean_object* v_as_1687_, size_t v_sz_1688_, size_t v_i_1689_, lean_object* v_b_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_){
_start:
{
lean_object* v_snd_1697_; uint8_t v___x_1701_; 
v___x_1701_ = lean_usize_dec_lt(v_i_1689_, v_sz_1688_);
if (v___x_1701_ == 0)
{
lean_object* v___x_1702_; 
v___x_1702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1702_, 0, v_b_1690_);
return v___x_1702_;
}
else
{
lean_object* v_a_1703_; lean_object* v___x_1704_; 
v_a_1703_ = lean_array_uget_borrowed(v_as_1687_, v_i_1689_);
lean_inc(v_a_1703_);
v___x_1704_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNew___redArg(v_a_1703_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_);
if (lean_obj_tag(v___x_1704_) == 0)
{
lean_object* v_a_1705_; lean_object* v_pattern_1706_; lean_object* v___x_1707_; 
v_a_1705_ = lean_ctor_get(v___x_1704_, 0);
lean_inc(v_a_1705_);
lean_dec_ref_known(v___x_1704_, 1);
v_pattern_1706_ = lean_ctor_get(v_a_1705_, 0);
lean_inc_ref(v_pattern_1706_);
v___x_1707_ = l_Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0(v_b_1690_, v_pattern_1706_, v_a_1705_);
v_snd_1697_ = v___x_1707_;
goto v___jp_1696_;
}
else
{
lean_object* v_a_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1719_; 
v_a_1708_ = lean_ctor_get(v___x_1704_, 0);
v_isSharedCheck_1719_ = !lean_is_exclusive(v___x_1704_);
if (v_isSharedCheck_1719_ == 0)
{
v___x_1710_ = v___x_1704_;
v_isShared_1711_ = v_isSharedCheck_1719_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_a_1708_);
lean_dec(v___x_1704_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1719_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
uint8_t v___y_1713_; uint8_t v___x_1717_; 
v___x_1717_ = l_Lean_Exception_isInterrupt(v_a_1708_);
if (v___x_1717_ == 0)
{
uint8_t v___x_1718_; 
lean_inc(v_a_1708_);
v___x_1718_ = l_Lean_Exception_isRuntime(v_a_1708_);
v___y_1713_ = v___x_1718_;
goto v___jp_1712_;
}
else
{
v___y_1713_ = v___x_1717_;
goto v___jp_1712_;
}
v___jp_1712_:
{
if (v___y_1713_ == 0)
{
lean_del_object(v___x_1710_);
lean_dec(v_a_1708_);
v_snd_1697_ = v_b_1690_;
goto v___jp_1696_;
}
else
{
lean_object* v___x_1715_; 
lean_dec_ref(v_b_1690_);
if (v_isShared_1711_ == 0)
{
v___x_1715_ = v___x_1710_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_a_1708_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
}
}
}
}
v___jp_1696_:
{
size_t v___x_1698_; size_t v___x_1699_; 
v___x_1698_ = ((size_t)1ULL);
v___x_1699_ = lean_usize_add(v_i_1689_, v___x_1698_);
v_i_1689_ = v___x_1699_;
v_b_1690_ = v_snd_1697_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__6___redArg___boxed(lean_object* v_as_1720_, lean_object* v_sz_1721_, lean_object* v_i_1722_, lean_object* v_b_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
size_t v_sz_boxed_1729_; size_t v_i_boxed_1730_; lean_object* v_res_1731_; 
v_sz_boxed_1729_ = lean_unbox_usize(v_sz_1721_);
lean_dec(v_sz_1721_);
v_i_boxed_1730_ = lean_unbox_usize(v_i_1722_);
lean_dec(v_i_1722_);
v_res_1731_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__6___redArg(v_as_1720_, v_sz_boxed_1729_, v_i_boxed_1730_, v_b_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_);
lean_dec(v___y_1727_);
lean_dec_ref(v___y_1726_);
lean_dec(v___y_1725_);
lean_dec_ref(v___y_1724_);
lean_dec_ref(v_as_1720_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__14___redArg(lean_object* v_f_1732_, lean_object* v_keys_1733_, lean_object* v_vals_1734_, lean_object* v_i_1735_, lean_object* v_acc_1736_){
_start:
{
lean_object* v___x_1737_; uint8_t v___x_1738_; 
v___x_1737_ = lean_array_get_size(v_keys_1733_);
v___x_1738_ = lean_nat_dec_lt(v_i_1735_, v___x_1737_);
if (v___x_1738_ == 0)
{
lean_dec(v_i_1735_);
lean_dec(v_f_1732_);
return v_acc_1736_;
}
else
{
lean_object* v_k_1739_; lean_object* v_v_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; 
v_k_1739_ = lean_array_fget_borrowed(v_keys_1733_, v_i_1735_);
v_v_1740_ = lean_array_fget_borrowed(v_vals_1734_, v_i_1735_);
lean_inc(v_f_1732_);
lean_inc(v_v_1740_);
lean_inc(v_k_1739_);
v___x_1741_ = lean_apply_3(v_f_1732_, v_acc_1736_, v_k_1739_, v_v_1740_);
v___x_1742_ = lean_unsigned_to_nat(1u);
v___x_1743_ = lean_nat_add(v_i_1735_, v___x_1742_);
lean_dec(v_i_1735_);
v_i_1735_ = v___x_1743_;
v_acc_1736_ = v___x_1741_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__14___redArg___boxed(lean_object* v_f_1745_, lean_object* v_keys_1746_, lean_object* v_vals_1747_, lean_object* v_i_1748_, lean_object* v_acc_1749_){
_start:
{
lean_object* v_res_1750_; 
v_res_1750_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__14___redArg(v_f_1745_, v_keys_1746_, v_vals_1747_, v_i_1748_, v_acc_1749_);
lean_dec_ref(v_vals_1747_);
lean_dec_ref(v_keys_1746_);
return v_res_1750_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(lean_object* v_f_1751_, lean_object* v_x_1752_, lean_object* v_x_1753_){
_start:
{
if (lean_obj_tag(v_x_1752_) == 0)
{
lean_object* v_es_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; uint8_t v___x_1757_; 
v_es_1754_ = lean_ctor_get(v_x_1752_, 0);
v___x_1755_ = lean_unsigned_to_nat(0u);
v___x_1756_ = lean_array_get_size(v_es_1754_);
v___x_1757_ = lean_nat_dec_lt(v___x_1755_, v___x_1756_);
if (v___x_1757_ == 0)
{
lean_dec(v_f_1751_);
return v_x_1753_;
}
else
{
uint8_t v___x_1758_; 
v___x_1758_ = lean_nat_dec_le(v___x_1756_, v___x_1756_);
if (v___x_1758_ == 0)
{
if (v___x_1757_ == 0)
{
lean_dec(v_f_1751_);
return v_x_1753_;
}
else
{
size_t v___x_1759_; size_t v___x_1760_; lean_object* v___x_1761_; 
v___x_1759_ = ((size_t)0ULL);
v___x_1760_ = lean_usize_of_nat(v___x_1756_);
v___x_1761_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__13___redArg(v_f_1751_, v_es_1754_, v___x_1759_, v___x_1760_, v_x_1753_);
return v___x_1761_;
}
}
else
{
size_t v___x_1762_; size_t v___x_1763_; lean_object* v___x_1764_; 
v___x_1762_ = ((size_t)0ULL);
v___x_1763_ = lean_usize_of_nat(v___x_1756_);
v___x_1764_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__13___redArg(v_f_1751_, v_es_1754_, v___x_1762_, v___x_1763_, v_x_1753_);
return v___x_1764_;
}
}
}
else
{
lean_object* v_ks_1765_; lean_object* v_vs_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v_ks_1765_ = lean_ctor_get(v_x_1752_, 0);
v_vs_1766_ = lean_ctor_get(v_x_1752_, 1);
v___x_1767_ = lean_unsigned_to_nat(0u);
v___x_1768_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__14___redArg(v_f_1751_, v_ks_1765_, v_vs_1766_, v___x_1767_, v_x_1753_);
return v___x_1768_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__13___redArg(lean_object* v_f_1769_, lean_object* v_as_1770_, size_t v_i_1771_, size_t v_stop_1772_, lean_object* v_b_1773_){
_start:
{
lean_object* v___y_1775_; uint8_t v___x_1779_; 
v___x_1779_ = lean_usize_dec_eq(v_i_1771_, v_stop_1772_);
if (v___x_1779_ == 0)
{
lean_object* v___x_1780_; 
v___x_1780_ = lean_array_uget_borrowed(v_as_1770_, v_i_1771_);
switch(lean_obj_tag(v___x_1780_))
{
case 0:
{
lean_object* v_key_1781_; lean_object* v_val_1782_; lean_object* v___x_1783_; 
v_key_1781_ = lean_ctor_get(v___x_1780_, 0);
v_val_1782_ = lean_ctor_get(v___x_1780_, 1);
lean_inc(v_f_1769_);
lean_inc(v_val_1782_);
lean_inc(v_key_1781_);
v___x_1783_ = lean_apply_3(v_f_1769_, v_b_1773_, v_key_1781_, v_val_1782_);
v___y_1775_ = v___x_1783_;
goto v___jp_1774_;
}
case 1:
{
lean_object* v_node_1784_; lean_object* v___x_1785_; 
v_node_1784_ = lean_ctor_get(v___x_1780_, 0);
lean_inc(v_f_1769_);
v___x_1785_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(v_f_1769_, v_node_1784_, v_b_1773_);
v___y_1775_ = v___x_1785_;
goto v___jp_1774_;
}
default: 
{
v___y_1775_ = v_b_1773_;
goto v___jp_1774_;
}
}
}
else
{
lean_dec(v_f_1769_);
return v_b_1773_;
}
v___jp_1774_:
{
size_t v___x_1776_; size_t v___x_1777_; 
v___x_1776_ = ((size_t)1ULL);
v___x_1777_ = lean_usize_add(v_i_1771_, v___x_1776_);
v_i_1771_ = v___x_1777_;
v_b_1773_ = v___y_1775_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__13___redArg___boxed(lean_object* v_f_1786_, lean_object* v_as_1787_, lean_object* v_i_1788_, lean_object* v_stop_1789_, lean_object* v_b_1790_){
_start:
{
size_t v_i_boxed_1791_; size_t v_stop_boxed_1792_; lean_object* v_res_1793_; 
v_i_boxed_1791_ = lean_unbox_usize(v_i_1788_);
lean_dec(v_i_1788_);
v_stop_boxed_1792_ = lean_unbox_usize(v_stop_1789_);
lean_dec(v_stop_1789_);
v_res_1793_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__13___redArg(v_f_1786_, v_as_1787_, v_i_boxed_1791_, v_stop_boxed_1792_, v_b_1790_);
lean_dec_ref(v_as_1787_);
return v_res_1793_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg___boxed(lean_object* v_f_1794_, lean_object* v_x_1795_, lean_object* v_x_1796_){
_start:
{
lean_object* v_res_1797_; 
v_res_1797_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(v_f_1794_, v_x_1795_, v_x_1796_);
lean_dec_ref(v_x_1795_);
return v_res_1797_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1798_; double v___x_1799_; 
v___x_1798_ = lean_unsigned_to_nat(0u);
v___x_1799_ = lean_float_of_nat(v___x_1798_);
return v___x_1799_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg(lean_object* v_cls_1803_, lean_object* v_msg_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_){
_start:
{
lean_object* v_ref_1810_; lean_object* v___x_1811_; lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1856_; 
v_ref_1810_ = lean_ctor_get(v___y_1807_, 5);
v___x_1811_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_Internal_VCGen_selectProg_spec__0_spec__0(v_msg_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_);
v_a_1812_ = lean_ctor_get(v___x_1811_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1811_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1814_ = v___x_1811_;
v_isShared_1815_ = v_isSharedCheck_1856_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v___x_1811_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1856_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1816_; lean_object* v_traceState_1817_; lean_object* v_env_1818_; lean_object* v_nextMacroScope_1819_; lean_object* v_ngen_1820_; lean_object* v_auxDeclNGen_1821_; lean_object* v_cache_1822_; lean_object* v_messages_1823_; lean_object* v_infoState_1824_; lean_object* v_snapshotTasks_1825_; lean_object* v___x_1827_; uint8_t v_isShared_1828_; uint8_t v_isSharedCheck_1855_; 
v___x_1816_ = lean_st_ref_take(v___y_1808_);
v_traceState_1817_ = lean_ctor_get(v___x_1816_, 4);
v_env_1818_ = lean_ctor_get(v___x_1816_, 0);
v_nextMacroScope_1819_ = lean_ctor_get(v___x_1816_, 1);
v_ngen_1820_ = lean_ctor_get(v___x_1816_, 2);
v_auxDeclNGen_1821_ = lean_ctor_get(v___x_1816_, 3);
v_cache_1822_ = lean_ctor_get(v___x_1816_, 5);
v_messages_1823_ = lean_ctor_get(v___x_1816_, 6);
v_infoState_1824_ = lean_ctor_get(v___x_1816_, 7);
v_snapshotTasks_1825_ = lean_ctor_get(v___x_1816_, 8);
v_isSharedCheck_1855_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1827_ = v___x_1816_;
v_isShared_1828_ = v_isSharedCheck_1855_;
goto v_resetjp_1826_;
}
else
{
lean_inc(v_snapshotTasks_1825_);
lean_inc(v_infoState_1824_);
lean_inc(v_messages_1823_);
lean_inc(v_cache_1822_);
lean_inc(v_traceState_1817_);
lean_inc(v_auxDeclNGen_1821_);
lean_inc(v_ngen_1820_);
lean_inc(v_nextMacroScope_1819_);
lean_inc(v_env_1818_);
lean_dec(v___x_1816_);
v___x_1827_ = lean_box(0);
v_isShared_1828_ = v_isSharedCheck_1855_;
goto v_resetjp_1826_;
}
v_resetjp_1826_:
{
uint64_t v_tid_1829_; lean_object* v_traces_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1854_; 
v_tid_1829_ = lean_ctor_get_uint64(v_traceState_1817_, sizeof(void*)*1);
v_traces_1830_ = lean_ctor_get(v_traceState_1817_, 0);
v_isSharedCheck_1854_ = !lean_is_exclusive(v_traceState_1817_);
if (v_isSharedCheck_1854_ == 0)
{
v___x_1832_ = v_traceState_1817_;
v_isShared_1833_ = v_isSharedCheck_1854_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_traces_1830_);
lean_dec(v_traceState_1817_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1854_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v___x_1834_; double v___x_1835_; uint8_t v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1844_; 
v___x_1834_ = lean_box(0);
v___x_1835_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg___closed__0);
v___x_1836_ = 0;
v___x_1837_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg___closed__1));
v___x_1838_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1838_, 0, v_cls_1803_);
lean_ctor_set(v___x_1838_, 1, v___x_1834_);
lean_ctor_set(v___x_1838_, 2, v___x_1837_);
lean_ctor_set_float(v___x_1838_, sizeof(void*)*3, v___x_1835_);
lean_ctor_set_float(v___x_1838_, sizeof(void*)*3 + 8, v___x_1835_);
lean_ctor_set_uint8(v___x_1838_, sizeof(void*)*3 + 16, v___x_1836_);
v___x_1839_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg___closed__2));
v___x_1840_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1838_);
lean_ctor_set(v___x_1840_, 1, v_a_1812_);
lean_ctor_set(v___x_1840_, 2, v___x_1839_);
lean_inc(v_ref_1810_);
v___x_1841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1841_, 0, v_ref_1810_);
lean_ctor_set(v___x_1841_, 1, v___x_1840_);
v___x_1842_ = l_Lean_PersistentArray_push___redArg(v_traces_1830_, v___x_1841_);
if (v_isShared_1833_ == 0)
{
lean_ctor_set(v___x_1832_, 0, v___x_1842_);
v___x_1844_ = v___x_1832_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v___x_1842_);
lean_ctor_set_uint64(v_reuseFailAlloc_1853_, sizeof(void*)*1, v_tid_1829_);
v___x_1844_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
lean_object* v___x_1846_; 
if (v_isShared_1828_ == 0)
{
lean_ctor_set(v___x_1827_, 4, v___x_1844_);
v___x_1846_ = v___x_1827_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_env_1818_);
lean_ctor_set(v_reuseFailAlloc_1852_, 1, v_nextMacroScope_1819_);
lean_ctor_set(v_reuseFailAlloc_1852_, 2, v_ngen_1820_);
lean_ctor_set(v_reuseFailAlloc_1852_, 3, v_auxDeclNGen_1821_);
lean_ctor_set(v_reuseFailAlloc_1852_, 4, v___x_1844_);
lean_ctor_set(v_reuseFailAlloc_1852_, 5, v_cache_1822_);
lean_ctor_set(v_reuseFailAlloc_1852_, 6, v_messages_1823_);
lean_ctor_set(v_reuseFailAlloc_1852_, 7, v_infoState_1824_);
lean_ctor_set(v_reuseFailAlloc_1852_, 8, v_snapshotTasks_1825_);
v___x_1846_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1850_; 
v___x_1847_ = lean_st_ref_set(v___y_1808_, v___x_1846_);
v___x_1848_ = lean_box(0);
if (v_isShared_1815_ == 0)
{
lean_ctor_set(v___x_1814_, 0, v___x_1848_);
v___x_1850_ = v___x_1814_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v___x_1848_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg___boxed(lean_object* v_cls_1857_, lean_object* v_msg_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_){
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg(v_cls_1857_, v_msg_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_);
lean_dec(v___y_1862_);
lean_dec_ref(v___y_1861_);
lean_dec(v___y_1860_);
lean_dec_ref(v___y_1859_);
return v_res_1864_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__7(void){
_start:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; 
v___x_1880_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4));
v___x_1881_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__6));
v___x_1882_ = l_Lean_Name_append(v___x_1881_, v___x_1880_);
return v___x_1882_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__9(void){
_start:
{
lean_object* v___x_1884_; lean_object* v___x_1885_; 
v___x_1884_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__8));
v___x_1885_ = l_Lean_stringToMessageData(v___x_1884_);
return v___x_1885_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__11(void){
_start:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1887_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__10));
v___x_1888_ = l_Lean_stringToMessageData(v___x_1887_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7(lean_object* v_as_1889_, size_t v_sz_1890_, size_t v_i_1891_, lean_object* v_b_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_){
_start:
{
lean_object* v_a_1901_; uint8_t v___x_1905_; 
v___x_1905_ = lean_usize_dec_lt(v_i_1891_, v_sz_1890_);
if (v___x_1905_ == 0)
{
lean_object* v___x_1906_; 
v___x_1906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1906_, 0, v_b_1892_);
return v___x_1906_;
}
else
{
lean_object* v_a_1907_; lean_object* v_origin_1908_; 
v_a_1907_ = lean_array_uget_borrowed(v_as_1889_, v_i_1891_);
v_origin_1908_ = lean_ctor_get(v_a_1907_, 4);
if (lean_obj_tag(v_origin_1908_) == 0)
{
lean_object* v_priority_1909_; lean_object* v_declName_1910_; lean_object* v___x_1911_; 
v_priority_1909_ = lean_ctor_get(v_a_1907_, 3);
v_declName_1910_ = lean_ctor_get(v_origin_1908_, 0);
lean_inc(v_priority_1909_);
lean_inc(v_declName_1910_);
v___x_1911_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f(v_declName_1910_, v_priority_1909_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
lean_inc(v_a_1912_);
lean_dec_ref_known(v___x_1911_, 1);
if (lean_obj_tag(v_a_1912_) == 1)
{
lean_object* v_val_1913_; lean_object* v_pattern_1914_; lean_object* v___x_1915_; 
v_val_1913_ = lean_ctor_get(v_a_1912_, 0);
lean_inc(v_val_1913_);
lean_dec_ref_known(v_a_1912_, 1);
v_pattern_1914_ = lean_ctor_get(v_val_1913_, 0);
lean_inc_ref(v_pattern_1914_);
v___x_1915_ = l_Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0(v_b_1892_, v_pattern_1914_, v_val_1913_);
v_a_1901_ = v___x_1915_;
goto v___jp_1900_;
}
else
{
lean_dec(v_a_1912_);
v_a_1901_ = v_b_1892_;
goto v___jp_1900_;
}
}
else
{
lean_object* v_a_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1949_; 
v_a_1916_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1918_ = v___x_1911_;
v_isShared_1919_ = v_isSharedCheck_1949_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_a_1916_);
lean_dec(v___x_1911_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1949_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
uint8_t v___y_1921_; uint8_t v___x_1947_; 
v___x_1947_ = l_Lean_Exception_isInterrupt(v_a_1916_);
if (v___x_1947_ == 0)
{
uint8_t v___x_1948_; 
lean_inc(v_a_1916_);
v___x_1948_ = l_Lean_Exception_isRuntime(v_a_1916_);
v___y_1921_ = v___x_1948_;
goto v___jp_1920_;
}
else
{
v___y_1921_ = v___x_1947_;
goto v___jp_1920_;
}
v___jp_1920_:
{
if (v___y_1921_ == 0)
{
lean_object* v_options_1922_; uint8_t v_hasTrace_1923_; 
lean_del_object(v___x_1918_);
v_options_1922_ = lean_ctor_get(v___y_1897_, 2);
v_hasTrace_1923_ = lean_ctor_get_uint8(v_options_1922_, sizeof(void*)*1);
if (v_hasTrace_1923_ == 0)
{
lean_dec(v_a_1916_);
v_a_1901_ = v_b_1892_;
goto v___jp_1900_;
}
else
{
lean_object* v_inheritedTraceOptions_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; uint8_t v___x_1927_; 
v_inheritedTraceOptions_1924_ = lean_ctor_get(v___y_1897_, 13);
v___x_1925_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4));
v___x_1926_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__7);
v___x_1927_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1924_, v_options_1922_, v___x_1926_);
if (v___x_1927_ == 0)
{
lean_dec(v_a_1916_);
v_a_1901_ = v_b_1892_;
goto v___jp_1900_;
}
else
{
lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1928_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__9);
lean_inc(v_declName_1910_);
v___x_1929_ = l_Lean_MessageData_ofName(v_declName_1910_);
v___x_1930_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1928_);
lean_ctor_set(v___x_1930_, 1, v___x_1929_);
v___x_1931_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__11);
v___x_1932_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1932_, 0, v___x_1930_);
lean_ctor_set(v___x_1932_, 1, v___x_1931_);
v___x_1933_ = l_Lean_Exception_toMessageData(v_a_1916_);
v___x_1934_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1934_, 0, v___x_1932_);
lean_ctor_set(v___x_1934_, 1, v___x_1933_);
v___x_1935_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg(v___x_1925_, v___x_1934_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_);
if (lean_obj_tag(v___x_1935_) == 0)
{
lean_dec_ref_known(v___x_1935_, 1);
v_a_1901_ = v_b_1892_;
goto v___jp_1900_;
}
else
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1943_; 
lean_dec_ref(v_b_1892_);
v_a_1936_ = lean_ctor_get(v___x_1935_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1938_ = v___x_1935_;
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1935_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1939_ == 0)
{
v___x_1941_ = v___x_1938_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_a_1936_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
}
}
}
}
}
}
else
{
lean_object* v___x_1945_; 
lean_dec_ref(v_b_1892_);
if (v_isShared_1919_ == 0)
{
v___x_1945_ = v___x_1918_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v_a_1916_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
}
}
else
{
v_a_1901_ = v_b_1892_;
goto v___jp_1900_;
}
}
v___jp_1900_:
{
size_t v___x_1902_; size_t v___x_1903_; 
v___x_1902_ = ((size_t)1ULL);
v___x_1903_ = lean_usize_add(v_i_1891_, v___x_1902_);
v_i_1891_ = v___x_1903_;
v_b_1892_ = v_a_1901_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___boxed(lean_object* v_as_1950_, lean_object* v_sz_1951_, lean_object* v_i_1952_, lean_object* v_b_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_){
_start:
{
size_t v_sz_boxed_1961_; size_t v_i_boxed_1962_; lean_object* v_res_1963_; 
v_sz_boxed_1961_ = lean_unbox_usize(v_sz_1951_);
lean_dec(v_sz_1951_);
v_i_boxed_1962_ = lean_unbox_usize(v_i_1952_);
lean_dec(v_i_1952_);
v_res_1963_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7(v_as_1950_, v_sz_boxed_1961_, v_i_boxed_1962_, v_b_1953_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
lean_dec(v___y_1957_);
lean_dec_ref(v___y_1956_);
lean_dec(v___y_1955_);
lean_dec_ref(v___y_1954_);
lean_dec_ref(v_as_1950_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19___redArg___lam__0(lean_object* v_f_1964_, lean_object* v_x1_1965_, lean_object* v_x2_1966_, lean_object* v_x3_1967_){
_start:
{
lean_object* v___x_1968_; 
v___x_1968_ = lean_apply_3(v_f_1964_, v_x1_1965_, v_x2_1966_, v_x3_1967_);
return v___x_1968_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19___redArg(lean_object* v_map_1969_, lean_object* v_f_1970_, lean_object* v_init_1971_){
_start:
{
lean_object* v___f_1972_; lean_object* v___x_1973_; 
v___f_1972_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1972_, 0, v_f_1970_);
v___x_1973_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(v___f_1972_, v_map_1969_, v_init_1971_);
return v___x_1973_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19___redArg___boxed(lean_object* v_map_1974_, lean_object* v_f_1975_, lean_object* v_init_1976_){
_start:
{
lean_object* v_res_1977_; 
v_res_1977_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19___redArg(v_map_1974_, v_f_1975_, v_init_1976_);
lean_dec_ref(v_map_1974_);
return v_res_1977_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13___redArg___lam__0(lean_object* v_ps_1978_, lean_object* v_k_1979_, lean_object* v_v_1980_){
_start:
{
lean_object* v___x_1981_; lean_object* v___x_1982_; 
v___x_1981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1981_, 0, v_k_1979_);
lean_ctor_set(v___x_1981_, 1, v_v_1980_);
v___x_1982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1982_, 0, v___x_1981_);
lean_ctor_set(v___x_1982_, 1, v_ps_1978_);
return v___x_1982_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13___redArg(lean_object* v_m_1984_){
_start:
{
lean_object* v___f_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; 
v___f_1985_ = ((lean_object*)(l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13___redArg___closed__0));
v___x_1986_ = lean_box(0);
v___x_1987_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19___redArg(v_m_1984_, v___f_1985_, v___x_1986_);
return v___x_1987_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13___redArg___boxed(lean_object* v_m_1988_){
_start:
{
lean_object* v_res_1989_; 
v_res_1989_ = l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13___redArg(v_m_1988_);
lean_dec_ref(v_m_1988_);
return v_res_1989_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__14(lean_object* v_a_1990_, lean_object* v_a_1991_){
_start:
{
if (lean_obj_tag(v_a_1990_) == 0)
{
lean_object* v___x_1992_; 
v___x_1992_ = l_List_reverse___redArg(v_a_1991_);
return v___x_1992_;
}
else
{
lean_object* v_head_1993_; lean_object* v_tail_1994_; lean_object* v___x_1996_; uint8_t v_isShared_1997_; uint8_t v_isSharedCheck_2003_; 
v_head_1993_ = lean_ctor_get(v_a_1990_, 0);
v_tail_1994_ = lean_ctor_get(v_a_1990_, 1);
v_isSharedCheck_2003_ = !lean_is_exclusive(v_a_1990_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1996_ = v_a_1990_;
v_isShared_1997_ = v_isSharedCheck_2003_;
goto v_resetjp_1995_;
}
else
{
lean_inc(v_tail_1994_);
lean_inc(v_head_1993_);
lean_dec(v_a_1990_);
v___x_1996_ = lean_box(0);
v_isShared_1997_ = v_isSharedCheck_2003_;
goto v_resetjp_1995_;
}
v_resetjp_1995_:
{
lean_object* v_fst_1998_; lean_object* v___x_2000_; 
v_fst_1998_ = lean_ctor_get(v_head_1993_, 0);
lean_inc(v_fst_1998_);
lean_dec(v_head_1993_);
if (v_isShared_1997_ == 0)
{
lean_ctor_set(v___x_1996_, 1, v_a_1991_);
lean_ctor_set(v___x_1996_, 0, v_fst_1998_);
v___x_2000_ = v___x_1996_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v_fst_1998_);
lean_ctor_set(v_reuseFailAlloc_2002_, 1, v_a_1991_);
v___x_2000_ = v_reuseFailAlloc_2002_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
v_a_1990_ = v_tail_1994_;
v_a_1991_ = v___x_2000_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8(lean_object* v_s_2004_){
_start:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; 
v___x_2005_ = l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13___redArg(v_s_2004_);
v___x_2006_ = lean_box(0);
v___x_2007_ = l_List_mapTR_loop___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__14(v___x_2005_, v___x_2006_);
return v___x_2007_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8___boxed(lean_object* v_s_2008_){
_start:
{
lean_object* v_res_2009_; 
v_res_2009_ = l_Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8(v_s_2008_);
lean_dec_ref(v_s_2008_);
return v_res_2009_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__1(void){
_start:
{
lean_object* v___x_2011_; lean_object* v___x_2012_; 
v___x_2011_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__0));
v___x_2012_ = l_Lean_stringToMessageData(v___x_2011_);
return v___x_2012_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__3(void){
_start:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2014_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__2));
v___x_2015_ = l_Lean_stringToMessageData(v___x_2014_);
return v___x_2015_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2(lean_object* v_a_2016_, lean_object* v_as_2017_, size_t v_sz_2018_, size_t v_i_2019_, lean_object* v_b_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_){
_start:
{
lean_object* v_snd_2029_; uint8_t v___x_2033_; 
v___x_2033_ = lean_usize_dec_lt(v_i_2019_, v_sz_2018_);
if (v___x_2033_ == 0)
{
lean_object* v___x_2034_; 
lean_dec(v_a_2016_);
v___x_2034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2034_, 0, v_b_2020_);
return v___x_2034_;
}
else
{
lean_object* v_a_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; 
v_a_2035_ = lean_array_uget_borrowed(v_as_2017_, v_i_2019_);
v___x_2036_ = lean_unsigned_to_nat(1000u);
lean_inc(v_a_2035_);
v___x_2037_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecTheoremNewFromSimpDecl_x3f(v_a_2035_, v___x_2036_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_object* v_a_2038_; 
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
lean_inc(v_a_2038_);
lean_dec_ref_known(v___x_2037_, 1);
if (lean_obj_tag(v_a_2038_) == 1)
{
lean_object* v_val_2039_; lean_object* v_pattern_2040_; lean_object* v___x_2041_; 
v_val_2039_ = lean_ctor_get(v_a_2038_, 0);
lean_inc(v_val_2039_);
lean_dec_ref_known(v_a_2038_, 1);
v_pattern_2040_ = lean_ctor_get(v_val_2039_, 0);
lean_inc_ref(v_pattern_2040_);
v___x_2041_ = l_Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0(v_b_2020_, v_pattern_2040_, v_val_2039_);
v_snd_2029_ = v___x_2041_;
goto v___jp_2028_;
}
else
{
lean_dec(v_a_2038_);
v_snd_2029_ = v_b_2020_;
goto v___jp_2028_;
}
}
else
{
lean_object* v_a_2042_; lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2079_; 
v_a_2042_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2044_ = v___x_2037_;
v_isShared_2045_ = v_isSharedCheck_2079_;
goto v_resetjp_2043_;
}
else
{
lean_inc(v_a_2042_);
lean_dec(v___x_2037_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2079_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
uint8_t v___y_2047_; uint8_t v___x_2077_; 
v___x_2077_ = l_Lean_Exception_isInterrupt(v_a_2042_);
if (v___x_2077_ == 0)
{
uint8_t v___x_2078_; 
lean_inc(v_a_2042_);
v___x_2078_ = l_Lean_Exception_isRuntime(v_a_2042_);
v___y_2047_ = v___x_2078_;
goto v___jp_2046_;
}
else
{
v___y_2047_ = v___x_2077_;
goto v___jp_2046_;
}
v___jp_2046_:
{
if (v___y_2047_ == 0)
{
lean_object* v_options_2048_; uint8_t v_hasTrace_2049_; 
lean_del_object(v___x_2044_);
v_options_2048_ = lean_ctor_get(v___y_2025_, 2);
v_hasTrace_2049_ = lean_ctor_get_uint8(v_options_2048_, sizeof(void*)*1);
if (v_hasTrace_2049_ == 0)
{
lean_dec(v_a_2042_);
v_snd_2029_ = v_b_2020_;
goto v___jp_2028_;
}
else
{
lean_object* v_inheritedTraceOptions_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; uint8_t v___x_2053_; 
v_inheritedTraceOptions_2050_ = lean_ctor_get(v___y_2025_, 13);
v___x_2051_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4));
v___x_2052_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__7);
v___x_2053_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2050_, v_options_2048_, v___x_2052_);
if (v___x_2053_ == 0)
{
lean_dec(v_a_2042_);
v_snd_2029_ = v_b_2020_;
goto v___jp_2028_;
}
else
{
lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; 
v___x_2054_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__1);
lean_inc(v_a_2016_);
v___x_2055_ = l_Lean_MessageData_ofName(v_a_2016_);
v___x_2056_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2056_, 0, v___x_2054_);
lean_ctor_set(v___x_2056_, 1, v___x_2055_);
v___x_2057_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___closed__3);
v___x_2058_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2058_, 0, v___x_2056_);
lean_ctor_set(v___x_2058_, 1, v___x_2057_);
lean_inc(v_a_2035_);
v___x_2059_ = l_Lean_MessageData_ofName(v_a_2035_);
v___x_2060_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2058_);
lean_ctor_set(v___x_2060_, 1, v___x_2059_);
v___x_2061_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__11);
v___x_2062_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2060_);
lean_ctor_set(v___x_2062_, 1, v___x_2061_);
v___x_2063_ = l_Lean_Exception_toMessageData(v_a_2042_);
v___x_2064_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2062_);
lean_ctor_set(v___x_2064_, 1, v___x_2063_);
v___x_2065_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg(v___x_2051_, v___x_2064_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_);
if (lean_obj_tag(v___x_2065_) == 0)
{
lean_dec_ref_known(v___x_2065_, 1);
v_snd_2029_ = v_b_2020_;
goto v___jp_2028_;
}
else
{
lean_object* v_a_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2073_; 
lean_dec_ref(v_b_2020_);
lean_dec(v_a_2016_);
v_a_2066_ = lean_ctor_get(v___x_2065_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2065_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2068_ = v___x_2065_;
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_a_2066_);
lean_dec(v___x_2065_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2071_; 
if (v_isShared_2069_ == 0)
{
v___x_2071_ = v___x_2068_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_a_2066_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
return v___x_2071_;
}
}
}
}
}
}
else
{
lean_object* v___x_2075_; 
lean_dec_ref(v_b_2020_);
lean_dec(v_a_2016_);
if (v_isShared_2045_ == 0)
{
v___x_2075_ = v___x_2044_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_a_2042_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
return v___x_2075_;
}
}
}
}
}
}
v___jp_2028_:
{
size_t v___x_2030_; size_t v___x_2031_; 
v___x_2030_ = ((size_t)1ULL);
v___x_2031_ = lean_usize_add(v_i_2019_, v___x_2030_);
v_i_2019_ = v___x_2031_;
v_b_2020_ = v_snd_2029_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2___boxed(lean_object* v_a_2080_, lean_object* v_as_2081_, lean_object* v_sz_2082_, lean_object* v_i_2083_, lean_object* v_b_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_){
_start:
{
size_t v_sz_boxed_2092_; size_t v_i_boxed_2093_; lean_object* v_res_2094_; 
v_sz_boxed_2092_ = lean_unbox_usize(v_sz_2082_);
lean_dec(v_sz_2082_);
v_i_boxed_2093_ = lean_unbox_usize(v_i_2083_);
lean_dec(v_i_2083_);
v_res_2094_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2(v_a_2080_, v_as_2081_, v_sz_boxed_2092_, v_i_boxed_2093_, v_b_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_);
lean_dec(v___y_2090_);
lean_dec_ref(v___y_2089_);
lean_dec(v___y_2088_);
lean_dec_ref(v___y_2087_);
lean_dec(v___y_2086_);
lean_dec_ref(v___y_2085_);
lean_dec_ref(v_as_2081_);
return v_res_2094_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4_spec__7___redArg(lean_object* v_keys_2095_, lean_object* v_vals_2096_, lean_object* v_i_2097_, lean_object* v_k_2098_){
_start:
{
lean_object* v___x_2099_; uint8_t v___x_2100_; 
v___x_2099_ = lean_array_get_size(v_keys_2095_);
v___x_2100_ = lean_nat_dec_lt(v_i_2097_, v___x_2099_);
if (v___x_2100_ == 0)
{
lean_object* v___x_2101_; 
lean_dec(v_i_2097_);
v___x_2101_ = lean_box(0);
return v___x_2101_;
}
else
{
lean_object* v_k_x27_2102_; uint8_t v___x_2103_; 
v_k_x27_2102_ = lean_array_fget_borrowed(v_keys_2095_, v_i_2097_);
v___x_2103_ = lean_name_eq(v_k_2098_, v_k_x27_2102_);
if (v___x_2103_ == 0)
{
lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2104_ = lean_unsigned_to_nat(1u);
v___x_2105_ = lean_nat_add(v_i_2097_, v___x_2104_);
lean_dec(v_i_2097_);
v_i_2097_ = v___x_2105_;
goto _start;
}
else
{
lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2107_ = lean_array_fget_borrowed(v_vals_2096_, v_i_2097_);
lean_dec(v_i_2097_);
lean_inc(v___x_2107_);
v___x_2108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2107_);
return v___x_2108_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4_spec__7___redArg___boxed(lean_object* v_keys_2109_, lean_object* v_vals_2110_, lean_object* v_i_2111_, lean_object* v_k_2112_){
_start:
{
lean_object* v_res_2113_; 
v_res_2113_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4_spec__7___redArg(v_keys_2109_, v_vals_2110_, v_i_2111_, v_k_2112_);
lean_dec(v_k_2112_);
lean_dec_ref(v_vals_2110_);
lean_dec_ref(v_keys_2109_);
return v_res_2113_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4___redArg(lean_object* v_x_2114_, size_t v_x_2115_, lean_object* v_x_2116_){
_start:
{
if (lean_obj_tag(v_x_2114_) == 0)
{
lean_object* v_es_2117_; lean_object* v___x_2118_; size_t v___x_2119_; size_t v___x_2120_; size_t v___x_2121_; lean_object* v_j_2122_; lean_object* v___x_2123_; 
v_es_2117_ = lean_ctor_get(v_x_2114_, 0);
v___x_2118_ = lean_box(2);
v___x_2119_ = ((size_t)5ULL);
v___x_2120_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1);
v___x_2121_ = lean_usize_land(v_x_2115_, v___x_2120_);
v_j_2122_ = lean_usize_to_nat(v___x_2121_);
v___x_2123_ = lean_array_get_borrowed(v___x_2118_, v_es_2117_, v_j_2122_);
lean_dec(v_j_2122_);
switch(lean_obj_tag(v___x_2123_))
{
case 0:
{
lean_object* v_key_2124_; lean_object* v_val_2125_; uint8_t v___x_2126_; 
v_key_2124_ = lean_ctor_get(v___x_2123_, 0);
v_val_2125_ = lean_ctor_get(v___x_2123_, 1);
v___x_2126_ = lean_name_eq(v_x_2116_, v_key_2124_);
if (v___x_2126_ == 0)
{
lean_object* v___x_2127_; 
v___x_2127_ = lean_box(0);
return v___x_2127_;
}
else
{
lean_object* v___x_2128_; 
lean_inc(v_val_2125_);
v___x_2128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2128_, 0, v_val_2125_);
return v___x_2128_;
}
}
case 1:
{
lean_object* v_node_2129_; size_t v___x_2130_; 
v_node_2129_ = lean_ctor_get(v___x_2123_, 0);
v___x_2130_ = lean_usize_shift_right(v_x_2115_, v___x_2119_);
v_x_2114_ = v_node_2129_;
v_x_2115_ = v___x_2130_;
goto _start;
}
default: 
{
lean_object* v___x_2132_; 
v___x_2132_ = lean_box(0);
return v___x_2132_;
}
}
}
else
{
lean_object* v_ks_2133_; lean_object* v_vs_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
v_ks_2133_ = lean_ctor_get(v_x_2114_, 0);
v_vs_2134_ = lean_ctor_get(v_x_2114_, 1);
v___x_2135_ = lean_unsigned_to_nat(0u);
v___x_2136_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4_spec__7___redArg(v_ks_2133_, v_vs_2134_, v___x_2135_, v_x_2116_);
return v___x_2136_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4___redArg___boxed(lean_object* v_x_2137_, lean_object* v_x_2138_, lean_object* v_x_2139_){
_start:
{
size_t v_x_27033__boxed_2140_; lean_object* v_res_2141_; 
v_x_27033__boxed_2140_ = lean_unbox_usize(v_x_2138_);
lean_dec(v_x_2138_);
v_res_2141_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4___redArg(v_x_2137_, v_x_27033__boxed_2140_, v_x_2139_);
lean_dec(v_x_2139_);
lean_dec_ref(v_x_2137_);
return v_res_2141_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3___redArg(lean_object* v_x_2142_, lean_object* v_x_2143_){
_start:
{
uint64_t v___y_2145_; 
if (lean_obj_tag(v_x_2143_) == 0)
{
uint64_t v___x_2148_; 
v___x_2148_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0);
v___y_2145_ = v___x_2148_;
goto v___jp_2144_;
}
else
{
uint64_t v_hash_2149_; 
v_hash_2149_ = lean_ctor_get_uint64(v_x_2143_, sizeof(void*)*2);
v___y_2145_ = v_hash_2149_;
goto v___jp_2144_;
}
v___jp_2144_:
{
size_t v___x_2146_; lean_object* v___x_2147_; 
v___x_2146_ = lean_uint64_to_usize(v___y_2145_);
v___x_2147_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4___redArg(v_x_2142_, v___x_2146_, v_x_2143_);
return v___x_2147_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3___redArg___boxed(lean_object* v_x_2150_, lean_object* v_x_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3___redArg(v_x_2150_, v_x_2151_);
lean_dec(v_x_2151_);
lean_dec_ref(v_x_2150_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__9___redArg(lean_object* v_simpThms_2153_, lean_object* v_as_x27_2154_, lean_object* v_b_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_){
_start:
{
if (lean_obj_tag(v_as_x27_2154_) == 0)
{
lean_object* v___x_2163_; 
v___x_2163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2163_, 0, v_b_2155_);
return v___x_2163_;
}
else
{
lean_object* v_head_2164_; lean_object* v_tail_2165_; lean_object* v_eqThms_2167_; lean_object* v___y_2168_; lean_object* v___y_2169_; lean_object* v___y_2170_; lean_object* v___y_2171_; lean_object* v___y_2172_; lean_object* v___y_2173_; lean_object* v_toUnfoldThms_2179_; lean_object* v___x_2180_; 
v_head_2164_ = lean_ctor_get(v_as_x27_2154_, 0);
v_tail_2165_ = lean_ctor_get(v_as_x27_2154_, 1);
v_toUnfoldThms_2179_ = lean_ctor_get(v_simpThms_2153_, 5);
v___x_2180_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3___redArg(v_toUnfoldThms_2179_, v_head_2164_);
if (lean_obj_tag(v___x_2180_) == 0)
{
lean_object* v___x_2181_; 
lean_inc(v_head_2164_);
v___x_2181_ = l_Lean_Meta_getEqnsFor_x3f(v_head_2164_, v___y_2158_, v___y_2159_, v___y_2160_, v___y_2161_);
if (lean_obj_tag(v___x_2181_) == 0)
{
lean_object* v_a_2182_; 
v_a_2182_ = lean_ctor_get(v___x_2181_, 0);
lean_inc(v_a_2182_);
lean_dec_ref_known(v___x_2181_, 1);
if (lean_obj_tag(v_a_2182_) == 1)
{
lean_object* v_val_2183_; 
v_val_2183_ = lean_ctor_get(v_a_2182_, 0);
lean_inc(v_val_2183_);
lean_dec_ref_known(v_a_2182_, 1);
v_eqThms_2167_ = v_val_2183_;
v___y_2168_ = v___y_2156_;
v___y_2169_ = v___y_2157_;
v___y_2170_ = v___y_2158_;
v___y_2171_ = v___y_2159_;
v___y_2172_ = v___y_2160_;
v___y_2173_ = v___y_2161_;
goto v___jp_2166_;
}
else
{
lean_dec(v_a_2182_);
v_as_x27_2154_ = v_tail_2165_;
goto _start;
}
}
else
{
lean_object* v_a_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2192_; 
lean_dec_ref(v_b_2155_);
v_a_2185_ = lean_ctor_get(v___x_2181_, 0);
v_isSharedCheck_2192_ = !lean_is_exclusive(v___x_2181_);
if (v_isSharedCheck_2192_ == 0)
{
v___x_2187_ = v___x_2181_;
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_a_2185_);
lean_dec(v___x_2181_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
lean_object* v___x_2190_; 
if (v_isShared_2188_ == 0)
{
v___x_2190_ = v___x_2187_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v_a_2185_);
v___x_2190_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
return v___x_2190_;
}
}
}
}
else
{
lean_object* v_val_2193_; 
v_val_2193_ = lean_ctor_get(v___x_2180_, 0);
lean_inc(v_val_2193_);
lean_dec_ref_known(v___x_2180_, 1);
v_eqThms_2167_ = v_val_2193_;
v___y_2168_ = v___y_2156_;
v___y_2169_ = v___y_2157_;
v___y_2170_ = v___y_2158_;
v___y_2171_ = v___y_2159_;
v___y_2172_ = v___y_2160_;
v___y_2173_ = v___y_2161_;
goto v___jp_2166_;
}
v___jp_2166_:
{
size_t v_sz_2174_; size_t v___x_2175_; lean_object* v___x_2176_; 
v_sz_2174_ = lean_array_size(v_eqThms_2167_);
v___x_2175_ = ((size_t)0ULL);
lean_inc(v_head_2164_);
v___x_2176_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__2(v_head_2164_, v_eqThms_2167_, v_sz_2174_, v___x_2175_, v_b_2155_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_);
lean_dec_ref(v_eqThms_2167_);
if (lean_obj_tag(v___x_2176_) == 0)
{
lean_object* v_a_2177_; 
v_a_2177_ = lean_ctor_get(v___x_2176_, 0);
lean_inc(v_a_2177_);
lean_dec_ref_known(v___x_2176_, 1);
v_as_x27_2154_ = v_tail_2165_;
v_b_2155_ = v_a_2177_;
goto _start;
}
else
{
return v___x_2176_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__9___redArg___boxed(lean_object* v_simpThms_2194_, lean_object* v_as_x27_2195_, lean_object* v_b_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
lean_object* v_res_2204_; 
v_res_2204_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__9___redArg(v_simpThms_2194_, v_as_x27_2195_, v_b_2196_, v___y_2197_, v___y_2198_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_);
lean_dec(v___y_2202_);
lean_dec_ref(v___y_2201_);
lean_dec(v___y_2200_);
lean_dec_ref(v___y_2199_);
lean_dec(v___y_2198_);
lean_dec_ref(v___y_2197_);
lean_dec(v_as_x27_2195_);
lean_dec_ref(v_simpThms_2194_);
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase(lean_object* v_database_2214_, lean_object* v_simpThms_2215_, lean_object* v_a_2216_, lean_object* v_a_2217_, lean_object* v_a_2218_, lean_object* v_a_2219_, lean_object* v_a_2220_, lean_object* v_a_2221_){
_start:
{
lean_object* v_specs_2223_; lean_object* v_erased_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2283_; 
v_specs_2223_ = lean_ctor_get(v_database_2214_, 0);
v_erased_2224_ = lean_ctor_get(v_database_2214_, 1);
v_isSharedCheck_2283_ = !lean_is_exclusive(v_database_2214_);
if (v_isSharedCheck_2283_ == 0)
{
v___x_2226_ = v_database_2214_;
v_isShared_2227_ = v_isSharedCheck_2283_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_erased_2224_);
lean_inc(v_specs_2223_);
lean_dec(v_database_2214_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2283_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___f_2228_; lean_object* v_specs_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; size_t v_sz_2232_; size_t v___x_2233_; lean_object* v___x_2234_; 
v___f_2228_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__1));
v_specs_2229_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__0, &l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__0_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default___closed__0);
v___x_2230_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__2));
v___x_2231_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(v___f_2228_, v_specs_2223_, v___x_2230_);
lean_dec_ref(v_specs_2223_);
v_sz_2232_ = lean_array_size(v___x_2231_);
v___x_2233_ = ((size_t)0ULL);
v___x_2234_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__6___redArg(v___x_2231_, v_sz_2232_, v___x_2233_, v_specs_2229_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_);
lean_dec(v___x_2231_);
if (lean_obj_tag(v___x_2234_) == 0)
{
lean_object* v_a_2235_; lean_object* v_post_2236_; lean_object* v_toUnfold_2237_; lean_object* v_erased_2238_; lean_object* v___f_2239_; lean_object* v___x_2240_; size_t v_sz_2241_; lean_object* v___x_2242_; 
v_a_2235_ = lean_ctor_get(v___x_2234_, 0);
lean_inc(v_a_2235_);
lean_dec_ref_known(v___x_2234_, 1);
v_post_2236_ = lean_ctor_get(v_simpThms_2215_, 1);
v_toUnfold_2237_ = lean_ctor_get(v_simpThms_2215_, 3);
v_erased_2238_ = lean_ctor_get(v_simpThms_2215_, 4);
v___f_2239_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__4));
v___x_2240_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(v___f_2239_, v_post_2236_, v___x_2230_);
v_sz_2241_ = lean_array_size(v___x_2240_);
v___x_2242_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7(v___x_2240_, v_sz_2241_, v___x_2233_, v_a_2235_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_);
lean_dec(v___x_2240_);
if (lean_obj_tag(v___x_2242_) == 0)
{
lean_object* v_a_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; 
v_a_2243_ = lean_ctor_get(v___x_2242_, 0);
lean_inc(v_a_2243_);
lean_dec_ref_known(v___x_2242_, 1);
v___x_2244_ = l_Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8(v_toUnfold_2237_);
v___x_2245_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__9___redArg(v_simpThms_2215_, v___x_2244_, v_a_2243_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_);
lean_dec(v___x_2244_);
if (lean_obj_tag(v___x_2245_) == 0)
{
lean_object* v_a_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2258_; 
v_a_2246_ = lean_ctor_get(v___x_2245_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_2245_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2248_ = v___x_2245_;
v_isShared_2249_ = v_isSharedCheck_2258_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_a_2246_);
lean_dec(v___x_2245_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2258_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v___f_2250_; lean_object* v_erased_2251_; lean_object* v___x_2253_; 
v___f_2250_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___closed__5));
v_erased_2251_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(v___f_2250_, v_erased_2238_, v_erased_2224_);
if (v_isShared_2227_ == 0)
{
lean_ctor_set(v___x_2226_, 1, v_erased_2251_);
lean_ctor_set(v___x_2226_, 0, v_a_2246_);
v___x_2253_ = v___x_2226_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v_a_2246_);
lean_ctor_set(v_reuseFailAlloc_2257_, 1, v_erased_2251_);
v___x_2253_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
lean_object* v___x_2255_; 
if (v_isShared_2249_ == 0)
{
lean_ctor_set(v___x_2248_, 0, v___x_2253_);
v___x_2255_ = v___x_2248_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v___x_2253_);
v___x_2255_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
return v___x_2255_;
}
}
}
}
else
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2266_; 
lean_del_object(v___x_2226_);
lean_dec_ref(v_erased_2224_);
v_a_2259_ = lean_ctor_get(v___x_2245_, 0);
v_isSharedCheck_2266_ = !lean_is_exclusive(v___x_2245_);
if (v_isSharedCheck_2266_ == 0)
{
v___x_2261_ = v___x_2245_;
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v___x_2245_);
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
else
{
lean_object* v_a_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2274_; 
lean_del_object(v___x_2226_);
lean_dec_ref(v_erased_2224_);
v_a_2267_ = lean_ctor_get(v___x_2242_, 0);
v_isSharedCheck_2274_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2269_ = v___x_2242_;
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_a_2267_);
lean_dec(v___x_2242_);
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
lean_del_object(v___x_2226_);
lean_dec_ref(v_erased_2224_);
v_a_2275_ = lean_ctor_get(v___x_2234_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___x_2234_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2277_ = v___x_2234_;
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_a_2275_);
lean_dec(v___x_2234_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase___boxed(lean_object* v_database_2284_, lean_object* v_simpThms_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_, lean_object* v_a_2291_, lean_object* v_a_2292_){
_start:
{
lean_object* v_res_2293_; 
v_res_2293_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase(v_database_2284_, v_simpThms_2285_, v_a_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_);
lean_dec(v_a_2291_);
lean_dec_ref(v_a_2290_);
lean_dec(v_a_2289_);
lean_dec_ref(v_a_2288_);
lean_dec(v_a_2287_);
lean_dec_ref(v_a_2286_);
lean_dec_ref(v_simpThms_2285_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0(lean_object* v_00_u03b2_2294_, lean_object* v_x_2295_, lean_object* v_x_2296_, lean_object* v_x_2297_){
_start:
{
lean_object* v___x_2298_; 
v___x_2298_ = l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0___redArg(v_x_2295_, v_x_2296_, v_x_2297_);
return v___x_2298_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1(lean_object* v_cls_2299_, lean_object* v_msg_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_){
_start:
{
lean_object* v___x_2308_; 
v___x_2308_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg(v_cls_2299_, v_msg_2300_, v___y_2303_, v___y_2304_, v___y_2305_, v___y_2306_);
return v___x_2308_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___boxed(lean_object* v_cls_2309_, lean_object* v_msg_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_){
_start:
{
lean_object* v_res_2318_; 
v_res_2318_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1(v_cls_2309_, v_msg_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_);
lean_dec(v___y_2316_);
lean_dec_ref(v___y_2315_);
lean_dec(v___y_2314_);
lean_dec_ref(v___y_2313_);
lean_dec(v___y_2312_);
lean_dec_ref(v___y_2311_);
return v_res_2318_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3(lean_object* v_00_u03b2_2319_, lean_object* v_x_2320_, lean_object* v_x_2321_){
_start:
{
lean_object* v___x_2322_; 
v___x_2322_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3___redArg(v_x_2320_, v_x_2321_);
return v___x_2322_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3___boxed(lean_object* v_00_u03b2_2323_, lean_object* v_x_2324_, lean_object* v_x_2325_){
_start:
{
lean_object* v_res_2326_; 
v_res_2326_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3(v_00_u03b2_2323_, v_x_2324_, v_x_2325_);
lean_dec(v_x_2325_);
lean_dec_ref(v_x_2324_);
return v_res_2326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4(lean_object* v_00_u03c3_2327_, lean_object* v_00_u03b1_2328_, lean_object* v_f_2329_, lean_object* v_x_2330_, lean_object* v_x_2331_){
_start:
{
lean_object* v___x_2332_; 
v___x_2332_ = l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4___redArg(v_f_2329_, v_x_2330_, v_x_2331_);
return v___x_2332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4___boxed(lean_object* v_00_u03c3_2333_, lean_object* v_00_u03b1_2334_, lean_object* v_f_2335_, lean_object* v_x_2336_, lean_object* v_x_2337_){
_start:
{
lean_object* v_res_2338_; 
v_res_2338_ = l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4(v_00_u03c3_2333_, v_00_u03b1_2334_, v_f_2335_, v_x_2336_, v_x_2337_);
lean_dec_ref(v_x_2337_);
return v_res_2338_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5___redArg(lean_object* v_map_2339_, lean_object* v_f_2340_, lean_object* v_init_2341_){
_start:
{
lean_object* v___x_2342_; 
v___x_2342_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(v_f_2340_, v_map_2339_, v_init_2341_);
return v___x_2342_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5___redArg___boxed(lean_object* v_map_2343_, lean_object* v_f_2344_, lean_object* v_init_2345_){
_start:
{
lean_object* v_res_2346_; 
v_res_2346_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5___redArg(v_map_2343_, v_f_2344_, v_init_2345_);
lean_dec_ref(v_map_2343_);
return v_res_2346_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5(lean_object* v_00_u03c3_2347_, lean_object* v_00_u03b2_2348_, lean_object* v_map_2349_, lean_object* v_f_2350_, lean_object* v_init_2351_){
_start:
{
lean_object* v___x_2352_; 
v___x_2352_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(v_f_2350_, v_map_2349_, v_init_2351_);
return v___x_2352_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5___boxed(lean_object* v_00_u03c3_2353_, lean_object* v_00_u03b2_2354_, lean_object* v_map_2355_, lean_object* v_f_2356_, lean_object* v_init_2357_){
_start:
{
lean_object* v_res_2358_; 
v_res_2358_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5(v_00_u03c3_2353_, v_00_u03b2_2354_, v_map_2355_, v_f_2356_, v_init_2357_);
lean_dec_ref(v_map_2355_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__6(lean_object* v_as_2359_, size_t v_sz_2360_, size_t v_i_2361_, lean_object* v_b_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_){
_start:
{
lean_object* v___x_2370_; 
v___x_2370_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__6___redArg(v_as_2359_, v_sz_2360_, v_i_2361_, v_b_2362_, v___y_2365_, v___y_2366_, v___y_2367_, v___y_2368_);
return v___x_2370_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__6___boxed(lean_object* v_as_2371_, lean_object* v_sz_2372_, lean_object* v_i_2373_, lean_object* v_b_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_){
_start:
{
size_t v_sz_boxed_2382_; size_t v_i_boxed_2383_; lean_object* v_res_2384_; 
v_sz_boxed_2382_ = lean_unbox_usize(v_sz_2372_);
lean_dec(v_sz_2372_);
v_i_boxed_2383_ = lean_unbox_usize(v_i_2373_);
lean_dec(v_i_2373_);
v_res_2384_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__6(v_as_2371_, v_sz_boxed_2382_, v_i_boxed_2383_, v_b_2374_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_);
lean_dec(v___y_2380_);
lean_dec_ref(v___y_2379_);
lean_dec(v___y_2378_);
lean_dec_ref(v___y_2377_);
lean_dec(v___y_2376_);
lean_dec_ref(v___y_2375_);
lean_dec_ref(v_as_2371_);
return v_res_2384_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__9(lean_object* v_simpThms_2385_, lean_object* v_as_2386_, lean_object* v_as_x27_2387_, lean_object* v_b_2388_, lean_object* v_a_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_){
_start:
{
lean_object* v___x_2397_; 
v___x_2397_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__9___redArg(v_simpThms_2385_, v_as_x27_2387_, v_b_2388_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_);
return v___x_2397_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__9___boxed(lean_object* v_simpThms_2398_, lean_object* v_as_2399_, lean_object* v_as_x27_2400_, lean_object* v_b_2401_, lean_object* v_a_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__9(v_simpThms_2398_, v_as_2399_, v_as_x27_2400_, v_b_2401_, v_a_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
lean_dec(v___y_2408_);
lean_dec_ref(v___y_2407_);
lean_dec(v___y_2406_);
lean_dec_ref(v___y_2405_);
lean_dec(v___y_2404_);
lean_dec_ref(v___y_2403_);
lean_dec(v_as_x27_2400_);
lean_dec(v_as_2399_);
lean_dec_ref(v_simpThms_2398_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__10___redArg(lean_object* v_map_2411_, lean_object* v_f_2412_, lean_object* v_init_2413_){
_start:
{
lean_object* v___x_2414_; 
v___x_2414_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(v_f_2412_, v_map_2411_, v_init_2413_);
return v___x_2414_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__10___redArg___boxed(lean_object* v_map_2415_, lean_object* v_f_2416_, lean_object* v_init_2417_){
_start:
{
lean_object* v_res_2418_; 
v_res_2418_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__10___redArg(v_map_2415_, v_f_2416_, v_init_2417_);
lean_dec_ref(v_map_2415_);
return v_res_2418_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__10(lean_object* v_00_u03c3_2419_, lean_object* v_00_u03b2_2420_, lean_object* v_map_2421_, lean_object* v_f_2422_, lean_object* v_init_2423_){
_start:
{
lean_object* v___x_2424_; 
v___x_2424_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(v_f_2422_, v_map_2421_, v_init_2423_);
return v___x_2424_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__10___boxed(lean_object* v_00_u03c3_2425_, lean_object* v_00_u03b2_2426_, lean_object* v_map_2427_, lean_object* v_f_2428_, lean_object* v_init_2429_){
_start:
{
lean_object* v_res_2430_; 
v_res_2430_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__10(v_00_u03c3_2425_, v_00_u03b2_2426_, v_map_2427_, v_f_2428_, v_init_2429_);
lean_dec_ref(v_map_2427_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0(lean_object* v_00_u03b2_2431_, lean_object* v_x_2432_, size_t v_x_2433_, size_t v_x_2434_, lean_object* v_x_2435_, lean_object* v_x_2436_){
_start:
{
lean_object* v___x_2437_; 
v___x_2437_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg(v_x_2432_, v_x_2433_, v_x_2434_, v_x_2435_, v_x_2436_);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2438_, lean_object* v_x_2439_, lean_object* v_x_2440_, lean_object* v_x_2441_, lean_object* v_x_2442_, lean_object* v_x_2443_){
_start:
{
size_t v_x_27417__boxed_2444_; size_t v_x_27418__boxed_2445_; lean_object* v_res_2446_; 
v_x_27417__boxed_2444_ = lean_unbox_usize(v_x_2440_);
lean_dec(v_x_2440_);
v_x_27418__boxed_2445_ = lean_unbox_usize(v_x_2441_);
lean_dec(v_x_2441_);
v_res_2446_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0(v_00_u03b2_2438_, v_x_2439_, v_x_27417__boxed_2444_, v_x_27418__boxed_2445_, v_x_2442_, v_x_2443_);
return v_res_2446_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4(lean_object* v_00_u03b2_2447_, lean_object* v_x_2448_, size_t v_x_2449_, lean_object* v_x_2450_){
_start:
{
lean_object* v___x_2451_; 
v___x_2451_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4___redArg(v_x_2448_, v_x_2449_, v_x_2450_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4___boxed(lean_object* v_00_u03b2_2452_, lean_object* v_x_2453_, lean_object* v_x_2454_, lean_object* v_x_2455_){
_start:
{
size_t v_x_27434__boxed_2456_; lean_object* v_res_2457_; 
v_x_27434__boxed_2456_ = lean_unbox_usize(v_x_2454_);
lean_dec(v_x_2454_);
v_res_2457_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4(v_00_u03b2_2452_, v_x_2453_, v_x_27434__boxed_2456_, v_x_2455_);
lean_dec(v_x_2455_);
lean_dec_ref(v_x_2453_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__6(lean_object* v_00_u03b1_2458_, lean_object* v_00_u03c3_2459_, lean_object* v_f_2460_, lean_object* v_as_2461_, size_t v_i_2462_, size_t v_stop_2463_, lean_object* v_b_2464_){
_start:
{
lean_object* v___x_2465_; 
v___x_2465_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__6___redArg(v_f_2460_, v_as_2461_, v_i_2462_, v_stop_2463_, v_b_2464_);
return v___x_2465_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__6___boxed(lean_object* v_00_u03b1_2466_, lean_object* v_00_u03c3_2467_, lean_object* v_f_2468_, lean_object* v_as_2469_, lean_object* v_i_2470_, lean_object* v_stop_2471_, lean_object* v_b_2472_){
_start:
{
size_t v_i_boxed_2473_; size_t v_stop_boxed_2474_; lean_object* v_res_2475_; 
v_i_boxed_2473_ = lean_unbox_usize(v_i_2470_);
lean_dec(v_i_2470_);
v_stop_boxed_2474_ = lean_unbox_usize(v_stop_2471_);
lean_dec(v_stop_2471_);
v_res_2475_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__6(v_00_u03b1_2466_, v_00_u03c3_2467_, v_f_2468_, v_as_2469_, v_i_boxed_2473_, v_stop_boxed_2474_, v_b_2472_);
lean_dec_ref(v_as_2469_);
return v_res_2475_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__7(lean_object* v_00_u03b1_2476_, lean_object* v_00_u03c3_2477_, lean_object* v_f_2478_, lean_object* v_as_2479_, size_t v_i_2480_, size_t v_stop_2481_, lean_object* v_b_2482_){
_start:
{
lean_object* v___x_2483_; 
v___x_2483_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__7___redArg(v_f_2478_, v_as_2479_, v_i_2480_, v_stop_2481_, v_b_2482_);
return v___x_2483_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__7___boxed(lean_object* v_00_u03b1_2484_, lean_object* v_00_u03c3_2485_, lean_object* v_f_2486_, lean_object* v_as_2487_, lean_object* v_i_2488_, lean_object* v_stop_2489_, lean_object* v_b_2490_){
_start:
{
size_t v_i_boxed_2491_; size_t v_stop_boxed_2492_; lean_object* v_res_2493_; 
v_i_boxed_2491_ = lean_unbox_usize(v_i_2488_);
lean_dec(v_i_2488_);
v_stop_boxed_2492_ = lean_unbox_usize(v_stop_2489_);
lean_dec(v_stop_2489_);
v_res_2493_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__4_spec__7(v_00_u03b1_2484_, v_00_u03c3_2485_, v_f_2486_, v_as_2487_, v_i_boxed_2491_, v_stop_boxed_2492_, v_b_2490_);
lean_dec_ref(v_as_2487_);
return v_res_2493_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9(lean_object* v_00_u03c3_2494_, lean_object* v_00_u03b1_2495_, lean_object* v_00_u03b2_2496_, lean_object* v_f_2497_, lean_object* v_x_2498_, lean_object* v_x_2499_){
_start:
{
lean_object* v___x_2500_; 
v___x_2500_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(v_f_2497_, v_x_2498_, v_x_2499_);
return v___x_2500_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___boxed(lean_object* v_00_u03c3_2501_, lean_object* v_00_u03b1_2502_, lean_object* v_00_u03b2_2503_, lean_object* v_f_2504_, lean_object* v_x_2505_, lean_object* v_x_2506_){
_start:
{
lean_object* v_res_2507_; 
v_res_2507_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9(v_00_u03c3_2501_, v_00_u03b1_2502_, v_00_u03b2_2503_, v_f_2504_, v_x_2505_, v_x_2506_);
lean_dec_ref(v_x_2505_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13(lean_object* v_00_u03b2_2508_, lean_object* v_m_2509_){
_start:
{
lean_object* v___x_2510_; 
v___x_2510_ = l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13___redArg(v_m_2509_);
return v___x_2510_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13___boxed(lean_object* v_00_u03b2_2511_, lean_object* v_m_2512_){
_start:
{
lean_object* v_res_2513_; 
v_res_2513_ = l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13(v_00_u03b2_2511_, v_m_2512_);
lean_dec_ref(v_m_2512_);
return v_res_2513_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2514_, lean_object* v_n_2515_, lean_object* v_k_2516_, lean_object* v_v_2517_){
_start:
{
lean_object* v___x_2518_; 
v___x_2518_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1___redArg(v_n_2515_, v_k_2516_, v_v_2517_);
return v___x_2518_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2519_, size_t v_depth_2520_, lean_object* v_keys_2521_, lean_object* v_vals_2522_, lean_object* v_heq_2523_, lean_object* v_i_2524_, lean_object* v_entries_2525_){
_start:
{
lean_object* v___x_2526_; 
v___x_2526_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg(v_depth_2520_, v_keys_2521_, v_vals_2522_, v_i_2524_, v_entries_2525_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2527_, lean_object* v_depth_2528_, lean_object* v_keys_2529_, lean_object* v_vals_2530_, lean_object* v_heq_2531_, lean_object* v_i_2532_, lean_object* v_entries_2533_){
_start:
{
size_t v_depth_boxed_2534_; lean_object* v_res_2535_; 
v_depth_boxed_2534_ = lean_unbox_usize(v_depth_2528_);
lean_dec(v_depth_2528_);
v_res_2535_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2(v_00_u03b2_2527_, v_depth_boxed_2534_, v_keys_2529_, v_vals_2530_, v_heq_2531_, v_i_2532_, v_entries_2533_);
lean_dec_ref(v_vals_2530_);
lean_dec_ref(v_keys_2529_);
return v_res_2535_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4_spec__7(lean_object* v_00_u03b2_2536_, lean_object* v_keys_2537_, lean_object* v_vals_2538_, lean_object* v_heq_2539_, lean_object* v_i_2540_, lean_object* v_k_2541_){
_start:
{
lean_object* v___x_2542_; 
v___x_2542_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4_spec__7___redArg(v_keys_2537_, v_vals_2538_, v_i_2540_, v_k_2541_);
return v___x_2542_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4_spec__7___boxed(lean_object* v_00_u03b2_2543_, lean_object* v_keys_2544_, lean_object* v_vals_2545_, lean_object* v_heq_2546_, lean_object* v_i_2547_, lean_object* v_k_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__3_spec__4_spec__7(v_00_u03b2_2543_, v_keys_2544_, v_vals_2545_, v_heq_2546_, v_i_2547_, v_k_2548_);
lean_dec(v_k_2548_);
lean_dec_ref(v_vals_2545_);
lean_dec_ref(v_keys_2544_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__13(lean_object* v_00_u03b1_2550_, lean_object* v_00_u03b2_2551_, lean_object* v_00_u03c3_2552_, lean_object* v_f_2553_, lean_object* v_as_2554_, size_t v_i_2555_, size_t v_stop_2556_, lean_object* v_b_2557_){
_start:
{
lean_object* v___x_2558_; 
v___x_2558_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__13___redArg(v_f_2553_, v_as_2554_, v_i_2555_, v_stop_2556_, v_b_2557_);
return v___x_2558_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__13___boxed(lean_object* v_00_u03b1_2559_, lean_object* v_00_u03b2_2560_, lean_object* v_00_u03c3_2561_, lean_object* v_f_2562_, lean_object* v_as_2563_, lean_object* v_i_2564_, lean_object* v_stop_2565_, lean_object* v_b_2566_){
_start:
{
size_t v_i_boxed_2567_; size_t v_stop_boxed_2568_; lean_object* v_res_2569_; 
v_i_boxed_2567_ = lean_unbox_usize(v_i_2564_);
lean_dec(v_i_2564_);
v_stop_boxed_2568_ = lean_unbox_usize(v_stop_2565_);
lean_dec(v_stop_2565_);
v_res_2569_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__13(v_00_u03b1_2559_, v_00_u03b2_2560_, v_00_u03c3_2561_, v_f_2562_, v_as_2563_, v_i_boxed_2567_, v_stop_boxed_2568_, v_b_2566_);
lean_dec_ref(v_as_2563_);
return v_res_2569_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__14(lean_object* v_00_u03c3_2570_, lean_object* v_00_u03b1_2571_, lean_object* v_00_u03b2_2572_, lean_object* v_f_2573_, lean_object* v_keys_2574_, lean_object* v_vals_2575_, lean_object* v_heq_2576_, lean_object* v_i_2577_, lean_object* v_acc_2578_){
_start:
{
lean_object* v___x_2579_; 
v___x_2579_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__14___redArg(v_f_2573_, v_keys_2574_, v_vals_2575_, v_i_2577_, v_acc_2578_);
return v___x_2579_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__14___boxed(lean_object* v_00_u03c3_2580_, lean_object* v_00_u03b1_2581_, lean_object* v_00_u03b2_2582_, lean_object* v_f_2583_, lean_object* v_keys_2584_, lean_object* v_vals_2585_, lean_object* v_heq_2586_, lean_object* v_i_2587_, lean_object* v_acc_2588_){
_start:
{
lean_object* v_res_2589_; 
v_res_2589_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9_spec__14(v_00_u03c3_2580_, v_00_u03b1_2581_, v_00_u03b2_2582_, v_f_2583_, v_keys_2584_, v_vals_2585_, v_heq_2586_, v_i_2587_, v_acc_2588_);
lean_dec_ref(v_vals_2585_);
lean_dec_ref(v_keys_2584_);
return v_res_2589_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19(lean_object* v_00_u03c3_2590_, lean_object* v_00_u03b2_2591_, lean_object* v_map_2592_, lean_object* v_f_2593_, lean_object* v_init_2594_){
_start:
{
lean_object* v___x_2595_; 
v___x_2595_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19___redArg(v_map_2592_, v_f_2593_, v_init_2594_);
return v___x_2595_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19___boxed(lean_object* v_00_u03c3_2596_, lean_object* v_00_u03b2_2597_, lean_object* v_map_2598_, lean_object* v_f_2599_, lean_object* v_init_2600_){
_start:
{
lean_object* v_res_2601_; 
v_res_2601_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19(v_00_u03c3_2596_, v_00_u03b2_2597_, v_map_2598_, v_f_2599_, v_init_2600_);
lean_dec_ref(v_map_2598_);
return v_res_2601_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1_spec__12(lean_object* v_00_u03b2_2602_, lean_object* v_x_2603_, lean_object* v_x_2604_, lean_object* v_x_2605_, lean_object* v_x_2606_){
_start:
{
lean_object* v___x_2607_; 
v___x_2607_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1_spec__12___redArg(v_x_2603_, v_x_2604_, v_x_2605_, v_x_2606_);
return v___x_2607_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19_spec__23___redArg(lean_object* v_map_2608_, lean_object* v_f_2609_, lean_object* v_init_2610_){
_start:
{
lean_object* v___x_2611_; 
v___x_2611_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(v_f_2609_, v_map_2608_, v_init_2610_);
return v___x_2611_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19_spec__23___redArg___boxed(lean_object* v_map_2612_, lean_object* v_f_2613_, lean_object* v_init_2614_){
_start:
{
lean_object* v_res_2615_; 
v_res_2615_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19_spec__23___redArg(v_map_2612_, v_f_2613_, v_init_2614_);
lean_dec_ref(v_map_2612_);
return v_res_2615_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19_spec__23(lean_object* v_00_u03c3_2616_, lean_object* v_00_u03b2_2617_, lean_object* v_map_2618_, lean_object* v_f_2619_, lean_object* v_init_2620_){
_start:
{
lean_object* v___x_2621_; 
v___x_2621_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(v_f_2619_, v_map_2618_, v_init_2620_);
return v___x_2621_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19_spec__23___boxed(lean_object* v_00_u03c3_2622_, lean_object* v_00_u03b2_2623_, lean_object* v_map_2624_, lean_object* v_f_2625_, lean_object* v_init_2626_){
_start:
{
lean_object* v_res_2627_; 
v_res_2627_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__8_spec__13_spec__19_spec__23(v_00_u03c3_2622_, v_00_u03b2_2623_, v_map_2624_, v_f_2625_, v_init_2626_);
lean_dec_ref(v_map_2624_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__1___redArg(lean_object* v_e_2628_, lean_object* v___y_2629_){
_start:
{
uint8_t v___x_2631_; 
v___x_2631_ = l_Lean_Expr_hasMVar(v_e_2628_);
if (v___x_2631_ == 0)
{
lean_object* v___x_2632_; 
v___x_2632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2632_, 0, v_e_2628_);
return v___x_2632_;
}
else
{
lean_object* v___x_2633_; lean_object* v_mctx_2634_; lean_object* v___x_2635_; lean_object* v_fst_2636_; lean_object* v_snd_2637_; lean_object* v___x_2638_; lean_object* v_cache_2639_; lean_object* v_zetaDeltaFVarIds_2640_; lean_object* v_postponed_2641_; lean_object* v_diag_2642_; lean_object* v___x_2644_; uint8_t v_isShared_2645_; uint8_t v_isSharedCheck_2651_; 
v___x_2633_ = lean_st_ref_get(v___y_2629_);
v_mctx_2634_ = lean_ctor_get(v___x_2633_, 0);
lean_inc_ref(v_mctx_2634_);
lean_dec(v___x_2633_);
v___x_2635_ = l_Lean_instantiateMVarsCore(v_mctx_2634_, v_e_2628_);
v_fst_2636_ = lean_ctor_get(v___x_2635_, 0);
lean_inc(v_fst_2636_);
v_snd_2637_ = lean_ctor_get(v___x_2635_, 1);
lean_inc(v_snd_2637_);
lean_dec_ref(v___x_2635_);
v___x_2638_ = lean_st_ref_take(v___y_2629_);
v_cache_2639_ = lean_ctor_get(v___x_2638_, 1);
v_zetaDeltaFVarIds_2640_ = lean_ctor_get(v___x_2638_, 2);
v_postponed_2641_ = lean_ctor_get(v___x_2638_, 3);
v_diag_2642_ = lean_ctor_get(v___x_2638_, 4);
v_isSharedCheck_2651_ = !lean_is_exclusive(v___x_2638_);
if (v_isSharedCheck_2651_ == 0)
{
lean_object* v_unused_2652_; 
v_unused_2652_ = lean_ctor_get(v___x_2638_, 0);
lean_dec(v_unused_2652_);
v___x_2644_ = v___x_2638_;
v_isShared_2645_ = v_isSharedCheck_2651_;
goto v_resetjp_2643_;
}
else
{
lean_inc(v_diag_2642_);
lean_inc(v_postponed_2641_);
lean_inc(v_zetaDeltaFVarIds_2640_);
lean_inc(v_cache_2639_);
lean_dec(v___x_2638_);
v___x_2644_ = lean_box(0);
v_isShared_2645_ = v_isSharedCheck_2651_;
goto v_resetjp_2643_;
}
v_resetjp_2643_:
{
lean_object* v___x_2647_; 
if (v_isShared_2645_ == 0)
{
lean_ctor_set(v___x_2644_, 0, v_snd_2637_);
v___x_2647_ = v___x_2644_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v_snd_2637_);
lean_ctor_set(v_reuseFailAlloc_2650_, 1, v_cache_2639_);
lean_ctor_set(v_reuseFailAlloc_2650_, 2, v_zetaDeltaFVarIds_2640_);
lean_ctor_set(v_reuseFailAlloc_2650_, 3, v_postponed_2641_);
lean_ctor_set(v_reuseFailAlloc_2650_, 4, v_diag_2642_);
v___x_2647_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
lean_object* v___x_2648_; lean_object* v___x_2649_; 
v___x_2648_ = lean_st_ref_set(v___y_2629_, v___x_2647_);
v___x_2649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2649_, 0, v_fst_2636_);
return v___x_2649_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__1___redArg___boxed(lean_object* v_e_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_){
_start:
{
lean_object* v_res_2656_; 
v_res_2656_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__1___redArg(v_e_2653_, v___y_2654_);
lean_dec(v___y_2654_);
return v_res_2656_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__1(lean_object* v_e_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_){
_start:
{
lean_object* v___x_2665_; 
v___x_2665_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__1___redArg(v_e_2657_, v___y_2661_);
return v___x_2665_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__1___boxed(lean_object* v_e_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_){
_start:
{
lean_object* v_res_2674_; 
v_res_2674_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__1(v_e_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_);
lean_dec(v___y_2672_);
lean_dec_ref(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec_ref(v___y_2669_);
lean_dec(v___y_2668_);
lean_dec_ref(v___y_2667_);
return v_res_2674_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__5(size_t v_sz_2675_, size_t v_i_2676_, lean_object* v_bs_2677_){
_start:
{
uint8_t v___x_2678_; 
v___x_2678_ = lean_usize_dec_lt(v_i_2676_, v_sz_2675_);
if (v___x_2678_ == 0)
{
return v_bs_2677_;
}
else
{
lean_object* v_v_2679_; lean_object* v_proof_2680_; lean_object* v___x_2681_; lean_object* v_bs_x27_2682_; lean_object* v___x_2683_; size_t v___x_2684_; size_t v___x_2685_; lean_object* v___x_2686_; 
v_v_2679_ = lean_array_uget_borrowed(v_bs_2677_, v_i_2676_);
v_proof_2680_ = lean_ctor_get(v_v_2679_, 1);
lean_inc_ref(v_proof_2680_);
v___x_2681_ = lean_unsigned_to_nat(0u);
v_bs_x27_2682_ = lean_array_uset(v_bs_2677_, v_i_2676_, v___x_2681_);
v___x_2683_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecProof_key(v_proof_2680_);
lean_dec_ref(v_proof_2680_);
v___x_2684_ = ((size_t)1ULL);
v___x_2685_ = lean_usize_add(v_i_2676_, v___x_2684_);
v___x_2686_ = lean_array_uset(v_bs_x27_2682_, v_i_2676_, v___x_2683_);
v_i_2676_ = v___x_2685_;
v_bs_2677_ = v___x_2686_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__5___boxed(lean_object* v_sz_2688_, lean_object* v_i_2689_, lean_object* v_bs_2690_){
_start:
{
size_t v_sz_boxed_2691_; size_t v_i_boxed_2692_; lean_object* v_res_2693_; 
v_sz_boxed_2691_ = lean_unbox_usize(v_sz_2688_);
lean_dec(v_sz_2688_);
v_i_boxed_2692_ = lean_unbox_usize(v_i_2689_);
lean_dec(v_i_2689_);
v_res_2693_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__5(v_sz_boxed_2691_, v_i_boxed_2692_, v_bs_2690_);
return v_res_2693_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__6(lean_object* v_a_2694_, lean_object* v_a_2695_){
_start:
{
if (lean_obj_tag(v_a_2694_) == 0)
{
lean_object* v___x_2696_; 
v___x_2696_ = l_List_reverse___redArg(v_a_2695_);
return v___x_2696_;
}
else
{
lean_object* v_head_2697_; lean_object* v_tail_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2707_; 
v_head_2697_ = lean_ctor_get(v_a_2694_, 0);
v_tail_2698_ = lean_ctor_get(v_a_2694_, 1);
v_isSharedCheck_2707_ = !lean_is_exclusive(v_a_2694_);
if (v_isSharedCheck_2707_ == 0)
{
v___x_2700_ = v_a_2694_;
v_isShared_2701_ = v_isSharedCheck_2707_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_tail_2698_);
lean_inc(v_head_2697_);
lean_dec(v_a_2694_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2707_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
lean_object* v___x_2702_; lean_object* v___x_2704_; 
v___x_2702_ = l_Lean_MessageData_ofName(v_head_2697_);
if (v_isShared_2701_ == 0)
{
lean_ctor_set(v___x_2700_, 1, v_a_2695_);
lean_ctor_set(v___x_2700_, 0, v___x_2702_);
v___x_2704_ = v___x_2700_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v___x_2702_);
lean_ctor_set(v_reuseFailAlloc_2706_, 1, v_a_2695_);
v___x_2704_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
v_a_2694_ = v_tail_2698_;
v_a_2695_ = v___x_2704_;
goto _start;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__2___redArg(lean_object* v_keys_2708_, lean_object* v_i_2709_, lean_object* v_k_2710_){
_start:
{
lean_object* v___x_2711_; uint8_t v___x_2712_; 
v___x_2711_ = lean_array_get_size(v_keys_2708_);
v___x_2712_ = lean_nat_dec_lt(v_i_2709_, v___x_2711_);
if (v___x_2712_ == 0)
{
lean_dec_ref(v_k_2710_);
lean_dec(v_i_2709_);
return v___x_2712_;
}
else
{
lean_object* v_k_x27_2713_; uint8_t v___x_2714_; 
v_k_x27_2713_ = lean_array_fget_borrowed(v_keys_2708_, v_i_2709_);
lean_inc(v_k_x27_2713_);
lean_inc_ref(v_k_2710_);
v___x_2714_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_instBEqSpecProof_beq(v_k_2710_, v_k_x27_2713_);
if (v___x_2714_ == 0)
{
lean_object* v___x_2715_; lean_object* v___x_2716_; 
v___x_2715_ = lean_unsigned_to_nat(1u);
v___x_2716_ = lean_nat_add(v_i_2709_, v___x_2715_);
lean_dec(v_i_2709_);
v_i_2709_ = v___x_2716_;
goto _start;
}
else
{
lean_dec_ref(v_k_2710_);
lean_dec(v_i_2709_);
return v___x_2714_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_keys_2718_, lean_object* v_i_2719_, lean_object* v_k_2720_){
_start:
{
uint8_t v_res_2721_; lean_object* v_r_2722_; 
v_res_2721_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__2___redArg(v_keys_2718_, v_i_2719_, v_k_2720_);
lean_dec_ref(v_keys_2718_);
v_r_2722_ = lean_box(v_res_2721_);
return v_r_2722_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0___redArg(lean_object* v_x_2723_, size_t v_x_2724_, lean_object* v_x_2725_){
_start:
{
if (lean_obj_tag(v_x_2723_) == 0)
{
lean_object* v_es_2726_; lean_object* v___x_2727_; size_t v___x_2728_; size_t v___x_2729_; size_t v___x_2730_; lean_object* v_j_2731_; lean_object* v___x_2732_; 
v_es_2726_ = lean_ctor_get(v_x_2723_, 0);
lean_inc_ref(v_es_2726_);
lean_dec_ref_known(v_x_2723_, 1);
v___x_2727_ = lean_box(2);
v___x_2728_ = ((size_t)5ULL);
v___x_2729_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1);
v___x_2730_ = lean_usize_land(v_x_2724_, v___x_2729_);
v_j_2731_ = lean_usize_to_nat(v___x_2730_);
v___x_2732_ = lean_array_get(v___x_2727_, v_es_2726_, v_j_2731_);
lean_dec(v_j_2731_);
lean_dec_ref(v_es_2726_);
switch(lean_obj_tag(v___x_2732_))
{
case 0:
{
lean_object* v_key_2733_; uint8_t v___x_2734_; 
v_key_2733_ = lean_ctor_get(v___x_2732_, 0);
lean_inc(v_key_2733_);
lean_dec_ref_known(v___x_2732_, 2);
v___x_2734_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_instBEqSpecProof_beq(v_x_2725_, v_key_2733_);
return v___x_2734_;
}
case 1:
{
lean_object* v_node_2735_; size_t v___x_2736_; 
v_node_2735_ = lean_ctor_get(v___x_2732_, 0);
lean_inc(v_node_2735_);
lean_dec_ref_known(v___x_2732_, 1);
v___x_2736_ = lean_usize_shift_right(v_x_2724_, v___x_2728_);
v_x_2723_ = v_node_2735_;
v_x_2724_ = v___x_2736_;
goto _start;
}
default: 
{
uint8_t v___x_2738_; 
lean_dec_ref(v_x_2725_);
v___x_2738_ = 0;
return v___x_2738_;
}
}
}
else
{
lean_object* v_ks_2739_; lean_object* v___x_2740_; uint8_t v___x_2741_; 
v_ks_2739_ = lean_ctor_get(v_x_2723_, 0);
lean_inc_ref(v_ks_2739_);
lean_dec_ref_known(v_x_2723_, 2);
v___x_2740_ = lean_unsigned_to_nat(0u);
v___x_2741_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__2___redArg(v_ks_2739_, v___x_2740_, v_x_2725_);
lean_dec_ref(v_ks_2739_);
return v___x_2741_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0___redArg___boxed(lean_object* v_x_2742_, lean_object* v_x_2743_, lean_object* v_x_2744_){
_start:
{
size_t v_x_12314__boxed_2745_; uint8_t v_res_2746_; lean_object* v_r_2747_; 
v_x_12314__boxed_2745_ = lean_unbox_usize(v_x_2743_);
lean_dec(v_x_2743_);
v_res_2746_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0___redArg(v_x_2742_, v_x_12314__boxed_2745_, v_x_2744_);
v_r_2747_ = lean_box(v_res_2746_);
return v_r_2747_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0___redArg(lean_object* v_x_2748_, lean_object* v_x_2749_){
_start:
{
uint64_t v___y_2751_; lean_object* v___x_2754_; 
v___x_2754_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecProof_key(v_x_2749_);
if (lean_obj_tag(v___x_2754_) == 0)
{
uint64_t v___x_2755_; 
v___x_2755_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0);
v___y_2751_ = v___x_2755_;
goto v___jp_2750_;
}
else
{
uint64_t v_hash_2756_; 
v_hash_2756_ = lean_ctor_get_uint64(v___x_2754_, sizeof(void*)*2);
lean_dec(v___x_2754_);
v___y_2751_ = v_hash_2756_;
goto v___jp_2750_;
}
v___jp_2750_:
{
size_t v___x_2752_; uint8_t v___x_2753_; 
v___x_2752_ = lean_uint64_to_usize(v___y_2751_);
v___x_2753_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0___redArg(v_x_2748_, v___x_2752_, v_x_2749_);
return v___x_2753_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0___redArg___boxed(lean_object* v_x_2757_, lean_object* v_x_2758_){
_start:
{
uint8_t v_res_2759_; lean_object* v_r_2760_; 
v_res_2759_ = l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0___redArg(v_x_2757_, v_x_2758_);
v_r_2760_ = lean_box(v_res_2759_);
return v_r_2760_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__4(lean_object* v_database_2761_, lean_object* v_as_2762_, size_t v_i_2763_, size_t v_stop_2764_, lean_object* v_b_2765_){
_start:
{
lean_object* v___y_2767_; uint8_t v___x_2771_; 
v___x_2771_ = lean_usize_dec_eq(v_i_2763_, v_stop_2764_);
if (v___x_2771_ == 0)
{
lean_object* v_erased_2772_; lean_object* v___x_2773_; lean_object* v_proof_2774_; uint8_t v___x_2775_; 
v_erased_2772_ = lean_ctor_get(v_database_2761_, 1);
v___x_2773_ = lean_array_uget_borrowed(v_as_2762_, v_i_2763_);
v_proof_2774_ = lean_ctor_get(v___x_2773_, 1);
lean_inc_ref(v_proof_2774_);
lean_inc_ref(v_erased_2772_);
v___x_2775_ = l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0___redArg(v_erased_2772_, v_proof_2774_);
if (v___x_2775_ == 0)
{
lean_object* v___x_2776_; 
lean_inc(v___x_2773_);
v___x_2776_ = lean_array_push(v_b_2765_, v___x_2773_);
v___y_2767_ = v___x_2776_;
goto v___jp_2766_;
}
else
{
v___y_2767_ = v_b_2765_;
goto v___jp_2766_;
}
}
else
{
lean_dec_ref(v_database_2761_);
return v_b_2765_;
}
v___jp_2766_:
{
size_t v___x_2768_; size_t v___x_2769_; 
v___x_2768_ = ((size_t)1ULL);
v___x_2769_ = lean_usize_add(v_i_2763_, v___x_2768_);
v_i_2763_ = v___x_2769_;
v_b_2765_ = v___y_2767_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__4___boxed(lean_object* v_database_2777_, lean_object* v_as_2778_, lean_object* v_i_2779_, lean_object* v_stop_2780_, lean_object* v_b_2781_){
_start:
{
size_t v_i_boxed_2782_; size_t v_stop_boxed_2783_; lean_object* v_res_2784_; 
v_i_boxed_2782_ = lean_unbox_usize(v_i_2779_);
lean_dec(v_i_2779_);
v_stop_boxed_2783_ = lean_unbox_usize(v_stop_2780_);
lean_dec(v_stop_2780_);
v_res_2784_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__4(v_database_2777_, v_as_2778_, v_i_boxed_2782_, v_stop_boxed_2783_, v_b_2781_);
lean_dec_ref(v_as_2778_);
return v_res_2784_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__3(lean_object* v_a_2788_, lean_object* v_as_2789_, size_t v_sz_2790_, size_t v_i_2791_, lean_object* v_b_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_){
_start:
{
uint8_t v___x_2800_; 
v___x_2800_ = lean_usize_dec_lt(v_i_2791_, v_sz_2790_);
if (v___x_2800_ == 0)
{
lean_object* v___x_2801_; 
lean_dec_ref(v_a_2788_);
v___x_2801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2801_, 0, v_b_2792_);
return v___x_2801_;
}
else
{
lean_object* v_a_2802_; lean_object* v_pattern_2803_; lean_object* v___x_2804_; 
lean_dec_ref(v_b_2792_);
v_a_2802_ = lean_array_uget_borrowed(v_as_2789_, v_i_2791_);
v_pattern_2803_ = lean_ctor_get(v_a_2802_, 0);
lean_inc_ref(v_a_2788_);
lean_inc_ref(v_pattern_2803_);
v___x_2804_ = l_Lean_Meta_Sym_Pattern_match_x3f(v_pattern_2803_, v_a_2788_, v___x_2800_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_, v___y_2797_, v___y_2798_);
if (lean_obj_tag(v___x_2804_) == 0)
{
lean_object* v_a_2805_; lean_object* v___x_2807_; uint8_t v_isShared_2808_; uint8_t v_isSharedCheck_2827_; 
v_a_2805_ = lean_ctor_get(v___x_2804_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v___x_2804_);
if (v_isSharedCheck_2827_ == 0)
{
v___x_2807_ = v___x_2804_;
v_isShared_2808_ = v_isSharedCheck_2827_;
goto v_resetjp_2806_;
}
else
{
lean_inc(v_a_2805_);
lean_dec(v___x_2804_);
v___x_2807_ = lean_box(0);
v_isShared_2808_ = v_isSharedCheck_2827_;
goto v_resetjp_2806_;
}
v_resetjp_2806_:
{
lean_object* v___x_2809_; 
v___x_2809_ = lean_box(0);
if (lean_obj_tag(v_a_2805_) == 1)
{
lean_object* v___x_2811_; uint8_t v_isShared_2812_; uint8_t v_isSharedCheck_2821_; 
lean_dec_ref(v_a_2788_);
v_isSharedCheck_2821_ = !lean_is_exclusive(v_a_2805_);
if (v_isSharedCheck_2821_ == 0)
{
lean_object* v_unused_2822_; 
v_unused_2822_ = lean_ctor_get(v_a_2805_, 0);
lean_dec(v_unused_2822_);
v___x_2811_ = v_a_2805_;
v_isShared_2812_ = v_isSharedCheck_2821_;
goto v_resetjp_2810_;
}
else
{
lean_dec(v_a_2805_);
v___x_2811_ = lean_box(0);
v_isShared_2812_ = v_isSharedCheck_2821_;
goto v_resetjp_2810_;
}
v_resetjp_2810_:
{
lean_object* v___x_2813_; lean_object* v___x_2815_; 
lean_inc(v_a_2802_);
v___x_2813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2813_, 0, v_a_2802_);
if (v_isShared_2812_ == 0)
{
lean_ctor_set(v___x_2811_, 0, v___x_2813_);
v___x_2815_ = v___x_2811_;
goto v_reusejp_2814_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v___x_2813_);
v___x_2815_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2814_;
}
v_reusejp_2814_:
{
lean_object* v___x_2816_; lean_object* v___x_2818_; 
v___x_2816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2816_, 0, v___x_2815_);
lean_ctor_set(v___x_2816_, 1, v___x_2809_);
if (v_isShared_2808_ == 0)
{
lean_ctor_set(v___x_2807_, 0, v___x_2816_);
v___x_2818_ = v___x_2807_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v___x_2816_);
v___x_2818_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
return v___x_2818_;
}
}
}
}
else
{
lean_object* v___x_2823_; size_t v___x_2824_; size_t v___x_2825_; 
lean_del_object(v___x_2807_);
lean_dec(v_a_2805_);
v___x_2823_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__3___closed__0));
v___x_2824_ = ((size_t)1ULL);
v___x_2825_ = lean_usize_add(v_i_2791_, v___x_2824_);
v_i_2791_ = v___x_2825_;
v_b_2792_ = v___x_2823_;
goto _start;
}
}
}
else
{
lean_object* v_a_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2835_; 
lean_dec_ref(v_a_2788_);
v_a_2828_ = lean_ctor_get(v___x_2804_, 0);
v_isSharedCheck_2835_ = !lean_is_exclusive(v___x_2804_);
if (v_isSharedCheck_2835_ == 0)
{
v___x_2830_ = v___x_2804_;
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_a_2828_);
lean_dec(v___x_2804_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v___x_2833_; 
if (v_isShared_2831_ == 0)
{
v___x_2833_ = v___x_2830_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v_a_2828_);
v___x_2833_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
return v___x_2833_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__3___boxed(lean_object* v_a_2836_, lean_object* v_as_2837_, lean_object* v_sz_2838_, lean_object* v_i_2839_, lean_object* v_b_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_){
_start:
{
size_t v_sz_boxed_2848_; size_t v_i_boxed_2849_; lean_object* v_res_2850_; 
v_sz_boxed_2848_ = lean_unbox_usize(v_sz_2838_);
lean_dec(v_sz_2838_);
v_i_boxed_2849_ = lean_unbox_usize(v_i_2839_);
lean_dec(v_i_2839_);
v_res_2850_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__3(v_a_2836_, v_as_2837_, v_sz_boxed_2848_, v_i_boxed_2849_, v_b_2840_, v___y_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_, v___y_2846_);
lean_dec(v___y_2846_);
lean_dec_ref(v___y_2845_);
lean_dec(v___y_2844_);
lean_dec_ref(v___y_2843_);
lean_dec(v___y_2842_);
lean_dec_ref(v___y_2841_);
lean_dec_ref(v_as_2837_);
return v_res_2850_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__2_spec__3___redArg(lean_object* v_xs_2851_, lean_object* v_j_2852_){
_start:
{
lean_object* v_zero_2853_; uint8_t v_isZero_2854_; 
v_zero_2853_ = lean_unsigned_to_nat(0u);
v_isZero_2854_ = lean_nat_dec_eq(v_j_2852_, v_zero_2853_);
if (v_isZero_2854_ == 1)
{
lean_dec(v_j_2852_);
return v_xs_2851_;
}
else
{
lean_object* v_one_2855_; lean_object* v_n_2856_; lean_object* v___x_2857_; lean_object* v_priority_2858_; lean_object* v___x_2859_; lean_object* v_priority_2860_; uint8_t v___x_2861_; 
v_one_2855_ = lean_unsigned_to_nat(1u);
v_n_2856_ = lean_nat_sub(v_j_2852_, v_one_2855_);
v___x_2857_ = lean_array_fget_borrowed(v_xs_2851_, v_n_2856_);
v_priority_2858_ = lean_ctor_get(v___x_2857_, 3);
v___x_2859_ = lean_array_fget_borrowed(v_xs_2851_, v_j_2852_);
v_priority_2860_ = lean_ctor_get(v___x_2859_, 3);
v___x_2861_ = lean_nat_dec_lt(v_priority_2858_, v_priority_2860_);
if (v___x_2861_ == 0)
{
lean_dec(v_n_2856_);
lean_dec(v_j_2852_);
return v_xs_2851_;
}
else
{
lean_object* v___x_2862_; 
v___x_2862_ = lean_array_fswap(v_xs_2851_, v_j_2852_, v_n_2856_);
lean_dec(v_j_2852_);
v_xs_2851_ = v___x_2862_;
v_j_2852_ = v_n_2856_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__2(lean_object* v_xs_2864_, lean_object* v_i_2865_, lean_object* v_fuel_2866_){
_start:
{
lean_object* v_zero_2867_; uint8_t v_isZero_2868_; 
v_zero_2867_ = lean_unsigned_to_nat(0u);
v_isZero_2868_ = lean_nat_dec_eq(v_fuel_2866_, v_zero_2867_);
if (v_isZero_2868_ == 1)
{
lean_dec(v_fuel_2866_);
lean_dec(v_i_2865_);
return v_xs_2864_;
}
else
{
lean_object* v___x_2869_; uint8_t v___x_2870_; 
v___x_2869_ = lean_array_get_size(v_xs_2864_);
v___x_2870_ = lean_nat_dec_lt(v_i_2865_, v___x_2869_);
if (v___x_2870_ == 0)
{
lean_dec(v_fuel_2866_);
lean_dec(v_i_2865_);
return v_xs_2864_;
}
else
{
lean_object* v_one_2871_; lean_object* v_n_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; 
v_one_2871_ = lean_unsigned_to_nat(1u);
v_n_2872_ = lean_nat_sub(v_fuel_2866_, v_one_2871_);
lean_dec(v_fuel_2866_);
lean_inc(v_i_2865_);
v___x_2873_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__2_spec__3___redArg(v_xs_2864_, v_i_2865_);
v___x_2874_ = lean_nat_add(v_i_2865_, v_one_2871_);
lean_dec(v_i_2865_);
v_xs_2864_ = v___x_2873_;
v_i_2865_ = v___x_2874_;
v_fuel_2866_ = v_n_2872_;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__1(void){
_start:
{
lean_object* v___x_2877_; lean_object* v___x_2878_; 
v___x_2877_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__0));
v___x_2878_ = l_Lean_stringToMessageData(v___x_2877_);
return v___x_2878_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__3(void){
_start:
{
lean_object* v___x_2880_; lean_object* v___x_2881_; 
v___x_2880_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__2));
v___x_2881_ = l_Lean_stringToMessageData(v___x_2880_);
return v___x_2881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs(lean_object* v_database_2882_, lean_object* v_e_2883_, lean_object* v_a_2884_, lean_object* v_a_2885_, lean_object* v_a_2886_, lean_object* v_a_2887_, lean_object* v_a_2888_, lean_object* v_a_2889_){
_start:
{
lean_object* v___y_2892_; lean_object* v___y_2893_; lean_object* v___y_2894_; lean_object* v___y_2895_; lean_object* v___y_2896_; lean_object* v___y_2897_; lean_object* v___y_2898_; lean_object* v___y_2899_; lean_object* v___y_2900_; lean_object* v___y_2935_; lean_object* v___y_2936_; lean_object* v___y_2937_; lean_object* v___y_2938_; lean_object* v___y_2939_; lean_object* v___y_2940_; lean_object* v___y_2941_; lean_object* v___y_2942_; lean_object* v_options_2954_; lean_object* v_inheritedTraceOptions_2955_; uint8_t v_hasTrace_2956_; lean_object* v_cls_2957_; lean_object* v___y_2959_; lean_object* v___y_2960_; lean_object* v___y_2961_; lean_object* v___y_2962_; lean_object* v___y_2963_; lean_object* v___y_2964_; 
v_options_2954_ = lean_ctor_get(v_a_2888_, 2);
v_inheritedTraceOptions_2955_ = lean_ctor_get(v_a_2888_, 13);
v_hasTrace_2956_ = lean_ctor_get_uint8(v_options_2954_, sizeof(void*)*1);
v_cls_2957_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__4));
if (v_hasTrace_2956_ == 0)
{
v___y_2959_ = v_a_2884_;
v___y_2960_ = v_a_2885_;
v___y_2961_ = v_a_2886_;
v___y_2962_ = v_a_2887_;
v___y_2963_ = v_a_2888_;
v___y_2964_ = v_a_2889_;
goto v___jp_2958_;
}
else
{
lean_object* v___x_3002_; uint8_t v___x_3003_; 
v___x_3002_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__7);
v___x_3003_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2955_, v_options_2954_, v___x_3002_);
if (v___x_3003_ == 0)
{
v___y_2959_ = v_a_2884_;
v___y_2960_ = v_a_2885_;
v___y_2961_ = v_a_2886_;
v___y_2962_ = v_a_2887_;
v___y_2963_ = v_a_2888_;
v___y_2964_ = v_a_2889_;
goto v___jp_2958_;
}
else
{
lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; 
v___x_3004_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__3, &l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__3_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__3);
lean_inc_ref(v_e_2883_);
v___x_3005_ = l_Lean_MessageData_ofExpr(v_e_2883_);
v___x_3006_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3006_, 0, v___x_3004_);
lean_ctor_set(v___x_3006_, 1, v___x_3005_);
v___x_3007_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg(v_cls_2957_, v___x_3006_, v_a_2886_, v_a_2887_, v_a_2888_, v_a_2889_);
if (lean_obj_tag(v___x_3007_) == 0)
{
lean_dec_ref_known(v___x_3007_, 1);
v___y_2959_ = v_a_2884_;
v___y_2960_ = v_a_2885_;
v___y_2961_ = v_a_2886_;
v___y_2962_ = v_a_2887_;
v___y_2963_ = v_a_2888_;
v___y_2964_ = v_a_2889_;
goto v___jp_2958_;
}
else
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3015_; 
lean_dec_ref(v_e_2883_);
lean_dec_ref(v_database_2882_);
v_a_3008_ = lean_ctor_get(v___x_3007_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___x_3007_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3010_ = v___x_3007_;
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_3007_);
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
v___jp_2891_:
{
lean_object* v___x_2901_; lean_object* v___x_2902_; uint8_t v___x_2903_; 
v___x_2901_ = lean_array_get_size(v___y_2900_);
v___x_2902_ = lean_unsigned_to_nat(1u);
v___x_2903_ = lean_nat_dec_eq(v___x_2901_, v___x_2902_);
if (v___x_2903_ == 0)
{
lean_object* v___x_2904_; lean_object* v___x_2905_; size_t v_sz_2906_; size_t v___x_2907_; lean_object* v___x_2908_; 
v___x_2904_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__2(v___y_2900_, v___y_2892_, v___x_2901_);
v___x_2905_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__3___closed__0));
v_sz_2906_ = lean_array_size(v___x_2904_);
v___x_2907_ = ((size_t)0ULL);
v___x_2908_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__3(v___y_2893_, v___x_2904_, v_sz_2906_, v___x_2907_, v___x_2905_, v___y_2897_, v___y_2896_, v___y_2899_, v___y_2898_, v___y_2894_, v___y_2895_);
if (lean_obj_tag(v___x_2908_) == 0)
{
lean_object* v_a_2909_; lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_2922_; 
v_a_2909_ = lean_ctor_get(v___x_2908_, 0);
v_isSharedCheck_2922_ = !lean_is_exclusive(v___x_2908_);
if (v_isSharedCheck_2922_ == 0)
{
v___x_2911_ = v___x_2908_;
v_isShared_2912_ = v_isSharedCheck_2922_;
goto v_resetjp_2910_;
}
else
{
lean_inc(v_a_2909_);
lean_dec(v___x_2908_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_2922_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
lean_object* v_fst_2913_; 
v_fst_2913_ = lean_ctor_get(v_a_2909_, 0);
lean_inc(v_fst_2913_);
lean_dec(v_a_2909_);
if (lean_obj_tag(v_fst_2913_) == 0)
{
lean_object* v___x_2914_; lean_object* v___x_2916_; 
v___x_2914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2904_);
if (v_isShared_2912_ == 0)
{
lean_ctor_set(v___x_2911_, 0, v___x_2914_);
v___x_2916_ = v___x_2911_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v___x_2914_);
v___x_2916_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
return v___x_2916_;
}
}
else
{
lean_object* v_val_2918_; lean_object* v___x_2920_; 
lean_dec_ref(v___x_2904_);
v_val_2918_ = lean_ctor_get(v_fst_2913_, 0);
lean_inc(v_val_2918_);
lean_dec_ref_known(v_fst_2913_, 1);
if (v_isShared_2912_ == 0)
{
lean_ctor_set(v___x_2911_, 0, v_val_2918_);
v___x_2920_ = v___x_2911_;
goto v_reusejp_2919_;
}
else
{
lean_object* v_reuseFailAlloc_2921_; 
v_reuseFailAlloc_2921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2921_, 0, v_val_2918_);
v___x_2920_ = v_reuseFailAlloc_2921_;
goto v_reusejp_2919_;
}
v_reusejp_2919_:
{
return v___x_2920_;
}
}
}
}
else
{
lean_object* v_a_2923_; lean_object* v___x_2925_; uint8_t v_isShared_2926_; uint8_t v_isSharedCheck_2930_; 
lean_dec_ref(v___x_2904_);
v_a_2923_ = lean_ctor_get(v___x_2908_, 0);
v_isSharedCheck_2930_ = !lean_is_exclusive(v___x_2908_);
if (v_isSharedCheck_2930_ == 0)
{
v___x_2925_ = v___x_2908_;
v_isShared_2926_ = v_isSharedCheck_2930_;
goto v_resetjp_2924_;
}
else
{
lean_inc(v_a_2923_);
lean_dec(v___x_2908_);
v___x_2925_ = lean_box(0);
v_isShared_2926_ = v_isSharedCheck_2930_;
goto v_resetjp_2924_;
}
v_resetjp_2924_:
{
lean_object* v___x_2928_; 
if (v_isShared_2926_ == 0)
{
v___x_2928_ = v___x_2925_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v_a_2923_);
v___x_2928_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
return v___x_2928_;
}
}
}
}
else
{
lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; 
lean_dec_ref(v___y_2893_);
v___x_2931_ = lean_array_fget(v___y_2900_, v___y_2892_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2900_);
v___x_2932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2932_, 0, v___x_2931_);
v___x_2933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2933_, 0, v___x_2932_);
return v___x_2933_;
}
}
v___jp_2934_:
{
lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; uint8_t v___x_2946_; 
v___x_2943_ = lean_unsigned_to_nat(0u);
v___x_2944_ = lean_array_get_size(v___y_2936_);
v___x_2945_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_insert_spec__0_spec__0_spec__3___closed__0));
v___x_2946_ = lean_nat_dec_lt(v___x_2943_, v___x_2944_);
if (v___x_2946_ == 0)
{
lean_dec_ref(v___y_2936_);
lean_dec_ref(v_database_2882_);
v___y_2892_ = v___x_2943_;
v___y_2893_ = v___y_2935_;
v___y_2894_ = v___y_2941_;
v___y_2895_ = v___y_2942_;
v___y_2896_ = v___y_2938_;
v___y_2897_ = v___y_2937_;
v___y_2898_ = v___y_2940_;
v___y_2899_ = v___y_2939_;
v___y_2900_ = v___x_2945_;
goto v___jp_2891_;
}
else
{
uint8_t v___x_2947_; 
v___x_2947_ = lean_nat_dec_le(v___x_2944_, v___x_2944_);
if (v___x_2947_ == 0)
{
if (v___x_2946_ == 0)
{
lean_dec_ref(v___y_2936_);
lean_dec_ref(v_database_2882_);
v___y_2892_ = v___x_2943_;
v___y_2893_ = v___y_2935_;
v___y_2894_ = v___y_2941_;
v___y_2895_ = v___y_2942_;
v___y_2896_ = v___y_2938_;
v___y_2897_ = v___y_2937_;
v___y_2898_ = v___y_2940_;
v___y_2899_ = v___y_2939_;
v___y_2900_ = v___x_2945_;
goto v___jp_2891_;
}
else
{
size_t v___x_2948_; size_t v___x_2949_; lean_object* v___x_2950_; 
v___x_2948_ = ((size_t)0ULL);
v___x_2949_ = lean_usize_of_nat(v___x_2944_);
v___x_2950_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__4(v_database_2882_, v___y_2936_, v___x_2948_, v___x_2949_, v___x_2945_);
lean_dec_ref(v___y_2936_);
v___y_2892_ = v___x_2943_;
v___y_2893_ = v___y_2935_;
v___y_2894_ = v___y_2941_;
v___y_2895_ = v___y_2942_;
v___y_2896_ = v___y_2938_;
v___y_2897_ = v___y_2937_;
v___y_2898_ = v___y_2940_;
v___y_2899_ = v___y_2939_;
v___y_2900_ = v___x_2950_;
goto v___jp_2891_;
}
}
else
{
size_t v___x_2951_; size_t v___x_2952_; lean_object* v___x_2953_; 
v___x_2951_ = ((size_t)0ULL);
v___x_2952_ = lean_usize_of_nat(v___x_2944_);
v___x_2953_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__4(v_database_2882_, v___y_2936_, v___x_2951_, v___x_2952_, v___x_2945_);
lean_dec_ref(v___y_2936_);
v___y_2892_ = v___x_2943_;
v___y_2893_ = v___y_2935_;
v___y_2894_ = v___y_2941_;
v___y_2895_ = v___y_2942_;
v___y_2896_ = v___y_2938_;
v___y_2897_ = v___y_2937_;
v___y_2898_ = v___y_2940_;
v___y_2899_ = v___y_2939_;
v___y_2900_ = v___x_2953_;
goto v___jp_2891_;
}
}
}
v___jp_2958_:
{
lean_object* v___x_2965_; lean_object* v_a_2966_; lean_object* v___x_2967_; 
v___x_2965_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__1___redArg(v_e_2883_, v___y_2962_);
v_a_2966_ = lean_ctor_get(v___x_2965_, 0);
lean_inc(v_a_2966_);
lean_dec_ref(v___x_2965_);
v___x_2967_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_2966_, v___y_2960_);
if (lean_obj_tag(v___x_2967_) == 0)
{
lean_object* v_options_2968_; lean_object* v_a_2969_; lean_object* v_specs_2970_; lean_object* v_inheritedTraceOptions_2971_; uint8_t v_hasTrace_2972_; lean_object* v___x_2973_; 
v_options_2968_ = lean_ctor_get(v___y_2963_, 2);
v_a_2969_ = lean_ctor_get(v___x_2967_, 0);
lean_inc(v_a_2969_);
lean_dec_ref_known(v___x_2967_, 1);
v_specs_2970_ = lean_ctor_get(v_database_2882_, 0);
v_inheritedTraceOptions_2971_ = lean_ctor_get(v___y_2963_, 13);
v_hasTrace_2972_ = lean_ctor_get_uint8(v_options_2968_, sizeof(void*)*1);
v___x_2973_ = l_Lean_Meta_Sym_getMatch___redArg(v_specs_2970_, v_a_2969_);
if (v_hasTrace_2972_ == 0)
{
v___y_2935_ = v_a_2969_;
v___y_2936_ = v___x_2973_;
v___y_2937_ = v___y_2959_;
v___y_2938_ = v___y_2960_;
v___y_2939_ = v___y_2961_;
v___y_2940_ = v___y_2962_;
v___y_2941_ = v___y_2963_;
v___y_2942_ = v___y_2964_;
goto v___jp_2934_;
}
else
{
lean_object* v___x_2974_; uint8_t v___x_2975_; 
v___x_2974_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__7___closed__7);
v___x_2975_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2971_, v_options_2968_, v___x_2974_);
if (v___x_2975_ == 0)
{
v___y_2935_ = v_a_2969_;
v___y_2936_ = v___x_2973_;
v___y_2937_ = v___y_2959_;
v___y_2938_ = v___y_2960_;
v___y_2939_ = v___y_2961_;
v___y_2940_ = v___y_2962_;
v___y_2941_ = v___y_2963_;
v___y_2942_ = v___y_2964_;
goto v___jp_2934_;
}
else
{
lean_object* v___x_2976_; size_t v_sz_2977_; size_t v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; 
v___x_2976_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___closed__1);
v_sz_2977_ = lean_array_size(v___x_2973_);
v___x_2978_ = ((size_t)0ULL);
lean_inc_ref(v___x_2973_);
v___x_2979_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__5(v_sz_2977_, v___x_2978_, v___x_2973_);
v___x_2980_ = lean_array_to_list(v___x_2979_);
v___x_2981_ = lean_box(0);
v___x_2982_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__6(v___x_2980_, v___x_2981_);
v___x_2983_ = l_Lean_MessageData_ofList(v___x_2982_);
v___x_2984_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2984_, 0, v___x_2976_);
lean_ctor_set(v___x_2984_, 1, v___x_2983_);
v___x_2985_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_Internal_VCGen_migrateSpecTheoremsDatabase_spec__1___redArg(v_cls_2957_, v___x_2984_, v___y_2961_, v___y_2962_, v___y_2963_, v___y_2964_);
if (lean_obj_tag(v___x_2985_) == 0)
{
lean_dec_ref_known(v___x_2985_, 1);
v___y_2935_ = v_a_2969_;
v___y_2936_ = v___x_2973_;
v___y_2937_ = v___y_2959_;
v___y_2938_ = v___y_2960_;
v___y_2939_ = v___y_2961_;
v___y_2940_ = v___y_2962_;
v___y_2941_ = v___y_2963_;
v___y_2942_ = v___y_2964_;
goto v___jp_2934_;
}
else
{
lean_object* v_a_2986_; lean_object* v___x_2988_; uint8_t v_isShared_2989_; uint8_t v_isSharedCheck_2993_; 
lean_dec_ref(v___x_2973_);
lean_dec(v_a_2969_);
lean_dec_ref(v_database_2882_);
v_a_2986_ = lean_ctor_get(v___x_2985_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2985_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2988_ = v___x_2985_;
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
else
{
lean_inc(v_a_2986_);
lean_dec(v___x_2985_);
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
}
}
else
{
lean_object* v_a_2994_; lean_object* v___x_2996_; uint8_t v_isShared_2997_; uint8_t v_isSharedCheck_3001_; 
lean_dec_ref(v_database_2882_);
v_a_2994_ = lean_ctor_get(v___x_2967_, 0);
v_isSharedCheck_3001_ = !lean_is_exclusive(v___x_2967_);
if (v_isSharedCheck_3001_ == 0)
{
v___x_2996_ = v___x_2967_;
v_isShared_2997_ = v_isSharedCheck_3001_;
goto v_resetjp_2995_;
}
else
{
lean_inc(v_a_2994_);
lean_dec(v___x_2967_);
v___x_2996_ = lean_box(0);
v_isShared_2997_ = v_isSharedCheck_3001_;
goto v_resetjp_2995_;
}
v_resetjp_2995_:
{
lean_object* v___x_2999_; 
if (v_isShared_2997_ == 0)
{
v___x_2999_ = v___x_2996_;
goto v_reusejp_2998_;
}
else
{
lean_object* v_reuseFailAlloc_3000_; 
v_reuseFailAlloc_3000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3000_, 0, v_a_2994_);
v___x_2999_ = v_reuseFailAlloc_3000_;
goto v_reusejp_2998_;
}
v_reusejp_2998_:
{
return v___x_2999_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs___boxed(lean_object* v_database_3016_, lean_object* v_e_3017_, lean_object* v_a_3018_, lean_object* v_a_3019_, lean_object* v_a_3020_, lean_object* v_a_3021_, lean_object* v_a_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_){
_start:
{
lean_object* v_res_3025_; 
v_res_3025_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs(v_database_3016_, v_e_3017_, v_a_3018_, v_a_3019_, v_a_3020_, v_a_3021_, v_a_3022_, v_a_3023_);
lean_dec(v_a_3023_);
lean_dec_ref(v_a_3022_);
lean_dec(v_a_3021_);
lean_dec_ref(v_a_3020_);
lean_dec(v_a_3019_);
lean_dec_ref(v_a_3018_);
return v_res_3025_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0(lean_object* v_00_u03b2_3026_, lean_object* v_x_3027_, lean_object* v_x_3028_){
_start:
{
uint8_t v___x_3029_; 
v___x_3029_ = l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0___redArg(v_x_3027_, v_x_3028_);
return v___x_3029_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0___boxed(lean_object* v_00_u03b2_3030_, lean_object* v_x_3031_, lean_object* v_x_3032_){
_start:
{
uint8_t v_res_3033_; lean_object* v_r_3034_; 
v_res_3033_ = l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0(v_00_u03b2_3030_, v_x_3031_, v_x_3032_);
v_r_3034_ = lean_box(v_res_3033_);
return v_r_3034_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0(lean_object* v_00_u03b2_3035_, lean_object* v_x_3036_, size_t v_x_3037_, lean_object* v_x_3038_){
_start:
{
uint8_t v___x_3039_; 
v___x_3039_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0___redArg(v_x_3036_, v_x_3037_, v_x_3038_);
return v___x_3039_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3040_, lean_object* v_x_3041_, lean_object* v_x_3042_, lean_object* v_x_3043_){
_start:
{
size_t v_x_12816__boxed_3044_; uint8_t v_res_3045_; lean_object* v_r_3046_; 
v_x_12816__boxed_3044_ = lean_unbox_usize(v_x_3042_);
lean_dec(v_x_3042_);
v_res_3045_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0(v_00_u03b2_3040_, v_x_3041_, v_x_12816__boxed_3044_, v_x_3043_);
v_r_3046_ = lean_box(v_res_3045_);
return v_r_3046_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__2_spec__3(lean_object* v_xs_3047_, lean_object* v_j_3048_, lean_object* v_h_3049_){
_start:
{
lean_object* v___x_3050_; 
v___x_3050_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__2_spec__3___redArg(v_xs_3047_, v_j_3048_);
return v___x_3050_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_3051_, lean_object* v_keys_3052_, lean_object* v_vals_3053_, lean_object* v_heq_3054_, lean_object* v_i_3055_, lean_object* v_k_3056_){
_start:
{
uint8_t v___x_3057_; 
v___x_3057_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__2___redArg(v_keys_3052_, v_i_3055_, v_k_3056_);
return v___x_3057_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_3058_, lean_object* v_keys_3059_, lean_object* v_vals_3060_, lean_object* v_heq_3061_, lean_object* v_i_3062_, lean_object* v_k_3063_){
_start:
{
uint8_t v_res_3064_; lean_object* v_r_3065_; 
v_res_3064_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__2(v_00_u03b2_3058_, v_keys_3059_, v_vals_3060_, v_heq_3061_, v_i_3062_, v_k_3063_);
lean_dec_ref(v_vals_3060_);
lean_dec_ref(v_keys_3059_);
v_r_3065_ = lean_box(v_res_3064_);
return v_r_3065_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Do(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Attr(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Do_Triple_SpecLemmas(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB(uint8_t builtin) {
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
res = runtime_initialize_Std_Internal_Do_Triple_SpecLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremKind_default = _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremKind_default();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremKind_default);
l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremKind = _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremKind();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremKind);
l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremNew_default = _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremNew_default();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremNew_default);
l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremNew = _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremNew();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremNew);
l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default = _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew_default);
l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew = _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_Internal_VCGen_instInhabitedSpecTheoremsNew);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Attr(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB(uint8_t builtin) {
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
lean_object* initialize_Std_Internal_Do_Triple_SpecLemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB(uint8_t builtin) {
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
res = initialize_Std_Internal_Do_Triple_SpecLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB(builtin);
}
#ifdef __cplusplus
}
#endif
