// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.ReflCmp
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.SynthInstance import Lean.Meta.Tactic.Grind.Util
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
lean_object* l_Lean_Meta_Grind_getBinOp(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint64_t l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_decLevel_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstanceMeta_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_Grind_isEqv___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getOrderingEqExpr___redArg(lean_object*);
lean_object* lean_grind_mk_eq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getReflCmpThm_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getReflCmpThm_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getReflCmpThm_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getReflCmpThm_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateReflCmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateReflCmp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Std", 3, 3);
return v___x_1_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("ReflCmp", 7, 7);
return v___x_2_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__2(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__1, &l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__1);
v___x_4_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__0);
v___x_5_ = l_Lean_Name_mkStr2(v___x_4_, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__3(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_mk_string_unchecked("Ordering", 8, 8);
return v___x_6_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__4(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__3, &l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__3);
v___x_8_ = l_Lean_Name_mkStr1(v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__5(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_mk_string_unchecked("cmp_eq_of_eq", 12, 12);
return v___x_9_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__6(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_10_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__5, &l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__5);
v___x_11_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__1, &l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__1);
v___x_12_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__0);
v___x_13_ = l_Lean_Name_mkStr3(v___x_12_, v___x_11_, v___x_10_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f(lean_object* v_op_14_, lean_object* v_a_15_, lean_object* v_a_16_, lean_object* v_a_17_, lean_object* v_a_18_){
_start:
{
lean_object* v___x_20_; lean_object* v_env_21_; lean_object* v___x_22_; uint8_t v___x_23_; uint8_t v___x_24_; 
v___x_20_ = lean_st_ref_get(v_a_18_);
v_env_21_ = lean_ctor_get(v___x_20_, 0);
lean_inc_ref(v_env_21_);
lean_dec(v___x_20_);
v___x_22_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__2, &l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__2);
v___x_23_ = 1;
v___x_24_ = l_Lean_Environment_contains(v_env_21_, v___x_22_, v___x_23_);
if (v___x_24_ == 0)
{
lean_object* v___x_25_; lean_object* v___x_26_; 
lean_dec_ref(v_op_14_);
v___x_25_ = lean_box(0);
v___x_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
return v___x_26_;
}
else
{
lean_object* v___x_27_; 
lean_inc(v_a_18_);
lean_inc_ref(v_a_17_);
lean_inc(v_a_16_);
lean_inc_ref(v_a_15_);
lean_inc_ref(v_op_14_);
v___x_27_ = lean_infer_type(v_op_14_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
if (lean_obj_tag(v___x_27_) == 0)
{
lean_object* v_a_28_; lean_object* v___x_29_; 
v_a_28_ = lean_ctor_get(v___x_27_, 0);
lean_inc(v_a_28_);
lean_dec_ref(v___x_27_);
lean_inc(v_a_18_);
lean_inc_ref(v_a_17_);
lean_inc(v_a_16_);
lean_inc_ref(v_a_15_);
v___x_29_ = lean_whnf(v_a_28_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
if (lean_obj_tag(v___x_29_) == 0)
{
lean_object* v_a_30_; lean_object* v___x_32_; uint8_t v_isShared_33_; uint8_t v_isSharedCheck_147_; 
v_a_30_ = lean_ctor_get(v___x_29_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_147_ == 0)
{
v___x_32_ = v___x_29_;
v_isShared_33_ = v_isSharedCheck_147_;
goto v_resetjp_31_;
}
else
{
lean_inc(v_a_30_);
lean_dec(v___x_29_);
v___x_32_ = lean_box(0);
v_isShared_33_ = v_isSharedCheck_147_;
goto v_resetjp_31_;
}
v_resetjp_31_:
{
if (lean_obj_tag(v_a_30_) == 7)
{
lean_object* v_binderType_34_; lean_object* v_body_35_; uint8_t v___x_36_; 
v_binderType_34_ = lean_ctor_get(v_a_30_, 1);
lean_inc_ref(v_binderType_34_);
v_body_35_ = lean_ctor_get(v_a_30_, 2);
lean_inc_ref(v_body_35_);
lean_dec_ref(v_a_30_);
v___x_36_ = l_Lean_Expr_hasLooseBVars(v_body_35_);
if (v___x_36_ == 0)
{
lean_object* v___x_37_; 
lean_del_object(v___x_32_);
lean_inc(v_a_18_);
lean_inc_ref(v_a_17_);
lean_inc(v_a_16_);
lean_inc_ref(v_a_15_);
v___x_37_ = lean_whnf(v_body_35_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
if (lean_obj_tag(v___x_37_) == 0)
{
lean_object* v_a_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_130_; 
v_a_38_ = lean_ctor_get(v___x_37_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_37_);
if (v_isSharedCheck_130_ == 0)
{
v___x_40_ = v___x_37_;
v_isShared_41_ = v_isSharedCheck_130_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_a_38_);
lean_dec(v___x_37_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_130_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
if (lean_obj_tag(v_a_38_) == 7)
{
lean_object* v_binderType_42_; lean_object* v_body_43_; lean_object* v___x_44_; uint8_t v___x_45_; 
v_binderType_42_ = lean_ctor_get(v_a_38_, 1);
lean_inc_ref(v_binderType_42_);
v_body_43_ = lean_ctor_get(v_a_38_, 2);
lean_inc_ref(v_body_43_);
lean_dec_ref(v_a_38_);
v___x_44_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__4, &l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__4);
v___x_45_ = l_Lean_Expr_isConstOf(v_body_43_, v___x_44_);
lean_dec_ref(v_body_43_);
if (v___x_45_ == 0)
{
lean_object* v___x_46_; lean_object* v___x_48_; 
lean_dec_ref(v_binderType_42_);
lean_dec_ref(v_binderType_34_);
lean_dec_ref(v_op_14_);
v___x_46_ = lean_box(0);
if (v_isShared_41_ == 0)
{
lean_ctor_set(v___x_40_, 0, v___x_46_);
v___x_48_ = v___x_40_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v___x_46_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
}
}
else
{
lean_object* v___x_50_; 
lean_del_object(v___x_40_);
lean_inc_ref(v_binderType_34_);
v___x_50_ = l_Lean_Meta_isExprDefEq(v_binderType_34_, v_binderType_42_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
if (lean_obj_tag(v___x_50_) == 0)
{
lean_object* v_a_51_; lean_object* v___x_53_; uint8_t v_isShared_54_; uint8_t v_isSharedCheck_117_; 
v_a_51_ = lean_ctor_get(v___x_50_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v___x_50_);
if (v_isSharedCheck_117_ == 0)
{
v___x_53_ = v___x_50_;
v_isShared_54_ = v_isSharedCheck_117_;
goto v_resetjp_52_;
}
else
{
lean_inc(v_a_51_);
lean_dec(v___x_50_);
v___x_53_ = lean_box(0);
v_isShared_54_ = v_isSharedCheck_117_;
goto v_resetjp_52_;
}
v_resetjp_52_:
{
uint8_t v___x_55_; 
v___x_55_ = lean_unbox(v_a_51_);
lean_dec(v_a_51_);
if (v___x_55_ == 0)
{
lean_object* v___x_56_; lean_object* v___x_58_; 
lean_dec_ref(v_binderType_34_);
lean_dec_ref(v_op_14_);
v___x_56_ = lean_box(0);
if (v_isShared_54_ == 0)
{
lean_ctor_set(v___x_53_, 0, v___x_56_);
v___x_58_ = v___x_53_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_59_; 
v_reuseFailAlloc_59_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_59_, 0, v___x_56_);
v___x_58_ = v_reuseFailAlloc_59_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
return v___x_58_;
}
}
else
{
lean_object* v___x_60_; 
lean_del_object(v___x_53_);
lean_inc_ref(v_binderType_34_);
v___x_60_ = l_Lean_Meta_getLevel(v_binderType_34_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
if (lean_obj_tag(v___x_60_) == 0)
{
lean_object* v_a_61_; lean_object* v___x_62_; 
v_a_61_ = lean_ctor_get(v___x_60_, 0);
lean_inc(v_a_61_);
lean_dec_ref(v___x_60_);
v___x_62_ = l_Lean_Meta_decLevel_x3f(v_a_61_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
if (lean_obj_tag(v___x_62_) == 0)
{
lean_object* v_a_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_100_; 
v_a_63_ = lean_ctor_get(v___x_62_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v___x_62_);
if (v_isSharedCheck_100_ == 0)
{
v___x_65_ = v___x_62_;
v_isShared_66_ = v_isSharedCheck_100_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_a_63_);
lean_dec(v___x_62_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_100_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
if (lean_obj_tag(v_a_63_) == 1)
{
lean_object* v_val_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
lean_del_object(v___x_65_);
v_val_67_ = lean_ctor_get(v_a_63_, 0);
lean_inc(v_val_67_);
lean_dec_ref(v_a_63_);
v___x_68_ = lean_box(0);
v___x_69_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_69_, 0, v_val_67_);
lean_ctor_set(v___x_69_, 1, v___x_68_);
lean_inc_ref(v___x_69_);
v___x_70_ = l_Lean_mkConst(v___x_22_, v___x_69_);
lean_inc_ref(v_op_14_);
lean_inc_ref(v_binderType_34_);
v___x_71_ = l_Lean_mkAppB(v___x_70_, v_binderType_34_, v_op_14_);
v___x_72_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_71_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
if (lean_obj_tag(v___x_72_) == 0)
{
lean_object* v_a_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_95_; 
v_a_73_ = lean_ctor_get(v___x_72_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_72_);
if (v_isSharedCheck_95_ == 0)
{
v___x_75_ = v___x_72_;
v_isShared_76_ = v_isSharedCheck_95_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_a_73_);
lean_dec(v___x_72_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_95_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
if (lean_obj_tag(v_a_73_) == 1)
{
lean_object* v_val_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_90_; 
v_val_77_ = lean_ctor_get(v_a_73_, 0);
v_isSharedCheck_90_ = !lean_is_exclusive(v_a_73_);
if (v_isSharedCheck_90_ == 0)
{
v___x_79_ = v_a_73_;
v_isShared_80_ = v_isSharedCheck_90_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_val_77_);
lean_dec(v_a_73_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_90_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_85_; 
v___x_81_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__6, &l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___closed__6);
v___x_82_ = l_Lean_mkConst(v___x_81_, v___x_69_);
v___x_83_ = l_Lean_mkApp3(v___x_82_, v_binderType_34_, v_op_14_, v_val_77_);
if (v_isShared_80_ == 0)
{
lean_ctor_set(v___x_79_, 0, v___x_83_);
v___x_85_ = v___x_79_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v___x_83_);
v___x_85_ = v_reuseFailAlloc_89_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
lean_object* v___x_87_; 
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 0, v___x_85_);
v___x_87_ = v___x_75_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v___x_85_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
return v___x_87_;
}
}
}
}
else
{
lean_object* v___x_91_; lean_object* v___x_93_; 
lean_dec(v_a_73_);
lean_dec_ref(v___x_69_);
lean_dec_ref(v_binderType_34_);
lean_dec_ref(v_op_14_);
v___x_91_ = lean_box(0);
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 0, v___x_91_);
v___x_93_ = v___x_75_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v___x_91_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
}
else
{
lean_dec_ref(v___x_69_);
lean_dec_ref(v_binderType_34_);
lean_dec_ref(v_op_14_);
return v___x_72_;
}
}
else
{
lean_object* v___x_96_; lean_object* v___x_98_; 
lean_dec(v_a_63_);
lean_dec_ref(v_binderType_34_);
lean_dec_ref(v_op_14_);
v___x_96_ = lean_box(0);
if (v_isShared_66_ == 0)
{
lean_ctor_set(v___x_65_, 0, v___x_96_);
v___x_98_ = v___x_65_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v___x_96_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
}
}
else
{
lean_object* v_a_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_108_; 
lean_dec_ref(v_binderType_34_);
lean_dec_ref(v_op_14_);
v_a_101_ = lean_ctor_get(v___x_62_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v___x_62_);
if (v_isSharedCheck_108_ == 0)
{
v___x_103_ = v___x_62_;
v_isShared_104_ = v_isSharedCheck_108_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_a_101_);
lean_dec(v___x_62_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_108_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_106_; 
if (v_isShared_104_ == 0)
{
v___x_106_ = v___x_103_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v_a_101_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
else
{
lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_116_; 
lean_dec_ref(v_binderType_34_);
lean_dec_ref(v_op_14_);
v_a_109_ = lean_ctor_get(v___x_60_, 0);
v_isSharedCheck_116_ = !lean_is_exclusive(v___x_60_);
if (v_isSharedCheck_116_ == 0)
{
v___x_111_ = v___x_60_;
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v___x_60_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_114_; 
if (v_isShared_112_ == 0)
{
v___x_114_ = v___x_111_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v_a_109_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
}
}
}
else
{
lean_object* v_a_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_125_; 
lean_dec_ref(v_binderType_34_);
lean_dec_ref(v_op_14_);
v_a_118_ = lean_ctor_get(v___x_50_, 0);
v_isSharedCheck_125_ = !lean_is_exclusive(v___x_50_);
if (v_isSharedCheck_125_ == 0)
{
v___x_120_ = v___x_50_;
v_isShared_121_ = v_isSharedCheck_125_;
goto v_resetjp_119_;
}
else
{
lean_inc(v_a_118_);
lean_dec(v___x_50_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_125_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v___x_123_; 
if (v_isShared_121_ == 0)
{
v___x_123_ = v___x_120_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v_a_118_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
}
}
}
else
{
lean_object* v___x_126_; lean_object* v___x_128_; 
lean_dec(v_a_38_);
lean_dec_ref(v_binderType_34_);
lean_dec_ref(v_op_14_);
v___x_126_ = lean_box(0);
if (v_isShared_41_ == 0)
{
lean_ctor_set(v___x_40_, 0, v___x_126_);
v___x_128_ = v___x_40_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v___x_126_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
}
else
{
lean_object* v_a_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_138_; 
lean_dec_ref(v_binderType_34_);
lean_dec_ref(v_op_14_);
v_a_131_ = lean_ctor_get(v___x_37_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_37_);
if (v_isSharedCheck_138_ == 0)
{
v___x_133_ = v___x_37_;
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_a_131_);
lean_dec(v___x_37_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v___x_136_; 
if (v_isShared_134_ == 0)
{
v___x_136_ = v___x_133_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_a_131_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
}
else
{
lean_object* v___x_139_; lean_object* v___x_141_; 
lean_dec_ref(v_body_35_);
lean_dec_ref(v_binderType_34_);
lean_dec_ref(v_op_14_);
v___x_139_ = lean_box(0);
if (v_isShared_33_ == 0)
{
lean_ctor_set(v___x_32_, 0, v___x_139_);
v___x_141_ = v___x_32_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v___x_139_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
else
{
lean_object* v___x_143_; lean_object* v___x_145_; 
lean_dec(v_a_30_);
lean_dec_ref(v_op_14_);
v___x_143_ = lean_box(0);
if (v_isShared_33_ == 0)
{
lean_ctor_set(v___x_32_, 0, v___x_143_);
v___x_145_ = v___x_32_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v___x_143_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
}
else
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
lean_dec_ref(v_op_14_);
v_a_148_ = lean_ctor_get(v___x_29_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v___x_29_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_29_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_148_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
else
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_163_; 
lean_dec_ref(v_op_14_);
v_a_156_ = lean_ctor_get(v___x_27_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_27_);
if (v_isSharedCheck_163_ == 0)
{
v___x_158_ = v___x_27_;
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_27_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_156_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f___boxed(lean_object* v_op_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f(v_op_164_, v_a_165_, v_a_166_, v_a_167_, v_a_168_);
lean_dec(v_a_168_);
lean_dec_ref(v_a_167_);
lean_dec(v_a_166_);
lean_dec_ref(v_a_165_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_171_, lean_object* v_vals_172_, lean_object* v_i_173_, lean_object* v_k_174_){
_start:
{
lean_object* v___x_175_; uint8_t v___x_176_; 
v___x_175_ = lean_array_get_size(v_keys_171_);
v___x_176_ = lean_nat_dec_lt(v_i_173_, v___x_175_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; 
lean_dec(v_i_173_);
v___x_177_ = lean_box(0);
return v___x_177_;
}
else
{
lean_object* v_k_x27_178_; uint8_t v___x_179_; 
v_k_x27_178_ = lean_array_fget_borrowed(v_keys_171_, v_i_173_);
v___x_179_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_k_174_, v_k_x27_178_);
if (v___x_179_ == 0)
{
lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_180_ = lean_unsigned_to_nat(1u);
v___x_181_ = lean_nat_add(v_i_173_, v___x_180_);
lean_dec(v_i_173_);
v_i_173_ = v___x_181_;
goto _start;
}
else
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lean_array_fget_borrowed(v_vals_172_, v_i_173_);
lean_dec(v_i_173_);
lean_inc(v___x_183_);
v___x_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
return v___x_184_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_185_, lean_object* v_vals_186_, lean_object* v_i_187_, lean_object* v_k_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0_spec__1___redArg(v_keys_185_, v_vals_186_, v_i_187_, v_k_188_);
lean_dec_ref(v_k_188_);
lean_dec_ref(v_vals_186_);
lean_dec_ref(v_keys_185_);
return v_res_189_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_190_; size_t v___x_191_; size_t v___x_192_; 
v___x_190_ = ((size_t)5ULL);
v___x_191_ = ((size_t)1ULL);
v___x_192_ = lean_usize_shift_left(v___x_191_, v___x_190_);
return v___x_192_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_193_; size_t v___x_194_; size_t v___x_195_; 
v___x_193_ = ((size_t)1ULL);
v___x_194_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg___closed__0);
v___x_195_ = lean_usize_sub(v___x_194_, v___x_193_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg(lean_object* v_x_196_, size_t v_x_197_, lean_object* v_x_198_){
_start:
{
if (lean_obj_tag(v_x_196_) == 0)
{
lean_object* v_es_199_; lean_object* v___x_200_; size_t v___x_201_; size_t v___x_202_; size_t v___x_203_; lean_object* v_j_204_; lean_object* v___x_205_; 
v_es_199_ = lean_ctor_get(v_x_196_, 0);
v___x_200_ = lean_box(2);
v___x_201_ = ((size_t)5ULL);
v___x_202_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg___closed__1);
v___x_203_ = lean_usize_land(v_x_197_, v___x_202_);
v_j_204_ = lean_usize_to_nat(v___x_203_);
v___x_205_ = lean_array_get_borrowed(v___x_200_, v_es_199_, v_j_204_);
lean_dec(v_j_204_);
switch(lean_obj_tag(v___x_205_))
{
case 0:
{
lean_object* v_key_206_; lean_object* v_val_207_; uint8_t v___x_208_; 
v_key_206_ = lean_ctor_get(v___x_205_, 0);
v_val_207_ = lean_ctor_get(v___x_205_, 1);
v___x_208_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_198_, v_key_206_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; 
v___x_209_ = lean_box(0);
return v___x_209_;
}
else
{
lean_object* v___x_210_; 
lean_inc(v_val_207_);
v___x_210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_210_, 0, v_val_207_);
return v___x_210_;
}
}
case 1:
{
lean_object* v_node_211_; size_t v___x_212_; 
v_node_211_ = lean_ctor_get(v___x_205_, 0);
v___x_212_ = lean_usize_shift_right(v_x_197_, v___x_201_);
v_x_196_ = v_node_211_;
v_x_197_ = v___x_212_;
goto _start;
}
default: 
{
lean_object* v___x_214_; 
v___x_214_ = lean_box(0);
return v___x_214_;
}
}
}
else
{
lean_object* v_ks_215_; lean_object* v_vs_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v_ks_215_ = lean_ctor_get(v_x_196_, 0);
v_vs_216_ = lean_ctor_get(v_x_196_, 1);
v___x_217_ = lean_unsigned_to_nat(0u);
v___x_218_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0_spec__1___redArg(v_ks_215_, v_vs_216_, v___x_217_, v_x_198_);
return v___x_218_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_219_, lean_object* v_x_220_, lean_object* v_x_221_){
_start:
{
size_t v_x_4772__boxed_222_; lean_object* v_res_223_; 
v_x_4772__boxed_222_ = lean_unbox_usize(v_x_220_);
lean_dec(v_x_220_);
v_res_223_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg(v_x_219_, v_x_4772__boxed_222_, v_x_221_);
lean_dec_ref(v_x_221_);
lean_dec_ref(v_x_219_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0___redArg(lean_object* v_x_224_, lean_object* v_x_225_){
_start:
{
uint64_t v___x_226_; size_t v___x_227_; lean_object* v___x_228_; 
v___x_226_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_225_);
v___x_227_ = lean_uint64_to_usize(v___x_226_);
v___x_228_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg(v_x_224_, v___x_227_, v_x_225_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0___redArg___boxed(lean_object* v_x_229_, lean_object* v_x_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0___redArg(v_x_229_, v_x_230_);
lean_dec_ref(v_x_230_);
lean_dec_ref(v_x_229_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_232_, lean_object* v_x_233_, lean_object* v_x_234_, lean_object* v_x_235_){
_start:
{
lean_object* v_ks_236_; lean_object* v_vs_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_261_; 
v_ks_236_ = lean_ctor_get(v_x_232_, 0);
v_vs_237_ = lean_ctor_get(v_x_232_, 1);
v_isSharedCheck_261_ = !lean_is_exclusive(v_x_232_);
if (v_isSharedCheck_261_ == 0)
{
v___x_239_ = v_x_232_;
v_isShared_240_ = v_isSharedCheck_261_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_vs_237_);
lean_inc(v_ks_236_);
lean_dec(v_x_232_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_261_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_241_; uint8_t v___x_242_; 
v___x_241_ = lean_array_get_size(v_ks_236_);
v___x_242_ = lean_nat_dec_lt(v_x_233_, v___x_241_);
if (v___x_242_ == 0)
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_246_; 
lean_dec(v_x_233_);
v___x_243_ = lean_array_push(v_ks_236_, v_x_234_);
v___x_244_ = lean_array_push(v_vs_237_, v_x_235_);
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 1, v___x_244_);
lean_ctor_set(v___x_239_, 0, v___x_243_);
v___x_246_ = v___x_239_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v___x_243_);
lean_ctor_set(v_reuseFailAlloc_247_, 1, v___x_244_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
return v___x_246_;
}
}
else
{
lean_object* v_k_x27_248_; uint8_t v___x_249_; 
v_k_x27_248_ = lean_array_fget_borrowed(v_ks_236_, v_x_233_);
v___x_249_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_234_, v_k_x27_248_);
if (v___x_249_ == 0)
{
lean_object* v___x_251_; 
if (v_isShared_240_ == 0)
{
v___x_251_ = v___x_239_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_ks_236_);
lean_ctor_set(v_reuseFailAlloc_255_, 1, v_vs_237_);
v___x_251_ = v_reuseFailAlloc_255_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = lean_unsigned_to_nat(1u);
v___x_253_ = lean_nat_add(v_x_233_, v___x_252_);
lean_dec(v_x_233_);
v_x_232_ = v___x_251_;
v_x_233_ = v___x_253_;
goto _start;
}
}
else
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_259_; 
v___x_256_ = lean_array_fset(v_ks_236_, v_x_233_, v_x_234_);
v___x_257_ = lean_array_fset(v_vs_237_, v_x_233_, v_x_235_);
lean_dec(v_x_233_);
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 1, v___x_257_);
lean_ctor_set(v___x_239_, 0, v___x_256_);
v___x_259_ = v___x_239_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v___x_256_);
lean_ctor_set(v_reuseFailAlloc_260_, 1, v___x_257_);
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__4___redArg(lean_object* v_n_262_, lean_object* v_k_263_, lean_object* v_v_264_){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_265_ = lean_unsigned_to_nat(0u);
v___x_266_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__4_spec__5___redArg(v_n_262_, v___x_265_, v_k_263_, v_v_264_);
return v___x_266_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2___redArg(lean_object* v_x_268_, size_t v_x_269_, size_t v_x_270_, lean_object* v_x_271_, lean_object* v_x_272_){
_start:
{
if (lean_obj_tag(v_x_268_) == 0)
{
lean_object* v_es_273_; size_t v___x_274_; size_t v___x_275_; size_t v___x_276_; size_t v___x_277_; lean_object* v_j_278_; lean_object* v___x_279_; uint8_t v___x_280_; 
v_es_273_ = lean_ctor_get(v_x_268_, 0);
v___x_274_ = ((size_t)5ULL);
v___x_275_ = ((size_t)1ULL);
v___x_276_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg___closed__1);
v___x_277_ = lean_usize_land(v_x_269_, v___x_276_);
v_j_278_ = lean_usize_to_nat(v___x_277_);
v___x_279_ = lean_array_get_size(v_es_273_);
v___x_280_ = lean_nat_dec_lt(v_j_278_, v___x_279_);
if (v___x_280_ == 0)
{
lean_dec(v_j_278_);
lean_dec(v_x_272_);
lean_dec_ref(v_x_271_);
return v_x_268_;
}
else
{
lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_317_; 
lean_inc_ref(v_es_273_);
v_isSharedCheck_317_ = !lean_is_exclusive(v_x_268_);
if (v_isSharedCheck_317_ == 0)
{
lean_object* v_unused_318_; 
v_unused_318_ = lean_ctor_get(v_x_268_, 0);
lean_dec(v_unused_318_);
v___x_282_ = v_x_268_;
v_isShared_283_ = v_isSharedCheck_317_;
goto v_resetjp_281_;
}
else
{
lean_dec(v_x_268_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_317_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v_v_284_; lean_object* v___x_285_; lean_object* v_xs_x27_286_; lean_object* v___y_288_; 
v_v_284_ = lean_array_fget(v_es_273_, v_j_278_);
v___x_285_ = lean_box(0);
v_xs_x27_286_ = lean_array_fset(v_es_273_, v_j_278_, v___x_285_);
switch(lean_obj_tag(v_v_284_))
{
case 0:
{
lean_object* v_key_293_; lean_object* v_val_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_304_; 
v_key_293_ = lean_ctor_get(v_v_284_, 0);
v_val_294_ = lean_ctor_get(v_v_284_, 1);
v_isSharedCheck_304_ = !lean_is_exclusive(v_v_284_);
if (v_isSharedCheck_304_ == 0)
{
v___x_296_ = v_v_284_;
v_isShared_297_ = v_isSharedCheck_304_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_val_294_);
lean_inc(v_key_293_);
lean_dec(v_v_284_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_304_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
uint8_t v___x_298_; 
v___x_298_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_271_, v_key_293_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; lean_object* v___x_300_; 
lean_del_object(v___x_296_);
v___x_299_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_293_, v_val_294_, v_x_271_, v_x_272_);
v___x_300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
v___y_288_ = v___x_300_;
goto v___jp_287_;
}
else
{
lean_object* v___x_302_; 
lean_dec(v_val_294_);
lean_dec(v_key_293_);
if (v_isShared_297_ == 0)
{
lean_ctor_set(v___x_296_, 1, v_x_272_);
lean_ctor_set(v___x_296_, 0, v_x_271_);
v___x_302_ = v___x_296_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_x_271_);
lean_ctor_set(v_reuseFailAlloc_303_, 1, v_x_272_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
v___y_288_ = v___x_302_;
goto v___jp_287_;
}
}
}
}
case 1:
{
lean_object* v_node_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_315_; 
v_node_305_ = lean_ctor_get(v_v_284_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v_v_284_);
if (v_isSharedCheck_315_ == 0)
{
v___x_307_ = v_v_284_;
v_isShared_308_ = v_isSharedCheck_315_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_node_305_);
lean_dec(v_v_284_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_315_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
size_t v___x_309_; size_t v___x_310_; lean_object* v___x_311_; lean_object* v___x_313_; 
v___x_309_ = lean_usize_shift_right(v_x_269_, v___x_274_);
v___x_310_ = lean_usize_add(v_x_270_, v___x_275_);
v___x_311_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2___redArg(v_node_305_, v___x_309_, v___x_310_, v_x_271_, v_x_272_);
if (v_isShared_308_ == 0)
{
lean_ctor_set(v___x_307_, 0, v___x_311_);
v___x_313_ = v___x_307_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v___x_311_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
v___y_288_ = v___x_313_;
goto v___jp_287_;
}
}
}
default: 
{
lean_object* v___x_316_; 
v___x_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_316_, 0, v_x_271_);
lean_ctor_set(v___x_316_, 1, v_x_272_);
v___y_288_ = v___x_316_;
goto v___jp_287_;
}
}
v___jp_287_:
{
lean_object* v___x_289_; lean_object* v___x_291_; 
v___x_289_ = lean_array_fset(v_xs_x27_286_, v_j_278_, v___y_288_);
lean_dec(v_j_278_);
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 0, v___x_289_);
v___x_291_ = v___x_282_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v___x_289_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
}
}
else
{
lean_object* v_ks_319_; lean_object* v_vs_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_340_; 
v_ks_319_ = lean_ctor_get(v_x_268_, 0);
v_vs_320_ = lean_ctor_get(v_x_268_, 1);
v_isSharedCheck_340_ = !lean_is_exclusive(v_x_268_);
if (v_isSharedCheck_340_ == 0)
{
v___x_322_ = v_x_268_;
v_isShared_323_ = v_isSharedCheck_340_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_vs_320_);
lean_inc(v_ks_319_);
lean_dec(v_x_268_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_340_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_325_; 
if (v_isShared_323_ == 0)
{
v___x_325_ = v___x_322_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_ks_319_);
lean_ctor_set(v_reuseFailAlloc_339_, 1, v_vs_320_);
v___x_325_ = v_reuseFailAlloc_339_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
lean_object* v_newNode_326_; uint8_t v___y_328_; size_t v___x_334_; uint8_t v___x_335_; 
v_newNode_326_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__4___redArg(v___x_325_, v_x_271_, v_x_272_);
v___x_334_ = ((size_t)7ULL);
v___x_335_ = lean_usize_dec_le(v___x_334_, v_x_270_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; lean_object* v___x_337_; uint8_t v___x_338_; 
v___x_336_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_326_);
v___x_337_ = lean_unsigned_to_nat(4u);
v___x_338_ = lean_nat_dec_lt(v___x_336_, v___x_337_);
lean_dec(v___x_336_);
v___y_328_ = v___x_338_;
goto v___jp_327_;
}
else
{
v___y_328_ = v___x_335_;
goto v___jp_327_;
}
v___jp_327_:
{
if (v___y_328_ == 0)
{
lean_object* v_ks_329_; lean_object* v_vs_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v_ks_329_ = lean_ctor_get(v_newNode_326_, 0);
lean_inc_ref(v_ks_329_);
v_vs_330_ = lean_ctor_get(v_newNode_326_, 1);
lean_inc_ref(v_vs_330_);
lean_dec_ref(v_newNode_326_);
v___x_331_ = lean_unsigned_to_nat(0u);
v___x_332_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2___redArg___closed__0);
v___x_333_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__5___redArg(v_x_270_, v_ks_329_, v_vs_330_, v___x_331_, v___x_332_);
lean_dec_ref(v_vs_330_);
lean_dec_ref(v_ks_329_);
return v___x_333_;
}
else
{
return v_newNode_326_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__5___redArg(size_t v_depth_341_, lean_object* v_keys_342_, lean_object* v_vals_343_, lean_object* v_i_344_, lean_object* v_entries_345_){
_start:
{
lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_346_ = lean_array_get_size(v_keys_342_);
v___x_347_ = lean_nat_dec_lt(v_i_344_, v___x_346_);
if (v___x_347_ == 0)
{
lean_dec(v_i_344_);
return v_entries_345_;
}
else
{
lean_object* v_k_348_; lean_object* v_v_349_; uint64_t v___x_350_; size_t v_h_351_; size_t v___x_352_; lean_object* v___x_353_; size_t v___x_354_; size_t v___x_355_; size_t v___x_356_; size_t v_h_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v_k_348_ = lean_array_fget_borrowed(v_keys_342_, v_i_344_);
v_v_349_ = lean_array_fget_borrowed(v_vals_343_, v_i_344_);
v___x_350_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_k_348_);
v_h_351_ = lean_uint64_to_usize(v___x_350_);
v___x_352_ = ((size_t)5ULL);
v___x_353_ = lean_unsigned_to_nat(1u);
v___x_354_ = ((size_t)1ULL);
v___x_355_ = lean_usize_sub(v_depth_341_, v___x_354_);
v___x_356_ = lean_usize_mul(v___x_352_, v___x_355_);
v_h_357_ = lean_usize_shift_right(v_h_351_, v___x_356_);
v___x_358_ = lean_nat_add(v_i_344_, v___x_353_);
lean_dec(v_i_344_);
lean_inc(v_v_349_);
lean_inc(v_k_348_);
v___x_359_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2___redArg(v_entries_345_, v_h_357_, v_depth_341_, v_k_348_, v_v_349_);
v_i_344_ = v___x_358_;
v_entries_345_ = v___x_359_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_361_, lean_object* v_keys_362_, lean_object* v_vals_363_, lean_object* v_i_364_, lean_object* v_entries_365_){
_start:
{
size_t v_depth_boxed_366_; lean_object* v_res_367_; 
v_depth_boxed_366_ = lean_unbox_usize(v_depth_361_);
lean_dec(v_depth_361_);
v_res_367_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__5___redArg(v_depth_boxed_366_, v_keys_362_, v_vals_363_, v_i_364_, v_entries_365_);
lean_dec_ref(v_vals_363_);
lean_dec_ref(v_keys_362_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2___redArg___boxed(lean_object* v_x_368_, lean_object* v_x_369_, lean_object* v_x_370_, lean_object* v_x_371_, lean_object* v_x_372_){
_start:
{
size_t v_x_4919__boxed_373_; size_t v_x_4920__boxed_374_; lean_object* v_res_375_; 
v_x_4919__boxed_373_ = lean_unbox_usize(v_x_369_);
lean_dec(v_x_369_);
v_x_4920__boxed_374_ = lean_unbox_usize(v_x_370_);
lean_dec(v_x_370_);
v_res_375_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2___redArg(v_x_368_, v_x_4919__boxed_373_, v_x_4920__boxed_374_, v_x_371_, v_x_372_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1___redArg(lean_object* v_x_376_, lean_object* v_x_377_, lean_object* v_x_378_){
_start:
{
uint64_t v___x_379_; size_t v___x_380_; size_t v___x_381_; lean_object* v___x_382_; 
v___x_379_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_377_);
v___x_380_ = lean_uint64_to_usize(v___x_379_);
v___x_381_ = ((size_t)1ULL);
v___x_382_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2___redArg(v_x_376_, v___x_380_, v___x_381_, v_x_377_, v_x_378_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getReflCmpThm_x3f___redArg(lean_object* v_op_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v_reflCmpMap_392_; lean_object* v___x_393_; 
v___x_390_ = lean_st_ref_get(v_a_388_);
lean_dec(v___x_390_);
v___x_391_ = lean_st_ref_get(v_a_384_);
v_reflCmpMap_392_ = lean_ctor_get(v___x_391_, 6);
lean_inc_ref(v_reflCmpMap_392_);
lean_dec(v___x_391_);
v___x_393_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0___redArg(v_reflCmpMap_392_, v_op_383_);
lean_dec_ref(v_reflCmpMap_392_);
if (lean_obj_tag(v___x_393_) == 1)
{
lean_object* v_val_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_401_; 
lean_dec_ref(v_op_383_);
v_val_394_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_401_ == 0)
{
v___x_396_ = v___x_393_;
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_val_394_);
lean_dec(v___x_393_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_399_; 
if (v_isShared_397_ == 0)
{
lean_ctor_set_tag(v___x_396_, 0);
v___x_399_ = v___x_396_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_val_394_);
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
lean_object* v___x_402_; 
lean_dec(v___x_393_);
lean_inc_ref(v_op_383_);
v___x_402_ = l___private_Lean_Meta_Tactic_Grind_ReflCmp_0__Lean_Meta_Grind_getReflCmpThm_x3f_go_x3f(v_op_383_, v_a_385_, v_a_386_, v_a_387_, v_a_388_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_430_; 
v_a_403_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_430_ == 0)
{
v___x_405_ = v___x_402_;
v_isShared_406_ = v_isSharedCheck_430_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_402_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_430_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v_congrThms_409_; lean_object* v_simp_410_; lean_object* v_lastTag_411_; lean_object* v_counters_412_; lean_object* v_splitDiags_413_; lean_object* v_lawfulEqCmpMap_414_; lean_object* v_reflCmpMap_415_; lean_object* v_anchors_416_; lean_object* v_instanceMap_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_429_; 
v___x_407_ = lean_st_ref_get(v_a_388_);
lean_dec(v___x_407_);
v___x_408_ = lean_st_ref_take(v_a_384_);
v_congrThms_409_ = lean_ctor_get(v___x_408_, 0);
v_simp_410_ = lean_ctor_get(v___x_408_, 1);
v_lastTag_411_ = lean_ctor_get(v___x_408_, 2);
v_counters_412_ = lean_ctor_get(v___x_408_, 3);
v_splitDiags_413_ = lean_ctor_get(v___x_408_, 4);
v_lawfulEqCmpMap_414_ = lean_ctor_get(v___x_408_, 5);
v_reflCmpMap_415_ = lean_ctor_get(v___x_408_, 6);
v_anchors_416_ = lean_ctor_get(v___x_408_, 7);
v_instanceMap_417_ = lean_ctor_get(v___x_408_, 8);
v_isSharedCheck_429_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_429_ == 0)
{
v___x_419_ = v___x_408_;
v_isShared_420_ = v_isSharedCheck_429_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_instanceMap_417_);
lean_inc(v_anchors_416_);
lean_inc(v_reflCmpMap_415_);
lean_inc(v_lawfulEqCmpMap_414_);
lean_inc(v_splitDiags_413_);
lean_inc(v_counters_412_);
lean_inc(v_lastTag_411_);
lean_inc(v_simp_410_);
lean_inc(v_congrThms_409_);
lean_dec(v___x_408_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_429_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_421_; lean_object* v___x_423_; 
lean_inc(v_a_403_);
v___x_421_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1___redArg(v_reflCmpMap_415_, v_op_383_, v_a_403_);
if (v_isShared_420_ == 0)
{
lean_ctor_set(v___x_419_, 6, v___x_421_);
v___x_423_ = v___x_419_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_congrThms_409_);
lean_ctor_set(v_reuseFailAlloc_428_, 1, v_simp_410_);
lean_ctor_set(v_reuseFailAlloc_428_, 2, v_lastTag_411_);
lean_ctor_set(v_reuseFailAlloc_428_, 3, v_counters_412_);
lean_ctor_set(v_reuseFailAlloc_428_, 4, v_splitDiags_413_);
lean_ctor_set(v_reuseFailAlloc_428_, 5, v_lawfulEqCmpMap_414_);
lean_ctor_set(v_reuseFailAlloc_428_, 6, v___x_421_);
lean_ctor_set(v_reuseFailAlloc_428_, 7, v_anchors_416_);
lean_ctor_set(v_reuseFailAlloc_428_, 8, v_instanceMap_417_);
v___x_423_ = v_reuseFailAlloc_428_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
lean_object* v___x_424_; lean_object* v___x_426_; 
v___x_424_ = lean_st_ref_set(v_a_384_, v___x_423_);
if (v_isShared_406_ == 0)
{
v___x_426_ = v___x_405_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_403_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
}
}
else
{
lean_dec_ref(v_op_383_);
return v___x_402_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getReflCmpThm_x3f___redArg___boxed(lean_object* v_op_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_Lean_Meta_Grind_getReflCmpThm_x3f___redArg(v_op_431_, v_a_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_);
lean_dec(v_a_436_);
lean_dec_ref(v_a_435_);
lean_dec(v_a_434_);
lean_dec_ref(v_a_433_);
lean_dec(v_a_432_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getReflCmpThm_x3f(lean_object* v_op_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l_Lean_Meta_Grind_getReflCmpThm_x3f___redArg(v_op_439_, v_a_442_, v_a_445_, v_a_446_, v_a_447_, v_a_448_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getReflCmpThm_x3f___boxed(lean_object* v_op_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_, lean_object* v_a_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_Lean_Meta_Grind_getReflCmpThm_x3f(v_op_451_, v_a_452_, v_a_453_, v_a_454_, v_a_455_, v_a_456_, v_a_457_, v_a_458_, v_a_459_, v_a_460_);
lean_dec(v_a_460_);
lean_dec_ref(v_a_459_);
lean_dec(v_a_458_);
lean_dec_ref(v_a_457_);
lean_dec(v_a_456_);
lean_dec_ref(v_a_455_);
lean_dec(v_a_454_);
lean_dec_ref(v_a_453_);
lean_dec(v_a_452_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0(lean_object* v_00_u03b2_463_, lean_object* v_x_464_, lean_object* v_x_465_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0___redArg(v_x_464_, v_x_465_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0___boxed(lean_object* v_00_u03b2_467_, lean_object* v_x_468_, lean_object* v_x_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0(v_00_u03b2_467_, v_x_468_, v_x_469_);
lean_dec_ref(v_x_469_);
lean_dec_ref(v_x_468_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1(lean_object* v_00_u03b2_471_, lean_object* v_x_472_, lean_object* v_x_473_, lean_object* v_x_474_){
_start:
{
lean_object* v___x_475_; 
v___x_475_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1___redArg(v_x_472_, v_x_473_, v_x_474_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0(lean_object* v_00_u03b2_476_, lean_object* v_x_477_, size_t v_x_478_, lean_object* v_x_479_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___redArg(v_x_477_, v_x_478_, v_x_479_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_481_, lean_object* v_x_482_, lean_object* v_x_483_, lean_object* v_x_484_){
_start:
{
size_t v_x_5176__boxed_485_; lean_object* v_res_486_; 
v_x_5176__boxed_485_ = lean_unbox_usize(v_x_483_);
lean_dec(v_x_483_);
v_res_486_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0(v_00_u03b2_481_, v_x_482_, v_x_5176__boxed_485_, v_x_484_);
lean_dec_ref(v_x_484_);
lean_dec_ref(v_x_482_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2(lean_object* v_00_u03b2_487_, lean_object* v_x_488_, size_t v_x_489_, size_t v_x_490_, lean_object* v_x_491_, lean_object* v_x_492_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2___redArg(v_x_488_, v_x_489_, v_x_490_, v_x_491_, v_x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2___boxed(lean_object* v_00_u03b2_494_, lean_object* v_x_495_, lean_object* v_x_496_, lean_object* v_x_497_, lean_object* v_x_498_, lean_object* v_x_499_){
_start:
{
size_t v_x_5187__boxed_500_; size_t v_x_5188__boxed_501_; lean_object* v_res_502_; 
v_x_5187__boxed_500_ = lean_unbox_usize(v_x_496_);
lean_dec(v_x_496_);
v_x_5188__boxed_501_ = lean_unbox_usize(v_x_497_);
lean_dec(v_x_497_);
v_res_502_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2(v_00_u03b2_494_, v_x_495_, v_x_5187__boxed_500_, v_x_5188__boxed_501_, v_x_498_, v_x_499_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_503_, lean_object* v_keys_504_, lean_object* v_vals_505_, lean_object* v_heq_506_, lean_object* v_i_507_, lean_object* v_k_508_){
_start:
{
lean_object* v___x_509_; 
v___x_509_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0_spec__1___redArg(v_keys_504_, v_vals_505_, v_i_507_, v_k_508_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_510_, lean_object* v_keys_511_, lean_object* v_vals_512_, lean_object* v_heq_513_, lean_object* v_i_514_, lean_object* v_k_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__0_spec__0_spec__1(v_00_u03b2_510_, v_keys_511_, v_vals_512_, v_heq_513_, v_i_514_, v_k_515_);
lean_dec_ref(v_k_515_);
lean_dec_ref(v_vals_512_);
lean_dec_ref(v_keys_511_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_517_, lean_object* v_n_518_, lean_object* v_k_519_, lean_object* v_v_520_){
_start:
{
lean_object* v___x_521_; 
v___x_521_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__4___redArg(v_n_518_, v_k_519_, v_v_520_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_522_, size_t v_depth_523_, lean_object* v_keys_524_, lean_object* v_vals_525_, lean_object* v_heq_526_, lean_object* v_i_527_, lean_object* v_entries_528_){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__5___redArg(v_depth_523_, v_keys_524_, v_vals_525_, v_i_527_, v_entries_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_530_, lean_object* v_depth_531_, lean_object* v_keys_532_, lean_object* v_vals_533_, lean_object* v_heq_534_, lean_object* v_i_535_, lean_object* v_entries_536_){
_start:
{
size_t v_depth_boxed_537_; lean_object* v_res_538_; 
v_depth_boxed_537_ = lean_unbox_usize(v_depth_531_);
lean_dec(v_depth_531_);
v_res_538_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__5(v_00_u03b2_530_, v_depth_boxed_537_, v_keys_532_, v_vals_533_, v_heq_534_, v_i_535_, v_entries_536_);
lean_dec_ref(v_vals_533_);
lean_dec_ref(v_keys_532_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_539_, lean_object* v_x_540_, lean_object* v_x_541_, lean_object* v_x_542_, lean_object* v_x_543_){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getReflCmpThm_x3f_spec__1_spec__2_spec__4_spec__5___redArg(v_x_540_, v_x_541_, v_x_542_, v_x_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateReflCmp(lean_object* v_e_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = l_Lean_Meta_Grind_getBinOp(v_e_545_);
if (lean_obj_tag(v___x_557_) == 1)
{
lean_object* v_val_558_; lean_object* v___x_559_; 
v_val_558_ = lean_ctor_get(v___x_557_, 0);
lean_inc(v_val_558_);
lean_dec_ref(v___x_557_);
v___x_559_ = l_Lean_Meta_Grind_getReflCmpThm_x3f___redArg(v_val_558_, v_a_549_, v_a_552_, v_a_553_, v_a_554_, v_a_555_);
if (lean_obj_tag(v___x_559_) == 0)
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_614_; 
v_a_560_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_614_ == 0)
{
v___x_562_ = v___x_559_;
v_isShared_563_ = v_isSharedCheck_614_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_559_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_614_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
if (lean_obj_tag(v_a_560_) == 1)
{
lean_object* v_val_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
lean_del_object(v___x_562_);
v_val_564_ = lean_ctor_get(v_a_560_, 0);
lean_inc(v_val_564_);
lean_dec_ref(v_a_560_);
v___x_565_ = l_Lean_Expr_appFn_x21(v_e_545_);
v___x_566_ = l_Lean_Expr_appArg_x21(v___x_565_);
lean_dec_ref(v___x_565_);
v___x_567_ = l_Lean_Expr_appArg_x21(v_e_545_);
v___x_568_ = l_Lean_Meta_Grind_isEqv___redArg(v___x_566_, v___x_567_, v_a_546_, v_a_555_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_601_; 
v_a_569_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_601_ == 0)
{
v___x_571_ = v___x_568_;
v_isShared_572_ = v_isSharedCheck_601_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_dec(v___x_568_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_601_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
uint8_t v___x_573_; 
v___x_573_ = lean_unbox(v_a_569_);
lean_dec(v_a_569_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; lean_object* v___x_576_; 
lean_dec_ref(v___x_567_);
lean_dec_ref(v___x_566_);
lean_dec(v_val_564_);
lean_dec_ref(v_e_545_);
v___x_574_ = lean_box(0);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 0, v___x_574_);
v___x_576_ = v___x_571_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v___x_574_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
else
{
lean_object* v___x_578_; 
lean_del_object(v___x_571_);
v___x_578_ = l_Lean_Meta_Sym_getOrderingEqExpr___redArg(v_a_550_);
if (lean_obj_tag(v___x_578_) == 0)
{
lean_object* v_a_579_; lean_object* v___x_580_; 
v_a_579_ = lean_ctor_get(v___x_578_, 0);
lean_inc(v_a_579_);
lean_dec_ref(v___x_578_);
lean_inc(v_a_555_);
lean_inc_ref(v_a_554_);
lean_inc(v_a_553_);
lean_inc_ref(v_a_552_);
lean_inc(v_a_551_);
lean_inc_ref(v_a_550_);
lean_inc(v_a_549_);
lean_inc_ref(v_a_548_);
lean_inc(v_a_547_);
lean_inc(v_a_546_);
lean_inc_ref(v___x_567_);
lean_inc_ref(v___x_566_);
v___x_580_ = lean_grind_mk_eq_proof(v___x_566_, v___x_567_, v_a_546_, v_a_547_, v_a_548_, v_a_549_, v_a_550_, v_a_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_);
if (lean_obj_tag(v___x_580_) == 0)
{
lean_object* v_a_581_; lean_object* v___x_582_; uint8_t v___x_583_; lean_object* v___x_584_; 
v_a_581_ = lean_ctor_get(v___x_580_, 0);
lean_inc(v_a_581_);
lean_dec_ref(v___x_580_);
v___x_582_ = l_Lean_mkApp3(v_val_564_, v___x_566_, v___x_567_, v_a_581_);
v___x_583_ = 0;
v___x_584_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_545_, v_a_579_, v___x_582_, v___x_583_, v_a_546_, v_a_548_, v_a_552_, v_a_553_, v_a_554_, v_a_555_);
return v___x_584_;
}
else
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_592_; 
lean_dec(v_a_579_);
lean_dec_ref(v___x_567_);
lean_dec_ref(v___x_566_);
lean_dec(v_val_564_);
lean_dec_ref(v_e_545_);
v_a_585_ = lean_ctor_get(v___x_580_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_580_);
if (v_isSharedCheck_592_ == 0)
{
v___x_587_ = v___x_580_;
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_580_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_588_ == 0)
{
v___x_590_ = v___x_587_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_585_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
}
else
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_600_; 
lean_dec_ref(v___x_567_);
lean_dec_ref(v___x_566_);
lean_dec(v_val_564_);
lean_dec_ref(v_e_545_);
v_a_593_ = lean_ctor_get(v___x_578_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_578_);
if (v_isSharedCheck_600_ == 0)
{
v___x_595_ = v___x_578_;
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_578_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_598_; 
if (v_isShared_596_ == 0)
{
v___x_598_ = v___x_595_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_a_593_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
}
}
}
}
else
{
lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_609_; 
lean_dec_ref(v___x_567_);
lean_dec_ref(v___x_566_);
lean_dec(v_val_564_);
lean_dec_ref(v_e_545_);
v_a_602_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_609_ == 0)
{
v___x_604_ = v___x_568_;
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v___x_568_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_607_; 
if (v_isShared_605_ == 0)
{
v___x_607_ = v___x_604_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_a_602_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
}
else
{
lean_object* v___x_610_; lean_object* v___x_612_; 
lean_dec(v_a_560_);
lean_dec_ref(v_e_545_);
v___x_610_ = lean_box(0);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v___x_610_);
v___x_612_ = v___x_562_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v___x_610_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
}
else
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_622_; 
lean_dec_ref(v_e_545_);
v_a_615_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_622_ == 0)
{
v___x_617_ = v___x_559_;
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_559_);
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
else
{
lean_object* v___x_623_; lean_object* v___x_624_; 
lean_dec(v___x_557_);
lean_dec_ref(v_e_545_);
v___x_623_ = lean_box(0);
v___x_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
return v___x_624_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateReflCmp___boxed(lean_object* v_e_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_){
_start:
{
lean_object* v_res_637_; 
v_res_637_ = l_Lean_Meta_Grind_propagateReflCmp(v_e_625_, v_a_626_, v_a_627_, v_a_628_, v_a_629_, v_a_630_, v_a_631_, v_a_632_, v_a_633_, v_a_634_, v_a_635_);
lean_dec(v_a_635_);
lean_dec_ref(v_a_634_);
lean_dec(v_a_633_);
lean_dec_ref(v_a_632_);
lean_dec(v_a_631_);
lean_dec_ref(v_a_630_);
lean_dec(v_a_629_);
lean_dec_ref(v_a_628_);
lean_dec(v_a_627_);
lean_dec(v_a_626_);
return v_res_637_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_ReflCmp(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_ReflCmp(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_ReflCmp(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_ReflCmp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_ReflCmp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_ReflCmp(builtin);
}
#ifdef __cplusplus
}
#endif
