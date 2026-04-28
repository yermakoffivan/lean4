// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.AC.Internalize
// Imports: public import Lean.Meta.Tactic.Grind.AC.Util import Lean.Meta.Tactic.Grind.AC.DenoteExpr
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_Grind_AC_addTermOpId___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_AC_acExt;
lean_object* l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Meta_Grind_AC_getOpId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Meta_Grind_AC_ACM_getStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_AC_isOp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_AC_mkVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_AC_modifyStruct___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_reify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_reify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_internalize___lam__0(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_internalize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Expr_denoteExpr___at___00Lean_Meta_Grind_AC_internalize_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Expr_denoteExpr___at___00Lean_Meta_Grind_AC_internalize_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_AC_internalize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_internalize___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_AC_internalize___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_internalize___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_AC_internalize___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_internalize___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_AC_internalize___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_internalize___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_AC_internalize___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_internalize___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_AC_internalize___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_internalize___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_AC_internalize___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_internalize___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_AC_internalize___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_internalize___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_AC_internalize___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_internalize___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_AC_internalize___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_internalize___closed__9;
static lean_once_cell_t l_Lean_Meta_Grind_AC_internalize___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_internalize___closed__10;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_internalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___redArg(lean_object* v_parent_x3f_1_, lean_object* v_op_2_){
_start:
{
if (lean_obj_tag(v_parent_x3f_1_) == 1)
{
lean_object* v_val_4_; lean_object* v___x_6_; uint8_t v_isShared_7_; uint8_t v_isSharedCheck_24_; 
v_val_4_ = lean_ctor_get(v_parent_x3f_1_, 0);
v_isSharedCheck_24_ = !lean_is_exclusive(v_parent_x3f_1_);
if (v_isSharedCheck_24_ == 0)
{
v___x_6_ = v_parent_x3f_1_;
v_isShared_7_ = v_isSharedCheck_24_;
goto v_resetjp_5_;
}
else
{
lean_inc(v_val_4_);
lean_dec(v_parent_x3f_1_);
v___x_6_ = lean_box(0);
v_isShared_7_ = v_isSharedCheck_24_;
goto v_resetjp_5_;
}
v_resetjp_5_:
{
uint8_t v___y_9_; uint8_t v___x_21_; 
v___x_21_ = l_Lean_Expr_isApp(v_val_4_);
if (v___x_21_ == 0)
{
v___y_9_ = v___x_21_;
goto v___jp_8_;
}
else
{
lean_object* v___x_22_; uint8_t v___x_23_; 
v___x_22_ = l_Lean_Expr_appFn_x21(v_val_4_);
v___x_23_ = l_Lean_Expr_isApp(v___x_22_);
lean_dec_ref(v___x_22_);
v___y_9_ = v___x_23_;
goto v___jp_8_;
}
v___jp_8_:
{
if (v___y_9_ == 0)
{
lean_object* v___x_10_; lean_object* v___x_12_; 
lean_dec(v_val_4_);
v___x_10_ = lean_box(v___y_9_);
if (v_isShared_7_ == 0)
{
lean_ctor_set_tag(v___x_6_, 0);
lean_ctor_set(v___x_6_, 0, v___x_10_);
v___x_12_ = v___x_6_;
goto v_reusejp_11_;
}
else
{
lean_object* v_reuseFailAlloc_13_; 
v_reuseFailAlloc_13_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_13_, 0, v___x_10_);
v___x_12_ = v_reuseFailAlloc_13_;
goto v_reusejp_11_;
}
v_reusejp_11_:
{
return v___x_12_;
}
}
else
{
lean_object* v___x_14_; lean_object* v___x_15_; uint8_t v___x_16_; lean_object* v___x_17_; lean_object* v___x_19_; 
v___x_14_ = l_Lean_Expr_appFn_x21(v_val_4_);
lean_dec(v_val_4_);
v___x_15_ = l_Lean_Expr_appFn_x21(v___x_14_);
lean_dec_ref(v___x_14_);
v___x_16_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_15_, v_op_2_);
lean_dec_ref(v___x_15_);
v___x_17_ = lean_box(v___x_16_);
if (v_isShared_7_ == 0)
{
lean_ctor_set_tag(v___x_6_, 0);
lean_ctor_set(v___x_6_, 0, v___x_17_);
v___x_19_ = v___x_6_;
goto v_reusejp_18_;
}
else
{
lean_object* v_reuseFailAlloc_20_; 
v_reuseFailAlloc_20_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_20_, 0, v___x_17_);
v___x_19_ = v_reuseFailAlloc_20_;
goto v_reusejp_18_;
}
v_reusejp_18_:
{
return v___x_19_;
}
}
}
}
}
else
{
uint8_t v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
lean_dec(v_parent_x3f_1_);
v___x_25_ = 0;
v___x_26_ = lean_box(v___x_25_);
v___x_27_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
return v___x_27_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___redArg___boxed(lean_object* v_parent_x3f_28_, lean_object* v_op_29_, lean_object* v_a_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___redArg(v_parent_x3f_28_, v_op_29_);
lean_dec_ref(v_op_29_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp(lean_object* v_parent_x3f_32_, lean_object* v_op_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___redArg(v_parent_x3f_32_, v_op_33_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___boxed(lean_object* v_parent_x3f_46_, lean_object* v_op_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp(v_parent_x3f_46_, v_op_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_, v_a_55_, v_a_56_, v_a_57_);
lean_dec(v_a_57_);
lean_dec_ref(v_a_56_);
lean_dec(v_a_55_);
lean_dec_ref(v_a_54_);
lean_dec(v_a_53_);
lean_dec_ref(v_a_52_);
lean_dec(v_a_51_);
lean_dec_ref(v_a_50_);
lean_dec(v_a_49_);
lean_dec(v_a_48_);
lean_dec_ref(v_op_47_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_reify(lean_object* v_e_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lean_Meta_Grind_AC_isOp_x3f(v_e_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_);
if (lean_obj_tag(v___x_73_) == 0)
{
lean_object* v_a_74_; 
v_a_74_ = lean_ctor_get(v___x_73_, 0);
lean_inc(v_a_74_);
lean_dec_ref(v___x_73_);
if (lean_obj_tag(v_a_74_) == 1)
{
lean_object* v_val_75_; lean_object* v_fst_76_; lean_object* v_snd_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_95_; 
lean_dec_ref(v_e_60_);
v_val_75_ = lean_ctor_get(v_a_74_, 0);
lean_inc(v_val_75_);
lean_dec_ref(v_a_74_);
v_fst_76_ = lean_ctor_get(v_val_75_, 0);
v_snd_77_ = lean_ctor_get(v_val_75_, 1);
v_isSharedCheck_95_ = !lean_is_exclusive(v_val_75_);
if (v_isSharedCheck_95_ == 0)
{
v___x_79_ = v_val_75_;
v_isShared_80_ = v_isSharedCheck_95_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_snd_77_);
lean_inc(v_fst_76_);
lean_dec(v_val_75_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_95_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_81_; 
v___x_81_ = l_Lean_Meta_Grind_AC_reify(v_fst_76_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_);
if (lean_obj_tag(v___x_81_) == 0)
{
lean_object* v_a_82_; lean_object* v___x_83_; 
v_a_82_ = lean_ctor_get(v___x_81_, 0);
lean_inc(v_a_82_);
lean_dec_ref(v___x_81_);
v___x_83_ = l_Lean_Meta_Grind_AC_reify(v_snd_77_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_);
if (lean_obj_tag(v___x_83_) == 0)
{
lean_object* v_a_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_94_; 
v_a_84_ = lean_ctor_get(v___x_83_, 0);
v_isSharedCheck_94_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_94_ == 0)
{
v___x_86_ = v___x_83_;
v_isShared_87_ = v_isSharedCheck_94_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_a_84_);
lean_dec(v___x_83_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_94_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_89_; 
if (v_isShared_80_ == 0)
{
lean_ctor_set_tag(v___x_79_, 1);
lean_ctor_set(v___x_79_, 1, v_a_84_);
lean_ctor_set(v___x_79_, 0, v_a_82_);
v___x_89_ = v___x_79_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v_a_82_);
lean_ctor_set(v_reuseFailAlloc_93_, 1, v_a_84_);
v___x_89_ = v_reuseFailAlloc_93_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
lean_object* v___x_91_; 
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 0, v___x_89_);
v___x_91_ = v___x_86_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v___x_89_);
v___x_91_ = v_reuseFailAlloc_92_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
return v___x_91_;
}
}
}
}
else
{
lean_dec(v_a_82_);
lean_del_object(v___x_79_);
return v___x_83_;
}
}
else
{
lean_del_object(v___x_79_);
lean_dec(v_snd_77_);
return v___x_81_;
}
}
}
else
{
lean_object* v___x_96_; 
lean_dec(v_a_74_);
v___x_96_ = l_Lean_Meta_Grind_AC_mkVar(v_e_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_);
if (lean_obj_tag(v___x_96_) == 0)
{
lean_object* v_a_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_105_; 
v_a_97_ = lean_ctor_get(v___x_96_, 0);
v_isSharedCheck_105_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_105_ == 0)
{
v___x_99_ = v___x_96_;
v_isShared_100_ = v_isSharedCheck_105_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_a_97_);
lean_dec(v___x_96_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_105_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_101_; lean_object* v___x_103_; 
v___x_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_101_, 0, v_a_97_);
if (v_isShared_100_ == 0)
{
lean_ctor_set(v___x_99_, 0, v___x_101_);
v___x_103_ = v___x_99_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v___x_101_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
return v___x_103_;
}
}
}
else
{
lean_object* v_a_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_113_; 
v_a_106_ = lean_ctor_get(v___x_96_, 0);
v_isSharedCheck_113_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_113_ == 0)
{
v___x_108_ = v___x_96_;
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_a_106_);
lean_dec(v___x_96_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___x_111_; 
if (v_isShared_109_ == 0)
{
v___x_111_ = v___x_108_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v_a_106_);
v___x_111_ = v_reuseFailAlloc_112_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
return v___x_111_;
}
}
}
}
}
else
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_121_; 
lean_dec_ref(v_e_60_);
v_a_114_ = lean_ctor_get(v___x_73_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___x_73_);
if (v_isSharedCheck_121_ == 0)
{
v___x_116_ = v___x_73_;
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___x_73_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v___x_119_; 
if (v_isShared_117_ == 0)
{
v___x_119_ = v___x_116_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_a_114_);
v___x_119_ = v_reuseFailAlloc_120_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
return v___x_119_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_reify___boxed(lean_object* v_e_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l_Lean_Meta_Grind_AC_reify(v_e_122_, v_a_123_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_);
lean_dec(v_a_133_);
lean_dec_ref(v_a_132_);
lean_dec(v_a_131_);
lean_dec_ref(v_a_130_);
lean_dec(v_a_129_);
lean_dec_ref(v_a_128_);
lean_dec(v_a_127_);
lean_dec_ref(v_a_126_);
lean_dec(v_a_125_);
lean_dec(v_a_124_);
lean_dec(v_a_123_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4_spec__8___redArg(lean_object* v_x_136_, lean_object* v_x_137_, lean_object* v_x_138_, lean_object* v_x_139_){
_start:
{
lean_object* v_ks_140_; lean_object* v_vs_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_165_; 
v_ks_140_ = lean_ctor_get(v_x_136_, 0);
v_vs_141_ = lean_ctor_get(v_x_136_, 1);
v_isSharedCheck_165_ = !lean_is_exclusive(v_x_136_);
if (v_isSharedCheck_165_ == 0)
{
v___x_143_ = v_x_136_;
v_isShared_144_ = v_isSharedCheck_165_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_vs_141_);
lean_inc(v_ks_140_);
lean_dec(v_x_136_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_165_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_145_; uint8_t v___x_146_; 
v___x_145_ = lean_array_get_size(v_ks_140_);
v___x_146_ = lean_nat_dec_lt(v_x_137_, v___x_145_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_150_; 
lean_dec(v_x_137_);
v___x_147_ = lean_array_push(v_ks_140_, v_x_138_);
v___x_148_ = lean_array_push(v_vs_141_, v_x_139_);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 1, v___x_148_);
lean_ctor_set(v___x_143_, 0, v___x_147_);
v___x_150_ = v___x_143_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v___x_147_);
lean_ctor_set(v_reuseFailAlloc_151_, 1, v___x_148_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
else
{
lean_object* v_k_x27_152_; uint8_t v___x_153_; 
v_k_x27_152_ = lean_array_fget_borrowed(v_ks_140_, v_x_137_);
v___x_153_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_138_, v_k_x27_152_);
if (v___x_153_ == 0)
{
lean_object* v___x_155_; 
if (v_isShared_144_ == 0)
{
v___x_155_ = v___x_143_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_ks_140_);
lean_ctor_set(v_reuseFailAlloc_159_, 1, v_vs_141_);
v___x_155_ = v_reuseFailAlloc_159_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lean_unsigned_to_nat(1u);
v___x_157_ = lean_nat_add(v_x_137_, v___x_156_);
lean_dec(v_x_137_);
v_x_136_ = v___x_155_;
v_x_137_ = v___x_157_;
goto _start;
}
}
else
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_163_; 
v___x_160_ = lean_array_fset(v_ks_140_, v_x_137_, v_x_138_);
v___x_161_ = lean_array_fset(v_vs_141_, v_x_137_, v_x_139_);
lean_dec(v_x_137_);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 1, v___x_161_);
lean_ctor_set(v___x_143_, 0, v___x_160_);
v___x_163_ = v___x_143_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v___x_160_);
lean_ctor_set(v_reuseFailAlloc_164_, 1, v___x_161_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4___redArg(lean_object* v_n_166_, lean_object* v_k_167_, lean_object* v_v_168_){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_unsigned_to_nat(0u);
v___x_170_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4_spec__8___redArg(v_n_166_, v___x_169_, v_k_167_, v_v_168_);
return v___x_170_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__0(void){
_start:
{
size_t v___x_171_; size_t v___x_172_; size_t v___x_173_; 
v___x_171_ = ((size_t)5ULL);
v___x_172_ = ((size_t)1ULL);
v___x_173_ = lean_usize_shift_left(v___x_172_, v___x_171_);
return v___x_173_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__1(void){
_start:
{
size_t v___x_174_; size_t v___x_175_; size_t v___x_176_; 
v___x_174_ = ((size_t)1ULL);
v___x_175_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__0);
v___x_176_ = lean_usize_sub(v___x_175_, v___x_174_);
return v___x_176_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg(lean_object* v_x_178_, size_t v_x_179_, size_t v_x_180_, lean_object* v_x_181_, lean_object* v_x_182_){
_start:
{
if (lean_obj_tag(v_x_178_) == 0)
{
lean_object* v_es_183_; size_t v___x_184_; size_t v___x_185_; size_t v___x_186_; size_t v___x_187_; lean_object* v_j_188_; lean_object* v___x_189_; uint8_t v___x_190_; 
v_es_183_ = lean_ctor_get(v_x_178_, 0);
v___x_184_ = ((size_t)5ULL);
v___x_185_ = ((size_t)1ULL);
v___x_186_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__1);
v___x_187_ = lean_usize_land(v_x_179_, v___x_186_);
v_j_188_ = lean_usize_to_nat(v___x_187_);
v___x_189_ = lean_array_get_size(v_es_183_);
v___x_190_ = lean_nat_dec_lt(v_j_188_, v___x_189_);
if (v___x_190_ == 0)
{
lean_dec(v_j_188_);
lean_dec(v_x_182_);
lean_dec_ref(v_x_181_);
return v_x_178_;
}
else
{
lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_227_; 
lean_inc_ref(v_es_183_);
v_isSharedCheck_227_ = !lean_is_exclusive(v_x_178_);
if (v_isSharedCheck_227_ == 0)
{
lean_object* v_unused_228_; 
v_unused_228_ = lean_ctor_get(v_x_178_, 0);
lean_dec(v_unused_228_);
v___x_192_ = v_x_178_;
v_isShared_193_ = v_isSharedCheck_227_;
goto v_resetjp_191_;
}
else
{
lean_dec(v_x_178_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_227_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v_v_194_; lean_object* v___x_195_; lean_object* v_xs_x27_196_; lean_object* v___y_198_; 
v_v_194_ = lean_array_fget(v_es_183_, v_j_188_);
v___x_195_ = lean_box(0);
v_xs_x27_196_ = lean_array_fset(v_es_183_, v_j_188_, v___x_195_);
switch(lean_obj_tag(v_v_194_))
{
case 0:
{
lean_object* v_key_203_; lean_object* v_val_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_214_; 
v_key_203_ = lean_ctor_get(v_v_194_, 0);
v_val_204_ = lean_ctor_get(v_v_194_, 1);
v_isSharedCheck_214_ = !lean_is_exclusive(v_v_194_);
if (v_isSharedCheck_214_ == 0)
{
v___x_206_ = v_v_194_;
v_isShared_207_ = v_isSharedCheck_214_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_val_204_);
lean_inc(v_key_203_);
lean_dec(v_v_194_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_214_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
uint8_t v___x_208_; 
v___x_208_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_181_, v_key_203_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; lean_object* v___x_210_; 
lean_del_object(v___x_206_);
v___x_209_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_203_, v_val_204_, v_x_181_, v_x_182_);
v___x_210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
v___y_198_ = v___x_210_;
goto v___jp_197_;
}
else
{
lean_object* v___x_212_; 
lean_dec(v_val_204_);
lean_dec(v_key_203_);
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 1, v_x_182_);
lean_ctor_set(v___x_206_, 0, v_x_181_);
v___x_212_ = v___x_206_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_x_181_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v_x_182_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
v___y_198_ = v___x_212_;
goto v___jp_197_;
}
}
}
}
case 1:
{
lean_object* v_node_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_225_; 
v_node_215_ = lean_ctor_get(v_v_194_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v_v_194_);
if (v_isSharedCheck_225_ == 0)
{
v___x_217_ = v_v_194_;
v_isShared_218_ = v_isSharedCheck_225_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_node_215_);
lean_dec(v_v_194_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_225_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
size_t v___x_219_; size_t v___x_220_; lean_object* v___x_221_; lean_object* v___x_223_; 
v___x_219_ = lean_usize_shift_right(v_x_179_, v___x_184_);
v___x_220_ = lean_usize_add(v_x_180_, v___x_185_);
v___x_221_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg(v_node_215_, v___x_219_, v___x_220_, v_x_181_, v_x_182_);
if (v_isShared_218_ == 0)
{
lean_ctor_set(v___x_217_, 0, v___x_221_);
v___x_223_ = v___x_217_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v___x_221_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
v___y_198_ = v___x_223_;
goto v___jp_197_;
}
}
}
default: 
{
lean_object* v___x_226_; 
v___x_226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_226_, 0, v_x_181_);
lean_ctor_set(v___x_226_, 1, v_x_182_);
v___y_198_ = v___x_226_;
goto v___jp_197_;
}
}
v___jp_197_:
{
lean_object* v___x_199_; lean_object* v___x_201_; 
v___x_199_ = lean_array_fset(v_xs_x27_196_, v_j_188_, v___y_198_);
lean_dec(v_j_188_);
if (v_isShared_193_ == 0)
{
lean_ctor_set(v___x_192_, 0, v___x_199_);
v___x_201_ = v___x_192_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v___x_199_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
}
else
{
lean_object* v_ks_229_; lean_object* v_vs_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_250_; 
v_ks_229_ = lean_ctor_get(v_x_178_, 0);
v_vs_230_ = lean_ctor_get(v_x_178_, 1);
v_isSharedCheck_250_ = !lean_is_exclusive(v_x_178_);
if (v_isSharedCheck_250_ == 0)
{
v___x_232_ = v_x_178_;
v_isShared_233_ = v_isSharedCheck_250_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_vs_230_);
lean_inc(v_ks_229_);
lean_dec(v_x_178_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_250_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_235_; 
if (v_isShared_233_ == 0)
{
v___x_235_ = v___x_232_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_ks_229_);
lean_ctor_set(v_reuseFailAlloc_249_, 1, v_vs_230_);
v___x_235_ = v_reuseFailAlloc_249_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
lean_object* v_newNode_236_; uint8_t v___y_238_; size_t v___x_244_; uint8_t v___x_245_; 
v_newNode_236_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4___redArg(v___x_235_, v_x_181_, v_x_182_);
v___x_244_ = ((size_t)7ULL);
v___x_245_ = lean_usize_dec_le(v___x_244_, v_x_180_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; uint8_t v___x_248_; 
v___x_246_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_236_);
v___x_247_ = lean_unsigned_to_nat(4u);
v___x_248_ = lean_nat_dec_lt(v___x_246_, v___x_247_);
lean_dec(v___x_246_);
v___y_238_ = v___x_248_;
goto v___jp_237_;
}
else
{
v___y_238_ = v___x_245_;
goto v___jp_237_;
}
v___jp_237_:
{
if (v___y_238_ == 0)
{
lean_object* v_ks_239_; lean_object* v_vs_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v_ks_239_ = lean_ctor_get(v_newNode_236_, 0);
lean_inc_ref(v_ks_239_);
v_vs_240_ = lean_ctor_get(v_newNode_236_, 1);
lean_inc_ref(v_vs_240_);
lean_dec_ref(v_newNode_236_);
v___x_241_ = lean_unsigned_to_nat(0u);
v___x_242_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__2);
v___x_243_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___redArg(v_x_180_, v_ks_239_, v_vs_240_, v___x_241_, v___x_242_);
lean_dec_ref(v_vs_240_);
lean_dec_ref(v_ks_239_);
return v___x_243_;
}
else
{
return v_newNode_236_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___redArg(size_t v_depth_251_, lean_object* v_keys_252_, lean_object* v_vals_253_, lean_object* v_i_254_, lean_object* v_entries_255_){
_start:
{
lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_256_ = lean_array_get_size(v_keys_252_);
v___x_257_ = lean_nat_dec_lt(v_i_254_, v___x_256_);
if (v___x_257_ == 0)
{
lean_dec(v_i_254_);
return v_entries_255_;
}
else
{
lean_object* v_k_258_; lean_object* v_v_259_; uint64_t v___x_260_; size_t v_h_261_; size_t v___x_262_; lean_object* v___x_263_; size_t v___x_264_; size_t v___x_265_; size_t v___x_266_; size_t v_h_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v_k_258_ = lean_array_fget_borrowed(v_keys_252_, v_i_254_);
v_v_259_ = lean_array_fget_borrowed(v_vals_253_, v_i_254_);
v___x_260_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_k_258_);
v_h_261_ = lean_uint64_to_usize(v___x_260_);
v___x_262_ = ((size_t)5ULL);
v___x_263_ = lean_unsigned_to_nat(1u);
v___x_264_ = ((size_t)1ULL);
v___x_265_ = lean_usize_sub(v_depth_251_, v___x_264_);
v___x_266_ = lean_usize_mul(v___x_262_, v___x_265_);
v_h_267_ = lean_usize_shift_right(v_h_261_, v___x_266_);
v___x_268_ = lean_nat_add(v_i_254_, v___x_263_);
lean_dec(v_i_254_);
lean_inc(v_v_259_);
lean_inc(v_k_258_);
v___x_269_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg(v_entries_255_, v_h_267_, v_depth_251_, v_k_258_, v_v_259_);
v_i_254_ = v___x_268_;
v_entries_255_ = v___x_269_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_271_, lean_object* v_keys_272_, lean_object* v_vals_273_, lean_object* v_i_274_, lean_object* v_entries_275_){
_start:
{
size_t v_depth_boxed_276_; lean_object* v_res_277_; 
v_depth_boxed_276_ = lean_unbox_usize(v_depth_271_);
lean_dec(v_depth_271_);
v_res_277_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___redArg(v_depth_boxed_276_, v_keys_272_, v_vals_273_, v_i_274_, v_entries_275_);
lean_dec_ref(v_vals_273_);
lean_dec_ref(v_keys_272_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___boxed(lean_object* v_x_278_, lean_object* v_x_279_, lean_object* v_x_280_, lean_object* v_x_281_, lean_object* v_x_282_){
_start:
{
size_t v_x_55694__boxed_283_; size_t v_x_55695__boxed_284_; lean_object* v_res_285_; 
v_x_55694__boxed_283_ = lean_unbox_usize(v_x_279_);
lean_dec(v_x_279_);
v_x_55695__boxed_284_ = lean_unbox_usize(v_x_280_);
lean_dec(v_x_280_);
v_res_285_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg(v_x_278_, v_x_55694__boxed_283_, v_x_55695__boxed_284_, v_x_281_, v_x_282_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1___redArg(lean_object* v_x_286_, lean_object* v_x_287_, lean_object* v_x_288_){
_start:
{
uint64_t v___x_289_; size_t v___x_290_; size_t v___x_291_; lean_object* v___x_292_; 
v___x_289_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_287_);
v___x_290_ = lean_uint64_to_usize(v___x_289_);
v___x_291_ = ((size_t)1ULL);
v___x_292_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg(v_x_286_, v___x_290_, v___x_291_, v_x_287_, v_x_288_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_internalize___lam__0(lean_object* v_e_293_, lean_object* v_a_294_, uint8_t v_ac_295_, lean_object* v_s_296_){
_start:
{
lean_object* v_id_297_; lean_object* v_type_298_; lean_object* v_u_299_; lean_object* v_op_300_; lean_object* v_neutral_x3f_301_; lean_object* v_assocInst_302_; lean_object* v_idempotentInst_x3f_303_; lean_object* v_commInst_x3f_304_; lean_object* v_neutralInst_x3f_305_; lean_object* v_nextId_306_; lean_object* v_vars_307_; lean_object* v_varMap_308_; lean_object* v_denote_309_; lean_object* v_denoteEntries_310_; lean_object* v_queue_311_; lean_object* v_basis_312_; lean_object* v_diseqs_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_323_; 
v_id_297_ = lean_ctor_get(v_s_296_, 0);
v_type_298_ = lean_ctor_get(v_s_296_, 1);
v_u_299_ = lean_ctor_get(v_s_296_, 2);
v_op_300_ = lean_ctor_get(v_s_296_, 3);
v_neutral_x3f_301_ = lean_ctor_get(v_s_296_, 4);
v_assocInst_302_ = lean_ctor_get(v_s_296_, 5);
v_idempotentInst_x3f_303_ = lean_ctor_get(v_s_296_, 6);
v_commInst_x3f_304_ = lean_ctor_get(v_s_296_, 7);
v_neutralInst_x3f_305_ = lean_ctor_get(v_s_296_, 8);
v_nextId_306_ = lean_ctor_get(v_s_296_, 9);
v_vars_307_ = lean_ctor_get(v_s_296_, 10);
v_varMap_308_ = lean_ctor_get(v_s_296_, 11);
v_denote_309_ = lean_ctor_get(v_s_296_, 12);
v_denoteEntries_310_ = lean_ctor_get(v_s_296_, 13);
v_queue_311_ = lean_ctor_get(v_s_296_, 14);
v_basis_312_ = lean_ctor_get(v_s_296_, 15);
v_diseqs_313_ = lean_ctor_get(v_s_296_, 16);
v_isSharedCheck_323_ = !lean_is_exclusive(v_s_296_);
if (v_isSharedCheck_323_ == 0)
{
v___x_315_ = v_s_296_;
v_isShared_316_ = v_isSharedCheck_323_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_diseqs_313_);
lean_inc(v_basis_312_);
lean_inc(v_queue_311_);
lean_inc(v_denoteEntries_310_);
lean_inc(v_denote_309_);
lean_inc(v_varMap_308_);
lean_inc(v_vars_307_);
lean_inc(v_nextId_306_);
lean_inc(v_neutralInst_x3f_305_);
lean_inc(v_commInst_x3f_304_);
lean_inc(v_idempotentInst_x3f_303_);
lean_inc(v_assocInst_302_);
lean_inc(v_neutral_x3f_301_);
lean_inc(v_op_300_);
lean_inc(v_u_299_);
lean_inc(v_type_298_);
lean_inc(v_id_297_);
lean_dec(v_s_296_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_323_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_321_; 
lean_inc_ref(v_a_294_);
lean_inc_ref(v_e_293_);
v___x_317_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1___redArg(v_denote_309_, v_e_293_, v_a_294_);
v___x_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_318_, 0, v_e_293_);
lean_ctor_set(v___x_318_, 1, v_a_294_);
v___x_319_ = l_Lean_PersistentArray_push___redArg(v_denoteEntries_310_, v___x_318_);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 13, v___x_319_);
lean_ctor_set(v___x_315_, 12, v___x_317_);
v___x_321_ = v___x_315_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_id_297_);
lean_ctor_set(v_reuseFailAlloc_322_, 1, v_type_298_);
lean_ctor_set(v_reuseFailAlloc_322_, 2, v_u_299_);
lean_ctor_set(v_reuseFailAlloc_322_, 3, v_op_300_);
lean_ctor_set(v_reuseFailAlloc_322_, 4, v_neutral_x3f_301_);
lean_ctor_set(v_reuseFailAlloc_322_, 5, v_assocInst_302_);
lean_ctor_set(v_reuseFailAlloc_322_, 6, v_idempotentInst_x3f_303_);
lean_ctor_set(v_reuseFailAlloc_322_, 7, v_commInst_x3f_304_);
lean_ctor_set(v_reuseFailAlloc_322_, 8, v_neutralInst_x3f_305_);
lean_ctor_set(v_reuseFailAlloc_322_, 9, v_nextId_306_);
lean_ctor_set(v_reuseFailAlloc_322_, 10, v_vars_307_);
lean_ctor_set(v_reuseFailAlloc_322_, 11, v_varMap_308_);
lean_ctor_set(v_reuseFailAlloc_322_, 12, v___x_317_);
lean_ctor_set(v_reuseFailAlloc_322_, 13, v___x_319_);
lean_ctor_set(v_reuseFailAlloc_322_, 14, v_queue_311_);
lean_ctor_set(v_reuseFailAlloc_322_, 15, v_basis_312_);
lean_ctor_set(v_reuseFailAlloc_322_, 16, v_diseqs_313_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
lean_ctor_set_uint8(v___x_321_, sizeof(void*)*17, v_ac_295_);
return v___x_321_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_internalize___lam__0___boxed(lean_object* v_e_324_, lean_object* v_a_325_, lean_object* v_ac_326_, lean_object* v_s_327_){
_start:
{
uint8_t v_ac_boxed_328_; lean_object* v_res_329_; 
v_ac_boxed_328_ = lean_unbox(v_ac_326_);
v_res_329_ = l_Lean_Meta_Grind_AC_internalize___lam__0(v_e_324_, v_a_325_, v_ac_boxed_328_, v_s_327_);
return v_res_329_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_330_, lean_object* v_i_331_, lean_object* v_k_332_){
_start:
{
lean_object* v___x_333_; uint8_t v___x_334_; 
v___x_333_ = lean_array_get_size(v_keys_330_);
v___x_334_ = lean_nat_dec_lt(v_i_331_, v___x_333_);
if (v___x_334_ == 0)
{
lean_dec(v_i_331_);
return v___x_334_;
}
else
{
lean_object* v_k_x27_335_; uint8_t v___x_336_; 
v_k_x27_335_ = lean_array_fget_borrowed(v_keys_330_, v_i_331_);
v___x_336_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_k_332_, v_k_x27_335_);
if (v___x_336_ == 0)
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = lean_unsigned_to_nat(1u);
v___x_338_ = lean_nat_add(v_i_331_, v___x_337_);
lean_dec(v_i_331_);
v_i_331_ = v___x_338_;
goto _start;
}
else
{
lean_dec(v_i_331_);
return v___x_336_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_340_, lean_object* v_i_341_, lean_object* v_k_342_){
_start:
{
uint8_t v_res_343_; lean_object* v_r_344_; 
v_res_343_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___redArg(v_keys_340_, v_i_341_, v_k_342_);
lean_dec_ref(v_k_342_);
lean_dec_ref(v_keys_340_);
v_r_344_ = lean_box(v_res_343_);
return v_r_344_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___redArg(lean_object* v_x_345_, size_t v_x_346_, lean_object* v_x_347_){
_start:
{
if (lean_obj_tag(v_x_345_) == 0)
{
lean_object* v_es_348_; lean_object* v___x_349_; size_t v___x_350_; size_t v___x_351_; size_t v___x_352_; lean_object* v_j_353_; lean_object* v___x_354_; 
v_es_348_ = lean_ctor_get(v_x_345_, 0);
v___x_349_ = lean_box(2);
v___x_350_ = ((size_t)5ULL);
v___x_351_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__1);
v___x_352_ = lean_usize_land(v_x_346_, v___x_351_);
v_j_353_ = lean_usize_to_nat(v___x_352_);
v___x_354_ = lean_array_get_borrowed(v___x_349_, v_es_348_, v_j_353_);
lean_dec(v_j_353_);
switch(lean_obj_tag(v___x_354_))
{
case 0:
{
lean_object* v_key_355_; uint8_t v___x_356_; 
v_key_355_ = lean_ctor_get(v___x_354_, 0);
v___x_356_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_347_, v_key_355_);
return v___x_356_;
}
case 1:
{
lean_object* v_node_357_; size_t v___x_358_; 
v_node_357_ = lean_ctor_get(v___x_354_, 0);
v___x_358_ = lean_usize_shift_right(v_x_346_, v___x_350_);
v_x_345_ = v_node_357_;
v_x_346_ = v___x_358_;
goto _start;
}
default: 
{
uint8_t v___x_360_; 
v___x_360_ = 0;
return v___x_360_;
}
}
}
else
{
lean_object* v_ks_361_; lean_object* v___x_362_; uint8_t v___x_363_; 
v_ks_361_ = lean_ctor_get(v_x_345_, 0);
v___x_362_ = lean_unsigned_to_nat(0u);
v___x_363_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___redArg(v_ks_361_, v___x_362_, v_x_347_);
return v___x_363_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___redArg___boxed(lean_object* v_x_364_, lean_object* v_x_365_, lean_object* v_x_366_){
_start:
{
size_t v_x_55911__boxed_367_; uint8_t v_res_368_; lean_object* v_r_369_; 
v_x_55911__boxed_367_ = lean_unbox_usize(v_x_365_);
lean_dec(v_x_365_);
v_res_368_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___redArg(v_x_364_, v_x_55911__boxed_367_, v_x_366_);
lean_dec_ref(v_x_366_);
lean_dec_ref(v_x_364_);
v_r_369_ = lean_box(v_res_368_);
return v_r_369_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___redArg(lean_object* v_x_370_, lean_object* v_x_371_){
_start:
{
uint64_t v___x_372_; size_t v___x_373_; uint8_t v___x_374_; 
v___x_372_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_371_);
v___x_373_ = lean_uint64_to_usize(v___x_372_);
v___x_374_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___redArg(v_x_370_, v___x_373_, v_x_371_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___redArg___boxed(lean_object* v_x_375_, lean_object* v_x_376_){
_start:
{
uint8_t v_res_377_; lean_object* v_r_378_; 
v_res_377_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___redArg(v_x_375_, v_x_376_);
lean_dec_ref(v_x_376_);
lean_dec_ref(v_x_375_);
v_r_378_ = lean_box(v_res_377_);
return v_r_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3_spec__5(lean_object* v_msgData_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_){
_start:
{
lean_object* v___x_385_; lean_object* v_env_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v_mctx_389_; lean_object* v_lctx_390_; lean_object* v_options_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_385_ = lean_st_ref_get(v___y_383_);
v_env_386_ = lean_ctor_get(v___x_385_, 0);
lean_inc_ref(v_env_386_);
lean_dec(v___x_385_);
v___x_387_ = lean_st_ref_get(v___y_383_);
lean_dec(v___x_387_);
v___x_388_ = lean_st_ref_get(v___y_381_);
v_mctx_389_ = lean_ctor_get(v___x_388_, 0);
lean_inc_ref(v_mctx_389_);
lean_dec(v___x_388_);
v_lctx_390_ = lean_ctor_get(v___y_380_, 2);
v_options_391_ = lean_ctor_get(v___y_382_, 2);
lean_inc_ref(v_options_391_);
lean_inc_ref(v_lctx_390_);
v___x_392_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_392_, 0, v_env_386_);
lean_ctor_set(v___x_392_, 1, v_mctx_389_);
lean_ctor_set(v___x_392_, 2, v_lctx_390_);
lean_ctor_set(v___x_392_, 3, v_options_391_);
v___x_393_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
lean_ctor_set(v___x_393_, 1, v_msgData_379_);
v___x_394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_394_, 0, v___x_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3_spec__5___boxed(lean_object* v_msgData_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3_spec__5(v_msgData_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
return v_res_401_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_402_; double v___x_403_; 
v___x_402_ = lean_unsigned_to_nat(0u);
v___x_403_ = lean_float_of_nat(v___x_402_);
return v___x_403_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_404_; 
v___x_404_ = lean_mk_string_unchecked("", 0, 0);
return v___x_404_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = lean_unsigned_to_nat(0u);
v___x_406_ = lean_mk_empty_array_with_capacity(v___x_405_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg(lean_object* v_cls_407_, lean_object* v_msg_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_){
_start:
{
lean_object* v_ref_414_; lean_object* v___x_415_; lean_object* v_a_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_460_; 
v_ref_414_ = lean_ctor_get(v___y_411_, 5);
v___x_415_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3_spec__5(v_msg_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_);
v_a_416_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_460_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_460_ == 0)
{
v___x_418_ = v___x_415_;
v_isShared_419_ = v_isSharedCheck_460_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_a_416_);
lean_dec(v___x_415_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_460_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_420_; lean_object* v_traceState_421_; lean_object* v_env_422_; lean_object* v_nextMacroScope_423_; lean_object* v_ngen_424_; lean_object* v_auxDeclNGen_425_; lean_object* v_cache_426_; lean_object* v_messages_427_; lean_object* v_infoState_428_; lean_object* v_snapshotTasks_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_459_; 
v___x_420_ = lean_st_ref_take(v___y_412_);
v_traceState_421_ = lean_ctor_get(v___x_420_, 4);
v_env_422_ = lean_ctor_get(v___x_420_, 0);
v_nextMacroScope_423_ = lean_ctor_get(v___x_420_, 1);
v_ngen_424_ = lean_ctor_get(v___x_420_, 2);
v_auxDeclNGen_425_ = lean_ctor_get(v___x_420_, 3);
v_cache_426_ = lean_ctor_get(v___x_420_, 5);
v_messages_427_ = lean_ctor_get(v___x_420_, 6);
v_infoState_428_ = lean_ctor_get(v___x_420_, 7);
v_snapshotTasks_429_ = lean_ctor_get(v___x_420_, 8);
v_isSharedCheck_459_ = !lean_is_exclusive(v___x_420_);
if (v_isSharedCheck_459_ == 0)
{
v___x_431_ = v___x_420_;
v_isShared_432_ = v_isSharedCheck_459_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_snapshotTasks_429_);
lean_inc(v_infoState_428_);
lean_inc(v_messages_427_);
lean_inc(v_cache_426_);
lean_inc(v_traceState_421_);
lean_inc(v_auxDeclNGen_425_);
lean_inc(v_ngen_424_);
lean_inc(v_nextMacroScope_423_);
lean_inc(v_env_422_);
lean_dec(v___x_420_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_459_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
uint64_t v_tid_433_; lean_object* v_traces_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_458_; 
v_tid_433_ = lean_ctor_get_uint64(v_traceState_421_, sizeof(void*)*1);
v_traces_434_ = lean_ctor_get(v_traceState_421_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v_traceState_421_);
if (v_isSharedCheck_458_ == 0)
{
v___x_436_ = v_traceState_421_;
v_isShared_437_ = v_isSharedCheck_458_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_traces_434_);
lean_dec(v_traceState_421_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_458_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_438_; double v___x_439_; uint8_t v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_448_; 
v___x_438_ = lean_box(0);
v___x_439_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__0);
v___x_440_ = 0;
v___x_441_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__1, &l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__1);
v___x_442_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_442_, 0, v_cls_407_);
lean_ctor_set(v___x_442_, 1, v___x_438_);
lean_ctor_set(v___x_442_, 2, v___x_441_);
lean_ctor_set_float(v___x_442_, sizeof(void*)*3, v___x_439_);
lean_ctor_set_float(v___x_442_, sizeof(void*)*3 + 8, v___x_439_);
lean_ctor_set_uint8(v___x_442_, sizeof(void*)*3 + 16, v___x_440_);
v___x_443_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__2, &l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__2_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__2);
v___x_444_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_444_, 0, v___x_442_);
lean_ctor_set(v___x_444_, 1, v_a_416_);
lean_ctor_set(v___x_444_, 2, v___x_443_);
lean_inc(v_ref_414_);
v___x_445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_445_, 0, v_ref_414_);
lean_ctor_set(v___x_445_, 1, v___x_444_);
v___x_446_ = l_Lean_PersistentArray_push___redArg(v_traces_434_, v___x_445_);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_446_);
v___x_448_ = v___x_436_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v___x_446_);
lean_ctor_set_uint64(v_reuseFailAlloc_457_, sizeof(void*)*1, v_tid_433_);
v___x_448_ = v_reuseFailAlloc_457_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
lean_object* v___x_450_; 
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 4, v___x_448_);
v___x_450_ = v___x_431_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_env_422_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v_nextMacroScope_423_);
lean_ctor_set(v_reuseFailAlloc_456_, 2, v_ngen_424_);
lean_ctor_set(v_reuseFailAlloc_456_, 3, v_auxDeclNGen_425_);
lean_ctor_set(v_reuseFailAlloc_456_, 4, v___x_448_);
lean_ctor_set(v_reuseFailAlloc_456_, 5, v_cache_426_);
lean_ctor_set(v_reuseFailAlloc_456_, 6, v_messages_427_);
lean_ctor_set(v_reuseFailAlloc_456_, 7, v_infoState_428_);
lean_ctor_set(v_reuseFailAlloc_456_, 8, v_snapshotTasks_429_);
v___x_450_ = v_reuseFailAlloc_456_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_454_; 
v___x_451_ = lean_st_ref_set(v___y_412_, v___x_450_);
v___x_452_ = lean_box(0);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v___x_452_);
v___x_454_ = v___x_418_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_452_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___boxed(lean_object* v_cls_461_, lean_object* v_msg_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg(v_cls_461_, v_msg_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_);
lean_dec(v___y_466_);
lean_dec_ref(v___y_465_);
lean_dec(v___y_464_);
lean_dec_ref(v___y_463_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Expr_denoteExpr___at___00Lean_Meta_Grind_AC_internalize_spec__2(lean_object* v_e_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_){
_start:
{
if (lean_obj_tag(v_e_469_) == 0)
{
lean_object* v_x_482_; lean_object* v___x_483_; 
v_x_482_ = lean_ctor_get(v_e_469_, 0);
v___x_483_ = l_Lean_Meta_Grind_AC_ACM_getStruct(v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_);
if (lean_obj_tag(v___x_483_) == 0)
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_500_; 
v_a_484_ = lean_ctor_get(v___x_483_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_500_ == 0)
{
v___x_486_ = v___x_483_;
v_isShared_487_ = v_isSharedCheck_500_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_483_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_500_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v_vars_488_; lean_object* v_size_489_; lean_object* v___x_490_; uint8_t v___x_491_; 
v_vars_488_ = lean_ctor_get(v_a_484_, 10);
lean_inc_ref(v_vars_488_);
lean_dec(v_a_484_);
v_size_489_ = lean_ctor_get(v_vars_488_, 2);
v___x_490_ = l_Lean_instInhabitedExpr;
v___x_491_ = lean_nat_dec_lt(v_x_482_, v_size_489_);
if (v___x_491_ == 0)
{
lean_object* v___x_492_; lean_object* v___x_494_; 
lean_dec_ref(v_vars_488_);
v___x_492_ = l_outOfBounds___redArg(v___x_490_);
if (v_isShared_487_ == 0)
{
lean_ctor_set(v___x_486_, 0, v___x_492_);
v___x_494_ = v___x_486_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v___x_492_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
else
{
lean_object* v___x_496_; lean_object* v___x_498_; 
v___x_496_ = l_Lean_PersistentArray_get_x21___redArg(v___x_490_, v_vars_488_, v_x_482_);
lean_dec_ref(v_vars_488_);
if (v_isShared_487_ == 0)
{
lean_ctor_set(v___x_486_, 0, v___x_496_);
v___x_498_ = v___x_486_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
else
{
lean_object* v_a_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_508_; 
v_a_501_ = lean_ctor_get(v___x_483_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_508_ == 0)
{
v___x_503_ = v___x_483_;
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_a_501_);
lean_dec(v___x_483_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_506_; 
if (v_isShared_504_ == 0)
{
v___x_506_ = v___x_503_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_a_501_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
else
{
lean_object* v_lhs_509_; lean_object* v_rhs_510_; lean_object* v___x_511_; 
v_lhs_509_ = lean_ctor_get(v_e_469_, 0);
v_rhs_510_ = lean_ctor_get(v_e_469_, 1);
v___x_511_ = l_Lean_Meta_Grind_AC_ACM_getStruct(v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; lean_object* v___x_513_; 
v_a_512_ = lean_ctor_get(v___x_511_, 0);
lean_inc(v_a_512_);
lean_dec_ref(v___x_511_);
v___x_513_ = l_Lean_Grind_AC_Expr_denoteExpr___at___00Lean_Meta_Grind_AC_internalize_spec__2(v_lhs_509_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v_a_514_; lean_object* v___x_515_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
lean_inc(v_a_514_);
lean_dec_ref(v___x_513_);
v___x_515_ = l_Lean_Grind_AC_Expr_denoteExpr___at___00Lean_Meta_Grind_AC_internalize_spec__2(v_rhs_510_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_525_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_525_ == 0)
{
v___x_518_ = v___x_515_;
v_isShared_519_ = v_isSharedCheck_525_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_515_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_525_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v_op_520_; lean_object* v___x_521_; lean_object* v___x_523_; 
v_op_520_ = lean_ctor_get(v_a_512_, 3);
lean_inc_ref(v_op_520_);
lean_dec(v_a_512_);
v___x_521_ = l_Lean_mkAppB(v_op_520_, v_a_514_, v_a_516_);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 0, v___x_521_);
v___x_523_ = v___x_518_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v___x_521_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
else
{
lean_dec(v_a_514_);
lean_dec(v_a_512_);
return v___x_515_;
}
}
else
{
lean_dec(v_a_512_);
return v___x_513_;
}
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
v_a_526_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_511_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_511_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Expr_denoteExpr___at___00Lean_Meta_Grind_AC_internalize_spec__2___boxed(lean_object* v_e_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lean_Grind_AC_Expr_denoteExpr___at___00Lean_Meta_Grind_AC_internalize_spec__2(v_e_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
lean_dec(v___y_539_);
lean_dec_ref(v___y_538_);
lean_dec(v___y_537_);
lean_dec(v___y_536_);
lean_dec(v___y_535_);
lean_dec_ref(v_e_534_);
return v_res_547_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_internalize___closed__0(void){
_start:
{
lean_object* v___x_548_; 
v___x_548_ = lean_mk_string_unchecked("grind", 5, 5);
return v___x_548_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_internalize___closed__1(void){
_start:
{
lean_object* v___x_549_; 
v___x_549_ = lean_mk_string_unchecked("ac", 2, 2);
return v___x_549_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_internalize___closed__2(void){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = lean_mk_string_unchecked("internalize", 11, 11);
return v___x_550_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_internalize___closed__3(void){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_551_ = lean_obj_once(&l_Lean_Meta_Grind_AC_internalize___closed__2, &l_Lean_Meta_Grind_AC_internalize___closed__2_once, _init_l_Lean_Meta_Grind_AC_internalize___closed__2);
v___x_552_ = lean_obj_once(&l_Lean_Meta_Grind_AC_internalize___closed__1, &l_Lean_Meta_Grind_AC_internalize___closed__1_once, _init_l_Lean_Meta_Grind_AC_internalize___closed__1);
v___x_553_ = lean_obj_once(&l_Lean_Meta_Grind_AC_internalize___closed__0, &l_Lean_Meta_Grind_AC_internalize___closed__0_once, _init_l_Lean_Meta_Grind_AC_internalize___closed__0);
v___x_554_ = l_Lean_Name_mkStr3(v___x_553_, v___x_552_, v___x_551_);
return v___x_554_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_internalize___closed__4(void){
_start:
{
lean_object* v___x_555_; 
v___x_555_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_555_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_internalize___closed__5(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_556_ = lean_obj_once(&l_Lean_Meta_Grind_AC_internalize___closed__4, &l_Lean_Meta_Grind_AC_internalize___closed__4_once, _init_l_Lean_Meta_Grind_AC_internalize___closed__4);
v___x_557_ = l_Lean_Name_mkStr1(v___x_556_);
return v___x_557_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_internalize___closed__6(void){
_start:
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_558_ = lean_obj_once(&l_Lean_Meta_Grind_AC_internalize___closed__3, &l_Lean_Meta_Grind_AC_internalize___closed__3_once, _init_l_Lean_Meta_Grind_AC_internalize___closed__3);
v___x_559_ = lean_obj_once(&l_Lean_Meta_Grind_AC_internalize___closed__5, &l_Lean_Meta_Grind_AC_internalize___closed__5_once, _init_l_Lean_Meta_Grind_AC_internalize___closed__5);
v___x_560_ = l_Lean_Name_append(v___x_559_, v___x_558_);
return v___x_560_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_internalize___closed__7(void){
_start:
{
lean_object* v___x_561_; 
v___x_561_ = lean_mk_string_unchecked("[", 1, 1);
return v___x_561_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_internalize___closed__8(void){
_start:
{
lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_562_ = lean_obj_once(&l_Lean_Meta_Grind_AC_internalize___closed__7, &l_Lean_Meta_Grind_AC_internalize___closed__7_once, _init_l_Lean_Meta_Grind_AC_internalize___closed__7);
v___x_563_ = l_Lean_stringToMessageData(v___x_562_);
return v___x_563_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_internalize___closed__9(void){
_start:
{
lean_object* v___x_564_; 
v___x_564_ = lean_mk_string_unchecked("] ", 2, 2);
return v___x_564_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_internalize___closed__10(void){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_565_ = lean_obj_once(&l_Lean_Meta_Grind_AC_internalize___closed__9, &l_Lean_Meta_Grind_AC_internalize___closed__9_once, _init_l_Lean_Meta_Grind_AC_internalize___closed__9);
v___x_566_ = l_Lean_stringToMessageData(v___x_565_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_internalize(lean_object* v_e_567_, lean_object* v_parent_x3f_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_){
_start:
{
lean_object* v___y_581_; lean_object* v___y_582_; lean_object* v___y_583_; lean_object* v___y_584_; lean_object* v___y_585_; lean_object* v___y_586_; lean_object* v___y_587_; lean_object* v___y_588_; lean_object* v___y_589_; lean_object* v___y_590_; lean_object* v___y_591_; lean_object* v___x_595_; 
v___x_595_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_571_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_710_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_710_ == 0)
{
v___x_598_ = v___x_595_;
v_isShared_599_ = v_isSharedCheck_710_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_595_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_710_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
uint8_t v_ac_600_; uint8_t v___y_602_; 
v_ac_600_ = lean_ctor_get_uint8(v_a_596_, sizeof(void*)*11 + 24);
lean_dec(v_a_596_);
if (v_ac_600_ == 0)
{
lean_object* v___x_705_; lean_object* v___x_706_; 
lean_del_object(v___x_598_);
lean_dec(v_parent_x3f_568_);
lean_dec_ref(v_e_567_);
v___x_705_ = lean_box(0);
v___x_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_706_, 0, v___x_705_);
return v___x_706_;
}
else
{
uint8_t v___x_707_; 
v___x_707_ = l_Lean_Expr_isApp(v_e_567_);
if (v___x_707_ == 0)
{
v___y_602_ = v___x_707_;
goto v___jp_601_;
}
else
{
lean_object* v___x_708_; uint8_t v___x_709_; 
v___x_708_ = l_Lean_Expr_appFn_x21(v_e_567_);
v___x_709_ = l_Lean_Expr_isApp(v___x_708_);
lean_dec_ref(v___x_708_);
v___y_602_ = v___x_709_;
goto v___jp_601_;
}
}
v___jp_601_:
{
if (v___y_602_ == 0)
{
lean_object* v___x_603_; lean_object* v___x_605_; 
lean_dec(v_parent_x3f_568_);
lean_dec_ref(v_e_567_);
v___x_603_ = lean_box(0);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 0, v___x_603_);
v___x_605_ = v___x_598_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v___x_603_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
else
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
lean_del_object(v___x_598_);
v___x_607_ = l_Lean_Expr_appFn_x21(v_e_567_);
v___x_608_ = l_Lean_Expr_appFn_x21(v___x_607_);
lean_dec_ref(v___x_607_);
lean_inc_ref(v___x_608_);
v___x_609_ = l_Lean_Meta_Grind_AC_getOpId_x3f(v___x_608_, v_a_569_, v_a_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_, v_a_576_, v_a_577_, v_a_578_);
if (lean_obj_tag(v___x_609_) == 0)
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_696_; 
v_a_610_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_696_ == 0)
{
v___x_612_ = v___x_609_;
v_isShared_613_ = v_isSharedCheck_696_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_609_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_696_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
if (lean_obj_tag(v_a_610_) == 1)
{
lean_object* v_val_614_; lean_object* v___x_615_; lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_691_; 
lean_del_object(v___x_612_);
v_val_614_ = lean_ctor_get(v_a_610_, 0);
lean_inc(v_val_614_);
lean_dec_ref(v_a_610_);
v___x_615_ = l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___redArg(v_parent_x3f_568_, v___x_608_);
lean_dec_ref(v___x_608_);
v_a_616_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_691_ == 0)
{
v___x_618_ = v___x_615_;
v_isShared_619_ = v_isSharedCheck_691_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_615_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_691_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
uint8_t v___x_620_; 
v___x_620_ = lean_unbox(v_a_616_);
lean_dec(v_a_616_);
if (v___x_620_ == 0)
{
lean_object* v___x_621_; 
lean_del_object(v___x_618_);
v___x_621_ = l_Lean_Meta_Grind_AC_ACM_getStruct(v_val_614_, v_a_569_, v_a_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_, v_a_576_, v_a_577_, v_a_578_);
if (lean_obj_tag(v___x_621_) == 0)
{
lean_object* v_a_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_678_; 
v_a_622_ = lean_ctor_get(v___x_621_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_621_);
if (v_isSharedCheck_678_ == 0)
{
v___x_624_ = v___x_621_;
v_isShared_625_ = v_isSharedCheck_678_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_a_622_);
lean_dec(v___x_621_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_678_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v_denote_626_; uint8_t v___x_627_; 
v_denote_626_ = lean_ctor_get(v_a_622_, 12);
lean_inc_ref(v_denote_626_);
lean_dec(v_a_622_);
v___x_627_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___redArg(v_denote_626_, v_e_567_);
lean_dec_ref(v_denote_626_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; 
lean_del_object(v___x_624_);
lean_inc_ref(v_e_567_);
v___x_628_ = l_Lean_Meta_Grind_AC_reify(v_e_567_, v_val_614_, v_a_569_, v_a_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_, v_a_576_, v_a_577_, v_a_578_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; lean_object* v___x_630_; lean_object* v___f_631_; lean_object* v___x_632_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc_n(v_a_629_, 2);
lean_dec_ref(v___x_628_);
v___x_630_ = lean_box(v_ac_600_);
lean_inc_ref(v_e_567_);
v___f_631_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_AC_internalize___lam__0___boxed), 4, 3);
lean_closure_set(v___f_631_, 0, v_e_567_);
lean_closure_set(v___f_631_, 1, v_a_629_);
lean_closure_set(v___f_631_, 2, v___x_630_);
v___x_632_ = l_Lean_Meta_Grind_AC_modifyStruct___redArg(v___f_631_, v_val_614_, v_a_569_, v_a_578_);
if (lean_obj_tag(v___x_632_) == 0)
{
lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_664_; 
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_664_ == 0)
{
lean_object* v_unused_665_; 
v_unused_665_ = lean_ctor_get(v___x_632_, 0);
lean_dec(v_unused_665_);
v___x_634_ = v___x_632_;
v_isShared_635_ = v_isSharedCheck_664_;
goto v_resetjp_633_;
}
else
{
lean_dec(v___x_632_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_664_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v_options_636_; uint8_t v_hasTrace_637_; 
v_options_636_ = lean_ctor_get(v_a_577_, 2);
v_hasTrace_637_ = lean_ctor_get_uint8(v_options_636_, sizeof(void*)*1);
if (v_hasTrace_637_ == 0)
{
lean_del_object(v___x_634_);
lean_dec(v_a_629_);
v___y_581_ = v_val_614_;
v___y_582_ = v_a_569_;
v___y_583_ = v_a_570_;
v___y_584_ = v_a_571_;
v___y_585_ = v_a_572_;
v___y_586_ = v_a_573_;
v___y_587_ = v_a_574_;
v___y_588_ = v_a_575_;
v___y_589_ = v_a_576_;
v___y_590_ = v_a_577_;
v___y_591_ = v_a_578_;
goto v___jp_580_;
}
else
{
lean_object* v_inheritedTraceOptions_638_; lean_object* v___x_639_; lean_object* v___x_640_; uint8_t v___x_641_; 
v_inheritedTraceOptions_638_ = lean_ctor_get(v_a_577_, 13);
v___x_639_ = lean_obj_once(&l_Lean_Meta_Grind_AC_internalize___closed__3, &l_Lean_Meta_Grind_AC_internalize___closed__3_once, _init_l_Lean_Meta_Grind_AC_internalize___closed__3);
v___x_640_ = lean_obj_once(&l_Lean_Meta_Grind_AC_internalize___closed__6, &l_Lean_Meta_Grind_AC_internalize___closed__6_once, _init_l_Lean_Meta_Grind_AC_internalize___closed__6);
v___x_641_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_638_, v_options_636_, v___x_640_);
if (v___x_641_ == 0)
{
lean_del_object(v___x_634_);
lean_dec(v_a_629_);
v___y_581_ = v_val_614_;
v___y_582_ = v_a_569_;
v___y_583_ = v_a_570_;
v___y_584_ = v_a_571_;
v___y_585_ = v_a_572_;
v___y_586_ = v_a_573_;
v___y_587_ = v_a_574_;
v___y_588_ = v_a_575_;
v___y_589_ = v_a_576_;
v___y_590_ = v_a_577_;
v___y_591_ = v_a_578_;
goto v___jp_580_;
}
else
{
lean_object* v___x_642_; 
v___x_642_ = l_Lean_Grind_AC_Expr_denoteExpr___at___00Lean_Meta_Grind_AC_internalize_spec__2(v_a_629_, v_val_614_, v_a_569_, v_a_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_, v_a_576_, v_a_577_, v_a_578_);
lean_dec(v_a_629_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_a_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_647_; 
v_a_643_ = lean_ctor_get(v___x_642_, 0);
lean_inc(v_a_643_);
lean_dec_ref(v___x_642_);
v___x_644_ = lean_obj_once(&l_Lean_Meta_Grind_AC_internalize___closed__8, &l_Lean_Meta_Grind_AC_internalize___closed__8_once, _init_l_Lean_Meta_Grind_AC_internalize___closed__8);
lean_inc(v_val_614_);
v___x_645_ = l_Nat_reprFast(v_val_614_);
if (v_isShared_635_ == 0)
{
lean_ctor_set_tag(v___x_634_, 3);
lean_ctor_set(v___x_634_, 0, v___x_645_);
v___x_647_ = v___x_634_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v___x_645_);
v___x_647_ = v_reuseFailAlloc_655_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_648_ = l_Lean_MessageData_ofFormat(v___x_647_);
v___x_649_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_649_, 0, v___x_644_);
lean_ctor_set(v___x_649_, 1, v___x_648_);
v___x_650_ = lean_obj_once(&l_Lean_Meta_Grind_AC_internalize___closed__10, &l_Lean_Meta_Grind_AC_internalize___closed__10_once, _init_l_Lean_Meta_Grind_AC_internalize___closed__10);
v___x_651_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_651_, 0, v___x_649_);
lean_ctor_set(v___x_651_, 1, v___x_650_);
v___x_652_ = l_Lean_MessageData_ofExpr(v_a_643_);
v___x_653_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_653_, 0, v___x_651_);
lean_ctor_set(v___x_653_, 1, v___x_652_);
v___x_654_ = l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg(v___x_639_, v___x_653_, v_a_575_, v_a_576_, v_a_577_, v_a_578_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_dec_ref(v___x_654_);
v___y_581_ = v_val_614_;
v___y_582_ = v_a_569_;
v___y_583_ = v_a_570_;
v___y_584_ = v_a_571_;
v___y_585_ = v_a_572_;
v___y_586_ = v_a_573_;
v___y_587_ = v_a_574_;
v___y_588_ = v_a_575_;
v___y_589_ = v_a_576_;
v___y_590_ = v_a_577_;
v___y_591_ = v_a_578_;
goto v___jp_580_;
}
else
{
lean_dec(v_val_614_);
lean_dec_ref(v_e_567_);
return v___x_654_;
}
}
}
else
{
lean_object* v_a_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_663_; 
lean_del_object(v___x_634_);
lean_dec(v_val_614_);
lean_dec_ref(v_e_567_);
v_a_656_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_663_ == 0)
{
v___x_658_ = v___x_642_;
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_a_656_);
lean_dec(v___x_642_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_661_; 
if (v_isShared_659_ == 0)
{
v___x_661_ = v___x_658_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_a_656_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_629_);
lean_dec(v_val_614_);
lean_dec_ref(v_e_567_);
return v___x_632_;
}
}
else
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_673_; 
lean_dec(v_val_614_);
lean_dec_ref(v_e_567_);
v_a_666_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_673_ == 0)
{
v___x_668_ = v___x_628_;
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___x_628_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_671_; 
if (v_isShared_669_ == 0)
{
v___x_671_ = v___x_668_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_a_666_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
}
else
{
lean_object* v___x_674_; lean_object* v___x_676_; 
lean_dec(v_val_614_);
lean_dec_ref(v_e_567_);
v___x_674_ = lean_box(0);
if (v_isShared_625_ == 0)
{
lean_ctor_set(v___x_624_, 0, v___x_674_);
v___x_676_ = v___x_624_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v___x_674_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
else
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_686_; 
lean_dec(v_val_614_);
lean_dec_ref(v_e_567_);
v_a_679_ = lean_ctor_get(v___x_621_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_621_);
if (v_isSharedCheck_686_ == 0)
{
v___x_681_ = v___x_621_;
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v___x_621_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_684_; 
if (v_isShared_682_ == 0)
{
v___x_684_ = v___x_681_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_a_679_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
}
else
{
lean_object* v___x_687_; lean_object* v___x_689_; 
lean_dec(v_val_614_);
lean_dec_ref(v_e_567_);
v___x_687_ = lean_box(0);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v___x_687_);
v___x_689_ = v___x_618_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v___x_687_);
v___x_689_ = v_reuseFailAlloc_690_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
return v___x_689_;
}
}
}
}
else
{
lean_object* v___x_692_; lean_object* v___x_694_; 
lean_dec(v_a_610_);
lean_dec_ref(v___x_608_);
lean_dec(v_parent_x3f_568_);
lean_dec_ref(v_e_567_);
v___x_692_ = lean_box(0);
if (v_isShared_613_ == 0)
{
lean_ctor_set(v___x_612_, 0, v___x_692_);
v___x_694_ = v___x_612_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v___x_692_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
else
{
lean_object* v_a_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_704_; 
lean_dec_ref(v___x_608_);
lean_dec(v_parent_x3f_568_);
lean_dec_ref(v_e_567_);
v_a_697_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_704_ == 0)
{
v___x_699_ = v___x_609_;
v_isShared_700_ = v_isSharedCheck_704_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_a_697_);
lean_dec(v___x_609_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_704_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_702_; 
if (v_isShared_700_ == 0)
{
v___x_702_ = v___x_699_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v_a_697_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
return v___x_702_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_718_; 
lean_dec(v_parent_x3f_568_);
lean_dec_ref(v_e_567_);
v_a_711_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_718_ == 0)
{
v___x_713_ = v___x_595_;
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v___x_595_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_716_; 
if (v_isShared_714_ == 0)
{
v___x_716_ = v___x_713_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_a_711_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
v___jp_580_:
{
lean_object* v___x_592_; 
lean_inc_ref(v_e_567_);
v___x_592_ = l_Lean_Meta_Grind_AC_addTermOpId___redArg(v_e_567_, v___y_581_, v___y_582_, v___y_591_);
lean_dec(v___y_581_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v___x_593_; lean_object* v___x_594_; 
lean_dec_ref(v___x_592_);
v___x_593_ = l_Lean_Meta_Grind_AC_acExt;
v___x_594_ = l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(v___x_593_, v_e_567_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_);
return v___x_594_;
}
else
{
lean_dec_ref(v_e_567_);
return v___x_592_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_internalize___boxed(lean_object* v_e_719_, lean_object* v_parent_x3f_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_Lean_Meta_Grind_AC_internalize(v_e_719_, v_parent_x3f_720_, v_a_721_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_);
lean_dec(v_a_730_);
lean_dec_ref(v_a_729_);
lean_dec(v_a_728_);
lean_dec_ref(v_a_727_);
lean_dec(v_a_726_);
lean_dec_ref(v_a_725_);
lean_dec(v_a_724_);
lean_dec_ref(v_a_723_);
lean_dec(v_a_722_);
lean_dec(v_a_721_);
return v_res_732_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0(lean_object* v_00_u03b2_733_, lean_object* v_x_734_, lean_object* v_x_735_){
_start:
{
uint8_t v___x_736_; 
v___x_736_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___redArg(v_x_734_, v_x_735_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___boxed(lean_object* v_00_u03b2_737_, lean_object* v_x_738_, lean_object* v_x_739_){
_start:
{
uint8_t v_res_740_; lean_object* v_r_741_; 
v_res_740_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0(v_00_u03b2_737_, v_x_738_, v_x_739_);
lean_dec_ref(v_x_739_);
lean_dec_ref(v_x_738_);
v_r_741_ = lean_box(v_res_740_);
return v_r_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1(lean_object* v_00_u03b2_742_, lean_object* v_x_743_, lean_object* v_x_744_, lean_object* v_x_745_){
_start:
{
lean_object* v___x_746_; 
v___x_746_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1___redArg(v_x_743_, v_x_744_, v_x_745_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3(lean_object* v_cls_747_, lean_object* v_msg_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg(v_cls_747_, v_msg_748_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___boxed(lean_object* v_cls_762_, lean_object* v_msg_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3(v_cls_762_, v_msg_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_);
lean_dec(v___y_774_);
lean_dec_ref(v___y_773_);
lean_dec(v___y_772_);
lean_dec_ref(v___y_771_);
lean_dec(v___y_770_);
lean_dec_ref(v___y_769_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec(v___y_765_);
lean_dec(v___y_764_);
return v_res_776_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0(lean_object* v_00_u03b2_777_, lean_object* v_x_778_, size_t v_x_779_, lean_object* v_x_780_){
_start:
{
uint8_t v___x_781_; 
v___x_781_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___redArg(v_x_778_, v_x_779_, v_x_780_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___boxed(lean_object* v_00_u03b2_782_, lean_object* v_x_783_, lean_object* v_x_784_, lean_object* v_x_785_){
_start:
{
size_t v_x_56618__boxed_786_; uint8_t v_res_787_; lean_object* v_r_788_; 
v_x_56618__boxed_786_ = lean_unbox_usize(v_x_784_);
lean_dec(v_x_784_);
v_res_787_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0(v_00_u03b2_782_, v_x_783_, v_x_56618__boxed_786_, v_x_785_);
lean_dec_ref(v_x_785_);
lean_dec_ref(v_x_783_);
v_r_788_ = lean_box(v_res_787_);
return v_r_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2(lean_object* v_00_u03b2_789_, lean_object* v_x_790_, size_t v_x_791_, size_t v_x_792_, lean_object* v_x_793_, lean_object* v_x_794_){
_start:
{
lean_object* v___x_795_; 
v___x_795_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg(v_x_790_, v_x_791_, v_x_792_, v_x_793_, v_x_794_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___boxed(lean_object* v_00_u03b2_796_, lean_object* v_x_797_, lean_object* v_x_798_, lean_object* v_x_799_, lean_object* v_x_800_, lean_object* v_x_801_){
_start:
{
size_t v_x_56629__boxed_802_; size_t v_x_56630__boxed_803_; lean_object* v_res_804_; 
v_x_56629__boxed_802_ = lean_unbox_usize(v_x_798_);
lean_dec(v_x_798_);
v_x_56630__boxed_803_ = lean_unbox_usize(v_x_799_);
lean_dec(v_x_799_);
v_res_804_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2(v_00_u03b2_796_, v_x_797_, v_x_56629__boxed_802_, v_x_56630__boxed_803_, v_x_800_, v_x_801_);
return v_res_804_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_805_, lean_object* v_keys_806_, lean_object* v_vals_807_, lean_object* v_heq_808_, lean_object* v_i_809_, lean_object* v_k_810_){
_start:
{
uint8_t v___x_811_; 
v___x_811_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___redArg(v_keys_806_, v_i_809_, v_k_810_);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_812_, lean_object* v_keys_813_, lean_object* v_vals_814_, lean_object* v_heq_815_, lean_object* v_i_816_, lean_object* v_k_817_){
_start:
{
uint8_t v_res_818_; lean_object* v_r_819_; 
v_res_818_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1(v_00_u03b2_812_, v_keys_813_, v_vals_814_, v_heq_815_, v_i_816_, v_k_817_);
lean_dec_ref(v_k_817_);
lean_dec_ref(v_vals_814_);
lean_dec_ref(v_keys_813_);
v_r_819_ = lean_box(v_res_818_);
return v_r_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_820_, lean_object* v_n_821_, lean_object* v_k_822_, lean_object* v_v_823_){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4___redArg(v_n_821_, v_k_822_, v_v_823_);
return v___x_824_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_825_, size_t v_depth_826_, lean_object* v_keys_827_, lean_object* v_vals_828_, lean_object* v_heq_829_, lean_object* v_i_830_, lean_object* v_entries_831_){
_start:
{
lean_object* v___x_832_; 
v___x_832_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___redArg(v_depth_826_, v_keys_827_, v_vals_828_, v_i_830_, v_entries_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_833_, lean_object* v_depth_834_, lean_object* v_keys_835_, lean_object* v_vals_836_, lean_object* v_heq_837_, lean_object* v_i_838_, lean_object* v_entries_839_){
_start:
{
size_t v_depth_boxed_840_; lean_object* v_res_841_; 
v_depth_boxed_840_ = lean_unbox_usize(v_depth_834_);
lean_dec(v_depth_834_);
v_res_841_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5(v_00_u03b2_833_, v_depth_boxed_840_, v_keys_835_, v_vals_836_, v_heq_837_, v_i_838_, v_entries_839_);
lean_dec_ref(v_vals_836_);
lean_dec_ref(v_keys_835_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_842_, lean_object* v_x_843_, lean_object* v_x_844_, lean_object* v_x_845_, lean_object* v_x_846_){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4_spec__8___redArg(v_x_843_, v_x_844_, v_x_845_, v_x_846_);
return v___x_847_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_AC_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_AC_DenoteExpr(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_AC_Internalize(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_AC_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_AC_DenoteExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_AC_Internalize(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_AC_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_AC_DenoteExpr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_AC_Internalize(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_AC_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_AC_DenoteExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_AC_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_AC_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_AC_Internalize(builtin);
}
#ifdef __cplusplus
}
#endif
