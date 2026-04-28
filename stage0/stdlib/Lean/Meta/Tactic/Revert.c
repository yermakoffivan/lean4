// Lean compiler output
// Module: Lean.Meta.Tactic.Revert
// Imports: public import Lean.Meta.Tactic.Clear
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
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_MVarId_setKind___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_setTag___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_collectForwardDeps(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_revert(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_revert___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_revert___lam__0___closed__0;
static lean_once_cell_t l_Lean_MVarId_revert___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_revert___lam__0___closed__1;
static lean_once_cell_t l_Lean_MVarId_revert___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_revert___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_revert___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_revert___closed__0;
static lean_once_cell_t l_Lean_MVarId_revert___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_revert___closed__1;
static lean_once_cell_t l_Lean_MVarId_revert___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_revert___closed__2;
LEAN_EXPORT lean_object* l_Lean_MVarId_revert(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(lean_object* v_mvarId_1_, lean_object* v_x_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1_, v_x_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_);
if (lean_obj_tag(v___x_8_) == 0)
{
lean_object* v_a_9_; lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_16_; 
v_a_9_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_16_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_16_ == 0)
{
v___x_11_ = v___x_8_;
v_isShared_12_ = v_isSharedCheck_16_;
goto v_resetjp_10_;
}
else
{
lean_inc(v_a_9_);
lean_dec(v___x_8_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_16_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
lean_object* v___x_14_; 
if (v_isShared_12_ == 0)
{
v___x_14_ = v___x_11_;
goto v_reusejp_13_;
}
else
{
lean_object* v_reuseFailAlloc_15_; 
v_reuseFailAlloc_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_15_, 0, v_a_9_);
v___x_14_ = v_reuseFailAlloc_15_;
goto v_reusejp_13_;
}
v_reusejp_13_:
{
return v___x_14_;
}
}
}
else
{
lean_object* v_a_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_24_; 
v_a_17_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_24_ == 0)
{
v___x_19_ = v___x_8_;
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_a_17_);
lean_dec(v___x_8_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_22_; 
if (v_isShared_20_ == 0)
{
v___x_22_ = v___x_19_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_a_17_);
v___x_22_ = v_reuseFailAlloc_23_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg___boxed(lean_object* v_mvarId_25_, lean_object* v_x_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(v_mvarId_25_, v_x_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_);
lean_dec(v___y_30_);
lean_dec_ref(v___y_29_);
lean_dec(v___y_28_);
lean_dec_ref(v___y_27_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5(lean_object* v_00_u03b1_33_, lean_object* v_mvarId_34_, lean_object* v_x_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(v_mvarId_34_, v_x_35_, v___y_36_, v___y_37_, v___y_38_, v___y_39_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___boxed(lean_object* v_00_u03b1_42_, lean_object* v_mvarId_43_, lean_object* v_x_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5(v_00_u03b1_42_, v_mvarId_43_, v_x_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_);
lean_dec(v___y_48_);
lean_dec_ref(v___y_47_);
lean_dec(v___y_46_);
lean_dec_ref(v___y_45_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3(lean_object* v_msgData_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v___x_57_; lean_object* v_env_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v_mctx_61_; lean_object* v_lctx_62_; lean_object* v_options_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_57_ = lean_st_ref_get(v___y_55_);
v_env_58_ = lean_ctor_get(v___x_57_, 0);
lean_inc_ref(v_env_58_);
lean_dec(v___x_57_);
v___x_59_ = lean_st_ref_get(v___y_55_);
lean_dec(v___x_59_);
v___x_60_ = lean_st_ref_get(v___y_53_);
v_mctx_61_ = lean_ctor_get(v___x_60_, 0);
lean_inc_ref(v_mctx_61_);
lean_dec(v___x_60_);
v_lctx_62_ = lean_ctor_get(v___y_52_, 2);
v_options_63_ = lean_ctor_get(v___y_54_, 2);
lean_inc_ref(v_options_63_);
lean_inc_ref(v_lctx_62_);
v___x_64_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_64_, 0, v_env_58_);
lean_ctor_set(v___x_64_, 1, v_mctx_61_);
lean_ctor_set(v___x_64_, 2, v_lctx_62_);
lean_ctor_set(v___x_64_, 3, v_options_63_);
v___x_65_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
lean_ctor_set(v___x_65_, 1, v_msgData_51_);
v___x_66_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3___boxed(lean_object* v_msgData_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3(v_msgData_67_, v___y_68_, v___y_69_, v___y_70_, v___y_71_);
lean_dec(v___y_71_);
lean_dec_ref(v___y_70_);
lean_dec(v___y_69_);
lean_dec_ref(v___y_68_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(lean_object* v_msg_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_){
_start:
{
lean_object* v_ref_80_; lean_object* v___x_81_; lean_object* v_a_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_90_; 
v_ref_80_ = lean_ctor_get(v___y_77_, 5);
v___x_81_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3(v_msg_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_);
v_a_82_ = lean_ctor_get(v___x_81_, 0);
v_isSharedCheck_90_ = !lean_is_exclusive(v___x_81_);
if (v_isSharedCheck_90_ == 0)
{
v___x_84_ = v___x_81_;
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_a_82_);
lean_dec(v___x_81_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_86_; lean_object* v___x_88_; 
lean_inc(v_ref_80_);
v___x_86_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_86_, 0, v_ref_80_);
lean_ctor_set(v___x_86_, 1, v_a_82_);
if (v_isShared_85_ == 0)
{
lean_ctor_set_tag(v___x_84_, 1);
lean_ctor_set(v___x_84_, 0, v___x_86_);
v___x_88_ = v___x_84_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v___x_86_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg___boxed(lean_object* v_msg_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(v_msg_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
return v_res_97_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__0(void){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = lean_mk_string_unchecked("Failed to revert `", 18, 18);
return v___x_98_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__0);
v___x_100_ = l_Lean_stringToMessageData(v___x_99_);
return v___x_100_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__2(void){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_mk_string_unchecked("`: It is an auxiliary declaration created to represent a recursive reference to an in-progress definition", 105, 105);
return v___x_101_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__2);
v___x_103_ = l_Lean_stringToMessageData(v___x_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4(lean_object* v_as_104_, size_t v_sz_105_, size_t v_i_106_, lean_object* v_b_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_){
_start:
{
lean_object* v_a_114_; uint8_t v___x_118_; 
v___x_118_ = lean_usize_dec_lt(v_i_106_, v_sz_105_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; 
v___x_119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_119_, 0, v_b_107_);
return v___x_119_;
}
else
{
lean_object* v_a_120_; lean_object* v___x_121_; 
v_a_120_ = lean_array_uget_borrowed(v_as_104_, v_i_106_);
lean_inc(v_a_120_);
v___x_121_ = l_Lean_FVarId_getDecl___redArg(v_a_120_, v___y_108_, v___y_110_, v___y_111_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v_a_122_; lean_object* v___x_123_; uint8_t v___x_124_; 
v_a_122_ = lean_ctor_get(v___x_121_, 0);
lean_inc(v_a_122_);
lean_dec_ref(v___x_121_);
v___x_123_ = lean_box(0);
v___x_124_ = l_Lean_LocalDecl_isAuxDecl(v_a_122_);
lean_dec(v_a_122_);
if (v___x_124_ == 0)
{
v_a_114_ = v___x_123_;
goto v___jp_113_;
}
else
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_125_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1);
lean_inc(v_a_120_);
v___x_126_ = l_Lean_mkFVar(v_a_120_);
v___x_127_ = l_Lean_MessageData_ofExpr(v___x_126_);
v___x_128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_125_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
v___x_129_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3);
v___x_130_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_128_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
v___x_131_ = l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(v___x_130_, v___y_108_, v___y_109_, v___y_110_, v___y_111_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_dec_ref(v___x_131_);
v_a_114_ = v___x_123_;
goto v___jp_113_;
}
else
{
return v___x_131_;
}
}
}
else
{
lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_139_; 
v_a_132_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_139_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_139_ == 0)
{
v___x_134_ = v___x_121_;
v_isShared_135_ = v_isSharedCheck_139_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_a_132_);
lean_dec(v___x_121_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_139_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_137_; 
if (v_isShared_135_ == 0)
{
v___x_137_ = v___x_134_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_a_132_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
}
v___jp_113_:
{
size_t v___x_115_; size_t v___x_116_; 
v___x_115_ = ((size_t)1ULL);
v___x_116_ = lean_usize_add(v_i_106_, v___x_115_);
v_i_106_ = v___x_116_;
v_b_107_ = v_a_114_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___boxed(lean_object* v_as_140_, lean_object* v_sz_141_, lean_object* v_i_142_, lean_object* v_b_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_){
_start:
{
size_t v_sz_boxed_149_; size_t v_i_boxed_150_; lean_object* v_res_151_; 
v_sz_boxed_149_ = lean_unbox_usize(v_sz_141_);
lean_dec(v_sz_141_);
v_i_boxed_150_ = lean_unbox_usize(v_i_142_);
lean_dec(v_i_142_);
v_res_151_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4(v_as_140_, v_sz_boxed_149_, v_i_boxed_150_, v_b_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
lean_dec_ref(v_as_140_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2(size_t v_sz_152_, size_t v_i_153_, lean_object* v_bs_154_){
_start:
{
uint8_t v___x_155_; 
v___x_155_ = lean_usize_dec_lt(v_i_153_, v_sz_152_);
if (v___x_155_ == 0)
{
return v_bs_154_;
}
else
{
lean_object* v_v_156_; lean_object* v___x_157_; lean_object* v_bs_x27_158_; lean_object* v___x_159_; size_t v___x_160_; size_t v___x_161_; lean_object* v___x_162_; 
v_v_156_ = lean_array_uget(v_bs_154_, v_i_153_);
v___x_157_ = lean_unsigned_to_nat(0u);
v_bs_x27_158_ = lean_array_uset(v_bs_154_, v_i_153_, v___x_157_);
v___x_159_ = l_Lean_Expr_fvarId_x21(v_v_156_);
lean_dec(v_v_156_);
v___x_160_ = ((size_t)1ULL);
v___x_161_ = lean_usize_add(v_i_153_, v___x_160_);
v___x_162_ = lean_array_uset(v_bs_x27_158_, v_i_153_, v___x_159_);
v_i_153_ = v___x_161_;
v_bs_154_ = v___x_162_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2___boxed(lean_object* v_sz_164_, lean_object* v_i_165_, lean_object* v_bs_166_){
_start:
{
size_t v_sz_boxed_167_; size_t v_i_boxed_168_; lean_object* v_res_169_; 
v_sz_boxed_167_ = lean_unbox_usize(v_sz_164_);
lean_dec(v_sz_164_);
v_i_boxed_168_ = lean_unbox_usize(v_i_165_);
lean_dec(v_i_165_);
v_res_169_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2(v_sz_boxed_167_, v_i_boxed_168_, v_bs_166_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1(lean_object* v_as_170_, size_t v_sz_171_, size_t v_i_172_, lean_object* v_b_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
lean_object* v_a_180_; uint8_t v___x_184_; 
v___x_184_ = lean_usize_dec_lt(v_i_172_, v_sz_171_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; 
v___x_185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_185_, 0, v_b_173_);
return v___x_185_;
}
else
{
lean_object* v_a_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v_a_186_ = lean_array_uget_borrowed(v_as_170_, v_i_172_);
v___x_187_ = l_Lean_Expr_fvarId_x21(v_a_186_);
lean_inc(v___x_187_);
v___x_188_ = l_Lean_FVarId_getDecl___redArg(v___x_187_, v___y_174_, v___y_176_, v___y_177_);
if (lean_obj_tag(v___x_188_) == 0)
{
lean_object* v_a_189_; lean_object* v_fst_190_; lean_object* v_snd_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_213_; 
v_a_189_ = lean_ctor_get(v___x_188_, 0);
lean_inc(v_a_189_);
lean_dec_ref(v___x_188_);
v_fst_190_ = lean_ctor_get(v_b_173_, 0);
v_snd_191_ = lean_ctor_get(v_b_173_, 1);
v_isSharedCheck_213_ = !lean_is_exclusive(v_b_173_);
if (v_isSharedCheck_213_ == 0)
{
v___x_193_ = v_b_173_;
v_isShared_194_ = v_isSharedCheck_213_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_snd_191_);
lean_inc(v_fst_190_);
lean_dec(v_b_173_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_213_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
uint8_t v___x_195_; 
v___x_195_ = l_Lean_LocalDecl_isAuxDecl(v_a_189_);
lean_dec(v_a_189_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; lean_object* v___x_198_; 
lean_dec(v___x_187_);
lean_inc(v_a_186_);
v___x_196_ = lean_array_push(v_snd_191_, v_a_186_);
if (v_isShared_194_ == 0)
{
lean_ctor_set(v___x_193_, 1, v___x_196_);
v___x_198_ = v___x_193_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_fst_190_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v___x_196_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
v_a_180_ = v___x_198_;
goto v___jp_179_;
}
}
else
{
lean_object* v___x_200_; 
v___x_200_ = l_Lean_MVarId_clear(v_fst_190_, v___x_187_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
if (lean_obj_tag(v___x_200_) == 0)
{
lean_object* v_a_201_; lean_object* v___x_203_; 
v_a_201_ = lean_ctor_get(v___x_200_, 0);
lean_inc(v_a_201_);
lean_dec_ref(v___x_200_);
if (v_isShared_194_ == 0)
{
lean_ctor_set(v___x_193_, 0, v_a_201_);
v___x_203_ = v___x_193_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v_a_201_);
lean_ctor_set(v_reuseFailAlloc_204_, 1, v_snd_191_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
v_a_180_ = v___x_203_;
goto v___jp_179_;
}
}
else
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_212_; 
lean_del_object(v___x_193_);
lean_dec(v_snd_191_);
v_a_205_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_212_ == 0)
{
v___x_207_ = v___x_200_;
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_200_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_210_; 
if (v_isShared_208_ == 0)
{
v___x_210_ = v___x_207_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_a_205_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
}
}
else
{
lean_object* v_a_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_221_; 
lean_dec(v___x_187_);
lean_dec_ref(v_b_173_);
v_a_214_ = lean_ctor_get(v___x_188_, 0);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_188_);
if (v_isSharedCheck_221_ == 0)
{
v___x_216_ = v___x_188_;
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_a_214_);
lean_dec(v___x_188_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_219_; 
if (v_isShared_217_ == 0)
{
v___x_219_ = v___x_216_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_a_214_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
}
v___jp_179_:
{
size_t v___x_181_; size_t v___x_182_; 
v___x_181_ = ((size_t)1ULL);
v___x_182_ = lean_usize_add(v_i_172_, v___x_181_);
v_i_172_ = v___x_182_;
v_b_173_ = v_a_180_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1___boxed(lean_object* v_as_222_, lean_object* v_sz_223_, lean_object* v_i_224_, lean_object* v_b_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_){
_start:
{
size_t v_sz_boxed_231_; size_t v_i_boxed_232_; lean_object* v_res_233_; 
v_sz_boxed_231_ = lean_unbox_usize(v_sz_223_);
lean_dec(v_sz_223_);
v_i_boxed_232_ = lean_unbox_usize(v_i_224_);
lean_dec(v_i_224_);
v_res_233_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1(v_as_222_, v_sz_boxed_231_, v_i_boxed_232_, v_b_225_, v___y_226_, v___y_227_, v___y_228_, v___y_229_);
lean_dec(v___y_229_);
lean_dec_ref(v___y_228_);
lean_dec(v___y_227_);
lean_dec_ref(v___y_226_);
lean_dec_ref(v_as_222_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0(size_t v_sz_234_, size_t v_i_235_, lean_object* v_bs_236_){
_start:
{
uint8_t v___x_237_; 
v___x_237_ = lean_usize_dec_lt(v_i_235_, v_sz_234_);
if (v___x_237_ == 0)
{
return v_bs_236_;
}
else
{
lean_object* v_v_238_; lean_object* v___x_239_; lean_object* v_bs_x27_240_; lean_object* v___x_241_; size_t v___x_242_; size_t v___x_243_; lean_object* v___x_244_; 
v_v_238_ = lean_array_uget(v_bs_236_, v_i_235_);
v___x_239_ = lean_unsigned_to_nat(0u);
v_bs_x27_240_ = lean_array_uset(v_bs_236_, v_i_235_, v___x_239_);
v___x_241_ = l_Lean_mkFVar(v_v_238_);
v___x_242_ = ((size_t)1ULL);
v___x_243_ = lean_usize_add(v_i_235_, v___x_242_);
v___x_244_ = lean_array_uset(v_bs_x27_240_, v_i_235_, v___x_241_);
v_i_235_ = v___x_243_;
v_bs_236_ = v___x_244_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0___boxed(lean_object* v_sz_246_, lean_object* v_i_247_, lean_object* v_bs_248_){
_start:
{
size_t v_sz_boxed_249_; size_t v_i_boxed_250_; lean_object* v_res_251_; 
v_sz_boxed_249_ = lean_unbox_usize(v_sz_246_);
lean_dec(v_sz_246_);
v_i_boxed_250_ = lean_unbox_usize(v_i_247_);
lean_dec(v_i_247_);
v_res_251_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0(v_sz_boxed_249_, v_i_boxed_250_, v_bs_248_);
return v_res_251_;
}
}
static lean_object* _init_l_Lean_MVarId_revert___lam__0___closed__0(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_252_ = lean_box(0);
v___x_253_ = lean_unsigned_to_nat(16u);
v___x_254_ = lean_mk_array(v___x_253_, v___x_252_);
return v___x_254_;
}
}
static lean_object* _init_l_Lean_MVarId_revert___lam__0___closed__1(void){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = lean_mk_string_unchecked("failed to create binder due to failure when reverting variable dependencies", 75, 75);
return v___x_255_;
}
}
static lean_object* _init_l_Lean_MVarId_revert___lam__0___closed__2(void){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_256_ = lean_obj_once(&l_Lean_MVarId_revert___lam__0___closed__1, &l_Lean_MVarId_revert___lam__0___closed__1_once, _init_l_Lean_MVarId_revert___lam__0___closed__1);
v___x_257_ = l_Lean_stringToMessageData(v___x_256_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___lam__0(lean_object* v_mvarId_258_, lean_object* v___x_259_, lean_object* v_fvarIds_260_, uint8_t v_preserveOrder_261_, uint8_t v___x_262_, lean_object* v___x_263_, uint8_t v_clearAuxDeclsInsteadOfRevert_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
size_t v___y_271_; lean_object* v___y_272_; lean_object* v___y_273_; uint8_t v___y_274_; lean_object* v___y_275_; lean_object* v___y_276_; lean_object* v_a_277_; lean_object* v___y_327_; lean_object* v___y_328_; lean_object* v___y_329_; lean_object* v___y_330_; lean_object* v___x_495_; 
lean_inc(v_mvarId_258_);
v___x_495_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_258_, v___x_259_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
if (lean_obj_tag(v___x_495_) == 0)
{
lean_dec_ref(v___x_495_);
if (v_clearAuxDeclsInsteadOfRevert_264_ == 0)
{
lean_object* v___x_496_; size_t v_sz_497_; size_t v___x_498_; lean_object* v___x_499_; 
v___x_496_ = lean_box(0);
v_sz_497_ = lean_array_size(v_fvarIds_260_);
v___x_498_ = ((size_t)0ULL);
v___x_499_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4(v_fvarIds_260_, v_sz_497_, v___x_498_, v___x_496_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_dec_ref(v___x_499_);
v___y_327_ = v___y_265_;
v___y_328_ = v___y_266_;
v___y_329_ = v___y_267_;
v___y_330_ = v___y_268_;
goto v___jp_326_;
}
else
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_507_; 
lean_dec(v___x_263_);
lean_dec_ref(v_fvarIds_260_);
lean_dec(v_mvarId_258_);
v_a_500_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_507_ == 0)
{
v___x_502_ = v___x_499_;
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_499_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_505_; 
if (v_isShared_503_ == 0)
{
v___x_505_ = v___x_502_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_a_500_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
}
}
else
{
v___y_327_ = v___y_265_;
v___y_328_ = v___y_266_;
v___y_329_ = v___y_267_;
v___y_330_ = v___y_268_;
goto v___jp_326_;
}
}
else
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_515_; 
lean_dec(v___x_263_);
lean_dec_ref(v_fvarIds_260_);
lean_dec(v_mvarId_258_);
v_a_508_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_515_ == 0)
{
v___x_510_ = v___x_495_;
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___x_495_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_513_; 
if (v_isShared_511_ == 0)
{
v___x_513_ = v___x_510_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v_a_508_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
v___jp_270_:
{
lean_object* v___x_278_; 
v___x_278_ = l_Lean_MVarId_setKind___redArg(v___y_272_, v___y_274_, v___y_276_, v___y_273_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v_fst_279_; lean_object* v_snd_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_317_; 
lean_dec_ref(v___x_278_);
v_fst_279_ = lean_ctor_get(v_a_277_, 0);
v_snd_280_ = lean_ctor_get(v_a_277_, 1);
v_isSharedCheck_317_ = !lean_is_exclusive(v_a_277_);
if (v_isSharedCheck_317_ == 0)
{
v___x_282_ = v_a_277_;
v_isShared_283_ = v_isSharedCheck_317_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_snd_280_);
lean_inc(v_fst_279_);
lean_dec(v_a_277_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_317_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_284_ = l_Lean_Expr_getAppFn(v_fst_279_);
lean_dec(v_fst_279_);
v___x_285_ = l_Lean_Expr_mvarId_x21(v___x_284_);
lean_dec_ref(v___x_284_);
lean_inc(v___x_285_);
v___x_286_ = l_Lean_MVarId_setKind___redArg(v___x_285_, v___y_274_, v___y_276_, v___y_273_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v___x_287_; 
lean_dec_ref(v___x_286_);
lean_inc(v___x_285_);
v___x_287_ = l_Lean_MVarId_setTag___redArg(v___x_285_, v___y_275_, v___y_276_, v___y_273_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_299_; 
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_299_ == 0)
{
lean_object* v_unused_300_; 
v_unused_300_ = lean_ctor_get(v___x_287_, 0);
lean_dec(v_unused_300_);
v___x_289_ = v___x_287_;
v_isShared_290_ = v_isSharedCheck_299_;
goto v_resetjp_288_;
}
else
{
lean_dec(v___x_287_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_299_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
size_t v_sz_291_; lean_object* v___x_292_; lean_object* v___x_294_; 
v_sz_291_ = lean_array_size(v_snd_280_);
v___x_292_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2(v_sz_291_, v___y_271_, v_snd_280_);
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 1, v___x_285_);
lean_ctor_set(v___x_282_, 0, v___x_292_);
v___x_294_ = v___x_282_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_292_);
lean_ctor_set(v_reuseFailAlloc_298_, 1, v___x_285_);
v___x_294_ = v_reuseFailAlloc_298_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
lean_object* v___x_296_; 
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 0, v___x_294_);
v___x_296_ = v___x_289_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v___x_294_);
v___x_296_ = v_reuseFailAlloc_297_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
return v___x_296_;
}
}
}
}
else
{
lean_object* v_a_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_308_; 
lean_dec(v___x_285_);
lean_del_object(v___x_282_);
lean_dec(v_snd_280_);
v_a_301_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_308_ == 0)
{
v___x_303_ = v___x_287_;
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_a_301_);
lean_dec(v___x_287_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_306_; 
if (v_isShared_304_ == 0)
{
v___x_306_ = v___x_303_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_a_301_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
}
}
else
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
lean_dec(v___x_285_);
lean_del_object(v___x_282_);
lean_dec(v_snd_280_);
lean_dec(v___y_275_);
v_a_309_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_286_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_286_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
}
else
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_325_; 
lean_dec_ref(v_a_277_);
lean_dec(v___y_275_);
v_a_318_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_325_ == 0)
{
v___x_320_ = v___x_278_;
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v___x_278_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_323_; 
if (v_isShared_321_ == 0)
{
v___x_323_ = v___x_320_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_a_318_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
}
v___jp_326_:
{
size_t v_sz_331_; size_t v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v_sz_331_ = lean_array_size(v_fvarIds_260_);
v___x_332_ = ((size_t)0ULL);
v___x_333_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0(v_sz_331_, v___x_332_, v_fvarIds_260_);
v___x_334_ = l_Lean_Meta_collectForwardDeps(v___x_333_, v_preserveOrder_261_, v___x_262_, v___y_327_, v___y_328_, v___y_329_, v___y_330_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_336_; lean_object* v___x_337_; size_t v_sz_338_; lean_object* v___x_339_; 
v_a_335_ = lean_ctor_get(v___x_334_, 0);
lean_inc(v_a_335_);
lean_dec_ref(v___x_334_);
v___x_336_ = lean_mk_empty_array_with_capacity(v___x_263_);
v___x_337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_337_, 0, v_mvarId_258_);
lean_ctor_set(v___x_337_, 1, v___x_336_);
v_sz_338_ = lean_array_size(v_a_335_);
v___x_339_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1(v_a_335_, v_sz_338_, v___x_332_, v___x_337_, v___y_327_, v___y_328_, v___y_329_, v___y_330_);
lean_dec(v_a_335_);
if (lean_obj_tag(v___x_339_) == 0)
{
lean_object* v_a_340_; lean_object* v_fst_341_; lean_object* v_snd_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_478_; 
v_a_340_ = lean_ctor_get(v___x_339_, 0);
lean_inc(v_a_340_);
lean_dec_ref(v___x_339_);
v_fst_341_ = lean_ctor_get(v_a_340_, 0);
v_snd_342_ = lean_ctor_get(v_a_340_, 1);
v_isSharedCheck_478_ = !lean_is_exclusive(v_a_340_);
if (v_isSharedCheck_478_ == 0)
{
v___x_344_ = v_a_340_;
v_isShared_345_ = v_isSharedCheck_478_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_snd_342_);
lean_inc(v_fst_341_);
lean_dec(v_a_340_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_478_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___x_346_; 
lean_inc(v_fst_341_);
v___x_346_ = l_Lean_MVarId_getTag(v_fst_341_, v___y_327_, v___y_328_, v___y_329_, v___y_330_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v_a_347_; uint8_t v___x_348_; lean_object* v___x_349_; 
v_a_347_ = lean_ctor_get(v___x_346_, 0);
lean_inc(v_a_347_);
lean_dec_ref(v___x_346_);
v___x_348_ = 0;
lean_inc(v_fst_341_);
v___x_349_ = l_Lean_MVarId_setKind___redArg(v_fst_341_, v___x_348_, v___y_328_, v___y_330_);
if (lean_obj_tag(v___x_349_) == 0)
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v_lctx_354_; lean_object* v_mctx_355_; lean_object* v_ngen_356_; lean_object* v_quotContext_357_; lean_object* v_nextMacroScope_358_; uint8_t v___x_359_; lean_object* v___x_361_; 
lean_dec_ref(v___x_349_);
v___x_350_ = lean_st_ref_get(v___y_330_);
lean_dec(v___x_350_);
v___x_351_ = lean_st_ref_get(v___y_328_);
v___x_352_ = lean_st_ref_get(v___y_330_);
v___x_353_ = lean_st_ref_get(v___y_330_);
v_lctx_354_ = lean_ctor_get(v___y_327_, 2);
v_mctx_355_ = lean_ctor_get(v___x_351_, 0);
lean_inc_ref(v_mctx_355_);
lean_dec(v___x_351_);
v_ngen_356_ = lean_ctor_get(v___x_352_, 2);
lean_inc_ref(v_ngen_356_);
lean_dec(v___x_352_);
v_quotContext_357_ = lean_ctor_get(v___y_329_, 10);
v_nextMacroScope_358_ = lean_ctor_get(v___x_353_, 1);
lean_inc(v_nextMacroScope_358_);
lean_dec(v___x_353_);
v___x_359_ = 2;
lean_inc_ref(v_lctx_354_);
lean_inc(v_quotContext_357_);
if (v_isShared_345_ == 0)
{
lean_ctor_set(v___x_344_, 1, v_lctx_354_);
lean_ctor_set(v___x_344_, 0, v_quotContext_357_);
v___x_361_ = v___x_344_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_quotContext_357_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v_lctx_354_);
v___x_361_ = v_reuseFailAlloc_461_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_362_ = lean_obj_once(&l_Lean_MVarId_revert___lam__0___closed__0, &l_Lean_MVarId_revert___lam__0___closed__0_once, _init_l_Lean_MVarId_revert___lam__0___closed__0);
v___x_363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_363_, 0, v___x_263_);
lean_ctor_set(v___x_363_, 1, v___x_362_);
v___x_364_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_364_, 0, v_mctx_355_);
lean_ctor_set(v___x_364_, 1, v_nextMacroScope_358_);
lean_ctor_set(v___x_364_, 2, v_ngen_356_);
lean_ctor_set(v___x_364_, 3, v___x_363_);
lean_inc(v_fst_341_);
v___x_365_ = l_Lean_MetavarContext_revert(v_snd_342_, v_fst_341_, v_preserveOrder_261_, v___x_361_, v___x_364_);
lean_dec_ref(v___x_361_);
lean_dec(v_snd_342_);
if (lean_obj_tag(v___x_365_) == 0)
{
lean_object* v_a_366_; lean_object* v_a_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v_mctx_370_; lean_object* v_nextMacroScope_371_; lean_object* v_ngen_372_; lean_object* v_cache_373_; lean_object* v_zetaDeltaFVarIds_374_; lean_object* v_postponed_375_; lean_object* v_diag_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_402_; 
v_a_366_ = lean_ctor_get(v___x_365_, 0);
lean_inc(v_a_366_);
v_a_367_ = lean_ctor_get(v___x_365_, 1);
lean_inc(v_a_367_);
lean_dec_ref(v___x_365_);
v___x_368_ = lean_st_ref_get(v___y_330_);
lean_dec(v___x_368_);
v___x_369_ = lean_st_ref_take(v___y_328_);
v_mctx_370_ = lean_ctor_get(v_a_367_, 0);
lean_inc_ref(v_mctx_370_);
v_nextMacroScope_371_ = lean_ctor_get(v_a_367_, 1);
lean_inc(v_nextMacroScope_371_);
v_ngen_372_ = lean_ctor_get(v_a_367_, 2);
lean_inc_ref(v_ngen_372_);
lean_dec(v_a_367_);
v_cache_373_ = lean_ctor_get(v___x_369_, 1);
v_zetaDeltaFVarIds_374_ = lean_ctor_get(v___x_369_, 2);
v_postponed_375_ = lean_ctor_get(v___x_369_, 3);
v_diag_376_ = lean_ctor_get(v___x_369_, 4);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_402_ == 0)
{
lean_object* v_unused_403_; 
v_unused_403_ = lean_ctor_get(v___x_369_, 0);
lean_dec(v_unused_403_);
v___x_378_ = v___x_369_;
v_isShared_379_ = v_isSharedCheck_402_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_diag_376_);
lean_inc(v_postponed_375_);
lean_inc(v_zetaDeltaFVarIds_374_);
lean_inc(v_cache_373_);
lean_dec(v___x_369_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_402_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
lean_ctor_set(v___x_378_, 0, v_mctx_370_);
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_mctx_370_);
lean_ctor_set(v_reuseFailAlloc_401_, 1, v_cache_373_);
lean_ctor_set(v_reuseFailAlloc_401_, 2, v_zetaDeltaFVarIds_374_);
lean_ctor_set(v_reuseFailAlloc_401_, 3, v_postponed_375_);
lean_ctor_set(v_reuseFailAlloc_401_, 4, v_diag_376_);
v___x_381_ = v_reuseFailAlloc_401_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v_env_384_; lean_object* v_auxDeclNGen_385_; lean_object* v_traceState_386_; lean_object* v_cache_387_; lean_object* v_messages_388_; lean_object* v_infoState_389_; lean_object* v_snapshotTasks_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_398_; 
v___x_382_ = lean_st_ref_set(v___y_328_, v___x_381_);
v___x_383_ = lean_st_ref_take(v___y_330_);
v_env_384_ = lean_ctor_get(v___x_383_, 0);
v_auxDeclNGen_385_ = lean_ctor_get(v___x_383_, 3);
v_traceState_386_ = lean_ctor_get(v___x_383_, 4);
v_cache_387_ = lean_ctor_get(v___x_383_, 5);
v_messages_388_ = lean_ctor_get(v___x_383_, 6);
v_infoState_389_ = lean_ctor_get(v___x_383_, 7);
v_snapshotTasks_390_ = lean_ctor_get(v___x_383_, 8);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_383_);
if (v_isSharedCheck_398_ == 0)
{
lean_object* v_unused_399_; lean_object* v_unused_400_; 
v_unused_399_ = lean_ctor_get(v___x_383_, 2);
lean_dec(v_unused_399_);
v_unused_400_ = lean_ctor_get(v___x_383_, 1);
lean_dec(v_unused_400_);
v___x_392_ = v___x_383_;
v_isShared_393_ = v_isSharedCheck_398_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_snapshotTasks_390_);
lean_inc(v_infoState_389_);
lean_inc(v_messages_388_);
lean_inc(v_cache_387_);
lean_inc(v_traceState_386_);
lean_inc(v_auxDeclNGen_385_);
lean_inc(v_env_384_);
lean_dec(v___x_383_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_398_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_395_; 
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 2, v_ngen_372_);
lean_ctor_set(v___x_392_, 1, v_nextMacroScope_371_);
v___x_395_ = v___x_392_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_env_384_);
lean_ctor_set(v_reuseFailAlloc_397_, 1, v_nextMacroScope_371_);
lean_ctor_set(v_reuseFailAlloc_397_, 2, v_ngen_372_);
lean_ctor_set(v_reuseFailAlloc_397_, 3, v_auxDeclNGen_385_);
lean_ctor_set(v_reuseFailAlloc_397_, 4, v_traceState_386_);
lean_ctor_set(v_reuseFailAlloc_397_, 5, v_cache_387_);
lean_ctor_set(v_reuseFailAlloc_397_, 6, v_messages_388_);
lean_ctor_set(v_reuseFailAlloc_397_, 7, v_infoState_389_);
lean_ctor_set(v_reuseFailAlloc_397_, 8, v_snapshotTasks_390_);
v___x_395_ = v_reuseFailAlloc_397_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
lean_object* v___x_396_; 
v___x_396_ = lean_st_ref_set(v___y_330_, v___x_395_);
v___y_271_ = v___x_332_;
v___y_272_ = v_fst_341_;
v___y_273_ = v___y_330_;
v___y_274_ = v___x_359_;
v___y_275_ = v_a_347_;
v___y_276_ = v___y_328_;
v_a_277_ = v_a_366_;
goto v___jp_270_;
}
}
}
}
}
else
{
lean_object* v_a_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v_mctx_407_; lean_object* v_nextMacroScope_408_; lean_object* v_ngen_409_; lean_object* v_cache_410_; lean_object* v_zetaDeltaFVarIds_411_; lean_object* v_postponed_412_; lean_object* v_diag_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_459_; 
lean_dec(v_a_347_);
v_a_404_ = lean_ctor_get(v___x_365_, 1);
lean_inc(v_a_404_);
lean_dec_ref(v___x_365_);
v___x_405_ = lean_st_ref_get(v___y_330_);
lean_dec(v___x_405_);
v___x_406_ = lean_st_ref_take(v___y_328_);
v_mctx_407_ = lean_ctor_get(v_a_404_, 0);
lean_inc_ref(v_mctx_407_);
v_nextMacroScope_408_ = lean_ctor_get(v_a_404_, 1);
lean_inc(v_nextMacroScope_408_);
v_ngen_409_ = lean_ctor_get(v_a_404_, 2);
lean_inc_ref(v_ngen_409_);
lean_dec(v_a_404_);
v_cache_410_ = lean_ctor_get(v___x_406_, 1);
v_zetaDeltaFVarIds_411_ = lean_ctor_get(v___x_406_, 2);
v_postponed_412_ = lean_ctor_get(v___x_406_, 3);
v_diag_413_ = lean_ctor_get(v___x_406_, 4);
v_isSharedCheck_459_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_459_ == 0)
{
lean_object* v_unused_460_; 
v_unused_460_ = lean_ctor_get(v___x_406_, 0);
lean_dec(v_unused_460_);
v___x_415_ = v___x_406_;
v_isShared_416_ = v_isSharedCheck_459_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_diag_413_);
lean_inc(v_postponed_412_);
lean_inc(v_zetaDeltaFVarIds_411_);
lean_inc(v_cache_410_);
lean_dec(v___x_406_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_459_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_418_; 
if (v_isShared_416_ == 0)
{
lean_ctor_set(v___x_415_, 0, v_mctx_407_);
v___x_418_ = v___x_415_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v_mctx_407_);
lean_ctor_set(v_reuseFailAlloc_458_, 1, v_cache_410_);
lean_ctor_set(v_reuseFailAlloc_458_, 2, v_zetaDeltaFVarIds_411_);
lean_ctor_set(v_reuseFailAlloc_458_, 3, v_postponed_412_);
lean_ctor_set(v_reuseFailAlloc_458_, 4, v_diag_413_);
v___x_418_ = v_reuseFailAlloc_458_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v_env_421_; lean_object* v_auxDeclNGen_422_; lean_object* v_traceState_423_; lean_object* v_cache_424_; lean_object* v_messages_425_; lean_object* v_infoState_426_; lean_object* v_snapshotTasks_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_455_; 
v___x_419_ = lean_st_ref_set(v___y_328_, v___x_418_);
v___x_420_ = lean_st_ref_take(v___y_330_);
v_env_421_ = lean_ctor_get(v___x_420_, 0);
v_auxDeclNGen_422_ = lean_ctor_get(v___x_420_, 3);
v_traceState_423_ = lean_ctor_get(v___x_420_, 4);
v_cache_424_ = lean_ctor_get(v___x_420_, 5);
v_messages_425_ = lean_ctor_get(v___x_420_, 6);
v_infoState_426_ = lean_ctor_get(v___x_420_, 7);
v_snapshotTasks_427_ = lean_ctor_get(v___x_420_, 8);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_420_);
if (v_isSharedCheck_455_ == 0)
{
lean_object* v_unused_456_; lean_object* v_unused_457_; 
v_unused_456_ = lean_ctor_get(v___x_420_, 2);
lean_dec(v_unused_456_);
v_unused_457_ = lean_ctor_get(v___x_420_, 1);
lean_dec(v_unused_457_);
v___x_429_ = v___x_420_;
v_isShared_430_ = v_isSharedCheck_455_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_snapshotTasks_427_);
lean_inc(v_infoState_426_);
lean_inc(v_messages_425_);
lean_inc(v_cache_424_);
lean_inc(v_traceState_423_);
lean_inc(v_auxDeclNGen_422_);
lean_inc(v_env_421_);
lean_dec(v___x_420_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_455_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_432_; 
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 2, v_ngen_409_);
lean_ctor_set(v___x_429_, 1, v_nextMacroScope_408_);
v___x_432_ = v___x_429_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_env_421_);
lean_ctor_set(v_reuseFailAlloc_454_, 1, v_nextMacroScope_408_);
lean_ctor_set(v_reuseFailAlloc_454_, 2, v_ngen_409_);
lean_ctor_set(v_reuseFailAlloc_454_, 3, v_auxDeclNGen_422_);
lean_ctor_set(v_reuseFailAlloc_454_, 4, v_traceState_423_);
lean_ctor_set(v_reuseFailAlloc_454_, 5, v_cache_424_);
lean_ctor_set(v_reuseFailAlloc_454_, 6, v_messages_425_);
lean_ctor_set(v_reuseFailAlloc_454_, 7, v_infoState_426_);
lean_ctor_set(v_reuseFailAlloc_454_, 8, v_snapshotTasks_427_);
v___x_432_ = v_reuseFailAlloc_454_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v_a_436_; lean_object* v___x_437_; 
v___x_433_ = lean_st_ref_set(v___y_330_, v___x_432_);
v___x_434_ = lean_obj_once(&l_Lean_MVarId_revert___lam__0___closed__2, &l_Lean_MVarId_revert___lam__0___closed__2_once, _init_l_Lean_MVarId_revert___lam__0___closed__2);
v___x_435_ = l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(v___x_434_, v___y_327_, v___y_328_, v___y_329_, v___y_330_);
v_a_436_ = lean_ctor_get(v___x_435_, 0);
lean_inc(v_a_436_);
lean_dec_ref(v___x_435_);
v___x_437_ = l_Lean_MVarId_setKind___redArg(v_fst_341_, v___x_359_, v___y_328_, v___y_330_);
if (lean_obj_tag(v___x_437_) == 0)
{
lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_444_; 
v_isSharedCheck_444_ = !lean_is_exclusive(v___x_437_);
if (v_isSharedCheck_444_ == 0)
{
lean_object* v_unused_445_; 
v_unused_445_ = lean_ctor_get(v___x_437_, 0);
lean_dec(v_unused_445_);
v___x_439_ = v___x_437_;
v_isShared_440_ = v_isSharedCheck_444_;
goto v_resetjp_438_;
}
else
{
lean_dec(v___x_437_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_444_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_442_; 
if (v_isShared_440_ == 0)
{
lean_ctor_set_tag(v___x_439_, 1);
lean_ctor_set(v___x_439_, 0, v_a_436_);
v___x_442_ = v___x_439_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v_a_436_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
return v___x_442_;
}
}
}
else
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_453_; 
lean_dec(v_a_436_);
v_a_446_ = lean_ctor_get(v___x_437_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_437_);
if (v_isSharedCheck_453_ == 0)
{
v___x_448_ = v___x_437_;
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___x_437_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_451_; 
if (v_isShared_449_ == 0)
{
v___x_451_ = v___x_448_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_a_446_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
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
else
{
lean_object* v_a_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_469_; 
lean_dec(v_a_347_);
lean_del_object(v___x_344_);
lean_dec(v_snd_342_);
lean_dec(v_fst_341_);
lean_dec(v___x_263_);
v_a_462_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_469_ == 0)
{
v___x_464_ = v___x_349_;
v_isShared_465_ = v_isSharedCheck_469_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_a_462_);
lean_dec(v___x_349_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_469_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v___x_467_; 
if (v_isShared_465_ == 0)
{
v___x_467_ = v___x_464_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_a_462_);
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
else
{
lean_object* v_a_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_477_; 
lean_del_object(v___x_344_);
lean_dec(v_snd_342_);
lean_dec(v_fst_341_);
lean_dec(v___x_263_);
v_a_470_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_477_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_477_ == 0)
{
v___x_472_ = v___x_346_;
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_a_470_);
lean_dec(v___x_346_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_475_; 
if (v_isShared_473_ == 0)
{
v___x_475_ = v___x_472_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v_a_470_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
}
}
else
{
lean_object* v_a_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_486_; 
lean_dec(v___x_263_);
v_a_479_ = lean_ctor_get(v___x_339_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_486_ == 0)
{
v___x_481_ = v___x_339_;
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_a_479_);
lean_dec(v___x_339_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_484_; 
if (v_isShared_482_ == 0)
{
v___x_484_ = v___x_481_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v_a_479_);
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
else
{
lean_object* v_a_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_494_; 
lean_dec(v___x_263_);
lean_dec(v_mvarId_258_);
v_a_487_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_494_ == 0)
{
v___x_489_ = v___x_334_;
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_a_487_);
lean_dec(v___x_334_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_492_; 
if (v_isShared_490_ == 0)
{
v___x_492_ = v___x_489_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_a_487_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___lam__0___boxed(lean_object* v_mvarId_516_, lean_object* v___x_517_, lean_object* v_fvarIds_518_, lean_object* v_preserveOrder_519_, lean_object* v___x_520_, lean_object* v___x_521_, lean_object* v_clearAuxDeclsInsteadOfRevert_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_){
_start:
{
uint8_t v_preserveOrder_boxed_528_; uint8_t v___x_10326__boxed_529_; uint8_t v_clearAuxDeclsInsteadOfRevert_boxed_530_; lean_object* v_res_531_; 
v_preserveOrder_boxed_528_ = lean_unbox(v_preserveOrder_519_);
v___x_10326__boxed_529_ = lean_unbox(v___x_520_);
v_clearAuxDeclsInsteadOfRevert_boxed_530_ = lean_unbox(v_clearAuxDeclsInsteadOfRevert_522_);
v_res_531_ = l_Lean_MVarId_revert___lam__0(v_mvarId_516_, v___x_517_, v_fvarIds_518_, v_preserveOrder_boxed_528_, v___x_10326__boxed_529_, v___x_521_, v_clearAuxDeclsInsteadOfRevert_boxed_530_, v___y_523_, v___y_524_, v___y_525_, v___y_526_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
return v_res_531_;
}
}
static lean_object* _init_l_Lean_MVarId_revert___closed__0(void){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = lean_mk_string_unchecked("revert", 6, 6);
return v___x_532_;
}
}
static lean_object* _init_l_Lean_MVarId_revert___closed__1(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = lean_obj_once(&l_Lean_MVarId_revert___closed__0, &l_Lean_MVarId_revert___closed__0_once, _init_l_Lean_MVarId_revert___closed__0);
v___x_534_ = l_Lean_Name_mkStr1(v___x_533_);
return v___x_534_;
}
}
static lean_object* _init_l_Lean_MVarId_revert___closed__2(void){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = lean_unsigned_to_nat(0u);
v___x_536_ = lean_mk_empty_array_with_capacity(v___x_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revert(lean_object* v_mvarId_537_, lean_object* v_fvarIds_538_, uint8_t v_preserveOrder_539_, uint8_t v_clearAuxDeclsInsteadOfRevert_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; uint8_t v___x_548_; 
v___x_546_ = lean_array_get_size(v_fvarIds_538_);
v___x_547_ = lean_unsigned_to_nat(0u);
v___x_548_ = lean_nat_dec_eq(v___x_546_, v___x_547_);
if (v___x_548_ == 0)
{
uint8_t v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___f_554_; lean_object* v___x_555_; 
v___x_549_ = 1;
v___x_550_ = lean_obj_once(&l_Lean_MVarId_revert___closed__1, &l_Lean_MVarId_revert___closed__1_once, _init_l_Lean_MVarId_revert___closed__1);
v___x_551_ = lean_box(v_preserveOrder_539_);
v___x_552_ = lean_box(v___x_549_);
v___x_553_ = lean_box(v_clearAuxDeclsInsteadOfRevert_540_);
lean_inc(v_mvarId_537_);
v___f_554_ = lean_alloc_closure((void*)(l_Lean_MVarId_revert___lam__0___boxed), 12, 7);
lean_closure_set(v___f_554_, 0, v_mvarId_537_);
lean_closure_set(v___f_554_, 1, v___x_550_);
lean_closure_set(v___f_554_, 2, v_fvarIds_538_);
lean_closure_set(v___f_554_, 3, v___x_551_);
lean_closure_set(v___f_554_, 4, v___x_552_);
lean_closure_set(v___f_554_, 5, v___x_547_);
lean_closure_set(v___f_554_, 6, v___x_553_);
v___x_555_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(v_mvarId_537_, v___f_554_, v_a_541_, v_a_542_, v_a_543_, v_a_544_);
return v___x_555_;
}
else
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
lean_dec_ref(v_fvarIds_538_);
v___x_556_ = lean_obj_once(&l_Lean_MVarId_revert___closed__2, &l_Lean_MVarId_revert___closed__2_once, _init_l_Lean_MVarId_revert___closed__2);
v___x_557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
lean_ctor_set(v___x_557_, 1, v_mvarId_537_);
v___x_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
return v___x_558_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___boxed(lean_object* v_mvarId_559_, lean_object* v_fvarIds_560_, lean_object* v_preserveOrder_561_, lean_object* v_clearAuxDeclsInsteadOfRevert_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_){
_start:
{
uint8_t v_preserveOrder_boxed_568_; uint8_t v_clearAuxDeclsInsteadOfRevert_boxed_569_; lean_object* v_res_570_; 
v_preserveOrder_boxed_568_ = lean_unbox(v_preserveOrder_561_);
v_clearAuxDeclsInsteadOfRevert_boxed_569_ = lean_unbox(v_clearAuxDeclsInsteadOfRevert_562_);
v_res_570_ = l_Lean_MVarId_revert(v_mvarId_559_, v_fvarIds_560_, v_preserveOrder_boxed_568_, v_clearAuxDeclsInsteadOfRevert_boxed_569_, v_a_563_, v_a_564_, v_a_565_, v_a_566_);
lean_dec(v_a_566_);
lean_dec_ref(v_a_565_);
lean_dec(v_a_564_);
lean_dec_ref(v_a_563_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3(lean_object* v_00_u03b1_571_, lean_object* v_msg_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_){
_start:
{
lean_object* v___x_578_; 
v___x_578_ = l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(v_msg_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___boxed(lean_object* v_00_u03b1_579_, lean_object* v_msg_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Lean_throwError___at___00Lean_MVarId_revert_spec__3(v_00_u03b1_579_, v_msg_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(lean_object* v_as_587_, size_t v_i_588_, size_t v_stop_589_, lean_object* v_b_590_){
_start:
{
lean_object* v___y_592_; uint8_t v___x_596_; 
v___x_596_ = lean_usize_dec_eq(v_i_588_, v_stop_589_);
if (v___x_596_ == 0)
{
lean_object* v___x_597_; 
v___x_597_ = lean_array_uget_borrowed(v_as_587_, v_i_588_);
if (lean_obj_tag(v___x_597_) == 0)
{
v___y_592_ = v_b_590_;
goto v___jp_591_;
}
else
{
lean_object* v_val_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v_val_598_ = lean_ctor_get(v___x_597_, 0);
v___x_599_ = l_Lean_LocalDecl_fvarId(v_val_598_);
v___x_600_ = lean_array_push(v_b_590_, v___x_599_);
v___y_592_ = v___x_600_;
goto v___jp_591_;
}
}
else
{
return v_b_590_;
}
v___jp_591_:
{
size_t v___x_593_; size_t v___x_594_; 
v___x_593_ = ((size_t)1ULL);
v___x_594_ = lean_usize_add(v_i_588_, v___x_593_);
v_i_588_ = v___x_594_;
v_b_590_ = v___y_592_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2___boxed(lean_object* v_as_601_, lean_object* v_i_602_, lean_object* v_stop_603_, lean_object* v_b_604_){
_start:
{
size_t v_i_boxed_605_; size_t v_stop_boxed_606_; lean_object* v_res_607_; 
v_i_boxed_605_ = lean_unbox_usize(v_i_602_);
lean_dec(v_i_602_);
v_stop_boxed_606_ = lean_unbox_usize(v_stop_603_);
lean_dec(v_stop_603_);
v_res_607_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_as_601_, v_i_boxed_605_, v_stop_boxed_606_, v_b_604_);
lean_dec_ref(v_as_601_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3(lean_object* v_x_608_, lean_object* v_x_609_){
_start:
{
if (lean_obj_tag(v_x_608_) == 0)
{
lean_object* v_cs_610_; lean_object* v___x_611_; lean_object* v___x_612_; uint8_t v___x_613_; 
v_cs_610_ = lean_ctor_get(v_x_608_, 0);
v___x_611_ = lean_unsigned_to_nat(0u);
v___x_612_ = lean_array_get_size(v_cs_610_);
v___x_613_ = lean_nat_dec_lt(v___x_611_, v___x_612_);
if (v___x_613_ == 0)
{
return v_x_609_;
}
else
{
uint8_t v___x_614_; 
v___x_614_ = lean_nat_dec_le(v___x_612_, v___x_612_);
if (v___x_614_ == 0)
{
if (v___x_613_ == 0)
{
return v_x_609_;
}
else
{
size_t v___x_615_; size_t v___x_616_; lean_object* v___x_617_; 
v___x_615_ = ((size_t)0ULL);
v___x_616_ = lean_usize_of_nat(v___x_612_);
v___x_617_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2(v_cs_610_, v___x_615_, v___x_616_, v_x_609_);
return v___x_617_;
}
}
else
{
size_t v___x_618_; size_t v___x_619_; lean_object* v___x_620_; 
v___x_618_ = ((size_t)0ULL);
v___x_619_ = lean_usize_of_nat(v___x_612_);
v___x_620_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2(v_cs_610_, v___x_618_, v___x_619_, v_x_609_);
return v___x_620_;
}
}
}
else
{
lean_object* v_vs_621_; lean_object* v___x_622_; lean_object* v___x_623_; uint8_t v___x_624_; 
v_vs_621_ = lean_ctor_get(v_x_608_, 0);
v___x_622_ = lean_unsigned_to_nat(0u);
v___x_623_ = lean_array_get_size(v_vs_621_);
v___x_624_ = lean_nat_dec_lt(v___x_622_, v___x_623_);
if (v___x_624_ == 0)
{
return v_x_609_;
}
else
{
uint8_t v___x_625_; 
v___x_625_ = lean_nat_dec_le(v___x_623_, v___x_623_);
if (v___x_625_ == 0)
{
if (v___x_624_ == 0)
{
return v_x_609_;
}
else
{
size_t v___x_626_; size_t v___x_627_; lean_object* v___x_628_; 
v___x_626_ = ((size_t)0ULL);
v___x_627_ = lean_usize_of_nat(v___x_623_);
v___x_628_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_vs_621_, v___x_626_, v___x_627_, v_x_609_);
return v___x_628_;
}
}
else
{
size_t v___x_629_; size_t v___x_630_; lean_object* v___x_631_; 
v___x_629_ = ((size_t)0ULL);
v___x_630_ = lean_usize_of_nat(v___x_623_);
v___x_631_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_vs_621_, v___x_629_, v___x_630_, v_x_609_);
return v___x_631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2(lean_object* v_as_632_, size_t v_i_633_, size_t v_stop_634_, lean_object* v_b_635_){
_start:
{
uint8_t v___x_636_; 
v___x_636_ = lean_usize_dec_eq(v_i_633_, v_stop_634_);
if (v___x_636_ == 0)
{
lean_object* v___x_637_; lean_object* v___x_638_; size_t v___x_639_; size_t v___x_640_; 
v___x_637_ = lean_array_uget_borrowed(v_as_632_, v_i_633_);
v___x_638_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3(v___x_637_, v_b_635_);
v___x_639_ = ((size_t)1ULL);
v___x_640_ = lean_usize_add(v_i_633_, v___x_639_);
v_i_633_ = v___x_640_;
v_b_635_ = v___x_638_;
goto _start;
}
else
{
return v_b_635_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_as_642_, lean_object* v_i_643_, lean_object* v_stop_644_, lean_object* v_b_645_){
_start:
{
size_t v_i_boxed_646_; size_t v_stop_boxed_647_; lean_object* v_res_648_; 
v_i_boxed_646_ = lean_unbox_usize(v_i_643_);
lean_dec(v_i_643_);
v_stop_boxed_647_ = lean_unbox_usize(v_stop_644_);
lean_dec(v_stop_644_);
v_res_648_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2(v_as_642_, v_i_boxed_646_, v_stop_boxed_647_, v_b_645_);
lean_dec_ref(v_as_642_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3___boxed(lean_object* v_x_649_, lean_object* v_x_650_){
_start:
{
lean_object* v_res_651_; 
v_res_651_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3(v_x_649_, v_x_650_);
lean_dec_ref(v_x_649_);
return v_res_651_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_652_; 
v___x_652_ = l_Lean_instInhabitedPersistentArrayNode_default(lean_box(0));
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1(lean_object* v_x_653_, size_t v_x_654_, size_t v_x_655_, lean_object* v_x_656_){
_start:
{
if (lean_obj_tag(v_x_653_) == 0)
{
lean_object* v_cs_657_; lean_object* v___x_658_; size_t v___x_659_; lean_object* v_j_660_; lean_object* v___x_661_; size_t v___x_662_; size_t v___x_663_; size_t v___x_664_; size_t v___x_665_; size_t v___x_666_; size_t v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; uint8_t v___x_672_; 
v_cs_657_ = lean_ctor_get(v_x_653_, 0);
v___x_658_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0);
v___x_659_ = lean_usize_shift_right(v_x_654_, v_x_655_);
v_j_660_ = lean_usize_to_nat(v___x_659_);
v___x_661_ = lean_array_get_borrowed(v___x_658_, v_cs_657_, v_j_660_);
v___x_662_ = ((size_t)1ULL);
v___x_663_ = lean_usize_shift_left(v___x_662_, v_x_655_);
v___x_664_ = lean_usize_sub(v___x_663_, v___x_662_);
v___x_665_ = lean_usize_land(v_x_654_, v___x_664_);
v___x_666_ = ((size_t)5ULL);
v___x_667_ = lean_usize_sub(v_x_655_, v___x_666_);
v___x_668_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1(v___x_661_, v___x_665_, v___x_667_, v_x_656_);
v___x_669_ = lean_unsigned_to_nat(1u);
v___x_670_ = lean_nat_add(v_j_660_, v___x_669_);
lean_dec(v_j_660_);
v___x_671_ = lean_array_get_size(v_cs_657_);
v___x_672_ = lean_nat_dec_lt(v___x_670_, v___x_671_);
if (v___x_672_ == 0)
{
lean_dec(v___x_670_);
return v___x_668_;
}
else
{
uint8_t v___x_673_; 
v___x_673_ = lean_nat_dec_le(v___x_671_, v___x_671_);
if (v___x_673_ == 0)
{
if (v___x_672_ == 0)
{
lean_dec(v___x_670_);
return v___x_668_;
}
else
{
size_t v___x_674_; size_t v___x_675_; lean_object* v___x_676_; 
v___x_674_ = lean_usize_of_nat(v___x_670_);
lean_dec(v___x_670_);
v___x_675_ = lean_usize_of_nat(v___x_671_);
v___x_676_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2(v_cs_657_, v___x_674_, v___x_675_, v___x_668_);
return v___x_676_;
}
}
else
{
size_t v___x_677_; size_t v___x_678_; lean_object* v___x_679_; 
v___x_677_ = lean_usize_of_nat(v___x_670_);
lean_dec(v___x_670_);
v___x_678_ = lean_usize_of_nat(v___x_671_);
v___x_679_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2(v_cs_657_, v___x_677_, v___x_678_, v___x_668_);
return v___x_679_;
}
}
}
else
{
lean_object* v_vs_680_; lean_object* v___x_681_; lean_object* v___x_682_; uint8_t v___x_683_; 
v_vs_680_ = lean_ctor_get(v_x_653_, 0);
v___x_681_ = lean_usize_to_nat(v_x_654_);
v___x_682_ = lean_array_get_size(v_vs_680_);
v___x_683_ = lean_nat_dec_lt(v___x_681_, v___x_682_);
if (v___x_683_ == 0)
{
lean_dec(v___x_681_);
return v_x_656_;
}
else
{
uint8_t v___x_684_; 
v___x_684_ = lean_nat_dec_le(v___x_682_, v___x_682_);
if (v___x_684_ == 0)
{
if (v___x_683_ == 0)
{
lean_dec(v___x_681_);
return v_x_656_;
}
else
{
size_t v___x_685_; size_t v___x_686_; lean_object* v___x_687_; 
v___x_685_ = lean_usize_of_nat(v___x_681_);
lean_dec(v___x_681_);
v___x_686_ = lean_usize_of_nat(v___x_682_);
v___x_687_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_vs_680_, v___x_685_, v___x_686_, v_x_656_);
return v___x_687_;
}
}
else
{
size_t v___x_688_; size_t v___x_689_; lean_object* v___x_690_; 
v___x_688_ = lean_usize_of_nat(v___x_681_);
lean_dec(v___x_681_);
v___x_689_ = lean_usize_of_nat(v___x_682_);
v___x_690_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_vs_680_, v___x_688_, v___x_689_, v_x_656_);
return v___x_690_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___boxed(lean_object* v_x_691_, lean_object* v_x_692_, lean_object* v_x_693_, lean_object* v_x_694_){
_start:
{
size_t v_x_1742__boxed_695_; size_t v_x_1743__boxed_696_; lean_object* v_res_697_; 
v_x_1742__boxed_695_ = lean_unbox_usize(v_x_692_);
lean_dec(v_x_692_);
v_x_1743__boxed_696_ = lean_unbox_usize(v_x_693_);
lean_dec(v_x_693_);
v_res_697_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1(v_x_691_, v_x_1742__boxed_695_, v_x_1743__boxed_696_, v_x_694_);
lean_dec_ref(v_x_691_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0(lean_object* v_t_698_, lean_object* v_init_699_, lean_object* v_start_700_){
_start:
{
lean_object* v___x_701_; uint8_t v___x_702_; 
v___x_701_ = lean_unsigned_to_nat(0u);
v___x_702_ = lean_nat_dec_eq(v_start_700_, v___x_701_);
if (v___x_702_ == 0)
{
lean_object* v_root_703_; lean_object* v_tail_704_; size_t v_shift_705_; lean_object* v_tailOff_706_; uint8_t v___x_707_; 
v_root_703_ = lean_ctor_get(v_t_698_, 0);
v_tail_704_ = lean_ctor_get(v_t_698_, 1);
v_shift_705_ = lean_ctor_get_usize(v_t_698_, 4);
v_tailOff_706_ = lean_ctor_get(v_t_698_, 3);
v___x_707_ = lean_nat_dec_le(v_tailOff_706_, v_start_700_);
if (v___x_707_ == 0)
{
size_t v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; uint8_t v___x_711_; 
v___x_708_ = lean_usize_of_nat(v_start_700_);
v___x_709_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1(v_root_703_, v___x_708_, v_shift_705_, v_init_699_);
v___x_710_ = lean_array_get_size(v_tail_704_);
v___x_711_ = lean_nat_dec_lt(v___x_701_, v___x_710_);
if (v___x_711_ == 0)
{
return v___x_709_;
}
else
{
uint8_t v___x_712_; 
v___x_712_ = lean_nat_dec_le(v___x_710_, v___x_710_);
if (v___x_712_ == 0)
{
if (v___x_711_ == 0)
{
return v___x_709_;
}
else
{
size_t v___x_713_; size_t v___x_714_; lean_object* v___x_715_; 
v___x_713_ = ((size_t)0ULL);
v___x_714_ = lean_usize_of_nat(v___x_710_);
v___x_715_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_tail_704_, v___x_713_, v___x_714_, v___x_709_);
return v___x_715_;
}
}
else
{
size_t v___x_716_; size_t v___x_717_; lean_object* v___x_718_; 
v___x_716_ = ((size_t)0ULL);
v___x_717_ = lean_usize_of_nat(v___x_710_);
v___x_718_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_tail_704_, v___x_716_, v___x_717_, v___x_709_);
return v___x_718_;
}
}
}
else
{
lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_719_ = lean_nat_sub(v_start_700_, v_tailOff_706_);
v___x_720_ = lean_array_get_size(v_tail_704_);
v___x_721_ = lean_nat_dec_lt(v___x_719_, v___x_720_);
if (v___x_721_ == 0)
{
lean_dec(v___x_719_);
return v_init_699_;
}
else
{
uint8_t v___x_722_; 
v___x_722_ = lean_nat_dec_le(v___x_720_, v___x_720_);
if (v___x_722_ == 0)
{
if (v___x_721_ == 0)
{
lean_dec(v___x_719_);
return v_init_699_;
}
else
{
size_t v___x_723_; size_t v___x_724_; lean_object* v___x_725_; 
v___x_723_ = lean_usize_of_nat(v___x_719_);
lean_dec(v___x_719_);
v___x_724_ = lean_usize_of_nat(v___x_720_);
v___x_725_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_tail_704_, v___x_723_, v___x_724_, v_init_699_);
return v___x_725_;
}
}
else
{
size_t v___x_726_; size_t v___x_727_; lean_object* v___x_728_; 
v___x_726_ = lean_usize_of_nat(v___x_719_);
lean_dec(v___x_719_);
v___x_727_ = lean_usize_of_nat(v___x_720_);
v___x_728_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_tail_704_, v___x_726_, v___x_727_, v_init_699_);
return v___x_728_;
}
}
}
}
else
{
lean_object* v_root_729_; lean_object* v_tail_730_; lean_object* v___x_731_; lean_object* v___x_732_; uint8_t v___x_733_; 
v_root_729_ = lean_ctor_get(v_t_698_, 0);
v_tail_730_ = lean_ctor_get(v_t_698_, 1);
v___x_731_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3(v_root_729_, v_init_699_);
v___x_732_ = lean_array_get_size(v_tail_730_);
v___x_733_ = lean_nat_dec_lt(v___x_701_, v___x_732_);
if (v___x_733_ == 0)
{
return v___x_731_;
}
else
{
uint8_t v___x_734_; 
v___x_734_ = lean_nat_dec_le(v___x_732_, v___x_732_);
if (v___x_734_ == 0)
{
if (v___x_733_ == 0)
{
return v___x_731_;
}
else
{
size_t v___x_735_; size_t v___x_736_; lean_object* v___x_737_; 
v___x_735_ = ((size_t)0ULL);
v___x_736_ = lean_usize_of_nat(v___x_732_);
v___x_737_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_tail_730_, v___x_735_, v___x_736_, v___x_731_);
return v___x_737_;
}
}
else
{
size_t v___x_738_; size_t v___x_739_; lean_object* v___x_740_; 
v___x_738_ = ((size_t)0ULL);
v___x_739_ = lean_usize_of_nat(v___x_732_);
v___x_740_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_tail_730_, v___x_738_, v___x_739_, v___x_731_);
return v___x_740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0___boxed(lean_object* v_t_741_, lean_object* v_init_742_, lean_object* v_start_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0(v_t_741_, v_init_742_, v_start_743_);
lean_dec(v_start_743_);
lean_dec_ref(v_t_741_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0(lean_object* v_lctx_745_, lean_object* v_init_746_, lean_object* v_start_747_){
_start:
{
lean_object* v_decls_748_; lean_object* v___x_749_; 
v_decls_748_ = lean_ctor_get(v_lctx_745_, 1);
v___x_749_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0(v_decls_748_, v_init_746_, v_start_747_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0___boxed(lean_object* v_lctx_750_, lean_object* v_init_751_, lean_object* v_start_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0(v_lctx_750_, v_init_751_, v_start_752_);
lean_dec(v_start_752_);
lean_dec_ref(v_lctx_750_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___lam__0(lean_object* v_fvarId_754_, lean_object* v_mvarId_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_754_, v___y_756_, v___y_758_, v___y_759_);
if (lean_obj_tag(v___x_761_) == 0)
{
lean_object* v_a_762_; lean_object* v_lctx_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; uint8_t v___x_769_; lean_object* v___x_770_; 
v_a_762_ = lean_ctor_get(v___x_761_, 0);
lean_inc(v_a_762_);
lean_dec_ref(v___x_761_);
v_lctx_763_ = lean_ctor_get(v___y_756_, 2);
v___x_764_ = lean_obj_once(&l_Lean_MVarId_revert___closed__2, &l_Lean_MVarId_revert___closed__2_once, _init_l_Lean_MVarId_revert___closed__2);
v___x_765_ = l_Lean_LocalDecl_index(v_a_762_);
lean_dec(v_a_762_);
v___x_766_ = lean_unsigned_to_nat(1u);
v___x_767_ = lean_nat_add(v___x_765_, v___x_766_);
lean_dec(v___x_765_);
v___x_768_ = l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0(v_lctx_763_, v___x_764_, v___x_767_);
lean_dec(v___x_767_);
v___x_769_ = 1;
v___x_770_ = l_Lean_MVarId_revert(v_mvarId_755_, v___x_768_, v___x_769_, v___x_769_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
return v___x_770_;
}
else
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_778_; 
lean_dec(v_mvarId_755_);
v_a_771_ = lean_ctor_get(v___x_761_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_761_);
if (v_isSharedCheck_778_ == 0)
{
v___x_773_ = v___x_761_;
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_761_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_776_; 
if (v_isShared_774_ == 0)
{
v___x_776_ = v___x_773_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_771_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___lam__0___boxed(lean_object* v_fvarId_779_, lean_object* v_mvarId_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l_Lean_MVarId_revertAfter___lam__0(v_fvarId_779_, v_mvarId_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
lean_dec(v___y_782_);
lean_dec_ref(v___y_781_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter(lean_object* v_mvarId_787_, lean_object* v_fvarId_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_){
_start:
{
lean_object* v___f_794_; lean_object* v___x_795_; 
lean_inc(v_mvarId_787_);
v___f_794_ = lean_alloc_closure((void*)(l_Lean_MVarId_revertAfter___lam__0___boxed), 7, 2);
lean_closure_set(v___f_794_, 0, v_fvarId_788_);
lean_closure_set(v___f_794_, 1, v_mvarId_787_);
v___x_795_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(v_mvarId_787_, v___f_794_, v_a_789_, v_a_790_, v_a_791_, v_a_792_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___boxed(lean_object* v_mvarId_796_, lean_object* v_fvarId_797_, lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_, lean_object* v_a_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = l_Lean_MVarId_revertAfter(v_mvarId_796_, v_fvarId_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
lean_dec(v_a_801_);
lean_dec_ref(v_a_800_);
lean_dec(v_a_799_);
lean_dec_ref(v_a_798_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___lam__0(lean_object* v_fvarId_804_, lean_object* v_mvarId_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
lean_object* v___x_811_; 
v___x_811_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_804_, v___y_806_, v___y_808_, v___y_809_);
if (lean_obj_tag(v___x_811_) == 0)
{
lean_object* v_a_812_; lean_object* v_lctx_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; uint8_t v___x_817_; lean_object* v___x_818_; 
v_a_812_ = lean_ctor_get(v___x_811_, 0);
lean_inc(v_a_812_);
lean_dec_ref(v___x_811_);
v_lctx_813_ = lean_ctor_get(v___y_806_, 2);
v___x_814_ = lean_obj_once(&l_Lean_MVarId_revert___closed__2, &l_Lean_MVarId_revert___closed__2_once, _init_l_Lean_MVarId_revert___closed__2);
v___x_815_ = l_Lean_LocalDecl_index(v_a_812_);
lean_dec(v_a_812_);
v___x_816_ = l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0(v_lctx_813_, v___x_814_, v___x_815_);
lean_dec(v___x_815_);
v___x_817_ = 1;
v___x_818_ = l_Lean_MVarId_revert(v_mvarId_805_, v___x_816_, v___x_817_, v___x_817_, v___y_806_, v___y_807_, v___y_808_, v___y_809_);
return v___x_818_;
}
else
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_826_; 
lean_dec(v_mvarId_805_);
v_a_819_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_826_ == 0)
{
v___x_821_ = v___x_811_;
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_811_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_824_; 
if (v_isShared_822_ == 0)
{
v___x_824_ = v___x_821_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_a_819_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___lam__0___boxed(lean_object* v_fvarId_827_, lean_object* v_mvarId_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l_Lean_MVarId_revertFrom___lam__0(v_fvarId_827_, v_mvarId_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_);
lean_dec(v___y_832_);
lean_dec_ref(v___y_831_);
lean_dec(v___y_830_);
lean_dec_ref(v___y_829_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom(lean_object* v_mvarId_835_, lean_object* v_fvarId_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_){
_start:
{
lean_object* v___f_842_; lean_object* v___x_843_; 
lean_inc(v_mvarId_835_);
v___f_842_ = lean_alloc_closure((void*)(l_Lean_MVarId_revertFrom___lam__0___boxed), 7, 2);
lean_closure_set(v___f_842_, 0, v_fvarId_836_);
lean_closure_set(v___f_842_, 1, v_mvarId_835_);
v___x_843_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(v_mvarId_835_, v___f_842_, v_a_837_, v_a_838_, v_a_839_, v_a_840_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___boxed(lean_object* v_mvarId_844_, lean_object* v_fvarId_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_Lean_MVarId_revertFrom(v_mvarId_844_, v_fvarId_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_);
lean_dec(v_a_849_);
lean_dec_ref(v_a_848_);
lean_dec(v_a_847_);
lean_dec_ref(v_a_846_);
return v_res_851_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Clear(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Revert(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Clear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Revert(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Clear(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Revert(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Clear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Revert(builtin);
}
#ifdef __cplusplus
}
#endif
