// Lean compiler output
// Module: Lean.Meta.Sym.AlphaShareBuilder
// Imports: public import Lean.Meta.Sym.SymM
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
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_Expr_sort___override(lean_object*);
uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isDebugEnabled___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___boxed(lean_object*);
lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instInhabitedSymM(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lit___override(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_ReaderT_read___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg(lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_share1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_share1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_share1(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_share1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__0;
static lean_once_cell_t l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__1;
static lean_once_cell_t l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__2;
static lean_once_cell_t l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__3;
static lean_once_cell_t l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__4;
static lean_once_cell_t l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__5;
static lean_once_cell_t l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__6;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLitS___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLitS(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMVarS___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMVarS(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkHaveS___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkHaveS___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkHaveS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_updateAppS_x21___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateAppS_x21___redArg___closed__0;
static lean_once_cell_t l_Lean_Expr_updateAppS_x21___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateAppS_x21___redArg___closed__1;
static lean_once_cell_t l_Lean_Expr_updateAppS_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateAppS_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_updateAppS_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateAppS_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_updateMDataS_x21___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateMDataS_x21___redArg___closed__0;
static lean_once_cell_t l_Lean_Expr_updateMDataS_x21___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateMDataS_x21___redArg___closed__1;
static lean_once_cell_t l_Lean_Expr_updateMDataS_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateMDataS_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_updateMDataS_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateMDataS_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_updateProjS_x21___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateProjS_x21___redArg___closed__0;
static lean_once_cell_t l_Lean_Expr_updateProjS_x21___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateProjS_x21___redArg___closed__1;
static lean_once_cell_t l_Lean_Expr_updateProjS_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateProjS_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_updateProjS_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateProjS_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_updateForallS_x21___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateForallS_x21___redArg___closed__0;
static lean_once_cell_t l_Lean_Expr_updateForallS_x21___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateForallS_x21___redArg___closed__1;
static lean_once_cell_t l_Lean_Expr_updateForallS_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateForallS_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_updateForallS_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateForallS_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_updateLambdaS_x21___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateLambdaS_x21___redArg___closed__0;
static lean_once_cell_t l_Lean_Expr_updateLambdaS_x21___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateLambdaS_x21___redArg___closed__1;
static lean_once_cell_t l_Lean_Expr_updateLambdaS_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateLambdaS_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_updateLambdaS_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateLambdaS_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_updateLetS_x21___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateLetS_x21___redArg___closed__0;
static lean_once_cell_t l_Lean_Expr_updateLetS_x21___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateLetS_x21___redArg___closed__1;
static lean_once_cell_t l_Lean_Expr_updateLetS_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateLetS_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_updateLetS_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateLetS_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2086___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2086___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2086(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2087___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2087___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2087(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2088___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2088___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2088(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2089___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2089___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2089(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2081___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2081___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2081(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRangeS___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRangeS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevRangeS___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevRangeS___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevRangeS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevRangeS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevS___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg___lam__0(lean_object* v_share1_1_, lean_object* v_inst_2_, lean_object* v_e_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_apply_1(v_share1_1_, v_e_3_);
v___x_5_ = lean_apply_2(v_inst_2_, lean_box(0), v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg___lam__1(lean_object* v_assertShared_6_, lean_object* v_inst_7_, lean_object* v_e_8_){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_apply_1(v_assertShared_6_, v_e_8_);
v___x_10_ = lean_apply_2(v_inst_7_, lean_box(0), v___x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg(lean_object* v_inst_11_, lean_object* v_inst_12_){
_start:
{
lean_object* v_share1_13_; lean_object* v_assertShared_14_; lean_object* v_isDebugEnabled_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_25_; 
v_share1_13_ = lean_ctor_get(v_inst_12_, 0);
v_assertShared_14_ = lean_ctor_get(v_inst_12_, 1);
v_isDebugEnabled_15_ = lean_ctor_get(v_inst_12_, 2);
v_isSharedCheck_25_ = !lean_is_exclusive(v_inst_12_);
if (v_isSharedCheck_25_ == 0)
{
v___x_17_ = v_inst_12_;
v_isShared_18_ = v_isSharedCheck_25_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_isDebugEnabled_15_);
lean_inc(v_assertShared_14_);
lean_inc(v_share1_13_);
lean_dec(v_inst_12_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_25_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___f_19_; lean_object* v___f_20_; lean_object* v___x_21_; lean_object* v___x_23_; 
lean_inc_n(v_inst_11_, 2);
v___f_19_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_19_, 0, v_share1_13_);
lean_closure_set(v___f_19_, 1, v_inst_11_);
v___f_20_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg___lam__1), 3, 2);
lean_closure_set(v___f_20_, 0, v_assertShared_14_);
lean_closure_set(v___f_20_, 1, v_inst_11_);
v___x_21_ = lean_apply_2(v_inst_11_, lean_box(0), v_isDebugEnabled_15_);
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 2, v___x_21_);
lean_ctor_set(v___x_17_, 1, v___f_20_);
lean_ctor_set(v___x_17_, 0, v___f_19_);
v___x_23_ = v___x_17_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v___f_19_);
lean_ctor_set(v_reuseFailAlloc_24_, 1, v___f_20_);
lean_ctor_set(v_reuseFailAlloc_24_, 2, v___x_21_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift(lean_object* v_m_26_, lean_object* v_n_27_, lean_object* v_inst_28_, lean_object* v_inst_29_){
_start:
{
lean_object* v_share1_30_; lean_object* v_assertShared_31_; lean_object* v_isDebugEnabled_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_42_; 
v_share1_30_ = lean_ctor_get(v_inst_29_, 0);
v_assertShared_31_ = lean_ctor_get(v_inst_29_, 1);
v_isDebugEnabled_32_ = lean_ctor_get(v_inst_29_, 2);
v_isSharedCheck_42_ = !lean_is_exclusive(v_inst_29_);
if (v_isSharedCheck_42_ == 0)
{
v___x_34_ = v_inst_29_;
v_isShared_35_ = v_isSharedCheck_42_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_isDebugEnabled_32_);
lean_inc(v_assertShared_31_);
lean_inc(v_share1_30_);
lean_dec(v_inst_29_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_42_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___f_36_; lean_object* v___f_37_; lean_object* v___x_38_; lean_object* v___x_40_; 
lean_inc_n(v_inst_28_, 2);
v___f_36_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_36_, 0, v_share1_30_);
lean_closure_set(v___f_36_, 1, v_inst_28_);
v___f_37_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg___lam__1), 3, 2);
lean_closure_set(v___f_37_, 0, v_assertShared_31_);
lean_closure_set(v___f_37_, 1, v_inst_28_);
v___x_38_ = lean_apply_2(v_inst_28_, lean_box(0), v_isDebugEnabled_32_);
if (v_isShared_35_ == 0)
{
lean_ctor_set(v___x_34_, 2, v___x_38_);
lean_ctor_set(v___x_34_, 1, v___f_37_);
lean_ctor_set(v___x_34_, 0, v___f_36_);
v___x_40_ = v___x_34_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v___f_36_);
lean_ctor_set(v_reuseFailAlloc_41_, 1, v___f_37_);
lean_ctor_set(v_reuseFailAlloc_41_, 2, v___x_38_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
return v___x_40_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__0(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = lean_mk_string_unchecked("__dummy__", 9, 9);
return v___x_43_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__1(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__0, &l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__0);
v___x_45_ = l_Lean_Name_mkStr1(v___x_44_);
return v___x_45_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__2(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = lean_box(0);
v___x_47_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__1, &l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__1_once, _init_l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__1);
v___x_48_ = l_Lean_mkConst(v___x_47_, v___x_46_);
return v___x_48_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__2, &l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__2_once, _init_l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__2);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_50_, lean_object* v_x_51_, lean_object* v_x_52_, lean_object* v_x_53_){
_start:
{
lean_object* v_ks_54_; lean_object* v_vs_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_79_; 
v_ks_54_ = lean_ctor_get(v_x_50_, 0);
v_vs_55_ = lean_ctor_get(v_x_50_, 1);
v_isSharedCheck_79_ = !lean_is_exclusive(v_x_50_);
if (v_isSharedCheck_79_ == 0)
{
v___x_57_ = v_x_50_;
v_isShared_58_ = v_isSharedCheck_79_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_vs_55_);
lean_inc(v_ks_54_);
lean_dec(v_x_50_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_79_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_59_; uint8_t v___x_60_; 
v___x_59_ = lean_array_get_size(v_ks_54_);
v___x_60_ = lean_nat_dec_lt(v_x_51_, v___x_59_);
if (v___x_60_ == 0)
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_64_; 
lean_dec(v_x_51_);
v___x_61_ = lean_array_push(v_ks_54_, v_x_52_);
v___x_62_ = lean_array_push(v_vs_55_, v_x_53_);
if (v_isShared_58_ == 0)
{
lean_ctor_set(v___x_57_, 1, v___x_62_);
lean_ctor_set(v___x_57_, 0, v___x_61_);
v___x_64_ = v___x_57_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v___x_61_);
lean_ctor_set(v_reuseFailAlloc_65_, 1, v___x_62_);
v___x_64_ = v_reuseFailAlloc_65_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
return v___x_64_;
}
}
else
{
lean_object* v_k_x27_66_; uint8_t v___x_67_; 
v_k_x27_66_ = lean_array_fget_borrowed(v_ks_54_, v_x_51_);
lean_inc(v_k_x27_66_);
lean_inc_ref(v_x_52_);
v___x_67_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_52_, v_k_x27_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_69_; 
if (v_isShared_58_ == 0)
{
v___x_69_ = v___x_57_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_73_, 0, v_ks_54_);
lean_ctor_set(v_reuseFailAlloc_73_, 1, v_vs_55_);
v___x_69_ = v_reuseFailAlloc_73_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_unsigned_to_nat(1u);
v___x_71_ = lean_nat_add(v_x_51_, v___x_70_);
lean_dec(v_x_51_);
v_x_50_ = v___x_69_;
v_x_51_ = v___x_71_;
goto _start;
}
}
else
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_77_; 
v___x_74_ = lean_array_fset(v_ks_54_, v_x_51_, v_x_52_);
v___x_75_ = lean_array_fset(v_vs_55_, v_x_51_, v_x_53_);
lean_dec(v_x_51_);
if (v_isShared_58_ == 0)
{
lean_ctor_set(v___x_57_, 1, v___x_75_);
lean_ctor_set(v___x_57_, 0, v___x_74_);
v___x_77_ = v___x_57_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v___x_74_);
lean_ctor_set(v_reuseFailAlloc_78_, 1, v___x_75_);
v___x_77_ = v_reuseFailAlloc_78_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
return v___x_77_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3___redArg(lean_object* v_n_80_, lean_object* v_k_81_, lean_object* v_v_82_){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = lean_unsigned_to_nat(0u);
v___x_84_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3_spec__4___redArg(v_n_80_, v___x_83_, v_k_81_, v_v_82_);
return v___x_84_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__0(void){
_start:
{
size_t v___x_85_; size_t v___x_86_; size_t v___x_87_; 
v___x_85_ = ((size_t)5ULL);
v___x_86_ = ((size_t)1ULL);
v___x_87_ = lean_usize_shift_left(v___x_86_, v___x_85_);
return v___x_87_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__1(void){
_start:
{
size_t v___x_88_; size_t v___x_89_; size_t v___x_90_; 
v___x_88_ = ((size_t)1ULL);
v___x_89_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__0);
v___x_90_ = lean_usize_sub(v___x_89_, v___x_88_);
return v___x_90_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg(lean_object* v_x_92_, size_t v_x_93_, size_t v_x_94_, lean_object* v_x_95_, lean_object* v_x_96_){
_start:
{
if (lean_obj_tag(v_x_92_) == 0)
{
lean_object* v_es_97_; size_t v___x_98_; size_t v___x_99_; size_t v___x_100_; size_t v___x_101_; lean_object* v_j_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v_es_97_ = lean_ctor_get(v_x_92_, 0);
v___x_98_ = ((size_t)5ULL);
v___x_99_ = ((size_t)1ULL);
v___x_100_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__1);
v___x_101_ = lean_usize_land(v_x_93_, v___x_100_);
v_j_102_ = lean_usize_to_nat(v___x_101_);
v___x_103_ = lean_array_get_size(v_es_97_);
v___x_104_ = lean_nat_dec_lt(v_j_102_, v___x_103_);
if (v___x_104_ == 0)
{
lean_dec(v_j_102_);
lean_dec(v_x_96_);
lean_dec_ref(v_x_95_);
return v_x_92_;
}
else
{
lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_141_; 
lean_inc_ref(v_es_97_);
v_isSharedCheck_141_ = !lean_is_exclusive(v_x_92_);
if (v_isSharedCheck_141_ == 0)
{
lean_object* v_unused_142_; 
v_unused_142_ = lean_ctor_get(v_x_92_, 0);
lean_dec(v_unused_142_);
v___x_106_ = v_x_92_;
v_isShared_107_ = v_isSharedCheck_141_;
goto v_resetjp_105_;
}
else
{
lean_dec(v_x_92_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_141_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v_v_108_; lean_object* v___x_109_; lean_object* v_xs_x27_110_; lean_object* v___y_112_; 
v_v_108_ = lean_array_fget(v_es_97_, v_j_102_);
v___x_109_ = lean_box(0);
v_xs_x27_110_ = lean_array_fset(v_es_97_, v_j_102_, v___x_109_);
switch(lean_obj_tag(v_v_108_))
{
case 0:
{
lean_object* v_key_117_; lean_object* v_val_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_128_; 
v_key_117_ = lean_ctor_get(v_v_108_, 0);
v_val_118_ = lean_ctor_get(v_v_108_, 1);
v_isSharedCheck_128_ = !lean_is_exclusive(v_v_108_);
if (v_isSharedCheck_128_ == 0)
{
v___x_120_ = v_v_108_;
v_isShared_121_ = v_isSharedCheck_128_;
goto v_resetjp_119_;
}
else
{
lean_inc(v_val_118_);
lean_inc(v_key_117_);
lean_dec(v_v_108_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_128_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
uint8_t v___x_122_; 
lean_inc(v_key_117_);
lean_inc_ref(v_x_95_);
v___x_122_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_95_, v_key_117_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; lean_object* v___x_124_; 
lean_del_object(v___x_120_);
v___x_123_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_117_, v_val_118_, v_x_95_, v_x_96_);
v___x_124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
v___y_112_ = v___x_124_;
goto v___jp_111_;
}
else
{
lean_object* v___x_126_; 
lean_dec(v_val_118_);
lean_dec(v_key_117_);
if (v_isShared_121_ == 0)
{
lean_ctor_set(v___x_120_, 1, v_x_96_);
lean_ctor_set(v___x_120_, 0, v_x_95_);
v___x_126_ = v___x_120_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_x_95_);
lean_ctor_set(v_reuseFailAlloc_127_, 1, v_x_96_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
v___y_112_ = v___x_126_;
goto v___jp_111_;
}
}
}
}
case 1:
{
lean_object* v_node_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_139_; 
v_node_129_ = lean_ctor_get(v_v_108_, 0);
v_isSharedCheck_139_ = !lean_is_exclusive(v_v_108_);
if (v_isSharedCheck_139_ == 0)
{
v___x_131_ = v_v_108_;
v_isShared_132_ = v_isSharedCheck_139_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_node_129_);
lean_dec(v_v_108_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_139_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
size_t v___x_133_; size_t v___x_134_; lean_object* v___x_135_; lean_object* v___x_137_; 
v___x_133_ = lean_usize_shift_right(v_x_93_, v___x_98_);
v___x_134_ = lean_usize_add(v_x_94_, v___x_99_);
v___x_135_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg(v_node_129_, v___x_133_, v___x_134_, v_x_95_, v_x_96_);
if (v_isShared_132_ == 0)
{
lean_ctor_set(v___x_131_, 0, v___x_135_);
v___x_137_ = v___x_131_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v___x_135_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
v___y_112_ = v___x_137_;
goto v___jp_111_;
}
}
}
default: 
{
lean_object* v___x_140_; 
v___x_140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_140_, 0, v_x_95_);
lean_ctor_set(v___x_140_, 1, v_x_96_);
v___y_112_ = v___x_140_;
goto v___jp_111_;
}
}
v___jp_111_:
{
lean_object* v___x_113_; lean_object* v___x_115_; 
v___x_113_ = lean_array_fset(v_xs_x27_110_, v_j_102_, v___y_112_);
lean_dec(v_j_102_);
if (v_isShared_107_ == 0)
{
lean_ctor_set(v___x_106_, 0, v___x_113_);
v___x_115_ = v___x_106_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v___x_113_);
v___x_115_ = v_reuseFailAlloc_116_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
return v___x_115_;
}
}
}
}
}
else
{
lean_object* v_ks_143_; lean_object* v_vs_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_164_; 
v_ks_143_ = lean_ctor_get(v_x_92_, 0);
v_vs_144_ = lean_ctor_get(v_x_92_, 1);
v_isSharedCheck_164_ = !lean_is_exclusive(v_x_92_);
if (v_isSharedCheck_164_ == 0)
{
v___x_146_ = v_x_92_;
v_isShared_147_ = v_isSharedCheck_164_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_vs_144_);
lean_inc(v_ks_143_);
lean_dec(v_x_92_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_164_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_149_; 
if (v_isShared_147_ == 0)
{
v___x_149_ = v___x_146_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_ks_143_);
lean_ctor_set(v_reuseFailAlloc_163_, 1, v_vs_144_);
v___x_149_ = v_reuseFailAlloc_163_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
lean_object* v_newNode_150_; uint8_t v___y_152_; size_t v___x_158_; uint8_t v___x_159_; 
v_newNode_150_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3___redArg(v___x_149_, v_x_95_, v_x_96_);
v___x_158_ = ((size_t)7ULL);
v___x_159_ = lean_usize_dec_le(v___x_158_, v_x_94_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_160_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_150_);
v___x_161_ = lean_unsigned_to_nat(4u);
v___x_162_ = lean_nat_dec_lt(v___x_160_, v___x_161_);
lean_dec(v___x_160_);
v___y_152_ = v___x_162_;
goto v___jp_151_;
}
else
{
v___y_152_ = v___x_159_;
goto v___jp_151_;
}
v___jp_151_:
{
if (v___y_152_ == 0)
{
lean_object* v_ks_153_; lean_object* v_vs_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v_ks_153_ = lean_ctor_get(v_newNode_150_, 0);
lean_inc_ref(v_ks_153_);
v_vs_154_ = lean_ctor_get(v_newNode_150_, 1);
lean_inc_ref(v_vs_154_);
lean_dec_ref(v_newNode_150_);
v___x_155_ = lean_unsigned_to_nat(0u);
v___x_156_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__2);
v___x_157_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___redArg(v_x_94_, v_ks_153_, v_vs_154_, v___x_155_, v___x_156_);
lean_dec_ref(v_vs_154_);
lean_dec_ref(v_ks_153_);
return v___x_157_;
}
else
{
return v_newNode_150_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___redArg(size_t v_depth_165_, lean_object* v_keys_166_, lean_object* v_vals_167_, lean_object* v_i_168_, lean_object* v_entries_169_){
_start:
{
lean_object* v___x_170_; uint8_t v___x_171_; 
v___x_170_ = lean_array_get_size(v_keys_166_);
v___x_171_ = lean_nat_dec_lt(v_i_168_, v___x_170_);
if (v___x_171_ == 0)
{
lean_dec(v_i_168_);
return v_entries_169_;
}
else
{
lean_object* v_k_172_; lean_object* v_v_173_; uint64_t v___x_174_; size_t v_h_175_; size_t v___x_176_; lean_object* v___x_177_; size_t v___x_178_; size_t v___x_179_; size_t v___x_180_; size_t v_h_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v_k_172_ = lean_array_fget_borrowed(v_keys_166_, v_i_168_);
v_v_173_ = lean_array_fget_borrowed(v_vals_167_, v_i_168_);
v___x_174_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_k_172_);
v_h_175_ = lean_uint64_to_usize(v___x_174_);
v___x_176_ = ((size_t)5ULL);
v___x_177_ = lean_unsigned_to_nat(1u);
v___x_178_ = ((size_t)1ULL);
v___x_179_ = lean_usize_sub(v_depth_165_, v___x_178_);
v___x_180_ = lean_usize_mul(v___x_176_, v___x_179_);
v_h_181_ = lean_usize_shift_right(v_h_175_, v___x_180_);
v___x_182_ = lean_nat_add(v_i_168_, v___x_177_);
lean_dec(v_i_168_);
lean_inc(v_v_173_);
lean_inc(v_k_172_);
v___x_183_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg(v_entries_169_, v_h_181_, v_depth_165_, v_k_172_, v_v_173_);
v_i_168_ = v___x_182_;
v_entries_169_ = v___x_183_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_depth_185_, lean_object* v_keys_186_, lean_object* v_vals_187_, lean_object* v_i_188_, lean_object* v_entries_189_){
_start:
{
size_t v_depth_boxed_190_; lean_object* v_res_191_; 
v_depth_boxed_190_ = lean_unbox_usize(v_depth_185_);
lean_dec(v_depth_185_);
v_res_191_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___redArg(v_depth_boxed_190_, v_keys_186_, v_vals_187_, v_i_188_, v_entries_189_);
lean_dec_ref(v_vals_187_);
lean_dec_ref(v_keys_186_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___boxed(lean_object* v_x_192_, lean_object* v_x_193_, lean_object* v_x_194_, lean_object* v_x_195_, lean_object* v_x_196_){
_start:
{
size_t v_x_2445__boxed_197_; size_t v_x_2446__boxed_198_; lean_object* v_res_199_; 
v_x_2445__boxed_197_ = lean_unbox_usize(v_x_193_);
lean_dec(v_x_193_);
v_x_2446__boxed_198_ = lean_unbox_usize(v_x_194_);
lean_dec(v_x_194_);
v_res_199_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg(v_x_192_, v_x_2445__boxed_197_, v_x_2446__boxed_198_, v_x_195_, v_x_196_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1___redArg(lean_object* v_x_200_, lean_object* v_x_201_, lean_object* v_x_202_){
_start:
{
uint64_t v___x_203_; size_t v___x_204_; size_t v___x_205_; lean_object* v___x_206_; 
v___x_203_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_x_201_);
v___x_204_ = lean_uint64_to_usize(v___x_203_);
v___x_205_ = ((size_t)1ULL);
v___x_206_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg(v_x_200_, v___x_204_, v___x_205_, v_x_201_, v_x_202_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___redArg(lean_object* v_keys_207_, lean_object* v_i_208_, lean_object* v_k_209_, lean_object* v_k_u2080_210_){
_start:
{
lean_object* v___x_211_; uint8_t v___x_212_; 
v___x_211_ = lean_array_get_size(v_keys_207_);
v___x_212_ = lean_nat_dec_lt(v_i_208_, v___x_211_);
if (v___x_212_ == 0)
{
lean_dec_ref(v_k_209_);
lean_dec(v_i_208_);
lean_inc_ref(v_k_u2080_210_);
return v_k_u2080_210_;
}
else
{
lean_object* v_k_x27_213_; uint8_t v___x_214_; 
v_k_x27_213_ = lean_array_fget_borrowed(v_keys_207_, v_i_208_);
lean_inc(v_k_x27_213_);
lean_inc_ref(v_k_209_);
v___x_214_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_209_, v_k_x27_213_);
if (v___x_214_ == 0)
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_unsigned_to_nat(1u);
v___x_216_ = lean_nat_add(v_i_208_, v___x_215_);
lean_dec(v_i_208_);
v_i_208_ = v___x_216_;
goto _start;
}
else
{
lean_dec_ref(v_k_209_);
lean_dec(v_i_208_);
lean_inc(v_k_x27_213_);
return v_k_x27_213_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___redArg___boxed(lean_object* v_keys_218_, lean_object* v_i_219_, lean_object* v_k_220_, lean_object* v_k_u2080_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___redArg(v_keys_218_, v_i_219_, v_k_220_, v_k_u2080_221_);
lean_dec_ref(v_k_u2080_221_);
lean_dec_ref(v_keys_218_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg(lean_object* v_x_223_, size_t v_x_224_, lean_object* v_x_225_, lean_object* v_x_226_){
_start:
{
if (lean_obj_tag(v_x_223_) == 0)
{
lean_object* v_es_227_; lean_object* v___x_228_; size_t v___x_229_; size_t v___x_230_; size_t v___x_231_; lean_object* v_j_232_; lean_object* v___x_233_; 
v_es_227_ = lean_ctor_get(v_x_223_, 0);
lean_inc_ref(v_es_227_);
lean_dec_ref(v_x_223_);
v___x_228_ = lean_box(2);
v___x_229_ = ((size_t)5ULL);
v___x_230_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__1);
v___x_231_ = lean_usize_land(v_x_224_, v___x_230_);
v_j_232_ = lean_usize_to_nat(v___x_231_);
v___x_233_ = lean_array_get(v___x_228_, v_es_227_, v_j_232_);
lean_dec(v_j_232_);
lean_dec_ref(v_es_227_);
switch(lean_obj_tag(v___x_233_))
{
case 0:
{
lean_object* v_key_234_; uint8_t v___x_235_; 
v_key_234_ = lean_ctor_get(v___x_233_, 0);
lean_inc_n(v_key_234_, 2);
lean_dec_ref(v___x_233_);
v___x_235_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_225_, v_key_234_);
if (v___x_235_ == 0)
{
lean_dec(v_key_234_);
lean_inc_ref(v_x_226_);
return v_x_226_;
}
else
{
return v_key_234_;
}
}
case 1:
{
lean_object* v_node_236_; size_t v___x_237_; 
v_node_236_ = lean_ctor_get(v___x_233_, 0);
lean_inc(v_node_236_);
lean_dec_ref(v___x_233_);
v___x_237_ = lean_usize_shift_right(v_x_224_, v___x_229_);
v_x_223_ = v_node_236_;
v_x_224_ = v___x_237_;
goto _start;
}
default: 
{
lean_dec_ref(v_x_225_);
lean_inc_ref(v_x_226_);
return v_x_226_;
}
}
}
else
{
lean_object* v_ks_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v_ks_239_ = lean_ctor_get(v_x_223_, 0);
lean_inc_ref(v_ks_239_);
lean_dec_ref(v_x_223_);
v___x_240_ = lean_unsigned_to_nat(0u);
v___x_241_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___redArg(v_ks_239_, v___x_240_, v_x_225_, v_x_226_);
lean_dec_ref(v_ks_239_);
return v___x_241_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg___boxed(lean_object* v_x_242_, lean_object* v_x_243_, lean_object* v_x_244_, lean_object* v_x_245_){
_start:
{
size_t v_x_2639__boxed_246_; lean_object* v_res_247_; 
v_x_2639__boxed_246_ = lean_unbox_usize(v_x_243_);
lean_dec(v_x_243_);
v_res_247_ = l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg(v_x_242_, v_x_2639__boxed_246_, v_x_244_, v_x_245_);
lean_dec_ref(v_x_245_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object* v_e_248_, lean_object* v_a_249_, lean_object* v_a_250_){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v_share_254_; lean_object* v___x_255_; uint64_t v___x_256_; size_t v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; 
v___x_252_ = lean_st_ref_get(v_a_250_);
lean_dec(v___x_252_);
v___x_253_ = lean_st_ref_get(v_a_249_);
v_share_254_ = lean_ctor_get(v___x_253_, 0);
lean_inc_ref(v_share_254_);
lean_dec(v___x_253_);
v___x_255_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy;
v___x_256_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_248_);
v___x_257_ = lean_uint64_to_usize(v___x_256_);
lean_inc_ref(v_e_248_);
v___x_258_ = l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg(v_share_254_, v___x_257_, v_e_248_, v___x_255_);
v___x_259_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_258_, v___x_255_);
if (v___x_259_ == 0)
{
lean_object* v___x_260_; 
lean_dec_ref(v_e_248_);
v___x_260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_260_, 0, v___x_258_);
return v___x_260_;
}
else
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v_share_263_; lean_object* v_maxFVar_264_; lean_object* v_proofInstInfo_265_; lean_object* v_inferType_266_; lean_object* v_getLevel_267_; lean_object* v_congrInfo_268_; lean_object* v_defEqI_269_; lean_object* v_extensions_270_; lean_object* v_issues_271_; lean_object* v_canon_272_; uint8_t v_debug_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_284_; 
lean_dec_ref(v___x_258_);
v___x_261_ = lean_st_ref_get(v_a_250_);
lean_dec(v___x_261_);
v___x_262_ = lean_st_ref_take(v_a_249_);
v_share_263_ = lean_ctor_get(v___x_262_, 0);
v_maxFVar_264_ = lean_ctor_get(v___x_262_, 1);
v_proofInstInfo_265_ = lean_ctor_get(v___x_262_, 2);
v_inferType_266_ = lean_ctor_get(v___x_262_, 3);
v_getLevel_267_ = lean_ctor_get(v___x_262_, 4);
v_congrInfo_268_ = lean_ctor_get(v___x_262_, 5);
v_defEqI_269_ = lean_ctor_get(v___x_262_, 6);
v_extensions_270_ = lean_ctor_get(v___x_262_, 7);
v_issues_271_ = lean_ctor_get(v___x_262_, 8);
v_canon_272_ = lean_ctor_get(v___x_262_, 9);
v_debug_273_ = lean_ctor_get_uint8(v___x_262_, sizeof(void*)*10);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_262_);
if (v_isSharedCheck_284_ == 0)
{
v___x_275_ = v___x_262_;
v_isShared_276_ = v_isSharedCheck_284_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_canon_272_);
lean_inc(v_issues_271_);
lean_inc(v_extensions_270_);
lean_inc(v_defEqI_269_);
lean_inc(v_congrInfo_268_);
lean_inc(v_getLevel_267_);
lean_inc(v_inferType_266_);
lean_inc(v_proofInstInfo_265_);
lean_inc(v_maxFVar_264_);
lean_inc(v_share_263_);
lean_dec(v___x_262_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_284_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_280_; 
v___x_277_ = lean_box(0);
lean_inc_ref(v_e_248_);
v___x_278_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1___redArg(v_share_263_, v_e_248_, v___x_277_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 0, v___x_278_);
v___x_280_ = v___x_275_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_278_);
lean_ctor_set(v_reuseFailAlloc_283_, 1, v_maxFVar_264_);
lean_ctor_set(v_reuseFailAlloc_283_, 2, v_proofInstInfo_265_);
lean_ctor_set(v_reuseFailAlloc_283_, 3, v_inferType_266_);
lean_ctor_set(v_reuseFailAlloc_283_, 4, v_getLevel_267_);
lean_ctor_set(v_reuseFailAlloc_283_, 5, v_congrInfo_268_);
lean_ctor_set(v_reuseFailAlloc_283_, 6, v_defEqI_269_);
lean_ctor_set(v_reuseFailAlloc_283_, 7, v_extensions_270_);
lean_ctor_set(v_reuseFailAlloc_283_, 8, v_issues_271_);
lean_ctor_set(v_reuseFailAlloc_283_, 9, v_canon_272_);
lean_ctor_set_uint8(v_reuseFailAlloc_283_, sizeof(void*)*10, v_debug_273_);
v___x_280_ = v_reuseFailAlloc_283_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = lean_st_ref_set(v_a_249_, v___x_280_);
v___x_282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_282_, 0, v_e_248_);
return v___x_282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg___boxed(lean_object* v_e_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v_e_285_, v_a_286_, v_a_287_);
lean_dec(v_a_287_);
lean_dec(v_a_286_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_share1(lean_object* v_e_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v_e_290_, v_a_292_, v_a_296_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___boxed(lean_object* v_e_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_Meta_Sym_Internal_Sym_share1(v_e_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_, v_a_305_);
lean_dec(v_a_305_);
lean_dec_ref(v_a_304_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
lean_dec(v_a_301_);
lean_dec_ref(v_a_300_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0(lean_object* v_00_u03b2_308_, lean_object* v_x_309_, size_t v_x_310_, lean_object* v_x_311_, lean_object* v_x_312_){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg(v_x_309_, v_x_310_, v_x_311_, v_x_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___boxed(lean_object* v_00_u03b2_314_, lean_object* v_x_315_, lean_object* v_x_316_, lean_object* v_x_317_, lean_object* v_x_318_){
_start:
{
size_t v_x_2733__boxed_319_; lean_object* v_res_320_; 
v_x_2733__boxed_319_ = lean_unbox_usize(v_x_316_);
lean_dec(v_x_316_);
v_res_320_ = l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0(v_00_u03b2_314_, v_x_315_, v_x_2733__boxed_319_, v_x_317_, v_x_318_);
lean_dec_ref(v_x_318_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1(lean_object* v_00_u03b2_321_, lean_object* v_x_322_, lean_object* v_x_323_, lean_object* v_x_324_){
_start:
{
lean_object* v___x_325_; 
v___x_325_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1___redArg(v_x_322_, v_x_323_, v_x_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0(lean_object* v_00_u03b2_326_, lean_object* v_keys_327_, lean_object* v_vals_328_, lean_object* v_heq_329_, lean_object* v_i_330_, lean_object* v_k_331_, lean_object* v_k_u2080_332_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___redArg(v_keys_327_, v_i_330_, v_k_331_, v_k_u2080_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___boxed(lean_object* v_00_u03b2_334_, lean_object* v_keys_335_, lean_object* v_vals_336_, lean_object* v_heq_337_, lean_object* v_i_338_, lean_object* v_k_339_, lean_object* v_k_u2080_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0(v_00_u03b2_334_, v_keys_335_, v_vals_336_, v_heq_337_, v_i_338_, v_k_339_, v_k_u2080_340_);
lean_dec_ref(v_k_u2080_340_);
lean_dec_ref(v_vals_336_);
lean_dec_ref(v_keys_335_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2(lean_object* v_00_u03b2_342_, lean_object* v_x_343_, size_t v_x_344_, size_t v_x_345_, lean_object* v_x_346_, lean_object* v_x_347_){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg(v_x_343_, v_x_344_, v_x_345_, v_x_346_, v_x_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_349_, lean_object* v_x_350_, lean_object* v_x_351_, lean_object* v_x_352_, lean_object* v_x_353_, lean_object* v_x_354_){
_start:
{
size_t v_x_2757__boxed_355_; size_t v_x_2758__boxed_356_; lean_object* v_res_357_; 
v_x_2757__boxed_355_ = lean_unbox_usize(v_x_351_);
lean_dec(v_x_351_);
v_x_2758__boxed_356_ = lean_unbox_usize(v_x_352_);
lean_dec(v_x_352_);
v_res_357_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2(v_00_u03b2_349_, v_x_350_, v_x_2757__boxed_355_, v_x_2758__boxed_356_, v_x_353_, v_x_354_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_358_, lean_object* v_n_359_, lean_object* v_k_360_, lean_object* v_v_361_){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3___redArg(v_n_359_, v_k_360_, v_v_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_363_, size_t v_depth_364_, lean_object* v_keys_365_, lean_object* v_vals_366_, lean_object* v_heq_367_, lean_object* v_i_368_, lean_object* v_entries_369_){
_start:
{
lean_object* v___x_370_; 
v___x_370_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___redArg(v_depth_364_, v_keys_365_, v_vals_366_, v_i_368_, v_entries_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_371_, lean_object* v_depth_372_, lean_object* v_keys_373_, lean_object* v_vals_374_, lean_object* v_heq_375_, lean_object* v_i_376_, lean_object* v_entries_377_){
_start:
{
size_t v_depth_boxed_378_; lean_object* v_res_379_; 
v_depth_boxed_378_ = lean_unbox_usize(v_depth_372_);
lean_dec(v_depth_372_);
v_res_379_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4(v_00_u03b2_371_, v_depth_boxed_378_, v_keys_373_, v_vals_374_, v_heq_375_, v_i_376_, v_entries_377_);
lean_dec_ref(v_vals_374_);
lean_dec_ref(v_keys_373_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_380_, lean_object* v_x_381_, lean_object* v_x_382_, lean_object* v_x_383_, lean_object* v_x_384_){
_start:
{
lean_object* v___x_385_; 
v___x_385_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3_spec__4___redArg(v_x_381_, v_x_382_, v_x_383_, v_x_384_);
return v___x_385_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0(void){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = l_Lean_Meta_Sym_instInhabitedSymM(lean_box(0));
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0(lean_object* v_msg_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
lean_object* v___x_395_; lean_object* v___x_818__overap_396_; lean_object* v___x_397_; 
v___x_395_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0, &l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0);
v___x_818__overap_396_ = lean_panic_fn_borrowed(v___x_395_, v_msg_387_);
lean_inc(v___y_393_);
lean_inc_ref(v___y_392_);
lean_inc(v___y_391_);
lean_inc_ref(v___y_390_);
lean_inc(v___y_389_);
lean_inc_ref(v___y_388_);
v___x_397_ = lean_apply_7(v___x_818__overap_396_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, lean_box(0));
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___boxed(lean_object* v_msg_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0(v_msg_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_);
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
return v_res_406_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0(void){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = lean_mk_string_unchecked("Lean.Meta.Sym.AlphaShareBuilder", 31, 31);
return v___x_407_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__1(void){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = lean_mk_string_unchecked("Lean.Meta.Sym.Internal.Sym.assertShared", 39, 39);
return v___x_408_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__2(void){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = lean_mk_string_unchecked("assertion violation: isSameExpr prev.expr e\n\n", 45, 45);
return v___x_409_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__3(void){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_410_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__2, &l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__2_once, _init_l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__2);
v___x_411_ = lean_unsigned_to_nat(2u);
v___x_412_ = lean_unsigned_to_nat(42u);
v___x_413_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__1, &l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__1_once, _init_l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__1);
v___x_414_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0, &l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0_once, _init_l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0);
v___x_415_ = l_mkPanicMessageWithDecl(v___x_414_, v___x_413_, v___x_412_, v___x_411_, v___x_410_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object* v_e_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v_share_426_; lean_object* v___x_427_; uint64_t v___x_428_; size_t v___x_429_; lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_424_ = lean_st_ref_get(v_a_422_);
lean_dec(v___x_424_);
v___x_425_ = lean_st_ref_get(v_a_418_);
v_share_426_ = lean_ctor_get(v___x_425_, 0);
lean_inc_ref(v_share_426_);
lean_dec(v___x_425_);
v___x_427_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy;
v___x_428_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_416_);
v___x_429_ = lean_uint64_to_usize(v___x_428_);
lean_inc_ref(v_e_416_);
v___x_430_ = l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg(v_share_426_, v___x_429_, v_e_416_, v___x_427_);
v___x_431_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_430_, v_e_416_);
lean_dec_ref(v_e_416_);
lean_dec_ref(v___x_430_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_432_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__3, &l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__3_once, _init_l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__3);
v___x_433_ = l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0(v___x_432_, v_a_417_, v_a_418_, v_a_419_, v_a_420_, v_a_421_, v_a_422_);
return v___x_433_;
}
else
{
lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_434_ = lean_box(0);
v___x_435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
return v___x_435_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared___boxed(lean_object* v_e_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_e_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_);
lean_dec(v_a_442_);
lean_dec_ref(v_a_441_);
lean_dec(v_a_440_);
lean_dec_ref(v_a_439_);
lean_dec(v_a_438_);
lean_dec_ref(v_a_437_);
return v_res_444_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__0(void){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_Sym_share1___boxed), 8, 0);
return v___x_445_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__1(void){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_Sym_assertShared___boxed), 8, 0);
return v___x_446_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__2(void){
_start:
{
lean_object* v___x_447_; 
v___x_447_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_isDebugEnabled___boxed), 7, 0);
return v___x_447_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__3(void){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_448_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__2, &l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__2_once, _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__2);
v___x_449_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__1, &l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__1_once, _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__1);
v___x_450_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__0, &l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__0_once, _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__0);
v___x_451_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
lean_ctor_set(v___x_451_, 1, v___x_449_);
lean_ctor_set(v___x_451_, 2, v___x_448_);
return v___x_451_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM(void){
_start:
{
lean_object* v___x_452_; 
v___x_452_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__3, &l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__3_once, _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__3);
return v___x_452_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__0(void){
_start:
{
lean_object* v___f_453_; 
v___f_453_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq___boxed), 2, 0);
return v___f_453_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__1(void){
_start:
{
lean_object* v___f_454_; 
v___f_454_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___boxed), 1, 0);
return v___f_454_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2(void){
_start:
{
lean_object* v___f_455_; lean_object* v___f_456_; lean_object* v___x_457_; 
v___f_455_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__1, &l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__1_once, _init_l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__1);
v___f_456_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__0, &l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__0_once, _init_l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__0);
v___x_457_ = l_Lean_PersistentHashMap_empty(lean_box(0), lean_box(0), v___f_456_, v___f_455_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___redArg(lean_object* v_k_458_, lean_object* v_a_459_, lean_object* v_a_460_){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v_share_464_; lean_object* v_maxFVar_465_; lean_object* v_proofInstInfo_466_; lean_object* v_inferType_467_; lean_object* v_getLevel_468_; lean_object* v_congrInfo_469_; lean_object* v_defEqI_470_; lean_object* v_extensions_471_; lean_object* v_issues_472_; lean_object* v_canon_473_; uint8_t v_debug_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_512_; 
v___x_462_ = lean_st_ref_get(v_a_460_);
lean_dec(v___x_462_);
v___x_463_ = lean_st_ref_take(v_a_459_);
v_share_464_ = lean_ctor_get(v___x_463_, 0);
v_maxFVar_465_ = lean_ctor_get(v___x_463_, 1);
v_proofInstInfo_466_ = lean_ctor_get(v___x_463_, 2);
v_inferType_467_ = lean_ctor_get(v___x_463_, 3);
v_getLevel_468_ = lean_ctor_get(v___x_463_, 4);
v_congrInfo_469_ = lean_ctor_get(v___x_463_, 5);
v_defEqI_470_ = lean_ctor_get(v___x_463_, 6);
v_extensions_471_ = lean_ctor_get(v___x_463_, 7);
v_issues_472_ = lean_ctor_get(v___x_463_, 8);
v_canon_473_ = lean_ctor_get(v___x_463_, 9);
v_debug_474_ = lean_ctor_get_uint8(v___x_463_, sizeof(void*)*10);
v_isSharedCheck_512_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_512_ == 0)
{
v___x_476_ = v___x_463_;
v_isShared_477_ = v_isSharedCheck_512_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_canon_473_);
lean_inc(v_issues_472_);
lean_inc(v_extensions_471_);
lean_inc(v_defEqI_470_);
lean_inc(v_congrInfo_469_);
lean_inc(v_getLevel_468_);
lean_inc(v_inferType_467_);
lean_inc(v_proofInstInfo_466_);
lean_inc(v_maxFVar_465_);
lean_inc(v_share_464_);
lean_dec(v___x_463_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_512_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_478_; lean_object* v___x_480_; 
v___x_478_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2, &l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2_once, _init_l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2);
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 0, v___x_478_);
v___x_480_ = v___x_476_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v___x_478_);
lean_ctor_set(v_reuseFailAlloc_511_, 1, v_maxFVar_465_);
lean_ctor_set(v_reuseFailAlloc_511_, 2, v_proofInstInfo_466_);
lean_ctor_set(v_reuseFailAlloc_511_, 3, v_inferType_467_);
lean_ctor_set(v_reuseFailAlloc_511_, 4, v_getLevel_468_);
lean_ctor_set(v_reuseFailAlloc_511_, 5, v_congrInfo_469_);
lean_ctor_set(v_reuseFailAlloc_511_, 6, v_defEqI_470_);
lean_ctor_set(v_reuseFailAlloc_511_, 7, v_extensions_471_);
lean_ctor_set(v_reuseFailAlloc_511_, 8, v_issues_472_);
lean_ctor_set(v_reuseFailAlloc_511_, 9, v_canon_473_);
lean_ctor_set_uint8(v_reuseFailAlloc_511_, sizeof(void*)*10, v_debug_474_);
v___x_480_ = v_reuseFailAlloc_511_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; uint8_t v_debug_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v_fst_487_; lean_object* v_snd_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v_maxFVar_491_; lean_object* v_proofInstInfo_492_; lean_object* v_inferType_493_; lean_object* v_getLevel_494_; lean_object* v_congrInfo_495_; lean_object* v_defEqI_496_; lean_object* v_extensions_497_; lean_object* v_issues_498_; lean_object* v_canon_499_; uint8_t v_debug_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_509_; 
v___x_481_ = lean_st_ref_set(v_a_459_, v___x_480_);
v___x_482_ = lean_st_ref_get(v_a_460_);
lean_dec(v___x_482_);
v___x_483_ = lean_st_ref_get(v_a_459_);
v_debug_484_ = lean_ctor_get_uint8(v___x_483_, sizeof(void*)*10);
lean_dec(v___x_483_);
v___x_485_ = lean_box(v_debug_484_);
v___x_486_ = lean_apply_2(v_k_458_, v___x_485_, v_share_464_);
v_fst_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_fst_487_);
v_snd_488_ = lean_ctor_get(v___x_486_, 1);
lean_inc(v_snd_488_);
lean_dec_ref(v___x_486_);
v___x_489_ = lean_st_ref_get(v_a_460_);
lean_dec(v___x_489_);
v___x_490_ = lean_st_ref_take(v_a_459_);
v_maxFVar_491_ = lean_ctor_get(v___x_490_, 1);
v_proofInstInfo_492_ = lean_ctor_get(v___x_490_, 2);
v_inferType_493_ = lean_ctor_get(v___x_490_, 3);
v_getLevel_494_ = lean_ctor_get(v___x_490_, 4);
v_congrInfo_495_ = lean_ctor_get(v___x_490_, 5);
v_defEqI_496_ = lean_ctor_get(v___x_490_, 6);
v_extensions_497_ = lean_ctor_get(v___x_490_, 7);
v_issues_498_ = lean_ctor_get(v___x_490_, 8);
v_canon_499_ = lean_ctor_get(v___x_490_, 9);
v_debug_500_ = lean_ctor_get_uint8(v___x_490_, sizeof(void*)*10);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_509_ == 0)
{
lean_object* v_unused_510_; 
v_unused_510_ = lean_ctor_get(v___x_490_, 0);
lean_dec(v_unused_510_);
v___x_502_ = v___x_490_;
v_isShared_503_ = v_isSharedCheck_509_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_canon_499_);
lean_inc(v_issues_498_);
lean_inc(v_extensions_497_);
lean_inc(v_defEqI_496_);
lean_inc(v_congrInfo_495_);
lean_inc(v_getLevel_494_);
lean_inc(v_inferType_493_);
lean_inc(v_proofInstInfo_492_);
lean_inc(v_maxFVar_491_);
lean_dec(v___x_490_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_509_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_505_; 
if (v_isShared_503_ == 0)
{
lean_ctor_set(v___x_502_, 0, v_snd_488_);
v___x_505_ = v___x_502_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_snd_488_);
lean_ctor_set(v_reuseFailAlloc_508_, 1, v_maxFVar_491_);
lean_ctor_set(v_reuseFailAlloc_508_, 2, v_proofInstInfo_492_);
lean_ctor_set(v_reuseFailAlloc_508_, 3, v_inferType_493_);
lean_ctor_set(v_reuseFailAlloc_508_, 4, v_getLevel_494_);
lean_ctor_set(v_reuseFailAlloc_508_, 5, v_congrInfo_495_);
lean_ctor_set(v_reuseFailAlloc_508_, 6, v_defEqI_496_);
lean_ctor_set(v_reuseFailAlloc_508_, 7, v_extensions_497_);
lean_ctor_set(v_reuseFailAlloc_508_, 8, v_issues_498_);
lean_ctor_set(v_reuseFailAlloc_508_, 9, v_canon_499_);
lean_ctor_set_uint8(v_reuseFailAlloc_508_, sizeof(void*)*10, v_debug_500_);
v___x_505_ = v_reuseFailAlloc_508_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_506_ = lean_st_ref_set(v_a_459_, v___x_505_);
v___x_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_507_, 0, v_fst_487_);
return v___x_507_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___boxed(lean_object* v_k_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lean_Meta_Sym_Internal_liftBuilderM___redArg(v_k_513_, v_a_514_, v_a_515_);
lean_dec(v_a_515_);
lean_dec(v_a_514_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM(lean_object* v_00_u03b1_518_, lean_object* v_k_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v_share_529_; lean_object* v_maxFVar_530_; lean_object* v_proofInstInfo_531_; lean_object* v_inferType_532_; lean_object* v_getLevel_533_; lean_object* v_congrInfo_534_; lean_object* v_defEqI_535_; lean_object* v_extensions_536_; lean_object* v_issues_537_; lean_object* v_canon_538_; uint8_t v_debug_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_577_; 
v___x_527_ = lean_st_ref_get(v_a_525_);
lean_dec(v___x_527_);
v___x_528_ = lean_st_ref_take(v_a_521_);
v_share_529_ = lean_ctor_get(v___x_528_, 0);
v_maxFVar_530_ = lean_ctor_get(v___x_528_, 1);
v_proofInstInfo_531_ = lean_ctor_get(v___x_528_, 2);
v_inferType_532_ = lean_ctor_get(v___x_528_, 3);
v_getLevel_533_ = lean_ctor_get(v___x_528_, 4);
v_congrInfo_534_ = lean_ctor_get(v___x_528_, 5);
v_defEqI_535_ = lean_ctor_get(v___x_528_, 6);
v_extensions_536_ = lean_ctor_get(v___x_528_, 7);
v_issues_537_ = lean_ctor_get(v___x_528_, 8);
v_canon_538_ = lean_ctor_get(v___x_528_, 9);
v_debug_539_ = lean_ctor_get_uint8(v___x_528_, sizeof(void*)*10);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_577_ == 0)
{
v___x_541_ = v___x_528_;
v_isShared_542_ = v_isSharedCheck_577_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_canon_538_);
lean_inc(v_issues_537_);
lean_inc(v_extensions_536_);
lean_inc(v_defEqI_535_);
lean_inc(v_congrInfo_534_);
lean_inc(v_getLevel_533_);
lean_inc(v_inferType_532_);
lean_inc(v_proofInstInfo_531_);
lean_inc(v_maxFVar_530_);
lean_inc(v_share_529_);
lean_dec(v___x_528_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_577_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_543_; lean_object* v___x_545_; 
v___x_543_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2, &l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2_once, _init_l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2);
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 0, v___x_543_);
v___x_545_ = v___x_541_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_543_);
lean_ctor_set(v_reuseFailAlloc_576_, 1, v_maxFVar_530_);
lean_ctor_set(v_reuseFailAlloc_576_, 2, v_proofInstInfo_531_);
lean_ctor_set(v_reuseFailAlloc_576_, 3, v_inferType_532_);
lean_ctor_set(v_reuseFailAlloc_576_, 4, v_getLevel_533_);
lean_ctor_set(v_reuseFailAlloc_576_, 5, v_congrInfo_534_);
lean_ctor_set(v_reuseFailAlloc_576_, 6, v_defEqI_535_);
lean_ctor_set(v_reuseFailAlloc_576_, 7, v_extensions_536_);
lean_ctor_set(v_reuseFailAlloc_576_, 8, v_issues_537_);
lean_ctor_set(v_reuseFailAlloc_576_, 9, v_canon_538_);
lean_ctor_set_uint8(v_reuseFailAlloc_576_, sizeof(void*)*10, v_debug_539_);
v___x_545_ = v_reuseFailAlloc_576_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; uint8_t v_debug_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v_fst_552_; lean_object* v_snd_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v_maxFVar_556_; lean_object* v_proofInstInfo_557_; lean_object* v_inferType_558_; lean_object* v_getLevel_559_; lean_object* v_congrInfo_560_; lean_object* v_defEqI_561_; lean_object* v_extensions_562_; lean_object* v_issues_563_; lean_object* v_canon_564_; uint8_t v_debug_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_574_; 
v___x_546_ = lean_st_ref_set(v_a_521_, v___x_545_);
v___x_547_ = lean_st_ref_get(v_a_525_);
lean_dec(v___x_547_);
v___x_548_ = lean_st_ref_get(v_a_521_);
v_debug_549_ = lean_ctor_get_uint8(v___x_548_, sizeof(void*)*10);
lean_dec(v___x_548_);
v___x_550_ = lean_box(v_debug_549_);
v___x_551_ = lean_apply_2(v_k_519_, v___x_550_, v_share_529_);
v_fst_552_ = lean_ctor_get(v___x_551_, 0);
lean_inc(v_fst_552_);
v_snd_553_ = lean_ctor_get(v___x_551_, 1);
lean_inc(v_snd_553_);
lean_dec_ref(v___x_551_);
v___x_554_ = lean_st_ref_get(v_a_525_);
lean_dec(v___x_554_);
v___x_555_ = lean_st_ref_take(v_a_521_);
v_maxFVar_556_ = lean_ctor_get(v___x_555_, 1);
v_proofInstInfo_557_ = lean_ctor_get(v___x_555_, 2);
v_inferType_558_ = lean_ctor_get(v___x_555_, 3);
v_getLevel_559_ = lean_ctor_get(v___x_555_, 4);
v_congrInfo_560_ = lean_ctor_get(v___x_555_, 5);
v_defEqI_561_ = lean_ctor_get(v___x_555_, 6);
v_extensions_562_ = lean_ctor_get(v___x_555_, 7);
v_issues_563_ = lean_ctor_get(v___x_555_, 8);
v_canon_564_ = lean_ctor_get(v___x_555_, 9);
v_debug_565_ = lean_ctor_get_uint8(v___x_555_, sizeof(void*)*10);
v_isSharedCheck_574_ = !lean_is_exclusive(v___x_555_);
if (v_isSharedCheck_574_ == 0)
{
lean_object* v_unused_575_; 
v_unused_575_ = lean_ctor_get(v___x_555_, 0);
lean_dec(v_unused_575_);
v___x_567_ = v___x_555_;
v_isShared_568_ = v_isSharedCheck_574_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_canon_564_);
lean_inc(v_issues_563_);
lean_inc(v_extensions_562_);
lean_inc(v_defEqI_561_);
lean_inc(v_congrInfo_560_);
lean_inc(v_getLevel_559_);
lean_inc(v_inferType_558_);
lean_inc(v_proofInstInfo_557_);
lean_inc(v_maxFVar_556_);
lean_dec(v___x_555_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_574_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 0, v_snd_553_);
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_snd_553_);
lean_ctor_set(v_reuseFailAlloc_573_, 1, v_maxFVar_556_);
lean_ctor_set(v_reuseFailAlloc_573_, 2, v_proofInstInfo_557_);
lean_ctor_set(v_reuseFailAlloc_573_, 3, v_inferType_558_);
lean_ctor_set(v_reuseFailAlloc_573_, 4, v_getLevel_559_);
lean_ctor_set(v_reuseFailAlloc_573_, 5, v_congrInfo_560_);
lean_ctor_set(v_reuseFailAlloc_573_, 6, v_defEqI_561_);
lean_ctor_set(v_reuseFailAlloc_573_, 7, v_extensions_562_);
lean_ctor_set(v_reuseFailAlloc_573_, 8, v_issues_563_);
lean_ctor_set(v_reuseFailAlloc_573_, 9, v_canon_564_);
lean_ctor_set_uint8(v_reuseFailAlloc_573_, sizeof(void*)*10, v_debug_565_);
v___x_570_ = v_reuseFailAlloc_573_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = lean_st_ref_set(v_a_521_, v___x_570_);
v___x_572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_572_, 0, v_fst_552_);
return v___x_572_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___boxed(lean_object* v_00_u03b1_578_, lean_object* v_k_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Lean_Meta_Sym_Internal_liftBuilderM(v_00_u03b1_578_, v_k_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
lean_dec(v_a_585_);
lean_dec_ref(v_a_584_);
lean_dec(v_a_583_);
lean_dec_ref(v_a_582_);
lean_dec(v_a_581_);
lean_dec_ref(v_a_580_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_share1___redArg(lean_object* v_e_588_, lean_object* v_a_589_){
_start:
{
lean_object* v___x_590_; uint64_t v___x_591_; size_t v___x_592_; lean_object* v___x_593_; uint8_t v___x_594_; 
v___x_590_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy;
v___x_591_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_588_);
v___x_592_ = lean_uint64_to_usize(v___x_591_);
lean_inc_ref(v_e_588_);
lean_inc_ref(v_a_589_);
v___x_593_ = l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg(v_a_589_, v___x_592_, v_e_588_, v___x_590_);
v___x_594_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_593_, v___x_590_);
if (v___x_594_ == 0)
{
lean_object* v___x_595_; 
lean_dec_ref(v_e_588_);
v___x_595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_595_, 0, v___x_593_);
lean_ctor_set(v___x_595_, 1, v_a_589_);
return v___x_595_;
}
else
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
lean_dec_ref(v___x_593_);
v___x_596_ = lean_box(0);
lean_inc_ref(v_e_588_);
v___x_597_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1___redArg(v_a_589_, v_e_588_, v___x_596_);
v___x_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_598_, 0, v_e_588_);
lean_ctor_set(v___x_598_, 1, v___x_597_);
return v___x_598_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_share1(lean_object* v_e_599_, uint8_t v_a_600_, lean_object* v_a_601_){
_start:
{
lean_object* v___x_602_; 
v___x_602_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v_e_599_, v_a_601_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_share1___boxed(lean_object* v_e_603_, lean_object* v_a_604_, lean_object* v_a_605_){
_start:
{
uint8_t v_a_boxed_606_; lean_object* v_res_607_; 
v_a_boxed_606_ = lean_unbox(v_a_604_);
v_res_607_ = l_Lean_Meta_Sym_Internal_Builder_share1(v_e_603_, v_a_boxed_606_, v_a_605_);
return v_res_607_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__0(void){
_start:
{
lean_object* v___f_608_; 
v___f_608_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_608_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__1(void){
_start:
{
lean_object* v___f_609_; 
v___f_609_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_609_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__2(void){
_start:
{
lean_object* v___f_610_; 
v___f_610_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_610_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__3(void){
_start:
{
lean_object* v___f_611_; 
v___f_611_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_611_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__4(void){
_start:
{
lean_object* v___f_612_; 
v___f_612_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_612_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__5(void){
_start:
{
lean_object* v___f_613_; 
v___f_613_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_613_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__6(void){
_start:
{
lean_object* v___f_614_; 
v___f_614_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_614_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1(lean_object* v_msg_615_, uint8_t v___y_616_, lean_object* v___y_617_){
_start:
{
lean_object* v___f_618_; lean_object* v___f_619_; lean_object* v___f_620_; lean_object* v___f_621_; lean_object* v___f_622_; lean_object* v___f_623_; lean_object* v___f_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___f_628_; lean_object* v___f_629_; lean_object* v___f_630_; lean_object* v___f_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___f_640_; lean_object* v___x_692__overap_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v___f_618_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__0, &l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__0_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__0);
v___f_619_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__1, &l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__1_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__1);
v___f_620_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__2, &l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__2_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__2);
v___f_621_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__3, &l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__3_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__3);
v___f_622_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__4, &l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__4_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__4);
v___f_623_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__5, &l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__5_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__5);
v___f_624_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__6, &l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__6_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__6);
v___x_625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_625_, 0, v___f_618_);
lean_ctor_set(v___x_625_, 1, v___f_619_);
v___x_626_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
lean_ctor_set(v___x_626_, 1, v___f_620_);
lean_ctor_set(v___x_626_, 2, v___f_621_);
lean_ctor_set(v___x_626_, 3, v___f_622_);
lean_ctor_set(v___x_626_, 4, v___f_623_);
v___x_627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
lean_ctor_set(v___x_627_, 1, v___f_624_);
lean_inc_ref_n(v___x_627_, 6);
v___f_628_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_628_, 0, v___x_627_);
v___f_629_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_629_, 0, v___x_627_);
v___f_630_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_630_, 0, v___x_627_);
v___f_631_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_631_, 0, v___x_627_);
v___x_632_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_632_, 0, lean_box(0));
lean_closure_set(v___x_632_, 1, lean_box(0));
lean_closure_set(v___x_632_, 2, v___x_627_);
v___x_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
lean_ctor_set(v___x_633_, 1, v___f_628_);
v___x_634_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_634_, 0, lean_box(0));
lean_closure_set(v___x_634_, 1, lean_box(0));
lean_closure_set(v___x_634_, 2, v___x_627_);
v___x_635_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_635_, 0, v___x_633_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
lean_ctor_set(v___x_635_, 2, v___f_629_);
lean_ctor_set(v___x_635_, 3, v___f_630_);
lean_ctor_set(v___x_635_, 4, v___f_631_);
v___x_636_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_636_, 0, lean_box(0));
lean_closure_set(v___x_636_, 1, lean_box(0));
lean_closure_set(v___x_636_, 2, v___x_627_);
v___x_637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_635_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v___x_638_ = lean_box(0);
v___x_639_ = l_instInhabitedOfMonad___redArg(v___x_637_, v___x_638_);
v___f_640_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_640_, 0, v___x_639_);
v___x_692__overap_641_ = lean_panic_fn_borrowed(v___f_640_, v_msg_615_);
lean_dec_ref(v___f_640_);
v___x_642_ = lean_box(v___y_616_);
v___x_643_ = lean_apply_2(v___x_692__overap_641_, v___x_642_, v___y_617_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___boxed(lean_object* v_msg_644_, lean_object* v___y_645_, lean_object* v___y_646_){
_start:
{
uint8_t v___y_825__boxed_647_; lean_object* v_res_648_; 
v___y_825__boxed_647_ = lean_unbox(v___y_645_);
v_res_648_ = l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1(v_msg_644_, v___y_825__boxed_647_, v___y_646_);
return v_res_648_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___redArg(lean_object* v_keys_649_, lean_object* v_i_650_, lean_object* v_k_651_){
_start:
{
lean_object* v___x_652_; uint8_t v___x_653_; 
v___x_652_ = lean_array_get_size(v_keys_649_);
v___x_653_ = lean_nat_dec_lt(v_i_650_, v___x_652_);
if (v___x_653_ == 0)
{
lean_dec_ref(v_k_651_);
lean_dec(v_i_650_);
return v___x_653_;
}
else
{
lean_object* v_k_x27_654_; uint8_t v___x_655_; 
v_k_x27_654_ = lean_array_fget_borrowed(v_keys_649_, v_i_650_);
lean_inc(v_k_x27_654_);
lean_inc_ref(v_k_651_);
v___x_655_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_651_, v_k_x27_654_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_656_ = lean_unsigned_to_nat(1u);
v___x_657_ = lean_nat_add(v_i_650_, v___x_656_);
lean_dec(v_i_650_);
v_i_650_ = v___x_657_;
goto _start;
}
else
{
lean_dec_ref(v_k_651_);
lean_dec(v_i_650_);
return v___x_655_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_keys_659_, lean_object* v_i_660_, lean_object* v_k_661_){
_start:
{
uint8_t v_res_662_; lean_object* v_r_663_; 
v_res_662_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___redArg(v_keys_659_, v_i_660_, v_k_661_);
lean_dec_ref(v_keys_659_);
v_r_663_ = lean_box(v_res_662_);
return v_r_663_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___redArg(lean_object* v_x_664_, size_t v_x_665_, lean_object* v_x_666_){
_start:
{
if (lean_obj_tag(v_x_664_) == 0)
{
lean_object* v_es_667_; lean_object* v___x_668_; size_t v___x_669_; size_t v___x_670_; size_t v___x_671_; lean_object* v_j_672_; lean_object* v___x_673_; 
v_es_667_ = lean_ctor_get(v_x_664_, 0);
lean_inc_ref(v_es_667_);
lean_dec_ref(v_x_664_);
v___x_668_ = lean_box(2);
v___x_669_ = ((size_t)5ULL);
v___x_670_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__1);
v___x_671_ = lean_usize_land(v_x_665_, v___x_670_);
v_j_672_ = lean_usize_to_nat(v___x_671_);
v___x_673_ = lean_array_get(v___x_668_, v_es_667_, v_j_672_);
lean_dec(v_j_672_);
lean_dec_ref(v_es_667_);
switch(lean_obj_tag(v___x_673_))
{
case 0:
{
lean_object* v_key_674_; uint8_t v___x_675_; 
v_key_674_ = lean_ctor_get(v___x_673_, 0);
lean_inc(v_key_674_);
lean_dec_ref(v___x_673_);
v___x_675_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_666_, v_key_674_);
return v___x_675_;
}
case 1:
{
lean_object* v_node_676_; size_t v___x_677_; 
v_node_676_ = lean_ctor_get(v___x_673_, 0);
lean_inc(v_node_676_);
lean_dec_ref(v___x_673_);
v___x_677_ = lean_usize_shift_right(v_x_665_, v___x_669_);
v_x_664_ = v_node_676_;
v_x_665_ = v___x_677_;
goto _start;
}
default: 
{
uint8_t v___x_679_; 
lean_dec_ref(v_x_666_);
v___x_679_ = 0;
return v___x_679_;
}
}
}
else
{
lean_object* v_ks_680_; lean_object* v___x_681_; uint8_t v___x_682_; 
v_ks_680_ = lean_ctor_get(v_x_664_, 0);
lean_inc_ref(v_ks_680_);
lean_dec_ref(v_x_664_);
v___x_681_ = lean_unsigned_to_nat(0u);
v___x_682_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___redArg(v_ks_680_, v___x_681_, v_x_666_);
lean_dec_ref(v_ks_680_);
return v___x_682_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___redArg___boxed(lean_object* v_x_683_, lean_object* v_x_684_, lean_object* v_x_685_){
_start:
{
size_t v_x_907__boxed_686_; uint8_t v_res_687_; lean_object* v_r_688_; 
v_x_907__boxed_686_ = lean_unbox_usize(v_x_684_);
lean_dec(v_x_684_);
v_res_687_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___redArg(v_x_683_, v_x_907__boxed_686_, v_x_685_);
v_r_688_ = lean_box(v_res_687_);
return v_r_688_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___redArg(lean_object* v_x_689_, lean_object* v_x_690_){
_start:
{
uint64_t v___x_691_; size_t v___x_692_; uint8_t v___x_693_; 
v___x_691_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_x_690_);
v___x_692_ = lean_uint64_to_usize(v___x_691_);
v___x_693_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___redArg(v_x_689_, v___x_692_, v_x_690_);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___redArg___boxed(lean_object* v_x_694_, lean_object* v_x_695_){
_start:
{
uint8_t v_res_696_; lean_object* v_r_697_; 
v_res_696_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___redArg(v_x_694_, v_x_695_);
v_r_697_ = lean_box(v_res_696_);
return v_r_697_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__0(void){
_start:
{
lean_object* v___x_698_; 
v___x_698_ = lean_mk_string_unchecked("Lean.Meta.Sym.Internal.Builder.assertShared", 43, 43);
return v___x_698_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__1(void){
_start:
{
lean_object* v___x_699_; 
v___x_699_ = lean_mk_string_unchecked("assertion violation: ( __do_lift._@.Lean.Meta.Sym.AlphaShareBuilder.4061177329._hygCtx._hyg.9.0 ).set.contains ⟨e⟩\n\n", 120, 116);
return v___x_699_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__2(void){
_start:
{
lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_700_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__1, &l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__1_once, _init_l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__1);
v___x_701_ = lean_unsigned_to_nat(2u);
v___x_702_ = lean_unsigned_to_nat(74u);
v___x_703_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__0, &l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__0_once, _init_l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__0);
v___x_704_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0, &l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0_once, _init_l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0);
v___x_705_ = l_mkPanicMessageWithDecl(v___x_704_, v___x_703_, v___x_702_, v___x_701_, v___x_700_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared(lean_object* v_e_706_, uint8_t v_a_707_, lean_object* v_a_708_){
_start:
{
uint8_t v___x_709_; 
lean_inc_ref(v_a_708_);
v___x_709_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___redArg(v_a_708_, v_e_706_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_710_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__2, &l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__2_once, _init_l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__2);
v___x_711_ = l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1(v___x_710_, v_a_707_, v_a_708_);
return v___x_711_;
}
else
{
lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_712_ = lean_box(0);
v___x_713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_713_, 0, v___x_712_);
lean_ctor_set(v___x_713_, 1, v_a_708_);
return v___x_713_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared___boxed(lean_object* v_e_714_, lean_object* v_a_715_, lean_object* v_a_716_){
_start:
{
uint8_t v_a_boxed_717_; lean_object* v_res_718_; 
v_a_boxed_717_ = lean_unbox(v_a_715_);
v_res_718_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_e_714_, v_a_boxed_717_, v_a_716_);
return v_res_718_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0(lean_object* v_00_u03b2_719_, lean_object* v_x_720_, lean_object* v_x_721_){
_start:
{
uint8_t v___x_722_; 
v___x_722_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___redArg(v_x_720_, v_x_721_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___boxed(lean_object* v_00_u03b2_723_, lean_object* v_x_724_, lean_object* v_x_725_){
_start:
{
uint8_t v_res_726_; lean_object* v_r_727_; 
v_res_726_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0(v_00_u03b2_723_, v_x_724_, v_x_725_);
v_r_727_ = lean_box(v_res_726_);
return v_r_727_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0(lean_object* v_00_u03b2_728_, lean_object* v_x_729_, size_t v_x_730_, lean_object* v_x_731_){
_start:
{
uint8_t v___x_732_; 
v___x_732_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___redArg(v_x_729_, v_x_730_, v_x_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___boxed(lean_object* v_00_u03b2_733_, lean_object* v_x_734_, lean_object* v_x_735_, lean_object* v_x_736_){
_start:
{
size_t v_x_1008__boxed_737_; uint8_t v_res_738_; lean_object* v_r_739_; 
v_x_1008__boxed_737_ = lean_unbox_usize(v_x_735_);
lean_dec(v_x_735_);
v_res_738_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0(v_00_u03b2_733_, v_x_734_, v_x_1008__boxed_737_, v_x_736_);
v_r_739_ = lean_box(v_res_738_);
return v_r_739_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_740_, lean_object* v_keys_741_, lean_object* v_vals_742_, lean_object* v_heq_743_, lean_object* v_i_744_, lean_object* v_k_745_){
_start:
{
uint8_t v___x_746_; 
v___x_746_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___redArg(v_keys_741_, v_i_744_, v_k_745_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_747_, lean_object* v_keys_748_, lean_object* v_vals_749_, lean_object* v_heq_750_, lean_object* v_i_751_, lean_object* v_k_752_){
_start:
{
uint8_t v_res_753_; lean_object* v_r_754_; 
v_res_753_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2(v_00_u03b2_747_, v_keys_748_, v_vals_749_, v_heq_750_, v_i_751_, v_k_752_);
lean_dec_ref(v_vals_749_);
lean_dec_ref(v_keys_748_);
v_r_754_ = lean_box(v_res_753_);
return v_r_754_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__0(void){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_Builder_share1___boxed), 3, 0);
return v___x_755_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__1(void){
_start:
{
lean_object* v___x_756_; 
v___x_756_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_Builder_assertShared___boxed), 3, 0);
return v___x_756_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM(void){
_start:
{
lean_object* v___f_757_; lean_object* v___f_758_; lean_object* v___f_759_; lean_object* v___f_760_; lean_object* v___f_761_; lean_object* v___f_762_; lean_object* v___f_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___f_767_; lean_object* v___f_768_; lean_object* v___f_769_; lean_object* v___f_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___f_757_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__0, &l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__0_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__0);
v___f_758_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__1, &l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__1_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__1);
v___f_759_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__2, &l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__2_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__2);
v___f_760_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__3, &l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__3_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__3);
v___f_761_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__4, &l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__4_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__4);
v___f_762_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__5, &l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__5_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__5);
v___f_763_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__6, &l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__6_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__6);
v___x_764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_764_, 0, v___f_757_);
lean_ctor_set(v___x_764_, 1, v___f_758_);
v___x_765_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_765_, 0, v___x_764_);
lean_ctor_set(v___x_765_, 1, v___f_759_);
lean_ctor_set(v___x_765_, 2, v___f_760_);
lean_ctor_set(v___x_765_, 3, v___f_761_);
lean_ctor_set(v___x_765_, 4, v___f_762_);
v___x_766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_765_);
lean_ctor_set(v___x_766_, 1, v___f_763_);
lean_inc_ref_n(v___x_766_, 6);
v___f_767_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_767_, 0, v___x_766_);
v___f_768_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_768_, 0, v___x_766_);
v___f_769_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_769_, 0, v___x_766_);
v___f_770_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_770_, 0, v___x_766_);
v___x_771_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_771_, 0, lean_box(0));
lean_closure_set(v___x_771_, 1, lean_box(0));
lean_closure_set(v___x_771_, 2, v___x_766_);
v___x_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_772_, 0, v___x_771_);
lean_ctor_set(v___x_772_, 1, v___f_767_);
v___x_773_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_773_, 0, lean_box(0));
lean_closure_set(v___x_773_, 1, lean_box(0));
lean_closure_set(v___x_773_, 2, v___x_766_);
v___x_774_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_774_, 0, v___x_772_);
lean_ctor_set(v___x_774_, 1, v___x_773_);
lean_ctor_set(v___x_774_, 2, v___f_768_);
lean_ctor_set(v___x_774_, 3, v___f_769_);
lean_ctor_set(v___x_774_, 4, v___f_770_);
v___x_775_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_775_, 0, lean_box(0));
lean_closure_set(v___x_775_, 1, lean_box(0));
lean_closure_set(v___x_775_, 2, v___x_766_);
v___x_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_776_, 0, v___x_774_);
lean_ctor_set(v___x_776_, 1, v___x_775_);
v___x_777_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__0, &l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__0_once, _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__0);
v___x_778_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__1, &l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__1_once, _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__1);
v___x_779_ = lean_alloc_closure((void*)(l_ReaderT_read___boxed), 4, 3);
lean_closure_set(v___x_779_, 0, lean_box(0));
lean_closure_set(v___x_779_, 1, lean_box(0));
lean_closure_set(v___x_779_, 2, v___x_776_);
v___x_780_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_780_, 0, v___x_777_);
lean_ctor_set(v___x_780_, 1, v___x_778_);
lean_ctor_set(v___x_780_, 2, v___x_779_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLitS___redArg(lean_object* v_inst_781_, lean_object* v_l_782_){
_start:
{
lean_object* v_share1_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v_share1_783_ = lean_ctor_get(v_inst_781_, 0);
lean_inc(v_share1_783_);
lean_dec_ref(v_inst_781_);
v___x_784_ = l_Lean_Expr_lit___override(v_l_782_);
v___x_785_ = lean_apply_1(v_share1_783_, v___x_784_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLitS(lean_object* v_m_786_, lean_object* v_inst_787_, lean_object* v_l_788_){
_start:
{
lean_object* v___x_789_; 
v___x_789_ = l_Lean_Meta_Sym_Internal_mkLitS___redArg(v_inst_787_, v_l_788_);
return v___x_789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___redArg(lean_object* v_inst_790_, lean_object* v_declName_791_, lean_object* v_us_792_){
_start:
{
lean_object* v_share1_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
v_share1_793_ = lean_ctor_get(v_inst_790_, 0);
lean_inc(v_share1_793_);
lean_dec_ref(v_inst_790_);
v___x_794_ = l_Lean_Expr_const___override(v_declName_791_, v_us_792_);
v___x_795_ = lean_apply_1(v_share1_793_, v___x_794_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS(lean_object* v_m_796_, lean_object* v_inst_797_, lean_object* v_declName_798_, lean_object* v_us_799_){
_start:
{
lean_object* v___x_800_; 
v___x_800_ = l_Lean_Meta_Sym_Internal_mkConstS___redArg(v_inst_797_, v_declName_798_, v_us_799_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___redArg(lean_object* v_inst_801_, lean_object* v_idx_802_){
_start:
{
lean_object* v_share1_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v_share1_803_ = lean_ctor_get(v_inst_801_, 0);
lean_inc(v_share1_803_);
lean_dec_ref(v_inst_801_);
v___x_804_ = l_Lean_Expr_bvar___override(v_idx_802_);
v___x_805_ = lean_apply_1(v_share1_803_, v___x_804_);
return v___x_805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS(lean_object* v_m_806_, lean_object* v_inst_807_, lean_object* v_idx_808_){
_start:
{
lean_object* v___x_809_; 
v___x_809_ = l_Lean_Meta_Sym_Internal_mkBVarS___redArg(v_inst_807_, v_idx_808_);
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___redArg(lean_object* v_inst_810_, lean_object* v_u_811_){
_start:
{
lean_object* v_share1_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v_share1_812_ = lean_ctor_get(v_inst_810_, 0);
lean_inc(v_share1_812_);
lean_dec_ref(v_inst_810_);
v___x_813_ = l_Lean_Expr_sort___override(v_u_811_);
v___x_814_ = lean_apply_1(v_share1_812_, v___x_813_);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS(lean_object* v_m_815_, lean_object* v_inst_816_, lean_object* v_u_817_){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = l_Lean_Meta_Sym_Internal_mkSortS___redArg(v_inst_816_, v_u_817_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___redArg(lean_object* v_inst_819_, lean_object* v_fvarId_820_){
_start:
{
lean_object* v_share1_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v_share1_821_ = lean_ctor_get(v_inst_819_, 0);
lean_inc(v_share1_821_);
lean_dec_ref(v_inst_819_);
v___x_822_ = l_Lean_Expr_fvar___override(v_fvarId_820_);
v___x_823_ = lean_apply_1(v_share1_821_, v___x_822_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS(lean_object* v_m_824_, lean_object* v_inst_825_, lean_object* v_fvarId_826_){
_start:
{
lean_object* v___x_827_; 
v___x_827_ = l_Lean_Meta_Sym_Internal_mkFVarS___redArg(v_inst_825_, v_fvarId_826_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMVarS___redArg(lean_object* v_inst_828_, lean_object* v_mvarId_829_){
_start:
{
lean_object* v_share1_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v_share1_830_ = lean_ctor_get(v_inst_828_, 0);
lean_inc(v_share1_830_);
lean_dec_ref(v_inst_828_);
v___x_831_ = l_Lean_Expr_mvar___override(v_mvarId_829_);
v___x_832_ = lean_apply_1(v_share1_830_, v___x_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMVarS(lean_object* v_m_833_, lean_object* v_inst_834_, lean_object* v_mvarId_835_){
_start:
{
lean_object* v___x_836_; 
v___x_836_ = l_Lean_Meta_Sym_Internal_mkMVarS___redArg(v_inst_834_, v_mvarId_835_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__0(lean_object* v_d_837_, lean_object* v_e_838_, lean_object* v_share1_839_, lean_object* v_____r_840_){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_841_ = l_Lean_Expr_mdata___override(v_d_837_, v_e_838_);
v___x_842_ = lean_apply_1(v_share1_839_, v___x_841_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1(lean_object* v___f_843_, lean_object* v_____r_844_){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = lean_apply_1(v___f_843_, v_____r_844_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__2(lean_object* v___f_846_, lean_object* v_assertShared_847_, lean_object* v_e_848_, lean_object* v_toBind_849_, lean_object* v___f_850_, uint8_t v_____do__lift_851_){
_start:
{
if (v_____do__lift_851_ == 0)
{
lean_object* v___x_852_; lean_object* v___x_853_; 
lean_dec(v___f_850_);
lean_dec(v_toBind_849_);
lean_dec_ref(v_e_848_);
lean_dec(v_assertShared_847_);
v___x_852_ = lean_box(0);
v___x_853_ = lean_apply_1(v___f_846_, v___x_852_);
return v___x_853_;
}
else
{
lean_object* v___x_854_; lean_object* v___x_855_; 
lean_dec(v___f_846_);
v___x_854_ = lean_apply_1(v_assertShared_847_, v_e_848_);
v___x_855_ = lean_apply_4(v_toBind_849_, lean_box(0), lean_box(0), v___x_854_, v___f_850_);
return v___x_855_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__2___boxed(lean_object* v___f_856_, lean_object* v_assertShared_857_, lean_object* v_e_858_, lean_object* v_toBind_859_, lean_object* v___f_860_, lean_object* v_____do__lift_861_){
_start:
{
uint8_t v_____do__lift_86__boxed_862_; lean_object* v_res_863_; 
v_____do__lift_86__boxed_862_ = lean_unbox(v_____do__lift_861_);
v_res_863_ = l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__2(v___f_856_, v_assertShared_857_, v_e_858_, v_toBind_859_, v___f_860_, v_____do__lift_86__boxed_862_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg(lean_object* v_inst_864_, lean_object* v_inst_865_, lean_object* v_d_866_, lean_object* v_e_867_){
_start:
{
lean_object* v_toBind_868_; lean_object* v_share1_869_; lean_object* v_assertShared_870_; lean_object* v_isDebugEnabled_871_; lean_object* v___f_872_; lean_object* v___f_873_; lean_object* v___f_874_; lean_object* v___x_875_; 
v_toBind_868_ = lean_ctor_get(v_inst_865_, 1);
lean_inc_n(v_toBind_868_, 2);
lean_dec_ref(v_inst_865_);
v_share1_869_ = lean_ctor_get(v_inst_864_, 0);
lean_inc(v_share1_869_);
v_assertShared_870_ = lean_ctor_get(v_inst_864_, 1);
lean_inc(v_assertShared_870_);
v_isDebugEnabled_871_ = lean_ctor_get(v_inst_864_, 2);
lean_inc(v_isDebugEnabled_871_);
lean_dec_ref(v_inst_864_);
lean_inc_ref(v_e_867_);
v___f_872_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__0), 4, 3);
lean_closure_set(v___f_872_, 0, v_d_866_);
lean_closure_set(v___f_872_, 1, v_e_867_);
lean_closure_set(v___f_872_, 2, v_share1_869_);
lean_inc_ref(v___f_872_);
v___f_873_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1), 2, 1);
lean_closure_set(v___f_873_, 0, v___f_872_);
v___f_874_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_874_, 0, v___f_872_);
lean_closure_set(v___f_874_, 1, v_assertShared_870_);
lean_closure_set(v___f_874_, 2, v_e_867_);
lean_closure_set(v___f_874_, 3, v_toBind_868_);
lean_closure_set(v___f_874_, 4, v___f_873_);
v___x_875_ = lean_apply_4(v_toBind_868_, lean_box(0), lean_box(0), v_isDebugEnabled_871_, v___f_874_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS(lean_object* v_m_876_, lean_object* v_inst_877_, lean_object* v_inst_878_, lean_object* v_d_879_, lean_object* v_e_880_){
_start:
{
lean_object* v___x_881_; 
v___x_881_ = l_Lean_Meta_Sym_Internal_mkMDataS___redArg(v_inst_877_, v_inst_878_, v_d_879_, v_e_880_);
return v___x_881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__0(lean_object* v_structName_882_, lean_object* v_idx_883_, lean_object* v_struct_884_, lean_object* v_share1_885_, lean_object* v_____r_886_){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = l_Lean_Expr_proj___override(v_structName_882_, v_idx_883_, v_struct_884_);
v___x_888_ = lean_apply_1(v_share1_885_, v___x_887_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__2(lean_object* v___f_889_, lean_object* v_assertShared_890_, lean_object* v_struct_891_, lean_object* v_toBind_892_, lean_object* v___f_893_, uint8_t v_____do__lift_894_){
_start:
{
if (v_____do__lift_894_ == 0)
{
lean_object* v___x_895_; lean_object* v___x_896_; 
lean_dec(v___f_893_);
lean_dec(v_toBind_892_);
lean_dec_ref(v_struct_891_);
lean_dec(v_assertShared_890_);
v___x_895_ = lean_box(0);
v___x_896_ = lean_apply_1(v___f_889_, v___x_895_);
return v___x_896_;
}
else
{
lean_object* v___x_897_; lean_object* v___x_898_; 
lean_dec(v___f_889_);
v___x_897_ = lean_apply_1(v_assertShared_890_, v_struct_891_);
v___x_898_ = lean_apply_4(v_toBind_892_, lean_box(0), lean_box(0), v___x_897_, v___f_893_);
return v___x_898_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__2___boxed(lean_object* v___f_899_, lean_object* v_assertShared_900_, lean_object* v_struct_901_, lean_object* v_toBind_902_, lean_object* v___f_903_, lean_object* v_____do__lift_904_){
_start:
{
uint8_t v_____do__lift_80__boxed_905_; lean_object* v_res_906_; 
v_____do__lift_80__boxed_905_ = lean_unbox(v_____do__lift_904_);
v_res_906_ = l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__2(v___f_899_, v_assertShared_900_, v_struct_901_, v_toBind_902_, v___f_903_, v_____do__lift_80__boxed_905_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___redArg(lean_object* v_inst_907_, lean_object* v_inst_908_, lean_object* v_structName_909_, lean_object* v_idx_910_, lean_object* v_struct_911_){
_start:
{
lean_object* v_toBind_912_; lean_object* v_share1_913_; lean_object* v_assertShared_914_; lean_object* v_isDebugEnabled_915_; lean_object* v___f_916_; lean_object* v___f_917_; lean_object* v___f_918_; lean_object* v___x_919_; 
v_toBind_912_ = lean_ctor_get(v_inst_908_, 1);
lean_inc_n(v_toBind_912_, 2);
lean_dec_ref(v_inst_908_);
v_share1_913_ = lean_ctor_get(v_inst_907_, 0);
lean_inc(v_share1_913_);
v_assertShared_914_ = lean_ctor_get(v_inst_907_, 1);
lean_inc(v_assertShared_914_);
v_isDebugEnabled_915_ = lean_ctor_get(v_inst_907_, 2);
lean_inc(v_isDebugEnabled_915_);
lean_dec_ref(v_inst_907_);
lean_inc_ref(v_struct_911_);
v___f_916_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__0), 5, 4);
lean_closure_set(v___f_916_, 0, v_structName_909_);
lean_closure_set(v___f_916_, 1, v_idx_910_);
lean_closure_set(v___f_916_, 2, v_struct_911_);
lean_closure_set(v___f_916_, 3, v_share1_913_);
lean_inc_ref(v___f_916_);
v___f_917_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1), 2, 1);
lean_closure_set(v___f_917_, 0, v___f_916_);
v___f_918_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_918_, 0, v___f_916_);
lean_closure_set(v___f_918_, 1, v_assertShared_914_);
lean_closure_set(v___f_918_, 2, v_struct_911_);
lean_closure_set(v___f_918_, 3, v_toBind_912_);
lean_closure_set(v___f_918_, 4, v___f_917_);
v___x_919_ = lean_apply_4(v_toBind_912_, lean_box(0), lean_box(0), v_isDebugEnabled_915_, v___f_918_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS(lean_object* v_m_920_, lean_object* v_inst_921_, lean_object* v_inst_922_, lean_object* v_structName_923_, lean_object* v_idx_924_, lean_object* v_struct_925_){
_start:
{
lean_object* v___x_926_; 
v___x_926_ = l_Lean_Meta_Sym_Internal_mkProjS___redArg(v_inst_921_, v_inst_922_, v_structName_923_, v_idx_924_, v_struct_925_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__0(lean_object* v_f_927_, lean_object* v_a_928_, lean_object* v_share1_929_, lean_object* v_____r_930_){
_start:
{
lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_931_ = l_Lean_Expr_app___override(v_f_927_, v_a_928_);
v___x_932_ = lean_apply_1(v_share1_929_, v___x_931_);
return v___x_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__2(lean_object* v_assertShared_933_, lean_object* v_a_934_, lean_object* v_toBind_935_, lean_object* v___f_936_, lean_object* v_____r_937_){
_start:
{
lean_object* v___x_938_; lean_object* v___x_939_; 
v___x_938_ = lean_apply_1(v_assertShared_933_, v_a_934_);
v___x_939_ = lean_apply_4(v_toBind_935_, lean_box(0), lean_box(0), v___x_938_, v___f_936_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__1(lean_object* v___f_940_, lean_object* v_assertShared_941_, lean_object* v_a_942_, lean_object* v_toBind_943_, lean_object* v___f_944_, lean_object* v_f_945_, uint8_t v_____do__lift_946_){
_start:
{
if (v_____do__lift_946_ == 0)
{
lean_object* v___x_947_; lean_object* v___x_948_; 
lean_dec_ref(v_f_945_);
lean_dec(v___f_944_);
lean_dec(v_toBind_943_);
lean_dec_ref(v_a_942_);
lean_dec(v_assertShared_941_);
v___x_947_ = lean_box(0);
v___x_948_ = lean_apply_1(v___f_940_, v___x_947_);
return v___x_948_;
}
else
{
lean_object* v___f_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
lean_dec(v___f_940_);
lean_inc(v_toBind_943_);
lean_inc(v_assertShared_941_);
v___f_949_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__2), 5, 4);
lean_closure_set(v___f_949_, 0, v_assertShared_941_);
lean_closure_set(v___f_949_, 1, v_a_942_);
lean_closure_set(v___f_949_, 2, v_toBind_943_);
lean_closure_set(v___f_949_, 3, v___f_944_);
v___x_950_ = lean_apply_1(v_assertShared_941_, v_f_945_);
v___x_951_ = lean_apply_4(v_toBind_943_, lean_box(0), lean_box(0), v___x_950_, v___f_949_);
return v___x_951_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__1___boxed(lean_object* v___f_952_, lean_object* v_assertShared_953_, lean_object* v_a_954_, lean_object* v_toBind_955_, lean_object* v___f_956_, lean_object* v_f_957_, lean_object* v_____do__lift_958_){
_start:
{
uint8_t v_____do__lift_105__boxed_959_; lean_object* v_res_960_; 
v_____do__lift_105__boxed_959_ = lean_unbox(v_____do__lift_958_);
v_res_960_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__1(v___f_952_, v_assertShared_953_, v_a_954_, v_toBind_955_, v___f_956_, v_f_957_, v_____do__lift_105__boxed_959_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg(lean_object* v_inst_961_, lean_object* v_inst_962_, lean_object* v_f_963_, lean_object* v_a_964_){
_start:
{
lean_object* v_toBind_965_; lean_object* v_share1_966_; lean_object* v_assertShared_967_; lean_object* v_isDebugEnabled_968_; lean_object* v___f_969_; lean_object* v___f_970_; lean_object* v___f_971_; lean_object* v___x_972_; 
v_toBind_965_ = lean_ctor_get(v_inst_962_, 1);
lean_inc_n(v_toBind_965_, 2);
lean_dec_ref(v_inst_962_);
v_share1_966_ = lean_ctor_get(v_inst_961_, 0);
lean_inc(v_share1_966_);
v_assertShared_967_ = lean_ctor_get(v_inst_961_, 1);
lean_inc(v_assertShared_967_);
v_isDebugEnabled_968_ = lean_ctor_get(v_inst_961_, 2);
lean_inc(v_isDebugEnabled_968_);
lean_dec_ref(v_inst_961_);
lean_inc_ref(v_a_964_);
lean_inc_ref(v_f_963_);
v___f_969_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__0), 4, 3);
lean_closure_set(v___f_969_, 0, v_f_963_);
lean_closure_set(v___f_969_, 1, v_a_964_);
lean_closure_set(v___f_969_, 2, v_share1_966_);
lean_inc_ref(v___f_969_);
v___f_970_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1), 2, 1);
lean_closure_set(v___f_970_, 0, v___f_969_);
v___f_971_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_971_, 0, v___f_969_);
lean_closure_set(v___f_971_, 1, v_assertShared_967_);
lean_closure_set(v___f_971_, 2, v_a_964_);
lean_closure_set(v___f_971_, 3, v_toBind_965_);
lean_closure_set(v___f_971_, 4, v___f_970_);
lean_closure_set(v___f_971_, 5, v_f_963_);
v___x_972_ = lean_apply_4(v_toBind_965_, lean_box(0), lean_box(0), v_isDebugEnabled_968_, v___f_971_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS(lean_object* v_m_973_, lean_object* v_inst_974_, lean_object* v_inst_975_, lean_object* v_f_976_, lean_object* v_a_977_){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_974_, v_inst_975_, v_f_976_, v_a_977_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__0(lean_object* v_x_979_, lean_object* v_t_980_, lean_object* v_b_981_, uint8_t v_bi_982_, lean_object* v_share1_983_, lean_object* v_____r_984_){
_start:
{
lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_985_ = l_Lean_Expr_lam___override(v_x_979_, v_t_980_, v_b_981_, v_bi_982_);
v___x_986_ = lean_apply_1(v_share1_983_, v___x_985_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__0___boxed(lean_object* v_x_987_, lean_object* v_t_988_, lean_object* v_b_989_, lean_object* v_bi_990_, lean_object* v_share1_991_, lean_object* v_____r_992_){
_start:
{
uint8_t v_bi_boxed_993_; lean_object* v_res_994_; 
v_bi_boxed_993_ = lean_unbox(v_bi_990_);
v_res_994_ = l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__0(v_x_987_, v_t_988_, v_b_989_, v_bi_boxed_993_, v_share1_991_, v_____r_992_);
return v_res_994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__2(lean_object* v_assertShared_995_, lean_object* v_b_996_, lean_object* v_toBind_997_, lean_object* v___f_998_, lean_object* v_____r_999_){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_1000_ = lean_apply_1(v_assertShared_995_, v_b_996_);
v___x_1001_ = lean_apply_4(v_toBind_997_, lean_box(0), lean_box(0), v___x_1000_, v___f_998_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__1(lean_object* v___f_1002_, lean_object* v_assertShared_1003_, lean_object* v_b_1004_, lean_object* v_toBind_1005_, lean_object* v___f_1006_, lean_object* v_t_1007_, uint8_t v_____do__lift_1008_){
_start:
{
if (v_____do__lift_1008_ == 0)
{
lean_object* v___x_1009_; lean_object* v___x_1010_; 
lean_dec_ref(v_t_1007_);
lean_dec(v___f_1006_);
lean_dec(v_toBind_1005_);
lean_dec_ref(v_b_1004_);
lean_dec(v_assertShared_1003_);
v___x_1009_ = lean_box(0);
v___x_1010_ = lean_apply_1(v___f_1002_, v___x_1009_);
return v___x_1010_;
}
else
{
lean_object* v___f_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; 
lean_dec(v___f_1002_);
lean_inc(v_toBind_1005_);
lean_inc(v_assertShared_1003_);
v___f_1011_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__2), 5, 4);
lean_closure_set(v___f_1011_, 0, v_assertShared_1003_);
lean_closure_set(v___f_1011_, 1, v_b_1004_);
lean_closure_set(v___f_1011_, 2, v_toBind_1005_);
lean_closure_set(v___f_1011_, 3, v___f_1006_);
v___x_1012_ = lean_apply_1(v_assertShared_1003_, v_t_1007_);
v___x_1013_ = lean_apply_4(v_toBind_1005_, lean_box(0), lean_box(0), v___x_1012_, v___f_1011_);
return v___x_1013_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__1___boxed(lean_object* v___f_1014_, lean_object* v_assertShared_1015_, lean_object* v_b_1016_, lean_object* v_toBind_1017_, lean_object* v___f_1018_, lean_object* v_t_1019_, lean_object* v_____do__lift_1020_){
_start:
{
uint8_t v_____do__lift_106__boxed_1021_; lean_object* v_res_1022_; 
v_____do__lift_106__boxed_1021_ = lean_unbox(v_____do__lift_1020_);
v_res_1022_ = l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__1(v___f_1014_, v_assertShared_1015_, v_b_1016_, v_toBind_1017_, v___f_1018_, v_t_1019_, v_____do__lift_106__boxed_1021_);
return v_res_1022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg(lean_object* v_inst_1023_, lean_object* v_inst_1024_, lean_object* v_x_1025_, uint8_t v_bi_1026_, lean_object* v_t_1027_, lean_object* v_b_1028_){
_start:
{
lean_object* v_toBind_1029_; lean_object* v_share1_1030_; lean_object* v_assertShared_1031_; lean_object* v_isDebugEnabled_1032_; lean_object* v___x_1033_; lean_object* v___f_1034_; lean_object* v___f_1035_; lean_object* v___f_1036_; lean_object* v___x_1037_; 
v_toBind_1029_ = lean_ctor_get(v_inst_1024_, 1);
lean_inc_n(v_toBind_1029_, 2);
lean_dec_ref(v_inst_1024_);
v_share1_1030_ = lean_ctor_get(v_inst_1023_, 0);
lean_inc(v_share1_1030_);
v_assertShared_1031_ = lean_ctor_get(v_inst_1023_, 1);
lean_inc(v_assertShared_1031_);
v_isDebugEnabled_1032_ = lean_ctor_get(v_inst_1023_, 2);
lean_inc(v_isDebugEnabled_1032_);
lean_dec_ref(v_inst_1023_);
v___x_1033_ = lean_box(v_bi_1026_);
lean_inc_ref(v_b_1028_);
lean_inc_ref(v_t_1027_);
v___f_1034_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1034_, 0, v_x_1025_);
lean_closure_set(v___f_1034_, 1, v_t_1027_);
lean_closure_set(v___f_1034_, 2, v_b_1028_);
lean_closure_set(v___f_1034_, 3, v___x_1033_);
lean_closure_set(v___f_1034_, 4, v_share1_1030_);
lean_inc_ref(v___f_1034_);
v___f_1035_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1035_, 0, v___f_1034_);
v___f_1036_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_1036_, 0, v___f_1034_);
lean_closure_set(v___f_1036_, 1, v_assertShared_1031_);
lean_closure_set(v___f_1036_, 2, v_b_1028_);
lean_closure_set(v___f_1036_, 3, v_toBind_1029_);
lean_closure_set(v___f_1036_, 4, v___f_1035_);
lean_closure_set(v___f_1036_, 5, v_t_1027_);
v___x_1037_ = lean_apply_4(v_toBind_1029_, lean_box(0), lean_box(0), v_isDebugEnabled_1032_, v___f_1036_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___boxed(lean_object* v_inst_1038_, lean_object* v_inst_1039_, lean_object* v_x_1040_, lean_object* v_bi_1041_, lean_object* v_t_1042_, lean_object* v_b_1043_){
_start:
{
uint8_t v_bi_boxed_1044_; lean_object* v_res_1045_; 
v_bi_boxed_1044_ = lean_unbox(v_bi_1041_);
v_res_1045_ = l_Lean_Meta_Sym_Internal_mkLambdaS___redArg(v_inst_1038_, v_inst_1039_, v_x_1040_, v_bi_boxed_1044_, v_t_1042_, v_b_1043_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS(lean_object* v_m_1046_, lean_object* v_inst_1047_, lean_object* v_inst_1048_, lean_object* v_x_1049_, uint8_t v_bi_1050_, lean_object* v_t_1051_, lean_object* v_b_1052_){
_start:
{
lean_object* v___x_1053_; 
v___x_1053_ = l_Lean_Meta_Sym_Internal_mkLambdaS___redArg(v_inst_1047_, v_inst_1048_, v_x_1049_, v_bi_1050_, v_t_1051_, v_b_1052_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___boxed(lean_object* v_m_1054_, lean_object* v_inst_1055_, lean_object* v_inst_1056_, lean_object* v_x_1057_, lean_object* v_bi_1058_, lean_object* v_t_1059_, lean_object* v_b_1060_){
_start:
{
uint8_t v_bi_boxed_1061_; lean_object* v_res_1062_; 
v_bi_boxed_1061_ = lean_unbox(v_bi_1058_);
v_res_1062_ = l_Lean_Meta_Sym_Internal_mkLambdaS(v_m_1054_, v_inst_1055_, v_inst_1056_, v_x_1057_, v_bi_boxed_1061_, v_t_1059_, v_b_1060_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___redArg___lam__0(lean_object* v_x_1063_, lean_object* v_t_1064_, lean_object* v_b_1065_, uint8_t v_bi_1066_, lean_object* v_share1_1067_, lean_object* v_____r_1068_){
_start:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1069_ = l_Lean_Expr_forallE___override(v_x_1063_, v_t_1064_, v_b_1065_, v_bi_1066_);
v___x_1070_ = lean_apply_1(v_share1_1067_, v___x_1069_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___redArg___lam__0___boxed(lean_object* v_x_1071_, lean_object* v_t_1072_, lean_object* v_b_1073_, lean_object* v_bi_1074_, lean_object* v_share1_1075_, lean_object* v_____r_1076_){
_start:
{
uint8_t v_bi_boxed_1077_; lean_object* v_res_1078_; 
v_bi_boxed_1077_ = lean_unbox(v_bi_1074_);
v_res_1078_ = l_Lean_Meta_Sym_Internal_mkForallS___redArg___lam__0(v_x_1071_, v_t_1072_, v_b_1073_, v_bi_boxed_1077_, v_share1_1075_, v_____r_1076_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___redArg(lean_object* v_inst_1079_, lean_object* v_inst_1080_, lean_object* v_x_1081_, uint8_t v_bi_1082_, lean_object* v_t_1083_, lean_object* v_b_1084_){
_start:
{
lean_object* v_toBind_1085_; lean_object* v_share1_1086_; lean_object* v_assertShared_1087_; lean_object* v_isDebugEnabled_1088_; lean_object* v___x_1089_; lean_object* v___f_1090_; lean_object* v___f_1091_; lean_object* v___f_1092_; lean_object* v___x_1093_; 
v_toBind_1085_ = lean_ctor_get(v_inst_1080_, 1);
lean_inc_n(v_toBind_1085_, 2);
lean_dec_ref(v_inst_1080_);
v_share1_1086_ = lean_ctor_get(v_inst_1079_, 0);
lean_inc(v_share1_1086_);
v_assertShared_1087_ = lean_ctor_get(v_inst_1079_, 1);
lean_inc(v_assertShared_1087_);
v_isDebugEnabled_1088_ = lean_ctor_get(v_inst_1079_, 2);
lean_inc(v_isDebugEnabled_1088_);
lean_dec_ref(v_inst_1079_);
v___x_1089_ = lean_box(v_bi_1082_);
lean_inc_ref(v_b_1084_);
lean_inc_ref(v_t_1083_);
v___f_1090_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkForallS___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1090_, 0, v_x_1081_);
lean_closure_set(v___f_1090_, 1, v_t_1083_);
lean_closure_set(v___f_1090_, 2, v_b_1084_);
lean_closure_set(v___f_1090_, 3, v___x_1089_);
lean_closure_set(v___f_1090_, 4, v_share1_1086_);
lean_inc_ref(v___f_1090_);
v___f_1091_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1091_, 0, v___f_1090_);
v___f_1092_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_1092_, 0, v___f_1090_);
lean_closure_set(v___f_1092_, 1, v_assertShared_1087_);
lean_closure_set(v___f_1092_, 2, v_b_1084_);
lean_closure_set(v___f_1092_, 3, v_toBind_1085_);
lean_closure_set(v___f_1092_, 4, v___f_1091_);
lean_closure_set(v___f_1092_, 5, v_t_1083_);
v___x_1093_ = lean_apply_4(v_toBind_1085_, lean_box(0), lean_box(0), v_isDebugEnabled_1088_, v___f_1092_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___redArg___boxed(lean_object* v_inst_1094_, lean_object* v_inst_1095_, lean_object* v_x_1096_, lean_object* v_bi_1097_, lean_object* v_t_1098_, lean_object* v_b_1099_){
_start:
{
uint8_t v_bi_boxed_1100_; lean_object* v_res_1101_; 
v_bi_boxed_1100_ = lean_unbox(v_bi_1097_);
v_res_1101_ = l_Lean_Meta_Sym_Internal_mkForallS___redArg(v_inst_1094_, v_inst_1095_, v_x_1096_, v_bi_boxed_1100_, v_t_1098_, v_b_1099_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS(lean_object* v_m_1102_, lean_object* v_inst_1103_, lean_object* v_inst_1104_, lean_object* v_x_1105_, uint8_t v_bi_1106_, lean_object* v_t_1107_, lean_object* v_b_1108_){
_start:
{
lean_object* v___x_1109_; 
v___x_1109_ = l_Lean_Meta_Sym_Internal_mkForallS___redArg(v_inst_1103_, v_inst_1104_, v_x_1105_, v_bi_1106_, v_t_1107_, v_b_1108_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___boxed(lean_object* v_m_1110_, lean_object* v_inst_1111_, lean_object* v_inst_1112_, lean_object* v_x_1113_, lean_object* v_bi_1114_, lean_object* v_t_1115_, lean_object* v_b_1116_){
_start:
{
uint8_t v_bi_boxed_1117_; lean_object* v_res_1118_; 
v_bi_boxed_1117_ = lean_unbox(v_bi_1114_);
v_res_1118_ = l_Lean_Meta_Sym_Internal_mkForallS(v_m_1110_, v_inst_1111_, v_inst_1112_, v_x_1113_, v_bi_boxed_1117_, v_t_1115_, v_b_1116_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__0(lean_object* v_x_1119_, lean_object* v_t_1120_, lean_object* v_v_1121_, lean_object* v_b_1122_, uint8_t v_nondep_1123_, lean_object* v_share1_1124_, lean_object* v_____r_1125_){
_start:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1126_ = l_Lean_Expr_letE___override(v_x_1119_, v_t_1120_, v_v_1121_, v_b_1122_, v_nondep_1123_);
v___x_1127_ = lean_apply_1(v_share1_1124_, v___x_1126_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__0___boxed(lean_object* v_x_1128_, lean_object* v_t_1129_, lean_object* v_v_1130_, lean_object* v_b_1131_, lean_object* v_nondep_1132_, lean_object* v_share1_1133_, lean_object* v_____r_1134_){
_start:
{
uint8_t v_nondep_boxed_1135_; lean_object* v_res_1136_; 
v_nondep_boxed_1135_ = lean_unbox(v_nondep_1132_);
v_res_1136_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__0(v_x_1128_, v_t_1129_, v_v_1130_, v_b_1131_, v_nondep_boxed_1135_, v_share1_1133_, v_____r_1134_);
return v_res_1136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__3(lean_object* v_assertShared_1137_, lean_object* v_v_1138_, lean_object* v_toBind_1139_, lean_object* v___f_1140_, lean_object* v_____r_1141_){
_start:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1142_ = lean_apply_1(v_assertShared_1137_, v_v_1138_);
v___x_1143_ = lean_apply_4(v_toBind_1139_, lean_box(0), lean_box(0), v___x_1142_, v___f_1140_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__1(lean_object* v___f_1144_, lean_object* v_assertShared_1145_, lean_object* v_b_1146_, lean_object* v_toBind_1147_, lean_object* v___f_1148_, lean_object* v_v_1149_, lean_object* v_t_1150_, uint8_t v_____do__lift_1151_){
_start:
{
if (v_____do__lift_1151_ == 0)
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
lean_dec_ref(v_t_1150_);
lean_dec_ref(v_v_1149_);
lean_dec(v___f_1148_);
lean_dec(v_toBind_1147_);
lean_dec_ref(v_b_1146_);
lean_dec(v_assertShared_1145_);
v___x_1152_ = lean_box(0);
v___x_1153_ = lean_apply_1(v___f_1144_, v___x_1152_);
return v___x_1153_;
}
else
{
lean_object* v___f_1154_; lean_object* v___f_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
lean_dec(v___f_1144_);
lean_inc_n(v_toBind_1147_, 2);
lean_inc_n(v_assertShared_1145_, 2);
v___f_1154_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__2), 5, 4);
lean_closure_set(v___f_1154_, 0, v_assertShared_1145_);
lean_closure_set(v___f_1154_, 1, v_b_1146_);
lean_closure_set(v___f_1154_, 2, v_toBind_1147_);
lean_closure_set(v___f_1154_, 3, v___f_1148_);
v___f_1155_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__3), 5, 4);
lean_closure_set(v___f_1155_, 0, v_assertShared_1145_);
lean_closure_set(v___f_1155_, 1, v_v_1149_);
lean_closure_set(v___f_1155_, 2, v_toBind_1147_);
lean_closure_set(v___f_1155_, 3, v___f_1154_);
v___x_1156_ = lean_apply_1(v_assertShared_1145_, v_t_1150_);
v___x_1157_ = lean_apply_4(v_toBind_1147_, lean_box(0), lean_box(0), v___x_1156_, v___f_1155_);
return v___x_1157_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__1___boxed(lean_object* v___f_1158_, lean_object* v_assertShared_1159_, lean_object* v_b_1160_, lean_object* v_toBind_1161_, lean_object* v___f_1162_, lean_object* v_v_1163_, lean_object* v_t_1164_, lean_object* v_____do__lift_1165_){
_start:
{
uint8_t v_____do__lift_123__boxed_1166_; lean_object* v_res_1167_; 
v_____do__lift_123__boxed_1166_ = lean_unbox(v_____do__lift_1165_);
v_res_1167_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__1(v___f_1158_, v_assertShared_1159_, v_b_1160_, v_toBind_1161_, v___f_1162_, v_v_1163_, v_t_1164_, v_____do__lift_123__boxed_1166_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg(lean_object* v_inst_1168_, lean_object* v_inst_1169_, lean_object* v_x_1170_, lean_object* v_t_1171_, lean_object* v_v_1172_, lean_object* v_b_1173_, uint8_t v_nondep_1174_){
_start:
{
lean_object* v_toBind_1175_; lean_object* v_share1_1176_; lean_object* v_assertShared_1177_; lean_object* v_isDebugEnabled_1178_; lean_object* v___x_1179_; lean_object* v___f_1180_; lean_object* v___f_1181_; lean_object* v___f_1182_; lean_object* v___x_1183_; 
v_toBind_1175_ = lean_ctor_get(v_inst_1169_, 1);
lean_inc_n(v_toBind_1175_, 2);
lean_dec_ref(v_inst_1169_);
v_share1_1176_ = lean_ctor_get(v_inst_1168_, 0);
lean_inc(v_share1_1176_);
v_assertShared_1177_ = lean_ctor_get(v_inst_1168_, 1);
lean_inc(v_assertShared_1177_);
v_isDebugEnabled_1178_ = lean_ctor_get(v_inst_1168_, 2);
lean_inc(v_isDebugEnabled_1178_);
lean_dec_ref(v_inst_1168_);
v___x_1179_ = lean_box(v_nondep_1174_);
lean_inc_ref(v_b_1173_);
lean_inc_ref(v_v_1172_);
lean_inc_ref(v_t_1171_);
v___f_1180_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_1180_, 0, v_x_1170_);
lean_closure_set(v___f_1180_, 1, v_t_1171_);
lean_closure_set(v___f_1180_, 2, v_v_1172_);
lean_closure_set(v___f_1180_, 3, v_b_1173_);
lean_closure_set(v___f_1180_, 4, v___x_1179_);
lean_closure_set(v___f_1180_, 5, v_share1_1176_);
lean_inc_ref(v___f_1180_);
v___f_1181_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1181_, 0, v___f_1180_);
v___f_1182_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_1182_, 0, v___f_1180_);
lean_closure_set(v___f_1182_, 1, v_assertShared_1177_);
lean_closure_set(v___f_1182_, 2, v_b_1173_);
lean_closure_set(v___f_1182_, 3, v_toBind_1175_);
lean_closure_set(v___f_1182_, 4, v___f_1181_);
lean_closure_set(v___f_1182_, 5, v_v_1172_);
lean_closure_set(v___f_1182_, 6, v_t_1171_);
v___x_1183_ = lean_apply_4(v_toBind_1175_, lean_box(0), lean_box(0), v_isDebugEnabled_1178_, v___f_1182_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___boxed(lean_object* v_inst_1184_, lean_object* v_inst_1185_, lean_object* v_x_1186_, lean_object* v_t_1187_, lean_object* v_v_1188_, lean_object* v_b_1189_, lean_object* v_nondep_1190_){
_start:
{
uint8_t v_nondep_boxed_1191_; lean_object* v_res_1192_; 
v_nondep_boxed_1191_ = lean_unbox(v_nondep_1190_);
v_res_1192_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg(v_inst_1184_, v_inst_1185_, v_x_1186_, v_t_1187_, v_v_1188_, v_b_1189_, v_nondep_boxed_1191_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS(lean_object* v_m_1193_, lean_object* v_inst_1194_, lean_object* v_inst_1195_, lean_object* v_x_1196_, lean_object* v_t_1197_, lean_object* v_v_1198_, lean_object* v_b_1199_, uint8_t v_nondep_1200_){
_start:
{
lean_object* v___x_1201_; 
v___x_1201_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg(v_inst_1194_, v_inst_1195_, v_x_1196_, v_t_1197_, v_v_1198_, v_b_1199_, v_nondep_1200_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___boxed(lean_object* v_m_1202_, lean_object* v_inst_1203_, lean_object* v_inst_1204_, lean_object* v_x_1205_, lean_object* v_t_1206_, lean_object* v_v_1207_, lean_object* v_b_1208_, lean_object* v_nondep_1209_){
_start:
{
uint8_t v_nondep_boxed_1210_; lean_object* v_res_1211_; 
v_nondep_boxed_1210_ = lean_unbox(v_nondep_1209_);
v_res_1211_ = l_Lean_Meta_Sym_Internal_mkLetS(v_m_1202_, v_inst_1203_, v_inst_1204_, v_x_1205_, v_t_1206_, v_v_1207_, v_b_1208_, v_nondep_boxed_1210_);
return v_res_1211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkHaveS___redArg___lam__0(lean_object* v_x_1212_, lean_object* v_t_1213_, lean_object* v_v_1214_, lean_object* v_b_1215_, lean_object* v_share1_1216_, lean_object* v_____r_1217_){
_start:
{
uint8_t v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; 
v___x_1218_ = 1;
v___x_1219_ = l_Lean_Expr_letE___override(v_x_1212_, v_t_1213_, v_v_1214_, v_b_1215_, v___x_1218_);
v___x_1220_ = lean_apply_1(v_share1_1216_, v___x_1219_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkHaveS___redArg(lean_object* v_inst_1221_, lean_object* v_inst_1222_, lean_object* v_x_1223_, lean_object* v_t_1224_, lean_object* v_v_1225_, lean_object* v_b_1226_){
_start:
{
lean_object* v_toBind_1227_; lean_object* v_share1_1228_; lean_object* v_assertShared_1229_; lean_object* v_isDebugEnabled_1230_; lean_object* v___f_1231_; lean_object* v___f_1232_; lean_object* v___f_1233_; lean_object* v___x_1234_; 
v_toBind_1227_ = lean_ctor_get(v_inst_1222_, 1);
lean_inc_n(v_toBind_1227_, 2);
lean_dec_ref(v_inst_1222_);
v_share1_1228_ = lean_ctor_get(v_inst_1221_, 0);
lean_inc(v_share1_1228_);
v_assertShared_1229_ = lean_ctor_get(v_inst_1221_, 1);
lean_inc(v_assertShared_1229_);
v_isDebugEnabled_1230_ = lean_ctor_get(v_inst_1221_, 2);
lean_inc(v_isDebugEnabled_1230_);
lean_dec_ref(v_inst_1221_);
lean_inc_ref(v_b_1226_);
lean_inc_ref(v_v_1225_);
lean_inc_ref(v_t_1224_);
v___f_1231_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkHaveS___redArg___lam__0), 6, 5);
lean_closure_set(v___f_1231_, 0, v_x_1223_);
lean_closure_set(v___f_1231_, 1, v_t_1224_);
lean_closure_set(v___f_1231_, 2, v_v_1225_);
lean_closure_set(v___f_1231_, 3, v_b_1226_);
lean_closure_set(v___f_1231_, 4, v_share1_1228_);
lean_inc_ref(v___f_1231_);
v___f_1232_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1232_, 0, v___f_1231_);
v___f_1233_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_1233_, 0, v___f_1231_);
lean_closure_set(v___f_1233_, 1, v_assertShared_1229_);
lean_closure_set(v___f_1233_, 2, v_b_1226_);
lean_closure_set(v___f_1233_, 3, v_toBind_1227_);
lean_closure_set(v___f_1233_, 4, v___f_1232_);
lean_closure_set(v___f_1233_, 5, v_v_1225_);
lean_closure_set(v___f_1233_, 6, v_t_1224_);
v___x_1234_ = lean_apply_4(v_toBind_1227_, lean_box(0), lean_box(0), v_isDebugEnabled_1230_, v___f_1233_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkHaveS(lean_object* v_m_1235_, lean_object* v_inst_1236_, lean_object* v_inst_1237_, lean_object* v_x_1238_, lean_object* v_t_1239_, lean_object* v_v_1240_, lean_object* v_b_1241_){
_start:
{
lean_object* v___x_1242_; 
v___x_1242_ = l_Lean_Meta_Sym_Internal_mkHaveS___redArg(v_inst_1236_, v_inst_1237_, v_x_1238_, v_t_1239_, v_v_1240_, v_b_1241_);
return v___x_1242_;
}
}
static lean_object* _init_l_Lean_Expr_updateAppS_x21___redArg___closed__0(void){
_start:
{
lean_object* v___x_1243_; 
v___x_1243_ = lean_mk_string_unchecked("Lean.Expr.updateAppS!", 21, 21);
return v___x_1243_;
}
}
static lean_object* _init_l_Lean_Expr_updateAppS_x21___redArg___closed__1(void){
_start:
{
lean_object* v___x_1244_; 
v___x_1244_ = lean_mk_string_unchecked("application expected", 20, 20);
return v___x_1244_;
}
}
static lean_object* _init_l_Lean_Expr_updateAppS_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1245_ = lean_obj_once(&l_Lean_Expr_updateAppS_x21___redArg___closed__1, &l_Lean_Expr_updateAppS_x21___redArg___closed__1_once, _init_l_Lean_Expr_updateAppS_x21___redArg___closed__1);
v___x_1246_ = lean_unsigned_to_nat(25u);
v___x_1247_ = lean_unsigned_to_nat(148u);
v___x_1248_ = lean_obj_once(&l_Lean_Expr_updateAppS_x21___redArg___closed__0, &l_Lean_Expr_updateAppS_x21___redArg___closed__0_once, _init_l_Lean_Expr_updateAppS_x21___redArg___closed__0);
v___x_1249_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0, &l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0_once, _init_l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0);
v___x_1250_ = l_mkPanicMessageWithDecl(v___x_1249_, v___x_1248_, v___x_1247_, v___x_1246_, v___x_1245_);
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateAppS_x21___redArg(lean_object* v_inst_1251_, lean_object* v_inst_1252_, lean_object* v_e_1253_, lean_object* v_newFn_1254_, lean_object* v_newArg_1255_){
_start:
{
uint8_t v___y_1257_; 
if (lean_obj_tag(v_e_1253_) == 5)
{
lean_object* v_fn_1262_; lean_object* v_arg_1263_; uint8_t v___x_1264_; 
v_fn_1262_ = lean_ctor_get(v_e_1253_, 0);
v_arg_1263_ = lean_ctor_get(v_e_1253_, 1);
v___x_1264_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_fn_1262_, v_newFn_1254_);
if (v___x_1264_ == 0)
{
v___y_1257_ = v___x_1264_;
goto v___jp_1256_;
}
else
{
uint8_t v___x_1265_; 
v___x_1265_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_arg_1263_, v_newArg_1255_);
v___y_1257_ = v___x_1265_;
goto v___jp_1256_;
}
}
else
{
lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
lean_dec_ref(v_newArg_1255_);
lean_dec_ref(v_newFn_1254_);
lean_dec_ref(v_e_1253_);
lean_dec_ref(v_inst_1251_);
v___x_1266_ = l_Lean_instInhabitedExpr;
v___x_1267_ = l_instInhabitedOfMonad___redArg(v_inst_1252_, v___x_1266_);
v___x_1268_ = lean_obj_once(&l_Lean_Expr_updateAppS_x21___redArg___closed__2, &l_Lean_Expr_updateAppS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateAppS_x21___redArg___closed__2);
v___x_1269_ = l_panic___redArg(v___x_1267_, v___x_1268_);
lean_dec(v___x_1267_);
return v___x_1269_;
}
v___jp_1256_:
{
if (v___y_1257_ == 0)
{
lean_object* v___x_1258_; 
lean_dec_ref(v_e_1253_);
v___x_1258_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1251_, v_inst_1252_, v_newFn_1254_, v_newArg_1255_);
return v___x_1258_;
}
else
{
lean_object* v_toApplicative_1259_; lean_object* v_toPure_1260_; lean_object* v___x_1261_; 
lean_dec_ref(v_newArg_1255_);
lean_dec_ref(v_newFn_1254_);
lean_dec_ref(v_inst_1251_);
v_toApplicative_1259_ = lean_ctor_get(v_inst_1252_, 0);
lean_inc_ref(v_toApplicative_1259_);
lean_dec_ref(v_inst_1252_);
v_toPure_1260_ = lean_ctor_get(v_toApplicative_1259_, 1);
lean_inc(v_toPure_1260_);
lean_dec_ref(v_toApplicative_1259_);
v___x_1261_ = lean_apply_2(v_toPure_1260_, lean_box(0), v_e_1253_);
return v___x_1261_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateAppS_x21(lean_object* v_m_1270_, lean_object* v_inst_1271_, lean_object* v_inst_1272_, lean_object* v_e_1273_, lean_object* v_newFn_1274_, lean_object* v_newArg_1275_){
_start:
{
uint8_t v___y_1277_; 
if (lean_obj_tag(v_e_1273_) == 5)
{
lean_object* v_fn_1282_; lean_object* v_arg_1283_; uint8_t v___x_1284_; 
v_fn_1282_ = lean_ctor_get(v_e_1273_, 0);
v_arg_1283_ = lean_ctor_get(v_e_1273_, 1);
v___x_1284_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_fn_1282_, v_newFn_1274_);
if (v___x_1284_ == 0)
{
v___y_1277_ = v___x_1284_;
goto v___jp_1276_;
}
else
{
uint8_t v___x_1285_; 
v___x_1285_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_arg_1283_, v_newArg_1275_);
v___y_1277_ = v___x_1285_;
goto v___jp_1276_;
}
}
else
{
lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; 
lean_dec_ref(v_newArg_1275_);
lean_dec_ref(v_newFn_1274_);
lean_dec_ref(v_e_1273_);
lean_dec_ref(v_inst_1271_);
v___x_1286_ = l_Lean_instInhabitedExpr;
v___x_1287_ = l_instInhabitedOfMonad___redArg(v_inst_1272_, v___x_1286_);
v___x_1288_ = lean_obj_once(&l_Lean_Expr_updateAppS_x21___redArg___closed__2, &l_Lean_Expr_updateAppS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateAppS_x21___redArg___closed__2);
v___x_1289_ = l_panic___redArg(v___x_1287_, v___x_1288_);
lean_dec(v___x_1287_);
return v___x_1289_;
}
v___jp_1276_:
{
if (v___y_1277_ == 0)
{
lean_object* v___x_1278_; 
lean_dec_ref(v_e_1273_);
v___x_1278_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1271_, v_inst_1272_, v_newFn_1274_, v_newArg_1275_);
return v___x_1278_;
}
else
{
lean_object* v_toApplicative_1279_; lean_object* v_toPure_1280_; lean_object* v___x_1281_; 
lean_dec_ref(v_newArg_1275_);
lean_dec_ref(v_newFn_1274_);
lean_dec_ref(v_inst_1271_);
v_toApplicative_1279_ = lean_ctor_get(v_inst_1272_, 0);
lean_inc_ref(v_toApplicative_1279_);
lean_dec_ref(v_inst_1272_);
v_toPure_1280_ = lean_ctor_get(v_toApplicative_1279_, 1);
lean_inc(v_toPure_1280_);
lean_dec_ref(v_toApplicative_1279_);
v___x_1281_ = lean_apply_2(v_toPure_1280_, lean_box(0), v_e_1273_);
return v___x_1281_;
}
}
}
}
static lean_object* _init_l_Lean_Expr_updateMDataS_x21___redArg___closed__0(void){
_start:
{
lean_object* v___x_1290_; 
v___x_1290_ = lean_mk_string_unchecked("Lean.Expr.updateMDataS!", 23, 23);
return v___x_1290_;
}
}
static lean_object* _init_l_Lean_Expr_updateMDataS_x21___redArg___closed__1(void){
_start:
{
lean_object* v___x_1291_; 
v___x_1291_ = lean_mk_string_unchecked("mdata expected", 14, 14);
return v___x_1291_;
}
}
static lean_object* _init_l_Lean_Expr_updateMDataS_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; 
v___x_1292_ = lean_obj_once(&l_Lean_Expr_updateMDataS_x21___redArg___closed__1, &l_Lean_Expr_updateMDataS_x21___redArg___closed__1_once, _init_l_Lean_Expr_updateMDataS_x21___redArg___closed__1);
v___x_1293_ = lean_unsigned_to_nat(24u);
v___x_1294_ = lean_unsigned_to_nat(152u);
v___x_1295_ = lean_obj_once(&l_Lean_Expr_updateMDataS_x21___redArg___closed__0, &l_Lean_Expr_updateMDataS_x21___redArg___closed__0_once, _init_l_Lean_Expr_updateMDataS_x21___redArg___closed__0);
v___x_1296_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0, &l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0_once, _init_l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0);
v___x_1297_ = l_mkPanicMessageWithDecl(v___x_1296_, v___x_1295_, v___x_1294_, v___x_1293_, v___x_1292_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateMDataS_x21___redArg(lean_object* v_inst_1298_, lean_object* v_inst_1299_, lean_object* v_e_1300_, lean_object* v_newExpr_1301_){
_start:
{
if (lean_obj_tag(v_e_1300_) == 10)
{
lean_object* v_data_1302_; lean_object* v_expr_1303_; uint8_t v___x_1304_; 
v_data_1302_ = lean_ctor_get(v_e_1300_, 0);
v_expr_1303_ = lean_ctor_get(v_e_1300_, 1);
v___x_1304_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_expr_1303_, v_newExpr_1301_);
if (v___x_1304_ == 0)
{
lean_object* v___x_1305_; 
lean_inc(v_data_1302_);
lean_dec_ref(v_e_1300_);
v___x_1305_ = l_Lean_Meta_Sym_Internal_mkMDataS___redArg(v_inst_1298_, v_inst_1299_, v_data_1302_, v_newExpr_1301_);
return v___x_1305_;
}
else
{
lean_object* v_toApplicative_1306_; lean_object* v_toPure_1307_; lean_object* v___x_1308_; 
lean_dec_ref(v_newExpr_1301_);
lean_dec_ref(v_inst_1298_);
v_toApplicative_1306_ = lean_ctor_get(v_inst_1299_, 0);
lean_inc_ref(v_toApplicative_1306_);
lean_dec_ref(v_inst_1299_);
v_toPure_1307_ = lean_ctor_get(v_toApplicative_1306_, 1);
lean_inc(v_toPure_1307_);
lean_dec_ref(v_toApplicative_1306_);
v___x_1308_ = lean_apply_2(v_toPure_1307_, lean_box(0), v_e_1300_);
return v___x_1308_;
}
}
else
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
lean_dec_ref(v_newExpr_1301_);
lean_dec_ref(v_e_1300_);
lean_dec_ref(v_inst_1298_);
v___x_1309_ = l_Lean_instInhabitedExpr;
v___x_1310_ = l_instInhabitedOfMonad___redArg(v_inst_1299_, v___x_1309_);
v___x_1311_ = lean_obj_once(&l_Lean_Expr_updateMDataS_x21___redArg___closed__2, &l_Lean_Expr_updateMDataS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateMDataS_x21___redArg___closed__2);
v___x_1312_ = l_panic___redArg(v___x_1310_, v___x_1311_);
lean_dec(v___x_1310_);
return v___x_1312_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateMDataS_x21(lean_object* v_m_1313_, lean_object* v_inst_1314_, lean_object* v_inst_1315_, lean_object* v_e_1316_, lean_object* v_newExpr_1317_){
_start:
{
if (lean_obj_tag(v_e_1316_) == 10)
{
lean_object* v_data_1318_; lean_object* v_expr_1319_; uint8_t v___x_1320_; 
v_data_1318_ = lean_ctor_get(v_e_1316_, 0);
v_expr_1319_ = lean_ctor_get(v_e_1316_, 1);
v___x_1320_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_expr_1319_, v_newExpr_1317_);
if (v___x_1320_ == 0)
{
lean_object* v___x_1321_; 
lean_inc(v_data_1318_);
lean_dec_ref(v_e_1316_);
v___x_1321_ = l_Lean_Meta_Sym_Internal_mkMDataS___redArg(v_inst_1314_, v_inst_1315_, v_data_1318_, v_newExpr_1317_);
return v___x_1321_;
}
else
{
lean_object* v_toApplicative_1322_; lean_object* v_toPure_1323_; lean_object* v___x_1324_; 
lean_dec_ref(v_newExpr_1317_);
lean_dec_ref(v_inst_1314_);
v_toApplicative_1322_ = lean_ctor_get(v_inst_1315_, 0);
lean_inc_ref(v_toApplicative_1322_);
lean_dec_ref(v_inst_1315_);
v_toPure_1323_ = lean_ctor_get(v_toApplicative_1322_, 1);
lean_inc(v_toPure_1323_);
lean_dec_ref(v_toApplicative_1322_);
v___x_1324_ = lean_apply_2(v_toPure_1323_, lean_box(0), v_e_1316_);
return v___x_1324_;
}
}
else
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
lean_dec_ref(v_newExpr_1317_);
lean_dec_ref(v_e_1316_);
lean_dec_ref(v_inst_1314_);
v___x_1325_ = l_Lean_instInhabitedExpr;
v___x_1326_ = l_instInhabitedOfMonad___redArg(v_inst_1315_, v___x_1325_);
v___x_1327_ = lean_obj_once(&l_Lean_Expr_updateMDataS_x21___redArg___closed__2, &l_Lean_Expr_updateMDataS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateMDataS_x21___redArg___closed__2);
v___x_1328_ = l_panic___redArg(v___x_1326_, v___x_1327_);
lean_dec(v___x_1326_);
return v___x_1328_;
}
}
}
static lean_object* _init_l_Lean_Expr_updateProjS_x21___redArg___closed__0(void){
_start:
{
lean_object* v___x_1329_; 
v___x_1329_ = lean_mk_string_unchecked("Lean.Expr.updateProjS!", 22, 22);
return v___x_1329_;
}
}
static lean_object* _init_l_Lean_Expr_updateProjS_x21___redArg___closed__1(void){
_start:
{
lean_object* v___x_1330_; 
v___x_1330_ = lean_mk_string_unchecked("proj expected", 13, 13);
return v___x_1330_;
}
}
static lean_object* _init_l_Lean_Expr_updateProjS_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1331_ = lean_obj_once(&l_Lean_Expr_updateProjS_x21___redArg___closed__1, &l_Lean_Expr_updateProjS_x21___redArg___closed__1_once, _init_l_Lean_Expr_updateProjS_x21___redArg___closed__1);
v___x_1332_ = lean_unsigned_to_nat(25u);
v___x_1333_ = lean_unsigned_to_nat(156u);
v___x_1334_ = lean_obj_once(&l_Lean_Expr_updateProjS_x21___redArg___closed__0, &l_Lean_Expr_updateProjS_x21___redArg___closed__0_once, _init_l_Lean_Expr_updateProjS_x21___redArg___closed__0);
v___x_1335_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0, &l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0_once, _init_l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0);
v___x_1336_ = l_mkPanicMessageWithDecl(v___x_1335_, v___x_1334_, v___x_1333_, v___x_1332_, v___x_1331_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateProjS_x21___redArg(lean_object* v_inst_1337_, lean_object* v_inst_1338_, lean_object* v_e_1339_, lean_object* v_newExpr_1340_){
_start:
{
if (lean_obj_tag(v_e_1339_) == 11)
{
lean_object* v_typeName_1341_; lean_object* v_idx_1342_; lean_object* v_struct_1343_; uint8_t v___x_1344_; 
v_typeName_1341_ = lean_ctor_get(v_e_1339_, 0);
v_idx_1342_ = lean_ctor_get(v_e_1339_, 1);
v_struct_1343_ = lean_ctor_get(v_e_1339_, 2);
v___x_1344_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_struct_1343_, v_newExpr_1340_);
if (v___x_1344_ == 0)
{
lean_object* v___x_1345_; 
lean_inc(v_idx_1342_);
lean_inc(v_typeName_1341_);
lean_dec_ref(v_e_1339_);
v___x_1345_ = l_Lean_Meta_Sym_Internal_mkProjS___redArg(v_inst_1337_, v_inst_1338_, v_typeName_1341_, v_idx_1342_, v_newExpr_1340_);
return v___x_1345_;
}
else
{
lean_object* v_toApplicative_1346_; lean_object* v_toPure_1347_; lean_object* v___x_1348_; 
lean_dec_ref(v_newExpr_1340_);
lean_dec_ref(v_inst_1337_);
v_toApplicative_1346_ = lean_ctor_get(v_inst_1338_, 0);
lean_inc_ref(v_toApplicative_1346_);
lean_dec_ref(v_inst_1338_);
v_toPure_1347_ = lean_ctor_get(v_toApplicative_1346_, 1);
lean_inc(v_toPure_1347_);
lean_dec_ref(v_toApplicative_1346_);
v___x_1348_ = lean_apply_2(v_toPure_1347_, lean_box(0), v_e_1339_);
return v___x_1348_;
}
}
else
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
lean_dec_ref(v_newExpr_1340_);
lean_dec_ref(v_e_1339_);
lean_dec_ref(v_inst_1337_);
v___x_1349_ = l_Lean_instInhabitedExpr;
v___x_1350_ = l_instInhabitedOfMonad___redArg(v_inst_1338_, v___x_1349_);
v___x_1351_ = lean_obj_once(&l_Lean_Expr_updateProjS_x21___redArg___closed__2, &l_Lean_Expr_updateProjS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateProjS_x21___redArg___closed__2);
v___x_1352_ = l_panic___redArg(v___x_1350_, v___x_1351_);
lean_dec(v___x_1350_);
return v___x_1352_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateProjS_x21(lean_object* v_m_1353_, lean_object* v_inst_1354_, lean_object* v_inst_1355_, lean_object* v_e_1356_, lean_object* v_newExpr_1357_){
_start:
{
if (lean_obj_tag(v_e_1356_) == 11)
{
lean_object* v_typeName_1358_; lean_object* v_idx_1359_; lean_object* v_struct_1360_; uint8_t v___x_1361_; 
v_typeName_1358_ = lean_ctor_get(v_e_1356_, 0);
v_idx_1359_ = lean_ctor_get(v_e_1356_, 1);
v_struct_1360_ = lean_ctor_get(v_e_1356_, 2);
v___x_1361_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_struct_1360_, v_newExpr_1357_);
if (v___x_1361_ == 0)
{
lean_object* v___x_1362_; 
lean_inc(v_idx_1359_);
lean_inc(v_typeName_1358_);
lean_dec_ref(v_e_1356_);
v___x_1362_ = l_Lean_Meta_Sym_Internal_mkProjS___redArg(v_inst_1354_, v_inst_1355_, v_typeName_1358_, v_idx_1359_, v_newExpr_1357_);
return v___x_1362_;
}
else
{
lean_object* v_toApplicative_1363_; lean_object* v_toPure_1364_; lean_object* v___x_1365_; 
lean_dec_ref(v_newExpr_1357_);
lean_dec_ref(v_inst_1354_);
v_toApplicative_1363_ = lean_ctor_get(v_inst_1355_, 0);
lean_inc_ref(v_toApplicative_1363_);
lean_dec_ref(v_inst_1355_);
v_toPure_1364_ = lean_ctor_get(v_toApplicative_1363_, 1);
lean_inc(v_toPure_1364_);
lean_dec_ref(v_toApplicative_1363_);
v___x_1365_ = lean_apply_2(v_toPure_1364_, lean_box(0), v_e_1356_);
return v___x_1365_;
}
}
else
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
lean_dec_ref(v_newExpr_1357_);
lean_dec_ref(v_e_1356_);
lean_dec_ref(v_inst_1354_);
v___x_1366_ = l_Lean_instInhabitedExpr;
v___x_1367_ = l_instInhabitedOfMonad___redArg(v_inst_1355_, v___x_1366_);
v___x_1368_ = lean_obj_once(&l_Lean_Expr_updateProjS_x21___redArg___closed__2, &l_Lean_Expr_updateProjS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateProjS_x21___redArg___closed__2);
v___x_1369_ = l_panic___redArg(v___x_1367_, v___x_1368_);
lean_dec(v___x_1367_);
return v___x_1369_;
}
}
}
static lean_object* _init_l_Lean_Expr_updateForallS_x21___redArg___closed__0(void){
_start:
{
lean_object* v___x_1370_; 
v___x_1370_ = lean_mk_string_unchecked("Lean.Expr.updateForallS!", 24, 24);
return v___x_1370_;
}
}
static lean_object* _init_l_Lean_Expr_updateForallS_x21___redArg___closed__1(void){
_start:
{
lean_object* v___x_1371_; 
v___x_1371_ = lean_mk_string_unchecked("forall expected", 15, 15);
return v___x_1371_;
}
}
static lean_object* _init_l_Lean_Expr_updateForallS_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1372_ = lean_obj_once(&l_Lean_Expr_updateForallS_x21___redArg___closed__1, &l_Lean_Expr_updateForallS_x21___redArg___closed__1_once, _init_l_Lean_Expr_updateForallS_x21___redArg___closed__1);
v___x_1373_ = lean_unsigned_to_nat(31u);
v___x_1374_ = lean_unsigned_to_nat(160u);
v___x_1375_ = lean_obj_once(&l_Lean_Expr_updateForallS_x21___redArg___closed__0, &l_Lean_Expr_updateForallS_x21___redArg___closed__0_once, _init_l_Lean_Expr_updateForallS_x21___redArg___closed__0);
v___x_1376_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0, &l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0_once, _init_l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0);
v___x_1377_ = l_mkPanicMessageWithDecl(v___x_1376_, v___x_1375_, v___x_1374_, v___x_1373_, v___x_1372_);
return v___x_1377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateForallS_x21___redArg(lean_object* v_inst_1378_, lean_object* v_inst_1379_, lean_object* v_e_1380_, lean_object* v_newDomain_1381_, lean_object* v_newBody_1382_){
_start:
{
if (lean_obj_tag(v_e_1380_) == 7)
{
lean_object* v_binderName_1383_; lean_object* v_binderType_1384_; lean_object* v_body_1385_; uint8_t v_binderInfo_1386_; uint8_t v___y_1388_; uint8_t v___x_1393_; 
v_binderName_1383_ = lean_ctor_get(v_e_1380_, 0);
v_binderType_1384_ = lean_ctor_get(v_e_1380_, 1);
v_body_1385_ = lean_ctor_get(v_e_1380_, 2);
v_binderInfo_1386_ = lean_ctor_get_uint8(v_e_1380_, sizeof(void*)*3 + 8);
v___x_1393_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_binderType_1384_, v_newDomain_1381_);
if (v___x_1393_ == 0)
{
v___y_1388_ = v___x_1393_;
goto v___jp_1387_;
}
else
{
uint8_t v___x_1394_; 
v___x_1394_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_1385_, v_newBody_1382_);
v___y_1388_ = v___x_1394_;
goto v___jp_1387_;
}
v___jp_1387_:
{
if (v___y_1388_ == 0)
{
lean_object* v___x_1389_; 
lean_inc(v_binderName_1383_);
lean_dec_ref(v_e_1380_);
v___x_1389_ = l_Lean_Meta_Sym_Internal_mkForallS___redArg(v_inst_1378_, v_inst_1379_, v_binderName_1383_, v_binderInfo_1386_, v_newDomain_1381_, v_newBody_1382_);
return v___x_1389_;
}
else
{
lean_object* v_toApplicative_1390_; lean_object* v_toPure_1391_; lean_object* v___x_1392_; 
lean_dec_ref(v_newBody_1382_);
lean_dec_ref(v_newDomain_1381_);
lean_dec_ref(v_inst_1378_);
v_toApplicative_1390_ = lean_ctor_get(v_inst_1379_, 0);
lean_inc_ref(v_toApplicative_1390_);
lean_dec_ref(v_inst_1379_);
v_toPure_1391_ = lean_ctor_get(v_toApplicative_1390_, 1);
lean_inc(v_toPure_1391_);
lean_dec_ref(v_toApplicative_1390_);
v___x_1392_ = lean_apply_2(v_toPure_1391_, lean_box(0), v_e_1380_);
return v___x_1392_;
}
}
}
else
{
lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; 
lean_dec_ref(v_newBody_1382_);
lean_dec_ref(v_newDomain_1381_);
lean_dec_ref(v_e_1380_);
lean_dec_ref(v_inst_1378_);
v___x_1395_ = l_Lean_instInhabitedExpr;
v___x_1396_ = l_instInhabitedOfMonad___redArg(v_inst_1379_, v___x_1395_);
v___x_1397_ = lean_obj_once(&l_Lean_Expr_updateForallS_x21___redArg___closed__2, &l_Lean_Expr_updateForallS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateForallS_x21___redArg___closed__2);
v___x_1398_ = l_panic___redArg(v___x_1396_, v___x_1397_);
lean_dec(v___x_1396_);
return v___x_1398_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateForallS_x21(lean_object* v_m_1399_, lean_object* v_inst_1400_, lean_object* v_inst_1401_, lean_object* v_e_1402_, lean_object* v_newDomain_1403_, lean_object* v_newBody_1404_){
_start:
{
if (lean_obj_tag(v_e_1402_) == 7)
{
lean_object* v_binderName_1405_; lean_object* v_binderType_1406_; lean_object* v_body_1407_; uint8_t v_binderInfo_1408_; uint8_t v___y_1410_; uint8_t v___x_1415_; 
v_binderName_1405_ = lean_ctor_get(v_e_1402_, 0);
v_binderType_1406_ = lean_ctor_get(v_e_1402_, 1);
v_body_1407_ = lean_ctor_get(v_e_1402_, 2);
v_binderInfo_1408_ = lean_ctor_get_uint8(v_e_1402_, sizeof(void*)*3 + 8);
v___x_1415_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_binderType_1406_, v_newDomain_1403_);
if (v___x_1415_ == 0)
{
v___y_1410_ = v___x_1415_;
goto v___jp_1409_;
}
else
{
uint8_t v___x_1416_; 
v___x_1416_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_1407_, v_newBody_1404_);
v___y_1410_ = v___x_1416_;
goto v___jp_1409_;
}
v___jp_1409_:
{
if (v___y_1410_ == 0)
{
lean_object* v___x_1411_; 
lean_inc(v_binderName_1405_);
lean_dec_ref(v_e_1402_);
v___x_1411_ = l_Lean_Meta_Sym_Internal_mkForallS___redArg(v_inst_1400_, v_inst_1401_, v_binderName_1405_, v_binderInfo_1408_, v_newDomain_1403_, v_newBody_1404_);
return v___x_1411_;
}
else
{
lean_object* v_toApplicative_1412_; lean_object* v_toPure_1413_; lean_object* v___x_1414_; 
lean_dec_ref(v_newBody_1404_);
lean_dec_ref(v_newDomain_1403_);
lean_dec_ref(v_inst_1400_);
v_toApplicative_1412_ = lean_ctor_get(v_inst_1401_, 0);
lean_inc_ref(v_toApplicative_1412_);
lean_dec_ref(v_inst_1401_);
v_toPure_1413_ = lean_ctor_get(v_toApplicative_1412_, 1);
lean_inc(v_toPure_1413_);
lean_dec_ref(v_toApplicative_1412_);
v___x_1414_ = lean_apply_2(v_toPure_1413_, lean_box(0), v_e_1402_);
return v___x_1414_;
}
}
}
else
{
lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; 
lean_dec_ref(v_newBody_1404_);
lean_dec_ref(v_newDomain_1403_);
lean_dec_ref(v_e_1402_);
lean_dec_ref(v_inst_1400_);
v___x_1417_ = l_Lean_instInhabitedExpr;
v___x_1418_ = l_instInhabitedOfMonad___redArg(v_inst_1401_, v___x_1417_);
v___x_1419_ = lean_obj_once(&l_Lean_Expr_updateForallS_x21___redArg___closed__2, &l_Lean_Expr_updateForallS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateForallS_x21___redArg___closed__2);
v___x_1420_ = l_panic___redArg(v___x_1418_, v___x_1419_);
lean_dec(v___x_1418_);
return v___x_1420_;
}
}
}
static lean_object* _init_l_Lean_Expr_updateLambdaS_x21___redArg___closed__0(void){
_start:
{
lean_object* v___x_1421_; 
v___x_1421_ = lean_mk_string_unchecked("Lean.Expr.updateLambdaS!", 24, 24);
return v___x_1421_;
}
}
static lean_object* _init_l_Lean_Expr_updateLambdaS_x21___redArg___closed__1(void){
_start:
{
lean_object* v___x_1422_; 
v___x_1422_ = lean_mk_string_unchecked("lambda expected", 15, 15);
return v___x_1422_;
}
}
static lean_object* _init_l_Lean_Expr_updateLambdaS_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1423_ = lean_obj_once(&l_Lean_Expr_updateLambdaS_x21___redArg___closed__1, &l_Lean_Expr_updateLambdaS_x21___redArg___closed__1_once, _init_l_Lean_Expr_updateLambdaS_x21___redArg___closed__1);
v___x_1424_ = lean_unsigned_to_nat(27u);
v___x_1425_ = lean_unsigned_to_nat(167u);
v___x_1426_ = lean_obj_once(&l_Lean_Expr_updateLambdaS_x21___redArg___closed__0, &l_Lean_Expr_updateLambdaS_x21___redArg___closed__0_once, _init_l_Lean_Expr_updateLambdaS_x21___redArg___closed__0);
v___x_1427_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0, &l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0_once, _init_l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0);
v___x_1428_ = l_mkPanicMessageWithDecl(v___x_1427_, v___x_1426_, v___x_1425_, v___x_1424_, v___x_1423_);
return v___x_1428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateLambdaS_x21___redArg(lean_object* v_inst_1429_, lean_object* v_inst_1430_, lean_object* v_e_1431_, lean_object* v_newDomain_1432_, lean_object* v_newBody_1433_){
_start:
{
if (lean_obj_tag(v_e_1431_) == 6)
{
lean_object* v_binderName_1434_; lean_object* v_binderType_1435_; lean_object* v_body_1436_; uint8_t v_binderInfo_1437_; uint8_t v___y_1439_; uint8_t v___x_1444_; 
v_binderName_1434_ = lean_ctor_get(v_e_1431_, 0);
v_binderType_1435_ = lean_ctor_get(v_e_1431_, 1);
v_body_1436_ = lean_ctor_get(v_e_1431_, 2);
v_binderInfo_1437_ = lean_ctor_get_uint8(v_e_1431_, sizeof(void*)*3 + 8);
v___x_1444_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_binderType_1435_, v_newDomain_1432_);
if (v___x_1444_ == 0)
{
v___y_1439_ = v___x_1444_;
goto v___jp_1438_;
}
else
{
uint8_t v___x_1445_; 
v___x_1445_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_1436_, v_newBody_1433_);
v___y_1439_ = v___x_1445_;
goto v___jp_1438_;
}
v___jp_1438_:
{
if (v___y_1439_ == 0)
{
lean_object* v___x_1440_; 
lean_inc(v_binderName_1434_);
lean_dec_ref(v_e_1431_);
v___x_1440_ = l_Lean_Meta_Sym_Internal_mkLambdaS___redArg(v_inst_1429_, v_inst_1430_, v_binderName_1434_, v_binderInfo_1437_, v_newDomain_1432_, v_newBody_1433_);
return v___x_1440_;
}
else
{
lean_object* v_toApplicative_1441_; lean_object* v_toPure_1442_; lean_object* v___x_1443_; 
lean_dec_ref(v_newBody_1433_);
lean_dec_ref(v_newDomain_1432_);
lean_dec_ref(v_inst_1429_);
v_toApplicative_1441_ = lean_ctor_get(v_inst_1430_, 0);
lean_inc_ref(v_toApplicative_1441_);
lean_dec_ref(v_inst_1430_);
v_toPure_1442_ = lean_ctor_get(v_toApplicative_1441_, 1);
lean_inc(v_toPure_1442_);
lean_dec_ref(v_toApplicative_1441_);
v___x_1443_ = lean_apply_2(v_toPure_1442_, lean_box(0), v_e_1431_);
return v___x_1443_;
}
}
}
else
{
lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
lean_dec_ref(v_newBody_1433_);
lean_dec_ref(v_newDomain_1432_);
lean_dec_ref(v_e_1431_);
lean_dec_ref(v_inst_1429_);
v___x_1446_ = l_Lean_instInhabitedExpr;
v___x_1447_ = l_instInhabitedOfMonad___redArg(v_inst_1430_, v___x_1446_);
v___x_1448_ = lean_obj_once(&l_Lean_Expr_updateLambdaS_x21___redArg___closed__2, &l_Lean_Expr_updateLambdaS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateLambdaS_x21___redArg___closed__2);
v___x_1449_ = l_panic___redArg(v___x_1447_, v___x_1448_);
lean_dec(v___x_1447_);
return v___x_1449_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateLambdaS_x21(lean_object* v_m_1450_, lean_object* v_inst_1451_, lean_object* v_inst_1452_, lean_object* v_e_1453_, lean_object* v_newDomain_1454_, lean_object* v_newBody_1455_){
_start:
{
if (lean_obj_tag(v_e_1453_) == 6)
{
lean_object* v_binderName_1456_; lean_object* v_binderType_1457_; lean_object* v_body_1458_; uint8_t v_binderInfo_1459_; uint8_t v___y_1461_; uint8_t v___x_1466_; 
v_binderName_1456_ = lean_ctor_get(v_e_1453_, 0);
v_binderType_1457_ = lean_ctor_get(v_e_1453_, 1);
v_body_1458_ = lean_ctor_get(v_e_1453_, 2);
v_binderInfo_1459_ = lean_ctor_get_uint8(v_e_1453_, sizeof(void*)*3 + 8);
v___x_1466_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_binderType_1457_, v_newDomain_1454_);
if (v___x_1466_ == 0)
{
v___y_1461_ = v___x_1466_;
goto v___jp_1460_;
}
else
{
uint8_t v___x_1467_; 
v___x_1467_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_1458_, v_newBody_1455_);
v___y_1461_ = v___x_1467_;
goto v___jp_1460_;
}
v___jp_1460_:
{
if (v___y_1461_ == 0)
{
lean_object* v___x_1462_; 
lean_inc(v_binderName_1456_);
lean_dec_ref(v_e_1453_);
v___x_1462_ = l_Lean_Meta_Sym_Internal_mkLambdaS___redArg(v_inst_1451_, v_inst_1452_, v_binderName_1456_, v_binderInfo_1459_, v_newDomain_1454_, v_newBody_1455_);
return v___x_1462_;
}
else
{
lean_object* v_toApplicative_1463_; lean_object* v_toPure_1464_; lean_object* v___x_1465_; 
lean_dec_ref(v_newBody_1455_);
lean_dec_ref(v_newDomain_1454_);
lean_dec_ref(v_inst_1451_);
v_toApplicative_1463_ = lean_ctor_get(v_inst_1452_, 0);
lean_inc_ref(v_toApplicative_1463_);
lean_dec_ref(v_inst_1452_);
v_toPure_1464_ = lean_ctor_get(v_toApplicative_1463_, 1);
lean_inc(v_toPure_1464_);
lean_dec_ref(v_toApplicative_1463_);
v___x_1465_ = lean_apply_2(v_toPure_1464_, lean_box(0), v_e_1453_);
return v___x_1465_;
}
}
}
else
{
lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; 
lean_dec_ref(v_newBody_1455_);
lean_dec_ref(v_newDomain_1454_);
lean_dec_ref(v_e_1453_);
lean_dec_ref(v_inst_1451_);
v___x_1468_ = l_Lean_instInhabitedExpr;
v___x_1469_ = l_instInhabitedOfMonad___redArg(v_inst_1452_, v___x_1468_);
v___x_1470_ = lean_obj_once(&l_Lean_Expr_updateLambdaS_x21___redArg___closed__2, &l_Lean_Expr_updateLambdaS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateLambdaS_x21___redArg___closed__2);
v___x_1471_ = l_panic___redArg(v___x_1469_, v___x_1470_);
lean_dec(v___x_1469_);
return v___x_1471_;
}
}
}
static lean_object* _init_l_Lean_Expr_updateLetS_x21___redArg___closed__0(void){
_start:
{
lean_object* v___x_1472_; 
v___x_1472_ = lean_mk_string_unchecked("Lean.Expr.updateLetS!", 21, 21);
return v___x_1472_;
}
}
static lean_object* _init_l_Lean_Expr_updateLetS_x21___redArg___closed__1(void){
_start:
{
lean_object* v___x_1473_; 
v___x_1473_ = lean_mk_string_unchecked("let expression expected", 23, 23);
return v___x_1473_;
}
}
static lean_object* _init_l_Lean_Expr_updateLetS_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; 
v___x_1474_ = lean_obj_once(&l_Lean_Expr_updateLetS_x21___redArg___closed__1, &l_Lean_Expr_updateLetS_x21___redArg___closed__1_once, _init_l_Lean_Expr_updateLetS_x21___redArg___closed__1);
v___x_1475_ = lean_unsigned_to_nat(34u);
v___x_1476_ = lean_unsigned_to_nat(174u);
v___x_1477_ = lean_obj_once(&l_Lean_Expr_updateLetS_x21___redArg___closed__0, &l_Lean_Expr_updateLetS_x21___redArg___closed__0_once, _init_l_Lean_Expr_updateLetS_x21___redArg___closed__0);
v___x_1478_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0, &l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0_once, _init_l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0);
v___x_1479_ = l_mkPanicMessageWithDecl(v___x_1478_, v___x_1477_, v___x_1476_, v___x_1475_, v___x_1474_);
return v___x_1479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateLetS_x21___redArg(lean_object* v_inst_1480_, lean_object* v_inst_1481_, lean_object* v_e_1482_, lean_object* v_newType_1483_, lean_object* v_newVal_1484_, lean_object* v_newBody_1485_){
_start:
{
if (lean_obj_tag(v_e_1482_) == 8)
{
lean_object* v_declName_1486_; lean_object* v_type_1487_; lean_object* v_value_1488_; lean_object* v_body_1489_; uint8_t v_nondep_1490_; uint8_t v___y_1492_; uint8_t v___x_1499_; 
v_declName_1486_ = lean_ctor_get(v_e_1482_, 0);
v_type_1487_ = lean_ctor_get(v_e_1482_, 1);
v_value_1488_ = lean_ctor_get(v_e_1482_, 2);
v_body_1489_ = lean_ctor_get(v_e_1482_, 3);
v_nondep_1490_ = lean_ctor_get_uint8(v_e_1482_, sizeof(void*)*4 + 8);
v___x_1499_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_type_1487_, v_newType_1483_);
if (v___x_1499_ == 0)
{
v___y_1492_ = v___x_1499_;
goto v___jp_1491_;
}
else
{
uint8_t v___x_1500_; 
v___x_1500_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_value_1488_, v_newVal_1484_);
v___y_1492_ = v___x_1500_;
goto v___jp_1491_;
}
v___jp_1491_:
{
if (v___y_1492_ == 0)
{
lean_object* v___x_1493_; 
lean_inc(v_declName_1486_);
lean_dec_ref(v_e_1482_);
v___x_1493_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg(v_inst_1480_, v_inst_1481_, v_declName_1486_, v_newType_1483_, v_newVal_1484_, v_newBody_1485_, v_nondep_1490_);
return v___x_1493_;
}
else
{
uint8_t v___x_1494_; 
v___x_1494_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_1489_, v_newBody_1485_);
if (v___x_1494_ == 0)
{
lean_object* v___x_1495_; 
lean_inc(v_declName_1486_);
lean_dec_ref(v_e_1482_);
v___x_1495_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg(v_inst_1480_, v_inst_1481_, v_declName_1486_, v_newType_1483_, v_newVal_1484_, v_newBody_1485_, v_nondep_1490_);
return v___x_1495_;
}
else
{
lean_object* v_toApplicative_1496_; lean_object* v_toPure_1497_; lean_object* v___x_1498_; 
lean_dec_ref(v_newBody_1485_);
lean_dec_ref(v_newVal_1484_);
lean_dec_ref(v_newType_1483_);
lean_dec_ref(v_inst_1480_);
v_toApplicative_1496_ = lean_ctor_get(v_inst_1481_, 0);
lean_inc_ref(v_toApplicative_1496_);
lean_dec_ref(v_inst_1481_);
v_toPure_1497_ = lean_ctor_get(v_toApplicative_1496_, 1);
lean_inc(v_toPure_1497_);
lean_dec_ref(v_toApplicative_1496_);
v___x_1498_ = lean_apply_2(v_toPure_1497_, lean_box(0), v_e_1482_);
return v___x_1498_;
}
}
}
}
else
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; 
lean_dec_ref(v_newBody_1485_);
lean_dec_ref(v_newVal_1484_);
lean_dec_ref(v_newType_1483_);
lean_dec_ref(v_e_1482_);
lean_dec_ref(v_inst_1480_);
v___x_1501_ = l_Lean_instInhabitedExpr;
v___x_1502_ = l_instInhabitedOfMonad___redArg(v_inst_1481_, v___x_1501_);
v___x_1503_ = lean_obj_once(&l_Lean_Expr_updateLetS_x21___redArg___closed__2, &l_Lean_Expr_updateLetS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateLetS_x21___redArg___closed__2);
v___x_1504_ = l_panic___redArg(v___x_1502_, v___x_1503_);
lean_dec(v___x_1502_);
return v___x_1504_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateLetS_x21(lean_object* v_m_1505_, lean_object* v_inst_1506_, lean_object* v_inst_1507_, lean_object* v_e_1508_, lean_object* v_newType_1509_, lean_object* v_newVal_1510_, lean_object* v_newBody_1511_){
_start:
{
if (lean_obj_tag(v_e_1508_) == 8)
{
lean_object* v_declName_1512_; lean_object* v_type_1513_; lean_object* v_value_1514_; lean_object* v_body_1515_; uint8_t v_nondep_1516_; uint8_t v___y_1518_; uint8_t v___x_1525_; 
v_declName_1512_ = lean_ctor_get(v_e_1508_, 0);
v_type_1513_ = lean_ctor_get(v_e_1508_, 1);
v_value_1514_ = lean_ctor_get(v_e_1508_, 2);
v_body_1515_ = lean_ctor_get(v_e_1508_, 3);
v_nondep_1516_ = lean_ctor_get_uint8(v_e_1508_, sizeof(void*)*4 + 8);
v___x_1525_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_type_1513_, v_newType_1509_);
if (v___x_1525_ == 0)
{
v___y_1518_ = v___x_1525_;
goto v___jp_1517_;
}
else
{
uint8_t v___x_1526_; 
v___x_1526_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_value_1514_, v_newVal_1510_);
v___y_1518_ = v___x_1526_;
goto v___jp_1517_;
}
v___jp_1517_:
{
if (v___y_1518_ == 0)
{
lean_object* v___x_1519_; 
lean_inc(v_declName_1512_);
lean_dec_ref(v_e_1508_);
v___x_1519_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg(v_inst_1506_, v_inst_1507_, v_declName_1512_, v_newType_1509_, v_newVal_1510_, v_newBody_1511_, v_nondep_1516_);
return v___x_1519_;
}
else
{
uint8_t v___x_1520_; 
v___x_1520_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_1515_, v_newBody_1511_);
if (v___x_1520_ == 0)
{
lean_object* v___x_1521_; 
lean_inc(v_declName_1512_);
lean_dec_ref(v_e_1508_);
v___x_1521_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg(v_inst_1506_, v_inst_1507_, v_declName_1512_, v_newType_1509_, v_newVal_1510_, v_newBody_1511_, v_nondep_1516_);
return v___x_1521_;
}
else
{
lean_object* v_toApplicative_1522_; lean_object* v_toPure_1523_; lean_object* v___x_1524_; 
lean_dec_ref(v_newBody_1511_);
lean_dec_ref(v_newVal_1510_);
lean_dec_ref(v_newType_1509_);
lean_dec_ref(v_inst_1506_);
v_toApplicative_1522_ = lean_ctor_get(v_inst_1507_, 0);
lean_inc_ref(v_toApplicative_1522_);
lean_dec_ref(v_inst_1507_);
v_toPure_1523_ = lean_ctor_get(v_toApplicative_1522_, 1);
lean_inc(v_toPure_1523_);
lean_dec_ref(v_toApplicative_1522_);
v___x_1524_ = lean_apply_2(v_toPure_1523_, lean_box(0), v_e_1508_);
return v___x_1524_;
}
}
}
}
else
{
lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; 
lean_dec_ref(v_newBody_1511_);
lean_dec_ref(v_newVal_1510_);
lean_dec_ref(v_newType_1509_);
lean_dec_ref(v_e_1508_);
lean_dec_ref(v_inst_1506_);
v___x_1527_ = l_Lean_instInhabitedExpr;
v___x_1528_ = l_instInhabitedOfMonad___redArg(v_inst_1507_, v___x_1527_);
v___x_1529_ = lean_obj_once(&l_Lean_Expr_updateLetS_x21___redArg___closed__2, &l_Lean_Expr_updateLetS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateLetS_x21___redArg___closed__2);
v___x_1530_ = l_panic___redArg(v___x_1528_, v___x_1529_);
lean_dec(v___x_1528_);
return v___x_1530_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___redArg___lam__0(lean_object* v_inst_1531_, lean_object* v_inst_1532_, lean_object* v_a_u2082_1533_, lean_object* v_____do__lift_1534_){
_start:
{
lean_object* v___x_1535_; 
v___x_1535_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1531_, v_inst_1532_, v_____do__lift_1534_, v_a_u2082_1533_);
return v___x_1535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___redArg(lean_object* v_inst_1536_, lean_object* v_inst_1537_, lean_object* v_f_1538_, lean_object* v_a_u2081_1539_, lean_object* v_a_u2082_1540_){
_start:
{
lean_object* v_toBind_1541_; lean_object* v___f_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
v_toBind_1541_ = lean_ctor_get(v_inst_1537_, 1);
lean_inc(v_toBind_1541_);
lean_inc_ref(v_inst_1537_);
lean_inc_ref(v_inst_1536_);
v___f_1542_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2082___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1542_, 0, v_inst_1536_);
lean_closure_set(v___f_1542_, 1, v_inst_1537_);
lean_closure_set(v___f_1542_, 2, v_a_u2082_1540_);
v___x_1543_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1536_, v_inst_1537_, v_f_1538_, v_a_u2081_1539_);
v___x_1544_ = lean_apply_4(v_toBind_1541_, lean_box(0), lean_box(0), v___x_1543_, v___f_1542_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082(lean_object* v_m_1545_, lean_object* v_inst_1546_, lean_object* v_inst_1547_, lean_object* v_f_1548_, lean_object* v_a_u2081_1549_, lean_object* v_a_u2082_1550_){
_start:
{
lean_object* v___x_1551_; 
v___x_1551_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___redArg(v_inst_1546_, v_inst_1547_, v_f_1548_, v_a_u2081_1549_, v_a_u2082_1550_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___redArg___lam__0(lean_object* v_inst_1552_, lean_object* v_inst_1553_, lean_object* v_a_u2083_1554_, lean_object* v_____do__lift_1555_){
_start:
{
lean_object* v___x_1556_; 
v___x_1556_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1552_, v_inst_1553_, v_____do__lift_1555_, v_a_u2083_1554_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___redArg(lean_object* v_inst_1557_, lean_object* v_inst_1558_, lean_object* v_f_1559_, lean_object* v_a_u2081_1560_, lean_object* v_a_u2082_1561_, lean_object* v_a_u2083_1562_){
_start:
{
lean_object* v_toBind_1563_; lean_object* v___f_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; 
v_toBind_1563_ = lean_ctor_get(v_inst_1558_, 1);
lean_inc(v_toBind_1563_);
lean_inc_ref(v_inst_1558_);
lean_inc_ref(v_inst_1557_);
v___f_1564_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2083___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1564_, 0, v_inst_1557_);
lean_closure_set(v___f_1564_, 1, v_inst_1558_);
lean_closure_set(v___f_1564_, 2, v_a_u2083_1562_);
v___x_1565_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___redArg(v_inst_1557_, v_inst_1558_, v_f_1559_, v_a_u2081_1560_, v_a_u2082_1561_);
v___x_1566_ = lean_apply_4(v_toBind_1563_, lean_box(0), lean_box(0), v___x_1565_, v___f_1564_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083(lean_object* v_m_1567_, lean_object* v_inst_1568_, lean_object* v_inst_1569_, lean_object* v_f_1570_, lean_object* v_a_u2081_1571_, lean_object* v_a_u2082_1572_, lean_object* v_a_u2083_1573_){
_start:
{
lean_object* v___x_1574_; 
v___x_1574_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___redArg(v_inst_1568_, v_inst_1569_, v_f_1570_, v_a_u2081_1571_, v_a_u2082_1572_, v_a_u2083_1573_);
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___redArg___lam__0(lean_object* v_inst_1575_, lean_object* v_inst_1576_, lean_object* v_a_u2084_1577_, lean_object* v_____do__lift_1578_){
_start:
{
lean_object* v___x_1579_; 
v___x_1579_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1575_, v_inst_1576_, v_____do__lift_1578_, v_a_u2084_1577_);
return v___x_1579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___redArg(lean_object* v_inst_1580_, lean_object* v_inst_1581_, lean_object* v_f_1582_, lean_object* v_a_u2081_1583_, lean_object* v_a_u2082_1584_, lean_object* v_a_u2083_1585_, lean_object* v_a_u2084_1586_){
_start:
{
lean_object* v_toBind_1587_; lean_object* v___f_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; 
v_toBind_1587_ = lean_ctor_get(v_inst_1581_, 1);
lean_inc(v_toBind_1587_);
lean_inc_ref(v_inst_1581_);
lean_inc_ref(v_inst_1580_);
v___f_1588_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2084___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1588_, 0, v_inst_1580_);
lean_closure_set(v___f_1588_, 1, v_inst_1581_);
lean_closure_set(v___f_1588_, 2, v_a_u2084_1586_);
v___x_1589_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___redArg(v_inst_1580_, v_inst_1581_, v_f_1582_, v_a_u2081_1583_, v_a_u2082_1584_, v_a_u2083_1585_);
v___x_1590_ = lean_apply_4(v_toBind_1587_, lean_box(0), lean_box(0), v___x_1589_, v___f_1588_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084(lean_object* v_m_1591_, lean_object* v_inst_1592_, lean_object* v_inst_1593_, lean_object* v_f_1594_, lean_object* v_a_u2081_1595_, lean_object* v_a_u2082_1596_, lean_object* v_a_u2083_1597_, lean_object* v_a_u2084_1598_){
_start:
{
lean_object* v___x_1599_; 
v___x_1599_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___redArg(v_inst_1592_, v_inst_1593_, v_f_1594_, v_a_u2081_1595_, v_a_u2082_1596_, v_a_u2083_1597_, v_a_u2084_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085___redArg___lam__0(lean_object* v_inst_1600_, lean_object* v_inst_1601_, lean_object* v_a_u2085_1602_, lean_object* v_____do__lift_1603_){
_start:
{
lean_object* v___x_1604_; 
v___x_1604_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1600_, v_inst_1601_, v_____do__lift_1603_, v_a_u2085_1602_);
return v___x_1604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085___redArg(lean_object* v_inst_1605_, lean_object* v_inst_1606_, lean_object* v_f_1607_, lean_object* v_a_u2081_1608_, lean_object* v_a_u2082_1609_, lean_object* v_a_u2083_1610_, lean_object* v_a_u2084_1611_, lean_object* v_a_u2085_1612_){
_start:
{
lean_object* v_toBind_1613_; lean_object* v___f_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; 
v_toBind_1613_ = lean_ctor_get(v_inst_1606_, 1);
lean_inc(v_toBind_1613_);
lean_inc_ref(v_inst_1606_);
lean_inc_ref(v_inst_1605_);
v___f_1614_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2085___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1614_, 0, v_inst_1605_);
lean_closure_set(v___f_1614_, 1, v_inst_1606_);
lean_closure_set(v___f_1614_, 2, v_a_u2085_1612_);
v___x_1615_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___redArg(v_inst_1605_, v_inst_1606_, v_f_1607_, v_a_u2081_1608_, v_a_u2082_1609_, v_a_u2083_1610_, v_a_u2084_1611_);
v___x_1616_ = lean_apply_4(v_toBind_1613_, lean_box(0), lean_box(0), v___x_1615_, v___f_1614_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085(lean_object* v_m_1617_, lean_object* v_inst_1618_, lean_object* v_inst_1619_, lean_object* v_f_1620_, lean_object* v_a_u2081_1621_, lean_object* v_a_u2082_1622_, lean_object* v_a_u2083_1623_, lean_object* v_a_u2084_1624_, lean_object* v_a_u2085_1625_){
_start:
{
lean_object* v___x_1626_; 
v___x_1626_ = l_Lean_Meta_Sym_Internal_mkAppS_u2085___redArg(v_inst_1618_, v_inst_1619_, v_f_1620_, v_a_u2081_1621_, v_a_u2082_1622_, v_a_u2083_1623_, v_a_u2084_1624_, v_a_u2085_1625_);
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2086___redArg___lam__0(lean_object* v_inst_1627_, lean_object* v_inst_1628_, lean_object* v_a_u2086_1629_, lean_object* v_____do__lift_1630_){
_start:
{
lean_object* v___x_1631_; 
v___x_1631_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1627_, v_inst_1628_, v_____do__lift_1630_, v_a_u2086_1629_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2086___redArg(lean_object* v_inst_1632_, lean_object* v_inst_1633_, lean_object* v_f_1634_, lean_object* v_a_u2081_1635_, lean_object* v_a_u2082_1636_, lean_object* v_a_u2083_1637_, lean_object* v_a_u2084_1638_, lean_object* v_a_u2085_1639_, lean_object* v_a_u2086_1640_){
_start:
{
lean_object* v_toBind_1641_; lean_object* v___f_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; 
v_toBind_1641_ = lean_ctor_get(v_inst_1633_, 1);
lean_inc(v_toBind_1641_);
lean_inc_ref(v_inst_1633_);
lean_inc_ref(v_inst_1632_);
v___f_1642_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2086___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1642_, 0, v_inst_1632_);
lean_closure_set(v___f_1642_, 1, v_inst_1633_);
lean_closure_set(v___f_1642_, 2, v_a_u2086_1640_);
v___x_1643_ = l_Lean_Meta_Sym_Internal_mkAppS_u2085___redArg(v_inst_1632_, v_inst_1633_, v_f_1634_, v_a_u2081_1635_, v_a_u2082_1636_, v_a_u2083_1637_, v_a_u2084_1638_, v_a_u2085_1639_);
v___x_1644_ = lean_apply_4(v_toBind_1641_, lean_box(0), lean_box(0), v___x_1643_, v___f_1642_);
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2086(lean_object* v_m_1645_, lean_object* v_inst_1646_, lean_object* v_inst_1647_, lean_object* v_f_1648_, lean_object* v_a_u2081_1649_, lean_object* v_a_u2082_1650_, lean_object* v_a_u2083_1651_, lean_object* v_a_u2084_1652_, lean_object* v_a_u2085_1653_, lean_object* v_a_u2086_1654_){
_start:
{
lean_object* v___x_1655_; 
v___x_1655_ = l_Lean_Meta_Sym_Internal_mkAppS_u2086___redArg(v_inst_1646_, v_inst_1647_, v_f_1648_, v_a_u2081_1649_, v_a_u2082_1650_, v_a_u2083_1651_, v_a_u2084_1652_, v_a_u2085_1653_, v_a_u2086_1654_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2087___redArg___lam__0(lean_object* v_inst_1656_, lean_object* v_inst_1657_, lean_object* v_a_u2087_1658_, lean_object* v_____do__lift_1659_){
_start:
{
lean_object* v___x_1660_; 
v___x_1660_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1656_, v_inst_1657_, v_____do__lift_1659_, v_a_u2087_1658_);
return v___x_1660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2087___redArg(lean_object* v_inst_1661_, lean_object* v_inst_1662_, lean_object* v_f_1663_, lean_object* v_a_u2081_1664_, lean_object* v_a_u2082_1665_, lean_object* v_a_u2083_1666_, lean_object* v_a_u2084_1667_, lean_object* v_a_u2085_1668_, lean_object* v_a_u2086_1669_, lean_object* v_a_u2087_1670_){
_start:
{
lean_object* v_toBind_1671_; lean_object* v___f_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; 
v_toBind_1671_ = lean_ctor_get(v_inst_1662_, 1);
lean_inc(v_toBind_1671_);
lean_inc_ref(v_inst_1662_);
lean_inc_ref(v_inst_1661_);
v___f_1672_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2087___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1672_, 0, v_inst_1661_);
lean_closure_set(v___f_1672_, 1, v_inst_1662_);
lean_closure_set(v___f_1672_, 2, v_a_u2087_1670_);
v___x_1673_ = l_Lean_Meta_Sym_Internal_mkAppS_u2086___redArg(v_inst_1661_, v_inst_1662_, v_f_1663_, v_a_u2081_1664_, v_a_u2082_1665_, v_a_u2083_1666_, v_a_u2084_1667_, v_a_u2085_1668_, v_a_u2086_1669_);
v___x_1674_ = lean_apply_4(v_toBind_1671_, lean_box(0), lean_box(0), v___x_1673_, v___f_1672_);
return v___x_1674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2087(lean_object* v_m_1675_, lean_object* v_inst_1676_, lean_object* v_inst_1677_, lean_object* v_f_1678_, lean_object* v_a_u2081_1679_, lean_object* v_a_u2082_1680_, lean_object* v_a_u2083_1681_, lean_object* v_a_u2084_1682_, lean_object* v_a_u2085_1683_, lean_object* v_a_u2086_1684_, lean_object* v_a_u2087_1685_){
_start:
{
lean_object* v___x_1686_; 
v___x_1686_ = l_Lean_Meta_Sym_Internal_mkAppS_u2087___redArg(v_inst_1676_, v_inst_1677_, v_f_1678_, v_a_u2081_1679_, v_a_u2082_1680_, v_a_u2083_1681_, v_a_u2084_1682_, v_a_u2085_1683_, v_a_u2086_1684_, v_a_u2087_1685_);
return v___x_1686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2088___redArg___lam__0(lean_object* v_inst_1687_, lean_object* v_inst_1688_, lean_object* v_a_u2088_1689_, lean_object* v_____do__lift_1690_){
_start:
{
lean_object* v___x_1691_; 
v___x_1691_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1687_, v_inst_1688_, v_____do__lift_1690_, v_a_u2088_1689_);
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2088___redArg(lean_object* v_inst_1692_, lean_object* v_inst_1693_, lean_object* v_f_1694_, lean_object* v_a_u2081_1695_, lean_object* v_a_u2082_1696_, lean_object* v_a_u2083_1697_, lean_object* v_a_u2084_1698_, lean_object* v_a_u2085_1699_, lean_object* v_a_u2086_1700_, lean_object* v_a_u2087_1701_, lean_object* v_a_u2088_1702_){
_start:
{
lean_object* v_toBind_1703_; lean_object* v___f_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; 
v_toBind_1703_ = lean_ctor_get(v_inst_1693_, 1);
lean_inc(v_toBind_1703_);
lean_inc_ref(v_inst_1693_);
lean_inc_ref(v_inst_1692_);
v___f_1704_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2088___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1704_, 0, v_inst_1692_);
lean_closure_set(v___f_1704_, 1, v_inst_1693_);
lean_closure_set(v___f_1704_, 2, v_a_u2088_1702_);
v___x_1705_ = l_Lean_Meta_Sym_Internal_mkAppS_u2087___redArg(v_inst_1692_, v_inst_1693_, v_f_1694_, v_a_u2081_1695_, v_a_u2082_1696_, v_a_u2083_1697_, v_a_u2084_1698_, v_a_u2085_1699_, v_a_u2086_1700_, v_a_u2087_1701_);
v___x_1706_ = lean_apply_4(v_toBind_1703_, lean_box(0), lean_box(0), v___x_1705_, v___f_1704_);
return v___x_1706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2088(lean_object* v_m_1707_, lean_object* v_inst_1708_, lean_object* v_inst_1709_, lean_object* v_f_1710_, lean_object* v_a_u2081_1711_, lean_object* v_a_u2082_1712_, lean_object* v_a_u2083_1713_, lean_object* v_a_u2084_1714_, lean_object* v_a_u2085_1715_, lean_object* v_a_u2086_1716_, lean_object* v_a_u2087_1717_, lean_object* v_a_u2088_1718_){
_start:
{
lean_object* v___x_1719_; 
v___x_1719_ = l_Lean_Meta_Sym_Internal_mkAppS_u2088___redArg(v_inst_1708_, v_inst_1709_, v_f_1710_, v_a_u2081_1711_, v_a_u2082_1712_, v_a_u2083_1713_, v_a_u2084_1714_, v_a_u2085_1715_, v_a_u2086_1716_, v_a_u2087_1717_, v_a_u2088_1718_);
return v___x_1719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2089___redArg___lam__0(lean_object* v_inst_1720_, lean_object* v_inst_1721_, lean_object* v_a_u2089_1722_, lean_object* v_____do__lift_1723_){
_start:
{
lean_object* v___x_1724_; 
v___x_1724_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1720_, v_inst_1721_, v_____do__lift_1723_, v_a_u2089_1722_);
return v___x_1724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2089___redArg(lean_object* v_inst_1725_, lean_object* v_inst_1726_, lean_object* v_f_1727_, lean_object* v_a_u2081_1728_, lean_object* v_a_u2082_1729_, lean_object* v_a_u2083_1730_, lean_object* v_a_u2084_1731_, lean_object* v_a_u2085_1732_, lean_object* v_a_u2086_1733_, lean_object* v_a_u2087_1734_, lean_object* v_a_u2088_1735_, lean_object* v_a_u2089_1736_){
_start:
{
lean_object* v_toBind_1737_; lean_object* v___f_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v_toBind_1737_ = lean_ctor_get(v_inst_1726_, 1);
lean_inc(v_toBind_1737_);
lean_inc_ref(v_inst_1726_);
lean_inc_ref(v_inst_1725_);
v___f_1738_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2089___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1738_, 0, v_inst_1725_);
lean_closure_set(v___f_1738_, 1, v_inst_1726_);
lean_closure_set(v___f_1738_, 2, v_a_u2089_1736_);
v___x_1739_ = l_Lean_Meta_Sym_Internal_mkAppS_u2088___redArg(v_inst_1725_, v_inst_1726_, v_f_1727_, v_a_u2081_1728_, v_a_u2082_1729_, v_a_u2083_1730_, v_a_u2084_1731_, v_a_u2085_1732_, v_a_u2086_1733_, v_a_u2087_1734_, v_a_u2088_1735_);
v___x_1740_ = lean_apply_4(v_toBind_1737_, lean_box(0), lean_box(0), v___x_1739_, v___f_1738_);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2089(lean_object* v_m_1741_, lean_object* v_inst_1742_, lean_object* v_inst_1743_, lean_object* v_f_1744_, lean_object* v_a_u2081_1745_, lean_object* v_a_u2082_1746_, lean_object* v_a_u2083_1747_, lean_object* v_a_u2084_1748_, lean_object* v_a_u2085_1749_, lean_object* v_a_u2086_1750_, lean_object* v_a_u2087_1751_, lean_object* v_a_u2088_1752_, lean_object* v_a_u2089_1753_){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = l_Lean_Meta_Sym_Internal_mkAppS_u2089___redArg(v_inst_1742_, v_inst_1743_, v_f_1744_, v_a_u2081_1745_, v_a_u2082_1746_, v_a_u2083_1747_, v_a_u2084_1748_, v_a_u2085_1749_, v_a_u2086_1750_, v_a_u2087_1751_, v_a_u2088_1752_, v_a_u2089_1753_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080___redArg___lam__0(lean_object* v_inst_1755_, lean_object* v_inst_1756_, lean_object* v_a_u2081_u2080_1757_, lean_object* v_____do__lift_1758_){
_start:
{
lean_object* v___x_1759_; 
v___x_1759_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1755_, v_inst_1756_, v_____do__lift_1758_, v_a_u2081_u2080_1757_);
return v___x_1759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080___redArg(lean_object* v_inst_1760_, lean_object* v_inst_1761_, lean_object* v_f_1762_, lean_object* v_a_u2081_1763_, lean_object* v_a_u2082_1764_, lean_object* v_a_u2083_1765_, lean_object* v_a_u2084_1766_, lean_object* v_a_u2085_1767_, lean_object* v_a_u2086_1768_, lean_object* v_a_u2087_1769_, lean_object* v_a_u2088_1770_, lean_object* v_a_u2089_1771_, lean_object* v_a_u2081_u2080_1772_){
_start:
{
lean_object* v_toBind_1773_; lean_object* v___f_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v_toBind_1773_ = lean_ctor_get(v_inst_1761_, 1);
lean_inc(v_toBind_1773_);
lean_inc_ref(v_inst_1761_);
lean_inc_ref(v_inst_1760_);
v___f_1774_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1774_, 0, v_inst_1760_);
lean_closure_set(v___f_1774_, 1, v_inst_1761_);
lean_closure_set(v___f_1774_, 2, v_a_u2081_u2080_1772_);
v___x_1775_ = l_Lean_Meta_Sym_Internal_mkAppS_u2089___redArg(v_inst_1760_, v_inst_1761_, v_f_1762_, v_a_u2081_1763_, v_a_u2082_1764_, v_a_u2083_1765_, v_a_u2084_1766_, v_a_u2085_1767_, v_a_u2086_1768_, v_a_u2087_1769_, v_a_u2088_1770_, v_a_u2089_1771_);
v___x_1776_ = lean_apply_4(v_toBind_1773_, lean_box(0), lean_box(0), v___x_1775_, v___f_1774_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080(lean_object* v_m_1777_, lean_object* v_inst_1778_, lean_object* v_inst_1779_, lean_object* v_f_1780_, lean_object* v_a_u2081_1781_, lean_object* v_a_u2082_1782_, lean_object* v_a_u2083_1783_, lean_object* v_a_u2084_1784_, lean_object* v_a_u2085_1785_, lean_object* v_a_u2086_1786_, lean_object* v_a_u2087_1787_, lean_object* v_a_u2088_1788_, lean_object* v_a_u2089_1789_, lean_object* v_a_u2081_u2080_1790_){
_start:
{
lean_object* v___x_1791_; 
v___x_1791_ = l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080___redArg(v_inst_1778_, v_inst_1779_, v_f_1780_, v_a_u2081_1781_, v_a_u2082_1782_, v_a_u2083_1783_, v_a_u2084_1784_, v_a_u2085_1785_, v_a_u2086_1786_, v_a_u2087_1787_, v_a_u2088_1788_, v_a_u2089_1789_, v_a_u2081_u2080_1790_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2081___redArg___lam__0(lean_object* v_inst_1792_, lean_object* v_inst_1793_, lean_object* v_a_u2081_u2081_1794_, lean_object* v_____do__lift_1795_){
_start:
{
lean_object* v___x_1796_; 
v___x_1796_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1792_, v_inst_1793_, v_____do__lift_1795_, v_a_u2081_u2081_1794_);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2081___redArg(lean_object* v_inst_1797_, lean_object* v_inst_1798_, lean_object* v_f_1799_, lean_object* v_a_u2081_1800_, lean_object* v_a_u2082_1801_, lean_object* v_a_u2083_1802_, lean_object* v_a_u2084_1803_, lean_object* v_a_u2085_1804_, lean_object* v_a_u2086_1805_, lean_object* v_a_u2087_1806_, lean_object* v_a_u2088_1807_, lean_object* v_a_u2089_1808_, lean_object* v_a_u2081_u2080_1809_, lean_object* v_a_u2081_u2081_1810_){
_start:
{
lean_object* v_toBind_1811_; lean_object* v___f_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; 
v_toBind_1811_ = lean_ctor_get(v_inst_1798_, 1);
lean_inc(v_toBind_1811_);
lean_inc_ref(v_inst_1798_);
lean_inc_ref(v_inst_1797_);
v___f_1812_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2081___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1812_, 0, v_inst_1797_);
lean_closure_set(v___f_1812_, 1, v_inst_1798_);
lean_closure_set(v___f_1812_, 2, v_a_u2081_u2081_1810_);
v___x_1813_ = l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080___redArg(v_inst_1797_, v_inst_1798_, v_f_1799_, v_a_u2081_1800_, v_a_u2082_1801_, v_a_u2083_1802_, v_a_u2084_1803_, v_a_u2085_1804_, v_a_u2086_1805_, v_a_u2087_1806_, v_a_u2088_1807_, v_a_u2089_1808_, v_a_u2081_u2080_1809_);
v___x_1814_ = lean_apply_4(v_toBind_1811_, lean_box(0), lean_box(0), v___x_1813_, v___f_1812_);
return v___x_1814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2081(lean_object* v_m_1815_, lean_object* v_inst_1816_, lean_object* v_inst_1817_, lean_object* v_f_1818_, lean_object* v_a_u2081_1819_, lean_object* v_a_u2082_1820_, lean_object* v_a_u2083_1821_, lean_object* v_a_u2084_1822_, lean_object* v_a_u2085_1823_, lean_object* v_a_u2086_1824_, lean_object* v_a_u2087_1825_, lean_object* v_a_u2088_1826_, lean_object* v_a_u2089_1827_, lean_object* v_a_u2081_u2080_1828_, lean_object* v_a_u2081_u2081_1829_){
_start:
{
lean_object* v___x_1830_; 
v___x_1830_ = l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2081___redArg(v_inst_1816_, v_inst_1817_, v_f_1818_, v_a_u2081_1819_, v_a_u2082_1820_, v_a_u2083_1821_, v_a_u2084_1822_, v_a_u2085_1823_, v_a_u2086_1824_, v_a_u2087_1825_, v_a_u2088_1826_, v_a_u2089_1827_, v_a_u2081_u2080_1828_, v_a_u2081_u2081_1829_);
return v___x_1830_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg___lam__0___boxed(lean_object* v_i_1831_, lean_object* v_inst_1832_, lean_object* v_inst_1833_, lean_object* v_args_1834_, lean_object* v_endIdx_1835_, lean_object* v_____do__lift_1836_){
_start:
{
lean_object* v_res_1837_; 
v_res_1837_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg___lam__0(v_i_1831_, v_inst_1832_, v_inst_1833_, v_args_1834_, v_endIdx_1835_, v_____do__lift_1836_);
lean_dec(v_i_1831_);
return v_res_1837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg(lean_object* v_inst_1838_, lean_object* v_inst_1839_, lean_object* v_args_1840_, lean_object* v_endIdx_1841_, lean_object* v_b_1842_, lean_object* v_i_1843_){
_start:
{
uint8_t v___x_1844_; 
v___x_1844_ = lean_nat_dec_le(v_endIdx_1841_, v_i_1843_);
if (v___x_1844_ == 0)
{
lean_object* v_toBind_1845_; lean_object* v___f_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
v_toBind_1845_ = lean_ctor_get(v_inst_1839_, 1);
lean_inc(v_toBind_1845_);
lean_inc_ref(v_args_1840_);
lean_inc_ref(v_inst_1839_);
lean_inc_ref(v_inst_1838_);
lean_inc(v_i_1843_);
v___f_1846_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1846_, 0, v_i_1843_);
lean_closure_set(v___f_1846_, 1, v_inst_1838_);
lean_closure_set(v___f_1846_, 2, v_inst_1839_);
lean_closure_set(v___f_1846_, 3, v_args_1840_);
lean_closure_set(v___f_1846_, 4, v_endIdx_1841_);
v___x_1847_ = l_Lean_instInhabitedExpr;
v___x_1848_ = lean_array_get(v___x_1847_, v_args_1840_, v_i_1843_);
lean_dec(v_i_1843_);
lean_dec_ref(v_args_1840_);
v___x_1849_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1838_, v_inst_1839_, v_b_1842_, v___x_1848_);
v___x_1850_ = lean_apply_4(v_toBind_1845_, lean_box(0), lean_box(0), v___x_1849_, v___f_1846_);
return v___x_1850_;
}
else
{
lean_object* v_toApplicative_1851_; lean_object* v_toPure_1852_; lean_object* v___x_1853_; 
lean_dec(v_i_1843_);
lean_dec(v_endIdx_1841_);
lean_dec_ref(v_args_1840_);
lean_dec_ref(v_inst_1838_);
v_toApplicative_1851_ = lean_ctor_get(v_inst_1839_, 0);
lean_inc_ref(v_toApplicative_1851_);
lean_dec_ref(v_inst_1839_);
v_toPure_1852_ = lean_ctor_get(v_toApplicative_1851_, 1);
lean_inc(v_toPure_1852_);
lean_dec_ref(v_toApplicative_1851_);
v___x_1853_ = lean_apply_2(v_toPure_1852_, lean_box(0), v_b_1842_);
return v___x_1853_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg___lam__0(lean_object* v_i_1854_, lean_object* v_inst_1855_, lean_object* v_inst_1856_, lean_object* v_args_1857_, lean_object* v_endIdx_1858_, lean_object* v_____do__lift_1859_){
_start:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; 
v___x_1860_ = lean_unsigned_to_nat(1u);
v___x_1861_ = lean_nat_add(v_i_1854_, v___x_1860_);
v___x_1862_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg(v_inst_1855_, v_inst_1856_, v_args_1857_, v_endIdx_1858_, v_____do__lift_1859_, v___x_1861_);
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go(lean_object* v_m_1863_, lean_object* v_inst_1864_, lean_object* v_inst_1865_, lean_object* v_args_1866_, lean_object* v_endIdx_1867_, lean_object* v_b_1868_, lean_object* v_i_1869_){
_start:
{
lean_object* v___x_1870_; 
v___x_1870_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg(v_inst_1864_, v_inst_1865_, v_args_1866_, v_endIdx_1867_, v_b_1868_, v_i_1869_);
return v___x_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRangeS___redArg(lean_object* v_inst_1871_, lean_object* v_inst_1872_, lean_object* v_f_1873_, lean_object* v_beginIdx_1874_, lean_object* v_endIdx_1875_, lean_object* v_args_1876_){
_start:
{
lean_object* v___x_1877_; 
v___x_1877_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg(v_inst_1871_, v_inst_1872_, v_args_1876_, v_endIdx_1875_, v_f_1873_, v_beginIdx_1874_);
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRangeS(lean_object* v_m_1878_, lean_object* v_inst_1879_, lean_object* v_inst_1880_, lean_object* v_f_1881_, lean_object* v_beginIdx_1882_, lean_object* v_endIdx_1883_, lean_object* v_args_1884_){
_start:
{
lean_object* v___x_1885_; 
v___x_1885_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg(v_inst_1879_, v_inst_1880_, v_args_1884_, v_endIdx_1883_, v_f_1881_, v_beginIdx_1882_);
return v___x_1885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___redArg(lean_object* v_inst_1886_, lean_object* v_inst_1887_, lean_object* v_f_1888_, lean_object* v_args_1889_){
_start:
{
lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; 
v___x_1890_ = lean_unsigned_to_nat(0u);
v___x_1891_ = lean_array_get_size(v_args_1889_);
v___x_1892_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg(v_inst_1886_, v_inst_1887_, v_args_1889_, v___x_1891_, v_f_1888_, v___x_1890_);
return v___x_1892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS(lean_object* v_m_1893_, lean_object* v_inst_1894_, lean_object* v_inst_1895_, lean_object* v_f_1896_, lean_object* v_args_1897_){
_start:
{
lean_object* v___x_1898_; 
v___x_1898_ = l_Lean_Meta_Sym_Internal_mkAppNS___redArg(v_inst_1894_, v_inst_1895_, v_f_1896_, v_args_1897_);
return v___x_1898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg___lam__0___boxed(lean_object* v_inst_1899_, lean_object* v_inst_1900_, lean_object* v_revArgs_1901_, lean_object* v_start_1902_, lean_object* v_i_1903_, lean_object* v_____do__lift_1904_){
_start:
{
lean_object* v_res_1905_; 
v_res_1905_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg___lam__0(v_inst_1899_, v_inst_1900_, v_revArgs_1901_, v_start_1902_, v_i_1903_, v_____do__lift_1904_);
lean_dec(v_i_1903_);
return v_res_1905_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg(lean_object* v_inst_1906_, lean_object* v_inst_1907_, lean_object* v_revArgs_1908_, lean_object* v_start_1909_, lean_object* v_b_1910_, lean_object* v_i_1911_){
_start:
{
uint8_t v___x_1912_; 
v___x_1912_ = lean_nat_dec_le(v_i_1911_, v_start_1909_);
if (v___x_1912_ == 0)
{
lean_object* v_toBind_1913_; lean_object* v___x_1914_; lean_object* v_i_1915_; lean_object* v___f_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; 
v_toBind_1913_ = lean_ctor_get(v_inst_1907_, 1);
lean_inc(v_toBind_1913_);
v___x_1914_ = lean_unsigned_to_nat(1u);
v_i_1915_ = lean_nat_sub(v_i_1911_, v___x_1914_);
lean_inc(v_i_1915_);
lean_inc_ref(v_revArgs_1908_);
lean_inc_ref(v_inst_1907_);
lean_inc_ref(v_inst_1906_);
v___f_1916_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1916_, 0, v_inst_1906_);
lean_closure_set(v___f_1916_, 1, v_inst_1907_);
lean_closure_set(v___f_1916_, 2, v_revArgs_1908_);
lean_closure_set(v___f_1916_, 3, v_start_1909_);
lean_closure_set(v___f_1916_, 4, v_i_1915_);
v___x_1917_ = l_Lean_instInhabitedExpr;
v___x_1918_ = lean_array_get(v___x_1917_, v_revArgs_1908_, v_i_1915_);
lean_dec(v_i_1915_);
lean_dec_ref(v_revArgs_1908_);
v___x_1919_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1906_, v_inst_1907_, v_b_1910_, v___x_1918_);
v___x_1920_ = lean_apply_4(v_toBind_1913_, lean_box(0), lean_box(0), v___x_1919_, v___f_1916_);
return v___x_1920_;
}
else
{
lean_object* v_toApplicative_1921_; lean_object* v_toPure_1922_; lean_object* v___x_1923_; 
lean_dec(v_start_1909_);
lean_dec_ref(v_revArgs_1908_);
lean_dec_ref(v_inst_1906_);
v_toApplicative_1921_ = lean_ctor_get(v_inst_1907_, 0);
lean_inc_ref(v_toApplicative_1921_);
lean_dec_ref(v_inst_1907_);
v_toPure_1922_ = lean_ctor_get(v_toApplicative_1921_, 1);
lean_inc(v_toPure_1922_);
lean_dec_ref(v_toApplicative_1921_);
v___x_1923_ = lean_apply_2(v_toPure_1922_, lean_box(0), v_b_1910_);
return v___x_1923_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg___lam__0(lean_object* v_inst_1924_, lean_object* v_inst_1925_, lean_object* v_revArgs_1926_, lean_object* v_start_1927_, lean_object* v_i_1928_, lean_object* v_____do__lift_1929_){
_start:
{
lean_object* v___x_1930_; 
v___x_1930_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg(v_inst_1924_, v_inst_1925_, v_revArgs_1926_, v_start_1927_, v_____do__lift_1929_, v_i_1928_);
return v___x_1930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg___boxed(lean_object* v_inst_1931_, lean_object* v_inst_1932_, lean_object* v_revArgs_1933_, lean_object* v_start_1934_, lean_object* v_b_1935_, lean_object* v_i_1936_){
_start:
{
lean_object* v_res_1937_; 
v_res_1937_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg(v_inst_1931_, v_inst_1932_, v_revArgs_1933_, v_start_1934_, v_b_1935_, v_i_1936_);
lean_dec(v_i_1936_);
return v_res_1937_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go(lean_object* v_m_1938_, lean_object* v_inst_1939_, lean_object* v_inst_1940_, lean_object* v_revArgs_1941_, lean_object* v_start_1942_, lean_object* v_b_1943_, lean_object* v_i_1944_){
_start:
{
lean_object* v___x_1945_; 
v___x_1945_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg(v_inst_1939_, v_inst_1940_, v_revArgs_1941_, v_start_1942_, v_b_1943_, v_i_1944_);
return v___x_1945_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___boxed(lean_object* v_m_1946_, lean_object* v_inst_1947_, lean_object* v_inst_1948_, lean_object* v_revArgs_1949_, lean_object* v_start_1950_, lean_object* v_b_1951_, lean_object* v_i_1952_){
_start:
{
lean_object* v_res_1953_; 
v_res_1953_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go(v_m_1946_, v_inst_1947_, v_inst_1948_, v_revArgs_1949_, v_start_1950_, v_b_1951_, v_i_1952_);
lean_dec(v_i_1952_);
return v_res_1953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevRangeS___redArg(lean_object* v_inst_1954_, lean_object* v_inst_1955_, lean_object* v_f_1956_, lean_object* v_beginIdx_1957_, lean_object* v_endIdx_1958_, lean_object* v_revArgs_1959_){
_start:
{
lean_object* v___x_1960_; 
v___x_1960_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg(v_inst_1954_, v_inst_1955_, v_revArgs_1959_, v_beginIdx_1957_, v_f_1956_, v_endIdx_1958_);
return v___x_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevRangeS___redArg___boxed(lean_object* v_inst_1961_, lean_object* v_inst_1962_, lean_object* v_f_1963_, lean_object* v_beginIdx_1964_, lean_object* v_endIdx_1965_, lean_object* v_revArgs_1966_){
_start:
{
lean_object* v_res_1967_; 
v_res_1967_ = l_Lean_Meta_Sym_Internal_mkAppRevRangeS___redArg(v_inst_1961_, v_inst_1962_, v_f_1963_, v_beginIdx_1964_, v_endIdx_1965_, v_revArgs_1966_);
lean_dec(v_endIdx_1965_);
return v_res_1967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevRangeS(lean_object* v_m_1968_, lean_object* v_inst_1969_, lean_object* v_inst_1970_, lean_object* v_f_1971_, lean_object* v_beginIdx_1972_, lean_object* v_endIdx_1973_, lean_object* v_revArgs_1974_){
_start:
{
lean_object* v___x_1975_; 
v___x_1975_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg(v_inst_1969_, v_inst_1970_, v_revArgs_1974_, v_beginIdx_1972_, v_f_1971_, v_endIdx_1973_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevRangeS___boxed(lean_object* v_m_1976_, lean_object* v_inst_1977_, lean_object* v_inst_1978_, lean_object* v_f_1979_, lean_object* v_beginIdx_1980_, lean_object* v_endIdx_1981_, lean_object* v_revArgs_1982_){
_start:
{
lean_object* v_res_1983_; 
v_res_1983_ = l_Lean_Meta_Sym_Internal_mkAppRevRangeS(v_m_1976_, v_inst_1977_, v_inst_1978_, v_f_1979_, v_beginIdx_1980_, v_endIdx_1981_, v_revArgs_1982_);
lean_dec(v_endIdx_1981_);
return v_res_1983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevS___redArg(lean_object* v_inst_1984_, lean_object* v_inst_1985_, lean_object* v_f_1986_, lean_object* v_revArgs_1987_){
_start:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; 
v___x_1988_ = lean_unsigned_to_nat(0u);
v___x_1989_ = lean_array_get_size(v_revArgs_1987_);
v___x_1990_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg(v_inst_1984_, v_inst_1985_, v_revArgs_1987_, v___x_1988_, v_f_1986_, v___x_1989_);
return v___x_1990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevS(lean_object* v_m_1991_, lean_object* v_inst_1992_, lean_object* v_inst_1993_, lean_object* v_f_1994_, lean_object* v_revArgs_1995_){
_start:
{
lean_object* v___x_1996_; 
v___x_1996_ = l_Lean_Meta_Sym_Internal_mkAppRevS___redArg(v_inst_1992_, v_inst_1993_, v_f_1994_, v_revArgs_1995_);
return v___x_1996_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy = _init_l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy();
lean_mark_persistent(l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy);
l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM = _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM();
lean_mark_persistent(l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM);
l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM = _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM();
lean_mark_persistent(l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
}
#ifdef __cplusplus
}
#endif
