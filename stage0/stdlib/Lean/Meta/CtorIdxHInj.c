// Lean compiler output
// Module: Lean.Meta.CtorIdxHInj
// Imports: public import Lean.Meta.Basic import Lean.Meta.Tactic.Refl import Lean.Meta.Constructions.CtorIdx import Lean.Meta.Tactic.Subst
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_mkCtorIdxName(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_after(lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withPrimedNamesImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_heqToEq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_substEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_isCtorIdxCore_x3f(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_realizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_registerReservedNamePredicate(lean_object*);
lean_object* l_Lean_registerReservedNameAction(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix;
LEAN_EXPORT lean_object* l_Lean_Meta_mkCtorIdxHInjTheoremNameFor(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_repeatIntroSubstRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_repeatIntroSubstRefl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withPrimedNames___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withPrimedNames___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withPrimedNames___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withPrimedNames___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__1___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2___closed__0;
static lean_once_cell_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__5_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__5_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__6_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__6_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__8_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__8_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("hinj", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix___closed__0, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix___closed__0_once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix___closed__0);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkCtorIdxHInjTheoremNameFor(lean_object* v_indName_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = l_mkCtorIdxName(v_indName_3_);
v___x_5_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix___closed__0, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix___closed__0_once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix___closed__0);
v___x_6_ = l_Lean_Name_str___override(v___x_4_, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_repeatIntroSubstRefl(lean_object* v_mvarId_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_){
_start:
{
lean_object* v___x_13_; 
lean_inc(v_mvarId_7_);
v___x_13_ = l_Lean_MVarId_getType(v_mvarId_7_, v_a_8_, v_a_9_, v_a_10_, v_a_11_);
if (lean_obj_tag(v___x_13_) == 0)
{
lean_object* v_a_14_; uint8_t v___x_15_; uint8_t v___x_16_; 
v_a_14_ = lean_ctor_get(v___x_13_, 0);
lean_inc(v_a_14_);
lean_dec_ref(v___x_13_);
v___x_15_ = l_Lean_Expr_isForall(v_a_14_);
lean_dec(v_a_14_);
v___x_16_ = 1;
if (v___x_15_ == 0)
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_MVarId_refl(v_mvarId_7_, v___x_16_, v_a_8_, v_a_9_, v_a_10_, v_a_11_);
return v___x_17_;
}
else
{
uint8_t v___x_18_; lean_object* v___x_19_; 
v___x_18_ = 0;
v___x_19_ = l_Lean_Meta_intro1Core(v_mvarId_7_, v___x_18_, v_a_8_, v_a_9_, v_a_10_, v_a_11_);
if (lean_obj_tag(v___x_19_) == 0)
{
lean_object* v_a_20_; lean_object* v_fst_21_; lean_object* v_snd_22_; lean_object* v___x_23_; 
v_a_20_ = lean_ctor_get(v___x_19_, 0);
lean_inc(v_a_20_);
lean_dec_ref(v___x_19_);
v_fst_21_ = lean_ctor_get(v_a_20_, 0);
lean_inc(v_fst_21_);
v_snd_22_ = lean_ctor_get(v_a_20_, 1);
lean_inc(v_snd_22_);
lean_dec(v_a_20_);
v___x_23_ = l_Lean_Meta_heqToEq(v_snd_22_, v_fst_21_, v___x_16_, v_a_8_, v_a_9_, v_a_10_, v_a_11_);
if (lean_obj_tag(v___x_23_) == 0)
{
lean_object* v_a_24_; lean_object* v_fst_25_; lean_object* v_snd_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v_a_24_ = lean_ctor_get(v___x_23_, 0);
lean_inc(v_a_24_);
lean_dec_ref(v___x_23_);
v_fst_25_ = lean_ctor_get(v_a_24_, 0);
lean_inc(v_fst_25_);
v_snd_26_ = lean_ctor_get(v_a_24_, 1);
lean_inc(v_snd_26_);
lean_dec(v_a_24_);
v___x_27_ = lean_box(0);
v___x_28_ = l_Lean_Meta_substEq(v_snd_26_, v_fst_25_, v___x_27_, v_a_8_, v_a_9_, v_a_10_, v_a_11_);
if (lean_obj_tag(v___x_28_) == 0)
{
lean_object* v_a_29_; lean_object* v_snd_30_; 
v_a_29_ = lean_ctor_get(v___x_28_, 0);
lean_inc(v_a_29_);
lean_dec_ref(v___x_28_);
v_snd_30_ = lean_ctor_get(v_a_29_, 1);
lean_inc(v_snd_30_);
lean_dec(v_a_29_);
v_mvarId_7_ = v_snd_30_;
goto _start;
}
else
{
lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_39_; 
v_a_32_ = lean_ctor_get(v___x_28_, 0);
v_isSharedCheck_39_ = !lean_is_exclusive(v___x_28_);
if (v_isSharedCheck_39_ == 0)
{
v___x_34_ = v___x_28_;
v_isShared_35_ = v_isSharedCheck_39_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_28_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_39_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_37_; 
if (v_isShared_35_ == 0)
{
v___x_37_ = v___x_34_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v_a_32_);
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
else
{
lean_object* v_a_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_47_; 
v_a_40_ = lean_ctor_get(v___x_23_, 0);
v_isSharedCheck_47_ = !lean_is_exclusive(v___x_23_);
if (v_isSharedCheck_47_ == 0)
{
v___x_42_ = v___x_23_;
v_isShared_43_ = v_isSharedCheck_47_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_a_40_);
lean_dec(v___x_23_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_47_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v___x_45_; 
if (v_isShared_43_ == 0)
{
v___x_45_ = v___x_42_;
goto v_reusejp_44_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v_a_40_);
v___x_45_ = v_reuseFailAlloc_46_;
goto v_reusejp_44_;
}
v_reusejp_44_:
{
return v___x_45_;
}
}
}
}
else
{
lean_object* v_a_48_; lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_55_; 
v_a_48_ = lean_ctor_get(v___x_19_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_55_ == 0)
{
v___x_50_ = v___x_19_;
v_isShared_51_ = v_isSharedCheck_55_;
goto v_resetjp_49_;
}
else
{
lean_inc(v_a_48_);
lean_dec(v___x_19_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_55_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v___x_53_; 
if (v_isShared_51_ == 0)
{
v___x_53_ = v___x_50_;
goto v_reusejp_52_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v_a_48_);
v___x_53_ = v_reuseFailAlloc_54_;
goto v_reusejp_52_;
}
v_reusejp_52_:
{
return v___x_53_;
}
}
}
}
}
else
{
lean_object* v_a_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_63_; 
lean_dec(v_mvarId_7_);
v_a_56_ = lean_ctor_get(v___x_13_, 0);
v_isSharedCheck_63_ = !lean_is_exclusive(v___x_13_);
if (v_isSharedCheck_63_ == 0)
{
v___x_58_ = v___x_13_;
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_a_56_);
lean_dec(v___x_13_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_61_; 
if (v_isShared_59_ == 0)
{
v___x_61_ = v___x_58_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_a_56_);
v___x_61_ = v_reuseFailAlloc_62_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
return v___x_61_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_repeatIntroSubstRefl___boxed(lean_object* v_mvarId_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_repeatIntroSubstRefl(v_mvarId_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_);
lean_dec(v_a_68_);
lean_dec_ref(v_a_67_);
lean_dec(v_a_66_);
lean_dec_ref(v_a_65_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withPrimedNames___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__3___redArg(lean_object* v_xs_71_, lean_object* v_k_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withPrimedNamesImp(lean_box(0), v_xs_71_, v_k_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_);
if (lean_obj_tag(v___x_78_) == 0)
{
lean_object* v_a_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_86_; 
v_a_79_ = lean_ctor_get(v___x_78_, 0);
v_isSharedCheck_86_ = !lean_is_exclusive(v___x_78_);
if (v_isSharedCheck_86_ == 0)
{
v___x_81_ = v___x_78_;
v_isShared_82_ = v_isSharedCheck_86_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_a_79_);
lean_dec(v___x_78_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_86_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_84_; 
if (v_isShared_82_ == 0)
{
v___x_84_ = v___x_81_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v_a_79_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
return v___x_84_;
}
}
}
else
{
lean_object* v_a_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_94_; 
v_a_87_ = lean_ctor_get(v___x_78_, 0);
v_isSharedCheck_94_ = !lean_is_exclusive(v___x_78_);
if (v_isSharedCheck_94_ == 0)
{
v___x_89_ = v___x_78_;
v_isShared_90_ = v_isSharedCheck_94_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_a_87_);
lean_dec(v___x_78_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_94_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_92_; 
if (v_isShared_90_ == 0)
{
v___x_92_ = v___x_89_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v_a_87_);
v___x_92_ = v_reuseFailAlloc_93_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
return v___x_92_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withPrimedNames___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__3___redArg___boxed(lean_object* v_xs_95_, lean_object* v_k_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_Meta_withPrimedNames___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__3___redArg(v_xs_95_, v_k_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withPrimedNames___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__3(lean_object* v_00_u03b1_103_, lean_object* v_xs_104_, lean_object* v_k_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Lean_Meta_withPrimedNames___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__3___redArg(v_xs_104_, v_k_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withPrimedNames___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__3___boxed(lean_object* v_00_u03b1_112_, lean_object* v_xs_113_, lean_object* v_k_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l_Lean_Meta_withPrimedNames___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__3(v_00_u03b1_112_, v_xs_113_, v_k_114_, v___y_115_, v___y_116_, v___y_117_, v___y_118_);
lean_dec(v___y_118_);
lean_dec_ref(v___y_117_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5___redArg___lam__0(lean_object* v_k_121_, lean_object* v_b_122_, lean_object* v_c_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_){
_start:
{
lean_object* v___x_129_; 
lean_inc(v___y_127_);
lean_inc_ref(v___y_126_);
lean_inc(v___y_125_);
lean_inc_ref(v___y_124_);
v___x_129_ = lean_apply_7(v_k_121_, v_b_122_, v_c_123_, v___y_124_, v___y_125_, v___y_126_, v___y_127_, lean_box(0));
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5___redArg___lam__0___boxed(lean_object* v_k_130_, lean_object* v_b_131_, lean_object* v_c_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5___redArg___lam__0(v_k_130_, v_b_131_, v_c_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_);
lean_dec(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5___redArg(lean_object* v_type_139_, lean_object* v_maxFVars_x3f_140_, lean_object* v_k_141_, uint8_t v_cleanupAnnotations_142_, uint8_t v_whnfType_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
lean_object* v___f_149_; lean_object* v___x_150_; 
v___f_149_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_149_, 0, v_k_141_);
v___x_150_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_139_, v_maxFVars_x3f_140_, v___f_149_, v_cleanupAnnotations_142_, v_whnfType_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_);
if (lean_obj_tag(v___x_150_) == 0)
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_158_; 
v_a_151_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_158_ == 0)
{
v___x_153_ = v___x_150_;
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_150_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_156_; 
if (v_isShared_154_ == 0)
{
v___x_156_ = v___x_153_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_a_151_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
else
{
lean_object* v_a_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_166_; 
v_a_159_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_166_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_166_ == 0)
{
v___x_161_ = v___x_150_;
v_isShared_162_ = v_isSharedCheck_166_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_a_159_);
lean_dec(v___x_150_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_166_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v___x_164_; 
if (v_isShared_162_ == 0)
{
v___x_164_ = v___x_161_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_a_159_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5___redArg___boxed(lean_object* v_type_167_, lean_object* v_maxFVars_x3f_168_, lean_object* v_k_169_, lean_object* v_cleanupAnnotations_170_, lean_object* v_whnfType_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_177_; uint8_t v_whnfType_boxed_178_; lean_object* v_res_179_; 
v_cleanupAnnotations_boxed_177_ = lean_unbox(v_cleanupAnnotations_170_);
v_whnfType_boxed_178_ = lean_unbox(v_whnfType_171_);
v_res_179_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5___redArg(v_type_167_, v_maxFVars_x3f_168_, v_k_169_, v_cleanupAnnotations_boxed_177_, v_whnfType_boxed_178_, v___y_172_, v___y_173_, v___y_174_, v___y_175_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5(lean_object* v_00_u03b1_180_, lean_object* v_type_181_, lean_object* v_maxFVars_x3f_182_, lean_object* v_k_183_, uint8_t v_cleanupAnnotations_184_, uint8_t v_whnfType_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5___redArg(v_type_181_, v_maxFVars_x3f_182_, v_k_183_, v_cleanupAnnotations_184_, v_whnfType_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5___boxed(lean_object* v_00_u03b1_192_, lean_object* v_type_193_, lean_object* v_maxFVars_x3f_194_, lean_object* v_k_195_, lean_object* v_cleanupAnnotations_196_, lean_object* v_whnfType_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_203_; uint8_t v_whnfType_boxed_204_; lean_object* v_res_205_; 
v_cleanupAnnotations_boxed_203_ = lean_unbox(v_cleanupAnnotations_196_);
v_whnfType_boxed_204_ = lean_unbox(v_whnfType_197_);
v_res_205_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5(v_00_u03b1_192_, v_type_193_, v_maxFVars_x3f_194_, v_k_195_, v_cleanupAnnotations_boxed_203_, v_whnfType_boxed_204_, v___y_198_, v___y_199_, v___y_200_, v___y_201_);
lean_dec(v___y_201_);
lean_dec_ref(v___y_200_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__6___redArg(lean_object* v_e_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
uint8_t v___x_210_; 
v___x_210_ = l_Lean_Expr_hasMVar(v_e_206_);
if (v___x_210_ == 0)
{
lean_object* v___x_211_; 
v___x_211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_211_, 0, v_e_206_);
return v___x_211_;
}
else
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v_mctx_214_; lean_object* v___x_215_; lean_object* v_fst_216_; lean_object* v_snd_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v_cache_220_; lean_object* v_zetaDeltaFVarIds_221_; lean_object* v_postponed_222_; lean_object* v_diag_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_232_; 
v___x_212_ = lean_st_ref_get(v___y_208_);
lean_dec(v___x_212_);
v___x_213_ = lean_st_ref_get(v___y_207_);
v_mctx_214_ = lean_ctor_get(v___x_213_, 0);
lean_inc_ref(v_mctx_214_);
lean_dec(v___x_213_);
v___x_215_ = l_Lean_instantiateMVarsCore(v_mctx_214_, v_e_206_);
v_fst_216_ = lean_ctor_get(v___x_215_, 0);
lean_inc(v_fst_216_);
v_snd_217_ = lean_ctor_get(v___x_215_, 1);
lean_inc(v_snd_217_);
lean_dec_ref(v___x_215_);
v___x_218_ = lean_st_ref_get(v___y_208_);
lean_dec(v___x_218_);
v___x_219_ = lean_st_ref_take(v___y_207_);
v_cache_220_ = lean_ctor_get(v___x_219_, 1);
v_zetaDeltaFVarIds_221_ = lean_ctor_get(v___x_219_, 2);
v_postponed_222_ = lean_ctor_get(v___x_219_, 3);
v_diag_223_ = lean_ctor_get(v___x_219_, 4);
v_isSharedCheck_232_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_232_ == 0)
{
lean_object* v_unused_233_; 
v_unused_233_ = lean_ctor_get(v___x_219_, 0);
lean_dec(v_unused_233_);
v___x_225_ = v___x_219_;
v_isShared_226_ = v_isSharedCheck_232_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_diag_223_);
lean_inc(v_postponed_222_);
lean_inc(v_zetaDeltaFVarIds_221_);
lean_inc(v_cache_220_);
lean_dec(v___x_219_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_232_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v___x_228_; 
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 0, v_snd_217_);
v___x_228_ = v___x_225_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_snd_217_);
lean_ctor_set(v_reuseFailAlloc_231_, 1, v_cache_220_);
lean_ctor_set(v_reuseFailAlloc_231_, 2, v_zetaDeltaFVarIds_221_);
lean_ctor_set(v_reuseFailAlloc_231_, 3, v_postponed_222_);
lean_ctor_set(v_reuseFailAlloc_231_, 4, v_diag_223_);
v___x_228_ = v_reuseFailAlloc_231_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = lean_st_ref_set(v___y_207_, v___x_228_);
v___x_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_230_, 0, v_fst_216_);
return v___x_230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__6___redArg___boxed(lean_object* v_e_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__6___redArg(v_e_234_, v___y_235_, v___y_236_);
lean_dec(v___y_236_);
lean_dec(v___y_235_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__6(lean_object* v_e_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__6___redArg(v_e_239_, v___y_241_, v___y_243_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__6___boxed(lean_object* v_e_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__6(v_e_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_);
lean_dec(v___y_250_);
lean_dec_ref(v___y_249_);
lean_dec(v___y_248_);
lean_dec_ref(v___y_247_);
return v_res_252_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__1___closed__0(void){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = lean_mk_string_unchecked("_eq", 3, 3);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__1(lean_object* v_as_254_, size_t v_sz_255_, size_t v_i_256_, lean_object* v_b_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_){
_start:
{
lean_object* v_a_264_; uint8_t v___x_268_; 
v___x_268_ = lean_usize_dec_lt(v_i_256_, v_sz_255_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; 
v___x_269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_269_, 0, v_b_257_);
return v___x_269_;
}
else
{
lean_object* v_snd_270_; lean_object* v_fst_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_339_; 
v_snd_270_ = lean_ctor_get(v_b_257_, 1);
v_fst_271_ = lean_ctor_get(v_b_257_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v_b_257_);
if (v_isSharedCheck_339_ == 0)
{
v___x_273_ = v_b_257_;
v_isShared_274_ = v_isSharedCheck_339_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_snd_270_);
lean_inc(v_fst_271_);
lean_dec(v_b_257_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_339_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v_array_275_; lean_object* v_start_276_; lean_object* v_stop_277_; uint8_t v___x_278_; 
v_array_275_ = lean_ctor_get(v_snd_270_, 0);
v_start_276_ = lean_ctor_get(v_snd_270_, 1);
v_stop_277_ = lean_ctor_get(v_snd_270_, 2);
v___x_278_ = lean_nat_dec_lt(v_start_276_, v_stop_277_);
if (v___x_278_ == 0)
{
lean_object* v___x_280_; 
if (v_isShared_274_ == 0)
{
v___x_280_ = v___x_273_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_fst_271_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v_snd_270_);
v___x_280_ = v_reuseFailAlloc_282_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
lean_object* v___x_281_; 
v___x_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
return v___x_281_;
}
}
else
{
lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_335_; 
lean_inc(v_stop_277_);
lean_inc(v_start_276_);
lean_inc_ref(v_array_275_);
v_isSharedCheck_335_ = !lean_is_exclusive(v_snd_270_);
if (v_isSharedCheck_335_ == 0)
{
lean_object* v_unused_336_; lean_object* v_unused_337_; lean_object* v_unused_338_; 
v_unused_336_ = lean_ctor_get(v_snd_270_, 2);
lean_dec(v_unused_336_);
v_unused_337_ = lean_ctor_get(v_snd_270_, 1);
lean_dec(v_unused_337_);
v_unused_338_ = lean_ctor_get(v_snd_270_, 0);
lean_dec(v_unused_338_);
v___x_284_ = v_snd_270_;
v_isShared_285_ = v_isSharedCheck_335_;
goto v_resetjp_283_;
}
else
{
lean_dec(v_snd_270_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_335_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v_a_286_; lean_object* v___x_287_; 
v_a_286_ = lean_array_uget_borrowed(v_as_254_, v_i_256_);
lean_inc(v_a_286_);
v___x_287_ = l_Lean_Meta_isProof(v_a_286_, v___y_258_, v___y_259_, v___y_260_, v___y_261_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v_a_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_293_; 
v_a_288_ = lean_ctor_get(v___x_287_, 0);
lean_inc(v_a_288_);
lean_dec_ref(v___x_287_);
v___x_289_ = lean_array_fget(v_array_275_, v_start_276_);
v___x_290_ = lean_unsigned_to_nat(1u);
v___x_291_ = lean_nat_add(v_start_276_, v___x_290_);
lean_dec(v_start_276_);
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 1, v___x_291_);
v___x_293_ = v___x_284_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_array_275_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v___x_291_);
lean_ctor_set(v_reuseFailAlloc_326_, 2, v_stop_277_);
v___x_293_ = v_reuseFailAlloc_326_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
uint8_t v___x_294_; 
v___x_294_ = lean_unbox(v_a_288_);
lean_dec(v_a_288_);
if (v___x_294_ == 0)
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = l_Lean_Expr_fvarId_x21(v_a_286_);
v___x_296_ = l_Lean_FVarId_getUserName___redArg(v___x_295_, v___y_258_, v___y_260_, v___y_261_);
if (lean_obj_tag(v___x_296_) == 0)
{
lean_object* v_a_297_; lean_object* v___x_298_; 
v_a_297_ = lean_ctor_get(v___x_296_, 0);
lean_inc(v_a_297_);
lean_dec_ref(v___x_296_);
lean_inc(v_a_286_);
v___x_298_ = l_Lean_Meta_mkEqHEq(v_a_286_, v___x_289_, v___y_258_, v___y_259_, v___y_260_, v___y_261_);
if (lean_obj_tag(v___x_298_) == 0)
{
lean_object* v_a_299_; lean_object* v___x_300_; lean_object* v___x_301_; uint8_t v___x_302_; lean_object* v___x_303_; lean_object* v___x_305_; 
v_a_299_ = lean_ctor_get(v___x_298_, 0);
lean_inc(v_a_299_);
lean_dec_ref(v___x_298_);
v___x_300_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__1___closed__0);
v___x_301_ = lean_name_append_after(v_a_297_, v___x_300_);
v___x_302_ = 0;
v___x_303_ = l_Lean_mkForall(v___x_301_, v___x_302_, v_a_299_, v_fst_271_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 1, v___x_293_);
lean_ctor_set(v___x_273_, 0, v___x_303_);
v___x_305_ = v___x_273_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v___x_303_);
lean_ctor_set(v_reuseFailAlloc_306_, 1, v___x_293_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
v_a_264_ = v___x_305_;
goto v___jp_263_;
}
}
else
{
lean_object* v_a_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_314_; 
lean_dec(v_a_297_);
lean_dec_ref(v___x_293_);
lean_del_object(v___x_273_);
lean_dec(v_fst_271_);
v_a_307_ = lean_ctor_get(v___x_298_, 0);
v_isSharedCheck_314_ = !lean_is_exclusive(v___x_298_);
if (v_isSharedCheck_314_ == 0)
{
v___x_309_ = v___x_298_;
v_isShared_310_ = v_isSharedCheck_314_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_a_307_);
lean_dec(v___x_298_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_314_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_312_; 
if (v_isShared_310_ == 0)
{
v___x_312_ = v___x_309_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_a_307_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
}
else
{
lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_322_; 
lean_dec_ref(v___x_293_);
lean_dec(v___x_289_);
lean_del_object(v___x_273_);
lean_dec(v_fst_271_);
v_a_315_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_322_ == 0)
{
v___x_317_ = v___x_296_;
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v___x_296_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_320_; 
if (v_isShared_318_ == 0)
{
v___x_320_ = v___x_317_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_315_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
}
else
{
lean_object* v___x_324_; 
lean_dec(v___x_289_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 1, v___x_293_);
v___x_324_ = v___x_273_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_fst_271_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v___x_293_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
v_a_264_ = v___x_324_;
goto v___jp_263_;
}
}
}
}
else
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_334_; 
lean_del_object(v___x_284_);
lean_dec(v_stop_277_);
lean_dec(v_start_276_);
lean_dec_ref(v_array_275_);
lean_del_object(v___x_273_);
lean_dec(v_fst_271_);
v_a_327_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___x_287_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_287_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_332_; 
if (v_isShared_330_ == 0)
{
v___x_332_ = v___x_329_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_a_327_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
}
}
}
}
v___jp_263_:
{
size_t v___x_265_; size_t v___x_266_; 
v___x_265_ = ((size_t)1ULL);
v___x_266_ = lean_usize_add(v_i_256_, v___x_265_);
v_i_256_ = v___x_266_;
v_b_257_ = v_a_264_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__1___boxed(lean_object* v_as_340_, lean_object* v_sz_341_, lean_object* v_i_342_, lean_object* v_b_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_){
_start:
{
size_t v_sz_boxed_349_; size_t v_i_boxed_350_; lean_object* v_res_351_; 
v_sz_boxed_349_ = lean_unbox_usize(v_sz_341_);
lean_dec(v_sz_341_);
v_i_boxed_350_ = lean_unbox_usize(v_i_342_);
lean_dec(v_i_342_);
v_res_351_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__1(v_as_340_, v_sz_boxed_349_, v_i_boxed_350_, v_b_343_, v___y_344_, v___y_345_, v___y_346_, v___y_347_);
lean_dec(v___y_347_);
lean_dec_ref(v___y_346_);
lean_dec(v___y_345_);
lean_dec_ref(v___y_344_);
lean_dec_ref(v_as_340_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__0(lean_object* v_name_352_, lean_object* v_us_353_, lean_object* v_xs1_354_, lean_object* v_x1_355_, lean_object* v_xs2_356_, lean_object* v_x2_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v_ctorIdxApp1_366_; lean_object* v___x_367_; lean_object* v_ctorIdxApp2_368_; lean_object* v___x_369_; 
v___x_363_ = l_mkCtorIdxName(v_name_352_);
v___x_364_ = l_Lean_mkConst(v___x_363_, v_us_353_);
v___x_365_ = lean_array_push(v_xs1_354_, v_x1_355_);
lean_inc_ref(v___x_364_);
v_ctorIdxApp1_366_ = l_Lean_mkAppN(v___x_364_, v___x_365_);
v___x_367_ = lean_array_push(v_xs2_356_, v_x2_357_);
v_ctorIdxApp2_368_ = l_Lean_mkAppN(v___x_364_, v___x_367_);
v___x_369_ = l_Lean_Meta_mkEq(v_ctorIdxApp1_366_, v_ctorIdxApp2_368_, v___y_358_, v___y_359_, v___y_360_, v___y_361_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v_a_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; size_t v_sz_377_; size_t v___x_378_; lean_object* v___x_379_; 
v_a_370_ = lean_ctor_get(v___x_369_, 0);
lean_inc(v_a_370_);
lean_dec_ref(v___x_369_);
lean_inc_ref(v___x_367_);
v___x_371_ = l_Array_reverse___redArg(v___x_367_);
v___x_372_ = lean_unsigned_to_nat(0u);
v___x_373_ = lean_array_get_size(v___x_371_);
v___x_374_ = l_Array_toSubarray___redArg(v___x_371_, v___x_372_, v___x_373_);
lean_inc_ref(v___x_365_);
v___x_375_ = l_Array_reverse___redArg(v___x_365_);
v___x_376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_376_, 0, v_a_370_);
lean_ctor_set(v___x_376_, 1, v___x_374_);
v_sz_377_ = lean_array_size(v___x_375_);
v___x_378_ = ((size_t)0ULL);
v___x_379_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__1(v___x_375_, v_sz_377_, v___x_378_, v___x_376_, v___y_358_, v___y_359_, v___y_360_, v___y_361_);
lean_dec_ref(v___x_375_);
if (lean_obj_tag(v___x_379_) == 0)
{
lean_object* v_a_380_; lean_object* v_fst_381_; lean_object* v___x_382_; uint8_t v___x_383_; uint8_t v___x_384_; uint8_t v___x_385_; lean_object* v___x_386_; 
v_a_380_ = lean_ctor_get(v___x_379_, 0);
lean_inc(v_a_380_);
lean_dec_ref(v___x_379_);
v_fst_381_ = lean_ctor_get(v_a_380_, 0);
lean_inc(v_fst_381_);
lean_dec(v_a_380_);
v___x_382_ = l_Array_append___redArg(v___x_365_, v___x_367_);
lean_dec_ref(v___x_367_);
v___x_383_ = 0;
v___x_384_ = 1;
v___x_385_ = 1;
v___x_386_ = l_Lean_Meta_mkForallFVars(v___x_382_, v_fst_381_, v___x_383_, v___x_384_, v___x_384_, v___x_385_, v___y_358_, v___y_359_, v___y_360_, v___y_361_);
lean_dec_ref(v___x_382_);
return v___x_386_;
}
else
{
lean_object* v_a_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_394_; 
lean_dec_ref(v___x_367_);
lean_dec_ref(v___x_365_);
v_a_387_ = lean_ctor_get(v___x_379_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_394_ == 0)
{
v___x_389_ = v___x_379_;
v_isShared_390_ = v_isSharedCheck_394_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_a_387_);
lean_dec(v___x_379_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_394_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___x_392_; 
if (v_isShared_390_ == 0)
{
v___x_392_ = v___x_389_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v_a_387_);
v___x_392_ = v_reuseFailAlloc_393_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
return v___x_392_;
}
}
}
}
else
{
lean_dec_ref(v___x_367_);
lean_dec_ref(v___x_365_);
return v___x_369_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__0___boxed(lean_object* v_name_395_, lean_object* v_us_396_, lean_object* v_xs1_397_, lean_object* v_x1_398_, lean_object* v_xs2_399_, lean_object* v_x2_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__0(v_name_395_, v_us_396_, v_xs1_397_, v_x1_398_, v_xs2_399_, v_x2_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_);
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2___redArg___lam__0(lean_object* v_k_407_, lean_object* v_b_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_){
_start:
{
lean_object* v___x_414_; 
lean_inc(v___y_412_);
lean_inc_ref(v___y_411_);
lean_inc(v___y_410_);
lean_inc_ref(v___y_409_);
v___x_414_ = lean_apply_6(v_k_407_, v_b_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, lean_box(0));
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2___redArg___lam__0___boxed(lean_object* v_k_415_, lean_object* v_b_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2___redArg___lam__0(v_k_415_, v_b_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_);
lean_dec(v___y_420_);
lean_dec_ref(v___y_419_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2___redArg(lean_object* v_name_423_, uint8_t v_bi_424_, lean_object* v_type_425_, lean_object* v_k_426_, uint8_t v_kind_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_){
_start:
{
lean_object* v___f_433_; lean_object* v___x_434_; 
v___f_433_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_433_, 0, v_k_426_);
v___x_434_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_423_, v_bi_424_, v_type_425_, v___f_433_, v_kind_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_);
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v_a_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_442_; 
v_a_435_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_442_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_442_ == 0)
{
v___x_437_ = v___x_434_;
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_a_435_);
lean_dec(v___x_434_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_440_; 
if (v_isShared_438_ == 0)
{
v___x_440_ = v___x_437_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_a_435_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
else
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
v_a_443_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_450_ == 0)
{
v___x_445_ = v___x_434_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_434_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
if (v_isShared_446_ == 0)
{
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_a_443_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2___redArg___boxed(lean_object* v_name_451_, lean_object* v_bi_452_, lean_object* v_type_453_, lean_object* v_k_454_, lean_object* v_kind_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_){
_start:
{
uint8_t v_bi_boxed_461_; uint8_t v_kind_boxed_462_; lean_object* v_res_463_; 
v_bi_boxed_461_ = lean_unbox(v_bi_452_);
v_kind_boxed_462_ = lean_unbox(v_kind_455_);
v_res_463_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2___redArg(v_name_451_, v_bi_boxed_461_, v_type_453_, v_k_454_, v_kind_boxed_462_, v___y_456_, v___y_457_, v___y_458_, v___y_459_);
lean_dec(v___y_459_);
lean_dec_ref(v___y_458_);
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2___redArg(lean_object* v_name_464_, lean_object* v_type_465_, lean_object* v_k_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
uint8_t v___x_472_; uint8_t v___x_473_; lean_object* v___x_474_; 
v___x_472_ = 0;
v___x_473_ = 0;
v___x_474_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2___redArg(v_name_464_, v___x_472_, v_type_465_, v_k_466_, v___x_473_, v___y_467_, v___y_468_, v___y_469_, v___y_470_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2___redArg___boxed(lean_object* v_name_475_, lean_object* v_type_476_, lean_object* v_k_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2___redArg(v_name_475_, v_type_476_, v_k_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_);
lean_dec(v___y_481_);
lean_dec_ref(v___y_480_);
lean_dec(v___y_479_);
lean_dec_ref(v___y_478_);
return v_res_483_;
}
}
static lean_object* _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1___closed__0(void){
_start:
{
lean_object* v___x_484_; 
v___x_484_ = lean_mk_string_unchecked("x'", 2, 2);
return v___x_484_;
}
}
static lean_object* _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1___closed__1(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1___closed__0, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1___closed__0_once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1___closed__0);
v___x_486_ = l_Lean_Name_mkStr1(v___x_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1(lean_object* v_name_487_, lean_object* v_us_488_, lean_object* v_xs1_489_, lean_object* v_xs2_490_, lean_object* v___x_491_, lean_object* v_x1_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
lean_object* v___f_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
lean_inc_ref(v_xs2_490_);
v___f_498_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__0___boxed), 11, 5);
lean_closure_set(v___f_498_, 0, v_name_487_);
lean_closure_set(v___f_498_, 1, v_us_488_);
lean_closure_set(v___f_498_, 2, v_xs1_489_);
lean_closure_set(v___f_498_, 3, v_x1_492_);
lean_closure_set(v___f_498_, 4, v_xs2_490_);
v___x_499_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1___closed__1, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1___closed__1_once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1___closed__1);
v___x_500_ = l_Lean_mkAppN(v___x_491_, v_xs2_490_);
lean_dec_ref(v_xs2_490_);
v___x_501_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2___redArg(v___x_499_, v___x_500_, v___f_498_, v___y_493_, v___y_494_, v___y_495_, v___y_496_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1___boxed(lean_object* v_name_502_, lean_object* v_us_503_, lean_object* v_xs1_504_, lean_object* v_xs2_505_, lean_object* v___x_506_, lean_object* v_x1_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1(v_name_502_, v_us_503_, v_xs1_504_, v_xs2_505_, v___x_506_, v_x1_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_);
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__6___redArg(lean_object* v_bs_514_, lean_object* v_k_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_){
_start:
{
lean_object* v___x_521_; 
v___x_521_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp(lean_box(0), v_bs_514_, v_k_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v_a_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_529_; 
v_a_522_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_529_ == 0)
{
v___x_524_ = v___x_521_;
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_a_522_);
lean_dec(v___x_521_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_527_; 
if (v_isShared_525_ == 0)
{
v___x_527_ = v___x_524_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v_a_522_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
}
else
{
lean_object* v_a_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_537_; 
v_a_530_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_537_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_537_ == 0)
{
v___x_532_ = v___x_521_;
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_a_530_);
lean_dec(v___x_521_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___x_535_; 
if (v_isShared_533_ == 0)
{
v___x_535_ = v___x_532_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_a_530_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
return v___x_535_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__6___redArg___boxed(lean_object* v_bs_538_, lean_object* v_k_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_){
_start:
{
lean_object* v_res_545_; 
v_res_545_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__6___redArg(v_bs_538_, v_k_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
lean_dec_ref(v_bs_538_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__5(size_t v_sz_546_, size_t v_i_547_, lean_object* v_bs_548_){
_start:
{
uint8_t v___x_549_; 
v___x_549_ = lean_usize_dec_lt(v_i_547_, v_sz_546_);
if (v___x_549_ == 0)
{
return v_bs_548_;
}
else
{
lean_object* v_v_550_; lean_object* v___x_551_; lean_object* v_bs_x27_552_; lean_object* v___x_553_; uint8_t v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; size_t v___x_557_; size_t v___x_558_; lean_object* v___x_559_; 
v_v_550_ = lean_array_uget(v_bs_548_, v_i_547_);
v___x_551_ = lean_unsigned_to_nat(0u);
v_bs_x27_552_ = lean_array_uset(v_bs_548_, v_i_547_, v___x_551_);
v___x_553_ = l_Lean_Expr_fvarId_x21(v_v_550_);
lean_dec(v_v_550_);
v___x_554_ = 1;
v___x_555_ = lean_box(v___x_554_);
v___x_556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_556_, 0, v___x_553_);
lean_ctor_set(v___x_556_, 1, v___x_555_);
v___x_557_ = ((size_t)1ULL);
v___x_558_ = lean_usize_add(v_i_547_, v___x_557_);
v___x_559_ = lean_array_uset(v_bs_x27_552_, v_i_547_, v___x_556_);
v_i_547_ = v___x_558_;
v_bs_548_ = v___x_559_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__5___boxed(lean_object* v_sz_561_, lean_object* v_i_562_, lean_object* v_bs_563_){
_start:
{
size_t v_sz_boxed_564_; size_t v_i_boxed_565_; lean_object* v_res_566_; 
v_sz_boxed_564_ = lean_unbox_usize(v_sz_561_);
lean_dec(v_sz_561_);
v_i_boxed_565_ = lean_unbox_usize(v_i_562_);
lean_dec(v_i_562_);
v_res_566_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__5(v_sz_boxed_564_, v_i_boxed_565_, v_bs_563_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4___redArg(lean_object* v_bs_567_, lean_object* v_k_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
size_t v_sz_574_; size_t v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v_sz_574_ = lean_array_size(v_bs_567_);
v___x_575_ = ((size_t)0ULL);
v___x_576_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__5(v_sz_574_, v___x_575_, v_bs_567_);
v___x_577_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__6___redArg(v___x_576_, v_k_568_, v___y_569_, v___y_570_, v___y_571_, v___y_572_);
lean_dec_ref(v___x_576_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4___redArg___boxed(lean_object* v_bs_578_, lean_object* v_k_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4___redArg(v_bs_578_, v_k_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_);
lean_dec(v___y_583_);
lean_dec_ref(v___y_582_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4(lean_object* v_00_u03b1_586_, lean_object* v_bs_587_, lean_object* v_k_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4___redArg(v_bs_587_, v_k_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4___boxed(lean_object* v_00_u03b1_595_, lean_object* v_bs_596_, lean_object* v_k_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4(v_00_u03b1_595_, v_bs_596_, v_k_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
lean_dec(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2(lean_object* v_00_u03b1_604_, lean_object* v_name_605_, lean_object* v_type_606_, lean_object* v_k_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2___redArg(v_name_605_, v_type_606_, v_k_607_, v___y_608_, v___y_609_, v___y_610_, v___y_611_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2___boxed(lean_object* v_00_u03b1_614_, lean_object* v_name_615_, lean_object* v_type_616_, lean_object* v_k_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2(v_00_u03b1_614_, v_name_615_, v_type_616_, v_k_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_);
lean_dec(v___y_621_);
lean_dec_ref(v___y_620_);
lean_dec(v___y_619_);
lean_dec_ref(v___y_618_);
return v_res_623_;
}
}
static lean_object* _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2___closed__0(void){
_start:
{
lean_object* v___x_624_; 
v___x_624_ = lean_mk_string_unchecked("x", 1, 1);
return v___x_624_;
}
}
static lean_object* _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2___closed__1(void){
_start:
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2___closed__0, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2___closed__0_once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2___closed__0);
v___x_626_ = l_Lean_Name_mkStr1(v___x_625_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2(lean_object* v_name_627_, lean_object* v_us_628_, lean_object* v_xs1_629_, lean_object* v_xs2_630_, lean_object* v_x_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___f_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_637_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2___closed__1, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2___closed__1_once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2___closed__1);
lean_inc(v_us_628_);
lean_inc(v_name_627_);
v___x_638_ = l_Lean_mkConst(v_name_627_, v_us_628_);
lean_inc_ref(v___x_638_);
lean_inc_ref_n(v_xs2_630_, 2);
lean_inc_ref(v_xs1_629_);
v___f_639_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__1___boxed), 11, 5);
lean_closure_set(v___f_639_, 0, v_name_627_);
lean_closure_set(v___f_639_, 1, v_us_628_);
lean_closure_set(v___f_639_, 2, v_xs1_629_);
lean_closure_set(v___f_639_, 3, v_xs2_630_);
lean_closure_set(v___f_639_, 4, v___x_638_);
v___x_640_ = l_Lean_mkAppN(v___x_638_, v_xs1_629_);
v___x_641_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2___boxed), 9, 4);
lean_closure_set(v___x_641_, 0, lean_box(0));
lean_closure_set(v___x_641_, 1, v___x_637_);
lean_closure_set(v___x_641_, 2, v___x_640_);
lean_closure_set(v___x_641_, 3, v___f_639_);
v___x_642_ = lean_alloc_closure((void*)(l_Lean_Meta_withPrimedNames___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__3___boxed), 8, 3);
lean_closure_set(v___x_642_, 0, lean_box(0));
lean_closure_set(v___x_642_, 1, v_xs2_630_);
lean_closure_set(v___x_642_, 2, v___x_641_);
v___x_643_ = lean_alloc_closure((void*)(l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4___boxed), 8, 3);
lean_closure_set(v___x_643_, 0, lean_box(0));
lean_closure_set(v___x_643_, 1, v_xs2_630_);
lean_closure_set(v___x_643_, 2, v___x_642_);
v___x_644_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4___redArg(v_xs1_629_, v___x_643_, v___y_632_, v___y_633_, v___y_634_, v___y_635_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2___boxed(lean_object* v_name_645_, lean_object* v_us_646_, lean_object* v_xs1_647_, lean_object* v_xs2_648_, lean_object* v_x_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2(v_name_645_, v_us_646_, v_xs1_647_, v_xs2_648_, v_x_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec(v___y_651_);
lean_dec_ref(v___y_650_);
lean_dec_ref(v_x_649_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__3(lean_object* v_name_656_, lean_object* v_us_657_, lean_object* v_type_658_, lean_object* v___x_659_, lean_object* v_xs1_660_, lean_object* v_x_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_){
_start:
{
lean_object* v___f_667_; uint8_t v___x_668_; lean_object* v___x_669_; 
v___f_667_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__2___boxed), 10, 3);
lean_closure_set(v___f_667_, 0, v_name_656_);
lean_closure_set(v___f_667_, 1, v_us_657_);
lean_closure_set(v___f_667_, 2, v_xs1_660_);
v___x_668_ = 0;
v___x_669_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5___redArg(v_type_658_, v___x_659_, v___f_667_, v___x_668_, v___x_668_, v___y_662_, v___y_663_, v___y_664_, v___y_665_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__3___boxed(lean_object* v_name_670_, lean_object* v_us_671_, lean_object* v_type_672_, lean_object* v___x_673_, lean_object* v_xs1_674_, lean_object* v_x_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__3(v_name_670_, v_us_671_, v_type_672_, v___x_673_, v_xs1_674_, v_x_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_);
lean_dec(v___y_679_);
lean_dec_ref(v___y_678_);
lean_dec(v___y_677_);
lean_dec_ref(v___y_676_);
lean_dec_ref(v_x_675_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__0(lean_object* v_a_682_, lean_object* v_a_683_){
_start:
{
if (lean_obj_tag(v_a_682_) == 0)
{
lean_object* v___x_684_; 
v___x_684_ = l_List_reverse___redArg(v_a_683_);
return v___x_684_;
}
else
{
lean_object* v_head_685_; lean_object* v_tail_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_695_; 
v_head_685_ = lean_ctor_get(v_a_682_, 0);
v_tail_686_ = lean_ctor_get(v_a_682_, 1);
v_isSharedCheck_695_ = !lean_is_exclusive(v_a_682_);
if (v_isSharedCheck_695_ == 0)
{
v___x_688_ = v_a_682_;
v_isShared_689_ = v_isSharedCheck_695_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_tail_686_);
lean_inc(v_head_685_);
lean_dec(v_a_682_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_695_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_690_; lean_object* v___x_692_; 
v___x_690_ = l_Lean_mkLevelParam(v_head_685_);
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 1, v_a_683_);
lean_ctor_set(v___x_688_, 0, v___x_690_);
v___x_692_ = v___x_688_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v___x_690_);
lean_ctor_set(v_reuseFailAlloc_694_, 1, v_a_683_);
v___x_692_ = v_reuseFailAlloc_694_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
v_a_682_ = v_tail_686_;
v_a_683_ = v___x_692_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f(lean_object* v_thmName_696_, lean_object* v_indVal_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_){
_start:
{
lean_object* v_toConstantVal_703_; lean_object* v_numParams_704_; lean_object* v_numIndices_705_; lean_object* v_name_706_; lean_object* v_levelParams_707_; lean_object* v_type_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_785_; 
v_toConstantVal_703_ = lean_ctor_get(v_indVal_697_, 0);
lean_inc_ref(v_toConstantVal_703_);
v_numParams_704_ = lean_ctor_get(v_indVal_697_, 1);
lean_inc(v_numParams_704_);
v_numIndices_705_ = lean_ctor_get(v_indVal_697_, 2);
lean_inc(v_numIndices_705_);
lean_dec_ref(v_indVal_697_);
v_name_706_ = lean_ctor_get(v_toConstantVal_703_, 0);
v_levelParams_707_ = lean_ctor_get(v_toConstantVal_703_, 1);
v_type_708_ = lean_ctor_get(v_toConstantVal_703_, 2);
v_isSharedCheck_785_ = !lean_is_exclusive(v_toConstantVal_703_);
if (v_isSharedCheck_785_ == 0)
{
v___x_710_ = v_toConstantVal_703_;
v_isShared_711_ = v_isSharedCheck_785_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_type_708_);
lean_inc(v_levelParams_707_);
lean_inc(v_name_706_);
lean_dec(v_toConstantVal_703_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_785_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_712_; lean_object* v_us_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___f_716_; uint8_t v___x_717_; lean_object* v___x_718_; 
v___x_712_ = lean_box(0);
lean_inc(v_levelParams_707_);
v_us_713_ = l_List_mapTR_loop___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__0(v_levelParams_707_, v___x_712_);
v___x_714_ = lean_nat_add(v_numParams_704_, v_numIndices_705_);
lean_dec(v_numIndices_705_);
lean_dec(v_numParams_704_);
lean_inc(v___x_714_);
v___x_715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_715_, 0, v___x_714_);
lean_inc_ref(v___x_715_);
lean_inc_ref(v_type_708_);
v___f_716_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___lam__3___boxed), 11, 4);
lean_closure_set(v___f_716_, 0, v_name_706_);
lean_closure_set(v___f_716_, 1, v_us_713_);
lean_closure_set(v___f_716_, 2, v_type_708_);
lean_closure_set(v___f_716_, 3, v___x_715_);
v___x_717_ = 0;
v___x_718_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__5___redArg(v_type_708_, v___x_715_, v___f_716_, v___x_717_, v___x_717_, v_a_698_, v_a_699_, v_a_700_, v_a_701_);
if (lean_obj_tag(v___x_718_) == 0)
{
lean_object* v_a_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v_a_719_ = lean_ctor_get(v___x_718_, 0);
lean_inc_n(v_a_719_, 2);
lean_dec_ref(v___x_718_);
v___x_720_ = lean_box(0);
v___x_721_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_719_, v___x_720_, v_a_698_, v_a_699_, v_a_700_, v_a_701_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v_a_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v_a_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_a_722_);
lean_dec_ref(v___x_721_);
v___x_723_ = l_Lean_Expr_mvarId_x21(v_a_722_);
v___x_724_ = lean_unsigned_to_nat(2u);
v___x_725_ = lean_unsigned_to_nat(1u);
v___x_726_ = lean_nat_add(v___x_714_, v___x_725_);
lean_dec(v___x_714_);
v___x_727_ = lean_nat_mul(v___x_724_, v___x_726_);
lean_dec(v___x_726_);
v___x_728_ = l_Lean_Meta_introNCore(v___x_723_, v___x_727_, v___x_712_, v___x_717_, v___x_717_, v_a_698_, v_a_699_, v_a_700_, v_a_701_);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_object* v_a_729_; lean_object* v_snd_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_759_; 
v_a_729_ = lean_ctor_get(v___x_728_, 0);
lean_inc(v_a_729_);
lean_dec_ref(v___x_728_);
v_snd_730_ = lean_ctor_get(v_a_729_, 1);
v_isSharedCheck_759_ = !lean_is_exclusive(v_a_729_);
if (v_isSharedCheck_759_ == 0)
{
lean_object* v_unused_760_; 
v_unused_760_ = lean_ctor_get(v_a_729_, 0);
lean_dec(v_unused_760_);
v___x_732_ = v_a_729_;
v_isShared_733_ = v_isSharedCheck_759_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_snd_730_);
lean_dec(v_a_729_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_759_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_734_; 
v___x_734_ = l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_repeatIntroSubstRefl(v_snd_730_, v_a_698_, v_a_699_, v_a_700_, v_a_701_);
if (lean_obj_tag(v___x_734_) == 0)
{
lean_object* v___x_735_; lean_object* v_a_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_750_; 
lean_dec_ref(v___x_734_);
v___x_735_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__6___redArg(v_a_722_, v_a_699_, v_a_701_);
v_a_736_ = lean_ctor_get(v___x_735_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_750_ == 0)
{
v___x_738_ = v___x_735_;
v_isShared_739_ = v_isSharedCheck_750_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_a_736_);
lean_dec(v___x_735_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_750_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_741_; 
lean_inc(v_thmName_696_);
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 2, v_a_719_);
lean_ctor_set(v___x_710_, 0, v_thmName_696_);
v___x_741_ = v___x_710_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_thmName_696_);
lean_ctor_set(v_reuseFailAlloc_749_, 1, v_levelParams_707_);
lean_ctor_set(v_reuseFailAlloc_749_, 2, v_a_719_);
v___x_741_ = v_reuseFailAlloc_749_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v___x_743_; 
if (v_isShared_733_ == 0)
{
lean_ctor_set_tag(v___x_732_, 1);
lean_ctor_set(v___x_732_, 1, v___x_712_);
lean_ctor_set(v___x_732_, 0, v_thmName_696_);
v___x_743_ = v___x_732_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_thmName_696_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v___x_712_);
v___x_743_ = v_reuseFailAlloc_748_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
lean_object* v___x_744_; lean_object* v___x_746_; 
v___x_744_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_744_, 0, v___x_741_);
lean_ctor_set(v___x_744_, 1, v_a_736_);
lean_ctor_set(v___x_744_, 2, v___x_743_);
if (v_isShared_739_ == 0)
{
lean_ctor_set(v___x_738_, 0, v___x_744_);
v___x_746_ = v___x_738_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_744_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
}
}
else
{
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
lean_del_object(v___x_732_);
lean_dec(v_a_722_);
lean_dec(v_a_719_);
lean_del_object(v___x_710_);
lean_dec(v_levelParams_707_);
lean_dec(v_thmName_696_);
v_a_751_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_734_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_734_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_756_; 
if (v_isShared_754_ == 0)
{
v___x_756_ = v___x_753_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_a_751_);
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
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_768_; 
lean_dec(v_a_722_);
lean_dec(v_a_719_);
lean_del_object(v___x_710_);
lean_dec(v_levelParams_707_);
lean_dec(v_thmName_696_);
v_a_761_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_768_ == 0)
{
v___x_763_ = v___x_728_;
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v___x_728_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_766_; 
if (v_isShared_764_ == 0)
{
v___x_766_ = v___x_763_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_a_761_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
}
else
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
lean_dec(v_a_719_);
lean_dec(v___x_714_);
lean_del_object(v___x_710_);
lean_dec(v_levelParams_707_);
lean_dec(v_thmName_696_);
v_a_769_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_721_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_721_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
else
{
lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_784_; 
lean_dec(v___x_714_);
lean_del_object(v___x_710_);
lean_dec(v_levelParams_707_);
lean_dec(v_thmName_696_);
v_a_777_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_784_ == 0)
{
v___x_779_ = v___x_718_;
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v___x_718_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f___boxed(lean_object* v_thmName_786_, lean_object* v_indVal_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f(v_thmName_786_, v_indVal_787_, v_a_788_, v_a_789_, v_a_790_, v_a_791_);
lean_dec(v_a_791_);
lean_dec_ref(v_a_790_);
lean_dec(v_a_789_);
lean_dec_ref(v_a_788_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2(lean_object* v_00_u03b1_794_, lean_object* v_name_795_, uint8_t v_bi_796_, lean_object* v_type_797_, lean_object* v_k_798_, uint8_t v_kind_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_){
_start:
{
lean_object* v___x_805_; 
v___x_805_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2___redArg(v_name_795_, v_bi_796_, v_type_797_, v_k_798_, v_kind_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
return v___x_805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2___boxed(lean_object* v_00_u03b1_806_, lean_object* v_name_807_, lean_object* v_bi_808_, lean_object* v_type_809_, lean_object* v_k_810_, lean_object* v_kind_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_){
_start:
{
uint8_t v_bi_boxed_817_; uint8_t v_kind_boxed_818_; lean_object* v_res_819_; 
v_bi_boxed_817_ = lean_unbox(v_bi_808_);
v_kind_boxed_818_ = lean_unbox(v_kind_811_);
v_res_819_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__2_spec__2(v_00_u03b1_806_, v_name_807_, v_bi_boxed_817_, v_type_809_, v_k_810_, v_kind_boxed_818_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
lean_dec(v___y_815_);
lean_dec_ref(v___y_814_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__6(lean_object* v_00_u03b1_820_, lean_object* v_bs_821_, lean_object* v_k_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
lean_object* v___x_828_; 
v___x_828_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__6___redArg(v_bs_821_, v_k_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__6___boxed(lean_object* v_00_u03b1_829_, lean_object* v_bs_830_, lean_object* v_k_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f_spec__4_spec__6(v_00_u03b1_829_, v_bs_830_, v_k_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
lean_dec(v___y_835_);
lean_dec_ref(v___y_834_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
lean_dec_ref(v_bs_830_);
return v_res_837_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2_(lean_object* v_env_838_, lean_object* v_n_839_){
_start:
{
if (lean_obj_tag(v_n_839_) == 1)
{
lean_object* v_pre_840_; lean_object* v_str_841_; lean_object* v___x_842_; uint8_t v___x_843_; 
v_pre_840_ = lean_ctor_get(v_n_839_, 0);
lean_inc(v_pre_840_);
v_str_841_ = lean_ctor_get(v_n_839_, 1);
lean_inc_ref(v_str_841_);
lean_dec_ref(v_n_839_);
v___x_842_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix___closed__0, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix___closed__0_once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix___closed__0);
v___x_843_ = lean_string_dec_eq(v_str_841_, v___x_842_);
lean_dec_ref(v_str_841_);
if (v___x_843_ == 0)
{
lean_dec(v_pre_840_);
lean_dec_ref(v_env_838_);
return v___x_843_;
}
else
{
lean_object* v___x_844_; 
v___x_844_ = l_isCtorIdxCore_x3f(v_env_838_, v_pre_840_);
if (lean_obj_tag(v___x_844_) == 0)
{
uint8_t v___x_845_; 
v___x_845_ = 0;
return v___x_845_;
}
else
{
lean_dec_ref(v___x_844_);
return v___x_843_;
}
}
}
else
{
uint8_t v___x_846_; 
lean_dec(v_n_839_);
lean_dec_ref(v_env_838_);
v___x_846_ = 0;
return v___x_846_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2____boxed(lean_object* v_env_847_, lean_object* v_n_848_){
_start:
{
uint8_t v_res_849_; lean_object* v_r_850_; 
v_res_849_ = l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2_(v_env_847_, v_n_848_);
v_r_850_ = lean_box(v_res_849_);
return v_r_850_;
}
}
static lean_object* _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_851_; 
v___f_851_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2____boxed), 2, 0);
return v___f_851_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_853_; lean_object* v___x_854_; 
v___f_853_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2_, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2_);
v___x_854_ = l_Lean_registerReservedNamePredicate(v___f_853_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2____boxed(lean_object* v_a_855_){
_start:
{
lean_object* v_res_856_; 
v_res_856_ = l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2_();
return v_res_856_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__spec__0___redArg(lean_object* v_thm_857_, lean_object* v___y_858_){
_start:
{
lean_object* v___x_860_; lean_object* v_env_861_; lean_object* v_toConstantVal_862_; lean_object* v_value_863_; lean_object* v_all_864_; uint8_t v___y_866_; lean_object* v_type_874_; uint8_t v___x_875_; 
v___x_860_ = lean_st_ref_get(v___y_858_);
v_env_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc_ref_n(v_env_861_, 2);
lean_dec(v___x_860_);
v_toConstantVal_862_ = lean_ctor_get(v_thm_857_, 0);
v_value_863_ = lean_ctor_get(v_thm_857_, 1);
v_all_864_ = lean_ctor_get(v_thm_857_, 2);
v_type_874_ = lean_ctor_get(v_toConstantVal_862_, 2);
v___x_875_ = l_Lean_Environment_hasUnsafe(v_env_861_, v_type_874_);
if (v___x_875_ == 0)
{
uint8_t v___x_876_; 
v___x_876_ = l_Lean_Environment_hasUnsafe(v_env_861_, v_value_863_);
v___y_866_ = v___x_876_;
goto v___jp_865_;
}
else
{
lean_dec_ref(v_env_861_);
v___y_866_ = v___x_875_;
goto v___jp_865_;
}
v___jp_865_:
{
if (v___y_866_ == 0)
{
lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_867_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_867_, 0, v_thm_857_);
v___x_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_868_, 0, v___x_867_);
return v___x_868_;
}
else
{
lean_object* v___x_869_; uint8_t v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
lean_inc(v_all_864_);
lean_inc_ref(v_value_863_);
lean_inc_ref(v_toConstantVal_862_);
lean_dec_ref(v_thm_857_);
v___x_869_ = lean_box(0);
v___x_870_ = 0;
v___x_871_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_871_, 0, v_toConstantVal_862_);
lean_ctor_set(v___x_871_, 1, v_value_863_);
lean_ctor_set(v___x_871_, 2, v___x_869_);
lean_ctor_set(v___x_871_, 3, v_all_864_);
lean_ctor_set_uint8(v___x_871_, sizeof(void*)*4, v___x_870_);
v___x_872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_872_, 0, v___x_871_);
v___x_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
return v___x_873_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_thm_877_, lean_object* v___y_878_, lean_object* v___y_879_){
_start:
{
lean_object* v_res_880_; 
v_res_880_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__spec__0___redArg(v_thm_877_, v___y_878_);
lean_dec(v___y_878_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__spec__0(lean_object* v_thm_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_){
_start:
{
lean_object* v___x_887_; 
v___x_887_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__spec__0___redArg(v_thm_881_, v___y_885_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__spec__0___boxed(lean_object* v_thm_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_){
_start:
{
lean_object* v_res_894_; 
v_res_894_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__spec__0(v_thm_888_, v___y_889_, v___y_890_, v___y_891_, v___y_892_);
lean_dec(v___y_892_);
lean_dec_ref(v___y_891_);
lean_dec(v___y_890_);
lean_dec_ref(v___y_889_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_(lean_object* v_name_895_, lean_object* v_val_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v___x_902_; 
v___x_902_ = l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_mkHInjectiveTheorem_x3f(v_name_895_, v_val_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_);
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v_a_903_; lean_object* v___x_904_; lean_object* v_a_905_; uint8_t v___x_906_; lean_object* v___x_907_; 
v_a_903_ = lean_ctor_get(v___x_902_, 0);
lean_inc(v_a_903_);
lean_dec_ref(v___x_902_);
v___x_904_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__spec__0___redArg(v_a_903_, v___y_900_);
v_a_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc(v_a_905_);
lean_dec_ref(v___x_904_);
v___x_906_ = 0;
v___x_907_ = l_Lean_addDecl(v_a_905_, v___x_906_, v___y_899_, v___y_900_);
return v___x_907_;
}
else
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_915_; 
v_a_908_ = lean_ctor_get(v___x_902_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_915_ == 0)
{
v___x_910_ = v___x_902_;
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_902_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_913_; 
if (v_isShared_911_ == 0)
{
v___x_913_ = v___x_910_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_a_908_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2____boxed(lean_object* v_name_916_, lean_object* v_val_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_(v_name_916_, v_val_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
return v_res_923_;
}
}
static lean_object* _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_924_;
}
}
static lean_object* _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_925_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_);
v___x_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_926_, 0, v___x_925_);
return v___x_926_;
}
}
static lean_object* _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_927_ = lean_unsigned_to_nat(32u);
v___x_928_ = lean_mk_empty_array_with_capacity(v___x_927_);
v___x_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_929_, 0, v___x_928_);
return v___x_929_;
}
}
static lean_object* _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_(void){
_start:
{
size_t v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_930_ = ((size_t)5ULL);
v___x_931_ = lean_unsigned_to_nat(0u);
v___x_932_ = lean_unsigned_to_nat(32u);
v___x_933_ = lean_mk_empty_array_with_capacity(v___x_932_);
v___x_934_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_);
v___x_935_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_935_, 0, v___x_934_);
lean_ctor_set(v___x_935_, 1, v___x_933_);
lean_ctor_set(v___x_935_, 2, v___x_931_);
lean_ctor_set(v___x_935_, 3, v___x_931_);
lean_ctor_set_usize(v___x_935_, 4, v___x_930_);
return v___x_935_;
}
}
static lean_object* _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
v___x_936_ = lean_box(1);
v___x_937_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_);
v___x_938_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_);
v___x_939_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_939_, 0, v___x_938_);
lean_ctor_set(v___x_939_, 1, v___x_937_);
lean_ctor_set(v___x_939_, 2, v___x_936_);
return v___x_939_;
}
}
static lean_object* _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__5_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = lean_unsigned_to_nat(0u);
v___x_941_ = lean_mk_empty_array_with_capacity(v___x_940_);
return v___x_941_;
}
}
static lean_object* _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__6_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_942_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_);
v___x_943_ = lean_unsigned_to_nat(0u);
v___x_944_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_944_, 0, v___x_943_);
lean_ctor_set(v___x_944_, 1, v___x_943_);
lean_ctor_set(v___x_944_, 2, v___x_943_);
lean_ctor_set(v___x_944_, 3, v___x_943_);
lean_ctor_set(v___x_944_, 4, v___x_942_);
lean_ctor_set(v___x_944_, 5, v___x_942_);
lean_ctor_set(v___x_944_, 6, v___x_942_);
lean_ctor_set(v___x_944_, 7, v___x_942_);
lean_ctor_set(v___x_944_, 8, v___x_942_);
lean_ctor_set(v___x_944_, 9, v___x_942_);
return v___x_944_;
}
}
static lean_object* _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_945_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_);
v___x_946_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_946_, 0, v___x_945_);
lean_ctor_set(v___x_946_, 1, v___x_945_);
lean_ctor_set(v___x_946_, 2, v___x_945_);
lean_ctor_set(v___x_946_, 3, v___x_945_);
lean_ctor_set(v___x_946_, 4, v___x_945_);
lean_ctor_set(v___x_946_, 5, v___x_945_);
return v___x_946_;
}
}
static lean_object* _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__8_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_947_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_);
v___x_948_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_948_, 0, v___x_947_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
lean_ctor_set(v___x_948_, 2, v___x_947_);
lean_ctor_set(v___x_948_, 3, v___x_947_);
lean_ctor_set(v___x_948_, 4, v___x_947_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_(lean_object* v___x_949_, lean_object* v_name_950_, lean_object* v___y_951_, lean_object* v___y_952_){
_start:
{
if (lean_obj_tag(v_name_950_) == 1)
{
lean_object* v_pre_958_; lean_object* v_str_959_; lean_object* v___x_960_; uint8_t v___x_961_; 
v_pre_958_ = lean_ctor_get(v_name_950_, 0);
lean_inc(v_pre_958_);
v_str_959_ = lean_ctor_get(v_name_950_, 1);
v___x_960_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix___closed__0, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix___closed__0_once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix___closed__0);
v___x_961_ = lean_string_dec_eq(v_str_959_, v___x_960_);
if (v___x_961_ == 0)
{
lean_dec_ref(v_name_950_);
lean_dec(v_pre_958_);
lean_dec(v___x_949_);
goto v___jp_954_;
}
else
{
lean_object* v___x_962_; lean_object* v_env_963_; lean_object* v___x_964_; 
v___x_962_ = lean_st_ref_get(v___y_952_);
v_env_963_ = lean_ctor_get(v___x_962_, 0);
lean_inc_ref(v_env_963_);
lean_dec(v___x_962_);
lean_inc(v_pre_958_);
v___x_964_ = l_isCtorIdxCore_x3f(v_env_963_, v_pre_958_);
if (lean_obj_tag(v___x_964_) == 1)
{
lean_object* v_val_965_; uint8_t v___x_966_; uint8_t v___x_967_; uint8_t v___x_968_; uint8_t v___x_969_; lean_object* v___x_970_; uint64_t v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___f_985_; lean_object* v___x_986_; 
v_val_965_ = lean_ctor_get(v___x_964_, 0);
lean_inc(v_val_965_);
lean_dec_ref(v___x_964_);
v___x_966_ = 0;
v___x_967_ = 1;
v___x_968_ = 0;
v___x_969_ = 2;
v___x_970_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v___x_970_, 0, v___x_966_);
lean_ctor_set_uint8(v___x_970_, 1, v___x_966_);
lean_ctor_set_uint8(v___x_970_, 2, v___x_966_);
lean_ctor_set_uint8(v___x_970_, 3, v___x_966_);
lean_ctor_set_uint8(v___x_970_, 4, v___x_966_);
lean_ctor_set_uint8(v___x_970_, 5, v___x_961_);
lean_ctor_set_uint8(v___x_970_, 6, v___x_961_);
lean_ctor_set_uint8(v___x_970_, 7, v___x_966_);
lean_ctor_set_uint8(v___x_970_, 8, v___x_961_);
lean_ctor_set_uint8(v___x_970_, 9, v___x_967_);
lean_ctor_set_uint8(v___x_970_, 10, v___x_968_);
lean_ctor_set_uint8(v___x_970_, 11, v___x_961_);
lean_ctor_set_uint8(v___x_970_, 12, v___x_961_);
lean_ctor_set_uint8(v___x_970_, 13, v___x_961_);
lean_ctor_set_uint8(v___x_970_, 14, v___x_969_);
lean_ctor_set_uint8(v___x_970_, 15, v___x_961_);
lean_ctor_set_uint8(v___x_970_, 16, v___x_961_);
lean_ctor_set_uint8(v___x_970_, 17, v___x_961_);
lean_ctor_set_uint8(v___x_970_, 18, v___x_961_);
v___x_971_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_970_);
v___x_972_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_972_, 0, v___x_970_);
lean_ctor_set_uint64(v___x_972_, sizeof(void*)*1, v___x_971_);
v___x_973_ = lean_unsigned_to_nat(0u);
v___x_974_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_);
v___x_975_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_);
v___x_976_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__5_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__5_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__5_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_);
v___x_977_ = lean_box(0);
lean_inc(v___x_949_);
v___x_978_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_978_, 0, v___x_972_);
lean_ctor_set(v___x_978_, 1, v___x_949_);
lean_ctor_set(v___x_978_, 2, v___x_975_);
lean_ctor_set(v___x_978_, 3, v___x_976_);
lean_ctor_set(v___x_978_, 4, v___x_977_);
lean_ctor_set(v___x_978_, 5, v___x_973_);
lean_ctor_set(v___x_978_, 6, v___x_977_);
lean_ctor_set_uint8(v___x_978_, sizeof(void*)*7, v___x_966_);
lean_ctor_set_uint8(v___x_978_, sizeof(void*)*7 + 1, v___x_966_);
lean_ctor_set_uint8(v___x_978_, sizeof(void*)*7 + 2, v___x_966_);
lean_ctor_set_uint8(v___x_978_, sizeof(void*)*7 + 3, v___x_961_);
v___x_979_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__6_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__6_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__6_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_);
v___x_980_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_);
v___x_981_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__8_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__8_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1___closed__8_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_);
v___x_982_ = lean_st_ref_get(v___y_952_);
lean_dec(v___x_982_);
v___x_983_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_983_, 0, v___x_979_);
lean_ctor_set(v___x_983_, 1, v___x_980_);
lean_ctor_set(v___x_983_, 2, v___x_949_);
lean_ctor_set(v___x_983_, 3, v___x_974_);
lean_ctor_set(v___x_983_, 4, v___x_981_);
v___x_984_ = lean_st_mk_ref(v___x_983_);
lean_inc_ref(v_name_950_);
v___f_985_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2____boxed), 7, 2);
lean_closure_set(v___f_985_, 0, v_name_950_);
lean_closure_set(v___f_985_, 1, v_val_965_);
v___x_986_ = l_Lean_Meta_realizeConst(v_pre_958_, v_name_950_, v___f_985_, v___x_978_, v___x_984_, v___y_951_, v___y_952_);
lean_dec_ref(v___x_978_);
if (lean_obj_tag(v___x_986_) == 0)
{
lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_996_; 
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_996_ == 0)
{
lean_object* v_unused_997_; 
v_unused_997_ = lean_ctor_get(v___x_986_, 0);
lean_dec(v_unused_997_);
v___x_988_ = v___x_986_;
v_isShared_989_ = v_isSharedCheck_996_;
goto v_resetjp_987_;
}
else
{
lean_dec(v___x_986_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_996_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_994_; 
v___x_990_ = lean_st_ref_get(v___y_952_);
lean_dec(v___x_990_);
v___x_991_ = lean_st_ref_get(v___x_984_);
lean_dec(v___x_984_);
lean_dec(v___x_991_);
v___x_992_ = lean_box(v___x_961_);
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 0, v___x_992_);
v___x_994_ = v___x_988_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v___x_992_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
else
{
lean_object* v_a_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1005_; 
lean_dec(v___x_984_);
v_a_998_ = lean_ctor_get(v___x_986_, 0);
v_isSharedCheck_1005_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_1000_ = v___x_986_;
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_a_998_);
lean_dec(v___x_986_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1003_; 
if (v_isShared_1001_ == 0)
{
v___x_1003_ = v___x_1000_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_a_998_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
}
else
{
uint8_t v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
lean_dec(v___x_964_);
lean_dec_ref(v_name_950_);
lean_dec(v_pre_958_);
lean_dec(v___x_949_);
v___x_1006_ = 0;
v___x_1007_ = lean_box(v___x_1006_);
v___x_1008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
return v___x_1008_;
}
}
}
else
{
lean_dec(v_name_950_);
lean_dec(v___x_949_);
goto v___jp_954_;
}
v___jp_954_:
{
uint8_t v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_955_ = 0;
v___x_956_ = lean_box(v___x_955_);
v___x_957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_957_, 0, v___x_956_);
return v___x_957_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2____boxed(lean_object* v___x_1009_, lean_object* v_name_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_(v___x_1009_, v_name_1010_, v___y_1011_, v___y_1012_);
lean_dec(v___y_1012_);
lean_dec_ref(v___y_1011_);
return v_res_1014_;
}
}
static lean_object* _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1015_; lean_object* v___f_1016_; 
v___x_1015_ = lean_box(1);
v___f_1016_ = lean_alloc_closure((void*)(l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2____boxed), 5, 1);
lean_closure_set(v___f_1016_, 0, v___x_1015_);
return v___f_1016_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_1018_; lean_object* v___x_1019_; 
v___f_1018_ = lean_obj_once(&l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_, &l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_);
v___x_1019_ = l_Lean_registerReservedNameAction(v___f_1018_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2____boxed(lean_object* v_a_1020_){
_start:
{
lean_object* v_res_1021_; 
v_res_1021_ = l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_();
return v_res_1021_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Subst(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_CtorIdxHInj(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix = _init_l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix();
lean_mark_persistent(l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_hinjSuffix);
res = l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_3989217655____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_CtorIdxHInj_0__Lean_Meta_initFn_00___x40_Lean_Meta_CtorIdxHInj_2281581831____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_CtorIdxHInj(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Subst(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_CtorIdxHInj(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CtorIdxHInj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_CtorIdxHInj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_CtorIdxHInj(builtin);
}
#ifdef __cplusplus
}
#endif
