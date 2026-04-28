// Lean compiler output
// Module: Lean.Meta.Sym.LooseBVarsS
// Imports: public import Lean.Meta.Sym.ReplaceS
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
uint64_t l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Builder_share1___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared(lean_object*, uint8_t, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_looseBVarRange(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__0;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__1;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__2;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__3;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__4;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__5;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__6;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_lowerLooseBVarsS_x27___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_lowerLooseBVarsS_x27___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_lowerLooseBVarsS_x27___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_lowerLooseBVarsS_x27___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_lowerLooseBVarsS_x27(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_lowerLooseBVarsS_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2_spec__10___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_lowerLooseBVarsS_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_lowerLooseBVarsS_spec__0___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_lowerLooseBVarsS_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_lowerLooseBVarsS_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_lowerLooseBVarsS_spec__0(lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_lowerLooseBVarsS___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_lowerLooseBVarsS___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_lowerLooseBVarsS___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_lowerLooseBVarsS___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_lowerLooseBVarsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_lowerLooseBVarsS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLooseBVarsS_x27(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLooseBVarsS_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLooseBVarsS___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLooseBVarsS___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLooseBVarsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLooseBVarsS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__0___redArg(lean_object* v_idx_1_, lean_object* v___y_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = l_Lean_Expr_bvar___override(v_idx_1_);
v___x_4_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_3_, v___y_2_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__0(lean_object* v_idx_5_, uint8_t v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__0___redArg(v_idx_5_, v___y_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__0___boxed(lean_object* v_idx_9_, lean_object* v___y_10_, lean_object* v___y_11_){
_start:
{
uint8_t v___y_21034__boxed_12_; lean_object* v_res_13_; 
v___y_21034__boxed_12_ = lean_unbox(v___y_10_);
v_res_13_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__0(v_idx_9_, v___y_21034__boxed_12_, v___y_11_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__7(lean_object* v_structName_14_, lean_object* v_idx_15_, lean_object* v_struct_16_, lean_object* v___y_17_, uint8_t v___y_18_, lean_object* v___y_19_){
_start:
{
lean_object* v___y_21_; lean_object* v___y_22_; 
if (v___y_18_ == 0)
{
v___y_21_ = v___y_17_;
v___y_22_ = v___y_19_;
goto v___jp_20_;
}
else
{
lean_object* v___x_35_; lean_object* v_snd_36_; 
lean_inc_ref(v_struct_16_);
v___x_35_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_struct_16_, v___y_18_, v___y_19_);
v_snd_36_ = lean_ctor_get(v___x_35_, 1);
lean_inc(v_snd_36_);
lean_dec_ref(v___x_35_);
v___y_21_ = v___y_17_;
v___y_22_ = v_snd_36_;
goto v___jp_20_;
}
v___jp_20_:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v_fst_25_; lean_object* v_snd_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_34_; 
v___x_23_ = l_Lean_Expr_proj___override(v_structName_14_, v_idx_15_, v_struct_16_);
v___x_24_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_23_, v___y_22_);
v_fst_25_ = lean_ctor_get(v___x_24_, 0);
v_snd_26_ = lean_ctor_get(v___x_24_, 1);
v_isSharedCheck_34_ = !lean_is_exclusive(v___x_24_);
if (v_isSharedCheck_34_ == 0)
{
v___x_28_ = v___x_24_;
v_isShared_29_ = v_isSharedCheck_34_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_snd_26_);
lean_inc(v_fst_25_);
lean_dec(v___x_24_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_34_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v___x_31_; 
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 1, v___y_21_);
v___x_31_ = v___x_28_;
goto v_reusejp_30_;
}
else
{
lean_object* v_reuseFailAlloc_33_; 
v_reuseFailAlloc_33_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_33_, 0, v_fst_25_);
lean_ctor_set(v_reuseFailAlloc_33_, 1, v___y_21_);
v___x_31_ = v_reuseFailAlloc_33_;
goto v_reusejp_30_;
}
v_reusejp_30_:
{
lean_object* v___x_32_; 
v___x_32_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
lean_ctor_set(v___x_32_, 1, v_snd_26_);
return v___x_32_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__7___boxed(lean_object* v_structName_37_, lean_object* v_idx_38_, lean_object* v_struct_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
uint8_t v___y_21043__boxed_43_; lean_object* v_res_44_; 
v___y_21043__boxed_43_ = lean_unbox(v___y_41_);
v_res_44_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__7(v_structName_37_, v_idx_38_, v_struct_39_, v___y_40_, v___y_21043__boxed_43_, v___y_42_);
return v_res_44_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__0(void){
_start:
{
lean_object* v___f_45_; 
v___f_45_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_45_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__1(void){
_start:
{
lean_object* v___f_46_; 
v___f_46_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_46_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__2(void){
_start:
{
lean_object* v___f_47_; 
v___f_47_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_47_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__3(void){
_start:
{
lean_object* v___f_48_; 
v___f_48_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_48_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__4(void){
_start:
{
lean_object* v___f_49_; 
v___f_49_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_49_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__5(void){
_start:
{
lean_object* v___f_50_; 
v___f_50_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_50_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__6(void){
_start:
{
lean_object* v___f_51_; 
v___f_51_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_51_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8(lean_object* v_msg_52_, lean_object* v___y_53_, uint8_t v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v___f_56_; lean_object* v___f_57_; lean_object* v___f_58_; lean_object* v___f_59_; lean_object* v___f_60_; lean_object* v___f_61_; lean_object* v___f_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___f_66_; lean_object* v___f_67_; lean_object* v___f_68_; lean_object* v___f_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___f_77_; lean_object* v___f_78_; lean_object* v___f_79_; lean_object* v___f_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_20767__overap_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___f_56_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__0);
v___f_57_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__1, &l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__1_once, _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__1);
v___f_58_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__2, &l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__2_once, _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__2);
v___f_59_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__3, &l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__3_once, _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__3);
v___f_60_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__4, &l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__4_once, _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__4);
v___f_61_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__5, &l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__5_once, _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__5);
v___f_62_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__6, &l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__6_once, _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___closed__6);
v___x_63_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_63_, 0, v___f_56_);
lean_ctor_set(v___x_63_, 1, v___f_57_);
v___x_64_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
lean_ctor_set(v___x_64_, 1, v___f_58_);
lean_ctor_set(v___x_64_, 2, v___f_59_);
lean_ctor_set(v___x_64_, 3, v___f_60_);
lean_ctor_set(v___x_64_, 4, v___f_61_);
v___x_65_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
lean_ctor_set(v___x_65_, 1, v___f_62_);
lean_inc_ref_n(v___x_65_, 6);
v___f_66_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_66_, 0, v___x_65_);
v___f_67_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_67_, 0, v___x_65_);
v___f_68_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_68_, 0, v___x_65_);
v___f_69_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_69_, 0, v___x_65_);
v___x_70_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_70_, 0, lean_box(0));
lean_closure_set(v___x_70_, 1, lean_box(0));
lean_closure_set(v___x_70_, 2, v___x_65_);
v___x_71_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
lean_ctor_set(v___x_71_, 1, v___f_66_);
v___x_72_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_72_, 0, lean_box(0));
lean_closure_set(v___x_72_, 1, lean_box(0));
lean_closure_set(v___x_72_, 2, v___x_65_);
v___x_73_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_73_, 0, v___x_71_);
lean_ctor_set(v___x_73_, 1, v___x_72_);
lean_ctor_set(v___x_73_, 2, v___f_67_);
lean_ctor_set(v___x_73_, 3, v___f_68_);
lean_ctor_set(v___x_73_, 4, v___f_69_);
v___x_74_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_74_, 0, lean_box(0));
lean_closure_set(v___x_74_, 1, lean_box(0));
lean_closure_set(v___x_74_, 2, v___x_65_);
v___x_75_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_73_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = l_ReaderT_instMonad___redArg(v___x_75_);
lean_inc_ref_n(v___x_76_, 6);
v___f_77_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_77_, 0, v___x_76_);
v___f_78_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_78_, 0, v___x_76_);
v___f_79_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_79_, 0, v___x_76_);
v___f_80_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_80_, 0, v___x_76_);
v___x_81_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_81_, 0, lean_box(0));
lean_closure_set(v___x_81_, 1, lean_box(0));
lean_closure_set(v___x_81_, 2, v___x_76_);
v___x_82_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v___f_77_);
v___x_83_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_83_, 0, lean_box(0));
lean_closure_set(v___x_83_, 1, lean_box(0));
lean_closure_set(v___x_83_, 2, v___x_76_);
v___x_84_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_84_, 0, v___x_82_);
lean_ctor_set(v___x_84_, 1, v___x_83_);
lean_ctor_set(v___x_84_, 2, v___f_78_);
lean_ctor_set(v___x_84_, 3, v___f_79_);
lean_ctor_set(v___x_84_, 4, v___f_80_);
v___x_85_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_85_, 0, lean_box(0));
lean_closure_set(v___x_85_, 1, lean_box(0));
lean_closure_set(v___x_85_, 2, v___x_76_);
v___x_86_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_84_);
lean_ctor_set(v___x_86_, 1, v___x_85_);
v___x_87_ = l_Lean_instInhabitedExpr;
v___x_88_ = l_instInhabitedOfMonad___redArg(v___x_86_, v___x_87_);
v___x_20767__overap_89_ = lean_panic_fn_borrowed(v___x_88_, v_msg_52_);
lean_dec(v___x_88_);
v___x_90_ = lean_box(v___y_54_);
v___x_91_ = lean_apply_3(v___x_20767__overap_89_, v___y_53_, v___x_90_, v___y_55_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8___boxed(lean_object* v_msg_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_){
_start:
{
uint8_t v___y_21101__boxed_96_; lean_object* v_res_97_; 
v___y_21101__boxed_96_ = lean_unbox(v___y_94_);
v_res_97_ = l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8(v_msg_92_, v___y_93_, v___y_21101__boxed_96_, v___y_95_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__4(lean_object* v_x_98_, uint8_t v_bi_99_, lean_object* v_t_100_, lean_object* v_b_101_, lean_object* v___y_102_, uint8_t v___y_103_, lean_object* v___y_104_){
_start:
{
lean_object* v___y_106_; lean_object* v___y_107_; 
if (v___y_103_ == 0)
{
v___y_106_ = v___y_102_;
v___y_107_ = v___y_104_;
goto v___jp_105_;
}
else
{
lean_object* v___x_120_; lean_object* v_snd_121_; lean_object* v___x_122_; lean_object* v_snd_123_; 
lean_inc_ref(v_t_100_);
v___x_120_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_100_, v___y_103_, v___y_104_);
v_snd_121_ = lean_ctor_get(v___x_120_, 1);
lean_inc(v_snd_121_);
lean_dec_ref(v___x_120_);
lean_inc_ref(v_b_101_);
v___x_122_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_101_, v___y_103_, v_snd_121_);
v_snd_123_ = lean_ctor_get(v___x_122_, 1);
lean_inc(v_snd_123_);
lean_dec_ref(v___x_122_);
v___y_106_ = v___y_102_;
v___y_107_ = v_snd_123_;
goto v___jp_105_;
}
v___jp_105_:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v_fst_110_; lean_object* v_snd_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_119_; 
v___x_108_ = l_Lean_Expr_forallE___override(v_x_98_, v_t_100_, v_b_101_, v_bi_99_);
v___x_109_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_108_, v___y_107_);
v_fst_110_ = lean_ctor_get(v___x_109_, 0);
v_snd_111_ = lean_ctor_get(v___x_109_, 1);
v_isSharedCheck_119_ = !lean_is_exclusive(v___x_109_);
if (v_isSharedCheck_119_ == 0)
{
v___x_113_ = v___x_109_;
v_isShared_114_ = v_isSharedCheck_119_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_snd_111_);
lean_inc(v_fst_110_);
lean_dec(v___x_109_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_119_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_116_; 
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 1, v___y_106_);
v___x_116_ = v___x_113_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_fst_110_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v___y_106_);
v___x_116_ = v_reuseFailAlloc_118_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
lean_object* v___x_117_; 
v___x_117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v_snd_111_);
return v___x_117_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__4___boxed(lean_object* v_x_124_, lean_object* v_bi_125_, lean_object* v_t_126_, lean_object* v_b_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
uint8_t v_bi_boxed_131_; uint8_t v___y_21187__boxed_132_; lean_object* v_res_133_; 
v_bi_boxed_131_ = lean_unbox(v_bi_125_);
v___y_21187__boxed_132_ = lean_unbox(v___y_129_);
v_res_133_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__4(v_x_124_, v_bi_boxed_131_, v_t_126_, v_b_127_, v___y_128_, v___y_21187__boxed_132_, v___y_130_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__6(lean_object* v_d_134_, lean_object* v_e_135_, lean_object* v___y_136_, uint8_t v___y_137_, lean_object* v___y_138_){
_start:
{
lean_object* v___y_140_; lean_object* v___y_141_; 
if (v___y_137_ == 0)
{
v___y_140_ = v___y_136_;
v___y_141_ = v___y_138_;
goto v___jp_139_;
}
else
{
lean_object* v___x_154_; lean_object* v_snd_155_; 
lean_inc_ref(v_e_135_);
v___x_154_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_e_135_, v___y_137_, v___y_138_);
v_snd_155_ = lean_ctor_get(v___x_154_, 1);
lean_inc(v_snd_155_);
lean_dec_ref(v___x_154_);
v___y_140_ = v___y_136_;
v___y_141_ = v_snd_155_;
goto v___jp_139_;
}
v___jp_139_:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v_fst_144_; lean_object* v_snd_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_153_; 
v___x_142_ = l_Lean_Expr_mdata___override(v_d_134_, v_e_135_);
v___x_143_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_142_, v___y_141_);
v_fst_144_ = lean_ctor_get(v___x_143_, 0);
v_snd_145_ = lean_ctor_get(v___x_143_, 1);
v_isSharedCheck_153_ = !lean_is_exclusive(v___x_143_);
if (v_isSharedCheck_153_ == 0)
{
v___x_147_ = v___x_143_;
v_isShared_148_ = v_isSharedCheck_153_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_snd_145_);
lean_inc(v_fst_144_);
lean_dec(v___x_143_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_153_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_150_; 
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 1, v___y_140_);
v___x_150_ = v___x_147_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_fst_144_);
lean_ctor_set(v_reuseFailAlloc_152_, 1, v___y_140_);
v___x_150_ = v_reuseFailAlloc_152_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
lean_object* v___x_151_; 
v___x_151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set(v___x_151_, 1, v_snd_145_);
return v___x_151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__6___boxed(lean_object* v_d_156_, lean_object* v_e_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_){
_start:
{
uint8_t v___y_21236__boxed_161_; lean_object* v_res_162_; 
v___y_21236__boxed_161_ = lean_unbox(v___y_159_);
v_res_162_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__6(v_d_156_, v_e_157_, v___y_158_, v___y_21236__boxed_161_, v___y_160_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__5(lean_object* v_x_163_, lean_object* v_t_164_, lean_object* v_v_165_, lean_object* v_b_166_, uint8_t v_nondep_167_, lean_object* v___y_168_, uint8_t v___y_169_, lean_object* v___y_170_){
_start:
{
lean_object* v___y_172_; lean_object* v___y_173_; 
if (v___y_169_ == 0)
{
v___y_172_ = v___y_168_;
v___y_173_ = v___y_170_;
goto v___jp_171_;
}
else
{
lean_object* v___x_186_; lean_object* v_snd_187_; lean_object* v___x_188_; lean_object* v_snd_189_; lean_object* v___x_190_; lean_object* v_snd_191_; 
lean_inc_ref(v_t_164_);
v___x_186_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_164_, v___y_169_, v___y_170_);
v_snd_187_ = lean_ctor_get(v___x_186_, 1);
lean_inc(v_snd_187_);
lean_dec_ref(v___x_186_);
lean_inc_ref(v_v_165_);
v___x_188_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_v_165_, v___y_169_, v_snd_187_);
v_snd_189_ = lean_ctor_get(v___x_188_, 1);
lean_inc(v_snd_189_);
lean_dec_ref(v___x_188_);
lean_inc_ref(v_b_166_);
v___x_190_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_166_, v___y_169_, v_snd_189_);
v_snd_191_ = lean_ctor_get(v___x_190_, 1);
lean_inc(v_snd_191_);
lean_dec_ref(v___x_190_);
v___y_172_ = v___y_168_;
v___y_173_ = v_snd_191_;
goto v___jp_171_;
}
v___jp_171_:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v_fst_176_; lean_object* v_snd_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_185_; 
v___x_174_ = l_Lean_Expr_letE___override(v_x_163_, v_t_164_, v_v_165_, v_b_166_, v_nondep_167_);
v___x_175_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_174_, v___y_173_);
v_fst_176_ = lean_ctor_get(v___x_175_, 0);
v_snd_177_ = lean_ctor_get(v___x_175_, 1);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_185_ == 0)
{
v___x_179_ = v___x_175_;
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_snd_177_);
lean_inc(v_fst_176_);
lean_dec(v___x_175_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_182_; 
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 1, v___y_172_);
v___x_182_ = v___x_179_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_fst_176_);
lean_ctor_set(v_reuseFailAlloc_184_, 1, v___y_172_);
v___x_182_ = v_reuseFailAlloc_184_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
lean_object* v___x_183_; 
v___x_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
lean_ctor_set(v___x_183_, 1, v_snd_177_);
return v___x_183_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__5___boxed(lean_object* v_x_192_, lean_object* v_t_193_, lean_object* v_v_194_, lean_object* v_b_195_, lean_object* v_nondep_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
uint8_t v_nondep_boxed_200_; uint8_t v___y_21280__boxed_201_; lean_object* v_res_202_; 
v_nondep_boxed_200_ = lean_unbox(v_nondep_196_);
v___y_21280__boxed_201_ = lean_unbox(v___y_198_);
v_res_202_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__5(v_x_192_, v_t_193_, v_v_194_, v_b_195_, v_nondep_boxed_200_, v___y_197_, v___y_21280__boxed_201_, v___y_199_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__3(lean_object* v_x_203_, uint8_t v_bi_204_, lean_object* v_t_205_, lean_object* v_b_206_, lean_object* v___y_207_, uint8_t v___y_208_, lean_object* v___y_209_){
_start:
{
lean_object* v___y_211_; lean_object* v___y_212_; 
if (v___y_208_ == 0)
{
v___y_211_ = v___y_207_;
v___y_212_ = v___y_209_;
goto v___jp_210_;
}
else
{
lean_object* v___x_225_; lean_object* v_snd_226_; lean_object* v___x_227_; lean_object* v_snd_228_; 
lean_inc_ref(v_t_205_);
v___x_225_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_205_, v___y_208_, v___y_209_);
v_snd_226_ = lean_ctor_get(v___x_225_, 1);
lean_inc(v_snd_226_);
lean_dec_ref(v___x_225_);
lean_inc_ref(v_b_206_);
v___x_227_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_206_, v___y_208_, v_snd_226_);
v_snd_228_ = lean_ctor_get(v___x_227_, 1);
lean_inc(v_snd_228_);
lean_dec_ref(v___x_227_);
v___y_211_ = v___y_207_;
v___y_212_ = v_snd_228_;
goto v___jp_210_;
}
v___jp_210_:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v_fst_215_; lean_object* v_snd_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_224_; 
v___x_213_ = l_Lean_Expr_lam___override(v_x_203_, v_t_205_, v_b_206_, v_bi_204_);
v___x_214_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_213_, v___y_212_);
v_fst_215_ = lean_ctor_get(v___x_214_, 0);
v_snd_216_ = lean_ctor_get(v___x_214_, 1);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_214_);
if (v_isSharedCheck_224_ == 0)
{
v___x_218_ = v___x_214_;
v_isShared_219_ = v_isSharedCheck_224_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_snd_216_);
lean_inc(v_fst_215_);
lean_dec(v___x_214_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_224_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_221_; 
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 1, v___y_211_);
v___x_221_ = v___x_218_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_fst_215_);
lean_ctor_set(v_reuseFailAlloc_223_, 1, v___y_211_);
v___x_221_ = v_reuseFailAlloc_223_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
lean_object* v___x_222_; 
v___x_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
lean_ctor_set(v___x_222_, 1, v_snd_216_);
return v___x_222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__3___boxed(lean_object* v_x_229_, lean_object* v_bi_230_, lean_object* v_t_231_, lean_object* v_b_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_){
_start:
{
uint8_t v_bi_boxed_236_; uint8_t v___y_21334__boxed_237_; lean_object* v_res_238_; 
v_bi_boxed_236_ = lean_unbox(v_bi_230_);
v___y_21334__boxed_237_ = lean_unbox(v___y_234_);
v_res_238_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__3(v_x_229_, v_bi_boxed_236_, v_t_231_, v_b_232_, v___y_233_, v___y_21334__boxed_237_, v___y_235_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__2(lean_object* v_f_239_, lean_object* v_a_240_, lean_object* v___y_241_, uint8_t v___y_242_, lean_object* v___y_243_){
_start:
{
lean_object* v___y_245_; lean_object* v___y_246_; 
if (v___y_242_ == 0)
{
v___y_245_ = v___y_241_;
v___y_246_ = v___y_243_;
goto v___jp_244_;
}
else
{
lean_object* v___x_259_; lean_object* v_snd_260_; lean_object* v___x_261_; lean_object* v_snd_262_; 
lean_inc_ref(v_f_239_);
v___x_259_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_f_239_, v___y_242_, v___y_243_);
v_snd_260_ = lean_ctor_get(v___x_259_, 1);
lean_inc(v_snd_260_);
lean_dec_ref(v___x_259_);
lean_inc_ref(v_a_240_);
v___x_261_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_a_240_, v___y_242_, v_snd_260_);
v_snd_262_ = lean_ctor_get(v___x_261_, 1);
lean_inc(v_snd_262_);
lean_dec_ref(v___x_261_);
v___y_245_ = v___y_241_;
v___y_246_ = v_snd_262_;
goto v___jp_244_;
}
v___jp_244_:
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v_fst_249_; lean_object* v_snd_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_258_; 
v___x_247_ = l_Lean_Expr_app___override(v_f_239_, v_a_240_);
v___x_248_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_247_, v___y_246_);
v_fst_249_ = lean_ctor_get(v___x_248_, 0);
v_snd_250_ = lean_ctor_get(v___x_248_, 1);
v_isSharedCheck_258_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_258_ == 0)
{
v___x_252_ = v___x_248_;
v_isShared_253_ = v_isSharedCheck_258_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_snd_250_);
lean_inc(v_fst_249_);
lean_dec(v___x_248_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_258_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_255_; 
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 1, v___y_245_);
v___x_255_ = v___x_252_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v_fst_249_);
lean_ctor_set(v_reuseFailAlloc_257_, 1, v___y_245_);
v___x_255_ = v_reuseFailAlloc_257_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
lean_object* v___x_256_; 
v___x_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
lean_ctor_set(v___x_256_, 1, v_snd_250_);
return v___x_256_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__2___boxed(lean_object* v_f_263_, lean_object* v_a_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_){
_start:
{
uint8_t v___y_21383__boxed_268_; lean_object* v_res_269_; 
v___y_21383__boxed_268_ = lean_unbox(v___y_266_);
v_res_269_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__2(v_f_263_, v_a_264_, v___y_265_, v___y_21383__boxed_268_, v___y_267_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2_spec__10___redArg(lean_object* v_a_270_, lean_object* v_x_271_){
_start:
{
if (lean_obj_tag(v_x_271_) == 0)
{
lean_object* v___x_272_; 
v___x_272_ = lean_box(0);
return v___x_272_;
}
else
{
lean_object* v_key_273_; lean_object* v_value_274_; lean_object* v_tail_275_; uint8_t v___y_277_; lean_object* v_fst_280_; lean_object* v_snd_281_; lean_object* v_fst_282_; lean_object* v_snd_283_; uint8_t v___x_284_; 
v_key_273_ = lean_ctor_get(v_x_271_, 0);
v_value_274_ = lean_ctor_get(v_x_271_, 1);
v_tail_275_ = lean_ctor_get(v_x_271_, 2);
v_fst_280_ = lean_ctor_get(v_key_273_, 0);
v_snd_281_ = lean_ctor_get(v_key_273_, 1);
v_fst_282_ = lean_ctor_get(v_a_270_, 0);
v_snd_283_ = lean_ctor_get(v_a_270_, 1);
v___x_284_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_fst_280_, v_fst_282_);
if (v___x_284_ == 0)
{
v___y_277_ = v___x_284_;
goto v___jp_276_;
}
else
{
uint8_t v___x_285_; 
v___x_285_ = lean_nat_dec_eq(v_snd_281_, v_snd_283_);
v___y_277_ = v___x_285_;
goto v___jp_276_;
}
v___jp_276_:
{
if (v___y_277_ == 0)
{
v_x_271_ = v_tail_275_;
goto _start;
}
else
{
lean_object* v___x_279_; 
lean_inc(v_value_274_);
v___x_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_279_, 0, v_value_274_);
return v___x_279_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2_spec__10___redArg___boxed(lean_object* v_a_286_, lean_object* v_x_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2_spec__10___redArg(v_a_286_, v_x_287_);
lean_dec(v_x_287_);
lean_dec_ref(v_a_286_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2___redArg(lean_object* v_m_289_, lean_object* v_a_290_){
_start:
{
lean_object* v_buckets_291_; lean_object* v_fst_292_; lean_object* v_snd_293_; lean_object* v___x_294_; uint64_t v___x_295_; uint64_t v___x_296_; uint64_t v___x_297_; uint64_t v___x_298_; uint64_t v___x_299_; uint64_t v_fold_300_; uint64_t v___x_301_; uint64_t v___x_302_; uint64_t v___x_303_; size_t v___x_304_; size_t v___x_305_; size_t v___x_306_; size_t v___x_307_; size_t v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v_buckets_291_ = lean_ctor_get(v_m_289_, 1);
v_fst_292_ = lean_ctor_get(v_a_290_, 0);
v_snd_293_ = lean_ctor_get(v_a_290_, 1);
v___x_294_ = lean_array_get_size(v_buckets_291_);
v___x_295_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_fst_292_);
v___x_296_ = lean_uint64_of_nat(v_snd_293_);
v___x_297_ = lean_uint64_mix_hash(v___x_295_, v___x_296_);
v___x_298_ = 32ULL;
v___x_299_ = lean_uint64_shift_right(v___x_297_, v___x_298_);
v_fold_300_ = lean_uint64_xor(v___x_297_, v___x_299_);
v___x_301_ = 16ULL;
v___x_302_ = lean_uint64_shift_right(v_fold_300_, v___x_301_);
v___x_303_ = lean_uint64_xor(v_fold_300_, v___x_302_);
v___x_304_ = lean_uint64_to_usize(v___x_303_);
v___x_305_ = lean_usize_of_nat(v___x_294_);
v___x_306_ = ((size_t)1ULL);
v___x_307_ = lean_usize_sub(v___x_305_, v___x_306_);
v___x_308_ = lean_usize_land(v___x_304_, v___x_307_);
v___x_309_ = lean_array_uget_borrowed(v_buckets_291_, v___x_308_);
v___x_310_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2_spec__10___redArg(v_a_290_, v___x_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_m_311_, lean_object* v_a_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2___redArg(v_m_311_, v_a_312_);
lean_dec_ref(v_a_312_);
lean_dec_ref(v_m_311_);
return v_res_313_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__2(void){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_314_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__1(void){
_start:
{
lean_object* v___x_315_; 
v___x_315_ = lean_mk_string_unchecked("_private.Lean.Meta.Sym.ReplaceS.0.Lean.Meta.Sym.visit", 53, 53);
return v___x_315_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__0(void){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = lean_mk_string_unchecked("Lean.Meta.Sym.ReplaceS", 22, 22);
return v___x_316_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__3(void){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_317_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__2, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__2_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__2);
v___x_318_ = lean_unsigned_to_nat(67u);
v___x_319_ = lean_unsigned_to_nat(35u);
v___x_320_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__1, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__1_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__1);
v___x_321_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__0, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__0_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__0);
v___x_322_ = l_mkPanicMessageWithDecl(v___x_321_, v___x_320_, v___x_319_, v___x_318_, v___x_317_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1(lean_object* v_s_323_, lean_object* v_d_324_, lean_object* v_e_325_, lean_object* v_offset_326_, lean_object* v_a_327_, uint8_t v_a_328_, lean_object* v_a_329_){
_start:
{
switch(lean_obj_tag(v_e_325_))
{
case 5:
{
lean_object* v_fn_330_; lean_object* v_arg_331_; lean_object* v___x_332_; lean_object* v_fst_333_; lean_object* v_snd_334_; lean_object* v_fst_335_; lean_object* v_snd_336_; lean_object* v___x_337_; lean_object* v_fst_338_; lean_object* v_snd_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_360_; 
v_fn_330_ = lean_ctor_get(v_e_325_, 0);
v_arg_331_ = lean_ctor_get(v_e_325_, 1);
lean_inc(v_offset_326_);
lean_inc_ref(v_fn_330_);
v___x_332_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1(v_s_323_, v_d_324_, v_fn_330_, v_offset_326_, v_a_327_, v_a_328_, v_a_329_);
v_fst_333_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_fst_333_);
v_snd_334_ = lean_ctor_get(v___x_332_, 1);
lean_inc(v_snd_334_);
lean_dec_ref(v___x_332_);
v_fst_335_ = lean_ctor_get(v_fst_333_, 0);
lean_inc(v_fst_335_);
v_snd_336_ = lean_ctor_get(v_fst_333_, 1);
lean_inc(v_snd_336_);
lean_dec(v_fst_333_);
lean_inc_ref(v_arg_331_);
v___x_337_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1(v_s_323_, v_d_324_, v_arg_331_, v_offset_326_, v_snd_336_, v_a_328_, v_snd_334_);
v_fst_338_ = lean_ctor_get(v___x_337_, 0);
v_snd_339_ = lean_ctor_get(v___x_337_, 1);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_360_ == 0)
{
v___x_341_ = v___x_337_;
v_isShared_342_ = v_isSharedCheck_360_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_snd_339_);
lean_inc(v_fst_338_);
lean_dec(v___x_337_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_360_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v_fst_343_; lean_object* v_snd_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_359_; 
v_fst_343_ = lean_ctor_get(v_fst_338_, 0);
v_snd_344_ = lean_ctor_get(v_fst_338_, 1);
v_isSharedCheck_359_ = !lean_is_exclusive(v_fst_338_);
if (v_isSharedCheck_359_ == 0)
{
v___x_346_ = v_fst_338_;
v_isShared_347_ = v_isSharedCheck_359_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_snd_344_);
lean_inc(v_fst_343_);
lean_dec(v_fst_338_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_359_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
uint8_t v___y_349_; uint8_t v___x_357_; 
v___x_357_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_fn_330_, v_fst_335_);
if (v___x_357_ == 0)
{
v___y_349_ = v___x_357_;
goto v___jp_348_;
}
else
{
uint8_t v___x_358_; 
v___x_358_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_arg_331_, v_fst_343_);
v___y_349_ = v___x_358_;
goto v___jp_348_;
}
v___jp_348_:
{
if (v___y_349_ == 0)
{
lean_object* v___x_350_; 
lean_del_object(v___x_346_);
lean_del_object(v___x_341_);
lean_dec_ref(v_e_325_);
v___x_350_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__2(v_fst_335_, v_fst_343_, v_snd_344_, v_a_328_, v_snd_339_);
return v___x_350_;
}
else
{
lean_object* v___x_352_; 
lean_dec(v_fst_343_);
lean_dec(v_fst_335_);
if (v_isShared_347_ == 0)
{
lean_ctor_set(v___x_346_, 0, v_e_325_);
v___x_352_ = v___x_346_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_e_325_);
lean_ctor_set(v_reuseFailAlloc_356_, 1, v_snd_344_);
v___x_352_ = v_reuseFailAlloc_356_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
lean_object* v___x_354_; 
if (v_isShared_342_ == 0)
{
lean_ctor_set(v___x_341_, 0, v___x_352_);
v___x_354_ = v___x_341_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v___x_352_);
lean_ctor_set(v_reuseFailAlloc_355_, 1, v_snd_339_);
v___x_354_ = v_reuseFailAlloc_355_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
return v___x_354_;
}
}
}
}
}
}
}
case 6:
{
lean_object* v_binderName_361_; lean_object* v_binderType_362_; lean_object* v_body_363_; uint8_t v_binderInfo_364_; lean_object* v___x_365_; lean_object* v_fst_366_; lean_object* v_snd_367_; lean_object* v_fst_368_; lean_object* v_snd_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v_fst_373_; lean_object* v_snd_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_395_; 
v_binderName_361_ = lean_ctor_get(v_e_325_, 0);
v_binderType_362_ = lean_ctor_get(v_e_325_, 1);
v_body_363_ = lean_ctor_get(v_e_325_, 2);
v_binderInfo_364_ = lean_ctor_get_uint8(v_e_325_, sizeof(void*)*3 + 8);
lean_inc(v_offset_326_);
lean_inc_ref(v_binderType_362_);
v___x_365_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1(v_s_323_, v_d_324_, v_binderType_362_, v_offset_326_, v_a_327_, v_a_328_, v_a_329_);
v_fst_366_ = lean_ctor_get(v___x_365_, 0);
lean_inc(v_fst_366_);
v_snd_367_ = lean_ctor_get(v___x_365_, 1);
lean_inc(v_snd_367_);
lean_dec_ref(v___x_365_);
v_fst_368_ = lean_ctor_get(v_fst_366_, 0);
lean_inc(v_fst_368_);
v_snd_369_ = lean_ctor_get(v_fst_366_, 1);
lean_inc(v_snd_369_);
lean_dec(v_fst_366_);
v___x_370_ = lean_unsigned_to_nat(1u);
v___x_371_ = lean_nat_add(v_offset_326_, v___x_370_);
lean_dec(v_offset_326_);
lean_inc_ref(v_body_363_);
v___x_372_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1(v_s_323_, v_d_324_, v_body_363_, v___x_371_, v_snd_369_, v_a_328_, v_snd_367_);
v_fst_373_ = lean_ctor_get(v___x_372_, 0);
v_snd_374_ = lean_ctor_get(v___x_372_, 1);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_395_ == 0)
{
v___x_376_ = v___x_372_;
v_isShared_377_ = v_isSharedCheck_395_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_snd_374_);
lean_inc(v_fst_373_);
lean_dec(v___x_372_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_395_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v_fst_378_; lean_object* v_snd_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_394_; 
v_fst_378_ = lean_ctor_get(v_fst_373_, 0);
v_snd_379_ = lean_ctor_get(v_fst_373_, 1);
v_isSharedCheck_394_ = !lean_is_exclusive(v_fst_373_);
if (v_isSharedCheck_394_ == 0)
{
v___x_381_ = v_fst_373_;
v_isShared_382_ = v_isSharedCheck_394_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_snd_379_);
lean_inc(v_fst_378_);
lean_dec(v_fst_373_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_394_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
uint8_t v___y_384_; uint8_t v___x_392_; 
v___x_392_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_binderType_362_, v_fst_368_);
if (v___x_392_ == 0)
{
v___y_384_ = v___x_392_;
goto v___jp_383_;
}
else
{
uint8_t v___x_393_; 
v___x_393_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_363_, v_fst_378_);
v___y_384_ = v___x_393_;
goto v___jp_383_;
}
v___jp_383_:
{
if (v___y_384_ == 0)
{
lean_object* v___x_385_; 
lean_inc(v_binderName_361_);
lean_del_object(v___x_381_);
lean_del_object(v___x_376_);
lean_dec_ref(v_e_325_);
v___x_385_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__3(v_binderName_361_, v_binderInfo_364_, v_fst_368_, v_fst_378_, v_snd_379_, v_a_328_, v_snd_374_);
return v___x_385_;
}
else
{
lean_object* v___x_387_; 
lean_dec(v_fst_378_);
lean_dec(v_fst_368_);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 0, v_e_325_);
v___x_387_ = v___x_381_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_e_325_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v_snd_379_);
v___x_387_ = v_reuseFailAlloc_391_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
lean_object* v___x_389_; 
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 0, v___x_387_);
v___x_389_ = v___x_376_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v___x_387_);
lean_ctor_set(v_reuseFailAlloc_390_, 1, v_snd_374_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
}
}
}
case 7:
{
lean_object* v_binderName_396_; lean_object* v_binderType_397_; lean_object* v_body_398_; uint8_t v_binderInfo_399_; lean_object* v___x_400_; lean_object* v_fst_401_; lean_object* v_snd_402_; lean_object* v_fst_403_; lean_object* v_snd_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v_fst_408_; lean_object* v_snd_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_430_; 
v_binderName_396_ = lean_ctor_get(v_e_325_, 0);
v_binderType_397_ = lean_ctor_get(v_e_325_, 1);
v_body_398_ = lean_ctor_get(v_e_325_, 2);
v_binderInfo_399_ = lean_ctor_get_uint8(v_e_325_, sizeof(void*)*3 + 8);
lean_inc(v_offset_326_);
lean_inc_ref(v_binderType_397_);
v___x_400_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1(v_s_323_, v_d_324_, v_binderType_397_, v_offset_326_, v_a_327_, v_a_328_, v_a_329_);
v_fst_401_ = lean_ctor_get(v___x_400_, 0);
lean_inc(v_fst_401_);
v_snd_402_ = lean_ctor_get(v___x_400_, 1);
lean_inc(v_snd_402_);
lean_dec_ref(v___x_400_);
v_fst_403_ = lean_ctor_get(v_fst_401_, 0);
lean_inc(v_fst_403_);
v_snd_404_ = lean_ctor_get(v_fst_401_, 1);
lean_inc(v_snd_404_);
lean_dec(v_fst_401_);
v___x_405_ = lean_unsigned_to_nat(1u);
v___x_406_ = lean_nat_add(v_offset_326_, v___x_405_);
lean_dec(v_offset_326_);
lean_inc_ref(v_body_398_);
v___x_407_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1(v_s_323_, v_d_324_, v_body_398_, v___x_406_, v_snd_404_, v_a_328_, v_snd_402_);
v_fst_408_ = lean_ctor_get(v___x_407_, 0);
v_snd_409_ = lean_ctor_get(v___x_407_, 1);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_430_ == 0)
{
v___x_411_ = v___x_407_;
v_isShared_412_ = v_isSharedCheck_430_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_snd_409_);
lean_inc(v_fst_408_);
lean_dec(v___x_407_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_430_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v_fst_413_; lean_object* v_snd_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_429_; 
v_fst_413_ = lean_ctor_get(v_fst_408_, 0);
v_snd_414_ = lean_ctor_get(v_fst_408_, 1);
v_isSharedCheck_429_ = !lean_is_exclusive(v_fst_408_);
if (v_isSharedCheck_429_ == 0)
{
v___x_416_ = v_fst_408_;
v_isShared_417_ = v_isSharedCheck_429_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_snd_414_);
lean_inc(v_fst_413_);
lean_dec(v_fst_408_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_429_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
uint8_t v___y_419_; uint8_t v___x_427_; 
v___x_427_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_binderType_397_, v_fst_403_);
if (v___x_427_ == 0)
{
v___y_419_ = v___x_427_;
goto v___jp_418_;
}
else
{
uint8_t v___x_428_; 
v___x_428_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_398_, v_fst_413_);
v___y_419_ = v___x_428_;
goto v___jp_418_;
}
v___jp_418_:
{
if (v___y_419_ == 0)
{
lean_object* v___x_420_; 
lean_inc(v_binderName_396_);
lean_del_object(v___x_416_);
lean_del_object(v___x_411_);
lean_dec_ref(v_e_325_);
v___x_420_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__4(v_binderName_396_, v_binderInfo_399_, v_fst_403_, v_fst_413_, v_snd_414_, v_a_328_, v_snd_409_);
return v___x_420_;
}
else
{
lean_object* v___x_422_; 
lean_dec(v_fst_413_);
lean_dec(v_fst_403_);
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 0, v_e_325_);
v___x_422_ = v___x_416_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_e_325_);
lean_ctor_set(v_reuseFailAlloc_426_, 1, v_snd_414_);
v___x_422_ = v_reuseFailAlloc_426_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
lean_object* v___x_424_; 
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 0, v___x_422_);
v___x_424_ = v___x_411_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v___x_422_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v_snd_409_);
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
}
}
}
case 8:
{
lean_object* v_declName_431_; lean_object* v_type_432_; lean_object* v_value_433_; lean_object* v_body_434_; uint8_t v_nondep_435_; lean_object* v___x_436_; lean_object* v_fst_437_; lean_object* v_snd_438_; lean_object* v_fst_439_; lean_object* v_snd_440_; lean_object* v___x_441_; lean_object* v_fst_442_; lean_object* v_snd_443_; lean_object* v_fst_444_; lean_object* v_snd_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v_fst_449_; lean_object* v_snd_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_473_; 
v_declName_431_ = lean_ctor_get(v_e_325_, 0);
v_type_432_ = lean_ctor_get(v_e_325_, 1);
v_value_433_ = lean_ctor_get(v_e_325_, 2);
v_body_434_ = lean_ctor_get(v_e_325_, 3);
v_nondep_435_ = lean_ctor_get_uint8(v_e_325_, sizeof(void*)*4 + 8);
lean_inc_n(v_offset_326_, 2);
lean_inc_ref(v_type_432_);
v___x_436_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1(v_s_323_, v_d_324_, v_type_432_, v_offset_326_, v_a_327_, v_a_328_, v_a_329_);
v_fst_437_ = lean_ctor_get(v___x_436_, 0);
lean_inc(v_fst_437_);
v_snd_438_ = lean_ctor_get(v___x_436_, 1);
lean_inc(v_snd_438_);
lean_dec_ref(v___x_436_);
v_fst_439_ = lean_ctor_get(v_fst_437_, 0);
lean_inc(v_fst_439_);
v_snd_440_ = lean_ctor_get(v_fst_437_, 1);
lean_inc(v_snd_440_);
lean_dec(v_fst_437_);
lean_inc_ref(v_value_433_);
v___x_441_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1(v_s_323_, v_d_324_, v_value_433_, v_offset_326_, v_snd_440_, v_a_328_, v_snd_438_);
v_fst_442_ = lean_ctor_get(v___x_441_, 0);
lean_inc(v_fst_442_);
v_snd_443_ = lean_ctor_get(v___x_441_, 1);
lean_inc(v_snd_443_);
lean_dec_ref(v___x_441_);
v_fst_444_ = lean_ctor_get(v_fst_442_, 0);
lean_inc(v_fst_444_);
v_snd_445_ = lean_ctor_get(v_fst_442_, 1);
lean_inc(v_snd_445_);
lean_dec(v_fst_442_);
v___x_446_ = lean_unsigned_to_nat(1u);
v___x_447_ = lean_nat_add(v_offset_326_, v___x_446_);
lean_dec(v_offset_326_);
lean_inc_ref(v_body_434_);
v___x_448_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1(v_s_323_, v_d_324_, v_body_434_, v___x_447_, v_snd_445_, v_a_328_, v_snd_443_);
v_fst_449_ = lean_ctor_get(v___x_448_, 0);
v_snd_450_ = lean_ctor_get(v___x_448_, 1);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_473_ == 0)
{
v___x_452_ = v___x_448_;
v_isShared_453_ = v_isSharedCheck_473_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_snd_450_);
lean_inc(v_fst_449_);
lean_dec(v___x_448_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_473_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v_fst_454_; lean_object* v_snd_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_472_; 
v_fst_454_ = lean_ctor_get(v_fst_449_, 0);
v_snd_455_ = lean_ctor_get(v_fst_449_, 1);
v_isSharedCheck_472_ = !lean_is_exclusive(v_fst_449_);
if (v_isSharedCheck_472_ == 0)
{
v___x_457_ = v_fst_449_;
v_isShared_458_ = v_isSharedCheck_472_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_snd_455_);
lean_inc(v_fst_454_);
lean_dec(v_fst_449_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_472_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
uint8_t v___y_460_; uint8_t v___x_470_; 
v___x_470_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_type_432_, v_fst_439_);
if (v___x_470_ == 0)
{
v___y_460_ = v___x_470_;
goto v___jp_459_;
}
else
{
uint8_t v___x_471_; 
v___x_471_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_value_433_, v_fst_444_);
v___y_460_ = v___x_471_;
goto v___jp_459_;
}
v___jp_459_:
{
if (v___y_460_ == 0)
{
lean_object* v___x_461_; 
lean_inc(v_declName_431_);
lean_del_object(v___x_457_);
lean_del_object(v___x_452_);
lean_dec_ref(v_e_325_);
v___x_461_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__5(v_declName_431_, v_fst_439_, v_fst_444_, v_fst_454_, v_nondep_435_, v_snd_455_, v_a_328_, v_snd_450_);
return v___x_461_;
}
else
{
uint8_t v___x_462_; 
v___x_462_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_434_, v_fst_454_);
if (v___x_462_ == 0)
{
lean_object* v___x_463_; 
lean_inc(v_declName_431_);
lean_del_object(v___x_457_);
lean_del_object(v___x_452_);
lean_dec_ref(v_e_325_);
v___x_463_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__5(v_declName_431_, v_fst_439_, v_fst_444_, v_fst_454_, v_nondep_435_, v_snd_455_, v_a_328_, v_snd_450_);
return v___x_463_;
}
else
{
lean_object* v___x_465_; 
lean_dec(v_fst_454_);
lean_dec(v_fst_444_);
lean_dec(v_fst_439_);
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 0, v_e_325_);
v___x_465_ = v___x_457_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_e_325_);
lean_ctor_set(v_reuseFailAlloc_469_, 1, v_snd_455_);
v___x_465_ = v_reuseFailAlloc_469_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
lean_object* v___x_467_; 
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 0, v___x_465_);
v___x_467_ = v___x_452_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v___x_465_);
lean_ctor_set(v_reuseFailAlloc_468_, 1, v_snd_450_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
}
}
}
}
}
case 10:
{
lean_object* v_data_474_; lean_object* v_expr_475_; lean_object* v___x_476_; lean_object* v_fst_477_; lean_object* v_snd_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_496_; 
v_data_474_ = lean_ctor_get(v_e_325_, 0);
v_expr_475_ = lean_ctor_get(v_e_325_, 1);
lean_inc_ref(v_expr_475_);
v___x_476_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1(v_s_323_, v_d_324_, v_expr_475_, v_offset_326_, v_a_327_, v_a_328_, v_a_329_);
v_fst_477_ = lean_ctor_get(v___x_476_, 0);
v_snd_478_ = lean_ctor_get(v___x_476_, 1);
v_isSharedCheck_496_ = !lean_is_exclusive(v___x_476_);
if (v_isSharedCheck_496_ == 0)
{
v___x_480_ = v___x_476_;
v_isShared_481_ = v_isSharedCheck_496_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_snd_478_);
lean_inc(v_fst_477_);
lean_dec(v___x_476_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_496_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v_fst_482_; lean_object* v_snd_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_495_; 
v_fst_482_ = lean_ctor_get(v_fst_477_, 0);
v_snd_483_ = lean_ctor_get(v_fst_477_, 1);
v_isSharedCheck_495_ = !lean_is_exclusive(v_fst_477_);
if (v_isSharedCheck_495_ == 0)
{
v___x_485_ = v_fst_477_;
v_isShared_486_ = v_isSharedCheck_495_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_snd_483_);
lean_inc(v_fst_482_);
lean_dec(v_fst_477_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_495_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
uint8_t v___x_487_; 
v___x_487_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_expr_475_, v_fst_482_);
if (v___x_487_ == 0)
{
lean_object* v___x_488_; 
lean_inc(v_data_474_);
lean_del_object(v___x_485_);
lean_del_object(v___x_480_);
lean_dec_ref(v_e_325_);
v___x_488_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__6(v_data_474_, v_fst_482_, v_snd_483_, v_a_328_, v_snd_478_);
return v___x_488_;
}
else
{
lean_object* v___x_490_; 
lean_dec(v_fst_482_);
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 0, v_e_325_);
v___x_490_ = v___x_485_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_e_325_);
lean_ctor_set(v_reuseFailAlloc_494_, 1, v_snd_483_);
v___x_490_ = v_reuseFailAlloc_494_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
lean_object* v___x_492_; 
if (v_isShared_481_ == 0)
{
lean_ctor_set(v___x_480_, 0, v___x_490_);
v___x_492_ = v___x_480_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_490_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v_snd_478_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
}
}
case 11:
{
lean_object* v_typeName_497_; lean_object* v_idx_498_; lean_object* v_struct_499_; lean_object* v___x_500_; lean_object* v_fst_501_; lean_object* v_snd_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_520_; 
v_typeName_497_ = lean_ctor_get(v_e_325_, 0);
v_idx_498_ = lean_ctor_get(v_e_325_, 1);
v_struct_499_ = lean_ctor_get(v_e_325_, 2);
lean_inc_ref(v_struct_499_);
v___x_500_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1(v_s_323_, v_d_324_, v_struct_499_, v_offset_326_, v_a_327_, v_a_328_, v_a_329_);
v_fst_501_ = lean_ctor_get(v___x_500_, 0);
v_snd_502_ = lean_ctor_get(v___x_500_, 1);
v_isSharedCheck_520_ = !lean_is_exclusive(v___x_500_);
if (v_isSharedCheck_520_ == 0)
{
v___x_504_ = v___x_500_;
v_isShared_505_ = v_isSharedCheck_520_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_snd_502_);
lean_inc(v_fst_501_);
lean_dec(v___x_500_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_520_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v_fst_506_; lean_object* v_snd_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_519_; 
v_fst_506_ = lean_ctor_get(v_fst_501_, 0);
v_snd_507_ = lean_ctor_get(v_fst_501_, 1);
v_isSharedCheck_519_ = !lean_is_exclusive(v_fst_501_);
if (v_isSharedCheck_519_ == 0)
{
v___x_509_ = v_fst_501_;
v_isShared_510_ = v_isSharedCheck_519_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_snd_507_);
lean_inc(v_fst_506_);
lean_dec(v_fst_501_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_519_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
uint8_t v___x_511_; 
v___x_511_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_struct_499_, v_fst_506_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; 
lean_inc(v_idx_498_);
lean_inc(v_typeName_497_);
lean_del_object(v___x_509_);
lean_del_object(v___x_504_);
lean_dec_ref(v_e_325_);
v___x_512_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__7(v_typeName_497_, v_idx_498_, v_fst_506_, v_snd_507_, v_a_328_, v_snd_502_);
return v___x_512_;
}
else
{
lean_object* v___x_514_; 
lean_dec(v_fst_506_);
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 0, v_e_325_);
v___x_514_ = v___x_509_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_e_325_);
lean_ctor_set(v_reuseFailAlloc_518_, 1, v_snd_507_);
v___x_514_ = v_reuseFailAlloc_518_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
lean_object* v___x_516_; 
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 0, v___x_514_);
v___x_516_ = v___x_504_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_517_, 1, v_snd_502_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
}
}
}
default: 
{
lean_object* v___x_521_; lean_object* v___x_522_; 
lean_dec(v_offset_326_);
lean_dec_ref(v_e_325_);
v___x_521_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__3, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__3_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__3);
v___x_522_ = l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8(v___x_521_, v_a_327_, v_a_328_, v_a_329_);
return v___x_522_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1(lean_object* v_s_523_, lean_object* v_d_524_, lean_object* v_e_525_, lean_object* v_offset_526_, lean_object* v_a_527_, uint8_t v_a_528_, lean_object* v_a_529_){
_start:
{
lean_object* v_key_530_; lean_object* v_snd_532_; lean_object* v___x_545_; 
lean_inc(v_offset_526_);
lean_inc_ref(v_e_525_);
v_key_530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_530_, 0, v_e_525_);
lean_ctor_set(v_key_530_, 1, v_offset_526_);
v___x_545_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2___redArg(v_a_527_, v_key_530_);
if (lean_obj_tag(v___x_545_) == 1)
{
lean_object* v_val_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
lean_dec_ref(v_key_530_);
lean_dec(v_offset_526_);
lean_dec_ref(v_e_525_);
v_val_546_ = lean_ctor_get(v___x_545_, 0);
lean_inc(v_val_546_);
lean_dec_ref(v___x_545_);
v___x_547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_547_, 0, v_val_546_);
lean_ctor_set(v___x_547_, 1, v_a_527_);
v___x_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
lean_ctor_set(v___x_548_, 1, v_a_529_);
return v___x_548_;
}
else
{
lean_object* v_s_u2081_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
lean_dec(v___x_545_);
v_s_u2081_549_ = lean_nat_add(v_s_523_, v_offset_526_);
v___x_550_ = l_Lean_Expr_looseBVarRange(v_e_525_);
v___x_551_ = lean_nat_dec_le(v___x_550_, v_s_u2081_549_);
lean_dec(v___x_550_);
if (v___x_551_ == 0)
{
if (lean_obj_tag(v_e_525_) == 0)
{
lean_object* v_deBruijnIndex_552_; uint8_t v___x_553_; 
v_deBruijnIndex_552_ = lean_ctor_get(v_e_525_, 0);
v___x_553_ = lean_nat_dec_le(v_s_u2081_549_, v_deBruijnIndex_552_);
lean_dec(v_s_u2081_549_);
if (v___x_553_ == 0)
{
v_snd_532_ = v_a_529_;
goto v___jp_531_;
}
else
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v_fst_556_; lean_object* v_snd_557_; lean_object* v___x_558_; 
lean_inc(v_deBruijnIndex_552_);
lean_dec_ref(v_e_525_);
lean_dec(v_offset_526_);
v___x_554_ = lean_nat_sub(v_deBruijnIndex_552_, v_d_524_);
lean_dec(v_deBruijnIndex_552_);
v___x_555_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__0___redArg(v___x_554_, v_a_529_);
v_fst_556_ = lean_ctor_get(v___x_555_, 0);
lean_inc(v_fst_556_);
v_snd_557_ = lean_ctor_get(v___x_555_, 1);
lean_inc(v_snd_557_);
lean_dec_ref(v___x_555_);
v___x_558_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_530_, v_fst_556_, v_a_527_, v_a_528_, v_snd_557_);
return v___x_558_;
}
}
else
{
lean_dec(v_s_u2081_549_);
v_snd_532_ = v_a_529_;
goto v___jp_531_;
}
}
else
{
lean_object* v___x_559_; 
lean_dec(v_s_u2081_549_);
lean_dec(v_offset_526_);
v___x_559_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_530_, v_e_525_, v_a_527_, v_a_528_, v_a_529_);
return v___x_559_;
}
}
v___jp_531_:
{
switch(lean_obj_tag(v_e_525_))
{
case 9:
{
lean_object* v___x_533_; 
lean_dec(v_offset_526_);
v___x_533_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_530_, v_e_525_, v_a_527_, v_a_528_, v_snd_532_);
return v___x_533_;
}
case 2:
{
lean_object* v___x_534_; 
lean_dec(v_offset_526_);
v___x_534_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_530_, v_e_525_, v_a_527_, v_a_528_, v_snd_532_);
return v___x_534_;
}
case 0:
{
lean_object* v___x_535_; 
lean_dec(v_offset_526_);
v___x_535_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_530_, v_e_525_, v_a_527_, v_a_528_, v_snd_532_);
return v___x_535_;
}
case 1:
{
lean_object* v___x_536_; 
lean_dec(v_offset_526_);
v___x_536_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_530_, v_e_525_, v_a_527_, v_a_528_, v_snd_532_);
return v___x_536_;
}
case 4:
{
lean_object* v___x_537_; 
lean_dec(v_offset_526_);
v___x_537_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_530_, v_e_525_, v_a_527_, v_a_528_, v_snd_532_);
return v___x_537_;
}
case 3:
{
lean_object* v___x_538_; 
lean_dec(v_offset_526_);
v___x_538_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_530_, v_e_525_, v_a_527_, v_a_528_, v_snd_532_);
return v___x_538_;
}
default: 
{
lean_object* v___x_539_; lean_object* v_fst_540_; lean_object* v_snd_541_; lean_object* v_fst_542_; lean_object* v_snd_543_; lean_object* v___x_544_; 
v___x_539_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1(v_s_523_, v_d_524_, v_e_525_, v_offset_526_, v_a_527_, v_a_528_, v_snd_532_);
v_fst_540_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_fst_540_);
v_snd_541_ = lean_ctor_get(v___x_539_, 1);
lean_inc(v_snd_541_);
lean_dec_ref(v___x_539_);
v_fst_542_ = lean_ctor_get(v_fst_540_, 0);
lean_inc(v_fst_542_);
v_snd_543_ = lean_ctor_get(v_fst_540_, 1);
lean_inc(v_snd_543_);
lean_dec(v_fst_540_);
v___x_544_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_530_, v_fst_542_, v_snd_543_, v_a_528_, v_snd_541_);
return v___x_544_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1___boxed(lean_object* v_s_560_, lean_object* v_d_561_, lean_object* v_e_562_, lean_object* v_offset_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_){
_start:
{
uint8_t v_a_boxed_567_; lean_object* v_res_568_; 
v_a_boxed_567_ = lean_unbox(v_a_565_);
v_res_568_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1(v_s_560_, v_d_561_, v_e_562_, v_offset_563_, v_a_564_, v_a_boxed_567_, v_a_566_);
lean_dec(v_d_561_);
lean_dec(v_s_560_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___boxed(lean_object* v_s_569_, lean_object* v_d_570_, lean_object* v_e_571_, lean_object* v_offset_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_){
_start:
{
uint8_t v_a_boxed_576_; lean_object* v_res_577_; 
v_a_boxed_576_ = lean_unbox(v_a_574_);
v_res_577_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1(v_s_569_, v_d_570_, v_e_571_, v_offset_572_, v_a_573_, v_a_boxed_576_, v_a_575_);
lean_dec(v_d_570_);
lean_dec(v_s_569_);
return v_res_577_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_lowerLooseBVarsS_x27___closed__0(void){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_578_ = lean_box(0);
v___x_579_ = lean_unsigned_to_nat(16u);
v___x_580_ = lean_mk_array(v___x_579_, v___x_578_);
return v___x_580_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_lowerLooseBVarsS_x27___closed__1(void){
_start:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_581_ = lean_obj_once(&l_Lean_Meta_Sym_lowerLooseBVarsS_x27___closed__0, &l_Lean_Meta_Sym_lowerLooseBVarsS_x27___closed__0_once, _init_l_Lean_Meta_Sym_lowerLooseBVarsS_x27___closed__0);
v___x_582_ = lean_unsigned_to_nat(0u);
v___x_583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
lean_ctor_set(v___x_583_, 1, v___x_581_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_lowerLooseBVarsS_x27(lean_object* v_e_584_, lean_object* v_s_585_, lean_object* v_d_586_, uint8_t v_a_587_, lean_object* v_a_588_){
_start:
{
lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_589_ = l_Lean_Expr_looseBVarRange(v_e_584_);
v___x_590_ = lean_nat_dec_le(v___x_589_, v_s_585_);
lean_dec(v___x_589_);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; lean_object* v_snd_593_; 
v___x_591_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_e_584_) == 0)
{
lean_object* v_deBruijnIndex_613_; uint8_t v___x_614_; 
v_deBruijnIndex_613_ = lean_ctor_get(v_e_584_, 0);
v___x_614_ = lean_nat_dec_le(v_s_585_, v_deBruijnIndex_613_);
if (v___x_614_ == 0)
{
v_snd_593_ = v_a_588_;
goto v___jp_592_;
}
else
{
lean_object* v___x_615_; lean_object* v___x_616_; 
lean_inc(v_deBruijnIndex_613_);
lean_dec_ref(v_e_584_);
v___x_615_ = lean_nat_sub(v_deBruijnIndex_613_, v_d_586_);
lean_dec(v_deBruijnIndex_613_);
v___x_616_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__0___redArg(v___x_615_, v_a_588_);
return v___x_616_;
}
}
else
{
v_snd_593_ = v_a_588_;
goto v___jp_592_;
}
v___jp_592_:
{
switch(lean_obj_tag(v_e_584_))
{
case 9:
{
lean_object* v___x_594_; 
v___x_594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_594_, 0, v_e_584_);
lean_ctor_set(v___x_594_, 1, v_snd_593_);
return v___x_594_;
}
case 2:
{
lean_object* v___x_595_; 
v___x_595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_595_, 0, v_e_584_);
lean_ctor_set(v___x_595_, 1, v_snd_593_);
return v___x_595_;
}
case 0:
{
lean_object* v___x_596_; 
v___x_596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_596_, 0, v_e_584_);
lean_ctor_set(v___x_596_, 1, v_snd_593_);
return v___x_596_;
}
case 1:
{
lean_object* v___x_597_; 
v___x_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_597_, 0, v_e_584_);
lean_ctor_set(v___x_597_, 1, v_snd_593_);
return v___x_597_;
}
case 4:
{
lean_object* v___x_598_; 
v___x_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_598_, 0, v_e_584_);
lean_ctor_set(v___x_598_, 1, v_snd_593_);
return v___x_598_;
}
case 3:
{
lean_object* v___x_599_; 
v___x_599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_599_, 0, v_e_584_);
lean_ctor_set(v___x_599_, 1, v_snd_593_);
return v___x_599_;
}
default: 
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v_fst_602_; lean_object* v_snd_603_; lean_object* v_fst_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_611_; 
v___x_600_ = lean_obj_once(&l_Lean_Meta_Sym_lowerLooseBVarsS_x27___closed__1, &l_Lean_Meta_Sym_lowerLooseBVarsS_x27___closed__1_once, _init_l_Lean_Meta_Sym_lowerLooseBVarsS_x27___closed__1);
v___x_601_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1(v_s_585_, v_d_586_, v_e_584_, v___x_591_, v___x_600_, v_a_587_, v_snd_593_);
v_fst_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc(v_fst_602_);
v_snd_603_ = lean_ctor_get(v___x_601_, 1);
lean_inc(v_snd_603_);
lean_dec_ref(v___x_601_);
v_fst_604_ = lean_ctor_get(v_fst_602_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v_fst_602_);
if (v_isSharedCheck_611_ == 0)
{
lean_object* v_unused_612_; 
v_unused_612_ = lean_ctor_get(v_fst_602_, 1);
lean_dec(v_unused_612_);
v___x_606_ = v_fst_602_;
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_fst_604_);
lean_dec(v_fst_602_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_609_; 
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 1, v_snd_603_);
v___x_609_ = v___x_606_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_fst_604_);
lean_ctor_set(v_reuseFailAlloc_610_, 1, v_snd_603_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
}
}
}
}
else
{
lean_object* v___x_617_; 
v___x_617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_617_, 0, v_e_584_);
lean_ctor_set(v___x_617_, 1, v_a_588_);
return v___x_617_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_lowerLooseBVarsS_x27___boxed(lean_object* v_e_618_, lean_object* v_s_619_, lean_object* v_d_620_, lean_object* v_a_621_, lean_object* v_a_622_){
_start:
{
uint8_t v_a_boxed_623_; lean_object* v_res_624_; 
v_a_boxed_623_ = lean_unbox(v_a_621_);
v_res_624_ = l_Lean_Meta_Sym_lowerLooseBVarsS_x27(v_e_618_, v_s_619_, v_d_620_, v_a_boxed_623_, v_a_622_);
lean_dec(v_d_620_);
lean_dec(v_s_619_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_625_, lean_object* v_m_626_, lean_object* v_a_627_){
_start:
{
lean_object* v___x_628_; 
v___x_628_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2___redArg(v_m_626_, v_a_627_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_629_, lean_object* v_m_630_, lean_object* v_a_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2(v_00_u03b2_629_, v_m_630_, v_a_631_);
lean_dec_ref(v_a_631_);
lean_dec_ref(v_m_630_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2_spec__10(lean_object* v_00_u03b2_633_, lean_object* v_a_634_, lean_object* v_x_635_){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2_spec__10___redArg(v_a_634_, v_x_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2_spec__10___boxed(lean_object* v_00_u03b2_637_, lean_object* v_a_638_, lean_object* v_x_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2_spec__10(v_00_u03b2_637_, v_a_638_, v_x_639_);
lean_dec(v_x_639_);
lean_dec_ref(v_a_638_);
return v_res_640_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_lowerLooseBVarsS_spec__0___closed__0(void){
_start:
{
lean_object* v___x_641_; 
v___x_641_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_641_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_lowerLooseBVarsS_spec__0___closed__1(void){
_start:
{
lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_642_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_lowerLooseBVarsS_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_lowerLooseBVarsS_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_lowerLooseBVarsS_spec__0___closed__0);
v___x_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_643_, 0, v___x_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_lowerLooseBVarsS_spec__0(lean_object* v_00_u03b2_644_){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_lowerLooseBVarsS_spec__0___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_lowerLooseBVarsS_spec__0___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_lowerLooseBVarsS_spec__0___closed__1);
return v___x_645_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_lowerLooseBVarsS___redArg___closed__0(void){
_start:
{
lean_object* v___x_646_; 
v___x_646_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_lowerLooseBVarsS_spec__0(lean_box(0));
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_lowerLooseBVarsS___redArg(lean_object* v_e_647_, lean_object* v_s_648_, lean_object* v_d_649_, lean_object* v_a_650_, lean_object* v_a_651_){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v_share_655_; lean_object* v_maxFVar_656_; lean_object* v_proofInstInfo_657_; lean_object* v_inferType_658_; lean_object* v_getLevel_659_; lean_object* v_congrInfo_660_; lean_object* v_defEqI_661_; lean_object* v_extensions_662_; lean_object* v_issues_663_; lean_object* v_canon_664_; uint8_t v_debug_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_702_; 
v___x_653_ = lean_st_ref_get(v_a_651_);
lean_dec(v___x_653_);
v___x_654_ = lean_st_ref_take(v_a_650_);
v_share_655_ = lean_ctor_get(v___x_654_, 0);
v_maxFVar_656_ = lean_ctor_get(v___x_654_, 1);
v_proofInstInfo_657_ = lean_ctor_get(v___x_654_, 2);
v_inferType_658_ = lean_ctor_get(v___x_654_, 3);
v_getLevel_659_ = lean_ctor_get(v___x_654_, 4);
v_congrInfo_660_ = lean_ctor_get(v___x_654_, 5);
v_defEqI_661_ = lean_ctor_get(v___x_654_, 6);
v_extensions_662_ = lean_ctor_get(v___x_654_, 7);
v_issues_663_ = lean_ctor_get(v___x_654_, 8);
v_canon_664_ = lean_ctor_get(v___x_654_, 9);
v_debug_665_ = lean_ctor_get_uint8(v___x_654_, sizeof(void*)*10);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_702_ == 0)
{
v___x_667_ = v___x_654_;
v_isShared_668_ = v_isSharedCheck_702_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_canon_664_);
lean_inc(v_issues_663_);
lean_inc(v_extensions_662_);
lean_inc(v_defEqI_661_);
lean_inc(v_congrInfo_660_);
lean_inc(v_getLevel_659_);
lean_inc(v_inferType_658_);
lean_inc(v_proofInstInfo_657_);
lean_inc(v_maxFVar_656_);
lean_inc(v_share_655_);
lean_dec(v___x_654_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_702_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_669_; lean_object* v___x_671_; 
v___x_669_ = lean_obj_once(&l_Lean_Meta_Sym_lowerLooseBVarsS___redArg___closed__0, &l_Lean_Meta_Sym_lowerLooseBVarsS___redArg___closed__0_once, _init_l_Lean_Meta_Sym_lowerLooseBVarsS___redArg___closed__0);
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 0, v___x_669_);
v___x_671_ = v___x_667_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v___x_669_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v_maxFVar_656_);
lean_ctor_set(v_reuseFailAlloc_701_, 2, v_proofInstInfo_657_);
lean_ctor_set(v_reuseFailAlloc_701_, 3, v_inferType_658_);
lean_ctor_set(v_reuseFailAlloc_701_, 4, v_getLevel_659_);
lean_ctor_set(v_reuseFailAlloc_701_, 5, v_congrInfo_660_);
lean_ctor_set(v_reuseFailAlloc_701_, 6, v_defEqI_661_);
lean_ctor_set(v_reuseFailAlloc_701_, 7, v_extensions_662_);
lean_ctor_set(v_reuseFailAlloc_701_, 8, v_issues_663_);
lean_ctor_set(v_reuseFailAlloc_701_, 9, v_canon_664_);
lean_ctor_set_uint8(v_reuseFailAlloc_701_, sizeof(void*)*10, v_debug_665_);
v___x_671_ = v_reuseFailAlloc_701_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; uint8_t v_debug_675_; lean_object* v___x_676_; lean_object* v_fst_677_; lean_object* v_snd_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v_maxFVar_681_; lean_object* v_proofInstInfo_682_; lean_object* v_inferType_683_; lean_object* v_getLevel_684_; lean_object* v_congrInfo_685_; lean_object* v_defEqI_686_; lean_object* v_extensions_687_; lean_object* v_issues_688_; lean_object* v_canon_689_; uint8_t v_debug_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_699_; 
v___x_672_ = lean_st_ref_set(v_a_650_, v___x_671_);
v___x_673_ = lean_st_ref_get(v_a_651_);
lean_dec(v___x_673_);
v___x_674_ = lean_st_ref_get(v_a_650_);
v_debug_675_ = lean_ctor_get_uint8(v___x_674_, sizeof(void*)*10);
lean_dec(v___x_674_);
v___x_676_ = l_Lean_Meta_Sym_lowerLooseBVarsS_x27(v_e_647_, v_s_648_, v_d_649_, v_debug_675_, v_share_655_);
v_fst_677_ = lean_ctor_get(v___x_676_, 0);
lean_inc(v_fst_677_);
v_snd_678_ = lean_ctor_get(v___x_676_, 1);
lean_inc(v_snd_678_);
lean_dec_ref(v___x_676_);
v___x_679_ = lean_st_ref_get(v_a_651_);
lean_dec(v___x_679_);
v___x_680_ = lean_st_ref_take(v_a_650_);
v_maxFVar_681_ = lean_ctor_get(v___x_680_, 1);
v_proofInstInfo_682_ = lean_ctor_get(v___x_680_, 2);
v_inferType_683_ = lean_ctor_get(v___x_680_, 3);
v_getLevel_684_ = lean_ctor_get(v___x_680_, 4);
v_congrInfo_685_ = lean_ctor_get(v___x_680_, 5);
v_defEqI_686_ = lean_ctor_get(v___x_680_, 6);
v_extensions_687_ = lean_ctor_get(v___x_680_, 7);
v_issues_688_ = lean_ctor_get(v___x_680_, 8);
v_canon_689_ = lean_ctor_get(v___x_680_, 9);
v_debug_690_ = lean_ctor_get_uint8(v___x_680_, sizeof(void*)*10);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_699_ == 0)
{
lean_object* v_unused_700_; 
v_unused_700_ = lean_ctor_get(v___x_680_, 0);
lean_dec(v_unused_700_);
v___x_692_ = v___x_680_;
v_isShared_693_ = v_isSharedCheck_699_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_canon_689_);
lean_inc(v_issues_688_);
lean_inc(v_extensions_687_);
lean_inc(v_defEqI_686_);
lean_inc(v_congrInfo_685_);
lean_inc(v_getLevel_684_);
lean_inc(v_inferType_683_);
lean_inc(v_proofInstInfo_682_);
lean_inc(v_maxFVar_681_);
lean_dec(v___x_680_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_699_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_695_; 
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 0, v_snd_678_);
v___x_695_ = v___x_692_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_snd_678_);
lean_ctor_set(v_reuseFailAlloc_698_, 1, v_maxFVar_681_);
lean_ctor_set(v_reuseFailAlloc_698_, 2, v_proofInstInfo_682_);
lean_ctor_set(v_reuseFailAlloc_698_, 3, v_inferType_683_);
lean_ctor_set(v_reuseFailAlloc_698_, 4, v_getLevel_684_);
lean_ctor_set(v_reuseFailAlloc_698_, 5, v_congrInfo_685_);
lean_ctor_set(v_reuseFailAlloc_698_, 6, v_defEqI_686_);
lean_ctor_set(v_reuseFailAlloc_698_, 7, v_extensions_687_);
lean_ctor_set(v_reuseFailAlloc_698_, 8, v_issues_688_);
lean_ctor_set(v_reuseFailAlloc_698_, 9, v_canon_689_);
lean_ctor_set_uint8(v_reuseFailAlloc_698_, sizeof(void*)*10, v_debug_690_);
v___x_695_ = v_reuseFailAlloc_698_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_696_ = lean_st_ref_set(v_a_650_, v___x_695_);
v___x_697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_697_, 0, v_fst_677_);
return v___x_697_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_lowerLooseBVarsS___redArg___boxed(lean_object* v_e_703_, lean_object* v_s_704_, lean_object* v_d_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l_Lean_Meta_Sym_lowerLooseBVarsS___redArg(v_e_703_, v_s_704_, v_d_705_, v_a_706_, v_a_707_);
lean_dec(v_a_707_);
lean_dec(v_a_706_);
lean_dec(v_d_705_);
lean_dec(v_s_704_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_lowerLooseBVarsS(lean_object* v_e_710_, lean_object* v_s_711_, lean_object* v_d_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_){
_start:
{
lean_object* v___x_720_; 
v___x_720_ = l_Lean_Meta_Sym_lowerLooseBVarsS___redArg(v_e_710_, v_s_711_, v_d_712_, v_a_714_, v_a_718_);
return v___x_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_lowerLooseBVarsS___boxed(lean_object* v_e_721_, lean_object* v_s_722_, lean_object* v_d_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l_Lean_Meta_Sym_lowerLooseBVarsS(v_e_721_, v_s_722_, v_d_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_);
lean_dec(v_a_729_);
lean_dec_ref(v_a_728_);
lean_dec(v_a_727_);
lean_dec_ref(v_a_726_);
lean_dec(v_a_725_);
lean_dec_ref(v_a_724_);
lean_dec(v_d_723_);
lean_dec(v_s_722_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0(lean_object* v_s_732_, lean_object* v_d_733_, lean_object* v_e_734_, lean_object* v_offset_735_, lean_object* v_a_736_, uint8_t v_a_737_, lean_object* v_a_738_){
_start:
{
switch(lean_obj_tag(v_e_734_))
{
case 5:
{
lean_object* v_fn_739_; lean_object* v_arg_740_; lean_object* v___x_741_; lean_object* v_fst_742_; lean_object* v_snd_743_; lean_object* v_fst_744_; lean_object* v_snd_745_; lean_object* v___x_746_; lean_object* v_fst_747_; lean_object* v_snd_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_769_; 
v_fn_739_ = lean_ctor_get(v_e_734_, 0);
v_arg_740_ = lean_ctor_get(v_e_734_, 1);
lean_inc(v_offset_735_);
lean_inc_ref(v_fn_739_);
v___x_741_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0_spec__0(v_s_732_, v_d_733_, v_fn_739_, v_offset_735_, v_a_736_, v_a_737_, v_a_738_);
v_fst_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_fst_742_);
v_snd_743_ = lean_ctor_get(v___x_741_, 1);
lean_inc(v_snd_743_);
lean_dec_ref(v___x_741_);
v_fst_744_ = lean_ctor_get(v_fst_742_, 0);
lean_inc(v_fst_744_);
v_snd_745_ = lean_ctor_get(v_fst_742_, 1);
lean_inc(v_snd_745_);
lean_dec(v_fst_742_);
lean_inc_ref(v_arg_740_);
v___x_746_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0_spec__0(v_s_732_, v_d_733_, v_arg_740_, v_offset_735_, v_snd_745_, v_a_737_, v_snd_743_);
v_fst_747_ = lean_ctor_get(v___x_746_, 0);
v_snd_748_ = lean_ctor_get(v___x_746_, 1);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_769_ == 0)
{
v___x_750_ = v___x_746_;
v_isShared_751_ = v_isSharedCheck_769_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_snd_748_);
lean_inc(v_fst_747_);
lean_dec(v___x_746_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_769_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v_fst_752_; lean_object* v_snd_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_768_; 
v_fst_752_ = lean_ctor_get(v_fst_747_, 0);
v_snd_753_ = lean_ctor_get(v_fst_747_, 1);
v_isSharedCheck_768_ = !lean_is_exclusive(v_fst_747_);
if (v_isSharedCheck_768_ == 0)
{
v___x_755_ = v_fst_747_;
v_isShared_756_ = v_isSharedCheck_768_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_snd_753_);
lean_inc(v_fst_752_);
lean_dec(v_fst_747_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_768_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
uint8_t v___y_758_; uint8_t v___x_766_; 
v___x_766_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_fn_739_, v_fst_744_);
if (v___x_766_ == 0)
{
v___y_758_ = v___x_766_;
goto v___jp_757_;
}
else
{
uint8_t v___x_767_; 
v___x_767_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_arg_740_, v_fst_752_);
v___y_758_ = v___x_767_;
goto v___jp_757_;
}
v___jp_757_:
{
if (v___y_758_ == 0)
{
lean_object* v___x_759_; 
lean_del_object(v___x_755_);
lean_del_object(v___x_750_);
lean_dec_ref(v_e_734_);
v___x_759_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__2(v_fst_744_, v_fst_752_, v_snd_753_, v_a_737_, v_snd_748_);
return v___x_759_;
}
else
{
lean_object* v___x_761_; 
lean_dec(v_fst_752_);
lean_dec(v_fst_744_);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 0, v_e_734_);
v___x_761_ = v___x_755_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_e_734_);
lean_ctor_set(v_reuseFailAlloc_765_, 1, v_snd_753_);
v___x_761_ = v_reuseFailAlloc_765_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
lean_object* v___x_763_; 
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 0, v___x_761_);
v___x_763_ = v___x_750_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v___x_761_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v_snd_748_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
}
}
}
}
case 6:
{
lean_object* v_binderName_770_; lean_object* v_binderType_771_; lean_object* v_body_772_; uint8_t v_binderInfo_773_; lean_object* v___x_774_; lean_object* v_fst_775_; lean_object* v_snd_776_; lean_object* v_fst_777_; lean_object* v_snd_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v_fst_782_; lean_object* v_snd_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_804_; 
v_binderName_770_ = lean_ctor_get(v_e_734_, 0);
v_binderType_771_ = lean_ctor_get(v_e_734_, 1);
v_body_772_ = lean_ctor_get(v_e_734_, 2);
v_binderInfo_773_ = lean_ctor_get_uint8(v_e_734_, sizeof(void*)*3 + 8);
lean_inc(v_offset_735_);
lean_inc_ref(v_binderType_771_);
v___x_774_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0_spec__0(v_s_732_, v_d_733_, v_binderType_771_, v_offset_735_, v_a_736_, v_a_737_, v_a_738_);
v_fst_775_ = lean_ctor_get(v___x_774_, 0);
lean_inc(v_fst_775_);
v_snd_776_ = lean_ctor_get(v___x_774_, 1);
lean_inc(v_snd_776_);
lean_dec_ref(v___x_774_);
v_fst_777_ = lean_ctor_get(v_fst_775_, 0);
lean_inc(v_fst_777_);
v_snd_778_ = lean_ctor_get(v_fst_775_, 1);
lean_inc(v_snd_778_);
lean_dec(v_fst_775_);
v___x_779_ = lean_unsigned_to_nat(1u);
v___x_780_ = lean_nat_add(v_offset_735_, v___x_779_);
lean_dec(v_offset_735_);
lean_inc_ref(v_body_772_);
v___x_781_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0_spec__0(v_s_732_, v_d_733_, v_body_772_, v___x_780_, v_snd_778_, v_a_737_, v_snd_776_);
v_fst_782_ = lean_ctor_get(v___x_781_, 0);
v_snd_783_ = lean_ctor_get(v___x_781_, 1);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_804_ == 0)
{
v___x_785_ = v___x_781_;
v_isShared_786_ = v_isSharedCheck_804_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_snd_783_);
lean_inc(v_fst_782_);
lean_dec(v___x_781_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_804_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v_fst_787_; lean_object* v_snd_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_803_; 
v_fst_787_ = lean_ctor_get(v_fst_782_, 0);
v_snd_788_ = lean_ctor_get(v_fst_782_, 1);
v_isSharedCheck_803_ = !lean_is_exclusive(v_fst_782_);
if (v_isSharedCheck_803_ == 0)
{
v___x_790_ = v_fst_782_;
v_isShared_791_ = v_isSharedCheck_803_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_snd_788_);
lean_inc(v_fst_787_);
lean_dec(v_fst_782_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_803_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
uint8_t v___y_793_; uint8_t v___x_801_; 
v___x_801_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_binderType_771_, v_fst_777_);
if (v___x_801_ == 0)
{
v___y_793_ = v___x_801_;
goto v___jp_792_;
}
else
{
uint8_t v___x_802_; 
v___x_802_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_772_, v_fst_787_);
v___y_793_ = v___x_802_;
goto v___jp_792_;
}
v___jp_792_:
{
if (v___y_793_ == 0)
{
lean_object* v___x_794_; 
lean_inc(v_binderName_770_);
lean_del_object(v___x_790_);
lean_del_object(v___x_785_);
lean_dec_ref(v_e_734_);
v___x_794_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__3(v_binderName_770_, v_binderInfo_773_, v_fst_777_, v_fst_787_, v_snd_788_, v_a_737_, v_snd_783_);
return v___x_794_;
}
else
{
lean_object* v___x_796_; 
lean_dec(v_fst_787_);
lean_dec(v_fst_777_);
if (v_isShared_791_ == 0)
{
lean_ctor_set(v___x_790_, 0, v_e_734_);
v___x_796_ = v___x_790_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_e_734_);
lean_ctor_set(v_reuseFailAlloc_800_, 1, v_snd_788_);
v___x_796_ = v_reuseFailAlloc_800_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
lean_object* v___x_798_; 
if (v_isShared_786_ == 0)
{
lean_ctor_set(v___x_785_, 0, v___x_796_);
v___x_798_ = v___x_785_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v___x_796_);
lean_ctor_set(v_reuseFailAlloc_799_, 1, v_snd_783_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
}
}
}
}
}
case 7:
{
lean_object* v_binderName_805_; lean_object* v_binderType_806_; lean_object* v_body_807_; uint8_t v_binderInfo_808_; lean_object* v___x_809_; lean_object* v_fst_810_; lean_object* v_snd_811_; lean_object* v_fst_812_; lean_object* v_snd_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v_fst_817_; lean_object* v_snd_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_839_; 
v_binderName_805_ = lean_ctor_get(v_e_734_, 0);
v_binderType_806_ = lean_ctor_get(v_e_734_, 1);
v_body_807_ = lean_ctor_get(v_e_734_, 2);
v_binderInfo_808_ = lean_ctor_get_uint8(v_e_734_, sizeof(void*)*3 + 8);
lean_inc(v_offset_735_);
lean_inc_ref(v_binderType_806_);
v___x_809_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0_spec__0(v_s_732_, v_d_733_, v_binderType_806_, v_offset_735_, v_a_736_, v_a_737_, v_a_738_);
v_fst_810_ = lean_ctor_get(v___x_809_, 0);
lean_inc(v_fst_810_);
v_snd_811_ = lean_ctor_get(v___x_809_, 1);
lean_inc(v_snd_811_);
lean_dec_ref(v___x_809_);
v_fst_812_ = lean_ctor_get(v_fst_810_, 0);
lean_inc(v_fst_812_);
v_snd_813_ = lean_ctor_get(v_fst_810_, 1);
lean_inc(v_snd_813_);
lean_dec(v_fst_810_);
v___x_814_ = lean_unsigned_to_nat(1u);
v___x_815_ = lean_nat_add(v_offset_735_, v___x_814_);
lean_dec(v_offset_735_);
lean_inc_ref(v_body_807_);
v___x_816_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0_spec__0(v_s_732_, v_d_733_, v_body_807_, v___x_815_, v_snd_813_, v_a_737_, v_snd_811_);
v_fst_817_ = lean_ctor_get(v___x_816_, 0);
v_snd_818_ = lean_ctor_get(v___x_816_, 1);
v_isSharedCheck_839_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_839_ == 0)
{
v___x_820_ = v___x_816_;
v_isShared_821_ = v_isSharedCheck_839_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_snd_818_);
lean_inc(v_fst_817_);
lean_dec(v___x_816_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_839_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v_fst_822_; lean_object* v_snd_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_838_; 
v_fst_822_ = lean_ctor_get(v_fst_817_, 0);
v_snd_823_ = lean_ctor_get(v_fst_817_, 1);
v_isSharedCheck_838_ = !lean_is_exclusive(v_fst_817_);
if (v_isSharedCheck_838_ == 0)
{
v___x_825_ = v_fst_817_;
v_isShared_826_ = v_isSharedCheck_838_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_snd_823_);
lean_inc(v_fst_822_);
lean_dec(v_fst_817_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_838_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
uint8_t v___y_828_; uint8_t v___x_836_; 
v___x_836_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_binderType_806_, v_fst_812_);
if (v___x_836_ == 0)
{
v___y_828_ = v___x_836_;
goto v___jp_827_;
}
else
{
uint8_t v___x_837_; 
v___x_837_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_807_, v_fst_822_);
v___y_828_ = v___x_837_;
goto v___jp_827_;
}
v___jp_827_:
{
if (v___y_828_ == 0)
{
lean_object* v___x_829_; 
lean_inc(v_binderName_805_);
lean_del_object(v___x_825_);
lean_del_object(v___x_820_);
lean_dec_ref(v_e_734_);
v___x_829_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__4(v_binderName_805_, v_binderInfo_808_, v_fst_812_, v_fst_822_, v_snd_823_, v_a_737_, v_snd_818_);
return v___x_829_;
}
else
{
lean_object* v___x_831_; 
lean_dec(v_fst_822_);
lean_dec(v_fst_812_);
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 0, v_e_734_);
v___x_831_ = v___x_825_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v_e_734_);
lean_ctor_set(v_reuseFailAlloc_835_, 1, v_snd_823_);
v___x_831_ = v_reuseFailAlloc_835_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
lean_object* v___x_833_; 
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 0, v___x_831_);
v___x_833_ = v___x_820_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_831_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v_snd_818_);
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
}
case 8:
{
lean_object* v_declName_840_; lean_object* v_type_841_; lean_object* v_value_842_; lean_object* v_body_843_; uint8_t v_nondep_844_; lean_object* v___x_845_; lean_object* v_fst_846_; lean_object* v_snd_847_; lean_object* v_fst_848_; lean_object* v_snd_849_; lean_object* v___x_850_; lean_object* v_fst_851_; lean_object* v_snd_852_; lean_object* v_fst_853_; lean_object* v_snd_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v_fst_858_; lean_object* v_snd_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_882_; 
v_declName_840_ = lean_ctor_get(v_e_734_, 0);
v_type_841_ = lean_ctor_get(v_e_734_, 1);
v_value_842_ = lean_ctor_get(v_e_734_, 2);
v_body_843_ = lean_ctor_get(v_e_734_, 3);
v_nondep_844_ = lean_ctor_get_uint8(v_e_734_, sizeof(void*)*4 + 8);
lean_inc_n(v_offset_735_, 2);
lean_inc_ref(v_type_841_);
v___x_845_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0_spec__0(v_s_732_, v_d_733_, v_type_841_, v_offset_735_, v_a_736_, v_a_737_, v_a_738_);
v_fst_846_ = lean_ctor_get(v___x_845_, 0);
lean_inc(v_fst_846_);
v_snd_847_ = lean_ctor_get(v___x_845_, 1);
lean_inc(v_snd_847_);
lean_dec_ref(v___x_845_);
v_fst_848_ = lean_ctor_get(v_fst_846_, 0);
lean_inc(v_fst_848_);
v_snd_849_ = lean_ctor_get(v_fst_846_, 1);
lean_inc(v_snd_849_);
lean_dec(v_fst_846_);
lean_inc_ref(v_value_842_);
v___x_850_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0_spec__0(v_s_732_, v_d_733_, v_value_842_, v_offset_735_, v_snd_849_, v_a_737_, v_snd_847_);
v_fst_851_ = lean_ctor_get(v___x_850_, 0);
lean_inc(v_fst_851_);
v_snd_852_ = lean_ctor_get(v___x_850_, 1);
lean_inc(v_snd_852_);
lean_dec_ref(v___x_850_);
v_fst_853_ = lean_ctor_get(v_fst_851_, 0);
lean_inc(v_fst_853_);
v_snd_854_ = lean_ctor_get(v_fst_851_, 1);
lean_inc(v_snd_854_);
lean_dec(v_fst_851_);
v___x_855_ = lean_unsigned_to_nat(1u);
v___x_856_ = lean_nat_add(v_offset_735_, v___x_855_);
lean_dec(v_offset_735_);
lean_inc_ref(v_body_843_);
v___x_857_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0_spec__0(v_s_732_, v_d_733_, v_body_843_, v___x_856_, v_snd_854_, v_a_737_, v_snd_852_);
v_fst_858_ = lean_ctor_get(v___x_857_, 0);
v_snd_859_ = lean_ctor_get(v___x_857_, 1);
v_isSharedCheck_882_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_882_ == 0)
{
v___x_861_ = v___x_857_;
v_isShared_862_ = v_isSharedCheck_882_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_snd_859_);
lean_inc(v_fst_858_);
lean_dec(v___x_857_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_882_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v_fst_863_; lean_object* v_snd_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_881_; 
v_fst_863_ = lean_ctor_get(v_fst_858_, 0);
v_snd_864_ = lean_ctor_get(v_fst_858_, 1);
v_isSharedCheck_881_ = !lean_is_exclusive(v_fst_858_);
if (v_isSharedCheck_881_ == 0)
{
v___x_866_ = v_fst_858_;
v_isShared_867_ = v_isSharedCheck_881_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_snd_864_);
lean_inc(v_fst_863_);
lean_dec(v_fst_858_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_881_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
uint8_t v___y_869_; uint8_t v___x_879_; 
v___x_879_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_type_841_, v_fst_848_);
if (v___x_879_ == 0)
{
v___y_869_ = v___x_879_;
goto v___jp_868_;
}
else
{
uint8_t v___x_880_; 
v___x_880_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_value_842_, v_fst_853_);
v___y_869_ = v___x_880_;
goto v___jp_868_;
}
v___jp_868_:
{
if (v___y_869_ == 0)
{
lean_object* v___x_870_; 
lean_inc(v_declName_840_);
lean_del_object(v___x_866_);
lean_del_object(v___x_861_);
lean_dec_ref(v_e_734_);
v___x_870_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__5(v_declName_840_, v_fst_848_, v_fst_853_, v_fst_863_, v_nondep_844_, v_snd_864_, v_a_737_, v_snd_859_);
return v___x_870_;
}
else
{
uint8_t v___x_871_; 
v___x_871_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_843_, v_fst_863_);
if (v___x_871_ == 0)
{
lean_object* v___x_872_; 
lean_inc(v_declName_840_);
lean_del_object(v___x_866_);
lean_del_object(v___x_861_);
lean_dec_ref(v_e_734_);
v___x_872_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__5(v_declName_840_, v_fst_848_, v_fst_853_, v_fst_863_, v_nondep_844_, v_snd_864_, v_a_737_, v_snd_859_);
return v___x_872_;
}
else
{
lean_object* v___x_874_; 
lean_dec(v_fst_863_);
lean_dec(v_fst_853_);
lean_dec(v_fst_848_);
if (v_isShared_867_ == 0)
{
lean_ctor_set(v___x_866_, 0, v_e_734_);
v___x_874_ = v___x_866_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_e_734_);
lean_ctor_set(v_reuseFailAlloc_878_, 1, v_snd_864_);
v___x_874_ = v_reuseFailAlloc_878_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
lean_object* v___x_876_; 
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 0, v___x_874_);
v___x_876_ = v___x_861_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v___x_874_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v_snd_859_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
}
}
}
}
}
}
case 10:
{
lean_object* v_data_883_; lean_object* v_expr_884_; lean_object* v___x_885_; lean_object* v_fst_886_; lean_object* v_snd_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_905_; 
v_data_883_ = lean_ctor_get(v_e_734_, 0);
v_expr_884_ = lean_ctor_get(v_e_734_, 1);
lean_inc_ref(v_expr_884_);
v___x_885_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0_spec__0(v_s_732_, v_d_733_, v_expr_884_, v_offset_735_, v_a_736_, v_a_737_, v_a_738_);
v_fst_886_ = lean_ctor_get(v___x_885_, 0);
v_snd_887_ = lean_ctor_get(v___x_885_, 1);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_905_ == 0)
{
v___x_889_ = v___x_885_;
v_isShared_890_ = v_isSharedCheck_905_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_snd_887_);
lean_inc(v_fst_886_);
lean_dec(v___x_885_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_905_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v_fst_891_; lean_object* v_snd_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_904_; 
v_fst_891_ = lean_ctor_get(v_fst_886_, 0);
v_snd_892_ = lean_ctor_get(v_fst_886_, 1);
v_isSharedCheck_904_ = !lean_is_exclusive(v_fst_886_);
if (v_isSharedCheck_904_ == 0)
{
v___x_894_ = v_fst_886_;
v_isShared_895_ = v_isSharedCheck_904_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_snd_892_);
lean_inc(v_fst_891_);
lean_dec(v_fst_886_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_904_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
uint8_t v___x_896_; 
v___x_896_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_expr_884_, v_fst_891_);
if (v___x_896_ == 0)
{
lean_object* v___x_897_; 
lean_inc(v_data_883_);
lean_del_object(v___x_894_);
lean_del_object(v___x_889_);
lean_dec_ref(v_e_734_);
v___x_897_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__6(v_data_883_, v_fst_891_, v_snd_892_, v_a_737_, v_snd_887_);
return v___x_897_;
}
else
{
lean_object* v___x_899_; 
lean_dec(v_fst_891_);
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 0, v_e_734_);
v___x_899_ = v___x_894_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_e_734_);
lean_ctor_set(v_reuseFailAlloc_903_, 1, v_snd_892_);
v___x_899_ = v_reuseFailAlloc_903_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
lean_object* v___x_901_; 
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 0, v___x_899_);
v___x_901_ = v___x_889_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v___x_899_);
lean_ctor_set(v_reuseFailAlloc_902_, 1, v_snd_887_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
}
}
case 11:
{
lean_object* v_typeName_906_; lean_object* v_idx_907_; lean_object* v_struct_908_; lean_object* v___x_909_; lean_object* v_fst_910_; lean_object* v_snd_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_929_; 
v_typeName_906_ = lean_ctor_get(v_e_734_, 0);
v_idx_907_ = lean_ctor_get(v_e_734_, 1);
v_struct_908_ = lean_ctor_get(v_e_734_, 2);
lean_inc_ref(v_struct_908_);
v___x_909_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0_spec__0(v_s_732_, v_d_733_, v_struct_908_, v_offset_735_, v_a_736_, v_a_737_, v_a_738_);
v_fst_910_ = lean_ctor_get(v___x_909_, 0);
v_snd_911_ = lean_ctor_get(v___x_909_, 1);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_929_ == 0)
{
v___x_913_ = v___x_909_;
v_isShared_914_ = v_isSharedCheck_929_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_snd_911_);
lean_inc(v_fst_910_);
lean_dec(v___x_909_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_929_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v_fst_915_; lean_object* v_snd_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_928_; 
v_fst_915_ = lean_ctor_get(v_fst_910_, 0);
v_snd_916_ = lean_ctor_get(v_fst_910_, 1);
v_isSharedCheck_928_ = !lean_is_exclusive(v_fst_910_);
if (v_isSharedCheck_928_ == 0)
{
v___x_918_ = v_fst_910_;
v_isShared_919_ = v_isSharedCheck_928_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_snd_916_);
lean_inc(v_fst_915_);
lean_dec(v_fst_910_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_928_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
uint8_t v___x_920_; 
v___x_920_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_struct_908_, v_fst_915_);
if (v___x_920_ == 0)
{
lean_object* v___x_921_; 
lean_inc(v_idx_907_);
lean_inc(v_typeName_906_);
lean_del_object(v___x_918_);
lean_del_object(v___x_913_);
lean_dec_ref(v_e_734_);
v___x_921_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__7(v_typeName_906_, v_idx_907_, v_fst_915_, v_snd_916_, v_a_737_, v_snd_911_);
return v___x_921_;
}
else
{
lean_object* v___x_923_; 
lean_dec(v_fst_915_);
if (v_isShared_919_ == 0)
{
lean_ctor_set(v___x_918_, 0, v_e_734_);
v___x_923_ = v___x_918_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_e_734_);
lean_ctor_set(v_reuseFailAlloc_927_, 1, v_snd_916_);
v___x_923_ = v_reuseFailAlloc_927_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
lean_object* v___x_925_; 
if (v_isShared_914_ == 0)
{
lean_ctor_set(v___x_913_, 0, v___x_923_);
v___x_925_ = v___x_913_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v___x_923_);
lean_ctor_set(v_reuseFailAlloc_926_, 1, v_snd_911_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
}
}
default: 
{
lean_object* v___x_930_; lean_object* v___x_931_; 
lean_dec(v_offset_735_);
lean_dec_ref(v_e_734_);
v___x_930_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__3, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__3_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1___closed__3);
v___x_931_ = l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__8(v___x_930_, v_a_736_, v_a_737_, v_a_738_);
return v___x_931_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0_spec__0(lean_object* v_s_932_, lean_object* v_d_933_, lean_object* v_e_934_, lean_object* v_offset_935_, lean_object* v_a_936_, uint8_t v_a_937_, lean_object* v_a_938_){
_start:
{
lean_object* v_key_939_; lean_object* v_snd_941_; lean_object* v___x_954_; 
lean_inc(v_offset_935_);
lean_inc_ref(v_e_934_);
v_key_939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_939_, 0, v_e_934_);
lean_ctor_set(v_key_939_, 1, v_offset_935_);
v___x_954_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__1_spec__1_spec__2___redArg(v_a_936_, v_key_939_);
if (lean_obj_tag(v___x_954_) == 1)
{
lean_object* v_val_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
lean_dec_ref(v_key_939_);
lean_dec(v_offset_935_);
lean_dec_ref(v_e_934_);
v_val_955_ = lean_ctor_get(v___x_954_, 0);
lean_inc(v_val_955_);
lean_dec_ref(v___x_954_);
v___x_956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_956_, 0, v_val_955_);
lean_ctor_set(v___x_956_, 1, v_a_936_);
v___x_957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_956_);
lean_ctor_set(v___x_957_, 1, v_a_938_);
return v___x_957_;
}
else
{
lean_object* v_s_u2081_958_; lean_object* v___x_959_; uint8_t v___x_960_; 
lean_dec(v___x_954_);
v_s_u2081_958_ = lean_nat_add(v_s_932_, v_offset_935_);
v___x_959_ = l_Lean_Expr_looseBVarRange(v_e_934_);
v___x_960_ = lean_nat_dec_le(v___x_959_, v_s_u2081_958_);
lean_dec(v___x_959_);
if (v___x_960_ == 0)
{
if (lean_obj_tag(v_e_934_) == 0)
{
lean_object* v_deBruijnIndex_961_; uint8_t v___x_962_; 
v_deBruijnIndex_961_ = lean_ctor_get(v_e_934_, 0);
v___x_962_ = lean_nat_dec_le(v_s_u2081_958_, v_deBruijnIndex_961_);
lean_dec(v_s_u2081_958_);
if (v___x_962_ == 0)
{
v_snd_941_ = v_a_938_;
goto v___jp_940_;
}
else
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v_fst_965_; lean_object* v_snd_966_; lean_object* v___x_967_; 
lean_inc(v_deBruijnIndex_961_);
lean_dec_ref(v_e_934_);
lean_dec(v_offset_935_);
v___x_963_ = lean_nat_add(v_deBruijnIndex_961_, v_d_933_);
lean_dec(v_deBruijnIndex_961_);
v___x_964_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__0___redArg(v___x_963_, v_a_938_);
v_fst_965_ = lean_ctor_get(v___x_964_, 0);
lean_inc(v_fst_965_);
v_snd_966_ = lean_ctor_get(v___x_964_, 1);
lean_inc(v_snd_966_);
lean_dec_ref(v___x_964_);
v___x_967_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_939_, v_fst_965_, v_a_936_, v_a_937_, v_snd_966_);
return v___x_967_;
}
}
else
{
lean_dec(v_s_u2081_958_);
v_snd_941_ = v_a_938_;
goto v___jp_940_;
}
}
else
{
lean_object* v___x_968_; 
lean_dec(v_s_u2081_958_);
lean_dec(v_offset_935_);
v___x_968_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_939_, v_e_934_, v_a_936_, v_a_937_, v_a_938_);
return v___x_968_;
}
}
v___jp_940_:
{
switch(lean_obj_tag(v_e_934_))
{
case 9:
{
lean_object* v___x_942_; 
lean_dec(v_offset_935_);
v___x_942_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_939_, v_e_934_, v_a_936_, v_a_937_, v_snd_941_);
return v___x_942_;
}
case 2:
{
lean_object* v___x_943_; 
lean_dec(v_offset_935_);
v___x_943_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_939_, v_e_934_, v_a_936_, v_a_937_, v_snd_941_);
return v___x_943_;
}
case 0:
{
lean_object* v___x_944_; 
lean_dec(v_offset_935_);
v___x_944_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_939_, v_e_934_, v_a_936_, v_a_937_, v_snd_941_);
return v___x_944_;
}
case 1:
{
lean_object* v___x_945_; 
lean_dec(v_offset_935_);
v___x_945_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_939_, v_e_934_, v_a_936_, v_a_937_, v_snd_941_);
return v___x_945_;
}
case 4:
{
lean_object* v___x_946_; 
lean_dec(v_offset_935_);
v___x_946_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_939_, v_e_934_, v_a_936_, v_a_937_, v_snd_941_);
return v___x_946_;
}
case 3:
{
lean_object* v___x_947_; 
lean_dec(v_offset_935_);
v___x_947_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_939_, v_e_934_, v_a_936_, v_a_937_, v_snd_941_);
return v___x_947_;
}
default: 
{
lean_object* v___x_948_; lean_object* v_fst_949_; lean_object* v_snd_950_; lean_object* v_fst_951_; lean_object* v_snd_952_; lean_object* v___x_953_; 
v___x_948_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0(v_s_932_, v_d_933_, v_e_934_, v_offset_935_, v_a_936_, v_a_937_, v_snd_941_);
v_fst_949_ = lean_ctor_get(v___x_948_, 0);
lean_inc(v_fst_949_);
v_snd_950_ = lean_ctor_get(v___x_948_, 1);
lean_inc(v_snd_950_);
lean_dec_ref(v___x_948_);
v_fst_951_ = lean_ctor_get(v_fst_949_, 0);
lean_inc(v_fst_951_);
v_snd_952_ = lean_ctor_get(v_fst_949_, 1);
lean_inc(v_snd_952_);
lean_dec(v_fst_949_);
v___x_953_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_939_, v_fst_951_, v_snd_952_, v_a_937_, v_snd_950_);
return v___x_953_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0_spec__0___boxed(lean_object* v_s_969_, lean_object* v_d_970_, lean_object* v_e_971_, lean_object* v_offset_972_, lean_object* v_a_973_, lean_object* v_a_974_, lean_object* v_a_975_){
_start:
{
uint8_t v_a_boxed_976_; lean_object* v_res_977_; 
v_a_boxed_976_ = lean_unbox(v_a_974_);
v_res_977_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0_spec__0(v_s_969_, v_d_970_, v_e_971_, v_offset_972_, v_a_973_, v_a_boxed_976_, v_a_975_);
lean_dec(v_d_970_);
lean_dec(v_s_969_);
return v_res_977_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0___boxed(lean_object* v_s_978_, lean_object* v_d_979_, lean_object* v_e_980_, lean_object* v_offset_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_){
_start:
{
uint8_t v_a_boxed_985_; lean_object* v_res_986_; 
v_a_boxed_985_ = lean_unbox(v_a_983_);
v_res_986_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0(v_s_978_, v_d_979_, v_e_980_, v_offset_981_, v_a_982_, v_a_boxed_985_, v_a_984_);
lean_dec(v_d_979_);
lean_dec(v_s_978_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLooseBVarsS_x27(lean_object* v_e_987_, lean_object* v_s_988_, lean_object* v_d_989_, uint8_t v_a_990_, lean_object* v_a_991_){
_start:
{
lean_object* v___x_992_; uint8_t v___x_993_; 
v___x_992_ = l_Lean_Expr_looseBVarRange(v_e_987_);
v___x_993_ = lean_nat_dec_le(v___x_992_, v_s_988_);
lean_dec(v___x_992_);
if (v___x_993_ == 0)
{
lean_object* v___x_994_; lean_object* v_snd_996_; 
v___x_994_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_e_987_) == 0)
{
lean_object* v_deBruijnIndex_1016_; uint8_t v___x_1017_; 
v_deBruijnIndex_1016_ = lean_ctor_get(v_e_987_, 0);
v___x_1017_ = lean_nat_dec_le(v_s_988_, v_deBruijnIndex_1016_);
if (v___x_1017_ == 0)
{
v_snd_996_ = v_a_991_;
goto v___jp_995_;
}
else
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
lean_inc(v_deBruijnIndex_1016_);
lean_dec_ref(v_e_987_);
v___x_1018_ = lean_nat_add(v_deBruijnIndex_1016_, v_d_989_);
lean_dec(v_deBruijnIndex_1016_);
v___x_1019_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_lowerLooseBVarsS_x27_spec__0___redArg(v___x_1018_, v_a_991_);
return v___x_1019_;
}
}
else
{
v_snd_996_ = v_a_991_;
goto v___jp_995_;
}
v___jp_995_:
{
switch(lean_obj_tag(v_e_987_))
{
case 9:
{
lean_object* v___x_997_; 
v___x_997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_997_, 0, v_e_987_);
lean_ctor_set(v___x_997_, 1, v_snd_996_);
return v___x_997_;
}
case 2:
{
lean_object* v___x_998_; 
v___x_998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_998_, 0, v_e_987_);
lean_ctor_set(v___x_998_, 1, v_snd_996_);
return v___x_998_;
}
case 0:
{
lean_object* v___x_999_; 
v___x_999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_999_, 0, v_e_987_);
lean_ctor_set(v___x_999_, 1, v_snd_996_);
return v___x_999_;
}
case 1:
{
lean_object* v___x_1000_; 
v___x_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1000_, 0, v_e_987_);
lean_ctor_set(v___x_1000_, 1, v_snd_996_);
return v___x_1000_;
}
case 4:
{
lean_object* v___x_1001_; 
v___x_1001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1001_, 0, v_e_987_);
lean_ctor_set(v___x_1001_, 1, v_snd_996_);
return v___x_1001_;
}
case 3:
{
lean_object* v___x_1002_; 
v___x_1002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1002_, 0, v_e_987_);
lean_ctor_set(v___x_1002_, 1, v_snd_996_);
return v___x_1002_;
}
default: 
{
lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v_fst_1005_; lean_object* v_snd_1006_; lean_object* v_fst_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
v___x_1003_ = lean_obj_once(&l_Lean_Meta_Sym_lowerLooseBVarsS_x27___closed__1, &l_Lean_Meta_Sym_lowerLooseBVarsS_x27___closed__1_once, _init_l_Lean_Meta_Sym_lowerLooseBVarsS_x27___closed__1);
v___x_1004_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_liftLooseBVarsS_x27_spec__0(v_s_988_, v_d_989_, v_e_987_, v___x_994_, v___x_1003_, v_a_990_, v_snd_996_);
v_fst_1005_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_fst_1005_);
v_snd_1006_ = lean_ctor_get(v___x_1004_, 1);
lean_inc(v_snd_1006_);
lean_dec_ref(v___x_1004_);
v_fst_1007_ = lean_ctor_get(v_fst_1005_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v_fst_1005_);
if (v_isSharedCheck_1014_ == 0)
{
lean_object* v_unused_1015_; 
v_unused_1015_ = lean_ctor_get(v_fst_1005_, 1);
lean_dec(v_unused_1015_);
v___x_1009_ = v_fst_1005_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_fst_1007_);
lean_dec(v_fst_1005_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1012_; 
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 1, v_snd_1006_);
v___x_1012_ = v___x_1009_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_fst_1007_);
lean_ctor_set(v_reuseFailAlloc_1013_, 1, v_snd_1006_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
}
}
}
else
{
lean_object* v___x_1020_; 
v___x_1020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1020_, 0, v_e_987_);
lean_ctor_set(v___x_1020_, 1, v_a_991_);
return v___x_1020_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLooseBVarsS_x27___boxed(lean_object* v_e_1021_, lean_object* v_s_1022_, lean_object* v_d_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_){
_start:
{
uint8_t v_a_boxed_1026_; lean_object* v_res_1027_; 
v_a_boxed_1026_ = lean_unbox(v_a_1024_);
v_res_1027_ = l_Lean_Meta_Sym_liftLooseBVarsS_x27(v_e_1021_, v_s_1022_, v_d_1023_, v_a_boxed_1026_, v_a_1025_);
lean_dec(v_d_1023_);
lean_dec(v_s_1022_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLooseBVarsS___redArg(lean_object* v_e_1028_, lean_object* v_s_1029_, lean_object* v_d_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_){
_start:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v_share_1036_; lean_object* v_maxFVar_1037_; lean_object* v_proofInstInfo_1038_; lean_object* v_inferType_1039_; lean_object* v_getLevel_1040_; lean_object* v_congrInfo_1041_; lean_object* v_defEqI_1042_; lean_object* v_extensions_1043_; lean_object* v_issues_1044_; lean_object* v_canon_1045_; uint8_t v_debug_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1083_; 
v___x_1034_ = lean_st_ref_get(v_a_1032_);
lean_dec(v___x_1034_);
v___x_1035_ = lean_st_ref_take(v_a_1031_);
v_share_1036_ = lean_ctor_get(v___x_1035_, 0);
v_maxFVar_1037_ = lean_ctor_get(v___x_1035_, 1);
v_proofInstInfo_1038_ = lean_ctor_get(v___x_1035_, 2);
v_inferType_1039_ = lean_ctor_get(v___x_1035_, 3);
v_getLevel_1040_ = lean_ctor_get(v___x_1035_, 4);
v_congrInfo_1041_ = lean_ctor_get(v___x_1035_, 5);
v_defEqI_1042_ = lean_ctor_get(v___x_1035_, 6);
v_extensions_1043_ = lean_ctor_get(v___x_1035_, 7);
v_issues_1044_ = lean_ctor_get(v___x_1035_, 8);
v_canon_1045_ = lean_ctor_get(v___x_1035_, 9);
v_debug_1046_ = lean_ctor_get_uint8(v___x_1035_, sizeof(void*)*10);
v_isSharedCheck_1083_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1048_ = v___x_1035_;
v_isShared_1049_ = v_isSharedCheck_1083_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_canon_1045_);
lean_inc(v_issues_1044_);
lean_inc(v_extensions_1043_);
lean_inc(v_defEqI_1042_);
lean_inc(v_congrInfo_1041_);
lean_inc(v_getLevel_1040_);
lean_inc(v_inferType_1039_);
lean_inc(v_proofInstInfo_1038_);
lean_inc(v_maxFVar_1037_);
lean_inc(v_share_1036_);
lean_dec(v___x_1035_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1083_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1050_; lean_object* v___x_1052_; 
v___x_1050_ = lean_obj_once(&l_Lean_Meta_Sym_lowerLooseBVarsS___redArg___closed__0, &l_Lean_Meta_Sym_lowerLooseBVarsS___redArg___closed__0_once, _init_l_Lean_Meta_Sym_lowerLooseBVarsS___redArg___closed__0);
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 0, v___x_1050_);
v___x_1052_ = v___x_1048_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v___x_1050_);
lean_ctor_set(v_reuseFailAlloc_1082_, 1, v_maxFVar_1037_);
lean_ctor_set(v_reuseFailAlloc_1082_, 2, v_proofInstInfo_1038_);
lean_ctor_set(v_reuseFailAlloc_1082_, 3, v_inferType_1039_);
lean_ctor_set(v_reuseFailAlloc_1082_, 4, v_getLevel_1040_);
lean_ctor_set(v_reuseFailAlloc_1082_, 5, v_congrInfo_1041_);
lean_ctor_set(v_reuseFailAlloc_1082_, 6, v_defEqI_1042_);
lean_ctor_set(v_reuseFailAlloc_1082_, 7, v_extensions_1043_);
lean_ctor_set(v_reuseFailAlloc_1082_, 8, v_issues_1044_);
lean_ctor_set(v_reuseFailAlloc_1082_, 9, v_canon_1045_);
lean_ctor_set_uint8(v_reuseFailAlloc_1082_, sizeof(void*)*10, v_debug_1046_);
v___x_1052_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; uint8_t v_debug_1056_; lean_object* v___x_1057_; lean_object* v_fst_1058_; lean_object* v_snd_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v_maxFVar_1062_; lean_object* v_proofInstInfo_1063_; lean_object* v_inferType_1064_; lean_object* v_getLevel_1065_; lean_object* v_congrInfo_1066_; lean_object* v_defEqI_1067_; lean_object* v_extensions_1068_; lean_object* v_issues_1069_; lean_object* v_canon_1070_; uint8_t v_debug_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1080_; 
v___x_1053_ = lean_st_ref_set(v_a_1031_, v___x_1052_);
v___x_1054_ = lean_st_ref_get(v_a_1032_);
lean_dec(v___x_1054_);
v___x_1055_ = lean_st_ref_get(v_a_1031_);
v_debug_1056_ = lean_ctor_get_uint8(v___x_1055_, sizeof(void*)*10);
lean_dec(v___x_1055_);
v___x_1057_ = l_Lean_Meta_Sym_liftLooseBVarsS_x27(v_e_1028_, v_s_1029_, v_d_1030_, v_debug_1056_, v_share_1036_);
v_fst_1058_ = lean_ctor_get(v___x_1057_, 0);
lean_inc(v_fst_1058_);
v_snd_1059_ = lean_ctor_get(v___x_1057_, 1);
lean_inc(v_snd_1059_);
lean_dec_ref(v___x_1057_);
v___x_1060_ = lean_st_ref_get(v_a_1032_);
lean_dec(v___x_1060_);
v___x_1061_ = lean_st_ref_take(v_a_1031_);
v_maxFVar_1062_ = lean_ctor_get(v___x_1061_, 1);
v_proofInstInfo_1063_ = lean_ctor_get(v___x_1061_, 2);
v_inferType_1064_ = lean_ctor_get(v___x_1061_, 3);
v_getLevel_1065_ = lean_ctor_get(v___x_1061_, 4);
v_congrInfo_1066_ = lean_ctor_get(v___x_1061_, 5);
v_defEqI_1067_ = lean_ctor_get(v___x_1061_, 6);
v_extensions_1068_ = lean_ctor_get(v___x_1061_, 7);
v_issues_1069_ = lean_ctor_get(v___x_1061_, 8);
v_canon_1070_ = lean_ctor_get(v___x_1061_, 9);
v_debug_1071_ = lean_ctor_get_uint8(v___x_1061_, sizeof(void*)*10);
v_isSharedCheck_1080_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1080_ == 0)
{
lean_object* v_unused_1081_; 
v_unused_1081_ = lean_ctor_get(v___x_1061_, 0);
lean_dec(v_unused_1081_);
v___x_1073_ = v___x_1061_;
v_isShared_1074_ = v_isSharedCheck_1080_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_canon_1070_);
lean_inc(v_issues_1069_);
lean_inc(v_extensions_1068_);
lean_inc(v_defEqI_1067_);
lean_inc(v_congrInfo_1066_);
lean_inc(v_getLevel_1065_);
lean_inc(v_inferType_1064_);
lean_inc(v_proofInstInfo_1063_);
lean_inc(v_maxFVar_1062_);
lean_dec(v___x_1061_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1080_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1076_; 
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 0, v_snd_1059_);
v___x_1076_ = v___x_1073_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_snd_1059_);
lean_ctor_set(v_reuseFailAlloc_1079_, 1, v_maxFVar_1062_);
lean_ctor_set(v_reuseFailAlloc_1079_, 2, v_proofInstInfo_1063_);
lean_ctor_set(v_reuseFailAlloc_1079_, 3, v_inferType_1064_);
lean_ctor_set(v_reuseFailAlloc_1079_, 4, v_getLevel_1065_);
lean_ctor_set(v_reuseFailAlloc_1079_, 5, v_congrInfo_1066_);
lean_ctor_set(v_reuseFailAlloc_1079_, 6, v_defEqI_1067_);
lean_ctor_set(v_reuseFailAlloc_1079_, 7, v_extensions_1068_);
lean_ctor_set(v_reuseFailAlloc_1079_, 8, v_issues_1069_);
lean_ctor_set(v_reuseFailAlloc_1079_, 9, v_canon_1070_);
lean_ctor_set_uint8(v_reuseFailAlloc_1079_, sizeof(void*)*10, v_debug_1071_);
v___x_1076_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1077_ = lean_st_ref_set(v_a_1031_, v___x_1076_);
v___x_1078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1078_, 0, v_fst_1058_);
return v___x_1078_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLooseBVarsS___redArg___boxed(lean_object* v_e_1084_, lean_object* v_s_1085_, lean_object* v_d_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_Lean_Meta_Sym_liftLooseBVarsS___redArg(v_e_1084_, v_s_1085_, v_d_1086_, v_a_1087_, v_a_1088_);
lean_dec(v_a_1088_);
lean_dec(v_a_1087_);
lean_dec(v_d_1086_);
lean_dec(v_s_1085_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLooseBVarsS(lean_object* v_e_1091_, lean_object* v_s_1092_, lean_object* v_d_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_){
_start:
{
lean_object* v___x_1101_; 
v___x_1101_ = l_Lean_Meta_Sym_liftLooseBVarsS___redArg(v_e_1091_, v_s_1092_, v_d_1093_, v_a_1095_, v_a_1099_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLooseBVarsS___boxed(lean_object* v_e_1102_, lean_object* v_s_1103_, lean_object* v_d_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l_Lean_Meta_Sym_liftLooseBVarsS(v_e_1102_, v_s_1103_, v_d_1104_, v_a_1105_, v_a_1106_, v_a_1107_, v_a_1108_, v_a_1109_, v_a_1110_);
lean_dec(v_a_1110_);
lean_dec_ref(v_a_1109_);
lean_dec(v_a_1108_);
lean_dec_ref(v_a_1107_);
lean_dec(v_a_1106_);
lean_dec_ref(v_a_1105_);
lean_dec(v_d_1104_);
lean_dec(v_s_1103_);
return v_res_1112_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_ReplaceS(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_LooseBVarsS(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_ReplaceS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_LooseBVarsS(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_ReplaceS(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_LooseBVarsS(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_ReplaceS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_LooseBVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_LooseBVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_LooseBVarsS(builtin);
}
#ifdef __cplusplus
}
#endif
