// Lean compiler output
// Module: Lean.Meta.ArgsPacker
// Imports: public import Lean.Meta.AppBuilder public import Lean.Meta.PProdN public import Lean.Meta.ArgsPacker.Basic import Init.Omega import Init.While
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Expr_bindingName_x21(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isArrow(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Meta_PProdN_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_packType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_packType___closed__0;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_packType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_packType___closed__1;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_packType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_packType___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_packType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_packType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go_spec__0(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__1;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__2;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__3;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__4;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__5;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__6;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_pack___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_pack___closed__0;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_pack___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_pack___closed__1;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_pack___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_pack___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_pack(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_pack___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_unpack___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_unpack___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_unpack(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_unpack___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__0;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__1;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__2;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__3;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__0;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__1___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__2;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__1;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__1;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__0;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__0;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__1;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_packType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_packType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__0;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__1;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__0;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__2;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__3;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__4;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__5;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_pack(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_pack___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_unpack(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_unpack___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__1;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryType___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryTypeND(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryTypeND___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__0;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__1;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__2;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurry_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurry_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_curryType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_curryType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_numFuncs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_numFuncs___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_arities_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_arities_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_arities(lean_object*);
static lean_once_cell_t l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0;
LEAN_EXPORT uint8_t l_Lean_Meta_ArgsPacker_onlyOneUnary(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_onlyOneUnary___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_ArgsPacker_pack___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_pack___closed__0;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_pack___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_pack___closed__1;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_pack___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_pack___closed__2;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_pack___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_pack___closed__3;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_pack___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_pack___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_pack(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_pack___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_unpack(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_unpack___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurryType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurryType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurry_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurry_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryWithType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryWithType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryND(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryND___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ArgsPacker_curryProj_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ArgsPacker_curryProj_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryProj___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryProj___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ArgsPacker_curryProj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_curryProj___closed__0;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_curryProj___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_curryProj___closed__1;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_curryProj___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_curryProj___closed__2;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_curryProj___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_curryProj___closed__3;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_curryProj___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_curryProj___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryProj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_curryType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_curryType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ArgsPacker_curry___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_curry___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("PSigma", 6, 6);
return v___x_1_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0);
v___x_3_ = l_Lean_Name_mkStr1(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0(lean_object* v___x_4_, lean_object* v_as_5_, size_t v_sz_6_, size_t v_i_7_, lean_object* v_b_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
uint8_t v___x_14_; 
v___x_14_ = lean_usize_dec_lt(v_i_7_, v_sz_6_);
if (v___x_14_ == 0)
{
lean_object* v___x_15_; 
v___x_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_15_, 0, v_b_8_);
return v___x_15_;
}
else
{
lean_object* v_a_16_; lean_object* v___x_17_; 
v_a_16_ = lean_array_uget_borrowed(v_as_5_, v_i_7_);
lean_inc(v___y_12_);
lean_inc_ref(v___y_11_);
lean_inc(v___y_10_);
lean_inc_ref(v___y_9_);
lean_inc(v_a_16_);
v___x_17_ = lean_infer_type(v_a_16_, v___y_9_, v___y_10_, v___y_11_, v___y_12_);
if (lean_obj_tag(v___x_17_) == 0)
{
lean_object* v_a_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_50_; 
v_a_18_ = lean_ctor_get(v___x_17_, 0);
v_isSharedCheck_50_ = !lean_is_exclusive(v___x_17_);
if (v_isSharedCheck_50_ == 0)
{
v___x_20_ = v___x_17_;
v_isShared_21_ = v_isSharedCheck_50_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_a_18_);
lean_dec(v___x_17_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_50_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v___x_22_; uint8_t v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; uint8_t v___x_27_; lean_object* v___x_28_; 
v___x_22_ = lean_unsigned_to_nat(0u);
v___x_23_ = lean_nat_dec_eq(v___x_4_, v___x_22_);
v___x_24_ = lean_unsigned_to_nat(1u);
v___x_25_ = lean_mk_empty_array_with_capacity(v___x_24_);
lean_inc(v_a_16_);
v___x_26_ = lean_array_push(v___x_25_, v_a_16_);
v___x_27_ = 1;
v___x_28_ = l_Lean_Meta_mkLambdaFVars(v___x_26_, v_b_8_, v___x_23_, v___x_14_, v___x_23_, v___x_14_, v___x_27_, v___y_9_, v___y_10_, v___y_11_, v___y_12_);
lean_dec_ref(v___x_26_);
if (lean_obj_tag(v___x_28_) == 0)
{
lean_object* v_a_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_49_; 
v_a_29_ = lean_ctor_get(v___x_28_, 0);
v_isSharedCheck_49_ = !lean_is_exclusive(v___x_28_);
if (v_isSharedCheck_49_ == 0)
{
v___x_31_ = v___x_28_;
v_isShared_32_ = v_isSharedCheck_49_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_a_29_);
lean_dec(v___x_28_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_49_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_33_; lean_object* v___x_35_; 
v___x_33_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1);
if (v_isShared_32_ == 0)
{
lean_ctor_set_tag(v___x_31_, 1);
lean_ctor_set(v___x_31_, 0, v_a_18_);
v___x_35_ = v___x_31_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_48_; 
v_reuseFailAlloc_48_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_48_, 0, v_a_18_);
v___x_35_ = v_reuseFailAlloc_48_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
lean_object* v___x_37_; 
if (v_isShared_21_ == 0)
{
lean_ctor_set_tag(v___x_20_, 1);
lean_ctor_set(v___x_20_, 0, v_a_29_);
v___x_37_ = v___x_20_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v_a_29_);
v___x_37_ = v_reuseFailAlloc_47_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_38_ = lean_unsigned_to_nat(2u);
v___x_39_ = lean_mk_empty_array_with_capacity(v___x_38_);
v___x_40_ = lean_array_push(v___x_39_, v___x_35_);
v___x_41_ = lean_array_push(v___x_40_, v___x_37_);
v___x_42_ = l_Lean_Meta_mkAppOptM(v___x_33_, v___x_41_, v___y_9_, v___y_10_, v___y_11_, v___y_12_);
if (lean_obj_tag(v___x_42_) == 0)
{
lean_object* v_a_43_; size_t v___x_44_; size_t v___x_45_; 
v_a_43_ = lean_ctor_get(v___x_42_, 0);
lean_inc(v_a_43_);
lean_dec_ref(v___x_42_);
v___x_44_ = ((size_t)1ULL);
v___x_45_ = lean_usize_add(v_i_7_, v___x_44_);
v_i_7_ = v___x_45_;
v_b_8_ = v_a_43_;
goto _start;
}
else
{
return v___x_42_;
}
}
}
}
}
else
{
lean_del_object(v___x_20_);
lean_dec(v_a_18_);
return v___x_28_;
}
}
}
else
{
lean_dec_ref(v_b_8_);
return v___x_17_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___boxed(lean_object* v___x_51_, lean_object* v_as_52_, lean_object* v_sz_53_, lean_object* v_i_54_, lean_object* v_b_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_){
_start:
{
size_t v_sz_boxed_61_; size_t v_i_boxed_62_; lean_object* v_res_63_; 
v_sz_boxed_61_ = lean_unbox_usize(v_sz_53_);
lean_dec(v_sz_53_);
v_i_boxed_62_ = lean_unbox_usize(v_i_54_);
lean_dec(v_i_54_);
v_res_63_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0(v___x_51_, v_as_52_, v_sz_boxed_61_, v_i_boxed_62_, v_b_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
lean_dec(v___y_59_);
lean_dec_ref(v___y_58_);
lean_dec(v___y_57_);
lean_dec_ref(v___y_56_);
lean_dec_ref(v_as_52_);
lean_dec(v___x_51_);
return v_res_63_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_packType___closed__0(void){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lean_mk_string_unchecked("Unit", 4, 4);
return v___x_64_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_packType___closed__1(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_packType___closed__0, &l_Lean_Meta_ArgsPacker_Unary_packType___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_packType___closed__0);
v___x_66_ = l_Lean_Name_mkStr1(v___x_65_);
return v___x_66_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_packType___closed__2(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_67_ = lean_box(0);
v___x_68_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_packType___closed__1, &l_Lean_Meta_ArgsPacker_Unary_packType___closed__1_once, _init_l_Lean_Meta_ArgsPacker_Unary_packType___closed__1);
v___x_69_ = l_Lean_mkConst(v___x_68_, v___x_67_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_packType(lean_object* v_xs_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_76_ = lean_array_get_size(v_xs_70_);
v___x_77_ = lean_unsigned_to_nat(0u);
v___x_78_ = lean_nat_dec_eq(v___x_76_, v___x_77_);
if (v___x_78_ == 0)
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_79_ = l_Lean_instInhabitedExpr;
v___x_80_ = lean_unsigned_to_nat(1u);
v___x_81_ = lean_nat_sub(v___x_76_, v___x_80_);
v___x_82_ = lean_array_get_borrowed(v___x_79_, v_xs_70_, v___x_81_);
lean_dec(v___x_81_);
lean_inc(v_a_74_);
lean_inc_ref(v_a_73_);
lean_inc(v_a_72_);
lean_inc_ref(v_a_71_);
lean_inc(v___x_82_);
v___x_83_ = lean_infer_type(v___x_82_, v_a_71_, v_a_72_, v_a_73_, v_a_74_);
if (lean_obj_tag(v___x_83_) == 0)
{
lean_object* v_a_84_; lean_object* v___x_85_; lean_object* v___x_86_; size_t v_sz_87_; size_t v___x_88_; lean_object* v___x_89_; 
v_a_84_ = lean_ctor_get(v___x_83_, 0);
lean_inc(v_a_84_);
lean_dec_ref(v___x_83_);
v___x_85_ = lean_array_pop(v_xs_70_);
v___x_86_ = l_Array_reverse___redArg(v___x_85_);
v_sz_87_ = lean_array_size(v___x_86_);
v___x_88_ = ((size_t)0ULL);
v___x_89_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0(v___x_76_, v___x_86_, v_sz_87_, v___x_88_, v_a_84_, v_a_71_, v_a_72_, v_a_73_, v_a_74_);
lean_dec_ref(v___x_86_);
return v___x_89_;
}
else
{
lean_dec_ref(v_xs_70_);
return v___x_83_;
}
}
else
{
lean_object* v___x_90_; lean_object* v___x_91_; 
lean_dec_ref(v_xs_70_);
v___x_90_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_packType___closed__2, &l_Lean_Meta_ArgsPacker_Unary_packType___closed__2_once, _init_l_Lean_Meta_ArgsPacker_Unary_packType___closed__2);
v___x_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
return v___x_91_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_packType___boxed(lean_object* v_xs_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l_Lean_Meta_ArgsPacker_Unary_packType(v_xs_92_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
lean_dec(v_a_96_);
lean_dec_ref(v_a_95_);
lean_dec(v_a_94_);
lean_dec_ref(v_a_93_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go_spec__0(lean_object* v_msg_99_){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = l_Lean_instInhabitedExpr;
v___x_101_ = lean_panic_fn_borrowed(v___x_100_, v_msg_99_);
return v___x_101_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0(void){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lean_mk_string_unchecked("Lean.Meta.ArgsPacker", 20, 20);
return v___x_102_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__1(void){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = lean_mk_string_unchecked("_private.Lean.Meta.ArgsPacker.0.Lean.Meta.ArgsPacker.Unary.pack.go", 66, 66);
return v___x_103_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__2(void){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = lean_mk_string_unchecked("assertion violation: type.isAppOfArity ``PSigma 2\n      ", 56, 56);
return v___x_104_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__3(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_105_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__2, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__2_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__2);
v___x_106_ = lean_unsigned_to_nat(6u);
v___x_107_ = lean_unsigned_to_nat(86u);
v___x_108_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__1);
v___x_109_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0);
v___x_110_ = l_mkPanicMessageWithDecl(v___x_109_, v___x_108_, v___x_107_, v___x_106_, v___x_105_);
return v___x_110_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__4(void){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = lean_mk_string_unchecked("assertion violation: β.isLambda\n      ", 39, 38);
return v___x_111_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__5(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_112_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__4, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__4_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__4);
v___x_113_ = lean_unsigned_to_nat(6u);
v___x_114_ = lean_unsigned_to_nat(90u);
v___x_115_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__1);
v___x_116_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0);
v___x_117_ = l_mkPanicMessageWithDecl(v___x_116_, v___x_115_, v___x_114_, v___x_113_, v___x_112_);
return v___x_117_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__6(void){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_mk_string_unchecked("mk", 2, 2);
return v___x_118_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__7(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_119_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__6, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__6_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__6);
v___x_120_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0);
v___x_121_ = l_Lean_Name_mkStr2(v___x_120_, v___x_119_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go(lean_object* v_args_122_, lean_object* v_i_123_, lean_object* v_type_124_){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_125_ = lean_array_get_size(v_args_122_);
v___x_126_ = lean_unsigned_to_nat(1u);
v___x_127_ = lean_nat_sub(v___x_125_, v___x_126_);
v___x_128_ = lean_nat_dec_lt(v_i_123_, v___x_127_);
lean_dec(v___x_127_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = l_Lean_instInhabitedExpr;
v___x_130_ = lean_array_get_borrowed(v___x_129_, v_args_122_, v_i_123_);
lean_inc(v___x_130_);
return v___x_130_;
}
else
{
lean_object* v___x_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_131_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1);
v___x_132_ = lean_unsigned_to_nat(2u);
v___x_133_ = l_Lean_Expr_isAppOfArity(v_type_124_, v___x_131_, v___x_132_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__3, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__3_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__3);
v___x_135_ = l_panic___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go_spec__0(v___x_134_);
return v___x_135_;
}
else
{
lean_object* v_00_u03b2_136_; uint8_t v___x_137_; 
v_00_u03b2_136_ = l_Lean_Expr_appArg_x21(v_type_124_);
v___x_137_ = l_Lean_Expr_isLambda(v_00_u03b2_136_);
if (v___x_137_ == 0)
{
lean_object* v___x_138_; lean_object* v___x_139_; 
lean_dec_ref(v_00_u03b2_136_);
v___x_138_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__5, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__5_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__5);
v___x_139_ = l_panic___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go_spec__0(v___x_138_);
return v___x_139_;
}
else
{
lean_object* v_arg_140_; lean_object* v___x_141_; lean_object* v_us_142_; lean_object* v___x_143_; lean_object* v_00_u03b1_144_; lean_object* v___x_145_; lean_object* v_type_146_; lean_object* v___x_147_; lean_object* v_rest_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v_arg_140_ = lean_array_fget_borrowed(v_args_122_, v_i_123_);
v___x_141_ = l_Lean_Expr_getAppFn(v_type_124_);
v_us_142_ = l_Lean_Expr_constLevels_x21(v___x_141_);
lean_dec_ref(v___x_141_);
v___x_143_ = l_Lean_Expr_appFn_x21(v_type_124_);
v_00_u03b1_144_ = l_Lean_Expr_appArg_x21(v___x_143_);
lean_dec_ref(v___x_143_);
v___x_145_ = l_Lean_Expr_bindingBody_x21(v_00_u03b2_136_);
v_type_146_ = lean_expr_instantiate1(v___x_145_, v_arg_140_);
lean_dec_ref(v___x_145_);
v___x_147_ = lean_nat_add(v_i_123_, v___x_126_);
v_rest_148_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go(v_args_122_, v___x_147_, v_type_146_);
lean_dec_ref(v_type_146_);
lean_dec(v___x_147_);
v___x_149_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__7, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__7_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__7);
v___x_150_ = l_Lean_mkConst(v___x_149_, v_us_142_);
lean_inc(v_arg_140_);
v___x_151_ = l_Lean_mkApp4(v___x_150_, v_00_u03b1_144_, v_00_u03b2_136_, v_arg_140_, v_rest_148_);
return v___x_151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___boxed(lean_object* v_args_152_, lean_object* v_i_153_, lean_object* v_type_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go(v_args_152_, v_i_153_, v_type_154_);
lean_dec_ref(v_type_154_);
lean_dec(v_i_153_);
lean_dec_ref(v_args_152_);
return v_res_155_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_pack___closed__0(void){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = lean_mk_string_unchecked("unit", 4, 4);
return v___x_156_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_pack___closed__1(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_157_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_pack___closed__0, &l_Lean_Meta_ArgsPacker_Unary_pack___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_pack___closed__0);
v___x_158_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_packType___closed__0, &l_Lean_Meta_ArgsPacker_Unary_packType___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_packType___closed__0);
v___x_159_ = l_Lean_Name_mkStr2(v___x_158_, v___x_157_);
return v___x_159_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_pack___closed__2(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_160_ = lean_box(0);
v___x_161_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_pack___closed__1, &l_Lean_Meta_ArgsPacker_Unary_pack___closed__1_once, _init_l_Lean_Meta_ArgsPacker_Unary_pack___closed__1);
v___x_162_ = l_Lean_mkConst(v___x_161_, v___x_160_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_pack(lean_object* v_type_163_, lean_object* v_args_164_){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; uint8_t v___x_167_; 
v___x_165_ = lean_array_get_size(v_args_164_);
v___x_166_ = lean_unsigned_to_nat(0u);
v___x_167_ = lean_nat_dec_eq(v___x_165_, v___x_166_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; 
v___x_168_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go(v_args_164_, v___x_166_, v_type_163_);
return v___x_168_;
}
else
{
lean_object* v___x_169_; 
v___x_169_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_pack___closed__2, &l_Lean_Meta_ArgsPacker_Unary_pack___closed__2_once, _init_l_Lean_Meta_ArgsPacker_Unary_pack___closed__2);
return v___x_169_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_pack___boxed(lean_object* v_type_170_, lean_object* v_args_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lean_Meta_ArgsPacker_Unary_pack(v_type_170_, v_args_171_);
lean_dec_ref(v_args_171_);
lean_dec_ref(v_type_170_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0(lean_object* v_arity_173_, lean_object* v_b_174_){
_start:
{
lean_object* v_fst_175_; lean_object* v_snd_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_206_; 
v_fst_175_ = lean_ctor_get(v_b_174_, 0);
v_snd_176_ = lean_ctor_get(v_b_174_, 1);
v_isSharedCheck_206_ = !lean_is_exclusive(v_b_174_);
if (v_isSharedCheck_206_ == 0)
{
v___x_178_ = v_b_174_;
v_isShared_179_ = v_isSharedCheck_206_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_snd_176_);
lean_inc(v_fst_175_);
lean_dec(v_b_174_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_206_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; uint8_t v___x_183_; 
v___x_180_ = lean_array_get_size(v_snd_176_);
v___x_181_ = lean_unsigned_to_nat(1u);
v___x_182_ = lean_nat_add(v___x_180_, v___x_181_);
v___x_183_ = lean_nat_dec_lt(v___x_182_, v_arity_173_);
lean_dec(v___x_182_);
if (v___x_183_ == 0)
{
lean_object* v___x_185_; 
if (v_isShared_179_ == 0)
{
v___x_185_ = v___x_178_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_fst_175_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v_snd_176_);
v___x_185_ = v_reuseFailAlloc_187_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
lean_object* v___x_186_; 
v___x_186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
return v___x_186_;
}
}
else
{
lean_object* v___x_188_; lean_object* v___x_189_; uint8_t v___x_190_; 
v___x_188_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__7, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__7_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__7);
v___x_189_ = lean_unsigned_to_nat(4u);
v___x_190_ = l_Lean_Expr_isAppOfArity(v_fst_175_, v___x_188_, v___x_189_);
if (v___x_190_ == 0)
{
lean_object* v___x_191_; 
lean_del_object(v___x_178_);
lean_dec(v_snd_176_);
lean_dec(v_fst_175_);
v___x_191_ = lean_box(0);
return v___x_191_;
}
else
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v_args_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v_e_201_; lean_object* v___x_203_; 
v___x_192_ = lean_unsigned_to_nat(2u);
v___x_193_ = l_Lean_Expr_getAppNumArgs(v_fst_175_);
v___x_194_ = lean_nat_sub(v___x_193_, v___x_192_);
v___x_195_ = lean_nat_sub(v___x_194_, v___x_181_);
lean_dec(v___x_194_);
v___x_196_ = l_Lean_Expr_getRevArg_x21(v_fst_175_, v___x_195_);
v_args_197_ = lean_array_push(v_snd_176_, v___x_196_);
v___x_198_ = lean_unsigned_to_nat(3u);
v___x_199_ = lean_nat_sub(v___x_193_, v___x_198_);
lean_dec(v___x_193_);
v___x_200_ = lean_nat_sub(v___x_199_, v___x_181_);
lean_dec(v___x_199_);
v_e_201_ = l_Lean_Expr_getRevArg_x21(v_fst_175_, v___x_200_);
lean_dec(v_fst_175_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 1, v_args_197_);
lean_ctor_set(v___x_178_, 0, v_e_201_);
v___x_203_ = v___x_178_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_e_201_);
lean_ctor_set(v_reuseFailAlloc_205_, 1, v_args_197_);
v___x_203_ = v_reuseFailAlloc_205_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
v_b_174_ = v___x_203_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0___boxed(lean_object* v_arity_207_, lean_object* v_b_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0(v_arity_207_, v_b_208_);
lean_dec(v_arity_207_);
return v_res_209_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0(void){
_start:
{
lean_object* v___x_210_; lean_object* v_args_211_; 
v___x_210_ = lean_unsigned_to_nat(0u);
v_args_211_ = lean_mk_empty_array_with_capacity(v___x_210_);
return v_args_211_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_unpack___closed__1(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0, &l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0);
v___x_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_unpack(lean_object* v_arity_214_, lean_object* v_e_215_){
_start:
{
lean_object* v___x_216_; uint8_t v___x_217_; 
v___x_216_ = lean_unsigned_to_nat(0u);
v___x_217_ = lean_nat_dec_eq(v_arity_214_, v___x_216_);
if (v___x_217_ == 0)
{
lean_object* v_args_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v_args_218_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0, &l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0);
v___x_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_219_, 0, v_e_215_);
lean_ctor_set(v___x_219_, 1, v_args_218_);
v___x_220_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0(v_arity_214_, v___x_219_);
if (lean_obj_tag(v___x_220_) == 0)
{
lean_object* v___x_221_; 
v___x_221_ = lean_box(0);
return v___x_221_;
}
else
{
lean_object* v_val_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_232_; 
v_val_222_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_232_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_232_ == 0)
{
v___x_224_ = v___x_220_;
v_isShared_225_ = v_isSharedCheck_232_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_val_222_);
lean_dec(v___x_220_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_232_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v_fst_226_; lean_object* v_snd_227_; lean_object* v___x_228_; lean_object* v___x_230_; 
v_fst_226_ = lean_ctor_get(v_val_222_, 0);
lean_inc(v_fst_226_);
v_snd_227_ = lean_ctor_get(v_val_222_, 1);
lean_inc(v_snd_227_);
lean_dec(v_val_222_);
v___x_228_ = lean_array_push(v_snd_227_, v_fst_226_);
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 0, v___x_228_);
v___x_230_ = v___x_224_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v___x_228_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
}
else
{
lean_object* v___x_233_; 
lean_dec_ref(v_e_215_);
v___x_233_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_unpack___closed__1, &l_Lean_Meta_ArgsPacker_Unary_unpack___closed__1_once, _init_l_Lean_Meta_ArgsPacker_Unary_unpack___closed__1);
return v___x_233_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_unpack___boxed(lean_object* v_arity_234_, lean_object* v_e_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Lean_Meta_ArgsPacker_Unary_unpack(v_arity_234_, v_e_235_);
lean_dec(v_arity_234_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___redArg(lean_object* v_upperBound_237_, lean_object* v_a_238_, lean_object* v_b_239_){
_start:
{
uint8_t v___x_240_; 
v___x_240_ = lean_nat_dec_lt(v_a_238_, v_upperBound_237_);
if (v___x_240_ == 0)
{
lean_dec(v_a_238_);
return v_b_239_;
}
else
{
lean_object* v_fst_241_; lean_object* v_snd_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_257_; 
v_fst_241_ = lean_ctor_get(v_b_239_, 0);
v_snd_242_ = lean_ctor_get(v_b_239_, 1);
v_isSharedCheck_257_ = !lean_is_exclusive(v_b_239_);
if (v_isSharedCheck_257_ == 0)
{
v___x_244_ = v_b_239_;
v_isShared_245_ = v_isSharedCheck_257_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_snd_242_);
lean_inc(v_fst_241_);
lean_dec(v_b_239_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_257_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_253_; 
v___x_246_ = lean_unsigned_to_nat(0u);
v___x_247_ = lean_unsigned_to_nat(1u);
v___x_248_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1);
lean_inc(v_snd_242_);
v___x_249_ = l_Lean_mkProj(v___x_248_, v___x_246_, v_snd_242_);
v___x_250_ = lean_array_push(v_fst_241_, v___x_249_);
v___x_251_ = l_Lean_mkProj(v___x_248_, v___x_247_, v_snd_242_);
if (v_isShared_245_ == 0)
{
lean_ctor_set(v___x_244_, 1, v___x_251_);
lean_ctor_set(v___x_244_, 0, v___x_250_);
v___x_253_ = v___x_244_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v___x_250_);
lean_ctor_set(v_reuseFailAlloc_256_, 1, v___x_251_);
v___x_253_ = v_reuseFailAlloc_256_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
lean_object* v___x_254_; 
v___x_254_ = lean_nat_add(v_a_238_, v___x_247_);
lean_dec(v_a_238_);
v_a_238_ = v___x_254_;
v_b_239_ = v___x_253_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___redArg___boxed(lean_object* v_upperBound_258_, lean_object* v_a_259_, lean_object* v_b_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___redArg(v_upperBound_258_, v_a_259_, v_b_260_);
lean_dec(v_upperBound_258_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems(lean_object* v_t_262_, lean_object* v_arity_263_){
_start:
{
lean_object* v___x_264_; uint8_t v___x_265_; 
v___x_264_ = lean_unsigned_to_nat(0u);
v___x_265_ = lean_nat_dec_eq(v_arity_263_, v___x_264_);
if (v___x_265_ == 0)
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v_result_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v_fst_271_; lean_object* v_snd_272_; lean_object* v___x_273_; 
v___x_266_ = lean_unsigned_to_nat(1u);
v___x_267_ = lean_nat_sub(v_arity_263_, v___x_266_);
v_result_268_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0, &l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0);
v___x_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_269_, 0, v_result_268_);
lean_ctor_set(v___x_269_, 1, v_t_262_);
v___x_270_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___redArg(v___x_267_, v___x_264_, v___x_269_);
lean_dec(v___x_267_);
v_fst_271_ = lean_ctor_get(v___x_270_, 0);
lean_inc(v_fst_271_);
v_snd_272_ = lean_ctor_get(v___x_270_, 1);
lean_inc(v_snd_272_);
lean_dec_ref(v___x_270_);
v___x_273_ = lean_array_push(v_fst_271_, v_snd_272_);
return v___x_273_;
}
else
{
lean_object* v___x_274_; 
lean_dec_ref(v_t_262_);
v___x_274_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0, &l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0);
return v___x_274_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems___boxed(lean_object* v_t_275_, lean_object* v_arity_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems(v_t_275_, v_arity_276_);
lean_dec(v_arity_276_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0(lean_object* v_upperBound_278_, lean_object* v_inst_279_, lean_object* v_R_280_, lean_object* v_a_281_, lean_object* v_b_282_, lean_object* v_c_283_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___redArg(v_upperBound_278_, v_a_281_, v_b_282_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___boxed(lean_object* v_upperBound_285_, lean_object* v_inst_286_, lean_object* v_R_287_, lean_object* v_a_288_, lean_object* v_b_289_, lean_object* v_c_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0(v_upperBound_285_, v_inst_286_, v_R_287_, v_a_288_, v_b_289_, v_c_290_);
lean_dec(v_upperBound_285_);
return v_res_291_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___closed__0(void){
_start:
{
lean_object* v___f_292_; 
v___f_292_ = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___lam__0___boxed), 5, 0);
return v___f_292_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(lean_object* v_msg_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v___f_299_; lean_object* v___x_665__overap_300_; lean_object* v___x_301_; 
v___f_299_ = lean_obj_once(&l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___closed__0, &l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___closed__0_once, _init_l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___closed__0);
v___x_665__overap_300_ = lean_panic_fn_borrowed(v___f_299_, v_msg_293_);
lean_inc(v___y_297_);
lean_inc_ref(v___y_296_);
lean_inc(v___y_295_);
lean_inc_ref(v___y_294_);
v___x_301_ = lean_apply_5(v___x_665__overap_300_, v___y_294_, v___y_295_, v___y_296_, v___y_297_, lean_box(0));
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___boxed(lean_object* v_msg_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v_msg_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_);
lean_dec(v___y_306_);
lean_dec_ref(v___y_305_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg___lam__0(lean_object* v_k_309_, lean_object* v_b_310_, lean_object* v_c_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_){
_start:
{
lean_object* v___x_317_; 
lean_inc(v___y_315_);
lean_inc_ref(v___y_314_);
lean_inc(v___y_313_);
lean_inc_ref(v___y_312_);
v___x_317_ = lean_apply_7(v_k_309_, v_b_310_, v_c_311_, v___y_312_, v___y_313_, v___y_314_, v___y_315_, lean_box(0));
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg___lam__0___boxed(lean_object* v_k_318_, lean_object* v_b_319_, lean_object* v_c_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg___lam__0(v_k_318_, v_b_319_, v_c_320_, v___y_321_, v___y_322_, v___y_323_, v___y_324_);
lean_dec(v___y_324_);
lean_dec_ref(v___y_323_);
lean_dec(v___y_322_);
lean_dec_ref(v___y_321_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(lean_object* v_type_327_, lean_object* v_maxFVars_x3f_328_, lean_object* v_k_329_, uint8_t v_cleanupAnnotations_330_, uint8_t v_whnfType_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_){
_start:
{
lean_object* v___f_337_; lean_object* v___x_338_; 
v___f_337_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_337_, 0, v_k_329_);
v___x_338_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_327_, v_maxFVars_x3f_328_, v___f_337_, v_cleanupAnnotations_330_, v_whnfType_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_);
if (lean_obj_tag(v___x_338_) == 0)
{
lean_object* v_a_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_346_; 
v_a_339_ = lean_ctor_get(v___x_338_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_346_ == 0)
{
v___x_341_ = v___x_338_;
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_a_339_);
lean_dec(v___x_338_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_344_; 
if (v_isShared_342_ == 0)
{
v___x_344_ = v___x_341_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_a_339_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
else
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_354_; 
v_a_347_ = lean_ctor_get(v___x_338_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_354_ == 0)
{
v___x_349_ = v___x_338_;
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_338_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_352_; 
if (v_isShared_350_ == 0)
{
v___x_352_ = v___x_349_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_a_347_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg___boxed(lean_object* v_type_355_, lean_object* v_maxFVars_x3f_356_, lean_object* v_k_357_, lean_object* v_cleanupAnnotations_358_, lean_object* v_whnfType_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_365_; uint8_t v_whnfType_boxed_366_; lean_object* v_res_367_; 
v_cleanupAnnotations_boxed_365_ = lean_unbox(v_cleanupAnnotations_358_);
v_whnfType_boxed_366_ = lean_unbox(v_whnfType_359_);
v_res_367_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(v_type_355_, v_maxFVars_x3f_356_, v_k_357_, v_cleanupAnnotations_boxed_365_, v_whnfType_boxed_366_, v___y_360_, v___y_361_, v___y_362_, v___y_363_);
lean_dec(v___y_363_);
lean_dec_ref(v___y_362_);
lean_dec(v___y_361_);
lean_dec_ref(v___y_360_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2(lean_object* v_00_u03b1_368_, lean_object* v_type_369_, lean_object* v_maxFVars_x3f_370_, lean_object* v_k_371_, uint8_t v_cleanupAnnotations_372_, uint8_t v_whnfType_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(v_type_369_, v_maxFVars_x3f_370_, v_k_371_, v_cleanupAnnotations_372_, v_whnfType_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___boxed(lean_object* v_00_u03b1_380_, lean_object* v_type_381_, lean_object* v_maxFVars_x3f_382_, lean_object* v_k_383_, lean_object* v_cleanupAnnotations_384_, lean_object* v_whnfType_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_391_; uint8_t v_whnfType_boxed_392_; lean_object* v_res_393_; 
v_cleanupAnnotations_boxed_391_ = lean_unbox(v_cleanupAnnotations_384_);
v_whnfType_boxed_392_ = lean_unbox(v_whnfType_385_);
v_res_393_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2(v_00_u03b1_380_, v_type_381_, v_maxFVars_x3f_382_, v_k_383_, v_cleanupAnnotations_boxed_391_, v_whnfType_boxed_392_, v___y_386_, v___y_387_, v___y_388_, v___y_389_);
lean_dec(v___y_389_);
lean_dec_ref(v___y_388_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__0(lean_object* v___x_394_, lean_object* v_type_395_, uint8_t v___x_396_, uint8_t v___x_397_, lean_object* v_tuple_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; 
lean_inc_ref(v_tuple_398_);
v___x_404_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems(v_tuple_398_, v___x_394_);
v___x_405_ = l_Lean_Meta_instantiateForall(v_type_395_, v___x_404_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
lean_dec_ref(v___x_404_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v_a_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; uint8_t v___x_410_; lean_object* v___x_411_; 
v_a_406_ = lean_ctor_get(v___x_405_, 0);
lean_inc(v_a_406_);
lean_dec_ref(v___x_405_);
v___x_407_ = lean_unsigned_to_nat(1u);
v___x_408_ = lean_mk_empty_array_with_capacity(v___x_407_);
v___x_409_ = lean_array_push(v___x_408_, v_tuple_398_);
v___x_410_ = 1;
v___x_411_ = l_Lean_Meta_mkForallFVars(v___x_409_, v_a_406_, v___x_396_, v___x_397_, v___x_397_, v___x_410_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
lean_dec_ref(v___x_409_);
return v___x_411_;
}
else
{
lean_dec_ref(v_tuple_398_);
return v___x_405_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__0___boxed(lean_object* v___x_412_, lean_object* v_type_413_, lean_object* v___x_414_, lean_object* v___x_415_, lean_object* v_tuple_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
uint8_t v___x_1465__boxed_422_; uint8_t v___x_1466__boxed_423_; lean_object* v_res_424_; 
v___x_1465__boxed_422_ = lean_unbox(v___x_414_);
v___x_1466__boxed_423_ = lean_unbox(v___x_415_);
v_res_424_ = l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__0(v___x_412_, v_type_413_, v___x_1465__boxed_422_, v___x_1466__boxed_423_, v_tuple_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_);
lean_dec(v___y_420_);
lean_dec_ref(v___y_419_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
lean_dec(v___x_412_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg___lam__0(lean_object* v_k_425_, lean_object* v_b_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v___x_432_; 
lean_inc(v___y_430_);
lean_inc_ref(v___y_429_);
lean_inc(v___y_428_);
lean_inc_ref(v___y_427_);
v___x_432_ = lean_apply_6(v_k_425_, v_b_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_, lean_box(0));
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v_k_433_, lean_object* v_b_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg___lam__0(v_k_433_, v_b_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg(lean_object* v_name_441_, uint8_t v_bi_442_, lean_object* v_type_443_, lean_object* v_k_444_, uint8_t v_kind_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
lean_object* v___f_451_; lean_object* v___x_452_; 
v___f_451_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_451_, 0, v_k_444_);
v___x_452_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_441_, v_bi_442_, v_type_443_, v___f_451_, v_kind_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v_a_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_460_; 
v_a_453_ = lean_ctor_get(v___x_452_, 0);
v_isSharedCheck_460_ = !lean_is_exclusive(v___x_452_);
if (v_isSharedCheck_460_ == 0)
{
v___x_455_ = v___x_452_;
v_isShared_456_ = v_isSharedCheck_460_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_a_453_);
lean_dec(v___x_452_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_460_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_458_; 
if (v_isShared_456_ == 0)
{
v___x_458_ = v___x_455_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_a_453_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
}
else
{
lean_object* v_a_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_468_; 
v_a_461_ = lean_ctor_get(v___x_452_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_452_);
if (v_isSharedCheck_468_ == 0)
{
v___x_463_ = v___x_452_;
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_a_461_);
lean_dec(v___x_452_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_464_ == 0)
{
v___x_466_ = v___x_463_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_a_461_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg___boxed(lean_object* v_name_469_, lean_object* v_bi_470_, lean_object* v_type_471_, lean_object* v_k_472_, lean_object* v_kind_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_){
_start:
{
uint8_t v_bi_boxed_479_; uint8_t v_kind_boxed_480_; lean_object* v_res_481_; 
v_bi_boxed_479_ = lean_unbox(v_bi_470_);
v_kind_boxed_480_ = lean_unbox(v_kind_473_);
v_res_481_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg(v_name_469_, v_bi_boxed_479_, v_type_471_, v_k_472_, v_kind_boxed_480_, v___y_474_, v___y_475_, v___y_476_, v___y_477_);
lean_dec(v___y_477_);
lean_dec_ref(v___y_476_);
lean_dec(v___y_475_);
lean_dec_ref(v___y_474_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(lean_object* v_name_482_, lean_object* v_type_483_, lean_object* v_k_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_){
_start:
{
uint8_t v___x_490_; uint8_t v___x_491_; lean_object* v___x_492_; 
v___x_490_ = 0;
v___x_491_ = 0;
v___x_492_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg(v_name_482_, v___x_490_, v_type_483_, v_k_484_, v___x_491_, v___y_485_, v___y_486_, v___y_487_, v___y_488_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg___boxed(lean_object* v_name_493_, lean_object* v_type_494_, lean_object* v_k_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_name_493_, v_type_494_, v_k_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
lean_dec(v___y_497_);
lean_dec_ref(v___y_496_);
return v_res_501_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__0(void){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = lean_mk_string_unchecked("Lean.Meta.ArgsPacker.Unary.uncurryType", 38, 38);
return v___x_502_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__1(void){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = lean_mk_string_unchecked("assertion violation: xs.size = varNames.size\n      ", 51, 51);
return v___x_503_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__2(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_504_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__1, &l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__1_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__1);
v___x_505_ = lean_unsigned_to_nat(6u);
v___x_506_ = lean_unsigned_to_nat(138u);
v___x_507_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__0, &l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__0);
v___x_508_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0);
v___x_509_ = l_mkPanicMessageWithDecl(v___x_508_, v___x_507_, v___x_506_, v___x_505_, v___x_504_);
return v___x_509_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__3(void){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = lean_mk_string_unchecked("_x", 2, 2);
return v___x_510_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4(void){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__3, &l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__3_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__3);
v___x_512_ = l_Lean_Name_mkStr1(v___x_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1(lean_object* v___x_513_, lean_object* v_type_514_, uint8_t v___x_515_, uint8_t v___x_516_, lean_object* v_varNames_517_, lean_object* v___x_518_, lean_object* v_xs_519_, lean_object* v_x_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_){
_start:
{
lean_object* v___x_526_; uint8_t v___x_527_; 
v___x_526_ = lean_array_get_size(v_xs_519_);
v___x_527_ = lean_nat_dec_eq(v___x_526_, v___x_513_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; lean_object* v___x_529_; 
lean_dec_ref(v_xs_519_);
lean_dec_ref(v_type_514_);
v___x_528_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__2, &l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__2_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__2);
v___x_529_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v___x_528_, v___y_521_, v___y_522_, v___y_523_, v___y_524_);
return v___x_529_;
}
else
{
lean_object* v___x_530_; 
v___x_530_ = l_Lean_Meta_ArgsPacker_Unary_packType(v_xs_519_, v___y_521_, v___y_522_, v___y_523_, v___y_524_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v_a_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___f_534_; lean_object* v___x_535_; uint8_t v___x_536_; 
v_a_531_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_a_531_);
lean_dec_ref(v___x_530_);
v___x_532_ = lean_box(v___x_515_);
v___x_533_ = lean_box(v___x_516_);
v___f_534_ = lean_alloc_closure((void*)(l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__0___boxed), 10, 4);
lean_closure_set(v___f_534_, 0, v___x_526_);
lean_closure_set(v___f_534_, 1, v_type_514_);
lean_closure_set(v___f_534_, 2, v___x_532_);
lean_closure_set(v___f_534_, 3, v___x_533_);
v___x_535_ = lean_unsigned_to_nat(1u);
v___x_536_ = lean_nat_dec_eq(v___x_526_, v___x_535_);
if (v___x_536_ == 0)
{
lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_537_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4, &l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4);
v___x_538_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v___x_537_, v_a_531_, v___f_534_, v___y_521_, v___y_522_, v___y_523_, v___y_524_);
return v___x_538_;
}
else
{
lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_539_ = lean_box(0);
v___x_540_ = lean_array_get_borrowed(v___x_539_, v_varNames_517_, v___x_518_);
lean_inc(v___x_540_);
v___x_541_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v___x_540_, v_a_531_, v___f_534_, v___y_521_, v___y_522_, v___y_523_, v___y_524_);
return v___x_541_;
}
}
else
{
lean_dec_ref(v_type_514_);
return v___x_530_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___boxed(lean_object* v___x_542_, lean_object* v_type_543_, lean_object* v___x_544_, lean_object* v___x_545_, lean_object* v_varNames_546_, lean_object* v___x_547_, lean_object* v_xs_548_, lean_object* v_x_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
uint8_t v___x_1618__boxed_555_; uint8_t v___x_1619__boxed_556_; lean_object* v_res_557_; 
v___x_1618__boxed_555_ = lean_unbox(v___x_544_);
v___x_1619__boxed_556_ = lean_unbox(v___x_545_);
v_res_557_ = l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1(v___x_542_, v_type_543_, v___x_1618__boxed_555_, v___x_1619__boxed_556_, v_varNames_546_, v___x_547_, v_xs_548_, v_x_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_);
lean_dec(v___y_553_);
lean_dec_ref(v___y_552_);
lean_dec(v___y_551_);
lean_dec_ref(v___y_550_);
lean_dec_ref(v_x_549_);
lean_dec(v___x_547_);
lean_dec_ref(v_varNames_546_);
lean_dec(v___x_542_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType(lean_object* v_varNames_558_, lean_object* v_type_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; uint8_t v___x_567_; 
v___x_565_ = lean_array_get_size(v_varNames_558_);
v___x_566_ = lean_unsigned_to_nat(0u);
v___x_567_ = lean_nat_dec_eq(v___x_565_, v___x_566_);
if (v___x_567_ == 0)
{
uint8_t v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___f_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_568_ = 1;
v___x_569_ = lean_box(v___x_567_);
v___x_570_ = lean_box(v___x_568_);
lean_inc_ref(v_type_559_);
v___f_571_ = lean_alloc_closure((void*)(l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___boxed), 13, 6);
lean_closure_set(v___f_571_, 0, v___x_565_);
lean_closure_set(v___f_571_, 1, v_type_559_);
lean_closure_set(v___f_571_, 2, v___x_569_);
lean_closure_set(v___f_571_, 3, v___x_570_);
lean_closure_set(v___f_571_, 4, v_varNames_558_);
lean_closure_set(v___f_571_, 5, v___x_566_);
v___x_572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_572_, 0, v___x_565_);
v___x_573_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(v_type_559_, v___x_572_, v___f_571_, v___x_567_, v___x_567_, v_a_560_, v_a_561_, v_a_562_, v_a_563_);
return v___x_573_;
}
else
{
lean_object* v___x_574_; lean_object* v___x_575_; 
lean_dec_ref(v_varNames_558_);
v___x_574_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_packType___closed__2, &l_Lean_Meta_ArgsPacker_Unary_packType___closed__2_once, _init_l_Lean_Meta_ArgsPacker_Unary_packType___closed__2);
v___x_575_ = l_Lean_mkArrow(v___x_574_, v_type_559_, v_a_562_, v_a_563_);
return v___x_575_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___boxed(lean_object* v_varNames_576_, lean_object* v_type_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Lean_Meta_ArgsPacker_Unary_uncurryType(v_varNames_576_, v_type_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_);
lean_dec(v_a_581_);
lean_dec_ref(v_a_580_);
lean_dec(v_a_579_);
lean_dec_ref(v_a_578_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1(lean_object* v_00_u03b1_584_, lean_object* v_name_585_, uint8_t v_bi_586_, lean_object* v_type_587_, lean_object* v_k_588_, uint8_t v_kind_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg(v_name_585_, v_bi_586_, v_type_587_, v_k_588_, v_kind_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___boxed(lean_object* v_00_u03b1_596_, lean_object* v_name_597_, lean_object* v_bi_598_, lean_object* v_type_599_, lean_object* v_k_600_, lean_object* v_kind_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_){
_start:
{
uint8_t v_bi_boxed_607_; uint8_t v_kind_boxed_608_; lean_object* v_res_609_; 
v_bi_boxed_607_ = lean_unbox(v_bi_598_);
v_kind_boxed_608_ = lean_unbox(v_kind_601_);
v_res_609_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1(v_00_u03b1_596_, v_name_597_, v_bi_boxed_607_, v_type_599_, v_k_600_, v_kind_boxed_608_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
lean_dec(v___y_605_);
lean_dec_ref(v___y_604_);
lean_dec(v___y_603_);
lean_dec_ref(v___y_602_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1(lean_object* v_00_u03b1_610_, lean_object* v_name_611_, lean_object* v_type_612_, lean_object* v_k_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_name_611_, v_type_612_, v_k_613_, v___y_614_, v___y_615_, v___y_616_, v___y_617_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___boxed(lean_object* v_00_u03b1_620_, lean_object* v_name_621_, lean_object* v_type_622_, lean_object* v_k_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1(v_00_u03b1_620_, v_name_621_, v_type_622_, v_k_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_);
lean_dec(v___y_627_);
lean_dec_ref(v___y_626_);
lean_dec(v___y_625_);
lean_dec_ref(v___y_624_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0_spec__0(lean_object* v_msgData_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_){
_start:
{
lean_object* v___x_636_; lean_object* v_env_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v_mctx_640_; lean_object* v_lctx_641_; lean_object* v_options_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_636_ = lean_st_ref_get(v___y_634_);
v_env_637_ = lean_ctor_get(v___x_636_, 0);
lean_inc_ref(v_env_637_);
lean_dec(v___x_636_);
v___x_638_ = lean_st_ref_get(v___y_634_);
lean_dec(v___x_638_);
v___x_639_ = lean_st_ref_get(v___y_632_);
v_mctx_640_ = lean_ctor_get(v___x_639_, 0);
lean_inc_ref(v_mctx_640_);
lean_dec(v___x_639_);
v_lctx_641_ = lean_ctor_get(v___y_631_, 2);
v_options_642_ = lean_ctor_get(v___y_633_, 2);
lean_inc_ref(v_options_642_);
lean_inc_ref(v_lctx_641_);
v___x_643_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_643_, 0, v_env_637_);
lean_ctor_set(v___x_643_, 1, v_mctx_640_);
lean_ctor_set(v___x_643_, 2, v_lctx_641_);
lean_ctor_set(v___x_643_, 3, v_options_642_);
v___x_644_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_643_);
lean_ctor_set(v___x_644_, 1, v_msgData_630_);
v___x_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0_spec__0___boxed(lean_object* v_msgData_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0_spec__0(v_msgData_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_);
lean_dec(v___y_650_);
lean_dec_ref(v___y_649_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_647_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(lean_object* v_msg_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_){
_start:
{
lean_object* v_ref_659_; lean_object* v___x_660_; lean_object* v_a_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_669_; 
v_ref_659_ = lean_ctor_get(v___y_656_, 5);
v___x_660_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0_spec__0(v_msg_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_);
v_a_661_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_669_ == 0)
{
v___x_663_ = v___x_660_;
v_isShared_664_ = v_isSharedCheck_669_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_a_661_);
lean_dec(v___x_660_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_669_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_665_; lean_object* v___x_667_; 
lean_inc(v_ref_659_);
v___x_665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_665_, 0, v_ref_659_);
lean_ctor_set(v___x_665_, 1, v_a_661_);
if (v_isShared_664_ == 0)
{
lean_ctor_set_tag(v___x_663_, 1);
lean_ctor_set(v___x_663_, 0, v___x_665_);
v___x_667_ = v___x_663_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v___x_665_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg___boxed(lean_object* v_msg_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v_msg_670_, v___y_671_, v___y_672_, v___y_673_, v___y_674_);
lean_dec(v___y_674_);
lean_dec_ref(v___y_673_);
lean_dec(v___y_672_);
lean_dec_ref(v___y_671_);
return v_res_676_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__0(void){
_start:
{
lean_object* v___x_677_; 
v___x_677_ = lean_mk_string_unchecked("ArgsPacker.Binary.casesOn: Expected PSigma type, got ", 53, 53);
return v___x_677_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__1(void){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_678_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__0);
v___x_679_ = l_Lean_stringToMessageData(v___x_678_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__1___boxed(lean_object** _args){
lean_object* v___x_680_ = _args[0];
lean_object* v___x_681_ = _args[1];
lean_object* v___x_682_ = _args[2];
lean_object* v_arg_683_ = _args[3];
lean_object* v_arg_684_ = _args[4];
lean_object* v_a_685_ = _args[5];
lean_object* v_alt_686_ = _args[6];
lean_object* v_tail_687_ = _args[7];
lean_object* v_u_688_ = _args[8];
lean_object* v___x_689_ = _args[9];
lean_object* v___x_690_ = _args[10];
lean_object* v___x_691_ = _args[11];
lean_object* v_head_692_ = _args[12];
lean_object* v_x_693_ = _args[13];
lean_object* v___y_694_ = _args[14];
lean_object* v___y_695_ = _args[15];
lean_object* v___y_696_ = _args[16];
lean_object* v___y_697_ = _args[17];
lean_object* v___y_698_ = _args[18];
_start:
{
uint8_t v___x_3538__boxed_699_; uint8_t v___x_3539__boxed_700_; uint8_t v___x_3540__boxed_701_; lean_object* v_res_702_; 
v___x_3538__boxed_699_ = lean_unbox(v___x_689_);
v___x_3539__boxed_700_ = lean_unbox(v___x_690_);
v___x_3540__boxed_701_ = lean_unbox(v___x_691_);
v_res_702_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__1(v___x_680_, v___x_681_, v___x_682_, v_arg_683_, v_arg_684_, v_a_685_, v_alt_686_, v_tail_687_, v_u_688_, v___x_3538__boxed_699_, v___x_3539__boxed_700_, v___x_3540__boxed_701_, v_head_692_, v_x_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_);
lean_dec(v___y_697_);
lean_dec_ref(v___y_696_);
lean_dec(v___y_695_);
lean_dec_ref(v___y_694_);
return v_res_702_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__2(void){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = lean_mk_string_unchecked("casesOn", 7, 7);
return v___x_703_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__3(void){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_704_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__2, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__2_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__2);
v___x_705_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0);
v___x_706_ = l_Lean_Name_mkStr2(v___x_705_, v___x_704_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn(lean_object* v_varNames_707_, lean_object* v_e_708_, lean_object* v_u_709_, lean_object* v_codomain_710_, lean_object* v_alt_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_){
_start:
{
if (lean_obj_tag(v_varNames_707_) == 0)
{
lean_object* v___x_717_; 
lean_dec_ref(v_codomain_710_);
lean_dec(v_u_709_);
lean_dec_ref(v_e_708_);
v___x_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_717_, 0, v_alt_711_);
return v___x_717_;
}
else
{
lean_object* v_tail_718_; 
v_tail_718_ = lean_ctor_get(v_varNames_707_, 1);
lean_inc(v_tail_718_);
if (lean_obj_tag(v_tail_718_) == 0)
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
lean_dec_ref(v_varNames_707_);
lean_dec_ref(v_codomain_710_);
lean_dec(v_u_709_);
v___x_719_ = lean_unsigned_to_nat(1u);
v___x_720_ = lean_mk_empty_array_with_capacity(v___x_719_);
v___x_721_ = lean_array_push(v___x_720_, v_e_708_);
v___x_722_ = l_Lean_Expr_beta(v_alt_711_, v___x_721_);
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
return v___x_723_;
}
else
{
lean_object* v_head_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_780_; 
v_head_724_ = lean_ctor_get(v_varNames_707_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v_varNames_707_);
if (v_isSharedCheck_780_ == 0)
{
lean_object* v_unused_781_; 
v_unused_781_ = lean_ctor_get(v_varNames_707_, 1);
lean_dec(v_unused_781_);
v___x_726_ = v_varNames_707_;
v_isShared_727_ = v_isSharedCheck_780_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_head_724_);
lean_dec(v_varNames_707_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_780_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v_head_728_; lean_object* v___x_729_; 
v_head_728_ = lean_ctor_get(v_tail_718_, 0);
lean_inc(v_head_728_);
lean_inc(v_a_715_);
lean_inc_ref(v_a_714_);
lean_inc(v_a_713_);
lean_inc_ref(v_a_712_);
lean_inc_ref(v_e_708_);
v___x_729_ = lean_infer_type(v_e_708_, v_a_712_, v_a_713_, v_a_714_, v_a_715_);
if (lean_obj_tag(v___x_729_) == 0)
{
lean_object* v_a_730_; lean_object* v___x_731_; 
v_a_730_ = lean_ctor_get(v___x_729_, 0);
lean_inc_n(v_a_730_, 2);
lean_dec_ref(v___x_729_);
v___x_731_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_730_, v_a_713_, v_a_715_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v_a_732_; lean_object* v___y_734_; lean_object* v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___x_742_; uint8_t v___x_743_; 
v_a_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc(v_a_732_);
lean_dec_ref(v___x_731_);
v___x_742_ = l_Lean_Expr_cleanupAnnotations(v_a_732_);
v___x_743_ = l_Lean_Expr_isApp(v___x_742_);
if (v___x_743_ == 0)
{
lean_dec_ref(v___x_742_);
lean_dec(v_head_728_);
lean_del_object(v___x_726_);
lean_dec(v_head_724_);
lean_dec_ref(v_tail_718_);
lean_dec_ref(v_alt_711_);
lean_dec_ref(v_codomain_710_);
lean_dec(v_u_709_);
lean_dec_ref(v_e_708_);
v___y_734_ = v_a_712_;
v___y_735_ = v_a_713_;
v___y_736_ = v_a_714_;
v___y_737_ = v_a_715_;
goto v___jp_733_;
}
else
{
lean_object* v_arg_744_; lean_object* v___x_745_; uint8_t v___x_746_; 
v_arg_744_ = lean_ctor_get(v___x_742_, 1);
lean_inc_ref(v_arg_744_);
v___x_745_ = l_Lean_Expr_appFnCleanup___redArg(v___x_742_);
v___x_746_ = l_Lean_Expr_isApp(v___x_745_);
if (v___x_746_ == 0)
{
lean_dec_ref(v___x_745_);
lean_dec_ref(v_arg_744_);
lean_dec(v_head_728_);
lean_del_object(v___x_726_);
lean_dec_ref(v_tail_718_);
lean_dec(v_head_724_);
lean_dec_ref(v_alt_711_);
lean_dec_ref(v_codomain_710_);
lean_dec(v_u_709_);
lean_dec_ref(v_e_708_);
v___y_734_ = v_a_712_;
v___y_735_ = v_a_713_;
v___y_736_ = v_a_714_;
v___y_737_ = v_a_715_;
goto v___jp_733_;
}
else
{
lean_object* v_arg_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; uint8_t v___x_751_; 
v_arg_747_ = lean_ctor_get(v___x_745_, 1);
lean_inc_ref(v_arg_747_);
v___x_748_ = l_Lean_Expr_appFnCleanup___redArg(v___x_745_);
v___x_749_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0);
v___x_750_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1);
v___x_751_ = l_Lean_Expr_isConstOf(v___x_748_, v___x_750_);
lean_dec_ref(v___x_748_);
if (v___x_751_ == 0)
{
lean_dec_ref(v_arg_747_);
lean_dec_ref(v_arg_744_);
lean_dec(v_head_728_);
lean_del_object(v___x_726_);
lean_dec(v_head_724_);
lean_dec_ref(v_tail_718_);
lean_dec_ref(v_alt_711_);
lean_dec_ref(v_codomain_710_);
lean_dec(v_u_709_);
lean_dec_ref(v_e_708_);
v___y_734_ = v_a_712_;
v___y_735_ = v_a_713_;
v___y_736_ = v_a_714_;
v___y_737_ = v_a_715_;
goto v___jp_733_;
}
else
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; uint8_t v___x_755_; uint8_t v___x_756_; lean_object* v___x_757_; 
v___x_752_ = lean_unsigned_to_nat(1u);
v___x_753_ = lean_mk_empty_array_with_capacity(v___x_752_);
lean_inc_ref(v_e_708_);
lean_inc_ref(v___x_753_);
v___x_754_ = lean_array_push(v___x_753_, v_e_708_);
v___x_755_ = 0;
v___x_756_ = 1;
v___x_757_ = l_Lean_Meta_mkLambdaFVars(v___x_754_, v_codomain_710_, v___x_755_, v___x_751_, v___x_755_, v___x_751_, v___x_756_, v_a_712_, v_a_713_, v_a_714_, v_a_715_);
lean_dec_ref(v___x_754_);
if (lean_obj_tag(v___x_757_) == 0)
{
lean_object* v_a_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___f_764_; lean_object* v___x_765_; 
v_a_758_ = lean_ctor_get(v___x_757_, 0);
lean_inc_n(v_a_758_, 2);
lean_dec_ref(v___x_757_);
v___x_759_ = l_Lean_Expr_getAppFn(v_a_730_);
lean_dec(v_a_730_);
v___x_760_ = l_Lean_Expr_constLevels_x21(v___x_759_);
lean_dec_ref(v___x_759_);
v___x_761_ = lean_box(v___x_755_);
v___x_762_ = lean_box(v___x_751_);
v___x_763_ = lean_box(v___x_756_);
lean_inc(v_u_709_);
lean_inc_ref(v_arg_744_);
lean_inc_ref_n(v_arg_747_, 2);
lean_inc(v___x_760_);
v___f_764_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__1___boxed), 19, 13);
lean_closure_set(v___f_764_, 0, v___x_753_);
lean_closure_set(v___f_764_, 1, v___x_749_);
lean_closure_set(v___f_764_, 2, v___x_760_);
lean_closure_set(v___f_764_, 3, v_arg_747_);
lean_closure_set(v___f_764_, 4, v_arg_744_);
lean_closure_set(v___f_764_, 5, v_a_758_);
lean_closure_set(v___f_764_, 6, v_alt_711_);
lean_closure_set(v___f_764_, 7, v_tail_718_);
lean_closure_set(v___f_764_, 8, v_u_709_);
lean_closure_set(v___f_764_, 9, v___x_761_);
lean_closure_set(v___f_764_, 10, v___x_762_);
lean_closure_set(v___f_764_, 11, v___x_763_);
lean_closure_set(v___f_764_, 12, v_head_728_);
v___x_765_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_head_724_, v_arg_747_, v___f_764_, v_a_712_, v_a_713_, v_a_714_, v_a_715_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_779_; 
v_a_766_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_779_ == 0)
{
v___x_768_ = v___x_765_;
v_isShared_769_ = v_isSharedCheck_779_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_765_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_779_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_770_; lean_object* v___x_772_; 
v___x_770_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__3, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__3_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__3);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 1, v___x_760_);
lean_ctor_set(v___x_726_, 0, v_u_709_);
v___x_772_ = v___x_726_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_u_709_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v___x_760_);
v___x_772_ = v_reuseFailAlloc_778_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_776_; 
v___x_773_ = l_Lean_Expr_const___override(v___x_770_, v___x_772_);
v___x_774_ = l_Lean_mkApp5(v___x_773_, v_arg_747_, v_arg_744_, v_a_758_, v_e_708_, v_a_766_);
if (v_isShared_769_ == 0)
{
lean_ctor_set(v___x_768_, 0, v___x_774_);
v___x_776_ = v___x_768_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v___x_774_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
}
else
{
lean_dec(v___x_760_);
lean_dec(v_a_758_);
lean_dec_ref(v_arg_747_);
lean_dec_ref(v_arg_744_);
lean_del_object(v___x_726_);
lean_dec(v_u_709_);
lean_dec_ref(v_e_708_);
return v___x_765_;
}
}
else
{
lean_dec_ref(v___x_753_);
lean_dec_ref(v_arg_747_);
lean_dec_ref(v_arg_744_);
lean_dec(v_a_730_);
lean_dec(v_head_728_);
lean_del_object(v___x_726_);
lean_dec(v_head_724_);
lean_dec_ref(v_tail_718_);
lean_dec_ref(v_alt_711_);
lean_dec(v_u_709_);
lean_dec_ref(v_e_708_);
return v___x_757_;
}
}
}
}
v___jp_733_:
{
lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_738_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__1);
v___x_739_ = l_Lean_MessageData_ofExpr(v_a_730_);
v___x_740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_740_, 0, v___x_738_);
lean_ctor_set(v___x_740_, 1, v___x_739_);
v___x_741_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_740_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
return v___x_741_;
}
}
else
{
lean_dec(v_a_730_);
lean_dec(v_head_728_);
lean_del_object(v___x_726_);
lean_dec(v_head_724_);
lean_dec_ref(v_tail_718_);
lean_dec_ref(v_alt_711_);
lean_dec_ref(v_codomain_710_);
lean_dec(v_u_709_);
lean_dec_ref(v_e_708_);
return v___x_731_;
}
}
else
{
lean_dec(v_head_728_);
lean_del_object(v___x_726_);
lean_dec(v_head_724_);
lean_dec_ref(v_tail_718_);
lean_dec_ref(v_alt_711_);
lean_dec_ref(v_codomain_710_);
lean_dec(v_u_709_);
lean_dec_ref(v_e_708_);
return v___x_729_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__0(lean_object* v___x_782_, lean_object* v___x_783_, lean_object* v_arg_784_, lean_object* v_arg_785_, lean_object* v_x_786_, lean_object* v___x_787_, lean_object* v_a_788_, lean_object* v_alt_789_, lean_object* v___x_790_, lean_object* v_tail_791_, lean_object* v_u_792_, uint8_t v___x_793_, uint8_t v___x_794_, uint8_t v___x_795_, lean_object* v_y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_802_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__6, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__6_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__6);
v___x_803_ = l_Lean_Name_mkStr2(v___x_782_, v___x_802_);
v___x_804_ = l_Lean_Expr_const___override(v___x_803_, v___x_783_);
lean_inc_ref_n(v_y_796_, 2);
lean_inc_ref(v_x_786_);
v___x_805_ = l_Lean_mkApp4(v___x_804_, v_arg_784_, v_arg_785_, v_x_786_, v_y_796_);
v___x_806_ = lean_array_push(v___x_787_, v___x_805_);
v___x_807_ = l_Lean_Expr_beta(v_a_788_, v___x_806_);
v___x_808_ = l_Lean_Expr_beta(v_alt_789_, v___x_790_);
v___x_809_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn(v_tail_791_, v_y_796_, v_u_792_, v___x_807_, v___x_808_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
if (lean_obj_tag(v___x_809_) == 0)
{
lean_object* v_a_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v_a_810_ = lean_ctor_get(v___x_809_, 0);
lean_inc(v_a_810_);
lean_dec_ref(v___x_809_);
v___x_811_ = lean_unsigned_to_nat(2u);
v___x_812_ = lean_mk_empty_array_with_capacity(v___x_811_);
v___x_813_ = lean_array_push(v___x_812_, v_x_786_);
v___x_814_ = lean_array_push(v___x_813_, v_y_796_);
v___x_815_ = l_Lean_Meta_mkLambdaFVars(v___x_814_, v_a_810_, v___x_793_, v___x_794_, v___x_793_, v___x_794_, v___x_795_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
lean_dec_ref(v___x_814_);
return v___x_815_;
}
else
{
lean_dec_ref(v_y_796_);
lean_dec_ref(v_x_786_);
return v___x_809_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__0___boxed(lean_object** _args){
lean_object* v___x_816_ = _args[0];
lean_object* v___x_817_ = _args[1];
lean_object* v_arg_818_ = _args[2];
lean_object* v_arg_819_ = _args[3];
lean_object* v_x_820_ = _args[4];
lean_object* v___x_821_ = _args[5];
lean_object* v_a_822_ = _args[6];
lean_object* v_alt_823_ = _args[7];
lean_object* v___x_824_ = _args[8];
lean_object* v_tail_825_ = _args[9];
lean_object* v_u_826_ = _args[10];
lean_object* v___x_827_ = _args[11];
lean_object* v___x_828_ = _args[12];
lean_object* v___x_829_ = _args[13];
lean_object* v_y_830_ = _args[14];
lean_object* v___y_831_ = _args[15];
lean_object* v___y_832_ = _args[16];
lean_object* v___y_833_ = _args[17];
lean_object* v___y_834_ = _args[18];
lean_object* v___y_835_ = _args[19];
_start:
{
uint8_t v___x_3559__boxed_836_; uint8_t v___x_3560__boxed_837_; uint8_t v___x_3561__boxed_838_; lean_object* v_res_839_; 
v___x_3559__boxed_836_ = lean_unbox(v___x_827_);
v___x_3560__boxed_837_ = lean_unbox(v___x_828_);
v___x_3561__boxed_838_ = lean_unbox(v___x_829_);
v_res_839_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__0(v___x_816_, v___x_817_, v_arg_818_, v_arg_819_, v_x_820_, v___x_821_, v_a_822_, v_alt_823_, v___x_824_, v_tail_825_, v_u_826_, v___x_3559__boxed_836_, v___x_3560__boxed_837_, v___x_3561__boxed_838_, v_y_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_);
lean_dec(v___y_834_);
lean_dec_ref(v___y_833_);
lean_dec(v___y_832_);
lean_dec_ref(v___y_831_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__1(lean_object* v___x_840_, lean_object* v___x_841_, lean_object* v___x_842_, lean_object* v_arg_843_, lean_object* v_arg_844_, lean_object* v_a_845_, lean_object* v_alt_846_, lean_object* v_tail_847_, lean_object* v_u_848_, uint8_t v___x_849_, uint8_t v___x_850_, uint8_t v___x_851_, lean_object* v_head_852_, lean_object* v_x_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_){
_start:
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___f_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
lean_inc_ref(v_x_853_);
lean_inc_ref(v___x_840_);
v___x_859_ = lean_array_push(v___x_840_, v_x_853_);
v___x_860_ = lean_box(v___x_849_);
v___x_861_ = lean_box(v___x_850_);
v___x_862_ = lean_box(v___x_851_);
lean_inc_ref(v___x_859_);
lean_inc_ref(v_arg_844_);
v___f_863_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__0___boxed), 20, 14);
lean_closure_set(v___f_863_, 0, v___x_841_);
lean_closure_set(v___f_863_, 1, v___x_842_);
lean_closure_set(v___f_863_, 2, v_arg_843_);
lean_closure_set(v___f_863_, 3, v_arg_844_);
lean_closure_set(v___f_863_, 4, v_x_853_);
lean_closure_set(v___f_863_, 5, v___x_840_);
lean_closure_set(v___f_863_, 6, v_a_845_);
lean_closure_set(v___f_863_, 7, v_alt_846_);
lean_closure_set(v___f_863_, 8, v___x_859_);
lean_closure_set(v___f_863_, 9, v_tail_847_);
lean_closure_set(v___f_863_, 10, v_u_848_);
lean_closure_set(v___f_863_, 11, v___x_860_);
lean_closure_set(v___f_863_, 12, v___x_861_);
lean_closure_set(v___f_863_, 13, v___x_862_);
v___x_864_ = l_Lean_Expr_beta(v_arg_844_, v___x_859_);
v___x_865_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_head_852_, v___x_864_, v___f_863_, v___y_854_, v___y_855_, v___y_856_, v___y_857_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___boxed(lean_object* v_varNames_866_, lean_object* v_e_867_, lean_object* v_u_868_, lean_object* v_codomain_869_, lean_object* v_alt_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn(v_varNames_866_, v_e_867_, v_u_868_, v_codomain_869_, v_alt_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_);
lean_dec(v_a_874_);
lean_dec_ref(v_a_873_);
lean_dec(v_a_872_);
lean_dec_ref(v_a_871_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0(lean_object* v_00_u03b1_877_, lean_object* v_msg_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_){
_start:
{
lean_object* v___x_884_; 
v___x_884_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v_msg_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___boxed(lean_object* v_00_u03b1_885_, lean_object* v_msg_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0(v_00_u03b1_885_, v_msg_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_);
lean_dec(v___y_890_);
lean_dec_ref(v___y_889_);
lean_dec(v___y_888_);
lean_dec_ref(v___y_887_);
return v_res_892_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__0(void){
_start:
{
lean_object* v___x_893_; 
v___x_893_ = lean_mk_string_unchecked("Lean.Meta.ArgsPacker.Unary.uncurry", 34, 34);
return v___x_893_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1(void){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_894_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__2(void){
_start:
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_895_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1, &l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1);
v___x_896_ = lean_unsigned_to_nat(23u);
v___x_897_ = lean_unsigned_to_nat(180u);
v___x_898_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__0, &l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__0);
v___x_899_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0);
v___x_900_ = l_mkPanicMessageWithDecl(v___x_899_, v___x_898_, v___x_897_, v___x_896_, v___x_895_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0(lean_object* v___x_901_, lean_object* v___x_902_, lean_object* v_varNames_903_, lean_object* v_e_904_, uint8_t v___x_905_, uint8_t v___x_906_, lean_object* v_xs_907_, lean_object* v_codomain_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
lean_object* v___x_914_; uint8_t v___x_915_; 
v___x_914_ = lean_array_get_size(v_xs_907_);
v___x_915_ = lean_nat_dec_eq(v___x_914_, v___x_901_);
if (v___x_915_ == 0)
{
lean_object* v___x_916_; lean_object* v___x_917_; 
lean_dec_ref(v_codomain_908_);
lean_dec_ref(v_e_904_);
lean_dec_ref(v_varNames_903_);
v___x_916_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__2, &l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__2_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__2);
v___x_917_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v___x_916_, v___y_909_, v___y_910_, v___y_911_, v___y_912_);
return v___x_917_;
}
else
{
lean_object* v___x_918_; 
lean_inc_ref(v_codomain_908_);
v___x_918_ = l_Lean_Meta_getLevel(v_codomain_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_);
if (lean_obj_tag(v___x_918_) == 0)
{
lean_object* v_a_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v_a_919_ = lean_ctor_get(v___x_918_, 0);
lean_inc(v_a_919_);
lean_dec_ref(v___x_918_);
v___x_920_ = lean_array_fget_borrowed(v_xs_907_, v___x_902_);
v___x_921_ = lean_array_to_list(v_varNames_903_);
lean_inc(v___x_920_);
v___x_922_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn(v___x_921_, v___x_920_, v_a_919_, v_codomain_908_, v_e_904_, v___y_909_, v___y_910_, v___y_911_, v___y_912_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v___x_924_; lean_object* v___x_925_; uint8_t v___x_926_; lean_object* v___x_927_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_923_);
lean_dec_ref(v___x_922_);
v___x_924_ = lean_mk_empty_array_with_capacity(v___x_901_);
lean_inc(v___x_920_);
v___x_925_ = lean_array_push(v___x_924_, v___x_920_);
v___x_926_ = 1;
v___x_927_ = l_Lean_Meta_mkLambdaFVars(v___x_925_, v_a_923_, v___x_905_, v___x_906_, v___x_905_, v___x_906_, v___x_926_, v___y_909_, v___y_910_, v___y_911_, v___y_912_);
lean_dec_ref(v___x_925_);
return v___x_927_;
}
else
{
return v___x_922_;
}
}
else
{
lean_object* v_a_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_935_; 
lean_dec_ref(v_codomain_908_);
lean_dec_ref(v_e_904_);
lean_dec_ref(v_varNames_903_);
v_a_928_ = lean_ctor_get(v___x_918_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_918_);
if (v_isSharedCheck_935_ == 0)
{
v___x_930_ = v___x_918_;
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_a_928_);
lean_dec(v___x_918_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_933_; 
if (v_isShared_931_ == 0)
{
v___x_933_ = v___x_930_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_a_928_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___boxed(lean_object* v___x_936_, lean_object* v___x_937_, lean_object* v_varNames_938_, lean_object* v_e_939_, lean_object* v___x_940_, lean_object* v___x_941_, lean_object* v_xs_942_, lean_object* v_codomain_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_){
_start:
{
uint8_t v___x_987__boxed_949_; uint8_t v___x_988__boxed_950_; lean_object* v_res_951_; 
v___x_987__boxed_949_ = lean_unbox(v___x_940_);
v___x_988__boxed_950_ = lean_unbox(v___x_941_);
v_res_951_ = l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0(v___x_936_, v___x_937_, v_varNames_938_, v_e_939_, v___x_987__boxed_949_, v___x_988__boxed_950_, v_xs_942_, v_codomain_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
lean_dec(v___y_947_);
lean_dec_ref(v___y_946_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec_ref(v_xs_942_);
lean_dec(v___x_937_);
lean_dec(v___x_936_);
return v_res_951_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0(void){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = lean_unsigned_to_nat(1u);
v___x_953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
return v___x_953_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__1(void){
_start:
{
lean_object* v___x_954_; 
v___x_954_ = lean_mk_string_unchecked("x", 1, 1);
return v___x_954_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2(void){
_start:
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__1, &l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__1_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__1);
v___x_956_ = l_Lean_Name_mkStr1(v___x_955_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry(lean_object* v_varNames_957_, lean_object* v_e_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_){
_start:
{
lean_object* v___x_964_; lean_object* v___x_965_; uint8_t v___x_966_; 
v___x_964_ = lean_array_get_size(v_varNames_957_);
v___x_965_ = lean_unsigned_to_nat(0u);
v___x_966_ = lean_nat_dec_eq(v___x_964_, v___x_965_);
if (v___x_966_ == 0)
{
lean_object* v___x_967_; 
lean_inc(v_a_962_);
lean_inc_ref(v_a_961_);
lean_inc(v_a_960_);
lean_inc_ref(v_a_959_);
lean_inc_ref(v_e_958_);
v___x_967_ = lean_infer_type(v_e_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_);
if (lean_obj_tag(v___x_967_) == 0)
{
lean_object* v_a_968_; lean_object* v___x_969_; 
v_a_968_ = lean_ctor_get(v___x_967_, 0);
lean_inc(v_a_968_);
lean_dec_ref(v___x_967_);
lean_inc_ref(v_varNames_957_);
v___x_969_ = l_Lean_Meta_ArgsPacker_Unary_uncurryType(v_varNames_957_, v_a_968_, v_a_959_, v_a_960_, v_a_961_, v_a_962_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; uint8_t v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___f_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_970_);
lean_dec_ref(v___x_969_);
v___x_971_ = 1;
v___x_972_ = lean_unsigned_to_nat(1u);
v___x_973_ = lean_box(v___x_966_);
v___x_974_ = lean_box(v___x_971_);
v___f_975_ = lean_alloc_closure((void*)(l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___boxed), 13, 6);
lean_closure_set(v___f_975_, 0, v___x_972_);
lean_closure_set(v___f_975_, 1, v___x_965_);
lean_closure_set(v___f_975_, 2, v_varNames_957_);
lean_closure_set(v___f_975_, 3, v_e_958_);
lean_closure_set(v___f_975_, 4, v___x_973_);
lean_closure_set(v___f_975_, 5, v___x_974_);
v___x_976_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0, &l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0);
v___x_977_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(v_a_970_, v___x_976_, v___f_975_, v___x_966_, v___x_966_, v_a_959_, v_a_960_, v_a_961_, v_a_962_);
return v___x_977_;
}
else
{
lean_dec_ref(v_e_958_);
lean_dec_ref(v_varNames_957_);
return v___x_969_;
}
}
else
{
lean_dec_ref(v_e_958_);
lean_dec_ref(v_varNames_957_);
return v___x_967_;
}
}
else
{
lean_object* v___x_978_; uint8_t v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
lean_dec_ref(v_varNames_957_);
v___x_978_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2, &l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2);
v___x_979_ = 0;
v___x_980_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_packType___closed__2, &l_Lean_Meta_ArgsPacker_Unary_packType___closed__2_once, _init_l_Lean_Meta_ArgsPacker_Unary_packType___closed__2);
v___x_981_ = l_Lean_mkLambda(v___x_978_, v___x_979_, v___x_980_, v_e_958_);
v___x_982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_982_, 0, v___x_981_);
return v___x_982_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___boxed(lean_object* v_varNames_983_, lean_object* v_e_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Lean_Meta_ArgsPacker_Unary_uncurry(v_varNames_983_, v_e_984_, v_a_985_, v_a_986_, v_a_987_, v_a_988_);
lean_dec(v_a_988_);
lean_dec_ref(v_a_987_);
lean_dec(v_a_986_);
lean_dec_ref(v_a_985_);
return v_res_990_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__0(void){
_start:
{
lean_object* v___x_991_; 
v___x_991_ = lean_mk_string_unchecked("curryType: Expected PSigma type, got ", 37, 37);
return v___x_991_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__1(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__0);
v___x_993_ = l_Lean_stringToMessageData(v___x_992_);
return v___x_993_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v_dummy_996_; 
v___x_994_ = lean_box(0);
v___x_995_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_packType___closed__1, &l_Lean_Meta_ArgsPacker_Unary_packType___closed__1_once, _init_l_Lean_Meta_ArgsPacker_Unary_packType___closed__1);
v_dummy_996_ = l_Lean_Expr_const___override(v___x_995_, v___x_994_);
return v_dummy_996_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0(lean_object* v_args_997_, lean_object* v_type_998_, lean_object* v_packedDomain_999_, lean_object* v_tail_1000_, lean_object* v_x_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_){
_start:
{
lean_object* v_dummy_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
v_dummy_1007_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0);
lean_inc_ref(v_x_1001_);
v___x_1008_ = lean_array_push(v_args_997_, v_x_1001_);
v___x_1009_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go(v_type_998_, v_packedDomain_999_, v_dummy_1007_, v___x_1008_, v_tail_1000_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v_a_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; uint8_t v___x_1014_; uint8_t v___x_1015_; uint8_t v___x_1016_; lean_object* v___x_1017_; 
v_a_1010_ = lean_ctor_get(v___x_1009_, 0);
lean_inc(v_a_1010_);
lean_dec_ref(v___x_1009_);
v___x_1011_ = lean_unsigned_to_nat(1u);
v___x_1012_ = lean_mk_empty_array_with_capacity(v___x_1011_);
v___x_1013_ = lean_array_push(v___x_1012_, v_x_1001_);
v___x_1014_ = 0;
v___x_1015_ = 1;
v___x_1016_ = 1;
v___x_1017_ = l_Lean_Meta_mkForallFVars(v___x_1013_, v_a_1010_, v___x_1014_, v___x_1015_, v___x_1015_, v___x_1016_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_);
lean_dec_ref(v___x_1013_);
return v___x_1017_;
}
else
{
lean_dec_ref(v_x_1001_);
return v___x_1009_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___boxed(lean_object* v_args_1018_, lean_object* v_type_1019_, lean_object* v_packedDomain_1020_, lean_object* v_tail_1021_, lean_object* v_x_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0(v_args_1018_, v_type_1019_, v_packedDomain_1020_, v_tail_1021_, v_x_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__1___boxed(lean_object* v_arg_1029_, lean_object* v_args_1030_, lean_object* v_type_1031_, lean_object* v_packedDomain_1032_, lean_object* v_tail_1033_, lean_object* v___x_1034_, lean_object* v_x_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
uint8_t v___x_927__boxed_1041_; lean_object* v_res_1042_; 
v___x_927__boxed_1041_ = lean_unbox(v___x_1034_);
v_res_1042_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__1(v_arg_1029_, v_args_1030_, v_type_1031_, v_packedDomain_1032_, v_tail_1033_, v___x_927__boxed_1041_, v_x_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go(lean_object* v_type_1043_, lean_object* v_packedDomain_1044_, lean_object* v_domain_1045_, lean_object* v_args_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_){
_start:
{
lean_object* v___y_1054_; lean_object* v___y_1055_; lean_object* v___y_1056_; lean_object* v___y_1057_; 
if (lean_obj_tag(v_a_1047_) == 0)
{
lean_object* v_packedArg_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
lean_dec_ref(v_domain_1045_);
v_packedArg_1062_ = l_Lean_Meta_ArgsPacker_Unary_pack(v_packedDomain_1044_, v_args_1046_);
lean_dec_ref(v_args_1046_);
lean_dec_ref(v_packedDomain_1044_);
v___x_1063_ = lean_unsigned_to_nat(1u);
v___x_1064_ = lean_mk_empty_array_with_capacity(v___x_1063_);
v___x_1065_ = lean_array_push(v___x_1064_, v_packedArg_1062_);
v___x_1066_ = l_Lean_Meta_instantiateForall(v_type_1043_, v___x_1065_, v_a_1048_, v_a_1049_, v_a_1050_, v_a_1051_);
lean_dec_ref(v___x_1065_);
return v___x_1066_;
}
else
{
lean_object* v_tail_1067_; 
v_tail_1067_ = lean_ctor_get(v_a_1047_, 1);
lean_inc(v_tail_1067_);
if (lean_obj_tag(v_tail_1067_) == 0)
{
lean_object* v_head_1068_; lean_object* v___f_1069_; lean_object* v___x_1070_; 
v_head_1068_ = lean_ctor_get(v_a_1047_, 0);
lean_inc(v_head_1068_);
lean_dec_ref(v_a_1047_);
v___f_1069_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1069_, 0, v_args_1046_);
lean_closure_set(v___f_1069_, 1, v_type_1043_);
lean_closure_set(v___f_1069_, 2, v_packedDomain_1044_);
lean_closure_set(v___f_1069_, 3, v_tail_1067_);
v___x_1070_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_head_1068_, v_domain_1045_, v___f_1069_, v_a_1048_, v_a_1049_, v_a_1050_, v_a_1051_);
return v___x_1070_;
}
else
{
lean_object* v_head_1071_; lean_object* v___x_1072_; uint8_t v___x_1073_; 
v_head_1071_ = lean_ctor_get(v_a_1047_, 0);
lean_inc(v_head_1071_);
lean_dec_ref(v_a_1047_);
lean_inc_ref(v_domain_1045_);
v___x_1072_ = l_Lean_Expr_cleanupAnnotations(v_domain_1045_);
v___x_1073_ = l_Lean_Expr_isApp(v___x_1072_);
if (v___x_1073_ == 0)
{
lean_dec_ref(v___x_1072_);
lean_dec(v_head_1071_);
lean_dec(v_tail_1067_);
lean_dec_ref(v_args_1046_);
lean_dec_ref(v_packedDomain_1044_);
lean_dec_ref(v_type_1043_);
v___y_1054_ = v_a_1048_;
v___y_1055_ = v_a_1049_;
v___y_1056_ = v_a_1050_;
v___y_1057_ = v_a_1051_;
goto v___jp_1053_;
}
else
{
lean_object* v_arg_1074_; lean_object* v___x_1075_; uint8_t v___x_1076_; 
v_arg_1074_ = lean_ctor_get(v___x_1072_, 1);
lean_inc_ref(v_arg_1074_);
v___x_1075_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1072_);
v___x_1076_ = l_Lean_Expr_isApp(v___x_1075_);
if (v___x_1076_ == 0)
{
lean_dec_ref(v___x_1075_);
lean_dec_ref(v_arg_1074_);
lean_dec(v_head_1071_);
lean_dec(v_tail_1067_);
lean_dec_ref(v_args_1046_);
lean_dec_ref(v_packedDomain_1044_);
lean_dec_ref(v_type_1043_);
v___y_1054_ = v_a_1048_;
v___y_1055_ = v_a_1049_;
v___y_1056_ = v_a_1050_;
v___y_1057_ = v_a_1051_;
goto v___jp_1053_;
}
else
{
lean_object* v_arg_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; uint8_t v___x_1080_; 
v_arg_1077_ = lean_ctor_get(v___x_1075_, 1);
lean_inc_ref(v_arg_1077_);
v___x_1078_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1075_);
v___x_1079_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1);
v___x_1080_ = l_Lean_Expr_isConstOf(v___x_1078_, v___x_1079_);
lean_dec_ref(v___x_1078_);
if (v___x_1080_ == 0)
{
lean_dec_ref(v_arg_1077_);
lean_dec_ref(v_arg_1074_);
lean_dec(v_head_1071_);
lean_dec(v_tail_1067_);
lean_dec_ref(v_args_1046_);
lean_dec_ref(v_packedDomain_1044_);
lean_dec_ref(v_type_1043_);
v___y_1054_ = v_a_1048_;
v___y_1055_ = v_a_1049_;
v___y_1056_ = v_a_1050_;
v___y_1057_ = v_a_1051_;
goto v___jp_1053_;
}
else
{
lean_object* v___x_1081_; lean_object* v___f_1082_; lean_object* v___x_1083_; 
lean_dec_ref(v_domain_1045_);
v___x_1081_ = lean_box(v___x_1080_);
v___f_1082_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__1___boxed), 12, 6);
lean_closure_set(v___f_1082_, 0, v_arg_1074_);
lean_closure_set(v___f_1082_, 1, v_args_1046_);
lean_closure_set(v___f_1082_, 2, v_type_1043_);
lean_closure_set(v___f_1082_, 3, v_packedDomain_1044_);
lean_closure_set(v___f_1082_, 4, v_tail_1067_);
lean_closure_set(v___f_1082_, 5, v___x_1081_);
v___x_1083_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_head_1071_, v_arg_1077_, v___f_1082_, v_a_1048_, v_a_1049_, v_a_1050_, v_a_1051_);
return v___x_1083_;
}
}
}
}
}
v___jp_1053_:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1058_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__1);
v___x_1059_ = l_Lean_MessageData_ofExpr(v_domain_1045_);
v___x_1060_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1058_);
lean_ctor_set(v___x_1060_, 1, v___x_1059_);
v___x_1061_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_1060_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_);
return v___x_1061_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__1(lean_object* v_arg_1084_, lean_object* v_args_1085_, lean_object* v_type_1086_, lean_object* v_packedDomain_1087_, lean_object* v_tail_1088_, uint8_t v___x_1089_, lean_object* v_x_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1096_ = lean_unsigned_to_nat(1u);
v___x_1097_ = lean_mk_empty_array_with_capacity(v___x_1096_);
lean_inc_ref(v_x_1090_);
v___x_1098_ = lean_array_push(v___x_1097_, v_x_1090_);
lean_inc_ref(v___x_1098_);
v___x_1099_ = l_Lean_Expr_beta(v_arg_1084_, v___x_1098_);
v___x_1100_ = lean_array_push(v_args_1085_, v_x_1090_);
v___x_1101_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go(v_type_1086_, v_packedDomain_1087_, v___x_1099_, v___x_1100_, v_tail_1088_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_);
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_object* v_a_1102_; uint8_t v___x_1103_; uint8_t v___x_1104_; lean_object* v___x_1105_; 
v_a_1102_ = lean_ctor_get(v___x_1101_, 0);
lean_inc(v_a_1102_);
lean_dec_ref(v___x_1101_);
v___x_1103_ = 0;
v___x_1104_ = 1;
v___x_1105_ = l_Lean_Meta_mkForallFVars(v___x_1098_, v_a_1102_, v___x_1103_, v___x_1089_, v___x_1089_, v___x_1104_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_);
lean_dec_ref(v___x_1098_);
return v___x_1105_;
}
else
{
lean_dec_ref(v___x_1098_);
return v___x_1101_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___boxed(lean_object* v_type_1106_, lean_object* v_packedDomain_1107_, lean_object* v_domain_1108_, lean_object* v_args_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_){
_start:
{
lean_object* v_res_1116_; 
v_res_1116_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go(v_type_1106_, v_packedDomain_1107_, v_domain_1108_, v_args_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_);
lean_dec(v_a_1114_);
lean_dec_ref(v_a_1113_);
lean_dec(v_a_1112_);
lean_dec_ref(v_a_1111_);
return v_res_1116_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__0(void){
_start:
{
lean_object* v___x_1117_; 
v___x_1117_ = lean_mk_string_unchecked("curryType: Expected forall type, got ", 37, 37);
return v___x_1117_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1(void){
_start:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1118_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__0);
v___x_1119_ = l_Lean_stringToMessageData(v___x_1118_);
return v___x_1119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType(lean_object* v_varNames_1120_, lean_object* v_type_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_){
_start:
{
lean_object* v___y_1128_; lean_object* v___y_1129_; lean_object* v___y_1130_; lean_object* v___y_1131_; uint8_t v___x_1136_; 
v___x_1136_ = l_Lean_Expr_isForall(v_type_1121_);
if (v___x_1136_ == 0)
{
lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v_a_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1148_; 
lean_dec_ref(v_varNames_1120_);
v___x_1137_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1);
v___x_1138_ = l_Lean_MessageData_ofExpr(v_type_1121_);
v___x_1139_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1137_);
lean_ctor_set(v___x_1139_, 1, v___x_1138_);
v___x_1140_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_1139_, v_a_1122_, v_a_1123_, v_a_1124_, v_a_1125_);
v_a_1141_ = lean_ctor_get(v___x_1140_, 0);
v_isSharedCheck_1148_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1143_ = v___x_1140_;
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_a_1141_);
lean_dec(v___x_1140_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1146_; 
if (v_isShared_1144_ == 0)
{
v___x_1146_ = v___x_1143_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_a_1141_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
return v___x_1146_;
}
}
}
else
{
v___y_1128_ = v_a_1122_;
v___y_1129_ = v_a_1123_;
v___y_1130_ = v_a_1124_;
v___y_1131_ = v_a_1125_;
goto v___jp_1127_;
}
v___jp_1127_:
{
lean_object* v_packedDomain_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v_packedDomain_1132_ = l_Lean_Expr_bindingDomain_x21(v_type_1121_);
v___x_1133_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0, &l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0);
v___x_1134_ = lean_array_to_list(v_varNames_1120_);
lean_inc_ref(v_packedDomain_1132_);
v___x_1135_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go(v_type_1121_, v_packedDomain_1132_, v_packedDomain_1132_, v___x_1133_, v___x_1134_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
return v___x_1135_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___boxed(lean_object* v_varNames_1149_, lean_object* v_type_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_){
_start:
{
lean_object* v_res_1156_; 
v_res_1156_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType(v_varNames_1149_, v_type_1150_, v_a_1151_, v_a_1152_, v_a_1153_, v_a_1154_);
lean_dec(v_a_1154_);
lean_dec_ref(v_a_1153_);
lean_dec(v_a_1152_);
lean_dec_ref(v_a_1151_);
return v_res_1156_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__0(void){
_start:
{
lean_object* v___x_1157_; 
v___x_1157_ = lean_mk_string_unchecked("curryPSigma: Expected PSigma type, got ", 39, 39);
return v___x_1157_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__1(void){
_start:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1158_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__0);
v___x_1159_ = l_Lean_stringToMessageData(v___x_1158_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__0(lean_object* v_args_1160_, lean_object* v_e_1161_, lean_object* v_packedDomain_1162_, lean_object* v_tail_1163_, lean_object* v_x_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_){
_start:
{
lean_object* v_dummy_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
v_dummy_1170_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0);
lean_inc_ref(v_x_1164_);
v___x_1171_ = lean_array_push(v_args_1160_, v_x_1164_);
v___x_1172_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go(v_e_1161_, v_packedDomain_1162_, v_dummy_1170_, v___x_1171_, v_tail_1163_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; uint8_t v___x_1177_; uint8_t v___x_1178_; uint8_t v___x_1179_; lean_object* v___x_1180_; 
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
lean_inc(v_a_1173_);
lean_dec_ref(v___x_1172_);
v___x_1174_ = lean_unsigned_to_nat(1u);
v___x_1175_ = lean_mk_empty_array_with_capacity(v___x_1174_);
v___x_1176_ = lean_array_push(v___x_1175_, v_x_1164_);
v___x_1177_ = 0;
v___x_1178_ = 1;
v___x_1179_ = 1;
v___x_1180_ = l_Lean_Meta_mkLambdaFVars(v___x_1176_, v_a_1173_, v___x_1177_, v___x_1178_, v___x_1177_, v___x_1178_, v___x_1179_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_);
lean_dec_ref(v___x_1176_);
return v___x_1180_;
}
else
{
lean_dec_ref(v_x_1164_);
return v___x_1172_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__0___boxed(lean_object* v_args_1181_, lean_object* v_e_1182_, lean_object* v_packedDomain_1183_, lean_object* v_tail_1184_, lean_object* v_x_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__0(v_args_1181_, v_e_1182_, v_packedDomain_1183_, v_tail_1184_, v_x_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__1___boxed(lean_object* v_arg_1192_, lean_object* v_args_1193_, lean_object* v_e_1194_, lean_object* v_packedDomain_1195_, lean_object* v_tail_1196_, lean_object* v___x_1197_, lean_object* v_x_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_){
_start:
{
uint8_t v___x_1045__boxed_1204_; lean_object* v_res_1205_; 
v___x_1045__boxed_1204_ = lean_unbox(v___x_1197_);
v_res_1205_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__1(v_arg_1192_, v_args_1193_, v_e_1194_, v_packedDomain_1195_, v_tail_1196_, v___x_1045__boxed_1204_, v_x_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1199_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go(lean_object* v_e_1206_, lean_object* v_packedDomain_1207_, lean_object* v_domain_1208_, lean_object* v_args_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_){
_start:
{
lean_object* v___y_1217_; lean_object* v___y_1218_; lean_object* v___y_1219_; lean_object* v___y_1220_; 
if (lean_obj_tag(v_a_1210_) == 0)
{
lean_object* v_packedArg_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
lean_dec_ref(v_domain_1208_);
v_packedArg_1225_ = l_Lean_Meta_ArgsPacker_Unary_pack(v_packedDomain_1207_, v_args_1209_);
lean_dec_ref(v_args_1209_);
lean_dec_ref(v_packedDomain_1207_);
v___x_1226_ = lean_unsigned_to_nat(1u);
v___x_1227_ = lean_mk_empty_array_with_capacity(v___x_1226_);
v___x_1228_ = lean_array_push(v___x_1227_, v_packedArg_1225_);
v___x_1229_ = l_Lean_Expr_beta(v_e_1206_, v___x_1228_);
v___x_1230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1229_);
return v___x_1230_;
}
else
{
lean_object* v_tail_1231_; 
v_tail_1231_ = lean_ctor_get(v_a_1210_, 1);
lean_inc(v_tail_1231_);
if (lean_obj_tag(v_tail_1231_) == 0)
{
lean_object* v_head_1232_; lean_object* v___f_1233_; lean_object* v___x_1234_; 
v_head_1232_ = lean_ctor_get(v_a_1210_, 0);
lean_inc(v_head_1232_);
lean_dec_ref(v_a_1210_);
v___f_1233_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1233_, 0, v_args_1209_);
lean_closure_set(v___f_1233_, 1, v_e_1206_);
lean_closure_set(v___f_1233_, 2, v_packedDomain_1207_);
lean_closure_set(v___f_1233_, 3, v_tail_1231_);
v___x_1234_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_head_1232_, v_domain_1208_, v___f_1233_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
return v___x_1234_;
}
else
{
lean_object* v_head_1235_; lean_object* v___x_1236_; uint8_t v___x_1237_; 
v_head_1235_ = lean_ctor_get(v_a_1210_, 0);
lean_inc(v_head_1235_);
lean_dec_ref(v_a_1210_);
lean_inc_ref(v_domain_1208_);
v___x_1236_ = l_Lean_Expr_cleanupAnnotations(v_domain_1208_);
v___x_1237_ = l_Lean_Expr_isApp(v___x_1236_);
if (v___x_1237_ == 0)
{
lean_dec_ref(v___x_1236_);
lean_dec(v_head_1235_);
lean_dec(v_tail_1231_);
lean_dec_ref(v_args_1209_);
lean_dec_ref(v_packedDomain_1207_);
lean_dec_ref(v_e_1206_);
v___y_1217_ = v_a_1211_;
v___y_1218_ = v_a_1212_;
v___y_1219_ = v_a_1213_;
v___y_1220_ = v_a_1214_;
goto v___jp_1216_;
}
else
{
lean_object* v_arg_1238_; lean_object* v___x_1239_; uint8_t v___x_1240_; 
v_arg_1238_ = lean_ctor_get(v___x_1236_, 1);
lean_inc_ref(v_arg_1238_);
v___x_1239_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1236_);
v___x_1240_ = l_Lean_Expr_isApp(v___x_1239_);
if (v___x_1240_ == 0)
{
lean_dec_ref(v___x_1239_);
lean_dec_ref(v_arg_1238_);
lean_dec(v_head_1235_);
lean_dec(v_tail_1231_);
lean_dec_ref(v_args_1209_);
lean_dec_ref(v_packedDomain_1207_);
lean_dec_ref(v_e_1206_);
v___y_1217_ = v_a_1211_;
v___y_1218_ = v_a_1212_;
v___y_1219_ = v_a_1213_;
v___y_1220_ = v_a_1214_;
goto v___jp_1216_;
}
else
{
lean_object* v_arg_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; uint8_t v___x_1244_; 
v_arg_1241_ = lean_ctor_get(v___x_1239_, 1);
lean_inc_ref(v_arg_1241_);
v___x_1242_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1239_);
v___x_1243_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1);
v___x_1244_ = l_Lean_Expr_isConstOf(v___x_1242_, v___x_1243_);
lean_dec_ref(v___x_1242_);
if (v___x_1244_ == 0)
{
lean_dec_ref(v_arg_1241_);
lean_dec_ref(v_arg_1238_);
lean_dec(v_head_1235_);
lean_dec(v_tail_1231_);
lean_dec_ref(v_args_1209_);
lean_dec_ref(v_packedDomain_1207_);
lean_dec_ref(v_e_1206_);
v___y_1217_ = v_a_1211_;
v___y_1218_ = v_a_1212_;
v___y_1219_ = v_a_1213_;
v___y_1220_ = v_a_1214_;
goto v___jp_1216_;
}
else
{
lean_object* v___x_1245_; lean_object* v___f_1246_; lean_object* v___x_1247_; 
lean_dec_ref(v_domain_1208_);
v___x_1245_ = lean_box(v___x_1244_);
v___f_1246_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__1___boxed), 12, 6);
lean_closure_set(v___f_1246_, 0, v_arg_1238_);
lean_closure_set(v___f_1246_, 1, v_args_1209_);
lean_closure_set(v___f_1246_, 2, v_e_1206_);
lean_closure_set(v___f_1246_, 3, v_packedDomain_1207_);
lean_closure_set(v___f_1246_, 4, v_tail_1231_);
lean_closure_set(v___f_1246_, 5, v___x_1245_);
v___x_1247_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_head_1235_, v_arg_1241_, v___f_1246_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
return v___x_1247_;
}
}
}
}
}
v___jp_1216_:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1221_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__1);
v___x_1222_ = l_Lean_MessageData_ofExpr(v_domain_1208_);
v___x_1223_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1221_);
lean_ctor_set(v___x_1223_, 1, v___x_1222_);
v___x_1224_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_1223_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_);
return v___x_1224_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__1(lean_object* v_arg_1248_, lean_object* v_args_1249_, lean_object* v_e_1250_, lean_object* v_packedDomain_1251_, lean_object* v_tail_1252_, uint8_t v___x_1253_, lean_object* v_x_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_){
_start:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1260_ = lean_unsigned_to_nat(1u);
v___x_1261_ = lean_mk_empty_array_with_capacity(v___x_1260_);
lean_inc_ref(v_x_1254_);
v___x_1262_ = lean_array_push(v___x_1261_, v_x_1254_);
lean_inc_ref(v___x_1262_);
v___x_1263_ = l_Lean_Expr_beta(v_arg_1248_, v___x_1262_);
v___x_1264_ = lean_array_push(v_args_1249_, v_x_1254_);
v___x_1265_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go(v_e_1250_, v_packedDomain_1251_, v___x_1263_, v___x_1264_, v_tail_1252_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_);
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; uint8_t v___x_1267_; uint8_t v___x_1268_; lean_object* v___x_1269_; 
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
lean_inc(v_a_1266_);
lean_dec_ref(v___x_1265_);
v___x_1267_ = 0;
v___x_1268_ = 1;
v___x_1269_ = l_Lean_Meta_mkLambdaFVars(v___x_1262_, v_a_1266_, v___x_1267_, v___x_1253_, v___x_1267_, v___x_1253_, v___x_1268_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_);
lean_dec_ref(v___x_1262_);
return v___x_1269_;
}
else
{
lean_dec_ref(v___x_1262_);
return v___x_1265_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___boxed(lean_object* v_e_1270_, lean_object* v_packedDomain_1271_, lean_object* v_domain_1272_, lean_object* v_args_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go(v_e_1270_, v_packedDomain_1271_, v_domain_1272_, v_args_1273_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
return v_res_1280_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__0(void){
_start:
{
lean_object* v___x_1281_; 
v___x_1281_ = lean_mk_string_unchecked("curryPSigma: expected forall type, got ", 39, 39);
return v___x_1281_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__1(void){
_start:
{
lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1282_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__0);
v___x_1283_ = l_Lean_stringToMessageData(v___x_1282_);
return v___x_1283_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__2(void){
_start:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1284_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_pack___closed__2, &l_Lean_Meta_ArgsPacker_Unary_pack___closed__2_once, _init_l_Lean_Meta_ArgsPacker_Unary_pack___closed__2);
v___x_1285_ = lean_unsigned_to_nat(1u);
v___x_1286_ = lean_mk_empty_array_with_capacity(v___x_1285_);
v___x_1287_ = lean_array_push(v___x_1286_, v___x_1284_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry(lean_object* v_varNames_1288_, lean_object* v_e_1289_, lean_object* v_a_1290_, lean_object* v_a_1291_, lean_object* v_a_1292_, lean_object* v_a_1293_){
_start:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; uint8_t v___x_1297_; 
v___x_1295_ = lean_array_get_size(v_varNames_1288_);
v___x_1296_ = lean_unsigned_to_nat(0u);
v___x_1297_ = lean_nat_dec_eq(v___x_1295_, v___x_1296_);
if (v___x_1297_ == 0)
{
lean_object* v___x_1298_; 
lean_inc(v_a_1293_);
lean_inc_ref(v_a_1292_);
lean_inc(v_a_1291_);
lean_inc_ref(v_a_1290_);
lean_inc_ref(v_e_1289_);
v___x_1298_ = lean_infer_type(v_e_1289_, v_a_1290_, v_a_1291_, v_a_1292_, v_a_1293_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v_a_1299_; lean_object* v___x_1300_; 
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
lean_inc(v_a_1299_);
lean_dec_ref(v___x_1298_);
v___x_1300_ = l_Lean_Meta_whnfForall(v_a_1299_, v_a_1290_, v_a_1291_, v_a_1292_, v_a_1293_);
if (lean_obj_tag(v___x_1300_) == 0)
{
lean_object* v_a_1301_; lean_object* v___y_1303_; lean_object* v___y_1304_; lean_object* v___y_1305_; lean_object* v___y_1306_; uint8_t v___x_1311_; 
v_a_1301_ = lean_ctor_get(v___x_1300_, 0);
lean_inc(v_a_1301_);
lean_dec_ref(v___x_1300_);
v___x_1311_ = l_Lean_Expr_isForall(v_a_1301_);
if (v___x_1311_ == 0)
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v_a_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1323_; 
lean_dec_ref(v_e_1289_);
lean_dec_ref(v_varNames_1288_);
v___x_1312_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__1);
v___x_1313_ = l_Lean_MessageData_ofExpr(v_a_1301_);
v___x_1314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1312_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
v___x_1315_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_1314_, v_a_1290_, v_a_1291_, v_a_1292_, v_a_1293_);
v_a_1316_ = lean_ctor_get(v___x_1315_, 0);
v_isSharedCheck_1323_ = !lean_is_exclusive(v___x_1315_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1318_ = v___x_1315_;
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_a_1316_);
lean_dec(v___x_1315_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1321_; 
if (v_isShared_1319_ == 0)
{
v___x_1321_ = v___x_1318_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_a_1316_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
}
else
{
v___y_1303_ = v_a_1290_;
v___y_1304_ = v_a_1291_;
v___y_1305_ = v_a_1292_;
v___y_1306_ = v_a_1293_;
goto v___jp_1302_;
}
v___jp_1302_:
{
lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1307_ = l_Lean_Expr_bindingDomain_x21(v_a_1301_);
lean_dec(v_a_1301_);
v___x_1308_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0, &l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0);
v___x_1309_ = lean_array_to_list(v_varNames_1288_);
lean_inc_ref(v___x_1307_);
v___x_1310_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go(v_e_1289_, v___x_1307_, v___x_1307_, v___x_1308_, v___x_1309_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1310_;
}
}
else
{
lean_dec_ref(v_e_1289_);
lean_dec_ref(v_varNames_1288_);
return v___x_1300_;
}
}
else
{
lean_dec_ref(v_e_1289_);
lean_dec_ref(v_varNames_1288_);
return v___x_1298_;
}
}
else
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
lean_dec_ref(v_varNames_1288_);
v___x_1324_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__2, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__2_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__2);
v___x_1325_ = l_Lean_Expr_beta(v_e_1289_, v___x_1324_);
v___x_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
return v___x_1326_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___boxed(lean_object* v_varNames_1327_, lean_object* v_e_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry(v_varNames_1327_, v_e_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
return v_res_1334_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1335_; 
v___x_1335_ = lean_mk_string_unchecked("PSum", 4, 4);
return v___x_1335_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1336_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0);
v___x_1337_ = l_Lean_Name_mkStr1(v___x_1336_);
return v___x_1337_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0(lean_object* v_as_1338_, size_t v_sz_1339_, size_t v_i_1340_, lean_object* v_b_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
uint8_t v___x_1347_; 
v___x_1347_ = lean_usize_dec_lt(v_i_1340_, v_sz_1339_);
if (v___x_1347_ == 0)
{
lean_object* v___x_1348_; 
v___x_1348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1348_, 0, v_b_1341_);
return v___x_1348_;
}
else
{
lean_object* v_a_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
v_a_1349_ = lean_array_uget_borrowed(v_as_1338_, v_i_1340_);
v___x_1350_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1);
v___x_1351_ = lean_unsigned_to_nat(2u);
v___x_1352_ = lean_mk_empty_array_with_capacity(v___x_1351_);
lean_inc(v_a_1349_);
v___x_1353_ = lean_array_push(v___x_1352_, v_a_1349_);
v___x_1354_ = lean_array_push(v___x_1353_, v_b_1341_);
v___x_1355_ = l_Lean_Meta_mkAppM(v___x_1350_, v___x_1354_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v_a_1356_; size_t v___x_1357_; size_t v___x_1358_; 
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
lean_inc(v_a_1356_);
lean_dec_ref(v___x_1355_);
v___x_1357_ = ((size_t)1ULL);
v___x_1358_ = lean_usize_add(v_i_1340_, v___x_1357_);
v_i_1340_ = v___x_1358_;
v_b_1341_ = v_a_1356_;
goto _start;
}
else
{
return v___x_1355_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___boxed(lean_object* v_as_1360_, lean_object* v_sz_1361_, lean_object* v_i_1362_, lean_object* v_b_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_){
_start:
{
size_t v_sz_boxed_1369_; size_t v_i_boxed_1370_; lean_object* v_res_1371_; 
v_sz_boxed_1369_ = lean_unbox_usize(v_sz_1361_);
lean_dec(v_sz_1361_);
v_i_boxed_1370_ = lean_unbox_usize(v_i_1362_);
lean_dec(v_i_1362_);
v_res_1371_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0(v_as_1360_, v_sz_boxed_1369_, v_i_boxed_1370_, v_b_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
lean_dec(v___y_1365_);
lean_dec_ref(v___y_1364_);
lean_dec_ref(v_as_1360_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_packType(lean_object* v_ds_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_){
_start:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v_r_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; size_t v_sz_1385_; size_t v___x_1386_; lean_object* v___x_1387_; 
v___x_1378_ = l_Lean_instInhabitedExpr;
v___x_1379_ = lean_array_get_size(v_ds_1372_);
v___x_1380_ = lean_unsigned_to_nat(1u);
v___x_1381_ = lean_nat_sub(v___x_1379_, v___x_1380_);
v_r_1382_ = lean_array_get(v___x_1378_, v_ds_1372_, v___x_1381_);
lean_dec(v___x_1381_);
v___x_1383_ = lean_array_pop(v_ds_1372_);
v___x_1384_ = l_Array_reverse___redArg(v___x_1383_);
v_sz_1385_ = lean_array_size(v___x_1384_);
v___x_1386_ = ((size_t)0ULL);
v___x_1387_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0(v___x_1384_, v_sz_1385_, v___x_1386_, v_r_1382_, v_a_1373_, v_a_1374_, v_a_1375_, v_a_1376_);
lean_dec_ref(v___x_1384_);
return v___x_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_packType___boxed(lean_object* v_ds_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_){
_start:
{
lean_object* v_res_1394_; 
v_res_1394_ = l_Lean_Meta_ArgsPacker_Mutual_packType(v_ds_1388_, v_a_1389_, v_a_1390_, v_a_1391_, v_a_1392_);
lean_dec(v_a_1392_);
lean_dec_ref(v_a_1391_);
lean_dec(v_a_1390_);
lean_dec_ref(v_a_1389_);
return v_res_1394_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__0(void){
_start:
{
lean_object* v___x_1395_; 
v___x_1395_ = lean_mk_string_unchecked("Mutual.unpackType: Expected PSum type, got ", 43, 43);
return v___x_1395_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__1(void){
_start:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1396_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__0);
v___x_1397_ = l_Lean_stringToMessageData(v___x_1396_);
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType(lean_object* v_n_1398_, lean_object* v_type_1399_, lean_object* v_a_1400_, lean_object* v_a_1401_, lean_object* v_a_1402_, lean_object* v_a_1403_){
_start:
{
lean_object* v___y_1406_; lean_object* v___y_1407_; lean_object* v___y_1408_; lean_object* v___y_1409_; lean_object* v_zero_1414_; uint8_t v_isZero_1415_; 
v_zero_1414_ = lean_unsigned_to_nat(0u);
v_isZero_1415_ = lean_nat_dec_eq(v_n_1398_, v_zero_1414_);
if (v_isZero_1415_ == 1)
{
lean_object* v___x_1416_; lean_object* v___x_1417_; 
lean_dec_ref(v_type_1399_);
v___x_1416_ = lean_box(0);
v___x_1417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1417_, 0, v___x_1416_);
return v___x_1417_;
}
else
{
lean_object* v_one_1418_; lean_object* v_n_1419_; uint8_t v___x_1420_; 
v_one_1418_ = lean_unsigned_to_nat(1u);
v_n_1419_ = lean_nat_sub(v_n_1398_, v_one_1418_);
v___x_1420_ = lean_nat_dec_eq(v_n_1419_, v_zero_1414_);
if (v___x_1420_ == 0)
{
lean_object* v___x_1421_; uint8_t v___x_1422_; 
lean_inc_ref(v_type_1399_);
v___x_1421_ = l_Lean_Expr_cleanupAnnotations(v_type_1399_);
v___x_1422_ = l_Lean_Expr_isApp(v___x_1421_);
if (v___x_1422_ == 0)
{
lean_dec_ref(v___x_1421_);
lean_dec(v_n_1419_);
v___y_1406_ = v_a_1400_;
v___y_1407_ = v_a_1401_;
v___y_1408_ = v_a_1402_;
v___y_1409_ = v_a_1403_;
goto v___jp_1405_;
}
else
{
lean_object* v_arg_1423_; lean_object* v___x_1424_; uint8_t v___x_1425_; 
v_arg_1423_ = lean_ctor_get(v___x_1421_, 1);
lean_inc_ref(v_arg_1423_);
v___x_1424_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1421_);
v___x_1425_ = l_Lean_Expr_isApp(v___x_1424_);
if (v___x_1425_ == 0)
{
lean_dec_ref(v___x_1424_);
lean_dec_ref(v_arg_1423_);
lean_dec(v_n_1419_);
v___y_1406_ = v_a_1400_;
v___y_1407_ = v_a_1401_;
v___y_1408_ = v_a_1402_;
v___y_1409_ = v_a_1403_;
goto v___jp_1405_;
}
else
{
lean_object* v_arg_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; uint8_t v___x_1429_; 
v_arg_1426_ = lean_ctor_get(v___x_1424_, 1);
lean_inc_ref(v_arg_1426_);
v___x_1427_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1424_);
v___x_1428_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1);
v___x_1429_ = l_Lean_Expr_isConstOf(v___x_1427_, v___x_1428_);
lean_dec_ref(v___x_1427_);
if (v___x_1429_ == 0)
{
lean_dec_ref(v_arg_1426_);
lean_dec_ref(v_arg_1423_);
lean_dec(v_n_1419_);
v___y_1406_ = v_a_1400_;
v___y_1407_ = v_a_1401_;
v___y_1408_ = v_a_1402_;
v___y_1409_ = v_a_1403_;
goto v___jp_1405_;
}
else
{
lean_object* v___x_1430_; 
lean_dec_ref(v_type_1399_);
v___x_1430_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType(v_n_1419_, v_arg_1423_, v_a_1400_, v_a_1401_, v_a_1402_, v_a_1403_);
lean_dec(v_n_1419_);
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_object* v_a_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1439_; 
v_a_1431_ = lean_ctor_get(v___x_1430_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1433_ = v___x_1430_;
v_isShared_1434_ = v_isSharedCheck_1439_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_a_1431_);
lean_dec(v___x_1430_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1439_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1435_; lean_object* v___x_1437_; 
v___x_1435_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1435_, 0, v_arg_1426_);
lean_ctor_set(v___x_1435_, 1, v_a_1431_);
if (v_isShared_1434_ == 0)
{
lean_ctor_set(v___x_1433_, 0, v___x_1435_);
v___x_1437_ = v___x_1433_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v___x_1435_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
else
{
lean_dec_ref(v_arg_1426_);
return v___x_1430_;
}
}
}
}
}
else
{
lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
lean_dec(v_n_1419_);
v___x_1440_ = lean_box(0);
v___x_1441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1441_, 0, v_type_1399_);
lean_ctor_set(v___x_1441_, 1, v___x_1440_);
v___x_1442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1442_, 0, v___x_1441_);
return v___x_1442_;
}
}
v___jp_1405_:
{
lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1410_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__1);
v___x_1411_ = l_Lean_MessageData_ofExpr(v_type_1399_);
v___x_1412_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1410_);
lean_ctor_set(v___x_1412_, 1, v___x_1411_);
v___x_1413_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_1412_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_);
return v___x_1413_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___boxed(lean_object* v_n_1443_, lean_object* v_type_1444_, lean_object* v_a_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_){
_start:
{
lean_object* v_res_1450_; 
v_res_1450_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType(v_n_1443_, v_type_1444_, v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_);
lean_dec(v_a_1448_);
lean_dec_ref(v_a_1447_);
lean_dec(v_a_1446_);
lean_dec_ref(v_a_1445_);
lean_dec(v_n_1443_);
return v_res_1450_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0(void){
_start:
{
lean_object* v___x_1451_; lean_object* v_dummy_1452_; 
v___x_1451_ = lean_box(0);
v_dummy_1452_ = l_Lean_Expr_sort___override(v___x_1451_);
return v_dummy_1452_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1453_; 
v___x_1453_ = lean_mk_string_unchecked("assertion violation: args.size == 2\n        ", 44, 44);
return v___x_1453_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1454_; 
v___x_1454_ = lean_mk_string_unchecked("_private.Lean.Meta.ArgsPacker.0.Lean.Meta.ArgsPacker.Mutual.pack.go", 67, 67);
return v___x_1454_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
v___x_1455_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__1, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__1);
v___x_1456_ = lean_unsigned_to_nat(8u);
v___x_1457_ = lean_unsigned_to_nat(276u);
v___x_1458_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__0, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__0_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__0);
v___x_1459_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0);
v___x_1460_ = l_mkPanicMessageWithDecl(v___x_1459_, v___x_1458_, v___x_1457_, v___x_1456_, v___x_1455_);
return v___x_1460_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1461_; 
v___x_1461_ = lean_mk_string_unchecked("inr", 3, 3);
return v___x_1461_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; 
v___x_1462_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__3, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__3);
v___x_1463_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0);
v___x_1464_ = l_Lean_Name_mkStr2(v___x_1463_, v___x_1462_);
return v___x_1464_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__5(void){
_start:
{
lean_object* v___x_1465_; 
v___x_1465_ = lean_mk_string_unchecked("inl", 3, 3);
return v___x_1465_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__6(void){
_start:
{
lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1466_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__5, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__5_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__5);
v___x_1467_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0);
v___x_1468_ = l_Lean_Name_mkStr2(v___x_1467_, v___x_1466_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0(lean_object* v_i_1469_, lean_object* v_fidx_1470_, lean_object* v_numFuncs_1471_, lean_object* v_arg_1472_, lean_object* v_x_1473_, lean_object* v_x_1474_, lean_object* v_x_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_){
_start:
{
lean_object* v___x_1481_; 
v___x_1481_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_x_1473_) == 5)
{
lean_object* v_fn_1482_; lean_object* v_arg_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; 
v_fn_1482_ = lean_ctor_get(v_x_1473_, 0);
lean_inc_ref(v_fn_1482_);
v_arg_1483_ = lean_ctor_get(v_x_1473_, 1);
lean_inc_ref(v_arg_1483_);
lean_dec_ref(v_x_1473_);
v___x_1484_ = lean_array_set(v_x_1474_, v_x_1475_, v_arg_1483_);
v___x_1485_ = lean_nat_sub(v_x_1475_, v___x_1481_);
lean_dec(v_x_1475_);
v_x_1473_ = v_fn_1482_;
v_x_1474_ = v___x_1484_;
v_x_1475_ = v___x_1485_;
goto _start;
}
else
{
lean_object* v___x_1487_; lean_object* v___x_1488_; uint8_t v___x_1489_; 
lean_dec(v_x_1475_);
v___x_1487_ = lean_array_get_size(v_x_1474_);
v___x_1488_ = lean_unsigned_to_nat(2u);
v___x_1489_ = lean_nat_dec_eq(v___x_1487_, v___x_1488_);
if (v___x_1489_ == 0)
{
lean_object* v___x_1490_; lean_object* v___x_1491_; 
lean_dec_ref(v_x_1474_);
lean_dec_ref(v_x_1473_);
lean_dec_ref(v_arg_1472_);
v___x_1490_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__2, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__2_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__2);
v___x_1491_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v___x_1490_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
return v___x_1491_;
}
else
{
uint8_t v___x_1492_; 
v___x_1492_ = lean_nat_dec_eq(v_i_1469_, v_fidx_1470_);
if (v___x_1492_ == 0)
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1493_ = lean_nat_add(v_i_1469_, v___x_1481_);
v___x_1494_ = l_Lean_instInhabitedExpr;
v___x_1495_ = lean_array_get(v___x_1494_, v_x_1474_, v___x_1481_);
lean_inc(v___x_1495_);
v___x_1496_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go(v_numFuncs_1471_, v_fidx_1470_, v_arg_1472_, v___x_1493_, v___x_1495_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
lean_dec(v___x_1493_);
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v_a_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1510_; 
v_a_1497_ = lean_ctor_get(v___x_1496_, 0);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1499_ = v___x_1496_;
v_isShared_1500_ = v_isSharedCheck_1510_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_a_1497_);
lean_dec(v___x_1496_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1510_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1508_; 
v___x_1501_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__4, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__4_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__4);
v___x_1502_ = l_Lean_Expr_constLevels_x21(v_x_1473_);
lean_dec_ref(v_x_1473_);
v___x_1503_ = l_Lean_mkConst(v___x_1501_, v___x_1502_);
v___x_1504_ = lean_unsigned_to_nat(0u);
v___x_1505_ = lean_array_get(v___x_1494_, v_x_1474_, v___x_1504_);
lean_dec_ref(v_x_1474_);
v___x_1506_ = l_Lean_mkApp3(v___x_1503_, v___x_1505_, v___x_1495_, v_a_1497_);
if (v_isShared_1500_ == 0)
{
lean_ctor_set(v___x_1499_, 0, v___x_1506_);
v___x_1508_ = v___x_1499_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v___x_1506_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
return v___x_1508_;
}
}
}
else
{
lean_dec(v___x_1495_);
lean_dec_ref(v_x_1474_);
lean_dec_ref(v_x_1473_);
return v___x_1496_;
}
}
else
{
lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1511_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__6, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__6_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__6);
v___x_1512_ = l_Lean_Expr_constLevels_x21(v_x_1473_);
lean_dec_ref(v_x_1473_);
v___x_1513_ = l_Lean_mkConst(v___x_1511_, v___x_1512_);
v___x_1514_ = l_Lean_instInhabitedExpr;
v___x_1515_ = lean_unsigned_to_nat(0u);
v___x_1516_ = lean_array_get(v___x_1514_, v_x_1474_, v___x_1515_);
v___x_1517_ = lean_array_get(v___x_1514_, v_x_1474_, v___x_1481_);
lean_dec_ref(v_x_1474_);
v___x_1518_ = l_Lean_mkApp3(v___x_1513_, v___x_1516_, v___x_1517_, v_arg_1472_);
v___x_1519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1518_);
return v___x_1519_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go(lean_object* v_numFuncs_1520_, lean_object* v_fidx_1521_, lean_object* v_arg_1522_, lean_object* v_i_1523_, lean_object* v_type_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_){
_start:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; uint8_t v___x_1532_; 
v___x_1530_ = lean_unsigned_to_nat(1u);
v___x_1531_ = lean_nat_sub(v_numFuncs_1520_, v___x_1530_);
v___x_1532_ = lean_nat_dec_le(v___x_1531_, v_i_1523_);
lean_dec(v___x_1531_);
if (v___x_1532_ == 0)
{
lean_object* v___x_1533_; 
v___x_1533_ = l_Lean_Meta_whnfD(v_type_1524_, v_a_1525_, v_a_1526_, v_a_1527_, v_a_1528_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_a_1534_; lean_object* v_dummy_1535_; lean_object* v_nargs_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
lean_inc(v_a_1534_);
lean_dec_ref(v___x_1533_);
v_dummy_1535_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0);
v_nargs_1536_ = l_Lean_Expr_getAppNumArgs(v_a_1534_);
lean_inc(v_nargs_1536_);
v___x_1537_ = lean_mk_array(v_nargs_1536_, v_dummy_1535_);
v___x_1538_ = lean_nat_sub(v_nargs_1536_, v___x_1530_);
lean_dec(v_nargs_1536_);
v___x_1539_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0(v_i_1523_, v_fidx_1521_, v_numFuncs_1520_, v_arg_1522_, v_a_1534_, v___x_1537_, v___x_1538_, v_a_1525_, v_a_1526_, v_a_1527_, v_a_1528_);
return v___x_1539_;
}
else
{
lean_dec_ref(v_arg_1522_);
return v___x_1533_;
}
}
else
{
lean_object* v___x_1540_; 
lean_dec_ref(v_type_1524_);
v___x_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1540_, 0, v_arg_1522_);
return v___x_1540_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___boxed(lean_object* v_numFuncs_1541_, lean_object* v_fidx_1542_, lean_object* v_arg_1543_, lean_object* v_i_1544_, lean_object* v_type_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go(v_numFuncs_1541_, v_fidx_1542_, v_arg_1543_, v_i_1544_, v_type_1545_, v_a_1546_, v_a_1547_, v_a_1548_, v_a_1549_);
lean_dec(v_a_1549_);
lean_dec_ref(v_a_1548_);
lean_dec(v_a_1547_);
lean_dec_ref(v_a_1546_);
lean_dec(v_i_1544_);
lean_dec(v_fidx_1542_);
lean_dec(v_numFuncs_1541_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___boxed(lean_object* v_i_1552_, lean_object* v_fidx_1553_, lean_object* v_numFuncs_1554_, lean_object* v_arg_1555_, lean_object* v_x_1556_, lean_object* v_x_1557_, lean_object* v_x_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0(v_i_1552_, v_fidx_1553_, v_numFuncs_1554_, v_arg_1555_, v_x_1556_, v_x_1557_, v_x_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_);
lean_dec(v___y_1562_);
lean_dec_ref(v___y_1561_);
lean_dec(v___y_1560_);
lean_dec_ref(v___y_1559_);
lean_dec(v_numFuncs_1554_);
lean_dec(v_fidx_1553_);
lean_dec(v_i_1552_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_pack(lean_object* v_numFuncs_1565_, lean_object* v_domain_1566_, lean_object* v_fidx_1567_, lean_object* v_arg_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = lean_unsigned_to_nat(0u);
v___x_1575_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go(v_numFuncs_1565_, v_fidx_1567_, v_arg_1568_, v___x_1574_, v_domain_1566_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_pack___boxed(lean_object* v_numFuncs_1576_, lean_object* v_domain_1577_, lean_object* v_fidx_1578_, lean_object* v_arg_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l_Lean_Meta_ArgsPacker_Mutual_pack(v_numFuncs_1576_, v_domain_1577_, v_fidx_1578_, v_arg_1579_, v_a_1580_, v_a_1581_, v_a_1582_, v_a_1583_);
lean_dec(v_a_1583_);
lean_dec_ref(v_a_1582_);
lean_dec(v_a_1581_);
lean_dec_ref(v_a_1580_);
lean_dec(v_fidx_1578_);
lean_dec(v_numFuncs_1576_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0(lean_object* v_numFuncs_1586_, lean_object* v_b_1587_){
_start:
{
lean_object* v_fst_1588_; lean_object* v_snd_1589_; lean_object* v___x_1591_; uint8_t v_isShared_1592_; uint8_t v_isSharedCheck_1624_; 
v_fst_1588_ = lean_ctor_get(v_b_1587_, 0);
v_snd_1589_ = lean_ctor_get(v_b_1587_, 1);
v_isSharedCheck_1624_ = !lean_is_exclusive(v_b_1587_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1591_ = v_b_1587_;
v_isShared_1592_ = v_isSharedCheck_1624_;
goto v_resetjp_1590_;
}
else
{
lean_inc(v_snd_1589_);
lean_inc(v_fst_1588_);
lean_dec(v_b_1587_);
v___x_1591_ = lean_box(0);
v_isShared_1592_ = v_isSharedCheck_1624_;
goto v_resetjp_1590_;
}
v_resetjp_1590_:
{
lean_object* v___x_1593_; lean_object* v_funidx_1594_; uint8_t v___x_1595_; 
v___x_1593_ = lean_unsigned_to_nat(1u);
v_funidx_1594_ = lean_nat_add(v_fst_1588_, v___x_1593_);
v___x_1595_ = lean_nat_dec_lt(v_funidx_1594_, v_numFuncs_1586_);
if (v___x_1595_ == 0)
{
lean_object* v___x_1597_; 
lean_dec(v_funidx_1594_);
if (v_isShared_1592_ == 0)
{
v___x_1597_ = v___x_1591_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v_fst_1588_);
lean_ctor_set(v_reuseFailAlloc_1599_, 1, v_snd_1589_);
v___x_1597_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
lean_object* v___x_1598_; 
v___x_1598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1597_);
return v___x_1598_;
}
}
else
{
lean_object* v___x_1600_; lean_object* v___x_1601_; uint8_t v___x_1602_; 
v___x_1600_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__4, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__4_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__4);
v___x_1601_ = lean_unsigned_to_nat(3u);
v___x_1602_ = l_Lean_Expr_isAppOfArity(v_snd_1589_, v___x_1600_, v___x_1601_);
if (v___x_1602_ == 0)
{
lean_object* v___x_1603_; uint8_t v___x_1604_; 
lean_dec(v_funidx_1594_);
v___x_1603_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__6, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__6_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__6);
v___x_1604_ = l_Lean_Expr_isAppOfArity(v_snd_1589_, v___x_1603_, v___x_1601_);
if (v___x_1604_ == 0)
{
lean_object* v___x_1605_; 
lean_del_object(v___x_1591_);
lean_dec(v_snd_1589_);
lean_dec(v_fst_1588_);
v___x_1605_ = lean_box(0);
return v___x_1605_;
}
else
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v_e_1610_; lean_object* v___x_1612_; 
v___x_1606_ = lean_unsigned_to_nat(2u);
v___x_1607_ = l_Lean_Expr_getAppNumArgs(v_snd_1589_);
v___x_1608_ = lean_nat_sub(v___x_1607_, v___x_1606_);
lean_dec(v___x_1607_);
v___x_1609_ = lean_nat_sub(v___x_1608_, v___x_1593_);
lean_dec(v___x_1608_);
v_e_1610_ = l_Lean_Expr_getRevArg_x21(v_snd_1589_, v___x_1609_);
lean_dec(v_snd_1589_);
if (v_isShared_1592_ == 0)
{
lean_ctor_set(v___x_1591_, 1, v_e_1610_);
v___x_1612_ = v___x_1591_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_fst_1588_);
lean_ctor_set(v_reuseFailAlloc_1614_, 1, v_e_1610_);
v___x_1612_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
lean_object* v___x_1613_; 
v___x_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1612_);
return v___x_1613_;
}
}
}
else
{
lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v_e_1619_; lean_object* v___x_1621_; 
lean_dec(v_fst_1588_);
v___x_1615_ = lean_unsigned_to_nat(2u);
v___x_1616_ = l_Lean_Expr_getAppNumArgs(v_snd_1589_);
v___x_1617_ = lean_nat_sub(v___x_1616_, v___x_1615_);
lean_dec(v___x_1616_);
v___x_1618_ = lean_nat_sub(v___x_1617_, v___x_1593_);
lean_dec(v___x_1617_);
v_e_1619_ = l_Lean_Expr_getRevArg_x21(v_snd_1589_, v___x_1618_);
lean_dec(v_snd_1589_);
if (v_isShared_1592_ == 0)
{
lean_ctor_set(v___x_1591_, 1, v_e_1619_);
lean_ctor_set(v___x_1591_, 0, v_funidx_1594_);
v___x_1621_ = v___x_1591_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v_funidx_1594_);
lean_ctor_set(v_reuseFailAlloc_1623_, 1, v_e_1619_);
v___x_1621_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
v_b_1587_ = v___x_1621_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0___boxed(lean_object* v_numFuncs_1625_, lean_object* v_b_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0(v_numFuncs_1625_, v_b_1626_);
lean_dec(v_numFuncs_1625_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_unpack(lean_object* v_numFuncs_1628_, lean_object* v_expr_1629_){
_start:
{
lean_object* v_funidx_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; 
v_funidx_1630_ = lean_unsigned_to_nat(0u);
v___x_1631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1631_, 0, v_funidx_1630_);
lean_ctor_set(v___x_1631_, 1, v_expr_1629_);
v___x_1632_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0(v_numFuncs_1628_, v___x_1631_);
if (lean_obj_tag(v___x_1632_) == 0)
{
return v___x_1632_;
}
else
{
lean_object* v_val_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1649_; 
v_val_1633_ = lean_ctor_get(v___x_1632_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1632_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1635_ = v___x_1632_;
v_isShared_1636_ = v_isSharedCheck_1649_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_val_1633_);
lean_dec(v___x_1632_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1649_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v_fst_1637_; lean_object* v_snd_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1648_; 
v_fst_1637_ = lean_ctor_get(v_val_1633_, 0);
v_snd_1638_ = lean_ctor_get(v_val_1633_, 1);
v_isSharedCheck_1648_ = !lean_is_exclusive(v_val_1633_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1640_ = v_val_1633_;
v_isShared_1641_ = v_isSharedCheck_1648_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_snd_1638_);
lean_inc(v_fst_1637_);
lean_dec(v_val_1633_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1648_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1643_; 
if (v_isShared_1641_ == 0)
{
v___x_1643_ = v___x_1640_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_fst_1637_);
lean_ctor_set(v_reuseFailAlloc_1647_, 1, v_snd_1638_);
v___x_1643_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
lean_object* v___x_1645_; 
if (v_isShared_1636_ == 0)
{
lean_ctor_set(v___x_1635_, 0, v___x_1643_);
v___x_1645_ = v___x_1635_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v___x_1643_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_unpack___boxed(lean_object* v_numFuncs_1650_, lean_object* v_expr_1651_){
_start:
{
lean_object* v_res_1652_; 
v_res_1652_ = l_Lean_Meta_ArgsPacker_Mutual_unpack(v_numFuncs_1650_, v_expr_1651_);
lean_dec(v_numFuncs_1650_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__0(lean_object* v___x_1653_, lean_object* v___x_1654_, lean_object* v_types_1655_, lean_object* v_i_1656_, uint8_t v___x_1657_, uint8_t v___x_1658_, uint8_t v___x_1659_, lean_object* v_x_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_){
_start:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; 
lean_inc_ref(v_x_1660_);
v___x_1666_ = lean_array_push(v___x_1653_, v_x_1660_);
v___x_1667_ = lean_array_get_borrowed(v___x_1654_, v_types_1655_, v_i_1656_);
v___x_1668_ = l_Lean_Expr_bindingBody_x21(v___x_1667_);
v___x_1669_ = lean_expr_instantiate1(v___x_1668_, v_x_1660_);
lean_dec_ref(v_x_1660_);
lean_dec_ref(v___x_1668_);
v___x_1670_ = l_Lean_Meta_mkLambdaFVars(v___x_1666_, v___x_1669_, v___x_1657_, v___x_1658_, v___x_1657_, v___x_1658_, v___x_1659_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_);
lean_dec_ref(v___x_1666_);
return v___x_1670_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__0___boxed(lean_object* v___x_1671_, lean_object* v___x_1672_, lean_object* v_types_1673_, lean_object* v_i_1674_, lean_object* v___x_1675_, lean_object* v___x_1676_, lean_object* v___x_1677_, lean_object* v_x_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_){
_start:
{
uint8_t v___x_1974__boxed_1684_; uint8_t v___x_1975__boxed_1685_; uint8_t v___x_1976__boxed_1686_; lean_object* v_res_1687_; 
v___x_1974__boxed_1684_ = lean_unbox(v___x_1675_);
v___x_1975__boxed_1685_ = lean_unbox(v___x_1676_);
v___x_1976__boxed_1686_ = lean_unbox(v___x_1677_);
v_res_1687_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__0(v___x_1671_, v___x_1672_, v_types_1673_, v_i_1674_, v___x_1974__boxed_1684_, v___x_1975__boxed_1685_, v___x_1976__boxed_1686_, v_x_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
lean_dec(v_i_1674_);
lean_dec_ref(v_types_1673_);
lean_dec_ref(v___x_1672_);
return v_res_1687_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__1(void){
_start:
{
lean_object* v___x_1688_; 
v___x_1688_ = lean_mk_string_unchecked("assertion violation: xType.isAppOfArity ``PSum 2\n      ", 55, 55);
return v___x_1688_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__0(void){
_start:
{
lean_object* v___x_1689_; 
v___x_1689_ = lean_mk_string_unchecked("_private.Lean.Meta.ArgsPacker.0.Lean.Meta.ArgsPacker.Mutual.mkCodomain.go", 73, 73);
return v___x_1689_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__2(void){
_start:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1690_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__1);
v___x_1691_ = lean_unsigned_to_nat(6u);
v___x_1692_ = lean_unsigned_to_nat(318u);
v___x_1693_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__0);
v___x_1694_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0);
v___x_1695_ = l_mkPanicMessageWithDecl(v___x_1694_, v___x_1693_, v___x_1692_, v___x_1691_, v___x_1690_);
return v___x_1695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__1___boxed(lean_object* v_i_1696_, lean_object* v___x_1697_, lean_object* v_types_1698_, lean_object* v_u_1699_, lean_object* v___x_1700_, lean_object* v___x_1701_, lean_object* v___x_1702_, lean_object* v___x_1703_, lean_object* v_x_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_){
_start:
{
uint8_t v___x_2034__boxed_1710_; uint8_t v___x_2035__boxed_1711_; uint8_t v___x_2036__boxed_1712_; lean_object* v_res_1713_; 
v___x_2034__boxed_1710_ = lean_unbox(v___x_1701_);
v___x_2035__boxed_1711_ = lean_unbox(v___x_1702_);
v___x_2036__boxed_1712_ = lean_unbox(v___x_1703_);
v_res_1713_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__1(v_i_1696_, v___x_1697_, v_types_1698_, v_u_1699_, v___x_1700_, v___x_2034__boxed_1710_, v___x_2035__boxed_1711_, v___x_2036__boxed_1712_, v_x_1704_, v___y_1705_, v___y_1706_, v___y_1707_, v___y_1708_);
lean_dec(v___y_1708_);
lean_dec_ref(v___y_1707_);
lean_dec(v___y_1706_);
lean_dec_ref(v___y_1705_);
lean_dec(v___x_1697_);
lean_dec(v_i_1696_);
return v_res_1713_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__3(void){
_start:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1714_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__2, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__2_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__2);
v___x_1715_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0);
v___x_1716_ = l_Lean_Name_mkStr2(v___x_1715_, v___x_1714_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go(lean_object* v_types_1717_, lean_object* v_u_1718_, lean_object* v_x_1719_, lean_object* v_i_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_){
_start:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; uint8_t v___x_1729_; 
v___x_1726_ = lean_array_get_size(v_types_1717_);
v___x_1727_ = lean_unsigned_to_nat(1u);
v___x_1728_ = lean_nat_sub(v___x_1726_, v___x_1727_);
v___x_1729_ = lean_nat_dec_lt(v_i_1720_, v___x_1728_);
lean_dec(v___x_1728_);
if (v___x_1729_ == 0)
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
lean_dec(v_u_1718_);
v___x_1730_ = l_Lean_instInhabitedExpr;
v___x_1731_ = lean_array_get(v___x_1730_, v_types_1717_, v_i_1720_);
lean_dec(v_i_1720_);
lean_dec_ref(v_types_1717_);
v___x_1732_ = l_Lean_Expr_bindingBody_x21(v___x_1731_);
lean_dec(v___x_1731_);
v___x_1733_ = lean_expr_instantiate1(v___x_1732_, v_x_1719_);
lean_dec_ref(v_x_1719_);
lean_dec_ref(v___x_1732_);
v___x_1734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1734_, 0, v___x_1733_);
return v___x_1734_;
}
else
{
lean_object* v___x_1735_; 
lean_inc(v_a_1724_);
lean_inc_ref(v_a_1723_);
lean_inc(v_a_1722_);
lean_inc_ref(v_a_1721_);
lean_inc_ref(v_x_1719_);
v___x_1735_ = lean_infer_type(v_x_1719_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_);
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_object* v_a_1736_; lean_object* v___x_1737_; 
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_a_1736_);
lean_dec_ref(v___x_1735_);
v___x_1737_ = l_Lean_Meta_whnfD(v_a_1736_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_);
if (lean_obj_tag(v___x_1737_) == 0)
{
lean_object* v_a_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; uint8_t v___x_1741_; 
v_a_1738_ = lean_ctor_get(v___x_1737_, 0);
lean_inc(v_a_1738_);
lean_dec_ref(v___x_1737_);
v___x_1739_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1);
v___x_1740_ = lean_unsigned_to_nat(2u);
v___x_1741_ = l_Lean_Expr_isAppOfArity(v_a_1738_, v___x_1739_, v___x_1740_);
if (v___x_1741_ == 0)
{
lean_object* v___x_1742_; lean_object* v___x_1743_; 
lean_dec(v_a_1738_);
lean_dec(v_i_1720_);
lean_dec_ref(v_x_1719_);
lean_dec(v_u_1718_);
lean_dec_ref(v_types_1717_);
v___x_1742_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__2, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__2_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__2);
v___x_1743_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v___x_1742_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_);
return v___x_1743_;
}
else
{
lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; uint8_t v___x_1748_; uint8_t v___x_1749_; lean_object* v___x_1750_; 
lean_inc_n(v_u_1718_, 2);
v___x_1744_ = l_Lean_Level_succ___override(v_u_1718_);
v___x_1745_ = lean_mk_empty_array_with_capacity(v___x_1727_);
lean_inc_ref(v_x_1719_);
lean_inc_ref(v___x_1745_);
v___x_1746_ = lean_array_push(v___x_1745_, v_x_1719_);
v___x_1747_ = l_Lean_mkSort(v_u_1718_);
v___x_1748_ = 0;
v___x_1749_ = 1;
v___x_1750_ = l_Lean_Meta_mkLambdaFVars(v___x_1746_, v___x_1747_, v___x_1748_, v___x_1741_, v___x_1748_, v___x_1741_, v___x_1749_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_);
lean_dec_ref(v___x_1746_);
if (lean_obj_tag(v___x_1750_) == 0)
{
lean_object* v_a_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; 
v_a_1751_ = lean_ctor_get(v___x_1750_, 0);
lean_inc(v_a_1751_);
lean_dec_ref(v___x_1750_);
v___x_1752_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4, &l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4);
v___x_1753_ = l_Lean_Core_mkFreshUserName(v___x_1752_, v_a_1723_, v_a_1724_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v_a_1754_; lean_object* v_nargs_1755_; lean_object* v_dummy_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___f_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v_a_1754_ = lean_ctor_get(v___x_1753_, 0);
lean_inc(v_a_1754_);
lean_dec_ref(v___x_1753_);
v_nargs_1755_ = l_Lean_Expr_getAppNumArgs(v_a_1738_);
v_dummy_1756_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0);
lean_inc(v_nargs_1755_);
v___x_1757_ = lean_mk_array(v_nargs_1755_, v_dummy_1756_);
v___x_1758_ = lean_nat_sub(v_nargs_1755_, v___x_1727_);
lean_dec(v_nargs_1755_);
lean_inc(v_a_1738_);
v___x_1759_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1738_, v___x_1757_, v___x_1758_);
v___x_1760_ = l_Lean_instInhabitedExpr;
v___x_1761_ = lean_box(v___x_1748_);
v___x_1762_ = lean_box(v___x_1741_);
v___x_1763_ = lean_box(v___x_1749_);
lean_inc(v_i_1720_);
lean_inc_ref(v_types_1717_);
lean_inc_ref(v___x_1745_);
v___f_1764_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__0___boxed), 13, 7);
lean_closure_set(v___f_1764_, 0, v___x_1745_);
lean_closure_set(v___f_1764_, 1, v___x_1760_);
lean_closure_set(v___f_1764_, 2, v_types_1717_);
lean_closure_set(v___f_1764_, 3, v_i_1720_);
lean_closure_set(v___f_1764_, 4, v___x_1761_);
lean_closure_set(v___f_1764_, 5, v___x_1762_);
lean_closure_set(v___f_1764_, 6, v___x_1763_);
v___x_1765_ = lean_unsigned_to_nat(0u);
v___x_1766_ = lean_array_get_borrowed(v___x_1760_, v___x_1759_, v___x_1765_);
lean_inc(v___x_1766_);
v___x_1767_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_a_1754_, v___x_1766_, v___f_1764_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_);
if (lean_obj_tag(v___x_1767_) == 0)
{
lean_object* v_a_1768_; lean_object* v___x_1769_; 
v_a_1768_ = lean_ctor_get(v___x_1767_, 0);
lean_inc(v_a_1768_);
lean_dec_ref(v___x_1767_);
v___x_1769_ = l_Lean_Core_mkFreshUserName(v___x_1752_, v_a_1723_, v_a_1724_);
if (lean_obj_tag(v___x_1769_) == 0)
{
lean_object* v_a_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___f_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v_a_1770_ = lean_ctor_get(v___x_1769_, 0);
lean_inc(v_a_1770_);
lean_dec_ref(v___x_1769_);
v___x_1771_ = lean_box(v___x_1748_);
v___x_1772_ = lean_box(v___x_1741_);
v___x_1773_ = lean_box(v___x_1749_);
v___f_1774_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__1___boxed), 14, 8);
lean_closure_set(v___f_1774_, 0, v_i_1720_);
lean_closure_set(v___f_1774_, 1, v___x_1727_);
lean_closure_set(v___f_1774_, 2, v_types_1717_);
lean_closure_set(v___f_1774_, 3, v_u_1718_);
lean_closure_set(v___f_1774_, 4, v___x_1745_);
lean_closure_set(v___f_1774_, 5, v___x_1771_);
lean_closure_set(v___f_1774_, 6, v___x_1772_);
lean_closure_set(v___f_1774_, 7, v___x_1773_);
v___x_1775_ = lean_array_get(v___x_1760_, v___x_1759_, v___x_1727_);
v___x_1776_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_a_1770_, v___x_1775_, v___f_1774_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_);
if (lean_obj_tag(v___x_1776_) == 0)
{
lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1793_; 
v_a_1777_ = lean_ctor_get(v___x_1776_, 0);
v_isSharedCheck_1793_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1793_ == 0)
{
v___x_1779_ = v___x_1776_;
v_isShared_1780_ = v_isSharedCheck_1793_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v___x_1776_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1793_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1791_; 
v___x_1781_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__3, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__3_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__3);
v___x_1782_ = l_Lean_Expr_getAppFn(v_a_1738_);
lean_dec(v_a_1738_);
v___x_1783_ = l_Lean_Expr_constLevels_x21(v___x_1782_);
lean_dec_ref(v___x_1782_);
v___x_1784_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1784_, 0, v___x_1744_);
lean_ctor_set(v___x_1784_, 1, v___x_1783_);
v___x_1785_ = l_Lean_mkConst(v___x_1781_, v___x_1784_);
v___x_1786_ = l_Lean_mkAppN(v___x_1785_, v___x_1759_);
lean_dec_ref(v___x_1759_);
v___x_1787_ = l_Lean_Expr_app___override(v___x_1786_, v_a_1751_);
v___x_1788_ = l_Lean_Expr_app___override(v___x_1787_, v_x_1719_);
v___x_1789_ = l_Lean_mkAppB(v___x_1788_, v_a_1768_, v_a_1777_);
if (v_isShared_1780_ == 0)
{
lean_ctor_set(v___x_1779_, 0, v___x_1789_);
v___x_1791_ = v___x_1779_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v___x_1789_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
}
else
{
lean_dec(v_a_1768_);
lean_dec_ref(v___x_1759_);
lean_dec(v_a_1751_);
lean_dec(v___x_1744_);
lean_dec(v_a_1738_);
lean_dec_ref(v_x_1719_);
return v___x_1776_;
}
}
else
{
lean_object* v_a_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1801_; 
lean_dec(v_a_1768_);
lean_dec_ref(v___x_1759_);
lean_dec(v_a_1751_);
lean_dec_ref(v___x_1745_);
lean_dec(v___x_1744_);
lean_dec(v_a_1738_);
lean_dec(v_i_1720_);
lean_dec_ref(v_x_1719_);
lean_dec(v_u_1718_);
lean_dec_ref(v_types_1717_);
v_a_1794_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1796_ = v___x_1769_;
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_a_1794_);
lean_dec(v___x_1769_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v___x_1799_; 
if (v_isShared_1797_ == 0)
{
v___x_1799_ = v___x_1796_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_a_1794_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
}
else
{
lean_dec_ref(v___x_1759_);
lean_dec(v_a_1751_);
lean_dec_ref(v___x_1745_);
lean_dec(v___x_1744_);
lean_dec(v_a_1738_);
lean_dec(v_i_1720_);
lean_dec_ref(v_x_1719_);
lean_dec(v_u_1718_);
lean_dec_ref(v_types_1717_);
return v___x_1767_;
}
}
else
{
lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1809_; 
lean_dec(v_a_1751_);
lean_dec_ref(v___x_1745_);
lean_dec(v___x_1744_);
lean_dec(v_a_1738_);
lean_dec(v_i_1720_);
lean_dec_ref(v_x_1719_);
lean_dec(v_u_1718_);
lean_dec_ref(v_types_1717_);
v_a_1802_ = lean_ctor_get(v___x_1753_, 0);
v_isSharedCheck_1809_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1804_ = v___x_1753_;
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v___x_1753_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1807_; 
if (v_isShared_1805_ == 0)
{
v___x_1807_ = v___x_1804_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v_a_1802_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
return v___x_1807_;
}
}
}
}
else
{
lean_dec_ref(v___x_1745_);
lean_dec(v___x_1744_);
lean_dec(v_a_1738_);
lean_dec(v_i_1720_);
lean_dec_ref(v_x_1719_);
lean_dec(v_u_1718_);
lean_dec_ref(v_types_1717_);
return v___x_1750_;
}
}
}
else
{
lean_dec(v_i_1720_);
lean_dec_ref(v_x_1719_);
lean_dec(v_u_1718_);
lean_dec_ref(v_types_1717_);
return v___x_1737_;
}
}
else
{
lean_dec(v_i_1720_);
lean_dec_ref(v_x_1719_);
lean_dec(v_u_1718_);
lean_dec_ref(v_types_1717_);
return v___x_1735_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__1(lean_object* v_i_1810_, lean_object* v___x_1811_, lean_object* v_types_1812_, lean_object* v_u_1813_, lean_object* v___x_1814_, uint8_t v___x_1815_, uint8_t v___x_1816_, uint8_t v___x_1817_, lean_object* v_x_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_){
_start:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1824_ = lean_nat_add(v_i_1810_, v___x_1811_);
lean_inc_ref(v_x_1818_);
v___x_1825_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go(v_types_1812_, v_u_1813_, v_x_1818_, v___x_1824_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_);
if (lean_obj_tag(v___x_1825_) == 0)
{
lean_object* v_a_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
v_a_1826_ = lean_ctor_get(v___x_1825_, 0);
lean_inc(v_a_1826_);
lean_dec_ref(v___x_1825_);
v___x_1827_ = lean_array_push(v___x_1814_, v_x_1818_);
v___x_1828_ = l_Lean_Meta_mkLambdaFVars(v___x_1827_, v_a_1826_, v___x_1815_, v___x_1816_, v___x_1815_, v___x_1816_, v___x_1817_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_);
lean_dec_ref(v___x_1827_);
return v___x_1828_;
}
else
{
lean_dec_ref(v_x_1818_);
lean_dec_ref(v___x_1814_);
return v___x_1825_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___boxed(lean_object* v_types_1829_, lean_object* v_u_1830_, lean_object* v_x_1831_, lean_object* v_i_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_, lean_object* v_a_1837_){
_start:
{
lean_object* v_res_1838_; 
v_res_1838_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go(v_types_1829_, v_u_1830_, v_x_1831_, v_i_1832_, v_a_1833_, v_a_1834_, v_a_1835_, v_a_1836_);
lean_dec(v_a_1836_);
lean_dec_ref(v_a_1835_);
lean_dec(v_a_1834_);
lean_dec_ref(v_a_1833_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___lam__0(lean_object* v_x_1839_, lean_object* v_body_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_){
_start:
{
lean_object* v___x_1846_; 
v___x_1846_ = l_Lean_Meta_getLevel(v_body_1840_, v___y_1841_, v___y_1842_, v___y_1843_, v___y_1844_);
return v___x_1846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___lam__0___boxed(lean_object* v_x_1847_, lean_object* v_body_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_){
_start:
{
lean_object* v_res_1854_; 
v_res_1854_ = l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___lam__0(v_x_1847_, v_body_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_);
lean_dec(v___y_1852_);
lean_dec_ref(v___y_1851_);
lean_dec(v___y_1850_);
lean_dec_ref(v___y_1849_);
lean_dec_ref(v_x_1847_);
return v_res_1854_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___closed__0(void){
_start:
{
lean_object* v___f_1855_; 
v___f_1855_ = lean_alloc_closure((void*)(l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___lam__0___boxed), 7, 0);
return v___f_1855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain(lean_object* v_types_1856_, lean_object* v_x_1857_, lean_object* v_a_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_){
_start:
{
lean_object* v___f_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; uint8_t v___x_1868_; lean_object* v___x_1869_; 
v___f_1863_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___closed__0, &l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___closed__0);
v___x_1864_ = l_Lean_instInhabitedExpr;
v___x_1865_ = lean_unsigned_to_nat(0u);
v___x_1866_ = lean_array_get_borrowed(v___x_1864_, v_types_1856_, v___x_1865_);
v___x_1867_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0, &l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0);
v___x_1868_ = 0;
lean_inc(v___x_1866_);
v___x_1869_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(v___x_1866_, v___x_1867_, v___f_1863_, v___x_1868_, v___x_1868_, v_a_1858_, v_a_1859_, v_a_1860_, v_a_1861_);
if (lean_obj_tag(v___x_1869_) == 0)
{
lean_object* v_a_1870_; lean_object* v___x_1871_; 
v_a_1870_ = lean_ctor_get(v___x_1869_, 0);
lean_inc(v_a_1870_);
lean_dec_ref(v___x_1869_);
v___x_1871_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go(v_types_1856_, v_a_1870_, v_x_1857_, v___x_1865_, v_a_1858_, v_a_1859_, v_a_1860_, v_a_1861_);
return v___x_1871_;
}
else
{
lean_object* v_a_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1879_; 
lean_dec_ref(v_x_1857_);
lean_dec_ref(v_types_1856_);
v_a_1872_ = lean_ctor_get(v___x_1869_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v___x_1869_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1874_ = v___x_1869_;
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_a_1872_);
lean_dec(v___x_1869_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v___x_1877_; 
if (v_isShared_1875_ == 0)
{
v___x_1877_ = v___x_1874_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v_a_1872_);
v___x_1877_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
return v___x_1877_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___boxed(lean_object* v_types_1880_, lean_object* v_x_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_){
_start:
{
lean_object* v_res_1887_; 
v_res_1887_ = l_Lean_Meta_ArgsPacker_Mutual_mkCodomain(v_types_1880_, v_x_1881_, v_a_1882_, v_a_1883_, v_a_1884_, v_a_1885_);
lean_dec(v_a_1885_);
lean_dec_ref(v_a_1884_);
lean_dec(v_a_1883_);
lean_dec_ref(v_a_1882_);
return v_res_1887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryType___lam__0(lean_object* v_a_1888_, lean_object* v___x_1889_, uint8_t v___x_1890_, lean_object* v_x_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_){
_start:
{
lean_object* v___x_1897_; 
lean_inc_ref(v_x_1891_);
v___x_1897_ = l_Lean_Meta_ArgsPacker_Mutual_mkCodomain(v_a_1888_, v_x_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
if (lean_obj_tag(v___x_1897_) == 0)
{
lean_object* v_a_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; uint8_t v___x_1901_; uint8_t v___x_1902_; lean_object* v___x_1903_; 
v_a_1898_ = lean_ctor_get(v___x_1897_, 0);
lean_inc(v_a_1898_);
lean_dec_ref(v___x_1897_);
v___x_1899_ = lean_mk_empty_array_with_capacity(v___x_1889_);
v___x_1900_ = lean_array_push(v___x_1899_, v_x_1891_);
v___x_1901_ = 1;
v___x_1902_ = 1;
v___x_1903_ = l_Lean_Meta_mkForallFVars(v___x_1900_, v_a_1898_, v___x_1890_, v___x_1901_, v___x_1901_, v___x_1902_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
lean_dec_ref(v___x_1900_);
return v___x_1903_;
}
else
{
lean_dec_ref(v_x_1891_);
return v___x_1897_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryType___lam__0___boxed(lean_object* v_a_1904_, lean_object* v___x_1905_, lean_object* v___x_1906_, lean_object* v_x_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_){
_start:
{
uint8_t v___x_2053__boxed_1913_; lean_object* v_res_1914_; 
v___x_2053__boxed_1913_ = lean_unbox(v___x_1906_);
v_res_1914_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryType___lam__0(v_a_1904_, v___x_1905_, v___x_2053__boxed_1913_, v_x_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
lean_dec(v___y_1911_);
lean_dec_ref(v___y_1910_);
lean_dec(v___y_1909_);
lean_dec_ref(v___y_1908_);
lean_dec(v___x_1905_);
return v_res_1914_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__1(size_t v_sz_1915_, size_t v_i_1916_, lean_object* v_bs_1917_){
_start:
{
uint8_t v___x_1918_; 
v___x_1918_ = lean_usize_dec_lt(v_i_1916_, v_sz_1915_);
if (v___x_1918_ == 0)
{
return v_bs_1917_;
}
else
{
lean_object* v_v_1919_; lean_object* v___x_1920_; lean_object* v_bs_x27_1921_; lean_object* v___x_1922_; size_t v___x_1923_; size_t v___x_1924_; lean_object* v___x_1925_; 
v_v_1919_ = lean_array_uget(v_bs_1917_, v_i_1916_);
v___x_1920_ = lean_unsigned_to_nat(0u);
v_bs_x27_1921_ = lean_array_uset(v_bs_1917_, v_i_1916_, v___x_1920_);
v___x_1922_ = l_Lean_Expr_bindingDomain_x21(v_v_1919_);
lean_dec(v_v_1919_);
v___x_1923_ = ((size_t)1ULL);
v___x_1924_ = lean_usize_add(v_i_1916_, v___x_1923_);
v___x_1925_ = lean_array_uset(v_bs_x27_1921_, v_i_1916_, v___x_1922_);
v_i_1916_ = v___x_1924_;
v_bs_1917_ = v___x_1925_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__1___boxed(lean_object* v_sz_1927_, lean_object* v_i_1928_, lean_object* v_bs_1929_){
_start:
{
size_t v_sz_boxed_1930_; size_t v_i_boxed_1931_; lean_object* v_res_1932_; 
v_sz_boxed_1930_ = lean_unbox_usize(v_sz_1927_);
lean_dec(v_sz_1927_);
v_i_boxed_1931_ = lean_unbox_usize(v_i_1928_);
lean_dec(v_i_1928_);
v_res_1932_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__1(v_sz_boxed_1930_, v_i_boxed_1931_, v_bs_1929_);
return v_res_1932_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1933_; 
v___x_1933_ = lean_mk_string_unchecked("Mutual.uncurryType: Expected forall type, got ", 46, 46);
return v___x_1933_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1934_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__0);
v___x_1935_ = l_Lean_stringToMessageData(v___x_1934_);
return v___x_1935_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2(lean_object* v_as_1936_, size_t v_i_1937_, size_t v_stop_1938_, lean_object* v_b_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_){
_start:
{
lean_object* v_a_1946_; uint8_t v___x_1950_; 
v___x_1950_ = lean_usize_dec_eq(v_i_1937_, v_stop_1938_);
if (v___x_1950_ == 0)
{
lean_object* v___x_1951_; uint8_t v___x_1952_; 
v___x_1951_ = lean_array_uget_borrowed(v_as_1936_, v_i_1937_);
v___x_1952_ = l_Lean_Expr_isForall(v___x_1951_);
if (v___x_1952_ == 0)
{
lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; 
v___x_1953_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__1);
lean_inc(v___x_1951_);
v___x_1954_ = l_Lean_MessageData_ofExpr(v___x_1951_);
v___x_1955_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1955_, 0, v___x_1953_);
lean_ctor_set(v___x_1955_, 1, v___x_1954_);
v___x_1956_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_1955_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_);
if (lean_obj_tag(v___x_1956_) == 0)
{
lean_object* v_a_1957_; 
v_a_1957_ = lean_ctor_get(v___x_1956_, 0);
lean_inc(v_a_1957_);
lean_dec_ref(v___x_1956_);
v_a_1946_ = v_a_1957_;
goto v___jp_1945_;
}
else
{
return v___x_1956_;
}
}
else
{
lean_object* v___x_1958_; 
v___x_1958_ = lean_box(0);
v_a_1946_ = v___x_1958_;
goto v___jp_1945_;
}
}
else
{
lean_object* v___x_1959_; 
v___x_1959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1959_, 0, v_b_1939_);
return v___x_1959_;
}
v___jp_1945_:
{
size_t v___x_1947_; size_t v___x_1948_; 
v___x_1947_ = ((size_t)1ULL);
v___x_1948_ = lean_usize_add(v_i_1937_, v___x_1947_);
v_i_1937_ = v___x_1948_;
v_b_1939_ = v_a_1946_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___boxed(lean_object* v_as_1960_, lean_object* v_i_1961_, lean_object* v_stop_1962_, lean_object* v_b_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_){
_start:
{
size_t v_i_boxed_1969_; size_t v_stop_boxed_1970_; lean_object* v_res_1971_; 
v_i_boxed_1969_ = lean_unbox_usize(v_i_1961_);
lean_dec(v_i_1961_);
v_stop_boxed_1970_ = lean_unbox_usize(v_stop_1962_);
lean_dec(v_stop_1962_);
v_res_1971_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2(v_as_1960_, v_i_boxed_1969_, v_stop_boxed_1970_, v_b_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec_ref(v_as_1960_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__0(size_t v_sz_1972_, size_t v_i_1973_, lean_object* v_bs_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_){
_start:
{
uint8_t v___x_1980_; 
v___x_1980_ = lean_usize_dec_lt(v_i_1973_, v_sz_1972_);
if (v___x_1980_ == 0)
{
lean_object* v___x_1981_; 
v___x_1981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1981_, 0, v_bs_1974_);
return v___x_1981_;
}
else
{
lean_object* v_v_1982_; lean_object* v___x_1983_; 
v_v_1982_ = lean_array_uget_borrowed(v_bs_1974_, v_i_1973_);
lean_inc(v_v_1982_);
v___x_1983_ = l_Lean_Meta_whnfForall(v_v_1982_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
if (lean_obj_tag(v___x_1983_) == 0)
{
lean_object* v_a_1984_; lean_object* v___x_1985_; lean_object* v_bs_x27_1986_; size_t v___x_1987_; size_t v___x_1988_; lean_object* v___x_1989_; 
v_a_1984_ = lean_ctor_get(v___x_1983_, 0);
lean_inc(v_a_1984_);
lean_dec_ref(v___x_1983_);
v___x_1985_ = lean_unsigned_to_nat(0u);
v_bs_x27_1986_ = lean_array_uset(v_bs_1974_, v_i_1973_, v___x_1985_);
v___x_1987_ = ((size_t)1ULL);
v___x_1988_ = lean_usize_add(v_i_1973_, v___x_1987_);
v___x_1989_ = lean_array_uset(v_bs_x27_1986_, v_i_1973_, v_a_1984_);
v_i_1973_ = v___x_1988_;
v_bs_1974_ = v___x_1989_;
goto _start;
}
else
{
lean_object* v_a_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_1998_; 
lean_dec_ref(v_bs_1974_);
v_a_1991_ = lean_ctor_get(v___x_1983_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1983_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1993_ = v___x_1983_;
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_a_1991_);
lean_dec(v___x_1983_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1996_; 
if (v_isShared_1994_ == 0)
{
v___x_1996_ = v___x_1993_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_a_1991_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
return v___x_1996_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__0___boxed(lean_object* v_sz_1999_, lean_object* v_i_2000_, lean_object* v_bs_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_){
_start:
{
size_t v_sz_boxed_2007_; size_t v_i_boxed_2008_; lean_object* v_res_2009_; 
v_sz_boxed_2007_ = lean_unbox_usize(v_sz_1999_);
lean_dec(v_sz_1999_);
v_i_boxed_2008_ = lean_unbox_usize(v_i_2000_);
lean_dec(v_i_2000_);
v_res_2009_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__0(v_sz_boxed_2007_, v_i_boxed_2008_, v_bs_2001_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_);
lean_dec(v___y_2005_);
lean_dec_ref(v___y_2004_);
lean_dec(v___y_2003_);
lean_dec_ref(v___y_2002_);
return v_res_2009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryType(lean_object* v_types_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_){
_start:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; uint8_t v___x_2018_; 
v___x_2016_ = lean_array_get_size(v_types_2010_);
v___x_2017_ = lean_unsigned_to_nat(1u);
v___x_2018_ = lean_nat_dec_eq(v___x_2016_, v___x_2017_);
if (v___x_2018_ == 0)
{
size_t v_sz_2019_; size_t v___x_2020_; lean_object* v___x_2021_; 
v_sz_2019_ = lean_array_size(v_types_2010_);
v___x_2020_ = ((size_t)0ULL);
v___x_2021_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__0(v_sz_2019_, v___x_2020_, v_types_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2021_) == 0)
{
lean_object* v_a_2022_; lean_object* v___x_2023_; lean_object* v___f_2024_; lean_object* v___y_2043_; lean_object* v___x_2052_; lean_object* v___x_2053_; uint8_t v___x_2054_; 
v_a_2022_ = lean_ctor_get(v___x_2021_, 0);
lean_inc_n(v_a_2022_, 2);
lean_dec_ref(v___x_2021_);
v___x_2023_ = lean_box(v___x_2018_);
v___f_2024_ = lean_alloc_closure((void*)(l_Lean_Meta_ArgsPacker_Mutual_uncurryType___lam__0___boxed), 9, 3);
lean_closure_set(v___f_2024_, 0, v_a_2022_);
lean_closure_set(v___f_2024_, 1, v___x_2017_);
lean_closure_set(v___f_2024_, 2, v___x_2023_);
v___x_2052_ = lean_unsigned_to_nat(0u);
v___x_2053_ = lean_array_get_size(v_a_2022_);
v___x_2054_ = lean_nat_dec_lt(v___x_2052_, v___x_2053_);
if (v___x_2054_ == 0)
{
goto v___jp_2025_;
}
else
{
lean_object* v___x_2055_; uint8_t v___x_2056_; 
v___x_2055_ = lean_box(0);
v___x_2056_ = lean_nat_dec_le(v___x_2053_, v___x_2053_);
if (v___x_2056_ == 0)
{
if (v___x_2054_ == 0)
{
goto v___jp_2025_;
}
else
{
size_t v___x_2057_; lean_object* v___x_2058_; 
v___x_2057_ = lean_usize_of_nat(v___x_2053_);
v___x_2058_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2(v_a_2022_, v___x_2020_, v___x_2057_, v___x_2055_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
v___y_2043_ = v___x_2058_;
goto v___jp_2042_;
}
}
else
{
size_t v___x_2059_; lean_object* v___x_2060_; 
v___x_2059_ = lean_usize_of_nat(v___x_2053_);
v___x_2060_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2(v_a_2022_, v___x_2020_, v___x_2059_, v___x_2055_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
v___y_2043_ = v___x_2060_;
goto v___jp_2042_;
}
}
v___jp_2025_:
{
size_t v_sz_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; 
v_sz_2026_ = lean_array_size(v_a_2022_);
v___x_2027_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__1(v_sz_2026_, v___x_2020_, v_a_2022_);
v___x_2028_ = l_Lean_Meta_ArgsPacker_Mutual_packType(v___x_2027_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v_a_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; 
v_a_2029_ = lean_ctor_get(v___x_2028_, 0);
lean_inc(v_a_2029_);
lean_dec_ref(v___x_2028_);
v___x_2030_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2, &l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2);
v___x_2031_ = l_Lean_Core_mkFreshUserName(v___x_2030_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2031_) == 0)
{
lean_object* v_a_2032_; lean_object* v___x_2033_; 
v_a_2032_ = lean_ctor_get(v___x_2031_, 0);
lean_inc(v_a_2032_);
lean_dec_ref(v___x_2031_);
v___x_2033_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_a_2032_, v_a_2029_, v___f_2024_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
return v___x_2033_;
}
else
{
lean_object* v_a_2034_; lean_object* v___x_2036_; uint8_t v_isShared_2037_; uint8_t v_isSharedCheck_2041_; 
lean_dec(v_a_2029_);
lean_dec_ref(v___f_2024_);
v_a_2034_ = lean_ctor_get(v___x_2031_, 0);
v_isSharedCheck_2041_ = !lean_is_exclusive(v___x_2031_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2036_ = v___x_2031_;
v_isShared_2037_ = v_isSharedCheck_2041_;
goto v_resetjp_2035_;
}
else
{
lean_inc(v_a_2034_);
lean_dec(v___x_2031_);
v___x_2036_ = lean_box(0);
v_isShared_2037_ = v_isSharedCheck_2041_;
goto v_resetjp_2035_;
}
v_resetjp_2035_:
{
lean_object* v___x_2039_; 
if (v_isShared_2037_ == 0)
{
v___x_2039_ = v___x_2036_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v_a_2034_);
v___x_2039_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
return v___x_2039_;
}
}
}
}
else
{
lean_dec_ref(v___f_2024_);
return v___x_2028_;
}
}
v___jp_2042_:
{
if (lean_obj_tag(v___y_2043_) == 0)
{
lean_dec_ref(v___y_2043_);
goto v___jp_2025_;
}
else
{
lean_object* v_a_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2051_; 
lean_dec_ref(v___f_2024_);
lean_dec(v_a_2022_);
v_a_2044_ = lean_ctor_get(v___y_2043_, 0);
v_isSharedCheck_2051_ = !lean_is_exclusive(v___y_2043_);
if (v_isSharedCheck_2051_ == 0)
{
v___x_2046_ = v___y_2043_;
v_isShared_2047_ = v_isSharedCheck_2051_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_a_2044_);
lean_dec(v___y_2043_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2051_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v___x_2049_; 
if (v_isShared_2047_ == 0)
{
v___x_2049_ = v___x_2046_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v_a_2044_);
v___x_2049_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
return v___x_2049_;
}
}
}
}
}
else
{
lean_object* v_a_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2068_; 
v_a_2061_ = lean_ctor_get(v___x_2021_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_2021_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2063_ = v___x_2021_;
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_a_2061_);
lean_dec(v___x_2021_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2066_; 
if (v_isShared_2064_ == 0)
{
v___x_2066_ = v___x_2063_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_a_2061_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
}
}
else
{
lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; 
v___x_2069_ = l_Lean_instInhabitedExpr;
v___x_2070_ = lean_unsigned_to_nat(0u);
v___x_2071_ = lean_array_get(v___x_2069_, v_types_2010_, v___x_2070_);
lean_dec_ref(v_types_2010_);
v___x_2072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2072_, 0, v___x_2071_);
return v___x_2072_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryType___boxed(lean_object* v_types_2073_, lean_object* v_a_2074_, lean_object* v_a_2075_, lean_object* v_a_2076_, lean_object* v_a_2077_, lean_object* v_a_2078_){
_start:
{
lean_object* v_res_2079_; 
v_res_2079_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryType(v_types_2073_, v_a_2074_, v_a_2075_, v_a_2076_, v_a_2077_);
lean_dec(v_a_2077_);
lean_dec_ref(v_a_2076_);
lean_dec(v_a_2075_);
lean_dec_ref(v_a_2074_);
return v_res_2079_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__0(size_t v_sz_2080_, size_t v_i_2081_, lean_object* v_bs_2082_){
_start:
{
uint8_t v___x_2083_; 
v___x_2083_ = lean_usize_dec_lt(v_i_2081_, v_sz_2080_);
if (v___x_2083_ == 0)
{
return v_bs_2082_;
}
else
{
lean_object* v_v_2084_; lean_object* v___x_2085_; lean_object* v_bs_x27_2086_; lean_object* v___x_2087_; size_t v___x_2088_; size_t v___x_2089_; lean_object* v___x_2090_; 
v_v_2084_ = lean_array_uget(v_bs_2082_, v_i_2081_);
v___x_2085_ = lean_unsigned_to_nat(0u);
v_bs_x27_2086_ = lean_array_uset(v_bs_2082_, v_i_2081_, v___x_2085_);
v___x_2087_ = l_Lean_Expr_bindingBody_x21(v_v_2084_);
lean_dec(v_v_2084_);
v___x_2088_ = ((size_t)1ULL);
v___x_2089_ = lean_usize_add(v_i_2081_, v___x_2088_);
v___x_2090_ = lean_array_uset(v_bs_x27_2086_, v_i_2081_, v___x_2087_);
v_i_2081_ = v___x_2089_;
v_bs_2082_ = v___x_2090_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__0___boxed(lean_object* v_sz_2092_, lean_object* v_i_2093_, lean_object* v_bs_2094_){
_start:
{
size_t v_sz_boxed_2095_; size_t v_i_boxed_2096_; lean_object* v_res_2097_; 
v_sz_boxed_2095_ = lean_unbox_usize(v_sz_2092_);
lean_dec(v_sz_2092_);
v_i_boxed_2096_ = lean_unbox_usize(v_i_2093_);
lean_dec(v_i_2093_);
v_res_2097_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__0(v_sz_boxed_2095_, v_i_boxed_2096_, v_bs_2094_);
return v_res_2097_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__0(void){
_start:
{
lean_object* v___x_2098_; 
v___x_2098_ = lean_mk_string_unchecked("Mutual.uncurryTypeND: Expected non-dependent types, got ", 56, 56);
return v___x_2098_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__1(void){
_start:
{
lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2099_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__0);
v___x_2100_ = l_Lean_stringToMessageData(v___x_2099_);
return v___x_2100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2(lean_object* v_as_2101_, size_t v_i_2102_, size_t v_stop_2103_, lean_object* v_b_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_){
_start:
{
lean_object* v_a_2111_; uint8_t v___x_2115_; 
v___x_2115_ = lean_usize_dec_eq(v_i_2102_, v_stop_2103_);
if (v___x_2115_ == 0)
{
lean_object* v___x_2116_; uint8_t v___x_2117_; 
v___x_2116_ = lean_array_uget_borrowed(v_as_2101_, v_i_2102_);
v___x_2117_ = l_Lean_Expr_isArrow(v___x_2116_);
if (v___x_2117_ == 0)
{
lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; 
v___x_2118_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__1);
lean_inc(v___x_2116_);
v___x_2119_ = l_Lean_MessageData_ofExpr(v___x_2116_);
v___x_2120_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2118_);
lean_ctor_set(v___x_2120_, 1, v___x_2119_);
v___x_2121_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_2120_, v___y_2105_, v___y_2106_, v___y_2107_, v___y_2108_);
if (lean_obj_tag(v___x_2121_) == 0)
{
lean_object* v_a_2122_; 
v_a_2122_ = lean_ctor_get(v___x_2121_, 0);
lean_inc(v_a_2122_);
lean_dec_ref(v___x_2121_);
v_a_2111_ = v_a_2122_;
goto v___jp_2110_;
}
else
{
return v___x_2121_;
}
}
else
{
lean_object* v___x_2123_; 
v___x_2123_ = lean_box(0);
v_a_2111_ = v___x_2123_;
goto v___jp_2110_;
}
}
else
{
lean_object* v___x_2124_; 
v___x_2124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2124_, 0, v_b_2104_);
return v___x_2124_;
}
v___jp_2110_:
{
size_t v___x_2112_; size_t v___x_2113_; 
v___x_2112_ = ((size_t)1ULL);
v___x_2113_ = lean_usize_add(v_i_2102_, v___x_2112_);
v_i_2102_ = v___x_2113_;
v_b_2104_ = v_a_2111_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___boxed(lean_object* v_as_2125_, lean_object* v_i_2126_, lean_object* v_stop_2127_, lean_object* v_b_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_){
_start:
{
size_t v_i_boxed_2134_; size_t v_stop_boxed_2135_; lean_object* v_res_2136_; 
v_i_boxed_2134_ = lean_unbox_usize(v_i_2126_);
lean_dec(v_i_2126_);
v_stop_boxed_2135_ = lean_unbox_usize(v_stop_2127_);
lean_dec(v_stop_2127_);
v_res_2136_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2(v_as_2125_, v_i_boxed_2134_, v_stop_boxed_2135_, v_b_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_);
lean_dec(v___y_2132_);
lean_dec_ref(v___y_2131_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec_ref(v_as_2125_);
return v_res_2136_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2137_; 
v___x_2137_ = lean_mk_string_unchecked("Mutual.uncurryTypeND: Expected equal codomains, but got ", 56, 56);
return v___x_2137_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2138_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__0);
v___x_2139_ = l_Lean_stringToMessageData(v___x_2138_);
return v___x_2139_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__2(void){
_start:
{
lean_object* v___x_2140_; 
v___x_2140_ = lean_mk_string_unchecked(" and ", 5, 5);
return v___x_2140_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__3(void){
_start:
{
lean_object* v___x_2141_; lean_object* v___x_2142_; 
v___x_2141_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__2);
v___x_2142_ = l_Lean_stringToMessageData(v___x_2141_);
return v___x_2142_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1(lean_object* v___x_2143_, lean_object* v_as_2144_, size_t v_i_2145_, size_t v_stop_2146_, lean_object* v_b_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_){
_start:
{
lean_object* v_a_2154_; uint8_t v___x_2158_; 
v___x_2158_ = lean_usize_dec_eq(v_i_2145_, v_stop_2146_);
if (v___x_2158_ == 0)
{
lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2159_ = lean_array_uget_borrowed(v_as_2144_, v_i_2145_);
lean_inc_ref(v___x_2143_);
lean_inc(v___x_2159_);
v___x_2160_ = l_Lean_Meta_isExprDefEq(v___x_2159_, v___x_2143_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_);
if (lean_obj_tag(v___x_2160_) == 0)
{
lean_object* v_a_2161_; uint8_t v___x_2162_; 
v_a_2161_ = lean_ctor_get(v___x_2160_, 0);
lean_inc(v_a_2161_);
lean_dec_ref(v___x_2160_);
v___x_2162_ = lean_unbox(v_a_2161_);
lean_dec(v_a_2161_);
if (v___x_2162_ == 0)
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; 
v___x_2163_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__1);
lean_inc(v___x_2159_);
v___x_2164_ = l_Lean_MessageData_ofExpr(v___x_2159_);
v___x_2165_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2163_);
lean_ctor_set(v___x_2165_, 1, v___x_2164_);
v___x_2166_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__3);
v___x_2167_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2165_);
lean_ctor_set(v___x_2167_, 1, v___x_2166_);
lean_inc_ref(v___x_2143_);
v___x_2168_ = l_Lean_MessageData_ofExpr(v___x_2143_);
v___x_2169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2169_, 0, v___x_2167_);
lean_ctor_set(v___x_2169_, 1, v___x_2168_);
v___x_2170_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_2169_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_);
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_object* v_a_2171_; 
v_a_2171_ = lean_ctor_get(v___x_2170_, 0);
lean_inc(v_a_2171_);
lean_dec_ref(v___x_2170_);
v_a_2154_ = v_a_2171_;
goto v___jp_2153_;
}
else
{
lean_dec_ref(v___x_2143_);
return v___x_2170_;
}
}
else
{
lean_object* v___x_2172_; 
v___x_2172_ = lean_box(0);
v_a_2154_ = v___x_2172_;
goto v___jp_2153_;
}
}
else
{
lean_object* v_a_2173_; lean_object* v___x_2175_; uint8_t v_isShared_2176_; uint8_t v_isSharedCheck_2180_; 
lean_dec_ref(v___x_2143_);
v_a_2173_ = lean_ctor_get(v___x_2160_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2160_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2175_ = v___x_2160_;
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
else
{
lean_inc(v_a_2173_);
lean_dec(v___x_2160_);
v___x_2175_ = lean_box(0);
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
v_resetjp_2174_:
{
lean_object* v___x_2178_; 
if (v_isShared_2176_ == 0)
{
v___x_2178_ = v___x_2175_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v_a_2173_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
}
}
else
{
lean_object* v___x_2181_; 
lean_dec_ref(v___x_2143_);
v___x_2181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2181_, 0, v_b_2147_);
return v___x_2181_;
}
v___jp_2153_:
{
size_t v___x_2155_; size_t v___x_2156_; 
v___x_2155_ = ((size_t)1ULL);
v___x_2156_ = lean_usize_add(v_i_2145_, v___x_2155_);
v_i_2145_ = v___x_2156_;
v_b_2147_ = v_a_2154_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___boxed(lean_object* v___x_2182_, lean_object* v_as_2183_, lean_object* v_i_2184_, lean_object* v_stop_2185_, lean_object* v_b_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_){
_start:
{
size_t v_i_boxed_2192_; size_t v_stop_boxed_2193_; lean_object* v_res_2194_; 
v_i_boxed_2192_ = lean_unbox_usize(v_i_2184_);
lean_dec(v_i_2184_);
v_stop_boxed_2193_ = lean_unbox_usize(v_stop_2185_);
lean_dec(v_stop_2185_);
v_res_2194_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1(v___x_2182_, v_as_2183_, v_i_boxed_2192_, v_stop_boxed_2193_, v_b_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_);
lean_dec(v___y_2190_);
lean_dec_ref(v___y_2189_);
lean_dec(v___y_2188_);
lean_dec_ref(v___y_2187_);
lean_dec_ref(v_as_2183_);
return v_res_2194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryTypeND(lean_object* v_types_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_){
_start:
{
size_t v_sz_2201_; size_t v___x_2202_; lean_object* v___x_2203_; 
v_sz_2201_ = lean_array_size(v_types_2195_);
v___x_2202_ = ((size_t)0ULL);
v___x_2203_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__0(v_sz_2201_, v___x_2202_, v_types_2195_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_);
if (lean_obj_tag(v___x_2203_) == 0)
{
lean_object* v_a_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; size_t v___y_2208_; lean_object* v___y_2209_; size_t v___y_2216_; lean_object* v___y_2217_; lean_object* v___y_2218_; lean_object* v___y_2244_; lean_object* v___x_2253_; uint8_t v___x_2254_; 
v_a_2204_ = lean_ctor_get(v___x_2203_, 0);
lean_inc(v_a_2204_);
lean_dec_ref(v___x_2203_);
v___x_2205_ = l_Lean_instInhabitedExpr;
v___x_2206_ = lean_unsigned_to_nat(0u);
v___x_2253_ = lean_array_get_size(v_a_2204_);
v___x_2254_ = lean_nat_dec_lt(v___x_2206_, v___x_2253_);
if (v___x_2254_ == 0)
{
goto v___jp_2227_;
}
else
{
lean_object* v___x_2255_; uint8_t v___x_2256_; 
v___x_2255_ = lean_box(0);
v___x_2256_ = lean_nat_dec_le(v___x_2253_, v___x_2253_);
if (v___x_2256_ == 0)
{
if (v___x_2254_ == 0)
{
goto v___jp_2227_;
}
else
{
size_t v___x_2257_; lean_object* v___x_2258_; 
v___x_2257_ = lean_usize_of_nat(v___x_2253_);
v___x_2258_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2(v_a_2204_, v___x_2202_, v___x_2257_, v___x_2255_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_);
v___y_2244_ = v___x_2258_;
goto v___jp_2243_;
}
}
else
{
size_t v___x_2259_; lean_object* v___x_2260_; 
v___x_2259_ = lean_usize_of_nat(v___x_2253_);
v___x_2260_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2(v_a_2204_, v___x_2202_, v___x_2259_, v___x_2255_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_);
v___y_2244_ = v___x_2260_;
goto v___jp_2243_;
}
}
v___jp_2207_:
{
lean_object* v___x_2210_; lean_object* v___x_2211_; 
v___x_2210_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__1(v___y_2208_, v___x_2202_, v_a_2204_);
v___x_2211_ = l_Lean_Meta_ArgsPacker_Mutual_packType(v___x_2210_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_);
if (lean_obj_tag(v___x_2211_) == 0)
{
lean_object* v_a_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; 
v_a_2212_ = lean_ctor_get(v___x_2211_, 0);
lean_inc(v_a_2212_);
lean_dec_ref(v___x_2211_);
v___x_2213_ = lean_array_get(v___x_2205_, v___y_2209_, v___x_2206_);
lean_dec_ref(v___y_2209_);
v___x_2214_ = l_Lean_mkArrow(v_a_2212_, v___x_2213_, v_a_2198_, v_a_2199_);
return v___x_2214_;
}
else
{
lean_dec_ref(v___y_2209_);
return v___x_2211_;
}
}
v___jp_2215_:
{
if (lean_obj_tag(v___y_2218_) == 0)
{
lean_dec_ref(v___y_2218_);
v___y_2208_ = v___y_2216_;
v___y_2209_ = v___y_2217_;
goto v___jp_2207_;
}
else
{
lean_object* v_a_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2226_; 
lean_dec_ref(v___y_2217_);
lean_dec(v_a_2204_);
v_a_2219_ = lean_ctor_get(v___y_2218_, 0);
v_isSharedCheck_2226_ = !lean_is_exclusive(v___y_2218_);
if (v_isSharedCheck_2226_ == 0)
{
v___x_2221_ = v___y_2218_;
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_a_2219_);
lean_dec(v___y_2218_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
lean_object* v___x_2224_; 
if (v_isShared_2222_ == 0)
{
v___x_2224_ = v___x_2221_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_a_2219_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
}
}
v___jp_2227_:
{
size_t v_sz_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; uint8_t v___x_2236_; 
v_sz_2228_ = lean_array_size(v_a_2204_);
lean_inc(v_a_2204_);
v___x_2229_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__0(v_sz_2228_, v___x_2202_, v_a_2204_);
v___x_2230_ = lean_array_get_size(v___x_2229_);
v___x_2231_ = lean_unsigned_to_nat(1u);
v___x_2232_ = lean_nat_sub(v___x_2230_, v___x_2231_);
v___x_2233_ = lean_array_get(v___x_2205_, v___x_2229_, v___x_2232_);
lean_dec(v___x_2232_);
lean_inc_ref(v___x_2229_);
v___x_2234_ = lean_array_pop(v___x_2229_);
v___x_2235_ = lean_array_get_size(v___x_2234_);
v___x_2236_ = lean_nat_dec_lt(v___x_2206_, v___x_2235_);
if (v___x_2236_ == 0)
{
lean_dec_ref(v___x_2234_);
lean_dec(v___x_2233_);
v___y_2208_ = v_sz_2228_;
v___y_2209_ = v___x_2229_;
goto v___jp_2207_;
}
else
{
lean_object* v___x_2237_; uint8_t v___x_2238_; 
v___x_2237_ = lean_box(0);
v___x_2238_ = lean_nat_dec_le(v___x_2235_, v___x_2235_);
if (v___x_2238_ == 0)
{
if (v___x_2236_ == 0)
{
lean_dec_ref(v___x_2234_);
lean_dec(v___x_2233_);
v___y_2208_ = v_sz_2228_;
v___y_2209_ = v___x_2229_;
goto v___jp_2207_;
}
else
{
size_t v___x_2239_; lean_object* v___x_2240_; 
v___x_2239_ = lean_usize_of_nat(v___x_2235_);
v___x_2240_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1(v___x_2233_, v___x_2234_, v___x_2202_, v___x_2239_, v___x_2237_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_);
lean_dec_ref(v___x_2234_);
v___y_2216_ = v_sz_2228_;
v___y_2217_ = v___x_2229_;
v___y_2218_ = v___x_2240_;
goto v___jp_2215_;
}
}
else
{
size_t v___x_2241_; lean_object* v___x_2242_; 
v___x_2241_ = lean_usize_of_nat(v___x_2235_);
v___x_2242_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1(v___x_2233_, v___x_2234_, v___x_2202_, v___x_2241_, v___x_2237_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_);
lean_dec_ref(v___x_2234_);
v___y_2216_ = v_sz_2228_;
v___y_2217_ = v___x_2229_;
v___y_2218_ = v___x_2242_;
goto v___jp_2215_;
}
}
}
v___jp_2243_:
{
if (lean_obj_tag(v___y_2244_) == 0)
{
lean_dec_ref(v___y_2244_);
goto v___jp_2227_;
}
else
{
lean_object* v_a_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2252_; 
lean_dec(v_a_2204_);
v_a_2245_ = lean_ctor_get(v___y_2244_, 0);
v_isSharedCheck_2252_ = !lean_is_exclusive(v___y_2244_);
if (v_isSharedCheck_2252_ == 0)
{
v___x_2247_ = v___y_2244_;
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_a_2245_);
lean_dec(v___y_2244_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v___x_2250_; 
if (v_isShared_2248_ == 0)
{
v___x_2250_ = v___x_2247_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v_a_2245_);
v___x_2250_ = v_reuseFailAlloc_2251_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
return v___x_2250_;
}
}
}
}
}
else
{
lean_object* v_a_2261_; lean_object* v___x_2263_; uint8_t v_isShared_2264_; uint8_t v_isSharedCheck_2268_; 
v_a_2261_ = lean_ctor_get(v___x_2203_, 0);
v_isSharedCheck_2268_ = !lean_is_exclusive(v___x_2203_);
if (v_isSharedCheck_2268_ == 0)
{
v___x_2263_ = v___x_2203_;
v_isShared_2264_ = v_isSharedCheck_2268_;
goto v_resetjp_2262_;
}
else
{
lean_inc(v_a_2261_);
lean_dec(v___x_2203_);
v___x_2263_ = lean_box(0);
v_isShared_2264_ = v_isSharedCheck_2268_;
goto v_resetjp_2262_;
}
v_resetjp_2262_:
{
lean_object* v___x_2266_; 
if (v_isShared_2264_ == 0)
{
v___x_2266_ = v___x_2263_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v_a_2261_);
v___x_2266_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
return v___x_2266_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryTypeND___boxed(lean_object* v_types_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_){
_start:
{
lean_object* v_res_2275_; 
v_res_2275_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryTypeND(v_types_2269_, v_a_2270_, v_a_2271_, v_a_2272_, v_a_2273_);
lean_dec(v_a_2273_);
lean_dec_ref(v_a_2272_);
lean_dec(v_a_2271_);
lean_dec_ref(v_a_2270_);
return v_res_2275_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__0(void){
_start:
{
lean_object* v___x_2276_; 
v___x_2276_ = lean_mk_string_unchecked("Mutual.casesOn: no alternatives", 31, 31);
return v___x_2276_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__1(void){
_start:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2277_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__0);
v___x_2278_ = l_Lean_stringToMessageData(v___x_2277_);
return v___x_2278_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__2(void){
_start:
{
lean_object* v___x_2279_; 
v___x_2279_ = lean_mk_string_unchecked("Mutual.casesOn: Expected PSum type, got ", 40, 40);
return v___x_2279_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__3(void){
_start:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; 
v___x_2280_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__2, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__2_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__2);
v___x_2281_ = l_Lean_stringToMessageData(v___x_2280_);
return v___x_2281_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___lam__0___boxed(lean_object* v___x_2282_, lean_object* v___x_2283_, lean_object* v_arg_2284_, lean_object* v_arg_2285_, lean_object* v___x_2286_, lean_object* v_a_2287_, lean_object* v_tail_2288_, lean_object* v___x_2289_, lean_object* v___x_2290_, lean_object* v___x_2291_, lean_object* v_y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_){
_start:
{
uint8_t v___x_3071__boxed_2298_; uint8_t v___x_3072__boxed_2299_; uint8_t v___x_3073__boxed_2300_; lean_object* v_res_2301_; 
v___x_3071__boxed_2298_ = lean_unbox(v___x_2289_);
v___x_3072__boxed_2299_ = lean_unbox(v___x_2290_);
v___x_3073__boxed_2300_ = lean_unbox(v___x_2291_);
v_res_2301_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___lam__0(v___x_2282_, v___x_2283_, v_arg_2284_, v_arg_2285_, v___x_2286_, v_a_2287_, v_tail_2288_, v___x_3071__boxed_2298_, v___x_3072__boxed_2299_, v___x_3073__boxed_2300_, v_y_2292_, v___y_2293_, v___y_2294_, v___y_2295_, v___y_2296_);
lean_dec(v___y_2296_);
lean_dec_ref(v___y_2295_);
lean_dec(v___y_2294_);
lean_dec_ref(v___y_2293_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn(lean_object* v_x_2302_, lean_object* v_codomain_2303_, lean_object* v_alts_2304_, lean_object* v_a_2305_, lean_object* v_a_2306_, lean_object* v_a_2307_, lean_object* v_a_2308_){
_start:
{
if (lean_obj_tag(v_alts_2304_) == 0)
{
lean_object* v___x_2310_; lean_object* v___x_2311_; 
lean_dec_ref(v_codomain_2303_);
lean_dec_ref(v_x_2302_);
v___x_2310_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__1);
v___x_2311_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_2310_, v_a_2305_, v_a_2306_, v_a_2307_, v_a_2308_);
return v___x_2311_;
}
else
{
lean_object* v_tail_2312_; 
v_tail_2312_ = lean_ctor_get(v_alts_2304_, 1);
if (lean_obj_tag(v_tail_2312_) == 0)
{
lean_object* v_head_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; 
lean_dec_ref(v_codomain_2303_);
v_head_2313_ = lean_ctor_get(v_alts_2304_, 0);
lean_inc(v_head_2313_);
lean_dec_ref(v_alts_2304_);
v___x_2314_ = lean_unsigned_to_nat(1u);
v___x_2315_ = lean_mk_empty_array_with_capacity(v___x_2314_);
v___x_2316_ = lean_array_push(v___x_2315_, v_x_2302_);
v___x_2317_ = l_Lean_Expr_beta(v_head_2313_, v___x_2316_);
v___x_2318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2317_);
return v___x_2318_;
}
else
{
lean_object* v_head_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2404_; 
lean_inc(v_tail_2312_);
v_head_2319_ = lean_ctor_get(v_alts_2304_, 0);
v_isSharedCheck_2404_ = !lean_is_exclusive(v_alts_2304_);
if (v_isSharedCheck_2404_ == 0)
{
lean_object* v_unused_2405_; 
v_unused_2405_ = lean_ctor_get(v_alts_2304_, 1);
lean_dec(v_unused_2405_);
v___x_2321_ = v_alts_2304_;
v_isShared_2322_ = v_isSharedCheck_2404_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_head_2319_);
lean_dec(v_alts_2304_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2404_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v___x_2323_; 
lean_inc(v_a_2308_);
lean_inc_ref(v_a_2307_);
lean_inc(v_a_2306_);
lean_inc_ref(v_a_2305_);
lean_inc_ref(v_x_2302_);
v___x_2323_ = lean_infer_type(v_x_2302_, v_a_2305_, v_a_2306_, v_a_2307_, v_a_2308_);
if (lean_obj_tag(v___x_2323_) == 0)
{
lean_object* v_a_2324_; lean_object* v___x_2325_; 
v_a_2324_ = lean_ctor_get(v___x_2323_, 0);
lean_inc_n(v_a_2324_, 2);
lean_dec_ref(v___x_2323_);
v___x_2325_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_2324_, v_a_2306_, v_a_2308_);
if (lean_obj_tag(v___x_2325_) == 0)
{
lean_object* v_a_2326_; lean_object* v___y_2328_; lean_object* v___y_2329_; lean_object* v___y_2330_; lean_object* v___y_2331_; lean_object* v___x_2336_; uint8_t v___x_2337_; 
v_a_2326_ = lean_ctor_get(v___x_2325_, 0);
lean_inc(v_a_2326_);
lean_dec_ref(v___x_2325_);
v___x_2336_ = l_Lean_Expr_cleanupAnnotations(v_a_2326_);
v___x_2337_ = l_Lean_Expr_isApp(v___x_2336_);
if (v___x_2337_ == 0)
{
lean_dec_ref(v___x_2336_);
lean_del_object(v___x_2321_);
lean_dec(v_head_2319_);
lean_dec(v_tail_2312_);
lean_dec_ref(v_codomain_2303_);
lean_dec_ref(v_x_2302_);
v___y_2328_ = v_a_2305_;
v___y_2329_ = v_a_2306_;
v___y_2330_ = v_a_2307_;
v___y_2331_ = v_a_2308_;
goto v___jp_2327_;
}
else
{
lean_object* v_arg_2338_; lean_object* v___x_2339_; uint8_t v___x_2340_; 
v_arg_2338_ = lean_ctor_get(v___x_2336_, 1);
lean_inc_ref(v_arg_2338_);
v___x_2339_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2336_);
v___x_2340_ = l_Lean_Expr_isApp(v___x_2339_);
if (v___x_2340_ == 0)
{
lean_dec_ref(v___x_2339_);
lean_dec_ref(v_arg_2338_);
lean_del_object(v___x_2321_);
lean_dec(v_head_2319_);
lean_dec(v_tail_2312_);
lean_dec_ref(v_codomain_2303_);
lean_dec_ref(v_x_2302_);
v___y_2328_ = v_a_2305_;
v___y_2329_ = v_a_2306_;
v___y_2330_ = v_a_2307_;
v___y_2331_ = v_a_2308_;
goto v___jp_2327_;
}
else
{
lean_object* v_arg_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; uint8_t v___x_2345_; 
v_arg_2341_ = lean_ctor_get(v___x_2339_, 1);
lean_inc_ref(v_arg_2341_);
v___x_2342_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2339_);
v___x_2343_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0);
v___x_2344_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1);
v___x_2345_ = l_Lean_Expr_isConstOf(v___x_2342_, v___x_2344_);
lean_dec_ref(v___x_2342_);
if (v___x_2345_ == 0)
{
lean_dec_ref(v_arg_2341_);
lean_dec_ref(v_arg_2338_);
lean_del_object(v___x_2321_);
lean_dec(v_head_2319_);
lean_dec(v_tail_2312_);
lean_dec_ref(v_codomain_2303_);
lean_dec_ref(v_x_2302_);
v___y_2328_ = v_a_2305_;
v___y_2329_ = v_a_2306_;
v___y_2330_ = v_a_2307_;
v___y_2331_ = v_a_2308_;
goto v___jp_2327_;
}
else
{
lean_object* v___x_2346_; 
lean_inc_ref(v_codomain_2303_);
v___x_2346_ = l_Lean_Meta_getLevel(v_codomain_2303_, v_a_2305_, v_a_2306_, v_a_2307_, v_a_2308_);
if (lean_obj_tag(v___x_2346_) == 0)
{
lean_object* v_a_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; uint8_t v___x_2351_; uint8_t v___x_2352_; lean_object* v___x_2353_; 
v_a_2347_ = lean_ctor_get(v___x_2346_, 0);
lean_inc(v_a_2347_);
lean_dec_ref(v___x_2346_);
v___x_2348_ = lean_unsigned_to_nat(1u);
v___x_2349_ = lean_mk_empty_array_with_capacity(v___x_2348_);
lean_inc_ref(v_x_2302_);
lean_inc_ref(v___x_2349_);
v___x_2350_ = lean_array_push(v___x_2349_, v_x_2302_);
v___x_2351_ = 0;
v___x_2352_ = 1;
v___x_2353_ = l_Lean_Meta_mkLambdaFVars(v___x_2350_, v_codomain_2303_, v___x_2351_, v___x_2345_, v___x_2351_, v___x_2345_, v___x_2352_, v_a_2305_, v_a_2306_, v_a_2307_, v_a_2308_);
lean_dec_ref(v___x_2350_);
if (lean_obj_tag(v___x_2353_) == 0)
{
lean_object* v_a_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2395_; 
v_a_2354_ = lean_ctor_get(v___x_2353_, 0);
v_isSharedCheck_2395_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2395_ == 0)
{
v___x_2356_ = v___x_2353_;
v_isShared_2357_ = v_isSharedCheck_2395_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_a_2354_);
lean_dec(v___x_2353_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2395_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v_alt_u2082_2361_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___f_2374_; lean_object* v___y_2376_; lean_object* v___y_2377_; lean_object* v___y_2378_; lean_object* v___y_2379_; 
v___x_2358_ = l_Lean_Expr_getAppFn(v_a_2324_);
lean_dec(v_a_2324_);
v___x_2359_ = l_Lean_Expr_constLevels_x21(v___x_2358_);
lean_dec_ref(v___x_2358_);
v___x_2371_ = lean_box(v___x_2351_);
v___x_2372_ = lean_box(v___x_2345_);
v___x_2373_ = lean_box(v___x_2352_);
lean_inc(v_tail_2312_);
lean_inc(v_a_2354_);
lean_inc_ref(v_arg_2338_);
lean_inc_ref(v_arg_2341_);
lean_inc(v___x_2359_);
v___f_2374_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___lam__0___boxed), 16, 10);
lean_closure_set(v___f_2374_, 0, v___x_2343_);
lean_closure_set(v___f_2374_, 1, v___x_2359_);
lean_closure_set(v___f_2374_, 2, v_arg_2341_);
lean_closure_set(v___f_2374_, 3, v_arg_2338_);
lean_closure_set(v___f_2374_, 4, v___x_2349_);
lean_closure_set(v___f_2374_, 5, v_a_2354_);
lean_closure_set(v___f_2374_, 6, v_tail_2312_);
lean_closure_set(v___f_2374_, 7, v___x_2371_);
lean_closure_set(v___f_2374_, 8, v___x_2372_);
lean_closure_set(v___f_2374_, 9, v___x_2373_);
if (lean_obj_tag(v_tail_2312_) == 1)
{
lean_object* v_tail_2393_; 
v_tail_2393_ = lean_ctor_get(v_tail_2312_, 1);
if (lean_obj_tag(v_tail_2393_) == 0)
{
lean_object* v_head_2394_; 
lean_dec_ref(v___f_2374_);
v_head_2394_ = lean_ctor_get(v_tail_2312_, 0);
lean_inc(v_head_2394_);
lean_dec_ref(v_tail_2312_);
v_alt_u2082_2361_ = v_head_2394_;
goto v___jp_2360_;
}
else
{
lean_dec_ref(v_tail_2312_);
v___y_2376_ = v_a_2305_;
v___y_2377_ = v_a_2306_;
v___y_2378_ = v_a_2307_;
v___y_2379_ = v_a_2308_;
goto v___jp_2375_;
}
}
else
{
lean_dec(v_tail_2312_);
v___y_2376_ = v_a_2305_;
v___y_2377_ = v_a_2306_;
v___y_2378_ = v_a_2307_;
v___y_2379_ = v_a_2308_;
goto v___jp_2375_;
}
v___jp_2360_:
{
lean_object* v___x_2362_; lean_object* v___x_2364_; 
v___x_2362_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__3, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__3_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__3);
if (v_isShared_2322_ == 0)
{
lean_ctor_set(v___x_2321_, 1, v___x_2359_);
lean_ctor_set(v___x_2321_, 0, v_a_2347_);
v___x_2364_ = v___x_2321_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v_a_2347_);
lean_ctor_set(v_reuseFailAlloc_2370_, 1, v___x_2359_);
v___x_2364_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2368_; 
v___x_2365_ = l_Lean_Expr_const___override(v___x_2362_, v___x_2364_);
v___x_2366_ = l_Lean_mkApp6(v___x_2365_, v_arg_2341_, v_arg_2338_, v_a_2354_, v_x_2302_, v_head_2319_, v_alt_u2082_2361_);
if (v_isShared_2357_ == 0)
{
lean_ctor_set(v___x_2356_, 0, v___x_2366_);
v___x_2368_ = v___x_2356_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v___x_2366_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
return v___x_2368_;
}
}
}
v___jp_2375_:
{
lean_object* v___x_2380_; lean_object* v___x_2381_; 
v___x_2380_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4, &l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4);
v___x_2381_ = l_Lean_Core_mkFreshUserName(v___x_2380_, v___y_2378_, v___y_2379_);
if (lean_obj_tag(v___x_2381_) == 0)
{
lean_object* v_a_2382_; lean_object* v___x_2383_; 
v_a_2382_ = lean_ctor_get(v___x_2381_, 0);
lean_inc(v_a_2382_);
lean_dec_ref(v___x_2381_);
lean_inc_ref(v_arg_2338_);
v___x_2383_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_a_2382_, v_arg_2338_, v___f_2374_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_);
if (lean_obj_tag(v___x_2383_) == 0)
{
lean_object* v_a_2384_; 
v_a_2384_ = lean_ctor_get(v___x_2383_, 0);
lean_inc(v_a_2384_);
lean_dec_ref(v___x_2383_);
v_alt_u2082_2361_ = v_a_2384_;
goto v___jp_2360_;
}
else
{
lean_dec(v___x_2359_);
lean_del_object(v___x_2356_);
lean_dec(v_a_2354_);
lean_dec(v_a_2347_);
lean_dec_ref(v_arg_2341_);
lean_dec_ref(v_arg_2338_);
lean_del_object(v___x_2321_);
lean_dec(v_head_2319_);
lean_dec_ref(v_x_2302_);
return v___x_2383_;
}
}
else
{
lean_object* v_a_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2392_; 
lean_dec_ref(v___f_2374_);
lean_dec(v___x_2359_);
lean_del_object(v___x_2356_);
lean_dec(v_a_2354_);
lean_dec(v_a_2347_);
lean_dec_ref(v_arg_2341_);
lean_dec_ref(v_arg_2338_);
lean_del_object(v___x_2321_);
lean_dec(v_head_2319_);
lean_dec_ref(v_x_2302_);
v_a_2385_ = lean_ctor_get(v___x_2381_, 0);
v_isSharedCheck_2392_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2392_ == 0)
{
v___x_2387_ = v___x_2381_;
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_a_2385_);
lean_dec(v___x_2381_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2390_; 
if (v_isShared_2388_ == 0)
{
v___x_2390_ = v___x_2387_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v_a_2385_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_2349_);
lean_dec(v_a_2347_);
lean_dec_ref(v_arg_2341_);
lean_dec_ref(v_arg_2338_);
lean_dec(v_a_2324_);
lean_del_object(v___x_2321_);
lean_dec(v_head_2319_);
lean_dec(v_tail_2312_);
lean_dec_ref(v_x_2302_);
return v___x_2353_;
}
}
else
{
lean_object* v_a_2396_; lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2403_; 
lean_dec_ref(v_arg_2341_);
lean_dec_ref(v_arg_2338_);
lean_dec(v_a_2324_);
lean_del_object(v___x_2321_);
lean_dec(v_head_2319_);
lean_dec(v_tail_2312_);
lean_dec_ref(v_codomain_2303_);
lean_dec_ref(v_x_2302_);
v_a_2396_ = lean_ctor_get(v___x_2346_, 0);
v_isSharedCheck_2403_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2403_ == 0)
{
v___x_2398_ = v___x_2346_;
v_isShared_2399_ = v_isSharedCheck_2403_;
goto v_resetjp_2397_;
}
else
{
lean_inc(v_a_2396_);
lean_dec(v___x_2346_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2403_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
lean_object* v___x_2401_; 
if (v_isShared_2399_ == 0)
{
v___x_2401_ = v___x_2398_;
goto v_reusejp_2400_;
}
else
{
lean_object* v_reuseFailAlloc_2402_; 
v_reuseFailAlloc_2402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2402_, 0, v_a_2396_);
v___x_2401_ = v_reuseFailAlloc_2402_;
goto v_reusejp_2400_;
}
v_reusejp_2400_:
{
return v___x_2401_;
}
}
}
}
}
}
v___jp_2327_:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2332_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__3, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__3_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__3);
v___x_2333_ = l_Lean_MessageData_ofExpr(v_a_2324_);
v___x_2334_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2332_);
lean_ctor_set(v___x_2334_, 1, v___x_2333_);
v___x_2335_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_2334_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
return v___x_2335_;
}
}
else
{
lean_dec(v_a_2324_);
lean_del_object(v___x_2321_);
lean_dec(v_head_2319_);
lean_dec(v_tail_2312_);
lean_dec_ref(v_codomain_2303_);
lean_dec_ref(v_x_2302_);
return v___x_2325_;
}
}
else
{
lean_del_object(v___x_2321_);
lean_dec(v_head_2319_);
lean_dec(v_tail_2312_);
lean_dec_ref(v_codomain_2303_);
lean_dec_ref(v_x_2302_);
return v___x_2323_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___lam__0(lean_object* v___x_2406_, lean_object* v___x_2407_, lean_object* v_arg_2408_, lean_object* v_arg_2409_, lean_object* v___x_2410_, lean_object* v_a_2411_, lean_object* v_tail_2412_, uint8_t v___x_2413_, uint8_t v___x_2414_, uint8_t v___x_2415_, lean_object* v_y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_){
_start:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; 
v___x_2422_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__3, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__3);
v___x_2423_ = l_Lean_Name_mkStr2(v___x_2406_, v___x_2422_);
v___x_2424_ = l_Lean_Expr_const___override(v___x_2423_, v___x_2407_);
lean_inc_ref_n(v_y_2416_, 2);
v___x_2425_ = l_Lean_mkApp3(v___x_2424_, v_arg_2408_, v_arg_2409_, v_y_2416_);
lean_inc_ref(v___x_2410_);
v___x_2426_ = lean_array_push(v___x_2410_, v___x_2425_);
v___x_2427_ = l_Lean_Expr_beta(v_a_2411_, v___x_2426_);
v___x_2428_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn(v_y_2416_, v___x_2427_, v_tail_2412_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_);
if (lean_obj_tag(v___x_2428_) == 0)
{
lean_object* v_a_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; 
v_a_2429_ = lean_ctor_get(v___x_2428_, 0);
lean_inc(v_a_2429_);
lean_dec_ref(v___x_2428_);
v___x_2430_ = lean_array_push(v___x_2410_, v_y_2416_);
v___x_2431_ = l_Lean_Meta_mkLambdaFVars(v___x_2430_, v_a_2429_, v___x_2413_, v___x_2414_, v___x_2413_, v___x_2414_, v___x_2415_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_);
lean_dec_ref(v___x_2430_);
return v___x_2431_;
}
else
{
lean_dec_ref(v_y_2416_);
lean_dec_ref(v___x_2410_);
return v___x_2428_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___boxed(lean_object* v_x_2432_, lean_object* v_codomain_2433_, lean_object* v_alts_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_, lean_object* v_a_2438_, lean_object* v_a_2439_){
_start:
{
lean_object* v_res_2440_; 
v_res_2440_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn(v_x_2432_, v_codomain_2433_, v_alts_2434_, v_a_2435_, v_a_2436_, v_a_2437_, v_a_2438_);
lean_dec(v_a_2438_);
lean_dec_ref(v_a_2437_);
lean_dec(v_a_2436_);
lean_dec_ref(v_a_2435_);
return v_res_2440_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2441_; 
v___x_2441_ = lean_mk_string_unchecked("Lean.Meta.ArgsPacker.Mutual.uncurryWithType", 43, 43);
return v___x_2441_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; 
v___x_2442_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1, &l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1);
v___x_2443_ = lean_unsigned_to_nat(21u);
v___x_2444_ = lean_unsigned_to_nat(414u);
v___x_2445_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__0, &l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__0);
v___x_2446_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0);
v___x_2447_ = l_mkPanicMessageWithDecl(v___x_2446_, v___x_2445_, v___x_2444_, v___x_2443_, v___x_2442_);
return v___x_2447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0(lean_object* v___x_2448_, lean_object* v_es_2449_, lean_object* v_xs_2450_, lean_object* v_codomain_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_){
_start:
{
lean_object* v___x_2457_; uint8_t v___x_2458_; 
v___x_2457_ = lean_array_get_size(v_xs_2450_);
v___x_2458_ = lean_nat_dec_eq(v___x_2457_, v___x_2448_);
if (v___x_2458_ == 0)
{
lean_object* v___x_2459_; lean_object* v___x_2460_; 
lean_dec_ref(v_codomain_2451_);
lean_dec_ref(v_es_2449_);
v___x_2459_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__1, &l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__1_once, _init_l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__1);
v___x_2460_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v___x_2459_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_);
return v___x_2460_;
}
else
{
lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___x_2461_ = lean_unsigned_to_nat(0u);
v___x_2462_ = lean_array_fget_borrowed(v_xs_2450_, v___x_2461_);
v___x_2463_ = lean_array_to_list(v_es_2449_);
lean_inc(v___x_2462_);
v___x_2464_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn(v___x_2462_, v_codomain_2451_, v___x_2463_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_);
if (lean_obj_tag(v___x_2464_) == 0)
{
lean_object* v_a_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; uint8_t v___x_2468_; uint8_t v___x_2469_; lean_object* v___x_2470_; 
v_a_2465_ = lean_ctor_get(v___x_2464_, 0);
lean_inc(v_a_2465_);
lean_dec_ref(v___x_2464_);
v___x_2466_ = lean_mk_empty_array_with_capacity(v___x_2448_);
lean_inc(v___x_2462_);
v___x_2467_ = lean_array_push(v___x_2466_, v___x_2462_);
v___x_2468_ = 0;
v___x_2469_ = 1;
v___x_2470_ = l_Lean_Meta_mkLambdaFVars(v___x_2467_, v_a_2465_, v___x_2468_, v___x_2458_, v___x_2468_, v___x_2458_, v___x_2469_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_);
lean_dec_ref(v___x_2467_);
return v___x_2470_;
}
else
{
return v___x_2464_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___boxed(lean_object* v___x_2471_, lean_object* v_es_2472_, lean_object* v_xs_2473_, lean_object* v_codomain_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_){
_start:
{
lean_object* v_res_2480_; 
v_res_2480_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0(v___x_2471_, v_es_2472_, v_xs_2473_, v_codomain_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_);
lean_dec(v___y_2478_);
lean_dec_ref(v___y_2477_);
lean_dec(v___y_2476_);
lean_dec_ref(v___y_2475_);
lean_dec_ref(v_xs_2473_);
lean_dec(v___x_2471_);
return v_res_2480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType(lean_object* v_resultType_2481_, lean_object* v_es_2482_, lean_object* v_a_2483_, lean_object* v_a_2484_, lean_object* v_a_2485_, lean_object* v_a_2486_){
_start:
{
lean_object* v___x_2488_; lean_object* v___f_2489_; lean_object* v___x_2490_; uint8_t v___x_2491_; lean_object* v___x_2492_; 
v___x_2488_ = lean_unsigned_to_nat(1u);
v___f_2489_ = lean_alloc_closure((void*)(l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2489_, 0, v___x_2488_);
lean_closure_set(v___f_2489_, 1, v_es_2482_);
v___x_2490_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0, &l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0);
v___x_2491_ = 0;
v___x_2492_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(v_resultType_2481_, v___x_2490_, v___f_2489_, v___x_2491_, v___x_2491_, v_a_2483_, v_a_2484_, v_a_2485_, v_a_2486_);
return v___x_2492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___boxed(lean_object* v_resultType_2493_, lean_object* v_es_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_){
_start:
{
lean_object* v_res_2500_; 
v_res_2500_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType(v_resultType_2493_, v_es_2494_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_);
lean_dec(v_a_2498_);
lean_dec_ref(v_a_2497_);
lean_dec(v_a_2496_);
lean_dec_ref(v_a_2495_);
return v_res_2500_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurry_spec__0(size_t v_sz_2501_, size_t v_i_2502_, lean_object* v_bs_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_){
_start:
{
uint8_t v___x_2509_; 
v___x_2509_ = lean_usize_dec_lt(v_i_2502_, v_sz_2501_);
if (v___x_2509_ == 0)
{
lean_object* v___x_2510_; 
v___x_2510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2510_, 0, v_bs_2503_);
return v___x_2510_;
}
else
{
lean_object* v_v_2511_; lean_object* v___x_2512_; 
v_v_2511_ = lean_array_uget_borrowed(v_bs_2503_, v_i_2502_);
lean_inc(v___y_2507_);
lean_inc_ref(v___y_2506_);
lean_inc(v___y_2505_);
lean_inc_ref(v___y_2504_);
lean_inc(v_v_2511_);
v___x_2512_ = lean_infer_type(v_v_2511_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_);
if (lean_obj_tag(v___x_2512_) == 0)
{
lean_object* v_a_2513_; lean_object* v___x_2514_; lean_object* v_bs_x27_2515_; size_t v___x_2516_; size_t v___x_2517_; lean_object* v___x_2518_; 
v_a_2513_ = lean_ctor_get(v___x_2512_, 0);
lean_inc(v_a_2513_);
lean_dec_ref(v___x_2512_);
v___x_2514_ = lean_unsigned_to_nat(0u);
v_bs_x27_2515_ = lean_array_uset(v_bs_2503_, v_i_2502_, v___x_2514_);
v___x_2516_ = ((size_t)1ULL);
v___x_2517_ = lean_usize_add(v_i_2502_, v___x_2516_);
v___x_2518_ = lean_array_uset(v_bs_x27_2515_, v_i_2502_, v_a_2513_);
v_i_2502_ = v___x_2517_;
v_bs_2503_ = v___x_2518_;
goto _start;
}
else
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2527_; 
lean_dec_ref(v_bs_2503_);
v_a_2520_ = lean_ctor_get(v___x_2512_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2512_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2522_ = v___x_2512_;
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v___x_2512_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2525_; 
if (v_isShared_2523_ == 0)
{
v___x_2525_ = v___x_2522_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_a_2520_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurry_spec__0___boxed(lean_object* v_sz_2528_, lean_object* v_i_2529_, lean_object* v_bs_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_){
_start:
{
size_t v_sz_boxed_2536_; size_t v_i_boxed_2537_; lean_object* v_res_2538_; 
v_sz_boxed_2536_ = lean_unbox_usize(v_sz_2528_);
lean_dec(v_sz_2528_);
v_i_boxed_2537_ = lean_unbox_usize(v_i_2529_);
lean_dec(v_i_2529_);
v_res_2538_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurry_spec__0(v_sz_boxed_2536_, v_i_boxed_2537_, v_bs_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_);
lean_dec(v___y_2534_);
lean_dec_ref(v___y_2533_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurry(lean_object* v_es_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_, lean_object* v_a_2542_, lean_object* v_a_2543_){
_start:
{
size_t v_sz_2545_; size_t v___x_2546_; lean_object* v___x_2547_; 
v_sz_2545_ = lean_array_size(v_es_2539_);
v___x_2546_ = ((size_t)0ULL);
lean_inc_ref(v_es_2539_);
v___x_2547_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurry_spec__0(v_sz_2545_, v___x_2546_, v_es_2539_, v_a_2540_, v_a_2541_, v_a_2542_, v_a_2543_);
if (lean_obj_tag(v___x_2547_) == 0)
{
lean_object* v_a_2548_; lean_object* v___x_2549_; 
v_a_2548_ = lean_ctor_get(v___x_2547_, 0);
lean_inc(v_a_2548_);
lean_dec_ref(v___x_2547_);
v___x_2549_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryType(v_a_2548_, v_a_2540_, v_a_2541_, v_a_2542_, v_a_2543_);
if (lean_obj_tag(v___x_2549_) == 0)
{
lean_object* v_a_2550_; lean_object* v___x_2551_; 
v_a_2550_ = lean_ctor_get(v___x_2549_, 0);
lean_inc(v_a_2550_);
lean_dec_ref(v___x_2549_);
v___x_2551_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType(v_a_2550_, v_es_2539_, v_a_2540_, v_a_2541_, v_a_2542_, v_a_2543_);
return v___x_2551_;
}
else
{
lean_dec_ref(v_es_2539_);
return v___x_2549_;
}
}
else
{
lean_object* v_a_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2559_; 
lean_dec_ref(v_es_2539_);
v_a_2552_ = lean_ctor_get(v___x_2547_, 0);
v_isSharedCheck_2559_ = !lean_is_exclusive(v___x_2547_);
if (v_isSharedCheck_2559_ == 0)
{
v___x_2554_ = v___x_2547_;
v_isShared_2555_ = v_isSharedCheck_2559_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_a_2552_);
lean_dec(v___x_2547_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2559_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v___x_2557_; 
if (v_isShared_2555_ == 0)
{
v___x_2557_ = v___x_2554_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v_a_2552_);
v___x_2557_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
return v___x_2557_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurry___boxed(lean_object* v_es_2560_, lean_object* v_a_2561_, lean_object* v_a_2562_, lean_object* v_a_2563_, lean_object* v_a_2564_, lean_object* v_a_2565_){
_start:
{
lean_object* v_res_2566_; 
v_res_2566_ = l_Lean_Meta_ArgsPacker_Mutual_uncurry(v_es_2560_, v_a_2561_, v_a_2562_, v_a_2563_, v_a_2564_);
lean_dec(v_a_2564_);
lean_dec_ref(v_a_2563_);
lean_dec(v_a_2562_);
lean_dec_ref(v_a_2561_);
return v_res_2566_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2567_; 
v___x_2567_ = lean_mk_string_unchecked("Lean.Meta.ArgsPacker.Mutual.uncurryND", 37, 37);
return v___x_2567_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2568_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1, &l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1);
v___x_2569_ = lean_unsigned_to_nat(21u);
v___x_2570_ = lean_unsigned_to_nat(434u);
v___x_2571_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__0, &l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__0);
v___x_2572_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0);
v___x_2573_ = l_mkPanicMessageWithDecl(v___x_2572_, v___x_2571_, v___x_2570_, v___x_2569_, v___x_2568_);
return v___x_2573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0(lean_object* v___x_2574_, lean_object* v_es_2575_, lean_object* v_xs_2576_, lean_object* v_codomain_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_){
_start:
{
lean_object* v___x_2583_; uint8_t v___x_2584_; 
v___x_2583_ = lean_array_get_size(v_xs_2576_);
v___x_2584_ = lean_nat_dec_eq(v___x_2583_, v___x_2574_);
if (v___x_2584_ == 0)
{
lean_object* v___x_2585_; lean_object* v___x_2586_; 
lean_dec_ref(v_codomain_2577_);
lean_dec_ref(v_es_2575_);
v___x_2585_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__1, &l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__1_once, _init_l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__1);
v___x_2586_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v___x_2585_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_);
return v___x_2586_;
}
else
{
lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; 
v___x_2587_ = lean_unsigned_to_nat(0u);
v___x_2588_ = lean_array_fget_borrowed(v_xs_2576_, v___x_2587_);
v___x_2589_ = lean_array_to_list(v_es_2575_);
lean_inc(v___x_2588_);
v___x_2590_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn(v___x_2588_, v_codomain_2577_, v___x_2589_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_);
if (lean_obj_tag(v___x_2590_) == 0)
{
lean_object* v_a_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; uint8_t v___x_2594_; uint8_t v___x_2595_; lean_object* v___x_2596_; 
v_a_2591_ = lean_ctor_get(v___x_2590_, 0);
lean_inc(v_a_2591_);
lean_dec_ref(v___x_2590_);
v___x_2592_ = lean_mk_empty_array_with_capacity(v___x_2574_);
lean_inc(v___x_2588_);
v___x_2593_ = lean_array_push(v___x_2592_, v___x_2588_);
v___x_2594_ = 0;
v___x_2595_ = 1;
v___x_2596_ = l_Lean_Meta_mkLambdaFVars(v___x_2593_, v_a_2591_, v___x_2594_, v___x_2584_, v___x_2594_, v___x_2584_, v___x_2595_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_);
lean_dec_ref(v___x_2593_);
return v___x_2596_;
}
else
{
return v___x_2590_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___boxed(lean_object* v___x_2597_, lean_object* v_es_2598_, lean_object* v_xs_2599_, lean_object* v_codomain_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_){
_start:
{
lean_object* v_res_2606_; 
v_res_2606_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0(v___x_2597_, v_es_2598_, v_xs_2599_, v_codomain_2600_, v___y_2601_, v___y_2602_, v___y_2603_, v___y_2604_);
lean_dec(v___y_2604_);
lean_dec_ref(v___y_2603_);
lean_dec(v___y_2602_);
lean_dec_ref(v___y_2601_);
lean_dec_ref(v_xs_2599_);
lean_dec(v___x_2597_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND(lean_object* v_es_2607_, lean_object* v_a_2608_, lean_object* v_a_2609_, lean_object* v_a_2610_, lean_object* v_a_2611_){
_start:
{
size_t v_sz_2613_; size_t v___x_2614_; lean_object* v___x_2615_; 
v_sz_2613_ = lean_array_size(v_es_2607_);
v___x_2614_ = ((size_t)0ULL);
lean_inc_ref(v_es_2607_);
v___x_2615_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurry_spec__0(v_sz_2613_, v___x_2614_, v_es_2607_, v_a_2608_, v_a_2609_, v_a_2610_, v_a_2611_);
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v_a_2616_; lean_object* v___x_2617_; 
v_a_2616_ = lean_ctor_get(v___x_2615_, 0);
lean_inc(v_a_2616_);
lean_dec_ref(v___x_2615_);
v___x_2617_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryTypeND(v_a_2616_, v_a_2608_, v_a_2609_, v_a_2610_, v_a_2611_);
if (lean_obj_tag(v___x_2617_) == 0)
{
lean_object* v_a_2618_; lean_object* v___x_2619_; lean_object* v___f_2620_; lean_object* v___x_2621_; uint8_t v___x_2622_; lean_object* v___x_2623_; 
v_a_2618_ = lean_ctor_get(v___x_2617_, 0);
lean_inc(v_a_2618_);
lean_dec_ref(v___x_2617_);
v___x_2619_ = lean_unsigned_to_nat(1u);
v___f_2620_ = lean_alloc_closure((void*)(l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2620_, 0, v___x_2619_);
lean_closure_set(v___f_2620_, 1, v_es_2607_);
v___x_2621_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0, &l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0);
v___x_2622_ = 0;
v___x_2623_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(v_a_2618_, v___x_2621_, v___f_2620_, v___x_2622_, v___x_2622_, v_a_2608_, v_a_2609_, v_a_2610_, v_a_2611_);
return v___x_2623_;
}
else
{
lean_dec_ref(v_es_2607_);
return v___x_2617_;
}
}
else
{
lean_object* v_a_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2631_; 
lean_dec_ref(v_es_2607_);
v_a_2624_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2631_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2626_ = v___x_2615_;
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_a_2624_);
lean_dec(v___x_2615_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v___x_2629_; 
if (v_isShared_2627_ == 0)
{
v___x_2629_ = v___x_2626_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v_a_2624_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND___boxed(lean_object* v_es_2632_, lean_object* v_a_2633_, lean_object* v_a_2634_, lean_object* v_a_2635_, lean_object* v_a_2636_, lean_object* v_a_2637_){
_start:
{
lean_object* v_res_2638_; 
v_res_2638_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryND(v_es_2632_, v_a_2633_, v_a_2634_, v_a_2635_, v_a_2636_);
lean_dec(v_a_2636_);
lean_dec_ref(v_a_2635_);
lean_dec(v_a_2634_);
lean_dec_ref(v_a_2633_);
return v_res_2638_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg___lam__0(lean_object* v_a_2639_, lean_object* v_domain_2640_, lean_object* v_j_2641_, lean_object* v_type_2642_, uint8_t v_isZero_2643_, lean_object* v_x_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_){
_start:
{
lean_object* v___x_2650_; lean_object* v___x_2651_; 
v___x_2650_ = l_List_lengthTR___redArg(v_a_2639_);
lean_inc_ref(v_x_2644_);
v___x_2651_ = l_Lean_Meta_ArgsPacker_Mutual_pack(v___x_2650_, v_domain_2640_, v_j_2641_, v_x_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_);
lean_dec(v___x_2650_);
if (lean_obj_tag(v___x_2651_) == 0)
{
lean_object* v_a_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; 
v_a_2652_ = lean_ctor_get(v___x_2651_, 0);
lean_inc(v_a_2652_);
lean_dec_ref(v___x_2651_);
v___x_2653_ = lean_unsigned_to_nat(1u);
v___x_2654_ = lean_mk_empty_array_with_capacity(v___x_2653_);
lean_inc_ref(v___x_2654_);
v___x_2655_ = lean_array_push(v___x_2654_, v_a_2652_);
v___x_2656_ = l_Lean_Meta_instantiateForall(v_type_2642_, v___x_2655_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_);
lean_dec_ref(v___x_2655_);
if (lean_obj_tag(v___x_2656_) == 0)
{
lean_object* v_a_2657_; lean_object* v___x_2658_; uint8_t v___x_2659_; uint8_t v___x_2660_; lean_object* v___x_2661_; 
v_a_2657_ = lean_ctor_get(v___x_2656_, 0);
lean_inc(v_a_2657_);
lean_dec_ref(v___x_2656_);
v___x_2658_ = lean_array_push(v___x_2654_, v_x_2644_);
v___x_2659_ = 1;
v___x_2660_ = 1;
v___x_2661_ = l_Lean_Meta_mkForallFVars(v___x_2658_, v_a_2657_, v_isZero_2643_, v___x_2659_, v___x_2659_, v___x_2660_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_);
lean_dec_ref(v___x_2658_);
return v___x_2661_;
}
else
{
lean_dec_ref(v___x_2654_);
lean_dec_ref(v_x_2644_);
return v___x_2656_;
}
}
else
{
lean_dec_ref(v_x_2644_);
lean_dec_ref(v_type_2642_);
return v___x_2651_;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg___lam__0___boxed(lean_object* v_a_2662_, lean_object* v_domain_2663_, lean_object* v_j_2664_, lean_object* v_type_2665_, lean_object* v_isZero_2666_, lean_object* v_x_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_){
_start:
{
uint8_t v_isZero_boxed_2673_; lean_object* v_res_2674_; 
v_isZero_boxed_2673_ = lean_unbox(v_isZero_2666_);
v_res_2674_ = l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg___lam__0(v_a_2662_, v_domain_2663_, v_j_2664_, v_type_2665_, v_isZero_boxed_2673_, v_x_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_);
lean_dec(v___y_2671_);
lean_dec_ref(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v_j_2664_);
lean_dec(v_a_2662_);
return v_res_2674_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg(lean_object* v_a_2675_, lean_object* v_domain_2676_, lean_object* v_type_2677_, lean_object* v_as_2678_, lean_object* v_i_2679_, lean_object* v_j_2680_, lean_object* v_bs_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_){
_start:
{
lean_object* v_zero_2687_; uint8_t v_isZero_2688_; 
v_zero_2687_ = lean_unsigned_to_nat(0u);
v_isZero_2688_ = lean_nat_dec_eq(v_i_2679_, v_zero_2687_);
if (v_isZero_2688_ == 1)
{
lean_object* v___x_2689_; 
lean_dec(v_j_2680_);
lean_dec(v_i_2679_);
lean_dec_ref(v_type_2677_);
lean_dec_ref(v_domain_2676_);
lean_dec(v_a_2675_);
v___x_2689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2689_, 0, v_bs_2681_);
return v___x_2689_;
}
else
{
lean_object* v___x_2690_; lean_object* v___f_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2690_ = lean_box(v_isZero_2688_);
lean_inc_ref(v_type_2677_);
lean_inc(v_j_2680_);
lean_inc_ref(v_domain_2676_);
lean_inc(v_a_2675_);
v___f_2691_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_2691_, 0, v_a_2675_);
lean_closure_set(v___f_2691_, 1, v_domain_2676_);
lean_closure_set(v___f_2691_, 2, v_j_2680_);
lean_closure_set(v___f_2691_, 3, v_type_2677_);
lean_closure_set(v___f_2691_, 4, v___x_2690_);
v___x_2692_ = lean_array_fget_borrowed(v_as_2678_, v_j_2680_);
v___x_2693_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2, &l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2);
lean_inc(v___x_2692_);
v___x_2694_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v___x_2693_, v___x_2692_, v___f_2691_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v_a_2695_; lean_object* v_one_2696_; lean_object* v_n_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; 
v_a_2695_ = lean_ctor_get(v___x_2694_, 0);
lean_inc(v_a_2695_);
lean_dec_ref(v___x_2694_);
v_one_2696_ = lean_unsigned_to_nat(1u);
v_n_2697_ = lean_nat_sub(v_i_2679_, v_one_2696_);
lean_dec(v_i_2679_);
v___x_2698_ = lean_nat_add(v_j_2680_, v_one_2696_);
lean_dec(v_j_2680_);
v___x_2699_ = lean_array_push(v_bs_2681_, v_a_2695_);
v_i_2679_ = v_n_2697_;
v_j_2680_ = v___x_2698_;
v_bs_2681_ = v___x_2699_;
goto _start;
}
else
{
lean_object* v_a_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2708_; 
lean_dec_ref(v_bs_2681_);
lean_dec(v_j_2680_);
lean_dec(v_i_2679_);
lean_dec_ref(v_type_2677_);
lean_dec_ref(v_domain_2676_);
lean_dec(v_a_2675_);
v_a_2701_ = lean_ctor_get(v___x_2694_, 0);
v_isSharedCheck_2708_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2708_ == 0)
{
v___x_2703_ = v___x_2694_;
v_isShared_2704_ = v_isSharedCheck_2708_;
goto v_resetjp_2702_;
}
else
{
lean_inc(v_a_2701_);
lean_dec(v___x_2694_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2708_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
lean_object* v___x_2706_; 
if (v_isShared_2704_ == 0)
{
v___x_2706_ = v___x_2703_;
goto v_reusejp_2705_;
}
else
{
lean_object* v_reuseFailAlloc_2707_; 
v_reuseFailAlloc_2707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2707_, 0, v_a_2701_);
v___x_2706_ = v_reuseFailAlloc_2707_;
goto v_reusejp_2705_;
}
v_reusejp_2705_:
{
return v___x_2706_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg___boxed(lean_object* v_a_2709_, lean_object* v_domain_2710_, lean_object* v_type_2711_, lean_object* v_as_2712_, lean_object* v_i_2713_, lean_object* v_j_2714_, lean_object* v_bs_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_){
_start:
{
lean_object* v_res_2721_; 
v_res_2721_ = l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg(v_a_2709_, v_domain_2710_, v_type_2711_, v_as_2712_, v_i_2713_, v_j_2714_, v_bs_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_);
lean_dec(v___y_2719_);
lean_dec_ref(v___y_2718_);
lean_dec(v___y_2717_);
lean_dec_ref(v___y_2716_);
lean_dec_ref(v_as_2712_);
return v_res_2721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_curryType(lean_object* v_n_2722_, lean_object* v_type_2723_, lean_object* v_a_2724_, lean_object* v_a_2725_, lean_object* v_a_2726_, lean_object* v_a_2727_){
_start:
{
lean_object* v___y_2730_; lean_object* v___y_2731_; lean_object* v___y_2732_; lean_object* v___y_2733_; uint8_t v___x_2750_; 
v___x_2750_ = l_Lean_Expr_isForall(v_type_2723_);
if (v___x_2750_ == 0)
{
lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v_a_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2762_; 
v___x_2751_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1);
v___x_2752_ = l_Lean_MessageData_ofExpr(v_type_2723_);
v___x_2753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2751_);
lean_ctor_set(v___x_2753_, 1, v___x_2752_);
v___x_2754_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_2753_, v_a_2724_, v_a_2725_, v_a_2726_, v_a_2727_);
v_a_2755_ = lean_ctor_get(v___x_2754_, 0);
v_isSharedCheck_2762_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2762_ == 0)
{
v___x_2757_ = v___x_2754_;
v_isShared_2758_ = v_isSharedCheck_2762_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_a_2755_);
lean_dec(v___x_2754_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2762_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v___x_2760_; 
if (v_isShared_2758_ == 0)
{
v___x_2760_ = v___x_2757_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2761_; 
v_reuseFailAlloc_2761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2761_, 0, v_a_2755_);
v___x_2760_ = v_reuseFailAlloc_2761_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
return v___x_2760_;
}
}
}
else
{
v___y_2730_ = v_a_2724_;
v___y_2731_ = v_a_2725_;
v___y_2732_ = v_a_2726_;
v___y_2733_ = v_a_2727_;
goto v___jp_2729_;
}
v___jp_2729_:
{
lean_object* v_domain_2734_; lean_object* v___x_2735_; 
v_domain_2734_ = l_Lean_Expr_bindingDomain_x21(v_type_2723_);
lean_inc_ref(v_domain_2734_);
v___x_2735_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType(v_n_2722_, v_domain_2734_, v___y_2730_, v___y_2731_, v___y_2732_, v___y_2733_);
if (lean_obj_tag(v___x_2735_) == 0)
{
lean_object* v_a_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; 
v_a_2736_ = lean_ctor_get(v___x_2735_, 0);
lean_inc_n(v_a_2736_, 2);
lean_dec_ref(v___x_2735_);
v___x_2737_ = lean_array_mk(v_a_2736_);
v___x_2738_ = lean_array_get_size(v___x_2737_);
v___x_2739_ = lean_unsigned_to_nat(0u);
v___x_2740_ = lean_mk_empty_array_with_capacity(v___x_2738_);
v___x_2741_ = l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg(v_a_2736_, v_domain_2734_, v_type_2723_, v___x_2737_, v___x_2738_, v___x_2739_, v___x_2740_, v___y_2730_, v___y_2731_, v___y_2732_, v___y_2733_);
lean_dec_ref(v___x_2737_);
return v___x_2741_;
}
else
{
lean_object* v_a_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2749_; 
lean_dec_ref(v_domain_2734_);
lean_dec_ref(v_type_2723_);
v_a_2742_ = lean_ctor_get(v___x_2735_, 0);
v_isSharedCheck_2749_ = !lean_is_exclusive(v___x_2735_);
if (v_isSharedCheck_2749_ == 0)
{
v___x_2744_ = v___x_2735_;
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
else
{
lean_inc(v_a_2742_);
lean_dec(v___x_2735_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
lean_object* v___x_2747_; 
if (v_isShared_2745_ == 0)
{
v___x_2747_ = v___x_2744_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v_a_2742_);
v___x_2747_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
return v___x_2747_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_curryType___boxed(lean_object* v_n_2763_, lean_object* v_type_2764_, lean_object* v_a_2765_, lean_object* v_a_2766_, lean_object* v_a_2767_, lean_object* v_a_2768_, lean_object* v_a_2769_){
_start:
{
lean_object* v_res_2770_; 
v_res_2770_ = l_Lean_Meta_ArgsPacker_Mutual_curryType(v_n_2763_, v_type_2764_, v_a_2765_, v_a_2766_, v_a_2767_, v_a_2768_);
lean_dec(v_a_2768_);
lean_dec_ref(v_a_2767_);
lean_dec(v_a_2766_);
lean_dec_ref(v_a_2765_);
lean_dec(v_n_2763_);
return v_res_2770_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0(lean_object* v_a_2771_, lean_object* v_domain_2772_, lean_object* v_type_2773_, lean_object* v_as_2774_, lean_object* v_i_2775_, lean_object* v_j_2776_, lean_object* v_inv_2777_, lean_object* v_bs_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_){
_start:
{
lean_object* v___x_2784_; 
v___x_2784_ = l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg(v_a_2771_, v_domain_2772_, v_type_2773_, v_as_2774_, v_i_2775_, v_j_2776_, v_bs_2778_, v___y_2779_, v___y_2780_, v___y_2781_, v___y_2782_);
return v___x_2784_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___boxed(lean_object* v_a_2785_, lean_object* v_domain_2786_, lean_object* v_type_2787_, lean_object* v_as_2788_, lean_object* v_i_2789_, lean_object* v_j_2790_, lean_object* v_inv_2791_, lean_object* v_bs_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_){
_start:
{
lean_object* v_res_2798_; 
v_res_2798_ = l_Array_mapFinIdxM_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0(v_a_2785_, v_domain_2786_, v_type_2787_, v_as_2788_, v_i_2789_, v_j_2790_, v_inv_2791_, v_bs_2792_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_);
lean_dec(v___y_2796_);
lean_dec_ref(v___y_2795_);
lean_dec(v___y_2794_);
lean_dec_ref(v___y_2793_);
lean_dec_ref(v_as_2788_);
return v_res_2798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_numFuncs(lean_object* v_argsPacker_2799_){
_start:
{
lean_object* v___x_2800_; 
v___x_2800_ = lean_array_get_size(v_argsPacker_2799_);
return v___x_2800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_numFuncs___boxed(lean_object* v_argsPacker_2801_){
_start:
{
lean_object* v_res_2802_; 
v_res_2802_ = l_Lean_Meta_ArgsPacker_numFuncs(v_argsPacker_2801_);
lean_dec_ref(v_argsPacker_2801_);
return v_res_2802_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_arities_spec__0(size_t v_sz_2803_, size_t v_i_2804_, lean_object* v_bs_2805_){
_start:
{
uint8_t v___x_2806_; 
v___x_2806_ = lean_usize_dec_lt(v_i_2804_, v_sz_2803_);
if (v___x_2806_ == 0)
{
return v_bs_2805_;
}
else
{
lean_object* v_v_2807_; lean_object* v___x_2808_; lean_object* v_bs_x27_2809_; lean_object* v___x_2810_; size_t v___x_2811_; size_t v___x_2812_; lean_object* v___x_2813_; 
v_v_2807_ = lean_array_uget(v_bs_2805_, v_i_2804_);
v___x_2808_ = lean_unsigned_to_nat(0u);
v_bs_x27_2809_ = lean_array_uset(v_bs_2805_, v_i_2804_, v___x_2808_);
v___x_2810_ = lean_array_get_size(v_v_2807_);
lean_dec(v_v_2807_);
v___x_2811_ = ((size_t)1ULL);
v___x_2812_ = lean_usize_add(v_i_2804_, v___x_2811_);
v___x_2813_ = lean_array_uset(v_bs_x27_2809_, v_i_2804_, v___x_2810_);
v_i_2804_ = v___x_2812_;
v_bs_2805_ = v___x_2813_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_arities_spec__0___boxed(lean_object* v_sz_2815_, lean_object* v_i_2816_, lean_object* v_bs_2817_){
_start:
{
size_t v_sz_boxed_2818_; size_t v_i_boxed_2819_; lean_object* v_res_2820_; 
v_sz_boxed_2818_ = lean_unbox_usize(v_sz_2815_);
lean_dec(v_sz_2815_);
v_i_boxed_2819_ = lean_unbox_usize(v_i_2816_);
lean_dec(v_i_2816_);
v_res_2820_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_arities_spec__0(v_sz_boxed_2818_, v_i_boxed_2819_, v_bs_2817_);
return v_res_2820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_arities(lean_object* v_argsPacker_2821_){
_start:
{
size_t v_sz_2822_; size_t v___x_2823_; lean_object* v___x_2824_; 
v_sz_2822_ = lean_array_size(v_argsPacker_2821_);
v___x_2823_ = ((size_t)0ULL);
v___x_2824_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_arities_spec__0(v_sz_2822_, v___x_2823_, v_argsPacker_2821_);
return v___x_2824_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0(void){
_start:
{
lean_object* v___x_2825_; 
v___x_2825_ = l_Array_instInhabited(lean_box(0));
return v___x_2825_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_ArgsPacker_onlyOneUnary(lean_object* v_argsPacker_2826_){
_start:
{
lean_object* v___x_2827_; lean_object* v___x_2828_; uint8_t v___x_2829_; 
v___x_2827_ = lean_array_get_size(v_argsPacker_2826_);
v___x_2828_ = lean_unsigned_to_nat(1u);
v___x_2829_ = lean_nat_dec_eq(v___x_2827_, v___x_2828_);
if (v___x_2829_ == 0)
{
return v___x_2829_;
}
else
{
lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; uint8_t v___x_2834_; 
v___x_2830_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0, &l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0_once, _init_l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0);
v___x_2831_ = lean_unsigned_to_nat(0u);
v___x_2832_ = lean_array_get_borrowed(v___x_2830_, v_argsPacker_2826_, v___x_2831_);
v___x_2833_ = lean_array_get_size(v___x_2832_);
v___x_2834_ = lean_nat_dec_eq(v___x_2833_, v___x_2828_);
return v___x_2834_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_onlyOneUnary___boxed(lean_object* v_argsPacker_2835_){
_start:
{
uint8_t v_res_2836_; lean_object* v_r_2837_; 
v_res_2836_ = l_Lean_Meta_ArgsPacker_onlyOneUnary(v_argsPacker_2835_);
lean_dec_ref(v_argsPacker_2835_);
v_r_2837_ = lean_box(v_res_2836_);
return v_r_2837_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_pack___closed__0(void){
_start:
{
lean_object* v___x_2838_; 
v___x_2838_ = lean_mk_string_unchecked("Lean.Meta.ArgsPacker.pack", 25, 25);
return v___x_2838_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_pack___closed__1(void){
_start:
{
lean_object* v___x_2839_; 
v___x_2839_ = lean_mk_string_unchecked("assertion violation: fidx < argsPacker.numFuncs\n  ", 50, 50);
return v___x_2839_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_pack___closed__2(void){
_start:
{
lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2840_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_pack___closed__1, &l_Lean_Meta_ArgsPacker_pack___closed__1_once, _init_l_Lean_Meta_ArgsPacker_pack___closed__1);
v___x_2841_ = lean_unsigned_to_nat(2u);
v___x_2842_ = lean_unsigned_to_nat(469u);
v___x_2843_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_pack___closed__0, &l_Lean_Meta_ArgsPacker_pack___closed__0_once, _init_l_Lean_Meta_ArgsPacker_pack___closed__0);
v___x_2844_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0);
v___x_2845_ = l_mkPanicMessageWithDecl(v___x_2844_, v___x_2843_, v___x_2842_, v___x_2841_, v___x_2840_);
return v___x_2845_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_pack___closed__3(void){
_start:
{
lean_object* v___x_2846_; 
v___x_2846_ = lean_mk_string_unchecked("assertion violation: args.size == argsPacker.varNamess[fidx]!.size\n  ", 69, 69);
return v___x_2846_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_pack___closed__4(void){
_start:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; 
v___x_2847_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_pack___closed__3, &l_Lean_Meta_ArgsPacker_pack___closed__3_once, _init_l_Lean_Meta_ArgsPacker_pack___closed__3);
v___x_2848_ = lean_unsigned_to_nat(2u);
v___x_2849_ = lean_unsigned_to_nat(470u);
v___x_2850_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_pack___closed__0, &l_Lean_Meta_ArgsPacker_pack___closed__0_once, _init_l_Lean_Meta_ArgsPacker_pack___closed__0);
v___x_2851_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0);
v___x_2852_ = l_mkPanicMessageWithDecl(v___x_2851_, v___x_2850_, v___x_2849_, v___x_2848_, v___x_2847_);
return v___x_2852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_pack(lean_object* v_argsPacker_2853_, lean_object* v_domain_2854_, lean_object* v_fidx_2855_, lean_object* v_args_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_){
_start:
{
lean_object* v___x_2862_; uint8_t v___x_2863_; 
v___x_2862_ = lean_array_get_size(v_argsPacker_2853_);
v___x_2863_ = lean_nat_dec_lt(v_fidx_2855_, v___x_2862_);
if (v___x_2863_ == 0)
{
lean_object* v___x_2864_; lean_object* v___x_2865_; 
lean_dec(v_fidx_2855_);
lean_dec_ref(v_domain_2854_);
v___x_2864_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_pack___closed__2, &l_Lean_Meta_ArgsPacker_pack___closed__2_once, _init_l_Lean_Meta_ArgsPacker_pack___closed__2);
v___x_2865_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v___x_2864_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_);
return v___x_2865_;
}
else
{
lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; uint8_t v___x_2870_; 
v___x_2866_ = lean_array_get_size(v_args_2856_);
v___x_2867_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0, &l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0_once, _init_l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0);
v___x_2868_ = lean_array_get_borrowed(v___x_2867_, v_argsPacker_2853_, v_fidx_2855_);
v___x_2869_ = lean_array_get_size(v___x_2868_);
v___x_2870_ = lean_nat_dec_eq(v___x_2866_, v___x_2869_);
if (v___x_2870_ == 0)
{
lean_object* v___x_2871_; lean_object* v___x_2872_; 
lean_dec(v_fidx_2855_);
lean_dec_ref(v_domain_2854_);
v___x_2871_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_pack___closed__4, &l_Lean_Meta_ArgsPacker_pack___closed__4_once, _init_l_Lean_Meta_ArgsPacker_pack___closed__4);
v___x_2872_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v___x_2871_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_);
return v___x_2872_;
}
else
{
lean_object* v___x_2873_; 
lean_inc_ref(v_domain_2854_);
v___x_2873_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType(v___x_2862_, v_domain_2854_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_);
if (lean_obj_tag(v___x_2873_) == 0)
{
lean_object* v_a_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; 
v_a_2874_ = lean_ctor_get(v___x_2873_, 0);
lean_inc(v_a_2874_);
lean_dec_ref(v___x_2873_);
v___x_2875_ = l_Lean_instInhabitedExpr;
lean_inc(v_fidx_2855_);
v___x_2876_ = l_List_get_x21Internal___redArg(v___x_2875_, v_a_2874_, v_fidx_2855_);
lean_dec(v_a_2874_);
v___x_2877_ = l_Lean_Meta_ArgsPacker_Unary_pack(v___x_2876_, v_args_2856_);
lean_dec(v___x_2876_);
v___x_2878_ = l_Lean_Meta_ArgsPacker_Mutual_pack(v___x_2862_, v_domain_2854_, v_fidx_2855_, v___x_2877_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_);
lean_dec(v_fidx_2855_);
return v___x_2878_;
}
else
{
lean_object* v_a_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2886_; 
lean_dec(v_fidx_2855_);
lean_dec_ref(v_domain_2854_);
v_a_2879_ = lean_ctor_get(v___x_2873_, 0);
v_isSharedCheck_2886_ = !lean_is_exclusive(v___x_2873_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2881_ = v___x_2873_;
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
else
{
lean_inc(v_a_2879_);
lean_dec(v___x_2873_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
lean_object* v___x_2884_; 
if (v_isShared_2882_ == 0)
{
v___x_2884_ = v___x_2881_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_a_2879_);
v___x_2884_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
return v___x_2884_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_pack___boxed(lean_object* v_argsPacker_2887_, lean_object* v_domain_2888_, lean_object* v_fidx_2889_, lean_object* v_args_2890_, lean_object* v_a_2891_, lean_object* v_a_2892_, lean_object* v_a_2893_, lean_object* v_a_2894_, lean_object* v_a_2895_){
_start:
{
lean_object* v_res_2896_; 
v_res_2896_ = l_Lean_Meta_ArgsPacker_pack(v_argsPacker_2887_, v_domain_2888_, v_fidx_2889_, v_args_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_);
lean_dec(v_a_2894_);
lean_dec_ref(v_a_2893_);
lean_dec(v_a_2892_);
lean_dec_ref(v_a_2891_);
lean_dec_ref(v_args_2890_);
lean_dec_ref(v_argsPacker_2887_);
return v_res_2896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_unpack(lean_object* v_argsPacker_2897_, lean_object* v_e_2898_){
_start:
{
lean_object* v___x_2899_; lean_object* v___x_2900_; 
v___x_2899_ = lean_array_get_size(v_argsPacker_2897_);
v___x_2900_ = l_Lean_Meta_ArgsPacker_Mutual_unpack(v___x_2899_, v_e_2898_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v___x_2901_; 
v___x_2901_ = lean_box(0);
return v___x_2901_;
}
else
{
lean_object* v_val_2902_; lean_object* v_fst_2903_; lean_object* v_snd_2904_; lean_object* v___x_2906_; uint8_t v_isShared_2907_; uint8_t v_isSharedCheck_2924_; 
v_val_2902_ = lean_ctor_get(v___x_2900_, 0);
lean_inc(v_val_2902_);
lean_dec_ref(v___x_2900_);
v_fst_2903_ = lean_ctor_get(v_val_2902_, 0);
v_snd_2904_ = lean_ctor_get(v_val_2902_, 1);
v_isSharedCheck_2924_ = !lean_is_exclusive(v_val_2902_);
if (v_isSharedCheck_2924_ == 0)
{
v___x_2906_ = v_val_2902_;
v_isShared_2907_ = v_isSharedCheck_2924_;
goto v_resetjp_2905_;
}
else
{
lean_inc(v_snd_2904_);
lean_inc(v_fst_2903_);
lean_dec(v_val_2902_);
v___x_2906_ = lean_box(0);
v_isShared_2907_ = v_isSharedCheck_2924_;
goto v_resetjp_2905_;
}
v_resetjp_2905_:
{
lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; 
v___x_2908_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0, &l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0_once, _init_l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0);
v___x_2909_ = lean_array_get_borrowed(v___x_2908_, v_argsPacker_2897_, v_fst_2903_);
v___x_2910_ = lean_array_get_size(v___x_2909_);
v___x_2911_ = l_Lean_Meta_ArgsPacker_Unary_unpack(v___x_2910_, v_snd_2904_);
if (lean_obj_tag(v___x_2911_) == 0)
{
lean_object* v___x_2912_; 
lean_del_object(v___x_2906_);
lean_dec(v_fst_2903_);
v___x_2912_ = lean_box(0);
return v___x_2912_;
}
else
{
lean_object* v_val_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_2923_; 
v_val_2913_ = lean_ctor_get(v___x_2911_, 0);
v_isSharedCheck_2923_ = !lean_is_exclusive(v___x_2911_);
if (v_isSharedCheck_2923_ == 0)
{
v___x_2915_ = v___x_2911_;
v_isShared_2916_ = v_isSharedCheck_2923_;
goto v_resetjp_2914_;
}
else
{
lean_inc(v_val_2913_);
lean_dec(v___x_2911_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_2923_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
lean_object* v___x_2918_; 
if (v_isShared_2907_ == 0)
{
lean_ctor_set(v___x_2906_, 1, v_val_2913_);
v___x_2918_ = v___x_2906_;
goto v_reusejp_2917_;
}
else
{
lean_object* v_reuseFailAlloc_2922_; 
v_reuseFailAlloc_2922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2922_, 0, v_fst_2903_);
lean_ctor_set(v_reuseFailAlloc_2922_, 1, v_val_2913_);
v___x_2918_ = v_reuseFailAlloc_2922_;
goto v_reusejp_2917_;
}
v_reusejp_2917_:
{
lean_object* v___x_2920_; 
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 0, v___x_2918_);
v___x_2920_ = v___x_2915_;
goto v_reusejp_2919_;
}
else
{
lean_object* v_reuseFailAlloc_2921_; 
v_reuseFailAlloc_2921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2921_, 0, v___x_2918_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_unpack___boxed(lean_object* v_argsPacker_2925_, lean_object* v_e_2926_){
_start:
{
lean_object* v_res_2927_; 
v_res_2927_ = l_Lean_Meta_ArgsPacker_unpack(v_argsPacker_2925_, v_e_2926_);
lean_dec_ref(v_argsPacker_2925_);
return v_res_2927_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurryType_spec__0(lean_object* v_as_2928_, lean_object* v_bs_2929_, lean_object* v_i_2930_, lean_object* v_cs_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_){
_start:
{
lean_object* v___x_2937_; uint8_t v___x_2938_; 
v___x_2937_ = lean_array_get_size(v_as_2928_);
v___x_2938_ = lean_nat_dec_lt(v_i_2930_, v___x_2937_);
if (v___x_2938_ == 0)
{
lean_object* v___x_2939_; 
lean_dec(v_i_2930_);
v___x_2939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2939_, 0, v_cs_2931_);
return v___x_2939_;
}
else
{
lean_object* v___x_2940_; uint8_t v___x_2941_; 
v___x_2940_ = lean_array_get_size(v_bs_2929_);
v___x_2941_ = lean_nat_dec_lt(v_i_2930_, v___x_2940_);
if (v___x_2941_ == 0)
{
lean_object* v___x_2942_; 
lean_dec(v_i_2930_);
v___x_2942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2942_, 0, v_cs_2931_);
return v___x_2942_;
}
else
{
lean_object* v_a_2943_; lean_object* v_b_2944_; lean_object* v___x_2945_; 
v_a_2943_ = lean_array_fget_borrowed(v_as_2928_, v_i_2930_);
v_b_2944_ = lean_array_fget_borrowed(v_bs_2929_, v_i_2930_);
lean_inc(v_b_2944_);
lean_inc(v_a_2943_);
v___x_2945_ = l_Lean_Meta_ArgsPacker_Unary_uncurryType(v_a_2943_, v_b_2944_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
if (lean_obj_tag(v___x_2945_) == 0)
{
lean_object* v_a_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; 
v_a_2946_ = lean_ctor_get(v___x_2945_, 0);
lean_inc(v_a_2946_);
lean_dec_ref(v___x_2945_);
v___x_2947_ = lean_unsigned_to_nat(1u);
v___x_2948_ = lean_nat_add(v_i_2930_, v___x_2947_);
lean_dec(v_i_2930_);
v___x_2949_ = lean_array_push(v_cs_2931_, v_a_2946_);
v_i_2930_ = v___x_2948_;
v_cs_2931_ = v___x_2949_;
goto _start;
}
else
{
lean_object* v_a_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_2958_; 
lean_dec_ref(v_cs_2931_);
lean_dec(v_i_2930_);
v_a_2951_ = lean_ctor_get(v___x_2945_, 0);
v_isSharedCheck_2958_ = !lean_is_exclusive(v___x_2945_);
if (v_isSharedCheck_2958_ == 0)
{
v___x_2953_ = v___x_2945_;
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_a_2951_);
lean_dec(v___x_2945_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
lean_object* v___x_2956_; 
if (v_isShared_2954_ == 0)
{
v___x_2956_ = v___x_2953_;
goto v_reusejp_2955_;
}
else
{
lean_object* v_reuseFailAlloc_2957_; 
v_reuseFailAlloc_2957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2957_, 0, v_a_2951_);
v___x_2956_ = v_reuseFailAlloc_2957_;
goto v_reusejp_2955_;
}
v_reusejp_2955_:
{
return v___x_2956_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurryType_spec__0___boxed(lean_object* v_as_2959_, lean_object* v_bs_2960_, lean_object* v_i_2961_, lean_object* v_cs_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_){
_start:
{
lean_object* v_res_2968_; 
v_res_2968_ = l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurryType_spec__0(v_as_2959_, v_bs_2960_, v_i_2961_, v_cs_2962_, v___y_2963_, v___y_2964_, v___y_2965_, v___y_2966_);
lean_dec(v___y_2966_);
lean_dec_ref(v___y_2965_);
lean_dec(v___y_2964_);
lean_dec_ref(v___y_2963_);
lean_dec_ref(v_bs_2960_);
lean_dec_ref(v_as_2959_);
return v_res_2968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryType(lean_object* v_argsPacker_2969_, lean_object* v_types_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_, lean_object* v_a_2973_, lean_object* v_a_2974_){
_start:
{
lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; 
v___x_2976_ = lean_unsigned_to_nat(0u);
v___x_2977_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0, &l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0);
v___x_2978_ = l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurryType_spec__0(v_argsPacker_2969_, v_types_2970_, v___x_2976_, v___x_2977_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_);
if (lean_obj_tag(v___x_2978_) == 0)
{
lean_object* v_a_2979_; lean_object* v___x_2980_; 
v_a_2979_ = lean_ctor_get(v___x_2978_, 0);
lean_inc(v_a_2979_);
lean_dec_ref(v___x_2978_);
v___x_2980_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryType(v_a_2979_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_);
return v___x_2980_;
}
else
{
lean_object* v_a_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_2988_; 
v_a_2981_ = lean_ctor_get(v___x_2978_, 0);
v_isSharedCheck_2988_ = !lean_is_exclusive(v___x_2978_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2983_ = v___x_2978_;
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_a_2981_);
lean_dec(v___x_2978_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
lean_object* v___x_2986_; 
if (v_isShared_2984_ == 0)
{
v___x_2986_ = v___x_2983_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v_a_2981_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
return v___x_2986_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryType___boxed(lean_object* v_argsPacker_2989_, lean_object* v_types_2990_, lean_object* v_a_2991_, lean_object* v_a_2992_, lean_object* v_a_2993_, lean_object* v_a_2994_, lean_object* v_a_2995_){
_start:
{
lean_object* v_res_2996_; 
v_res_2996_ = l_Lean_Meta_ArgsPacker_uncurryType(v_argsPacker_2989_, v_types_2990_, v_a_2991_, v_a_2992_, v_a_2993_, v_a_2994_);
lean_dec(v_a_2994_);
lean_dec_ref(v_a_2993_);
lean_dec(v_a_2992_);
lean_dec_ref(v_a_2991_);
lean_dec_ref(v_types_2990_);
lean_dec_ref(v_argsPacker_2989_);
return v_res_2996_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurry_spec__0(lean_object* v_as_2997_, lean_object* v_bs_2998_, lean_object* v_i_2999_, lean_object* v_cs_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_){
_start:
{
lean_object* v___x_3006_; uint8_t v___x_3007_; 
v___x_3006_ = lean_array_get_size(v_as_2997_);
v___x_3007_ = lean_nat_dec_lt(v_i_2999_, v___x_3006_);
if (v___x_3007_ == 0)
{
lean_object* v___x_3008_; 
lean_dec(v_i_2999_);
v___x_3008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3008_, 0, v_cs_3000_);
return v___x_3008_;
}
else
{
lean_object* v___x_3009_; uint8_t v___x_3010_; 
v___x_3009_ = lean_array_get_size(v_bs_2998_);
v___x_3010_ = lean_nat_dec_lt(v_i_2999_, v___x_3009_);
if (v___x_3010_ == 0)
{
lean_object* v___x_3011_; 
lean_dec(v_i_2999_);
v___x_3011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3011_, 0, v_cs_3000_);
return v___x_3011_;
}
else
{
lean_object* v_a_3012_; lean_object* v_b_3013_; lean_object* v___x_3014_; 
v_a_3012_ = lean_array_fget_borrowed(v_as_2997_, v_i_2999_);
v_b_3013_ = lean_array_fget_borrowed(v_bs_2998_, v_i_2999_);
lean_inc(v_b_3013_);
lean_inc(v_a_3012_);
v___x_3014_ = l_Lean_Meta_ArgsPacker_Unary_uncurry(v_a_3012_, v_b_3013_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_);
if (lean_obj_tag(v___x_3014_) == 0)
{
lean_object* v_a_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; 
v_a_3015_ = lean_ctor_get(v___x_3014_, 0);
lean_inc(v_a_3015_);
lean_dec_ref(v___x_3014_);
v___x_3016_ = lean_unsigned_to_nat(1u);
v___x_3017_ = lean_nat_add(v_i_2999_, v___x_3016_);
lean_dec(v_i_2999_);
v___x_3018_ = lean_array_push(v_cs_3000_, v_a_3015_);
v_i_2999_ = v___x_3017_;
v_cs_3000_ = v___x_3018_;
goto _start;
}
else
{
lean_object* v_a_3020_; lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3027_; 
lean_dec_ref(v_cs_3000_);
lean_dec(v_i_2999_);
v_a_3020_ = lean_ctor_get(v___x_3014_, 0);
v_isSharedCheck_3027_ = !lean_is_exclusive(v___x_3014_);
if (v_isSharedCheck_3027_ == 0)
{
v___x_3022_ = v___x_3014_;
v_isShared_3023_ = v_isSharedCheck_3027_;
goto v_resetjp_3021_;
}
else
{
lean_inc(v_a_3020_);
lean_dec(v___x_3014_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3027_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
lean_object* v___x_3025_; 
if (v_isShared_3023_ == 0)
{
v___x_3025_ = v___x_3022_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v_a_3020_);
v___x_3025_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
return v___x_3025_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurry_spec__0___boxed(lean_object* v_as_3028_, lean_object* v_bs_3029_, lean_object* v_i_3030_, lean_object* v_cs_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_){
_start:
{
lean_object* v_res_3037_; 
v_res_3037_ = l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurry_spec__0(v_as_3028_, v_bs_3029_, v_i_3030_, v_cs_3031_, v___y_3032_, v___y_3033_, v___y_3034_, v___y_3035_);
lean_dec(v___y_3035_);
lean_dec_ref(v___y_3034_);
lean_dec(v___y_3033_);
lean_dec_ref(v___y_3032_);
lean_dec_ref(v_bs_3029_);
lean_dec_ref(v_as_3028_);
return v_res_3037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurry(lean_object* v_argsPacker_3038_, lean_object* v_es_3039_, lean_object* v_a_3040_, lean_object* v_a_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_){
_start:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; 
v___x_3045_ = lean_unsigned_to_nat(0u);
v___x_3046_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0, &l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0);
v___x_3047_ = l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurry_spec__0(v_argsPacker_3038_, v_es_3039_, v___x_3045_, v___x_3046_, v_a_3040_, v_a_3041_, v_a_3042_, v_a_3043_);
if (lean_obj_tag(v___x_3047_) == 0)
{
lean_object* v_a_3048_; lean_object* v___x_3049_; 
v_a_3048_ = lean_ctor_get(v___x_3047_, 0);
lean_inc(v_a_3048_);
lean_dec_ref(v___x_3047_);
v___x_3049_ = l_Lean_Meta_ArgsPacker_Mutual_uncurry(v_a_3048_, v_a_3040_, v_a_3041_, v_a_3042_, v_a_3043_);
return v___x_3049_;
}
else
{
lean_object* v_a_3050_; lean_object* v___x_3052_; uint8_t v_isShared_3053_; uint8_t v_isSharedCheck_3057_; 
v_a_3050_ = lean_ctor_get(v___x_3047_, 0);
v_isSharedCheck_3057_ = !lean_is_exclusive(v___x_3047_);
if (v_isSharedCheck_3057_ == 0)
{
v___x_3052_ = v___x_3047_;
v_isShared_3053_ = v_isSharedCheck_3057_;
goto v_resetjp_3051_;
}
else
{
lean_inc(v_a_3050_);
lean_dec(v___x_3047_);
v___x_3052_ = lean_box(0);
v_isShared_3053_ = v_isSharedCheck_3057_;
goto v_resetjp_3051_;
}
v_resetjp_3051_:
{
lean_object* v___x_3055_; 
if (v_isShared_3053_ == 0)
{
v___x_3055_ = v___x_3052_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v_a_3050_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
return v___x_3055_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurry___boxed(lean_object* v_argsPacker_3058_, lean_object* v_es_3059_, lean_object* v_a_3060_, lean_object* v_a_3061_, lean_object* v_a_3062_, lean_object* v_a_3063_, lean_object* v_a_3064_){
_start:
{
lean_object* v_res_3065_; 
v_res_3065_ = l_Lean_Meta_ArgsPacker_uncurry(v_argsPacker_3058_, v_es_3059_, v_a_3060_, v_a_3061_, v_a_3062_, v_a_3063_);
lean_dec(v_a_3063_);
lean_dec_ref(v_a_3062_);
lean_dec(v_a_3061_);
lean_dec_ref(v_a_3060_);
lean_dec_ref(v_es_3059_);
lean_dec_ref(v_argsPacker_3058_);
return v_res_3065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryWithType(lean_object* v_argsPacker_3066_, lean_object* v_resultType_3067_, lean_object* v_es_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_, lean_object* v_a_3072_){
_start:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; 
v___x_3074_ = lean_unsigned_to_nat(0u);
v___x_3075_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0, &l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0);
v___x_3076_ = l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurry_spec__0(v_argsPacker_3066_, v_es_3068_, v___x_3074_, v___x_3075_, v_a_3069_, v_a_3070_, v_a_3071_, v_a_3072_);
if (lean_obj_tag(v___x_3076_) == 0)
{
lean_object* v_a_3077_; lean_object* v___x_3078_; 
v_a_3077_ = lean_ctor_get(v___x_3076_, 0);
lean_inc(v_a_3077_);
lean_dec_ref(v___x_3076_);
v___x_3078_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType(v_resultType_3067_, v_a_3077_, v_a_3069_, v_a_3070_, v_a_3071_, v_a_3072_);
return v___x_3078_;
}
else
{
lean_object* v_a_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3086_; 
lean_dec_ref(v_resultType_3067_);
v_a_3079_ = lean_ctor_get(v___x_3076_, 0);
v_isSharedCheck_3086_ = !lean_is_exclusive(v___x_3076_);
if (v_isSharedCheck_3086_ == 0)
{
v___x_3081_ = v___x_3076_;
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_a_3079_);
lean_dec(v___x_3076_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v___x_3084_; 
if (v_isShared_3082_ == 0)
{
v___x_3084_ = v___x_3081_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v_a_3079_);
v___x_3084_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
return v___x_3084_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryWithType___boxed(lean_object* v_argsPacker_3087_, lean_object* v_resultType_3088_, lean_object* v_es_3089_, lean_object* v_a_3090_, lean_object* v_a_3091_, lean_object* v_a_3092_, lean_object* v_a_3093_, lean_object* v_a_3094_){
_start:
{
lean_object* v_res_3095_; 
v_res_3095_ = l_Lean_Meta_ArgsPacker_uncurryWithType(v_argsPacker_3087_, v_resultType_3088_, v_es_3089_, v_a_3090_, v_a_3091_, v_a_3092_, v_a_3093_);
lean_dec(v_a_3093_);
lean_dec_ref(v_a_3092_);
lean_dec(v_a_3091_);
lean_dec_ref(v_a_3090_);
lean_dec_ref(v_es_3089_);
lean_dec_ref(v_argsPacker_3087_);
return v_res_3095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryND(lean_object* v_argsPacker_3096_, lean_object* v_es_3097_, lean_object* v_a_3098_, lean_object* v_a_3099_, lean_object* v_a_3100_, lean_object* v_a_3101_){
_start:
{
lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; 
v___x_3103_ = lean_unsigned_to_nat(0u);
v___x_3104_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0, &l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0);
v___x_3105_ = l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurry_spec__0(v_argsPacker_3096_, v_es_3097_, v___x_3103_, v___x_3104_, v_a_3098_, v_a_3099_, v_a_3100_, v_a_3101_);
if (lean_obj_tag(v___x_3105_) == 0)
{
lean_object* v_a_3106_; lean_object* v___x_3107_; 
v_a_3106_ = lean_ctor_get(v___x_3105_, 0);
lean_inc(v_a_3106_);
lean_dec_ref(v___x_3105_);
v___x_3107_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryND(v_a_3106_, v_a_3098_, v_a_3099_, v_a_3100_, v_a_3101_);
return v___x_3107_;
}
else
{
lean_object* v_a_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3115_; 
v_a_3108_ = lean_ctor_get(v___x_3105_, 0);
v_isSharedCheck_3115_ = !lean_is_exclusive(v___x_3105_);
if (v_isSharedCheck_3115_ == 0)
{
v___x_3110_ = v___x_3105_;
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_a_3108_);
lean_dec(v___x_3105_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v___x_3113_; 
if (v_isShared_3111_ == 0)
{
v___x_3113_ = v___x_3110_;
goto v_reusejp_3112_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v_a_3108_);
v___x_3113_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3112_;
}
v_reusejp_3112_:
{
return v___x_3113_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryND___boxed(lean_object* v_argsPacker_3116_, lean_object* v_es_3117_, lean_object* v_a_3118_, lean_object* v_a_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_){
_start:
{
lean_object* v_res_3123_; 
v_res_3123_ = l_Lean_Meta_ArgsPacker_uncurryND(v_argsPacker_3116_, v_es_3117_, v_a_3118_, v_a_3119_, v_a_3120_, v_a_3121_);
lean_dec(v_a_3121_);
lean_dec_ref(v_a_3120_);
lean_dec(v_a_3119_);
lean_dec_ref(v_a_3118_);
lean_dec_ref(v_es_3117_);
lean_dec_ref(v_argsPacker_3116_);
return v_res_3123_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ArgsPacker_curryProj_spec__0(lean_object* v_msg_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_){
_start:
{
lean_object* v___f_3130_; lean_object* v___x_1078__overap_3131_; lean_object* v___x_3132_; 
v___f_3130_ = lean_obj_once(&l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___closed__0, &l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___closed__0_once, _init_l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___closed__0);
v___x_1078__overap_3131_ = lean_panic_fn_borrowed(v___f_3130_, v_msg_3124_);
lean_inc(v___y_3128_);
lean_inc_ref(v___y_3127_);
lean_inc(v___y_3126_);
lean_inc_ref(v___y_3125_);
v___x_3132_ = lean_apply_5(v___x_1078__overap_3131_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_, lean_box(0));
return v___x_3132_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ArgsPacker_curryProj_spec__0___boxed(lean_object* v_msg_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_){
_start:
{
lean_object* v_res_3139_; 
v_res_3139_ = l_panic___at___00Lean_Meta_ArgsPacker_curryProj_spec__0(v_msg_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_);
lean_dec(v___y_3137_);
lean_dec_ref(v___y_3136_);
lean_dec(v___y_3135_);
lean_dec_ref(v___y_3134_);
return v_res_3139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryProj___lam__0(lean_object* v_a_3140_, lean_object* v___x_3141_, lean_object* v_i_3142_, lean_object* v_e_3143_, lean_object* v_x_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_){
_start:
{
lean_object* v___x_3150_; lean_object* v___x_3151_; 
v___x_3150_ = l_List_lengthTR___redArg(v_a_3140_);
lean_inc_ref(v_x_3144_);
v___x_3151_ = l_Lean_Meta_ArgsPacker_Mutual_pack(v___x_3150_, v___x_3141_, v_i_3142_, v_x_3144_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_);
lean_dec(v___x_3150_);
if (lean_obj_tag(v___x_3151_) == 0)
{
lean_object* v_a_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; uint8_t v___x_3158_; uint8_t v___x_3159_; uint8_t v___x_3160_; lean_object* v___x_3161_; 
v_a_3152_ = lean_ctor_get(v___x_3151_, 0);
lean_inc(v_a_3152_);
lean_dec_ref(v___x_3151_);
v___x_3153_ = lean_unsigned_to_nat(1u);
v___x_3154_ = lean_mk_empty_array_with_capacity(v___x_3153_);
lean_inc_ref(v___x_3154_);
v___x_3155_ = lean_array_push(v___x_3154_, v_x_3144_);
v___x_3156_ = lean_array_push(v___x_3154_, v_a_3152_);
v___x_3157_ = l_Lean_Expr_beta(v_e_3143_, v___x_3156_);
v___x_3158_ = 0;
v___x_3159_ = 1;
v___x_3160_ = 1;
v___x_3161_ = l_Lean_Meta_mkLambdaFVars(v___x_3155_, v___x_3157_, v___x_3158_, v___x_3159_, v___x_3158_, v___x_3159_, v___x_3160_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_);
lean_dec_ref(v___x_3155_);
return v___x_3161_;
}
else
{
lean_dec_ref(v_x_3144_);
lean_dec_ref(v_e_3143_);
return v___x_3151_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryProj___lam__0___boxed(lean_object* v_a_3162_, lean_object* v___x_3163_, lean_object* v_i_3164_, lean_object* v_e_3165_, lean_object* v_x_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_){
_start:
{
lean_object* v_res_3172_; 
v_res_3172_ = l_Lean_Meta_ArgsPacker_curryProj___lam__0(v_a_3162_, v___x_3163_, v_i_3164_, v_e_3165_, v_x_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_);
lean_dec(v___y_3170_);
lean_dec_ref(v___y_3169_);
lean_dec(v___y_3168_);
lean_dec_ref(v___y_3167_);
lean_dec(v_i_3164_);
lean_dec(v_a_3162_);
return v_res_3172_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_curryProj___closed__0(void){
_start:
{
lean_object* v___x_3173_; 
v___x_3173_ = lean_mk_string_unchecked("curryProj: index out of range", 29, 29);
return v___x_3173_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_curryProj___closed__1(void){
_start:
{
lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3174_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_curryProj___closed__0, &l_Lean_Meta_ArgsPacker_curryProj___closed__0_once, _init_l_Lean_Meta_ArgsPacker_curryProj___closed__0);
v___x_3175_ = l_Lean_stringToMessageData(v___x_3174_);
return v___x_3175_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_curryProj___closed__2(void){
_start:
{
lean_object* v___x_3176_; 
v___x_3176_ = lean_mk_string_unchecked("Lean.Meta.ArgsPacker.curryProj", 30, 30);
return v___x_3176_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_curryProj___closed__3(void){
_start:
{
lean_object* v___x_3177_; 
v___x_3177_ = lean_mk_string_unchecked("curryProj: expected forall type, got {}", 39, 39);
return v___x_3177_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_curryProj___closed__4(void){
_start:
{
lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; 
v___x_3178_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_curryProj___closed__3, &l_Lean_Meta_ArgsPacker_curryProj___closed__3_once, _init_l_Lean_Meta_ArgsPacker_curryProj___closed__3);
v___x_3179_ = lean_unsigned_to_nat(4u);
v___x_3180_ = lean_unsigned_to_nat(535u);
v___x_3181_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_curryProj___closed__2, &l_Lean_Meta_ArgsPacker_curryProj___closed__2_once, _init_l_Lean_Meta_ArgsPacker_curryProj___closed__2);
v___x_3182_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0);
v___x_3183_ = l_mkPanicMessageWithDecl(v___x_3182_, v___x_3181_, v___x_3180_, v___x_3179_, v___x_3178_);
return v___x_3183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryProj(lean_object* v_argsPacker_3184_, lean_object* v_e_3185_, lean_object* v_i_3186_, lean_object* v_a_3187_, lean_object* v_a_3188_, lean_object* v_a_3189_, lean_object* v_a_3190_){
_start:
{
lean_object* v___x_3192_; 
lean_inc(v_a_3190_);
lean_inc_ref(v_a_3189_);
lean_inc(v_a_3188_);
lean_inc_ref(v_a_3187_);
lean_inc_ref(v_e_3185_);
v___x_3192_ = lean_infer_type(v_e_3185_, v_a_3187_, v_a_3188_, v_a_3189_, v_a_3190_);
if (lean_obj_tag(v___x_3192_) == 0)
{
lean_object* v_a_3193_; lean_object* v___x_3194_; 
v_a_3193_ = lean_ctor_get(v___x_3192_, 0);
lean_inc(v_a_3193_);
lean_dec_ref(v___x_3192_);
lean_inc(v_a_3190_);
lean_inc_ref(v_a_3189_);
lean_inc(v_a_3188_);
lean_inc_ref(v_a_3187_);
v___x_3194_ = lean_whnf(v_a_3193_, v_a_3187_, v_a_3188_, v_a_3189_, v_a_3190_);
if (lean_obj_tag(v___x_3194_) == 0)
{
lean_object* v_a_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___y_3199_; lean_object* v___y_3200_; lean_object* v___y_3201_; lean_object* v___y_3202_; lean_object* v___y_3203_; lean_object* v___y_3204_; lean_object* v_n_3211_; lean_object* v___y_3213_; lean_object* v___y_3214_; lean_object* v___y_3215_; lean_object* v___y_3216_; uint8_t v___x_3241_; 
v_a_3195_ = lean_ctor_get(v___x_3194_, 0);
lean_inc(v_a_3195_);
lean_dec_ref(v___x_3194_);
v___x_3196_ = l_Lean_instInhabitedExpr;
v___x_3197_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0, &l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0_once, _init_l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0);
v_n_3211_ = lean_array_get_size(v_argsPacker_3184_);
v___x_3241_ = l_Lean_Expr_isForall(v_a_3195_);
if (v___x_3241_ == 0)
{
lean_object* v___x_3242_; lean_object* v___x_3243_; 
v___x_3242_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_curryProj___closed__4, &l_Lean_Meta_ArgsPacker_curryProj___closed__4_once, _init_l_Lean_Meta_ArgsPacker_curryProj___closed__4);
v___x_3243_ = l_panic___at___00Lean_Meta_ArgsPacker_curryProj_spec__0(v___x_3242_, v_a_3187_, v_a_3188_, v_a_3189_, v_a_3190_);
if (lean_obj_tag(v___x_3243_) == 0)
{
lean_dec_ref(v___x_3243_);
v___y_3213_ = v_a_3187_;
v___y_3214_ = v_a_3188_;
v___y_3215_ = v_a_3189_;
v___y_3216_ = v_a_3190_;
goto v___jp_3212_;
}
else
{
lean_object* v_a_3244_; lean_object* v___x_3246_; uint8_t v_isShared_3247_; uint8_t v_isSharedCheck_3251_; 
lean_dec(v_a_3195_);
lean_dec(v_i_3186_);
lean_dec_ref(v_e_3185_);
v_a_3244_ = lean_ctor_get(v___x_3243_, 0);
v_isSharedCheck_3251_ = !lean_is_exclusive(v___x_3243_);
if (v_isSharedCheck_3251_ == 0)
{
v___x_3246_ = v___x_3243_;
v_isShared_3247_ = v_isSharedCheck_3251_;
goto v_resetjp_3245_;
}
else
{
lean_inc(v_a_3244_);
lean_dec(v___x_3243_);
v___x_3246_ = lean_box(0);
v_isShared_3247_ = v_isSharedCheck_3251_;
goto v_resetjp_3245_;
}
v_resetjp_3245_:
{
lean_object* v___x_3249_; 
if (v_isShared_3247_ == 0)
{
v___x_3249_ = v___x_3246_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v_a_3244_);
v___x_3249_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
return v___x_3249_;
}
}
}
}
else
{
v___y_3213_ = v_a_3187_;
v___y_3214_ = v_a_3188_;
v___y_3215_ = v_a_3189_;
v___y_3216_ = v_a_3190_;
goto v___jp_3212_;
}
v___jp_3198_:
{
lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; 
lean_inc(v_i_3186_);
v___x_3205_ = l_List_get_x21Internal___redArg(v___x_3196_, v___y_3199_, v_i_3186_);
lean_dec(v___y_3199_);
v___x_3206_ = l_Lean_Expr_bindingName_x21(v_a_3195_);
lean_dec(v_a_3195_);
v___x_3207_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v___x_3206_, v___x_3205_, v___y_3200_, v___y_3201_, v___y_3202_, v___y_3203_, v___y_3204_);
if (lean_obj_tag(v___x_3207_) == 0)
{
lean_object* v_a_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; 
v_a_3208_ = lean_ctor_get(v___x_3207_, 0);
lean_inc(v_a_3208_);
lean_dec_ref(v___x_3207_);
v___x_3209_ = lean_array_get_borrowed(v___x_3197_, v_argsPacker_3184_, v_i_3186_);
lean_dec(v_i_3186_);
lean_inc(v___x_3209_);
v___x_3210_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry(v___x_3209_, v_a_3208_, v___y_3201_, v___y_3202_, v___y_3203_, v___y_3204_);
return v___x_3210_;
}
else
{
lean_dec(v_i_3186_);
return v___x_3207_;
}
}
v___jp_3212_:
{
lean_object* v___x_3217_; lean_object* v___x_3218_; 
v___x_3217_ = l_Lean_Expr_bindingDomain_x21(v_a_3195_);
lean_inc_ref(v___x_3217_);
v___x_3218_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType(v_n_3211_, v___x_3217_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_);
if (lean_obj_tag(v___x_3218_) == 0)
{
lean_object* v_a_3219_; lean_object* v___f_3220_; lean_object* v___x_3221_; uint8_t v___x_3222_; 
v_a_3219_ = lean_ctor_get(v___x_3218_, 0);
lean_inc_n(v_a_3219_, 2);
lean_dec_ref(v___x_3218_);
lean_inc(v_i_3186_);
v___f_3220_ = lean_alloc_closure((void*)(l_Lean_Meta_ArgsPacker_curryProj___lam__0___boxed), 10, 4);
lean_closure_set(v___f_3220_, 0, v_a_3219_);
lean_closure_set(v___f_3220_, 1, v___x_3217_);
lean_closure_set(v___f_3220_, 2, v_i_3186_);
lean_closure_set(v___f_3220_, 3, v_e_3185_);
v___x_3221_ = l_List_lengthTR___redArg(v_a_3219_);
v___x_3222_ = lean_nat_dec_lt(v_i_3186_, v___x_3221_);
lean_dec(v___x_3221_);
if (v___x_3222_ == 0)
{
lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v_a_3225_; lean_object* v___x_3227_; uint8_t v_isShared_3228_; uint8_t v_isSharedCheck_3232_; 
lean_dec_ref(v___f_3220_);
lean_dec(v_a_3219_);
lean_dec(v_a_3195_);
lean_dec(v_i_3186_);
v___x_3223_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_curryProj___closed__1, &l_Lean_Meta_ArgsPacker_curryProj___closed__1_once, _init_l_Lean_Meta_ArgsPacker_curryProj___closed__1);
v___x_3224_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_3223_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_);
v_a_3225_ = lean_ctor_get(v___x_3224_, 0);
v_isSharedCheck_3232_ = !lean_is_exclusive(v___x_3224_);
if (v_isSharedCheck_3232_ == 0)
{
v___x_3227_ = v___x_3224_;
v_isShared_3228_ = v_isSharedCheck_3232_;
goto v_resetjp_3226_;
}
else
{
lean_inc(v_a_3225_);
lean_dec(v___x_3224_);
v___x_3227_ = lean_box(0);
v_isShared_3228_ = v_isSharedCheck_3232_;
goto v_resetjp_3226_;
}
v_resetjp_3226_:
{
lean_object* v___x_3230_; 
if (v_isShared_3228_ == 0)
{
v___x_3230_ = v___x_3227_;
goto v_reusejp_3229_;
}
else
{
lean_object* v_reuseFailAlloc_3231_; 
v_reuseFailAlloc_3231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3231_, 0, v_a_3225_);
v___x_3230_ = v_reuseFailAlloc_3231_;
goto v_reusejp_3229_;
}
v_reusejp_3229_:
{
return v___x_3230_;
}
}
}
else
{
v___y_3199_ = v_a_3219_;
v___y_3200_ = v___f_3220_;
v___y_3201_ = v___y_3213_;
v___y_3202_ = v___y_3214_;
v___y_3203_ = v___y_3215_;
v___y_3204_ = v___y_3216_;
goto v___jp_3198_;
}
}
else
{
lean_object* v_a_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3240_; 
lean_dec_ref(v___x_3217_);
lean_dec(v_a_3195_);
lean_dec(v_i_3186_);
lean_dec_ref(v_e_3185_);
v_a_3233_ = lean_ctor_get(v___x_3218_, 0);
v_isSharedCheck_3240_ = !lean_is_exclusive(v___x_3218_);
if (v_isSharedCheck_3240_ == 0)
{
v___x_3235_ = v___x_3218_;
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_a_3233_);
lean_dec(v___x_3218_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3238_; 
if (v_isShared_3236_ == 0)
{
v___x_3238_ = v___x_3235_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v_a_3233_);
v___x_3238_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
return v___x_3238_;
}
}
}
}
}
else
{
lean_dec(v_i_3186_);
lean_dec_ref(v_e_3185_);
return v___x_3194_;
}
}
else
{
lean_dec(v_i_3186_);
lean_dec_ref(v_e_3185_);
return v___x_3192_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryProj___boxed(lean_object* v_argsPacker_3252_, lean_object* v_e_3253_, lean_object* v_i_3254_, lean_object* v_a_3255_, lean_object* v_a_3256_, lean_object* v_a_3257_, lean_object* v_a_3258_, lean_object* v_a_3259_){
_start:
{
lean_object* v_res_3260_; 
v_res_3260_ = l_Lean_Meta_ArgsPacker_curryProj(v_argsPacker_3252_, v_e_3253_, v_i_3254_, v_a_3255_, v_a_3256_, v_a_3257_, v_a_3258_);
lean_dec(v_a_3258_);
lean_dec_ref(v_a_3257_);
lean_dec(v_a_3256_);
lean_dec_ref(v_a_3255_);
lean_dec_ref(v_argsPacker_3252_);
return v_res_3260_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_curryType_spec__0(lean_object* v_as_3261_, lean_object* v_bs_3262_, lean_object* v_i_3263_, lean_object* v_cs_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_){
_start:
{
lean_object* v___x_3270_; uint8_t v___x_3271_; 
v___x_3270_ = lean_array_get_size(v_as_3261_);
v___x_3271_ = lean_nat_dec_lt(v_i_3263_, v___x_3270_);
if (v___x_3271_ == 0)
{
lean_object* v___x_3272_; 
lean_dec(v_i_3263_);
v___x_3272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3272_, 0, v_cs_3264_);
return v___x_3272_;
}
else
{
lean_object* v___x_3273_; uint8_t v___x_3274_; 
v___x_3273_ = lean_array_get_size(v_bs_3262_);
v___x_3274_ = lean_nat_dec_lt(v_i_3263_, v___x_3273_);
if (v___x_3274_ == 0)
{
lean_object* v___x_3275_; 
lean_dec(v_i_3263_);
v___x_3275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3275_, 0, v_cs_3264_);
return v___x_3275_;
}
else
{
lean_object* v_a_3276_; lean_object* v_b_3277_; lean_object* v___x_3278_; 
v_a_3276_ = lean_array_fget_borrowed(v_as_3261_, v_i_3263_);
v_b_3277_ = lean_array_fget_borrowed(v_bs_3262_, v_i_3263_);
lean_inc(v_b_3277_);
lean_inc(v_a_3276_);
v___x_3278_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType(v_a_3276_, v_b_3277_, v___y_3265_, v___y_3266_, v___y_3267_, v___y_3268_);
if (lean_obj_tag(v___x_3278_) == 0)
{
lean_object* v_a_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; 
v_a_3279_ = lean_ctor_get(v___x_3278_, 0);
lean_inc(v_a_3279_);
lean_dec_ref(v___x_3278_);
v___x_3280_ = lean_unsigned_to_nat(1u);
v___x_3281_ = lean_nat_add(v_i_3263_, v___x_3280_);
lean_dec(v_i_3263_);
v___x_3282_ = lean_array_push(v_cs_3264_, v_a_3279_);
v_i_3263_ = v___x_3281_;
v_cs_3264_ = v___x_3282_;
goto _start;
}
else
{
lean_object* v_a_3284_; lean_object* v___x_3286_; uint8_t v_isShared_3287_; uint8_t v_isSharedCheck_3291_; 
lean_dec_ref(v_cs_3264_);
lean_dec(v_i_3263_);
v_a_3284_ = lean_ctor_get(v___x_3278_, 0);
v_isSharedCheck_3291_ = !lean_is_exclusive(v___x_3278_);
if (v_isSharedCheck_3291_ == 0)
{
v___x_3286_ = v___x_3278_;
v_isShared_3287_ = v_isSharedCheck_3291_;
goto v_resetjp_3285_;
}
else
{
lean_inc(v_a_3284_);
lean_dec(v___x_3278_);
v___x_3286_ = lean_box(0);
v_isShared_3287_ = v_isSharedCheck_3291_;
goto v_resetjp_3285_;
}
v_resetjp_3285_:
{
lean_object* v___x_3289_; 
if (v_isShared_3287_ == 0)
{
v___x_3289_ = v___x_3286_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3290_; 
v_reuseFailAlloc_3290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3290_, 0, v_a_3284_);
v___x_3289_ = v_reuseFailAlloc_3290_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
return v___x_3289_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_curryType_spec__0___boxed(lean_object* v_as_3292_, lean_object* v_bs_3293_, lean_object* v_i_3294_, lean_object* v_cs_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_){
_start:
{
lean_object* v_res_3301_; 
v_res_3301_ = l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_curryType_spec__0(v_as_3292_, v_bs_3293_, v_i_3294_, v_cs_3295_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_);
lean_dec(v___y_3299_);
lean_dec_ref(v___y_3298_);
lean_dec(v___y_3297_);
lean_dec_ref(v___y_3296_);
lean_dec_ref(v_bs_3293_);
lean_dec_ref(v_as_3292_);
return v_res_3301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryType(lean_object* v_argsPacker_3302_, lean_object* v_t_3303_, lean_object* v_a_3304_, lean_object* v_a_3305_, lean_object* v_a_3306_, lean_object* v_a_3307_){
_start:
{
lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3309_ = lean_array_get_size(v_argsPacker_3302_);
v___x_3310_ = l_Lean_Meta_ArgsPacker_Mutual_curryType(v___x_3309_, v_t_3303_, v_a_3304_, v_a_3305_, v_a_3306_, v_a_3307_);
if (lean_obj_tag(v___x_3310_) == 0)
{
lean_object* v_a_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; 
v_a_3311_ = lean_ctor_get(v___x_3310_, 0);
lean_inc(v_a_3311_);
lean_dec_ref(v___x_3310_);
v___x_3312_ = lean_unsigned_to_nat(0u);
v___x_3313_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0, &l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0);
v___x_3314_ = l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_curryType_spec__0(v_argsPacker_3302_, v_a_3311_, v___x_3312_, v___x_3313_, v_a_3304_, v_a_3305_, v_a_3306_, v_a_3307_);
lean_dec(v_a_3311_);
return v___x_3314_;
}
else
{
return v___x_3310_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryType___boxed(lean_object* v_argsPacker_3315_, lean_object* v_t_3316_, lean_object* v_a_3317_, lean_object* v_a_3318_, lean_object* v_a_3319_, lean_object* v_a_3320_, lean_object* v_a_3321_){
_start:
{
lean_object* v_res_3322_; 
v_res_3322_ = l_Lean_Meta_ArgsPacker_curryType(v_argsPacker_3315_, v_t_3316_, v_a_3317_, v_a_3318_, v_a_3319_, v_a_3320_);
lean_dec(v_a_3320_);
lean_dec_ref(v_a_3319_);
lean_dec(v_a_3318_);
lean_dec_ref(v_a_3317_);
lean_dec_ref(v_argsPacker_3315_);
return v_res_3322_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___redArg(lean_object* v_upperBound_3323_, lean_object* v_argsPacker_3324_, lean_object* v_e_3325_, lean_object* v_a_3326_, lean_object* v_b_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_){
_start:
{
uint8_t v___x_3333_; 
v___x_3333_ = lean_nat_dec_lt(v_a_3326_, v_upperBound_3323_);
if (v___x_3333_ == 0)
{
lean_object* v___x_3334_; 
lean_dec(v_a_3326_);
lean_dec_ref(v_e_3325_);
v___x_3334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3334_, 0, v_b_3327_);
return v___x_3334_;
}
else
{
lean_object* v___x_3335_; 
lean_inc(v_a_3326_);
lean_inc_ref(v_e_3325_);
v___x_3335_ = l_Lean_Meta_ArgsPacker_curryProj(v_argsPacker_3324_, v_e_3325_, v_a_3326_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_);
if (lean_obj_tag(v___x_3335_) == 0)
{
lean_object* v_a_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; 
v_a_3336_ = lean_ctor_get(v___x_3335_, 0);
lean_inc(v_a_3336_);
lean_dec_ref(v___x_3335_);
v___x_3337_ = lean_array_push(v_b_3327_, v_a_3336_);
v___x_3338_ = lean_unsigned_to_nat(1u);
v___x_3339_ = lean_nat_add(v_a_3326_, v___x_3338_);
lean_dec(v_a_3326_);
v_a_3326_ = v___x_3339_;
v_b_3327_ = v___x_3337_;
goto _start;
}
else
{
lean_object* v_a_3341_; lean_object* v___x_3343_; uint8_t v_isShared_3344_; uint8_t v_isSharedCheck_3348_; 
lean_dec_ref(v_b_3327_);
lean_dec(v_a_3326_);
lean_dec_ref(v_e_3325_);
v_a_3341_ = lean_ctor_get(v___x_3335_, 0);
v_isSharedCheck_3348_ = !lean_is_exclusive(v___x_3335_);
if (v_isSharedCheck_3348_ == 0)
{
v___x_3343_ = v___x_3335_;
v_isShared_3344_ = v_isSharedCheck_3348_;
goto v_resetjp_3342_;
}
else
{
lean_inc(v_a_3341_);
lean_dec(v___x_3335_);
v___x_3343_ = lean_box(0);
v_isShared_3344_ = v_isSharedCheck_3348_;
goto v_resetjp_3342_;
}
v_resetjp_3342_:
{
lean_object* v___x_3346_; 
if (v_isShared_3344_ == 0)
{
v___x_3346_ = v___x_3343_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3347_; 
v_reuseFailAlloc_3347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3347_, 0, v_a_3341_);
v___x_3346_ = v_reuseFailAlloc_3347_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
return v___x_3346_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___redArg___boxed(lean_object* v_upperBound_3349_, lean_object* v_argsPacker_3350_, lean_object* v_e_3351_, lean_object* v_a_3352_, lean_object* v_b_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_){
_start:
{
lean_object* v_res_3359_; 
v_res_3359_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___redArg(v_upperBound_3349_, v_argsPacker_3350_, v_e_3351_, v_a_3352_, v_b_3353_, v___y_3354_, v___y_3355_, v___y_3356_, v___y_3357_);
lean_dec(v___y_3357_);
lean_dec_ref(v___y_3356_);
lean_dec(v___y_3355_);
lean_dec_ref(v___y_3354_);
lean_dec_ref(v_argsPacker_3350_);
lean_dec(v_upperBound_3349_);
return v_res_3359_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_curry___closed__0(void){
_start:
{
lean_object* v___x_3360_; lean_object* v___x_3361_; 
v___x_3360_ = lean_unsigned_to_nat(0u);
v___x_3361_ = l_Lean_Level_ofNat(v___x_3360_);
return v___x_3361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curry(lean_object* v_argsPacker_3362_, lean_object* v_e_3363_, lean_object* v_a_3364_, lean_object* v_a_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_){
_start:
{
lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v_es_3371_; lean_object* v___x_3372_; 
v___x_3369_ = lean_array_get_size(v_argsPacker_3362_);
v___x_3370_ = lean_unsigned_to_nat(0u);
v_es_3371_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0, &l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0);
v___x_3372_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___redArg(v___x_3369_, v_argsPacker_3362_, v_e_3363_, v___x_3370_, v_es_3371_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3372_) == 0)
{
lean_object* v_a_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; 
v_a_3373_ = lean_ctor_get(v___x_3372_, 0);
lean_inc(v_a_3373_);
lean_dec_ref(v___x_3372_);
v___x_3374_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_curry___closed__0, &l_Lean_Meta_ArgsPacker_curry___closed__0_once, _init_l_Lean_Meta_ArgsPacker_curry___closed__0);
v___x_3375_ = l_Lean_Meta_PProdN_mk(v___x_3374_, v_a_3373_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
return v___x_3375_;
}
else
{
lean_object* v_a_3376_; lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3383_; 
v_a_3376_ = lean_ctor_get(v___x_3372_, 0);
v_isSharedCheck_3383_ = !lean_is_exclusive(v___x_3372_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3378_ = v___x_3372_;
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
else
{
lean_inc(v_a_3376_);
lean_dec(v___x_3372_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
v_resetjp_3377_:
{
lean_object* v___x_3381_; 
if (v_isShared_3379_ == 0)
{
v___x_3381_ = v___x_3378_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v_a_3376_);
v___x_3381_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
return v___x_3381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curry___boxed(lean_object* v_argsPacker_3384_, lean_object* v_e_3385_, lean_object* v_a_3386_, lean_object* v_a_3387_, lean_object* v_a_3388_, lean_object* v_a_3389_, lean_object* v_a_3390_){
_start:
{
lean_object* v_res_3391_; 
v_res_3391_ = l_Lean_Meta_ArgsPacker_curry(v_argsPacker_3384_, v_e_3385_, v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_);
lean_dec(v_a_3389_);
lean_dec_ref(v_a_3388_);
lean_dec(v_a_3387_);
lean_dec_ref(v_a_3386_);
lean_dec_ref(v_argsPacker_3384_);
return v_res_3391_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0(lean_object* v_upperBound_3392_, lean_object* v_argsPacker_3393_, lean_object* v_e_3394_, lean_object* v_inst_3395_, lean_object* v_R_3396_, lean_object* v_a_3397_, lean_object* v_b_3398_, lean_object* v_c_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_){
_start:
{
lean_object* v___x_3405_; 
v___x_3405_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___redArg(v_upperBound_3392_, v_argsPacker_3393_, v_e_3394_, v_a_3397_, v_b_3398_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_);
return v___x_3405_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___boxed(lean_object* v_upperBound_3406_, lean_object* v_argsPacker_3407_, lean_object* v_e_3408_, lean_object* v_inst_3409_, lean_object* v_R_3410_, lean_object* v_a_3411_, lean_object* v_b_3412_, lean_object* v_c_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_){
_start:
{
lean_object* v_res_3419_; 
v_res_3419_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0(v_upperBound_3406_, v_argsPacker_3407_, v_e_3408_, v_inst_3409_, v_R_3410_, v_a_3411_, v_b_3412_, v_c_3413_, v___y_3414_, v___y_3415_, v___y_3416_, v___y_3417_);
lean_dec(v___y_3417_);
lean_dec_ref(v___y_3416_);
lean_dec(v___y_3415_);
lean_dec_ref(v___y_3414_);
lean_dec_ref(v_argsPacker_3407_);
lean_dec(v_upperBound_3406_);
return v_res_3419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg___lam__0___boxed(lean_object* v_a_3420_, lean_object* v_argsPacker_3421_, lean_object* v_name_3422_, lean_object* v_k_3423_, lean_object* v_tail_3424_, lean_object* v_x_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_){
_start:
{
lean_object* v_res_3431_; 
v_res_3431_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg___lam__0(v_a_3420_, v_argsPacker_3421_, v_name_3422_, v_k_3423_, v_tail_3424_, v_x_3425_, v___y_3426_, v___y_3427_, v___y_3428_, v___y_3429_);
lean_dec(v___y_3429_);
lean_dec_ref(v___y_3428_);
lean_dec(v___y_3427_);
lean_dec_ref(v___y_3426_);
return v_res_3431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg(lean_object* v_argsPacker_3432_, lean_object* v_name_3433_, lean_object* v_k_3434_, lean_object* v_a_3435_, lean_object* v_a_3436_, lean_object* v_a_3437_, lean_object* v_a_3438_, lean_object* v_a_3439_, lean_object* v_a_3440_){
_start:
{
if (lean_obj_tag(v_a_3435_) == 0)
{
lean_object* v___x_3442_; 
lean_dec(v_name_3433_);
lean_dec_ref(v_argsPacker_3432_);
lean_inc(v_a_3440_);
lean_inc_ref(v_a_3439_);
lean_inc(v_a_3438_);
lean_inc_ref(v_a_3437_);
v___x_3442_ = lean_apply_6(v_k_3434_, v_a_3436_, v_a_3437_, v_a_3438_, v_a_3439_, v_a_3440_, lean_box(0));
return v___x_3442_;
}
else
{
lean_object* v_head_3443_; lean_object* v_tail_3444_; lean_object* v___f_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; uint8_t v___x_3448_; 
v_head_3443_ = lean_ctor_get(v_a_3435_, 0);
lean_inc(v_head_3443_);
v_tail_3444_ = lean_ctor_get(v_a_3435_, 1);
lean_inc(v_tail_3444_);
lean_dec_ref(v_a_3435_);
lean_inc(v_name_3433_);
lean_inc_ref(v_argsPacker_3432_);
lean_inc_ref(v_a_3436_);
v___f_3445_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_3445_, 0, v_a_3436_);
lean_closure_set(v___f_3445_, 1, v_argsPacker_3432_);
lean_closure_set(v___f_3445_, 2, v_name_3433_);
lean_closure_set(v___f_3445_, 3, v_k_3434_);
lean_closure_set(v___f_3445_, 4, v_tail_3444_);
v___x_3446_ = lean_array_get_size(v_argsPacker_3432_);
lean_dec_ref(v_argsPacker_3432_);
v___x_3447_ = lean_unsigned_to_nat(1u);
v___x_3448_ = lean_nat_dec_eq(v___x_3446_, v___x_3447_);
if (v___x_3448_ == 0)
{
uint8_t v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; 
v___x_3449_ = 1;
v___x_3450_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3433_, v___x_3449_);
v___x_3451_ = lean_array_get_size(v_a_3436_);
lean_dec_ref(v_a_3436_);
v___x_3452_ = lean_nat_add(v___x_3451_, v___x_3447_);
v___x_3453_ = l_Nat_reprFast(v___x_3452_);
v___x_3454_ = lean_string_append(v___x_3450_, v___x_3453_);
lean_dec_ref(v___x_3453_);
v___x_3455_ = lean_box(0);
v___x_3456_ = l_Lean_Name_str___override(v___x_3455_, v___x_3454_);
v___x_3457_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v___x_3456_, v_head_3443_, v___f_3445_, v_a_3437_, v_a_3438_, v_a_3439_, v_a_3440_);
return v___x_3457_;
}
else
{
lean_object* v___x_3458_; 
lean_dec_ref(v_a_3436_);
v___x_3458_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_name_3433_, v_head_3443_, v___f_3445_, v_a_3437_, v_a_3438_, v_a_3439_, v_a_3440_);
return v___x_3458_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg___lam__0(lean_object* v_a_3459_, lean_object* v_argsPacker_3460_, lean_object* v_name_3461_, lean_object* v_k_3462_, lean_object* v_tail_3463_, lean_object* v_x_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_){
_start:
{
lean_object* v___x_3470_; lean_object* v___x_3471_; 
v___x_3470_ = lean_array_push(v_a_3459_, v_x_3464_);
v___x_3471_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg(v_argsPacker_3460_, v_name_3461_, v_k_3462_, v_tail_3463_, v___x_3470_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_);
return v___x_3471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg___boxed(lean_object* v_argsPacker_3472_, lean_object* v_name_3473_, lean_object* v_k_3474_, lean_object* v_a_3475_, lean_object* v_a_3476_, lean_object* v_a_3477_, lean_object* v_a_3478_, lean_object* v_a_3479_, lean_object* v_a_3480_, lean_object* v_a_3481_){
_start:
{
lean_object* v_res_3482_; 
v_res_3482_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg(v_argsPacker_3472_, v_name_3473_, v_k_3474_, v_a_3475_, v_a_3476_, v_a_3477_, v_a_3478_, v_a_3479_, v_a_3480_);
lean_dec(v_a_3480_);
lean_dec_ref(v_a_3479_);
lean_dec(v_a_3478_);
lean_dec_ref(v_a_3477_);
return v_res_3482_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go(lean_object* v_00_u03b1_3483_, lean_object* v_argsPacker_3484_, lean_object* v_name_3485_, lean_object* v_k_3486_, lean_object* v_a_3487_, lean_object* v_a_3488_, lean_object* v_a_3489_, lean_object* v_a_3490_, lean_object* v_a_3491_, lean_object* v_a_3492_){
_start:
{
lean_object* v___x_3494_; 
v___x_3494_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg(v_argsPacker_3484_, v_name_3485_, v_k_3486_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3494_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___boxed(lean_object* v_00_u03b1_3495_, lean_object* v_argsPacker_3496_, lean_object* v_name_3497_, lean_object* v_k_3498_, lean_object* v_a_3499_, lean_object* v_a_3500_, lean_object* v_a_3501_, lean_object* v_a_3502_, lean_object* v_a_3503_, lean_object* v_a_3504_, lean_object* v_a_3505_){
_start:
{
lean_object* v_res_3506_; 
v_res_3506_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go(v_00_u03b1_3495_, v_argsPacker_3496_, v_name_3497_, v_k_3498_, v_a_3499_, v_a_3500_, v_a_3501_, v_a_3502_, v_a_3503_, v_a_3504_);
lean_dec(v_a_3504_);
lean_dec_ref(v_a_3503_);
lean_dec(v_a_3502_);
lean_dec_ref(v_a_3501_);
return v_res_3506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___redArg(lean_object* v_argsPacker_3507_, lean_object* v_name_3508_, lean_object* v_type_3509_, lean_object* v_k_3510_, lean_object* v_a_3511_, lean_object* v_a_3512_, lean_object* v_a_3513_, lean_object* v_a_3514_){
_start:
{
lean_object* v___x_3516_; 
v___x_3516_ = l_Lean_Meta_ArgsPacker_curryType(v_argsPacker_3507_, v_type_3509_, v_a_3511_, v_a_3512_, v_a_3513_, v_a_3514_);
if (lean_obj_tag(v___x_3516_) == 0)
{
lean_object* v_a_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; 
v_a_3517_ = lean_ctor_get(v___x_3516_, 0);
lean_inc(v_a_3517_);
lean_dec_ref(v___x_3516_);
v___x_3518_ = lean_array_to_list(v_a_3517_);
v___x_3519_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0, &l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0_once, _init_l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0);
v___x_3520_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg(v_argsPacker_3507_, v_name_3508_, v_k_3510_, v___x_3518_, v___x_3519_, v_a_3511_, v_a_3512_, v_a_3513_, v_a_3514_);
return v___x_3520_;
}
else
{
lean_object* v_a_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3528_; 
lean_dec_ref(v_k_3510_);
lean_dec(v_name_3508_);
lean_dec_ref(v_argsPacker_3507_);
v_a_3521_ = lean_ctor_get(v___x_3516_, 0);
v_isSharedCheck_3528_ = !lean_is_exclusive(v___x_3516_);
if (v_isSharedCheck_3528_ == 0)
{
v___x_3523_ = v___x_3516_;
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_a_3521_);
lean_dec(v___x_3516_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
lean_object* v___x_3526_; 
if (v_isShared_3524_ == 0)
{
v___x_3526_ = v___x_3523_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v_a_3521_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
return v___x_3526_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___redArg___boxed(lean_object* v_argsPacker_3529_, lean_object* v_name_3530_, lean_object* v_type_3531_, lean_object* v_k_3532_, lean_object* v_a_3533_, lean_object* v_a_3534_, lean_object* v_a_3535_, lean_object* v_a_3536_, lean_object* v_a_3537_){
_start:
{
lean_object* v_res_3538_; 
v_res_3538_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___redArg(v_argsPacker_3529_, v_name_3530_, v_type_3531_, v_k_3532_, v_a_3533_, v_a_3534_, v_a_3535_, v_a_3536_);
lean_dec(v_a_3536_);
lean_dec_ref(v_a_3535_);
lean_dec(v_a_3534_);
lean_dec_ref(v_a_3533_);
return v_res_3538_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl(lean_object* v_00_u03b1_3539_, lean_object* v_argsPacker_3540_, lean_object* v_name_3541_, lean_object* v_type_3542_, lean_object* v_k_3543_, lean_object* v_a_3544_, lean_object* v_a_3545_, lean_object* v_a_3546_, lean_object* v_a_3547_){
_start:
{
lean_object* v___x_3549_; 
v___x_3549_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___redArg(v_argsPacker_3540_, v_name_3541_, v_type_3542_, v_k_3543_, v_a_3544_, v_a_3545_, v_a_3546_, v_a_3547_);
return v___x_3549_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___boxed(lean_object* v_00_u03b1_3550_, lean_object* v_argsPacker_3551_, lean_object* v_name_3552_, lean_object* v_type_3553_, lean_object* v_k_3554_, lean_object* v_a_3555_, lean_object* v_a_3556_, lean_object* v_a_3557_, lean_object* v_a_3558_, lean_object* v_a_3559_){
_start:
{
lean_object* v_res_3560_; 
v_res_3560_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl(v_00_u03b1_3550_, v_argsPacker_3551_, v_name_3552_, v_type_3553_, v_k_3554_, v_a_3555_, v_a_3556_, v_a_3557_, v_a_3558_);
lean_dec(v_a_3558_);
lean_dec_ref(v_a_3557_);
lean_dec(v_a_3556_);
lean_dec_ref(v_a_3555_);
return v_res_3560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___lam__0(lean_object* v_argsPacker_3561_, lean_object* v_packedMotiveType_3562_, lean_object* v_type_3563_, lean_object* v_value_3564_, lean_object* v_k_3565_, lean_object* v_motives_3566_, lean_object* v___y_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_, lean_object* v___y_3570_){
_start:
{
lean_object* v___x_3572_; 
v___x_3572_ = l_Lean_Meta_ArgsPacker_uncurryWithType(v_argsPacker_3561_, v_packedMotiveType_3562_, v_motives_3566_, v___y_3567_, v___y_3568_, v___y_3569_, v___y_3570_);
if (lean_obj_tag(v___x_3572_) == 0)
{
lean_object* v_a_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; 
v_a_3573_ = lean_ctor_get(v___x_3572_, 0);
lean_inc_n(v_a_3573_, 2);
lean_dec_ref(v___x_3572_);
v___x_3574_ = lean_unsigned_to_nat(1u);
v___x_3575_ = lean_mk_empty_array_with_capacity(v___x_3574_);
v___x_3576_ = lean_array_push(v___x_3575_, v_a_3573_);
v___x_3577_ = l_Lean_Meta_instantiateForall(v_type_3563_, v___x_3576_, v___y_3567_, v___y_3568_, v___y_3569_, v___y_3570_);
lean_dec_ref(v___x_3576_);
if (lean_obj_tag(v___x_3577_) == 0)
{
lean_object* v_a_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; 
v_a_3578_ = lean_ctor_get(v___x_3577_, 0);
lean_inc(v_a_3578_);
lean_dec_ref(v___x_3577_);
v___x_3579_ = l_Lean_Expr_app___override(v_value_3564_, v_a_3573_);
lean_inc(v___y_3570_);
lean_inc_ref(v___y_3569_);
lean_inc(v___y_3568_);
lean_inc_ref(v___y_3567_);
v___x_3580_ = lean_apply_8(v_k_3565_, v_motives_3566_, v___x_3579_, v_a_3578_, v___y_3567_, v___y_3568_, v___y_3569_, v___y_3570_, lean_box(0));
return v___x_3580_;
}
else
{
lean_object* v_a_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3588_; 
lean_dec(v_a_3573_);
lean_dec_ref(v_motives_3566_);
lean_dec_ref(v_k_3565_);
lean_dec_ref(v_value_3564_);
v_a_3581_ = lean_ctor_get(v___x_3577_, 0);
v_isSharedCheck_3588_ = !lean_is_exclusive(v___x_3577_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3583_ = v___x_3577_;
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_a_3581_);
lean_dec(v___x_3577_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
lean_object* v___x_3586_; 
if (v_isShared_3584_ == 0)
{
v___x_3586_ = v___x_3583_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v_a_3581_);
v___x_3586_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
return v___x_3586_;
}
}
}
}
else
{
lean_object* v_a_3589_; lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3596_; 
lean_dec_ref(v_motives_3566_);
lean_dec_ref(v_k_3565_);
lean_dec_ref(v_value_3564_);
lean_dec_ref(v_type_3563_);
v_a_3589_ = lean_ctor_get(v___x_3572_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v___x_3572_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3591_ = v___x_3572_;
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
else
{
lean_inc(v_a_3589_);
lean_dec(v___x_3572_);
v___x_3591_ = lean_box(0);
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
v_resetjp_3590_:
{
lean_object* v___x_3594_; 
if (v_isShared_3592_ == 0)
{
v___x_3594_ = v___x_3591_;
goto v_reusejp_3593_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v_a_3589_);
v___x_3594_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3593_;
}
v_reusejp_3593_:
{
return v___x_3594_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___lam__0___boxed(lean_object* v_argsPacker_3597_, lean_object* v_packedMotiveType_3598_, lean_object* v_type_3599_, lean_object* v_value_3600_, lean_object* v_k_3601_, lean_object* v_motives_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_){
_start:
{
lean_object* v_res_3608_; 
v_res_3608_ = l_Lean_Meta_ArgsPacker_curryParam___redArg___lam__0(v_argsPacker_3597_, v_packedMotiveType_3598_, v_type_3599_, v_value_3600_, v_k_3601_, v_motives_3602_, v___y_3603_, v___y_3604_, v___y_3605_, v___y_3606_);
lean_dec(v___y_3606_);
lean_dec_ref(v___y_3605_);
lean_dec(v___y_3604_);
lean_dec_ref(v___y_3603_);
lean_dec_ref(v_argsPacker_3597_);
return v_res_3608_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__0(void){
_start:
{
lean_object* v___x_3609_; 
v___x_3609_ = lean_mk_string_unchecked("curryParam: unexpected packed motive, not a forall", 50, 50);
return v___x_3609_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__1(void){
_start:
{
lean_object* v___x_3610_; lean_object* v___x_3611_; 
v___x_3610_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__0, &l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__0_once, _init_l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__0);
v___x_3611_ = l_Lean_stringToMessageData(v___x_3610_);
return v___x_3611_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__2(void){
_start:
{
lean_object* v___x_3612_; 
v___x_3612_ = lean_mk_string_unchecked("curryParam: expected forall, got ", 33, 33);
return v___x_3612_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__3(void){
_start:
{
lean_object* v___x_3613_; lean_object* v___x_3614_; 
v___x_3613_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__2, &l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__2_once, _init_l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__2);
v___x_3614_ = l_Lean_stringToMessageData(v___x_3613_);
return v___x_3614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg(lean_object* v_argsPacker_3615_, lean_object* v_value_3616_, lean_object* v_type_3617_, lean_object* v_k_3618_, lean_object* v_a_3619_, lean_object* v_a_3620_, lean_object* v_a_3621_, lean_object* v_a_3622_){
_start:
{
lean_object* v___y_3625_; lean_object* v___y_3626_; lean_object* v___y_3627_; lean_object* v___y_3628_; lean_object* v___y_3629_; lean_object* v___y_3630_; lean_object* v___y_3634_; lean_object* v___y_3635_; lean_object* v___y_3636_; lean_object* v___y_3637_; uint8_t v___x_3653_; 
v___x_3653_ = l_Lean_Expr_isForall(v_type_3617_);
if (v___x_3653_ == 0)
{
lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v_a_3658_; lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3665_; 
lean_dec_ref(v_k_3618_);
lean_dec_ref(v_value_3616_);
lean_dec_ref(v_argsPacker_3615_);
v___x_3654_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__3, &l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__3_once, _init_l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__3);
v___x_3655_ = l_Lean_MessageData_ofExpr(v_type_3617_);
v___x_3656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3656_, 0, v___x_3654_);
lean_ctor_set(v___x_3656_, 1, v___x_3655_);
v___x_3657_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_3656_, v_a_3619_, v_a_3620_, v_a_3621_, v_a_3622_);
v_a_3658_ = lean_ctor_get(v___x_3657_, 0);
v_isSharedCheck_3665_ = !lean_is_exclusive(v___x_3657_);
if (v_isSharedCheck_3665_ == 0)
{
v___x_3660_ = v___x_3657_;
v_isShared_3661_ = v_isSharedCheck_3665_;
goto v_resetjp_3659_;
}
else
{
lean_inc(v_a_3658_);
lean_dec(v___x_3657_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3665_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
lean_object* v___x_3663_; 
if (v_isShared_3661_ == 0)
{
v___x_3663_ = v___x_3660_;
goto v_reusejp_3662_;
}
else
{
lean_object* v_reuseFailAlloc_3664_; 
v_reuseFailAlloc_3664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3664_, 0, v_a_3658_);
v___x_3663_ = v_reuseFailAlloc_3664_;
goto v_reusejp_3662_;
}
v_reusejp_3662_:
{
return v___x_3663_;
}
}
}
else
{
v___y_3634_ = v_a_3619_;
v___y_3635_ = v_a_3620_;
v___y_3636_ = v_a_3621_;
v___y_3637_ = v_a_3622_;
goto v___jp_3633_;
}
v___jp_3624_:
{
lean_object* v___x_3631_; lean_object* v___x_3632_; 
v___x_3631_ = l_Lean_Expr_bindingName_x21(v_type_3617_);
lean_dec_ref(v_type_3617_);
v___x_3632_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___redArg(v_argsPacker_3615_, v___x_3631_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_, v___y_3630_);
return v___x_3632_;
}
v___jp_3633_:
{
lean_object* v_packedMotiveType_3638_; lean_object* v___f_3639_; uint8_t v___x_3640_; 
v_packedMotiveType_3638_ = l_Lean_Expr_bindingDomain_x21(v_type_3617_);
lean_inc_ref(v_type_3617_);
lean_inc_ref(v_packedMotiveType_3638_);
lean_inc_ref(v_argsPacker_3615_);
v___f_3639_ = lean_alloc_closure((void*)(l_Lean_Meta_ArgsPacker_curryParam___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_3639_, 0, v_argsPacker_3615_);
lean_closure_set(v___f_3639_, 1, v_packedMotiveType_3638_);
lean_closure_set(v___f_3639_, 2, v_type_3617_);
lean_closure_set(v___f_3639_, 3, v_value_3616_);
lean_closure_set(v___f_3639_, 4, v_k_3618_);
v___x_3640_ = l_Lean_Expr_isForall(v_packedMotiveType_3638_);
if (v___x_3640_ == 0)
{
lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v_a_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3652_; 
lean_dec_ref(v___f_3639_);
lean_dec_ref(v_type_3617_);
lean_dec_ref(v_argsPacker_3615_);
v___x_3641_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__1, &l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__1_once, _init_l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__1);
v___x_3642_ = l_Lean_indentExpr(v_packedMotiveType_3638_);
v___x_3643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3643_, 0, v___x_3641_);
lean_ctor_set(v___x_3643_, 1, v___x_3642_);
v___x_3644_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_3643_, v___y_3634_, v___y_3635_, v___y_3636_, v___y_3637_);
v_a_3645_ = lean_ctor_get(v___x_3644_, 0);
v_isSharedCheck_3652_ = !lean_is_exclusive(v___x_3644_);
if (v_isSharedCheck_3652_ == 0)
{
v___x_3647_ = v___x_3644_;
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_a_3645_);
lean_dec(v___x_3644_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v___x_3650_; 
if (v_isShared_3648_ == 0)
{
v___x_3650_ = v___x_3647_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v_a_3645_);
v___x_3650_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
return v___x_3650_;
}
}
}
else
{
v___y_3625_ = v_packedMotiveType_3638_;
v___y_3626_ = v___f_3639_;
v___y_3627_ = v___y_3634_;
v___y_3628_ = v___y_3635_;
v___y_3629_ = v___y_3636_;
v___y_3630_ = v___y_3637_;
goto v___jp_3624_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___boxed(lean_object* v_argsPacker_3666_, lean_object* v_value_3667_, lean_object* v_type_3668_, lean_object* v_k_3669_, lean_object* v_a_3670_, lean_object* v_a_3671_, lean_object* v_a_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_){
_start:
{
lean_object* v_res_3675_; 
v_res_3675_ = l_Lean_Meta_ArgsPacker_curryParam___redArg(v_argsPacker_3666_, v_value_3667_, v_type_3668_, v_k_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_);
lean_dec(v_a_3673_);
lean_dec_ref(v_a_3672_);
lean_dec(v_a_3671_);
lean_dec_ref(v_a_3670_);
return v_res_3675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam(lean_object* v_00_u03b1_3676_, lean_object* v_argsPacker_3677_, lean_object* v_value_3678_, lean_object* v_type_3679_, lean_object* v_k_3680_, lean_object* v_a_3681_, lean_object* v_a_3682_, lean_object* v_a_3683_, lean_object* v_a_3684_){
_start:
{
lean_object* v___x_3686_; 
v___x_3686_ = l_Lean_Meta_ArgsPacker_curryParam___redArg(v_argsPacker_3677_, v_value_3678_, v_type_3679_, v_k_3680_, v_a_3681_, v_a_3682_, v_a_3683_, v_a_3684_);
return v___x_3686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___boxed(lean_object* v_00_u03b1_3687_, lean_object* v_argsPacker_3688_, lean_object* v_value_3689_, lean_object* v_type_3690_, lean_object* v_k_3691_, lean_object* v_a_3692_, lean_object* v_a_3693_, lean_object* v_a_3694_, lean_object* v_a_3695_, lean_object* v_a_3696_){
_start:
{
lean_object* v_res_3697_; 
v_res_3697_ = l_Lean_Meta_ArgsPacker_curryParam(v_00_u03b1_3687_, v_argsPacker_3688_, v_value_3689_, v_type_3690_, v_k_3691_, v_a_3692_, v_a_3693_, v_a_3694_, v_a_3695_);
lean_dec(v_a_3695_);
lean_dec_ref(v_a_3694_);
lean_dec(v_a_3693_);
lean_dec_ref(v_a_3692_);
return v_res_3697_;
}
}
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_ArgsPacker_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_ArgsPacker(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ArgsPacker_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_ArgsPacker(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* initialize_Lean_Meta_ArgsPacker_Basic(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_ArgsPacker(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ArgsPacker_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ArgsPacker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_ArgsPacker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_ArgsPacker(builtin);
}
#ifdef __cplusplus
}
#endif
