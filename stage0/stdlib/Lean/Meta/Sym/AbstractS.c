// Lean compiler output
// Module: Lean.Meta.Sym.AbstractS
// Imports: public import Lean.Meta.Sym.SymM import Lean.Meta.Sym.ReplaceS import Init.Omega
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
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedLocalDecl_default;
extern lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM;
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_hashPtrExpr_unsafe__1___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_Sym_Internal_Builder_share1___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsRange_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsRange_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsRange_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsRange_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_abstractFVarsRange_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_abstractFVarsRange_spec__0___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_abstractFVarsRange_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_abstractFVarsRange_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_abstractFVarsRange_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_abstractFVarsRange_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_abstractFVarsRange_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_abstractFVarsRange_spec__2(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_abstractFVarsRange_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_abstractFVarsRange_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__0;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__1;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__2;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__3;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__4;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__5;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__6;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__7(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__8(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__11(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_abstractFVarsRange___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_abstractFVarsRange___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_abstractFVarsRange___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_abstractFVarsRange___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_abstractFVarsRange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_abstractFVarsRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_abstractFVars___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_abstractFVars___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_abstractFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_abstractFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkLambdaFVarsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkLambdaFVarsS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_mkForallFVarsS_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_mkForallFVarsS_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkForallFVarsS_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkForallFVarsS_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkForallFVarsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkForallFVarsS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkForallFVarsS_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkForallFVarsS_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Init.Data.Option.BasicAux", 25, 25);
return v___x_1_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Option.get!", 11, 11);
return v___x_2_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("value is none", 13, 13);
return v___x_3_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_4_ = lean_obj_once(&l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__2, &l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__2_once, _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__2);
v___x_5_ = lean_unsigned_to_nat(14u);
v___x_6_ = lean_unsigned_to_nat(22u);
v___x_7_ = lean_obj_once(&l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__1, &l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__1_once, _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__1);
v___x_8_ = lean_obj_once(&l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__0, &l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__0_once, _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__0);
v___x_9_ = l_mkPanicMessageWithDecl(v___x_8_, v___x_7_, v___x_6_, v___x_5_, v___x_4_);
return v___x_9_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__4(void){
_start:
{
lean_object* v___f_10_; 
v___f_10_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1___boxed), 2, 0);
return v___f_10_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__5(void){
_start:
{
lean_object* v___f_11_; 
v___f_11_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_hashPtrExpr_unsafe__1___boxed), 1, 0);
return v___f_11_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0(lean_object* v_toDeBruijn_x3f_12_, lean_object* v___x_13_, lean_object* v_maxFVar_14_, lean_object* v_minIndex_15_, lean_object* v_lctx_16_, lean_object* v___x_17_, lean_object* v_e_18_, lean_object* v_offset_19_, uint8_t v___y_20_, lean_object* v___y_21_){
_start:
{
lean_object* v___y_23_; lean_object* v___y_31_; 
switch(lean_obj_tag(v_e_18_))
{
case 1:
{
lean_object* v_fvarId_36_; lean_object* v___x_37_; 
lean_dec_ref(v_lctx_16_);
v_fvarId_36_ = lean_ctor_get(v_e_18_, 0);
lean_inc(v_fvarId_36_);
v___x_37_ = lean_apply_1(v_toDeBruijn_x3f_12_, v_fvarId_36_);
if (lean_obj_tag(v___x_37_) == 1)
{
lean_object* v_val_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_58_; 
lean_dec_ref(v_e_18_);
v_val_38_ = lean_ctor_get(v___x_37_, 0);
v_isSharedCheck_58_ = !lean_is_exclusive(v___x_37_);
if (v_isSharedCheck_58_ == 0)
{
v___x_40_ = v___x_37_;
v_isShared_41_ = v_isSharedCheck_58_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_val_38_);
lean_dec(v___x_37_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_58_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_42_; lean_object* v___x_2873__overap_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v_fst_46_; lean_object* v_snd_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_57_; 
v___x_42_ = lean_nat_add(v_offset_19_, v_val_38_);
lean_dec(v_val_38_);
v___x_2873__overap_43_ = l_Lean_Meta_Sym_Internal_mkBVarS___redArg(v___x_13_, v___x_42_);
v___x_44_ = lean_box(v___y_20_);
v___x_45_ = lean_apply_2(v___x_2873__overap_43_, v___x_44_, v___y_21_);
v_fst_46_ = lean_ctor_get(v___x_45_, 0);
v_snd_47_ = lean_ctor_get(v___x_45_, 1);
v_isSharedCheck_57_ = !lean_is_exclusive(v___x_45_);
if (v_isSharedCheck_57_ == 0)
{
v___x_49_ = v___x_45_;
v_isShared_50_ = v_isSharedCheck_57_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_snd_47_);
lean_inc(v_fst_46_);
lean_dec(v___x_45_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_57_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_52_; 
if (v_isShared_41_ == 0)
{
lean_ctor_set(v___x_40_, 0, v_fst_46_);
v___x_52_ = v___x_40_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v_fst_46_);
v___x_52_ = v_reuseFailAlloc_56_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
lean_object* v___x_54_; 
if (v_isShared_50_ == 0)
{
lean_ctor_set(v___x_49_, 0, v___x_52_);
v___x_54_ = v___x_49_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v___x_52_);
lean_ctor_set(v_reuseFailAlloc_55_, 1, v_snd_47_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
}
}
}
else
{
lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec(v___x_37_);
lean_dec_ref(v___x_13_);
v___x_59_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_59_, 0, v_e_18_);
v___x_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
lean_ctor_set(v___x_60_, 1, v___y_21_);
return v___x_60_;
}
}
case 9:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
lean_dec_ref(v_lctx_16_);
lean_dec_ref(v___x_13_);
lean_dec_ref(v_toDeBruijn_x3f_12_);
v___x_61_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_61_, 0, v_e_18_);
v___x_62_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___y_21_);
return v___x_62_;
}
case 2:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
lean_dec_ref(v_lctx_16_);
lean_dec_ref(v___x_13_);
lean_dec_ref(v_toDeBruijn_x3f_12_);
v___x_63_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_63_, 0, v_e_18_);
v___x_64_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
lean_ctor_set(v___x_64_, 1, v___y_21_);
return v___x_64_;
}
case 0:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
lean_dec_ref(v_lctx_16_);
lean_dec_ref(v___x_13_);
lean_dec_ref(v_toDeBruijn_x3f_12_);
v___x_65_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_65_, 0, v_e_18_);
v___x_66_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set(v___x_66_, 1, v___y_21_);
return v___x_66_;
}
case 4:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
lean_dec_ref(v_lctx_16_);
lean_dec_ref(v___x_13_);
lean_dec_ref(v_toDeBruijn_x3f_12_);
v___x_67_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_67_, 0, v_e_18_);
v___x_68_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
lean_ctor_set(v___x_68_, 1, v___y_21_);
return v___x_68_;
}
case 3:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
lean_dec_ref(v_lctx_16_);
lean_dec_ref(v___x_13_);
lean_dec_ref(v_toDeBruijn_x3f_12_);
v___x_69_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_69_, 0, v_e_18_);
v___x_70_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v___y_21_);
return v___x_70_;
}
default: 
{
uint8_t v___x_71_; 
lean_dec_ref(v___x_13_);
lean_dec_ref(v_toDeBruijn_x3f_12_);
v___x_71_ = l_Lean_Expr_hasFVar(v_e_18_);
if (v___x_71_ == 0)
{
lean_object* v___x_72_; lean_object* v___x_73_; 
lean_dec_ref(v_lctx_16_);
v___x_72_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_72_, 0, v_e_18_);
v___x_73_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___y_21_);
return v___x_73_;
}
else
{
lean_object* v___f_74_; lean_object* v___f_75_; lean_object* v___x_76_; 
v___f_74_ = lean_obj_once(&l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__4, &l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__4_once, _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__4);
v___f_75_ = lean_obj_once(&l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__5, &l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__5_once, _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__5);
lean_inc_ref(v_e_18_);
v___x_76_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___f_74_, v___f_75_, v_maxFVar_14_, v_e_18_);
if (lean_obj_tag(v___x_76_) == 1)
{
lean_object* v_val_77_; 
v_val_77_ = lean_ctor_get(v___x_76_, 0);
lean_inc(v_val_77_);
lean_dec_ref(v___x_76_);
if (lean_obj_tag(v_val_77_) == 0)
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_78_ = lean_box(0);
v___x_79_ = lean_obj_once(&l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3, &l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3_once, _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3);
v___x_80_ = l_panic___redArg(v___x_78_, v___x_79_);
v___y_31_ = v___x_80_;
goto v___jp_30_;
}
else
{
lean_object* v_val_81_; 
v_val_81_ = lean_ctor_get(v_val_77_, 0);
lean_inc(v_val_81_);
lean_dec_ref(v_val_77_);
v___y_31_ = v_val_81_;
goto v___jp_30_;
}
}
else
{
lean_object* v___x_82_; lean_object* v___x_83_; 
lean_dec(v___x_76_);
lean_dec_ref(v_e_18_);
lean_dec_ref(v_lctx_16_);
v___x_82_ = lean_box(0);
v___x_83_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
lean_ctor_set(v___x_83_, 1, v___y_21_);
return v___x_83_;
}
}
}
}
v___jp_22_:
{
lean_object* v_maxIndex_24_; uint8_t v___x_25_; 
v_maxIndex_24_ = l_Lean_LocalDecl_index(v___y_23_);
lean_dec_ref(v___y_23_);
v___x_25_ = lean_nat_dec_lt(v_maxIndex_24_, v_minIndex_15_);
lean_dec(v_maxIndex_24_);
if (v___x_25_ == 0)
{
lean_object* v___x_26_; lean_object* v___x_27_; 
lean_dec_ref(v_e_18_);
v___x_26_ = lean_box(0);
v___x_27_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
lean_ctor_set(v___x_27_, 1, v___y_21_);
return v___x_27_;
}
else
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_28_, 0, v_e_18_);
v___x_29_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
lean_ctor_set(v___x_29_, 1, v___y_21_);
return v___x_29_;
}
}
v___jp_30_:
{
lean_object* v___x_32_; 
v___x_32_ = lean_local_ctx_find(v_lctx_16_, v___y_31_);
if (lean_obj_tag(v___x_32_) == 0)
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = lean_obj_once(&l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3, &l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3_once, _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3);
v___x_34_ = l_panic___redArg(v___x_17_, v___x_33_);
v___y_23_ = v___x_34_;
goto v___jp_22_;
}
else
{
lean_object* v_val_35_; 
v_val_35_ = lean_ctor_get(v___x_32_, 0);
lean_inc(v_val_35_);
lean_dec_ref(v___x_32_);
v___y_23_ = v_val_35_;
goto v___jp_22_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___boxed(lean_object* v_toDeBruijn_x3f_84_, lean_object* v___x_85_, lean_object* v_maxFVar_86_, lean_object* v_minIndex_87_, lean_object* v_lctx_88_, lean_object* v___x_89_, lean_object* v_e_90_, lean_object* v_offset_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
uint8_t v___y_2965__boxed_94_; lean_object* v_res_95_; 
v___y_2965__boxed_94_ = lean_unbox(v___y_92_);
v_res_95_ = l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0(v_toDeBruijn_x3f_84_, v___x_85_, v_maxFVar_86_, v_minIndex_87_, v_lctx_88_, v___x_89_, v_e_90_, v_offset_91_, v___y_2965__boxed_94_, v___y_93_);
lean_dec(v_offset_91_);
lean_dec_ref(v___x_89_);
lean_dec(v_minIndex_87_);
lean_dec_ref(v_maxFVar_86_);
return v_res_95_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___closed__0(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = lean_box(0);
v___x_97_ = lean_unsigned_to_nat(16u);
v___x_98_ = lean_mk_array(v___x_97_, v___x_96_);
return v___x_98_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___closed__1(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = lean_obj_once(&l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___closed__0, &l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___closed__0_once, _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___closed__0);
v___x_100_ = lean_unsigned_to_nat(0u);
v___x_101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set(v___x_101_, 1, v___x_99_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore(lean_object* v_e_102_, lean_object* v_lctx_103_, lean_object* v_maxFVar_104_, lean_object* v_minFVarId_105_, lean_object* v_toDeBruijn_x3f_106_, uint8_t v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___y_112_; lean_object* v___x_196_; 
v___x_109_ = l_Lean_instInhabitedLocalDecl_default;
v___x_110_ = l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM;
lean_inc_ref(v_lctx_103_);
v___x_196_ = lean_local_ctx_find(v_lctx_103_, v_minFVarId_105_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = lean_obj_once(&l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3, &l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3_once, _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3);
v___x_198_ = l_panic___redArg(v___x_109_, v___x_197_);
v___y_112_ = v___x_198_;
goto v___jp_111_;
}
else
{
lean_object* v_val_199_; 
v_val_199_ = lean_ctor_get(v___x_196_, 0);
lean_inc(v_val_199_);
lean_dec_ref(v___x_196_);
v___y_112_ = v_val_199_;
goto v___jp_111_;
}
v___jp_111_:
{
lean_object* v_minIndex_113_; lean_object* v___f_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v_fst_117_; 
v_minIndex_113_ = l_Lean_LocalDecl_index(v___y_112_);
lean_dec_ref(v___y_112_);
lean_inc_ref(v_lctx_103_);
lean_inc(v_minIndex_113_);
lean_inc_ref(v_maxFVar_104_);
lean_inc_ref(v_toDeBruijn_x3f_106_);
v___f_114_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___boxed), 10, 6);
lean_closure_set(v___f_114_, 0, v_toDeBruijn_x3f_106_);
lean_closure_set(v___f_114_, 1, v___x_110_);
lean_closure_set(v___f_114_, 2, v_maxFVar_104_);
lean_closure_set(v___f_114_, 3, v_minIndex_113_);
lean_closure_set(v___f_114_, 4, v_lctx_103_);
lean_closure_set(v___f_114_, 5, v___x_109_);
v___x_115_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_e_102_);
v___x_116_ = l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0(v_toDeBruijn_x3f_106_, v___x_110_, v_maxFVar_104_, v_minIndex_113_, v_lctx_103_, v___x_109_, v_e_102_, v___x_115_, v_a_107_, v_a_108_);
lean_dec(v_minIndex_113_);
lean_dec_ref(v_maxFVar_104_);
v_fst_117_ = lean_ctor_get(v___x_116_, 0);
lean_inc(v_fst_117_);
if (lean_obj_tag(v_fst_117_) == 1)
{
lean_object* v_snd_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_126_; 
lean_dec_ref(v___f_114_);
lean_dec_ref(v_e_102_);
v_snd_118_ = lean_ctor_get(v___x_116_, 1);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_126_ == 0)
{
lean_object* v_unused_127_; 
v_unused_127_ = lean_ctor_get(v___x_116_, 0);
lean_dec(v_unused_127_);
v___x_120_ = v___x_116_;
v_isShared_121_ = v_isSharedCheck_126_;
goto v_resetjp_119_;
}
else
{
lean_inc(v_snd_118_);
lean_dec(v___x_116_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_126_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v_val_122_; lean_object* v___x_124_; 
v_val_122_ = lean_ctor_get(v_fst_117_, 0);
lean_inc(v_val_122_);
lean_dec_ref(v_fst_117_);
if (v_isShared_121_ == 0)
{
lean_ctor_set(v___x_120_, 0, v_val_122_);
v___x_124_ = v___x_120_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_val_122_);
lean_ctor_set(v_reuseFailAlloc_125_, 1, v_snd_118_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
else
{
lean_dec(v_fst_117_);
switch(lean_obj_tag(v_e_102_))
{
case 9:
{
lean_object* v_snd_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_135_; 
lean_dec_ref(v___f_114_);
v_snd_128_ = lean_ctor_get(v___x_116_, 1);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_135_ == 0)
{
lean_object* v_unused_136_; 
v_unused_136_ = lean_ctor_get(v___x_116_, 0);
lean_dec(v_unused_136_);
v___x_130_ = v___x_116_;
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_snd_128_);
lean_dec(v___x_116_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_133_; 
if (v_isShared_131_ == 0)
{
lean_ctor_set(v___x_130_, 0, v_e_102_);
v___x_133_ = v___x_130_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_e_102_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v_snd_128_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
case 2:
{
lean_object* v_snd_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_144_; 
lean_dec_ref(v___f_114_);
v_snd_137_ = lean_ctor_get(v___x_116_, 1);
v_isSharedCheck_144_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_144_ == 0)
{
lean_object* v_unused_145_; 
v_unused_145_ = lean_ctor_get(v___x_116_, 0);
lean_dec(v_unused_145_);
v___x_139_ = v___x_116_;
v_isShared_140_ = v_isSharedCheck_144_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_snd_137_);
lean_dec(v___x_116_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_144_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_142_; 
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 0, v_e_102_);
v___x_142_ = v___x_139_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v_e_102_);
lean_ctor_set(v_reuseFailAlloc_143_, 1, v_snd_137_);
v___x_142_ = v_reuseFailAlloc_143_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
return v___x_142_;
}
}
}
case 0:
{
lean_object* v_snd_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_153_; 
lean_dec_ref(v___f_114_);
v_snd_146_ = lean_ctor_get(v___x_116_, 1);
v_isSharedCheck_153_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_153_ == 0)
{
lean_object* v_unused_154_; 
v_unused_154_ = lean_ctor_get(v___x_116_, 0);
lean_dec(v_unused_154_);
v___x_148_ = v___x_116_;
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_snd_146_);
lean_dec(v___x_116_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___x_151_; 
if (v_isShared_149_ == 0)
{
lean_ctor_set(v___x_148_, 0, v_e_102_);
v___x_151_ = v___x_148_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_e_102_);
lean_ctor_set(v_reuseFailAlloc_152_, 1, v_snd_146_);
v___x_151_ = v_reuseFailAlloc_152_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
return v___x_151_;
}
}
}
case 1:
{
lean_object* v_snd_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_162_; 
lean_dec_ref(v___f_114_);
v_snd_155_ = lean_ctor_get(v___x_116_, 1);
v_isSharedCheck_162_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_162_ == 0)
{
lean_object* v_unused_163_; 
v_unused_163_ = lean_ctor_get(v___x_116_, 0);
lean_dec(v_unused_163_);
v___x_157_ = v___x_116_;
v_isShared_158_ = v_isSharedCheck_162_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_snd_155_);
lean_dec(v___x_116_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_162_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_160_; 
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 0, v_e_102_);
v___x_160_ = v___x_157_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v_e_102_);
lean_ctor_set(v_reuseFailAlloc_161_, 1, v_snd_155_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
}
case 4:
{
lean_object* v_snd_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
lean_dec_ref(v___f_114_);
v_snd_164_ = lean_ctor_get(v___x_116_, 1);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_171_ == 0)
{
lean_object* v_unused_172_; 
v_unused_172_ = lean_ctor_get(v___x_116_, 0);
lean_dec(v_unused_172_);
v___x_166_ = v___x_116_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_snd_164_);
lean_dec(v___x_116_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 0, v_e_102_);
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_e_102_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v_snd_164_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
case 3:
{
lean_object* v_snd_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_180_; 
lean_dec_ref(v___f_114_);
v_snd_173_ = lean_ctor_get(v___x_116_, 1);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_180_ == 0)
{
lean_object* v_unused_181_; 
v_unused_181_ = lean_ctor_get(v___x_116_, 0);
lean_dec(v_unused_181_);
v___x_175_ = v___x_116_;
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_snd_173_);
lean_dec(v___x_116_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_178_; 
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 0, v_e_102_);
v___x_178_ = v___x_175_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_e_102_);
lean_ctor_set(v_reuseFailAlloc_179_, 1, v_snd_173_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
default: 
{
lean_object* v_snd_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v_fst_185_; lean_object* v_snd_186_; lean_object* v_fst_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_194_; 
v_snd_182_ = lean_ctor_get(v___x_116_, 1);
lean_inc(v_snd_182_);
lean_dec_ref(v___x_116_);
v___x_183_ = lean_obj_once(&l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___closed__1, &l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___closed__1_once, _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___closed__1);
v___x_184_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit(v_e_102_, v___x_115_, v___f_114_, v___x_183_, v_a_107_, v_snd_182_);
v_fst_185_ = lean_ctor_get(v___x_184_, 0);
lean_inc(v_fst_185_);
v_snd_186_ = lean_ctor_get(v___x_184_, 1);
lean_inc(v_snd_186_);
lean_dec_ref(v___x_184_);
v_fst_187_ = lean_ctor_get(v_fst_185_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v_fst_185_);
if (v_isSharedCheck_194_ == 0)
{
lean_object* v_unused_195_; 
v_unused_195_ = lean_ctor_get(v_fst_185_, 1);
lean_dec(v_unused_195_);
v___x_189_ = v_fst_185_;
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_fst_187_);
lean_dec(v_fst_185_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_192_; 
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 1, v_snd_186_);
v___x_192_ = v___x_189_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v_fst_187_);
lean_ctor_set(v_reuseFailAlloc_193_, 1, v_snd_186_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___boxed(lean_object* v_e_200_, lean_object* v_lctx_201_, lean_object* v_maxFVar_202_, lean_object* v_minFVarId_203_, lean_object* v_toDeBruijn_x3f_204_, lean_object* v_a_205_, lean_object* v_a_206_){
_start:
{
uint8_t v_a_boxed_207_; lean_object* v_res_208_; 
v_a_boxed_207_ = lean_unbox(v_a_205_);
v_res_208_ = l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore(v_e_200_, v_lctx_201_, v_maxFVar_202_, v_minFVarId_203_, v_toDeBruijn_x3f_204_, v_a_boxed_207_, v_a_206_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsRange_go___redArg(lean_object* v_start_209_, lean_object* v_xs_210_, lean_object* v_fvarId_211_, lean_object* v_bidx_212_, lean_object* v_i_213_){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_214_ = lean_array_fget_borrowed(v_xs_210_, v_i_213_);
v___x_215_ = l_Lean_Expr_fvarId_x21(v___x_214_);
v___x_216_ = l_Lean_instBEqFVarId_beq(v___x_215_, v_fvarId_211_);
lean_dec(v___x_215_);
if (v___x_216_ == 0)
{
uint8_t v___x_217_; 
v___x_217_ = lean_nat_dec_lt(v_start_209_, v_i_213_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; 
lean_dec(v_i_213_);
lean_dec(v_bidx_212_);
v___x_218_ = lean_box(0);
return v___x_218_;
}
else
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_219_ = lean_unsigned_to_nat(1u);
v___x_220_ = lean_nat_add(v_bidx_212_, v___x_219_);
lean_dec(v_bidx_212_);
v___x_221_ = lean_nat_sub(v_i_213_, v___x_219_);
lean_dec(v_i_213_);
v_bidx_212_ = v___x_220_;
v_i_213_ = v___x_221_;
goto _start;
}
}
else
{
lean_object* v___x_223_; 
lean_dec(v_i_213_);
v___x_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_223_, 0, v_bidx_212_);
return v___x_223_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsRange_go___redArg___boxed(lean_object* v_start_224_, lean_object* v_xs_225_, lean_object* v_fvarId_226_, lean_object* v_bidx_227_, lean_object* v_i_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsRange_go___redArg(v_start_224_, v_xs_225_, v_fvarId_226_, v_bidx_227_, v_i_228_);
lean_dec(v_fvarId_226_);
lean_dec_ref(v_xs_225_);
lean_dec(v_start_224_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsRange_go(lean_object* v_start_230_, lean_object* v_xs_231_, lean_object* v_h_232_, lean_object* v_fvarId_233_, lean_object* v_bidx_234_, lean_object* v_i_235_, lean_object* v_h_236_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsRange_go___redArg(v_start_230_, v_xs_231_, v_fvarId_233_, v_bidx_234_, v_i_235_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsRange_go___boxed(lean_object* v_start_238_, lean_object* v_xs_239_, lean_object* v_h_240_, lean_object* v_fvarId_241_, lean_object* v_bidx_242_, lean_object* v_i_243_, lean_object* v_h_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsRange_go(v_start_238_, v_xs_239_, v_h_240_, v_fvarId_241_, v_bidx_242_, v_i_243_, v_h_244_);
lean_dec(v_fvarId_241_);
lean_dec_ref(v_xs_239_);
lean_dec(v_start_238_);
return v_res_245_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_abstractFVarsRange_spec__0___closed__0(void){
_start:
{
lean_object* v___x_246_; 
v___x_246_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_246_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_abstractFVarsRange_spec__0___closed__1(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_abstractFVarsRange_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_abstractFVarsRange_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_abstractFVarsRange_spec__0___closed__0);
v___x_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_abstractFVarsRange_spec__0(lean_object* v_00_u03b2_249_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_abstractFVarsRange_spec__0___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_abstractFVarsRange_spec__0___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_abstractFVarsRange_spec__0___closed__1);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_abstractFVarsRange_spec__1(lean_object* v_msg_251_){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = l_Lean_instInhabitedLocalDecl_default;
v___x_253_ = lean_panic_fn_borrowed(v___x_252_, v_msg_251_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_abstractFVarsRange_spec__2___redArg(lean_object* v_idx_254_, lean_object* v___y_255_){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_256_ = l_Lean_Expr_bvar___override(v_idx_254_);
v___x_257_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_256_, v___y_255_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_abstractFVarsRange_spec__2(lean_object* v_idx_258_, uint8_t v___y_259_, lean_object* v___y_260_){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_abstractFVarsRange_spec__2___redArg(v_idx_258_, v___y_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_abstractFVarsRange_spec__2___boxed(lean_object* v_idx_262_, lean_object* v___y_263_, lean_object* v___y_264_){
_start:
{
uint8_t v___y_25656__boxed_265_; lean_object* v_res_266_; 
v___y_25656__boxed_265_ = lean_unbox(v___y_263_);
v_res_266_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_abstractFVarsRange_spec__2(v_idx_262_, v___y_25656__boxed_265_, v___y_264_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_abstractFVarsRange_spec__4(lean_object* v_msg_267_){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_268_ = lean_box(0);
v___x_269_ = lean_panic_fn_borrowed(v___x_268_, v_msg_267_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3_spec__5___redArg(lean_object* v_keys_270_, lean_object* v_vals_271_, lean_object* v_i_272_, lean_object* v_k_273_){
_start:
{
lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_274_ = lean_array_get_size(v_keys_270_);
v___x_275_ = lean_nat_dec_lt(v_i_272_, v___x_274_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; 
lean_dec(v_i_272_);
v___x_276_ = lean_box(0);
return v___x_276_;
}
else
{
lean_object* v_k_x27_277_; uint8_t v___x_278_; 
v_k_x27_277_ = lean_array_fget_borrowed(v_keys_270_, v_i_272_);
v___x_278_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_k_273_, v_k_x27_277_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_279_ = lean_unsigned_to_nat(1u);
v___x_280_ = lean_nat_add(v_i_272_, v___x_279_);
lean_dec(v_i_272_);
v_i_272_ = v___x_280_;
goto _start;
}
else
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = lean_array_fget_borrowed(v_vals_271_, v_i_272_);
lean_dec(v_i_272_);
lean_inc(v___x_282_);
v___x_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
return v___x_283_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3_spec__5___redArg___boxed(lean_object* v_keys_284_, lean_object* v_vals_285_, lean_object* v_i_286_, lean_object* v_k_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3_spec__5___redArg(v_keys_284_, v_vals_285_, v_i_286_, v_k_287_);
lean_dec_ref(v_k_287_);
lean_dec_ref(v_vals_285_);
lean_dec_ref(v_keys_284_);
return v_res_288_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg___closed__0(void){
_start:
{
size_t v___x_289_; size_t v___x_290_; size_t v___x_291_; 
v___x_289_ = ((size_t)5ULL);
v___x_290_ = ((size_t)1ULL);
v___x_291_ = lean_usize_shift_left(v___x_290_, v___x_289_);
return v___x_291_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg___closed__1(void){
_start:
{
size_t v___x_292_; size_t v___x_293_; size_t v___x_294_; 
v___x_292_ = ((size_t)1ULL);
v___x_293_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg___closed__0);
v___x_294_ = lean_usize_sub(v___x_293_, v___x_292_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg(lean_object* v_x_295_, size_t v_x_296_, lean_object* v_x_297_){
_start:
{
if (lean_obj_tag(v_x_295_) == 0)
{
lean_object* v_es_298_; lean_object* v___x_299_; size_t v___x_300_; size_t v___x_301_; size_t v___x_302_; lean_object* v_j_303_; lean_object* v___x_304_; 
v_es_298_ = lean_ctor_get(v_x_295_, 0);
v___x_299_ = lean_box(2);
v___x_300_ = ((size_t)5ULL);
v___x_301_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg___closed__1);
v___x_302_ = lean_usize_land(v_x_296_, v___x_301_);
v_j_303_ = lean_usize_to_nat(v___x_302_);
v___x_304_ = lean_array_get_borrowed(v___x_299_, v_es_298_, v_j_303_);
lean_dec(v_j_303_);
switch(lean_obj_tag(v___x_304_))
{
case 0:
{
lean_object* v_key_305_; lean_object* v_val_306_; uint8_t v___x_307_; 
v_key_305_ = lean_ctor_get(v___x_304_, 0);
v_val_306_ = lean_ctor_get(v___x_304_, 1);
v___x_307_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_297_, v_key_305_);
if (v___x_307_ == 0)
{
lean_object* v___x_308_; 
v___x_308_ = lean_box(0);
return v___x_308_;
}
else
{
lean_object* v___x_309_; 
lean_inc(v_val_306_);
v___x_309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_309_, 0, v_val_306_);
return v___x_309_;
}
}
case 1:
{
lean_object* v_node_310_; size_t v___x_311_; 
v_node_310_ = lean_ctor_get(v___x_304_, 0);
v___x_311_ = lean_usize_shift_right(v_x_296_, v___x_300_);
v_x_295_ = v_node_310_;
v_x_296_ = v___x_311_;
goto _start;
}
default: 
{
lean_object* v___x_313_; 
v___x_313_ = lean_box(0);
return v___x_313_;
}
}
}
else
{
lean_object* v_ks_314_; lean_object* v_vs_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v_ks_314_ = lean_ctor_get(v_x_295_, 0);
v_vs_315_ = lean_ctor_get(v_x_295_, 1);
v___x_316_ = lean_unsigned_to_nat(0u);
v___x_317_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3_spec__5___redArg(v_ks_314_, v_vs_315_, v___x_316_, v_x_297_);
return v___x_317_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg___boxed(lean_object* v_x_318_, lean_object* v_x_319_, lean_object* v_x_320_){
_start:
{
size_t v_x_25699__boxed_321_; lean_object* v_res_322_; 
v_x_25699__boxed_321_ = lean_unbox_usize(v_x_319_);
lean_dec(v_x_319_);
v_res_322_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg(v_x_318_, v_x_25699__boxed_321_, v_x_320_);
lean_dec_ref(v_x_320_);
lean_dec_ref(v_x_318_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3___redArg(lean_object* v_x_323_, lean_object* v_x_324_){
_start:
{
uint64_t v___x_325_; size_t v___x_326_; lean_object* v___x_327_; 
v___x_325_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_324_);
v___x_326_ = lean_uint64_to_usize(v___x_325_);
v___x_327_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg(v_x_323_, v___x_326_, v_x_324_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3___redArg___boxed(lean_object* v_x_328_, lean_object* v_x_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3___redArg(v_x_328_, v_x_329_);
lean_dec_ref(v_x_329_);
lean_dec_ref(v_x_328_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__10(lean_object* v_x_331_, lean_object* v_t_332_, lean_object* v_v_333_, lean_object* v_b_334_, uint8_t v_nondep_335_, lean_object* v___y_336_, uint8_t v___y_337_, lean_object* v___y_338_){
_start:
{
lean_object* v___y_340_; lean_object* v___y_341_; 
if (v___y_337_ == 0)
{
v___y_340_ = v___y_336_;
v___y_341_ = v___y_338_;
goto v___jp_339_;
}
else
{
lean_object* v___x_354_; lean_object* v_snd_355_; lean_object* v___x_356_; lean_object* v_snd_357_; lean_object* v___x_358_; lean_object* v_snd_359_; 
lean_inc_ref(v_t_332_);
v___x_354_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_332_, v___y_337_, v___y_338_);
v_snd_355_ = lean_ctor_get(v___x_354_, 1);
lean_inc(v_snd_355_);
lean_dec_ref(v___x_354_);
lean_inc_ref(v_v_333_);
v___x_356_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_v_333_, v___y_337_, v_snd_355_);
v_snd_357_ = lean_ctor_get(v___x_356_, 1);
lean_inc(v_snd_357_);
lean_dec_ref(v___x_356_);
lean_inc_ref(v_b_334_);
v___x_358_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_334_, v___y_337_, v_snd_357_);
v_snd_359_ = lean_ctor_get(v___x_358_, 1);
lean_inc(v_snd_359_);
lean_dec_ref(v___x_358_);
v___y_340_ = v___y_336_;
v___y_341_ = v_snd_359_;
goto v___jp_339_;
}
v___jp_339_:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v_fst_344_; lean_object* v_snd_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_353_; 
v___x_342_ = l_Lean_Expr_letE___override(v_x_331_, v_t_332_, v_v_333_, v_b_334_, v_nondep_335_);
v___x_343_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_342_, v___y_341_);
v_fst_344_ = lean_ctor_get(v___x_343_, 0);
v_snd_345_ = lean_ctor_get(v___x_343_, 1);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_353_ == 0)
{
v___x_347_ = v___x_343_;
v_isShared_348_ = v_isSharedCheck_353_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_snd_345_);
lean_inc(v_fst_344_);
lean_dec(v___x_343_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_353_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 1, v___y_340_);
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_fst_344_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v___y_340_);
v___x_350_ = v_reuseFailAlloc_352_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
lean_object* v___x_351_; 
v___x_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
lean_ctor_set(v___x_351_, 1, v_snd_345_);
return v___x_351_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__10___boxed(lean_object* v_x_360_, lean_object* v_t_361_, lean_object* v_v_362_, lean_object* v_b_363_, lean_object* v_nondep_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_){
_start:
{
uint8_t v_nondep_boxed_368_; uint8_t v___y_25764__boxed_369_; lean_object* v_res_370_; 
v_nondep_boxed_368_ = lean_unbox(v_nondep_364_);
v___y_25764__boxed_369_ = lean_unbox(v___y_366_);
v_res_370_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__10(v_x_360_, v_t_361_, v_v_362_, v_b_363_, v_nondep_boxed_368_, v___y_365_, v___y_25764__boxed_369_, v___y_367_);
return v_res_370_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__0(void){
_start:
{
lean_object* v___f_371_; 
v___f_371_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_371_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__1(void){
_start:
{
lean_object* v___f_372_; 
v___f_372_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_372_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__2(void){
_start:
{
lean_object* v___f_373_; 
v___f_373_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_373_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__3(void){
_start:
{
lean_object* v___f_374_; 
v___f_374_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_374_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__4(void){
_start:
{
lean_object* v___f_375_; 
v___f_375_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_375_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__5(void){
_start:
{
lean_object* v___f_376_; 
v___f_376_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_376_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__6(void){
_start:
{
lean_object* v___f_377_; 
v___f_377_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_377_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13(lean_object* v_msg_378_, lean_object* v___y_379_, uint8_t v___y_380_, lean_object* v___y_381_){
_start:
{
lean_object* v___f_382_; lean_object* v___f_383_; lean_object* v___f_384_; lean_object* v___f_385_; lean_object* v___f_386_; lean_object* v___f_387_; lean_object* v___f_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___f_392_; lean_object* v___f_393_; lean_object* v___f_394_; lean_object* v___f_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___f_403_; lean_object* v___f_404_; lean_object* v___f_405_; lean_object* v___f_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_25264__overap_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___f_382_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__0);
v___f_383_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__1, &l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__1_once, _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__1);
v___f_384_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__2, &l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__2_once, _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__2);
v___f_385_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__3, &l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__3_once, _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__3);
v___f_386_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__4, &l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__4_once, _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__4);
v___f_387_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__5, &l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__5_once, _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__5);
v___f_388_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__6, &l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__6_once, _init_l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___closed__6);
v___x_389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_389_, 0, v___f_382_);
lean_ctor_set(v___x_389_, 1, v___f_383_);
v___x_390_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_390_, 0, v___x_389_);
lean_ctor_set(v___x_390_, 1, v___f_384_);
lean_ctor_set(v___x_390_, 2, v___f_385_);
lean_ctor_set(v___x_390_, 3, v___f_386_);
lean_ctor_set(v___x_390_, 4, v___f_387_);
v___x_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
lean_ctor_set(v___x_391_, 1, v___f_388_);
lean_inc_ref_n(v___x_391_, 6);
v___f_392_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_392_, 0, v___x_391_);
v___f_393_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_393_, 0, v___x_391_);
v___f_394_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_394_, 0, v___x_391_);
v___f_395_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_395_, 0, v___x_391_);
v___x_396_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_396_, 0, lean_box(0));
lean_closure_set(v___x_396_, 1, lean_box(0));
lean_closure_set(v___x_396_, 2, v___x_391_);
v___x_397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_397_, 0, v___x_396_);
lean_ctor_set(v___x_397_, 1, v___f_392_);
v___x_398_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_398_, 0, lean_box(0));
lean_closure_set(v___x_398_, 1, lean_box(0));
lean_closure_set(v___x_398_, 2, v___x_391_);
v___x_399_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_399_, 0, v___x_397_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
lean_ctor_set(v___x_399_, 2, v___f_393_);
lean_ctor_set(v___x_399_, 3, v___f_394_);
lean_ctor_set(v___x_399_, 4, v___f_395_);
v___x_400_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_400_, 0, lean_box(0));
lean_closure_set(v___x_400_, 1, lean_box(0));
lean_closure_set(v___x_400_, 2, v___x_391_);
v___x_401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_401_, 0, v___x_399_);
lean_ctor_set(v___x_401_, 1, v___x_400_);
v___x_402_ = l_ReaderT_instMonad___redArg(v___x_401_);
lean_inc_ref_n(v___x_402_, 6);
v___f_403_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_403_, 0, v___x_402_);
v___f_404_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_404_, 0, v___x_402_);
v___f_405_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_405_, 0, v___x_402_);
v___f_406_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_406_, 0, v___x_402_);
v___x_407_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_407_, 0, lean_box(0));
lean_closure_set(v___x_407_, 1, lean_box(0));
lean_closure_set(v___x_407_, 2, v___x_402_);
v___x_408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_408_, 0, v___x_407_);
lean_ctor_set(v___x_408_, 1, v___f_403_);
v___x_409_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_409_, 0, lean_box(0));
lean_closure_set(v___x_409_, 1, lean_box(0));
lean_closure_set(v___x_409_, 2, v___x_402_);
v___x_410_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_410_, 0, v___x_408_);
lean_ctor_set(v___x_410_, 1, v___x_409_);
lean_ctor_set(v___x_410_, 2, v___f_404_);
lean_ctor_set(v___x_410_, 3, v___f_405_);
lean_ctor_set(v___x_410_, 4, v___f_406_);
v___x_411_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_411_, 0, lean_box(0));
lean_closure_set(v___x_411_, 1, lean_box(0));
lean_closure_set(v___x_411_, 2, v___x_402_);
v___x_412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_410_);
lean_ctor_set(v___x_412_, 1, v___x_411_);
v___x_413_ = l_Lean_instInhabitedExpr;
v___x_414_ = l_instInhabitedOfMonad___redArg(v___x_412_, v___x_413_);
v___x_25264__overap_415_ = lean_panic_fn_borrowed(v___x_414_, v_msg_378_);
lean_dec(v___x_414_);
v___x_416_ = lean_box(v___y_380_);
v___x_417_ = lean_apply_3(v___x_25264__overap_415_, v___y_379_, v___x_416_, v___y_381_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13___boxed(lean_object* v_msg_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
uint8_t v___y_25832__boxed_422_; lean_object* v_res_423_; 
v___y_25832__boxed_422_ = lean_unbox(v___y_420_);
v_res_423_ = l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13(v_msg_418_, v___y_419_, v___y_25832__boxed_422_, v___y_421_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__7(lean_object* v_f_424_, lean_object* v_a_425_, lean_object* v___y_426_, uint8_t v___y_427_, lean_object* v___y_428_){
_start:
{
lean_object* v___y_430_; lean_object* v___y_431_; 
if (v___y_427_ == 0)
{
v___y_430_ = v___y_426_;
v___y_431_ = v___y_428_;
goto v___jp_429_;
}
else
{
lean_object* v___x_444_; lean_object* v_snd_445_; lean_object* v___x_446_; lean_object* v_snd_447_; 
lean_inc_ref(v_f_424_);
v___x_444_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_f_424_, v___y_427_, v___y_428_);
v_snd_445_ = lean_ctor_get(v___x_444_, 1);
lean_inc(v_snd_445_);
lean_dec_ref(v___x_444_);
lean_inc_ref(v_a_425_);
v___x_446_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_a_425_, v___y_427_, v_snd_445_);
v_snd_447_ = lean_ctor_get(v___x_446_, 1);
lean_inc(v_snd_447_);
lean_dec_ref(v___x_446_);
v___y_430_ = v___y_426_;
v___y_431_ = v_snd_447_;
goto v___jp_429_;
}
v___jp_429_:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v_fst_434_; lean_object* v_snd_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_443_; 
v___x_432_ = l_Lean_Expr_app___override(v_f_424_, v_a_425_);
v___x_433_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_432_, v___y_431_);
v_fst_434_ = lean_ctor_get(v___x_433_, 0);
v_snd_435_ = lean_ctor_get(v___x_433_, 1);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_443_ == 0)
{
v___x_437_ = v___x_433_;
v_isShared_438_ = v_isSharedCheck_443_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_snd_435_);
lean_inc(v_fst_434_);
lean_dec(v___x_433_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_443_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_440_; 
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 1, v___y_430_);
v___x_440_ = v___x_437_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_fst_434_);
lean_ctor_set(v_reuseFailAlloc_442_, 1, v___y_430_);
v___x_440_ = v_reuseFailAlloc_442_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
lean_object* v___x_441_; 
v___x_441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_441_, 0, v___x_440_);
lean_ctor_set(v___x_441_, 1, v_snd_435_);
return v___x_441_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__7___boxed(lean_object* v_f_448_, lean_object* v_a_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
uint8_t v___y_25918__boxed_453_; lean_object* v_res_454_; 
v___y_25918__boxed_453_ = lean_unbox(v___y_451_);
v_res_454_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__7(v_f_448_, v_a_449_, v___y_450_, v___y_25918__boxed_453_, v___y_452_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__8(lean_object* v_x_455_, uint8_t v_bi_456_, lean_object* v_t_457_, lean_object* v_b_458_, lean_object* v___y_459_, uint8_t v___y_460_, lean_object* v___y_461_){
_start:
{
lean_object* v___y_463_; lean_object* v___y_464_; 
if (v___y_460_ == 0)
{
v___y_463_ = v___y_459_;
v___y_464_ = v___y_461_;
goto v___jp_462_;
}
else
{
lean_object* v___x_477_; lean_object* v_snd_478_; lean_object* v___x_479_; lean_object* v_snd_480_; 
lean_inc_ref(v_t_457_);
v___x_477_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_457_, v___y_460_, v___y_461_);
v_snd_478_ = lean_ctor_get(v___x_477_, 1);
lean_inc(v_snd_478_);
lean_dec_ref(v___x_477_);
lean_inc_ref(v_b_458_);
v___x_479_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_458_, v___y_460_, v_snd_478_);
v_snd_480_ = lean_ctor_get(v___x_479_, 1);
lean_inc(v_snd_480_);
lean_dec_ref(v___x_479_);
v___y_463_ = v___y_459_;
v___y_464_ = v_snd_480_;
goto v___jp_462_;
}
v___jp_462_:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v_fst_467_; lean_object* v_snd_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_476_; 
v___x_465_ = l_Lean_Expr_lam___override(v_x_455_, v_t_457_, v_b_458_, v_bi_456_);
v___x_466_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_465_, v___y_464_);
v_fst_467_ = lean_ctor_get(v___x_466_, 0);
v_snd_468_ = lean_ctor_get(v___x_466_, 1);
v_isSharedCheck_476_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_476_ == 0)
{
v___x_470_ = v___x_466_;
v_isShared_471_ = v_isSharedCheck_476_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_snd_468_);
lean_inc(v_fst_467_);
lean_dec(v___x_466_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_476_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_473_; 
if (v_isShared_471_ == 0)
{
lean_ctor_set(v___x_470_, 1, v___y_463_);
v___x_473_ = v___x_470_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v_fst_467_);
lean_ctor_set(v_reuseFailAlloc_475_, 1, v___y_463_);
v___x_473_ = v_reuseFailAlloc_475_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
lean_object* v___x_474_; 
v___x_474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_474_, 0, v___x_473_);
lean_ctor_set(v___x_474_, 1, v_snd_468_);
return v___x_474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__8___boxed(lean_object* v_x_481_, lean_object* v_bi_482_, lean_object* v_t_483_, lean_object* v_b_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
uint8_t v_bi_boxed_488_; uint8_t v___y_25967__boxed_489_; lean_object* v_res_490_; 
v_bi_boxed_488_ = lean_unbox(v_bi_482_);
v___y_25967__boxed_489_ = lean_unbox(v___y_486_);
v_res_490_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__8(v_x_481_, v_bi_boxed_488_, v_t_483_, v_b_484_, v___y_485_, v___y_25967__boxed_489_, v___y_487_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8_spec__16___redArg(lean_object* v_a_491_, lean_object* v_x_492_){
_start:
{
if (lean_obj_tag(v_x_492_) == 0)
{
lean_object* v___x_493_; 
v___x_493_ = lean_box(0);
return v___x_493_;
}
else
{
lean_object* v_key_494_; lean_object* v_value_495_; lean_object* v_tail_496_; uint8_t v___y_498_; lean_object* v_fst_501_; lean_object* v_snd_502_; lean_object* v_fst_503_; lean_object* v_snd_504_; uint8_t v___x_505_; 
v_key_494_ = lean_ctor_get(v_x_492_, 0);
v_value_495_ = lean_ctor_get(v_x_492_, 1);
v_tail_496_ = lean_ctor_get(v_x_492_, 2);
v_fst_501_ = lean_ctor_get(v_key_494_, 0);
v_snd_502_ = lean_ctor_get(v_key_494_, 1);
v_fst_503_ = lean_ctor_get(v_a_491_, 0);
v_snd_504_ = lean_ctor_get(v_a_491_, 1);
v___x_505_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_fst_501_, v_fst_503_);
if (v___x_505_ == 0)
{
v___y_498_ = v___x_505_;
goto v___jp_497_;
}
else
{
uint8_t v___x_506_; 
v___x_506_ = lean_nat_dec_eq(v_snd_502_, v_snd_504_);
v___y_498_ = v___x_506_;
goto v___jp_497_;
}
v___jp_497_:
{
if (v___y_498_ == 0)
{
v_x_492_ = v_tail_496_;
goto _start;
}
else
{
lean_object* v___x_500_; 
lean_inc(v_value_495_);
v___x_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_500_, 0, v_value_495_);
return v___x_500_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8_spec__16___redArg___boxed(lean_object* v_a_507_, lean_object* v_x_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8_spec__16___redArg(v_a_507_, v_x_508_);
lean_dec(v_x_508_);
lean_dec_ref(v_a_507_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8___redArg(lean_object* v_m_510_, lean_object* v_a_511_){
_start:
{
lean_object* v_buckets_512_; lean_object* v_fst_513_; lean_object* v_snd_514_; lean_object* v___x_515_; uint64_t v___x_516_; uint64_t v___x_517_; uint64_t v___x_518_; uint64_t v___x_519_; uint64_t v___x_520_; uint64_t v_fold_521_; uint64_t v___x_522_; uint64_t v___x_523_; uint64_t v___x_524_; size_t v___x_525_; size_t v___x_526_; size_t v___x_527_; size_t v___x_528_; size_t v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v_buckets_512_ = lean_ctor_get(v_m_510_, 1);
v_fst_513_ = lean_ctor_get(v_a_511_, 0);
v_snd_514_ = lean_ctor_get(v_a_511_, 1);
v___x_515_ = lean_array_get_size(v_buckets_512_);
v___x_516_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_fst_513_);
v___x_517_ = lean_uint64_of_nat(v_snd_514_);
v___x_518_ = lean_uint64_mix_hash(v___x_516_, v___x_517_);
v___x_519_ = 32ULL;
v___x_520_ = lean_uint64_shift_right(v___x_518_, v___x_519_);
v_fold_521_ = lean_uint64_xor(v___x_518_, v___x_520_);
v___x_522_ = 16ULL;
v___x_523_ = lean_uint64_shift_right(v_fold_521_, v___x_522_);
v___x_524_ = lean_uint64_xor(v_fold_521_, v___x_523_);
v___x_525_ = lean_uint64_to_usize(v___x_524_);
v___x_526_ = lean_usize_of_nat(v___x_515_);
v___x_527_ = ((size_t)1ULL);
v___x_528_ = lean_usize_sub(v___x_526_, v___x_527_);
v___x_529_ = lean_usize_land(v___x_525_, v___x_528_);
v___x_530_ = lean_array_uget_borrowed(v_buckets_512_, v___x_529_);
v___x_531_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8_spec__16___redArg(v_a_511_, v___x_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8___redArg___boxed(lean_object* v_m_532_, lean_object* v_a_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8___redArg(v_m_532_, v_a_533_);
lean_dec_ref(v_a_533_);
lean_dec_ref(v_m_532_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__12(lean_object* v_structName_535_, lean_object* v_idx_536_, lean_object* v_struct_537_, lean_object* v___y_538_, uint8_t v___y_539_, lean_object* v___y_540_){
_start:
{
lean_object* v___y_542_; lean_object* v___y_543_; 
if (v___y_539_ == 0)
{
v___y_542_ = v___y_538_;
v___y_543_ = v___y_540_;
goto v___jp_541_;
}
else
{
lean_object* v___x_556_; lean_object* v_snd_557_; 
lean_inc_ref(v_struct_537_);
v___x_556_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_struct_537_, v___y_539_, v___y_540_);
v_snd_557_ = lean_ctor_get(v___x_556_, 1);
lean_inc(v_snd_557_);
lean_dec_ref(v___x_556_);
v___y_542_ = v___y_538_;
v___y_543_ = v_snd_557_;
goto v___jp_541_;
}
v___jp_541_:
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v_fst_546_; lean_object* v_snd_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_555_; 
v___x_544_ = l_Lean_Expr_proj___override(v_structName_535_, v_idx_536_, v_struct_537_);
v___x_545_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_544_, v___y_543_);
v_fst_546_ = lean_ctor_get(v___x_545_, 0);
v_snd_547_ = lean_ctor_get(v___x_545_, 1);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_545_);
if (v_isSharedCheck_555_ == 0)
{
v___x_549_ = v___x_545_;
v_isShared_550_ = v_isSharedCheck_555_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_snd_547_);
lean_inc(v_fst_546_);
lean_dec(v___x_545_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_555_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_552_; 
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 1, v___y_542_);
v___x_552_ = v___x_549_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_fst_546_);
lean_ctor_set(v_reuseFailAlloc_554_, 1, v___y_542_);
v___x_552_ = v_reuseFailAlloc_554_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
lean_object* v___x_553_; 
v___x_553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_553_, 0, v___x_552_);
lean_ctor_set(v___x_553_, 1, v_snd_547_);
return v___x_553_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__12___boxed(lean_object* v_structName_558_, lean_object* v_idx_559_, lean_object* v_struct_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
uint8_t v___y_26085__boxed_564_; lean_object* v_res_565_; 
v___y_26085__boxed_564_ = lean_unbox(v___y_562_);
v_res_565_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__12(v_structName_558_, v_idx_559_, v_struct_560_, v___y_561_, v___y_26085__boxed_564_, v___y_563_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__9(lean_object* v_x_566_, uint8_t v_bi_567_, lean_object* v_t_568_, lean_object* v_b_569_, lean_object* v___y_570_, uint8_t v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v___y_574_; lean_object* v___y_575_; 
if (v___y_571_ == 0)
{
v___y_574_ = v___y_570_;
v___y_575_ = v___y_572_;
goto v___jp_573_;
}
else
{
lean_object* v___x_588_; lean_object* v_snd_589_; lean_object* v___x_590_; lean_object* v_snd_591_; 
lean_inc_ref(v_t_568_);
v___x_588_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_568_, v___y_571_, v___y_572_);
v_snd_589_ = lean_ctor_get(v___x_588_, 1);
lean_inc(v_snd_589_);
lean_dec_ref(v___x_588_);
lean_inc_ref(v_b_569_);
v___x_590_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_569_, v___y_571_, v_snd_589_);
v_snd_591_ = lean_ctor_get(v___x_590_, 1);
lean_inc(v_snd_591_);
lean_dec_ref(v___x_590_);
v___y_574_ = v___y_570_;
v___y_575_ = v_snd_591_;
goto v___jp_573_;
}
v___jp_573_:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v_fst_578_; lean_object* v_snd_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_587_; 
v___x_576_ = l_Lean_Expr_forallE___override(v_x_566_, v_t_568_, v_b_569_, v_bi_567_);
v___x_577_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_576_, v___y_575_);
v_fst_578_ = lean_ctor_get(v___x_577_, 0);
v_snd_579_ = lean_ctor_get(v___x_577_, 1);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_587_ == 0)
{
v___x_581_ = v___x_577_;
v_isShared_582_ = v_isSharedCheck_587_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_snd_579_);
lean_inc(v_fst_578_);
lean_dec(v___x_577_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_587_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_584_; 
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 1, v___y_574_);
v___x_584_ = v___x_581_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v_fst_578_);
lean_ctor_set(v_reuseFailAlloc_586_, 1, v___y_574_);
v___x_584_ = v_reuseFailAlloc_586_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
lean_object* v___x_585_; 
v___x_585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_584_);
lean_ctor_set(v___x_585_, 1, v_snd_579_);
return v___x_585_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__9___boxed(lean_object* v_x_592_, lean_object* v_bi_593_, lean_object* v_t_594_, lean_object* v_b_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_){
_start:
{
uint8_t v_bi_boxed_599_; uint8_t v___y_26129__boxed_600_; lean_object* v_res_601_; 
v_bi_boxed_599_ = lean_unbox(v_bi_593_);
v___y_26129__boxed_600_ = lean_unbox(v___y_597_);
v_res_601_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__9(v_x_592_, v_bi_boxed_599_, v_t_594_, v_b_595_, v___y_596_, v___y_26129__boxed_600_, v___y_598_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__11(lean_object* v_d_602_, lean_object* v_e_603_, lean_object* v___y_604_, uint8_t v___y_605_, lean_object* v___y_606_){
_start:
{
lean_object* v___y_608_; lean_object* v___y_609_; 
if (v___y_605_ == 0)
{
v___y_608_ = v___y_604_;
v___y_609_ = v___y_606_;
goto v___jp_607_;
}
else
{
lean_object* v___x_622_; lean_object* v_snd_623_; 
lean_inc_ref(v_e_603_);
v___x_622_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_e_603_, v___y_605_, v___y_606_);
v_snd_623_ = lean_ctor_get(v___x_622_, 1);
lean_inc(v_snd_623_);
lean_dec_ref(v___x_622_);
v___y_608_ = v___y_604_;
v___y_609_ = v_snd_623_;
goto v___jp_607_;
}
v___jp_607_:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v_fst_612_; lean_object* v_snd_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_621_; 
v___x_610_ = l_Lean_Expr_mdata___override(v_d_602_, v_e_603_);
v___x_611_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_610_, v___y_609_);
v_fst_612_ = lean_ctor_get(v___x_611_, 0);
v_snd_613_ = lean_ctor_get(v___x_611_, 1);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_621_ == 0)
{
v___x_615_ = v___x_611_;
v_isShared_616_ = v_isSharedCheck_621_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_snd_613_);
lean_inc(v_fst_612_);
lean_dec(v___x_611_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_621_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 1, v___y_608_);
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_fst_612_);
lean_ctor_set(v_reuseFailAlloc_620_, 1, v___y_608_);
v___x_618_ = v_reuseFailAlloc_620_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
lean_object* v___x_619_; 
v___x_619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
lean_ctor_set(v___x_619_, 1, v_snd_613_);
return v___x_619_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__11___boxed(lean_object* v_d_624_, lean_object* v_e_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_){
_start:
{
uint8_t v___y_26178__boxed_629_; lean_object* v_res_630_; 
v___y_26178__boxed_629_ = lean_unbox(v___y_627_);
v_res_630_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__11(v_d_624_, v_e_625_, v___y_626_, v___y_26178__boxed_629_, v___y_628_);
return v_res_630_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__2(void){
_start:
{
lean_object* v___x_631_; 
v___x_631_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_631_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__1(void){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = lean_mk_string_unchecked("_private.Lean.Meta.Sym.ReplaceS.0.Lean.Meta.Sym.visit", 53, 53);
return v___x_632_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__0(void){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = lean_mk_string_unchecked("Lean.Meta.Sym.ReplaceS", 22, 22);
return v___x_633_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__3(void){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_634_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__2, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__2_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__2);
v___x_635_ = lean_unsigned_to_nat(67u);
v___x_636_ = lean_unsigned_to_nat(35u);
v___x_637_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__1, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__1_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__1);
v___x_638_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__0, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__0_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__0);
v___x_639_ = l_mkPanicMessageWithDecl(v___x_638_, v___x_637_, v___x_636_, v___x_635_, v___x_634_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5(lean_object* v_minIndex_640_, lean_object* v___x_641_, lean_object* v___x_642_, lean_object* v_start_643_, lean_object* v_xs_644_, lean_object* v___x_645_, lean_object* v_e_646_, lean_object* v_offset_647_, lean_object* v_a_648_, uint8_t v_a_649_, lean_object* v_a_650_){
_start:
{
switch(lean_obj_tag(v_e_646_))
{
case 5:
{
lean_object* v_fn_651_; lean_object* v_arg_652_; lean_object* v___x_653_; lean_object* v_fst_654_; lean_object* v_snd_655_; lean_object* v_fst_656_; lean_object* v_snd_657_; lean_object* v___x_658_; lean_object* v_fst_659_; lean_object* v_snd_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_681_; 
v_fn_651_ = lean_ctor_get(v_e_646_, 0);
v_arg_652_ = lean_ctor_get(v_e_646_, 1);
lean_inc(v_offset_647_);
lean_inc_ref(v_fn_651_);
lean_inc_ref(v___x_641_);
v___x_653_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6(v_minIndex_640_, v___x_641_, v___x_642_, v_start_643_, v_xs_644_, v___x_645_, v_fn_651_, v_offset_647_, v_a_648_, v_a_649_, v_a_650_);
v_fst_654_ = lean_ctor_get(v___x_653_, 0);
lean_inc(v_fst_654_);
v_snd_655_ = lean_ctor_get(v___x_653_, 1);
lean_inc(v_snd_655_);
lean_dec_ref(v___x_653_);
v_fst_656_ = lean_ctor_get(v_fst_654_, 0);
lean_inc(v_fst_656_);
v_snd_657_ = lean_ctor_get(v_fst_654_, 1);
lean_inc(v_snd_657_);
lean_dec(v_fst_654_);
lean_inc_ref(v_arg_652_);
v___x_658_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6(v_minIndex_640_, v___x_641_, v___x_642_, v_start_643_, v_xs_644_, v___x_645_, v_arg_652_, v_offset_647_, v_snd_657_, v_a_649_, v_snd_655_);
v_fst_659_ = lean_ctor_get(v___x_658_, 0);
v_snd_660_ = lean_ctor_get(v___x_658_, 1);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_681_ == 0)
{
v___x_662_ = v___x_658_;
v_isShared_663_ = v_isSharedCheck_681_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_snd_660_);
lean_inc(v_fst_659_);
lean_dec(v___x_658_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_681_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v_fst_664_; lean_object* v_snd_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_680_; 
v_fst_664_ = lean_ctor_get(v_fst_659_, 0);
v_snd_665_ = lean_ctor_get(v_fst_659_, 1);
v_isSharedCheck_680_ = !lean_is_exclusive(v_fst_659_);
if (v_isSharedCheck_680_ == 0)
{
v___x_667_ = v_fst_659_;
v_isShared_668_ = v_isSharedCheck_680_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_snd_665_);
lean_inc(v_fst_664_);
lean_dec(v_fst_659_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_680_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
uint8_t v___y_670_; uint8_t v___x_678_; 
v___x_678_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_fn_651_, v_fst_656_);
if (v___x_678_ == 0)
{
v___y_670_ = v___x_678_;
goto v___jp_669_;
}
else
{
uint8_t v___x_679_; 
v___x_679_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_arg_652_, v_fst_664_);
v___y_670_ = v___x_679_;
goto v___jp_669_;
}
v___jp_669_:
{
if (v___y_670_ == 0)
{
lean_object* v___x_671_; 
lean_del_object(v___x_667_);
lean_del_object(v___x_662_);
lean_dec_ref(v_e_646_);
v___x_671_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__7(v_fst_656_, v_fst_664_, v_snd_665_, v_a_649_, v_snd_660_);
return v___x_671_;
}
else
{
lean_object* v___x_673_; 
lean_dec(v_fst_664_);
lean_dec(v_fst_656_);
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 0, v_e_646_);
v___x_673_ = v___x_667_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_e_646_);
lean_ctor_set(v_reuseFailAlloc_677_, 1, v_snd_665_);
v___x_673_ = v_reuseFailAlloc_677_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
lean_object* v___x_675_; 
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 0, v___x_673_);
v___x_675_ = v___x_662_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v___x_673_);
lean_ctor_set(v_reuseFailAlloc_676_, 1, v_snd_660_);
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
}
}
case 6:
{
lean_object* v_binderName_682_; lean_object* v_binderType_683_; lean_object* v_body_684_; uint8_t v_binderInfo_685_; lean_object* v___x_686_; lean_object* v_fst_687_; lean_object* v_snd_688_; lean_object* v_fst_689_; lean_object* v_snd_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v_fst_694_; lean_object* v_snd_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_716_; 
v_binderName_682_ = lean_ctor_get(v_e_646_, 0);
v_binderType_683_ = lean_ctor_get(v_e_646_, 1);
v_body_684_ = lean_ctor_get(v_e_646_, 2);
v_binderInfo_685_ = lean_ctor_get_uint8(v_e_646_, sizeof(void*)*3 + 8);
lean_inc(v_offset_647_);
lean_inc_ref(v_binderType_683_);
lean_inc_ref(v___x_641_);
v___x_686_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6(v_minIndex_640_, v___x_641_, v___x_642_, v_start_643_, v_xs_644_, v___x_645_, v_binderType_683_, v_offset_647_, v_a_648_, v_a_649_, v_a_650_);
v_fst_687_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_fst_687_);
v_snd_688_ = lean_ctor_get(v___x_686_, 1);
lean_inc(v_snd_688_);
lean_dec_ref(v___x_686_);
v_fst_689_ = lean_ctor_get(v_fst_687_, 0);
lean_inc(v_fst_689_);
v_snd_690_ = lean_ctor_get(v_fst_687_, 1);
lean_inc(v_snd_690_);
lean_dec(v_fst_687_);
v___x_691_ = lean_unsigned_to_nat(1u);
v___x_692_ = lean_nat_add(v_offset_647_, v___x_691_);
lean_dec(v_offset_647_);
lean_inc_ref(v_body_684_);
v___x_693_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6(v_minIndex_640_, v___x_641_, v___x_642_, v_start_643_, v_xs_644_, v___x_645_, v_body_684_, v___x_692_, v_snd_690_, v_a_649_, v_snd_688_);
v_fst_694_ = lean_ctor_get(v___x_693_, 0);
v_snd_695_ = lean_ctor_get(v___x_693_, 1);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_693_);
if (v_isSharedCheck_716_ == 0)
{
v___x_697_ = v___x_693_;
v_isShared_698_ = v_isSharedCheck_716_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_snd_695_);
lean_inc(v_fst_694_);
lean_dec(v___x_693_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_716_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v_fst_699_; lean_object* v_snd_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_715_; 
v_fst_699_ = lean_ctor_get(v_fst_694_, 0);
v_snd_700_ = lean_ctor_get(v_fst_694_, 1);
v_isSharedCheck_715_ = !lean_is_exclusive(v_fst_694_);
if (v_isSharedCheck_715_ == 0)
{
v___x_702_ = v_fst_694_;
v_isShared_703_ = v_isSharedCheck_715_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_snd_700_);
lean_inc(v_fst_699_);
lean_dec(v_fst_694_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_715_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
uint8_t v___y_705_; uint8_t v___x_713_; 
v___x_713_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_binderType_683_, v_fst_689_);
if (v___x_713_ == 0)
{
v___y_705_ = v___x_713_;
goto v___jp_704_;
}
else
{
uint8_t v___x_714_; 
v___x_714_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_684_, v_fst_699_);
v___y_705_ = v___x_714_;
goto v___jp_704_;
}
v___jp_704_:
{
if (v___y_705_ == 0)
{
lean_object* v___x_706_; 
lean_inc(v_binderName_682_);
lean_del_object(v___x_702_);
lean_del_object(v___x_697_);
lean_dec_ref(v_e_646_);
v___x_706_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__8(v_binderName_682_, v_binderInfo_685_, v_fst_689_, v_fst_699_, v_snd_700_, v_a_649_, v_snd_695_);
return v___x_706_;
}
else
{
lean_object* v___x_708_; 
lean_dec(v_fst_699_);
lean_dec(v_fst_689_);
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 0, v_e_646_);
v___x_708_ = v___x_702_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v_e_646_);
lean_ctor_set(v_reuseFailAlloc_712_, 1, v_snd_700_);
v___x_708_ = v_reuseFailAlloc_712_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
lean_object* v___x_710_; 
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 0, v___x_708_);
v___x_710_ = v___x_697_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v___x_708_);
lean_ctor_set(v_reuseFailAlloc_711_, 1, v_snd_695_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
}
}
}
}
}
case 7:
{
lean_object* v_binderName_717_; lean_object* v_binderType_718_; lean_object* v_body_719_; uint8_t v_binderInfo_720_; lean_object* v___x_721_; lean_object* v_fst_722_; lean_object* v_snd_723_; lean_object* v_fst_724_; lean_object* v_snd_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v_fst_729_; lean_object* v_snd_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_751_; 
v_binderName_717_ = lean_ctor_get(v_e_646_, 0);
v_binderType_718_ = lean_ctor_get(v_e_646_, 1);
v_body_719_ = lean_ctor_get(v_e_646_, 2);
v_binderInfo_720_ = lean_ctor_get_uint8(v_e_646_, sizeof(void*)*3 + 8);
lean_inc(v_offset_647_);
lean_inc_ref(v_binderType_718_);
lean_inc_ref(v___x_641_);
v___x_721_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6(v_minIndex_640_, v___x_641_, v___x_642_, v_start_643_, v_xs_644_, v___x_645_, v_binderType_718_, v_offset_647_, v_a_648_, v_a_649_, v_a_650_);
v_fst_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_fst_722_);
v_snd_723_ = lean_ctor_get(v___x_721_, 1);
lean_inc(v_snd_723_);
lean_dec_ref(v___x_721_);
v_fst_724_ = lean_ctor_get(v_fst_722_, 0);
lean_inc(v_fst_724_);
v_snd_725_ = lean_ctor_get(v_fst_722_, 1);
lean_inc(v_snd_725_);
lean_dec(v_fst_722_);
v___x_726_ = lean_unsigned_to_nat(1u);
v___x_727_ = lean_nat_add(v_offset_647_, v___x_726_);
lean_dec(v_offset_647_);
lean_inc_ref(v_body_719_);
v___x_728_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6(v_minIndex_640_, v___x_641_, v___x_642_, v_start_643_, v_xs_644_, v___x_645_, v_body_719_, v___x_727_, v_snd_725_, v_a_649_, v_snd_723_);
v_fst_729_ = lean_ctor_get(v___x_728_, 0);
v_snd_730_ = lean_ctor_get(v___x_728_, 1);
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_751_ == 0)
{
v___x_732_ = v___x_728_;
v_isShared_733_ = v_isSharedCheck_751_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_snd_730_);
lean_inc(v_fst_729_);
lean_dec(v___x_728_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_751_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v_fst_734_; lean_object* v_snd_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_750_; 
v_fst_734_ = lean_ctor_get(v_fst_729_, 0);
v_snd_735_ = lean_ctor_get(v_fst_729_, 1);
v_isSharedCheck_750_ = !lean_is_exclusive(v_fst_729_);
if (v_isSharedCheck_750_ == 0)
{
v___x_737_ = v_fst_729_;
v_isShared_738_ = v_isSharedCheck_750_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_snd_735_);
lean_inc(v_fst_734_);
lean_dec(v_fst_729_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_750_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
uint8_t v___y_740_; uint8_t v___x_748_; 
v___x_748_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_binderType_718_, v_fst_724_);
if (v___x_748_ == 0)
{
v___y_740_ = v___x_748_;
goto v___jp_739_;
}
else
{
uint8_t v___x_749_; 
v___x_749_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_719_, v_fst_734_);
v___y_740_ = v___x_749_;
goto v___jp_739_;
}
v___jp_739_:
{
if (v___y_740_ == 0)
{
lean_object* v___x_741_; 
lean_inc(v_binderName_717_);
lean_del_object(v___x_737_);
lean_del_object(v___x_732_);
lean_dec_ref(v_e_646_);
v___x_741_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__9(v_binderName_717_, v_binderInfo_720_, v_fst_724_, v_fst_734_, v_snd_735_, v_a_649_, v_snd_730_);
return v___x_741_;
}
else
{
lean_object* v___x_743_; 
lean_dec(v_fst_734_);
lean_dec(v_fst_724_);
if (v_isShared_738_ == 0)
{
lean_ctor_set(v___x_737_, 0, v_e_646_);
v___x_743_ = v___x_737_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_e_646_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v_snd_735_);
v___x_743_ = v_reuseFailAlloc_747_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
lean_object* v___x_745_; 
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 0, v___x_743_);
v___x_745_ = v___x_732_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v___x_743_);
lean_ctor_set(v_reuseFailAlloc_746_, 1, v_snd_730_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
}
}
}
case 8:
{
lean_object* v_declName_752_; lean_object* v_type_753_; lean_object* v_value_754_; lean_object* v_body_755_; uint8_t v_nondep_756_; lean_object* v___x_757_; lean_object* v_fst_758_; lean_object* v_snd_759_; lean_object* v_fst_760_; lean_object* v_snd_761_; lean_object* v___x_762_; lean_object* v_fst_763_; lean_object* v_snd_764_; lean_object* v_fst_765_; lean_object* v_snd_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v_fst_770_; lean_object* v_snd_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_794_; 
v_declName_752_ = lean_ctor_get(v_e_646_, 0);
v_type_753_ = lean_ctor_get(v_e_646_, 1);
v_value_754_ = lean_ctor_get(v_e_646_, 2);
v_body_755_ = lean_ctor_get(v_e_646_, 3);
v_nondep_756_ = lean_ctor_get_uint8(v_e_646_, sizeof(void*)*4 + 8);
lean_inc_n(v_offset_647_, 2);
lean_inc_ref(v_type_753_);
lean_inc_ref_n(v___x_641_, 2);
v___x_757_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6(v_minIndex_640_, v___x_641_, v___x_642_, v_start_643_, v_xs_644_, v___x_645_, v_type_753_, v_offset_647_, v_a_648_, v_a_649_, v_a_650_);
v_fst_758_ = lean_ctor_get(v___x_757_, 0);
lean_inc(v_fst_758_);
v_snd_759_ = lean_ctor_get(v___x_757_, 1);
lean_inc(v_snd_759_);
lean_dec_ref(v___x_757_);
v_fst_760_ = lean_ctor_get(v_fst_758_, 0);
lean_inc(v_fst_760_);
v_snd_761_ = lean_ctor_get(v_fst_758_, 1);
lean_inc(v_snd_761_);
lean_dec(v_fst_758_);
lean_inc_ref(v_value_754_);
v___x_762_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6(v_minIndex_640_, v___x_641_, v___x_642_, v_start_643_, v_xs_644_, v___x_645_, v_value_754_, v_offset_647_, v_snd_761_, v_a_649_, v_snd_759_);
v_fst_763_ = lean_ctor_get(v___x_762_, 0);
lean_inc(v_fst_763_);
v_snd_764_ = lean_ctor_get(v___x_762_, 1);
lean_inc(v_snd_764_);
lean_dec_ref(v___x_762_);
v_fst_765_ = lean_ctor_get(v_fst_763_, 0);
lean_inc(v_fst_765_);
v_snd_766_ = lean_ctor_get(v_fst_763_, 1);
lean_inc(v_snd_766_);
lean_dec(v_fst_763_);
v___x_767_ = lean_unsigned_to_nat(1u);
v___x_768_ = lean_nat_add(v_offset_647_, v___x_767_);
lean_dec(v_offset_647_);
lean_inc_ref(v_body_755_);
v___x_769_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6(v_minIndex_640_, v___x_641_, v___x_642_, v_start_643_, v_xs_644_, v___x_645_, v_body_755_, v___x_768_, v_snd_766_, v_a_649_, v_snd_764_);
v_fst_770_ = lean_ctor_get(v___x_769_, 0);
v_snd_771_ = lean_ctor_get(v___x_769_, 1);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_794_ == 0)
{
v___x_773_ = v___x_769_;
v_isShared_774_ = v_isSharedCheck_794_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_snd_771_);
lean_inc(v_fst_770_);
lean_dec(v___x_769_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_794_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v_fst_775_; lean_object* v_snd_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_793_; 
v_fst_775_ = lean_ctor_get(v_fst_770_, 0);
v_snd_776_ = lean_ctor_get(v_fst_770_, 1);
v_isSharedCheck_793_ = !lean_is_exclusive(v_fst_770_);
if (v_isSharedCheck_793_ == 0)
{
v___x_778_ = v_fst_770_;
v_isShared_779_ = v_isSharedCheck_793_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_snd_776_);
lean_inc(v_fst_775_);
lean_dec(v_fst_770_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_793_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
uint8_t v___y_781_; uint8_t v___x_791_; 
v___x_791_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_type_753_, v_fst_760_);
if (v___x_791_ == 0)
{
v___y_781_ = v___x_791_;
goto v___jp_780_;
}
else
{
uint8_t v___x_792_; 
v___x_792_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_value_754_, v_fst_765_);
v___y_781_ = v___x_792_;
goto v___jp_780_;
}
v___jp_780_:
{
if (v___y_781_ == 0)
{
lean_object* v___x_782_; 
lean_inc(v_declName_752_);
lean_del_object(v___x_778_);
lean_del_object(v___x_773_);
lean_dec_ref(v_e_646_);
v___x_782_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__10(v_declName_752_, v_fst_760_, v_fst_765_, v_fst_775_, v_nondep_756_, v_snd_776_, v_a_649_, v_snd_771_);
return v___x_782_;
}
else
{
uint8_t v___x_783_; 
v___x_783_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_755_, v_fst_775_);
if (v___x_783_ == 0)
{
lean_object* v___x_784_; 
lean_inc(v_declName_752_);
lean_del_object(v___x_778_);
lean_del_object(v___x_773_);
lean_dec_ref(v_e_646_);
v___x_784_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__10(v_declName_752_, v_fst_760_, v_fst_765_, v_fst_775_, v_nondep_756_, v_snd_776_, v_a_649_, v_snd_771_);
return v___x_784_;
}
else
{
lean_object* v___x_786_; 
lean_dec(v_fst_775_);
lean_dec(v_fst_765_);
lean_dec(v_fst_760_);
if (v_isShared_779_ == 0)
{
lean_ctor_set(v___x_778_, 0, v_e_646_);
v___x_786_ = v___x_778_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_e_646_);
lean_ctor_set(v_reuseFailAlloc_790_, 1, v_snd_776_);
v___x_786_ = v_reuseFailAlloc_790_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
lean_object* v___x_788_; 
if (v_isShared_774_ == 0)
{
lean_ctor_set(v___x_773_, 0, v___x_786_);
v___x_788_ = v___x_773_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v___x_786_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v_snd_771_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
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
lean_object* v_data_795_; lean_object* v_expr_796_; lean_object* v___x_797_; lean_object* v_fst_798_; lean_object* v_snd_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_817_; 
v_data_795_ = lean_ctor_get(v_e_646_, 0);
v_expr_796_ = lean_ctor_get(v_e_646_, 1);
lean_inc_ref(v_expr_796_);
v___x_797_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6(v_minIndex_640_, v___x_641_, v___x_642_, v_start_643_, v_xs_644_, v___x_645_, v_expr_796_, v_offset_647_, v_a_648_, v_a_649_, v_a_650_);
v_fst_798_ = lean_ctor_get(v___x_797_, 0);
v_snd_799_ = lean_ctor_get(v___x_797_, 1);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_817_ == 0)
{
v___x_801_ = v___x_797_;
v_isShared_802_ = v_isSharedCheck_817_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_snd_799_);
lean_inc(v_fst_798_);
lean_dec(v___x_797_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_817_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v_fst_803_; lean_object* v_snd_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_816_; 
v_fst_803_ = lean_ctor_get(v_fst_798_, 0);
v_snd_804_ = lean_ctor_get(v_fst_798_, 1);
v_isSharedCheck_816_ = !lean_is_exclusive(v_fst_798_);
if (v_isSharedCheck_816_ == 0)
{
v___x_806_ = v_fst_798_;
v_isShared_807_ = v_isSharedCheck_816_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_snd_804_);
lean_inc(v_fst_803_);
lean_dec(v_fst_798_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_816_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
uint8_t v___x_808_; 
v___x_808_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_expr_796_, v_fst_803_);
if (v___x_808_ == 0)
{
lean_object* v___x_809_; 
lean_inc(v_data_795_);
lean_del_object(v___x_806_);
lean_del_object(v___x_801_);
lean_dec_ref(v_e_646_);
v___x_809_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__11(v_data_795_, v_fst_803_, v_snd_804_, v_a_649_, v_snd_799_);
return v___x_809_;
}
else
{
lean_object* v___x_811_; 
lean_dec(v_fst_803_);
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 0, v_e_646_);
v___x_811_ = v___x_806_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_e_646_);
lean_ctor_set(v_reuseFailAlloc_815_, 1, v_snd_804_);
v___x_811_ = v_reuseFailAlloc_815_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
lean_object* v___x_813_; 
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 0, v___x_811_);
v___x_813_ = v___x_801_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v___x_811_);
lean_ctor_set(v_reuseFailAlloc_814_, 1, v_snd_799_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
}
}
}
case 11:
{
lean_object* v_typeName_818_; lean_object* v_idx_819_; lean_object* v_struct_820_; lean_object* v___x_821_; lean_object* v_fst_822_; lean_object* v_snd_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_841_; 
v_typeName_818_ = lean_ctor_get(v_e_646_, 0);
v_idx_819_ = lean_ctor_get(v_e_646_, 1);
v_struct_820_ = lean_ctor_get(v_e_646_, 2);
lean_inc_ref(v_struct_820_);
v___x_821_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6(v_minIndex_640_, v___x_641_, v___x_642_, v_start_643_, v_xs_644_, v___x_645_, v_struct_820_, v_offset_647_, v_a_648_, v_a_649_, v_a_650_);
v_fst_822_ = lean_ctor_get(v___x_821_, 0);
v_snd_823_ = lean_ctor_get(v___x_821_, 1);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_821_);
if (v_isSharedCheck_841_ == 0)
{
v___x_825_ = v___x_821_;
v_isShared_826_ = v_isSharedCheck_841_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_snd_823_);
lean_inc(v_fst_822_);
lean_dec(v___x_821_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_841_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v_fst_827_; lean_object* v_snd_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_840_; 
v_fst_827_ = lean_ctor_get(v_fst_822_, 0);
v_snd_828_ = lean_ctor_get(v_fst_822_, 1);
v_isSharedCheck_840_ = !lean_is_exclusive(v_fst_822_);
if (v_isSharedCheck_840_ == 0)
{
v___x_830_ = v_fst_822_;
v_isShared_831_ = v_isSharedCheck_840_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_snd_828_);
lean_inc(v_fst_827_);
lean_dec(v_fst_822_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_840_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
uint8_t v___x_832_; 
v___x_832_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_struct_820_, v_fst_827_);
if (v___x_832_ == 0)
{
lean_object* v___x_833_; 
lean_inc(v_idx_819_);
lean_inc(v_typeName_818_);
lean_del_object(v___x_830_);
lean_del_object(v___x_825_);
lean_dec_ref(v_e_646_);
v___x_833_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__12(v_typeName_818_, v_idx_819_, v_fst_827_, v_snd_828_, v_a_649_, v_snd_823_);
return v___x_833_;
}
else
{
lean_object* v___x_835_; 
lean_dec(v_fst_827_);
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 0, v_e_646_);
v___x_835_ = v___x_830_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_e_646_);
lean_ctor_set(v_reuseFailAlloc_839_, 1, v_snd_828_);
v___x_835_ = v_reuseFailAlloc_839_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
lean_object* v___x_837_; 
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 0, v___x_835_);
v___x_837_ = v___x_825_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v___x_835_);
lean_ctor_set(v_reuseFailAlloc_838_, 1, v_snd_823_);
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
}
default: 
{
lean_object* v___x_842_; lean_object* v___x_843_; 
lean_dec(v_offset_647_);
lean_dec_ref(v_e_646_);
lean_dec_ref(v___x_641_);
v___x_842_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__3, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__3_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___closed__3);
v___x_843_ = l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__13(v___x_842_, v_a_648_, v_a_649_, v_a_650_);
return v___x_843_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6(lean_object* v_minIndex_844_, lean_object* v___x_845_, lean_object* v___x_846_, lean_object* v_start_847_, lean_object* v_xs_848_, lean_object* v___x_849_, lean_object* v_e_850_, lean_object* v_offset_851_, lean_object* v_a_852_, uint8_t v_a_853_, lean_object* v_a_854_){
_start:
{
lean_object* v_key_855_; lean_object* v_snd_857_; lean_object* v___y_871_; lean_object* v___y_876_; lean_object* v___x_881_; 
lean_inc(v_offset_851_);
lean_inc_ref(v_e_850_);
v_key_855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_855_, 0, v_e_850_);
lean_ctor_set(v_key_855_, 1, v_offset_851_);
v___x_881_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8___redArg(v_a_852_, v_key_855_);
if (lean_obj_tag(v___x_881_) == 1)
{
lean_object* v_val_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
lean_dec_ref(v_key_855_);
lean_dec(v_offset_851_);
lean_dec_ref(v_e_850_);
lean_dec_ref(v___x_845_);
v_val_882_ = lean_ctor_get(v___x_881_, 0);
lean_inc(v_val_882_);
lean_dec_ref(v___x_881_);
v___x_883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_883_, 0, v_val_882_);
lean_ctor_set(v___x_883_, 1, v_a_852_);
v___x_884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_884_, 0, v___x_883_);
lean_ctor_set(v___x_884_, 1, v_a_854_);
return v___x_884_;
}
else
{
lean_dec(v___x_881_);
switch(lean_obj_tag(v_e_850_))
{
case 1:
{
lean_object* v_fvarId_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
lean_dec_ref(v___x_845_);
v_fvarId_885_ = lean_ctor_get(v_e_850_, 0);
v___x_886_ = lean_unsigned_to_nat(0u);
v___x_887_ = lean_unsigned_to_nat(1u);
v___x_888_ = lean_nat_sub(v___x_846_, v___x_887_);
v___x_889_ = l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsRange_go___redArg(v_start_847_, v_xs_848_, v_fvarId_885_, v___x_886_, v___x_888_);
if (lean_obj_tag(v___x_889_) == 1)
{
lean_object* v_val_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v_fst_893_; lean_object* v_snd_894_; lean_object* v___x_895_; 
lean_dec_ref(v_e_850_);
v_val_890_ = lean_ctor_get(v___x_889_, 0);
lean_inc(v_val_890_);
lean_dec_ref(v___x_889_);
v___x_891_ = lean_nat_add(v_offset_851_, v_val_890_);
lean_dec(v_val_890_);
lean_dec(v_offset_851_);
v___x_892_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_abstractFVarsRange_spec__2___redArg(v___x_891_, v_a_854_);
v_fst_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_fst_893_);
v_snd_894_ = lean_ctor_get(v___x_892_, 1);
lean_inc(v_snd_894_);
lean_dec_ref(v___x_892_);
v___x_895_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_855_, v_fst_893_, v_a_852_, v_a_853_, v_snd_894_);
return v___x_895_;
}
else
{
lean_object* v___x_896_; 
lean_dec(v___x_889_);
lean_dec(v_offset_851_);
v___x_896_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_855_, v_e_850_, v_a_852_, v_a_853_, v_a_854_);
return v___x_896_;
}
}
case 9:
{
lean_object* v___x_897_; 
lean_dec(v_offset_851_);
lean_dec_ref(v___x_845_);
v___x_897_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_855_, v_e_850_, v_a_852_, v_a_853_, v_a_854_);
return v___x_897_;
}
case 2:
{
lean_object* v___x_898_; 
lean_dec(v_offset_851_);
lean_dec_ref(v___x_845_);
v___x_898_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_855_, v_e_850_, v_a_852_, v_a_853_, v_a_854_);
return v___x_898_;
}
case 0:
{
lean_object* v___x_899_; 
lean_dec(v_offset_851_);
lean_dec_ref(v___x_845_);
v___x_899_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_855_, v_e_850_, v_a_852_, v_a_853_, v_a_854_);
return v___x_899_;
}
case 4:
{
lean_object* v___x_900_; 
lean_dec(v_offset_851_);
lean_dec_ref(v___x_845_);
v___x_900_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_855_, v_e_850_, v_a_852_, v_a_853_, v_a_854_);
return v___x_900_;
}
case 3:
{
lean_object* v___x_901_; 
lean_dec(v_offset_851_);
lean_dec_ref(v___x_845_);
v___x_901_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_855_, v_e_850_, v_a_852_, v_a_853_, v_a_854_);
return v___x_901_;
}
default: 
{
uint8_t v___x_902_; 
v___x_902_ = l_Lean_Expr_hasFVar(v_e_850_);
if (v___x_902_ == 0)
{
lean_object* v___x_903_; 
lean_dec(v_offset_851_);
lean_dec_ref(v___x_845_);
v___x_903_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_855_, v_e_850_, v_a_852_, v_a_853_, v_a_854_);
return v___x_903_;
}
else
{
lean_object* v___x_904_; 
v___x_904_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3___redArg(v___x_849_, v_e_850_);
if (lean_obj_tag(v___x_904_) == 1)
{
lean_object* v_val_905_; 
v_val_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc(v_val_905_);
lean_dec_ref(v___x_904_);
if (lean_obj_tag(v_val_905_) == 0)
{
lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_906_ = lean_obj_once(&l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3, &l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3_once, _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3);
v___x_907_ = l_panic___at___00Lean_Meta_Sym_abstractFVarsRange_spec__4(v___x_906_);
v___y_876_ = v___x_907_;
goto v___jp_875_;
}
else
{
lean_object* v_val_908_; 
v_val_908_ = lean_ctor_get(v_val_905_, 0);
lean_inc(v_val_908_);
lean_dec_ref(v_val_905_);
v___y_876_ = v_val_908_;
goto v___jp_875_;
}
}
else
{
lean_dec(v___x_904_);
v_snd_857_ = v_a_854_;
goto v___jp_856_;
}
}
}
}
}
v___jp_856_:
{
switch(lean_obj_tag(v_e_850_))
{
case 9:
{
lean_object* v___x_858_; 
lean_dec(v_offset_851_);
lean_dec_ref(v___x_845_);
v___x_858_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_855_, v_e_850_, v_a_852_, v_a_853_, v_snd_857_);
return v___x_858_;
}
case 2:
{
lean_object* v___x_859_; 
lean_dec(v_offset_851_);
lean_dec_ref(v___x_845_);
v___x_859_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_855_, v_e_850_, v_a_852_, v_a_853_, v_snd_857_);
return v___x_859_;
}
case 0:
{
lean_object* v___x_860_; 
lean_dec(v_offset_851_);
lean_dec_ref(v___x_845_);
v___x_860_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_855_, v_e_850_, v_a_852_, v_a_853_, v_snd_857_);
return v___x_860_;
}
case 1:
{
lean_object* v___x_861_; 
lean_dec(v_offset_851_);
lean_dec_ref(v___x_845_);
v___x_861_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_855_, v_e_850_, v_a_852_, v_a_853_, v_snd_857_);
return v___x_861_;
}
case 4:
{
lean_object* v___x_862_; 
lean_dec(v_offset_851_);
lean_dec_ref(v___x_845_);
v___x_862_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_855_, v_e_850_, v_a_852_, v_a_853_, v_snd_857_);
return v___x_862_;
}
case 3:
{
lean_object* v___x_863_; 
lean_dec(v_offset_851_);
lean_dec_ref(v___x_845_);
v___x_863_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_855_, v_e_850_, v_a_852_, v_a_853_, v_snd_857_);
return v___x_863_;
}
default: 
{
lean_object* v___x_864_; lean_object* v_fst_865_; lean_object* v_snd_866_; lean_object* v_fst_867_; lean_object* v_snd_868_; lean_object* v___x_869_; 
v___x_864_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5(v_minIndex_844_, v___x_845_, v___x_846_, v_start_847_, v_xs_848_, v___x_849_, v_e_850_, v_offset_851_, v_a_852_, v_a_853_, v_snd_857_);
v_fst_865_ = lean_ctor_get(v___x_864_, 0);
lean_inc(v_fst_865_);
v_snd_866_ = lean_ctor_get(v___x_864_, 1);
lean_inc(v_snd_866_);
lean_dec_ref(v___x_864_);
v_fst_867_ = lean_ctor_get(v_fst_865_, 0);
lean_inc(v_fst_867_);
v_snd_868_ = lean_ctor_get(v_fst_865_, 1);
lean_inc(v_snd_868_);
lean_dec(v_fst_865_);
v___x_869_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_855_, v_fst_867_, v_snd_868_, v_a_853_, v_snd_866_);
return v___x_869_;
}
}
}
v___jp_870_:
{
lean_object* v_maxIndex_872_; uint8_t v___x_873_; 
v_maxIndex_872_ = l_Lean_LocalDecl_index(v___y_871_);
lean_dec_ref(v___y_871_);
v___x_873_ = lean_nat_dec_lt(v_maxIndex_872_, v_minIndex_844_);
lean_dec(v_maxIndex_872_);
if (v___x_873_ == 0)
{
v_snd_857_ = v_a_854_;
goto v___jp_856_;
}
else
{
lean_object* v___x_874_; 
lean_dec(v_offset_851_);
lean_dec_ref(v___x_845_);
v___x_874_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_855_, v_e_850_, v_a_852_, v_a_853_, v_a_854_);
return v___x_874_;
}
}
v___jp_875_:
{
lean_object* v___x_877_; 
lean_inc_ref(v___x_845_);
v___x_877_ = lean_local_ctx_find(v___x_845_, v___y_876_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_878_ = lean_obj_once(&l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3, &l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3_once, _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3);
v___x_879_ = l_panic___at___00Lean_Meta_Sym_abstractFVarsRange_spec__1(v___x_878_);
v___y_871_ = v___x_879_;
goto v___jp_870_;
}
else
{
lean_object* v_val_880_; 
v_val_880_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_val_880_);
lean_dec_ref(v___x_877_);
v___y_871_ = v_val_880_;
goto v___jp_870_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6___boxed(lean_object* v_minIndex_909_, lean_object* v___x_910_, lean_object* v___x_911_, lean_object* v_start_912_, lean_object* v_xs_913_, lean_object* v___x_914_, lean_object* v_e_915_, lean_object* v_offset_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_){
_start:
{
uint8_t v_a_boxed_920_; lean_object* v_res_921_; 
v_a_boxed_920_ = lean_unbox(v_a_918_);
v_res_921_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6(v_minIndex_909_, v___x_910_, v___x_911_, v_start_912_, v_xs_913_, v___x_914_, v_e_915_, v_offset_916_, v_a_917_, v_a_boxed_920_, v_a_919_);
lean_dec_ref(v___x_914_);
lean_dec_ref(v_xs_913_);
lean_dec(v_start_912_);
lean_dec(v___x_911_);
lean_dec(v_minIndex_909_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5___boxed(lean_object* v_minIndex_922_, lean_object* v___x_923_, lean_object* v___x_924_, lean_object* v_start_925_, lean_object* v_xs_926_, lean_object* v___x_927_, lean_object* v_e_928_, lean_object* v_offset_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_){
_start:
{
uint8_t v_a_boxed_933_; lean_object* v_res_934_; 
v_a_boxed_933_ = lean_unbox(v_a_931_);
v_res_934_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5(v_minIndex_922_, v___x_923_, v___x_924_, v_start_925_, v_xs_926_, v___x_927_, v_e_928_, v_offset_929_, v_a_930_, v_a_boxed_933_, v_a_932_);
lean_dec_ref(v___x_927_);
lean_dec_ref(v_xs_926_);
lean_dec(v_start_925_);
lean_dec(v___x_924_);
lean_dec(v_minIndex_922_);
return v_res_934_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_abstractFVarsRange___redArg___closed__0(void){
_start:
{
lean_object* v___x_935_; 
v___x_935_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_abstractFVarsRange_spec__0(lean_box(0));
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_abstractFVarsRange___redArg(lean_object* v_e_936_, lean_object* v_start_937_, lean_object* v_xs_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_){
_start:
{
uint8_t v___x_943_; 
v___x_943_ = l_Lean_Expr_hasFVar(v_e_936_);
if (v___x_943_ == 0)
{
lean_object* v___x_944_; 
v___x_944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_944_, 0, v_e_936_);
return v___x_944_;
}
else
{
lean_object* v___x_945_; uint8_t v___x_946_; 
v___x_945_ = lean_array_get_size(v_xs_938_);
v___x_946_ = lean_nat_dec_lt(v_start_937_, v___x_945_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; 
v___x_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_947_, 0, v_e_936_);
return v___x_947_;
}
else
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v_share_952_; lean_object* v_maxFVar_953_; lean_object* v_proofInstInfo_954_; lean_object* v_inferType_955_; lean_object* v_getLevel_956_; lean_object* v_congrInfo_957_; lean_object* v_defEqI_958_; lean_object* v_extensions_959_; lean_object* v_issues_960_; lean_object* v_canon_961_; uint8_t v_debug_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_1048_; 
v___x_948_ = lean_st_ref_get(v_a_941_);
lean_dec(v___x_948_);
v___x_949_ = lean_st_ref_get(v_a_939_);
v___x_950_ = lean_st_ref_get(v_a_941_);
lean_dec(v___x_950_);
v___x_951_ = lean_st_ref_take(v_a_939_);
v_share_952_ = lean_ctor_get(v___x_951_, 0);
v_maxFVar_953_ = lean_ctor_get(v___x_951_, 1);
v_proofInstInfo_954_ = lean_ctor_get(v___x_951_, 2);
v_inferType_955_ = lean_ctor_get(v___x_951_, 3);
v_getLevel_956_ = lean_ctor_get(v___x_951_, 4);
v_congrInfo_957_ = lean_ctor_get(v___x_951_, 5);
v_defEqI_958_ = lean_ctor_get(v___x_951_, 6);
v_extensions_959_ = lean_ctor_get(v___x_951_, 7);
v_issues_960_ = lean_ctor_get(v___x_951_, 8);
v_canon_961_ = lean_ctor_get(v___x_951_, 9);
v_debug_962_ = lean_ctor_get_uint8(v___x_951_, sizeof(void*)*10);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_964_ = v___x_951_;
v_isShared_965_ = v_isSharedCheck_1048_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_canon_961_);
lean_inc(v_issues_960_);
lean_inc(v_extensions_959_);
lean_inc(v_defEqI_958_);
lean_inc(v_congrInfo_957_);
lean_inc(v_getLevel_956_);
lean_inc(v_inferType_955_);
lean_inc(v_proofInstInfo_954_);
lean_inc(v_maxFVar_953_);
lean_inc(v_share_952_);
lean_dec(v___x_951_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_1048_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_966_; lean_object* v___x_968_; 
v___x_966_ = lean_obj_once(&l_Lean_Meta_Sym_abstractFVarsRange___redArg___closed__0, &l_Lean_Meta_Sym_abstractFVarsRange___redArg___closed__0_once, _init_l_Lean_Meta_Sym_abstractFVarsRange___redArg___closed__0);
if (v_isShared_965_ == 0)
{
lean_ctor_set(v___x_964_, 0, v___x_966_);
v___x_968_ = v___x_964_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v___x_966_);
lean_ctor_set(v_reuseFailAlloc_1047_, 1, v_maxFVar_953_);
lean_ctor_set(v_reuseFailAlloc_1047_, 2, v_proofInstInfo_954_);
lean_ctor_set(v_reuseFailAlloc_1047_, 3, v_inferType_955_);
lean_ctor_set(v_reuseFailAlloc_1047_, 4, v_getLevel_956_);
lean_ctor_set(v_reuseFailAlloc_1047_, 5, v_congrInfo_957_);
lean_ctor_set(v_reuseFailAlloc_1047_, 6, v_defEqI_958_);
lean_ctor_set(v_reuseFailAlloc_1047_, 7, v_extensions_959_);
lean_ctor_set(v_reuseFailAlloc_1047_, 8, v_issues_960_);
lean_ctor_set(v_reuseFailAlloc_1047_, 9, v_canon_961_);
lean_ctor_set_uint8(v_reuseFailAlloc_1047_, sizeof(void*)*10, v_debug_962_);
v___x_968_ = v_reuseFailAlloc_1047_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v_fst_973_; lean_object* v_snd_974_; lean_object* v_lctx_997_; lean_object* v_maxFVar_998_; uint8_t v_debug_999_; lean_object* v___y_1001_; lean_object* v___y_1002_; lean_object* v_snd_1003_; lean_object* v___y_1011_; lean_object* v___y_1012_; lean_object* v___y_1013_; lean_object* v___y_1017_; lean_object* v___y_1018_; lean_object* v___y_1019_; lean_object* v___y_1025_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_969_ = lean_st_ref_set(v_a_939_, v___x_968_);
v___x_970_ = lean_st_ref_get(v_a_941_);
lean_dec(v___x_970_);
v___x_971_ = lean_st_ref_get(v_a_939_);
v_lctx_997_ = lean_ctor_get(v_a_940_, 2);
v_maxFVar_998_ = lean_ctor_get(v___x_949_, 1);
lean_inc_ref(v_maxFVar_998_);
lean_dec(v___x_949_);
v_debug_999_ = lean_ctor_get_uint8(v___x_971_, sizeof(void*)*10);
lean_dec(v___x_971_);
v___x_1041_ = lean_array_fget_borrowed(v_xs_938_, v_start_937_);
v___x_1042_ = l_Lean_Expr_fvarId_x21(v___x_1041_);
lean_inc_ref(v_lctx_997_);
v___x_1043_ = lean_local_ctx_find(v_lctx_997_, v___x_1042_);
if (lean_obj_tag(v___x_1043_) == 0)
{
lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1044_ = lean_obj_once(&l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3, &l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3_once, _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3);
v___x_1045_ = l_panic___at___00Lean_Meta_Sym_abstractFVarsRange_spec__1(v___x_1044_);
v___y_1025_ = v___x_1045_;
goto v___jp_1024_;
}
else
{
lean_object* v_val_1046_; 
v_val_1046_ = lean_ctor_get(v___x_1043_, 0);
lean_inc(v_val_1046_);
lean_dec_ref(v___x_1043_);
v___y_1025_ = v_val_1046_;
goto v___jp_1024_;
}
v___jp_972_:
{
lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v_maxFVar_977_; lean_object* v_proofInstInfo_978_; lean_object* v_inferType_979_; lean_object* v_getLevel_980_; lean_object* v_congrInfo_981_; lean_object* v_defEqI_982_; lean_object* v_extensions_983_; lean_object* v_issues_984_; lean_object* v_canon_985_; uint8_t v_debug_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_995_; 
v___x_975_ = lean_st_ref_get(v_a_941_);
lean_dec(v___x_975_);
v___x_976_ = lean_st_ref_take(v_a_939_);
v_maxFVar_977_ = lean_ctor_get(v___x_976_, 1);
v_proofInstInfo_978_ = lean_ctor_get(v___x_976_, 2);
v_inferType_979_ = lean_ctor_get(v___x_976_, 3);
v_getLevel_980_ = lean_ctor_get(v___x_976_, 4);
v_congrInfo_981_ = lean_ctor_get(v___x_976_, 5);
v_defEqI_982_ = lean_ctor_get(v___x_976_, 6);
v_extensions_983_ = lean_ctor_get(v___x_976_, 7);
v_issues_984_ = lean_ctor_get(v___x_976_, 8);
v_canon_985_ = lean_ctor_get(v___x_976_, 9);
v_debug_986_ = lean_ctor_get_uint8(v___x_976_, sizeof(void*)*10);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_995_ == 0)
{
lean_object* v_unused_996_; 
v_unused_996_ = lean_ctor_get(v___x_976_, 0);
lean_dec(v_unused_996_);
v___x_988_ = v___x_976_;
v_isShared_989_ = v_isSharedCheck_995_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_canon_985_);
lean_inc(v_issues_984_);
lean_inc(v_extensions_983_);
lean_inc(v_defEqI_982_);
lean_inc(v_congrInfo_981_);
lean_inc(v_getLevel_980_);
lean_inc(v_inferType_979_);
lean_inc(v_proofInstInfo_978_);
lean_inc(v_maxFVar_977_);
lean_dec(v___x_976_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_995_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_991_; 
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 0, v_snd_974_);
v___x_991_ = v___x_988_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_snd_974_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v_maxFVar_977_);
lean_ctor_set(v_reuseFailAlloc_994_, 2, v_proofInstInfo_978_);
lean_ctor_set(v_reuseFailAlloc_994_, 3, v_inferType_979_);
lean_ctor_set(v_reuseFailAlloc_994_, 4, v_getLevel_980_);
lean_ctor_set(v_reuseFailAlloc_994_, 5, v_congrInfo_981_);
lean_ctor_set(v_reuseFailAlloc_994_, 6, v_defEqI_982_);
lean_ctor_set(v_reuseFailAlloc_994_, 7, v_extensions_983_);
lean_ctor_set(v_reuseFailAlloc_994_, 8, v_issues_984_);
lean_ctor_set(v_reuseFailAlloc_994_, 9, v_canon_985_);
lean_ctor_set_uint8(v_reuseFailAlloc_994_, sizeof(void*)*10, v_debug_986_);
v___x_991_ = v_reuseFailAlloc_994_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = lean_st_ref_set(v_a_939_, v___x_991_);
v___x_993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_993_, 0, v_fst_973_);
return v___x_993_;
}
}
}
v___jp_1000_:
{
switch(lean_obj_tag(v_e_936_))
{
case 9:
{
lean_dec(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec_ref(v_maxFVar_998_);
v_fst_973_ = v_e_936_;
v_snd_974_ = v_snd_1003_;
goto v___jp_972_;
}
case 2:
{
lean_dec(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec_ref(v_maxFVar_998_);
v_fst_973_ = v_e_936_;
v_snd_974_ = v_snd_1003_;
goto v___jp_972_;
}
case 0:
{
lean_dec(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec_ref(v_maxFVar_998_);
v_fst_973_ = v_e_936_;
v_snd_974_ = v_snd_1003_;
goto v___jp_972_;
}
case 1:
{
lean_dec(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec_ref(v_maxFVar_998_);
v_fst_973_ = v_e_936_;
v_snd_974_ = v_snd_1003_;
goto v___jp_972_;
}
case 4:
{
lean_dec(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec_ref(v_maxFVar_998_);
v_fst_973_ = v_e_936_;
v_snd_974_ = v_snd_1003_;
goto v___jp_972_;
}
case 3:
{
lean_dec(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec_ref(v_maxFVar_998_);
v_fst_973_ = v_e_936_;
v_snd_974_ = v_snd_1003_;
goto v___jp_972_;
}
default: 
{
lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v_fst_1007_; lean_object* v_snd_1008_; lean_object* v_fst_1009_; 
v___x_1004_ = lean_obj_once(&l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___closed__0, &l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___closed__0_once, _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___closed__0);
lean_inc(v___y_1002_);
v___x_1005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___y_1002_);
lean_ctor_set(v___x_1005_, 1, v___x_1004_);
lean_inc_ref(v_lctx_997_);
v___x_1006_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5(v___y_1001_, v_lctx_997_, v___x_945_, v_start_937_, v_xs_938_, v_maxFVar_998_, v_e_936_, v___y_1002_, v___x_1005_, v_debug_999_, v_snd_1003_);
lean_dec_ref(v_maxFVar_998_);
lean_dec(v___y_1001_);
v_fst_1007_ = lean_ctor_get(v___x_1006_, 0);
lean_inc(v_fst_1007_);
v_snd_1008_ = lean_ctor_get(v___x_1006_, 1);
lean_inc(v_snd_1008_);
lean_dec_ref(v___x_1006_);
v_fst_1009_ = lean_ctor_get(v_fst_1007_, 0);
lean_inc(v_fst_1009_);
lean_dec(v_fst_1007_);
v_fst_973_ = v_fst_1009_;
v_snd_974_ = v_snd_1008_;
goto v___jp_972_;
}
}
}
v___jp_1010_:
{
lean_object* v_maxIndex_1014_; uint8_t v___x_1015_; 
v_maxIndex_1014_ = l_Lean_LocalDecl_index(v___y_1013_);
lean_dec_ref(v___y_1013_);
v___x_1015_ = lean_nat_dec_lt(v_maxIndex_1014_, v___y_1012_);
lean_dec(v_maxIndex_1014_);
if (v___x_1015_ == 0)
{
v___y_1001_ = v___y_1012_;
v___y_1002_ = v___y_1011_;
v_snd_1003_ = v_share_952_;
goto v___jp_1000_;
}
else
{
lean_dec(v___y_1012_);
lean_dec(v___y_1011_);
lean_dec_ref(v_maxFVar_998_);
v_fst_973_ = v_e_936_;
v_snd_974_ = v_share_952_;
goto v___jp_972_;
}
}
v___jp_1016_:
{
lean_object* v___x_1020_; 
lean_inc_ref(v_lctx_997_);
v___x_1020_ = lean_local_ctx_find(v_lctx_997_, v___y_1019_);
if (lean_obj_tag(v___x_1020_) == 0)
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = lean_obj_once(&l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3, &l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3_once, _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3);
v___x_1022_ = l_panic___at___00Lean_Meta_Sym_abstractFVarsRange_spec__1(v___x_1021_);
v___y_1011_ = v___y_1018_;
v___y_1012_ = v___y_1017_;
v___y_1013_ = v___x_1022_;
goto v___jp_1010_;
}
else
{
lean_object* v_val_1023_; 
v_val_1023_ = lean_ctor_get(v___x_1020_, 0);
lean_inc(v_val_1023_);
lean_dec_ref(v___x_1020_);
v___y_1011_ = v___y_1018_;
v___y_1012_ = v___y_1017_;
v___y_1013_ = v_val_1023_;
goto v___jp_1010_;
}
}
v___jp_1024_:
{
lean_object* v___x_1026_; 
v___x_1026_ = lean_unsigned_to_nat(0u);
switch(lean_obj_tag(v_e_936_))
{
case 1:
{
lean_object* v_fvarId_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
lean_dec_ref(v___y_1025_);
lean_dec_ref(v_maxFVar_998_);
v_fvarId_1027_ = lean_ctor_get(v_e_936_, 0);
v___x_1028_ = lean_unsigned_to_nat(1u);
v___x_1029_ = lean_nat_sub(v___x_945_, v___x_1028_);
v___x_1030_ = l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsRange_go___redArg(v_start_937_, v_xs_938_, v_fvarId_1027_, v___x_1026_, v___x_1029_);
if (lean_obj_tag(v___x_1030_) == 1)
{
lean_object* v_val_1031_; lean_object* v___x_1032_; lean_object* v_fst_1033_; lean_object* v_snd_1034_; 
lean_dec_ref(v_e_936_);
v_val_1031_ = lean_ctor_get(v___x_1030_, 0);
lean_inc(v_val_1031_);
lean_dec_ref(v___x_1030_);
v___x_1032_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Sym_abstractFVarsRange_spec__2___redArg(v_val_1031_, v_share_952_);
v_fst_1033_ = lean_ctor_get(v___x_1032_, 0);
lean_inc(v_fst_1033_);
v_snd_1034_ = lean_ctor_get(v___x_1032_, 1);
lean_inc(v_snd_1034_);
lean_dec_ref(v___x_1032_);
v_fst_973_ = v_fst_1033_;
v_snd_974_ = v_snd_1034_;
goto v___jp_972_;
}
else
{
lean_dec(v___x_1030_);
v_fst_973_ = v_e_936_;
v_snd_974_ = v_share_952_;
goto v___jp_972_;
}
}
case 9:
{
lean_dec_ref(v___y_1025_);
lean_dec_ref(v_maxFVar_998_);
v_fst_973_ = v_e_936_;
v_snd_974_ = v_share_952_;
goto v___jp_972_;
}
case 2:
{
lean_dec_ref(v___y_1025_);
lean_dec_ref(v_maxFVar_998_);
v_fst_973_ = v_e_936_;
v_snd_974_ = v_share_952_;
goto v___jp_972_;
}
case 0:
{
lean_dec_ref(v___y_1025_);
lean_dec_ref(v_maxFVar_998_);
v_fst_973_ = v_e_936_;
v_snd_974_ = v_share_952_;
goto v___jp_972_;
}
case 4:
{
lean_dec_ref(v___y_1025_);
lean_dec_ref(v_maxFVar_998_);
v_fst_973_ = v_e_936_;
v_snd_974_ = v_share_952_;
goto v___jp_972_;
}
case 3:
{
lean_dec_ref(v___y_1025_);
lean_dec_ref(v_maxFVar_998_);
v_fst_973_ = v_e_936_;
v_snd_974_ = v_share_952_;
goto v___jp_972_;
}
default: 
{
if (v___x_943_ == 0)
{
lean_dec_ref(v___y_1025_);
lean_dec_ref(v_maxFVar_998_);
v_fst_973_ = v_e_936_;
v_snd_974_ = v_share_952_;
goto v___jp_972_;
}
else
{
lean_object* v_minIndex_1035_; lean_object* v___x_1036_; 
v_minIndex_1035_ = l_Lean_LocalDecl_index(v___y_1025_);
lean_dec_ref(v___y_1025_);
v___x_1036_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3___redArg(v_maxFVar_998_, v_e_936_);
if (lean_obj_tag(v___x_1036_) == 1)
{
lean_object* v_val_1037_; 
v_val_1037_ = lean_ctor_get(v___x_1036_, 0);
lean_inc(v_val_1037_);
lean_dec_ref(v___x_1036_);
if (lean_obj_tag(v_val_1037_) == 0)
{
lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1038_ = lean_obj_once(&l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3, &l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3_once, _init_l___private_Lean_Meta_Sym_AbstractS_0__Lean_Meta_Sym_abstractFVarsCore___lam__0___closed__3);
v___x_1039_ = l_panic___at___00Lean_Meta_Sym_abstractFVarsRange_spec__4(v___x_1038_);
v___y_1017_ = v_minIndex_1035_;
v___y_1018_ = v___x_1026_;
v___y_1019_ = v___x_1039_;
goto v___jp_1016_;
}
else
{
lean_object* v_val_1040_; 
v_val_1040_ = lean_ctor_get(v_val_1037_, 0);
lean_inc(v_val_1040_);
lean_dec_ref(v_val_1037_);
v___y_1017_ = v_minIndex_1035_;
v___y_1018_ = v___x_1026_;
v___y_1019_ = v_val_1040_;
goto v___jp_1016_;
}
}
else
{
lean_dec(v___x_1036_);
v___y_1001_ = v_minIndex_1035_;
v___y_1002_ = v___x_1026_;
v_snd_1003_ = v_share_952_;
goto v___jp_1000_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_abstractFVarsRange___redArg___boxed(lean_object* v_e_1049_, lean_object* v_start_1050_, lean_object* v_xs_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_){
_start:
{
lean_object* v_res_1056_; 
v_res_1056_ = l_Lean_Meta_Sym_abstractFVarsRange___redArg(v_e_1049_, v_start_1050_, v_xs_1051_, v_a_1052_, v_a_1053_, v_a_1054_);
lean_dec(v_a_1054_);
lean_dec_ref(v_a_1053_);
lean_dec(v_a_1052_);
lean_dec_ref(v_xs_1051_);
lean_dec(v_start_1050_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_abstractFVarsRange(lean_object* v_e_1057_, lean_object* v_start_1058_, lean_object* v_xs_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = l_Lean_Meta_Sym_abstractFVarsRange___redArg(v_e_1057_, v_start_1058_, v_xs_1059_, v_a_1061_, v_a_1062_, v_a_1065_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_abstractFVarsRange___boxed(lean_object* v_e_1068_, lean_object* v_start_1069_, lean_object* v_xs_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Lean_Meta_Sym_abstractFVarsRange(v_e_1068_, v_start_1069_, v_xs_1070_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_);
lean_dec(v_a_1076_);
lean_dec_ref(v_a_1075_);
lean_dec(v_a_1074_);
lean_dec_ref(v_a_1073_);
lean_dec(v_a_1072_);
lean_dec_ref(v_a_1071_);
lean_dec_ref(v_xs_1070_);
lean_dec(v_start_1069_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3(lean_object* v_00_u03b2_1079_, lean_object* v_x_1080_, lean_object* v_x_1081_){
_start:
{
lean_object* v___x_1082_; 
v___x_1082_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3___redArg(v_x_1080_, v_x_1081_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3___boxed(lean_object* v_00_u03b2_1083_, lean_object* v_x_1084_, lean_object* v_x_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3(v_00_u03b2_1083_, v_x_1084_, v_x_1085_);
lean_dec_ref(v_x_1085_);
lean_dec_ref(v_x_1084_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3(lean_object* v_00_u03b2_1087_, lean_object* v_x_1088_, size_t v_x_1089_, lean_object* v_x_1090_){
_start:
{
lean_object* v___x_1091_; 
v___x_1091_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___redArg(v_x_1088_, v_x_1089_, v_x_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3___boxed(lean_object* v_00_u03b2_1092_, lean_object* v_x_1093_, lean_object* v_x_1094_, lean_object* v_x_1095_){
_start:
{
size_t v_x_27030__boxed_1096_; lean_object* v_res_1097_; 
v_x_27030__boxed_1096_ = lean_unbox_usize(v_x_1094_);
lean_dec(v_x_1094_);
v_res_1097_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3(v_00_u03b2_1092_, v_x_1093_, v_x_27030__boxed_1096_, v_x_1095_);
lean_dec_ref(v_x_1095_);
lean_dec_ref(v_x_1093_);
return v_res_1097_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3_spec__5(lean_object* v_00_u03b2_1098_, lean_object* v_keys_1099_, lean_object* v_vals_1100_, lean_object* v_heq_1101_, lean_object* v_i_1102_, lean_object* v_k_1103_){
_start:
{
lean_object* v___x_1104_; 
v___x_1104_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3_spec__5___redArg(v_keys_1099_, v_vals_1100_, v_i_1102_, v_k_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3_spec__5___boxed(lean_object* v_00_u03b2_1105_, lean_object* v_keys_1106_, lean_object* v_vals_1107_, lean_object* v_heq_1108_, lean_object* v_i_1109_, lean_object* v_k_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_abstractFVarsRange_spec__3_spec__3_spec__5(v_00_u03b2_1105_, v_keys_1106_, v_vals_1107_, v_heq_1108_, v_i_1109_, v_k_1110_);
lean_dec_ref(v_k_1110_);
lean_dec_ref(v_vals_1107_);
lean_dec_ref(v_keys_1106_);
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8(lean_object* v_00_u03b2_1112_, lean_object* v_m_1113_, lean_object* v_a_1114_){
_start:
{
lean_object* v___x_1115_; 
v___x_1115_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8___redArg(v_m_1113_, v_a_1114_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8___boxed(lean_object* v_00_u03b2_1116_, lean_object* v_m_1117_, lean_object* v_a_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8(v_00_u03b2_1116_, v_m_1117_, v_a_1118_);
lean_dec_ref(v_a_1118_);
lean_dec_ref(v_m_1117_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8_spec__16(lean_object* v_00_u03b2_1120_, lean_object* v_a_1121_, lean_object* v_x_1122_){
_start:
{
lean_object* v___x_1123_; 
v___x_1123_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8_spec__16___redArg(v_a_1121_, v_x_1122_);
return v___x_1123_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8_spec__16___boxed(lean_object* v_00_u03b2_1124_, lean_object* v_a_1125_, lean_object* v_x_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00Lean_Meta_Sym_abstractFVarsRange_spec__5_spec__6_spec__8_spec__16(v_00_u03b2_1124_, v_a_1125_, v_x_1126_);
lean_dec(v_x_1126_);
lean_dec_ref(v_a_1125_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_abstractFVars___redArg(lean_object* v_e_1128_, lean_object* v_xs_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_){
_start:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1134_ = lean_unsigned_to_nat(0u);
v___x_1135_ = l_Lean_Meta_Sym_abstractFVarsRange___redArg(v_e_1128_, v___x_1134_, v_xs_1129_, v_a_1130_, v_a_1131_, v_a_1132_);
return v___x_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_abstractFVars___redArg___boxed(lean_object* v_e_1136_, lean_object* v_xs_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_Lean_Meta_Sym_abstractFVars___redArg(v_e_1136_, v_xs_1137_, v_a_1138_, v_a_1139_, v_a_1140_);
lean_dec(v_a_1140_);
lean_dec_ref(v_a_1139_);
lean_dec(v_a_1138_);
lean_dec_ref(v_xs_1137_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_abstractFVars(lean_object* v_e_1143_, lean_object* v_xs_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_){
_start:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1152_ = lean_unsigned_to_nat(0u);
v___x_1153_ = l_Lean_Meta_Sym_abstractFVarsRange___redArg(v_e_1143_, v___x_1152_, v_xs_1144_, v_a_1146_, v_a_1147_, v_a_1150_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_abstractFVars___boxed(lean_object* v_e_1154_, lean_object* v_xs_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = l_Lean_Meta_Sym_abstractFVars(v_e_1154_, v_xs_1155_, v_a_1156_, v_a_1157_, v_a_1158_, v_a_1159_, v_a_1160_, v_a_1161_);
lean_dec(v_a_1161_);
lean_dec_ref(v_a_1160_);
lean_dec(v_a_1159_);
lean_dec_ref(v_a_1158_);
lean_dec(v_a_1157_);
lean_dec_ref(v_a_1156_);
lean_dec_ref(v_xs_1155_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__0(lean_object* v_x_1164_, uint8_t v_bi_1165_, lean_object* v_t_1166_, lean_object* v_b_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
lean_object* v___y_1176_; lean_object* v___y_1177_; lean_object* v___x_1180_; lean_object* v___x_1181_; uint8_t v_debug_1182_; 
v___x_1180_ = lean_st_ref_get(v___y_1173_);
lean_dec(v___x_1180_);
v___x_1181_ = lean_st_ref_get(v___y_1169_);
v_debug_1182_ = lean_ctor_get_uint8(v___x_1181_, sizeof(void*)*10);
lean_dec(v___x_1181_);
if (v_debug_1182_ == 0)
{
v___y_1176_ = v___y_1169_;
v___y_1177_ = v___y_1173_;
goto v___jp_1175_;
}
else
{
lean_object* v___x_1183_; 
lean_inc_ref(v_t_1166_);
v___x_1183_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_1166_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1183_) == 0)
{
lean_object* v___x_1184_; 
lean_dec_ref(v___x_1183_);
lean_inc_ref(v_b_1167_);
v___x_1184_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1184_) == 0)
{
lean_dec_ref(v___x_1184_);
v___y_1176_ = v___y_1169_;
v___y_1177_ = v___y_1173_;
goto v___jp_1175_;
}
else
{
lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1192_; 
lean_dec_ref(v_b_1167_);
lean_dec_ref(v_t_1166_);
lean_dec(v_x_1164_);
v_a_1185_ = lean_ctor_get(v___x_1184_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1187_ = v___x_1184_;
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_dec(v___x_1184_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1190_; 
if (v_isShared_1188_ == 0)
{
v___x_1190_ = v___x_1187_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_a_1185_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
else
{
lean_object* v_a_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1200_; 
lean_dec_ref(v_b_1167_);
lean_dec_ref(v_t_1166_);
lean_dec(v_x_1164_);
v_a_1193_ = lean_ctor_get(v___x_1183_, 0);
v_isSharedCheck_1200_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1195_ = v___x_1183_;
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_a_1193_);
lean_dec(v___x_1183_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1198_; 
if (v_isShared_1196_ == 0)
{
v___x_1198_ = v___x_1195_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v_a_1193_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
return v___x_1198_;
}
}
}
}
v___jp_1175_:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1178_ = l_Lean_Expr_lam___override(v_x_1164_, v_t_1166_, v_b_1167_, v_bi_1165_);
v___x_1179_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_1178_, v___y_1176_, v___y_1177_);
return v___x_1179_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__0___boxed(lean_object* v_x_1201_, lean_object* v_bi_1202_, lean_object* v_t_1203_, lean_object* v_b_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_){
_start:
{
uint8_t v_bi_boxed_1212_; lean_object* v_res_1213_; 
v_bi_boxed_1212_ = lean_unbox(v_bi_1202_);
v_res_1213_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__0(v_x_1201_, v_bi_boxed_1212_, v_t_1203_, v_b_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_);
lean_dec(v___y_1210_);
lean_dec_ref(v___y_1209_);
lean_dec(v___y_1208_);
lean_dec_ref(v___y_1207_);
lean_dec(v___y_1206_);
lean_dec_ref(v___y_1205_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__1___redArg(lean_object* v_xs_1214_, lean_object* v_i_1215_, lean_object* v_a_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v_zero_1224_; uint8_t v_isZero_1225_; 
v_zero_1224_ = lean_unsigned_to_nat(0u);
v_isZero_1225_ = lean_nat_dec_eq(v_i_1215_, v_zero_1224_);
if (v_isZero_1225_ == 1)
{
lean_object* v___x_1226_; 
lean_dec(v_i_1215_);
v___x_1226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1226_, 0, v_a_1216_);
return v___x_1226_;
}
else
{
lean_object* v_one_1227_; lean_object* v_n_1228_; lean_object* v___y_1230_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
v_one_1227_ = lean_unsigned_to_nat(1u);
v_n_1228_ = lean_nat_sub(v_i_1215_, v_one_1227_);
lean_dec(v_i_1215_);
v___x_1233_ = lean_array_fget_borrowed(v_xs_1214_, v_n_1228_);
v___x_1234_ = l_Lean_Expr_fvarId_x21(v___x_1233_);
v___x_1235_ = l_Lean_FVarId_getDecl___redArg(v___x_1234_, v___y_1219_, v___y_1221_, v___y_1222_);
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v_a_1239_; lean_object* v___x_1240_; uint8_t v___x_1241_; lean_object* v___x_1242_; 
v_a_1236_ = lean_ctor_get(v___x_1235_, 0);
lean_inc(v_a_1236_);
lean_dec_ref(v___x_1235_);
v___x_1237_ = l_Lean_LocalDecl_type(v_a_1236_);
v___x_1238_ = l_Lean_Meta_Sym_abstractFVarsRange___redArg(v___x_1237_, v_n_1228_, v_xs_1214_, v___y_1218_, v___y_1219_, v___y_1222_);
v_a_1239_ = lean_ctor_get(v___x_1238_, 0);
lean_inc(v_a_1239_);
lean_dec_ref(v___x_1238_);
v___x_1240_ = l_Lean_LocalDecl_userName(v_a_1236_);
v___x_1241_ = l_Lean_LocalDecl_binderInfo(v_a_1236_);
lean_dec(v_a_1236_);
v___x_1242_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__0(v___x_1240_, v___x_1241_, v_a_1239_, v_a_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_);
v___y_1230_ = v___x_1242_;
goto v___jp_1229_;
}
else
{
lean_object* v_a_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1250_; 
lean_dec(v_n_1228_);
lean_dec_ref(v_a_1216_);
v_a_1243_ = lean_ctor_get(v___x_1235_, 0);
v_isSharedCheck_1250_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1245_ = v___x_1235_;
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_a_1243_);
lean_dec(v___x_1235_);
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
v___jp_1229_:
{
if (lean_obj_tag(v___y_1230_) == 0)
{
lean_object* v_a_1231_; 
v_a_1231_ = lean_ctor_get(v___y_1230_, 0);
lean_inc(v_a_1231_);
lean_dec_ref(v___y_1230_);
v_i_1215_ = v_n_1228_;
v_a_1216_ = v_a_1231_;
goto _start;
}
else
{
lean_dec(v_n_1228_);
return v___y_1230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__1___redArg___boxed(lean_object* v_xs_1251_, lean_object* v_i_1252_, lean_object* v_a_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__1___redArg(v_xs_1251_, v_i_1252_, v_a_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_);
lean_dec(v___y_1259_);
lean_dec_ref(v___y_1258_);
lean_dec(v___y_1257_);
lean_dec_ref(v___y_1256_);
lean_dec(v___y_1255_);
lean_dec_ref(v___y_1254_);
lean_dec_ref(v_xs_1251_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkLambdaFVarsS(lean_object* v_xs_1262_, lean_object* v_e_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_, lean_object* v_a_1269_){
_start:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v_a_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1271_ = lean_unsigned_to_nat(0u);
v___x_1272_ = l_Lean_Meta_Sym_abstractFVarsRange___redArg(v_e_1263_, v___x_1271_, v_xs_1262_, v_a_1265_, v_a_1266_, v_a_1269_);
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
lean_inc(v_a_1273_);
lean_dec_ref(v___x_1272_);
v___x_1274_ = lean_array_get_size(v_xs_1262_);
v___x_1275_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__1___redArg(v_xs_1262_, v___x_1274_, v_a_1273_, v_a_1264_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
return v___x_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkLambdaFVarsS___boxed(lean_object* v_xs_1276_, lean_object* v_e_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_){
_start:
{
lean_object* v_res_1285_; 
v_res_1285_ = l_Lean_Meta_Sym_mkLambdaFVarsS(v_xs_1276_, v_e_1277_, v_a_1278_, v_a_1279_, v_a_1280_, v_a_1281_, v_a_1282_, v_a_1283_);
lean_dec(v_a_1283_);
lean_dec_ref(v_a_1282_);
lean_dec(v_a_1281_);
lean_dec_ref(v_a_1280_);
lean_dec(v_a_1279_);
lean_dec_ref(v_a_1278_);
lean_dec_ref(v_xs_1276_);
return v_res_1285_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__1(lean_object* v_xs_1286_, lean_object* v_n_1287_, lean_object* v_i_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__1___redArg(v_xs_1286_, v_i_1288_, v_a_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__1___boxed(lean_object* v_xs_1299_, lean_object* v_n_1300_, lean_object* v_i_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_){
_start:
{
lean_object* v_res_1311_; 
v_res_1311_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkLambdaFVarsS_spec__1(v_xs_1299_, v_n_1300_, v_i_1301_, v_a_1302_, v_a_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
lean_dec(v___y_1307_);
lean_dec_ref(v___y_1306_);
lean_dec(v___y_1305_);
lean_dec_ref(v___y_1304_);
lean_dec(v_n_1300_);
lean_dec_ref(v_xs_1299_);
return v_res_1311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_mkForallFVarsS_spec__0(lean_object* v_x_1312_, uint8_t v_bi_1313_, lean_object* v_t_1314_, lean_object* v_b_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_){
_start:
{
lean_object* v___y_1324_; lean_object* v___y_1325_; lean_object* v___x_1328_; lean_object* v___x_1329_; uint8_t v_debug_1330_; 
v___x_1328_ = lean_st_ref_get(v___y_1321_);
lean_dec(v___x_1328_);
v___x_1329_ = lean_st_ref_get(v___y_1317_);
v_debug_1330_ = lean_ctor_get_uint8(v___x_1329_, sizeof(void*)*10);
lean_dec(v___x_1329_);
if (v_debug_1330_ == 0)
{
v___y_1324_ = v___y_1317_;
v___y_1325_ = v___y_1321_;
goto v___jp_1323_;
}
else
{
lean_object* v___x_1331_; 
lean_inc_ref(v_t_1314_);
v___x_1331_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_1314_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_);
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_object* v___x_1332_; 
lean_dec_ref(v___x_1331_);
lean_inc_ref(v_b_1315_);
v___x_1332_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_);
if (lean_obj_tag(v___x_1332_) == 0)
{
lean_dec_ref(v___x_1332_);
v___y_1324_ = v___y_1317_;
v___y_1325_ = v___y_1321_;
goto v___jp_1323_;
}
else
{
lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1340_; 
lean_dec_ref(v_b_1315_);
lean_dec_ref(v_t_1314_);
lean_dec(v_x_1312_);
v_a_1333_ = lean_ctor_get(v___x_1332_, 0);
v_isSharedCheck_1340_ = !lean_is_exclusive(v___x_1332_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1335_ = v___x_1332_;
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_dec(v___x_1332_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1338_; 
if (v_isShared_1336_ == 0)
{
v___x_1338_ = v___x_1335_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_a_1333_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
}
else
{
lean_object* v_a_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1348_; 
lean_dec_ref(v_b_1315_);
lean_dec_ref(v_t_1314_);
lean_dec(v_x_1312_);
v_a_1341_ = lean_ctor_get(v___x_1331_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1343_ = v___x_1331_;
v_isShared_1344_ = v_isSharedCheck_1348_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_a_1341_);
lean_dec(v___x_1331_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1348_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v___x_1346_; 
if (v_isShared_1344_ == 0)
{
v___x_1346_ = v___x_1343_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v_a_1341_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
return v___x_1346_;
}
}
}
}
v___jp_1323_:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1326_ = l_Lean_Expr_forallE___override(v_x_1312_, v_t_1314_, v_b_1315_, v_bi_1313_);
v___x_1327_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_1326_, v___y_1324_, v___y_1325_);
return v___x_1327_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_mkForallFVarsS_spec__0___boxed(lean_object* v_x_1349_, lean_object* v_bi_1350_, lean_object* v_t_1351_, lean_object* v_b_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_){
_start:
{
uint8_t v_bi_boxed_1360_; lean_object* v_res_1361_; 
v_bi_boxed_1360_ = lean_unbox(v_bi_1350_);
v_res_1361_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_mkForallFVarsS_spec__0(v_x_1349_, v_bi_boxed_1360_, v_t_1351_, v_b_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
lean_dec(v___y_1358_);
lean_dec_ref(v___y_1357_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkForallFVarsS_spec__1___redArg(lean_object* v_xs_1362_, lean_object* v_i_1363_, lean_object* v_a_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_){
_start:
{
lean_object* v_zero_1372_; uint8_t v_isZero_1373_; 
v_zero_1372_ = lean_unsigned_to_nat(0u);
v_isZero_1373_ = lean_nat_dec_eq(v_i_1363_, v_zero_1372_);
if (v_isZero_1373_ == 1)
{
lean_object* v___x_1374_; 
lean_dec(v_i_1363_);
v___x_1374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1374_, 0, v_a_1364_);
return v___x_1374_;
}
else
{
lean_object* v_one_1375_; lean_object* v_n_1376_; lean_object* v___y_1378_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
v_one_1375_ = lean_unsigned_to_nat(1u);
v_n_1376_ = lean_nat_sub(v_i_1363_, v_one_1375_);
lean_dec(v_i_1363_);
v___x_1381_ = lean_array_fget_borrowed(v_xs_1362_, v_n_1376_);
v___x_1382_ = l_Lean_Expr_fvarId_x21(v___x_1381_);
v___x_1383_ = l_Lean_FVarId_getDecl___redArg(v___x_1382_, v___y_1367_, v___y_1369_, v___y_1370_);
if (lean_obj_tag(v___x_1383_) == 0)
{
lean_object* v_a_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v_a_1387_; lean_object* v___x_1388_; uint8_t v___x_1389_; lean_object* v___x_1390_; 
v_a_1384_ = lean_ctor_get(v___x_1383_, 0);
lean_inc(v_a_1384_);
lean_dec_ref(v___x_1383_);
v___x_1385_ = l_Lean_LocalDecl_type(v_a_1384_);
v___x_1386_ = l_Lean_Meta_Sym_abstractFVarsRange___redArg(v___x_1385_, v_n_1376_, v_xs_1362_, v___y_1366_, v___y_1367_, v___y_1370_);
v_a_1387_ = lean_ctor_get(v___x_1386_, 0);
lean_inc(v_a_1387_);
lean_dec_ref(v___x_1386_);
v___x_1388_ = l_Lean_LocalDecl_userName(v_a_1384_);
v___x_1389_ = l_Lean_LocalDecl_binderInfo(v_a_1384_);
lean_dec(v_a_1384_);
v___x_1390_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_mkForallFVarsS_spec__0(v___x_1388_, v___x_1389_, v_a_1387_, v_a_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_);
v___y_1378_ = v___x_1390_;
goto v___jp_1377_;
}
else
{
lean_object* v_a_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1398_; 
lean_dec(v_n_1376_);
lean_dec_ref(v_a_1364_);
v_a_1391_ = lean_ctor_get(v___x_1383_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1393_ = v___x_1383_;
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_a_1391_);
lean_dec(v___x_1383_);
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
v___jp_1377_:
{
if (lean_obj_tag(v___y_1378_) == 0)
{
lean_object* v_a_1379_; 
v_a_1379_ = lean_ctor_get(v___y_1378_, 0);
lean_inc(v_a_1379_);
lean_dec_ref(v___y_1378_);
v_i_1363_ = v_n_1376_;
v_a_1364_ = v_a_1379_;
goto _start;
}
else
{
lean_dec(v_n_1376_);
return v___y_1378_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkForallFVarsS_spec__1___redArg___boxed(lean_object* v_xs_1399_, lean_object* v_i_1400_, lean_object* v_a_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
lean_object* v_res_1409_; 
v_res_1409_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkForallFVarsS_spec__1___redArg(v_xs_1399_, v_i_1400_, v_a_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec(v___y_1405_);
lean_dec_ref(v___y_1404_);
lean_dec(v___y_1403_);
lean_dec_ref(v___y_1402_);
lean_dec_ref(v_xs_1399_);
return v_res_1409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkForallFVarsS(lean_object* v_xs_1410_, lean_object* v_e_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_, lean_object* v_a_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_, lean_object* v_a_1417_){
_start:
{
lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v_a_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; 
v___x_1419_ = lean_unsigned_to_nat(0u);
v___x_1420_ = l_Lean_Meta_Sym_abstractFVarsRange___redArg(v_e_1411_, v___x_1419_, v_xs_1410_, v_a_1413_, v_a_1414_, v_a_1417_);
v_a_1421_ = lean_ctor_get(v___x_1420_, 0);
lean_inc(v_a_1421_);
lean_dec_ref(v___x_1420_);
v___x_1422_ = lean_array_get_size(v_xs_1410_);
v___x_1423_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkForallFVarsS_spec__1___redArg(v_xs_1410_, v___x_1422_, v_a_1421_, v_a_1412_, v_a_1413_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_);
return v___x_1423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkForallFVarsS___boxed(lean_object* v_xs_1424_, lean_object* v_e_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l_Lean_Meta_Sym_mkForallFVarsS(v_xs_1424_, v_e_1425_, v_a_1426_, v_a_1427_, v_a_1428_, v_a_1429_, v_a_1430_, v_a_1431_);
lean_dec(v_a_1431_);
lean_dec_ref(v_a_1430_);
lean_dec(v_a_1429_);
lean_dec_ref(v_a_1428_);
lean_dec(v_a_1427_);
lean_dec_ref(v_a_1426_);
lean_dec_ref(v_xs_1424_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkForallFVarsS_spec__1(lean_object* v_xs_1434_, lean_object* v_n_1435_, lean_object* v_i_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_){
_start:
{
lean_object* v___x_1446_; 
v___x_1446_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkForallFVarsS_spec__1___redArg(v_xs_1434_, v_i_1436_, v_a_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_);
return v___x_1446_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkForallFVarsS_spec__1___boxed(lean_object* v_xs_1447_, lean_object* v_n_1448_, lean_object* v_i_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_){
_start:
{
lean_object* v_res_1459_; 
v_res_1459_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_Sym_mkForallFVarsS_spec__1(v_xs_1447_, v_n_1448_, v_i_1449_, v_a_1450_, v_a_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
lean_dec(v___y_1457_);
lean_dec_ref(v___y_1456_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
lean_dec(v_n_1448_);
lean_dec_ref(v_xs_1447_);
return v_res_1459_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_ReplaceS(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_AbstractS(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_ReplaceS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_AbstractS(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_ReplaceS(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_AbstractS(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_ReplaceS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AbstractS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_AbstractS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_AbstractS(builtin);
}
#ifdef __cplusplus
}
#endif
