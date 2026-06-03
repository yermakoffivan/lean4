// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Frame
// Imports: public import Std.Tactic.Do.Syntax public import Lean.Elab.Tactic.Do.ProofMode.Focus
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
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_dec(lean_object*);
extern lean_object* l_new__wp__monad;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseMGoal_x3f(lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseHyp_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseAnd_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseEmptyHyp_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_Hyp_toExpr(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_collectHyps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Elab.Tactic.Do.ProofMode.Frame"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 100, .m_capacity = 100, .m_length = 99, .m_data = "_private.Lean.Elab.Tactic.Do.ProofMode.Frame.0.Lean.Elab.Tactic.Do.ProofMode.transferHypNames.label"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Frame"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "frame"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HasFrame"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Could not infer frame"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0___boxed(lean_object**);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__1_value),LEAN_SCALAR_PTR_LITERAL(108, 148, 215, 79, 118, 195, 150, 87)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "not in proof mode"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_collectHyps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 109, .m_capacity = 109, .m_length = 108, .m_data = "_private.Lean.Elab.Tactic.Do.ProofMode.Frame.0.Lean.Elab.Tactic.Internal.Do.ProofMode.transferHypNames.label"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__2(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__3___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "CompleteLattice"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 11, 99, 181, 146, 193, 255, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__2_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__2_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 59, 209, 245, 191, 85, 47, 162)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__2_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 184, 52, 95, 144, 241, 1, 110)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mTryFrame___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mTryFrame___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mTryFrame___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mTryFrame(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame_spec__0___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame_spec__0___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__1___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mframe"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(206, 145, 19, 234, 215, 109, 237, 186)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ProofMode"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "elabMFrameOpt"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__7_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__7_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__7_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__7_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(209, 40, 140, 221, 122, 110, 89, 205)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_collectHyps(lean_object* v_P_1_, lean_object* v_acc_2_){
_start:
{
lean_object* v___x_3_; 
lean_inc_ref(v_P_1_);
v___x_3_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_P_1_);
if (lean_obj_tag(v___x_3_) == 1)
{
lean_object* v_val_4_; lean_object* v___x_5_; 
lean_dec_ref(v_P_1_);
v_val_4_ = lean_ctor_get(v___x_3_, 0);
lean_inc(v_val_4_);
lean_dec_ref_known(v___x_3_, 1);
v___x_5_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5_, 0, v_val_4_);
lean_ctor_set(v___x_5_, 1, v_acc_2_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; 
lean_dec(v___x_3_);
v___x_6_ = l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(v_P_1_);
lean_dec_ref(v_P_1_);
if (lean_obj_tag(v___x_6_) == 1)
{
lean_object* v_val_7_; lean_object* v_snd_8_; lean_object* v_snd_9_; lean_object* v_fst_10_; lean_object* v_snd_11_; lean_object* v___x_12_; 
v_val_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_val_7_);
lean_dec_ref_known(v___x_6_, 1);
v_snd_8_ = lean_ctor_get(v_val_7_, 1);
lean_inc(v_snd_8_);
lean_dec(v_val_7_);
v_snd_9_ = lean_ctor_get(v_snd_8_, 1);
lean_inc(v_snd_9_);
lean_dec(v_snd_8_);
v_fst_10_ = lean_ctor_get(v_snd_9_, 0);
lean_inc(v_fst_10_);
v_snd_11_ = lean_ctor_get(v_snd_9_, 1);
lean_inc(v_snd_11_);
lean_dec(v_snd_9_);
v___x_12_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_collectHyps(v_snd_11_, v_acc_2_);
v_P_1_ = v_fst_10_;
v_acc_2_ = v___x_12_;
goto _start;
}
else
{
lean_dec(v___x_6_);
return v_acc_2_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg(lean_object* v___y_14_){
_start:
{
lean_object* v___x_16_; lean_object* v_ngen_17_; lean_object* v_namePrefix_18_; lean_object* v_idx_19_; lean_object* v___x_21_; uint8_t v_isShared_22_; uint8_t v_isSharedCheck_48_; 
v___x_16_ = lean_st_ref_get(v___y_14_);
v_ngen_17_ = lean_ctor_get(v___x_16_, 2);
lean_inc_ref(v_ngen_17_);
lean_dec(v___x_16_);
v_namePrefix_18_ = lean_ctor_get(v_ngen_17_, 0);
v_idx_19_ = lean_ctor_get(v_ngen_17_, 1);
v_isSharedCheck_48_ = !lean_is_exclusive(v_ngen_17_);
if (v_isSharedCheck_48_ == 0)
{
v___x_21_ = v_ngen_17_;
v_isShared_22_ = v_isSharedCheck_48_;
goto v_resetjp_20_;
}
else
{
lean_inc(v_idx_19_);
lean_inc(v_namePrefix_18_);
lean_dec(v_ngen_17_);
v___x_21_ = lean_box(0);
v_isShared_22_ = v_isSharedCheck_48_;
goto v_resetjp_20_;
}
v_resetjp_20_:
{
lean_object* v___x_23_; lean_object* v_env_24_; lean_object* v_nextMacroScope_25_; lean_object* v_auxDeclNGen_26_; lean_object* v_traceState_27_; lean_object* v_cache_28_; lean_object* v_messages_29_; lean_object* v_infoState_30_; lean_object* v_snapshotTasks_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_46_; 
v___x_23_ = lean_st_ref_take(v___y_14_);
v_env_24_ = lean_ctor_get(v___x_23_, 0);
v_nextMacroScope_25_ = lean_ctor_get(v___x_23_, 1);
v_auxDeclNGen_26_ = lean_ctor_get(v___x_23_, 3);
v_traceState_27_ = lean_ctor_get(v___x_23_, 4);
v_cache_28_ = lean_ctor_get(v___x_23_, 5);
v_messages_29_ = lean_ctor_get(v___x_23_, 6);
v_infoState_30_ = lean_ctor_get(v___x_23_, 7);
v_snapshotTasks_31_ = lean_ctor_get(v___x_23_, 8);
v_isSharedCheck_46_ = !lean_is_exclusive(v___x_23_);
if (v_isSharedCheck_46_ == 0)
{
lean_object* v_unused_47_; 
v_unused_47_ = lean_ctor_get(v___x_23_, 2);
lean_dec(v_unused_47_);
v___x_33_ = v___x_23_;
v_isShared_34_ = v_isSharedCheck_46_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_snapshotTasks_31_);
lean_inc(v_infoState_30_);
lean_inc(v_messages_29_);
lean_inc(v_cache_28_);
lean_inc(v_traceState_27_);
lean_inc(v_auxDeclNGen_26_);
lean_inc(v_nextMacroScope_25_);
lean_inc(v_env_24_);
lean_dec(v___x_23_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_46_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v_r_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_39_; 
lean_inc(v_idx_19_);
lean_inc(v_namePrefix_18_);
v_r_35_ = l_Lean_Name_num___override(v_namePrefix_18_, v_idx_19_);
v___x_36_ = lean_unsigned_to_nat(1u);
v___x_37_ = lean_nat_add(v_idx_19_, v___x_36_);
lean_dec(v_idx_19_);
if (v_isShared_22_ == 0)
{
lean_ctor_set(v___x_21_, 1, v___x_37_);
v___x_39_ = v___x_21_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_namePrefix_18_);
lean_ctor_set(v_reuseFailAlloc_45_, 1, v___x_37_);
v___x_39_ = v_reuseFailAlloc_45_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
lean_object* v___x_41_; 
if (v_isShared_34_ == 0)
{
lean_ctor_set(v___x_33_, 2, v___x_39_);
v___x_41_ = v___x_33_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_env_24_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v_nextMacroScope_25_);
lean_ctor_set(v_reuseFailAlloc_44_, 2, v___x_39_);
lean_ctor_set(v_reuseFailAlloc_44_, 3, v_auxDeclNGen_26_);
lean_ctor_set(v_reuseFailAlloc_44_, 4, v_traceState_27_);
lean_ctor_set(v_reuseFailAlloc_44_, 5, v_cache_28_);
lean_ctor_set(v_reuseFailAlloc_44_, 6, v_messages_29_);
lean_ctor_set(v_reuseFailAlloc_44_, 7, v_infoState_30_);
lean_ctor_set(v_reuseFailAlloc_44_, 8, v_snapshotTasks_31_);
v___x_41_ = v_reuseFailAlloc_44_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_st_ref_set(v___y_14_, v___x_41_);
v___x_43_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_43_, 0, v_r_35_);
return v___x_43_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg___boxed(lean_object* v___y_49_, lean_object* v___y_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg(v___y_49_);
lean_dec(v___y_49_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0(lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg(v___y_55_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___boxed(lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0(v___y_58_, v___y_59_, v___y_60_, v___y_61_);
lean_dec(v___y_61_);
lean_dec_ref(v___y_60_);
lean_dec(v___y_59_);
lean_dec_ref(v___y_58_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2(lean_object* v_msg_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___f_71_; lean_object* v___x_3140__overap_72_; lean_object* v___x_73_; 
v___f_71_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___closed__0));
v___x_3140__overap_72_ = lean_panic_fn_borrowed(v___f_71_, v_msg_65_);
lean_inc(v___y_69_);
lean_inc_ref(v___y_68_);
lean_inc(v___y_67_);
lean_inc_ref(v___y_66_);
v___x_73_ = lean_apply_5(v___x_3140__overap_72_, v___y_66_, v___y_67_, v___y_68_, v___y_69_, lean_box(0));
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___boxed(lean_object* v_msg_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2(v_msg_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_);
lean_dec(v___y_78_);
lean_dec_ref(v___y_77_);
lean_dec(v___y_76_);
lean_dec_ref(v___y_75_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg(lean_object* v_a_84_, lean_object* v_Ps_85_, lean_object* v_a_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1));
v___x_93_ = l_Lean_Core_mkFreshUserName(v___x_92_, v___y_89_, v___y_90_);
if (lean_obj_tag(v___x_93_) == 0)
{
lean_object* v_a_94_; lean_object* v___x_95_; 
v_a_94_ = lean_ctor_get(v___x_93_, 0);
lean_inc(v_a_94_);
lean_dec_ref_known(v___x_93_, 1);
v___x_95_ = l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg(v___y_90_);
if (lean_obj_tag(v___x_95_) == 0)
{
lean_object* v_snd_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_162_; 
v_snd_96_ = lean_ctor_get(v_a_86_, 1);
v_isSharedCheck_162_ = !lean_is_exclusive(v_a_86_);
if (v_isSharedCheck_162_ == 0)
{
lean_object* v_unused_163_; 
v_unused_163_ = lean_ctor_get(v_a_86_, 0);
lean_dec(v_unused_163_);
v___x_98_ = v_a_86_;
v_isShared_99_ = v_isSharedCheck_162_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_snd_96_);
lean_dec(v_a_86_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_162_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
if (lean_obj_tag(v_snd_96_) == 1)
{
lean_object* v_head_100_; lean_object* v_tail_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_146_; 
lean_dec_ref_known(v___x_95_, 1);
lean_dec(v_a_94_);
v_head_100_ = lean_ctor_get(v_snd_96_, 0);
v_tail_101_ = lean_ctor_get(v_snd_96_, 1);
v_isSharedCheck_146_ = !lean_is_exclusive(v_snd_96_);
if (v_isSharedCheck_146_ == 0)
{
v___x_103_ = v_snd_96_;
v_isShared_104_ = v_isSharedCheck_146_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_tail_101_);
lean_inc(v_head_100_);
lean_dec(v_snd_96_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_146_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v_name_105_; lean_object* v_uniq_106_; lean_object* v_p_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_145_; 
v_name_105_ = lean_ctor_get(v_head_100_, 0);
v_uniq_106_ = lean_ctor_get(v_head_100_, 1);
v_p_107_ = lean_ctor_get(v_head_100_, 2);
v_isSharedCheck_145_ = !lean_is_exclusive(v_head_100_);
if (v_isSharedCheck_145_ == 0)
{
v___x_109_ = v_head_100_;
v_isShared_110_ = v_isSharedCheck_145_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_p_107_);
lean_inc(v_uniq_106_);
lean_inc(v_name_105_);
lean_dec(v_head_100_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_145_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_111_; 
lean_inc_ref(v_a_84_);
v___x_111_ = l_Lean_Meta_isExprDefEq(v_p_107_, v_a_84_, v___y_87_, v___y_88_, v___y_89_, v___y_90_);
if (lean_obj_tag(v___x_111_) == 0)
{
lean_object* v_a_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_136_; 
v_a_112_ = lean_ctor_get(v___x_111_, 0);
v_isSharedCheck_136_ = !lean_is_exclusive(v___x_111_);
if (v_isSharedCheck_136_ == 0)
{
v___x_114_ = v___x_111_;
v_isShared_115_ = v_isSharedCheck_136_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_a_112_);
lean_dec(v___x_111_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_136_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
uint8_t v___x_116_; 
v___x_116_ = lean_unbox(v_a_112_);
lean_dec(v_a_112_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; lean_object* v___x_119_; 
lean_del_object(v___x_114_);
lean_del_object(v___x_109_);
lean_dec(v_uniq_106_);
lean_dec(v_name_105_);
lean_del_object(v___x_103_);
v___x_117_ = lean_box(0);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 1, v_tail_101_);
lean_ctor_set(v___x_98_, 0, v___x_117_);
v___x_119_ = v___x_98_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v___x_117_);
lean_ctor_set(v_reuseFailAlloc_121_, 1, v_tail_101_);
v___x_119_ = v_reuseFailAlloc_121_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
v_a_86_ = v___x_119_;
goto _start;
}
}
else
{
lean_object* v___x_123_; 
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 2, v_a_84_);
v___x_123_ = v___x_109_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_name_105_);
lean_ctor_set(v_reuseFailAlloc_135_, 1, v_uniq_106_);
lean_ctor_set(v_reuseFailAlloc_135_, 2, v_a_84_);
v___x_123_ = v_reuseFailAlloc_135_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
lean_object* v___x_124_; lean_object* v___x_126_; 
v___x_124_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_123_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 1, v___x_124_);
lean_ctor_set(v___x_98_, 0, v_Ps_85_);
v___x_126_ = v___x_98_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_Ps_85_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v___x_124_);
v___x_126_ = v_reuseFailAlloc_134_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
lean_object* v___x_127_; lean_object* v___x_129_; 
v___x_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
if (v_isShared_104_ == 0)
{
lean_ctor_set_tag(v___x_103_, 0);
lean_ctor_set(v___x_103_, 0, v___x_127_);
v___x_129_ = v___x_103_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_127_);
lean_ctor_set(v_reuseFailAlloc_133_, 1, v_tail_101_);
v___x_129_ = v_reuseFailAlloc_133_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
lean_object* v___x_131_; 
if (v_isShared_115_ == 0)
{
lean_ctor_set(v___x_114_, 0, v___x_129_);
v___x_131_ = v___x_114_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v___x_129_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_144_; 
lean_del_object(v___x_109_);
lean_dec(v_uniq_106_);
lean_dec(v_name_105_);
lean_del_object(v___x_103_);
lean_dec(v_tail_101_);
lean_del_object(v___x_98_);
lean_dec(v_Ps_85_);
lean_dec_ref(v_a_84_);
v_a_137_ = lean_ctor_get(v___x_111_, 0);
v_isSharedCheck_144_ = !lean_is_exclusive(v___x_111_);
if (v_isSharedCheck_144_ == 0)
{
v___x_139_ = v___x_111_;
v_isShared_140_ = v_isSharedCheck_144_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_a_137_);
lean_dec(v___x_111_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_144_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_142_; 
if (v_isShared_140_ == 0)
{
v___x_142_ = v___x_139_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v_a_137_);
v___x_142_ = v_reuseFailAlloc_143_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
return v___x_142_;
}
}
}
}
}
}
else
{
lean_object* v_a_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_161_; 
v_a_147_ = lean_ctor_get(v___x_95_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_161_ == 0)
{
v___x_149_ = v___x_95_;
v_isShared_150_ = v_isSharedCheck_161_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_a_147_);
lean_dec(v___x_95_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_161_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_154_; 
v___x_151_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_151_, 0, v_a_94_);
lean_ctor_set(v___x_151_, 1, v_a_147_);
lean_ctor_set(v___x_151_, 2, v_a_84_);
v___x_152_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_151_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 1, v___x_152_);
lean_ctor_set(v___x_98_, 0, v_Ps_85_);
v___x_154_ = v___x_98_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_Ps_85_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v___x_152_);
v___x_154_ = v_reuseFailAlloc_160_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_158_; 
v___x_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
v___x_156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
lean_ctor_set(v___x_156_, 1, v_snd_96_);
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 0, v___x_156_);
v___x_158_ = v___x_149_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_156_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
}
}
}
else
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
lean_dec(v_a_94_);
lean_dec_ref(v_a_86_);
lean_dec(v_Ps_85_);
lean_dec_ref(v_a_84_);
v_a_164_ = lean_ctor_get(v___x_95_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_171_ == 0)
{
v___x_166_ = v___x_95_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_95_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
if (v_isShared_167_ == 0)
{
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_a_164_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
}
else
{
lean_object* v_a_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_179_; 
lean_dec_ref(v_a_86_);
lean_dec(v_Ps_85_);
lean_dec_ref(v_a_84_);
v_a_172_ = lean_ctor_get(v___x_93_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_93_);
if (v_isSharedCheck_179_ == 0)
{
v___x_174_ = v___x_93_;
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_a_172_);
lean_dec(v___x_93_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_177_; 
if (v_isShared_175_ == 0)
{
v___x_177_ = v___x_174_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_a_172_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___boxed(lean_object* v_a_180_, lean_object* v_Ps_181_, lean_object* v_a_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg(v_a_180_, v_Ps_181_, v_a_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_);
lean_dec(v___y_186_);
lean_dec_ref(v___y_185_);
lean_dec(v___y_184_);
lean_dec_ref(v___y_183_);
return v_res_188_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_192_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__2));
v___x_193_ = lean_unsigned_to_nat(8u);
v___x_194_ = lean_unsigned_to_nat(50u);
v___x_195_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__1));
v___x_196_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__0));
v___x_197_ = l_mkPanicMessageWithDecl(v___x_196_, v___x_195_, v___x_194_, v___x_193_, v___x_192_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(lean_object* v_Ps_198_, lean_object* v_P_x27_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_P_x27_199_, v_a_201_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v_a_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_269_; 
v_a_206_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_269_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_269_ == 0)
{
v___x_208_ = v___x_205_;
v_isShared_209_ = v_isSharedCheck_269_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_a_206_);
lean_dec(v___x_205_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_269_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; 
lean_inc(v_a_206_);
v___x_210_ = l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(v_a_206_);
if (lean_obj_tag(v___x_210_) == 1)
{
lean_object* v___x_211_; lean_object* v___x_213_; 
lean_dec_ref_known(v___x_210_, 1);
v___x_211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_211_, 0, v_Ps_198_);
lean_ctor_set(v___x_211_, 1, v_a_206_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_211_);
v___x_213_ = v___x_208_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_211_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
else
{
lean_object* v___x_215_; 
lean_dec(v___x_210_);
lean_del_object(v___x_208_);
v___x_215_ = l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(v_a_206_);
if (lean_obj_tag(v___x_215_) == 1)
{
lean_object* v_val_216_; lean_object* v_snd_217_; lean_object* v_snd_218_; lean_object* v_fst_219_; lean_object* v_fst_220_; lean_object* v_fst_221_; lean_object* v_snd_222_; lean_object* v___x_223_; 
lean_dec(v_a_206_);
v_val_216_ = lean_ctor_get(v___x_215_, 0);
lean_inc(v_val_216_);
lean_dec_ref_known(v___x_215_, 1);
v_snd_217_ = lean_ctor_get(v_val_216_, 1);
lean_inc(v_snd_217_);
v_snd_218_ = lean_ctor_get(v_snd_217_, 1);
lean_inc(v_snd_218_);
v_fst_219_ = lean_ctor_get(v_val_216_, 0);
lean_inc(v_fst_219_);
lean_dec(v_val_216_);
v_fst_220_ = lean_ctor_get(v_snd_217_, 0);
lean_inc(v_fst_220_);
lean_dec(v_snd_217_);
v_fst_221_ = lean_ctor_get(v_snd_218_, 0);
lean_inc(v_fst_221_);
v_snd_222_ = lean_ctor_get(v_snd_218_, 1);
lean_inc(v_snd_222_);
lean_dec(v_snd_218_);
v___x_223_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(v_Ps_198_, v_fst_221_, v_a_200_, v_a_201_, v_a_202_, v_a_203_);
if (lean_obj_tag(v___x_223_) == 0)
{
lean_object* v_a_224_; lean_object* v_fst_225_; lean_object* v_snd_226_; lean_object* v___x_227_; 
v_a_224_ = lean_ctor_get(v___x_223_, 0);
lean_inc(v_a_224_);
lean_dec_ref_known(v___x_223_, 1);
v_fst_225_ = lean_ctor_get(v_a_224_, 0);
lean_inc(v_fst_225_);
v_snd_226_ = lean_ctor_get(v_a_224_, 1);
lean_inc(v_snd_226_);
lean_dec(v_a_224_);
v___x_227_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(v_fst_225_, v_snd_222_, v_a_200_, v_a_201_, v_a_202_, v_a_203_);
if (lean_obj_tag(v___x_227_) == 0)
{
lean_object* v_a_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_245_; 
v_a_228_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_245_ == 0)
{
v___x_230_ = v___x_227_;
v_isShared_231_ = v_isSharedCheck_245_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_a_228_);
lean_dec(v___x_227_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_245_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v_fst_232_; lean_object* v_snd_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_244_; 
v_fst_232_ = lean_ctor_get(v_a_228_, 0);
v_snd_233_ = lean_ctor_get(v_a_228_, 1);
v_isSharedCheck_244_ = !lean_is_exclusive(v_a_228_);
if (v_isSharedCheck_244_ == 0)
{
v___x_235_ = v_a_228_;
v_isShared_236_ = v_isSharedCheck_244_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_snd_233_);
lean_inc(v_fst_232_);
lean_dec(v_a_228_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_244_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_237_; lean_object* v___x_239_; 
v___x_237_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_fst_219_, v_fst_220_, v_snd_226_, v_snd_233_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 1, v___x_237_);
v___x_239_ = v___x_235_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_fst_232_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v___x_237_);
v___x_239_ = v_reuseFailAlloc_243_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
lean_object* v___x_241_; 
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 0, v___x_239_);
v___x_241_ = v___x_230_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_239_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
}
else
{
lean_dec(v_snd_226_);
lean_dec(v_fst_220_);
lean_dec(v_fst_219_);
return v___x_227_;
}
}
else
{
lean_dec(v_snd_222_);
lean_dec(v_fst_220_);
lean_dec(v_fst_219_);
return v___x_223_;
}
}
else
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
lean_dec(v___x_215_);
v___x_246_ = lean_box(0);
lean_inc(v_Ps_198_);
v___x_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
lean_ctor_set(v___x_247_, 1, v_Ps_198_);
v___x_248_ = l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg(v_a_206_, v_Ps_198_, v___x_247_, v_a_200_, v_a_201_, v_a_202_, v_a_203_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_260_; 
v_a_249_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_260_ == 0)
{
v___x_251_ = v___x_248_;
v_isShared_252_ = v_isSharedCheck_260_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_248_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_260_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v_fst_253_; 
v_fst_253_ = lean_ctor_get(v_a_249_, 0);
lean_inc(v_fst_253_);
lean_dec(v_a_249_);
if (lean_obj_tag(v_fst_253_) == 0)
{
lean_object* v___x_254_; lean_object* v___x_255_; 
lean_del_object(v___x_251_);
v___x_254_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3, &l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3);
v___x_255_ = l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2(v___x_254_, v_a_200_, v_a_201_, v_a_202_, v_a_203_);
return v___x_255_;
}
else
{
lean_object* v_val_256_; lean_object* v___x_258_; 
v_val_256_ = lean_ctor_get(v_fst_253_, 0);
lean_inc(v_val_256_);
lean_dec_ref_known(v_fst_253_, 1);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 0, v_val_256_);
v___x_258_ = v___x_251_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_val_256_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
else
{
lean_object* v_a_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_268_; 
v_a_261_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_268_ == 0)
{
v___x_263_ = v___x_248_;
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_a_261_);
lean_dec(v___x_248_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_a_261_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_277_; 
lean_dec(v_Ps_198_);
v_a_270_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_277_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_277_ == 0)
{
v___x_272_ = v___x_205_;
v_isShared_273_ = v_isSharedCheck_277_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_a_270_);
lean_dec(v___x_205_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_277_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_275_; 
if (v_isShared_273_ == 0)
{
v___x_275_ = v___x_272_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v_a_270_);
v___x_275_ = v_reuseFailAlloc_276_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
return v___x_275_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___boxed(lean_object* v_Ps_278_, lean_object* v_P_x27_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(v_Ps_278_, v_P_x27_279_, v_a_280_, v_a_281_, v_a_282_, v_a_283_);
lean_dec(v_a_283_);
lean_dec_ref(v_a_282_);
lean_dec(v_a_281_);
lean_dec_ref(v_a_280_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1(lean_object* v_a_286_, lean_object* v_Ps_287_, lean_object* v_inst_288_, lean_object* v_a_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg(v_a_286_, v_Ps_287_, v_a_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___boxed(lean_object* v_a_296_, lean_object* v_Ps_297_, lean_object* v_inst_298_, lean_object* v_a_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1(v_a_296_, v_Ps_297_, v_inst_298_, v_a_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames(lean_object* v_P_306_, lean_object* v_P_x27_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_313_ = lean_box(0);
v___x_314_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_collectHyps(v_P_306_, v___x_313_);
v___x_315_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(v___x_314_, v_P_x27_307_, v_a_308_, v_a_309_, v_a_310_, v_a_311_);
if (lean_obj_tag(v___x_315_) == 0)
{
lean_object* v_a_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_324_; 
v_a_316_ = lean_ctor_get(v___x_315_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_315_);
if (v_isSharedCheck_324_ == 0)
{
v___x_318_ = v___x_315_;
v_isShared_319_ = v_isSharedCheck_324_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_a_316_);
lean_dec(v___x_315_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_324_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v_snd_320_; lean_object* v___x_322_; 
v_snd_320_ = lean_ctor_get(v_a_316_, 1);
lean_inc(v_snd_320_);
lean_dec(v_a_316_);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 0, v_snd_320_);
v___x_322_ = v___x_318_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_snd_320_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
else
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_332_; 
v_a_325_ = lean_ctor_get(v___x_315_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_315_);
if (v_isSharedCheck_332_ == 0)
{
v___x_327_ = v___x_315_;
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_315_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_330_; 
if (v_isShared_328_ == 0)
{
v___x_330_ = v___x_327_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_a_325_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames___boxed(lean_object* v_P_333_, lean_object* v_P_x27_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames(v_P_333_, v_P_x27_334_, v_a_335_, v_a_336_, v_a_337_, v_a_338_);
lean_dec(v_a_338_);
lean_dec_ref(v_a_337_);
lean_dec(v_a_336_);
lean_dec_ref(v_a_335_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0(lean_object* v_toApplicative_343_, lean_object* v___x_344_, lean_object* v___x_345_, lean_object* v___x_346_, lean_object* v___x_347_, lean_object* v___x_348_, lean_object* v_00_u03c3s_349_, lean_object* v_hyps_350_, lean_object* v_P_x27_351_, lean_object* v_target_352_, lean_object* v_00_u03c6_353_, lean_object* v_a_354_, lean_object* v_prf_355_){
_start:
{
lean_object* v_toPure_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v_prf_361_; lean_object* v___x_362_; 
v_toPure_356_ = lean_ctor_get(v_toApplicative_343_, 1);
lean_inc(v_toPure_356_);
lean_dec_ref(v_toApplicative_343_);
v___x_357_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__0));
v___x_358_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__1));
v___x_359_ = l_Lean_Name_mkStr6(v___x_344_, v___x_345_, v___x_346_, v___x_347_, v___x_357_, v___x_358_);
v___x_360_ = l_Lean_mkConst(v___x_359_, v___x_348_);
v_prf_361_ = l_Lean_mkApp7(v___x_360_, v_00_u03c3s_349_, v_hyps_350_, v_P_x27_351_, v_target_352_, v_00_u03c6_353_, v_a_354_, v_prf_355_);
v___x_362_ = lean_apply_2(v_toPure_356_, lean_box(0), v_prf_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1(lean_object* v_h_u03c6_363_, uint8_t v_____do__lift_364_, uint8_t v___x_365_, lean_object* v_inst_366_, lean_object* v_toBind_367_, lean_object* v___f_368_, lean_object* v_prf_369_){
_start:
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_370_ = lean_unsigned_to_nat(1u);
v___x_371_ = lean_mk_empty_array_with_capacity(v___x_370_);
v___x_372_ = lean_array_push(v___x_371_, v_h_u03c6_363_);
v___x_373_ = 1;
v___x_374_ = lean_box(v_____do__lift_364_);
v___x_375_ = lean_box(v___x_365_);
v___x_376_ = lean_box(v_____do__lift_364_);
v___x_377_ = lean_box(v___x_365_);
v___x_378_ = lean_box(v___x_373_);
v___x_379_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_379_, 0, v___x_372_);
lean_closure_set(v___x_379_, 1, v_prf_369_);
lean_closure_set(v___x_379_, 2, v___x_374_);
lean_closure_set(v___x_379_, 3, v___x_375_);
lean_closure_set(v___x_379_, 4, v___x_376_);
lean_closure_set(v___x_379_, 5, v___x_377_);
lean_closure_set(v___x_379_, 6, v___x_378_);
v___x_380_ = lean_apply_2(v_inst_366_, lean_box(0), v___x_379_);
v___x_381_ = lean_apply_4(v_toBind_367_, lean_box(0), lean_box(0), v___x_380_, v___f_368_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1___boxed(lean_object* v_h_u03c6_382_, lean_object* v_____do__lift_383_, lean_object* v___x_384_, lean_object* v_inst_385_, lean_object* v_toBind_386_, lean_object* v___f_387_, lean_object* v_prf_388_){
_start:
{
uint8_t v_____do__lift_503__boxed_389_; uint8_t v___x_504__boxed_390_; lean_object* v_res_391_; 
v_____do__lift_503__boxed_389_ = lean_unbox(v_____do__lift_383_);
v___x_504__boxed_390_ = lean_unbox(v___x_384_);
v_res_391_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1(v_h_u03c6_382_, v_____do__lift_503__boxed_389_, v___x_504__boxed_390_, v_inst_385_, v_toBind_386_, v___f_387_, v_prf_388_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2(uint8_t v_____do__lift_392_, uint8_t v___x_393_, lean_object* v_inst_394_, lean_object* v_toBind_395_, lean_object* v___f_396_, lean_object* v_kSuccess_397_, lean_object* v_00_u03c6_398_, lean_object* v_goal_399_, lean_object* v_h_u03c6_400_){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___f_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_401_ = lean_box(v_____do__lift_392_);
v___x_402_ = lean_box(v___x_393_);
lean_inc(v_toBind_395_);
lean_inc_ref(v_h_u03c6_400_);
v___f_403_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_403_, 0, v_h_u03c6_400_);
lean_closure_set(v___f_403_, 1, v___x_401_);
lean_closure_set(v___f_403_, 2, v___x_402_);
lean_closure_set(v___f_403_, 3, v_inst_394_);
lean_closure_set(v___f_403_, 4, v_toBind_395_);
lean_closure_set(v___f_403_, 5, v___f_396_);
v___x_404_ = lean_apply_3(v_kSuccess_397_, v_00_u03c6_398_, v_h_u03c6_400_, v_goal_399_);
v___x_405_ = lean_apply_4(v_toBind_395_, lean_box(0), lean_box(0), v___x_404_, v___f_403_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2___boxed(lean_object* v_____do__lift_406_, lean_object* v___x_407_, lean_object* v_inst_408_, lean_object* v_toBind_409_, lean_object* v___f_410_, lean_object* v_kSuccess_411_, lean_object* v_00_u03c6_412_, lean_object* v_goal_413_, lean_object* v_h_u03c6_414_){
_start:
{
uint8_t v_____do__lift_539__boxed_415_; uint8_t v___x_540__boxed_416_; lean_object* v_res_417_; 
v_____do__lift_539__boxed_415_ = lean_unbox(v_____do__lift_406_);
v___x_540__boxed_416_ = lean_unbox(v___x_407_);
v_res_417_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2(v_____do__lift_539__boxed_415_, v___x_540__boxed_416_, v_inst_408_, v_toBind_409_, v___f_410_, v_kSuccess_411_, v_00_u03c6_412_, v_goal_413_, v_h_u03c6_414_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__3(lean_object* v_inst_418_, lean_object* v_inst_419_, lean_object* v_00_u03c6_420_, lean_object* v___f_421_, lean_object* v_____do__lift_422_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_418_, v_inst_419_, v_____do__lift_422_, v_00_u03c6_420_, v___f_421_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4(lean_object* v___x_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_){
_start:
{
lean_object* v___x_430_; 
v___x_430_ = l_Lean_Core_mkFreshUserName(v___x_424_, v___y_427_, v___y_428_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4___boxed(lean_object* v___x_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4(v___x_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
lean_dec(v___y_433_);
lean_dec_ref(v___y_432_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5(lean_object* v_toApplicative_440_, lean_object* v___x_441_, lean_object* v___x_442_, lean_object* v___x_443_, lean_object* v___x_444_, lean_object* v___x_445_, lean_object* v_00_u03c3s_446_, lean_object* v_hyps_447_, lean_object* v_target_448_, lean_object* v_00_u03c6_449_, lean_object* v_a_450_, lean_object* v_u_451_, uint8_t v_____do__lift_452_, uint8_t v___x_453_, lean_object* v_inst_454_, lean_object* v_toBind_455_, lean_object* v_kSuccess_456_, lean_object* v_inst_457_, lean_object* v_inst_458_, lean_object* v_P_x27_459_){
_start:
{
lean_object* v___f_460_; lean_object* v_goal_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___f_464_; lean_object* v___f_465_; lean_object* v___f_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
lean_inc_ref_n(v_00_u03c6_449_, 2);
lean_inc_ref(v_target_448_);
lean_inc_ref(v_P_x27_459_);
lean_inc_ref(v_00_u03c3s_446_);
v___f_460_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0), 13, 12);
lean_closure_set(v___f_460_, 0, v_toApplicative_440_);
lean_closure_set(v___f_460_, 1, v___x_441_);
lean_closure_set(v___f_460_, 2, v___x_442_);
lean_closure_set(v___f_460_, 3, v___x_443_);
lean_closure_set(v___f_460_, 4, v___x_444_);
lean_closure_set(v___f_460_, 5, v___x_445_);
lean_closure_set(v___f_460_, 6, v_00_u03c3s_446_);
lean_closure_set(v___f_460_, 7, v_hyps_447_);
lean_closure_set(v___f_460_, 8, v_P_x27_459_);
lean_closure_set(v___f_460_, 9, v_target_448_);
lean_closure_set(v___f_460_, 10, v_00_u03c6_449_);
lean_closure_set(v___f_460_, 11, v_a_450_);
v_goal_461_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_goal_461_, 0, v_u_451_);
lean_ctor_set(v_goal_461_, 1, v_00_u03c3s_446_);
lean_ctor_set(v_goal_461_, 2, v_P_x27_459_);
lean_ctor_set(v_goal_461_, 3, v_target_448_);
v___x_462_ = lean_box(v_____do__lift_452_);
v___x_463_ = lean_box(v___x_453_);
lean_inc(v_toBind_455_);
lean_inc(v_inst_454_);
v___f_464_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_464_, 0, v___x_462_);
lean_closure_set(v___f_464_, 1, v___x_463_);
lean_closure_set(v___f_464_, 2, v_inst_454_);
lean_closure_set(v___f_464_, 3, v_toBind_455_);
lean_closure_set(v___f_464_, 4, v___f_460_);
lean_closure_set(v___f_464_, 5, v_kSuccess_456_);
lean_closure_set(v___f_464_, 6, v_00_u03c6_449_);
lean_closure_set(v___f_464_, 7, v_goal_461_);
v___f_465_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__3), 5, 4);
lean_closure_set(v___f_465_, 0, v_inst_457_);
lean_closure_set(v___f_465_, 1, v_inst_458_);
lean_closure_set(v___f_465_, 2, v_00_u03c6_449_);
lean_closure_set(v___f_465_, 3, v___f_464_);
v___f_466_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0));
v___x_467_ = lean_apply_2(v_inst_454_, lean_box(0), v___f_466_);
v___x_468_ = lean_apply_4(v_toBind_455_, lean_box(0), lean_box(0), v___x_467_, v___f_465_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___boxed(lean_object** _args){
lean_object* v_toApplicative_469_ = _args[0];
lean_object* v___x_470_ = _args[1];
lean_object* v___x_471_ = _args[2];
lean_object* v___x_472_ = _args[3];
lean_object* v___x_473_ = _args[4];
lean_object* v___x_474_ = _args[5];
lean_object* v_00_u03c3s_475_ = _args[6];
lean_object* v_hyps_476_ = _args[7];
lean_object* v_target_477_ = _args[8];
lean_object* v_00_u03c6_478_ = _args[9];
lean_object* v_a_479_ = _args[10];
lean_object* v_u_480_ = _args[11];
lean_object* v_____do__lift_481_ = _args[12];
lean_object* v___x_482_ = _args[13];
lean_object* v_inst_483_ = _args[14];
lean_object* v_toBind_484_ = _args[15];
lean_object* v_kSuccess_485_ = _args[16];
lean_object* v_inst_486_ = _args[17];
lean_object* v_inst_487_ = _args[18];
lean_object* v_P_x27_488_ = _args[19];
_start:
{
uint8_t v_____do__lift_604__boxed_489_; uint8_t v___x_605__boxed_490_; lean_object* v_res_491_; 
v_____do__lift_604__boxed_489_ = lean_unbox(v_____do__lift_481_);
v___x_605__boxed_490_ = lean_unbox(v___x_482_);
v_res_491_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5(v_toApplicative_469_, v___x_470_, v___x_471_, v___x_472_, v___x_473_, v___x_474_, v_00_u03c3s_475_, v_hyps_476_, v_target_477_, v_00_u03c6_478_, v_a_479_, v_u_480_, v_____do__lift_604__boxed_489_, v___x_605__boxed_490_, v_inst_483_, v_toBind_484_, v_kSuccess_485_, v_inst_486_, v_inst_487_, v_P_x27_488_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6(lean_object* v_toApplicative_492_, lean_object* v___x_493_, lean_object* v___x_494_, lean_object* v___x_495_, lean_object* v___x_496_, lean_object* v___x_497_, lean_object* v_00_u03c3s_498_, lean_object* v_hyps_499_, lean_object* v_target_500_, lean_object* v_00_u03c6_501_, lean_object* v_a_502_, lean_object* v_u_503_, lean_object* v_inst_504_, lean_object* v_toBind_505_, lean_object* v_kSuccess_506_, lean_object* v_inst_507_, lean_object* v_inst_508_, lean_object* v_P_x27_509_, lean_object* v_kFail_510_, uint8_t v_____do__lift_511_){
_start:
{
if (v_____do__lift_511_ == 0)
{
uint8_t v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___f_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_512_ = 1;
v___x_513_ = lean_box(v_____do__lift_511_);
v___x_514_ = lean_box(v___x_512_);
lean_inc(v_toBind_505_);
lean_inc(v_inst_504_);
lean_inc_ref(v_hyps_499_);
v___f_515_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___boxed), 20, 19);
lean_closure_set(v___f_515_, 0, v_toApplicative_492_);
lean_closure_set(v___f_515_, 1, v___x_493_);
lean_closure_set(v___f_515_, 2, v___x_494_);
lean_closure_set(v___f_515_, 3, v___x_495_);
lean_closure_set(v___f_515_, 4, v___x_496_);
lean_closure_set(v___f_515_, 5, v___x_497_);
lean_closure_set(v___f_515_, 6, v_00_u03c3s_498_);
lean_closure_set(v___f_515_, 7, v_hyps_499_);
lean_closure_set(v___f_515_, 8, v_target_500_);
lean_closure_set(v___f_515_, 9, v_00_u03c6_501_);
lean_closure_set(v___f_515_, 10, v_a_502_);
lean_closure_set(v___f_515_, 11, v_u_503_);
lean_closure_set(v___f_515_, 12, v___x_513_);
lean_closure_set(v___f_515_, 13, v___x_514_);
lean_closure_set(v___f_515_, 14, v_inst_504_);
lean_closure_set(v___f_515_, 15, v_toBind_505_);
lean_closure_set(v___f_515_, 16, v_kSuccess_506_);
lean_closure_set(v___f_515_, 17, v_inst_507_);
lean_closure_set(v___f_515_, 18, v_inst_508_);
v___x_516_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames___boxed), 7, 2);
lean_closure_set(v___x_516_, 0, v_hyps_499_);
lean_closure_set(v___x_516_, 1, v_P_x27_509_);
v___x_517_ = lean_apply_2(v_inst_504_, lean_box(0), v___x_516_);
v___x_518_ = lean_apply_4(v_toBind_505_, lean_box(0), lean_box(0), v___x_517_, v___f_515_);
return v___x_518_;
}
else
{
lean_dec_ref(v_P_x27_509_);
lean_dec_ref(v_inst_508_);
lean_dec_ref(v_inst_507_);
lean_dec(v_kSuccess_506_);
lean_dec(v_toBind_505_);
lean_dec(v_inst_504_);
lean_dec(v_u_503_);
lean_dec_ref(v_a_502_);
lean_dec_ref(v_00_u03c6_501_);
lean_dec_ref(v_target_500_);
lean_dec_ref(v_hyps_499_);
lean_dec_ref(v_00_u03c3s_498_);
lean_dec(v___x_497_);
lean_dec_ref(v___x_496_);
lean_dec_ref(v___x_495_);
lean_dec_ref(v___x_494_);
lean_dec_ref(v___x_493_);
lean_dec_ref(v_toApplicative_492_);
lean_inc(v_kFail_510_);
return v_kFail_510_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_toApplicative_519_ = _args[0];
lean_object* v___x_520_ = _args[1];
lean_object* v___x_521_ = _args[2];
lean_object* v___x_522_ = _args[3];
lean_object* v___x_523_ = _args[4];
lean_object* v___x_524_ = _args[5];
lean_object* v_00_u03c3s_525_ = _args[6];
lean_object* v_hyps_526_ = _args[7];
lean_object* v_target_527_ = _args[8];
lean_object* v_00_u03c6_528_ = _args[9];
lean_object* v_a_529_ = _args[10];
lean_object* v_u_530_ = _args[11];
lean_object* v_inst_531_ = _args[12];
lean_object* v_toBind_532_ = _args[13];
lean_object* v_kSuccess_533_ = _args[14];
lean_object* v_inst_534_ = _args[15];
lean_object* v_inst_535_ = _args[16];
lean_object* v_P_x27_536_ = _args[17];
lean_object* v_kFail_537_ = _args[18];
lean_object* v_____do__lift_538_ = _args[19];
_start:
{
uint8_t v_____do__lift_658__boxed_539_; lean_object* v_res_540_; 
v_____do__lift_658__boxed_539_ = lean_unbox(v_____do__lift_538_);
v_res_540_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6(v_toApplicative_519_, v___x_520_, v___x_521_, v___x_522_, v___x_523_, v___x_524_, v_00_u03c3s_525_, v_hyps_526_, v_target_527_, v_00_u03c6_528_, v_a_529_, v_u_530_, v_inst_531_, v_toBind_532_, v_kSuccess_533_, v_inst_534_, v_inst_535_, v_P_x27_536_, v_kFail_537_, v_____do__lift_658__boxed_539_);
lean_dec(v_kFail_537_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7(lean_object* v_toApplicative_544_, lean_object* v___x_545_, lean_object* v___x_546_, lean_object* v___x_547_, lean_object* v___x_548_, lean_object* v___x_549_, lean_object* v_00_u03c3s_550_, lean_object* v_hyps_551_, lean_object* v_target_552_, lean_object* v_00_u03c6_553_, lean_object* v_u_554_, lean_object* v_inst_555_, lean_object* v_toBind_556_, lean_object* v_kSuccess_557_, lean_object* v_inst_558_, lean_object* v_inst_559_, lean_object* v_P_x27_560_, lean_object* v_kFail_561_, lean_object* v___x_562_, lean_object* v_____do__lift_563_){
_start:
{
if (lean_obj_tag(v_____do__lift_563_) == 1)
{
lean_object* v_a_564_; lean_object* v___f_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v_a_564_ = lean_ctor_get(v_____do__lift_563_, 0);
lean_inc(v_a_564_);
lean_dec_ref_known(v_____do__lift_563_, 1);
lean_inc(v_toBind_556_);
lean_inc(v_inst_555_);
lean_inc_ref(v_00_u03c6_553_);
v___f_565_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6___boxed), 20, 19);
lean_closure_set(v___f_565_, 0, v_toApplicative_544_);
lean_closure_set(v___f_565_, 1, v___x_545_);
lean_closure_set(v___f_565_, 2, v___x_546_);
lean_closure_set(v___f_565_, 3, v___x_547_);
lean_closure_set(v___f_565_, 4, v___x_548_);
lean_closure_set(v___f_565_, 5, v___x_549_);
lean_closure_set(v___f_565_, 6, v_00_u03c3s_550_);
lean_closure_set(v___f_565_, 7, v_hyps_551_);
lean_closure_set(v___f_565_, 8, v_target_552_);
lean_closure_set(v___f_565_, 9, v_00_u03c6_553_);
lean_closure_set(v___f_565_, 10, v_a_564_);
lean_closure_set(v___f_565_, 11, v_u_554_);
lean_closure_set(v___f_565_, 12, v_inst_555_);
lean_closure_set(v___f_565_, 13, v_toBind_556_);
lean_closure_set(v___f_565_, 14, v_kSuccess_557_);
lean_closure_set(v___f_565_, 15, v_inst_558_);
lean_closure_set(v___f_565_, 16, v_inst_559_);
lean_closure_set(v___f_565_, 17, v_P_x27_560_);
lean_closure_set(v___f_565_, 18, v_kFail_561_);
v___x_566_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__1));
v___x_567_ = l_Lean_mkConst(v___x_566_, v___x_562_);
v___x_568_ = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq___boxed), 7, 2);
lean_closure_set(v___x_568_, 0, v___x_567_);
lean_closure_set(v___x_568_, 1, v_00_u03c6_553_);
v___x_569_ = lean_apply_2(v_inst_555_, lean_box(0), v___x_568_);
v___x_570_ = lean_apply_4(v_toBind_556_, lean_box(0), lean_box(0), v___x_569_, v___f_565_);
return v___x_570_;
}
else
{
lean_dec(v_____do__lift_563_);
lean_dec(v___x_562_);
lean_dec_ref(v_P_x27_560_);
lean_dec_ref(v_inst_559_);
lean_dec_ref(v_inst_558_);
lean_dec(v_kSuccess_557_);
lean_dec(v_toBind_556_);
lean_dec(v_inst_555_);
lean_dec(v_u_554_);
lean_dec_ref(v_00_u03c6_553_);
lean_dec_ref(v_target_552_);
lean_dec_ref(v_hyps_551_);
lean_dec_ref(v_00_u03c3s_550_);
lean_dec(v___x_549_);
lean_dec_ref(v___x_548_);
lean_dec_ref(v___x_547_);
lean_dec_ref(v___x_546_);
lean_dec_ref(v___x_545_);
lean_dec_ref(v_toApplicative_544_);
return v_kFail_561_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___boxed(lean_object** _args){
lean_object* v_toApplicative_571_ = _args[0];
lean_object* v___x_572_ = _args[1];
lean_object* v___x_573_ = _args[2];
lean_object* v___x_574_ = _args[3];
lean_object* v___x_575_ = _args[4];
lean_object* v___x_576_ = _args[5];
lean_object* v_00_u03c3s_577_ = _args[6];
lean_object* v_hyps_578_ = _args[7];
lean_object* v_target_579_ = _args[8];
lean_object* v_00_u03c6_580_ = _args[9];
lean_object* v_u_581_ = _args[10];
lean_object* v_inst_582_ = _args[11];
lean_object* v_toBind_583_ = _args[12];
lean_object* v_kSuccess_584_ = _args[13];
lean_object* v_inst_585_ = _args[14];
lean_object* v_inst_586_ = _args[15];
lean_object* v_P_x27_587_ = _args[16];
lean_object* v_kFail_588_ = _args[17];
lean_object* v___x_589_ = _args[18];
lean_object* v_____do__lift_590_ = _args[19];
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7(v_toApplicative_571_, v___x_572_, v___x_573_, v___x_574_, v___x_575_, v___x_576_, v_00_u03c3s_577_, v_hyps_578_, v_target_579_, v_00_u03c6_580_, v_u_581_, v_inst_582_, v_toBind_583_, v_kSuccess_584_, v_inst_585_, v_inst_586_, v_P_x27_587_, v_kFail_588_, v___x_589_, v_____do__lift_590_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8(lean_object* v_toApplicative_594_, lean_object* v___x_595_, lean_object* v___x_596_, lean_object* v___x_597_, lean_object* v___x_598_, lean_object* v_00_u03c3s_599_, lean_object* v_hyps_600_, lean_object* v_target_601_, lean_object* v_00_u03c6_602_, lean_object* v_u_603_, lean_object* v_inst_604_, lean_object* v_toBind_605_, lean_object* v_kSuccess_606_, lean_object* v_inst_607_, lean_object* v_inst_608_, lean_object* v_kFail_609_, lean_object* v___x_610_, lean_object* v_P_x27_611_){
_start:
{
lean_object* v___x_612_; lean_object* v___f_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_612_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0));
lean_inc_ref(v_P_x27_611_);
lean_inc(v_toBind_605_);
lean_inc(v_inst_604_);
lean_inc_ref(v_00_u03c6_602_);
lean_inc_ref(v_hyps_600_);
lean_inc_ref(v_00_u03c3s_599_);
lean_inc(v___x_598_);
lean_inc_ref(v___x_597_);
lean_inc_ref(v___x_596_);
lean_inc_ref(v___x_595_);
v___f_613_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___boxed), 20, 19);
lean_closure_set(v___f_613_, 0, v_toApplicative_594_);
lean_closure_set(v___f_613_, 1, v___x_595_);
lean_closure_set(v___f_613_, 2, v___x_596_);
lean_closure_set(v___f_613_, 3, v___x_597_);
lean_closure_set(v___f_613_, 4, v___x_612_);
lean_closure_set(v___f_613_, 5, v___x_598_);
lean_closure_set(v___f_613_, 6, v_00_u03c3s_599_);
lean_closure_set(v___f_613_, 7, v_hyps_600_);
lean_closure_set(v___f_613_, 8, v_target_601_);
lean_closure_set(v___f_613_, 9, v_00_u03c6_602_);
lean_closure_set(v___f_613_, 10, v_u_603_);
lean_closure_set(v___f_613_, 11, v_inst_604_);
lean_closure_set(v___f_613_, 12, v_toBind_605_);
lean_closure_set(v___f_613_, 13, v_kSuccess_606_);
lean_closure_set(v___f_613_, 14, v_inst_607_);
lean_closure_set(v___f_613_, 15, v_inst_608_);
lean_closure_set(v___f_613_, 16, v_P_x27_611_);
lean_closure_set(v___f_613_, 17, v_kFail_609_);
lean_closure_set(v___f_613_, 18, v___x_610_);
v___x_614_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__1));
v___x_615_ = l_Lean_Name_mkStr5(v___x_595_, v___x_596_, v___x_597_, v___x_612_, v___x_614_);
v___x_616_ = l_Lean_mkConst(v___x_615_, v___x_598_);
v___x_617_ = l_Lean_mkApp4(v___x_616_, v_00_u03c3s_599_, v_hyps_600_, v_P_x27_611_, v_00_u03c6_602_);
v___x_618_ = lean_box(0);
v___x_619_ = lean_alloc_closure((void*)(l_Lean_Meta_trySynthInstance___boxed), 7, 2);
lean_closure_set(v___x_619_, 0, v___x_617_);
lean_closure_set(v___x_619_, 1, v___x_618_);
v___x_620_ = lean_apply_2(v_inst_604_, lean_box(0), v___x_619_);
v___x_621_ = lean_apply_4(v_toBind_605_, lean_box(0), lean_box(0), v___x_620_, v___f_613_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___boxed(lean_object** _args){
lean_object* v_toApplicative_622_ = _args[0];
lean_object* v___x_623_ = _args[1];
lean_object* v___x_624_ = _args[2];
lean_object* v___x_625_ = _args[3];
lean_object* v___x_626_ = _args[4];
lean_object* v_00_u03c3s_627_ = _args[5];
lean_object* v_hyps_628_ = _args[6];
lean_object* v_target_629_ = _args[7];
lean_object* v_00_u03c6_630_ = _args[8];
lean_object* v_u_631_ = _args[9];
lean_object* v_inst_632_ = _args[10];
lean_object* v_toBind_633_ = _args[11];
lean_object* v_kSuccess_634_ = _args[12];
lean_object* v_inst_635_ = _args[13];
lean_object* v_inst_636_ = _args[14];
lean_object* v_kFail_637_ = _args[15];
lean_object* v___x_638_ = _args[16];
lean_object* v_P_x27_639_ = _args[17];
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8(v_toApplicative_622_, v___x_623_, v___x_624_, v___x_625_, v___x_626_, v_00_u03c3s_627_, v_hyps_628_, v_target_629_, v_00_u03c6_630_, v_u_631_, v_inst_632_, v_toBind_633_, v_kSuccess_634_, v_inst_635_, v_inst_636_, v_kFail_637_, v___x_638_, v_P_x27_639_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9(lean_object* v_u_648_, lean_object* v_toApplicative_649_, lean_object* v_00_u03c3s_650_, lean_object* v_hyps_651_, lean_object* v_target_652_, lean_object* v_inst_653_, lean_object* v_toBind_654_, lean_object* v_kSuccess_655_, lean_object* v_inst_656_, lean_object* v_inst_657_, lean_object* v_kFail_658_, uint8_t v___x_659_, lean_object* v___x_660_, lean_object* v_00_u03c6_661_){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___f_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_662_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0));
v___x_663_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1));
v___x_664_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2));
v___x_665_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3));
v___x_666_ = lean_box(0);
lean_inc(v_u_648_);
v___x_667_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_667_, 0, v_u_648_);
lean_ctor_set(v___x_667_, 1, v___x_666_);
lean_inc(v_toBind_654_);
lean_inc(v_inst_653_);
lean_inc_ref(v_00_u03c3s_650_);
lean_inc_ref(v___x_667_);
v___f_668_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___boxed), 18, 17);
lean_closure_set(v___f_668_, 0, v_toApplicative_649_);
lean_closure_set(v___f_668_, 1, v___x_662_);
lean_closure_set(v___f_668_, 2, v___x_663_);
lean_closure_set(v___f_668_, 3, v___x_664_);
lean_closure_set(v___f_668_, 4, v___x_667_);
lean_closure_set(v___f_668_, 5, v_00_u03c3s_650_);
lean_closure_set(v___f_668_, 6, v_hyps_651_);
lean_closure_set(v___f_668_, 7, v_target_652_);
lean_closure_set(v___f_668_, 8, v_00_u03c6_661_);
lean_closure_set(v___f_668_, 9, v_u_648_);
lean_closure_set(v___f_668_, 10, v_inst_653_);
lean_closure_set(v___f_668_, 11, v_toBind_654_);
lean_closure_set(v___f_668_, 12, v_kSuccess_655_);
lean_closure_set(v___f_668_, 13, v_inst_656_);
lean_closure_set(v___f_668_, 14, v_inst_657_);
lean_closure_set(v___f_668_, 15, v_kFail_658_);
lean_closure_set(v___f_668_, 16, v___x_666_);
v___x_669_ = l_Lean_mkConst(v___x_665_, v___x_667_);
v___x_670_ = l_Lean_Expr_app___override(v___x_669_, v_00_u03c3s_650_);
v___x_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_671_, 0, v___x_670_);
v___x_672_ = lean_box(v___x_659_);
v___x_673_ = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshExprMVar___boxed), 8, 3);
lean_closure_set(v___x_673_, 0, v___x_671_);
lean_closure_set(v___x_673_, 1, v___x_672_);
lean_closure_set(v___x_673_, 2, v___x_660_);
v___x_674_ = lean_apply_2(v_inst_653_, lean_box(0), v___x_673_);
v___x_675_ = lean_apply_4(v_toBind_654_, lean_box(0), lean_box(0), v___x_674_, v___f_668_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___boxed(lean_object* v_u_676_, lean_object* v_toApplicative_677_, lean_object* v_00_u03c3s_678_, lean_object* v_hyps_679_, lean_object* v_target_680_, lean_object* v_inst_681_, lean_object* v_toBind_682_, lean_object* v_kSuccess_683_, lean_object* v_inst_684_, lean_object* v_inst_685_, lean_object* v_kFail_686_, lean_object* v___x_687_, lean_object* v___x_688_, lean_object* v_00_u03c6_689_){
_start:
{
uint8_t v___x_813__boxed_690_; lean_object* v_res_691_; 
v___x_813__boxed_690_ = lean_unbox(v___x_687_);
v_res_691_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9(v_u_676_, v_toApplicative_677_, v_00_u03c3s_678_, v_hyps_679_, v_target_680_, v_inst_681_, v_toBind_682_, v_kSuccess_683_, v_inst_684_, v_inst_685_, v_kFail_686_, v___x_813__boxed_690_, v___x_688_, v_00_u03c6_689_);
return v_res_691_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0(void){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_692_ = lean_box(0);
v___x_693_ = l_Lean_mkSort(v___x_692_);
return v___x_693_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1(void){
_start:
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0);
v___x_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_695_, 0, v___x_694_);
return v___x_695_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2(void){
_start:
{
lean_object* v___x_696_; uint8_t v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_696_ = lean_box(0);
v___x_697_ = 0;
v___x_698_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1);
v___x_699_ = lean_box(v___x_697_);
v___x_700_ = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshExprMVar___boxed), 8, 3);
lean_closure_set(v___x_700_, 0, v___x_698_);
lean_closure_set(v___x_700_, 1, v___x_699_);
lean_closure_set(v___x_700_, 2, v___x_696_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg(lean_object* v_inst_701_, lean_object* v_inst_702_, lean_object* v_inst_703_, lean_object* v_goal_704_, lean_object* v_kFail_705_, lean_object* v_kSuccess_706_){
_start:
{
lean_object* v_u_707_; lean_object* v_00_u03c3s_708_; lean_object* v_hyps_709_; lean_object* v_target_710_; lean_object* v_toApplicative_711_; lean_object* v_toBind_712_; uint8_t v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___f_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; 
v_u_707_ = lean_ctor_get(v_goal_704_, 0);
lean_inc(v_u_707_);
v_00_u03c3s_708_ = lean_ctor_get(v_goal_704_, 1);
lean_inc_ref(v_00_u03c3s_708_);
v_hyps_709_ = lean_ctor_get(v_goal_704_, 2);
lean_inc_ref(v_hyps_709_);
v_target_710_ = lean_ctor_get(v_goal_704_, 3);
lean_inc_ref(v_target_710_);
lean_dec_ref(v_goal_704_);
v_toApplicative_711_ = lean_ctor_get(v_inst_701_, 0);
lean_inc_ref(v_toApplicative_711_);
v_toBind_712_ = lean_ctor_get(v_inst_701_, 1);
lean_inc_n(v_toBind_712_, 2);
v___x_713_ = 0;
v___x_714_ = lean_box(0);
v___x_715_ = lean_box(v___x_713_);
lean_inc(v_inst_703_);
v___f_716_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___boxed), 14, 13);
lean_closure_set(v___f_716_, 0, v_u_707_);
lean_closure_set(v___f_716_, 1, v_toApplicative_711_);
lean_closure_set(v___f_716_, 2, v_00_u03c3s_708_);
lean_closure_set(v___f_716_, 3, v_hyps_709_);
lean_closure_set(v___f_716_, 4, v_target_710_);
lean_closure_set(v___f_716_, 5, v_inst_703_);
lean_closure_set(v___f_716_, 6, v_toBind_712_);
lean_closure_set(v___f_716_, 7, v_kSuccess_706_);
lean_closure_set(v___f_716_, 8, v_inst_702_);
lean_closure_set(v___f_716_, 9, v_inst_701_);
lean_closure_set(v___f_716_, 10, v_kFail_705_);
lean_closure_set(v___f_716_, 11, v___x_715_);
lean_closure_set(v___f_716_, 12, v___x_714_);
v___x_717_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2);
v___x_718_ = lean_apply_2(v_inst_703_, lean_box(0), v___x_717_);
v___x_719_ = lean_apply_4(v_toBind_712_, lean_box(0), lean_box(0), v___x_718_, v___f_716_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore(lean_object* v_m_720_, lean_object* v_inst_721_, lean_object* v_inst_722_, lean_object* v_inst_723_, lean_object* v_goal_724_, lean_object* v_kFail_725_, lean_object* v_kSuccess_726_){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg(v_inst_721_, v_inst_722_, v_inst_723_, v_goal_724_, v_kFail_725_, v_kSuccess_726_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0(lean_object* v_k_728_, lean_object* v_x_729_, lean_object* v_x_730_, lean_object* v_goal_731_){
_start:
{
lean_object* v___x_732_; 
v___x_732_ = lean_apply_1(v_k_728_, v_goal_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0___boxed(lean_object* v_k_733_, lean_object* v_x_734_, lean_object* v_x_735_, lean_object* v_goal_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0(v_k_733_, v_x_734_, v_x_735_, v_goal_736_);
lean_dec_ref(v_x_735_);
lean_dec_ref(v_x_734_);
return v_res_737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg(lean_object* v_inst_738_, lean_object* v_inst_739_, lean_object* v_inst_740_, lean_object* v_goal_741_, lean_object* v_k_742_){
_start:
{
lean_object* v___f_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
lean_inc(v_k_742_);
v___f_743_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_743_, 0, v_k_742_);
lean_inc_ref(v_goal_741_);
v___x_744_ = lean_apply_1(v_k_742_, v_goal_741_);
v___x_745_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg(v_inst_738_, v_inst_739_, v_inst_740_, v_goal_741_, v___x_744_, v___f_743_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame(lean_object* v_m_746_, lean_object* v_inst_747_, lean_object* v_inst_748_, lean_object* v_inst_749_, lean_object* v_goal_750_, lean_object* v_k_751_){
_start:
{
lean_object* v___x_752_; 
v___x_752_ = l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg(v_inst_747_, v_inst_748_, v_inst_749_, v_goal_750_, v_k_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg(lean_object* v_e_753_, lean_object* v___y_754_){
_start:
{
uint8_t v___x_756_; 
v___x_756_ = l_Lean_Expr_hasMVar(v_e_753_);
if (v___x_756_ == 0)
{
lean_object* v___x_757_; 
v___x_757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_757_, 0, v_e_753_);
return v___x_757_;
}
else
{
lean_object* v___x_758_; lean_object* v_mctx_759_; lean_object* v___x_760_; lean_object* v_fst_761_; lean_object* v_snd_762_; lean_object* v___x_763_; lean_object* v_cache_764_; lean_object* v_zetaDeltaFVarIds_765_; lean_object* v_postponed_766_; lean_object* v_diag_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_776_; 
v___x_758_ = lean_st_ref_get(v___y_754_);
v_mctx_759_ = lean_ctor_get(v___x_758_, 0);
lean_inc_ref(v_mctx_759_);
lean_dec(v___x_758_);
v___x_760_ = l_Lean_instantiateMVarsCore(v_mctx_759_, v_e_753_);
v_fst_761_ = lean_ctor_get(v___x_760_, 0);
lean_inc(v_fst_761_);
v_snd_762_ = lean_ctor_get(v___x_760_, 1);
lean_inc(v_snd_762_);
lean_dec_ref(v___x_760_);
v___x_763_ = lean_st_ref_take(v___y_754_);
v_cache_764_ = lean_ctor_get(v___x_763_, 1);
v_zetaDeltaFVarIds_765_ = lean_ctor_get(v___x_763_, 2);
v_postponed_766_ = lean_ctor_get(v___x_763_, 3);
v_diag_767_ = lean_ctor_get(v___x_763_, 4);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_776_ == 0)
{
lean_object* v_unused_777_; 
v_unused_777_ = lean_ctor_get(v___x_763_, 0);
lean_dec(v_unused_777_);
v___x_769_ = v___x_763_;
v_isShared_770_ = v_isSharedCheck_776_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_diag_767_);
lean_inc(v_postponed_766_);
lean_inc(v_zetaDeltaFVarIds_765_);
lean_inc(v_cache_764_);
lean_dec(v___x_763_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_776_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 0, v_snd_762_);
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_snd_762_);
lean_ctor_set(v_reuseFailAlloc_775_, 1, v_cache_764_);
lean_ctor_set(v_reuseFailAlloc_775_, 2, v_zetaDeltaFVarIds_765_);
lean_ctor_set(v_reuseFailAlloc_775_, 3, v_postponed_766_);
lean_ctor_set(v_reuseFailAlloc_775_, 4, v_diag_767_);
v___x_772_ = v_reuseFailAlloc_775_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_773_ = lean_st_ref_set(v___y_754_, v___x_772_);
v___x_774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_774_, 0, v_fst_761_);
return v___x_774_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg___boxed(lean_object* v_e_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg(v_e_778_, v___y_779_);
lean_dec(v___y_779_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1(lean_object* v_e_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
lean_object* v___x_792_; 
v___x_792_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg(v_e_782_, v___y_788_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___boxed(lean_object* v_e_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1(v_e_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_);
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
lean_dec(v___y_797_);
lean_dec_ref(v___y_796_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg___lam__0(lean_object* v_x_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_){
_start:
{
lean_object* v___x_814_; 
lean_inc(v___y_808_);
lean_inc_ref(v___y_807_);
lean_inc(v___y_806_);
lean_inc_ref(v___y_805_);
v___x_814_ = lean_apply_9(v_x_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_, lean_box(0));
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg___lam__0___boxed(lean_object* v_x_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg___lam__0(v_x_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_);
lean_dec(v___y_819_);
lean_dec_ref(v___y_818_);
lean_dec(v___y_817_);
lean_dec_ref(v___y_816_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg(lean_object* v_mvarId_826_, lean_object* v_x_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_){
_start:
{
lean_object* v___f_837_; lean_object* v___x_838_; 
lean_inc(v___y_831_);
lean_inc_ref(v___y_830_);
lean_inc(v___y_829_);
lean_inc_ref(v___y_828_);
v___f_837_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_837_, 0, v_x_827_);
lean_closure_set(v___f_837_, 1, v___y_828_);
lean_closure_set(v___f_837_, 2, v___y_829_);
lean_closure_set(v___f_837_, 3, v___y_830_);
lean_closure_set(v___f_837_, 4, v___y_831_);
v___x_838_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_826_, v___f_837_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
if (lean_obj_tag(v___x_838_) == 0)
{
return v___x_838_;
}
else
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
v_a_839_ = lean_ctor_get(v___x_838_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_838_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_838_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg___boxed(lean_object* v_mvarId_847_, lean_object* v_x_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg(v_mvarId_847_, v_x_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
lean_dec(v___y_856_);
lean_dec_ref(v___y_855_);
lean_dec(v___y_854_);
lean_dec_ref(v___y_853_);
lean_dec(v___y_852_);
lean_dec_ref(v___y_851_);
lean_dec(v___y_850_);
lean_dec_ref(v___y_849_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5(lean_object* v_00_u03b1_859_, lean_object* v_mvarId_860_, lean_object* v_x_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_){
_start:
{
lean_object* v___x_871_; 
v___x_871_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg(v_mvarId_860_, v_x_861_, v___y_862_, v___y_863_, v___y_864_, v___y_865_, v___y_866_, v___y_867_, v___y_868_, v___y_869_);
return v___x_871_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___boxed(lean_object* v_00_u03b1_872_, lean_object* v_mvarId_873_, lean_object* v_x_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5(v_00_u03b1_872_, v_mvarId_873_, v_x_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_);
lean_dec(v___y_882_);
lean_dec_ref(v___y_881_);
lean_dec(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec(v___y_878_);
lean_dec_ref(v___y_877_);
lean_dec(v___y_876_);
lean_dec_ref(v___y_875_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0_spec__0(lean_object* v_msgData_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_){
_start:
{
lean_object* v___x_891_; lean_object* v_env_892_; lean_object* v___x_893_; lean_object* v_mctx_894_; lean_object* v_lctx_895_; lean_object* v_options_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_891_ = lean_st_ref_get(v___y_889_);
v_env_892_ = lean_ctor_get(v___x_891_, 0);
lean_inc_ref(v_env_892_);
lean_dec(v___x_891_);
v___x_893_ = lean_st_ref_get(v___y_887_);
v_mctx_894_ = lean_ctor_get(v___x_893_, 0);
lean_inc_ref(v_mctx_894_);
lean_dec(v___x_893_);
v_lctx_895_ = lean_ctor_get(v___y_886_, 2);
v_options_896_ = lean_ctor_get(v___y_888_, 2);
lean_inc_ref(v_options_896_);
lean_inc_ref(v_lctx_895_);
v___x_897_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_897_, 0, v_env_892_);
lean_ctor_set(v___x_897_, 1, v_mctx_894_);
lean_ctor_set(v___x_897_, 2, v_lctx_895_);
lean_ctor_set(v___x_897_, 3, v_options_896_);
v___x_898_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
lean_ctor_set(v___x_898_, 1, v_msgData_885_);
v___x_899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0_spec__0___boxed(lean_object* v_msgData_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_){
_start:
{
lean_object* v_res_906_; 
v_res_906_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0_spec__0(v_msgData_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_);
lean_dec(v___y_904_);
lean_dec_ref(v___y_903_);
lean_dec(v___y_902_);
lean_dec_ref(v___y_901_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg(lean_object* v_msg_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
lean_object* v_ref_913_; lean_object* v___x_914_; lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_923_; 
v_ref_913_ = lean_ctor_get(v___y_910_, 5);
v___x_914_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0_spec__0(v_msg_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_);
v_a_915_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_923_ == 0)
{
v___x_917_ = v___x_914_;
v_isShared_918_ = v_isSharedCheck_923_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_914_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_923_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_919_; lean_object* v___x_921_; 
lean_inc(v_ref_913_);
v___x_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_919_, 0, v_ref_913_);
lean_ctor_set(v___x_919_, 1, v_a_915_);
if (v_isShared_918_ == 0)
{
lean_ctor_set_tag(v___x_917_, 1);
lean_ctor_set(v___x_917_, 0, v___x_919_);
v___x_921_ = v___x_917_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v___x_919_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg___boxed(lean_object* v_msg_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg(v_msg_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
lean_dec(v___y_926_);
lean_dec_ref(v___y_925_);
return v_res_930_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_932_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__0));
v___x_933_ = l_Lean_stringToMessageData(v___x_932_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0(lean_object* v_x_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_943_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__1);
v___x_944_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg(v___x_943_, v___y_938_, v___y_939_, v___y_940_, v___y_941_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___boxed(lean_object* v_x_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0(v_x_945_, v___y_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_);
lean_dec(v___y_952_);
lean_dec_ref(v___y_951_);
lean_dec(v___y_950_);
lean_dec_ref(v___y_949_);
lean_dec(v___y_948_);
lean_dec_ref(v___y_947_);
lean_dec(v___y_946_);
lean_dec_ref(v_x_945_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1(lean_object* v_x_955_, lean_object* v_x_956_, lean_object* v_goal_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_){
_start:
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_967_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v_goal_957_);
v___x_968_ = lean_box(0);
v___x_969_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_967_, v___x_968_, v___y_962_, v___y_963_, v___y_964_, v___y_965_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_970_);
lean_dec_ref_known(v___x_969_, 1);
v___x_971_ = l_Lean_Expr_mvarId_x21(v_a_970_);
v___x_972_ = lean_box(0);
v___x_973_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_973_, 0, v___x_971_);
lean_ctor_set(v___x_973_, 1, v___x_972_);
v___x_974_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_973_, v___y_959_, v___y_962_, v___y_963_, v___y_964_, v___y_965_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_981_; 
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_981_ == 0)
{
lean_object* v_unused_982_; 
v_unused_982_ = lean_ctor_get(v___x_974_, 0);
lean_dec(v_unused_982_);
v___x_976_ = v___x_974_;
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
else
{
lean_dec(v___x_974_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_979_; 
if (v_isShared_977_ == 0)
{
lean_ctor_set(v___x_976_, 0, v_a_970_);
v___x_979_ = v___x_976_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_a_970_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
lean_dec(v_a_970_);
v_a_983_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_974_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_974_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
else
{
return v___x_969_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___boxed(lean_object* v_x_991_, lean_object* v_x_992_, lean_object* v_goal_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_){
_start:
{
lean_object* v_res_1003_; 
v_res_1003_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1(v_x_991_, v_x_992_, v_goal_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_);
lean_dec(v___y_1001_);
lean_dec_ref(v___y_1000_);
lean_dec(v___y_999_);
lean_dec_ref(v___y_998_);
lean_dec(v___y_997_);
lean_dec_ref(v___y_996_);
lean_dec(v___y_995_);
lean_dec_ref(v___y_994_);
lean_dec_ref(v_x_992_);
lean_dec_ref(v_x_991_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10_spec__11___redArg(lean_object* v_x_1004_, lean_object* v_x_1005_, lean_object* v_x_1006_, lean_object* v_x_1007_){
_start:
{
lean_object* v_ks_1008_; lean_object* v_vs_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1033_; 
v_ks_1008_ = lean_ctor_get(v_x_1004_, 0);
v_vs_1009_ = lean_ctor_get(v_x_1004_, 1);
v_isSharedCheck_1033_ = !lean_is_exclusive(v_x_1004_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1011_ = v_x_1004_;
v_isShared_1012_ = v_isSharedCheck_1033_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_vs_1009_);
lean_inc(v_ks_1008_);
lean_dec(v_x_1004_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1033_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1013_; uint8_t v___x_1014_; 
v___x_1013_ = lean_array_get_size(v_ks_1008_);
v___x_1014_ = lean_nat_dec_lt(v_x_1005_, v___x_1013_);
if (v___x_1014_ == 0)
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1018_; 
lean_dec(v_x_1005_);
v___x_1015_ = lean_array_push(v_ks_1008_, v_x_1006_);
v___x_1016_ = lean_array_push(v_vs_1009_, v_x_1007_);
if (v_isShared_1012_ == 0)
{
lean_ctor_set(v___x_1011_, 1, v___x_1016_);
lean_ctor_set(v___x_1011_, 0, v___x_1015_);
v___x_1018_ = v___x_1011_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v___x_1015_);
lean_ctor_set(v_reuseFailAlloc_1019_, 1, v___x_1016_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
else
{
lean_object* v_k_x27_1020_; uint8_t v___x_1021_; 
v_k_x27_1020_ = lean_array_fget_borrowed(v_ks_1008_, v_x_1005_);
v___x_1021_ = l_Lean_instBEqMVarId_beq(v_x_1006_, v_k_x27_1020_);
if (v___x_1021_ == 0)
{
lean_object* v___x_1023_; 
if (v_isShared_1012_ == 0)
{
v___x_1023_ = v___x_1011_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_ks_1008_);
lean_ctor_set(v_reuseFailAlloc_1027_, 1, v_vs_1009_);
v___x_1023_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = lean_unsigned_to_nat(1u);
v___x_1025_ = lean_nat_add(v_x_1005_, v___x_1024_);
lean_dec(v_x_1005_);
v_x_1004_ = v___x_1023_;
v_x_1005_ = v___x_1025_;
goto _start;
}
}
else
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1031_; 
v___x_1028_ = lean_array_fset(v_ks_1008_, v_x_1005_, v_x_1006_);
v___x_1029_ = lean_array_fset(v_vs_1009_, v_x_1005_, v_x_1007_);
lean_dec(v_x_1005_);
if (v_isShared_1012_ == 0)
{
lean_ctor_set(v___x_1011_, 1, v___x_1029_);
lean_ctor_set(v___x_1011_, 0, v___x_1028_);
v___x_1031_ = v___x_1011_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v___x_1028_);
lean_ctor_set(v_reuseFailAlloc_1032_, 1, v___x_1029_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10___redArg(lean_object* v_n_1034_, lean_object* v_k_1035_, lean_object* v_v_1036_){
_start:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1037_ = lean_unsigned_to_nat(0u);
v___x_1038_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10_spec__11___redArg(v_n_1034_, v___x_1037_, v_k_1035_, v_v_1036_);
return v___x_1038_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0(void){
_start:
{
size_t v___x_1039_; size_t v___x_1040_; size_t v___x_1041_; 
v___x_1039_ = ((size_t)5ULL);
v___x_1040_ = ((size_t)1ULL);
v___x_1041_ = lean_usize_shift_left(v___x_1040_, v___x_1039_);
return v___x_1041_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__1(void){
_start:
{
size_t v___x_1042_; size_t v___x_1043_; size_t v___x_1044_; 
v___x_1042_ = ((size_t)1ULL);
v___x_1043_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0);
v___x_1044_ = lean_usize_sub(v___x_1043_, v___x_1042_);
return v___x_1044_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_1045_; 
v___x_1045_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(lean_object* v_x_1046_, size_t v_x_1047_, size_t v_x_1048_, lean_object* v_x_1049_, lean_object* v_x_1050_){
_start:
{
if (lean_obj_tag(v_x_1046_) == 0)
{
lean_object* v_es_1051_; size_t v___x_1052_; size_t v___x_1053_; size_t v___x_1054_; size_t v___x_1055_; lean_object* v_j_1056_; lean_object* v___x_1057_; uint8_t v___x_1058_; 
v_es_1051_ = lean_ctor_get(v_x_1046_, 0);
v___x_1052_ = ((size_t)5ULL);
v___x_1053_ = ((size_t)1ULL);
v___x_1054_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__1);
v___x_1055_ = lean_usize_land(v_x_1047_, v___x_1054_);
v_j_1056_ = lean_usize_to_nat(v___x_1055_);
v___x_1057_ = lean_array_get_size(v_es_1051_);
v___x_1058_ = lean_nat_dec_lt(v_j_1056_, v___x_1057_);
if (v___x_1058_ == 0)
{
lean_dec(v_j_1056_);
lean_dec(v_x_1050_);
lean_dec(v_x_1049_);
return v_x_1046_;
}
else
{
lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1095_; 
lean_inc_ref(v_es_1051_);
v_isSharedCheck_1095_ = !lean_is_exclusive(v_x_1046_);
if (v_isSharedCheck_1095_ == 0)
{
lean_object* v_unused_1096_; 
v_unused_1096_ = lean_ctor_get(v_x_1046_, 0);
lean_dec(v_unused_1096_);
v___x_1060_ = v_x_1046_;
v_isShared_1061_ = v_isSharedCheck_1095_;
goto v_resetjp_1059_;
}
else
{
lean_dec(v_x_1046_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1095_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v_v_1062_; lean_object* v___x_1063_; lean_object* v_xs_x27_1064_; lean_object* v___y_1066_; 
v_v_1062_ = lean_array_fget(v_es_1051_, v_j_1056_);
v___x_1063_ = lean_box(0);
v_xs_x27_1064_ = lean_array_fset(v_es_1051_, v_j_1056_, v___x_1063_);
switch(lean_obj_tag(v_v_1062_))
{
case 0:
{
lean_object* v_key_1071_; lean_object* v_val_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1082_; 
v_key_1071_ = lean_ctor_get(v_v_1062_, 0);
v_val_1072_ = lean_ctor_get(v_v_1062_, 1);
v_isSharedCheck_1082_ = !lean_is_exclusive(v_v_1062_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_1074_ = v_v_1062_;
v_isShared_1075_ = v_isSharedCheck_1082_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_val_1072_);
lean_inc(v_key_1071_);
lean_dec(v_v_1062_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1082_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
uint8_t v___x_1076_; 
v___x_1076_ = l_Lean_instBEqMVarId_beq(v_x_1049_, v_key_1071_);
if (v___x_1076_ == 0)
{
lean_object* v___x_1077_; lean_object* v___x_1078_; 
lean_del_object(v___x_1074_);
v___x_1077_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1071_, v_val_1072_, v_x_1049_, v_x_1050_);
v___x_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1077_);
v___y_1066_ = v___x_1078_;
goto v___jp_1065_;
}
else
{
lean_object* v___x_1080_; 
lean_dec(v_val_1072_);
lean_dec(v_key_1071_);
if (v_isShared_1075_ == 0)
{
lean_ctor_set(v___x_1074_, 1, v_x_1050_);
lean_ctor_set(v___x_1074_, 0, v_x_1049_);
v___x_1080_ = v___x_1074_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v_x_1049_);
lean_ctor_set(v_reuseFailAlloc_1081_, 1, v_x_1050_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
v___y_1066_ = v___x_1080_;
goto v___jp_1065_;
}
}
}
}
case 1:
{
lean_object* v_node_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1093_; 
v_node_1083_ = lean_ctor_get(v_v_1062_, 0);
v_isSharedCheck_1093_ = !lean_is_exclusive(v_v_1062_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1085_ = v_v_1062_;
v_isShared_1086_ = v_isSharedCheck_1093_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_node_1083_);
lean_dec(v_v_1062_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1093_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
size_t v___x_1087_; size_t v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1091_; 
v___x_1087_ = lean_usize_shift_right(v_x_1047_, v___x_1052_);
v___x_1088_ = lean_usize_add(v_x_1048_, v___x_1053_);
v___x_1089_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(v_node_1083_, v___x_1087_, v___x_1088_, v_x_1049_, v_x_1050_);
if (v_isShared_1086_ == 0)
{
lean_ctor_set(v___x_1085_, 0, v___x_1089_);
v___x_1091_ = v___x_1085_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v___x_1089_);
v___x_1091_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
v___y_1066_ = v___x_1091_;
goto v___jp_1065_;
}
}
}
default: 
{
lean_object* v___x_1094_; 
v___x_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1094_, 0, v_x_1049_);
lean_ctor_set(v___x_1094_, 1, v_x_1050_);
v___y_1066_ = v___x_1094_;
goto v___jp_1065_;
}
}
v___jp_1065_:
{
lean_object* v___x_1067_; lean_object* v___x_1069_; 
v___x_1067_ = lean_array_fset(v_xs_x27_1064_, v_j_1056_, v___y_1066_);
lean_dec(v_j_1056_);
if (v_isShared_1061_ == 0)
{
lean_ctor_set(v___x_1060_, 0, v___x_1067_);
v___x_1069_ = v___x_1060_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v___x_1067_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
}
}
else
{
lean_object* v_ks_1097_; lean_object* v_vs_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1118_; 
v_ks_1097_ = lean_ctor_get(v_x_1046_, 0);
v_vs_1098_ = lean_ctor_get(v_x_1046_, 1);
v_isSharedCheck_1118_ = !lean_is_exclusive(v_x_1046_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1100_ = v_x_1046_;
v_isShared_1101_ = v_isSharedCheck_1118_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_vs_1098_);
lean_inc(v_ks_1097_);
lean_dec(v_x_1046_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1118_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___x_1103_; 
if (v_isShared_1101_ == 0)
{
v___x_1103_ = v___x_1100_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_ks_1097_);
lean_ctor_set(v_reuseFailAlloc_1117_, 1, v_vs_1098_);
v___x_1103_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
lean_object* v_newNode_1104_; uint8_t v___y_1106_; size_t v___x_1112_; uint8_t v___x_1113_; 
v_newNode_1104_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10___redArg(v___x_1103_, v_x_1049_, v_x_1050_);
v___x_1112_ = ((size_t)7ULL);
v___x_1113_ = lean_usize_dec_le(v___x_1112_, v_x_1048_);
if (v___x_1113_ == 0)
{
lean_object* v___x_1114_; lean_object* v___x_1115_; uint8_t v___x_1116_; 
v___x_1114_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1104_);
v___x_1115_ = lean_unsigned_to_nat(4u);
v___x_1116_ = lean_nat_dec_lt(v___x_1114_, v___x_1115_);
lean_dec(v___x_1114_);
v___y_1106_ = v___x_1116_;
goto v___jp_1105_;
}
else
{
v___y_1106_ = v___x_1113_;
goto v___jp_1105_;
}
v___jp_1105_:
{
if (v___y_1106_ == 0)
{
lean_object* v_ks_1107_; lean_object* v_vs_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v_ks_1107_ = lean_ctor_get(v_newNode_1104_, 0);
lean_inc_ref(v_ks_1107_);
v_vs_1108_ = lean_ctor_get(v_newNode_1104_, 1);
lean_inc_ref(v_vs_1108_);
lean_dec_ref(v_newNode_1104_);
v___x_1109_ = lean_unsigned_to_nat(0u);
v___x_1110_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__2);
v___x_1111_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___redArg(v_x_1048_, v_ks_1107_, v_vs_1108_, v___x_1109_, v___x_1110_);
lean_dec_ref(v_vs_1108_);
lean_dec_ref(v_ks_1107_);
return v___x_1111_;
}
else
{
return v_newNode_1104_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___redArg(size_t v_depth_1119_, lean_object* v_keys_1120_, lean_object* v_vals_1121_, lean_object* v_i_1122_, lean_object* v_entries_1123_){
_start:
{
lean_object* v___x_1124_; uint8_t v___x_1125_; 
v___x_1124_ = lean_array_get_size(v_keys_1120_);
v___x_1125_ = lean_nat_dec_lt(v_i_1122_, v___x_1124_);
if (v___x_1125_ == 0)
{
lean_dec(v_i_1122_);
return v_entries_1123_;
}
else
{
lean_object* v_k_1126_; lean_object* v_v_1127_; uint64_t v___x_1128_; size_t v_h_1129_; size_t v___x_1130_; lean_object* v___x_1131_; size_t v___x_1132_; size_t v___x_1133_; size_t v___x_1134_; size_t v_h_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v_k_1126_ = lean_array_fget_borrowed(v_keys_1120_, v_i_1122_);
v_v_1127_ = lean_array_fget_borrowed(v_vals_1121_, v_i_1122_);
v___x_1128_ = l_Lean_instHashableMVarId_hash(v_k_1126_);
v_h_1129_ = lean_uint64_to_usize(v___x_1128_);
v___x_1130_ = ((size_t)5ULL);
v___x_1131_ = lean_unsigned_to_nat(1u);
v___x_1132_ = ((size_t)1ULL);
v___x_1133_ = lean_usize_sub(v_depth_1119_, v___x_1132_);
v___x_1134_ = lean_usize_mul(v___x_1130_, v___x_1133_);
v_h_1135_ = lean_usize_shift_right(v_h_1129_, v___x_1134_);
v___x_1136_ = lean_nat_add(v_i_1122_, v___x_1131_);
lean_dec(v_i_1122_);
lean_inc(v_v_1127_);
lean_inc(v_k_1126_);
v___x_1137_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(v_entries_1123_, v_h_1135_, v_depth_1119_, v_k_1126_, v_v_1127_);
v_i_1122_ = v___x_1136_;
v_entries_1123_ = v___x_1137_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___redArg___boxed(lean_object* v_depth_1139_, lean_object* v_keys_1140_, lean_object* v_vals_1141_, lean_object* v_i_1142_, lean_object* v_entries_1143_){
_start:
{
size_t v_depth_boxed_1144_; lean_object* v_res_1145_; 
v_depth_boxed_1144_ = lean_unbox_usize(v_depth_1139_);
lean_dec(v_depth_1139_);
v_res_1145_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___redArg(v_depth_boxed_1144_, v_keys_1140_, v_vals_1141_, v_i_1142_, v_entries_1143_);
lean_dec_ref(v_vals_1141_);
lean_dec_ref(v_keys_1140_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___boxed(lean_object* v_x_1146_, lean_object* v_x_1147_, lean_object* v_x_1148_, lean_object* v_x_1149_, lean_object* v_x_1150_){
_start:
{
size_t v_x_10948__boxed_1151_; size_t v_x_10949__boxed_1152_; lean_object* v_res_1153_; 
v_x_10948__boxed_1151_ = lean_unbox_usize(v_x_1147_);
lean_dec(v_x_1147_);
v_x_10949__boxed_1152_ = lean_unbox_usize(v_x_1148_);
lean_dec(v_x_1148_);
v_res_1153_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(v_x_1146_, v_x_10948__boxed_1151_, v_x_10949__boxed_1152_, v_x_1149_, v_x_1150_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5___redArg(lean_object* v_x_1154_, lean_object* v_x_1155_, lean_object* v_x_1156_){
_start:
{
uint64_t v___x_1157_; size_t v___x_1158_; size_t v___x_1159_; lean_object* v___x_1160_; 
v___x_1157_ = l_Lean_instHashableMVarId_hash(v_x_1155_);
v___x_1158_ = lean_uint64_to_usize(v___x_1157_);
v___x_1159_ = ((size_t)1ULL);
v___x_1160_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(v_x_1154_, v___x_1158_, v___x_1159_, v_x_1155_, v_x_1156_);
return v___x_1160_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg(lean_object* v_mvarId_1161_, lean_object* v_val_1162_, lean_object* v___y_1163_){
_start:
{
lean_object* v___x_1165_; lean_object* v_mctx_1166_; lean_object* v_cache_1167_; lean_object* v_zetaDeltaFVarIds_1168_; lean_object* v_postponed_1169_; lean_object* v_diag_1170_; lean_object* v___x_1172_; uint8_t v_isShared_1173_; uint8_t v_isSharedCheck_1198_; 
v___x_1165_ = lean_st_ref_take(v___y_1163_);
v_mctx_1166_ = lean_ctor_get(v___x_1165_, 0);
v_cache_1167_ = lean_ctor_get(v___x_1165_, 1);
v_zetaDeltaFVarIds_1168_ = lean_ctor_get(v___x_1165_, 2);
v_postponed_1169_ = lean_ctor_get(v___x_1165_, 3);
v_diag_1170_ = lean_ctor_get(v___x_1165_, 4);
v_isSharedCheck_1198_ = !lean_is_exclusive(v___x_1165_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1172_ = v___x_1165_;
v_isShared_1173_ = v_isSharedCheck_1198_;
goto v_resetjp_1171_;
}
else
{
lean_inc(v_diag_1170_);
lean_inc(v_postponed_1169_);
lean_inc(v_zetaDeltaFVarIds_1168_);
lean_inc(v_cache_1167_);
lean_inc(v_mctx_1166_);
lean_dec(v___x_1165_);
v___x_1172_ = lean_box(0);
v_isShared_1173_ = v_isSharedCheck_1198_;
goto v_resetjp_1171_;
}
v_resetjp_1171_:
{
lean_object* v_depth_1174_; lean_object* v_levelAssignDepth_1175_; lean_object* v_lmvarCounter_1176_; lean_object* v_mvarCounter_1177_; lean_object* v_lDecls_1178_; lean_object* v_decls_1179_; lean_object* v_userNames_1180_; lean_object* v_lAssignment_1181_; lean_object* v_eAssignment_1182_; lean_object* v_dAssignment_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1197_; 
v_depth_1174_ = lean_ctor_get(v_mctx_1166_, 0);
v_levelAssignDepth_1175_ = lean_ctor_get(v_mctx_1166_, 1);
v_lmvarCounter_1176_ = lean_ctor_get(v_mctx_1166_, 2);
v_mvarCounter_1177_ = lean_ctor_get(v_mctx_1166_, 3);
v_lDecls_1178_ = lean_ctor_get(v_mctx_1166_, 4);
v_decls_1179_ = lean_ctor_get(v_mctx_1166_, 5);
v_userNames_1180_ = lean_ctor_get(v_mctx_1166_, 6);
v_lAssignment_1181_ = lean_ctor_get(v_mctx_1166_, 7);
v_eAssignment_1182_ = lean_ctor_get(v_mctx_1166_, 8);
v_dAssignment_1183_ = lean_ctor_get(v_mctx_1166_, 9);
v_isSharedCheck_1197_ = !lean_is_exclusive(v_mctx_1166_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1185_ = v_mctx_1166_;
v_isShared_1186_ = v_isSharedCheck_1197_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_dAssignment_1183_);
lean_inc(v_eAssignment_1182_);
lean_inc(v_lAssignment_1181_);
lean_inc(v_userNames_1180_);
lean_inc(v_decls_1179_);
lean_inc(v_lDecls_1178_);
lean_inc(v_mvarCounter_1177_);
lean_inc(v_lmvarCounter_1176_);
lean_inc(v_levelAssignDepth_1175_);
lean_inc(v_depth_1174_);
lean_dec(v_mctx_1166_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1197_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1187_; lean_object* v___x_1189_; 
v___x_1187_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5___redArg(v_eAssignment_1182_, v_mvarId_1161_, v_val_1162_);
if (v_isShared_1186_ == 0)
{
lean_ctor_set(v___x_1185_, 8, v___x_1187_);
v___x_1189_ = v___x_1185_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v_depth_1174_);
lean_ctor_set(v_reuseFailAlloc_1196_, 1, v_levelAssignDepth_1175_);
lean_ctor_set(v_reuseFailAlloc_1196_, 2, v_lmvarCounter_1176_);
lean_ctor_set(v_reuseFailAlloc_1196_, 3, v_mvarCounter_1177_);
lean_ctor_set(v_reuseFailAlloc_1196_, 4, v_lDecls_1178_);
lean_ctor_set(v_reuseFailAlloc_1196_, 5, v_decls_1179_);
lean_ctor_set(v_reuseFailAlloc_1196_, 6, v_userNames_1180_);
lean_ctor_set(v_reuseFailAlloc_1196_, 7, v_lAssignment_1181_);
lean_ctor_set(v_reuseFailAlloc_1196_, 8, v___x_1187_);
lean_ctor_set(v_reuseFailAlloc_1196_, 9, v_dAssignment_1183_);
v___x_1189_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
lean_object* v___x_1191_; 
if (v_isShared_1173_ == 0)
{
lean_ctor_set(v___x_1172_, 0, v___x_1189_);
v___x_1191_ = v___x_1172_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v___x_1189_);
lean_ctor_set(v_reuseFailAlloc_1195_, 1, v_cache_1167_);
lean_ctor_set(v_reuseFailAlloc_1195_, 2, v_zetaDeltaFVarIds_1168_);
lean_ctor_set(v_reuseFailAlloc_1195_, 3, v_postponed_1169_);
lean_ctor_set(v_reuseFailAlloc_1195_, 4, v_diag_1170_);
v___x_1191_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1192_ = lean_st_ref_set(v___y_1163_, v___x_1191_);
v___x_1193_ = lean_box(0);
v___x_1194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1193_);
return v___x_1194_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg___boxed(lean_object* v_mvarId_1199_, lean_object* v_val_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg(v_mvarId_1199_, v_val_1200_, v___y_1201_);
lean_dec(v___y_1201_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg(lean_object* v_msg_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_){
_start:
{
lean_object* v_ref_1210_; lean_object* v___x_1211_; lean_object* v_a_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1220_; 
v_ref_1210_ = lean_ctor_get(v___y_1207_, 5);
v___x_1211_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0_spec__0(v_msg_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_);
v_a_1212_ = lean_ctor_get(v___x_1211_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1211_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1214_ = v___x_1211_;
v_isShared_1215_ = v_isSharedCheck_1220_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_a_1212_);
lean_dec(v___x_1211_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1220_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1216_; lean_object* v___x_1218_; 
lean_inc(v_ref_1210_);
v___x_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1216_, 0, v_ref_1210_);
lean_ctor_set(v___x_1216_, 1, v_a_1212_);
if (v_isShared_1215_ == 0)
{
lean_ctor_set_tag(v___x_1214_, 1);
lean_ctor_set(v___x_1214_, 0, v___x_1216_);
v___x_1218_ = v___x_1214_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v___x_1216_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg___boxed(lean_object* v_msg_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg(v_msg_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_);
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
lean_dec(v___y_1223_);
lean_dec_ref(v___y_1222_);
return v_res_1227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0(lean_object* v_k_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v_b_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_){
_start:
{
lean_object* v___x_1239_; 
lean_inc(v___y_1237_);
lean_inc_ref(v___y_1236_);
lean_inc(v___y_1235_);
lean_inc_ref(v___y_1234_);
lean_inc(v___y_1232_);
lean_inc_ref(v___y_1231_);
lean_inc(v___y_1230_);
lean_inc_ref(v___y_1229_);
v___x_1239_ = lean_apply_10(v_k_1228_, v_b_1233_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_, lean_box(0));
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0___boxed(lean_object* v_k_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v_b_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0(v_k_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v_b_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_);
lean_dec(v___y_1249_);
lean_dec_ref(v___y_1248_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1246_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1242_);
lean_dec_ref(v___y_1241_);
return v_res_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg(lean_object* v_name_1252_, uint8_t v_bi_1253_, lean_object* v_type_1254_, lean_object* v_k_1255_, uint8_t v_kind_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_){
_start:
{
lean_object* v___f_1266_; lean_object* v___x_1267_; 
lean_inc(v___y_1260_);
lean_inc_ref(v___y_1259_);
lean_inc(v___y_1258_);
lean_inc_ref(v___y_1257_);
v___f_1266_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_1266_, 0, v_k_1255_);
lean_closure_set(v___f_1266_, 1, v___y_1257_);
lean_closure_set(v___f_1266_, 2, v___y_1258_);
lean_closure_set(v___f_1266_, 3, v___y_1259_);
lean_closure_set(v___f_1266_, 4, v___y_1260_);
v___x_1267_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1252_, v_bi_1253_, v_type_1254_, v___f_1266_, v_kind_1256_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_);
if (lean_obj_tag(v___x_1267_) == 0)
{
return v___x_1267_;
}
else
{
lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1275_; 
v_a_1268_ = lean_ctor_get(v___x_1267_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1270_ = v___x_1267_;
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_dec(v___x_1267_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1273_; 
if (v_isShared_1271_ == 0)
{
v___x_1273_ = v___x_1270_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_a_1268_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_name_1276_, lean_object* v_bi_1277_, lean_object* v_type_1278_, lean_object* v_k_1279_, lean_object* v_kind_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_){
_start:
{
uint8_t v_bi_boxed_1290_; uint8_t v_kind_boxed_1291_; lean_object* v_res_1292_; 
v_bi_boxed_1290_ = lean_unbox(v_bi_1277_);
v_kind_boxed_1291_ = lean_unbox(v_kind_1280_);
v_res_1292_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg(v_name_1276_, v_bi_boxed_1290_, v_type_1278_, v_k_1279_, v_kind_boxed_1291_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_);
lean_dec(v___y_1288_);
lean_dec_ref(v___y_1287_);
lean_dec(v___y_1286_);
lean_dec_ref(v___y_1285_);
lean_dec(v___y_1284_);
lean_dec_ref(v___y_1283_);
lean_dec(v___y_1282_);
lean_dec_ref(v___y_1281_);
return v_res_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg(lean_object* v_name_1293_, lean_object* v_type_1294_, lean_object* v_k_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_){
_start:
{
uint8_t v___x_1305_; uint8_t v___x_1306_; lean_object* v___x_1307_; 
v___x_1305_ = 0;
v___x_1306_ = 0;
v___x_1307_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg(v_name_1293_, v___x_1305_, v_type_1294_, v_k_1295_, v___x_1306_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg___boxed(lean_object* v_name_1308_, lean_object* v_type_1309_, lean_object* v_k_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_){
_start:
{
lean_object* v_res_1320_; 
v_res_1320_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg(v_name_1308_, v_type_1309_, v_k_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_);
lean_dec(v___y_1318_);
lean_dec_ref(v___y_1317_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0(lean_object* v_kSuccess_1321_, lean_object* v_a_1322_, lean_object* v_goal_1323_, uint8_t v_a_1324_, uint8_t v___x_1325_, lean_object* v___x_1326_, lean_object* v___x_1327_, lean_object* v___x_1328_, lean_object* v___x_1329_, lean_object* v___x_1330_, lean_object* v_00_u03c3s_1331_, lean_object* v_hyps_1332_, lean_object* v_a_1333_, lean_object* v_target_1334_, lean_object* v_a_1335_, lean_object* v_h_u03c6_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_){
_start:
{
lean_object* v___x_1346_; 
lean_inc(v___y_1344_);
lean_inc_ref(v___y_1343_);
lean_inc(v___y_1342_);
lean_inc_ref(v___y_1341_);
lean_inc(v___y_1340_);
lean_inc_ref(v___y_1339_);
lean_inc(v___y_1338_);
lean_inc_ref(v___y_1337_);
lean_inc_ref(v_h_u03c6_1336_);
lean_inc_ref(v_a_1322_);
v___x_1346_ = lean_apply_12(v_kSuccess_1321_, v_a_1322_, v_h_u03c6_1336_, v_goal_1323_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, lean_box(0));
if (lean_obj_tag(v___x_1346_) == 0)
{
lean_object* v_a_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; uint8_t v___x_1351_; lean_object* v___x_1352_; 
v_a_1347_ = lean_ctor_get(v___x_1346_, 0);
lean_inc(v_a_1347_);
lean_dec_ref_known(v___x_1346_, 1);
v___x_1348_ = lean_unsigned_to_nat(1u);
v___x_1349_ = lean_mk_empty_array_with_capacity(v___x_1348_);
v___x_1350_ = lean_array_push(v___x_1349_, v_h_u03c6_1336_);
v___x_1351_ = 1;
v___x_1352_ = l_Lean_Meta_mkLambdaFVars(v___x_1350_, v_a_1347_, v_a_1324_, v___x_1325_, v_a_1324_, v___x_1325_, v___x_1351_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_);
lean_dec_ref(v___x_1350_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v_a_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1365_; 
v_a_1353_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1355_ = v___x_1352_;
v_isShared_1356_ = v_isSharedCheck_1365_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_a_1353_);
lean_dec(v___x_1352_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1365_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v_prf_1361_; lean_object* v___x_1363_; 
v___x_1357_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__0));
v___x_1358_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__1));
v___x_1359_ = l_Lean_Name_mkStr6(v___x_1326_, v___x_1327_, v___x_1328_, v___x_1329_, v___x_1357_, v___x_1358_);
v___x_1360_ = l_Lean_mkConst(v___x_1359_, v___x_1330_);
v_prf_1361_ = l_Lean_mkApp7(v___x_1360_, v_00_u03c3s_1331_, v_hyps_1332_, v_a_1333_, v_target_1334_, v_a_1322_, v_a_1335_, v_a_1353_);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v_prf_1361_);
v___x_1363_ = v___x_1355_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v_prf_1361_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
else
{
lean_dec_ref(v_a_1335_);
lean_dec_ref(v_target_1334_);
lean_dec_ref(v_a_1333_);
lean_dec_ref(v_hyps_1332_);
lean_dec_ref(v_00_u03c3s_1331_);
lean_dec(v___x_1330_);
lean_dec_ref(v___x_1329_);
lean_dec_ref(v___x_1328_);
lean_dec_ref(v___x_1327_);
lean_dec_ref(v___x_1326_);
lean_dec_ref(v_a_1322_);
return v___x_1352_;
}
}
else
{
lean_dec_ref(v_h_u03c6_1336_);
lean_dec_ref(v_a_1335_);
lean_dec_ref(v_target_1334_);
lean_dec_ref(v_a_1333_);
lean_dec_ref(v_hyps_1332_);
lean_dec_ref(v_00_u03c3s_1331_);
lean_dec(v___x_1330_);
lean_dec_ref(v___x_1329_);
lean_dec_ref(v___x_1328_);
lean_dec_ref(v___x_1327_);
lean_dec_ref(v___x_1326_);
lean_dec_ref(v_a_1322_);
return v___x_1346_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0___boxed(lean_object** _args){
lean_object* v_kSuccess_1366_ = _args[0];
lean_object* v_a_1367_ = _args[1];
lean_object* v_goal_1368_ = _args[2];
lean_object* v_a_1369_ = _args[3];
lean_object* v___x_1370_ = _args[4];
lean_object* v___x_1371_ = _args[5];
lean_object* v___x_1372_ = _args[6];
lean_object* v___x_1373_ = _args[7];
lean_object* v___x_1374_ = _args[8];
lean_object* v___x_1375_ = _args[9];
lean_object* v_00_u03c3s_1376_ = _args[10];
lean_object* v_hyps_1377_ = _args[11];
lean_object* v_a_1378_ = _args[12];
lean_object* v_target_1379_ = _args[13];
lean_object* v_a_1380_ = _args[14];
lean_object* v_h_u03c6_1381_ = _args[15];
lean_object* v___y_1382_ = _args[16];
lean_object* v___y_1383_ = _args[17];
lean_object* v___y_1384_ = _args[18];
lean_object* v___y_1385_ = _args[19];
lean_object* v___y_1386_ = _args[20];
lean_object* v___y_1387_ = _args[21];
lean_object* v___y_1388_ = _args[22];
lean_object* v___y_1389_ = _args[23];
lean_object* v___y_1390_ = _args[24];
_start:
{
uint8_t v_a_11316__boxed_1391_; uint8_t v___x_11317__boxed_1392_; lean_object* v_res_1393_; 
v_a_11316__boxed_1391_ = lean_unbox(v_a_1369_);
v___x_11317__boxed_1392_ = lean_unbox(v___x_1370_);
v_res_1393_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0(v_kSuccess_1366_, v_a_1367_, v_goal_1368_, v_a_11316__boxed_1391_, v___x_11317__boxed_1392_, v___x_1371_, v___x_1372_, v___x_1373_, v___x_1374_, v___x_1375_, v_00_u03c3s_1376_, v_hyps_1377_, v_a_1378_, v_target_1379_, v_a_1380_, v_h_u03c6_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_);
lean_dec(v___y_1389_);
lean_dec_ref(v___y_1388_);
lean_dec(v___y_1387_);
lean_dec_ref(v___y_1386_);
lean_dec(v___y_1385_);
lean_dec_ref(v___y_1384_);
lean_dec(v___y_1383_);
lean_dec_ref(v___y_1382_);
return v_res_1393_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1400_ = lean_box(0);
v___x_1401_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__1));
v___x_1402_ = l_Lean_mkConst(v___x_1401_, v___x_1400_);
return v___x_1402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2(lean_object* v_goal_1403_, lean_object* v_kFail_1404_, lean_object* v_kSuccess_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_){
_start:
{
lean_object* v_u_1415_; lean_object* v_00_u03c3s_1416_; lean_object* v_hyps_1417_; lean_object* v_target_1418_; lean_object* v___x_1420_; uint8_t v_isShared_1421_; uint8_t v_isSharedCheck_1494_; 
v_u_1415_ = lean_ctor_get(v_goal_1403_, 0);
v_00_u03c3s_1416_ = lean_ctor_get(v_goal_1403_, 1);
v_hyps_1417_ = lean_ctor_get(v_goal_1403_, 2);
v_target_1418_ = lean_ctor_get(v_goal_1403_, 3);
v_isSharedCheck_1494_ = !lean_is_exclusive(v_goal_1403_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1420_ = v_goal_1403_;
v_isShared_1421_ = v_isSharedCheck_1494_;
goto v_resetjp_1419_;
}
else
{
lean_inc(v_target_1418_);
lean_inc(v_hyps_1417_);
lean_inc(v_00_u03c3s_1416_);
lean_inc(v_u_1415_);
lean_dec(v_goal_1403_);
v___x_1420_ = lean_box(0);
v_isShared_1421_ = v_isSharedCheck_1494_;
goto v_resetjp_1419_;
}
v_resetjp_1419_:
{
lean_object* v___x_1422_; uint8_t v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1422_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1);
v___x_1423_ = 0;
v___x_1424_ = lean_box(0);
v___x_1425_ = l_Lean_Meta_mkFreshExprMVar(v___x_1422_, v___x_1423_, v___x_1424_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1493_; 
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1428_ = v___x_1425_;
v_isShared_1429_ = v_isSharedCheck_1493_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_dec(v___x_1425_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1493_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1439_; 
v___x_1430_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0));
v___x_1431_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1));
v___x_1432_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2));
v___x_1433_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3));
v___x_1434_ = lean_box(0);
lean_inc(v_u_1415_);
v___x_1435_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1435_, 0, v_u_1415_);
lean_ctor_set(v___x_1435_, 1, v___x_1434_);
lean_inc_ref(v___x_1435_);
v___x_1436_ = l_Lean_mkConst(v___x_1433_, v___x_1435_);
lean_inc_ref(v_00_u03c3s_1416_);
v___x_1437_ = l_Lean_Expr_app___override(v___x_1436_, v_00_u03c3s_1416_);
if (v_isShared_1429_ == 0)
{
lean_ctor_set_tag(v___x_1428_, 1);
lean_ctor_set(v___x_1428_, 0, v___x_1437_);
v___x_1439_ = v___x_1428_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v___x_1437_);
v___x_1439_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
lean_object* v___x_1440_; 
v___x_1440_ = l_Lean_Meta_mkFreshExprMVar(v___x_1439_, v___x_1423_, v___x_1424_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc_n(v_a_1441_, 2);
lean_dec_ref_known(v___x_1440_, 1);
v___x_1442_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0));
v___x_1443_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0));
lean_inc_ref(v___x_1435_);
v___x_1444_ = l_Lean_mkConst(v___x_1443_, v___x_1435_);
lean_inc(v_a_1426_);
lean_inc_ref(v_hyps_1417_);
lean_inc_ref(v_00_u03c3s_1416_);
v___x_1445_ = l_Lean_mkApp4(v___x_1444_, v_00_u03c3s_1416_, v_hyps_1417_, v_a_1441_, v_a_1426_);
v___x_1446_ = lean_box(0);
v___x_1447_ = l_Lean_Meta_trySynthInstance(v___x_1445_, v___x_1446_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
if (lean_obj_tag(v___x_1447_) == 0)
{
lean_object* v_a_1448_; 
v_a_1448_ = lean_ctor_get(v___x_1447_, 0);
lean_inc(v_a_1448_);
lean_dec_ref_known(v___x_1447_, 1);
if (lean_obj_tag(v_a_1448_) == 1)
{
lean_object* v_a_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v_a_1449_ = lean_ctor_get(v_a_1448_, 0);
lean_inc(v_a_1449_);
lean_dec_ref_known(v_a_1448_, 1);
v___x_1450_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1);
lean_inc(v_a_1426_);
v___x_1451_ = l_Lean_Meta_isExprDefEq(v___x_1450_, v_a_1426_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
if (lean_obj_tag(v___x_1451_) == 0)
{
lean_object* v_a_1452_; uint8_t v___x_1453_; 
v_a_1452_ = lean_ctor_get(v___x_1451_, 0);
lean_inc(v_a_1452_);
lean_dec_ref_known(v___x_1451_, 1);
v___x_1453_ = lean_unbox(v_a_1452_);
if (v___x_1453_ == 0)
{
lean_object* v___x_1454_; 
lean_dec_ref(v_kFail_1404_);
lean_inc_ref(v_hyps_1417_);
v___x_1454_ = l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames(v_hyps_1417_, v_a_1441_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
if (lean_obj_tag(v___x_1454_) == 0)
{
lean_object* v_a_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v_a_1455_ = lean_ctor_get(v___x_1454_, 0);
lean_inc(v_a_1455_);
lean_dec_ref_known(v___x_1454_, 1);
v___x_1456_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1));
v___x_1457_ = l_Lean_Core_mkFreshUserName(v___x_1456_, v___y_1412_, v___y_1413_);
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_object* v_a_1458_; uint8_t v___x_1459_; lean_object* v_goal_1461_; 
v_a_1458_ = lean_ctor_get(v___x_1457_, 0);
lean_inc(v_a_1458_);
lean_dec_ref_known(v___x_1457_, 1);
v___x_1459_ = 1;
lean_inc_ref(v_target_1418_);
lean_inc(v_a_1455_);
lean_inc_ref(v_00_u03c3s_1416_);
if (v_isShared_1421_ == 0)
{
lean_ctor_set(v___x_1420_, 2, v_a_1455_);
v_goal_1461_ = v___x_1420_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v_u_1415_);
lean_ctor_set(v_reuseFailAlloc_1465_, 1, v_00_u03c3s_1416_);
lean_ctor_set(v_reuseFailAlloc_1465_, 2, v_a_1455_);
lean_ctor_set(v_reuseFailAlloc_1465_, 3, v_target_1418_);
v_goal_1461_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
lean_object* v___x_1462_; lean_object* v___f_1463_; lean_object* v___x_1464_; 
v___x_1462_ = lean_box(v___x_1459_);
lean_inc(v_a_1426_);
v___f_1463_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0___boxed), 25, 15);
lean_closure_set(v___f_1463_, 0, v_kSuccess_1405_);
lean_closure_set(v___f_1463_, 1, v_a_1426_);
lean_closure_set(v___f_1463_, 2, v_goal_1461_);
lean_closure_set(v___f_1463_, 3, v_a_1452_);
lean_closure_set(v___f_1463_, 4, v___x_1462_);
lean_closure_set(v___f_1463_, 5, v___x_1430_);
lean_closure_set(v___f_1463_, 6, v___x_1431_);
lean_closure_set(v___f_1463_, 7, v___x_1432_);
lean_closure_set(v___f_1463_, 8, v___x_1442_);
lean_closure_set(v___f_1463_, 9, v___x_1435_);
lean_closure_set(v___f_1463_, 10, v_00_u03c3s_1416_);
lean_closure_set(v___f_1463_, 11, v_hyps_1417_);
lean_closure_set(v___f_1463_, 12, v_a_1455_);
lean_closure_set(v___f_1463_, 13, v_target_1418_);
lean_closure_set(v___f_1463_, 14, v_a_1449_);
v___x_1464_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg(v_a_1458_, v_a_1426_, v___f_1463_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
return v___x_1464_;
}
}
else
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1473_; 
lean_dec(v_a_1455_);
lean_dec(v_a_1452_);
lean_dec(v_a_1449_);
lean_dec_ref_known(v___x_1435_, 2);
lean_dec(v_a_1426_);
lean_del_object(v___x_1420_);
lean_dec_ref(v_target_1418_);
lean_dec_ref(v_hyps_1417_);
lean_dec_ref(v_00_u03c3s_1416_);
lean_dec(v_u_1415_);
lean_dec_ref(v_kSuccess_1405_);
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
lean_dec(v_a_1452_);
lean_dec(v_a_1449_);
lean_dec_ref_known(v___x_1435_, 2);
lean_dec(v_a_1426_);
lean_del_object(v___x_1420_);
lean_dec_ref(v_target_1418_);
lean_dec_ref(v_hyps_1417_);
lean_dec_ref(v_00_u03c3s_1416_);
lean_dec(v_u_1415_);
lean_dec_ref(v_kSuccess_1405_);
return v___x_1454_;
}
}
else
{
lean_object* v___x_1474_; 
lean_dec(v_a_1452_);
lean_dec(v_a_1449_);
lean_dec(v_a_1441_);
lean_dec_ref_known(v___x_1435_, 2);
lean_dec(v_a_1426_);
lean_del_object(v___x_1420_);
lean_dec_ref(v_target_1418_);
lean_dec_ref(v_hyps_1417_);
lean_dec_ref(v_00_u03c3s_1416_);
lean_dec(v_u_1415_);
lean_dec_ref(v_kSuccess_1405_);
lean_inc(v___y_1413_);
lean_inc_ref(v___y_1412_);
lean_inc(v___y_1411_);
lean_inc_ref(v___y_1410_);
lean_inc(v___y_1409_);
lean_inc_ref(v___y_1408_);
lean_inc(v___y_1407_);
lean_inc_ref(v___y_1406_);
v___x_1474_ = lean_apply_9(v_kFail_1404_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_, lean_box(0));
return v___x_1474_;
}
}
else
{
lean_object* v_a_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1482_; 
lean_dec(v_a_1449_);
lean_dec(v_a_1441_);
lean_dec_ref_known(v___x_1435_, 2);
lean_dec(v_a_1426_);
lean_del_object(v___x_1420_);
lean_dec_ref(v_target_1418_);
lean_dec_ref(v_hyps_1417_);
lean_dec_ref(v_00_u03c3s_1416_);
lean_dec(v_u_1415_);
lean_dec_ref(v_kSuccess_1405_);
lean_dec_ref(v_kFail_1404_);
v_a_1475_ = lean_ctor_get(v___x_1451_, 0);
v_isSharedCheck_1482_ = !lean_is_exclusive(v___x_1451_);
if (v_isSharedCheck_1482_ == 0)
{
v___x_1477_ = v___x_1451_;
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_a_1475_);
lean_dec(v___x_1451_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v___x_1480_; 
if (v_isShared_1478_ == 0)
{
v___x_1480_ = v___x_1477_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v_a_1475_);
v___x_1480_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
return v___x_1480_;
}
}
}
}
else
{
lean_object* v___x_1483_; 
lean_dec(v_a_1448_);
lean_dec(v_a_1441_);
lean_dec_ref_known(v___x_1435_, 2);
lean_dec(v_a_1426_);
lean_del_object(v___x_1420_);
lean_dec_ref(v_target_1418_);
lean_dec_ref(v_hyps_1417_);
lean_dec_ref(v_00_u03c3s_1416_);
lean_dec(v_u_1415_);
lean_dec_ref(v_kSuccess_1405_);
lean_inc(v___y_1413_);
lean_inc_ref(v___y_1412_);
lean_inc(v___y_1411_);
lean_inc_ref(v___y_1410_);
lean_inc(v___y_1409_);
lean_inc_ref(v___y_1408_);
lean_inc(v___y_1407_);
lean_inc_ref(v___y_1406_);
v___x_1483_ = lean_apply_9(v_kFail_1404_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_, lean_box(0));
return v___x_1483_;
}
}
else
{
lean_object* v_a_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1491_; 
lean_dec(v_a_1441_);
lean_dec_ref_known(v___x_1435_, 2);
lean_dec(v_a_1426_);
lean_del_object(v___x_1420_);
lean_dec_ref(v_target_1418_);
lean_dec_ref(v_hyps_1417_);
lean_dec_ref(v_00_u03c3s_1416_);
lean_dec(v_u_1415_);
lean_dec_ref(v_kSuccess_1405_);
lean_dec_ref(v_kFail_1404_);
v_a_1484_ = lean_ctor_get(v___x_1447_, 0);
v_isSharedCheck_1491_ = !lean_is_exclusive(v___x_1447_);
if (v_isSharedCheck_1491_ == 0)
{
v___x_1486_ = v___x_1447_;
v_isShared_1487_ = v_isSharedCheck_1491_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_a_1484_);
lean_dec(v___x_1447_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1491_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
lean_object* v___x_1489_; 
if (v_isShared_1487_ == 0)
{
v___x_1489_ = v___x_1486_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v_a_1484_);
v___x_1489_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
return v___x_1489_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_1435_, 2);
lean_dec(v_a_1426_);
lean_del_object(v___x_1420_);
lean_dec_ref(v_target_1418_);
lean_dec_ref(v_hyps_1417_);
lean_dec_ref(v_00_u03c3s_1416_);
lean_dec(v_u_1415_);
lean_dec_ref(v_kSuccess_1405_);
lean_dec_ref(v_kFail_1404_);
return v___x_1440_;
}
}
}
}
else
{
lean_del_object(v___x_1420_);
lean_dec_ref(v_target_1418_);
lean_dec_ref(v_hyps_1417_);
lean_dec_ref(v_00_u03c3s_1416_);
lean_dec(v_u_1415_);
lean_dec_ref(v_kSuccess_1405_);
lean_dec_ref(v_kFail_1404_);
return v___x_1425_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___boxed(lean_object* v_goal_1495_, lean_object* v_kFail_1496_, lean_object* v_kSuccess_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2(v_goal_1495_, v_kFail_1496_, v_kSuccess_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_);
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
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1509_; lean_object* v___x_1510_; 
v___x_1509_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__0));
v___x_1510_ = l_Lean_stringToMessageData(v___x_1509_);
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2(lean_object* v_a_1511_, lean_object* v___f_1512_, lean_object* v___f_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v___x_1523_; 
lean_inc(v_a_1511_);
v___x_1523_ = l_Lean_MVarId_getType(v_a_1511_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
if (lean_obj_tag(v___x_1523_) == 0)
{
lean_object* v_a_1524_; lean_object* v___x_1525_; lean_object* v_a_1526_; lean_object* v___x_1527_; 
v_a_1524_ = lean_ctor_get(v___x_1523_, 0);
lean_inc(v_a_1524_);
lean_dec_ref_known(v___x_1523_, 1);
v___x_1525_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg(v_a_1524_, v___y_1519_);
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
lean_inc(v_a_1526_);
lean_dec_ref(v___x_1525_);
v___x_1527_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_a_1526_);
lean_dec(v_a_1526_);
if (lean_obj_tag(v___x_1527_) == 1)
{
lean_object* v_val_1528_; lean_object* v___x_1529_; 
v_val_1528_ = lean_ctor_get(v___x_1527_, 0);
lean_inc(v_val_1528_);
lean_dec_ref_known(v___x_1527_, 1);
v___x_1529_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2(v_val_1528_, v___f_1512_, v___f_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v_a_1530_; lean_object* v___x_1531_; 
v_a_1530_ = lean_ctor_get(v___x_1529_, 0);
lean_inc(v_a_1530_);
lean_dec_ref_known(v___x_1529_, 1);
v___x_1531_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg(v_a_1511_, v_a_1530_, v___y_1519_);
return v___x_1531_;
}
else
{
lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1539_; 
lean_dec(v_a_1511_);
v_a_1532_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1534_ = v___x_1529_;
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1529_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1537_; 
if (v_isShared_1535_ == 0)
{
v___x_1537_ = v___x_1534_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_a_1532_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
else
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
lean_dec(v___x_1527_);
lean_dec_ref(v___f_1513_);
lean_dec_ref(v___f_1512_);
lean_dec(v_a_1511_);
v___x_1540_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__1);
v___x_1541_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg(v___x_1540_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
return v___x_1541_;
}
}
else
{
lean_object* v_a_1542_; lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1549_; 
lean_dec_ref(v___f_1513_);
lean_dec_ref(v___f_1512_);
lean_dec(v_a_1511_);
v_a_1542_ = lean_ctor_get(v___x_1523_, 0);
v_isSharedCheck_1549_ = !lean_is_exclusive(v___x_1523_);
if (v_isSharedCheck_1549_ == 0)
{
v___x_1544_ = v___x_1523_;
v_isShared_1545_ = v_isSharedCheck_1549_;
goto v_resetjp_1543_;
}
else
{
lean_inc(v_a_1542_);
lean_dec(v___x_1523_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1549_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
lean_object* v___x_1547_; 
if (v_isShared_1545_ == 0)
{
v___x_1547_ = v___x_1544_;
goto v_reusejp_1546_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v_a_1542_);
v___x_1547_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1546_;
}
v_reusejp_1546_:
{
return v___x_1547_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___boxed(lean_object* v_a_1550_, lean_object* v___f_1551_, lean_object* v___f_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_){
_start:
{
lean_object* v_res_1562_; 
v_res_1562_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2(v_a_1550_, v___f_1551_, v___f_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_);
lean_dec(v___y_1560_);
lean_dec_ref(v___y_1559_);
lean_dec(v___y_1558_);
lean_dec_ref(v___y_1557_);
lean_dec(v___y_1556_);
lean_dec_ref(v___y_1555_);
lean_dec(v___y_1554_);
lean_dec_ref(v___y_1553_);
return v_res_1562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg(lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_){
_start:
{
lean_object* v___x_1574_; 
v___x_1574_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_1566_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_);
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_object* v_a_1575_; lean_object* v___f_1576_; lean_object* v___f_1577_; lean_object* v___f_1578_; lean_object* v___x_1579_; 
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
lean_inc_n(v_a_1575_, 2);
lean_dec_ref_known(v___x_1574_, 1);
v___f_1576_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__0));
v___f_1577_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__1));
v___f_1578_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___boxed), 12, 3);
lean_closure_set(v___f_1578_, 0, v_a_1575_);
lean_closure_set(v___f_1578_, 1, v___f_1576_);
lean_closure_set(v___f_1578_, 2, v___f_1577_);
v___x_1579_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg(v_a_1575_, v___f_1578_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_);
return v___x_1579_;
}
else
{
lean_object* v_a_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1587_; 
v_a_1580_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1587_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1582_ = v___x_1574_;
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_a_1580_);
lean_dec(v___x_1574_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1585_; 
if (v_isShared_1583_ == 0)
{
v___x_1585_ = v___x_1582_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v_a_1580_);
v___x_1585_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
return v___x_1585_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___boxed(lean_object* v_a_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_){
_start:
{
lean_object* v_res_1597_; 
v_res_1597_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg(v_a_1588_, v_a_1589_, v_a_1590_, v_a_1591_, v_a_1592_, v_a_1593_, v_a_1594_, v_a_1595_);
lean_dec(v_a_1595_);
lean_dec_ref(v_a_1594_);
lean_dec(v_a_1593_);
lean_dec_ref(v_a_1592_);
lean_dec(v_a_1591_);
lean_dec_ref(v_a_1590_);
lean_dec(v_a_1589_);
lean_dec_ref(v_a_1588_);
return v_res_1597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame(lean_object* v_x_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_){
_start:
{
lean_object* v___x_1608_; 
v___x_1608_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg(v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_, v_a_1603_, v_a_1604_, v_a_1605_, v_a_1606_);
return v___x_1608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___boxed(lean_object* v_x_1609_, lean_object* v_a_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame(v_x_1609_, v_a_1610_, v_a_1611_, v_a_1612_, v_a_1613_, v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_);
lean_dec(v_a_1617_);
lean_dec_ref(v_a_1616_);
lean_dec(v_a_1615_);
lean_dec_ref(v_a_1614_);
lean_dec(v_a_1613_);
lean_dec_ref(v_a_1612_);
lean_dec(v_a_1611_);
lean_dec_ref(v_a_1610_);
lean_dec(v_x_1609_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0(lean_object* v_00_u03b1_1620_, lean_object* v_msg_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_){
_start:
{
lean_object* v___x_1630_; 
v___x_1630_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg(v_msg_1621_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___boxed(lean_object* v_00_u03b1_1631_, lean_object* v_msg_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_){
_start:
{
lean_object* v_res_1641_; 
v_res_1641_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0(v_00_u03b1_1631_, v_msg_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_);
lean_dec(v___y_1639_);
lean_dec_ref(v___y_1638_);
lean_dec(v___y_1637_);
lean_dec_ref(v___y_1636_);
lean_dec(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec(v___y_1633_);
return v_res_1641_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3(lean_object* v_mvarId_1642_, lean_object* v_val_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_){
_start:
{
lean_object* v___x_1653_; 
v___x_1653_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg(v_mvarId_1642_, v_val_1643_, v___y_1649_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___boxed(lean_object* v_mvarId_1654_, lean_object* v_val_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_){
_start:
{
lean_object* v_res_1665_; 
v_res_1665_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3(v_mvarId_1654_, v_val_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_);
lean_dec(v___y_1663_);
lean_dec_ref(v___y_1662_);
lean_dec(v___y_1661_);
lean_dec_ref(v___y_1660_);
lean_dec(v___y_1659_);
lean_dec_ref(v___y_1658_);
lean_dec(v___y_1657_);
lean_dec_ref(v___y_1656_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4(lean_object* v_00_u03b1_1666_, lean_object* v_msg_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_){
_start:
{
lean_object* v___x_1677_; 
v___x_1677_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg(v_msg_1667_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___boxed(lean_object* v_00_u03b1_1678_, lean_object* v_msg_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_){
_start:
{
lean_object* v_res_1689_; 
v_res_1689_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4(v_00_u03b1_1678_, v_msg_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_);
lean_dec(v___y_1687_);
lean_dec_ref(v___y_1686_);
lean_dec(v___y_1685_);
lean_dec_ref(v___y_1684_);
lean_dec(v___y_1683_);
lean_dec_ref(v___y_1682_);
lean_dec(v___y_1681_);
lean_dec_ref(v___y_1680_);
return v_res_1689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5(lean_object* v_00_u03b1_1690_, lean_object* v_name_1691_, uint8_t v_bi_1692_, lean_object* v_type_1693_, lean_object* v_k_1694_, uint8_t v_kind_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_){
_start:
{
lean_object* v___x_1705_; 
v___x_1705_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg(v_name_1691_, v_bi_1692_, v_type_1693_, v_k_1694_, v_kind_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
return v___x_1705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1706_, lean_object* v_name_1707_, lean_object* v_bi_1708_, lean_object* v_type_1709_, lean_object* v_k_1710_, lean_object* v_kind_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_){
_start:
{
uint8_t v_bi_boxed_1721_; uint8_t v_kind_boxed_1722_; lean_object* v_res_1723_; 
v_bi_boxed_1721_ = lean_unbox(v_bi_1708_);
v_kind_boxed_1722_ = lean_unbox(v_kind_1711_);
v_res_1723_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5(v_00_u03b1_1706_, v_name_1707_, v_bi_boxed_1721_, v_type_1709_, v_k_1710_, v_kind_boxed_1722_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_);
lean_dec(v___y_1719_);
lean_dec_ref(v___y_1718_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
return v_res_1723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3(lean_object* v_00_u03b1_1724_, lean_object* v_name_1725_, lean_object* v_type_1726_, lean_object* v_k_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_){
_start:
{
lean_object* v___x_1737_; 
v___x_1737_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg(v_name_1725_, v_type_1726_, v_k_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_);
return v___x_1737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1738_, lean_object* v_name_1739_, lean_object* v_type_1740_, lean_object* v_k_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_){
_start:
{
lean_object* v_res_1751_; 
v_res_1751_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3(v_00_u03b1_1738_, v_name_1739_, v_type_1740_, v_k_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_, v___y_1749_);
lean_dec(v___y_1749_);
lean_dec_ref(v___y_1748_);
lean_dec(v___y_1747_);
lean_dec_ref(v___y_1746_);
lean_dec(v___y_1745_);
lean_dec_ref(v___y_1744_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
return v_res_1751_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5(lean_object* v_00_u03b2_1752_, lean_object* v_x_1753_, lean_object* v_x_1754_, lean_object* v_x_1755_){
_start:
{
lean_object* v___x_1756_; 
v___x_1756_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5___redArg(v_x_1753_, v_x_1754_, v_x_1755_);
return v___x_1756_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8(lean_object* v_00_u03b2_1757_, lean_object* v_x_1758_, size_t v_x_1759_, size_t v_x_1760_, lean_object* v_x_1761_, lean_object* v_x_1762_){
_start:
{
lean_object* v___x_1763_; 
v___x_1763_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(v_x_1758_, v_x_1759_, v_x_1760_, v_x_1761_, v_x_1762_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___boxed(lean_object* v_00_u03b2_1764_, lean_object* v_x_1765_, lean_object* v_x_1766_, lean_object* v_x_1767_, lean_object* v_x_1768_, lean_object* v_x_1769_){
_start:
{
size_t v_x_11934__boxed_1770_; size_t v_x_11935__boxed_1771_; lean_object* v_res_1772_; 
v_x_11934__boxed_1770_ = lean_unbox_usize(v_x_1766_);
lean_dec(v_x_1766_);
v_x_11935__boxed_1771_ = lean_unbox_usize(v_x_1767_);
lean_dec(v_x_1767_);
v_res_1772_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8(v_00_u03b2_1764_, v_x_1765_, v_x_11934__boxed_1770_, v_x_11935__boxed_1771_, v_x_1768_, v_x_1769_);
return v_res_1772_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10(lean_object* v_00_u03b2_1773_, lean_object* v_n_1774_, lean_object* v_k_1775_, lean_object* v_v_1776_){
_start:
{
lean_object* v___x_1777_; 
v___x_1777_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10___redArg(v_n_1774_, v_k_1775_, v_v_1776_);
return v___x_1777_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11(lean_object* v_00_u03b2_1778_, size_t v_depth_1779_, lean_object* v_keys_1780_, lean_object* v_vals_1781_, lean_object* v_heq_1782_, lean_object* v_i_1783_, lean_object* v_entries_1784_){
_start:
{
lean_object* v___x_1785_; 
v___x_1785_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___redArg(v_depth_1779_, v_keys_1780_, v_vals_1781_, v_i_1783_, v_entries_1784_);
return v___x_1785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___boxed(lean_object* v_00_u03b2_1786_, lean_object* v_depth_1787_, lean_object* v_keys_1788_, lean_object* v_vals_1789_, lean_object* v_heq_1790_, lean_object* v_i_1791_, lean_object* v_entries_1792_){
_start:
{
size_t v_depth_boxed_1793_; lean_object* v_res_1794_; 
v_depth_boxed_1793_ = lean_unbox_usize(v_depth_1787_);
lean_dec(v_depth_1787_);
v_res_1794_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11(v_00_u03b2_1786_, v_depth_boxed_1793_, v_keys_1788_, v_vals_1789_, v_heq_1790_, v_i_1791_, v_entries_1792_);
lean_dec_ref(v_vals_1789_);
lean_dec_ref(v_keys_1788_);
return v_res_1794_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10_spec__11(lean_object* v_00_u03b2_1795_, lean_object* v_x_1796_, lean_object* v_x_1797_, lean_object* v_x_1798_, lean_object* v_x_1799_){
_start:
{
lean_object* v___x_1800_; 
v___x_1800_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10_spec__11___redArg(v_x_1796_, v_x_1797_, v_x_1798_, v_x_1799_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_collectHyps(lean_object* v_P_1801_, lean_object* v_acc_1802_){
_start:
{
lean_object* v___x_1803_; 
lean_inc_ref(v_P_1801_);
v___x_1803_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseHyp_x3f(v_P_1801_);
if (lean_obj_tag(v___x_1803_) == 1)
{
lean_object* v_val_1804_; lean_object* v___x_1805_; 
lean_dec_ref(v_P_1801_);
v_val_1804_ = lean_ctor_get(v___x_1803_, 0);
lean_inc(v_val_1804_);
lean_dec_ref_known(v___x_1803_, 1);
v___x_1805_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1805_, 0, v_val_1804_);
lean_ctor_set(v___x_1805_, 1, v_acc_1802_);
return v___x_1805_;
}
else
{
lean_object* v___x_1806_; 
lean_dec(v___x_1803_);
v___x_1806_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseAnd_x3f(v_P_1801_);
lean_dec_ref(v_P_1801_);
if (lean_obj_tag(v___x_1806_) == 1)
{
lean_object* v_val_1807_; lean_object* v_snd_1808_; lean_object* v_snd_1809_; lean_object* v_snd_1810_; lean_object* v_fst_1811_; lean_object* v_snd_1812_; lean_object* v___x_1813_; 
v_val_1807_ = lean_ctor_get(v___x_1806_, 0);
lean_inc(v_val_1807_);
lean_dec_ref_known(v___x_1806_, 1);
v_snd_1808_ = lean_ctor_get(v_val_1807_, 1);
lean_inc(v_snd_1808_);
lean_dec(v_val_1807_);
v_snd_1809_ = lean_ctor_get(v_snd_1808_, 1);
lean_inc(v_snd_1809_);
lean_dec(v_snd_1808_);
v_snd_1810_ = lean_ctor_get(v_snd_1809_, 1);
lean_inc(v_snd_1810_);
lean_dec(v_snd_1809_);
v_fst_1811_ = lean_ctor_get(v_snd_1810_, 0);
lean_inc(v_fst_1811_);
v_snd_1812_ = lean_ctor_get(v_snd_1810_, 1);
lean_inc(v_snd_1812_);
lean_dec(v_snd_1810_);
v___x_1813_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_collectHyps(v_snd_1812_, v_acc_1802_);
v_P_1801_ = v_fst_1811_;
v_acc_1802_ = v___x_1813_;
goto _start;
}
else
{
lean_dec(v___x_1806_);
return v_acc_1802_;
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__1(lean_object* v_msg_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_){
_start:
{
lean_object* v___f_1821_; lean_object* v___x_2677__overap_1822_; lean_object* v___x_1823_; 
v___f_1821_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___closed__0));
v___x_2677__overap_1822_ = lean_panic_fn_borrowed(v___f_1821_, v_msg_1815_);
lean_inc(v___y_1819_);
lean_inc_ref(v___y_1818_);
lean_inc(v___y_1817_);
lean_inc_ref(v___y_1816_);
v___x_1823_ = lean_apply_5(v___x_2677__overap_1822_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, lean_box(0));
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__1___boxed(lean_object* v_msg_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_){
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__1(v_msg_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
lean_dec(v___y_1826_);
lean_dec_ref(v___y_1825_);
return v_res_1830_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__0___redArg(lean_object* v_a_1831_, lean_object* v_Ps_1832_, lean_object* v_a_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_){
_start:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1839_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1));
v___x_1840_ = l_Lean_Core_mkFreshUserName(v___x_1839_, v___y_1836_, v___y_1837_);
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v_a_1841_; lean_object* v___x_1842_; 
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
lean_inc(v_a_1841_);
lean_dec_ref_known(v___x_1840_, 1);
v___x_1842_ = l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg(v___y_1837_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v_snd_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1909_; 
v_snd_1843_ = lean_ctor_get(v_a_1833_, 1);
v_isSharedCheck_1909_ = !lean_is_exclusive(v_a_1833_);
if (v_isSharedCheck_1909_ == 0)
{
lean_object* v_unused_1910_; 
v_unused_1910_ = lean_ctor_get(v_a_1833_, 0);
lean_dec(v_unused_1910_);
v___x_1845_ = v_a_1833_;
v_isShared_1846_ = v_isSharedCheck_1909_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_snd_1843_);
lean_dec(v_a_1833_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1909_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
if (lean_obj_tag(v_snd_1843_) == 1)
{
lean_object* v_head_1847_; lean_object* v_tail_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1893_; 
lean_dec_ref_known(v___x_1842_, 1);
lean_dec(v_a_1841_);
v_head_1847_ = lean_ctor_get(v_snd_1843_, 0);
v_tail_1848_ = lean_ctor_get(v_snd_1843_, 1);
v_isSharedCheck_1893_ = !lean_is_exclusive(v_snd_1843_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1850_ = v_snd_1843_;
v_isShared_1851_ = v_isSharedCheck_1893_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_tail_1848_);
lean_inc(v_head_1847_);
lean_dec(v_snd_1843_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1893_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v_name_1852_; lean_object* v_uniq_1853_; lean_object* v_p_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1892_; 
v_name_1852_ = lean_ctor_get(v_head_1847_, 0);
v_uniq_1853_ = lean_ctor_get(v_head_1847_, 1);
v_p_1854_ = lean_ctor_get(v_head_1847_, 2);
v_isSharedCheck_1892_ = !lean_is_exclusive(v_head_1847_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1856_ = v_head_1847_;
v_isShared_1857_ = v_isSharedCheck_1892_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_p_1854_);
lean_inc(v_uniq_1853_);
lean_inc(v_name_1852_);
lean_dec(v_head_1847_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1892_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1858_; 
lean_inc_ref(v_a_1831_);
v___x_1858_ = l_Lean_Meta_isExprDefEq(v_p_1854_, v_a_1831_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
if (lean_obj_tag(v___x_1858_) == 0)
{
lean_object* v_a_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1883_; 
v_a_1859_ = lean_ctor_get(v___x_1858_, 0);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1861_ = v___x_1858_;
v_isShared_1862_ = v_isSharedCheck_1883_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_a_1859_);
lean_dec(v___x_1858_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1883_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
uint8_t v___x_1863_; 
v___x_1863_ = lean_unbox(v_a_1859_);
lean_dec(v_a_1859_);
if (v___x_1863_ == 0)
{
lean_object* v___x_1864_; lean_object* v___x_1866_; 
lean_del_object(v___x_1861_);
lean_del_object(v___x_1856_);
lean_dec(v_uniq_1853_);
lean_dec(v_name_1852_);
lean_del_object(v___x_1850_);
v___x_1864_ = lean_box(0);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 1, v_tail_1848_);
lean_ctor_set(v___x_1845_, 0, v___x_1864_);
v___x_1866_ = v___x_1845_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v___x_1864_);
lean_ctor_set(v_reuseFailAlloc_1868_, 1, v_tail_1848_);
v___x_1866_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
v_a_1833_ = v___x_1866_;
goto _start;
}
}
else
{
lean_object* v___x_1870_; 
if (v_isShared_1857_ == 0)
{
lean_ctor_set(v___x_1856_, 2, v_a_1831_);
v___x_1870_ = v___x_1856_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v_name_1852_);
lean_ctor_set(v_reuseFailAlloc_1882_, 1, v_uniq_1853_);
lean_ctor_set(v_reuseFailAlloc_1882_, 2, v_a_1831_);
v___x_1870_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
lean_object* v___x_1871_; lean_object* v___x_1873_; 
v___x_1871_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_Hyp_toExpr(v___x_1870_);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 1, v___x_1871_);
lean_ctor_set(v___x_1845_, 0, v_Ps_1832_);
v___x_1873_ = v___x_1845_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_Ps_1832_);
lean_ctor_set(v_reuseFailAlloc_1881_, 1, v___x_1871_);
v___x_1873_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
lean_object* v___x_1874_; lean_object* v___x_1876_; 
v___x_1874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1874_, 0, v___x_1873_);
if (v_isShared_1851_ == 0)
{
lean_ctor_set_tag(v___x_1850_, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1874_);
v___x_1876_ = v___x_1850_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v___x_1874_);
lean_ctor_set(v_reuseFailAlloc_1880_, 1, v_tail_1848_);
v___x_1876_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
lean_object* v___x_1878_; 
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 0, v___x_1876_);
v___x_1878_ = v___x_1861_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v___x_1876_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
return v___x_1878_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1891_; 
lean_del_object(v___x_1856_);
lean_dec(v_uniq_1853_);
lean_dec(v_name_1852_);
lean_del_object(v___x_1850_);
lean_dec(v_tail_1848_);
lean_del_object(v___x_1845_);
lean_dec(v_Ps_1832_);
lean_dec_ref(v_a_1831_);
v_a_1884_ = lean_ctor_get(v___x_1858_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1886_ = v___x_1858_;
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_a_1884_);
lean_dec(v___x_1858_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1884_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
}
}
}
else
{
lean_object* v_a_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1908_; 
v_a_1894_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1896_ = v___x_1842_;
v_isShared_1897_ = v_isSharedCheck_1908_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_a_1894_);
lean_dec(v___x_1842_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1908_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1901_; 
v___x_1898_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1898_, 0, v_a_1841_);
lean_ctor_set(v___x_1898_, 1, v_a_1894_);
lean_ctor_set(v___x_1898_, 2, v_a_1831_);
v___x_1899_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_Hyp_toExpr(v___x_1898_);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 1, v___x_1899_);
lean_ctor_set(v___x_1845_, 0, v_Ps_1832_);
v___x_1901_ = v___x_1845_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_Ps_1832_);
lean_ctor_set(v_reuseFailAlloc_1907_, 1, v___x_1899_);
v___x_1901_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1905_; 
v___x_1902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1902_, 0, v___x_1901_);
v___x_1903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1902_);
lean_ctor_set(v___x_1903_, 1, v_snd_1843_);
if (v_isShared_1897_ == 0)
{
lean_ctor_set(v___x_1896_, 0, v___x_1903_);
v___x_1905_ = v___x_1896_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v___x_1903_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
return v___x_1905_;
}
}
}
}
}
}
else
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1918_; 
lean_dec(v_a_1841_);
lean_dec_ref(v_a_1833_);
lean_dec(v_Ps_1832_);
lean_dec_ref(v_a_1831_);
v_a_1911_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1913_ = v___x_1842_;
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v___x_1842_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
return v___x_1916_;
}
}
}
}
else
{
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1926_; 
lean_dec_ref(v_a_1833_);
lean_dec(v_Ps_1832_);
lean_dec_ref(v_a_1831_);
v_a_1919_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1926_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1921_ = v___x_1840_;
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1840_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1924_; 
if (v_isShared_1922_ == 0)
{
v___x_1924_ = v___x_1921_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_a_1919_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__0___redArg___boxed(lean_object* v_a_1927_, lean_object* v_Ps_1928_, lean_object* v_a_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_){
_start:
{
lean_object* v_res_1935_; 
v_res_1935_ = l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__0___redArg(v_a_1927_, v_Ps_1928_, v_a_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_);
lean_dec(v___y_1933_);
lean_dec_ref(v___y_1932_);
lean_dec(v___y_1931_);
lean_dec_ref(v___y_1930_);
return v_res_1935_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label___closed__1(void){
_start:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___x_1937_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__2));
v___x_1938_ = lean_unsigned_to_nat(8u);
v___x_1939_ = lean_unsigned_to_nat(122u);
v___x_1940_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label___closed__0));
v___x_1941_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__0));
v___x_1942_ = l_mkPanicMessageWithDecl(v___x_1941_, v___x_1940_, v___x_1939_, v___x_1938_, v___x_1937_);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label(lean_object* v_Ps_1943_, lean_object* v_P_x27_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_){
_start:
{
lean_object* v___x_1950_; 
v___x_1950_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_P_x27_1944_, v_a_1946_);
if (lean_obj_tag(v___x_1950_) == 0)
{
lean_object* v_a_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_2016_; 
v_a_1951_ = lean_ctor_get(v___x_1950_, 0);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___x_1950_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_1953_ = v___x_1950_;
v_isShared_1954_ = v_isSharedCheck_2016_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_a_1951_);
lean_dec(v___x_1950_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_2016_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1955_; 
lean_inc(v_a_1951_);
v___x_1955_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseEmptyHyp_x3f(v_a_1951_);
if (lean_obj_tag(v___x_1955_) == 1)
{
lean_object* v___x_1956_; lean_object* v___x_1958_; 
lean_dec_ref_known(v___x_1955_, 1);
v___x_1956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1956_, 0, v_Ps_1943_);
lean_ctor_set(v___x_1956_, 1, v_a_1951_);
if (v_isShared_1954_ == 0)
{
lean_ctor_set(v___x_1953_, 0, v___x_1956_);
v___x_1958_ = v___x_1953_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v___x_1956_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
return v___x_1958_;
}
}
else
{
lean_object* v___x_1960_; 
lean_dec(v___x_1955_);
lean_del_object(v___x_1953_);
v___x_1960_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseAnd_x3f(v_a_1951_);
if (lean_obj_tag(v___x_1960_) == 1)
{
lean_object* v_val_1961_; lean_object* v_snd_1962_; lean_object* v_snd_1963_; lean_object* v_snd_1964_; lean_object* v_fst_1965_; lean_object* v_fst_1966_; lean_object* v_fst_1967_; lean_object* v_fst_1968_; lean_object* v_snd_1969_; lean_object* v___x_1970_; 
lean_dec(v_a_1951_);
v_val_1961_ = lean_ctor_get(v___x_1960_, 0);
lean_inc(v_val_1961_);
lean_dec_ref_known(v___x_1960_, 1);
v_snd_1962_ = lean_ctor_get(v_val_1961_, 1);
lean_inc(v_snd_1962_);
v_snd_1963_ = lean_ctor_get(v_snd_1962_, 1);
lean_inc(v_snd_1963_);
v_snd_1964_ = lean_ctor_get(v_snd_1963_, 1);
lean_inc(v_snd_1964_);
v_fst_1965_ = lean_ctor_get(v_val_1961_, 0);
lean_inc(v_fst_1965_);
lean_dec(v_val_1961_);
v_fst_1966_ = lean_ctor_get(v_snd_1962_, 0);
lean_inc(v_fst_1966_);
lean_dec(v_snd_1962_);
v_fst_1967_ = lean_ctor_get(v_snd_1963_, 0);
lean_inc(v_fst_1967_);
lean_dec(v_snd_1963_);
v_fst_1968_ = lean_ctor_get(v_snd_1964_, 0);
lean_inc(v_fst_1968_);
v_snd_1969_ = lean_ctor_get(v_snd_1964_, 1);
lean_inc(v_snd_1969_);
lean_dec(v_snd_1964_);
v___x_1970_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label(v_Ps_1943_, v_fst_1968_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
if (lean_obj_tag(v___x_1970_) == 0)
{
lean_object* v_a_1971_; lean_object* v_fst_1972_; lean_object* v_snd_1973_; lean_object* v___x_1974_; 
v_a_1971_ = lean_ctor_get(v___x_1970_, 0);
lean_inc(v_a_1971_);
lean_dec_ref_known(v___x_1970_, 1);
v_fst_1972_ = lean_ctor_get(v_a_1971_, 0);
lean_inc(v_fst_1972_);
v_snd_1973_ = lean_ctor_get(v_a_1971_, 1);
lean_inc(v_snd_1973_);
lean_dec(v_a_1971_);
v___x_1974_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label(v_fst_1972_, v_snd_1969_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
if (lean_obj_tag(v___x_1974_) == 0)
{
lean_object* v_a_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1992_; 
v_a_1975_ = lean_ctor_get(v___x_1974_, 0);
v_isSharedCheck_1992_ = !lean_is_exclusive(v___x_1974_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1977_ = v___x_1974_;
v_isShared_1978_ = v_isSharedCheck_1992_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_a_1975_);
lean_dec(v___x_1974_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1992_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v_fst_1979_; lean_object* v_snd_1980_; lean_object* v___x_1982_; uint8_t v_isShared_1983_; uint8_t v_isSharedCheck_1991_; 
v_fst_1979_ = lean_ctor_get(v_a_1975_, 0);
v_snd_1980_ = lean_ctor_get(v_a_1975_, 1);
v_isSharedCheck_1991_ = !lean_is_exclusive(v_a_1975_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1982_ = v_a_1975_;
v_isShared_1983_ = v_isSharedCheck_1991_;
goto v_resetjp_1981_;
}
else
{
lean_inc(v_snd_1980_);
lean_inc(v_fst_1979_);
lean_dec(v_a_1975_);
v___x_1982_ = lean_box(0);
v_isShared_1983_ = v_isSharedCheck_1991_;
goto v_resetjp_1981_;
}
v_resetjp_1981_:
{
lean_object* v___x_1984_; lean_object* v___x_1986_; 
v___x_1984_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd_x21(v_fst_1965_, v_fst_1966_, v_fst_1967_, v_snd_1973_, v_snd_1980_);
if (v_isShared_1983_ == 0)
{
lean_ctor_set(v___x_1982_, 1, v___x_1984_);
v___x_1986_ = v___x_1982_;
goto v_reusejp_1985_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v_fst_1979_);
lean_ctor_set(v_reuseFailAlloc_1990_, 1, v___x_1984_);
v___x_1986_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1985_;
}
v_reusejp_1985_:
{
lean_object* v___x_1988_; 
if (v_isShared_1978_ == 0)
{
lean_ctor_set(v___x_1977_, 0, v___x_1986_);
v___x_1988_ = v___x_1977_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v___x_1986_);
v___x_1988_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
return v___x_1988_;
}
}
}
}
}
else
{
lean_dec(v_snd_1973_);
lean_dec(v_fst_1967_);
lean_dec(v_fst_1966_);
lean_dec(v_fst_1965_);
return v___x_1974_;
}
}
else
{
lean_dec(v_snd_1969_);
lean_dec(v_fst_1967_);
lean_dec(v_fst_1966_);
lean_dec(v_fst_1965_);
return v___x_1970_;
}
}
else
{
lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; 
lean_dec(v___x_1960_);
v___x_1993_ = lean_box(0);
lean_inc(v_Ps_1943_);
v___x_1994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1993_);
lean_ctor_set(v___x_1994_, 1, v_Ps_1943_);
v___x_1995_ = l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__0___redArg(v_a_1951_, v_Ps_1943_, v___x_1994_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
if (lean_obj_tag(v___x_1995_) == 0)
{
lean_object* v_a_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2007_; 
v_a_1996_ = lean_ctor_get(v___x_1995_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v___x_1995_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_1998_ = v___x_1995_;
v_isShared_1999_ = v_isSharedCheck_2007_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_a_1996_);
lean_dec(v___x_1995_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2007_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v_fst_2000_; 
v_fst_2000_ = lean_ctor_get(v_a_1996_, 0);
lean_inc(v_fst_2000_);
lean_dec(v_a_1996_);
if (lean_obj_tag(v_fst_2000_) == 0)
{
lean_object* v___x_2001_; lean_object* v___x_2002_; 
lean_del_object(v___x_1998_);
v___x_2001_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label___closed__1, &l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label___closed__1);
v___x_2002_ = l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__1(v___x_2001_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
return v___x_2002_;
}
else
{
lean_object* v_val_2003_; lean_object* v___x_2005_; 
v_val_2003_ = lean_ctor_get(v_fst_2000_, 0);
lean_inc(v_val_2003_);
lean_dec_ref_known(v_fst_2000_, 1);
if (v_isShared_1999_ == 0)
{
lean_ctor_set(v___x_1998_, 0, v_val_2003_);
v___x_2005_ = v___x_1998_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v_val_2003_);
v___x_2005_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
return v___x_2005_;
}
}
}
}
else
{
lean_object* v_a_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2015_; 
v_a_2008_ = lean_ctor_get(v___x_1995_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_1995_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2010_ = v___x_1995_;
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_a_2008_);
lean_dec(v___x_1995_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2013_; 
if (v_isShared_2011_ == 0)
{
v___x_2013_ = v___x_2010_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_a_2008_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
return v___x_2013_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2024_; 
lean_dec(v_Ps_1943_);
v_a_2017_ = lean_ctor_get(v___x_1950_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_1950_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2019_ = v___x_1950_;
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_1950_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2022_; 
if (v_isShared_2020_ == 0)
{
v___x_2022_ = v___x_2019_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_a_2017_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label___boxed(lean_object* v_Ps_2025_, lean_object* v_P_x27_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label(v_Ps_2025_, v_P_x27_2026_, v_a_2027_, v_a_2028_, v_a_2029_, v_a_2030_);
lean_dec(v_a_2030_);
lean_dec_ref(v_a_2029_);
lean_dec(v_a_2028_);
lean_dec_ref(v_a_2027_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__0(lean_object* v_a_2033_, lean_object* v_Ps_2034_, lean_object* v_inst_2035_, lean_object* v_a_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_){
_start:
{
lean_object* v___x_2042_; 
v___x_2042_ = l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__0___redArg(v_a_2033_, v_Ps_2034_, v_a_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_);
return v___x_2042_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__0___boxed(lean_object* v_a_2043_, lean_object* v_Ps_2044_, lean_object* v_inst_2045_, lean_object* v_a_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_){
_start:
{
lean_object* v_res_2052_; 
v_res_2052_ = l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label_spec__0(v_a_2043_, v_Ps_2044_, v_inst_2045_, v_a_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec(v___y_2048_);
lean_dec_ref(v___y_2047_);
return v_res_2052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames(lean_object* v_P_2053_, lean_object* v_P_x27_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_){
_start:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2060_ = lean_box(0);
v___x_2061_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_collectHyps(v_P_2053_, v___x_2060_);
v___x_2062_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames_label(v___x_2061_, v_P_x27_2054_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_);
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2071_; 
v_a_2063_ = lean_ctor_get(v___x_2062_, 0);
v_isSharedCheck_2071_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2071_ == 0)
{
v___x_2065_ = v___x_2062_;
v_isShared_2066_ = v_isSharedCheck_2071_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_dec(v___x_2062_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2071_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v_snd_2067_; lean_object* v___x_2069_; 
v_snd_2067_ = lean_ctor_get(v_a_2063_, 1);
lean_inc(v_snd_2067_);
lean_dec(v_a_2063_);
if (v_isShared_2066_ == 0)
{
lean_ctor_set(v___x_2065_, 0, v_snd_2067_);
v___x_2069_ = v___x_2065_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v_snd_2067_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
}
else
{
lean_object* v_a_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2079_; 
v_a_2072_ = lean_ctor_get(v___x_2062_, 0);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2074_ = v___x_2062_;
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_a_2072_);
lean_dec(v___x_2062_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames___boxed(lean_object* v_P_2080_, lean_object* v_P_x27_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_){
_start:
{
lean_object* v_res_2087_; 
v_res_2087_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames(v_P_2080_, v_P_x27_2081_, v_a_2082_, v_a_2083_, v_a_2084_, v_a_2085_);
lean_dec(v_a_2085_);
lean_dec_ref(v_a_2084_);
lean_dec(v_a_2083_);
lean_dec_ref(v_a_2082_);
return v_res_2087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__0(lean_object* v___x_2088_, lean_object* v___x_2089_, lean_object* v___x_2090_, lean_object* v___x_2091_, lean_object* v___x_2092_, lean_object* v_toApplicative_2093_, lean_object* v___x_2094_, lean_object* v_l_2095_, lean_object* v_cl_2096_, lean_object* v_hyps_2097_, lean_object* v_P_x27_2098_, lean_object* v_target_2099_, lean_object* v_00_u03c6_2100_, lean_object* v_a_2101_, lean_object* v_u_2102_, lean_object* v_prf_2103_){
_start:
{
lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___y_2108_; lean_object* v___x_2114_; 
v___x_2104_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__0));
v___x_2105_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__1));
v___x_2106_ = l_Lean_Name_mkStr7(v___x_2088_, v___x_2089_, v___x_2090_, v___x_2091_, v___x_2092_, v___x_2104_, v___x_2105_);
v___x_2114_ = l_Lean_Level_dec(v_u_2102_);
if (lean_obj_tag(v___x_2114_) == 0)
{
v___y_2108_ = v_u_2102_;
goto v___jp_2107_;
}
else
{
lean_object* v_val_2115_; 
lean_dec(v_u_2102_);
v_val_2115_ = lean_ctor_get(v___x_2114_, 0);
lean_inc(v_val_2115_);
lean_dec_ref_known(v___x_2114_, 1);
v___y_2108_ = v_val_2115_;
goto v___jp_2107_;
}
v___jp_2107_:
{
lean_object* v_toPure_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v_prf_2112_; lean_object* v___x_2113_; 
v_toPure_2109_ = lean_ctor_get(v_toApplicative_2093_, 1);
lean_inc(v_toPure_2109_);
lean_dec_ref(v_toApplicative_2093_);
v___x_2110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2110_, 0, v___y_2108_);
lean_ctor_set(v___x_2110_, 1, v___x_2094_);
v___x_2111_ = l_Lean_mkConst(v___x_2106_, v___x_2110_);
v_prf_2112_ = l_Lean_mkApp8(v___x_2111_, v_l_2095_, v_cl_2096_, v_hyps_2097_, v_P_x27_2098_, v_target_2099_, v_00_u03c6_2100_, v_a_2101_, v_prf_2103_);
v___x_2113_ = lean_apply_2(v_toPure_2109_, lean_box(0), v_prf_2112_);
return v___x_2113_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__2(uint8_t v_____do__lift_2116_, uint8_t v___x_2117_, lean_object* v_inst_2118_, lean_object* v_toBind_2119_, lean_object* v___f_2120_, lean_object* v_kSuccess_2121_, lean_object* v_00_u03c6_2122_, lean_object* v_goal_2123_, lean_object* v_h_u03c6_2124_){
_start:
{
lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___f_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; 
v___x_2125_ = lean_box(v_____do__lift_2116_);
v___x_2126_ = lean_box(v___x_2117_);
lean_inc(v_toBind_2119_);
lean_inc_ref(v_h_u03c6_2124_);
v___f_2127_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_2127_, 0, v_h_u03c6_2124_);
lean_closure_set(v___f_2127_, 1, v___x_2125_);
lean_closure_set(v___f_2127_, 2, v___x_2126_);
lean_closure_set(v___f_2127_, 3, v_inst_2118_);
lean_closure_set(v___f_2127_, 4, v_toBind_2119_);
lean_closure_set(v___f_2127_, 5, v___f_2120_);
v___x_2128_ = lean_apply_3(v_kSuccess_2121_, v_00_u03c6_2122_, v_h_u03c6_2124_, v_goal_2123_);
v___x_2129_ = lean_apply_4(v_toBind_2119_, lean_box(0), lean_box(0), v___x_2128_, v___f_2127_);
return v___x_2129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__2___boxed(lean_object* v_____do__lift_2130_, lean_object* v___x_2131_, lean_object* v_inst_2132_, lean_object* v_toBind_2133_, lean_object* v___f_2134_, lean_object* v_kSuccess_2135_, lean_object* v_00_u03c6_2136_, lean_object* v_goal_2137_, lean_object* v_h_u03c6_2138_){
_start:
{
uint8_t v_____do__lift_541__boxed_2139_; uint8_t v___x_542__boxed_2140_; lean_object* v_res_2141_; 
v_____do__lift_541__boxed_2139_ = lean_unbox(v_____do__lift_2130_);
v___x_542__boxed_2140_ = lean_unbox(v___x_2131_);
v_res_2141_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__2(v_____do__lift_541__boxed_2139_, v___x_542__boxed_2140_, v_inst_2132_, v_toBind_2133_, v___f_2134_, v_kSuccess_2135_, v_00_u03c6_2136_, v_goal_2137_, v_h_u03c6_2138_);
return v_res_2141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__4(lean_object* v___x_2142_, lean_object* v___x_2143_, lean_object* v___x_2144_, lean_object* v___x_2145_, lean_object* v___x_2146_, lean_object* v_toApplicative_2147_, lean_object* v___x_2148_, lean_object* v_l_2149_, lean_object* v_cl_2150_, lean_object* v_hyps_2151_, lean_object* v_target_2152_, lean_object* v_00_u03c6_2153_, lean_object* v_a_2154_, lean_object* v_u_2155_, uint8_t v_____do__lift_2156_, uint8_t v___x_2157_, lean_object* v_inst_2158_, lean_object* v_toBind_2159_, lean_object* v_kSuccess_2160_, lean_object* v_inst_2161_, lean_object* v_inst_2162_, lean_object* v_P_x27_2163_){
_start:
{
lean_object* v___f_2164_; lean_object* v_goal_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___f_2168_; lean_object* v___f_2169_; lean_object* v___f_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
lean_inc(v_u_2155_);
lean_inc_ref_n(v_00_u03c6_2153_, 2);
lean_inc_ref(v_target_2152_);
lean_inc_ref(v_P_x27_2163_);
lean_inc_ref(v_cl_2150_);
lean_inc_ref(v_l_2149_);
v___f_2164_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__0), 16, 15);
lean_closure_set(v___f_2164_, 0, v___x_2142_);
lean_closure_set(v___f_2164_, 1, v___x_2143_);
lean_closure_set(v___f_2164_, 2, v___x_2144_);
lean_closure_set(v___f_2164_, 3, v___x_2145_);
lean_closure_set(v___f_2164_, 4, v___x_2146_);
lean_closure_set(v___f_2164_, 5, v_toApplicative_2147_);
lean_closure_set(v___f_2164_, 6, v___x_2148_);
lean_closure_set(v___f_2164_, 7, v_l_2149_);
lean_closure_set(v___f_2164_, 8, v_cl_2150_);
lean_closure_set(v___f_2164_, 9, v_hyps_2151_);
lean_closure_set(v___f_2164_, 10, v_P_x27_2163_);
lean_closure_set(v___f_2164_, 11, v_target_2152_);
lean_closure_set(v___f_2164_, 12, v_00_u03c6_2153_);
lean_closure_set(v___f_2164_, 13, v_a_2154_);
lean_closure_set(v___f_2164_, 14, v_u_2155_);
v_goal_2165_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_goal_2165_, 0, v_u_2155_);
lean_ctor_set(v_goal_2165_, 1, v_l_2149_);
lean_ctor_set(v_goal_2165_, 2, v_cl_2150_);
lean_ctor_set(v_goal_2165_, 3, v_P_x27_2163_);
lean_ctor_set(v_goal_2165_, 4, v_target_2152_);
v___x_2166_ = lean_box(v_____do__lift_2156_);
v___x_2167_ = lean_box(v___x_2157_);
lean_inc(v_toBind_2159_);
lean_inc(v_inst_2158_);
v___f_2168_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_2168_, 0, v___x_2166_);
lean_closure_set(v___f_2168_, 1, v___x_2167_);
lean_closure_set(v___f_2168_, 2, v_inst_2158_);
lean_closure_set(v___f_2168_, 3, v_toBind_2159_);
lean_closure_set(v___f_2168_, 4, v___f_2164_);
lean_closure_set(v___f_2168_, 5, v_kSuccess_2160_);
lean_closure_set(v___f_2168_, 6, v_00_u03c6_2153_);
lean_closure_set(v___f_2168_, 7, v_goal_2165_);
v___f_2169_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__3), 5, 4);
lean_closure_set(v___f_2169_, 0, v_inst_2161_);
lean_closure_set(v___f_2169_, 1, v_inst_2162_);
lean_closure_set(v___f_2169_, 2, v_00_u03c6_2153_);
lean_closure_set(v___f_2169_, 3, v___f_2168_);
v___f_2170_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0));
v___x_2171_ = lean_apply_2(v_inst_2158_, lean_box(0), v___f_2170_);
v___x_2172_ = lean_apply_4(v_toBind_2159_, lean_box(0), lean_box(0), v___x_2171_, v___f_2169_);
return v___x_2172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__4___boxed(lean_object** _args){
lean_object* v___x_2173_ = _args[0];
lean_object* v___x_2174_ = _args[1];
lean_object* v___x_2175_ = _args[2];
lean_object* v___x_2176_ = _args[3];
lean_object* v___x_2177_ = _args[4];
lean_object* v_toApplicative_2178_ = _args[5];
lean_object* v___x_2179_ = _args[6];
lean_object* v_l_2180_ = _args[7];
lean_object* v_cl_2181_ = _args[8];
lean_object* v_hyps_2182_ = _args[9];
lean_object* v_target_2183_ = _args[10];
lean_object* v_00_u03c6_2184_ = _args[11];
lean_object* v_a_2185_ = _args[12];
lean_object* v_u_2186_ = _args[13];
lean_object* v_____do__lift_2187_ = _args[14];
lean_object* v___x_2188_ = _args[15];
lean_object* v_inst_2189_ = _args[16];
lean_object* v_toBind_2190_ = _args[17];
lean_object* v_kSuccess_2191_ = _args[18];
lean_object* v_inst_2192_ = _args[19];
lean_object* v_inst_2193_ = _args[20];
lean_object* v_P_x27_2194_ = _args[21];
_start:
{
uint8_t v_____do__lift_575__boxed_2195_; uint8_t v___x_576__boxed_2196_; lean_object* v_res_2197_; 
v_____do__lift_575__boxed_2195_ = lean_unbox(v_____do__lift_2187_);
v___x_576__boxed_2196_ = lean_unbox(v___x_2188_);
v_res_2197_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__4(v___x_2173_, v___x_2174_, v___x_2175_, v___x_2176_, v___x_2177_, v_toApplicative_2178_, v___x_2179_, v_l_2180_, v_cl_2181_, v_hyps_2182_, v_target_2183_, v_00_u03c6_2184_, v_a_2185_, v_u_2186_, v_____do__lift_575__boxed_2195_, v___x_576__boxed_2196_, v_inst_2189_, v_toBind_2190_, v_kSuccess_2191_, v_inst_2192_, v_inst_2193_, v_P_x27_2194_);
return v_res_2197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__1(lean_object* v___x_2198_, lean_object* v___x_2199_, lean_object* v___x_2200_, lean_object* v___x_2201_, lean_object* v___x_2202_, lean_object* v_toApplicative_2203_, lean_object* v___x_2204_, lean_object* v_l_2205_, lean_object* v_cl_2206_, lean_object* v_hyps_2207_, lean_object* v_target_2208_, lean_object* v_00_u03c6_2209_, lean_object* v_a_2210_, lean_object* v_u_2211_, lean_object* v_inst_2212_, lean_object* v_toBind_2213_, lean_object* v_kSuccess_2214_, lean_object* v_inst_2215_, lean_object* v_inst_2216_, lean_object* v_P_x27_2217_, lean_object* v_kFail_2218_, uint8_t v_____do__lift_2219_){
_start:
{
if (v_____do__lift_2219_ == 0)
{
uint8_t v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___f_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___x_2220_ = 1;
v___x_2221_ = lean_box(v_____do__lift_2219_);
v___x_2222_ = lean_box(v___x_2220_);
lean_inc(v_toBind_2213_);
lean_inc(v_inst_2212_);
lean_inc_ref(v_hyps_2207_);
v___f_2223_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__4___boxed), 22, 21);
lean_closure_set(v___f_2223_, 0, v___x_2198_);
lean_closure_set(v___f_2223_, 1, v___x_2199_);
lean_closure_set(v___f_2223_, 2, v___x_2200_);
lean_closure_set(v___f_2223_, 3, v___x_2201_);
lean_closure_set(v___f_2223_, 4, v___x_2202_);
lean_closure_set(v___f_2223_, 5, v_toApplicative_2203_);
lean_closure_set(v___f_2223_, 6, v___x_2204_);
lean_closure_set(v___f_2223_, 7, v_l_2205_);
lean_closure_set(v___f_2223_, 8, v_cl_2206_);
lean_closure_set(v___f_2223_, 9, v_hyps_2207_);
lean_closure_set(v___f_2223_, 10, v_target_2208_);
lean_closure_set(v___f_2223_, 11, v_00_u03c6_2209_);
lean_closure_set(v___f_2223_, 12, v_a_2210_);
lean_closure_set(v___f_2223_, 13, v_u_2211_);
lean_closure_set(v___f_2223_, 14, v___x_2221_);
lean_closure_set(v___f_2223_, 15, v___x_2222_);
lean_closure_set(v___f_2223_, 16, v_inst_2212_);
lean_closure_set(v___f_2223_, 17, v_toBind_2213_);
lean_closure_set(v___f_2223_, 18, v_kSuccess_2214_);
lean_closure_set(v___f_2223_, 19, v_inst_2215_);
lean_closure_set(v___f_2223_, 20, v_inst_2216_);
v___x_2224_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames___boxed), 7, 2);
lean_closure_set(v___x_2224_, 0, v_hyps_2207_);
lean_closure_set(v___x_2224_, 1, v_P_x27_2217_);
v___x_2225_ = lean_apply_2(v_inst_2212_, lean_box(0), v___x_2224_);
v___x_2226_ = lean_apply_4(v_toBind_2213_, lean_box(0), lean_box(0), v___x_2225_, v___f_2223_);
return v___x_2226_;
}
else
{
lean_dec_ref(v_P_x27_2217_);
lean_dec_ref(v_inst_2216_);
lean_dec_ref(v_inst_2215_);
lean_dec(v_kSuccess_2214_);
lean_dec(v_toBind_2213_);
lean_dec(v_inst_2212_);
lean_dec(v_u_2211_);
lean_dec_ref(v_a_2210_);
lean_dec_ref(v_00_u03c6_2209_);
lean_dec_ref(v_target_2208_);
lean_dec_ref(v_hyps_2207_);
lean_dec_ref(v_cl_2206_);
lean_dec_ref(v_l_2205_);
lean_dec(v___x_2204_);
lean_dec_ref(v_toApplicative_2203_);
lean_dec_ref(v___x_2202_);
lean_dec_ref(v___x_2201_);
lean_dec_ref(v___x_2200_);
lean_dec_ref(v___x_2199_);
lean_dec_ref(v___x_2198_);
lean_inc(v_kFail_2218_);
return v_kFail_2218_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__1___boxed(lean_object** _args){
lean_object* v___x_2227_ = _args[0];
lean_object* v___x_2228_ = _args[1];
lean_object* v___x_2229_ = _args[2];
lean_object* v___x_2230_ = _args[3];
lean_object* v___x_2231_ = _args[4];
lean_object* v_toApplicative_2232_ = _args[5];
lean_object* v___x_2233_ = _args[6];
lean_object* v_l_2234_ = _args[7];
lean_object* v_cl_2235_ = _args[8];
lean_object* v_hyps_2236_ = _args[9];
lean_object* v_target_2237_ = _args[10];
lean_object* v_00_u03c6_2238_ = _args[11];
lean_object* v_a_2239_ = _args[12];
lean_object* v_u_2240_ = _args[13];
lean_object* v_inst_2241_ = _args[14];
lean_object* v_toBind_2242_ = _args[15];
lean_object* v_kSuccess_2243_ = _args[16];
lean_object* v_inst_2244_ = _args[17];
lean_object* v_inst_2245_ = _args[18];
lean_object* v_P_x27_2246_ = _args[19];
lean_object* v_kFail_2247_ = _args[20];
lean_object* v_____do__lift_2248_ = _args[21];
_start:
{
uint8_t v_____do__lift_632__boxed_2249_; lean_object* v_res_2250_; 
v_____do__lift_632__boxed_2249_ = lean_unbox(v_____do__lift_2248_);
v_res_2250_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__1(v___x_2227_, v___x_2228_, v___x_2229_, v___x_2230_, v___x_2231_, v_toApplicative_2232_, v___x_2233_, v_l_2234_, v_cl_2235_, v_hyps_2236_, v_target_2237_, v_00_u03c6_2238_, v_a_2239_, v_u_2240_, v_inst_2241_, v_toBind_2242_, v_kSuccess_2243_, v_inst_2244_, v_inst_2245_, v_P_x27_2246_, v_kFail_2247_, v_____do__lift_632__boxed_2249_);
lean_dec(v_kFail_2247_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__3(lean_object* v___x_2251_, lean_object* v___x_2252_, lean_object* v___x_2253_, lean_object* v___x_2254_, lean_object* v___x_2255_, lean_object* v_toApplicative_2256_, lean_object* v___x_2257_, lean_object* v_l_2258_, lean_object* v_cl_2259_, lean_object* v_hyps_2260_, lean_object* v_target_2261_, lean_object* v_00_u03c6_2262_, lean_object* v_u_2263_, lean_object* v_inst_2264_, lean_object* v_toBind_2265_, lean_object* v_kSuccess_2266_, lean_object* v_inst_2267_, lean_object* v_inst_2268_, lean_object* v_P_x27_2269_, lean_object* v_kFail_2270_, lean_object* v_____do__lift_2271_){
_start:
{
if (lean_obj_tag(v_____do__lift_2271_) == 1)
{
lean_object* v_a_2272_; lean_object* v___f_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
v_a_2272_ = lean_ctor_get(v_____do__lift_2271_, 0);
lean_inc(v_a_2272_);
lean_dec_ref_known(v_____do__lift_2271_, 1);
lean_inc(v_toBind_2265_);
lean_inc(v_inst_2264_);
lean_inc_ref(v_00_u03c6_2262_);
lean_inc(v___x_2257_);
v___f_2273_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__1___boxed), 22, 21);
lean_closure_set(v___f_2273_, 0, v___x_2251_);
lean_closure_set(v___f_2273_, 1, v___x_2252_);
lean_closure_set(v___f_2273_, 2, v___x_2253_);
lean_closure_set(v___f_2273_, 3, v___x_2254_);
lean_closure_set(v___f_2273_, 4, v___x_2255_);
lean_closure_set(v___f_2273_, 5, v_toApplicative_2256_);
lean_closure_set(v___f_2273_, 6, v___x_2257_);
lean_closure_set(v___f_2273_, 7, v_l_2258_);
lean_closure_set(v___f_2273_, 8, v_cl_2259_);
lean_closure_set(v___f_2273_, 9, v_hyps_2260_);
lean_closure_set(v___f_2273_, 10, v_target_2261_);
lean_closure_set(v___f_2273_, 11, v_00_u03c6_2262_);
lean_closure_set(v___f_2273_, 12, v_a_2272_);
lean_closure_set(v___f_2273_, 13, v_u_2263_);
lean_closure_set(v___f_2273_, 14, v_inst_2264_);
lean_closure_set(v___f_2273_, 15, v_toBind_2265_);
lean_closure_set(v___f_2273_, 16, v_kSuccess_2266_);
lean_closure_set(v___f_2273_, 17, v_inst_2267_);
lean_closure_set(v___f_2273_, 18, v_inst_2268_);
lean_closure_set(v___f_2273_, 19, v_P_x27_2269_);
lean_closure_set(v___f_2273_, 20, v_kFail_2270_);
v___x_2274_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__1));
v___x_2275_ = l_Lean_mkConst(v___x_2274_, v___x_2257_);
v___x_2276_ = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq___boxed), 7, 2);
lean_closure_set(v___x_2276_, 0, v___x_2275_);
lean_closure_set(v___x_2276_, 1, v_00_u03c6_2262_);
v___x_2277_ = lean_apply_2(v_inst_2264_, lean_box(0), v___x_2276_);
v___x_2278_ = lean_apply_4(v_toBind_2265_, lean_box(0), lean_box(0), v___x_2277_, v___f_2273_);
return v___x_2278_;
}
else
{
lean_dec(v_____do__lift_2271_);
lean_dec_ref(v_P_x27_2269_);
lean_dec_ref(v_inst_2268_);
lean_dec_ref(v_inst_2267_);
lean_dec(v_kSuccess_2266_);
lean_dec(v_toBind_2265_);
lean_dec(v_inst_2264_);
lean_dec(v_u_2263_);
lean_dec_ref(v_00_u03c6_2262_);
lean_dec_ref(v_target_2261_);
lean_dec_ref(v_hyps_2260_);
lean_dec_ref(v_cl_2259_);
lean_dec_ref(v_l_2258_);
lean_dec(v___x_2257_);
lean_dec_ref(v_toApplicative_2256_);
lean_dec_ref(v___x_2255_);
lean_dec_ref(v___x_2254_);
lean_dec_ref(v___x_2253_);
lean_dec_ref(v___x_2252_);
lean_dec_ref(v___x_2251_);
return v_kFail_2270_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__3___boxed(lean_object** _args){
lean_object* v___x_2279_ = _args[0];
lean_object* v___x_2280_ = _args[1];
lean_object* v___x_2281_ = _args[2];
lean_object* v___x_2282_ = _args[3];
lean_object* v___x_2283_ = _args[4];
lean_object* v_toApplicative_2284_ = _args[5];
lean_object* v___x_2285_ = _args[6];
lean_object* v_l_2286_ = _args[7];
lean_object* v_cl_2287_ = _args[8];
lean_object* v_hyps_2288_ = _args[9];
lean_object* v_target_2289_ = _args[10];
lean_object* v_00_u03c6_2290_ = _args[11];
lean_object* v_u_2291_ = _args[12];
lean_object* v_inst_2292_ = _args[13];
lean_object* v_toBind_2293_ = _args[14];
lean_object* v_kSuccess_2294_ = _args[15];
lean_object* v_inst_2295_ = _args[16];
lean_object* v_inst_2296_ = _args[17];
lean_object* v_P_x27_2297_ = _args[18];
lean_object* v_kFail_2298_ = _args[19];
lean_object* v_____do__lift_2299_ = _args[20];
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__3(v___x_2279_, v___x_2280_, v___x_2281_, v___x_2282_, v___x_2283_, v_toApplicative_2284_, v___x_2285_, v_l_2286_, v_cl_2287_, v_hyps_2288_, v_target_2289_, v_00_u03c6_2290_, v_u_2291_, v_inst_2292_, v_toBind_2293_, v_kSuccess_2294_, v_inst_2295_, v_inst_2296_, v_P_x27_2297_, v_kFail_2298_, v_____do__lift_2299_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5(lean_object* v_toApplicative_2310_, lean_object* v_l_2311_, lean_object* v_cl_2312_, lean_object* v_hyps_2313_, lean_object* v_target_2314_, lean_object* v_00_u03c6_2315_, lean_object* v_u_2316_, lean_object* v_inst_2317_, lean_object* v_toBind_2318_, lean_object* v_kSuccess_2319_, lean_object* v_inst_2320_, lean_object* v_inst_2321_, lean_object* v_kFail_2322_, lean_object* v_P_x27_2323_){
_start:
{
lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___y_2331_; lean_object* v___x_2341_; 
v___x_2324_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0));
v___x_2325_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0));
v___x_2326_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1));
v___x_2327_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__1));
v___x_2328_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0));
v___x_2329_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__2));
v___x_2341_ = l_Lean_Level_dec(v_u_2316_);
if (lean_obj_tag(v___x_2341_) == 0)
{
lean_inc(v_u_2316_);
v___y_2331_ = v_u_2316_;
goto v___jp_2330_;
}
else
{
lean_object* v_val_2342_; 
v_val_2342_ = lean_ctor_get(v___x_2341_, 0);
lean_inc(v_val_2342_);
lean_dec_ref_known(v___x_2341_, 1);
v___y_2331_ = v_val_2342_;
goto v___jp_2330_;
}
v___jp_2330_:
{
lean_object* v___x_2332_; lean_object* v___f_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2332_ = lean_box(0);
lean_inc_ref(v_P_x27_2323_);
lean_inc(v_toBind_2318_);
lean_inc(v_inst_2317_);
lean_inc_ref(v_00_u03c6_2315_);
lean_inc_ref(v_hyps_2313_);
lean_inc_ref(v_cl_2312_);
lean_inc_ref(v_l_2311_);
v___f_2333_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__3___boxed), 21, 20);
lean_closure_set(v___f_2333_, 0, v___x_2324_);
lean_closure_set(v___f_2333_, 1, v___x_2325_);
lean_closure_set(v___f_2333_, 2, v___x_2326_);
lean_closure_set(v___f_2333_, 3, v___x_2327_);
lean_closure_set(v___f_2333_, 4, v___x_2328_);
lean_closure_set(v___f_2333_, 5, v_toApplicative_2310_);
lean_closure_set(v___f_2333_, 6, v___x_2332_);
lean_closure_set(v___f_2333_, 7, v_l_2311_);
lean_closure_set(v___f_2333_, 8, v_cl_2312_);
lean_closure_set(v___f_2333_, 9, v_hyps_2313_);
lean_closure_set(v___f_2333_, 10, v_target_2314_);
lean_closure_set(v___f_2333_, 11, v_00_u03c6_2315_);
lean_closure_set(v___f_2333_, 12, v_u_2316_);
lean_closure_set(v___f_2333_, 13, v_inst_2317_);
lean_closure_set(v___f_2333_, 14, v_toBind_2318_);
lean_closure_set(v___f_2333_, 15, v_kSuccess_2319_);
lean_closure_set(v___f_2333_, 16, v_inst_2320_);
lean_closure_set(v___f_2333_, 17, v_inst_2321_);
lean_closure_set(v___f_2333_, 18, v_P_x27_2323_);
lean_closure_set(v___f_2333_, 19, v_kFail_2322_);
v___x_2334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2334_, 0, v___y_2331_);
lean_ctor_set(v___x_2334_, 1, v___x_2332_);
v___x_2335_ = l_Lean_mkConst(v___x_2329_, v___x_2334_);
v___x_2336_ = l_Lean_mkApp5(v___x_2335_, v_l_2311_, v_cl_2312_, v_hyps_2313_, v_P_x27_2323_, v_00_u03c6_2315_);
v___x_2337_ = lean_box(0);
v___x_2338_ = lean_alloc_closure((void*)(l_Lean_Meta_trySynthInstance___boxed), 7, 2);
lean_closure_set(v___x_2338_, 0, v___x_2336_);
lean_closure_set(v___x_2338_, 1, v___x_2337_);
v___x_2339_ = lean_apply_2(v_inst_2317_, lean_box(0), v___x_2338_);
v___x_2340_ = lean_apply_4(v_toBind_2318_, lean_box(0), lean_box(0), v___x_2339_, v___f_2333_);
return v___x_2340_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__6(lean_object* v_toApplicative_2343_, lean_object* v_l_2344_, lean_object* v_cl_2345_, lean_object* v_hyps_2346_, lean_object* v_target_2347_, lean_object* v_u_2348_, lean_object* v_inst_2349_, lean_object* v_toBind_2350_, lean_object* v_kSuccess_2351_, lean_object* v_inst_2352_, lean_object* v_inst_2353_, lean_object* v_kFail_2354_, uint8_t v___x_2355_, lean_object* v___x_2356_, lean_object* v_00_u03c6_2357_){
_start:
{
lean_object* v___f_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
lean_inc(v_toBind_2350_);
lean_inc(v_inst_2349_);
lean_inc_ref(v_l_2344_);
v___f_2358_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5), 14, 13);
lean_closure_set(v___f_2358_, 0, v_toApplicative_2343_);
lean_closure_set(v___f_2358_, 1, v_l_2344_);
lean_closure_set(v___f_2358_, 2, v_cl_2345_);
lean_closure_set(v___f_2358_, 3, v_hyps_2346_);
lean_closure_set(v___f_2358_, 4, v_target_2347_);
lean_closure_set(v___f_2358_, 5, v_00_u03c6_2357_);
lean_closure_set(v___f_2358_, 6, v_u_2348_);
lean_closure_set(v___f_2358_, 7, v_inst_2349_);
lean_closure_set(v___f_2358_, 8, v_toBind_2350_);
lean_closure_set(v___f_2358_, 9, v_kSuccess_2351_);
lean_closure_set(v___f_2358_, 10, v_inst_2352_);
lean_closure_set(v___f_2358_, 11, v_inst_2353_);
lean_closure_set(v___f_2358_, 12, v_kFail_2354_);
v___x_2359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2359_, 0, v_l_2344_);
v___x_2360_ = lean_box(v___x_2355_);
v___x_2361_ = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshExprMVar___boxed), 8, 3);
lean_closure_set(v___x_2361_, 0, v___x_2359_);
lean_closure_set(v___x_2361_, 1, v___x_2360_);
lean_closure_set(v___x_2361_, 2, v___x_2356_);
v___x_2362_ = lean_apply_2(v_inst_2349_, lean_box(0), v___x_2361_);
v___x_2363_ = lean_apply_4(v_toBind_2350_, lean_box(0), lean_box(0), v___x_2362_, v___f_2358_);
return v___x_2363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__6___boxed(lean_object* v_toApplicative_2364_, lean_object* v_l_2365_, lean_object* v_cl_2366_, lean_object* v_hyps_2367_, lean_object* v_target_2368_, lean_object* v_u_2369_, lean_object* v_inst_2370_, lean_object* v_toBind_2371_, lean_object* v_kSuccess_2372_, lean_object* v_inst_2373_, lean_object* v_inst_2374_, lean_object* v_kFail_2375_, lean_object* v___x_2376_, lean_object* v___x_2377_, lean_object* v_00_u03c6_2378_){
_start:
{
uint8_t v___x_795__boxed_2379_; lean_object* v_res_2380_; 
v___x_795__boxed_2379_ = lean_unbox(v___x_2376_);
v_res_2380_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__6(v_toApplicative_2364_, v_l_2365_, v_cl_2366_, v_hyps_2367_, v_target_2368_, v_u_2369_, v_inst_2370_, v_toBind_2371_, v_kSuccess_2372_, v_inst_2373_, v_inst_2374_, v_kFail_2375_, v___x_795__boxed_2379_, v___x_2377_, v_00_u03c6_2378_);
return v_res_2380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg(lean_object* v_inst_2381_, lean_object* v_inst_2382_, lean_object* v_inst_2383_, lean_object* v_goal_2384_, lean_object* v_kFail_2385_, lean_object* v_kSuccess_2386_){
_start:
{
lean_object* v_u_2387_; lean_object* v_l_2388_; lean_object* v_cl_2389_; lean_object* v_hyps_2390_; lean_object* v_target_2391_; lean_object* v_toApplicative_2392_; lean_object* v_toBind_2393_; uint8_t v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___f_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; 
v_u_2387_ = lean_ctor_get(v_goal_2384_, 0);
lean_inc(v_u_2387_);
v_l_2388_ = lean_ctor_get(v_goal_2384_, 1);
lean_inc_ref(v_l_2388_);
v_cl_2389_ = lean_ctor_get(v_goal_2384_, 2);
lean_inc_ref(v_cl_2389_);
v_hyps_2390_ = lean_ctor_get(v_goal_2384_, 3);
lean_inc_ref(v_hyps_2390_);
v_target_2391_ = lean_ctor_get(v_goal_2384_, 4);
lean_inc_ref(v_target_2391_);
lean_dec_ref(v_goal_2384_);
v_toApplicative_2392_ = lean_ctor_get(v_inst_2381_, 0);
lean_inc_ref(v_toApplicative_2392_);
v_toBind_2393_ = lean_ctor_get(v_inst_2381_, 1);
lean_inc_n(v_toBind_2393_, 2);
v___x_2394_ = 0;
v___x_2395_ = lean_box(0);
v___x_2396_ = lean_box(v___x_2394_);
lean_inc(v_inst_2383_);
v___f_2397_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__6___boxed), 15, 14);
lean_closure_set(v___f_2397_, 0, v_toApplicative_2392_);
lean_closure_set(v___f_2397_, 1, v_l_2388_);
lean_closure_set(v___f_2397_, 2, v_cl_2389_);
lean_closure_set(v___f_2397_, 3, v_hyps_2390_);
lean_closure_set(v___f_2397_, 4, v_target_2391_);
lean_closure_set(v___f_2397_, 5, v_u_2387_);
lean_closure_set(v___f_2397_, 6, v_inst_2383_);
lean_closure_set(v___f_2397_, 7, v_toBind_2393_);
lean_closure_set(v___f_2397_, 8, v_kSuccess_2386_);
lean_closure_set(v___f_2397_, 9, v_inst_2382_);
lean_closure_set(v___f_2397_, 10, v_inst_2381_);
lean_closure_set(v___f_2397_, 11, v_kFail_2385_);
lean_closure_set(v___f_2397_, 12, v___x_2396_);
lean_closure_set(v___f_2397_, 13, v___x_2395_);
v___x_2398_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2);
v___x_2399_ = lean_apply_2(v_inst_2383_, lean_box(0), v___x_2398_);
v___x_2400_ = lean_apply_4(v_toBind_2393_, lean_box(0), lean_box(0), v___x_2399_, v___f_2397_);
return v___x_2400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore(lean_object* v_m_2401_, lean_object* v_inst_2402_, lean_object* v_inst_2403_, lean_object* v_inst_2404_, lean_object* v_goal_2405_, lean_object* v_kFail_2406_, lean_object* v_kSuccess_2407_){
_start:
{
lean_object* v___x_2408_; 
v___x_2408_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg(v_inst_2402_, v_inst_2403_, v_inst_2404_, v_goal_2405_, v_kFail_2406_, v_kSuccess_2407_);
return v___x_2408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mTryFrame___redArg___lam__0(lean_object* v_k_2409_, lean_object* v_x_2410_, lean_object* v_x_2411_, lean_object* v_goal_2412_){
_start:
{
lean_object* v___x_2413_; 
v___x_2413_ = lean_apply_1(v_k_2409_, v_goal_2412_);
return v___x_2413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mTryFrame___redArg___lam__0___boxed(lean_object* v_k_2414_, lean_object* v_x_2415_, lean_object* v_x_2416_, lean_object* v_goal_2417_){
_start:
{
lean_object* v_res_2418_; 
v_res_2418_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mTryFrame___redArg___lam__0(v_k_2414_, v_x_2415_, v_x_2416_, v_goal_2417_);
lean_dec_ref(v_x_2416_);
lean_dec_ref(v_x_2415_);
return v_res_2418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mTryFrame___redArg(lean_object* v_inst_2419_, lean_object* v_inst_2420_, lean_object* v_inst_2421_, lean_object* v_goal_2422_, lean_object* v_k_2423_){
_start:
{
lean_object* v___f_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; 
lean_inc(v_k_2423_);
v___f_2424_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mTryFrame___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2424_, 0, v_k_2423_);
lean_inc_ref(v_goal_2422_);
v___x_2425_ = lean_apply_1(v_k_2423_, v_goal_2422_);
v___x_2426_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg(v_inst_2419_, v_inst_2420_, v_inst_2421_, v_goal_2422_, v___x_2425_, v___f_2424_);
return v___x_2426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mTryFrame(lean_object* v_m_2427_, lean_object* v_inst_2428_, lean_object* v_inst_2429_, lean_object* v_inst_2430_, lean_object* v_goal_2431_, lean_object* v_k_2432_){
_start:
{
lean_object* v___x_2433_; 
v___x_2433_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mTryFrame___redArg(v_inst_2428_, v_inst_2429_, v_inst_2430_, v_goal_2431_, v_k_2432_);
return v___x_2433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__0(lean_object* v_x_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_){
_start:
{
lean_object* v___x_2443_; lean_object* v___x_2444_; 
v___x_2443_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__1);
v___x_2444_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg(v___x_2443_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_);
return v___x_2444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__0___boxed(lean_object* v_x_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_){
_start:
{
lean_object* v_res_2454_; 
v_res_2454_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__0(v_x_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_);
lean_dec(v___y_2452_);
lean_dec_ref(v___y_2451_);
lean_dec(v___y_2450_);
lean_dec_ref(v___y_2449_);
lean_dec(v___y_2448_);
lean_dec_ref(v___y_2447_);
lean_dec(v___y_2446_);
lean_dec_ref(v_x_2445_);
return v_res_2454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__1(lean_object* v_x_2455_, lean_object* v_x_2456_, lean_object* v_goal_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_){
_start:
{
lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; 
v___x_2467_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(v_goal_2457_);
v___x_2468_ = lean_box(0);
v___x_2469_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_2467_, v___x_2468_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_);
if (lean_obj_tag(v___x_2469_) == 0)
{
lean_object* v_a_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; 
v_a_2470_ = lean_ctor_get(v___x_2469_, 0);
lean_inc(v_a_2470_);
lean_dec_ref_known(v___x_2469_, 1);
v___x_2471_ = l_Lean_Expr_mvarId_x21(v_a_2470_);
v___x_2472_ = lean_box(0);
v___x_2473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2473_, 0, v___x_2471_);
lean_ctor_set(v___x_2473_, 1, v___x_2472_);
v___x_2474_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2473_, v___y_2459_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_);
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2481_; 
v_isSharedCheck_2481_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2481_ == 0)
{
lean_object* v_unused_2482_; 
v_unused_2482_ = lean_ctor_get(v___x_2474_, 0);
lean_dec(v_unused_2482_);
v___x_2476_ = v___x_2474_;
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
else
{
lean_dec(v___x_2474_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
v_resetjp_2475_:
{
lean_object* v___x_2479_; 
if (v_isShared_2477_ == 0)
{
lean_ctor_set(v___x_2476_, 0, v_a_2470_);
v___x_2479_ = v___x_2476_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v_a_2470_);
v___x_2479_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2478_;
}
v_reusejp_2478_:
{
return v___x_2479_;
}
}
}
else
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
lean_dec(v_a_2470_);
v_a_2483_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2474_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2474_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
}
else
{
return v___x_2469_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__1___boxed(lean_object* v_x_2491_, lean_object* v_x_2492_, lean_object* v_goal_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_){
_start:
{
lean_object* v_res_2503_; 
v_res_2503_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__1(v_x_2491_, v_x_2492_, v_goal_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_);
lean_dec(v___y_2501_);
lean_dec_ref(v___y_2500_);
lean_dec(v___y_2499_);
lean_dec_ref(v___y_2498_);
lean_dec(v___y_2497_);
lean_dec_ref(v___y_2496_);
lean_dec(v___y_2495_);
lean_dec_ref(v___y_2494_);
lean_dec_ref(v_x_2492_);
lean_dec_ref(v_x_2491_);
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame_spec__0___lam__0(lean_object* v_kSuccess_2504_, lean_object* v_a_2505_, lean_object* v_goal_2506_, uint8_t v_a_2507_, uint8_t v___x_2508_, lean_object* v___x_2509_, lean_object* v___x_2510_, lean_object* v___x_2511_, lean_object* v___x_2512_, lean_object* v___x_2513_, lean_object* v___x_2514_, lean_object* v_l_2515_, lean_object* v_cl_2516_, lean_object* v_hyps_2517_, lean_object* v_a_2518_, lean_object* v_target_2519_, lean_object* v_a_2520_, lean_object* v_u_2521_, lean_object* v_h_u03c6_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_){
_start:
{
lean_object* v___x_2532_; 
lean_inc(v___y_2530_);
lean_inc_ref(v___y_2529_);
lean_inc(v___y_2528_);
lean_inc_ref(v___y_2527_);
lean_inc(v___y_2526_);
lean_inc_ref(v___y_2525_);
lean_inc(v___y_2524_);
lean_inc_ref(v___y_2523_);
lean_inc_ref(v_h_u03c6_2522_);
lean_inc_ref(v_a_2505_);
v___x_2532_ = lean_apply_12(v_kSuccess_2504_, v_a_2505_, v_h_u03c6_2522_, v_goal_2506_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, lean_box(0));
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; uint8_t v___x_2537_; lean_object* v___x_2538_; 
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_a_2533_);
lean_dec_ref_known(v___x_2532_, 1);
v___x_2534_ = lean_unsigned_to_nat(1u);
v___x_2535_ = lean_mk_empty_array_with_capacity(v___x_2534_);
v___x_2536_ = lean_array_push(v___x_2535_, v_h_u03c6_2522_);
v___x_2537_ = 1;
v___x_2538_ = l_Lean_Meta_mkLambdaFVars(v___x_2536_, v_a_2533_, v_a_2507_, v___x_2508_, v_a_2507_, v___x_2508_, v___x_2537_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_);
lean_dec_ref(v___x_2536_);
if (lean_obj_tag(v___x_2538_) == 0)
{
lean_object* v_a_2539_; lean_object* v___x_2541_; uint8_t v_isShared_2542_; uint8_t v_isSharedCheck_2556_; 
v_a_2539_ = lean_ctor_get(v___x_2538_, 0);
v_isSharedCheck_2556_ = !lean_is_exclusive(v___x_2538_);
if (v_isSharedCheck_2556_ == 0)
{
v___x_2541_ = v___x_2538_;
v_isShared_2542_ = v_isSharedCheck_2556_;
goto v_resetjp_2540_;
}
else
{
lean_inc(v_a_2539_);
lean_dec(v___x_2538_);
v___x_2541_ = lean_box(0);
v_isShared_2542_ = v_isSharedCheck_2556_;
goto v_resetjp_2540_;
}
v_resetjp_2540_:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___y_2547_; lean_object* v___x_2554_; 
v___x_2543_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__0));
v___x_2544_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__1));
v___x_2545_ = l_Lean_Name_mkStr7(v___x_2509_, v___x_2510_, v___x_2511_, v___x_2512_, v___x_2513_, v___x_2543_, v___x_2544_);
v___x_2554_ = l_Lean_Level_dec(v_u_2521_);
if (lean_obj_tag(v___x_2554_) == 0)
{
v___y_2547_ = v_u_2521_;
goto v___jp_2546_;
}
else
{
lean_object* v_val_2555_; 
lean_dec(v_u_2521_);
v_val_2555_ = lean_ctor_get(v___x_2554_, 0);
lean_inc(v_val_2555_);
lean_dec_ref_known(v___x_2554_, 1);
v___y_2547_ = v_val_2555_;
goto v___jp_2546_;
}
v___jp_2546_:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v_prf_2550_; lean_object* v___x_2552_; 
v___x_2548_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2548_, 0, v___y_2547_);
lean_ctor_set(v___x_2548_, 1, v___x_2514_);
v___x_2549_ = l_Lean_mkConst(v___x_2545_, v___x_2548_);
v_prf_2550_ = l_Lean_mkApp8(v___x_2549_, v_l_2515_, v_cl_2516_, v_hyps_2517_, v_a_2518_, v_target_2519_, v_a_2505_, v_a_2520_, v_a_2539_);
if (v_isShared_2542_ == 0)
{
lean_ctor_set(v___x_2541_, 0, v_prf_2550_);
v___x_2552_ = v___x_2541_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v_prf_2550_);
v___x_2552_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
return v___x_2552_;
}
}
}
}
else
{
lean_dec(v_u_2521_);
lean_dec_ref(v_a_2520_);
lean_dec_ref(v_target_2519_);
lean_dec_ref(v_a_2518_);
lean_dec_ref(v_hyps_2517_);
lean_dec_ref(v_cl_2516_);
lean_dec_ref(v_l_2515_);
lean_dec(v___x_2514_);
lean_dec_ref(v___x_2513_);
lean_dec_ref(v___x_2512_);
lean_dec_ref(v___x_2511_);
lean_dec_ref(v___x_2510_);
lean_dec_ref(v___x_2509_);
lean_dec_ref(v_a_2505_);
return v___x_2538_;
}
}
else
{
lean_dec_ref(v_h_u03c6_2522_);
lean_dec(v_u_2521_);
lean_dec_ref(v_a_2520_);
lean_dec_ref(v_target_2519_);
lean_dec_ref(v_a_2518_);
lean_dec_ref(v_hyps_2517_);
lean_dec_ref(v_cl_2516_);
lean_dec_ref(v_l_2515_);
lean_dec(v___x_2514_);
lean_dec_ref(v___x_2513_);
lean_dec_ref(v___x_2512_);
lean_dec_ref(v___x_2511_);
lean_dec_ref(v___x_2510_);
lean_dec_ref(v___x_2509_);
lean_dec_ref(v_a_2505_);
return v___x_2532_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame_spec__0___lam__0___boxed(lean_object** _args){
lean_object* v_kSuccess_2557_ = _args[0];
lean_object* v_a_2558_ = _args[1];
lean_object* v_goal_2559_ = _args[2];
lean_object* v_a_2560_ = _args[3];
lean_object* v___x_2561_ = _args[4];
lean_object* v___x_2562_ = _args[5];
lean_object* v___x_2563_ = _args[6];
lean_object* v___x_2564_ = _args[7];
lean_object* v___x_2565_ = _args[8];
lean_object* v___x_2566_ = _args[9];
lean_object* v___x_2567_ = _args[10];
lean_object* v_l_2568_ = _args[11];
lean_object* v_cl_2569_ = _args[12];
lean_object* v_hyps_2570_ = _args[13];
lean_object* v_a_2571_ = _args[14];
lean_object* v_target_2572_ = _args[15];
lean_object* v_a_2573_ = _args[16];
lean_object* v_u_2574_ = _args[17];
lean_object* v_h_u03c6_2575_ = _args[18];
lean_object* v___y_2576_ = _args[19];
lean_object* v___y_2577_ = _args[20];
lean_object* v___y_2578_ = _args[21];
lean_object* v___y_2579_ = _args[22];
lean_object* v___y_2580_ = _args[23];
lean_object* v___y_2581_ = _args[24];
lean_object* v___y_2582_ = _args[25];
lean_object* v___y_2583_ = _args[26];
lean_object* v___y_2584_ = _args[27];
_start:
{
uint8_t v_a_3838__boxed_2585_; uint8_t v___x_3839__boxed_2586_; lean_object* v_res_2587_; 
v_a_3838__boxed_2585_ = lean_unbox(v_a_2560_);
v___x_3839__boxed_2586_ = lean_unbox(v___x_2561_);
v_res_2587_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame_spec__0___lam__0(v_kSuccess_2557_, v_a_2558_, v_goal_2559_, v_a_3838__boxed_2585_, v___x_3839__boxed_2586_, v___x_2562_, v___x_2563_, v___x_2564_, v___x_2565_, v___x_2566_, v___x_2567_, v_l_2568_, v_cl_2569_, v_hyps_2570_, v_a_2571_, v_target_2572_, v_a_2573_, v_u_2574_, v_h_u03c6_2575_, v___y_2576_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_);
lean_dec(v___y_2583_);
lean_dec_ref(v___y_2582_);
lean_dec(v___y_2581_);
lean_dec_ref(v___y_2580_);
lean_dec(v___y_2579_);
lean_dec_ref(v___y_2578_);
lean_dec(v___y_2577_);
lean_dec_ref(v___y_2576_);
return v_res_2587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame_spec__0(lean_object* v_goal_2588_, lean_object* v_kFail_2589_, lean_object* v_kSuccess_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_){
_start:
{
lean_object* v_u_2600_; lean_object* v_l_2601_; lean_object* v_cl_2602_; lean_object* v_hyps_2603_; lean_object* v_target_2604_; lean_object* v___x_2606_; uint8_t v_isShared_2607_; uint8_t v_isSharedCheck_2682_; 
v_u_2600_ = lean_ctor_get(v_goal_2588_, 0);
v_l_2601_ = lean_ctor_get(v_goal_2588_, 1);
v_cl_2602_ = lean_ctor_get(v_goal_2588_, 2);
v_hyps_2603_ = lean_ctor_get(v_goal_2588_, 3);
v_target_2604_ = lean_ctor_get(v_goal_2588_, 4);
v_isSharedCheck_2682_ = !lean_is_exclusive(v_goal_2588_);
if (v_isSharedCheck_2682_ == 0)
{
v___x_2606_ = v_goal_2588_;
v_isShared_2607_ = v_isSharedCheck_2682_;
goto v_resetjp_2605_;
}
else
{
lean_inc(v_target_2604_);
lean_inc(v_hyps_2603_);
lean_inc(v_cl_2602_);
lean_inc(v_l_2601_);
lean_inc(v_u_2600_);
lean_dec(v_goal_2588_);
v___x_2606_ = lean_box(0);
v_isShared_2607_ = v_isSharedCheck_2682_;
goto v_resetjp_2605_;
}
v_resetjp_2605_:
{
lean_object* v___x_2608_; uint8_t v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; 
v___x_2608_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1);
v___x_2609_ = 0;
v___x_2610_ = lean_box(0);
v___x_2611_ = l_Lean_Meta_mkFreshExprMVar(v___x_2608_, v___x_2609_, v___x_2610_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_);
if (lean_obj_tag(v___x_2611_) == 0)
{
lean_object* v_a_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2681_; 
v_a_2612_ = lean_ctor_get(v___x_2611_, 0);
v_isSharedCheck_2681_ = !lean_is_exclusive(v___x_2611_);
if (v_isSharedCheck_2681_ == 0)
{
v___x_2614_ = v___x_2611_;
v_isShared_2615_ = v_isSharedCheck_2681_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_a_2612_);
lean_dec(v___x_2611_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2681_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2617_; 
lean_inc_ref(v_l_2601_);
if (v_isShared_2615_ == 0)
{
lean_ctor_set_tag(v___x_2614_, 1);
lean_ctor_set(v___x_2614_, 0, v_l_2601_);
v___x_2617_ = v___x_2614_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v_l_2601_);
v___x_2617_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
lean_object* v___x_2618_; 
v___x_2618_ = l_Lean_Meta_mkFreshExprMVar(v___x_2617_, v___x_2609_, v___x_2610_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_);
if (lean_obj_tag(v___x_2618_) == 0)
{
lean_object* v_a_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___y_2627_; lean_object* v___x_2678_; 
v_a_2619_ = lean_ctor_get(v___x_2618_, 0);
lean_inc(v_a_2619_);
lean_dec_ref_known(v___x_2618_, 1);
v___x_2620_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0));
v___x_2621_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0));
v___x_2622_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1));
v___x_2623_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__1));
v___x_2624_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0));
v___x_2625_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___redArg___lam__5___closed__2));
v___x_2678_ = l_Lean_Level_dec(v_u_2600_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_inc(v_u_2600_);
v___y_2627_ = v_u_2600_;
goto v___jp_2626_;
}
else
{
lean_object* v_val_2679_; 
v_val_2679_ = lean_ctor_get(v___x_2678_, 0);
lean_inc(v_val_2679_);
lean_dec_ref_known(v___x_2678_, 1);
v___y_2627_ = v_val_2679_;
goto v___jp_2626_;
}
v___jp_2626_:
{
lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
v___x_2628_ = lean_box(0);
v___x_2629_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2629_, 0, v___y_2627_);
lean_ctor_set(v___x_2629_, 1, v___x_2628_);
v___x_2630_ = l_Lean_mkConst(v___x_2625_, v___x_2629_);
lean_inc(v_a_2612_);
lean_inc(v_a_2619_);
lean_inc_ref(v_hyps_2603_);
lean_inc_ref(v_cl_2602_);
lean_inc_ref(v_l_2601_);
v___x_2631_ = l_Lean_mkApp5(v___x_2630_, v_l_2601_, v_cl_2602_, v_hyps_2603_, v_a_2619_, v_a_2612_);
v___x_2632_ = lean_box(0);
v___x_2633_ = l_Lean_Meta_trySynthInstance(v___x_2631_, v___x_2632_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_);
if (lean_obj_tag(v___x_2633_) == 0)
{
lean_object* v_a_2634_; 
v_a_2634_ = lean_ctor_get(v___x_2633_, 0);
lean_inc(v_a_2634_);
lean_dec_ref_known(v___x_2633_, 1);
if (lean_obj_tag(v_a_2634_) == 1)
{
lean_object* v_a_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; 
v_a_2635_ = lean_ctor_get(v_a_2634_, 0);
lean_inc(v_a_2635_);
lean_dec_ref_known(v_a_2634_, 1);
v___x_2636_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1);
lean_inc(v_a_2612_);
v___x_2637_ = l_Lean_Meta_isExprDefEq(v___x_2636_, v_a_2612_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_);
if (lean_obj_tag(v___x_2637_) == 0)
{
lean_object* v_a_2638_; uint8_t v___x_2639_; 
v_a_2638_ = lean_ctor_get(v___x_2637_, 0);
lean_inc(v_a_2638_);
lean_dec_ref_known(v___x_2637_, 1);
v___x_2639_ = lean_unbox(v_a_2638_);
if (v___x_2639_ == 0)
{
lean_object* v___x_2640_; 
lean_dec_ref(v_kFail_2589_);
lean_inc_ref(v_hyps_2603_);
v___x_2640_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_transferHypNames(v_hyps_2603_, v_a_2619_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_);
if (lean_obj_tag(v___x_2640_) == 0)
{
lean_object* v_a_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; 
v_a_2641_ = lean_ctor_get(v___x_2640_, 0);
lean_inc(v_a_2641_);
lean_dec_ref_known(v___x_2640_, 1);
v___x_2642_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1));
v___x_2643_ = l_Lean_Core_mkFreshUserName(v___x_2642_, v___y_2597_, v___y_2598_);
if (lean_obj_tag(v___x_2643_) == 0)
{
lean_object* v_a_2644_; uint8_t v___x_2645_; lean_object* v_goal_2647_; 
v_a_2644_ = lean_ctor_get(v___x_2643_, 0);
lean_inc(v_a_2644_);
lean_dec_ref_known(v___x_2643_, 1);
v___x_2645_ = 1;
lean_inc_ref(v_target_2604_);
lean_inc(v_a_2641_);
lean_inc_ref(v_cl_2602_);
lean_inc_ref(v_l_2601_);
lean_inc(v_u_2600_);
if (v_isShared_2607_ == 0)
{
lean_ctor_set(v___x_2606_, 3, v_a_2641_);
v_goal_2647_ = v___x_2606_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v_u_2600_);
lean_ctor_set(v_reuseFailAlloc_2651_, 1, v_l_2601_);
lean_ctor_set(v_reuseFailAlloc_2651_, 2, v_cl_2602_);
lean_ctor_set(v_reuseFailAlloc_2651_, 3, v_a_2641_);
lean_ctor_set(v_reuseFailAlloc_2651_, 4, v_target_2604_);
v_goal_2647_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
lean_object* v___x_2648_; lean_object* v___f_2649_; lean_object* v___x_2650_; 
v___x_2648_ = lean_box(v___x_2645_);
lean_inc(v_a_2612_);
v___f_2649_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame_spec__0___lam__0___boxed), 28, 18);
lean_closure_set(v___f_2649_, 0, v_kSuccess_2590_);
lean_closure_set(v___f_2649_, 1, v_a_2612_);
lean_closure_set(v___f_2649_, 2, v_goal_2647_);
lean_closure_set(v___f_2649_, 3, v_a_2638_);
lean_closure_set(v___f_2649_, 4, v___x_2648_);
lean_closure_set(v___f_2649_, 5, v___x_2620_);
lean_closure_set(v___f_2649_, 6, v___x_2621_);
lean_closure_set(v___f_2649_, 7, v___x_2622_);
lean_closure_set(v___f_2649_, 8, v___x_2623_);
lean_closure_set(v___f_2649_, 9, v___x_2624_);
lean_closure_set(v___f_2649_, 10, v___x_2628_);
lean_closure_set(v___f_2649_, 11, v_l_2601_);
lean_closure_set(v___f_2649_, 12, v_cl_2602_);
lean_closure_set(v___f_2649_, 13, v_hyps_2603_);
lean_closure_set(v___f_2649_, 14, v_a_2641_);
lean_closure_set(v___f_2649_, 15, v_target_2604_);
lean_closure_set(v___f_2649_, 16, v_a_2635_);
lean_closure_set(v___f_2649_, 17, v_u_2600_);
v___x_2650_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg(v_a_2644_, v_a_2612_, v___f_2649_, v___y_2591_, v___y_2592_, v___y_2593_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_);
return v___x_2650_;
}
}
else
{
lean_object* v_a_2652_; lean_object* v___x_2654_; uint8_t v_isShared_2655_; uint8_t v_isSharedCheck_2659_; 
lean_dec(v_a_2641_);
lean_dec(v_a_2638_);
lean_dec(v_a_2635_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2606_);
lean_dec_ref(v_target_2604_);
lean_dec_ref(v_hyps_2603_);
lean_dec_ref(v_cl_2602_);
lean_dec_ref(v_l_2601_);
lean_dec(v_u_2600_);
lean_dec_ref(v_kSuccess_2590_);
v_a_2652_ = lean_ctor_get(v___x_2643_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v___x_2643_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2654_ = v___x_2643_;
v_isShared_2655_ = v_isSharedCheck_2659_;
goto v_resetjp_2653_;
}
else
{
lean_inc(v_a_2652_);
lean_dec(v___x_2643_);
v___x_2654_ = lean_box(0);
v_isShared_2655_ = v_isSharedCheck_2659_;
goto v_resetjp_2653_;
}
v_resetjp_2653_:
{
lean_object* v___x_2657_; 
if (v_isShared_2655_ == 0)
{
v___x_2657_ = v___x_2654_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v_a_2652_);
v___x_2657_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
return v___x_2657_;
}
}
}
}
else
{
lean_dec(v_a_2638_);
lean_dec(v_a_2635_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2606_);
lean_dec_ref(v_target_2604_);
lean_dec_ref(v_hyps_2603_);
lean_dec_ref(v_cl_2602_);
lean_dec_ref(v_l_2601_);
lean_dec(v_u_2600_);
lean_dec_ref(v_kSuccess_2590_);
return v___x_2640_;
}
}
else
{
lean_object* v___x_2660_; 
lean_dec(v_a_2638_);
lean_dec(v_a_2635_);
lean_dec(v_a_2619_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2606_);
lean_dec_ref(v_target_2604_);
lean_dec_ref(v_hyps_2603_);
lean_dec_ref(v_cl_2602_);
lean_dec_ref(v_l_2601_);
lean_dec(v_u_2600_);
lean_dec_ref(v_kSuccess_2590_);
lean_inc(v___y_2598_);
lean_inc_ref(v___y_2597_);
lean_inc(v___y_2596_);
lean_inc_ref(v___y_2595_);
lean_inc(v___y_2594_);
lean_inc_ref(v___y_2593_);
lean_inc(v___y_2592_);
lean_inc_ref(v___y_2591_);
v___x_2660_ = lean_apply_9(v_kFail_2589_, v___y_2591_, v___y_2592_, v___y_2593_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_, lean_box(0));
return v___x_2660_;
}
}
else
{
lean_object* v_a_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2668_; 
lean_dec(v_a_2635_);
lean_dec(v_a_2619_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2606_);
lean_dec_ref(v_target_2604_);
lean_dec_ref(v_hyps_2603_);
lean_dec_ref(v_cl_2602_);
lean_dec_ref(v_l_2601_);
lean_dec(v_u_2600_);
lean_dec_ref(v_kSuccess_2590_);
lean_dec_ref(v_kFail_2589_);
v_a_2661_ = lean_ctor_get(v___x_2637_, 0);
v_isSharedCheck_2668_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2668_ == 0)
{
v___x_2663_ = v___x_2637_;
v_isShared_2664_ = v_isSharedCheck_2668_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_a_2661_);
lean_dec(v___x_2637_);
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
lean_object* v___x_2669_; 
lean_dec(v_a_2634_);
lean_dec(v_a_2619_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2606_);
lean_dec_ref(v_target_2604_);
lean_dec_ref(v_hyps_2603_);
lean_dec_ref(v_cl_2602_);
lean_dec_ref(v_l_2601_);
lean_dec(v_u_2600_);
lean_dec_ref(v_kSuccess_2590_);
lean_inc(v___y_2598_);
lean_inc_ref(v___y_2597_);
lean_inc(v___y_2596_);
lean_inc_ref(v___y_2595_);
lean_inc(v___y_2594_);
lean_inc_ref(v___y_2593_);
lean_inc(v___y_2592_);
lean_inc_ref(v___y_2591_);
v___x_2669_ = lean_apply_9(v_kFail_2589_, v___y_2591_, v___y_2592_, v___y_2593_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_, lean_box(0));
return v___x_2669_;
}
}
else
{
lean_object* v_a_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2677_; 
lean_dec(v_a_2619_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2606_);
lean_dec_ref(v_target_2604_);
lean_dec_ref(v_hyps_2603_);
lean_dec_ref(v_cl_2602_);
lean_dec_ref(v_l_2601_);
lean_dec(v_u_2600_);
lean_dec_ref(v_kSuccess_2590_);
lean_dec_ref(v_kFail_2589_);
v_a_2670_ = lean_ctor_get(v___x_2633_, 0);
v_isSharedCheck_2677_ = !lean_is_exclusive(v___x_2633_);
if (v_isSharedCheck_2677_ == 0)
{
v___x_2672_ = v___x_2633_;
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
else
{
lean_inc(v_a_2670_);
lean_dec(v___x_2633_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v___x_2675_; 
if (v_isShared_2673_ == 0)
{
v___x_2675_ = v___x_2672_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v_a_2670_);
v___x_2675_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
return v___x_2675_;
}
}
}
}
}
else
{
lean_dec(v_a_2612_);
lean_del_object(v___x_2606_);
lean_dec_ref(v_target_2604_);
lean_dec_ref(v_hyps_2603_);
lean_dec_ref(v_cl_2602_);
lean_dec_ref(v_l_2601_);
lean_dec(v_u_2600_);
lean_dec_ref(v_kSuccess_2590_);
lean_dec_ref(v_kFail_2589_);
return v___x_2618_;
}
}
}
}
else
{
lean_del_object(v___x_2606_);
lean_dec_ref(v_target_2604_);
lean_dec_ref(v_hyps_2603_);
lean_dec_ref(v_cl_2602_);
lean_dec_ref(v_l_2601_);
lean_dec(v_u_2600_);
lean_dec_ref(v_kSuccess_2590_);
lean_dec_ref(v_kFail_2589_);
return v___x_2611_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame_spec__0___boxed(lean_object* v_goal_2683_, lean_object* v_kFail_2684_, lean_object* v_kSuccess_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_){
_start:
{
lean_object* v_res_2695_; 
v_res_2695_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame_spec__0(v_goal_2683_, v_kFail_2684_, v_kSuccess_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_);
lean_dec(v___y_2693_);
lean_dec_ref(v___y_2692_);
lean_dec(v___y_2691_);
lean_dec_ref(v___y_2690_);
lean_dec(v___y_2689_);
lean_dec_ref(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
return v_res_2695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__2(lean_object* v_a_2696_, lean_object* v___f_2697_, lean_object* v___f_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_){
_start:
{
lean_object* v___x_2708_; 
lean_inc(v_a_2696_);
v___x_2708_ = l_Lean_MVarId_getType(v_a_2696_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_);
if (lean_obj_tag(v___x_2708_) == 0)
{
lean_object* v_a_2709_; lean_object* v___x_2710_; lean_object* v_a_2711_; lean_object* v___x_2712_; 
v_a_2709_ = lean_ctor_get(v___x_2708_, 0);
lean_inc(v_a_2709_);
lean_dec_ref_known(v___x_2708_, 1);
v___x_2710_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg(v_a_2709_, v___y_2704_);
v_a_2711_ = lean_ctor_get(v___x_2710_, 0);
lean_inc(v_a_2711_);
lean_dec_ref(v___x_2710_);
v___x_2712_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseMGoal_x3f(v_a_2711_);
lean_dec(v_a_2711_);
if (lean_obj_tag(v___x_2712_) == 1)
{
lean_object* v_val_2713_; lean_object* v___x_2714_; 
v_val_2713_ = lean_ctor_get(v___x_2712_, 0);
lean_inc(v_val_2713_);
lean_dec_ref_known(v___x_2712_, 1);
v___x_2714_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame_spec__0(v_val_2713_, v___f_2697_, v___f_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_);
if (lean_obj_tag(v___x_2714_) == 0)
{
lean_object* v_a_2715_; lean_object* v___x_2716_; 
v_a_2715_ = lean_ctor_get(v___x_2714_, 0);
lean_inc(v_a_2715_);
lean_dec_ref_known(v___x_2714_, 1);
v___x_2716_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg(v_a_2696_, v_a_2715_, v___y_2704_);
return v___x_2716_;
}
else
{
lean_object* v_a_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2724_; 
lean_dec(v_a_2696_);
v_a_2717_ = lean_ctor_get(v___x_2714_, 0);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2714_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2719_ = v___x_2714_;
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_a_2717_);
lean_dec(v___x_2714_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v___x_2722_; 
if (v_isShared_2720_ == 0)
{
v___x_2722_ = v___x_2719_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v_a_2717_);
v___x_2722_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
return v___x_2722_;
}
}
}
}
else
{
lean_object* v___x_2725_; lean_object* v___x_2726_; 
lean_dec(v___x_2712_);
lean_dec_ref(v___f_2698_);
lean_dec_ref(v___f_2697_);
lean_dec(v_a_2696_);
v___x_2725_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__1);
v___x_2726_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg(v___x_2725_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_);
return v___x_2726_;
}
}
else
{
lean_object* v_a_2727_; lean_object* v___x_2729_; uint8_t v_isShared_2730_; uint8_t v_isSharedCheck_2734_; 
lean_dec_ref(v___f_2698_);
lean_dec_ref(v___f_2697_);
lean_dec(v_a_2696_);
v_a_2727_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2734_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2734_ == 0)
{
v___x_2729_ = v___x_2708_;
v_isShared_2730_ = v_isSharedCheck_2734_;
goto v_resetjp_2728_;
}
else
{
lean_inc(v_a_2727_);
lean_dec(v___x_2708_);
v___x_2729_ = lean_box(0);
v_isShared_2730_ = v_isSharedCheck_2734_;
goto v_resetjp_2728_;
}
v_resetjp_2728_:
{
lean_object* v___x_2732_; 
if (v_isShared_2730_ == 0)
{
v___x_2732_ = v___x_2729_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v_a_2727_);
v___x_2732_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
return v___x_2732_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__2___boxed(lean_object* v_a_2735_, lean_object* v___f_2736_, lean_object* v___f_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_){
_start:
{
lean_object* v_res_2747_; 
v_res_2747_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__2(v_a_2735_, v___f_2736_, v___f_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_);
lean_dec(v___y_2745_);
lean_dec_ref(v___y_2744_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
lean_dec(v___y_2741_);
lean_dec_ref(v___y_2740_);
lean_dec(v___y_2739_);
lean_dec_ref(v___y_2738_);
return v_res_2747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg(lean_object* v_a_2750_, lean_object* v_a_2751_, lean_object* v_a_2752_, lean_object* v_a_2753_, lean_object* v_a_2754_, lean_object* v_a_2755_, lean_object* v_a_2756_, lean_object* v_a_2757_){
_start:
{
lean_object* v___x_2759_; 
v___x_2759_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_2751_, v_a_2754_, v_a_2755_, v_a_2756_, v_a_2757_);
if (lean_obj_tag(v___x_2759_) == 0)
{
lean_object* v_a_2760_; lean_object* v___f_2761_; lean_object* v___f_2762_; lean_object* v___f_2763_; lean_object* v___x_2764_; 
v_a_2760_ = lean_ctor_get(v___x_2759_, 0);
lean_inc_n(v_a_2760_, 2);
lean_dec_ref_known(v___x_2759_, 1);
v___f_2761_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___closed__0));
v___f_2762_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___closed__1));
v___f_2763_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___lam__2___boxed), 12, 3);
lean_closure_set(v___f_2763_, 0, v_a_2760_);
lean_closure_set(v___f_2763_, 1, v___f_2761_);
lean_closure_set(v___f_2763_, 2, v___f_2762_);
v___x_2764_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg(v_a_2760_, v___f_2763_, v_a_2750_, v_a_2751_, v_a_2752_, v_a_2753_, v_a_2754_, v_a_2755_, v_a_2756_, v_a_2757_);
return v___x_2764_;
}
else
{
lean_object* v_a_2765_; lean_object* v___x_2767_; uint8_t v_isShared_2768_; uint8_t v_isSharedCheck_2772_; 
v_a_2765_ = lean_ctor_get(v___x_2759_, 0);
v_isSharedCheck_2772_ = !lean_is_exclusive(v___x_2759_);
if (v_isSharedCheck_2772_ == 0)
{
v___x_2767_ = v___x_2759_;
v_isShared_2768_ = v_isSharedCheck_2772_;
goto v_resetjp_2766_;
}
else
{
lean_inc(v_a_2765_);
lean_dec(v___x_2759_);
v___x_2767_ = lean_box(0);
v_isShared_2768_ = v_isSharedCheck_2772_;
goto v_resetjp_2766_;
}
v_resetjp_2766_:
{
lean_object* v___x_2770_; 
if (v_isShared_2768_ == 0)
{
v___x_2770_ = v___x_2767_;
goto v_reusejp_2769_;
}
else
{
lean_object* v_reuseFailAlloc_2771_; 
v_reuseFailAlloc_2771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2771_, 0, v_a_2765_);
v___x_2770_ = v_reuseFailAlloc_2771_;
goto v_reusejp_2769_;
}
v_reusejp_2769_:
{
return v___x_2770_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg___boxed(lean_object* v_a_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_, lean_object* v_a_2777_, lean_object* v_a_2778_, lean_object* v_a_2779_, lean_object* v_a_2780_, lean_object* v_a_2781_){
_start:
{
lean_object* v_res_2782_; 
v_res_2782_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg(v_a_2773_, v_a_2774_, v_a_2775_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_, v_a_2780_);
lean_dec(v_a_2780_);
lean_dec_ref(v_a_2779_);
lean_dec(v_a_2778_);
lean_dec_ref(v_a_2777_);
lean_dec(v_a_2776_);
lean_dec_ref(v_a_2775_);
lean_dec(v_a_2774_);
lean_dec_ref(v_a_2773_);
return v_res_2782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame(lean_object* v_x_2783_, lean_object* v_a_2784_, lean_object* v_a_2785_, lean_object* v_a_2786_, lean_object* v_a_2787_, lean_object* v_a_2788_, lean_object* v_a_2789_, lean_object* v_a_2790_, lean_object* v_a_2791_){
_start:
{
lean_object* v___x_2793_; 
v___x_2793_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg(v_a_2784_, v_a_2785_, v_a_2786_, v_a_2787_, v_a_2788_, v_a_2789_, v_a_2790_, v_a_2791_);
return v___x_2793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___boxed(lean_object* v_x_2794_, lean_object* v_a_2795_, lean_object* v_a_2796_, lean_object* v_a_2797_, lean_object* v_a_2798_, lean_object* v_a_2799_, lean_object* v_a_2800_, lean_object* v_a_2801_, lean_object* v_a_2802_, lean_object* v_a_2803_){
_start:
{
lean_object* v_res_2804_; 
v_res_2804_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame(v_x_2794_, v_a_2795_, v_a_2796_, v_a_2797_, v_a_2798_, v_a_2799_, v_a_2800_, v_a_2801_, v_a_2802_);
lean_dec(v_a_2802_);
lean_dec_ref(v_a_2801_);
lean_dec(v_a_2800_);
lean_dec_ref(v_a_2799_);
lean_dec(v_a_2798_);
lean_dec_ref(v_a_2797_);
lean_dec(v_a_2796_);
lean_dec_ref(v_a_2795_);
lean_dec(v_x_2794_);
return v_res_2804_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt_spec__0(lean_object* v_opts_2805_, lean_object* v_opt_2806_){
_start:
{
lean_object* v_name_2807_; lean_object* v_defValue_2808_; lean_object* v_map_2809_; lean_object* v___x_2810_; 
v_name_2807_ = lean_ctor_get(v_opt_2806_, 0);
v_defValue_2808_ = lean_ctor_get(v_opt_2806_, 1);
v_map_2809_ = lean_ctor_get(v_opts_2805_, 0);
v___x_2810_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2809_, v_name_2807_);
if (lean_obj_tag(v___x_2810_) == 0)
{
uint8_t v___x_2811_; 
v___x_2811_ = lean_unbox(v_defValue_2808_);
return v___x_2811_;
}
else
{
lean_object* v_val_2812_; 
v_val_2812_ = lean_ctor_get(v___x_2810_, 0);
lean_inc(v_val_2812_);
lean_dec_ref_known(v___x_2810_, 1);
if (lean_obj_tag(v_val_2812_) == 1)
{
uint8_t v_v_2813_; 
v_v_2813_ = lean_ctor_get_uint8(v_val_2812_, 0);
lean_dec_ref_known(v_val_2812_, 0);
return v_v_2813_;
}
else
{
uint8_t v___x_2814_; 
lean_dec(v_val_2812_);
v___x_2814_ = lean_unbox(v_defValue_2808_);
return v___x_2814_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt_spec__0___boxed(lean_object* v_opts_2815_, lean_object* v_opt_2816_){
_start:
{
uint8_t v_res_2817_; lean_object* v_r_2818_; 
v_res_2817_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt_spec__0(v_opts_2815_, v_opt_2816_);
lean_dec_ref(v_opt_2816_);
lean_dec_ref(v_opts_2815_);
v_r_2818_ = lean_box(v_res_2817_);
return v_r_2818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___redArg(lean_object* v_a_2819_, lean_object* v_a_2820_, lean_object* v_a_2821_, lean_object* v_a_2822_, lean_object* v_a_2823_, lean_object* v_a_2824_, lean_object* v_a_2825_, lean_object* v_a_2826_){
_start:
{
lean_object* v_options_2828_; lean_object* v___x_2829_; uint8_t v___x_2830_; 
v_options_2828_ = lean_ctor_get(v_a_2825_, 2);
v___x_2829_ = l_new__wp__monad;
v___x_2830_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt_spec__0(v_options_2828_, v___x_2829_);
if (v___x_2830_ == 0)
{
lean_object* v___x_2831_; 
v___x_2831_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg(v_a_2819_, v_a_2820_, v_a_2821_, v_a_2822_, v_a_2823_, v_a_2824_, v_a_2825_, v_a_2826_);
return v___x_2831_;
}
else
{
lean_object* v___x_2832_; 
v___x_2832_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMFrame___redArg(v_a_2819_, v_a_2820_, v_a_2821_, v_a_2822_, v_a_2823_, v_a_2824_, v_a_2825_, v_a_2826_);
return v___x_2832_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___redArg___boxed(lean_object* v_a_2833_, lean_object* v_a_2834_, lean_object* v_a_2835_, lean_object* v_a_2836_, lean_object* v_a_2837_, lean_object* v_a_2838_, lean_object* v_a_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_){
_start:
{
lean_object* v_res_2842_; 
v_res_2842_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___redArg(v_a_2833_, v_a_2834_, v_a_2835_, v_a_2836_, v_a_2837_, v_a_2838_, v_a_2839_, v_a_2840_);
lean_dec(v_a_2840_);
lean_dec_ref(v_a_2839_);
lean_dec(v_a_2838_);
lean_dec_ref(v_a_2837_);
lean_dec(v_a_2836_);
lean_dec_ref(v_a_2835_);
lean_dec(v_a_2834_);
lean_dec_ref(v_a_2833_);
return v_res_2842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt(lean_object* v_stx_2843_, lean_object* v_a_2844_, lean_object* v_a_2845_, lean_object* v_a_2846_, lean_object* v_a_2847_, lean_object* v_a_2848_, lean_object* v_a_2849_, lean_object* v_a_2850_, lean_object* v_a_2851_){
_start:
{
lean_object* v___x_2853_; 
v___x_2853_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___redArg(v_a_2844_, v_a_2845_, v_a_2846_, v_a_2847_, v_a_2848_, v_a_2849_, v_a_2850_, v_a_2851_);
return v___x_2853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___boxed(lean_object* v_stx_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_){
_start:
{
lean_object* v_res_2864_; 
v_res_2864_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt(v_stx_2854_, v_a_2855_, v_a_2856_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_, v_a_2861_, v_a_2862_);
lean_dec(v_a_2862_);
lean_dec_ref(v_a_2861_);
lean_dec(v_a_2860_);
lean_dec_ref(v_a_2859_);
lean_dec(v_a_2858_);
lean_dec_ref(v_a_2857_);
lean_dec(v_a_2856_);
lean_dec_ref(v_a_2855_);
lean_dec(v_stx_2854_);
return v_res_2864_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1(){
_start:
{
lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; 
v___x_2884_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2885_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__3));
v___x_2886_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___closed__7));
v___x_2887_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___boxed), 10, 0);
v___x_2888_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2884_, v___x_2885_, v___x_2886_, v___x_2887_);
return v___x_2888_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1___boxed(lean_object* v_a_2889_){
_start:
{
lean_object* v_res_2890_; 
v_res_2890_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1();
return v_res_2890_;
}
}
lean_object* runtime_initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrameOpt__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(builtin);
}
#ifdef __cplusplus
}
#endif
