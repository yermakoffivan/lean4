// Lean compiler output
// Module: Lean.Elab.Tactic.BVDecide.Frontend.Normalize.Rewrite
// Imports: public import Lean.Elab.Tactic.BVDecide.Frontend.Normalize.Basic import Lean.Meta.Sym.Simp.SimpM import Lean.Meta.Sym.Simp.ControlFlow import Lean.Meta.Sym.Simp.Forall import Lean.Meta.Sym.Simp.EvalGround import Lean.Meta.Sym.Simp.Simproc import Lean.Elab.Tactic.BVDecide.Frontend.Normalize.Simproc import Lean.Meta.Sym.Simp.Rewrite import Init.Omega
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
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpArrowTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
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
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_dischargeNone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_evalGround___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_bvNormalizeExt;
lean_object* l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assertHypotheses(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__0;
static const lean_closure_object l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__1 = (const lean_object*)&l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__2 = (const lean_object*)&l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__3 = (const lean_object*)&l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__4 = (const lean_object*)&l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_simp___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(183, 66, 254, 161, 210, 133, 94, 78)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__4;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__7_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__2_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__10___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_dischargeNone___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__0_value;
static const lean_array_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__1_value),((lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__1_value)}};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Lean.Elab.Tactic.BVDecide.Frontend.Normalize.Rewrite"};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Lean.Elab.Tactic.BVDecide.Frontend.Normalize.rewriteRulesPass"};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__6;
static const lean_ctor_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___boxed__const__1 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__0___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__0_value)} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___boxed, .m_arity = 11, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__1_value)} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "rewriteRules"};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__3_value),LEAN_SCALAR_PTR_LITERAL(39, 217, 1, 104, 84, 94, 139, 227)}};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__4_value),((lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__2_value)}};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___closed__5_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__10(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg___lam__0(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_){
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
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg___lam__0___boxed(lean_object* v_x_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg___lam__0(v_x_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg(lean_object* v_mvarId_23_, lean_object* v_x_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v___f_34_; lean_object* v___x_35_; 
lean_inc(v___y_28_);
lean_inc_ref(v___y_27_);
lean_inc(v___y_26_);
lean_inc_ref(v___y_25_);
v___f_34_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg___lam__0___boxed), 10, 5);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg___boxed(lean_object* v_mvarId_44_, lean_object* v_x_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg(v_mvarId_44_, v_x_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2(lean_object* v_00_u03b1_56_, lean_object* v_mvarId_57_, lean_object* v_x_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg(v_mvarId_57_, v_x_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___boxed(lean_object* v_00_u03b1_69_, lean_object* v_mvarId_70_, lean_object* v_x_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2(v_00_u03b1_69_, v_mvarId_70_, v_x_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_);
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
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___redArg(lean_object* v_a_82_, lean_object* v_x_83_){
_start:
{
if (lean_obj_tag(v_x_83_) == 0)
{
uint8_t v___x_84_; 
v___x_84_ = 0;
return v___x_84_;
}
else
{
lean_object* v_key_85_; lean_object* v_tail_86_; uint8_t v___x_87_; 
v_key_85_ = lean_ctor_get(v_x_83_, 0);
v_tail_86_ = lean_ctor_get(v_x_83_, 2);
v___x_87_ = l_Lean_instBEqFVarId_beq(v_key_85_, v_a_82_);
if (v___x_87_ == 0)
{
v_x_83_ = v_tail_86_;
goto _start;
}
else
{
return v___x_87_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___redArg___boxed(lean_object* v_a_89_, lean_object* v_x_90_){
_start:
{
uint8_t v_res_91_; lean_object* v_r_92_; 
v_res_91_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___redArg(v_a_89_, v_x_90_);
lean_dec(v_x_90_);
lean_dec(v_a_89_);
v_r_92_ = lean_box(v_res_91_);
return v_r_92_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___redArg(lean_object* v_m_93_, lean_object* v_a_94_){
_start:
{
lean_object* v_buckets_95_; lean_object* v___x_96_; uint64_t v___x_97_; uint64_t v___x_98_; uint64_t v___x_99_; uint64_t v_fold_100_; uint64_t v___x_101_; uint64_t v___x_102_; uint64_t v___x_103_; size_t v___x_104_; size_t v___x_105_; size_t v___x_106_; size_t v___x_107_; size_t v___x_108_; lean_object* v___x_109_; uint8_t v___x_110_; 
v_buckets_95_ = lean_ctor_get(v_m_93_, 1);
v___x_96_ = lean_array_get_size(v_buckets_95_);
v___x_97_ = l_Lean_instHashableFVarId_hash(v_a_94_);
v___x_98_ = 32ULL;
v___x_99_ = lean_uint64_shift_right(v___x_97_, v___x_98_);
v_fold_100_ = lean_uint64_xor(v___x_97_, v___x_99_);
v___x_101_ = 16ULL;
v___x_102_ = lean_uint64_shift_right(v_fold_100_, v___x_101_);
v___x_103_ = lean_uint64_xor(v_fold_100_, v___x_102_);
v___x_104_ = lean_uint64_to_usize(v___x_103_);
v___x_105_ = lean_usize_of_nat(v___x_96_);
v___x_106_ = ((size_t)1ULL);
v___x_107_ = lean_usize_sub(v___x_105_, v___x_106_);
v___x_108_ = lean_usize_land(v___x_104_, v___x_107_);
v___x_109_ = lean_array_uget_borrowed(v_buckets_95_, v___x_108_);
v___x_110_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___redArg(v_a_94_, v___x_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___redArg___boxed(lean_object* v_m_111_, lean_object* v_a_112_){
_start:
{
uint8_t v_res_113_; lean_object* v_r_114_; 
v_res_113_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___redArg(v_m_111_, v_a_112_);
lean_dec(v_a_112_);
lean_dec_ref(v_m_111_);
v_r_114_ = lean_box(v_res_113_);
return v_r_114_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___redArg(lean_object* v_as_115_, size_t v_i_116_, size_t v_stop_117_, lean_object* v_b_118_, lean_object* v___y_119_){
_start:
{
lean_object* v_a_122_; uint8_t v___x_126_; 
v___x_126_ = lean_usize_dec_eq(v_i_116_, v_stop_117_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; lean_object* v_rewriteCache_128_; lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_127_ = lean_st_ref_get(v___y_119_);
v_rewriteCache_128_ = lean_ctor_get(v___x_127_, 0);
lean_inc_ref(v_rewriteCache_128_);
lean_dec(v___x_127_);
v___x_129_ = lean_array_uget_borrowed(v_as_115_, v_i_116_);
v___x_130_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___redArg(v_rewriteCache_128_, v___x_129_);
lean_dec_ref(v_rewriteCache_128_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; 
lean_inc(v___x_129_);
v___x_131_ = lean_array_push(v_b_118_, v___x_129_);
v_a_122_ = v___x_131_;
goto v___jp_121_;
}
else
{
v_a_122_ = v_b_118_;
goto v___jp_121_;
}
}
else
{
lean_object* v___x_132_; 
v___x_132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_132_, 0, v_b_118_);
return v___x_132_;
}
v___jp_121_:
{
size_t v___x_123_; size_t v___x_124_; 
v___x_123_ = ((size_t)1ULL);
v___x_124_ = lean_usize_add(v_i_116_, v___x_123_);
v_i_116_ = v___x_124_;
v_b_118_ = v_a_122_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___redArg___boxed(lean_object* v_as_133_, lean_object* v_i_134_, lean_object* v_stop_135_, lean_object* v_b_136_, lean_object* v___y_137_, lean_object* v___y_138_){
_start:
{
size_t v_i_boxed_139_; size_t v_stop_boxed_140_; lean_object* v_res_141_; 
v_i_boxed_139_ = lean_unbox_usize(v_i_134_);
lean_dec(v_i_134_);
v_stop_boxed_140_ = lean_unbox_usize(v_stop_135_);
lean_dec(v_stop_135_);
v_res_141_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___redArg(v_as_133_, v_i_boxed_139_, v_stop_boxed_140_, v_b_136_, v___y_137_);
lean_dec(v___y_137_);
lean_dec_ref(v_as_133_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0(lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
lean_object* v___x_153_; lean_object* v_relevantFVars_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_153_ = lean_st_ref_get(v___y_145_);
v_relevantFVars_154_ = lean_ctor_get(v___x_153_, 2);
lean_inc_ref(v_relevantFVars_154_);
lean_dec(v___x_153_);
v___x_155_ = lean_unsigned_to_nat(0u);
v___x_156_ = lean_array_get_size(v_relevantFVars_154_);
v___x_157_ = ((lean_object*)(l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0___closed__0));
v___x_158_ = lean_nat_dec_lt(v___x_155_, v___x_156_);
if (v___x_158_ == 0)
{
lean_object* v___x_159_; 
lean_dec_ref(v_relevantFVars_154_);
v___x_159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_159_, 0, v___x_157_);
return v___x_159_;
}
else
{
uint8_t v___x_160_; 
v___x_160_ = lean_nat_dec_le(v___x_156_, v___x_156_);
if (v___x_160_ == 0)
{
if (v___x_158_ == 0)
{
lean_object* v___x_161_; 
lean_dec_ref(v_relevantFVars_154_);
v___x_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_161_, 0, v___x_157_);
return v___x_161_;
}
else
{
size_t v___x_162_; size_t v___x_163_; lean_object* v___x_164_; 
v___x_162_ = ((size_t)0ULL);
v___x_163_ = lean_usize_of_nat(v___x_156_);
v___x_164_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___redArg(v_relevantFVars_154_, v___x_162_, v___x_163_, v___x_157_, v___y_145_);
lean_dec_ref(v_relevantFVars_154_);
return v___x_164_;
}
}
else
{
size_t v___x_165_; size_t v___x_166_; lean_object* v___x_167_; 
v___x_165_ = ((size_t)0ULL);
v___x_166_ = lean_usize_of_nat(v___x_156_);
v___x_167_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___redArg(v_relevantFVars_154_, v___x_165_, v___x_166_, v___x_157_, v___y_145_);
lean_dec_ref(v_relevantFVars_154_);
return v___x_167_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0___boxed(lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___lam__0(v___y_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps(lean_object* v_goal_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_){
_start:
{
lean_object* v___f_189_; lean_object* v___x_190_; 
v___f_189_ = ((lean_object*)(l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___closed__0));
v___x_190_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg(v_goal_179_, v___f_189_, v_a_180_, v_a_181_, v_a_182_, v_a_183_, v_a_184_, v_a_185_, v_a_186_, v_a_187_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps___boxed(lean_object* v_goal_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps(v_goal_191_, v_a_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_, v_a_197_, v_a_198_, v_a_199_);
lean_dec(v_a_199_);
lean_dec_ref(v_a_198_);
lean_dec(v_a_197_);
lean_dec_ref(v_a_196_);
lean_dec(v_a_195_);
lean_dec_ref(v_a_194_);
lean_dec(v_a_193_);
lean_dec_ref(v_a_192_);
return v_res_201_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0(lean_object* v_00_u03b2_202_, lean_object* v_m_203_, lean_object* v_a_204_){
_start:
{
uint8_t v___x_205_; 
v___x_205_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___redArg(v_m_203_, v_a_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0___boxed(lean_object* v_00_u03b2_206_, lean_object* v_m_207_, lean_object* v_a_208_){
_start:
{
uint8_t v_res_209_; lean_object* v_r_210_; 
v_res_209_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0(v_00_u03b2_206_, v_m_207_, v_a_208_);
lean_dec(v_a_208_);
lean_dec_ref(v_m_207_);
v_r_210_ = lean_box(v_res_209_);
return v_r_210_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1(lean_object* v_as_211_, size_t v_i_212_, size_t v_stop_213_, lean_object* v_b_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___redArg(v_as_211_, v_i_212_, v_stop_213_, v_b_214_, v___y_216_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1___boxed(lean_object* v_as_225_, lean_object* v_i_226_, lean_object* v_stop_227_, lean_object* v_b_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_){
_start:
{
size_t v_i_boxed_238_; size_t v_stop_boxed_239_; lean_object* v_res_240_; 
v_i_boxed_238_ = lean_unbox_usize(v_i_226_);
lean_dec(v_i_226_);
v_stop_boxed_239_ = lean_unbox_usize(v_stop_227_);
lean_dec(v_stop_227_);
v_res_240_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__1(v_as_225_, v_i_boxed_238_, v_stop_boxed_239_, v_b_228_, v___y_229_, v___y_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_);
lean_dec(v___y_236_);
lean_dec_ref(v___y_235_);
lean_dec(v___y_234_);
lean_dec_ref(v___y_233_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
lean_dec(v___y_230_);
lean_dec_ref(v___y_229_);
lean_dec_ref(v_as_225_);
return v_res_240_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0(lean_object* v_00_u03b2_241_, lean_object* v_a_242_, lean_object* v_x_243_){
_start:
{
uint8_t v___x_244_; 
v___x_244_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___redArg(v_a_242_, v_x_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___boxed(lean_object* v_00_u03b2_245_, lean_object* v_a_246_, lean_object* v_x_247_){
_start:
{
uint8_t v_res_248_; lean_object* v_r_249_; 
v_res_248_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0(v_00_u03b2_245_, v_a_246_, v_x_247_);
lean_dec(v_x_247_);
lean_dec(v_a_246_);
v_r_249_ = lean_box(v_res_248_);
return v_r_249_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__0(void){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = l_instMonadEIO(lean_box(0));
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3(lean_object* v_msg_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v_toApplicative_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_332_; 
v___x_265_ = lean_obj_once(&l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__0, &l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__0_once, _init_l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__0);
v___x_266_ = l_StateRefT_x27_instMonad___redArg(v___x_265_);
v_toApplicative_267_ = lean_ctor_get(v___x_266_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_266_);
if (v_isSharedCheck_332_ == 0)
{
lean_object* v_unused_333_; 
v_unused_333_ = lean_ctor_get(v___x_266_, 1);
lean_dec(v_unused_333_);
v___x_269_ = v___x_266_;
v_isShared_270_ = v_isSharedCheck_332_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_toApplicative_267_);
lean_dec(v___x_266_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_332_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v_toFunctor_271_; lean_object* v_toSeq_272_; lean_object* v_toSeqLeft_273_; lean_object* v_toSeqRight_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_330_; 
v_toFunctor_271_ = lean_ctor_get(v_toApplicative_267_, 0);
v_toSeq_272_ = lean_ctor_get(v_toApplicative_267_, 2);
v_toSeqLeft_273_ = lean_ctor_get(v_toApplicative_267_, 3);
v_toSeqRight_274_ = lean_ctor_get(v_toApplicative_267_, 4);
v_isSharedCheck_330_ = !lean_is_exclusive(v_toApplicative_267_);
if (v_isSharedCheck_330_ == 0)
{
lean_object* v_unused_331_; 
v_unused_331_ = lean_ctor_get(v_toApplicative_267_, 1);
lean_dec(v_unused_331_);
v___x_276_ = v_toApplicative_267_;
v_isShared_277_ = v_isSharedCheck_330_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_toSeqRight_274_);
lean_inc(v_toSeqLeft_273_);
lean_inc(v_toSeq_272_);
lean_inc(v_toFunctor_271_);
lean_dec(v_toApplicative_267_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_330_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___f_278_; lean_object* v___f_279_; lean_object* v___f_280_; lean_object* v___f_281_; lean_object* v___x_282_; lean_object* v___f_283_; lean_object* v___f_284_; lean_object* v___f_285_; lean_object* v___x_287_; 
v___f_278_ = ((lean_object*)(l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__1));
v___f_279_ = ((lean_object*)(l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__2));
lean_inc_ref(v_toFunctor_271_);
v___f_280_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_280_, 0, v_toFunctor_271_);
v___f_281_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_281_, 0, v_toFunctor_271_);
v___x_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_282_, 0, v___f_280_);
lean_ctor_set(v___x_282_, 1, v___f_281_);
v___f_283_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_283_, 0, v_toSeqRight_274_);
v___f_284_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_284_, 0, v_toSeqLeft_273_);
v___f_285_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_285_, 0, v_toSeq_272_);
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 4, v___f_283_);
lean_ctor_set(v___x_276_, 3, v___f_284_);
lean_ctor_set(v___x_276_, 2, v___f_285_);
lean_ctor_set(v___x_276_, 1, v___f_278_);
lean_ctor_set(v___x_276_, 0, v___x_282_);
v___x_287_ = v___x_276_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_282_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v___f_278_);
lean_ctor_set(v_reuseFailAlloc_329_, 2, v___f_285_);
lean_ctor_set(v_reuseFailAlloc_329_, 3, v___f_284_);
lean_ctor_set(v_reuseFailAlloc_329_, 4, v___f_283_);
v___x_287_ = v_reuseFailAlloc_329_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
lean_object* v___x_289_; 
if (v_isShared_270_ == 0)
{
lean_ctor_set(v___x_269_, 1, v___f_279_);
lean_ctor_set(v___x_269_, 0, v___x_287_);
v___x_289_ = v___x_269_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v___x_287_);
lean_ctor_set(v_reuseFailAlloc_328_, 1, v___f_279_);
v___x_289_ = v_reuseFailAlloc_328_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
lean_object* v___x_290_; lean_object* v_toApplicative_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_326_; 
v___x_290_ = l_StateRefT_x27_instMonad___redArg(v___x_289_);
v_toApplicative_291_ = lean_ctor_get(v___x_290_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_290_);
if (v_isSharedCheck_326_ == 0)
{
lean_object* v_unused_327_; 
v_unused_327_ = lean_ctor_get(v___x_290_, 1);
lean_dec(v_unused_327_);
v___x_293_ = v___x_290_;
v_isShared_294_ = v_isSharedCheck_326_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_toApplicative_291_);
lean_dec(v___x_290_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_326_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v_toFunctor_295_; lean_object* v_toSeq_296_; lean_object* v_toSeqLeft_297_; lean_object* v_toSeqRight_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_324_; 
v_toFunctor_295_ = lean_ctor_get(v_toApplicative_291_, 0);
v_toSeq_296_ = lean_ctor_get(v_toApplicative_291_, 2);
v_toSeqLeft_297_ = lean_ctor_get(v_toApplicative_291_, 3);
v_toSeqRight_298_ = lean_ctor_get(v_toApplicative_291_, 4);
v_isSharedCheck_324_ = !lean_is_exclusive(v_toApplicative_291_);
if (v_isSharedCheck_324_ == 0)
{
lean_object* v_unused_325_; 
v_unused_325_ = lean_ctor_get(v_toApplicative_291_, 1);
lean_dec(v_unused_325_);
v___x_300_ = v_toApplicative_291_;
v_isShared_301_ = v_isSharedCheck_324_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_toSeqRight_298_);
lean_inc(v_toSeqLeft_297_);
lean_inc(v_toSeq_296_);
lean_inc(v_toFunctor_295_);
lean_dec(v_toApplicative_291_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_324_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___f_302_; lean_object* v___f_303_; lean_object* v___f_304_; lean_object* v___f_305_; lean_object* v___x_306_; lean_object* v___f_307_; lean_object* v___f_308_; lean_object* v___f_309_; lean_object* v___x_311_; 
v___f_302_ = ((lean_object*)(l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__3));
v___f_303_ = ((lean_object*)(l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___closed__4));
lean_inc_ref(v_toFunctor_295_);
v___f_304_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_304_, 0, v_toFunctor_295_);
v___f_305_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_305_, 0, v_toFunctor_295_);
v___x_306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_306_, 0, v___f_304_);
lean_ctor_set(v___x_306_, 1, v___f_305_);
v___f_307_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_307_, 0, v_toSeqRight_298_);
v___f_308_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_308_, 0, v_toSeqLeft_297_);
v___f_309_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_309_, 0, v_toSeq_296_);
if (v_isShared_301_ == 0)
{
lean_ctor_set(v___x_300_, 4, v___f_307_);
lean_ctor_set(v___x_300_, 3, v___f_308_);
lean_ctor_set(v___x_300_, 2, v___f_309_);
lean_ctor_set(v___x_300_, 1, v___f_302_);
lean_ctor_set(v___x_300_, 0, v___x_306_);
v___x_311_ = v___x_300_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v___x_306_);
lean_ctor_set(v_reuseFailAlloc_323_, 1, v___f_302_);
lean_ctor_set(v_reuseFailAlloc_323_, 2, v___f_309_);
lean_ctor_set(v_reuseFailAlloc_323_, 3, v___f_308_);
lean_ctor_set(v_reuseFailAlloc_323_, 4, v___f_307_);
v___x_311_ = v_reuseFailAlloc_323_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
lean_object* v___x_313_; 
if (v_isShared_294_ == 0)
{
lean_ctor_set(v___x_293_, 1, v___f_303_);
lean_ctor_set(v___x_293_, 0, v___x_311_);
v___x_313_ = v___x_293_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v___x_311_);
lean_ctor_set(v_reuseFailAlloc_322_, 1, v___f_303_);
v___x_313_ = v_reuseFailAlloc_322_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___f_319_; lean_object* v___x_47044__overap_320_; lean_object* v___x_321_; 
v___x_314_ = l_StateRefT_x27_instMonad___redArg(v___x_313_);
v___x_315_ = l_ReaderT_instMonad___redArg(v___x_314_);
v___x_316_ = l_StateRefT_x27_instMonad___redArg(v___x_315_);
v___x_317_ = lean_box(0);
v___x_318_ = l_instInhabitedOfMonad___redArg(v___x_316_, v___x_317_);
v___f_319_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_319_, 0, v___x_318_);
v___x_47044__overap_320_ = lean_panic_fn_borrowed(v___f_319_, v_msg_255_);
lean_dec_ref(v___f_319_);
lean_inc(v___y_263_);
lean_inc_ref(v___y_262_);
lean_inc(v___y_261_);
lean_inc_ref(v___y_260_);
lean_inc(v___y_259_);
lean_inc_ref(v___y_258_);
lean_inc(v___y_257_);
lean_inc_ref(v___y_256_);
v___x_321_ = lean_apply_9(v___x_47044__overap_320_, v___y_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_, lean_box(0));
return v___x_321_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3___boxed(lean_object* v_msg_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3(v_msg_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_);
lean_dec(v___y_342_);
lean_dec_ref(v___y_341_);
lean_dec(v___y_340_);
lean_dec_ref(v___y_339_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__0(lean_object* v_x_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__0___closed__0));
v___x_359_ = l_Lean_Meta_Sym_Simp_simpArrowTelescope(v___x_358_, v___y_347_, v___y_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__0___boxed(lean_object* v_x_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__0(v_x_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec(v___y_368_);
lean_dec_ref(v___y_367_);
lean_dec(v___y_366_);
lean_dec_ref(v___y_365_);
lean_dec(v___y_364_);
lean_dec_ref(v___y_363_);
lean_dec(v___y_362_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1(lean_object* v___f_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_){
_start:
{
lean_object* v___x_385_; 
lean_inc_ref(v___y_374_);
v___x_385_ = l_Lean_Meta_Sym_Simp_simpControl(v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_);
if (lean_obj_tag(v___x_385_) == 0)
{
lean_object* v_a_386_; lean_object* v___x_387_; 
v_a_386_ = lean_ctor_get(v___x_385_, 0);
lean_inc(v_a_386_);
v___x_387_ = lean_box(0);
if (lean_obj_tag(v_a_386_) == 0)
{
uint8_t v_done_388_; 
v_done_388_ = lean_ctor_get_uint8(v_a_386_, 0);
if (v_done_388_ == 0)
{
uint8_t v_contextDependent_389_; lean_object* v___x_390_; 
lean_dec_ref_known(v___x_385_, 1);
v_contextDependent_389_ = lean_ctor_get_uint8(v_a_386_, 1);
lean_dec_ref_known(v_a_386_, 0);
v___x_390_ = lean_apply_12(v___f_373_, v___x_387_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, lean_box(0));
if (lean_obj_tag(v___x_390_) == 0)
{
lean_object* v_a_391_; uint8_t v___y_393_; 
v_a_391_ = lean_ctor_get(v___x_390_, 0);
lean_inc(v_a_391_);
if (v_contextDependent_389_ == 0)
{
lean_dec(v_a_391_);
return v___x_390_;
}
else
{
if (lean_obj_tag(v_a_391_) == 0)
{
uint8_t v_contextDependent_403_; 
v_contextDependent_403_ = lean_ctor_get_uint8(v_a_391_, 1);
v___y_393_ = v_contextDependent_403_;
goto v___jp_392_;
}
else
{
uint8_t v_contextDependent_404_; 
v_contextDependent_404_ = lean_ctor_get_uint8(v_a_391_, sizeof(void*)*2 + 1);
v___y_393_ = v_contextDependent_404_;
goto v___jp_392_;
}
}
v___jp_392_:
{
if (v___y_393_ == 0)
{
lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_401_; 
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_401_ == 0)
{
lean_object* v_unused_402_; 
v_unused_402_ = lean_ctor_get(v___x_390_, 0);
lean_dec(v_unused_402_);
v___x_395_ = v___x_390_;
v_isShared_396_ = v_isSharedCheck_401_;
goto v_resetjp_394_;
}
else
{
lean_dec(v___x_390_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_401_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v___x_397_; lean_object* v___x_399_; 
v___x_397_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_391_);
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 0, v___x_397_);
v___x_399_ = v___x_395_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v___x_397_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
else
{
lean_dec(v_a_391_);
return v___x_390_;
}
}
}
else
{
return v___x_390_;
}
}
else
{
lean_dec_ref_known(v_a_386_, 0);
lean_dec(v___y_383_);
lean_dec_ref(v___y_382_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec_ref(v___f_373_);
return v___x_385_;
}
}
else
{
uint8_t v_done_405_; 
v_done_405_ = lean_ctor_get_uint8(v_a_386_, sizeof(void*)*2);
if (v_done_405_ == 0)
{
lean_object* v_e_x27_406_; lean_object* v_proof_407_; uint8_t v_contextDependent_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_458_; 
lean_dec_ref_known(v___x_385_, 1);
v_e_x27_406_ = lean_ctor_get(v_a_386_, 0);
v_proof_407_ = lean_ctor_get(v_a_386_, 1);
v_contextDependent_408_ = lean_ctor_get_uint8(v_a_386_, sizeof(void*)*2 + 1);
v_isSharedCheck_458_ = !lean_is_exclusive(v_a_386_);
if (v_isSharedCheck_458_ == 0)
{
v___x_410_ = v_a_386_;
v_isShared_411_ = v_isSharedCheck_458_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_proof_407_);
lean_inc(v_e_x27_406_);
lean_dec(v_a_386_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_458_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_412_; 
lean_inc(v___y_383_);
lean_inc_ref(v___y_382_);
lean_inc(v___y_381_);
lean_inc_ref(v___y_380_);
lean_inc(v___y_379_);
lean_inc_ref(v_e_x27_406_);
v___x_412_ = lean_apply_12(v___f_373_, v___x_387_, v_e_x27_406_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, lean_box(0));
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_457_; 
v_a_413_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_457_ == 0)
{
v___x_415_ = v___x_412_;
v_isShared_416_ = v_isSharedCheck_457_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v___x_412_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_457_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
if (lean_obj_tag(v_a_413_) == 0)
{
uint8_t v_done_417_; uint8_t v_contextDependent_418_; uint8_t v___y_420_; 
lean_dec(v___y_383_);
lean_dec_ref(v___y_382_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_374_);
v_done_417_ = lean_ctor_get_uint8(v_a_413_, 0);
v_contextDependent_418_ = lean_ctor_get_uint8(v_a_413_, 1);
lean_dec_ref_known(v_a_413_, 0);
if (v_contextDependent_408_ == 0)
{
v___y_420_ = v_contextDependent_418_;
goto v___jp_419_;
}
else
{
v___y_420_ = v_contextDependent_408_;
goto v___jp_419_;
}
v___jp_419_:
{
lean_object* v___x_422_; 
if (v_isShared_411_ == 0)
{
v___x_422_ = v___x_410_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_e_x27_406_);
lean_ctor_set(v_reuseFailAlloc_426_, 1, v_proof_407_);
v___x_422_ = v_reuseFailAlloc_426_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
lean_object* v___x_424_; 
lean_ctor_set_uint8(v___x_422_, sizeof(void*)*2, v_done_417_);
lean_ctor_set_uint8(v___x_422_, sizeof(void*)*2 + 1, v___y_420_);
if (v_isShared_416_ == 0)
{
lean_ctor_set(v___x_415_, 0, v___x_422_);
v___x_424_ = v___x_415_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v___x_422_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
}
}
else
{
lean_object* v_e_x27_427_; lean_object* v_proof_428_; uint8_t v_done_429_; uint8_t v_contextDependent_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_456_; 
lean_del_object(v___x_415_);
lean_del_object(v___x_410_);
v_e_x27_427_ = lean_ctor_get(v_a_413_, 0);
v_proof_428_ = lean_ctor_get(v_a_413_, 1);
v_done_429_ = lean_ctor_get_uint8(v_a_413_, sizeof(void*)*2);
v_contextDependent_430_ = lean_ctor_get_uint8(v_a_413_, sizeof(void*)*2 + 1);
v_isSharedCheck_456_ = !lean_is_exclusive(v_a_413_);
if (v_isSharedCheck_456_ == 0)
{
v___x_432_ = v_a_413_;
v_isShared_433_ = v_isSharedCheck_456_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_proof_428_);
lean_inc(v_e_x27_427_);
lean_dec(v_a_413_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_456_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_434_; 
lean_inc_ref(v_e_x27_427_);
v___x_434_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_374_, v_e_x27_406_, v_proof_407_, v_e_x27_427_, v_proof_428_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_);
lean_dec(v___y_383_);
lean_dec_ref(v___y_382_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v_a_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_447_; 
v_a_435_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_447_ == 0)
{
v___x_437_ = v___x_434_;
v_isShared_438_ = v_isSharedCheck_447_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_a_435_);
lean_dec(v___x_434_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_447_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
uint8_t v___y_440_; 
if (v_contextDependent_408_ == 0)
{
v___y_440_ = v_contextDependent_430_;
goto v___jp_439_;
}
else
{
v___y_440_ = v_contextDependent_408_;
goto v___jp_439_;
}
v___jp_439_:
{
lean_object* v___x_442_; 
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 1, v_a_435_);
v___x_442_ = v___x_432_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_e_x27_427_);
lean_ctor_set(v_reuseFailAlloc_446_, 1, v_a_435_);
lean_ctor_set_uint8(v_reuseFailAlloc_446_, sizeof(void*)*2, v_done_429_);
v___x_442_ = v_reuseFailAlloc_446_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
lean_object* v___x_444_; 
lean_ctor_set_uint8(v___x_442_, sizeof(void*)*2 + 1, v___y_440_);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 0, v___x_442_);
v___x_444_ = v___x_437_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v___x_442_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
}
}
else
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
lean_del_object(v___x_432_);
lean_dec_ref(v_e_x27_427_);
v_a_448_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v___x_434_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_434_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_410_);
lean_dec_ref(v_proof_407_);
lean_dec_ref(v_e_x27_406_);
lean_dec(v___y_383_);
lean_dec_ref(v___y_382_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_374_);
return v___x_412_;
}
}
}
else
{
lean_dec_ref_known(v_a_386_, 2);
lean_dec(v___y_383_);
lean_dec_ref(v___y_382_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec_ref(v___f_373_);
return v___x_385_;
}
}
}
else
{
lean_dec(v___y_383_);
lean_dec_ref(v___y_382_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec_ref(v___f_373_);
return v___x_385_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1___boxed(lean_object* v___f_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__1(v___f_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__2(lean_object* v_a_472_, lean_object* v___x_473_, lean_object* v_x_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_){
_start:
{
lean_object* v___x_486_; 
lean_inc_ref(v___y_475_);
v___x_486_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteSimproc(v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_a_487_);
if (lean_obj_tag(v_a_487_) == 0)
{
uint8_t v_done_488_; 
v_done_488_ = lean_ctor_get_uint8(v_a_487_, 0);
if (v_done_488_ == 0)
{
uint8_t v_contextDependent_489_; lean_object* v___x_490_; 
lean_dec_ref_known(v___x_486_, 1);
v_contextDependent_489_ = lean_ctor_get_uint8(v_a_487_, 1);
lean_dec_ref_known(v_a_487_, 0);
v___x_490_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_472_, v___x_473_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v_a_491_; uint8_t v___y_493_; 
v_a_491_ = lean_ctor_get(v___x_490_, 0);
lean_inc(v_a_491_);
if (v_contextDependent_489_ == 0)
{
lean_dec(v_a_491_);
return v___x_490_;
}
else
{
if (lean_obj_tag(v_a_491_) == 0)
{
uint8_t v_contextDependent_503_; 
v_contextDependent_503_ = lean_ctor_get_uint8(v_a_491_, 1);
v___y_493_ = v_contextDependent_503_;
goto v___jp_492_;
}
else
{
uint8_t v_contextDependent_504_; 
v_contextDependent_504_ = lean_ctor_get_uint8(v_a_491_, sizeof(void*)*2 + 1);
v___y_493_ = v_contextDependent_504_;
goto v___jp_492_;
}
}
v___jp_492_:
{
if (v___y_493_ == 0)
{
lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_501_; 
v_isSharedCheck_501_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_501_ == 0)
{
lean_object* v_unused_502_; 
v_unused_502_ = lean_ctor_get(v___x_490_, 0);
lean_dec(v_unused_502_);
v___x_495_ = v___x_490_;
v_isShared_496_ = v_isSharedCheck_501_;
goto v_resetjp_494_;
}
else
{
lean_dec(v___x_490_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_501_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_497_; lean_object* v___x_499_; 
v___x_497_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_491_);
if (v_isShared_496_ == 0)
{
lean_ctor_set(v___x_495_, 0, v___x_497_);
v___x_499_ = v___x_495_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v___x_497_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
else
{
lean_dec(v_a_491_);
return v___x_490_;
}
}
}
else
{
return v___x_490_;
}
}
else
{
lean_dec_ref_known(v_a_487_, 0);
lean_dec_ref(v___y_475_);
lean_dec_ref(v___x_473_);
return v___x_486_;
}
}
else
{
uint8_t v_done_505_; 
v_done_505_ = lean_ctor_get_uint8(v_a_487_, sizeof(void*)*2);
if (v_done_505_ == 0)
{
lean_object* v_e_x27_506_; lean_object* v_proof_507_; uint8_t v_contextDependent_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_558_; 
lean_dec_ref_known(v___x_486_, 1);
v_e_x27_506_ = lean_ctor_get(v_a_487_, 0);
v_proof_507_ = lean_ctor_get(v_a_487_, 1);
v_contextDependent_508_ = lean_ctor_get_uint8(v_a_487_, sizeof(void*)*2 + 1);
v_isSharedCheck_558_ = !lean_is_exclusive(v_a_487_);
if (v_isSharedCheck_558_ == 0)
{
v___x_510_ = v_a_487_;
v_isShared_511_ = v_isSharedCheck_558_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_proof_507_);
lean_inc(v_e_x27_506_);
lean_dec(v_a_487_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_558_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_512_; 
lean_inc_ref(v_e_x27_506_);
v___x_512_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_472_, v___x_473_, v_e_x27_506_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v_a_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_557_; 
v_a_513_ = lean_ctor_get(v___x_512_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_557_ == 0)
{
v___x_515_ = v___x_512_;
v_isShared_516_ = v_isSharedCheck_557_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_a_513_);
lean_dec(v___x_512_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_557_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
if (lean_obj_tag(v_a_513_) == 0)
{
uint8_t v_done_517_; uint8_t v_contextDependent_518_; uint8_t v___y_520_; 
lean_dec_ref(v___y_475_);
v_done_517_ = lean_ctor_get_uint8(v_a_513_, 0);
v_contextDependent_518_ = lean_ctor_get_uint8(v_a_513_, 1);
lean_dec_ref_known(v_a_513_, 0);
if (v_contextDependent_508_ == 0)
{
v___y_520_ = v_contextDependent_518_;
goto v___jp_519_;
}
else
{
v___y_520_ = v_contextDependent_508_;
goto v___jp_519_;
}
v___jp_519_:
{
lean_object* v___x_522_; 
if (v_isShared_511_ == 0)
{
v___x_522_ = v___x_510_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_e_x27_506_);
lean_ctor_set(v_reuseFailAlloc_526_, 1, v_proof_507_);
v___x_522_ = v_reuseFailAlloc_526_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
lean_object* v___x_524_; 
lean_ctor_set_uint8(v___x_522_, sizeof(void*)*2, v_done_517_);
lean_ctor_set_uint8(v___x_522_, sizeof(void*)*2 + 1, v___y_520_);
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 0, v___x_522_);
v___x_524_ = v___x_515_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_522_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
}
else
{
lean_object* v_e_x27_527_; lean_object* v_proof_528_; uint8_t v_done_529_; uint8_t v_contextDependent_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_556_; 
lean_del_object(v___x_515_);
lean_del_object(v___x_510_);
v_e_x27_527_ = lean_ctor_get(v_a_513_, 0);
v_proof_528_ = lean_ctor_get(v_a_513_, 1);
v_done_529_ = lean_ctor_get_uint8(v_a_513_, sizeof(void*)*2);
v_contextDependent_530_ = lean_ctor_get_uint8(v_a_513_, sizeof(void*)*2 + 1);
v_isSharedCheck_556_ = !lean_is_exclusive(v_a_513_);
if (v_isSharedCheck_556_ == 0)
{
v___x_532_ = v_a_513_;
v_isShared_533_ = v_isSharedCheck_556_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_proof_528_);
lean_inc(v_e_x27_527_);
lean_dec(v_a_513_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_556_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___x_534_; 
lean_inc_ref(v_e_x27_527_);
v___x_534_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_475_, v_e_x27_506_, v_proof_507_, v_e_x27_527_, v_proof_528_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
if (lean_obj_tag(v___x_534_) == 0)
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_547_; 
v_a_535_ = lean_ctor_get(v___x_534_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_547_ == 0)
{
v___x_537_ = v___x_534_;
v_isShared_538_ = v_isSharedCheck_547_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_534_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_547_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
uint8_t v___y_540_; 
if (v_contextDependent_508_ == 0)
{
v___y_540_ = v_contextDependent_530_;
goto v___jp_539_;
}
else
{
v___y_540_ = v_contextDependent_508_;
goto v___jp_539_;
}
v___jp_539_:
{
lean_object* v___x_542_; 
if (v_isShared_533_ == 0)
{
lean_ctor_set(v___x_532_, 1, v_a_535_);
v___x_542_ = v___x_532_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_e_x27_527_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v_a_535_);
lean_ctor_set_uint8(v_reuseFailAlloc_546_, sizeof(void*)*2, v_done_529_);
v___x_542_ = v_reuseFailAlloc_546_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
lean_object* v___x_544_; 
lean_ctor_set_uint8(v___x_542_, sizeof(void*)*2 + 1, v___y_540_);
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 0, v___x_542_);
v___x_544_ = v___x_537_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v___x_542_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
}
}
else
{
lean_object* v_a_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_555_; 
lean_del_object(v___x_532_);
lean_dec_ref(v_e_x27_527_);
v_a_548_ = lean_ctor_get(v___x_534_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_555_ == 0)
{
v___x_550_ = v___x_534_;
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_a_548_);
lean_dec(v___x_534_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_553_; 
if (v_isShared_551_ == 0)
{
v___x_553_ = v___x_550_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_a_548_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_510_);
lean_dec_ref(v_proof_507_);
lean_dec_ref(v_e_x27_506_);
lean_dec_ref(v___y_475_);
return v___x_512_;
}
}
}
else
{
lean_dec_ref_known(v_a_487_, 2);
lean_dec_ref(v___y_475_);
lean_dec_ref(v___x_473_);
return v___x_486_;
}
}
}
else
{
lean_dec_ref(v___y_475_);
lean_dec_ref(v___x_473_);
return v___x_486_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__2___boxed(lean_object* v_a_559_, lean_object* v___x_560_, lean_object* v_x_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__2(v_a_559_, v___x_560_, v_x_561_, v___y_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_568_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
lean_dec(v___y_563_);
lean_dec_ref(v_a_559_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__3(lean_object* v___x_574_, lean_object* v___f_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_){
_start:
{
lean_object* v___x_587_; 
lean_inc_ref(v___y_576_);
v___x_587_ = l_Lean_Meta_Sym_Simp_evalGround___redArg(v___x_574_, v___y_576_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v___x_589_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_a_588_);
v___x_589_ = lean_box(0);
if (lean_obj_tag(v_a_588_) == 0)
{
uint8_t v_done_590_; 
v_done_590_ = lean_ctor_get_uint8(v_a_588_, 0);
if (v_done_590_ == 0)
{
uint8_t v_contextDependent_591_; lean_object* v___x_592_; 
lean_dec_ref_known(v___x_587_, 1);
v_contextDependent_591_ = lean_ctor_get_uint8(v_a_588_, 1);
lean_dec_ref_known(v_a_588_, 0);
v___x_592_ = lean_apply_12(v___f_575_, v___x_589_, v___y_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, lean_box(0));
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; uint8_t v___y_595_; 
v_a_593_ = lean_ctor_get(v___x_592_, 0);
lean_inc(v_a_593_);
if (v_contextDependent_591_ == 0)
{
lean_dec(v_a_593_);
return v___x_592_;
}
else
{
if (lean_obj_tag(v_a_593_) == 0)
{
uint8_t v_contextDependent_605_; 
v_contextDependent_605_ = lean_ctor_get_uint8(v_a_593_, 1);
v___y_595_ = v_contextDependent_605_;
goto v___jp_594_;
}
else
{
uint8_t v_contextDependent_606_; 
v_contextDependent_606_ = lean_ctor_get_uint8(v_a_593_, sizeof(void*)*2 + 1);
v___y_595_ = v_contextDependent_606_;
goto v___jp_594_;
}
}
v___jp_594_:
{
if (v___y_595_ == 0)
{
lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_603_; 
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_603_ == 0)
{
lean_object* v_unused_604_; 
v_unused_604_ = lean_ctor_get(v___x_592_, 0);
lean_dec(v_unused_604_);
v___x_597_ = v___x_592_;
v_isShared_598_ = v_isSharedCheck_603_;
goto v_resetjp_596_;
}
else
{
lean_dec(v___x_592_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_603_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v___x_599_; lean_object* v___x_601_; 
v___x_599_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_593_);
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 0, v___x_599_);
v___x_601_ = v___x_597_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v___x_599_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
}
else
{
lean_dec(v_a_593_);
return v___x_592_;
}
}
}
else
{
return v___x_592_;
}
}
else
{
lean_dec_ref_known(v_a_588_, 0);
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
lean_dec(v___y_583_);
lean_dec_ref(v___y_582_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
lean_dec(v___y_577_);
lean_dec_ref(v___y_576_);
lean_dec_ref(v___f_575_);
return v___x_587_;
}
}
else
{
uint8_t v_done_607_; 
v_done_607_ = lean_ctor_get_uint8(v_a_588_, sizeof(void*)*2);
if (v_done_607_ == 0)
{
lean_object* v_e_x27_608_; lean_object* v_proof_609_; uint8_t v_contextDependent_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_660_; 
lean_dec_ref_known(v___x_587_, 1);
v_e_x27_608_ = lean_ctor_get(v_a_588_, 0);
v_proof_609_ = lean_ctor_get(v_a_588_, 1);
v_contextDependent_610_ = lean_ctor_get_uint8(v_a_588_, sizeof(void*)*2 + 1);
v_isSharedCheck_660_ = !lean_is_exclusive(v_a_588_);
if (v_isSharedCheck_660_ == 0)
{
v___x_612_ = v_a_588_;
v_isShared_613_ = v_isSharedCheck_660_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_proof_609_);
lean_inc(v_e_x27_608_);
lean_dec(v_a_588_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_660_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_614_; 
lean_inc(v___y_585_);
lean_inc_ref(v___y_584_);
lean_inc(v___y_583_);
lean_inc_ref(v___y_582_);
lean_inc(v___y_581_);
lean_inc_ref(v_e_x27_608_);
v___x_614_ = lean_apply_12(v___f_575_, v___x_589_, v_e_x27_608_, v___y_577_, v___y_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, lean_box(0));
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_659_; 
v_a_615_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_659_ == 0)
{
v___x_617_ = v___x_614_;
v_isShared_618_ = v_isSharedCheck_659_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_614_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_659_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
if (lean_obj_tag(v_a_615_) == 0)
{
uint8_t v_done_619_; uint8_t v_contextDependent_620_; uint8_t v___y_622_; 
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
lean_dec(v___y_583_);
lean_dec_ref(v___y_582_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_576_);
v_done_619_ = lean_ctor_get_uint8(v_a_615_, 0);
v_contextDependent_620_ = lean_ctor_get_uint8(v_a_615_, 1);
lean_dec_ref_known(v_a_615_, 0);
if (v_contextDependent_610_ == 0)
{
v___y_622_ = v_contextDependent_620_;
goto v___jp_621_;
}
else
{
v___y_622_ = v_contextDependent_610_;
goto v___jp_621_;
}
v___jp_621_:
{
lean_object* v___x_624_; 
if (v_isShared_613_ == 0)
{
v___x_624_ = v___x_612_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_e_x27_608_);
lean_ctor_set(v_reuseFailAlloc_628_, 1, v_proof_609_);
v___x_624_ = v_reuseFailAlloc_628_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
lean_object* v___x_626_; 
lean_ctor_set_uint8(v___x_624_, sizeof(void*)*2, v_done_619_);
lean_ctor_set_uint8(v___x_624_, sizeof(void*)*2 + 1, v___y_622_);
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 0, v___x_624_);
v___x_626_ = v___x_617_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v___x_624_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
}
else
{
lean_object* v_e_x27_629_; lean_object* v_proof_630_; uint8_t v_done_631_; uint8_t v_contextDependent_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_658_; 
lean_del_object(v___x_617_);
lean_del_object(v___x_612_);
v_e_x27_629_ = lean_ctor_get(v_a_615_, 0);
v_proof_630_ = lean_ctor_get(v_a_615_, 1);
v_done_631_ = lean_ctor_get_uint8(v_a_615_, sizeof(void*)*2);
v_contextDependent_632_ = lean_ctor_get_uint8(v_a_615_, sizeof(void*)*2 + 1);
v_isSharedCheck_658_ = !lean_is_exclusive(v_a_615_);
if (v_isSharedCheck_658_ == 0)
{
v___x_634_ = v_a_615_;
v_isShared_635_ = v_isSharedCheck_658_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_proof_630_);
lean_inc(v_e_x27_629_);
lean_dec(v_a_615_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_658_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_636_; 
lean_inc_ref(v_e_x27_629_);
v___x_636_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_576_, v_e_x27_608_, v_proof_609_, v_e_x27_629_, v_proof_630_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_);
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
lean_dec(v___y_583_);
lean_dec_ref(v___y_582_);
lean_dec(v___y_581_);
if (lean_obj_tag(v___x_636_) == 0)
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_649_; 
v_a_637_ = lean_ctor_get(v___x_636_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_636_);
if (v_isSharedCheck_649_ == 0)
{
v___x_639_ = v___x_636_;
v_isShared_640_ = v_isSharedCheck_649_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___x_636_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_649_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
uint8_t v___y_642_; 
if (v_contextDependent_610_ == 0)
{
v___y_642_ = v_contextDependent_632_;
goto v___jp_641_;
}
else
{
v___y_642_ = v_contextDependent_610_;
goto v___jp_641_;
}
v___jp_641_:
{
lean_object* v___x_644_; 
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 1, v_a_637_);
v___x_644_ = v___x_634_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_e_x27_629_);
lean_ctor_set(v_reuseFailAlloc_648_, 1, v_a_637_);
lean_ctor_set_uint8(v_reuseFailAlloc_648_, sizeof(void*)*2, v_done_631_);
v___x_644_ = v_reuseFailAlloc_648_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
lean_object* v___x_646_; 
lean_ctor_set_uint8(v___x_644_, sizeof(void*)*2 + 1, v___y_642_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 0, v___x_644_);
v___x_646_ = v___x_639_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v___x_644_);
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
else
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
lean_del_object(v___x_634_);
lean_dec_ref(v_e_x27_629_);
v_a_650_ = lean_ctor_get(v___x_636_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_636_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_636_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_636_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_612_);
lean_dec_ref(v_proof_609_);
lean_dec_ref(v_e_x27_608_);
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
lean_dec(v___y_583_);
lean_dec_ref(v___y_582_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_576_);
return v___x_614_;
}
}
}
else
{
lean_dec_ref_known(v_a_588_, 2);
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
lean_dec(v___y_583_);
lean_dec_ref(v___y_582_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
lean_dec(v___y_577_);
lean_dec_ref(v___y_576_);
lean_dec_ref(v___f_575_);
return v___x_587_;
}
}
}
else
{
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
lean_dec(v___y_583_);
lean_dec_ref(v___y_582_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
lean_dec(v___y_577_);
lean_dec_ref(v___y_576_);
lean_dec_ref(v___f_575_);
return v___x_587_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__3___boxed(lean_object* v___x_661_, lean_object* v___f_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__3(v___x_661_, v___f_662_, v___y_663_, v___y_664_, v___y_665_, v___y_666_, v___y_667_, v___y_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_);
lean_dec(v___x_661_);
return v_res_674_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__3(void){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_680_ = lean_unsigned_to_nat(0u);
v___x_681_ = l_Lean_Level_ofNat(v___x_680_);
return v___x_681_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__4(void){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_682_ = lean_box(0);
v___x_683_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__3);
v___x_684_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_684_, 0, v___x_683_);
lean_ctor_set(v___x_684_, 1, v___x_682_);
return v___x_684_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__5(void){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_685_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__4);
v___x_686_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__2));
v___x_687_ = l_Lean_mkConst(v___x_686_, v___x_685_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1(lean_object* v_as_691_, size_t v_sz_692_, size_t v_i_693_, lean_object* v_b_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_){
_start:
{
lean_object* v_a_706_; uint8_t v___x_710_; 
v___x_710_ = lean_usize_dec_lt(v_i_693_, v_sz_692_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; 
v___x_711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_711_, 0, v_b_694_);
return v___x_711_;
}
else
{
lean_object* v_a_712_; lean_object* v___x_713_; 
v_a_712_ = lean_array_uget_borrowed(v_as_691_, v_i_693_);
lean_inc(v_a_712_);
v___x_713_ = l_Lean_FVarId_getType___redArg(v_a_712_, v___y_700_, v___y_702_, v___y_703_);
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v_a_714_; lean_object* v___x_715_; 
v_a_714_ = lean_ctor_get(v___x_713_, 0);
lean_inc_n(v_a_714_, 2);
lean_dec_ref_known(v___x_713_, 1);
lean_inc(v___y_703_);
lean_inc_ref(v___y_702_);
lean_inc(v___y_701_);
lean_inc_ref(v___y_700_);
lean_inc(v___y_699_);
lean_inc_ref(v___y_698_);
lean_inc(v___y_697_);
lean_inc_ref(v___y_696_);
lean_inc(v___y_695_);
v___x_715_ = lean_sym_simp(v_a_714_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v_a_716_; 
v_a_716_ = lean_ctor_get(v___x_715_, 0);
lean_inc(v_a_716_);
lean_dec_ref_known(v___x_715_, 1);
if (lean_obj_tag(v_a_716_) == 0)
{
lean_object* v_fst_717_; lean_object* v_snd_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_726_; 
lean_dec_ref_known(v_a_716_, 0);
lean_dec(v_a_714_);
v_fst_717_ = lean_ctor_get(v_b_694_, 0);
v_snd_718_ = lean_ctor_get(v_b_694_, 1);
v_isSharedCheck_726_ = !lean_is_exclusive(v_b_694_);
if (v_isSharedCheck_726_ == 0)
{
v___x_720_ = v_b_694_;
v_isShared_721_ = v_isSharedCheck_726_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_snd_718_);
lean_inc(v_fst_717_);
lean_dec(v_b_694_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_726_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_722_; lean_object* v___x_724_; 
lean_inc(v_a_712_);
v___x_722_ = lean_array_push(v_snd_718_, v_a_712_);
if (v_isShared_721_ == 0)
{
lean_ctor_set(v___x_720_, 1, v___x_722_);
v___x_724_ = v___x_720_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_fst_717_);
lean_ctor_set(v_reuseFailAlloc_725_, 1, v___x_722_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
v_a_706_ = v___x_724_;
goto v___jp_705_;
}
}
}
else
{
lean_object* v_fst_727_; lean_object* v_snd_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_776_; 
v_fst_727_ = lean_ctor_get(v_b_694_, 0);
v_snd_728_ = lean_ctor_get(v_b_694_, 1);
v_isSharedCheck_776_ = !lean_is_exclusive(v_b_694_);
if (v_isSharedCheck_776_ == 0)
{
v___x_730_ = v_b_694_;
v_isShared_731_ = v_isSharedCheck_776_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_snd_728_);
lean_inc(v_fst_727_);
lean_dec(v_b_694_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_776_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v_e_x27_732_; lean_object* v_proof_733_; lean_object* v___x_734_; 
v_e_x27_732_ = lean_ctor_get(v_a_716_, 0);
lean_inc_ref(v_e_x27_732_);
v_proof_733_ = lean_ctor_get(v_a_716_, 1);
lean_inc_ref(v_proof_733_);
lean_dec_ref_known(v_a_716_, 2);
lean_inc(v_a_712_);
v___x_734_ = l_Lean_FVarId_getUserName___redArg(v_a_712_, v___y_700_, v___y_702_, v___y_703_);
if (lean_obj_tag(v___x_734_) == 0)
{
lean_object* v_a_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
v_a_735_ = lean_ctor_get(v___x_734_, 0);
lean_inc(v_a_735_);
lean_dec_ref_known(v___x_734_, 1);
v___x_736_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__5);
lean_inc(v_a_712_);
v___x_737_ = l_Lean_mkFVar(v_a_712_);
lean_inc_ref(v_e_x27_732_);
v___x_738_ = l_Lean_mkApp4(v___x_736_, v_a_714_, v_e_x27_732_, v_proof_733_, v___x_737_);
v___x_739_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_738_, v___y_699_);
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_759_; 
v_a_740_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_759_ == 0)
{
v___x_742_ = v___x_739_;
v_isShared_743_ = v_isSharedCheck_759_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_739_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_759_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
uint8_t v___x_744_; uint8_t v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; uint8_t v___x_749_; 
v___x_744_ = 0;
v___x_745_ = 0;
lean_inc_ref(v_e_x27_732_);
v___x_746_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_746_, 0, v_a_735_);
lean_ctor_set(v___x_746_, 1, v_e_x27_732_);
lean_ctor_set(v___x_746_, 2, v_a_740_);
lean_ctor_set_uint8(v___x_746_, sizeof(void*)*3, v___x_744_);
lean_ctor_set_uint8(v___x_746_, sizeof(void*)*3 + 1, v___x_745_);
v___x_747_ = lean_array_push(v_fst_727_, v___x_746_);
v___x_748_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__7));
v___x_749_ = l_Lean_Expr_isConstOf(v_e_x27_732_, v___x_748_);
lean_dec_ref(v_e_x27_732_);
if (v___x_749_ == 0)
{
lean_object* v___x_751_; 
lean_del_object(v___x_742_);
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 0, v___x_747_);
v___x_751_ = v___x_730_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v___x_747_);
lean_ctor_set(v_reuseFailAlloc_752_, 1, v_snd_728_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
v_a_706_ = v___x_751_;
goto v___jp_705_;
}
}
else
{
lean_object* v___x_754_; 
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 0, v___x_747_);
v___x_754_ = v___x_730_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v___x_747_);
lean_ctor_set(v_reuseFailAlloc_758_, 1, v_snd_728_);
v___x_754_ = v_reuseFailAlloc_758_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
lean_object* v___x_756_; 
if (v_isShared_743_ == 0)
{
lean_ctor_set(v___x_742_, 0, v___x_754_);
v___x_756_ = v___x_742_;
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
}
else
{
lean_object* v_a_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_767_; 
lean_dec(v_a_735_);
lean_dec_ref(v_e_x27_732_);
lean_del_object(v___x_730_);
lean_dec(v_snd_728_);
lean_dec(v_fst_727_);
v_a_760_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_767_ == 0)
{
v___x_762_ = v___x_739_;
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_a_760_);
lean_dec(v___x_739_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v___x_765_; 
if (v_isShared_763_ == 0)
{
v___x_765_ = v___x_762_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_a_760_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
return v___x_765_;
}
}
}
}
else
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_775_; 
lean_dec_ref(v_proof_733_);
lean_dec_ref(v_e_x27_732_);
lean_del_object(v___x_730_);
lean_dec(v_snd_728_);
lean_dec(v_fst_727_);
lean_dec(v_a_714_);
v_a_768_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_775_ == 0)
{
v___x_770_ = v___x_734_;
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_734_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_773_; 
if (v_isShared_771_ == 0)
{
v___x_773_ = v___x_770_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_a_768_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
}
}
}
}
else
{
lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_784_; 
lean_dec(v_a_714_);
lean_dec_ref(v_b_694_);
v_a_777_ = lean_ctor_get(v___x_715_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_784_ == 0)
{
v___x_779_ = v___x_715_;
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v___x_715_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_782_; 
if (v_isShared_780_ == 0)
{
v___x_782_ = v___x_779_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_a_777_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
}
}
else
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_792_; 
lean_dec_ref(v_b_694_);
v_a_785_ = lean_ctor_get(v___x_713_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_792_ == 0)
{
v___x_787_ = v___x_713_;
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_713_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_790_; 
if (v_isShared_788_ == 0)
{
v___x_790_ = v___x_787_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_785_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
}
v___jp_705_:
{
size_t v___x_707_; size_t v___x_708_; 
v___x_707_ = ((size_t)1ULL);
v___x_708_ = lean_usize_add(v_i_693_, v___x_707_);
v_i_693_ = v___x_708_;
v_b_694_ = v_a_706_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___boxed(lean_object* v_as_793_, lean_object* v_sz_794_, lean_object* v_i_795_, lean_object* v_b_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
size_t v_sz_boxed_807_; size_t v_i_boxed_808_; lean_object* v_res_809_; 
v_sz_boxed_807_ = lean_unbox_usize(v_sz_794_);
lean_dec(v_sz_794_);
v_i_boxed_808_ = lean_unbox_usize(v_i_795_);
lean_dec(v_i_795_);
v_res_809_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1(v_as_793_, v_sz_boxed_807_, v_i_boxed_808_, v_b_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_);
lean_dec(v___y_805_);
lean_dec_ref(v___y_804_);
lean_dec(v___y_803_);
lean_dec_ref(v___y_802_);
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
lean_dec(v___y_797_);
lean_dec_ref(v_as_793_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__4(lean_object* v_a_810_, size_t v_sz_811_, size_t v___x_812_, lean_object* v___x_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1(v_a_810_, v_sz_811_, v___x_812_, v___x_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_841_; 
v_a_825_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_841_ == 0)
{
v___x_827_ = v___x_824_;
v_isShared_828_ = v_isSharedCheck_841_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_a_825_);
lean_dec(v___x_824_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_841_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v_fst_829_; lean_object* v_snd_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_840_; 
v_fst_829_ = lean_ctor_get(v_a_825_, 0);
v_snd_830_ = lean_ctor_get(v_a_825_, 1);
v_isSharedCheck_840_ = !lean_is_exclusive(v_a_825_);
if (v_isSharedCheck_840_ == 0)
{
v___x_832_ = v_a_825_;
v_isShared_833_ = v_isSharedCheck_840_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_snd_830_);
lean_inc(v_fst_829_);
lean_dec(v_a_825_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_840_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_835_; 
if (v_isShared_833_ == 0)
{
lean_ctor_set(v___x_832_, 1, v_fst_829_);
lean_ctor_set(v___x_832_, 0, v_snd_830_);
v___x_835_ = v___x_832_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_snd_830_);
lean_ctor_set(v_reuseFailAlloc_839_, 1, v_fst_829_);
v___x_835_ = v_reuseFailAlloc_839_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
lean_object* v___x_837_; 
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v___x_835_);
v___x_837_ = v___x_827_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v___x_835_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
return v___x_837_;
}
}
}
}
}
else
{
lean_object* v_a_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_849_; 
v_a_842_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_849_ == 0)
{
v___x_844_ = v___x_824_;
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_a_842_);
lean_dec(v___x_824_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_847_; 
if (v_isShared_845_ == 0)
{
v___x_847_ = v___x_844_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_a_842_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__4___boxed(lean_object* v_a_850_, lean_object* v_sz_851_, lean_object* v___x_852_, lean_object* v___x_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_){
_start:
{
size_t v_sz_boxed_864_; size_t v___x_49373__boxed_865_; lean_object* v_res_866_; 
v_sz_boxed_864_ = lean_unbox_usize(v_sz_851_);
lean_dec(v_sz_851_);
v___x_49373__boxed_865_ = lean_unbox_usize(v___x_852_);
lean_dec(v___x_852_);
v_res_866_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__4(v_a_850_, v_sz_boxed_864_, v___x_49373__boxed_865_, v___x_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec(v___y_858_);
lean_dec_ref(v___y_857_);
lean_dec(v___y_856_);
lean_dec_ref(v___y_855_);
lean_dec(v___y_854_);
lean_dec_ref(v_a_850_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__2_spec__6___redArg(lean_object* v_x_867_, lean_object* v_x_868_){
_start:
{
if (lean_obj_tag(v_x_868_) == 0)
{
return v_x_867_;
}
else
{
lean_object* v_key_869_; lean_object* v_value_870_; lean_object* v_tail_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_894_; 
v_key_869_ = lean_ctor_get(v_x_868_, 0);
v_value_870_ = lean_ctor_get(v_x_868_, 1);
v_tail_871_ = lean_ctor_get(v_x_868_, 2);
v_isSharedCheck_894_ = !lean_is_exclusive(v_x_868_);
if (v_isSharedCheck_894_ == 0)
{
v___x_873_ = v_x_868_;
v_isShared_874_ = v_isSharedCheck_894_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_tail_871_);
lean_inc(v_value_870_);
lean_inc(v_key_869_);
lean_dec(v_x_868_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_894_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_875_; uint64_t v___x_876_; uint64_t v___x_877_; uint64_t v___x_878_; uint64_t v_fold_879_; uint64_t v___x_880_; uint64_t v___x_881_; uint64_t v___x_882_; size_t v___x_883_; size_t v___x_884_; size_t v___x_885_; size_t v___x_886_; size_t v___x_887_; lean_object* v___x_888_; lean_object* v___x_890_; 
v___x_875_ = lean_array_get_size(v_x_867_);
v___x_876_ = l_Lean_instHashableFVarId_hash(v_key_869_);
v___x_877_ = 32ULL;
v___x_878_ = lean_uint64_shift_right(v___x_876_, v___x_877_);
v_fold_879_ = lean_uint64_xor(v___x_876_, v___x_878_);
v___x_880_ = 16ULL;
v___x_881_ = lean_uint64_shift_right(v_fold_879_, v___x_880_);
v___x_882_ = lean_uint64_xor(v_fold_879_, v___x_881_);
v___x_883_ = lean_uint64_to_usize(v___x_882_);
v___x_884_ = lean_usize_of_nat(v___x_875_);
v___x_885_ = ((size_t)1ULL);
v___x_886_ = lean_usize_sub(v___x_884_, v___x_885_);
v___x_887_ = lean_usize_land(v___x_883_, v___x_886_);
v___x_888_ = lean_array_uget_borrowed(v_x_867_, v___x_887_);
lean_inc(v___x_888_);
if (v_isShared_874_ == 0)
{
lean_ctor_set(v___x_873_, 2, v___x_888_);
v___x_890_ = v___x_873_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_key_869_);
lean_ctor_set(v_reuseFailAlloc_893_, 1, v_value_870_);
lean_ctor_set(v_reuseFailAlloc_893_, 2, v___x_888_);
v___x_890_ = v_reuseFailAlloc_893_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
lean_object* v___x_891_; 
v___x_891_ = lean_array_uset(v_x_867_, v___x_887_, v___x_890_);
v_x_867_ = v___x_891_;
v_x_868_ = v_tail_871_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__2___redArg(lean_object* v_i_895_, lean_object* v_source_896_, lean_object* v_target_897_){
_start:
{
lean_object* v___x_898_; uint8_t v___x_899_; 
v___x_898_ = lean_array_get_size(v_source_896_);
v___x_899_ = lean_nat_dec_lt(v_i_895_, v___x_898_);
if (v___x_899_ == 0)
{
lean_dec_ref(v_source_896_);
lean_dec(v_i_895_);
return v_target_897_;
}
else
{
lean_object* v_es_900_; lean_object* v___x_901_; lean_object* v_source_902_; lean_object* v_target_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v_es_900_ = lean_array_fget(v_source_896_, v_i_895_);
v___x_901_ = lean_box(0);
v_source_902_ = lean_array_fset(v_source_896_, v_i_895_, v___x_901_);
v_target_903_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__2_spec__6___redArg(v_target_897_, v_es_900_);
v___x_904_ = lean_unsigned_to_nat(1u);
v___x_905_ = lean_nat_add(v_i_895_, v___x_904_);
lean_dec(v_i_895_);
v_i_895_ = v___x_905_;
v_source_896_ = v_source_902_;
v_target_897_ = v_target_903_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0___redArg(lean_object* v_data_907_){
_start:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v_nbuckets_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_908_ = lean_array_get_size(v_data_907_);
v___x_909_ = lean_unsigned_to_nat(2u);
v_nbuckets_910_ = lean_nat_mul(v___x_908_, v___x_909_);
v___x_911_ = lean_unsigned_to_nat(0u);
v___x_912_ = lean_box(0);
v___x_913_ = lean_mk_array(v_nbuckets_910_, v___x_912_);
v___x_914_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__2___redArg(v___x_911_, v_data_907_, v___x_913_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0___redArg(lean_object* v_m_915_, lean_object* v_a_916_, lean_object* v_b_917_){
_start:
{
lean_object* v_size_918_; lean_object* v_buckets_919_; lean_object* v___x_920_; uint64_t v___x_921_; uint64_t v___x_922_; uint64_t v___x_923_; uint64_t v_fold_924_; uint64_t v___x_925_; uint64_t v___x_926_; uint64_t v___x_927_; size_t v___x_928_; size_t v___x_929_; size_t v___x_930_; size_t v___x_931_; size_t v___x_932_; lean_object* v_bkt_933_; uint8_t v___x_934_; 
v_size_918_ = lean_ctor_get(v_m_915_, 0);
v_buckets_919_ = lean_ctor_get(v_m_915_, 1);
v___x_920_ = lean_array_get_size(v_buckets_919_);
v___x_921_ = l_Lean_instHashableFVarId_hash(v_a_916_);
v___x_922_ = 32ULL;
v___x_923_ = lean_uint64_shift_right(v___x_921_, v___x_922_);
v_fold_924_ = lean_uint64_xor(v___x_921_, v___x_923_);
v___x_925_ = 16ULL;
v___x_926_ = lean_uint64_shift_right(v_fold_924_, v___x_925_);
v___x_927_ = lean_uint64_xor(v_fold_924_, v___x_926_);
v___x_928_ = lean_uint64_to_usize(v___x_927_);
v___x_929_ = lean_usize_of_nat(v___x_920_);
v___x_930_ = ((size_t)1ULL);
v___x_931_ = lean_usize_sub(v___x_929_, v___x_930_);
v___x_932_ = lean_usize_land(v___x_928_, v___x_931_);
v_bkt_933_ = lean_array_uget_borrowed(v_buckets_919_, v___x_932_);
v___x_934_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__0_spec__0___redArg(v_a_916_, v_bkt_933_);
if (v___x_934_ == 0)
{
lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_955_; 
lean_inc_ref(v_buckets_919_);
lean_inc(v_size_918_);
v_isSharedCheck_955_ = !lean_is_exclusive(v_m_915_);
if (v_isSharedCheck_955_ == 0)
{
lean_object* v_unused_956_; lean_object* v_unused_957_; 
v_unused_956_ = lean_ctor_get(v_m_915_, 1);
lean_dec(v_unused_956_);
v_unused_957_ = lean_ctor_get(v_m_915_, 0);
lean_dec(v_unused_957_);
v___x_936_ = v_m_915_;
v_isShared_937_ = v_isSharedCheck_955_;
goto v_resetjp_935_;
}
else
{
lean_dec(v_m_915_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_955_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_938_; lean_object* v_size_x27_939_; lean_object* v___x_940_; lean_object* v_buckets_x27_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; uint8_t v___x_947_; 
v___x_938_ = lean_unsigned_to_nat(1u);
v_size_x27_939_ = lean_nat_add(v_size_918_, v___x_938_);
lean_dec(v_size_918_);
lean_inc(v_bkt_933_);
v___x_940_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_940_, 0, v_a_916_);
lean_ctor_set(v___x_940_, 1, v_b_917_);
lean_ctor_set(v___x_940_, 2, v_bkt_933_);
v_buckets_x27_941_ = lean_array_uset(v_buckets_919_, v___x_932_, v___x_940_);
v___x_942_ = lean_unsigned_to_nat(4u);
v___x_943_ = lean_nat_mul(v_size_x27_939_, v___x_942_);
v___x_944_ = lean_unsigned_to_nat(3u);
v___x_945_ = lean_nat_div(v___x_943_, v___x_944_);
lean_dec(v___x_943_);
v___x_946_ = lean_array_get_size(v_buckets_x27_941_);
v___x_947_ = lean_nat_dec_le(v___x_945_, v___x_946_);
lean_dec(v___x_945_);
if (v___x_947_ == 0)
{
lean_object* v_val_948_; lean_object* v___x_950_; 
v_val_948_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0___redArg(v_buckets_x27_941_);
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 1, v_val_948_);
lean_ctor_set(v___x_936_, 0, v_size_x27_939_);
v___x_950_ = v___x_936_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_size_x27_939_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v_val_948_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
else
{
lean_object* v___x_953_; 
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 1, v_buckets_x27_941_);
lean_ctor_set(v___x_936_, 0, v_size_x27_939_);
v___x_953_ = v___x_936_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_size_x27_939_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v_buckets_x27_941_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
}
else
{
lean_dec(v_b_917_);
lean_dec(v_a_916_);
return v_m_915_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__2___redArg(lean_object* v_as_958_, size_t v_i_959_, size_t v_stop_960_, lean_object* v_b_961_, lean_object* v___y_962_){
_start:
{
uint8_t v___x_964_; 
v___x_964_ = lean_usize_dec_eq(v_i_959_, v_stop_960_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; lean_object* v_rewriteCache_966_; lean_object* v_acNfCache_967_; lean_object* v_relevantFVars_968_; lean_object* v_goal_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_983_; 
v___x_965_ = lean_st_ref_take(v___y_962_);
v_rewriteCache_966_ = lean_ctor_get(v___x_965_, 0);
v_acNfCache_967_ = lean_ctor_get(v___x_965_, 1);
v_relevantFVars_968_ = lean_ctor_get(v___x_965_, 2);
v_goal_969_ = lean_ctor_get(v___x_965_, 3);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_983_ == 0)
{
v___x_971_ = v___x_965_;
v_isShared_972_ = v_isSharedCheck_983_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_goal_969_);
lean_inc(v_relevantFVars_968_);
lean_inc(v_acNfCache_967_);
lean_inc(v_rewriteCache_966_);
lean_dec(v___x_965_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_983_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_977_; 
v___x_973_ = lean_array_uget_borrowed(v_as_958_, v_i_959_);
v___x_974_ = lean_box(0);
lean_inc(v___x_973_);
v___x_975_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0___redArg(v_rewriteCache_966_, v___x_973_, v___x_974_);
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 0, v___x_975_);
v___x_977_ = v___x_971_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v___x_975_);
lean_ctor_set(v_reuseFailAlloc_982_, 1, v_acNfCache_967_);
lean_ctor_set(v_reuseFailAlloc_982_, 2, v_relevantFVars_968_);
lean_ctor_set(v_reuseFailAlloc_982_, 3, v_goal_969_);
v___x_977_ = v_reuseFailAlloc_982_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
lean_object* v___x_978_; size_t v___x_979_; size_t v___x_980_; 
v___x_978_ = lean_st_ref_set(v___y_962_, v___x_977_);
v___x_979_ = ((size_t)1ULL);
v___x_980_ = lean_usize_add(v_i_959_, v___x_979_);
v_i_959_ = v___x_980_;
v_b_961_ = v___x_974_;
goto _start;
}
}
}
else
{
lean_object* v___x_984_; 
v___x_984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_984_, 0, v_b_961_);
return v___x_984_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__2___redArg___boxed(lean_object* v_as_985_, lean_object* v_i_986_, lean_object* v_stop_987_, lean_object* v_b_988_, lean_object* v___y_989_, lean_object* v___y_990_){
_start:
{
size_t v_i_boxed_991_; size_t v_stop_boxed_992_; lean_object* v_res_993_; 
v_i_boxed_991_ = lean_unbox_usize(v_i_986_);
lean_dec(v_i_986_);
v_stop_boxed_992_ = lean_unbox_usize(v_stop_987_);
lean_dec(v_stop_987_);
v_res_993_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__2___redArg(v_as_985_, v_i_boxed_991_, v_stop_boxed_992_, v_b_988_, v___y_989_);
lean_dec(v___y_989_);
lean_dec_ref(v_as_985_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__5(lean_object* v_fst_994_, lean_object* v_fst_995_, lean_object* v_snd_996_, lean_object* v___x_997_, size_t v___x_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v___y_1012_; lean_object* v___x_1021_; lean_object* v_rewriteCache_1022_; lean_object* v_acNfCache_1023_; lean_object* v_goal_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1041_; 
v___x_1021_ = lean_st_ref_take(v___y_1000_);
v_rewriteCache_1022_ = lean_ctor_get(v___x_1021_, 0);
v_acNfCache_1023_ = lean_ctor_get(v___x_1021_, 1);
v_goal_1024_ = lean_ctor_get(v___x_1021_, 3);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1041_ == 0)
{
lean_object* v_unused_1042_; 
v_unused_1042_ = lean_ctor_get(v___x_1021_, 2);
lean_dec(v_unused_1042_);
v___x_1026_ = v___x_1021_;
v_isShared_1027_ = v_isSharedCheck_1041_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_goal_1024_);
lean_inc(v_acNfCache_1023_);
lean_inc(v_rewriteCache_1022_);
lean_dec(v___x_1021_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1041_;
goto v_resetjp_1025_;
}
v___jp_1008_:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1009_, 0, v_snd_996_);
v___x_1010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1009_);
return v___x_1010_;
}
v___jp_1011_:
{
if (lean_obj_tag(v___y_1012_) == 0)
{
lean_dec_ref_known(v___y_1012_, 1);
goto v___jp_1008_;
}
else
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
lean_dec(v_snd_996_);
v_a_1013_ = lean_ctor_get(v___y_1012_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___y_1012_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___y_1012_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___y_1012_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1018_; 
if (v_isShared_1016_ == 0)
{
v___x_1018_ = v___x_1015_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_a_1013_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
}
v_resetjp_1025_:
{
lean_object* v___x_1028_; lean_object* v___x_1030_; 
v___x_1028_ = l_Array_append___redArg(v_fst_994_, v_fst_995_);
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 2, v___x_1028_);
v___x_1030_ = v___x_1026_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v_rewriteCache_1022_);
lean_ctor_set(v_reuseFailAlloc_1040_, 1, v_acNfCache_1023_);
lean_ctor_set(v_reuseFailAlloc_1040_, 2, v___x_1028_);
lean_ctor_set(v_reuseFailAlloc_1040_, 3, v_goal_1024_);
v___x_1030_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; uint8_t v___x_1033_; 
v___x_1031_ = lean_st_ref_set(v___y_1000_, v___x_1030_);
v___x_1032_ = lean_array_get_size(v_fst_995_);
v___x_1033_ = lean_nat_dec_lt(v___x_997_, v___x_1032_);
if (v___x_1033_ == 0)
{
goto v___jp_1008_;
}
else
{
lean_object* v___x_1034_; uint8_t v___x_1035_; 
v___x_1034_ = lean_box(0);
v___x_1035_ = lean_nat_dec_le(v___x_1032_, v___x_1032_);
if (v___x_1035_ == 0)
{
if (v___x_1033_ == 0)
{
goto v___jp_1008_;
}
else
{
size_t v___x_1036_; lean_object* v___x_1037_; 
v___x_1036_ = lean_usize_of_nat(v___x_1032_);
v___x_1037_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__2___redArg(v_fst_995_, v___x_998_, v___x_1036_, v___x_1034_, v___y_1000_);
v___y_1012_ = v___x_1037_;
goto v___jp_1011_;
}
}
else
{
size_t v___x_1038_; lean_object* v___x_1039_; 
v___x_1038_ = lean_usize_of_nat(v___x_1032_);
v___x_1039_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__2___redArg(v_fst_995_, v___x_998_, v___x_1038_, v___x_1034_, v___y_1000_);
v___y_1012_ = v___x_1039_;
goto v___jp_1011_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__5___boxed(lean_object* v_fst_1043_, lean_object* v_fst_1044_, lean_object* v_snd_1045_, lean_object* v___x_1046_, lean_object* v___x_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
size_t v___x_49653__boxed_1057_; lean_object* v_res_1058_; 
v___x_49653__boxed_1057_ = lean_unbox_usize(v___x_1047_);
lean_dec(v___x_1047_);
v_res_1058_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__5(v_fst_1043_, v_fst_1044_, v_snd_1045_, v___x_1046_, v___x_49653__boxed_1057_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
lean_dec(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec(v___x_1046_);
lean_dec_ref(v_fst_1044_);
return v_res_1058_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__9_spec__10___redArg(lean_object* v_x_1059_, lean_object* v_x_1060_, lean_object* v_x_1061_, lean_object* v_x_1062_){
_start:
{
lean_object* v_ks_1063_; lean_object* v_vs_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1088_; 
v_ks_1063_ = lean_ctor_get(v_x_1059_, 0);
v_vs_1064_ = lean_ctor_get(v_x_1059_, 1);
v_isSharedCheck_1088_ = !lean_is_exclusive(v_x_1059_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1066_ = v_x_1059_;
v_isShared_1067_ = v_isSharedCheck_1088_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_vs_1064_);
lean_inc(v_ks_1063_);
lean_dec(v_x_1059_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1088_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1068_; uint8_t v___x_1069_; 
v___x_1068_ = lean_array_get_size(v_ks_1063_);
v___x_1069_ = lean_nat_dec_lt(v_x_1060_, v___x_1068_);
if (v___x_1069_ == 0)
{
lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1073_; 
lean_dec(v_x_1060_);
v___x_1070_ = lean_array_push(v_ks_1063_, v_x_1061_);
v___x_1071_ = lean_array_push(v_vs_1064_, v_x_1062_);
if (v_isShared_1067_ == 0)
{
lean_ctor_set(v___x_1066_, 1, v___x_1071_);
lean_ctor_set(v___x_1066_, 0, v___x_1070_);
v___x_1073_ = v___x_1066_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v___x_1070_);
lean_ctor_set(v_reuseFailAlloc_1074_, 1, v___x_1071_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
else
{
lean_object* v_k_x27_1075_; uint8_t v___x_1076_; 
v_k_x27_1075_ = lean_array_fget_borrowed(v_ks_1063_, v_x_1060_);
v___x_1076_ = l_Lean_instBEqMVarId_beq(v_x_1061_, v_k_x27_1075_);
if (v___x_1076_ == 0)
{
lean_object* v___x_1078_; 
if (v_isShared_1067_ == 0)
{
v___x_1078_ = v___x_1066_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v_ks_1063_);
lean_ctor_set(v_reuseFailAlloc_1082_, 1, v_vs_1064_);
v___x_1078_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1079_ = lean_unsigned_to_nat(1u);
v___x_1080_ = lean_nat_add(v_x_1060_, v___x_1079_);
lean_dec(v_x_1060_);
v_x_1059_ = v___x_1078_;
v_x_1060_ = v___x_1080_;
goto _start;
}
}
else
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1086_; 
v___x_1083_ = lean_array_fset(v_ks_1063_, v_x_1060_, v_x_1061_);
v___x_1084_ = lean_array_fset(v_vs_1064_, v_x_1060_, v_x_1062_);
lean_dec(v_x_1060_);
if (v_isShared_1067_ == 0)
{
lean_ctor_set(v___x_1066_, 1, v___x_1084_);
lean_ctor_set(v___x_1066_, 0, v___x_1083_);
v___x_1086_ = v___x_1066_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v___x_1083_);
lean_ctor_set(v_reuseFailAlloc_1087_, 1, v___x_1084_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__9___redArg(lean_object* v_n_1089_, lean_object* v_k_1090_, lean_object* v_v_1091_){
_start:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1092_ = lean_unsigned_to_nat(0u);
v___x_1093_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__9_spec__10___redArg(v_n_1089_, v___x_1092_, v_k_1090_, v_v_1091_);
return v___x_1093_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__0(void){
_start:
{
size_t v___x_1094_; size_t v___x_1095_; size_t v___x_1096_; 
v___x_1094_ = ((size_t)5ULL);
v___x_1095_ = ((size_t)1ULL);
v___x_1096_ = lean_usize_shift_left(v___x_1095_, v___x_1094_);
return v___x_1096_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__1(void){
_start:
{
size_t v___x_1097_; size_t v___x_1098_; size_t v___x_1099_; 
v___x_1097_ = ((size_t)1ULL);
v___x_1098_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__0);
v___x_1099_ = lean_usize_sub(v___x_1098_, v___x_1097_);
return v___x_1099_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__2(void){
_start:
{
lean_object* v___x_1100_; 
v___x_1100_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg(lean_object* v_x_1101_, size_t v_x_1102_, size_t v_x_1103_, lean_object* v_x_1104_, lean_object* v_x_1105_){
_start:
{
if (lean_obj_tag(v_x_1101_) == 0)
{
lean_object* v_es_1106_; size_t v___x_1107_; size_t v___x_1108_; size_t v___x_1109_; size_t v___x_1110_; lean_object* v_j_1111_; lean_object* v___x_1112_; uint8_t v___x_1113_; 
v_es_1106_ = lean_ctor_get(v_x_1101_, 0);
v___x_1107_ = ((size_t)5ULL);
v___x_1108_ = ((size_t)1ULL);
v___x_1109_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__1);
v___x_1110_ = lean_usize_land(v_x_1102_, v___x_1109_);
v_j_1111_ = lean_usize_to_nat(v___x_1110_);
v___x_1112_ = lean_array_get_size(v_es_1106_);
v___x_1113_ = lean_nat_dec_lt(v_j_1111_, v___x_1112_);
if (v___x_1113_ == 0)
{
lean_dec(v_j_1111_);
lean_dec(v_x_1105_);
lean_dec(v_x_1104_);
return v_x_1101_;
}
else
{
lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1150_; 
lean_inc_ref(v_es_1106_);
v_isSharedCheck_1150_ = !lean_is_exclusive(v_x_1101_);
if (v_isSharedCheck_1150_ == 0)
{
lean_object* v_unused_1151_; 
v_unused_1151_ = lean_ctor_get(v_x_1101_, 0);
lean_dec(v_unused_1151_);
v___x_1115_ = v_x_1101_;
v_isShared_1116_ = v_isSharedCheck_1150_;
goto v_resetjp_1114_;
}
else
{
lean_dec(v_x_1101_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1150_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v_v_1117_; lean_object* v___x_1118_; lean_object* v_xs_x27_1119_; lean_object* v___y_1121_; 
v_v_1117_ = lean_array_fget(v_es_1106_, v_j_1111_);
v___x_1118_ = lean_box(0);
v_xs_x27_1119_ = lean_array_fset(v_es_1106_, v_j_1111_, v___x_1118_);
switch(lean_obj_tag(v_v_1117_))
{
case 0:
{
lean_object* v_key_1126_; lean_object* v_val_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1137_; 
v_key_1126_ = lean_ctor_get(v_v_1117_, 0);
v_val_1127_ = lean_ctor_get(v_v_1117_, 1);
v_isSharedCheck_1137_ = !lean_is_exclusive(v_v_1117_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1129_ = v_v_1117_;
v_isShared_1130_ = v_isSharedCheck_1137_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_val_1127_);
lean_inc(v_key_1126_);
lean_dec(v_v_1117_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1137_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
uint8_t v___x_1131_; 
v___x_1131_ = l_Lean_instBEqMVarId_beq(v_x_1104_, v_key_1126_);
if (v___x_1131_ == 0)
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
lean_del_object(v___x_1129_);
v___x_1132_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1126_, v_val_1127_, v_x_1104_, v_x_1105_);
v___x_1133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1132_);
v___y_1121_ = v___x_1133_;
goto v___jp_1120_;
}
else
{
lean_object* v___x_1135_; 
lean_dec(v_val_1127_);
lean_dec(v_key_1126_);
if (v_isShared_1130_ == 0)
{
lean_ctor_set(v___x_1129_, 1, v_x_1105_);
lean_ctor_set(v___x_1129_, 0, v_x_1104_);
v___x_1135_ = v___x_1129_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_x_1104_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v_x_1105_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
v___y_1121_ = v___x_1135_;
goto v___jp_1120_;
}
}
}
}
case 1:
{
lean_object* v_node_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1148_; 
v_node_1138_ = lean_ctor_get(v_v_1117_, 0);
v_isSharedCheck_1148_ = !lean_is_exclusive(v_v_1117_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1140_ = v_v_1117_;
v_isShared_1141_ = v_isSharedCheck_1148_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_node_1138_);
lean_dec(v_v_1117_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1148_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
size_t v___x_1142_; size_t v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1146_; 
v___x_1142_ = lean_usize_shift_right(v_x_1102_, v___x_1107_);
v___x_1143_ = lean_usize_add(v_x_1103_, v___x_1108_);
v___x_1144_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg(v_node_1138_, v___x_1142_, v___x_1143_, v_x_1104_, v_x_1105_);
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 0, v___x_1144_);
v___x_1146_ = v___x_1140_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v___x_1144_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
v___y_1121_ = v___x_1146_;
goto v___jp_1120_;
}
}
}
default: 
{
lean_object* v___x_1149_; 
v___x_1149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1149_, 0, v_x_1104_);
lean_ctor_set(v___x_1149_, 1, v_x_1105_);
v___y_1121_ = v___x_1149_;
goto v___jp_1120_;
}
}
v___jp_1120_:
{
lean_object* v___x_1122_; lean_object* v___x_1124_; 
v___x_1122_ = lean_array_fset(v_xs_x27_1119_, v_j_1111_, v___y_1121_);
lean_dec(v_j_1111_);
if (v_isShared_1116_ == 0)
{
lean_ctor_set(v___x_1115_, 0, v___x_1122_);
v___x_1124_ = v___x_1115_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v___x_1122_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
}
}
else
{
lean_object* v_ks_1152_; lean_object* v_vs_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1173_; 
v_ks_1152_ = lean_ctor_get(v_x_1101_, 0);
v_vs_1153_ = lean_ctor_get(v_x_1101_, 1);
v_isSharedCheck_1173_ = !lean_is_exclusive(v_x_1101_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1155_ = v_x_1101_;
v_isShared_1156_ = v_isSharedCheck_1173_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_vs_1153_);
lean_inc(v_ks_1152_);
lean_dec(v_x_1101_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1173_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1158_; 
if (v_isShared_1156_ == 0)
{
v___x_1158_ = v___x_1155_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_ks_1152_);
lean_ctor_set(v_reuseFailAlloc_1172_, 1, v_vs_1153_);
v___x_1158_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
lean_object* v_newNode_1159_; uint8_t v___y_1161_; size_t v___x_1167_; uint8_t v___x_1168_; 
v_newNode_1159_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__9___redArg(v___x_1158_, v_x_1104_, v_x_1105_);
v___x_1167_ = ((size_t)7ULL);
v___x_1168_ = lean_usize_dec_le(v___x_1167_, v_x_1103_);
if (v___x_1168_ == 0)
{
lean_object* v___x_1169_; lean_object* v___x_1170_; uint8_t v___x_1171_; 
v___x_1169_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1159_);
v___x_1170_ = lean_unsigned_to_nat(4u);
v___x_1171_ = lean_nat_dec_lt(v___x_1169_, v___x_1170_);
lean_dec(v___x_1169_);
v___y_1161_ = v___x_1171_;
goto v___jp_1160_;
}
else
{
v___y_1161_ = v___x_1168_;
goto v___jp_1160_;
}
v___jp_1160_:
{
if (v___y_1161_ == 0)
{
lean_object* v_ks_1162_; lean_object* v_vs_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
v_ks_1162_ = lean_ctor_get(v_newNode_1159_, 0);
lean_inc_ref(v_ks_1162_);
v_vs_1163_ = lean_ctor_get(v_newNode_1159_, 1);
lean_inc_ref(v_vs_1163_);
lean_dec_ref(v_newNode_1159_);
v___x_1164_ = lean_unsigned_to_nat(0u);
v___x_1165_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___closed__2);
v___x_1166_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__10___redArg(v_x_1103_, v_ks_1162_, v_vs_1163_, v___x_1164_, v___x_1165_);
lean_dec_ref(v_vs_1163_);
lean_dec_ref(v_ks_1162_);
return v___x_1166_;
}
else
{
return v_newNode_1159_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__10___redArg(size_t v_depth_1174_, lean_object* v_keys_1175_, lean_object* v_vals_1176_, lean_object* v_i_1177_, lean_object* v_entries_1178_){
_start:
{
lean_object* v___x_1179_; uint8_t v___x_1180_; 
v___x_1179_ = lean_array_get_size(v_keys_1175_);
v___x_1180_ = lean_nat_dec_lt(v_i_1177_, v___x_1179_);
if (v___x_1180_ == 0)
{
lean_dec(v_i_1177_);
return v_entries_1178_;
}
else
{
lean_object* v_k_1181_; lean_object* v_v_1182_; uint64_t v___x_1183_; size_t v_h_1184_; size_t v___x_1185_; lean_object* v___x_1186_; size_t v___x_1187_; size_t v___x_1188_; size_t v___x_1189_; size_t v_h_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v_k_1181_ = lean_array_fget_borrowed(v_keys_1175_, v_i_1177_);
v_v_1182_ = lean_array_fget_borrowed(v_vals_1176_, v_i_1177_);
v___x_1183_ = l_Lean_instHashableMVarId_hash(v_k_1181_);
v_h_1184_ = lean_uint64_to_usize(v___x_1183_);
v___x_1185_ = ((size_t)5ULL);
v___x_1186_ = lean_unsigned_to_nat(1u);
v___x_1187_ = ((size_t)1ULL);
v___x_1188_ = lean_usize_sub(v_depth_1174_, v___x_1187_);
v___x_1189_ = lean_usize_mul(v___x_1185_, v___x_1188_);
v_h_1190_ = lean_usize_shift_right(v_h_1184_, v___x_1189_);
v___x_1191_ = lean_nat_add(v_i_1177_, v___x_1186_);
lean_dec(v_i_1177_);
lean_inc(v_v_1182_);
lean_inc(v_k_1181_);
v___x_1192_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg(v_entries_1178_, v_h_1190_, v_depth_1174_, v_k_1181_, v_v_1182_);
v_i_1177_ = v___x_1191_;
v_entries_1178_ = v___x_1192_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__10___redArg___boxed(lean_object* v_depth_1194_, lean_object* v_keys_1195_, lean_object* v_vals_1196_, lean_object* v_i_1197_, lean_object* v_entries_1198_){
_start:
{
size_t v_depth_boxed_1199_; lean_object* v_res_1200_; 
v_depth_boxed_1199_ = lean_unbox_usize(v_depth_1194_);
lean_dec(v_depth_1194_);
v_res_1200_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__10___redArg(v_depth_boxed_1199_, v_keys_1195_, v_vals_1196_, v_i_1197_, v_entries_1198_);
lean_dec_ref(v_vals_1196_);
lean_dec_ref(v_keys_1195_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg___boxed(lean_object* v_x_1201_, lean_object* v_x_1202_, lean_object* v_x_1203_, lean_object* v_x_1204_, lean_object* v_x_1205_){
_start:
{
size_t v_x_49845__boxed_1206_; size_t v_x_49846__boxed_1207_; lean_object* v_res_1208_; 
v_x_49845__boxed_1206_ = lean_unbox_usize(v_x_1202_);
lean_dec(v_x_1202_);
v_x_49846__boxed_1207_ = lean_unbox_usize(v_x_1203_);
lean_dec(v_x_1203_);
v_res_1208_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg(v_x_1201_, v_x_49845__boxed_1206_, v_x_49846__boxed_1207_, v_x_1204_, v_x_1205_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5___redArg(lean_object* v_x_1209_, lean_object* v_x_1210_, lean_object* v_x_1211_){
_start:
{
uint64_t v___x_1212_; size_t v___x_1213_; size_t v___x_1214_; lean_object* v___x_1215_; 
v___x_1212_ = l_Lean_instHashableMVarId_hash(v_x_1210_);
v___x_1213_ = lean_uint64_to_usize(v___x_1212_);
v___x_1214_ = ((size_t)1ULL);
v___x_1215_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg(v_x_1209_, v___x_1213_, v___x_1214_, v_x_1210_, v_x_1211_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4___redArg(lean_object* v_mvarId_1216_, lean_object* v_val_1217_, lean_object* v___y_1218_){
_start:
{
lean_object* v___x_1220_; lean_object* v_mctx_1221_; lean_object* v_cache_1222_; lean_object* v_zetaDeltaFVarIds_1223_; lean_object* v_postponed_1224_; lean_object* v_diag_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1253_; 
v___x_1220_ = lean_st_ref_take(v___y_1218_);
v_mctx_1221_ = lean_ctor_get(v___x_1220_, 0);
v_cache_1222_ = lean_ctor_get(v___x_1220_, 1);
v_zetaDeltaFVarIds_1223_ = lean_ctor_get(v___x_1220_, 2);
v_postponed_1224_ = lean_ctor_get(v___x_1220_, 3);
v_diag_1225_ = lean_ctor_get(v___x_1220_, 4);
v_isSharedCheck_1253_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1253_ == 0)
{
v___x_1227_ = v___x_1220_;
v_isShared_1228_ = v_isSharedCheck_1253_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_diag_1225_);
lean_inc(v_postponed_1224_);
lean_inc(v_zetaDeltaFVarIds_1223_);
lean_inc(v_cache_1222_);
lean_inc(v_mctx_1221_);
lean_dec(v___x_1220_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1253_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v_depth_1229_; lean_object* v_levelAssignDepth_1230_; lean_object* v_lmvarCounter_1231_; lean_object* v_mvarCounter_1232_; lean_object* v_lDecls_1233_; lean_object* v_decls_1234_; lean_object* v_userNames_1235_; lean_object* v_lAssignment_1236_; lean_object* v_eAssignment_1237_; lean_object* v_dAssignment_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1252_; 
v_depth_1229_ = lean_ctor_get(v_mctx_1221_, 0);
v_levelAssignDepth_1230_ = lean_ctor_get(v_mctx_1221_, 1);
v_lmvarCounter_1231_ = lean_ctor_get(v_mctx_1221_, 2);
v_mvarCounter_1232_ = lean_ctor_get(v_mctx_1221_, 3);
v_lDecls_1233_ = lean_ctor_get(v_mctx_1221_, 4);
v_decls_1234_ = lean_ctor_get(v_mctx_1221_, 5);
v_userNames_1235_ = lean_ctor_get(v_mctx_1221_, 6);
v_lAssignment_1236_ = lean_ctor_get(v_mctx_1221_, 7);
v_eAssignment_1237_ = lean_ctor_get(v_mctx_1221_, 8);
v_dAssignment_1238_ = lean_ctor_get(v_mctx_1221_, 9);
v_isSharedCheck_1252_ = !lean_is_exclusive(v_mctx_1221_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1240_ = v_mctx_1221_;
v_isShared_1241_ = v_isSharedCheck_1252_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_dAssignment_1238_);
lean_inc(v_eAssignment_1237_);
lean_inc(v_lAssignment_1236_);
lean_inc(v_userNames_1235_);
lean_inc(v_decls_1234_);
lean_inc(v_lDecls_1233_);
lean_inc(v_mvarCounter_1232_);
lean_inc(v_lmvarCounter_1231_);
lean_inc(v_levelAssignDepth_1230_);
lean_inc(v_depth_1229_);
lean_dec(v_mctx_1221_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1252_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1242_; lean_object* v___x_1244_; 
v___x_1242_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5___redArg(v_eAssignment_1237_, v_mvarId_1216_, v_val_1217_);
if (v_isShared_1241_ == 0)
{
lean_ctor_set(v___x_1240_, 8, v___x_1242_);
v___x_1244_ = v___x_1240_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_depth_1229_);
lean_ctor_set(v_reuseFailAlloc_1251_, 1, v_levelAssignDepth_1230_);
lean_ctor_set(v_reuseFailAlloc_1251_, 2, v_lmvarCounter_1231_);
lean_ctor_set(v_reuseFailAlloc_1251_, 3, v_mvarCounter_1232_);
lean_ctor_set(v_reuseFailAlloc_1251_, 4, v_lDecls_1233_);
lean_ctor_set(v_reuseFailAlloc_1251_, 5, v_decls_1234_);
lean_ctor_set(v_reuseFailAlloc_1251_, 6, v_userNames_1235_);
lean_ctor_set(v_reuseFailAlloc_1251_, 7, v_lAssignment_1236_);
lean_ctor_set(v_reuseFailAlloc_1251_, 8, v___x_1242_);
lean_ctor_set(v_reuseFailAlloc_1251_, 9, v_dAssignment_1238_);
v___x_1244_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
lean_object* v___x_1246_; 
if (v_isShared_1228_ == 0)
{
lean_ctor_set(v___x_1227_, 0, v___x_1244_);
v___x_1246_ = v___x_1227_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v___x_1244_);
lean_ctor_set(v_reuseFailAlloc_1250_, 1, v_cache_1222_);
lean_ctor_set(v_reuseFailAlloc_1250_, 2, v_zetaDeltaFVarIds_1223_);
lean_ctor_set(v_reuseFailAlloc_1250_, 3, v_postponed_1224_);
lean_ctor_set(v_reuseFailAlloc_1250_, 4, v_diag_1225_);
v___x_1246_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1247_ = lean_st_ref_set(v___y_1218_, v___x_1246_);
v___x_1248_ = lean_box(0);
v___x_1249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1248_);
return v___x_1249_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4___redArg___boxed(lean_object* v_mvarId_1254_, lean_object* v_val_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
lean_object* v_res_1258_; 
v_res_1258_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4___redArg(v_mvarId_1254_, v_val_1255_, v___y_1256_);
lean_dec(v___y_1256_);
return v_res_1258_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__6(void){
_start:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1267_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__5));
v___x_1268_ = lean_unsigned_to_nat(78u);
v___x_1269_ = lean_unsigned_to_nat(71u);
v___x_1270_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__4));
v___x_1271_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__3));
v___x_1272_ = l_mkPanicMessageWithDecl(v___x_1271_, v___x_1270_, v___x_1269_, v___x_1268_, v___x_1267_);
return v___x_1272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6(lean_object* v___f_1275_, lean_object* v_goal_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_){
_start:
{
lean_object* v___x_1286_; 
lean_inc(v_goal_1276_);
v___x_1286_ = l___private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps(v_goal_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1395_; 
v_a_1287_ = lean_ctor_get(v___x_1286_, 0);
v_isSharedCheck_1395_ = !lean_is_exclusive(v___x_1286_);
if (v_isSharedCheck_1395_ == 0)
{
v___x_1289_ = v___x_1286_;
v_isShared_1290_ = v_isSharedCheck_1395_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_dec(v___x_1286_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1395_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; uint8_t v___x_1293_; 
v___x_1291_ = lean_array_get_size(v_a_1287_);
v___x_1292_ = lean_unsigned_to_nat(0u);
v___x_1293_ = lean_nat_dec_eq(v___x_1291_, v___x_1292_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
lean_del_object(v___x_1289_);
v___x_1294_ = l_Lean_Elab_Tactic_BVDecide_Frontend_bvNormalizeExt;
v___x_1295_ = l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg(v___x_1294_, v___y_1284_);
if (lean_obj_tag(v___x_1295_) == 0)
{
lean_object* v_a_1296_; lean_object* v_maxSteps_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___f_1301_; lean_object* v___x_1302_; lean_object* v___f_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; size_t v_sz_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___f_1309_; lean_object* v___x_1310_; 
v_a_1296_ = lean_ctor_get(v___x_1295_, 0);
lean_inc(v_a_1296_);
lean_dec_ref_known(v___x_1295_, 1);
v_maxSteps_1297_ = lean_ctor_get(v___y_1277_, 1);
v___x_1298_ = lean_unsigned_to_nat(2u);
lean_inc(v_maxSteps_1297_);
v___x_1299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1299_, 0, v_maxSteps_1297_);
lean_ctor_set(v___x_1299_, 1, v___x_1298_);
v___x_1300_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__0));
v___f_1301_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__2___boxed), 14, 2);
lean_closure_set(v___f_1301_, 0, v_a_1296_);
lean_closure_set(v___f_1301_, 1, v___x_1300_);
v___x_1302_ = lean_unsigned_to_nat(255u);
v___f_1303_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__3___boxed), 13, 2);
lean_closure_set(v___f_1303_, 0, v___x_1302_);
lean_closure_set(v___f_1303_, 1, v___f_1301_);
v___x_1304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___f_1275_);
lean_ctor_set(v___x_1304_, 1, v___f_1303_);
v___x_1305_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__2));
v_sz_1306_ = lean_array_size(v_a_1287_);
v___x_1307_ = lean_box_usize(v_sz_1306_);
v___x_1308_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___boxed__const__1));
v___f_1309_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__4___boxed), 14, 4);
lean_closure_set(v___f_1309_, 0, v_a_1287_);
lean_closure_set(v___f_1309_, 1, v___x_1307_);
lean_closure_set(v___f_1309_, 2, v___x_1308_);
lean_closure_set(v___f_1309_, 3, v___x_1305_);
v___x_1310_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(v___f_1309_, v___x_1304_, v___x_1299_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1374_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1313_ = v___x_1310_;
v_isShared_1314_ = v_isSharedCheck_1374_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___x_1310_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1374_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v_fst_1315_; lean_object* v_snd_1316_; lean_object* v___x_1317_; uint8_t v___x_1318_; 
v_fst_1315_ = lean_ctor_get(v_a_1311_, 0);
lean_inc(v_fst_1315_);
v_snd_1316_ = lean_ctor_get(v_a_1311_, 1);
lean_inc(v_snd_1316_);
lean_dec(v_a_1311_);
v___x_1317_ = lean_array_get_size(v_snd_1316_);
v___x_1318_ = lean_nat_dec_eq(v___x_1317_, v___x_1292_);
if (v___x_1318_ == 0)
{
lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v_type_1322_; lean_object* v___x_1323_; uint8_t v___x_1324_; 
lean_del_object(v___x_1313_);
v___x_1319_ = lean_unsigned_to_nat(1u);
v___x_1320_ = lean_nat_sub(v___x_1317_, v___x_1319_);
v___x_1321_ = lean_array_fget_borrowed(v_snd_1316_, v___x_1320_);
lean_dec(v___x_1320_);
v_type_1322_ = lean_ctor_get(v___x_1321_, 1);
v___x_1323_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__1___closed__7));
v___x_1324_ = l_Lean_Expr_isConstOf(v_type_1322_, v___x_1323_);
if (v___x_1324_ == 0)
{
lean_object* v___x_1325_; 
v___x_1325_ = l_Lean_MVarId_assertHypotheses(v_goal_1276_, v_snd_1316_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_);
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_object* v_a_1326_; lean_object* v_fst_1327_; lean_object* v_snd_1328_; lean_object* v___x_1329_; lean_object* v___f_1330_; lean_object* v___x_1331_; 
v_a_1326_ = lean_ctor_get(v___x_1325_, 0);
lean_inc(v_a_1326_);
lean_dec_ref_known(v___x_1325_, 1);
v_fst_1327_ = lean_ctor_get(v_a_1326_, 0);
lean_inc(v_fst_1327_);
v_snd_1328_ = lean_ctor_get(v_a_1326_, 1);
lean_inc_n(v_snd_1328_, 2);
lean_dec(v_a_1326_);
v___x_1329_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___boxed__const__1));
v___f_1330_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__5___boxed), 14, 5);
lean_closure_set(v___f_1330_, 0, v_fst_1315_);
lean_closure_set(v___f_1330_, 1, v_fst_1327_);
lean_closure_set(v___f_1330_, 2, v_snd_1328_);
lean_closure_set(v___f_1330_, 3, v___x_1292_);
lean_closure_set(v___f_1330_, 4, v___x_1329_);
v___x_1331_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite_0__Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_getHyps_spec__2___redArg(v_snd_1328_, v___f_1330_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_);
return v___x_1331_;
}
else
{
lean_object* v_a_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1339_; 
lean_dec(v_fst_1315_);
v_a_1332_ = lean_ctor_get(v___x_1325_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1325_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1334_ = v___x_1325_;
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_a_1332_);
lean_dec(v___x_1325_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v___x_1337_; 
if (v_isShared_1335_ == 0)
{
v___x_1337_ = v___x_1334_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_a_1332_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
}
else
{
lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; 
lean_inc(v___x_1321_);
lean_dec(v_snd_1316_);
lean_dec(v_fst_1315_);
v___x_1340_ = lean_mk_empty_array_with_capacity(v___x_1319_);
v___x_1341_ = lean_array_push(v___x_1340_, v___x_1321_);
v___x_1342_ = l_Lean_MVarId_assertHypotheses(v_goal_1276_, v___x_1341_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_);
if (lean_obj_tag(v___x_1342_) == 0)
{
lean_object* v_a_1343_; lean_object* v_fst_1344_; lean_object* v_snd_1345_; lean_object* v___x_1346_; uint8_t v___x_1347_; 
v_a_1343_ = lean_ctor_get(v___x_1342_, 0);
lean_inc(v_a_1343_);
lean_dec_ref_known(v___x_1342_, 1);
v_fst_1344_ = lean_ctor_get(v_a_1343_, 0);
lean_inc(v_fst_1344_);
v_snd_1345_ = lean_ctor_get(v_a_1343_, 1);
lean_inc(v_snd_1345_);
lean_dec(v_a_1343_);
v___x_1346_ = lean_array_get_size(v_fst_1344_);
v___x_1347_ = lean_nat_dec_eq(v___x_1346_, v___x_1319_);
if (v___x_1347_ == 0)
{
lean_object* v___x_1348_; lean_object* v___x_1349_; 
lean_dec(v_snd_1345_);
lean_dec(v_fst_1344_);
v___x_1348_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__6, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__6_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___closed__6);
v___x_1349_ = l_panic___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__3(v___x_1348_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_);
return v___x_1349_;
}
else
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1360_; 
v___x_1350_ = lean_array_fget(v_fst_1344_, v___x_1292_);
lean_dec(v_fst_1344_);
v___x_1351_ = l_Lean_mkFVar(v___x_1350_);
v___x_1352_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4___redArg(v_snd_1345_, v___x_1351_, v___y_1282_);
v_isSharedCheck_1360_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1360_ == 0)
{
lean_object* v_unused_1361_; 
v_unused_1361_ = lean_ctor_get(v___x_1352_, 0);
lean_dec(v_unused_1361_);
v___x_1354_ = v___x_1352_;
v_isShared_1355_ = v_isSharedCheck_1360_;
goto v_resetjp_1353_;
}
else
{
lean_dec(v___x_1352_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1360_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v___x_1356_; lean_object* v___x_1358_; 
v___x_1356_ = lean_box(0);
if (v_isShared_1355_ == 0)
{
lean_ctor_set(v___x_1354_, 0, v___x_1356_);
v___x_1358_ = v___x_1354_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v___x_1356_);
v___x_1358_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
return v___x_1358_;
}
}
}
}
else
{
lean_object* v_a_1362_; lean_object* v___x_1364_; uint8_t v_isShared_1365_; uint8_t v_isSharedCheck_1369_; 
v_a_1362_ = lean_ctor_get(v___x_1342_, 0);
v_isSharedCheck_1369_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1369_ == 0)
{
v___x_1364_ = v___x_1342_;
v_isShared_1365_ = v_isSharedCheck_1369_;
goto v_resetjp_1363_;
}
else
{
lean_inc(v_a_1362_);
lean_dec(v___x_1342_);
v___x_1364_ = lean_box(0);
v_isShared_1365_ = v_isSharedCheck_1369_;
goto v_resetjp_1363_;
}
v_resetjp_1363_:
{
lean_object* v___x_1367_; 
if (v_isShared_1365_ == 0)
{
v___x_1367_ = v___x_1364_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v_a_1362_);
v___x_1367_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
return v___x_1367_;
}
}
}
}
}
else
{
lean_object* v___x_1370_; lean_object* v___x_1372_; 
lean_dec(v_snd_1316_);
lean_dec(v_fst_1315_);
v___x_1370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1370_, 0, v_goal_1276_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 0, v___x_1370_);
v___x_1372_ = v___x_1313_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v___x_1370_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
}
}
else
{
lean_object* v_a_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1382_; 
lean_dec(v_goal_1276_);
v_a_1375_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1377_ = v___x_1310_;
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_a_1375_);
lean_dec(v___x_1310_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1380_; 
if (v_isShared_1378_ == 0)
{
v___x_1380_ = v___x_1377_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v_a_1375_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
return v___x_1380_;
}
}
}
}
else
{
lean_object* v_a_1383_; lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1390_; 
lean_dec(v_a_1287_);
lean_dec(v_goal_1276_);
lean_dec_ref(v___f_1275_);
v_a_1383_ = lean_ctor_get(v___x_1295_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1295_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1385_ = v___x_1295_;
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
else
{
lean_inc(v_a_1383_);
lean_dec(v___x_1295_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v___x_1388_; 
if (v_isShared_1386_ == 0)
{
v___x_1388_ = v___x_1385_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_a_1383_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
}
else
{
lean_object* v___x_1391_; lean_object* v___x_1393_; 
lean_dec(v_a_1287_);
lean_dec_ref(v___f_1275_);
v___x_1391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1391_, 0, v_goal_1276_);
if (v_isShared_1290_ == 0)
{
lean_ctor_set(v___x_1289_, 0, v___x_1391_);
v___x_1393_ = v___x_1289_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v___x_1391_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
}
}
else
{
lean_object* v_a_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1403_; 
lean_dec(v_goal_1276_);
lean_dec_ref(v___f_1275_);
v_a_1396_ = lean_ctor_get(v___x_1286_, 0);
v_isSharedCheck_1403_ = !lean_is_exclusive(v___x_1286_);
if (v_isSharedCheck_1403_ == 0)
{
v___x_1398_ = v___x_1286_;
v_isShared_1399_ = v_isSharedCheck_1403_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_a_1396_);
lean_dec(v___x_1286_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1403_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v___x_1401_; 
if (v_isShared_1399_ == 0)
{
v___x_1401_ = v___x_1398_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_a_1396_);
v___x_1401_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
return v___x_1401_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6___boxed(lean_object* v___f_1404_, lean_object* v_goal_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
lean_object* v_res_1415_; 
v_res_1415_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass___lam__6(v___f_1404_, v_goal_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
lean_dec(v___y_1413_);
lean_dec_ref(v___y_1412_);
lean_dec(v___y_1411_);
lean_dec_ref(v___y_1410_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0(lean_object* v_00_u03b2_1428_, lean_object* v_m_1429_, lean_object* v_a_1430_, lean_object* v_b_1431_){
_start:
{
lean_object* v___x_1432_; 
v___x_1432_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0___redArg(v_m_1429_, v_a_1430_, v_b_1431_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__2(lean_object* v_as_1433_, size_t v_i_1434_, size_t v_stop_1435_, lean_object* v_b_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_){
_start:
{
lean_object* v___x_1446_; 
v___x_1446_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__2___redArg(v_as_1433_, v_i_1434_, v_stop_1435_, v_b_1436_, v___y_1438_);
return v___x_1446_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__2___boxed(lean_object* v_as_1447_, lean_object* v_i_1448_, lean_object* v_stop_1449_, lean_object* v_b_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_){
_start:
{
size_t v_i_boxed_1460_; size_t v_stop_boxed_1461_; lean_object* v_res_1462_; 
v_i_boxed_1460_ = lean_unbox_usize(v_i_1448_);
lean_dec(v_i_1448_);
v_stop_boxed_1461_ = lean_unbox_usize(v_stop_1449_);
lean_dec(v_stop_1449_);
v_res_1462_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__2(v_as_1447_, v_i_boxed_1460_, v_stop_boxed_1461_, v_b_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_);
lean_dec(v___y_1458_);
lean_dec_ref(v___y_1457_);
lean_dec(v___y_1456_);
lean_dec_ref(v___y_1455_);
lean_dec(v___y_1454_);
lean_dec_ref(v___y_1453_);
lean_dec(v___y_1452_);
lean_dec_ref(v___y_1451_);
lean_dec_ref(v_as_1447_);
return v_res_1462_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4(lean_object* v_mvarId_1463_, lean_object* v_val_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_){
_start:
{
lean_object* v___x_1474_; 
v___x_1474_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4___redArg(v_mvarId_1463_, v_val_1464_, v___y_1470_);
return v___x_1474_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4___boxed(lean_object* v_mvarId_1475_, lean_object* v_val_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_){
_start:
{
lean_object* v_res_1486_; 
v_res_1486_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4(v_mvarId_1475_, v_val_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_);
lean_dec(v___y_1484_);
lean_dec_ref(v___y_1483_);
lean_dec(v___y_1482_);
lean_dec_ref(v___y_1481_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
return v_res_1486_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0(lean_object* v_00_u03b2_1487_, lean_object* v_data_1488_){
_start:
{
lean_object* v___x_1489_; 
v___x_1489_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0___redArg(v_data_1488_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5(lean_object* v_00_u03b2_1490_, lean_object* v_x_1491_, lean_object* v_x_1492_, lean_object* v_x_1493_){
_start:
{
lean_object* v___x_1494_; 
v___x_1494_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5___redArg(v_x_1491_, v_x_1492_, v_x_1493_);
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1495_, lean_object* v_i_1496_, lean_object* v_source_1497_, lean_object* v_target_1498_){
_start:
{
lean_object* v___x_1499_; 
v___x_1499_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__2___redArg(v_i_1496_, v_source_1497_, v_target_1498_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7(lean_object* v_00_u03b2_1500_, lean_object* v_x_1501_, size_t v_x_1502_, size_t v_x_1503_, lean_object* v_x_1504_, lean_object* v_x_1505_){
_start:
{
lean_object* v___x_1506_; 
v___x_1506_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___redArg(v_x_1501_, v_x_1502_, v_x_1503_, v_x_1504_, v_x_1505_);
return v___x_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7___boxed(lean_object* v_00_u03b2_1507_, lean_object* v_x_1508_, lean_object* v_x_1509_, lean_object* v_x_1510_, lean_object* v_x_1511_, lean_object* v_x_1512_){
_start:
{
size_t v_x_50488__boxed_1513_; size_t v_x_50489__boxed_1514_; lean_object* v_res_1515_; 
v_x_50488__boxed_1513_ = lean_unbox_usize(v_x_1509_);
lean_dec(v_x_1509_);
v_x_50489__boxed_1514_ = lean_unbox_usize(v_x_1510_);
lean_dec(v_x_1510_);
v_res_1515_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7(v_00_u03b2_1507_, v_x_1508_, v_x_50488__boxed_1513_, v_x_50489__boxed_1514_, v_x_1511_, v_x_1512_);
return v_res_1515_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_1516_, lean_object* v_x_1517_, lean_object* v_x_1518_){
_start:
{
lean_object* v___x_1519_; 
v___x_1519_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__0_spec__0_spec__2_spec__6___redArg(v_x_1517_, v_x_1518_);
return v___x_1519_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__9(lean_object* v_00_u03b2_1520_, lean_object* v_n_1521_, lean_object* v_k_1522_, lean_object* v_v_1523_){
_start:
{
lean_object* v___x_1524_; 
v___x_1524_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__9___redArg(v_n_1521_, v_k_1522_, v_v_1523_);
return v___x_1524_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__10(lean_object* v_00_u03b2_1525_, size_t v_depth_1526_, lean_object* v_keys_1527_, lean_object* v_vals_1528_, lean_object* v_heq_1529_, lean_object* v_i_1530_, lean_object* v_entries_1531_){
_start:
{
lean_object* v___x_1532_; 
v___x_1532_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__10___redArg(v_depth_1526_, v_keys_1527_, v_vals_1528_, v_i_1530_, v_entries_1531_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__10___boxed(lean_object* v_00_u03b2_1533_, lean_object* v_depth_1534_, lean_object* v_keys_1535_, lean_object* v_vals_1536_, lean_object* v_heq_1537_, lean_object* v_i_1538_, lean_object* v_entries_1539_){
_start:
{
size_t v_depth_boxed_1540_; lean_object* v_res_1541_; 
v_depth_boxed_1540_ = lean_unbox_usize(v_depth_1534_);
lean_dec(v_depth_1534_);
v_res_1541_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__10(v_00_u03b2_1533_, v_depth_boxed_1540_, v_keys_1535_, v_vals_1536_, v_heq_1537_, v_i_1538_, v_entries_1539_);
lean_dec_ref(v_vals_1536_);
lean_dec_ref(v_keys_1535_);
return v_res_1541_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__9_spec__10(lean_object* v_00_u03b2_1542_, lean_object* v_x_1543_, lean_object* v_x_1544_, lean_object* v_x_1545_, lean_object* v_x_1546_){
_start:
{
lean_object* v___x_1547_; 
v___x_1547_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_rewriteRulesPass_spec__4_spec__5_spec__7_spec__9_spec__10___redArg(v_x_1543_, v_x_1544_, v_x_1545_, v_x_1546_);
return v___x_1547_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Rewrite(builtin);
}
#ifdef __cplusplus
}
#endif
