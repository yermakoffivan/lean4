// Lean compiler output
// Module: Lean.Meta.BinderNameHint
// Imports: public import Lean.Meta.Basic
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_Core_instInhabitedCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
static lean_once_cell_t l_Lean_Expr_hasBinderNameHint___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_hasBinderNameHint___lam__0___closed__0;
static lean_once_cell_t l_Lean_Expr_hasBinderNameHint___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_hasBinderNameHint___lam__0___closed__1;
LEAN_EXPORT uint8_t l_Lean_Expr_hasBinderNameHint___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasBinderNameHint___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Expr_hasBinderNameHint___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_hasBinderNameHint___closed__0;
LEAN_EXPORT uint8_t l_Lean_Expr_hasBinderNameHint(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasBinderNameHint___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_enterScope(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0;
static lean_once_cell_t l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__1;
static lean_once_cell_t l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__2;
static lean_once_cell_t l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_rememberName_spec__0(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__0;
static lean_once_cell_t l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__1;
static lean_once_cell_t l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__0;
static lean_once_cell_t l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__0;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__1;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__2;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__3;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__4;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__1;
static lean_once_cell_t l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_resolveBinderNameHint___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_resolveBinderNameHint___closed__0;
static lean_once_cell_t l_Lean_Expr_resolveBinderNameHint___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_resolveBinderNameHint___closed__1;
static lean_once_cell_t l_Lean_Expr_resolveBinderNameHint___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_resolveBinderNameHint___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_resolveBinderNameHint(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_resolveBinderNameHint___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Expr_hasBinderNameHint___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("binderNameHint", 14, 14);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Expr_hasBinderNameHint___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_Expr_hasBinderNameHint___lam__0___closed__0, &l_Lean_Expr_hasBinderNameHint___lam__0___closed__0_once, _init_l_Lean_Expr_hasBinderNameHint___lam__0___closed__0);
v___x_3_ = l_Lean_Name_mkStr1(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_hasBinderNameHint___lam__0(lean_object* v_e_4_){
_start:
{
lean_object* v___x_5_; uint8_t v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Expr_hasBinderNameHint___lam__0___closed__1, &l_Lean_Expr_hasBinderNameHint___lam__0___closed__1_once, _init_l_Lean_Expr_hasBinderNameHint___lam__0___closed__1);
v___x_6_ = l_Lean_Expr_isConstOf(v_e_4_, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasBinderNameHint___lam__0___boxed(lean_object* v_e_7_){
_start:
{
uint8_t v_res_8_; lean_object* v_r_9_; 
v_res_8_ = l_Lean_Expr_hasBinderNameHint___lam__0(v_e_7_);
lean_dec_ref(v_e_7_);
v_r_9_ = lean_box(v_res_8_);
return v_r_9_;
}
}
static lean_object* _init_l_Lean_Expr_hasBinderNameHint___closed__0(void){
_start:
{
lean_object* v___f_10_; 
v___f_10_ = lean_alloc_closure((void*)(l_Lean_Expr_hasBinderNameHint___lam__0___boxed), 1, 0);
return v___f_10_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_hasBinderNameHint(lean_object* v_e_11_){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; 
v___f_12_ = lean_obj_once(&l_Lean_Expr_hasBinderNameHint___closed__0, &l_Lean_Expr_hasBinderNameHint___closed__0_once, _init_l_Lean_Expr_hasBinderNameHint___closed__0);
v___x_13_ = lean_find_expr(v___f_12_, v_e_11_);
if (lean_obj_tag(v___x_13_) == 0)
{
uint8_t v___x_14_; 
v___x_14_ = 0;
return v___x_14_;
}
else
{
uint8_t v___x_15_; 
lean_dec_ref(v___x_13_);
v___x_15_ = 1;
return v___x_15_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasBinderNameHint___boxed(lean_object* v_e_16_){
_start:
{
uint8_t v_res_17_; lean_object* v_r_18_; 
v_res_17_ = l_Lean_Expr_hasBinderNameHint(v_e_16_);
lean_dec_ref(v_e_16_);
v_r_18_ = lean_box(v_res_17_);
return v_r_18_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_enterScope(lean_object* v_name_19_, lean_object* v_xs_20_){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_array_push(v_xs_20_, v_name_19_);
return v___x_21_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0(void){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = l_Array_instInhabited(lean_box(0));
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0(lean_object* v_msg_23_){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_24_ = lean_box(0);
v___x_25_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0, &l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0);
v___x_26_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_26_, 0, v___x_24_);
lean_ctor_set(v___x_26_, 1, v___x_25_);
v___x_27_ = lean_panic_fn_borrowed(v___x_26_, v_msg_23_);
lean_dec_ref(v___x_26_);
return v___x_27_;
}
}
static lean_object* _init_l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0(void){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lean_mk_string_unchecked("Lean.Meta.BinderNameHint", 24, 24);
return v___x_28_;
}
}
static lean_object* _init_l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__1(void){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lean_mk_string_unchecked("_private.Lean.Meta.BinderNameHint.0.Lean.exitScope", 50, 50);
return v___x_29_;
}
}
static lean_object* _init_l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__2(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_mk_string_unchecked("assertion violation: xs.size > 0\n    ", 37, 37);
return v___x_30_;
}
}
static lean_object* _init_l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__3(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_31_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__2, &l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__2_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__2);
v___x_32_ = lean_unsigned_to_nat(4u);
v___x_33_ = lean_unsigned_to_nat(26u);
v___x_34_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__1, &l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__1_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__1);
v___x_35_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0, &l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0);
v___x_36_ = l_mkPanicMessageWithDecl(v___x_35_, v___x_34_, v___x_33_, v___x_32_, v___x_31_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope(lean_object* v_xs_37_){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_38_ = lean_unsigned_to_nat(0u);
v___x_39_ = lean_array_get_size(v_xs_37_);
v___x_40_ = lean_nat_dec_lt(v___x_38_, v___x_39_);
if (v___x_40_ == 0)
{
lean_object* v___x_41_; lean_object* v___x_42_; 
lean_dec_ref(v_xs_37_);
v___x_41_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__3, &l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__3_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__3);
v___x_42_ = l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0(v___x_41_);
return v___x_42_;
}
else
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_43_ = lean_box(0);
v___x_44_ = lean_unsigned_to_nat(1u);
v___x_45_ = lean_nat_sub(v___x_39_, v___x_44_);
v___x_46_ = lean_array_get(v___x_43_, v_xs_37_, v___x_45_);
lean_dec(v___x_45_);
v___x_47_ = lean_array_pop(v_xs_37_);
v___x_48_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_48_, 0, v___x_46_);
lean_ctor_set(v___x_48_, 1, v___x_47_);
return v___x_48_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_rememberName_spec__0(lean_object* v_msg_49_){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0, &l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0);
v___x_51_ = lean_panic_fn_borrowed(v___x_50_, v_msg_49_);
return v___x_51_;
}
}
static lean_object* _init_l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__0(void){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = lean_mk_string_unchecked("_private.Lean.Meta.BinderNameHint.0.Lean.rememberName", 53, 53);
return v___x_52_;
}
}
static lean_object* _init_l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__1(void){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lean_mk_string_unchecked("assertion violation: xs.size > bidx\n    ", 40, 40);
return v___x_53_;
}
}
static lean_object* _init_l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__2(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_54_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__1, &l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__1_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__1);
v___x_55_ = lean_unsigned_to_nat(4u);
v___x_56_ = lean_unsigned_to_nat(30u);
v___x_57_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__0, &l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__0_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__0);
v___x_58_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0, &l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0);
v___x_59_ = l_mkPanicMessageWithDecl(v___x_58_, v___x_57_, v___x_56_, v___x_55_, v___x_54_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName(lean_object* v_bidx_60_, lean_object* v_name_61_, lean_object* v_xs_62_){
_start:
{
lean_object* v___x_63_; uint8_t v___x_64_; 
v___x_63_ = lean_array_get_size(v_xs_62_);
v___x_64_ = lean_nat_dec_lt(v_bidx_60_, v___x_63_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; lean_object* v___x_66_; 
lean_dec_ref(v_xs_62_);
lean_dec(v_name_61_);
v___x_65_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__2, &l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__2_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__2);
v___x_66_ = l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_rememberName_spec__0(v___x_65_);
return v___x_66_;
}
else
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_67_ = lean_nat_sub(v___x_63_, v_bidx_60_);
v___x_68_ = lean_unsigned_to_nat(1u);
v___x_69_ = lean_nat_sub(v___x_67_, v___x_68_);
lean_dec(v___x_67_);
v___x_70_ = lean_array_set(v_xs_62_, v___x_69_, v_name_61_);
lean_dec(v___x_69_);
return v___x_70_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___boxed(lean_object* v_bidx_71_, lean_object* v_name_72_, lean_object* v_xs_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName(v_bidx_71_, v_name_72_, v_xs_73_);
lean_dec(v_bidx_71_);
return v_res_74_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___closed__0(void){
_start:
{
lean_object* v___f_75_; 
v___f_75_ = lean_alloc_closure((void*)(l_Lean_Core_instInhabitedCoreM___lam__0___boxed), 3, 0);
return v___f_75_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0(lean_object* v_msg_76_, lean_object* v___y_77_, lean_object* v___y_78_){
_start:
{
lean_object* v___f_80_; lean_object* v___x_289__overap_81_; lean_object* v___x_82_; 
v___f_80_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___closed__0, &l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___closed__0);
v___x_289__overap_81_ = lean_panic_fn_borrowed(v___f_80_, v_msg_76_);
lean_inc(v___y_78_);
lean_inc_ref(v___y_77_);
v___x_82_ = lean_apply_3(v___x_289__overap_81_, v___y_77_, v___y_78_, lean_box(0));
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___boxed(lean_object* v_msg_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0(v_msg_83_, v___y_84_, v___y_85_);
lean_dec(v___y_85_);
lean_dec_ref(v___y_84_);
return v_res_87_;
}
}
static lean_object* _init_l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__0(void){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_mk_string_unchecked("_private.Lean.Meta.BinderNameHint.0.Lean.makeFresh", 50, 50);
return v___x_88_;
}
}
static lean_object* _init_l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__1(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_89_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__1, &l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__1_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__1);
v___x_90_ = lean_unsigned_to_nat(4u);
v___x_91_ = lean_unsigned_to_nat(34u);
v___x_92_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__0, &l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__0_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__0);
v___x_93_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0, &l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0);
v___x_94_ = l_mkPanicMessageWithDecl(v___x_93_, v___x_92_, v___x_91_, v___x_90_, v___x_89_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh(lean_object* v_bidx_95_, lean_object* v_xs_96_, lean_object* v_a_97_, lean_object* v_a_98_){
_start:
{
lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_100_ = lean_array_get_size(v_xs_96_);
v___x_101_ = lean_nat_dec_lt(v_bidx_95_, v___x_100_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; lean_object* v___x_103_; 
lean_dec_ref(v_xs_96_);
v___x_102_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__1, &l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__1_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__1);
v___x_103_ = l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0(v___x_102_, v_a_97_, v_a_98_);
return v___x_103_;
}
else
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v_name_108_; lean_object* v___x_109_; 
v___x_104_ = lean_box(0);
v___x_105_ = lean_nat_sub(v___x_100_, v_bidx_95_);
v___x_106_ = lean_unsigned_to_nat(1u);
v___x_107_ = lean_nat_sub(v___x_105_, v___x_106_);
lean_dec(v___x_105_);
v_name_108_ = lean_array_get_borrowed(v___x_104_, v_xs_96_, v___x_107_);
lean_inc(v_name_108_);
v___x_109_ = l_Lean_Core_mkFreshUserName(v_name_108_, v_a_97_, v_a_98_);
if (lean_obj_tag(v___x_109_) == 0)
{
lean_object* v_a_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_118_; 
v_a_110_ = lean_ctor_get(v___x_109_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_109_);
if (v_isSharedCheck_118_ == 0)
{
v___x_112_ = v___x_109_;
v_isShared_113_ = v_isSharedCheck_118_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_a_110_);
lean_dec(v___x_109_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_118_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_114_; lean_object* v___x_116_; 
v___x_114_ = lean_array_set(v_xs_96_, v___x_107_, v_a_110_);
lean_dec(v___x_107_);
if (v_isShared_113_ == 0)
{
lean_ctor_set(v___x_112_, 0, v___x_114_);
v___x_116_ = v___x_112_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v___x_114_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
else
{
lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_126_; 
lean_dec(v___x_107_);
lean_dec_ref(v_xs_96_);
v_a_119_ = lean_ctor_get(v___x_109_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_109_);
if (v_isSharedCheck_126_ == 0)
{
v___x_121_ = v___x_109_;
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v___x_109_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_124_; 
if (v_isShared_122_ == 0)
{
v___x_124_ = v___x_121_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_a_119_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___boxed(lean_object* v_bidx_127_, lean_object* v_xs_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh(v_bidx_127_, v_xs_128_, v_a_129_, v_a_130_);
lean_dec(v_a_130_);
lean_dec_ref(v_a_129_);
lean_dec(v_bidx_127_);
return v_res_132_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__0(void){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l_instMonadEIO(lean_box(0));
return v___x_133_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__1(void){
_start:
{
lean_object* v___f_134_; 
v___f_134_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_134_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__2(void){
_start:
{
lean_object* v___f_135_; 
v___f_135_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_135_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__3(void){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = lean_alloc_closure((void*)(l_Lean_ExprStructEq_beq___boxed), 2, 0);
return v___x_136_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__4(void){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lean_alloc_closure((void*)(l_Lean_ExprStructEq_hash___boxed), 1, 0);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2(lean_object* v_msg_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v_toApplicative_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_191_; 
v___x_144_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__0, &l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__0);
v___x_145_ = l_StateRefT_x27_instMonad___redArg(v___x_144_);
v_toApplicative_146_ = lean_ctor_get(v___x_145_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_145_);
if (v_isSharedCheck_191_ == 0)
{
lean_object* v_unused_192_; 
v_unused_192_ = lean_ctor_get(v___x_145_, 1);
lean_dec(v_unused_192_);
v___x_148_ = v___x_145_;
v_isShared_149_ = v_isSharedCheck_191_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_toApplicative_146_);
lean_dec(v___x_145_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_191_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v_toFunctor_150_; lean_object* v_toSeq_151_; lean_object* v_toSeqLeft_152_; lean_object* v_toSeqRight_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_189_; 
v_toFunctor_150_ = lean_ctor_get(v_toApplicative_146_, 0);
v_toSeq_151_ = lean_ctor_get(v_toApplicative_146_, 2);
v_toSeqLeft_152_ = lean_ctor_get(v_toApplicative_146_, 3);
v_toSeqRight_153_ = lean_ctor_get(v_toApplicative_146_, 4);
v_isSharedCheck_189_ = !lean_is_exclusive(v_toApplicative_146_);
if (v_isSharedCheck_189_ == 0)
{
lean_object* v_unused_190_; 
v_unused_190_ = lean_ctor_get(v_toApplicative_146_, 1);
lean_dec(v_unused_190_);
v___x_155_ = v_toApplicative_146_;
v_isShared_156_ = v_isSharedCheck_189_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_toSeqRight_153_);
lean_inc(v_toSeqLeft_152_);
lean_inc(v_toSeq_151_);
lean_inc(v_toFunctor_150_);
lean_dec(v_toApplicative_146_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_189_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___f_157_; lean_object* v___f_158_; lean_object* v___f_159_; lean_object* v___f_160_; lean_object* v___x_161_; lean_object* v___f_162_; lean_object* v___f_163_; lean_object* v___f_164_; lean_object* v___x_166_; 
v___f_157_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__1, &l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__1_once, _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__1);
v___f_158_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__2, &l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__2_once, _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__2);
lean_inc_ref(v_toFunctor_150_);
v___f_159_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_159_, 0, v_toFunctor_150_);
v___f_160_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_160_, 0, v_toFunctor_150_);
v___x_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_161_, 0, v___f_159_);
lean_ctor_set(v___x_161_, 1, v___f_160_);
v___f_162_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_162_, 0, v_toSeqRight_153_);
v___f_163_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_163_, 0, v_toSeqLeft_152_);
v___f_164_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_164_, 0, v_toSeq_151_);
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 4, v___f_162_);
lean_ctor_set(v___x_155_, 3, v___f_163_);
lean_ctor_set(v___x_155_, 2, v___f_164_);
lean_ctor_set(v___x_155_, 1, v___f_157_);
lean_ctor_set(v___x_155_, 0, v___x_161_);
v___x_166_ = v___x_155_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v___x_161_);
lean_ctor_set(v_reuseFailAlloc_188_, 1, v___f_157_);
lean_ctor_set(v_reuseFailAlloc_188_, 2, v___f_164_);
lean_ctor_set(v_reuseFailAlloc_188_, 3, v___f_163_);
lean_ctor_set(v_reuseFailAlloc_188_, 4, v___f_162_);
v___x_166_ = v_reuseFailAlloc_188_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_object* v___x_168_; 
if (v_isShared_149_ == 0)
{
lean_ctor_set(v___x_148_, 1, v___f_158_);
lean_ctor_set(v___x_148_, 0, v___x_166_);
v___x_168_ = v___x_148_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v___x_166_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v___f_158_);
v___x_168_ = v_reuseFailAlloc_187_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___f_172_; lean_object* v___f_173_; lean_object* v___f_174_; lean_object* v___f_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_14273__overap_185_; lean_object* v___x_186_; 
v___x_169_ = lean_box(0);
v___x_170_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__3, &l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__3_once, _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__3);
v___x_171_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__4, &l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__4_once, _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__4);
lean_inc_ref_n(v___x_168_, 6);
v___f_172_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_172_, 0, v___x_168_);
v___f_173_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_173_, 0, v___x_168_);
v___f_174_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_174_, 0, v___x_168_);
v___f_175_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_175_, 0, v___x_168_);
v___x_176_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_176_, 0, lean_box(0));
lean_closure_set(v___x_176_, 1, lean_box(0));
lean_closure_set(v___x_176_, 2, v___x_168_);
v___x_177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
lean_ctor_set(v___x_177_, 1, v___f_172_);
v___x_178_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_178_, 0, lean_box(0));
lean_closure_set(v___x_178_, 1, lean_box(0));
lean_closure_set(v___x_178_, 2, v___x_168_);
v___x_179_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_179_, 0, v___x_177_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
lean_ctor_set(v___x_179_, 2, v___f_173_);
lean_ctor_set(v___x_179_, 3, v___f_174_);
lean_ctor_set(v___x_179_, 4, v___f_175_);
v___x_180_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_180_, 0, lean_box(0));
lean_closure_set(v___x_180_, 1, lean_box(0));
lean_closure_set(v___x_180_, 2, v___x_168_);
v___x_181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_179_);
lean_ctor_set(v___x_181_, 1, v___x_180_);
v___x_182_ = l_Lean_MonadCacheT_instMonad___redArg(v___x_169_, v___x_170_, v___x_171_, v___x_181_);
v___x_183_ = l_Lean_instInhabitedExpr;
v___x_184_ = l_instInhabitedOfMonad___redArg(v___x_182_, v___x_183_);
v___x_14273__overap_185_ = lean_panic_fn_borrowed(v___x_184_, v_msg_138_);
lean_dec(v___x_184_);
lean_inc(v___y_142_);
lean_inc_ref(v___y_141_);
lean_inc(v___y_139_);
v___x_186_ = lean_apply_5(v___x_14273__overap_185_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, lean_box(0));
return v___x_186_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___boxed(lean_object* v_msg_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2(v_msg_193_, v___y_194_, v___y_195_, v___y_196_, v___y_197_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
lean_dec(v___y_194_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0(lean_object* v_fst_200_, lean_object* v_____r_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_207_, 0, v_fst_200_);
lean_ctor_set(v___x_207_, 1, v___y_203_);
v___x_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0___boxed(lean_object* v_fst_209_, lean_object* v_____r_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0(v_fst_209_, v_____r_210_, v___y_211_, v___y_212_, v___y_213_, v___y_214_);
lean_dec(v___y_214_);
lean_dec_ref(v___y_213_);
lean_dec(v___y_211_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1(lean_object* v___f_217_, lean_object* v_bidx_218_, lean_object* v_n_219_, lean_object* v_binderType_220_, lean_object* v_body_221_, uint8_t v_binderInfo_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_228_ = lean_box(0);
v___x_229_ = l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName(v_bidx_218_, v_n_219_, v___y_224_);
lean_inc(v___y_226_);
lean_inc_ref(v___y_225_);
lean_inc(v___y_223_);
v___x_230_ = lean_apply_6(v___f_217_, v___x_228_, v___y_223_, v___x_229_, v___y_225_, v___y_226_, lean_box(0));
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1___boxed(lean_object* v___f_231_, lean_object* v_bidx_232_, lean_object* v_n_233_, lean_object* v_binderType_234_, lean_object* v_body_235_, lean_object* v_binderInfo_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_){
_start:
{
uint8_t v_binderInfo_14798__boxed_242_; lean_object* v_res_243_; 
v_binderInfo_14798__boxed_242_ = lean_unbox(v_binderInfo_236_);
v_res_243_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1(v___f_231_, v_bidx_232_, v_n_233_, v_binderType_234_, v_body_235_, v_binderInfo_14798__boxed_242_, v___y_237_, v___y_238_, v___y_239_, v___y_240_);
lean_dec(v___y_240_);
lean_dec_ref(v___y_239_);
lean_dec(v___y_237_);
lean_dec_ref(v_body_235_);
lean_dec_ref(v_binderType_234_);
lean_dec(v_bidx_232_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2___redArg(lean_object* v_a_244_, lean_object* v_b_245_, lean_object* v_x_246_){
_start:
{
if (lean_obj_tag(v_x_246_) == 0)
{
lean_dec(v_b_245_);
lean_dec_ref(v_a_244_);
return v_x_246_;
}
else
{
lean_object* v_key_247_; lean_object* v_value_248_; lean_object* v_tail_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_261_; 
v_key_247_ = lean_ctor_get(v_x_246_, 0);
v_value_248_ = lean_ctor_get(v_x_246_, 1);
v_tail_249_ = lean_ctor_get(v_x_246_, 2);
v_isSharedCheck_261_ = !lean_is_exclusive(v_x_246_);
if (v_isSharedCheck_261_ == 0)
{
v___x_251_ = v_x_246_;
v_isShared_252_ = v_isSharedCheck_261_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_tail_249_);
lean_inc(v_value_248_);
lean_inc(v_key_247_);
lean_dec(v_x_246_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_261_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
uint8_t v___x_253_; 
v___x_253_ = l_Lean_ExprStructEq_beq(v_key_247_, v_a_244_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; lean_object* v___x_256_; 
v___x_254_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2___redArg(v_a_244_, v_b_245_, v_tail_249_);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 2, v___x_254_);
v___x_256_ = v___x_251_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v_key_247_);
lean_ctor_set(v_reuseFailAlloc_257_, 1, v_value_248_);
lean_ctor_set(v_reuseFailAlloc_257_, 2, v___x_254_);
v___x_256_ = v_reuseFailAlloc_257_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
return v___x_256_;
}
}
else
{
lean_object* v___x_259_; 
lean_dec(v_value_248_);
lean_dec(v_key_247_);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 1, v_b_245_);
lean_ctor_set(v___x_251_, 0, v_a_244_);
v___x_259_ = v___x_251_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_a_244_);
lean_ctor_set(v_reuseFailAlloc_260_, 1, v_b_245_);
lean_ctor_set(v_reuseFailAlloc_260_, 2, v_tail_249_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg(lean_object* v_a_262_, lean_object* v_x_263_){
_start:
{
if (lean_obj_tag(v_x_263_) == 0)
{
uint8_t v___x_264_; 
v___x_264_ = 0;
return v___x_264_;
}
else
{
lean_object* v_key_265_; lean_object* v_tail_266_; uint8_t v___x_267_; 
v_key_265_ = lean_ctor_get(v_x_263_, 0);
v_tail_266_ = lean_ctor_get(v_x_263_, 2);
v___x_267_ = l_Lean_ExprStructEq_beq(v_key_265_, v_a_262_);
if (v___x_267_ == 0)
{
v_x_263_ = v_tail_266_;
goto _start;
}
else
{
return v___x_267_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg___boxed(lean_object* v_a_269_, lean_object* v_x_270_){
_start:
{
uint8_t v_res_271_; lean_object* v_r_272_; 
v_res_271_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg(v_a_269_, v_x_270_);
lean_dec(v_x_270_);
lean_dec_ref(v_a_269_);
v_r_272_ = lean_box(v_res_271_);
return v_r_272_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3_spec__5___redArg(lean_object* v_x_273_, lean_object* v_x_274_){
_start:
{
if (lean_obj_tag(v_x_274_) == 0)
{
return v_x_273_;
}
else
{
lean_object* v_key_275_; lean_object* v_value_276_; lean_object* v_tail_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_300_; 
v_key_275_ = lean_ctor_get(v_x_274_, 0);
v_value_276_ = lean_ctor_get(v_x_274_, 1);
v_tail_277_ = lean_ctor_get(v_x_274_, 2);
v_isSharedCheck_300_ = !lean_is_exclusive(v_x_274_);
if (v_isSharedCheck_300_ == 0)
{
v___x_279_ = v_x_274_;
v_isShared_280_ = v_isSharedCheck_300_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_tail_277_);
lean_inc(v_value_276_);
lean_inc(v_key_275_);
lean_dec(v_x_274_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_300_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_281_; uint64_t v___x_282_; uint64_t v___x_283_; uint64_t v___x_284_; uint64_t v_fold_285_; uint64_t v___x_286_; uint64_t v___x_287_; uint64_t v___x_288_; size_t v___x_289_; size_t v___x_290_; size_t v___x_291_; size_t v___x_292_; size_t v___x_293_; lean_object* v___x_294_; lean_object* v___x_296_; 
v___x_281_ = lean_array_get_size(v_x_273_);
v___x_282_ = l_Lean_ExprStructEq_hash(v_key_275_);
v___x_283_ = 32ULL;
v___x_284_ = lean_uint64_shift_right(v___x_282_, v___x_283_);
v_fold_285_ = lean_uint64_xor(v___x_282_, v___x_284_);
v___x_286_ = 16ULL;
v___x_287_ = lean_uint64_shift_right(v_fold_285_, v___x_286_);
v___x_288_ = lean_uint64_xor(v_fold_285_, v___x_287_);
v___x_289_ = lean_uint64_to_usize(v___x_288_);
v___x_290_ = lean_usize_of_nat(v___x_281_);
v___x_291_ = ((size_t)1ULL);
v___x_292_ = lean_usize_sub(v___x_290_, v___x_291_);
v___x_293_ = lean_usize_land(v___x_289_, v___x_292_);
v___x_294_ = lean_array_uget_borrowed(v_x_273_, v___x_293_);
lean_inc(v___x_294_);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 2, v___x_294_);
v___x_296_ = v___x_279_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_key_275_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v_value_276_);
lean_ctor_set(v_reuseFailAlloc_299_, 2, v___x_294_);
v___x_296_ = v_reuseFailAlloc_299_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
lean_object* v___x_297_; 
v___x_297_ = lean_array_uset(v_x_273_, v___x_293_, v___x_296_);
v_x_273_ = v___x_297_;
v_x_274_ = v_tail_277_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3___redArg(lean_object* v_i_301_, lean_object* v_source_302_, lean_object* v_target_303_){
_start:
{
lean_object* v___x_304_; uint8_t v___x_305_; 
v___x_304_ = lean_array_get_size(v_source_302_);
v___x_305_ = lean_nat_dec_lt(v_i_301_, v___x_304_);
if (v___x_305_ == 0)
{
lean_dec_ref(v_source_302_);
lean_dec(v_i_301_);
return v_target_303_;
}
else
{
lean_object* v_es_306_; lean_object* v___x_307_; lean_object* v_source_308_; lean_object* v_target_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v_es_306_ = lean_array_fget(v_source_302_, v_i_301_);
v___x_307_ = lean_box(0);
v_source_308_ = lean_array_fset(v_source_302_, v_i_301_, v___x_307_);
v_target_309_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3_spec__5___redArg(v_target_303_, v_es_306_);
v___x_310_ = lean_unsigned_to_nat(1u);
v___x_311_ = lean_nat_add(v_i_301_, v___x_310_);
lean_dec(v_i_301_);
v_i_301_ = v___x_311_;
v_source_302_ = v_source_308_;
v_target_303_ = v_target_309_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1___redArg(lean_object* v_data_313_){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v_nbuckets_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_314_ = lean_array_get_size(v_data_313_);
v___x_315_ = lean_unsigned_to_nat(2u);
v_nbuckets_316_ = lean_nat_mul(v___x_314_, v___x_315_);
v___x_317_ = lean_unsigned_to_nat(0u);
v___x_318_ = lean_box(0);
v___x_319_ = lean_mk_array(v_nbuckets_316_, v___x_318_);
v___x_320_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3___redArg(v___x_317_, v_data_313_, v___x_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0___redArg(lean_object* v_m_321_, lean_object* v_a_322_, lean_object* v_b_323_){
_start:
{
lean_object* v_size_324_; lean_object* v_buckets_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_368_; 
v_size_324_ = lean_ctor_get(v_m_321_, 0);
v_buckets_325_ = lean_ctor_get(v_m_321_, 1);
v_isSharedCheck_368_ = !lean_is_exclusive(v_m_321_);
if (v_isSharedCheck_368_ == 0)
{
v___x_327_ = v_m_321_;
v_isShared_328_ = v_isSharedCheck_368_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_buckets_325_);
lean_inc(v_size_324_);
lean_dec(v_m_321_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_368_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_329_; uint64_t v___x_330_; uint64_t v___x_331_; uint64_t v___x_332_; uint64_t v_fold_333_; uint64_t v___x_334_; uint64_t v___x_335_; uint64_t v___x_336_; size_t v___x_337_; size_t v___x_338_; size_t v___x_339_; size_t v___x_340_; size_t v___x_341_; lean_object* v_bkt_342_; uint8_t v___x_343_; 
v___x_329_ = lean_array_get_size(v_buckets_325_);
v___x_330_ = l_Lean_ExprStructEq_hash(v_a_322_);
v___x_331_ = 32ULL;
v___x_332_ = lean_uint64_shift_right(v___x_330_, v___x_331_);
v_fold_333_ = lean_uint64_xor(v___x_330_, v___x_332_);
v___x_334_ = 16ULL;
v___x_335_ = lean_uint64_shift_right(v_fold_333_, v___x_334_);
v___x_336_ = lean_uint64_xor(v_fold_333_, v___x_335_);
v___x_337_ = lean_uint64_to_usize(v___x_336_);
v___x_338_ = lean_usize_of_nat(v___x_329_);
v___x_339_ = ((size_t)1ULL);
v___x_340_ = lean_usize_sub(v___x_338_, v___x_339_);
v___x_341_ = lean_usize_land(v___x_337_, v___x_340_);
v_bkt_342_ = lean_array_uget_borrowed(v_buckets_325_, v___x_341_);
v___x_343_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg(v_a_322_, v_bkt_342_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; lean_object* v_size_x27_345_; lean_object* v___x_346_; lean_object* v_buckets_x27_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_344_ = lean_unsigned_to_nat(1u);
v_size_x27_345_ = lean_nat_add(v_size_324_, v___x_344_);
lean_dec(v_size_324_);
lean_inc(v_bkt_342_);
v___x_346_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_346_, 0, v_a_322_);
lean_ctor_set(v___x_346_, 1, v_b_323_);
lean_ctor_set(v___x_346_, 2, v_bkt_342_);
v_buckets_x27_347_ = lean_array_uset(v_buckets_325_, v___x_341_, v___x_346_);
v___x_348_ = lean_unsigned_to_nat(4u);
v___x_349_ = lean_nat_mul(v_size_x27_345_, v___x_348_);
v___x_350_ = lean_unsigned_to_nat(3u);
v___x_351_ = lean_nat_div(v___x_349_, v___x_350_);
lean_dec(v___x_349_);
v___x_352_ = lean_array_get_size(v_buckets_x27_347_);
v___x_353_ = lean_nat_dec_le(v___x_351_, v___x_352_);
lean_dec(v___x_351_);
if (v___x_353_ == 0)
{
lean_object* v_val_354_; lean_object* v___x_356_; 
v_val_354_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1___redArg(v_buckets_x27_347_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 1, v_val_354_);
lean_ctor_set(v___x_327_, 0, v_size_x27_345_);
v___x_356_ = v___x_327_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v_size_x27_345_);
lean_ctor_set(v_reuseFailAlloc_357_, 1, v_val_354_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
else
{
lean_object* v___x_359_; 
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 1, v_buckets_x27_347_);
lean_ctor_set(v___x_327_, 0, v_size_x27_345_);
v___x_359_ = v___x_327_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_size_x27_345_);
lean_ctor_set(v_reuseFailAlloc_360_, 1, v_buckets_x27_347_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
else
{
lean_object* v___x_361_; lean_object* v_buckets_x27_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_366_; 
lean_inc(v_bkt_342_);
v___x_361_ = lean_box(0);
v_buckets_x27_362_ = lean_array_uset(v_buckets_325_, v___x_341_, v___x_361_);
v___x_363_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2___redArg(v_a_322_, v_b_323_, v_bkt_342_);
v___x_364_ = lean_array_uset(v_buckets_x27_362_, v___x_341_, v___x_363_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 1, v___x_364_);
v___x_366_ = v___x_327_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v_size_324_);
lean_ctor_set(v_reuseFailAlloc_367_, 1, v___x_364_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
return v___x_366_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg(lean_object* v_a_369_, lean_object* v_x_370_){
_start:
{
if (lean_obj_tag(v_x_370_) == 0)
{
lean_object* v___x_371_; 
v___x_371_ = lean_box(0);
return v___x_371_;
}
else
{
lean_object* v_key_372_; lean_object* v_value_373_; lean_object* v_tail_374_; uint8_t v___x_375_; 
v_key_372_ = lean_ctor_get(v_x_370_, 0);
v_value_373_ = lean_ctor_get(v_x_370_, 1);
v_tail_374_ = lean_ctor_get(v_x_370_, 2);
v___x_375_ = l_Lean_ExprStructEq_beq(v_key_372_, v_a_369_);
if (v___x_375_ == 0)
{
v_x_370_ = v_tail_374_;
goto _start;
}
else
{
lean_object* v___x_377_; 
lean_inc(v_value_373_);
v___x_377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_377_, 0, v_value_373_);
return v___x_377_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg___boxed(lean_object* v_a_378_, lean_object* v_x_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg(v_a_378_, v_x_379_);
lean_dec(v_x_379_);
lean_dec_ref(v_a_378_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg(lean_object* v_m_381_, lean_object* v_a_382_){
_start:
{
lean_object* v_buckets_383_; lean_object* v___x_384_; uint64_t v___x_385_; uint64_t v___x_386_; uint64_t v___x_387_; uint64_t v_fold_388_; uint64_t v___x_389_; uint64_t v___x_390_; uint64_t v___x_391_; size_t v___x_392_; size_t v___x_393_; size_t v___x_394_; size_t v___x_395_; size_t v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v_buckets_383_ = lean_ctor_get(v_m_381_, 1);
v___x_384_ = lean_array_get_size(v_buckets_383_);
v___x_385_ = l_Lean_ExprStructEq_hash(v_a_382_);
v___x_386_ = 32ULL;
v___x_387_ = lean_uint64_shift_right(v___x_385_, v___x_386_);
v_fold_388_ = lean_uint64_xor(v___x_385_, v___x_387_);
v___x_389_ = 16ULL;
v___x_390_ = lean_uint64_shift_right(v_fold_388_, v___x_389_);
v___x_391_ = lean_uint64_xor(v_fold_388_, v___x_390_);
v___x_392_ = lean_uint64_to_usize(v___x_391_);
v___x_393_ = lean_usize_of_nat(v___x_384_);
v___x_394_ = ((size_t)1ULL);
v___x_395_ = lean_usize_sub(v___x_393_, v___x_394_);
v___x_396_ = lean_usize_land(v___x_392_, v___x_395_);
v___x_397_ = lean_array_uget_borrowed(v_buckets_383_, v___x_396_);
v___x_398_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg(v_a_382_, v___x_397_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg___boxed(lean_object* v_m_399_, lean_object* v_a_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg(v_m_399_, v_a_400_);
lean_dec_ref(v_a_400_);
lean_dec_ref(v_m_399_);
return v_res_401_;
}
}
static lean_object* _init_l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__0(void){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = lean_mk_string_unchecked("_private.Lean.Meta.BinderNameHint.0.Lean.Expr.resolveBinderNameHint.go", 70, 70);
return v___x_402_;
}
}
static lean_object* _init_l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__1(void){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = lean_mk_string_unchecked("assertion violation: xs.size > bidx\n          ", 46, 46);
return v___x_403_;
}
}
static lean_object* _init_l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__2(void){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_404_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__1, &l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__1_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__1);
v___x_405_ = lean_unsigned_to_nat(10u);
v___x_406_ = lean_unsigned_to_nat(72u);
v___x_407_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__0, &l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__0_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__0);
v___x_408_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0, &l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0);
v___x_409_ = l_mkPanicMessageWithDecl(v___x_408_, v___x_407_, v___x_406_, v___x_405_, v___x_404_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(lean_object* v_e_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_){
_start:
{
lean_object* v_a_417_; lean_object* v_fst_418_; lean_object* v___y_425_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_428_ = lean_st_ref_get(v_a_414_);
lean_dec(v___x_428_);
v___x_429_ = lean_st_ref_get(v_a_411_);
v___x_430_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg(v___x_429_, v_e_410_);
lean_dec(v___x_429_);
if (lean_obj_tag(v___x_430_) == 0)
{
lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; 
v___x_431_ = lean_obj_once(&l_Lean_Expr_hasBinderNameHint___lam__0___closed__1, &l_Lean_Expr_hasBinderNameHint___lam__0___closed__1_once, _init_l_Lean_Expr_hasBinderNameHint___lam__0___closed__1);
v___x_432_ = lean_unsigned_to_nat(6u);
v___x_433_ = l_Lean_Expr_isAppOfArity(v_e_410_, v___x_431_, v___x_432_);
if (v___x_433_ == 0)
{
switch(lean_obj_tag(v_e_410_))
{
case 7:
{
lean_object* v_binderName_434_; lean_object* v_binderType_435_; lean_object* v_body_436_; uint8_t v_binderInfo_437_; lean_object* v___x_438_; 
v_binderName_434_ = lean_ctor_get(v_e_410_, 0);
v_binderType_435_ = lean_ctor_get(v_e_410_, 1);
v_body_436_ = lean_ctor_get(v_e_410_, 2);
v_binderInfo_437_ = lean_ctor_get_uint8(v_e_410_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_435_);
v___x_438_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_binderType_435_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v_a_439_; lean_object* v_fst_440_; lean_object* v_snd_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v_a_439_ = lean_ctor_get(v___x_438_, 0);
lean_inc(v_a_439_);
lean_dec_ref(v___x_438_);
v_fst_440_ = lean_ctor_get(v_a_439_, 0);
lean_inc(v_fst_440_);
v_snd_441_ = lean_ctor_get(v_a_439_, 1);
lean_inc(v_snd_441_);
lean_dec(v_a_439_);
lean_inc(v_binderName_434_);
v___x_442_ = lean_array_push(v_snd_441_, v_binderName_434_);
lean_inc_ref(v_body_436_);
v___x_443_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_body_436_, v_a_411_, v___x_442_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_443_) == 0)
{
lean_object* v_a_444_; lean_object* v_fst_445_; lean_object* v_snd_446_; lean_object* v___x_447_; lean_object* v_fst_448_; lean_object* v_snd_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_457_; 
v_a_444_ = lean_ctor_get(v___x_443_, 0);
lean_inc(v_a_444_);
lean_dec_ref(v___x_443_);
v_fst_445_ = lean_ctor_get(v_a_444_, 0);
lean_inc(v_fst_445_);
v_snd_446_ = lean_ctor_get(v_a_444_, 1);
lean_inc(v_snd_446_);
lean_dec(v_a_444_);
v___x_447_ = l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope(v_snd_446_);
v_fst_448_ = lean_ctor_get(v___x_447_, 0);
v_snd_449_ = lean_ctor_get(v___x_447_, 1);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_457_ == 0)
{
v___x_451_ = v___x_447_;
v_isShared_452_ = v_isSharedCheck_457_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_snd_449_);
lean_inc(v_fst_448_);
lean_dec(v___x_447_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_457_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_453_; lean_object* v___x_455_; 
v___x_453_ = l_Lean_Expr_forallE___override(v_fst_448_, v_fst_440_, v_fst_445_, v_binderInfo_437_);
lean_inc_ref(v___x_453_);
if (v_isShared_452_ == 0)
{
lean_ctor_set(v___x_451_, 0, v___x_453_);
v___x_455_ = v___x_451_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v___x_453_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v_snd_449_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
v_a_417_ = v___x_455_;
v_fst_418_ = v___x_453_;
goto v___jp_416_;
}
}
}
else
{
lean_dec(v_fst_440_);
v___y_425_ = v___x_443_;
goto v___jp_424_;
}
}
else
{
v___y_425_ = v___x_438_;
goto v___jp_424_;
}
}
case 6:
{
lean_object* v_binderName_458_; lean_object* v_binderType_459_; lean_object* v_body_460_; uint8_t v_binderInfo_461_; lean_object* v___x_462_; 
v_binderName_458_ = lean_ctor_get(v_e_410_, 0);
v_binderType_459_ = lean_ctor_get(v_e_410_, 1);
v_body_460_ = lean_ctor_get(v_e_410_, 2);
v_binderInfo_461_ = lean_ctor_get_uint8(v_e_410_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_459_);
v___x_462_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_binderType_459_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_462_) == 0)
{
lean_object* v_a_463_; lean_object* v_fst_464_; lean_object* v_snd_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v_a_463_ = lean_ctor_get(v___x_462_, 0);
lean_inc(v_a_463_);
lean_dec_ref(v___x_462_);
v_fst_464_ = lean_ctor_get(v_a_463_, 0);
lean_inc(v_fst_464_);
v_snd_465_ = lean_ctor_get(v_a_463_, 1);
lean_inc(v_snd_465_);
lean_dec(v_a_463_);
lean_inc(v_binderName_458_);
v___x_466_ = lean_array_push(v_snd_465_, v_binderName_458_);
lean_inc_ref(v_body_460_);
v___x_467_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_body_460_, v_a_411_, v___x_466_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_467_) == 0)
{
lean_object* v_a_468_; lean_object* v_fst_469_; lean_object* v_snd_470_; lean_object* v___x_471_; lean_object* v_fst_472_; lean_object* v_snd_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_481_; 
v_a_468_ = lean_ctor_get(v___x_467_, 0);
lean_inc(v_a_468_);
lean_dec_ref(v___x_467_);
v_fst_469_ = lean_ctor_get(v_a_468_, 0);
lean_inc(v_fst_469_);
v_snd_470_ = lean_ctor_get(v_a_468_, 1);
lean_inc(v_snd_470_);
lean_dec(v_a_468_);
v___x_471_ = l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope(v_snd_470_);
v_fst_472_ = lean_ctor_get(v___x_471_, 0);
v_snd_473_ = lean_ctor_get(v___x_471_, 1);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_481_ == 0)
{
v___x_475_ = v___x_471_;
v_isShared_476_ = v_isSharedCheck_481_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_snd_473_);
lean_inc(v_fst_472_);
lean_dec(v___x_471_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_481_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_477_; lean_object* v___x_479_; 
v___x_477_ = l_Lean_Expr_lam___override(v_fst_472_, v_fst_464_, v_fst_469_, v_binderInfo_461_);
lean_inc_ref(v___x_477_);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 0, v___x_477_);
v___x_479_ = v___x_475_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v___x_477_);
lean_ctor_set(v_reuseFailAlloc_480_, 1, v_snd_473_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
v_a_417_ = v___x_479_;
v_fst_418_ = v___x_477_;
goto v___jp_416_;
}
}
}
else
{
lean_dec(v_fst_464_);
v___y_425_ = v___x_467_;
goto v___jp_424_;
}
}
else
{
v___y_425_ = v___x_462_;
goto v___jp_424_;
}
}
case 8:
{
lean_object* v_declName_482_; lean_object* v_type_483_; lean_object* v_value_484_; lean_object* v_body_485_; uint8_t v_nondep_486_; lean_object* v___x_487_; 
v_declName_482_ = lean_ctor_get(v_e_410_, 0);
v_type_483_ = lean_ctor_get(v_e_410_, 1);
v_value_484_ = lean_ctor_get(v_e_410_, 2);
v_body_485_ = lean_ctor_get(v_e_410_, 3);
v_nondep_486_ = lean_ctor_get_uint8(v_e_410_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_483_);
v___x_487_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_type_483_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v_a_488_; lean_object* v_fst_489_; lean_object* v_snd_490_; lean_object* v___x_491_; 
v_a_488_ = lean_ctor_get(v___x_487_, 0);
lean_inc(v_a_488_);
lean_dec_ref(v___x_487_);
v_fst_489_ = lean_ctor_get(v_a_488_, 0);
lean_inc(v_fst_489_);
v_snd_490_ = lean_ctor_get(v_a_488_, 1);
lean_inc(v_snd_490_);
lean_dec(v_a_488_);
lean_inc_ref(v_value_484_);
v___x_491_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_value_484_, v_a_411_, v_snd_490_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_491_) == 0)
{
lean_object* v_a_492_; lean_object* v_fst_493_; lean_object* v_snd_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v_a_492_ = lean_ctor_get(v___x_491_, 0);
lean_inc(v_a_492_);
lean_dec_ref(v___x_491_);
v_fst_493_ = lean_ctor_get(v_a_492_, 0);
lean_inc(v_fst_493_);
v_snd_494_ = lean_ctor_get(v_a_492_, 1);
lean_inc(v_snd_494_);
lean_dec(v_a_492_);
lean_inc(v_declName_482_);
v___x_495_ = lean_array_push(v_snd_494_, v_declName_482_);
lean_inc_ref(v_body_485_);
v___x_496_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_body_485_, v_a_411_, v___x_495_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v_a_497_; lean_object* v_fst_498_; lean_object* v_snd_499_; lean_object* v___x_500_; lean_object* v_fst_501_; lean_object* v_snd_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_510_; 
v_a_497_ = lean_ctor_get(v___x_496_, 0);
lean_inc(v_a_497_);
lean_dec_ref(v___x_496_);
v_fst_498_ = lean_ctor_get(v_a_497_, 0);
lean_inc(v_fst_498_);
v_snd_499_ = lean_ctor_get(v_a_497_, 1);
lean_inc(v_snd_499_);
lean_dec(v_a_497_);
v___x_500_ = l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope(v_snd_499_);
v_fst_501_ = lean_ctor_get(v___x_500_, 0);
v_snd_502_ = lean_ctor_get(v___x_500_, 1);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_500_);
if (v_isSharedCheck_510_ == 0)
{
v___x_504_ = v___x_500_;
v_isShared_505_ = v_isSharedCheck_510_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_snd_502_);
lean_inc(v_fst_501_);
lean_dec(v___x_500_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_510_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v___x_506_; lean_object* v___x_508_; 
v___x_506_ = l_Lean_Expr_letE___override(v_fst_501_, v_fst_489_, v_fst_493_, v_fst_498_, v_nondep_486_);
lean_inc_ref(v___x_506_);
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 0, v___x_506_);
v___x_508_ = v___x_504_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v___x_506_);
lean_ctor_set(v_reuseFailAlloc_509_, 1, v_snd_502_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
v_a_417_ = v___x_508_;
v_fst_418_ = v___x_506_;
goto v___jp_416_;
}
}
}
else
{
lean_dec(v_fst_493_);
lean_dec(v_fst_489_);
v___y_425_ = v___x_496_;
goto v___jp_424_;
}
}
else
{
lean_dec(v_fst_489_);
v___y_425_ = v___x_491_;
goto v___jp_424_;
}
}
else
{
v___y_425_ = v___x_487_;
goto v___jp_424_;
}
}
case 5:
{
lean_object* v_fn_511_; lean_object* v_arg_512_; lean_object* v___x_513_; 
v_fn_511_ = lean_ctor_get(v_e_410_, 0);
v_arg_512_ = lean_ctor_get(v_e_410_, 1);
lean_inc_ref(v_fn_511_);
v___x_513_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_fn_511_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v_a_514_; lean_object* v_fst_515_; lean_object* v_snd_516_; lean_object* v___x_517_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
lean_inc(v_a_514_);
lean_dec_ref(v___x_513_);
v_fst_515_ = lean_ctor_get(v_a_514_, 0);
lean_inc(v_fst_515_);
v_snd_516_ = lean_ctor_get(v_a_514_, 1);
lean_inc(v_snd_516_);
lean_dec(v_a_514_);
lean_inc_ref(v_arg_512_);
v___x_517_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_arg_512_, v_a_411_, v_snd_516_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_517_) == 0)
{
lean_object* v_a_518_; lean_object* v_fst_519_; lean_object* v_snd_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_538_; 
v_a_518_ = lean_ctor_get(v___x_517_, 0);
lean_inc(v_a_518_);
lean_dec_ref(v___x_517_);
v_fst_519_ = lean_ctor_get(v_a_518_, 0);
v_snd_520_ = lean_ctor_get(v_a_518_, 1);
v_isSharedCheck_538_ = !lean_is_exclusive(v_a_518_);
if (v_isSharedCheck_538_ == 0)
{
v___x_522_ = v_a_518_;
v_isShared_523_ = v_isSharedCheck_538_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_snd_520_);
lean_inc(v_fst_519_);
lean_dec(v_a_518_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_538_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v___y_525_; uint8_t v___y_530_; size_t v___x_532_; size_t v___x_533_; uint8_t v___x_534_; 
v___x_532_ = lean_ptr_addr(v_fn_511_);
v___x_533_ = lean_ptr_addr(v_fst_515_);
v___x_534_ = lean_usize_dec_eq(v___x_532_, v___x_533_);
if (v___x_534_ == 0)
{
v___y_530_ = v___x_534_;
goto v___jp_529_;
}
else
{
size_t v___x_535_; size_t v___x_536_; uint8_t v___x_537_; 
v___x_535_ = lean_ptr_addr(v_arg_512_);
v___x_536_ = lean_ptr_addr(v_fst_519_);
v___x_537_ = lean_usize_dec_eq(v___x_535_, v___x_536_);
v___y_530_ = v___x_537_;
goto v___jp_529_;
}
v___jp_524_:
{
lean_object* v___x_527_; 
lean_inc_ref(v___y_525_);
if (v_isShared_523_ == 0)
{
lean_ctor_set(v___x_522_, 0, v___y_525_);
v___x_527_ = v___x_522_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v___y_525_);
lean_ctor_set(v_reuseFailAlloc_528_, 1, v_snd_520_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
v_a_417_ = v___x_527_;
v_fst_418_ = v___y_525_;
goto v___jp_416_;
}
}
v___jp_529_:
{
if (v___y_530_ == 0)
{
lean_object* v___x_531_; 
v___x_531_ = l_Lean_Expr_app___override(v_fst_515_, v_fst_519_);
v___y_525_ = v___x_531_;
goto v___jp_524_;
}
else
{
lean_dec(v_fst_519_);
lean_dec(v_fst_515_);
lean_inc_ref(v_e_410_);
v___y_525_ = v_e_410_;
goto v___jp_524_;
}
}
}
}
else
{
lean_dec(v_fst_515_);
v___y_425_ = v___x_517_;
goto v___jp_424_;
}
}
else
{
v___y_425_ = v___x_513_;
goto v___jp_424_;
}
}
case 10:
{
lean_object* v_data_539_; lean_object* v_expr_540_; lean_object* v___x_541_; 
v_data_539_ = lean_ctor_get(v_e_410_, 0);
v_expr_540_ = lean_ctor_get(v_e_410_, 1);
lean_inc_ref(v_expr_540_);
v___x_541_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_expr_540_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v_a_542_; lean_object* v_fst_543_; lean_object* v_snd_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_557_; 
v_a_542_ = lean_ctor_get(v___x_541_, 0);
lean_inc(v_a_542_);
lean_dec_ref(v___x_541_);
v_fst_543_ = lean_ctor_get(v_a_542_, 0);
v_snd_544_ = lean_ctor_get(v_a_542_, 1);
v_isSharedCheck_557_ = !lean_is_exclusive(v_a_542_);
if (v_isSharedCheck_557_ == 0)
{
v___x_546_ = v_a_542_;
v_isShared_547_ = v_isSharedCheck_557_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_snd_544_);
lean_inc(v_fst_543_);
lean_dec(v_a_542_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_557_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___y_549_; size_t v___x_553_; size_t v___x_554_; uint8_t v___x_555_; 
v___x_553_ = lean_ptr_addr(v_expr_540_);
v___x_554_ = lean_ptr_addr(v_fst_543_);
v___x_555_ = lean_usize_dec_eq(v___x_553_, v___x_554_);
if (v___x_555_ == 0)
{
lean_object* v___x_556_; 
lean_inc(v_data_539_);
v___x_556_ = l_Lean_Expr_mdata___override(v_data_539_, v_fst_543_);
v___y_549_ = v___x_556_;
goto v___jp_548_;
}
else
{
lean_dec(v_fst_543_);
lean_inc_ref(v_e_410_);
v___y_549_ = v_e_410_;
goto v___jp_548_;
}
v___jp_548_:
{
lean_object* v___x_551_; 
lean_inc_ref(v___y_549_);
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 0, v___y_549_);
v___x_551_ = v___x_546_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v___y_549_);
lean_ctor_set(v_reuseFailAlloc_552_, 1, v_snd_544_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
v_a_417_ = v___x_551_;
v_fst_418_ = v___y_549_;
goto v___jp_416_;
}
}
}
}
else
{
v___y_425_ = v___x_541_;
goto v___jp_424_;
}
}
case 11:
{
lean_object* v_typeName_558_; lean_object* v_idx_559_; lean_object* v_struct_560_; lean_object* v___x_561_; 
v_typeName_558_ = lean_ctor_get(v_e_410_, 0);
v_idx_559_ = lean_ctor_get(v_e_410_, 1);
v_struct_560_ = lean_ctor_get(v_e_410_, 2);
lean_inc_ref(v_struct_560_);
v___x_561_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_struct_560_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_561_) == 0)
{
lean_object* v_a_562_; lean_object* v_fst_563_; lean_object* v_snd_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_577_; 
v_a_562_ = lean_ctor_get(v___x_561_, 0);
lean_inc(v_a_562_);
lean_dec_ref(v___x_561_);
v_fst_563_ = lean_ctor_get(v_a_562_, 0);
v_snd_564_ = lean_ctor_get(v_a_562_, 1);
v_isSharedCheck_577_ = !lean_is_exclusive(v_a_562_);
if (v_isSharedCheck_577_ == 0)
{
v___x_566_ = v_a_562_;
v_isShared_567_ = v_isSharedCheck_577_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_snd_564_);
lean_inc(v_fst_563_);
lean_dec(v_a_562_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_577_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___y_569_; size_t v___x_573_; size_t v___x_574_; uint8_t v___x_575_; 
v___x_573_ = lean_ptr_addr(v_struct_560_);
v___x_574_ = lean_ptr_addr(v_fst_563_);
v___x_575_ = lean_usize_dec_eq(v___x_573_, v___x_574_);
if (v___x_575_ == 0)
{
lean_object* v___x_576_; 
lean_inc(v_idx_559_);
lean_inc(v_typeName_558_);
v___x_576_ = l_Lean_Expr_proj___override(v_typeName_558_, v_idx_559_, v_fst_563_);
v___y_569_ = v___x_576_;
goto v___jp_568_;
}
else
{
lean_dec(v_fst_563_);
lean_inc_ref(v_e_410_);
v___y_569_ = v_e_410_;
goto v___jp_568_;
}
v___jp_568_:
{
lean_object* v___x_571_; 
lean_inc_ref(v___y_569_);
if (v_isShared_567_ == 0)
{
lean_ctor_set(v___x_566_, 0, v___y_569_);
v___x_571_ = v___x_566_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v___y_569_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v_snd_564_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
v_a_417_ = v___x_571_;
v_fst_418_ = v___y_569_;
goto v___jp_416_;
}
}
}
}
else
{
v___y_425_ = v___x_561_;
goto v___jp_424_;
}
}
default: 
{
lean_object* v___x_578_; 
lean_inc_ref_n(v_e_410_, 2);
v___x_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_578_, 0, v_e_410_);
lean_ctor_set(v___x_578_, 1, v_a_412_);
v_a_417_ = v___x_578_;
v_fst_418_ = v_e_410_;
goto v___jp_416_;
}
}
}
else
{
lean_object* v_e_579_; lean_object* v___x_580_; 
v_e_579_ = l_Lean_Expr_appArg_x21(v_e_410_);
v___x_580_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_e_579_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_580_) == 0)
{
lean_object* v_a_581_; lean_object* v_fst_582_; lean_object* v_snd_583_; lean_object* v___f_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v_v_587_; 
v_a_581_ = lean_ctor_get(v___x_580_, 0);
lean_inc(v_a_581_);
lean_dec_ref(v___x_580_);
v_fst_582_ = lean_ctor_get(v_a_581_, 0);
lean_inc_n(v_fst_582_, 2);
v_snd_583_ = lean_ctor_get(v_a_581_, 1);
lean_inc(v_snd_583_);
lean_dec(v_a_581_);
v___f_584_ = lean_alloc_closure((void*)(l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0___boxed), 7, 1);
lean_closure_set(v___f_584_, 0, v_fst_582_);
v___x_585_ = l_Lean_Expr_appFn_x21(v_e_410_);
v___x_586_ = l_Lean_Expr_appFn_x21(v___x_585_);
v_v_587_ = l_Lean_Expr_appArg_x21(v___x_586_);
lean_dec_ref(v___x_586_);
if (lean_obj_tag(v_v_587_) == 0)
{
lean_object* v_deBruijnIndex_588_; lean_object* v_b_589_; lean_object* v___x_590_; 
v_deBruijnIndex_588_ = lean_ctor_get(v_v_587_, 0);
lean_inc(v_deBruijnIndex_588_);
lean_dec_ref(v_v_587_);
v_b_589_ = l_Lean_Expr_appArg_x21(v___x_585_);
lean_dec_ref(v___x_585_);
v___x_590_ = l_Lean_Expr_headBeta(v_b_589_);
switch(lean_obj_tag(v___x_590_))
{
case 6:
{
lean_object* v_binderName_591_; lean_object* v_binderType_592_; lean_object* v_body_593_; uint8_t v_binderInfo_594_; lean_object* v___x_595_; 
lean_dec(v_fst_582_);
v_binderName_591_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_binderName_591_);
v_binderType_592_ = lean_ctor_get(v___x_590_, 1);
lean_inc_ref(v_binderType_592_);
v_body_593_ = lean_ctor_get(v___x_590_, 2);
lean_inc_ref(v_body_593_);
v_binderInfo_594_ = lean_ctor_get_uint8(v___x_590_, sizeof(void*)*3 + 8);
lean_dec_ref(v___x_590_);
v___x_595_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1(v___f_584_, v_deBruijnIndex_588_, v_binderName_591_, v_binderType_592_, v_body_593_, v_binderInfo_594_, v_a_411_, v_snd_583_, v_a_413_, v_a_414_);
lean_dec_ref(v_body_593_);
lean_dec_ref(v_binderType_592_);
lean_dec(v_deBruijnIndex_588_);
v___y_425_ = v___x_595_;
goto v___jp_424_;
}
case 7:
{
lean_object* v_binderName_596_; lean_object* v_binderType_597_; lean_object* v_body_598_; uint8_t v_binderInfo_599_; lean_object* v___x_600_; 
lean_dec(v_fst_582_);
v_binderName_596_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_binderName_596_);
v_binderType_597_ = lean_ctor_get(v___x_590_, 1);
lean_inc_ref(v_binderType_597_);
v_body_598_ = lean_ctor_get(v___x_590_, 2);
lean_inc_ref(v_body_598_);
v_binderInfo_599_ = lean_ctor_get_uint8(v___x_590_, sizeof(void*)*3 + 8);
lean_dec_ref(v___x_590_);
v___x_600_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1(v___f_584_, v_deBruijnIndex_588_, v_binderName_596_, v_binderType_597_, v_body_598_, v_binderInfo_599_, v_a_411_, v_snd_583_, v_a_413_, v_a_414_);
lean_dec_ref(v_body_598_);
lean_dec_ref(v_binderType_597_);
lean_dec(v_deBruijnIndex_588_);
v___y_425_ = v___x_600_;
goto v___jp_424_;
}
default: 
{
lean_object* v___x_601_; uint8_t v___x_602_; 
lean_dec_ref(v___x_590_);
lean_dec_ref(v___f_584_);
v___x_601_ = lean_array_get_size(v_snd_583_);
v___x_602_ = lean_nat_dec_lt(v_deBruijnIndex_588_, v___x_601_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; lean_object* v___x_604_; 
lean_dec(v_deBruijnIndex_588_);
lean_dec(v_fst_582_);
v___x_603_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__2, &l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__2_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__2);
v___x_604_ = l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2(v___x_603_, v_a_411_, v_snd_583_, v_a_413_, v_a_414_);
v___y_425_ = v___x_604_;
goto v___jp_424_;
}
else
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_605_ = lean_box(0);
v___x_606_ = lean_nat_sub(v___x_601_, v_deBruijnIndex_588_);
v___x_607_ = lean_unsigned_to_nat(1u);
v___x_608_ = lean_nat_sub(v___x_606_, v___x_607_);
lean_dec(v___x_606_);
v___x_609_ = lean_array_get_borrowed(v___x_605_, v_snd_583_, v___x_608_);
lean_dec(v___x_608_);
lean_inc(v___x_609_);
v___x_610_ = l_Lean_Core_mkFreshUserName(v___x_609_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_610_) == 0)
{
lean_object* v_a_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
v_a_611_ = lean_ctor_get(v___x_610_, 0);
lean_inc(v_a_611_);
lean_dec_ref(v___x_610_);
v___x_612_ = lean_box(0);
v___x_613_ = l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName(v_deBruijnIndex_588_, v_a_611_, v_snd_583_);
lean_dec(v_deBruijnIndex_588_);
v___x_614_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0(v_fst_582_, v___x_612_, v_a_411_, v___x_613_, v_a_413_, v_a_414_);
v___y_425_ = v___x_614_;
goto v___jp_424_;
}
else
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_622_; 
lean_dec(v_deBruijnIndex_588_);
lean_dec(v_snd_583_);
lean_dec(v_fst_582_);
lean_dec_ref(v_e_410_);
v_a_615_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_622_ == 0)
{
v___x_617_ = v___x_610_;
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_610_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_620_; 
if (v_isShared_618_ == 0)
{
v___x_620_ = v___x_617_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_a_615_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_623_; lean_object* v___x_624_; 
lean_dec_ref(v_v_587_);
lean_dec_ref(v___x_585_);
lean_dec_ref(v___f_584_);
v___x_623_ = lean_box(0);
v___x_624_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0(v_fst_582_, v___x_623_, v_a_411_, v_snd_583_, v_a_413_, v_a_414_);
v___y_425_ = v___x_624_;
goto v___jp_424_;
}
}
else
{
v___y_425_ = v___x_580_;
goto v___jp_424_;
}
}
}
else
{
lean_object* v_val_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_633_; 
lean_dec_ref(v_e_410_);
v_val_625_ = lean_ctor_get(v___x_430_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_633_ == 0)
{
v___x_627_ = v___x_430_;
v_isShared_628_ = v_isSharedCheck_633_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_val_625_);
lean_dec(v___x_430_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_633_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_629_; lean_object* v___x_631_; 
v___x_629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_629_, 0, v_val_625_);
lean_ctor_set(v___x_629_, 1, v_a_412_);
if (v_isShared_628_ == 0)
{
lean_ctor_set_tag(v___x_627_, 0);
lean_ctor_set(v___x_627_, 0, v___x_629_);
v___x_631_ = v___x_627_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v___x_629_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
v___jp_416_:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_419_ = lean_st_ref_get(v_a_414_);
lean_dec(v___x_419_);
v___x_420_ = lean_st_ref_take(v_a_411_);
v___x_421_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0___redArg(v___x_420_, v_e_410_, v_fst_418_);
v___x_422_ = lean_st_ref_set(v_a_411_, v___x_421_);
v___x_423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_423_, 0, v_a_417_);
return v___x_423_;
}
v___jp_424_:
{
if (lean_obj_tag(v___y_425_) == 0)
{
lean_object* v_a_426_; lean_object* v_fst_427_; 
v_a_426_ = lean_ctor_get(v___y_425_, 0);
lean_inc(v_a_426_);
lean_dec_ref(v___y_425_);
v_fst_427_ = lean_ctor_get(v_a_426_, 0);
lean_inc(v_fst_427_);
v_a_417_ = v_a_426_;
v_fst_418_ = v_fst_427_;
goto v___jp_416_;
}
else
{
lean_dec_ref(v_e_410_);
return v___y_425_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___boxed(lean_object* v_e_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_e_634_, v_a_635_, v_a_636_, v_a_637_, v_a_638_);
lean_dec(v_a_638_);
lean_dec_ref(v_a_637_);
lean_dec(v_a_635_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0(lean_object* v_00_u03b2_641_, lean_object* v_m_642_, lean_object* v_a_643_, lean_object* v_b_644_){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0___redArg(v_m_642_, v_a_643_, v_b_644_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1(lean_object* v_00_u03b2_646_, lean_object* v_m_647_, lean_object* v_a_648_){
_start:
{
lean_object* v___x_649_; 
v___x_649_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg(v_m_647_, v_a_648_);
return v___x_649_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___boxed(lean_object* v_00_u03b2_650_, lean_object* v_m_651_, lean_object* v_a_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1(v_00_u03b2_650_, v_m_651_, v_a_652_);
lean_dec_ref(v_a_652_);
lean_dec_ref(v_m_651_);
return v_res_653_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0(lean_object* v_00_u03b2_654_, lean_object* v_a_655_, lean_object* v_x_656_){
_start:
{
uint8_t v___x_657_; 
v___x_657_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg(v_a_655_, v_x_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_658_, lean_object* v_a_659_, lean_object* v_x_660_){
_start:
{
uint8_t v_res_661_; lean_object* v_r_662_; 
v_res_661_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0(v_00_u03b2_658_, v_a_659_, v_x_660_);
lean_dec(v_x_660_);
lean_dec_ref(v_a_659_);
v_r_662_ = lean_box(v_res_661_);
return v_r_662_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1(lean_object* v_00_u03b2_663_, lean_object* v_data_664_){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1___redArg(v_data_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2(lean_object* v_00_u03b2_666_, lean_object* v_a_667_, lean_object* v_b_668_, lean_object* v_x_669_){
_start:
{
lean_object* v___x_670_; 
v___x_670_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2___redArg(v_a_667_, v_b_668_, v_x_669_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4(lean_object* v_00_u03b2_671_, lean_object* v_a_672_, lean_object* v_x_673_){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg(v_a_672_, v_x_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___boxed(lean_object* v_00_u03b2_675_, lean_object* v_a_676_, lean_object* v_x_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4(v_00_u03b2_675_, v_a_676_, v_x_677_);
lean_dec(v_x_677_);
lean_dec_ref(v_a_676_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_679_, lean_object* v_i_680_, lean_object* v_source_681_, lean_object* v_target_682_){
_start:
{
lean_object* v___x_683_; 
v___x_683_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3___redArg(v_i_680_, v_source_681_, v_target_682_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_684_, lean_object* v_x_685_, lean_object* v_x_686_){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3_spec__5___redArg(v_x_685_, v_x_686_);
return v___x_687_;
}
}
static lean_object* _init_l_Lean_Expr_resolveBinderNameHint___closed__0(void){
_start:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_688_ = lean_box(0);
v___x_689_ = lean_unsigned_to_nat(16u);
v___x_690_ = lean_mk_array(v___x_689_, v___x_688_);
return v___x_690_;
}
}
static lean_object* _init_l_Lean_Expr_resolveBinderNameHint___closed__1(void){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_691_ = lean_obj_once(&l_Lean_Expr_resolveBinderNameHint___closed__0, &l_Lean_Expr_resolveBinderNameHint___closed__0_once, _init_l_Lean_Expr_resolveBinderNameHint___closed__0);
v___x_692_ = lean_unsigned_to_nat(0u);
v___x_693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_693_, 0, v___x_692_);
lean_ctor_set(v___x_693_, 1, v___x_691_);
return v___x_693_;
}
}
static lean_object* _init_l_Lean_Expr_resolveBinderNameHint___closed__2(void){
_start:
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = lean_unsigned_to_nat(0u);
v___x_695_ = lean_mk_empty_array_with_capacity(v___x_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_resolveBinderNameHint(lean_object* v_e_696_, lean_object* v_a_697_, lean_object* v_a_698_){
_start:
{
lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_700_ = lean_st_ref_get(v_a_698_);
lean_dec(v___x_700_);
v___x_701_ = lean_obj_once(&l_Lean_Expr_resolveBinderNameHint___closed__1, &l_Lean_Expr_resolveBinderNameHint___closed__1_once, _init_l_Lean_Expr_resolveBinderNameHint___closed__1);
v___x_702_ = lean_st_mk_ref(v___x_701_);
v___x_703_ = lean_obj_once(&l_Lean_Expr_resolveBinderNameHint___closed__2, &l_Lean_Expr_resolveBinderNameHint___closed__2_once, _init_l_Lean_Expr_resolveBinderNameHint___closed__2);
v___x_704_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_e_696_, v___x_702_, v___x_703_, v_a_697_, v_a_698_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v_a_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_715_; 
v_a_705_ = lean_ctor_get(v___x_704_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_715_ == 0)
{
v___x_707_ = v___x_704_;
v_isShared_708_ = v_isSharedCheck_715_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_a_705_);
lean_dec(v___x_704_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_715_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v_fst_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_713_; 
v_fst_709_ = lean_ctor_get(v_a_705_, 0);
lean_inc(v_fst_709_);
lean_dec(v_a_705_);
v___x_710_ = lean_st_ref_get(v_a_698_);
lean_dec(v___x_710_);
v___x_711_ = lean_st_ref_get(v___x_702_);
lean_dec(v___x_702_);
lean_dec(v___x_711_);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 0, v_fst_709_);
v___x_713_ = v___x_707_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_fst_709_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
else
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_723_; 
lean_dec(v___x_702_);
v_a_716_ = lean_ctor_get(v___x_704_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_723_ == 0)
{
v___x_718_ = v___x_704_;
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v___x_704_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_721_; 
if (v_isShared_719_ == 0)
{
v___x_721_ = v___x_718_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_a_716_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_resolveBinderNameHint___boxed(lean_object* v_e_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = l_Lean_Expr_resolveBinderNameHint(v_e_724_, v_a_725_, v_a_726_);
lean_dec(v_a_726_);
lean_dec_ref(v_a_725_);
return v_res_728_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_BinderNameHint(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_BinderNameHint(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_BinderNameHint(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_BinderNameHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_BinderNameHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_BinderNameHint(builtin);
}
#ifdef __cplusplus
}
#endif
