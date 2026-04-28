// Lean compiler output
// Module: Lean.Meta.Sym.MaxFVar
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
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instInhabitedSymM(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint64_t l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1___boxed(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* l_Lean_LocalContext_lastDecl(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_Meta_Sym_hashPtrExpr_unsafe__1___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_max___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_max___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_max(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_max___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_check___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_check___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_check___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_check___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_check(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_getMaxFVar_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_getMaxFVar_x3f___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_getMaxFVar_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_getMaxFVar_x3f___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_getMaxFVar_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_getMaxFVar_x3f___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_getMaxFVar_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_getMaxFVar_x3f___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMaxFVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMaxFVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_max___redArg(lean_object* v_fvarId1_x3f_1_, lean_object* v_fvarId2_x3f_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_){
_start:
{
if (lean_obj_tag(v_fvarId1_x3f_1_) == 1)
{
if (lean_obj_tag(v_fvarId2_x3f_2_) == 1)
{
lean_object* v_val_7_; lean_object* v_val_8_; uint8_t v___x_9_; 
v_val_7_ = lean_ctor_get(v_fvarId1_x3f_1_, 0);
v_val_8_ = lean_ctor_get(v_fvarId2_x3f_2_, 0);
v___x_9_ = l_Lean_instBEqFVarId_beq(v_val_7_, v_val_8_);
if (v___x_9_ == 0)
{
lean_object* v___x_10_; 
lean_inc(v_val_7_);
v___x_10_ = l_Lean_FVarId_getDecl___redArg(v_val_7_, v_a_3_, v_a_4_, v_a_5_);
if (lean_obj_tag(v___x_10_) == 0)
{
lean_object* v_a_11_; lean_object* v___x_12_; 
v_a_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc(v_a_11_);
lean_dec_ref(v___x_10_);
lean_inc(v_val_8_);
v___x_12_ = l_Lean_FVarId_getDecl___redArg(v_val_8_, v_a_3_, v_a_4_, v_a_5_);
if (lean_obj_tag(v___x_12_) == 0)
{
lean_object* v_a_13_; lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_26_; 
v_a_13_ = lean_ctor_get(v___x_12_, 0);
v_isSharedCheck_26_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_26_ == 0)
{
v___x_15_ = v___x_12_;
v_isShared_16_ = v_isSharedCheck_26_;
goto v_resetjp_14_;
}
else
{
lean_inc(v_a_13_);
lean_dec(v___x_12_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_26_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
lean_object* v___x_17_; lean_object* v___x_18_; uint8_t v___x_19_; 
v___x_17_ = l_Lean_LocalDecl_index(v_a_13_);
lean_dec(v_a_13_);
v___x_18_ = l_Lean_LocalDecl_index(v_a_11_);
lean_dec(v_a_11_);
v___x_19_ = lean_nat_dec_lt(v___x_17_, v___x_18_);
lean_dec(v___x_18_);
lean_dec(v___x_17_);
if (v___x_19_ == 0)
{
lean_object* v___x_21_; 
lean_dec_ref(v_fvarId1_x3f_1_);
if (v_isShared_16_ == 0)
{
lean_ctor_set(v___x_15_, 0, v_fvarId2_x3f_2_);
v___x_21_ = v___x_15_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_22_; 
v_reuseFailAlloc_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_22_, 0, v_fvarId2_x3f_2_);
v___x_21_ = v_reuseFailAlloc_22_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
return v___x_21_;
}
}
else
{
lean_object* v___x_24_; 
lean_dec_ref(v_fvarId2_x3f_2_);
if (v_isShared_16_ == 0)
{
lean_ctor_set(v___x_15_, 0, v_fvarId1_x3f_1_);
v___x_24_ = v___x_15_;
goto v_reusejp_23_;
}
else
{
lean_object* v_reuseFailAlloc_25_; 
v_reuseFailAlloc_25_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_25_, 0, v_fvarId1_x3f_1_);
v___x_24_ = v_reuseFailAlloc_25_;
goto v_reusejp_23_;
}
v_reusejp_23_:
{
return v___x_24_;
}
}
}
}
else
{
lean_object* v_a_27_; lean_object* v___x_29_; uint8_t v_isShared_30_; uint8_t v_isSharedCheck_34_; 
lean_dec(v_a_11_);
lean_dec_ref(v_fvarId2_x3f_2_);
lean_dec_ref(v_fvarId1_x3f_1_);
v_a_27_ = lean_ctor_get(v___x_12_, 0);
v_isSharedCheck_34_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_34_ == 0)
{
v___x_29_ = v___x_12_;
v_isShared_30_ = v_isSharedCheck_34_;
goto v_resetjp_28_;
}
else
{
lean_inc(v_a_27_);
lean_dec(v___x_12_);
v___x_29_ = lean_box(0);
v_isShared_30_ = v_isSharedCheck_34_;
goto v_resetjp_28_;
}
v_resetjp_28_:
{
lean_object* v___x_32_; 
if (v_isShared_30_ == 0)
{
v___x_32_ = v___x_29_;
goto v_reusejp_31_;
}
else
{
lean_object* v_reuseFailAlloc_33_; 
v_reuseFailAlloc_33_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_33_, 0, v_a_27_);
v___x_32_ = v_reuseFailAlloc_33_;
goto v_reusejp_31_;
}
v_reusejp_31_:
{
return v___x_32_;
}
}
}
}
else
{
lean_object* v_a_35_; lean_object* v___x_37_; uint8_t v_isShared_38_; uint8_t v_isSharedCheck_42_; 
lean_dec_ref(v_fvarId2_x3f_2_);
lean_dec_ref(v_fvarId1_x3f_1_);
v_a_35_ = lean_ctor_get(v___x_10_, 0);
v_isSharedCheck_42_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_42_ == 0)
{
v___x_37_ = v___x_10_;
v_isShared_38_ = v_isSharedCheck_42_;
goto v_resetjp_36_;
}
else
{
lean_inc(v_a_35_);
lean_dec(v___x_10_);
v___x_37_ = lean_box(0);
v_isShared_38_ = v_isSharedCheck_42_;
goto v_resetjp_36_;
}
v_resetjp_36_:
{
lean_object* v___x_40_; 
if (v_isShared_38_ == 0)
{
v___x_40_ = v___x_37_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v_a_35_);
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
else
{
lean_object* v___x_44_; uint8_t v_isShared_45_; uint8_t v_isSharedCheck_49_; 
v_isSharedCheck_49_ = !lean_is_exclusive(v_fvarId2_x3f_2_);
if (v_isSharedCheck_49_ == 0)
{
lean_object* v_unused_50_; 
v_unused_50_ = lean_ctor_get(v_fvarId2_x3f_2_, 0);
lean_dec(v_unused_50_);
v___x_44_ = v_fvarId2_x3f_2_;
v_isShared_45_ = v_isSharedCheck_49_;
goto v_resetjp_43_;
}
else
{
lean_dec(v_fvarId2_x3f_2_);
v___x_44_ = lean_box(0);
v_isShared_45_ = v_isSharedCheck_49_;
goto v_resetjp_43_;
}
v_resetjp_43_:
{
lean_object* v___x_47_; 
if (v_isShared_45_ == 0)
{
lean_ctor_set_tag(v___x_44_, 0);
lean_ctor_set(v___x_44_, 0, v_fvarId1_x3f_1_);
v___x_47_ = v___x_44_;
goto v_reusejp_46_;
}
else
{
lean_object* v_reuseFailAlloc_48_; 
v_reuseFailAlloc_48_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_48_, 0, v_fvarId1_x3f_1_);
v___x_47_ = v_reuseFailAlloc_48_;
goto v_reusejp_46_;
}
v_reusejp_46_:
{
return v___x_47_;
}
}
}
}
else
{
lean_object* v___x_51_; 
lean_dec(v_fvarId2_x3f_2_);
v___x_51_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_51_, 0, v_fvarId1_x3f_1_);
return v___x_51_;
}
}
else
{
lean_object* v___x_52_; 
lean_dec(v_fvarId1_x3f_1_);
v___x_52_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_52_, 0, v_fvarId2_x3f_2_);
return v___x_52_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_max___redArg___boxed(lean_object* v_fvarId1_x3f_53_, lean_object* v_fvarId2_x3f_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_max___redArg(v_fvarId1_x3f_53_, v_fvarId2_x3f_54_, v_a_55_, v_a_56_, v_a_57_);
lean_dec(v_a_57_);
lean_dec_ref(v_a_56_);
lean_dec_ref(v_a_55_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_max(lean_object* v_fvarId1_x3f_60_, lean_object* v_fvarId2_x3f_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_max___redArg(v_fvarId1_x3f_60_, v_fvarId2_x3f_61_, v_a_62_, v_a_64_, v_a_65_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_max___boxed(lean_object* v_fvarId1_x3f_68_, lean_object* v_fvarId2_x3f_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_max(v_fvarId1_x3f_68_, v_fvarId2_x3f_69_, v_a_70_, v_a_71_, v_a_72_, v_a_73_);
lean_dec(v_a_73_);
lean_dec_ref(v_a_72_);
lean_dec(v_a_71_);
lean_dec_ref(v_a_70_);
return v_res_75_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_check___closed__0(void){
_start:
{
lean_object* v___f_76_; 
v___f_76_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1___boxed), 2, 0);
return v___f_76_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_check___closed__1(void){
_start:
{
lean_object* v___f_77_; 
v___f_77_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_hashPtrExpr_unsafe__1___boxed), 1, 0);
return v___f_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_check(lean_object* v_e_78_, lean_object* v_k_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_){
_start:
{
uint8_t v___y_88_; uint8_t v___x_136_; 
v___x_136_ = l_Lean_Expr_hasFVar(v_e_78_);
if (v___x_136_ == 0)
{
uint8_t v___x_137_; 
v___x_137_ = l_Lean_Expr_hasMVar(v_e_78_);
v___y_88_ = v___x_137_;
goto v___jp_87_;
}
else
{
v___y_88_ = v___x_136_;
goto v___jp_87_;
}
v___jp_87_:
{
if (v___y_88_ == 0)
{
lean_object* v___x_89_; lean_object* v___x_90_; 
lean_dec_ref(v_k_79_);
lean_dec_ref(v_e_78_);
v___x_89_ = lean_box(0);
v___x_90_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
return v___x_90_;
}
else
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v_maxFVar_93_; lean_object* v___f_94_; lean_object* v___f_95_; lean_object* v___x_96_; 
v___x_91_ = lean_st_ref_get(v_a_85_);
lean_dec(v___x_91_);
v___x_92_ = lean_st_ref_get(v_a_81_);
v_maxFVar_93_ = lean_ctor_get(v___x_92_, 1);
lean_inc_ref(v_maxFVar_93_);
lean_dec(v___x_92_);
v___f_94_ = lean_obj_once(&l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_check___closed__0, &l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_check___closed__0_once, _init_l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_check___closed__0);
v___f_95_ = lean_obj_once(&l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_check___closed__1, &l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_check___closed__1_once, _init_l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_check___closed__1);
lean_inc_ref(v_e_78_);
v___x_96_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___f_94_, v___f_95_, v_maxFVar_93_, v_e_78_);
lean_dec_ref(v_maxFVar_93_);
if (lean_obj_tag(v___x_96_) == 1)
{
lean_object* v_val_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_104_; 
lean_dec_ref(v_k_79_);
lean_dec_ref(v_e_78_);
v_val_97_ = lean_ctor_get(v___x_96_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_104_ == 0)
{
v___x_99_ = v___x_96_;
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_val_97_);
lean_dec(v___x_96_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_102_; 
if (v_isShared_100_ == 0)
{
lean_ctor_set_tag(v___x_99_, 0);
v___x_102_ = v___x_99_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_val_97_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
else
{
lean_object* v___x_105_; 
lean_dec(v___x_96_);
lean_inc(v_a_85_);
lean_inc_ref(v_a_84_);
lean_inc(v_a_83_);
lean_inc_ref(v_a_82_);
lean_inc(v_a_81_);
lean_inc_ref(v_a_80_);
v___x_105_ = lean_apply_7(v_k_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_, v_a_85_, lean_box(0));
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_135_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_135_ == 0)
{
v___x_108_ = v___x_105_;
v_isShared_109_ = v_isSharedCheck_135_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_a_106_);
lean_dec(v___x_105_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_135_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v_share_112_; lean_object* v_maxFVar_113_; lean_object* v_proofInstInfo_114_; lean_object* v_inferType_115_; lean_object* v_getLevel_116_; lean_object* v_congrInfo_117_; lean_object* v_defEqI_118_; lean_object* v_extensions_119_; lean_object* v_issues_120_; lean_object* v_canon_121_; uint8_t v_debug_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_134_; 
v___x_110_ = lean_st_ref_get(v_a_85_);
lean_dec(v___x_110_);
v___x_111_ = lean_st_ref_take(v_a_81_);
v_share_112_ = lean_ctor_get(v___x_111_, 0);
v_maxFVar_113_ = lean_ctor_get(v___x_111_, 1);
v_proofInstInfo_114_ = lean_ctor_get(v___x_111_, 2);
v_inferType_115_ = lean_ctor_get(v___x_111_, 3);
v_getLevel_116_ = lean_ctor_get(v___x_111_, 4);
v_congrInfo_117_ = lean_ctor_get(v___x_111_, 5);
v_defEqI_118_ = lean_ctor_get(v___x_111_, 6);
v_extensions_119_ = lean_ctor_get(v___x_111_, 7);
v_issues_120_ = lean_ctor_get(v___x_111_, 8);
v_canon_121_ = lean_ctor_get(v___x_111_, 9);
v_debug_122_ = lean_ctor_get_uint8(v___x_111_, sizeof(void*)*10);
v_isSharedCheck_134_ = !lean_is_exclusive(v___x_111_);
if (v_isSharedCheck_134_ == 0)
{
v___x_124_ = v___x_111_;
v_isShared_125_ = v_isSharedCheck_134_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_canon_121_);
lean_inc(v_issues_120_);
lean_inc(v_extensions_119_);
lean_inc(v_defEqI_118_);
lean_inc(v_congrInfo_117_);
lean_inc(v_getLevel_116_);
lean_inc(v_inferType_115_);
lean_inc(v_proofInstInfo_114_);
lean_inc(v_maxFVar_113_);
lean_inc(v_share_112_);
lean_dec(v___x_111_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_134_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_126_; lean_object* v___x_128_; 
lean_inc(v_a_106_);
v___x_126_ = l_Lean_PersistentHashMap_insert___redArg(v___f_94_, v___f_95_, v_maxFVar_113_, v_e_78_, v_a_106_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 1, v___x_126_);
v___x_128_ = v___x_124_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v_share_112_);
lean_ctor_set(v_reuseFailAlloc_133_, 1, v___x_126_);
lean_ctor_set(v_reuseFailAlloc_133_, 2, v_proofInstInfo_114_);
lean_ctor_set(v_reuseFailAlloc_133_, 3, v_inferType_115_);
lean_ctor_set(v_reuseFailAlloc_133_, 4, v_getLevel_116_);
lean_ctor_set(v_reuseFailAlloc_133_, 5, v_congrInfo_117_);
lean_ctor_set(v_reuseFailAlloc_133_, 6, v_defEqI_118_);
lean_ctor_set(v_reuseFailAlloc_133_, 7, v_extensions_119_);
lean_ctor_set(v_reuseFailAlloc_133_, 8, v_issues_120_);
lean_ctor_set(v_reuseFailAlloc_133_, 9, v_canon_121_);
lean_ctor_set_uint8(v_reuseFailAlloc_133_, sizeof(void*)*10, v_debug_122_);
v___x_128_ = v_reuseFailAlloc_133_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
lean_object* v___x_129_; lean_object* v___x_131_; 
v___x_129_ = lean_st_ref_set(v_a_81_, v___x_128_);
if (v_isShared_109_ == 0)
{
v___x_131_ = v___x_108_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v_a_106_);
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
else
{
lean_dec_ref(v_e_78_);
return v___x_105_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_check___boxed(lean_object* v_e_138_, lean_object* v_k_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_check(v_e_138_, v_k_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
lean_dec(v_a_145_);
lean_dec_ref(v_a_144_);
lean_dec(v_a_143_);
lean_dec_ref(v_a_142_);
lean_dec(v_a_141_);
lean_dec_ref(v_a_140_);
return v_res_147_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__2___closed__0(void){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = l_Lean_Meta_Sym_instInhabitedSymM(lean_box(0));
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__2(lean_object* v_msg_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_){
_start:
{
lean_object* v___x_157_; lean_object* v___x_4787__overap_158_; lean_object* v___x_159_; 
v___x_157_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__2___closed__0, &l_panic___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__2___closed__0_once, _init_l_panic___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__2___closed__0);
v___x_4787__overap_158_ = lean_panic_fn_borrowed(v___x_157_, v_msg_149_);
lean_inc(v___y_155_);
lean_inc_ref(v___y_154_);
lean_inc(v___y_153_);
lean_inc_ref(v___y_152_);
lean_inc(v___y_151_);
lean_inc_ref(v___y_150_);
v___x_159_ = lean_apply_7(v___x_4787__overap_158_, v___y_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_, lean_box(0));
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__2___boxed(lean_object* v_msg_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_panic___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__2(v_msg_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
lean_dec(v___y_162_);
lean_dec_ref(v___y_161_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_x_169_, lean_object* v_x_170_, lean_object* v_x_171_, lean_object* v_x_172_){
_start:
{
lean_object* v_ks_173_; lean_object* v_vs_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_198_; 
v_ks_173_ = lean_ctor_get(v_x_169_, 0);
v_vs_174_ = lean_ctor_get(v_x_169_, 1);
v_isSharedCheck_198_ = !lean_is_exclusive(v_x_169_);
if (v_isSharedCheck_198_ == 0)
{
v___x_176_ = v_x_169_;
v_isShared_177_ = v_isSharedCheck_198_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_vs_174_);
lean_inc(v_ks_173_);
lean_dec(v_x_169_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_198_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___x_178_; uint8_t v___x_179_; 
v___x_178_ = lean_array_get_size(v_ks_173_);
v___x_179_ = lean_nat_dec_lt(v_x_170_, v___x_178_);
if (v___x_179_ == 0)
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_183_; 
lean_dec(v_x_170_);
v___x_180_ = lean_array_push(v_ks_173_, v_x_171_);
v___x_181_ = lean_array_push(v_vs_174_, v_x_172_);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 1, v___x_181_);
lean_ctor_set(v___x_176_, 0, v___x_180_);
v___x_183_ = v___x_176_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v___x_180_);
lean_ctor_set(v_reuseFailAlloc_184_, 1, v___x_181_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
else
{
lean_object* v_k_x27_185_; uint8_t v___x_186_; 
v_k_x27_185_ = lean_array_fget_borrowed(v_ks_173_, v_x_170_);
v___x_186_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_171_, v_k_x27_185_);
if (v___x_186_ == 0)
{
lean_object* v___x_188_; 
if (v_isShared_177_ == 0)
{
v___x_188_ = v___x_176_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_ks_173_);
lean_ctor_set(v_reuseFailAlloc_192_, 1, v_vs_174_);
v___x_188_ = v_reuseFailAlloc_192_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lean_unsigned_to_nat(1u);
v___x_190_ = lean_nat_add(v_x_170_, v___x_189_);
lean_dec(v_x_170_);
v_x_169_ = v___x_188_;
v_x_170_ = v___x_190_;
goto _start;
}
}
else
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_196_; 
v___x_193_ = lean_array_fset(v_ks_173_, v_x_170_, v_x_171_);
v___x_194_ = lean_array_fset(v_vs_174_, v_x_170_, v_x_172_);
lean_dec(v_x_170_);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 1, v___x_194_);
lean_ctor_set(v___x_176_, 0, v___x_193_);
v___x_196_ = v___x_176_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_193_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v___x_194_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__2___redArg(lean_object* v_n_199_, lean_object* v_k_200_, lean_object* v_v_201_){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = lean_unsigned_to_nat(0u);
v___x_203_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__2_spec__4___redArg(v_n_199_, v___x_202_, v_k_200_, v_v_201_);
return v___x_203_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_204_; size_t v___x_205_; size_t v___x_206_; 
v___x_204_ = ((size_t)5ULL);
v___x_205_ = ((size_t)1ULL);
v___x_206_ = lean_usize_shift_left(v___x_205_, v___x_204_);
return v___x_206_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_207_; size_t v___x_208_; size_t v___x_209_; 
v___x_207_ = ((size_t)1ULL);
v___x_208_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__0);
v___x_209_ = lean_usize_sub(v___x_208_, v___x_207_);
return v___x_209_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg(lean_object* v_x_211_, size_t v_x_212_, size_t v_x_213_, lean_object* v_x_214_, lean_object* v_x_215_){
_start:
{
if (lean_obj_tag(v_x_211_) == 0)
{
lean_object* v_es_216_; size_t v___x_217_; size_t v___x_218_; size_t v___x_219_; size_t v___x_220_; lean_object* v_j_221_; lean_object* v___x_222_; uint8_t v___x_223_; 
v_es_216_ = lean_ctor_get(v_x_211_, 0);
v___x_217_ = ((size_t)5ULL);
v___x_218_ = ((size_t)1ULL);
v___x_219_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__1);
v___x_220_ = lean_usize_land(v_x_212_, v___x_219_);
v_j_221_ = lean_usize_to_nat(v___x_220_);
v___x_222_ = lean_array_get_size(v_es_216_);
v___x_223_ = lean_nat_dec_lt(v_j_221_, v___x_222_);
if (v___x_223_ == 0)
{
lean_dec(v_j_221_);
lean_dec(v_x_215_);
lean_dec_ref(v_x_214_);
return v_x_211_;
}
else
{
lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_260_; 
lean_inc_ref(v_es_216_);
v_isSharedCheck_260_ = !lean_is_exclusive(v_x_211_);
if (v_isSharedCheck_260_ == 0)
{
lean_object* v_unused_261_; 
v_unused_261_ = lean_ctor_get(v_x_211_, 0);
lean_dec(v_unused_261_);
v___x_225_ = v_x_211_;
v_isShared_226_ = v_isSharedCheck_260_;
goto v_resetjp_224_;
}
else
{
lean_dec(v_x_211_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_260_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v_v_227_; lean_object* v___x_228_; lean_object* v_xs_x27_229_; lean_object* v___y_231_; 
v_v_227_ = lean_array_fget(v_es_216_, v_j_221_);
v___x_228_ = lean_box(0);
v_xs_x27_229_ = lean_array_fset(v_es_216_, v_j_221_, v___x_228_);
switch(lean_obj_tag(v_v_227_))
{
case 0:
{
lean_object* v_key_236_; lean_object* v_val_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_247_; 
v_key_236_ = lean_ctor_get(v_v_227_, 0);
v_val_237_ = lean_ctor_get(v_v_227_, 1);
v_isSharedCheck_247_ = !lean_is_exclusive(v_v_227_);
if (v_isSharedCheck_247_ == 0)
{
v___x_239_ = v_v_227_;
v_isShared_240_ = v_isSharedCheck_247_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_val_237_);
lean_inc(v_key_236_);
lean_dec(v_v_227_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_247_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
uint8_t v___x_241_; 
v___x_241_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_214_, v_key_236_);
if (v___x_241_ == 0)
{
lean_object* v___x_242_; lean_object* v___x_243_; 
lean_del_object(v___x_239_);
v___x_242_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_236_, v_val_237_, v_x_214_, v_x_215_);
v___x_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
v___y_231_ = v___x_243_;
goto v___jp_230_;
}
else
{
lean_object* v___x_245_; 
lean_dec(v_val_237_);
lean_dec(v_key_236_);
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 1, v_x_215_);
lean_ctor_set(v___x_239_, 0, v_x_214_);
v___x_245_ = v___x_239_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v_x_214_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v_x_215_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
v___y_231_ = v___x_245_;
goto v___jp_230_;
}
}
}
}
case 1:
{
lean_object* v_node_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_258_; 
v_node_248_ = lean_ctor_get(v_v_227_, 0);
v_isSharedCheck_258_ = !lean_is_exclusive(v_v_227_);
if (v_isSharedCheck_258_ == 0)
{
v___x_250_ = v_v_227_;
v_isShared_251_ = v_isSharedCheck_258_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_node_248_);
lean_dec(v_v_227_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_258_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
size_t v___x_252_; size_t v___x_253_; lean_object* v___x_254_; lean_object* v___x_256_; 
v___x_252_ = lean_usize_shift_right(v_x_212_, v___x_217_);
v___x_253_ = lean_usize_add(v_x_213_, v___x_218_);
v___x_254_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg(v_node_248_, v___x_252_, v___x_253_, v_x_214_, v_x_215_);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 0, v___x_254_);
v___x_256_ = v___x_250_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v___x_254_);
v___x_256_ = v_reuseFailAlloc_257_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
v___y_231_ = v___x_256_;
goto v___jp_230_;
}
}
}
default: 
{
lean_object* v___x_259_; 
v___x_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_259_, 0, v_x_214_);
lean_ctor_set(v___x_259_, 1, v_x_215_);
v___y_231_ = v___x_259_;
goto v___jp_230_;
}
}
v___jp_230_:
{
lean_object* v___x_232_; lean_object* v___x_234_; 
v___x_232_ = lean_array_fset(v_xs_x27_229_, v_j_221_, v___y_231_);
lean_dec(v_j_221_);
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 0, v___x_232_);
v___x_234_ = v___x_225_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_232_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
}
else
{
lean_object* v_ks_262_; lean_object* v_vs_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_283_; 
v_ks_262_ = lean_ctor_get(v_x_211_, 0);
v_vs_263_ = lean_ctor_get(v_x_211_, 1);
v_isSharedCheck_283_ = !lean_is_exclusive(v_x_211_);
if (v_isSharedCheck_283_ == 0)
{
v___x_265_ = v_x_211_;
v_isShared_266_ = v_isSharedCheck_283_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_vs_263_);
lean_inc(v_ks_262_);
lean_dec(v_x_211_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_283_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_268_; 
if (v_isShared_266_ == 0)
{
v___x_268_ = v___x_265_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_ks_262_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v_vs_263_);
v___x_268_ = v_reuseFailAlloc_282_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
lean_object* v_newNode_269_; uint8_t v___y_271_; size_t v___x_277_; uint8_t v___x_278_; 
v_newNode_269_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__2___redArg(v___x_268_, v_x_214_, v_x_215_);
v___x_277_ = ((size_t)7ULL);
v___x_278_ = lean_usize_dec_le(v___x_277_, v_x_213_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_279_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_269_);
v___x_280_ = lean_unsigned_to_nat(4u);
v___x_281_ = lean_nat_dec_lt(v___x_279_, v___x_280_);
lean_dec(v___x_279_);
v___y_271_ = v___x_281_;
goto v___jp_270_;
}
else
{
v___y_271_ = v___x_278_;
goto v___jp_270_;
}
v___jp_270_:
{
if (v___y_271_ == 0)
{
lean_object* v_ks_272_; lean_object* v_vs_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v_ks_272_ = lean_ctor_get(v_newNode_269_, 0);
lean_inc_ref(v_ks_272_);
v_vs_273_ = lean_ctor_get(v_newNode_269_, 1);
lean_inc_ref(v_vs_273_);
lean_dec_ref(v_newNode_269_);
v___x_274_ = lean_unsigned_to_nat(0u);
v___x_275_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__2);
v___x_276_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__3___redArg(v_x_213_, v_ks_272_, v_vs_273_, v___x_274_, v___x_275_);
lean_dec_ref(v_vs_273_);
lean_dec_ref(v_ks_272_);
return v___x_276_;
}
else
{
return v_newNode_269_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__3___redArg(size_t v_depth_284_, lean_object* v_keys_285_, lean_object* v_vals_286_, lean_object* v_i_287_, lean_object* v_entries_288_){
_start:
{
lean_object* v___x_289_; uint8_t v___x_290_; 
v___x_289_ = lean_array_get_size(v_keys_285_);
v___x_290_ = lean_nat_dec_lt(v_i_287_, v___x_289_);
if (v___x_290_ == 0)
{
lean_dec(v_i_287_);
return v_entries_288_;
}
else
{
lean_object* v_k_291_; lean_object* v_v_292_; uint64_t v___x_293_; size_t v_h_294_; size_t v___x_295_; lean_object* v___x_296_; size_t v___x_297_; size_t v___x_298_; size_t v___x_299_; size_t v_h_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v_k_291_ = lean_array_fget_borrowed(v_keys_285_, v_i_287_);
v_v_292_ = lean_array_fget_borrowed(v_vals_286_, v_i_287_);
v___x_293_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_k_291_);
v_h_294_ = lean_uint64_to_usize(v___x_293_);
v___x_295_ = ((size_t)5ULL);
v___x_296_ = lean_unsigned_to_nat(1u);
v___x_297_ = ((size_t)1ULL);
v___x_298_ = lean_usize_sub(v_depth_284_, v___x_297_);
v___x_299_ = lean_usize_mul(v___x_295_, v___x_298_);
v_h_300_ = lean_usize_shift_right(v_h_294_, v___x_299_);
v___x_301_ = lean_nat_add(v_i_287_, v___x_296_);
lean_dec(v_i_287_);
lean_inc(v_v_292_);
lean_inc(v_k_291_);
v___x_302_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg(v_entries_288_, v_h_300_, v_depth_284_, v_k_291_, v_v_292_);
v_i_287_ = v___x_301_;
v_entries_288_ = v___x_302_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_depth_304_, lean_object* v_keys_305_, lean_object* v_vals_306_, lean_object* v_i_307_, lean_object* v_entries_308_){
_start:
{
size_t v_depth_boxed_309_; lean_object* v_res_310_; 
v_depth_boxed_309_ = lean_unbox_usize(v_depth_304_);
lean_dec(v_depth_304_);
v_res_310_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__3___redArg(v_depth_boxed_309_, v_keys_305_, v_vals_306_, v_i_307_, v_entries_308_);
lean_dec_ref(v_vals_306_);
lean_dec_ref(v_keys_305_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_311_, lean_object* v_x_312_, lean_object* v_x_313_, lean_object* v_x_314_, lean_object* v_x_315_){
_start:
{
size_t v_x_5281__boxed_316_; size_t v_x_5282__boxed_317_; lean_object* v_res_318_; 
v_x_5281__boxed_316_ = lean_unbox_usize(v_x_312_);
lean_dec(v_x_312_);
v_x_5282__boxed_317_ = lean_unbox_usize(v_x_313_);
lean_dec(v_x_313_);
v_res_318_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg(v_x_311_, v_x_5281__boxed_316_, v_x_5282__boxed_317_, v_x_314_, v_x_315_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0___redArg(lean_object* v_x_319_, lean_object* v_x_320_, lean_object* v_x_321_){
_start:
{
uint64_t v___x_322_; size_t v___x_323_; size_t v___x_324_; lean_object* v___x_325_; 
v___x_322_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_320_);
v___x_323_ = lean_uint64_to_usize(v___x_322_);
v___x_324_ = ((size_t)1ULL);
v___x_325_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg(v_x_319_, v___x_323_, v___x_324_, v_x_320_, v_x_321_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2_spec__6___redArg(lean_object* v_keys_326_, lean_object* v_vals_327_, lean_object* v_i_328_, lean_object* v_k_329_){
_start:
{
lean_object* v___x_330_; uint8_t v___x_331_; 
v___x_330_ = lean_array_get_size(v_keys_326_);
v___x_331_ = lean_nat_dec_lt(v_i_328_, v___x_330_);
if (v___x_331_ == 0)
{
lean_object* v___x_332_; 
lean_dec(v_i_328_);
v___x_332_ = lean_box(0);
return v___x_332_;
}
else
{
lean_object* v_k_x27_333_; uint8_t v___x_334_; 
v_k_x27_333_ = lean_array_fget_borrowed(v_keys_326_, v_i_328_);
v___x_334_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_k_329_, v_k_x27_333_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = lean_unsigned_to_nat(1u);
v___x_336_ = lean_nat_add(v_i_328_, v___x_335_);
lean_dec(v_i_328_);
v_i_328_ = v___x_336_;
goto _start;
}
else
{
lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_338_ = lean_array_fget_borrowed(v_vals_327_, v_i_328_);
lean_dec(v_i_328_);
lean_inc(v___x_338_);
v___x_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
return v___x_339_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2_spec__6___redArg___boxed(lean_object* v_keys_340_, lean_object* v_vals_341_, lean_object* v_i_342_, lean_object* v_k_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2_spec__6___redArg(v_keys_340_, v_vals_341_, v_i_342_, v_k_343_);
lean_dec_ref(v_k_343_);
lean_dec_ref(v_vals_341_);
lean_dec_ref(v_keys_340_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2___redArg(lean_object* v_x_345_, size_t v_x_346_, lean_object* v_x_347_){
_start:
{
if (lean_obj_tag(v_x_345_) == 0)
{
lean_object* v_es_348_; lean_object* v___x_349_; size_t v___x_350_; size_t v___x_351_; size_t v___x_352_; lean_object* v_j_353_; lean_object* v___x_354_; 
v_es_348_ = lean_ctor_get(v_x_345_, 0);
v___x_349_ = lean_box(2);
v___x_350_ = ((size_t)5ULL);
v___x_351_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg___closed__1);
v___x_352_ = lean_usize_land(v_x_346_, v___x_351_);
v_j_353_ = lean_usize_to_nat(v___x_352_);
v___x_354_ = lean_array_get_borrowed(v___x_349_, v_es_348_, v_j_353_);
lean_dec(v_j_353_);
switch(lean_obj_tag(v___x_354_))
{
case 0:
{
lean_object* v_key_355_; lean_object* v_val_356_; uint8_t v___x_357_; 
v_key_355_ = lean_ctor_get(v___x_354_, 0);
v_val_356_ = lean_ctor_get(v___x_354_, 1);
v___x_357_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_347_, v_key_355_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; 
v___x_358_ = lean_box(0);
return v___x_358_;
}
else
{
lean_object* v___x_359_; 
lean_inc(v_val_356_);
v___x_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_359_, 0, v_val_356_);
return v___x_359_;
}
}
case 1:
{
lean_object* v_node_360_; size_t v___x_361_; 
v_node_360_ = lean_ctor_get(v___x_354_, 0);
v___x_361_ = lean_usize_shift_right(v_x_346_, v___x_350_);
v_x_345_ = v_node_360_;
v_x_346_ = v___x_361_;
goto _start;
}
default: 
{
lean_object* v___x_363_; 
v___x_363_ = lean_box(0);
return v___x_363_;
}
}
}
else
{
lean_object* v_ks_364_; lean_object* v_vs_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v_ks_364_ = lean_ctor_get(v_x_345_, 0);
v_vs_365_ = lean_ctor_get(v_x_345_, 1);
v___x_366_ = lean_unsigned_to_nat(0u);
v___x_367_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2_spec__6___redArg(v_ks_364_, v_vs_365_, v___x_366_, v_x_347_);
return v___x_367_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2___redArg___boxed(lean_object* v_x_368_, lean_object* v_x_369_, lean_object* v_x_370_){
_start:
{
size_t v_x_5481__boxed_371_; lean_object* v_res_372_; 
v_x_5481__boxed_371_ = lean_unbox_usize(v_x_369_);
lean_dec(v_x_369_);
v_res_372_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2___redArg(v_x_368_, v_x_5481__boxed_371_, v_x_370_);
lean_dec_ref(v_x_370_);
lean_dec_ref(v_x_368_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1___redArg(lean_object* v_x_373_, lean_object* v_x_374_){
_start:
{
uint64_t v___x_375_; size_t v___x_376_; lean_object* v___x_377_; 
v___x_375_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_374_);
v___x_376_ = lean_uint64_to_usize(v___x_375_);
v___x_377_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2___redArg(v_x_373_, v___x_376_, v_x_374_);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1___redArg___boxed(lean_object* v_x_378_, lean_object* v_x_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1___redArg(v_x_378_, v_x_379_);
lean_dec_ref(v_x_379_);
lean_dec_ref(v_x_378_);
return v_res_380_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_getMaxFVar_x3f___closed__0(void){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = lean_mk_string_unchecked("Lean.Meta.Sym.MaxFVar", 21, 21);
return v___x_381_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_getMaxFVar_x3f___closed__1(void){
_start:
{
lean_object* v___x_382_; 
v___x_382_ = lean_mk_string_unchecked("Lean.Meta.Sym.getMaxFVar\?", 25, 25);
return v___x_382_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_getMaxFVar_x3f___closed__2(void){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_383_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_getMaxFVar_x3f___closed__3(void){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_384_ = lean_obj_once(&l_Lean_Meta_Sym_getMaxFVar_x3f___closed__2, &l_Lean_Meta_Sym_getMaxFVar_x3f___closed__2_once, _init_l_Lean_Meta_Sym_getMaxFVar_x3f___closed__2);
v___x_385_ = lean_unsigned_to_nat(37u);
v___x_386_ = lean_unsigned_to_nat(52u);
v___x_387_ = lean_obj_once(&l_Lean_Meta_Sym_getMaxFVar_x3f___closed__1, &l_Lean_Meta_Sym_getMaxFVar_x3f___closed__1_once, _init_l_Lean_Meta_Sym_getMaxFVar_x3f___closed__1);
v___x_388_ = lean_obj_once(&l_Lean_Meta_Sym_getMaxFVar_x3f___closed__0, &l_Lean_Meta_Sym_getMaxFVar_x3f___closed__0_once, _init_l_Lean_Meta_Sym_getMaxFVar_x3f___closed__0);
v___x_389_ = l_mkPanicMessageWithDecl(v___x_388_, v___x_387_, v___x_386_, v___x_385_, v___x_384_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMaxFVar_x3f(lean_object* v_e_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_){
_start:
{
lean_object* v___y_399_; lean_object* v_a_431_; lean_object* v___y_456_; lean_object* v___y_457_; lean_object* v___y_458_; lean_object* v___y_490_; lean_object* v___y_491_; lean_object* v___y_492_; lean_object* v___y_493_; lean_object* v___y_494_; lean_object* v___y_495_; lean_object* v___y_496_; lean_object* v___y_497_; uint8_t v___y_498_; lean_object* v_d_519_; lean_object* v_b_520_; lean_object* v___y_521_; lean_object* v___y_522_; lean_object* v___y_523_; lean_object* v___y_524_; lean_object* v___y_525_; lean_object* v___y_526_; lean_object* v___y_530_; 
switch(lean_obj_tag(v_e_390_))
{
case 1:
{
lean_object* v_fvarId_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v_fvarId_561_ = lean_ctor_get(v_e_390_, 0);
lean_inc(v_fvarId_561_);
lean_dec_ref(v_e_390_);
v___x_562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_562_, 0, v_fvarId_561_);
v___x_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
return v___x_563_;
}
case 2:
{
lean_object* v_mvarId_564_; uint8_t v___y_566_; uint8_t v___x_608_; 
v_mvarId_564_ = lean_ctor_get(v_e_390_, 0);
v___x_608_ = l_Lean_Expr_hasFVar(v_e_390_);
if (v___x_608_ == 0)
{
uint8_t v___x_609_; 
v___x_609_ = l_Lean_Expr_hasMVar(v_e_390_);
v___y_566_ = v___x_609_;
goto v___jp_565_;
}
else
{
v___y_566_ = v___x_608_;
goto v___jp_565_;
}
v___jp_565_:
{
if (v___y_566_ == 0)
{
lean_object* v___x_567_; lean_object* v___x_568_; 
lean_dec_ref(v_e_390_);
v___x_567_ = lean_box(0);
v___x_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_568_, 0, v___x_567_);
return v___x_568_;
}
else
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v_maxFVar_571_; lean_object* v___x_572_; 
v___x_569_ = lean_st_ref_get(v_a_396_);
lean_dec(v___x_569_);
v___x_570_ = lean_st_ref_get(v_a_392_);
v_maxFVar_571_ = lean_ctor_get(v___x_570_, 1);
lean_inc_ref(v_maxFVar_571_);
lean_dec(v___x_570_);
v___x_572_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1___redArg(v_maxFVar_571_, v_e_390_);
lean_dec_ref(v_maxFVar_571_);
if (lean_obj_tag(v___x_572_) == 1)
{
lean_object* v_val_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
lean_dec_ref(v_e_390_);
v_val_573_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_580_ == 0)
{
v___x_575_ = v___x_572_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_val_573_);
lean_dec(v___x_572_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
lean_ctor_set_tag(v___x_575_, 0);
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_val_573_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
else
{
lean_object* v___x_581_; 
lean_dec(v___x_572_);
lean_inc(v_mvarId_564_);
v___x_581_ = l_Lean_MVarId_getDecl(v_mvarId_564_, v_a_393_, v_a_394_, v_a_395_, v_a_396_);
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_582_; lean_object* v_lctx_583_; lean_object* v_decls_584_; uint8_t v___x_585_; 
v_a_582_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_a_582_);
lean_dec_ref(v___x_581_);
v_lctx_583_ = lean_ctor_get(v_a_582_, 1);
lean_inc_ref(v_lctx_583_);
lean_dec(v_a_582_);
v_decls_584_ = lean_ctor_get(v_lctx_583_, 1);
v___x_585_ = l_Lean_PersistentArray_isEmpty___redArg(v_decls_584_);
if (v___x_585_ == 0)
{
lean_object* v___x_586_; 
v___x_586_ = l_Lean_LocalContext_lastDecl(v_lctx_583_);
lean_dec_ref(v_lctx_583_);
if (lean_obj_tag(v___x_586_) == 1)
{
lean_object* v_val_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_595_; 
v_val_587_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_595_ == 0)
{
v___x_589_ = v___x_586_;
v_isShared_590_ = v_isSharedCheck_595_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_val_587_);
lean_dec(v___x_586_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_595_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_591_; lean_object* v___x_593_; 
v___x_591_ = l_Lean_LocalDecl_fvarId(v_val_587_);
lean_dec(v_val_587_);
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 0, v___x_591_);
v___x_593_ = v___x_589_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v___x_591_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
v_a_431_ = v___x_593_;
goto v___jp_430_;
}
}
}
else
{
lean_object* v___x_596_; lean_object* v___x_597_; 
lean_dec(v___x_586_);
v___x_596_ = lean_obj_once(&l_Lean_Meta_Sym_getMaxFVar_x3f___closed__3, &l_Lean_Meta_Sym_getMaxFVar_x3f___closed__3_once, _init_l_Lean_Meta_Sym_getMaxFVar_x3f___closed__3);
v___x_597_ = l_panic___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__2(v___x_596_, v_a_391_, v_a_392_, v_a_393_, v_a_394_, v_a_395_, v_a_396_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
lean_inc(v_a_598_);
lean_dec_ref(v___x_597_);
v_a_431_ = v_a_598_;
goto v___jp_430_;
}
else
{
lean_dec_ref(v_e_390_);
return v___x_597_;
}
}
}
else
{
lean_object* v___x_599_; 
lean_dec_ref(v_lctx_583_);
v___x_599_ = lean_box(0);
v_a_431_ = v___x_599_;
goto v___jp_430_;
}
}
else
{
lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_607_; 
lean_dec_ref(v_e_390_);
v_a_600_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_607_ == 0)
{
v___x_602_ = v___x_581_;
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_dec(v___x_581_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_605_; 
if (v_isShared_603_ == 0)
{
v___x_605_ = v___x_602_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_a_600_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
}
}
}
}
case 5:
{
lean_object* v_fn_610_; lean_object* v_arg_611_; uint8_t v___y_613_; uint8_t v___x_633_; 
v_fn_610_ = lean_ctor_get(v_e_390_, 0);
v_arg_611_ = lean_ctor_get(v_e_390_, 1);
v___x_633_ = l_Lean_Expr_hasFVar(v_e_390_);
if (v___x_633_ == 0)
{
uint8_t v___x_634_; 
v___x_634_ = l_Lean_Expr_hasMVar(v_e_390_);
v___y_613_ = v___x_634_;
goto v___jp_612_;
}
else
{
v___y_613_ = v___x_633_;
goto v___jp_612_;
}
v___jp_612_:
{
if (v___y_613_ == 0)
{
lean_object* v___x_614_; lean_object* v___x_615_; 
lean_dec_ref(v_e_390_);
v___x_614_ = lean_box(0);
v___x_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
return v___x_615_;
}
else
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v_maxFVar_618_; lean_object* v___x_619_; 
v___x_616_ = lean_st_ref_get(v_a_396_);
lean_dec(v___x_616_);
v___x_617_ = lean_st_ref_get(v_a_392_);
v_maxFVar_618_ = lean_ctor_get(v___x_617_, 1);
lean_inc_ref(v_maxFVar_618_);
lean_dec(v___x_617_);
v___x_619_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1___redArg(v_maxFVar_618_, v_e_390_);
lean_dec_ref(v_maxFVar_618_);
if (lean_obj_tag(v___x_619_) == 1)
{
lean_object* v_val_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_627_; 
lean_dec_ref(v_e_390_);
v_val_620_ = lean_ctor_get(v___x_619_, 0);
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_619_);
if (v_isSharedCheck_627_ == 0)
{
v___x_622_ = v___x_619_;
v_isShared_623_ = v_isSharedCheck_627_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_val_620_);
lean_dec(v___x_619_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_627_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_625_; 
if (v_isShared_623_ == 0)
{
lean_ctor_set_tag(v___x_622_, 0);
v___x_625_ = v___x_622_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v_val_620_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
else
{
lean_object* v___x_628_; 
lean_dec(v___x_619_);
lean_inc_ref(v_fn_610_);
v___x_628_ = l_Lean_Meta_Sym_getMaxFVar_x3f(v_fn_610_, v_a_391_, v_a_392_, v_a_393_, v_a_394_, v_a_395_, v_a_396_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; lean_object* v___x_630_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_a_629_);
lean_dec_ref(v___x_628_);
lean_inc_ref(v_arg_611_);
v___x_630_ = l_Lean_Meta_Sym_getMaxFVar_x3f(v_arg_611_, v_a_391_, v_a_392_, v_a_393_, v_a_394_, v_a_395_, v_a_396_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; lean_object* v___x_632_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_a_631_);
lean_dec_ref(v___x_630_);
v___x_632_ = l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_max___redArg(v_a_629_, v_a_631_, v_a_393_, v_a_395_, v_a_396_);
v___y_530_ = v___x_632_;
goto v___jp_529_;
}
else
{
lean_dec(v_a_629_);
v___y_530_ = v___x_630_;
goto v___jp_529_;
}
}
else
{
v___y_530_ = v___x_628_;
goto v___jp_529_;
}
}
}
}
}
case 6:
{
lean_object* v_binderType_635_; lean_object* v_body_636_; 
v_binderType_635_ = lean_ctor_get(v_e_390_, 1);
v_body_636_ = lean_ctor_get(v_e_390_, 2);
lean_inc_ref(v_body_636_);
lean_inc_ref(v_binderType_635_);
v_d_519_ = v_binderType_635_;
v_b_520_ = v_body_636_;
v___y_521_ = v_a_391_;
v___y_522_ = v_a_392_;
v___y_523_ = v_a_393_;
v___y_524_ = v_a_394_;
v___y_525_ = v_a_395_;
v___y_526_ = v_a_396_;
goto v___jp_518_;
}
case 7:
{
lean_object* v_binderType_637_; lean_object* v_body_638_; 
v_binderType_637_ = lean_ctor_get(v_e_390_, 1);
v_body_638_ = lean_ctor_get(v_e_390_, 2);
lean_inc_ref(v_body_638_);
lean_inc_ref(v_binderType_637_);
v_d_519_ = v_binderType_637_;
v_b_520_ = v_body_638_;
v___y_521_ = v_a_391_;
v___y_522_ = v_a_392_;
v___y_523_ = v_a_393_;
v___y_524_ = v_a_394_;
v___y_525_ = v_a_395_;
v___y_526_ = v_a_396_;
goto v___jp_518_;
}
case 8:
{
lean_object* v_type_639_; lean_object* v_value_640_; lean_object* v_body_641_; uint8_t v___y_643_; uint8_t v___x_667_; 
v_type_639_ = lean_ctor_get(v_e_390_, 1);
v_value_640_ = lean_ctor_get(v_e_390_, 2);
v_body_641_ = lean_ctor_get(v_e_390_, 3);
v___x_667_ = l_Lean_Expr_hasFVar(v_e_390_);
if (v___x_667_ == 0)
{
uint8_t v___x_668_; 
v___x_668_ = l_Lean_Expr_hasMVar(v_e_390_);
v___y_643_ = v___x_668_;
goto v___jp_642_;
}
else
{
v___y_643_ = v___x_667_;
goto v___jp_642_;
}
v___jp_642_:
{
if (v___y_643_ == 0)
{
lean_object* v___x_644_; lean_object* v___x_645_; 
lean_dec_ref(v_e_390_);
v___x_644_ = lean_box(0);
v___x_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
return v___x_645_;
}
else
{
lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v_maxFVar_648_; lean_object* v___x_649_; 
v___x_646_ = lean_st_ref_get(v_a_396_);
lean_dec(v___x_646_);
v___x_647_ = lean_st_ref_get(v_a_392_);
v_maxFVar_648_ = lean_ctor_get(v___x_647_, 1);
lean_inc_ref(v_maxFVar_648_);
lean_dec(v___x_647_);
v___x_649_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1___redArg(v_maxFVar_648_, v_e_390_);
lean_dec_ref(v_maxFVar_648_);
if (lean_obj_tag(v___x_649_) == 1)
{
lean_object* v_val_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
lean_dec_ref(v_e_390_);
v_val_650_ = lean_ctor_get(v___x_649_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_649_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_val_650_);
lean_dec(v___x_649_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
lean_ctor_set_tag(v___x_652_, 0);
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_val_650_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
else
{
lean_object* v___x_658_; 
lean_dec(v___x_649_);
lean_inc_ref(v_type_639_);
v___x_658_ = l_Lean_Meta_Sym_getMaxFVar_x3f(v_type_639_, v_a_391_, v_a_392_, v_a_393_, v_a_394_, v_a_395_, v_a_396_);
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v_a_659_; lean_object* v___x_660_; 
v_a_659_ = lean_ctor_get(v___x_658_, 0);
lean_inc(v_a_659_);
lean_dec_ref(v___x_658_);
lean_inc_ref(v_value_640_);
v___x_660_ = l_Lean_Meta_Sym_getMaxFVar_x3f(v_value_640_, v_a_391_, v_a_392_, v_a_393_, v_a_394_, v_a_395_, v_a_396_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v_a_661_; lean_object* v___x_662_; 
v_a_661_ = lean_ctor_get(v___x_660_, 0);
lean_inc(v_a_661_);
lean_dec_ref(v___x_660_);
v___x_662_ = l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_max___redArg(v_a_659_, v_a_661_, v_a_393_, v_a_395_, v_a_396_);
if (lean_obj_tag(v___x_662_) == 0)
{
lean_object* v_a_663_; lean_object* v___x_664_; 
v_a_663_ = lean_ctor_get(v___x_662_, 0);
lean_inc(v_a_663_);
lean_dec_ref(v___x_662_);
lean_inc_ref(v_body_641_);
v___x_664_ = l_Lean_Meta_Sym_getMaxFVar_x3f(v_body_641_, v_a_391_, v_a_392_, v_a_393_, v_a_394_, v_a_395_, v_a_396_);
if (lean_obj_tag(v___x_664_) == 0)
{
lean_object* v_a_665_; lean_object* v___x_666_; 
v_a_665_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_a_665_);
lean_dec_ref(v___x_664_);
v___x_666_ = l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_max___redArg(v_a_663_, v_a_665_, v_a_393_, v_a_395_, v_a_396_);
v___y_399_ = v___x_666_;
goto v___jp_398_;
}
else
{
lean_dec(v_a_663_);
v___y_399_ = v___x_664_;
goto v___jp_398_;
}
}
else
{
v___y_399_ = v___x_662_;
goto v___jp_398_;
}
}
else
{
lean_dec(v_a_659_);
v___y_399_ = v___x_660_;
goto v___jp_398_;
}
}
else
{
v___y_399_ = v___x_658_;
goto v___jp_398_;
}
}
}
}
}
case 10:
{
lean_object* v_expr_669_; uint8_t v___y_671_; uint8_t v___x_717_; 
v_expr_669_ = lean_ctor_get(v_e_390_, 1);
lean_inc_ref(v_expr_669_);
lean_dec_ref(v_e_390_);
v___x_717_ = l_Lean_Expr_hasFVar(v_expr_669_);
if (v___x_717_ == 0)
{
uint8_t v___x_718_; 
v___x_718_ = l_Lean_Expr_hasMVar(v_expr_669_);
v___y_671_ = v___x_718_;
goto v___jp_670_;
}
else
{
v___y_671_ = v___x_717_;
goto v___jp_670_;
}
v___jp_670_:
{
if (v___y_671_ == 0)
{
lean_object* v___x_672_; lean_object* v___x_673_; 
lean_dec_ref(v_expr_669_);
v___x_672_ = lean_box(0);
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
return v___x_673_;
}
else
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v_maxFVar_676_; lean_object* v___x_677_; 
v___x_674_ = lean_st_ref_get(v_a_396_);
lean_dec(v___x_674_);
v___x_675_ = lean_st_ref_get(v_a_392_);
v_maxFVar_676_ = lean_ctor_get(v___x_675_, 1);
lean_inc_ref(v_maxFVar_676_);
lean_dec(v___x_675_);
v___x_677_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1___redArg(v_maxFVar_676_, v_expr_669_);
lean_dec_ref(v_maxFVar_676_);
if (lean_obj_tag(v___x_677_) == 1)
{
lean_object* v_val_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_685_; 
lean_dec_ref(v_expr_669_);
v_val_678_ = lean_ctor_get(v___x_677_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_685_ == 0)
{
v___x_680_ = v___x_677_;
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_val_678_);
lean_dec(v___x_677_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
lean_ctor_set_tag(v___x_680_, 0);
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_val_678_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
else
{
lean_object* v___x_686_; 
lean_dec(v___x_677_);
lean_inc_ref(v_expr_669_);
v___x_686_ = l_Lean_Meta_Sym_getMaxFVar_x3f(v_expr_669_, v_a_391_, v_a_392_, v_a_393_, v_a_394_, v_a_395_, v_a_396_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_716_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_716_ == 0)
{
v___x_689_ = v___x_686_;
v_isShared_690_ = v_isSharedCheck_716_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_686_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_716_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v_share_693_; lean_object* v_maxFVar_694_; lean_object* v_proofInstInfo_695_; lean_object* v_inferType_696_; lean_object* v_getLevel_697_; lean_object* v_congrInfo_698_; lean_object* v_defEqI_699_; lean_object* v_extensions_700_; lean_object* v_issues_701_; lean_object* v_canon_702_; uint8_t v_debug_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_715_; 
v___x_691_ = lean_st_ref_get(v_a_396_);
lean_dec(v___x_691_);
v___x_692_ = lean_st_ref_take(v_a_392_);
v_share_693_ = lean_ctor_get(v___x_692_, 0);
v_maxFVar_694_ = lean_ctor_get(v___x_692_, 1);
v_proofInstInfo_695_ = lean_ctor_get(v___x_692_, 2);
v_inferType_696_ = lean_ctor_get(v___x_692_, 3);
v_getLevel_697_ = lean_ctor_get(v___x_692_, 4);
v_congrInfo_698_ = lean_ctor_get(v___x_692_, 5);
v_defEqI_699_ = lean_ctor_get(v___x_692_, 6);
v_extensions_700_ = lean_ctor_get(v___x_692_, 7);
v_issues_701_ = lean_ctor_get(v___x_692_, 8);
v_canon_702_ = lean_ctor_get(v___x_692_, 9);
v_debug_703_ = lean_ctor_get_uint8(v___x_692_, sizeof(void*)*10);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_715_ == 0)
{
v___x_705_ = v___x_692_;
v_isShared_706_ = v_isSharedCheck_715_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_canon_702_);
lean_inc(v_issues_701_);
lean_inc(v_extensions_700_);
lean_inc(v_defEqI_699_);
lean_inc(v_congrInfo_698_);
lean_inc(v_getLevel_697_);
lean_inc(v_inferType_696_);
lean_inc(v_proofInstInfo_695_);
lean_inc(v_maxFVar_694_);
lean_inc(v_share_693_);
lean_dec(v___x_692_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_715_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_707_; lean_object* v___x_709_; 
lean_inc(v_a_687_);
v___x_707_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0___redArg(v_maxFVar_694_, v_expr_669_, v_a_687_);
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 1, v___x_707_);
v___x_709_ = v___x_705_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_share_693_);
lean_ctor_set(v_reuseFailAlloc_714_, 1, v___x_707_);
lean_ctor_set(v_reuseFailAlloc_714_, 2, v_proofInstInfo_695_);
lean_ctor_set(v_reuseFailAlloc_714_, 3, v_inferType_696_);
lean_ctor_set(v_reuseFailAlloc_714_, 4, v_getLevel_697_);
lean_ctor_set(v_reuseFailAlloc_714_, 5, v_congrInfo_698_);
lean_ctor_set(v_reuseFailAlloc_714_, 6, v_defEqI_699_);
lean_ctor_set(v_reuseFailAlloc_714_, 7, v_extensions_700_);
lean_ctor_set(v_reuseFailAlloc_714_, 8, v_issues_701_);
lean_ctor_set(v_reuseFailAlloc_714_, 9, v_canon_702_);
lean_ctor_set_uint8(v_reuseFailAlloc_714_, sizeof(void*)*10, v_debug_703_);
v___x_709_ = v_reuseFailAlloc_714_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
lean_object* v___x_710_; lean_object* v___x_712_; 
v___x_710_ = lean_st_ref_set(v_a_392_, v___x_709_);
if (v_isShared_690_ == 0)
{
v___x_712_ = v___x_689_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v_a_687_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
}
}
else
{
lean_dec_ref(v_expr_669_);
return v___x_686_;
}
}
}
}
}
case 11:
{
lean_object* v_struct_719_; uint8_t v___y_721_; uint8_t v___x_767_; 
v_struct_719_ = lean_ctor_get(v_e_390_, 2);
v___x_767_ = l_Lean_Expr_hasFVar(v_e_390_);
if (v___x_767_ == 0)
{
uint8_t v___x_768_; 
v___x_768_ = l_Lean_Expr_hasMVar(v_e_390_);
v___y_721_ = v___x_768_;
goto v___jp_720_;
}
else
{
v___y_721_ = v___x_767_;
goto v___jp_720_;
}
v___jp_720_:
{
if (v___y_721_ == 0)
{
lean_object* v___x_722_; lean_object* v___x_723_; 
lean_dec_ref(v_e_390_);
v___x_722_ = lean_box(0);
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
return v___x_723_;
}
else
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v_maxFVar_726_; lean_object* v___x_727_; 
v___x_724_ = lean_st_ref_get(v_a_396_);
lean_dec(v___x_724_);
v___x_725_ = lean_st_ref_get(v_a_392_);
v_maxFVar_726_ = lean_ctor_get(v___x_725_, 1);
lean_inc_ref(v_maxFVar_726_);
lean_dec(v___x_725_);
v___x_727_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1___redArg(v_maxFVar_726_, v_e_390_);
lean_dec_ref(v_maxFVar_726_);
if (lean_obj_tag(v___x_727_) == 1)
{
lean_object* v_val_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_735_; 
lean_dec_ref(v_e_390_);
v_val_728_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_735_ == 0)
{
v___x_730_ = v___x_727_;
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_val_728_);
lean_dec(v___x_727_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
lean_ctor_set_tag(v___x_730_, 0);
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_val_728_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
else
{
lean_object* v___x_736_; 
lean_dec(v___x_727_);
lean_inc_ref(v_struct_719_);
v___x_736_ = l_Lean_Meta_Sym_getMaxFVar_x3f(v_struct_719_, v_a_391_, v_a_392_, v_a_393_, v_a_394_, v_a_395_, v_a_396_);
if (lean_obj_tag(v___x_736_) == 0)
{
lean_object* v_a_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_766_; 
v_a_737_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_766_ == 0)
{
v___x_739_ = v___x_736_;
v_isShared_740_ = v_isSharedCheck_766_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_a_737_);
lean_dec(v___x_736_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_766_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v_share_743_; lean_object* v_maxFVar_744_; lean_object* v_proofInstInfo_745_; lean_object* v_inferType_746_; lean_object* v_getLevel_747_; lean_object* v_congrInfo_748_; lean_object* v_defEqI_749_; lean_object* v_extensions_750_; lean_object* v_issues_751_; lean_object* v_canon_752_; uint8_t v_debug_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_765_; 
v___x_741_ = lean_st_ref_get(v_a_396_);
lean_dec(v___x_741_);
v___x_742_ = lean_st_ref_take(v_a_392_);
v_share_743_ = lean_ctor_get(v___x_742_, 0);
v_maxFVar_744_ = lean_ctor_get(v___x_742_, 1);
v_proofInstInfo_745_ = lean_ctor_get(v___x_742_, 2);
v_inferType_746_ = lean_ctor_get(v___x_742_, 3);
v_getLevel_747_ = lean_ctor_get(v___x_742_, 4);
v_congrInfo_748_ = lean_ctor_get(v___x_742_, 5);
v_defEqI_749_ = lean_ctor_get(v___x_742_, 6);
v_extensions_750_ = lean_ctor_get(v___x_742_, 7);
v_issues_751_ = lean_ctor_get(v___x_742_, 8);
v_canon_752_ = lean_ctor_get(v___x_742_, 9);
v_debug_753_ = lean_ctor_get_uint8(v___x_742_, sizeof(void*)*10);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_742_);
if (v_isSharedCheck_765_ == 0)
{
v___x_755_ = v___x_742_;
v_isShared_756_ = v_isSharedCheck_765_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_canon_752_);
lean_inc(v_issues_751_);
lean_inc(v_extensions_750_);
lean_inc(v_defEqI_749_);
lean_inc(v_congrInfo_748_);
lean_inc(v_getLevel_747_);
lean_inc(v_inferType_746_);
lean_inc(v_proofInstInfo_745_);
lean_inc(v_maxFVar_744_);
lean_inc(v_share_743_);
lean_dec(v___x_742_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_765_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_757_; lean_object* v___x_759_; 
lean_inc(v_a_737_);
v___x_757_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0___redArg(v_maxFVar_744_, v_e_390_, v_a_737_);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 1, v___x_757_);
v___x_759_ = v___x_755_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_share_743_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v___x_757_);
lean_ctor_set(v_reuseFailAlloc_764_, 2, v_proofInstInfo_745_);
lean_ctor_set(v_reuseFailAlloc_764_, 3, v_inferType_746_);
lean_ctor_set(v_reuseFailAlloc_764_, 4, v_getLevel_747_);
lean_ctor_set(v_reuseFailAlloc_764_, 5, v_congrInfo_748_);
lean_ctor_set(v_reuseFailAlloc_764_, 6, v_defEqI_749_);
lean_ctor_set(v_reuseFailAlloc_764_, 7, v_extensions_750_);
lean_ctor_set(v_reuseFailAlloc_764_, 8, v_issues_751_);
lean_ctor_set(v_reuseFailAlloc_764_, 9, v_canon_752_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, sizeof(void*)*10, v_debug_753_);
v___x_759_ = v_reuseFailAlloc_764_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
lean_object* v___x_760_; lean_object* v___x_762_; 
v___x_760_ = lean_st_ref_set(v_a_392_, v___x_759_);
if (v_isShared_740_ == 0)
{
v___x_762_ = v___x_739_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_737_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_390_);
return v___x_736_;
}
}
}
}
}
default: 
{
lean_object* v___x_769_; lean_object* v___x_770_; 
lean_dec_ref(v_e_390_);
v___x_769_ = lean_box(0);
v___x_770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_770_, 0, v___x_769_);
return v___x_770_;
}
}
v___jp_398_:
{
if (lean_obj_tag(v___y_399_) == 0)
{
lean_object* v_a_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_429_; 
v_a_400_ = lean_ctor_get(v___y_399_, 0);
v_isSharedCheck_429_ = !lean_is_exclusive(v___y_399_);
if (v_isSharedCheck_429_ == 0)
{
v___x_402_ = v___y_399_;
v_isShared_403_ = v_isSharedCheck_429_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_a_400_);
lean_dec(v___y_399_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_429_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v_share_406_; lean_object* v_maxFVar_407_; lean_object* v_proofInstInfo_408_; lean_object* v_inferType_409_; lean_object* v_getLevel_410_; lean_object* v_congrInfo_411_; lean_object* v_defEqI_412_; lean_object* v_extensions_413_; lean_object* v_issues_414_; lean_object* v_canon_415_; uint8_t v_debug_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_428_; 
v___x_404_ = lean_st_ref_get(v_a_396_);
lean_dec(v___x_404_);
v___x_405_ = lean_st_ref_take(v_a_392_);
v_share_406_ = lean_ctor_get(v___x_405_, 0);
v_maxFVar_407_ = lean_ctor_get(v___x_405_, 1);
v_proofInstInfo_408_ = lean_ctor_get(v___x_405_, 2);
v_inferType_409_ = lean_ctor_get(v___x_405_, 3);
v_getLevel_410_ = lean_ctor_get(v___x_405_, 4);
v_congrInfo_411_ = lean_ctor_get(v___x_405_, 5);
v_defEqI_412_ = lean_ctor_get(v___x_405_, 6);
v_extensions_413_ = lean_ctor_get(v___x_405_, 7);
v_issues_414_ = lean_ctor_get(v___x_405_, 8);
v_canon_415_ = lean_ctor_get(v___x_405_, 9);
v_debug_416_ = lean_ctor_get_uint8(v___x_405_, sizeof(void*)*10);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_428_ == 0)
{
v___x_418_ = v___x_405_;
v_isShared_419_ = v_isSharedCheck_428_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_canon_415_);
lean_inc(v_issues_414_);
lean_inc(v_extensions_413_);
lean_inc(v_defEqI_412_);
lean_inc(v_congrInfo_411_);
lean_inc(v_getLevel_410_);
lean_inc(v_inferType_409_);
lean_inc(v_proofInstInfo_408_);
lean_inc(v_maxFVar_407_);
lean_inc(v_share_406_);
lean_dec(v___x_405_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_428_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_420_; lean_object* v___x_422_; 
lean_inc(v_a_400_);
v___x_420_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0___redArg(v_maxFVar_407_, v_e_390_, v_a_400_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 1, v___x_420_);
v___x_422_ = v___x_418_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_share_406_);
lean_ctor_set(v_reuseFailAlloc_427_, 1, v___x_420_);
lean_ctor_set(v_reuseFailAlloc_427_, 2, v_proofInstInfo_408_);
lean_ctor_set(v_reuseFailAlloc_427_, 3, v_inferType_409_);
lean_ctor_set(v_reuseFailAlloc_427_, 4, v_getLevel_410_);
lean_ctor_set(v_reuseFailAlloc_427_, 5, v_congrInfo_411_);
lean_ctor_set(v_reuseFailAlloc_427_, 6, v_defEqI_412_);
lean_ctor_set(v_reuseFailAlloc_427_, 7, v_extensions_413_);
lean_ctor_set(v_reuseFailAlloc_427_, 8, v_issues_414_);
lean_ctor_set(v_reuseFailAlloc_427_, 9, v_canon_415_);
lean_ctor_set_uint8(v_reuseFailAlloc_427_, sizeof(void*)*10, v_debug_416_);
v___x_422_ = v_reuseFailAlloc_427_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
lean_object* v___x_423_; lean_object* v___x_425_; 
v___x_423_ = lean_st_ref_set(v_a_392_, v___x_422_);
if (v_isShared_403_ == 0)
{
v___x_425_ = v___x_402_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_a_400_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_390_);
return v___y_399_;
}
}
v___jp_430_:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v_share_434_; lean_object* v_maxFVar_435_; lean_object* v_proofInstInfo_436_; lean_object* v_inferType_437_; lean_object* v_getLevel_438_; lean_object* v_congrInfo_439_; lean_object* v_defEqI_440_; lean_object* v_extensions_441_; lean_object* v_issues_442_; lean_object* v_canon_443_; uint8_t v_debug_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_454_; 
v___x_432_ = lean_st_ref_get(v_a_396_);
lean_dec(v___x_432_);
v___x_433_ = lean_st_ref_take(v_a_392_);
v_share_434_ = lean_ctor_get(v___x_433_, 0);
v_maxFVar_435_ = lean_ctor_get(v___x_433_, 1);
v_proofInstInfo_436_ = lean_ctor_get(v___x_433_, 2);
v_inferType_437_ = lean_ctor_get(v___x_433_, 3);
v_getLevel_438_ = lean_ctor_get(v___x_433_, 4);
v_congrInfo_439_ = lean_ctor_get(v___x_433_, 5);
v_defEqI_440_ = lean_ctor_get(v___x_433_, 6);
v_extensions_441_ = lean_ctor_get(v___x_433_, 7);
v_issues_442_ = lean_ctor_get(v___x_433_, 8);
v_canon_443_ = lean_ctor_get(v___x_433_, 9);
v_debug_444_ = lean_ctor_get_uint8(v___x_433_, sizeof(void*)*10);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_454_ == 0)
{
v___x_446_ = v___x_433_;
v_isShared_447_ = v_isSharedCheck_454_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_canon_443_);
lean_inc(v_issues_442_);
lean_inc(v_extensions_441_);
lean_inc(v_defEqI_440_);
lean_inc(v_congrInfo_439_);
lean_inc(v_getLevel_438_);
lean_inc(v_inferType_437_);
lean_inc(v_proofInstInfo_436_);
lean_inc(v_maxFVar_435_);
lean_inc(v_share_434_);
lean_dec(v___x_433_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_454_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_448_; lean_object* v___x_450_; 
lean_inc(v_a_431_);
v___x_448_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0___redArg(v_maxFVar_435_, v_e_390_, v_a_431_);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 1, v___x_448_);
v___x_450_ = v___x_446_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_share_434_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v___x_448_);
lean_ctor_set(v_reuseFailAlloc_453_, 2, v_proofInstInfo_436_);
lean_ctor_set(v_reuseFailAlloc_453_, 3, v_inferType_437_);
lean_ctor_set(v_reuseFailAlloc_453_, 4, v_getLevel_438_);
lean_ctor_set(v_reuseFailAlloc_453_, 5, v_congrInfo_439_);
lean_ctor_set(v_reuseFailAlloc_453_, 6, v_defEqI_440_);
lean_ctor_set(v_reuseFailAlloc_453_, 7, v_extensions_441_);
lean_ctor_set(v_reuseFailAlloc_453_, 8, v_issues_442_);
lean_ctor_set(v_reuseFailAlloc_453_, 9, v_canon_443_);
lean_ctor_set_uint8(v_reuseFailAlloc_453_, sizeof(void*)*10, v_debug_444_);
v___x_450_ = v_reuseFailAlloc_453_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_451_ = lean_st_ref_set(v_a_392_, v___x_450_);
v___x_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_452_, 0, v_a_431_);
return v___x_452_;
}
}
}
v___jp_455_:
{
if (lean_obj_tag(v___y_458_) == 0)
{
lean_object* v_a_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_488_; 
v_a_459_ = lean_ctor_get(v___y_458_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___y_458_);
if (v_isSharedCheck_488_ == 0)
{
v___x_461_ = v___y_458_;
v_isShared_462_ = v_isSharedCheck_488_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_a_459_);
lean_dec(v___y_458_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_488_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v_share_465_; lean_object* v_maxFVar_466_; lean_object* v_proofInstInfo_467_; lean_object* v_inferType_468_; lean_object* v_getLevel_469_; lean_object* v_congrInfo_470_; lean_object* v_defEqI_471_; lean_object* v_extensions_472_; lean_object* v_issues_473_; lean_object* v_canon_474_; uint8_t v_debug_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_487_; 
v___x_463_ = lean_st_ref_get(v___y_457_);
lean_dec(v___x_463_);
v___x_464_ = lean_st_ref_take(v___y_456_);
v_share_465_ = lean_ctor_get(v___x_464_, 0);
v_maxFVar_466_ = lean_ctor_get(v___x_464_, 1);
v_proofInstInfo_467_ = lean_ctor_get(v___x_464_, 2);
v_inferType_468_ = lean_ctor_get(v___x_464_, 3);
v_getLevel_469_ = lean_ctor_get(v___x_464_, 4);
v_congrInfo_470_ = lean_ctor_get(v___x_464_, 5);
v_defEqI_471_ = lean_ctor_get(v___x_464_, 6);
v_extensions_472_ = lean_ctor_get(v___x_464_, 7);
v_issues_473_ = lean_ctor_get(v___x_464_, 8);
v_canon_474_ = lean_ctor_get(v___x_464_, 9);
v_debug_475_ = lean_ctor_get_uint8(v___x_464_, sizeof(void*)*10);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_487_ == 0)
{
v___x_477_ = v___x_464_;
v_isShared_478_ = v_isSharedCheck_487_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_canon_474_);
lean_inc(v_issues_473_);
lean_inc(v_extensions_472_);
lean_inc(v_defEqI_471_);
lean_inc(v_congrInfo_470_);
lean_inc(v_getLevel_469_);
lean_inc(v_inferType_468_);
lean_inc(v_proofInstInfo_467_);
lean_inc(v_maxFVar_466_);
lean_inc(v_share_465_);
lean_dec(v___x_464_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_487_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_479_; lean_object* v___x_481_; 
lean_inc(v_a_459_);
v___x_479_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0___redArg(v_maxFVar_466_, v_e_390_, v_a_459_);
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 1, v___x_479_);
v___x_481_ = v___x_477_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_share_465_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v___x_479_);
lean_ctor_set(v_reuseFailAlloc_486_, 2, v_proofInstInfo_467_);
lean_ctor_set(v_reuseFailAlloc_486_, 3, v_inferType_468_);
lean_ctor_set(v_reuseFailAlloc_486_, 4, v_getLevel_469_);
lean_ctor_set(v_reuseFailAlloc_486_, 5, v_congrInfo_470_);
lean_ctor_set(v_reuseFailAlloc_486_, 6, v_defEqI_471_);
lean_ctor_set(v_reuseFailAlloc_486_, 7, v_extensions_472_);
lean_ctor_set(v_reuseFailAlloc_486_, 8, v_issues_473_);
lean_ctor_set(v_reuseFailAlloc_486_, 9, v_canon_474_);
lean_ctor_set_uint8(v_reuseFailAlloc_486_, sizeof(void*)*10, v_debug_475_);
v___x_481_ = v_reuseFailAlloc_486_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
lean_object* v___x_482_; lean_object* v___x_484_; 
v___x_482_ = lean_st_ref_set(v___y_456_, v___x_481_);
if (v_isShared_462_ == 0)
{
v___x_484_ = v___x_461_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v_a_459_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
return v___x_484_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_390_);
return v___y_458_;
}
}
v___jp_489_:
{
if (v___y_498_ == 0)
{
lean_object* v___x_499_; lean_object* v___x_500_; 
lean_dec_ref(v___y_497_);
lean_dec_ref(v___y_490_);
lean_dec_ref(v_e_390_);
v___x_499_ = lean_box(0);
v___x_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
return v___x_500_;
}
else
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v_maxFVar_503_; lean_object* v___x_504_; 
v___x_501_ = lean_st_ref_get(v___y_494_);
lean_dec(v___x_501_);
v___x_502_ = lean_st_ref_get(v___y_492_);
v_maxFVar_503_ = lean_ctor_get(v___x_502_, 1);
lean_inc_ref(v_maxFVar_503_);
lean_dec(v___x_502_);
v___x_504_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1___redArg(v_maxFVar_503_, v_e_390_);
lean_dec_ref(v_maxFVar_503_);
if (lean_obj_tag(v___x_504_) == 1)
{
lean_object* v_val_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_512_; 
lean_dec_ref(v___y_497_);
lean_dec_ref(v___y_490_);
lean_dec_ref(v_e_390_);
v_val_505_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_512_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_512_ == 0)
{
v___x_507_ = v___x_504_;
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_val_505_);
lean_dec(v___x_504_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_510_; 
if (v_isShared_508_ == 0)
{
lean_ctor_set_tag(v___x_507_, 0);
v___x_510_ = v___x_507_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v_val_505_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
else
{
lean_object* v___x_513_; 
lean_dec(v___x_504_);
v___x_513_ = l_Lean_Meta_Sym_getMaxFVar_x3f(v___y_497_, v___y_491_, v___y_492_, v___y_496_, v___y_495_, v___y_493_, v___y_494_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v_a_514_; lean_object* v___x_515_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
lean_inc(v_a_514_);
lean_dec_ref(v___x_513_);
v___x_515_ = l_Lean_Meta_Sym_getMaxFVar_x3f(v___y_490_, v___y_491_, v___y_492_, v___y_496_, v___y_495_, v___y_493_, v___y_494_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; lean_object* v___x_517_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_a_516_);
lean_dec_ref(v___x_515_);
v___x_517_ = l___private_Lean_Meta_Sym_MaxFVar_0__Lean_Meta_Sym_max___redArg(v_a_514_, v_a_516_, v___y_496_, v___y_493_, v___y_494_);
v___y_456_ = v___y_492_;
v___y_457_ = v___y_494_;
v___y_458_ = v___x_517_;
goto v___jp_455_;
}
else
{
lean_dec(v_a_514_);
v___y_456_ = v___y_492_;
v___y_457_ = v___y_494_;
v___y_458_ = v___x_515_;
goto v___jp_455_;
}
}
else
{
lean_dec_ref(v___y_490_);
v___y_456_ = v___y_492_;
v___y_457_ = v___y_494_;
v___y_458_ = v___x_513_;
goto v___jp_455_;
}
}
}
}
v___jp_518_:
{
uint8_t v___x_527_; 
v___x_527_ = l_Lean_Expr_hasFVar(v_e_390_);
if (v___x_527_ == 0)
{
uint8_t v___x_528_; 
v___x_528_ = l_Lean_Expr_hasMVar(v_e_390_);
v___y_490_ = v_b_520_;
v___y_491_ = v___y_521_;
v___y_492_ = v___y_522_;
v___y_493_ = v___y_525_;
v___y_494_ = v___y_526_;
v___y_495_ = v___y_524_;
v___y_496_ = v___y_523_;
v___y_497_ = v_d_519_;
v___y_498_ = v___x_528_;
goto v___jp_489_;
}
else
{
v___y_490_ = v_b_520_;
v___y_491_ = v___y_521_;
v___y_492_ = v___y_522_;
v___y_493_ = v___y_525_;
v___y_494_ = v___y_526_;
v___y_495_ = v___y_524_;
v___y_496_ = v___y_523_;
v___y_497_ = v_d_519_;
v___y_498_ = v___x_527_;
goto v___jp_489_;
}
}
v___jp_529_:
{
if (lean_obj_tag(v___y_530_) == 0)
{
lean_object* v_a_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_560_; 
v_a_531_ = lean_ctor_get(v___y_530_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___y_530_);
if (v_isSharedCheck_560_ == 0)
{
v___x_533_ = v___y_530_;
v_isShared_534_ = v_isSharedCheck_560_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_a_531_);
lean_dec(v___y_530_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_560_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v_share_537_; lean_object* v_maxFVar_538_; lean_object* v_proofInstInfo_539_; lean_object* v_inferType_540_; lean_object* v_getLevel_541_; lean_object* v_congrInfo_542_; lean_object* v_defEqI_543_; lean_object* v_extensions_544_; lean_object* v_issues_545_; lean_object* v_canon_546_; uint8_t v_debug_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_559_; 
v___x_535_ = lean_st_ref_get(v_a_396_);
lean_dec(v___x_535_);
v___x_536_ = lean_st_ref_take(v_a_392_);
v_share_537_ = lean_ctor_get(v___x_536_, 0);
v_maxFVar_538_ = lean_ctor_get(v___x_536_, 1);
v_proofInstInfo_539_ = lean_ctor_get(v___x_536_, 2);
v_inferType_540_ = lean_ctor_get(v___x_536_, 3);
v_getLevel_541_ = lean_ctor_get(v___x_536_, 4);
v_congrInfo_542_ = lean_ctor_get(v___x_536_, 5);
v_defEqI_543_ = lean_ctor_get(v___x_536_, 6);
v_extensions_544_ = lean_ctor_get(v___x_536_, 7);
v_issues_545_ = lean_ctor_get(v___x_536_, 8);
v_canon_546_ = lean_ctor_get(v___x_536_, 9);
v_debug_547_ = lean_ctor_get_uint8(v___x_536_, sizeof(void*)*10);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_536_);
if (v_isSharedCheck_559_ == 0)
{
v___x_549_ = v___x_536_;
v_isShared_550_ = v_isSharedCheck_559_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_canon_546_);
lean_inc(v_issues_545_);
lean_inc(v_extensions_544_);
lean_inc(v_defEqI_543_);
lean_inc(v_congrInfo_542_);
lean_inc(v_getLevel_541_);
lean_inc(v_inferType_540_);
lean_inc(v_proofInstInfo_539_);
lean_inc(v_maxFVar_538_);
lean_inc(v_share_537_);
lean_dec(v___x_536_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_559_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_551_; lean_object* v___x_553_; 
lean_inc(v_a_531_);
v___x_551_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0___redArg(v_maxFVar_538_, v_e_390_, v_a_531_);
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 1, v___x_551_);
v___x_553_ = v___x_549_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_share_537_);
lean_ctor_set(v_reuseFailAlloc_558_, 1, v___x_551_);
lean_ctor_set(v_reuseFailAlloc_558_, 2, v_proofInstInfo_539_);
lean_ctor_set(v_reuseFailAlloc_558_, 3, v_inferType_540_);
lean_ctor_set(v_reuseFailAlloc_558_, 4, v_getLevel_541_);
lean_ctor_set(v_reuseFailAlloc_558_, 5, v_congrInfo_542_);
lean_ctor_set(v_reuseFailAlloc_558_, 6, v_defEqI_543_);
lean_ctor_set(v_reuseFailAlloc_558_, 7, v_extensions_544_);
lean_ctor_set(v_reuseFailAlloc_558_, 8, v_issues_545_);
lean_ctor_set(v_reuseFailAlloc_558_, 9, v_canon_546_);
lean_ctor_set_uint8(v_reuseFailAlloc_558_, sizeof(void*)*10, v_debug_547_);
v___x_553_ = v_reuseFailAlloc_558_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
lean_object* v___x_554_; lean_object* v___x_556_; 
v___x_554_ = lean_st_ref_set(v_a_392_, v___x_553_);
if (v_isShared_534_ == 0)
{
v___x_556_ = v___x_533_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_531_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_390_);
return v___y_530_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getMaxFVar_x3f___boxed(lean_object* v_e_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Lean_Meta_Sym_getMaxFVar_x3f(v_e_771_, v_a_772_, v_a_773_, v_a_774_, v_a_775_, v_a_776_, v_a_777_);
lean_dec(v_a_777_);
lean_dec_ref(v_a_776_);
lean_dec(v_a_775_);
lean_dec_ref(v_a_774_);
lean_dec(v_a_773_);
lean_dec_ref(v_a_772_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0(lean_object* v_00_u03b2_780_, lean_object* v_x_781_, lean_object* v_x_782_, lean_object* v_x_783_){
_start:
{
lean_object* v___x_784_; 
v___x_784_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0___redArg(v_x_781_, v_x_782_, v_x_783_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1(lean_object* v_00_u03b2_785_, lean_object* v_x_786_, lean_object* v_x_787_){
_start:
{
lean_object* v___x_788_; 
v___x_788_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1___redArg(v_x_786_, v_x_787_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1___boxed(lean_object* v_00_u03b2_789_, lean_object* v_x_790_, lean_object* v_x_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1(v_00_u03b2_789_, v_x_790_, v_x_791_);
lean_dec_ref(v_x_791_);
lean_dec_ref(v_x_790_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0(lean_object* v_00_u03b2_793_, lean_object* v_x_794_, size_t v_x_795_, size_t v_x_796_, lean_object* v_x_797_, lean_object* v_x_798_){
_start:
{
lean_object* v___x_799_; 
v___x_799_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___redArg(v_x_794_, v_x_795_, v_x_796_, v_x_797_, v_x_798_);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_800_, lean_object* v_x_801_, lean_object* v_x_802_, lean_object* v_x_803_, lean_object* v_x_804_, lean_object* v_x_805_){
_start:
{
size_t v_x_6205__boxed_806_; size_t v_x_6206__boxed_807_; lean_object* v_res_808_; 
v_x_6205__boxed_806_ = lean_unbox_usize(v_x_802_);
lean_dec(v_x_802_);
v_x_6206__boxed_807_ = lean_unbox_usize(v_x_803_);
lean_dec(v_x_803_);
v_res_808_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0(v_00_u03b2_800_, v_x_801_, v_x_6205__boxed_806_, v_x_6206__boxed_807_, v_x_804_, v_x_805_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2(lean_object* v_00_u03b2_809_, lean_object* v_x_810_, size_t v_x_811_, lean_object* v_x_812_){
_start:
{
lean_object* v___x_813_; 
v___x_813_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2___redArg(v_x_810_, v_x_811_, v_x_812_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2___boxed(lean_object* v_00_u03b2_814_, lean_object* v_x_815_, lean_object* v_x_816_, lean_object* v_x_817_){
_start:
{
size_t v_x_6222__boxed_818_; lean_object* v_res_819_; 
v_x_6222__boxed_818_ = lean_unbox_usize(v_x_816_);
lean_dec(v_x_816_);
v_res_819_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2(v_00_u03b2_814_, v_x_815_, v_x_6222__boxed_818_, v_x_817_);
lean_dec_ref(v_x_817_);
lean_dec_ref(v_x_815_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_820_, lean_object* v_n_821_, lean_object* v_k_822_, lean_object* v_v_823_){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__2___redArg(v_n_821_, v_k_822_, v_v_823_);
return v___x_824_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_825_, size_t v_depth_826_, lean_object* v_keys_827_, lean_object* v_vals_828_, lean_object* v_heq_829_, lean_object* v_i_830_, lean_object* v_entries_831_){
_start:
{
lean_object* v___x_832_; 
v___x_832_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__3___redArg(v_depth_826_, v_keys_827_, v_vals_828_, v_i_830_, v_entries_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_833_, lean_object* v_depth_834_, lean_object* v_keys_835_, lean_object* v_vals_836_, lean_object* v_heq_837_, lean_object* v_i_838_, lean_object* v_entries_839_){
_start:
{
size_t v_depth_boxed_840_; lean_object* v_res_841_; 
v_depth_boxed_840_ = lean_unbox_usize(v_depth_834_);
lean_dec(v_depth_834_);
v_res_841_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__3(v_00_u03b2_833_, v_depth_boxed_840_, v_keys_835_, v_vals_836_, v_heq_837_, v_i_838_, v_entries_839_);
lean_dec_ref(v_vals_836_);
lean_dec_ref(v_keys_835_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2_spec__6(lean_object* v_00_u03b2_842_, lean_object* v_keys_843_, lean_object* v_vals_844_, lean_object* v_heq_845_, lean_object* v_i_846_, lean_object* v_k_847_){
_start:
{
lean_object* v___x_848_; 
v___x_848_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2_spec__6___redArg(v_keys_843_, v_vals_844_, v_i_846_, v_k_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2_spec__6___boxed(lean_object* v_00_u03b2_849_, lean_object* v_keys_850_, lean_object* v_vals_851_, lean_object* v_heq_852_, lean_object* v_i_853_, lean_object* v_k_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__1_spec__2_spec__6(v_00_u03b2_849_, v_keys_850_, v_vals_851_, v_heq_852_, v_i_853_, v_k_854_);
lean_dec_ref(v_k_854_);
lean_dec_ref(v_vals_851_);
lean_dec_ref(v_keys_850_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_856_, lean_object* v_x_857_, lean_object* v_x_858_, lean_object* v_x_859_, lean_object* v_x_860_){
_start:
{
lean_object* v___x_861_; 
v___x_861_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getMaxFVar_x3f_spec__0_spec__0_spec__2_spec__4___redArg(v_x_857_, v_x_858_, v_x_859_, v_x_860_);
return v___x_861_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_MaxFVar(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_MaxFVar(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_MaxFVar(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_MaxFVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_MaxFVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_MaxFVar(builtin);
}
#ifdef __cplusplus
}
#endif
