// Lean compiler output
// Module: Lean.Meta.GeneralizeVars
// Imports: public import Lean.Meta.Basic public import Lean.Util.CollectFVars
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_sortFVarIds___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0;
static lean_once_cell_t l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1;
static lean_once_cell_t l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2;
static lean_once_cell_t l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkGeneralizationForbiddenSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkGeneralizationForbiddenSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarSetToGeneralize(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarSetToGeneralize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarsToGeneralize(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarsToGeneralize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(lean_object* v_e_1_, lean_object* v___y_2_, lean_object* v___y_3_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v_e_1_);
return v___x_6_;
}
else
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v_mctx_9_; lean_object* v___x_10_; lean_object* v_fst_11_; lean_object* v_snd_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v_cache_15_; lean_object* v_zetaDeltaFVarIds_16_; lean_object* v_postponed_17_; lean_object* v_diag_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_27_; 
v___x_7_ = lean_st_ref_get(v___y_3_);
lean_dec(v___x_7_);
v___x_8_ = lean_st_ref_get(v___y_2_);
v_mctx_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc_ref(v_mctx_9_);
lean_dec(v___x_8_);
v___x_10_ = l_Lean_instantiateMVarsCore(v_mctx_9_, v_e_1_);
v_fst_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc(v_fst_11_);
v_snd_12_ = lean_ctor_get(v___x_10_, 1);
lean_inc(v_snd_12_);
lean_dec_ref(v___x_10_);
v___x_13_ = lean_st_ref_get(v___y_3_);
lean_dec(v___x_13_);
v___x_14_ = lean_st_ref_take(v___y_2_);
v_cache_15_ = lean_ctor_get(v___x_14_, 1);
v_zetaDeltaFVarIds_16_ = lean_ctor_get(v___x_14_, 2);
v_postponed_17_ = lean_ctor_get(v___x_14_, 3);
v_diag_18_ = lean_ctor_get(v___x_14_, 4);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_14_);
if (v_isSharedCheck_27_ == 0)
{
lean_object* v_unused_28_; 
v_unused_28_ = lean_ctor_get(v___x_14_, 0);
lean_dec(v_unused_28_);
v___x_20_ = v___x_14_;
v_isShared_21_ = v_isSharedCheck_27_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_diag_18_);
lean_inc(v_postponed_17_);
lean_inc(v_zetaDeltaFVarIds_16_);
lean_inc(v_cache_15_);
lean_dec(v___x_14_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_27_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v___x_23_; 
if (v_isShared_21_ == 0)
{
lean_ctor_set(v___x_20_, 0, v_snd_12_);
v___x_23_ = v___x_20_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_snd_12_);
lean_ctor_set(v_reuseFailAlloc_26_, 1, v_cache_15_);
lean_ctor_set(v_reuseFailAlloc_26_, 2, v_zetaDeltaFVarIds_16_);
lean_ctor_set(v_reuseFailAlloc_26_, 3, v_postponed_17_);
lean_ctor_set(v_reuseFailAlloc_26_, 4, v_diag_18_);
v___x_23_ = v_reuseFailAlloc_26_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_st_ref_set(v___y_2_, v___x_23_);
v___x_25_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_25_, 0, v_fst_11_);
return v___x_25_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg___boxed(lean_object* v_e_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(v_e_29_, v___y_30_, v___y_31_);
lean_dec(v___y_31_);
lean_dec(v___y_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2(lean_object* v_e_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(v_e_34_, v___y_36_, v___y_38_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___boxed(lean_object* v_e_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2(v_e_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(lean_object* v_k_48_, lean_object* v_t_49_){
_start:
{
if (lean_obj_tag(v_t_49_) == 0)
{
lean_object* v_k_50_; lean_object* v_l_51_; lean_object* v_r_52_; uint8_t v___x_53_; 
v_k_50_ = lean_ctor_get(v_t_49_, 1);
v_l_51_ = lean_ctor_get(v_t_49_, 3);
v_r_52_ = lean_ctor_get(v_t_49_, 4);
v___x_53_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_48_, v_k_50_);
switch(v___x_53_)
{
case 0:
{
v_t_49_ = v_l_51_;
goto _start;
}
case 1:
{
uint8_t v___x_55_; 
v___x_55_ = 1;
return v___x_55_;
}
default: 
{
v_t_49_ = v_r_52_;
goto _start;
}
}
}
else
{
uint8_t v___x_57_; 
v___x_57_ = 0;
return v___x_57_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg___boxed(lean_object* v_k_58_, lean_object* v_t_59_){
_start:
{
uint8_t v_res_60_; lean_object* v_r_61_; 
v_res_60_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_k_58_, v_t_59_);
lean_dec(v_t_59_);
lean_dec(v_k_58_);
v_r_61_ = lean_box(v_res_60_);
return v_r_61_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(lean_object* v_init_62_, lean_object* v_x_63_){
_start:
{
if (lean_obj_tag(v_x_63_) == 0)
{
lean_object* v_k_65_; lean_object* v_l_66_; lean_object* v_r_67_; lean_object* v___x_68_; lean_object* v_a_69_; lean_object* v_a_70_; lean_object* v_fst_71_; lean_object* v_snd_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_87_; 
v_k_65_ = lean_ctor_get(v_x_63_, 1);
lean_inc(v_k_65_);
v_l_66_ = lean_ctor_get(v_x_63_, 3);
lean_inc(v_l_66_);
v_r_67_ = lean_ctor_get(v_x_63_, 4);
lean_inc(v_r_67_);
lean_dec_ref(v_x_63_);
v___x_68_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(v_init_62_, v_l_66_);
v_a_69_ = lean_ctor_get(v___x_68_, 0);
lean_inc(v_a_69_);
lean_dec_ref(v___x_68_);
v_a_70_ = lean_ctor_get(v_a_69_, 0);
lean_inc(v_a_70_);
lean_dec(v_a_69_);
v_fst_71_ = lean_ctor_get(v_a_70_, 0);
v_snd_72_ = lean_ctor_get(v_a_70_, 1);
v_isSharedCheck_87_ = !lean_is_exclusive(v_a_70_);
if (v_isSharedCheck_87_ == 0)
{
v___x_74_ = v_a_70_;
v_isShared_75_ = v_isSharedCheck_87_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_snd_72_);
lean_inc(v_fst_71_);
lean_dec(v_a_70_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_87_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
uint8_t v___x_76_; 
v___x_76_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_k_65_, v_snd_72_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_80_; 
lean_inc(v_k_65_);
v___x_77_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_77_, 0, v_k_65_);
lean_ctor_set(v___x_77_, 1, v_fst_71_);
v___x_78_ = l_Lean_FVarIdSet_insert(v_snd_72_, v_k_65_);
if (v_isShared_75_ == 0)
{
lean_ctor_set(v___x_74_, 1, v___x_78_);
lean_ctor_set(v___x_74_, 0, v___x_77_);
v___x_80_ = v___x_74_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v___x_77_);
lean_ctor_set(v_reuseFailAlloc_82_, 1, v___x_78_);
v___x_80_ = v_reuseFailAlloc_82_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
v_init_62_ = v___x_80_;
v_x_63_ = v_r_67_;
goto _start;
}
}
else
{
lean_object* v___x_84_; 
lean_dec(v_k_65_);
if (v_isShared_75_ == 0)
{
v___x_84_ = v___x_74_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v_fst_71_);
lean_ctor_set(v_reuseFailAlloc_86_, 1, v_snd_72_);
v___x_84_ = v_reuseFailAlloc_86_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
v_init_62_ = v___x_84_;
v_x_63_ = v_r_67_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_88_, 0, v_init_62_);
v___x_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
return v___x_89_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg___boxed(lean_object* v_init_90_, lean_object* v_x_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(v_init_90_, v_x_91_);
return v_res_93_;
}
}
static lean_object* _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = lean_box(0);
v___x_95_ = lean_unsigned_to_nat(16u);
v___x_96_ = lean_mk_array(v___x_95_, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0);
v___x_98_ = lean_unsigned_to_nat(0u);
v___x_99_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
lean_ctor_set(v___x_99_, 1, v___x_97_);
return v___x_99_;
}
}
static lean_object* _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = lean_unsigned_to_nat(0u);
v___x_101_ = lean_mk_empty_array_with_capacity(v___x_100_);
return v___x_101_;
}
}
static lean_object* _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_102_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2);
v___x_103_ = lean_box(1);
v___x_104_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_105_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v___x_103_);
lean_ctor_set(v___x_105_, 2, v___x_102_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit(lean_object* v_fvarId_106_, lean_object* v_todo_107_, lean_object* v_s_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_){
_start:
{
lean_object* v_a_115_; lean_object* v_s_x27_127_; lean_object* v___y_128_; lean_object* v___y_129_; lean_object* v___y_130_; lean_object* v___y_131_; lean_object* v___x_137_; 
v___x_137_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_106_, v_a_109_, v_a_111_, v_a_112_);
if (lean_obj_tag(v___x_137_) == 0)
{
lean_object* v_a_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v_a_141_; lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; lean_object* v___x_145_; 
v_a_138_ = lean_ctor_get(v___x_137_, 0);
lean_inc(v_a_138_);
lean_dec_ref(v___x_137_);
v___x_139_ = l_Lean_LocalDecl_type(v_a_138_);
v___x_140_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(v___x_139_, v_a_110_, v_a_112_);
v_a_141_ = lean_ctor_get(v___x_140_, 0);
lean_inc(v_a_141_);
lean_dec_ref(v___x_140_);
v___x_142_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3);
v___x_143_ = l_Lean_collectFVars(v___x_142_, v_a_141_);
v___x_144_ = 0;
v___x_145_ = l_Lean_LocalDecl_value_x3f(v_a_138_, v___x_144_);
lean_dec(v_a_138_);
if (lean_obj_tag(v___x_145_) == 1)
{
lean_object* v_val_146_; lean_object* v___x_147_; lean_object* v_a_148_; lean_object* v___x_149_; 
v_val_146_ = lean_ctor_get(v___x_145_, 0);
lean_inc(v_val_146_);
lean_dec_ref(v___x_145_);
v___x_147_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(v_val_146_, v_a_110_, v_a_112_);
v_a_148_ = lean_ctor_get(v___x_147_, 0);
lean_inc(v_a_148_);
lean_dec_ref(v___x_147_);
v___x_149_ = l_Lean_collectFVars(v___x_143_, v_a_148_);
v_s_x27_127_ = v___x_149_;
v___y_128_ = v_a_109_;
v___y_129_ = v_a_110_;
v___y_130_ = v_a_111_;
v___y_131_ = v_a_112_;
goto v___jp_126_;
}
else
{
lean_dec(v___x_145_);
v_s_x27_127_ = v___x_143_;
v___y_128_ = v_a_109_;
v___y_129_ = v_a_110_;
v___y_130_ = v_a_111_;
v___y_131_ = v_a_112_;
goto v___jp_126_;
}
}
else
{
lean_object* v_a_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_157_; 
lean_dec(v_s_108_);
lean_dec(v_todo_107_);
v_a_150_ = lean_ctor_get(v___x_137_, 0);
v_isSharedCheck_157_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_157_ == 0)
{
v___x_152_ = v___x_137_;
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_a_150_);
lean_dec(v___x_137_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_155_; 
if (v_isShared_153_ == 0)
{
v___x_155_ = v___x_152_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v_a_150_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
}
v___jp_114_:
{
lean_object* v_fst_116_; lean_object* v_snd_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_125_; 
v_fst_116_ = lean_ctor_get(v_a_115_, 0);
v_snd_117_ = lean_ctor_get(v_a_115_, 1);
v_isSharedCheck_125_ = !lean_is_exclusive(v_a_115_);
if (v_isSharedCheck_125_ == 0)
{
v___x_119_ = v_a_115_;
v_isShared_120_ = v_isSharedCheck_125_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_snd_117_);
lean_inc(v_fst_116_);
lean_dec(v_a_115_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_125_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_122_; 
if (v_isShared_120_ == 0)
{
v___x_122_ = v___x_119_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v_fst_116_);
lean_ctor_set(v_reuseFailAlloc_124_, 1, v_snd_117_);
v___x_122_ = v_reuseFailAlloc_124_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
lean_object* v___x_123_; 
v___x_123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
return v___x_123_;
}
}
}
v___jp_126_:
{
lean_object* v_fvarSet_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v_a_135_; lean_object* v_a_136_; 
v_fvarSet_132_ = lean_ctor_get(v_s_x27_127_, 1);
lean_inc(v_fvarSet_132_);
lean_dec_ref(v_s_x27_127_);
v___x_133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_133_, 0, v_todo_107_);
lean_ctor_set(v___x_133_, 1, v_s_108_);
v___x_134_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(v___x_133_, v_fvarSet_132_);
v_a_135_ = lean_ctor_get(v___x_134_, 0);
lean_inc(v_a_135_);
lean_dec_ref(v___x_134_);
v_a_136_ = lean_ctor_get(v_a_135_, 0);
lean_inc(v_a_136_);
lean_dec(v_a_135_);
v_a_115_ = v_a_136_;
goto v___jp_114_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___boxed(lean_object* v_fvarId_158_, lean_object* v_todo_159_, lean_object* v_s_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit(v_fvarId_158_, v_todo_159_, v_s_160_, v_a_161_, v_a_162_, v_a_163_, v_a_164_);
lean_dec(v_a_164_);
lean_dec_ref(v_a_163_);
lean_dec(v_a_162_);
lean_dec_ref(v_a_161_);
return v_res_166_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0(lean_object* v_00_u03b2_167_, lean_object* v_k_168_, lean_object* v_t_169_){
_start:
{
uint8_t v___x_170_; 
v___x_170_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_k_168_, v_t_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___boxed(lean_object* v_00_u03b2_171_, lean_object* v_k_172_, lean_object* v_t_173_){
_start:
{
uint8_t v_res_174_; lean_object* v_r_175_; 
v_res_174_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0(v_00_u03b2_171_, v_k_172_, v_t_173_);
lean_dec(v_t_173_);
lean_dec(v_k_172_);
v_r_175_ = lean_box(v_res_174_);
return v_r_175_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1(lean_object* v_init_176_, lean_object* v_x_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(v_init_176_, v_x_177_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___boxed(lean_object* v_init_184_, lean_object* v_x_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_){
_start:
{
lean_object* v_res_191_; 
v_res_191_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1(v_init_184_, v_x_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_);
lean_dec(v___y_189_);
lean_dec_ref(v___y_188_);
lean_dec(v___y_187_);
lean_dec_ref(v___y_186_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop(lean_object* v_todo_192_, lean_object* v_s_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_){
_start:
{
if (lean_obj_tag(v_todo_192_) == 0)
{
lean_object* v___x_199_; 
v___x_199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_199_, 0, v_s_193_);
return v___x_199_;
}
else
{
lean_object* v_head_200_; lean_object* v_tail_201_; uint8_t v___x_202_; 
v_head_200_ = lean_ctor_get(v_todo_192_, 0);
lean_inc(v_head_200_);
v_tail_201_ = lean_ctor_get(v_todo_192_, 1);
lean_inc(v_tail_201_);
lean_dec_ref(v_todo_192_);
v___x_202_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_head_200_, v_s_193_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; lean_object* v___x_204_; 
lean_inc(v_head_200_);
v___x_203_ = l_Lean_FVarIdSet_insert(v_s_193_, v_head_200_);
v___x_204_ = l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit(v_head_200_, v_tail_201_, v___x_203_, v_a_194_, v_a_195_, v_a_196_, v_a_197_);
if (lean_obj_tag(v___x_204_) == 0)
{
lean_object* v_a_205_; lean_object* v_fst_206_; lean_object* v_snd_207_; 
v_a_205_ = lean_ctor_get(v___x_204_, 0);
lean_inc(v_a_205_);
lean_dec_ref(v___x_204_);
v_fst_206_ = lean_ctor_get(v_a_205_, 0);
lean_inc(v_fst_206_);
v_snd_207_ = lean_ctor_get(v_a_205_, 1);
lean_inc(v_snd_207_);
lean_dec(v_a_205_);
v_todo_192_ = v_fst_206_;
v_s_193_ = v_snd_207_;
goto _start;
}
else
{
lean_object* v_a_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_216_; 
v_a_209_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_216_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_216_ == 0)
{
v___x_211_ = v___x_204_;
v_isShared_212_ = v_isSharedCheck_216_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_a_209_);
lean_dec(v___x_204_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_216_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v___x_214_; 
if (v_isShared_212_ == 0)
{
v___x_214_ = v___x_211_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_a_209_);
v___x_214_ = v_reuseFailAlloc_215_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
return v___x_214_;
}
}
}
}
else
{
lean_dec(v_head_200_);
v_todo_192_ = v_tail_201_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop___boxed(lean_object* v_todo_218_, lean_object* v_s_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop(v_todo_218_, v_s_219_, v_a_220_, v_a_221_, v_a_222_, v_a_223_);
lean_dec(v_a_223_);
lean_dec_ref(v_a_222_);
lean_dec(v_a_221_);
lean_dec_ref(v_a_220_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0(lean_object* v_as_226_, size_t v_sz_227_, size_t v_i_228_, lean_object* v_b_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_){
_start:
{
lean_object* v_a_236_; uint8_t v___x_240_; 
v___x_240_ = lean_usize_dec_lt(v_i_228_, v_sz_227_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; 
v___x_241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_241_, 0, v_b_229_);
return v___x_241_;
}
else
{
lean_object* v_fst_242_; lean_object* v_snd_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_278_; 
v_fst_242_ = lean_ctor_get(v_b_229_, 0);
v_snd_243_ = lean_ctor_get(v_b_229_, 1);
v_isSharedCheck_278_ = !lean_is_exclusive(v_b_229_);
if (v_isSharedCheck_278_ == 0)
{
v___x_245_ = v_b_229_;
v_isShared_246_ = v_isSharedCheck_278_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_snd_243_);
lean_inc(v_fst_242_);
lean_dec(v_b_229_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_278_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v_a_247_; uint8_t v___x_248_; 
v_a_247_ = lean_array_uget_borrowed(v_as_226_, v_i_228_);
v___x_248_ = l_Lean_Expr_isFVar(v_a_247_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; 
lean_inc(v___y_233_);
lean_inc_ref(v___y_232_);
lean_inc(v___y_231_);
lean_inc_ref(v___y_230_);
lean_inc(v_a_247_);
v___x_249_ = lean_infer_type(v_a_247_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
if (lean_obj_tag(v___x_249_) == 0)
{
lean_object* v_a_250_; lean_object* v___x_251_; 
v_a_250_ = lean_ctor_get(v___x_249_, 0);
lean_inc(v_a_250_);
lean_dec_ref(v___x_249_);
v___x_251_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(v_a_250_, v___y_231_, v___y_233_);
if (lean_obj_tag(v___x_251_) == 0)
{
lean_object* v_a_252_; lean_object* v___x_253_; lean_object* v___x_255_; 
v_a_252_ = lean_ctor_get(v___x_251_, 0);
lean_inc(v_a_252_);
lean_dec_ref(v___x_251_);
v___x_253_ = l_Lean_collectFVars(v_fst_242_, v_a_252_);
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 0, v___x_253_);
v___x_255_ = v___x_245_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v___x_253_);
lean_ctor_set(v_reuseFailAlloc_256_, 1, v_snd_243_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
v_a_236_ = v___x_255_;
goto v___jp_235_;
}
}
else
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_264_; 
lean_del_object(v___x_245_);
lean_dec(v_snd_243_);
lean_dec(v_fst_242_);
v_a_257_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_264_ == 0)
{
v___x_259_ = v___x_251_;
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v___x_251_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_262_; 
if (v_isShared_260_ == 0)
{
v___x_262_ = v___x_259_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_a_257_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
}
else
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_272_; 
lean_del_object(v___x_245_);
lean_dec(v_snd_243_);
lean_dec(v_fst_242_);
v_a_265_ = lean_ctor_get(v___x_249_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_272_ == 0)
{
v___x_267_ = v___x_249_;
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v___x_249_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_270_; 
if (v_isShared_268_ == 0)
{
v___x_270_ = v___x_267_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_a_265_);
v___x_270_ = v_reuseFailAlloc_271_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
return v___x_270_;
}
}
}
}
else
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_276_; 
v___x_273_ = l_Lean_Expr_fvarId_x21(v_a_247_);
v___x_274_ = lean_array_push(v_snd_243_, v___x_273_);
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 1, v___x_274_);
v___x_276_ = v___x_245_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v_fst_242_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v___x_274_);
v___x_276_ = v_reuseFailAlloc_277_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
v_a_236_ = v___x_276_;
goto v___jp_235_;
}
}
}
}
v___jp_235_:
{
size_t v___x_237_; size_t v___x_238_; 
v___x_237_ = ((size_t)1ULL);
v___x_238_ = lean_usize_add(v_i_228_, v___x_237_);
v_i_228_ = v___x_238_;
v_b_229_ = v_a_236_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0___boxed(lean_object* v_as_279_, lean_object* v_sz_280_, lean_object* v_i_281_, lean_object* v_b_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_){
_start:
{
size_t v_sz_boxed_288_; size_t v_i_boxed_289_; lean_object* v_res_290_; 
v_sz_boxed_288_ = lean_unbox_usize(v_sz_280_);
lean_dec(v_sz_280_);
v_i_boxed_289_ = lean_unbox_usize(v_i_281_);
lean_dec(v_i_281_);
v_res_290_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0(v_as_279_, v_sz_boxed_288_, v_i_boxed_289_, v_b_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
lean_dec(v___y_284_);
lean_dec_ref(v___y_283_);
lean_dec_ref(v_as_279_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGeneralizationForbiddenSet(lean_object* v_targets_291_, lean_object* v_forbidden_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_){
_start:
{
lean_object* v___x_298_; lean_object* v_todo_299_; lean_object* v_s_300_; lean_object* v___x_301_; size_t v_sz_302_; size_t v___x_303_; lean_object* v___x_304_; 
v___x_298_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v_todo_299_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2);
v_s_300_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_s_300_, 0, v___x_298_);
lean_ctor_set(v_s_300_, 1, v_forbidden_292_);
lean_ctor_set(v_s_300_, 2, v_todo_299_);
v___x_301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_301_, 0, v_s_300_);
lean_ctor_set(v___x_301_, 1, v_todo_299_);
v_sz_302_ = lean_array_size(v_targets_291_);
v___x_303_ = ((size_t)0ULL);
v___x_304_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0(v_targets_291_, v_sz_302_, v___x_303_, v___x_301_, v_a_293_, v_a_294_, v_a_295_, v_a_296_);
if (lean_obj_tag(v___x_304_) == 0)
{
lean_object* v_a_305_; lean_object* v_fst_306_; lean_object* v_snd_307_; lean_object* v_fvarSet_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v_a_305_ = lean_ctor_get(v___x_304_, 0);
lean_inc(v_a_305_);
lean_dec_ref(v___x_304_);
v_fst_306_ = lean_ctor_get(v_a_305_, 0);
lean_inc(v_fst_306_);
v_snd_307_ = lean_ctor_get(v_a_305_, 1);
lean_inc(v_snd_307_);
lean_dec(v_a_305_);
v_fvarSet_308_ = lean_ctor_get(v_fst_306_, 1);
lean_inc(v_fvarSet_308_);
lean_dec(v_fst_306_);
v___x_309_ = lean_array_to_list(v_snd_307_);
v___x_310_ = l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop(v___x_309_, v_fvarSet_308_, v_a_293_, v_a_294_, v_a_295_, v_a_296_);
return v___x_310_;
}
else
{
lean_object* v_a_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_318_; 
v_a_311_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_318_ == 0)
{
v___x_313_ = v___x_304_;
v_isShared_314_ = v_isSharedCheck_318_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_a_311_);
lean_dec(v___x_304_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_318_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_316_; 
if (v_isShared_314_ == 0)
{
v___x_316_ = v___x_313_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_a_311_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGeneralizationForbiddenSet___boxed(lean_object* v_targets_319_, lean_object* v_forbidden_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Lean_Meta_mkGeneralizationForbiddenSet(v_targets_319_, v_forbidden_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_);
lean_dec(v_a_324_);
lean_dec_ref(v_a_323_);
lean_dec(v_a_322_);
lean_dec_ref(v_a_321_);
lean_dec_ref(v_targets_319_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(lean_object* v_as_327_, size_t v_i_328_, size_t v_stop_329_, lean_object* v_b_330_){
_start:
{
lean_object* v___y_332_; uint8_t v___x_336_; 
v___x_336_ = lean_usize_dec_eq(v_i_328_, v_stop_329_);
if (v___x_336_ == 0)
{
lean_object* v___x_337_; uint8_t v___x_338_; 
v___x_337_ = lean_array_uget_borrowed(v_as_327_, v_i_328_);
v___x_338_ = l_Lean_Expr_isFVar(v___x_337_);
if (v___x_338_ == 0)
{
v___y_332_ = v_b_330_;
goto v___jp_331_;
}
else
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = l_Lean_Expr_fvarId_x21(v___x_337_);
v___x_340_ = l_Lean_FVarIdSet_insert(v_b_330_, v___x_339_);
v___y_332_ = v___x_340_;
goto v___jp_331_;
}
}
else
{
return v_b_330_;
}
v___jp_331_:
{
size_t v___x_333_; size_t v___x_334_; 
v___x_333_ = ((size_t)1ULL);
v___x_334_ = lean_usize_add(v_i_328_, v___x_333_);
v_i_328_ = v___x_334_;
v_b_330_ = v___y_332_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1___boxed(lean_object* v_as_341_, lean_object* v_i_342_, lean_object* v_stop_343_, lean_object* v_b_344_){
_start:
{
size_t v_i_boxed_345_; size_t v_stop_boxed_346_; lean_object* v_res_347_; 
v_i_boxed_345_ = lean_unbox_usize(v_i_342_);
lean_dec(v_i_342_);
v_stop_boxed_346_ = lean_unbox_usize(v_stop_343_);
lean_dec(v_stop_343_);
v_res_347_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(v_as_341_, v_i_boxed_345_, v_stop_boxed_346_, v_b_344_);
lean_dec_ref(v_as_341_);
return v_res_347_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0(lean_object* v_fst_348_, lean_object* v_x_349_){
_start:
{
uint8_t v___x_350_; 
v___x_350_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_x_349_, v_fst_348_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed(lean_object* v_fst_351_, lean_object* v_x_352_){
_start:
{
uint8_t v_res_353_; lean_object* v_r_354_; 
v_res_353_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0(v_fst_351_, v_x_352_);
lean_dec(v_x_352_);
lean_dec(v_fst_351_);
v_r_354_ = lean_box(v_res_353_);
return v_r_354_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1(uint8_t v___y_355_, lean_object* v_x_356_){
_start:
{
return v___y_355_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed(lean_object* v___y_357_, lean_object* v_x_358_){
_start:
{
uint8_t v___y_10559__boxed_359_; uint8_t v_res_360_; lean_object* v_r_361_; 
v___y_10559__boxed_359_ = lean_unbox(v___y_357_);
v_res_360_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1(v___y_10559__boxed_359_, v_x_358_);
lean_dec(v_x_358_);
v_r_361_ = lean_box(v_res_360_);
return v_r_361_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(uint8_t v_ignoreLetDecls_362_, lean_object* v_forbidden_363_, lean_object* v_as_364_, size_t v_sz_365_, size_t v_i_366_, lean_object* v_b_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
uint8_t v___x_371_; 
v___x_371_ = lean_usize_dec_lt(v_i_366_, v_sz_365_);
if (v___x_371_ == 0)
{
lean_object* v___x_372_; 
v___x_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_372_, 0, v_b_367_);
return v___x_372_;
}
else
{
lean_object* v_snd_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_538_; 
v_snd_373_ = lean_ctor_get(v_b_367_, 1);
v_isSharedCheck_538_ = !lean_is_exclusive(v_b_367_);
if (v_isSharedCheck_538_ == 0)
{
lean_object* v_unused_539_; 
v_unused_539_ = lean_ctor_get(v_b_367_, 0);
lean_dec(v_unused_539_);
v___x_375_ = v_b_367_;
v_isShared_376_ = v_isSharedCheck_538_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_snd_373_);
lean_dec(v_b_367_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_538_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_377_; lean_object* v_a_379_; lean_object* v_a_386_; 
v___x_377_ = lean_box(0);
v_a_386_ = lean_array_uget_borrowed(v_as_364_, v_i_366_);
if (lean_obj_tag(v_a_386_) == 0)
{
v_a_379_ = v_snd_373_;
goto v___jp_378_;
}
else
{
lean_object* v_val_387_; lean_object* v_fst_388_; lean_object* v_snd_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_537_; 
v_val_387_ = lean_ctor_get(v_a_386_, 0);
v_fst_388_ = lean_ctor_get(v_snd_373_, 0);
v_snd_389_ = lean_ctor_get(v_snd_373_, 1);
v_isSharedCheck_537_ = !lean_is_exclusive(v_snd_373_);
if (v_isSharedCheck_537_ == 0)
{
v___x_391_ = v_snd_373_;
v_isShared_392_ = v_isSharedCheck_537_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_snd_389_);
lean_inc(v_fst_388_);
lean_dec(v_snd_373_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_537_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_397_; uint8_t v_a_399_; uint8_t v_fst_405_; lean_object* v_mctx_406_; lean_object* v___y_423_; uint8_t v_fst_429_; lean_object* v_snd_430_; lean_object* v___y_448_; uint8_t v_fst_453_; lean_object* v_mctx_454_; lean_object* v___y_471_; uint8_t v___x_476_; 
v___x_397_ = l_Lean_LocalDecl_fvarId(v_val_387_);
v___x_476_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v___x_397_, v_forbidden_363_);
if (v___x_476_ == 0)
{
lean_object* v___f_477_; lean_object* v___y_479_; lean_object* v___y_480_; uint8_t v_fst_481_; lean_object* v_snd_482_; lean_object* v___y_488_; lean_object* v___y_489_; lean_object* v___y_490_; uint8_t v___y_495_; uint8_t v___y_531_; uint8_t v___x_533_; 
lean_inc(v_fst_388_);
v___f_477_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_477_, 0, v_fst_388_);
v___x_533_ = l_Lean_LocalDecl_isAuxDecl(v_val_387_);
if (v___x_533_ == 0)
{
uint8_t v___x_534_; uint8_t v___x_535_; 
v___x_534_ = l_Lean_LocalDecl_binderInfo(v_val_387_);
v___x_535_ = l_Lean_BinderInfo_isInstImplicit(v___x_534_);
v___y_531_ = v___x_535_;
goto v___jp_530_;
}
else
{
v___y_531_ = v___x_533_;
goto v___jp_530_;
}
v___jp_478_:
{
if (v_fst_481_ == 0)
{
uint8_t v___x_483_; 
v___x_483_ = l_Lean_Expr_hasFVar(v___y_480_);
if (v___x_483_ == 0)
{
uint8_t v___x_484_; 
v___x_484_ = l_Lean_Expr_hasMVar(v___y_480_);
if (v___x_484_ == 0)
{
lean_dec_ref(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec_ref(v___f_477_);
v_fst_429_ = v___x_484_;
v_snd_430_ = v_snd_482_;
goto v___jp_428_;
}
else
{
lean_object* v___x_485_; 
v___x_485_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_477_, v___y_479_, v___y_480_, v_snd_482_);
v___y_448_ = v___x_485_;
goto v___jp_447_;
}
}
else
{
lean_object* v___x_486_; 
v___x_486_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_477_, v___y_479_, v___y_480_, v_snd_482_);
v___y_448_ = v___x_486_;
goto v___jp_447_;
}
}
else
{
lean_dec_ref(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec_ref(v___f_477_);
v_fst_429_ = v_fst_481_;
v_snd_430_ = v_snd_482_;
goto v___jp_428_;
}
}
v___jp_487_:
{
lean_object* v_fst_491_; lean_object* v_snd_492_; uint8_t v___x_493_; 
v_fst_491_ = lean_ctor_get(v___y_490_, 0);
lean_inc(v_fst_491_);
v_snd_492_ = lean_ctor_get(v___y_490_, 1);
lean_inc(v_snd_492_);
lean_dec_ref(v___y_490_);
v___x_493_ = lean_unbox(v_fst_491_);
lean_dec(v_fst_491_);
v___y_479_ = v___y_489_;
v___y_480_ = v___y_488_;
v_fst_481_ = v___x_493_;
v_snd_482_ = v_snd_492_;
goto v___jp_478_;
}
v___jp_494_:
{
lean_object* v___x_496_; lean_object* v___f_497_; 
v___x_496_ = lean_box(v___y_495_);
v___f_497_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed), 2, 1);
lean_closure_set(v___f_497_, 0, v___x_496_);
if (lean_obj_tag(v_val_387_) == 0)
{
lean_object* v_type_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v_mctx_501_; lean_object* v___x_502_; lean_object* v___x_503_; uint8_t v___x_504_; 
v_type_498_ = lean_ctor_get(v_val_387_, 3);
v___x_499_ = lean_st_ref_get(v___y_369_);
lean_dec(v___x_499_);
v___x_500_ = lean_st_ref_get(v___y_368_);
v_mctx_501_ = lean_ctor_get(v___x_500_, 0);
lean_inc_ref_n(v_mctx_501_, 2);
lean_dec(v___x_500_);
v___x_502_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
lean_ctor_set(v___x_503_, 1, v_mctx_501_);
v___x_504_ = l_Lean_Expr_hasFVar(v_type_498_);
if (v___x_504_ == 0)
{
uint8_t v___x_505_; 
v___x_505_ = l_Lean_Expr_hasMVar(v_type_498_);
if (v___x_505_ == 0)
{
lean_dec_ref(v___x_503_);
lean_dec_ref(v___f_497_);
lean_dec_ref(v___f_477_);
v_fst_405_ = v___x_505_;
v_mctx_406_ = v_mctx_501_;
goto v___jp_404_;
}
else
{
lean_object* v___x_506_; 
lean_dec_ref(v_mctx_501_);
lean_inc_ref(v_type_498_);
v___x_506_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_477_, v___f_497_, v_type_498_, v___x_503_);
v___y_423_ = v___x_506_;
goto v___jp_422_;
}
}
else
{
lean_object* v___x_507_; 
lean_dec_ref(v_mctx_501_);
lean_inc_ref(v_type_498_);
v___x_507_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_477_, v___f_497_, v_type_498_, v___x_503_);
v___y_423_ = v___x_507_;
goto v___jp_422_;
}
}
else
{
uint8_t v_nondep_508_; 
v_nondep_508_ = lean_ctor_get_uint8(v_val_387_, sizeof(void*)*5);
if (v_nondep_508_ == 0)
{
lean_object* v_type_509_; lean_object* v_value_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v_mctx_513_; lean_object* v___x_514_; lean_object* v___x_515_; uint8_t v___x_516_; 
v_type_509_ = lean_ctor_get(v_val_387_, 3);
v_value_510_ = lean_ctor_get(v_val_387_, 4);
v___x_511_ = lean_st_ref_get(v___y_369_);
lean_dec(v___x_511_);
v___x_512_ = lean_st_ref_get(v___y_368_);
v_mctx_513_ = lean_ctor_get(v___x_512_, 0);
lean_inc_ref(v_mctx_513_);
lean_dec(v___x_512_);
v___x_514_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_515_, 0, v___x_514_);
lean_ctor_set(v___x_515_, 1, v_mctx_513_);
v___x_516_ = l_Lean_Expr_hasFVar(v_type_509_);
if (v___x_516_ == 0)
{
uint8_t v___x_517_; 
v___x_517_ = l_Lean_Expr_hasMVar(v_type_509_);
if (v___x_517_ == 0)
{
lean_inc_ref(v_value_510_);
v___y_479_ = v___f_497_;
v___y_480_ = v_value_510_;
v_fst_481_ = v___x_517_;
v_snd_482_ = v___x_515_;
goto v___jp_478_;
}
else
{
lean_object* v___x_518_; 
lean_inc_ref(v_type_509_);
lean_inc_ref(v___f_497_);
lean_inc_ref(v___f_477_);
v___x_518_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_477_, v___f_497_, v_type_509_, v___x_515_);
lean_inc_ref(v_value_510_);
v___y_488_ = v_value_510_;
v___y_489_ = v___f_497_;
v___y_490_ = v___x_518_;
goto v___jp_487_;
}
}
else
{
lean_object* v___x_519_; 
lean_inc_ref(v_type_509_);
lean_inc_ref(v___f_497_);
lean_inc_ref(v___f_477_);
v___x_519_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_477_, v___f_497_, v_type_509_, v___x_515_);
lean_inc_ref(v_value_510_);
v___y_488_ = v_value_510_;
v___y_489_ = v___f_497_;
v___y_490_ = v___x_519_;
goto v___jp_487_;
}
}
else
{
lean_object* v_type_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v_mctx_523_; lean_object* v___x_524_; lean_object* v___x_525_; uint8_t v___x_526_; 
v_type_520_ = lean_ctor_get(v_val_387_, 3);
v___x_521_ = lean_st_ref_get(v___y_369_);
lean_dec(v___x_521_);
v___x_522_ = lean_st_ref_get(v___y_368_);
v_mctx_523_ = lean_ctor_get(v___x_522_, 0);
lean_inc_ref_n(v_mctx_523_, 2);
lean_dec(v___x_522_);
v___x_524_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_524_);
lean_ctor_set(v___x_525_, 1, v_mctx_523_);
v___x_526_ = l_Lean_Expr_hasFVar(v_type_520_);
if (v___x_526_ == 0)
{
uint8_t v___x_527_; 
v___x_527_ = l_Lean_Expr_hasMVar(v_type_520_);
if (v___x_527_ == 0)
{
lean_dec_ref(v___x_525_);
lean_dec_ref(v___f_497_);
lean_dec_ref(v___f_477_);
v_fst_453_ = v___x_527_;
v_mctx_454_ = v_mctx_523_;
goto v___jp_452_;
}
else
{
lean_object* v___x_528_; 
lean_dec_ref(v_mctx_523_);
lean_inc_ref(v_type_520_);
v___x_528_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_477_, v___f_497_, v_type_520_, v___x_525_);
v___y_471_ = v___x_528_;
goto v___jp_470_;
}
}
else
{
lean_object* v___x_529_; 
lean_dec_ref(v_mctx_523_);
lean_inc_ref(v_type_520_);
v___x_529_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_477_, v___f_497_, v_type_520_, v___x_525_);
v___y_471_ = v___x_529_;
goto v___jp_470_;
}
}
}
}
v___jp_530_:
{
if (v___y_531_ == 0)
{
if (v_ignoreLetDecls_362_ == 0)
{
lean_del_object(v___x_391_);
v___y_495_ = v_ignoreLetDecls_362_;
goto v___jp_494_;
}
else
{
uint8_t v___x_532_; 
v___x_532_ = l_Lean_LocalDecl_isLet(v_val_387_, v___y_531_);
if (v___x_532_ == 0)
{
lean_del_object(v___x_391_);
v___y_495_ = v___x_532_;
goto v___jp_494_;
}
else
{
lean_dec_ref(v___f_477_);
lean_dec(v___x_397_);
goto v___jp_393_;
}
}
}
else
{
lean_dec_ref(v___f_477_);
lean_dec(v___x_397_);
goto v___jp_393_;
}
}
}
else
{
lean_object* v___x_536_; 
lean_dec(v___x_397_);
lean_del_object(v___x_391_);
v___x_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_536_, 0, v_fst_388_);
lean_ctor_set(v___x_536_, 1, v_snd_389_);
v_a_379_ = v___x_536_;
goto v___jp_378_;
}
v___jp_393_:
{
lean_object* v___x_395_; 
if (v_isShared_392_ == 0)
{
v___x_395_ = v___x_391_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_fst_388_);
lean_ctor_set(v_reuseFailAlloc_396_, 1, v_snd_389_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
v_a_379_ = v___x_395_;
goto v___jp_378_;
}
}
v___jp_398_:
{
if (v_a_399_ == 0)
{
lean_object* v___x_400_; 
lean_dec(v___x_397_);
v___x_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_400_, 0, v_fst_388_);
lean_ctor_set(v___x_400_, 1, v_snd_389_);
v_a_379_ = v___x_400_;
goto v___jp_378_;
}
else
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
lean_inc(v___x_397_);
v___x_401_ = l_Lean_FVarIdSet_insert(v_snd_389_, v___x_397_);
v___x_402_ = l_Lean_FVarIdSet_insert(v_fst_388_, v___x_397_);
v___x_403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_403_, 0, v___x_402_);
lean_ctor_set(v___x_403_, 1, v___x_401_);
v_a_379_ = v___x_403_;
goto v___jp_378_;
}
}
v___jp_404_:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v_cache_409_; lean_object* v_zetaDeltaFVarIds_410_; lean_object* v_postponed_411_; lean_object* v_diag_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_420_; 
v___x_407_ = lean_st_ref_get(v___y_369_);
lean_dec(v___x_407_);
v___x_408_ = lean_st_ref_take(v___y_368_);
v_cache_409_ = lean_ctor_get(v___x_408_, 1);
v_zetaDeltaFVarIds_410_ = lean_ctor_get(v___x_408_, 2);
v_postponed_411_ = lean_ctor_get(v___x_408_, 3);
v_diag_412_ = lean_ctor_get(v___x_408_, 4);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_420_ == 0)
{
lean_object* v_unused_421_; 
v_unused_421_ = lean_ctor_get(v___x_408_, 0);
lean_dec(v_unused_421_);
v___x_414_ = v___x_408_;
v_isShared_415_ = v_isSharedCheck_420_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_diag_412_);
lean_inc(v_postponed_411_);
lean_inc(v_zetaDeltaFVarIds_410_);
lean_inc(v_cache_409_);
lean_dec(v___x_408_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_420_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_417_; 
if (v_isShared_415_ == 0)
{
lean_ctor_set(v___x_414_, 0, v_mctx_406_);
v___x_417_ = v___x_414_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_mctx_406_);
lean_ctor_set(v_reuseFailAlloc_419_, 1, v_cache_409_);
lean_ctor_set(v_reuseFailAlloc_419_, 2, v_zetaDeltaFVarIds_410_);
lean_ctor_set(v_reuseFailAlloc_419_, 3, v_postponed_411_);
lean_ctor_set(v_reuseFailAlloc_419_, 4, v_diag_412_);
v___x_417_ = v_reuseFailAlloc_419_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
lean_object* v___x_418_; 
v___x_418_ = lean_st_ref_set(v___y_368_, v___x_417_);
v_a_399_ = v_fst_405_;
goto v___jp_398_;
}
}
}
v___jp_422_:
{
lean_object* v_snd_424_; lean_object* v_fst_425_; lean_object* v_mctx_426_; uint8_t v___x_427_; 
v_snd_424_ = lean_ctor_get(v___y_423_, 1);
lean_inc(v_snd_424_);
v_fst_425_ = lean_ctor_get(v___y_423_, 0);
lean_inc(v_fst_425_);
lean_dec_ref(v___y_423_);
v_mctx_426_ = lean_ctor_get(v_snd_424_, 1);
lean_inc_ref(v_mctx_426_);
lean_dec(v_snd_424_);
v___x_427_ = lean_unbox(v_fst_425_);
lean_dec(v_fst_425_);
v_fst_405_ = v___x_427_;
v_mctx_406_ = v_mctx_426_;
goto v___jp_404_;
}
v___jp_428_:
{
lean_object* v_mctx_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v_cache_434_; lean_object* v_zetaDeltaFVarIds_435_; lean_object* v_postponed_436_; lean_object* v_diag_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_445_; 
v_mctx_431_ = lean_ctor_get(v_snd_430_, 1);
lean_inc_ref(v_mctx_431_);
lean_dec_ref(v_snd_430_);
v___x_432_ = lean_st_ref_get(v___y_369_);
lean_dec(v___x_432_);
v___x_433_ = lean_st_ref_take(v___y_368_);
v_cache_434_ = lean_ctor_get(v___x_433_, 1);
v_zetaDeltaFVarIds_435_ = lean_ctor_get(v___x_433_, 2);
v_postponed_436_ = lean_ctor_get(v___x_433_, 3);
v_diag_437_ = lean_ctor_get(v___x_433_, 4);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_445_ == 0)
{
lean_object* v_unused_446_; 
v_unused_446_ = lean_ctor_get(v___x_433_, 0);
lean_dec(v_unused_446_);
v___x_439_ = v___x_433_;
v_isShared_440_ = v_isSharedCheck_445_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_diag_437_);
lean_inc(v_postponed_436_);
lean_inc(v_zetaDeltaFVarIds_435_);
lean_inc(v_cache_434_);
lean_dec(v___x_433_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_445_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_442_; 
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v_mctx_431_);
v___x_442_ = v___x_439_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_mctx_431_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v_cache_434_);
lean_ctor_set(v_reuseFailAlloc_444_, 2, v_zetaDeltaFVarIds_435_);
lean_ctor_set(v_reuseFailAlloc_444_, 3, v_postponed_436_);
lean_ctor_set(v_reuseFailAlloc_444_, 4, v_diag_437_);
v___x_442_ = v_reuseFailAlloc_444_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
lean_object* v___x_443_; 
v___x_443_ = lean_st_ref_set(v___y_368_, v___x_442_);
v_a_399_ = v_fst_429_;
goto v___jp_398_;
}
}
}
v___jp_447_:
{
lean_object* v_fst_449_; lean_object* v_snd_450_; uint8_t v___x_451_; 
v_fst_449_ = lean_ctor_get(v___y_448_, 0);
lean_inc(v_fst_449_);
v_snd_450_ = lean_ctor_get(v___y_448_, 1);
lean_inc(v_snd_450_);
lean_dec_ref(v___y_448_);
v___x_451_ = lean_unbox(v_fst_449_);
lean_dec(v_fst_449_);
v_fst_429_ = v___x_451_;
v_snd_430_ = v_snd_450_;
goto v___jp_428_;
}
v___jp_452_:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v_cache_457_; lean_object* v_zetaDeltaFVarIds_458_; lean_object* v_postponed_459_; lean_object* v_diag_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_468_; 
v___x_455_ = lean_st_ref_get(v___y_369_);
lean_dec(v___x_455_);
v___x_456_ = lean_st_ref_take(v___y_368_);
v_cache_457_ = lean_ctor_get(v___x_456_, 1);
v_zetaDeltaFVarIds_458_ = lean_ctor_get(v___x_456_, 2);
v_postponed_459_ = lean_ctor_get(v___x_456_, 3);
v_diag_460_ = lean_ctor_get(v___x_456_, 4);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_456_);
if (v_isSharedCheck_468_ == 0)
{
lean_object* v_unused_469_; 
v_unused_469_ = lean_ctor_get(v___x_456_, 0);
lean_dec(v_unused_469_);
v___x_462_ = v___x_456_;
v_isShared_463_ = v_isSharedCheck_468_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_diag_460_);
lean_inc(v_postponed_459_);
lean_inc(v_zetaDeltaFVarIds_458_);
lean_inc(v_cache_457_);
lean_dec(v___x_456_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_468_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_465_; 
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 0, v_mctx_454_);
v___x_465_ = v___x_462_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_mctx_454_);
lean_ctor_set(v_reuseFailAlloc_467_, 1, v_cache_457_);
lean_ctor_set(v_reuseFailAlloc_467_, 2, v_zetaDeltaFVarIds_458_);
lean_ctor_set(v_reuseFailAlloc_467_, 3, v_postponed_459_);
lean_ctor_set(v_reuseFailAlloc_467_, 4, v_diag_460_);
v___x_465_ = v_reuseFailAlloc_467_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
lean_object* v___x_466_; 
v___x_466_ = lean_st_ref_set(v___y_368_, v___x_465_);
v_a_399_ = v_fst_453_;
goto v___jp_398_;
}
}
}
v___jp_470_:
{
lean_object* v_snd_472_; lean_object* v_fst_473_; lean_object* v_mctx_474_; uint8_t v___x_475_; 
v_snd_472_ = lean_ctor_get(v___y_471_, 1);
lean_inc(v_snd_472_);
v_fst_473_ = lean_ctor_get(v___y_471_, 0);
lean_inc(v_fst_473_);
lean_dec_ref(v___y_471_);
v_mctx_474_ = lean_ctor_get(v_snd_472_, 1);
lean_inc_ref(v_mctx_474_);
lean_dec(v_snd_472_);
v___x_475_ = lean_unbox(v_fst_473_);
lean_dec(v_fst_473_);
v_fst_453_ = v___x_475_;
v_mctx_454_ = v_mctx_474_;
goto v___jp_452_;
}
}
}
v___jp_378_:
{
lean_object* v___x_381_; 
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 1, v_a_379_);
lean_ctor_set(v___x_375_, 0, v___x_377_);
v___x_381_ = v___x_375_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v___x_377_);
lean_ctor_set(v_reuseFailAlloc_385_, 1, v_a_379_);
v___x_381_ = v_reuseFailAlloc_385_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
size_t v___x_382_; size_t v___x_383_; 
v___x_382_ = ((size_t)1ULL);
v___x_383_ = lean_usize_add(v_i_366_, v___x_382_);
v_i_366_ = v___x_383_;
v_b_367_ = v___x_381_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_ignoreLetDecls_540_, lean_object* v_forbidden_541_, lean_object* v_as_542_, lean_object* v_sz_543_, lean_object* v_i_544_, lean_object* v_b_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_549_; size_t v_sz_boxed_550_; size_t v_i_boxed_551_; lean_object* v_res_552_; 
v_ignoreLetDecls_boxed_549_ = lean_unbox(v_ignoreLetDecls_540_);
v_sz_boxed_550_ = lean_unbox_usize(v_sz_543_);
lean_dec(v_sz_543_);
v_i_boxed_551_ = lean_unbox_usize(v_i_544_);
lean_dec(v_i_544_);
v_res_552_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(v_ignoreLetDecls_boxed_549_, v_forbidden_541_, v_as_542_, v_sz_boxed_550_, v_i_boxed_551_, v_b_545_, v___y_546_, v___y_547_);
lean_dec(v___y_547_);
lean_dec(v___y_546_);
lean_dec_ref(v_as_542_);
lean_dec(v_forbidden_541_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2(uint8_t v_ignoreLetDecls_553_, lean_object* v_forbidden_554_, lean_object* v_as_555_, size_t v_sz_556_, size_t v_i_557_, lean_object* v_b_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_){
_start:
{
uint8_t v___x_564_; 
v___x_564_ = lean_usize_dec_lt(v_i_557_, v_sz_556_);
if (v___x_564_ == 0)
{
lean_object* v___x_565_; 
v___x_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_565_, 0, v_b_558_);
return v___x_565_;
}
else
{
lean_object* v_snd_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_731_; 
v_snd_566_ = lean_ctor_get(v_b_558_, 1);
v_isSharedCheck_731_ = !lean_is_exclusive(v_b_558_);
if (v_isSharedCheck_731_ == 0)
{
lean_object* v_unused_732_; 
v_unused_732_ = lean_ctor_get(v_b_558_, 0);
lean_dec(v_unused_732_);
v___x_568_ = v_b_558_;
v_isShared_569_ = v_isSharedCheck_731_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_snd_566_);
lean_dec(v_b_558_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_731_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_570_; lean_object* v_a_572_; lean_object* v_a_579_; 
v___x_570_ = lean_box(0);
v_a_579_ = lean_array_uget_borrowed(v_as_555_, v_i_557_);
if (lean_obj_tag(v_a_579_) == 0)
{
v_a_572_ = v_snd_566_;
goto v___jp_571_;
}
else
{
lean_object* v_val_580_; lean_object* v_fst_581_; lean_object* v_snd_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_730_; 
v_val_580_ = lean_ctor_get(v_a_579_, 0);
v_fst_581_ = lean_ctor_get(v_snd_566_, 0);
v_snd_582_ = lean_ctor_get(v_snd_566_, 1);
v_isSharedCheck_730_ = !lean_is_exclusive(v_snd_566_);
if (v_isSharedCheck_730_ == 0)
{
v___x_584_ = v_snd_566_;
v_isShared_585_ = v_isSharedCheck_730_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_snd_582_);
lean_inc(v_fst_581_);
lean_dec(v_snd_566_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_730_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_590_; uint8_t v_a_592_; uint8_t v_fst_598_; lean_object* v_mctx_599_; lean_object* v___y_616_; uint8_t v_fst_622_; lean_object* v_snd_623_; lean_object* v___y_641_; uint8_t v_fst_646_; lean_object* v_mctx_647_; lean_object* v___y_664_; uint8_t v___x_669_; 
v___x_590_ = l_Lean_LocalDecl_fvarId(v_val_580_);
v___x_669_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v___x_590_, v_forbidden_554_);
if (v___x_669_ == 0)
{
lean_object* v___f_670_; lean_object* v___y_672_; lean_object* v___y_673_; uint8_t v_fst_674_; lean_object* v_snd_675_; lean_object* v___y_681_; lean_object* v___y_682_; lean_object* v___y_683_; uint8_t v___y_688_; uint8_t v___y_724_; uint8_t v___x_726_; 
lean_inc(v_fst_581_);
v___f_670_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_670_, 0, v_fst_581_);
v___x_726_ = l_Lean_LocalDecl_isAuxDecl(v_val_580_);
if (v___x_726_ == 0)
{
uint8_t v___x_727_; uint8_t v___x_728_; 
v___x_727_ = l_Lean_LocalDecl_binderInfo(v_val_580_);
v___x_728_ = l_Lean_BinderInfo_isInstImplicit(v___x_727_);
v___y_724_ = v___x_728_;
goto v___jp_723_;
}
else
{
v___y_724_ = v___x_726_;
goto v___jp_723_;
}
v___jp_671_:
{
if (v_fst_674_ == 0)
{
uint8_t v___x_676_; 
v___x_676_ = l_Lean_Expr_hasFVar(v___y_672_);
if (v___x_676_ == 0)
{
uint8_t v___x_677_; 
v___x_677_ = l_Lean_Expr_hasMVar(v___y_672_);
if (v___x_677_ == 0)
{
lean_dec_ref(v___y_673_);
lean_dec_ref(v___y_672_);
lean_dec_ref(v___f_670_);
v_fst_622_ = v___x_677_;
v_snd_623_ = v_snd_675_;
goto v___jp_621_;
}
else
{
lean_object* v___x_678_; 
v___x_678_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_670_, v___y_673_, v___y_672_, v_snd_675_);
v___y_641_ = v___x_678_;
goto v___jp_640_;
}
}
else
{
lean_object* v___x_679_; 
v___x_679_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_670_, v___y_673_, v___y_672_, v_snd_675_);
v___y_641_ = v___x_679_;
goto v___jp_640_;
}
}
else
{
lean_dec_ref(v___y_673_);
lean_dec_ref(v___y_672_);
lean_dec_ref(v___f_670_);
v_fst_622_ = v_fst_674_;
v_snd_623_ = v_snd_675_;
goto v___jp_621_;
}
}
v___jp_680_:
{
lean_object* v_fst_684_; lean_object* v_snd_685_; uint8_t v___x_686_; 
v_fst_684_ = lean_ctor_get(v___y_683_, 0);
lean_inc(v_fst_684_);
v_snd_685_ = lean_ctor_get(v___y_683_, 1);
lean_inc(v_snd_685_);
lean_dec_ref(v___y_683_);
v___x_686_ = lean_unbox(v_fst_684_);
lean_dec(v_fst_684_);
v___y_672_ = v___y_681_;
v___y_673_ = v___y_682_;
v_fst_674_ = v___x_686_;
v_snd_675_ = v_snd_685_;
goto v___jp_671_;
}
v___jp_687_:
{
lean_object* v___x_689_; lean_object* v___f_690_; 
v___x_689_ = lean_box(v___y_688_);
v___f_690_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed), 2, 1);
lean_closure_set(v___f_690_, 0, v___x_689_);
if (lean_obj_tag(v_val_580_) == 0)
{
lean_object* v_type_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v_mctx_694_; lean_object* v___x_695_; lean_object* v___x_696_; uint8_t v___x_697_; 
v_type_691_ = lean_ctor_get(v_val_580_, 3);
v___x_692_ = lean_st_ref_get(v___y_562_);
lean_dec(v___x_692_);
v___x_693_ = lean_st_ref_get(v___y_560_);
v_mctx_694_ = lean_ctor_get(v___x_693_, 0);
lean_inc_ref_n(v_mctx_694_, 2);
lean_dec(v___x_693_);
v___x_695_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_696_, 0, v___x_695_);
lean_ctor_set(v___x_696_, 1, v_mctx_694_);
v___x_697_ = l_Lean_Expr_hasFVar(v_type_691_);
if (v___x_697_ == 0)
{
uint8_t v___x_698_; 
v___x_698_ = l_Lean_Expr_hasMVar(v_type_691_);
if (v___x_698_ == 0)
{
lean_dec_ref(v___x_696_);
lean_dec_ref(v___f_690_);
lean_dec_ref(v___f_670_);
v_fst_598_ = v___x_698_;
v_mctx_599_ = v_mctx_694_;
goto v___jp_597_;
}
else
{
lean_object* v___x_699_; 
lean_dec_ref(v_mctx_694_);
lean_inc_ref(v_type_691_);
v___x_699_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_670_, v___f_690_, v_type_691_, v___x_696_);
v___y_616_ = v___x_699_;
goto v___jp_615_;
}
}
else
{
lean_object* v___x_700_; 
lean_dec_ref(v_mctx_694_);
lean_inc_ref(v_type_691_);
v___x_700_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_670_, v___f_690_, v_type_691_, v___x_696_);
v___y_616_ = v___x_700_;
goto v___jp_615_;
}
}
else
{
uint8_t v_nondep_701_; 
v_nondep_701_ = lean_ctor_get_uint8(v_val_580_, sizeof(void*)*5);
if (v_nondep_701_ == 0)
{
lean_object* v_type_702_; lean_object* v_value_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v_mctx_706_; lean_object* v___x_707_; lean_object* v___x_708_; uint8_t v___x_709_; 
v_type_702_ = lean_ctor_get(v_val_580_, 3);
v_value_703_ = lean_ctor_get(v_val_580_, 4);
v___x_704_ = lean_st_ref_get(v___y_562_);
lean_dec(v___x_704_);
v___x_705_ = lean_st_ref_get(v___y_560_);
v_mctx_706_ = lean_ctor_get(v___x_705_, 0);
lean_inc_ref(v_mctx_706_);
lean_dec(v___x_705_);
v___x_707_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_708_, 0, v___x_707_);
lean_ctor_set(v___x_708_, 1, v_mctx_706_);
v___x_709_ = l_Lean_Expr_hasFVar(v_type_702_);
if (v___x_709_ == 0)
{
uint8_t v___x_710_; 
v___x_710_ = l_Lean_Expr_hasMVar(v_type_702_);
if (v___x_710_ == 0)
{
lean_inc_ref(v_value_703_);
v___y_672_ = v_value_703_;
v___y_673_ = v___f_690_;
v_fst_674_ = v___x_710_;
v_snd_675_ = v___x_708_;
goto v___jp_671_;
}
else
{
lean_object* v___x_711_; 
lean_inc_ref(v_type_702_);
lean_inc_ref(v___f_690_);
lean_inc_ref(v___f_670_);
v___x_711_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_670_, v___f_690_, v_type_702_, v___x_708_);
lean_inc_ref(v_value_703_);
v___y_681_ = v_value_703_;
v___y_682_ = v___f_690_;
v___y_683_ = v___x_711_;
goto v___jp_680_;
}
}
else
{
lean_object* v___x_712_; 
lean_inc_ref(v_type_702_);
lean_inc_ref(v___f_690_);
lean_inc_ref(v___f_670_);
v___x_712_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_670_, v___f_690_, v_type_702_, v___x_708_);
lean_inc_ref(v_value_703_);
v___y_681_ = v_value_703_;
v___y_682_ = v___f_690_;
v___y_683_ = v___x_712_;
goto v___jp_680_;
}
}
else
{
lean_object* v_type_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v_mctx_716_; lean_object* v___x_717_; lean_object* v___x_718_; uint8_t v___x_719_; 
v_type_713_ = lean_ctor_get(v_val_580_, 3);
v___x_714_ = lean_st_ref_get(v___y_562_);
lean_dec(v___x_714_);
v___x_715_ = lean_st_ref_get(v___y_560_);
v_mctx_716_ = lean_ctor_get(v___x_715_, 0);
lean_inc_ref_n(v_mctx_716_, 2);
lean_dec(v___x_715_);
v___x_717_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_718_, 0, v___x_717_);
lean_ctor_set(v___x_718_, 1, v_mctx_716_);
v___x_719_ = l_Lean_Expr_hasFVar(v_type_713_);
if (v___x_719_ == 0)
{
uint8_t v___x_720_; 
v___x_720_ = l_Lean_Expr_hasMVar(v_type_713_);
if (v___x_720_ == 0)
{
lean_dec_ref(v___x_718_);
lean_dec_ref(v___f_690_);
lean_dec_ref(v___f_670_);
v_fst_646_ = v___x_720_;
v_mctx_647_ = v_mctx_716_;
goto v___jp_645_;
}
else
{
lean_object* v___x_721_; 
lean_dec_ref(v_mctx_716_);
lean_inc_ref(v_type_713_);
v___x_721_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_670_, v___f_690_, v_type_713_, v___x_718_);
v___y_664_ = v___x_721_;
goto v___jp_663_;
}
}
else
{
lean_object* v___x_722_; 
lean_dec_ref(v_mctx_716_);
lean_inc_ref(v_type_713_);
v___x_722_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_670_, v___f_690_, v_type_713_, v___x_718_);
v___y_664_ = v___x_722_;
goto v___jp_663_;
}
}
}
}
v___jp_723_:
{
if (v___y_724_ == 0)
{
if (v_ignoreLetDecls_553_ == 0)
{
lean_del_object(v___x_584_);
v___y_688_ = v_ignoreLetDecls_553_;
goto v___jp_687_;
}
else
{
uint8_t v___x_725_; 
v___x_725_ = l_Lean_LocalDecl_isLet(v_val_580_, v___y_724_);
if (v___x_725_ == 0)
{
lean_del_object(v___x_584_);
v___y_688_ = v___x_725_;
goto v___jp_687_;
}
else
{
lean_dec_ref(v___f_670_);
lean_dec(v___x_590_);
goto v___jp_586_;
}
}
}
else
{
lean_dec_ref(v___f_670_);
lean_dec(v___x_590_);
goto v___jp_586_;
}
}
}
else
{
lean_object* v___x_729_; 
lean_dec(v___x_590_);
lean_del_object(v___x_584_);
v___x_729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_729_, 0, v_fst_581_);
lean_ctor_set(v___x_729_, 1, v_snd_582_);
v_a_572_ = v___x_729_;
goto v___jp_571_;
}
v___jp_586_:
{
lean_object* v___x_588_; 
if (v_isShared_585_ == 0)
{
v___x_588_ = v___x_584_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_fst_581_);
lean_ctor_set(v_reuseFailAlloc_589_, 1, v_snd_582_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
v_a_572_ = v___x_588_;
goto v___jp_571_;
}
}
v___jp_591_:
{
if (v_a_592_ == 0)
{
lean_object* v___x_593_; 
lean_dec(v___x_590_);
v___x_593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_593_, 0, v_fst_581_);
lean_ctor_set(v___x_593_, 1, v_snd_582_);
v_a_572_ = v___x_593_;
goto v___jp_571_;
}
else
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
lean_inc(v___x_590_);
v___x_594_ = l_Lean_FVarIdSet_insert(v_snd_582_, v___x_590_);
v___x_595_ = l_Lean_FVarIdSet_insert(v_fst_581_, v___x_590_);
v___x_596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
lean_ctor_set(v___x_596_, 1, v___x_594_);
v_a_572_ = v___x_596_;
goto v___jp_571_;
}
}
v___jp_597_:
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v_cache_602_; lean_object* v_zetaDeltaFVarIds_603_; lean_object* v_postponed_604_; lean_object* v_diag_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_613_; 
v___x_600_ = lean_st_ref_get(v___y_562_);
lean_dec(v___x_600_);
v___x_601_ = lean_st_ref_take(v___y_560_);
v_cache_602_ = lean_ctor_get(v___x_601_, 1);
v_zetaDeltaFVarIds_603_ = lean_ctor_get(v___x_601_, 2);
v_postponed_604_ = lean_ctor_get(v___x_601_, 3);
v_diag_605_ = lean_ctor_get(v___x_601_, 4);
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_613_ == 0)
{
lean_object* v_unused_614_; 
v_unused_614_ = lean_ctor_get(v___x_601_, 0);
lean_dec(v_unused_614_);
v___x_607_ = v___x_601_;
v_isShared_608_ = v_isSharedCheck_613_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_diag_605_);
lean_inc(v_postponed_604_);
lean_inc(v_zetaDeltaFVarIds_603_);
lean_inc(v_cache_602_);
lean_dec(v___x_601_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_613_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 0, v_mctx_599_);
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_mctx_599_);
lean_ctor_set(v_reuseFailAlloc_612_, 1, v_cache_602_);
lean_ctor_set(v_reuseFailAlloc_612_, 2, v_zetaDeltaFVarIds_603_);
lean_ctor_set(v_reuseFailAlloc_612_, 3, v_postponed_604_);
lean_ctor_set(v_reuseFailAlloc_612_, 4, v_diag_605_);
v___x_610_ = v_reuseFailAlloc_612_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
lean_object* v___x_611_; 
v___x_611_ = lean_st_ref_set(v___y_560_, v___x_610_);
v_a_592_ = v_fst_598_;
goto v___jp_591_;
}
}
}
v___jp_615_:
{
lean_object* v_snd_617_; lean_object* v_fst_618_; lean_object* v_mctx_619_; uint8_t v___x_620_; 
v_snd_617_ = lean_ctor_get(v___y_616_, 1);
lean_inc(v_snd_617_);
v_fst_618_ = lean_ctor_get(v___y_616_, 0);
lean_inc(v_fst_618_);
lean_dec_ref(v___y_616_);
v_mctx_619_ = lean_ctor_get(v_snd_617_, 1);
lean_inc_ref(v_mctx_619_);
lean_dec(v_snd_617_);
v___x_620_ = lean_unbox(v_fst_618_);
lean_dec(v_fst_618_);
v_fst_598_ = v___x_620_;
v_mctx_599_ = v_mctx_619_;
goto v___jp_597_;
}
v___jp_621_:
{
lean_object* v_mctx_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v_cache_627_; lean_object* v_zetaDeltaFVarIds_628_; lean_object* v_postponed_629_; lean_object* v_diag_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_638_; 
v_mctx_624_ = lean_ctor_get(v_snd_623_, 1);
lean_inc_ref(v_mctx_624_);
lean_dec_ref(v_snd_623_);
v___x_625_ = lean_st_ref_get(v___y_562_);
lean_dec(v___x_625_);
v___x_626_ = lean_st_ref_take(v___y_560_);
v_cache_627_ = lean_ctor_get(v___x_626_, 1);
v_zetaDeltaFVarIds_628_ = lean_ctor_get(v___x_626_, 2);
v_postponed_629_ = lean_ctor_get(v___x_626_, 3);
v_diag_630_ = lean_ctor_get(v___x_626_, 4);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_638_ == 0)
{
lean_object* v_unused_639_; 
v_unused_639_ = lean_ctor_get(v___x_626_, 0);
lean_dec(v_unused_639_);
v___x_632_ = v___x_626_;
v_isShared_633_ = v_isSharedCheck_638_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_diag_630_);
lean_inc(v_postponed_629_);
lean_inc(v_zetaDeltaFVarIds_628_);
lean_inc(v_cache_627_);
lean_dec(v___x_626_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_638_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_635_; 
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 0, v_mctx_624_);
v___x_635_ = v___x_632_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_mctx_624_);
lean_ctor_set(v_reuseFailAlloc_637_, 1, v_cache_627_);
lean_ctor_set(v_reuseFailAlloc_637_, 2, v_zetaDeltaFVarIds_628_);
lean_ctor_set(v_reuseFailAlloc_637_, 3, v_postponed_629_);
lean_ctor_set(v_reuseFailAlloc_637_, 4, v_diag_630_);
v___x_635_ = v_reuseFailAlloc_637_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
lean_object* v___x_636_; 
v___x_636_ = lean_st_ref_set(v___y_560_, v___x_635_);
v_a_592_ = v_fst_622_;
goto v___jp_591_;
}
}
}
v___jp_640_:
{
lean_object* v_fst_642_; lean_object* v_snd_643_; uint8_t v___x_644_; 
v_fst_642_ = lean_ctor_get(v___y_641_, 0);
lean_inc(v_fst_642_);
v_snd_643_ = lean_ctor_get(v___y_641_, 1);
lean_inc(v_snd_643_);
lean_dec_ref(v___y_641_);
v___x_644_ = lean_unbox(v_fst_642_);
lean_dec(v_fst_642_);
v_fst_622_ = v___x_644_;
v_snd_623_ = v_snd_643_;
goto v___jp_621_;
}
v___jp_645_:
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v_cache_650_; lean_object* v_zetaDeltaFVarIds_651_; lean_object* v_postponed_652_; lean_object* v_diag_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_661_; 
v___x_648_ = lean_st_ref_get(v___y_562_);
lean_dec(v___x_648_);
v___x_649_ = lean_st_ref_take(v___y_560_);
v_cache_650_ = lean_ctor_get(v___x_649_, 1);
v_zetaDeltaFVarIds_651_ = lean_ctor_get(v___x_649_, 2);
v_postponed_652_ = lean_ctor_get(v___x_649_, 3);
v_diag_653_ = lean_ctor_get(v___x_649_, 4);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_661_ == 0)
{
lean_object* v_unused_662_; 
v_unused_662_ = lean_ctor_get(v___x_649_, 0);
lean_dec(v_unused_662_);
v___x_655_ = v___x_649_;
v_isShared_656_ = v_isSharedCheck_661_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_diag_653_);
lean_inc(v_postponed_652_);
lean_inc(v_zetaDeltaFVarIds_651_);
lean_inc(v_cache_650_);
lean_dec(v___x_649_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_661_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_658_; 
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 0, v_mctx_647_);
v___x_658_ = v___x_655_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_mctx_647_);
lean_ctor_set(v_reuseFailAlloc_660_, 1, v_cache_650_);
lean_ctor_set(v_reuseFailAlloc_660_, 2, v_zetaDeltaFVarIds_651_);
lean_ctor_set(v_reuseFailAlloc_660_, 3, v_postponed_652_);
lean_ctor_set(v_reuseFailAlloc_660_, 4, v_diag_653_);
v___x_658_ = v_reuseFailAlloc_660_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
lean_object* v___x_659_; 
v___x_659_ = lean_st_ref_set(v___y_560_, v___x_658_);
v_a_592_ = v_fst_646_;
goto v___jp_591_;
}
}
}
v___jp_663_:
{
lean_object* v_snd_665_; lean_object* v_fst_666_; lean_object* v_mctx_667_; uint8_t v___x_668_; 
v_snd_665_ = lean_ctor_get(v___y_664_, 1);
lean_inc(v_snd_665_);
v_fst_666_ = lean_ctor_get(v___y_664_, 0);
lean_inc(v_fst_666_);
lean_dec_ref(v___y_664_);
v_mctx_667_ = lean_ctor_get(v_snd_665_, 1);
lean_inc_ref(v_mctx_667_);
lean_dec(v_snd_665_);
v___x_668_ = lean_unbox(v_fst_666_);
lean_dec(v_fst_666_);
v_fst_646_ = v___x_668_;
v_mctx_647_ = v_mctx_667_;
goto v___jp_645_;
}
}
}
v___jp_571_:
{
lean_object* v___x_574_; 
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 1, v_a_572_);
lean_ctor_set(v___x_568_, 0, v___x_570_);
v___x_574_ = v___x_568_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_570_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v_a_572_);
v___x_574_ = v_reuseFailAlloc_578_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
size_t v___x_575_; size_t v___x_576_; lean_object* v___x_577_; 
v___x_575_ = ((size_t)1ULL);
v___x_576_ = lean_usize_add(v_i_557_, v___x_575_);
v___x_577_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(v_ignoreLetDecls_553_, v_forbidden_554_, v_as_555_, v_sz_556_, v___x_576_, v___x_574_, v___y_560_, v___y_562_);
return v___x_577_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2___boxed(lean_object* v_ignoreLetDecls_733_, lean_object* v_forbidden_734_, lean_object* v_as_735_, lean_object* v_sz_736_, lean_object* v_i_737_, lean_object* v_b_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_744_; size_t v_sz_boxed_745_; size_t v_i_boxed_746_; lean_object* v_res_747_; 
v_ignoreLetDecls_boxed_744_ = lean_unbox(v_ignoreLetDecls_733_);
v_sz_boxed_745_ = lean_unbox_usize(v_sz_736_);
lean_dec(v_sz_736_);
v_i_boxed_746_ = lean_unbox_usize(v_i_737_);
lean_dec(v_i_737_);
v_res_747_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2(v_ignoreLetDecls_boxed_744_, v_forbidden_734_, v_as_735_, v_sz_boxed_745_, v_i_boxed_746_, v_b_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
lean_dec_ref(v_as_735_);
lean_dec(v_forbidden_734_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(lean_object* v_init_748_, uint8_t v_ignoreLetDecls_749_, lean_object* v_forbidden_750_, lean_object* v_n_751_, lean_object* v_b_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
if (lean_obj_tag(v_n_751_) == 0)
{
lean_object* v_cs_758_; lean_object* v___x_759_; lean_object* v___x_760_; size_t v_sz_761_; size_t v___x_762_; lean_object* v___x_763_; 
v_cs_758_ = lean_ctor_get(v_n_751_, 0);
v___x_759_ = lean_box(0);
v___x_760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_760_, 0, v___x_759_);
lean_ctor_set(v___x_760_, 1, v_b_752_);
v_sz_761_ = lean_array_size(v_cs_758_);
v___x_762_ = ((size_t)0ULL);
v___x_763_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1(v_init_748_, v_ignoreLetDecls_749_, v_forbidden_750_, v_cs_758_, v_sz_761_, v___x_762_, v___x_760_, v___y_753_, v___y_754_, v___y_755_, v___y_756_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_778_; 
v_a_764_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_778_ == 0)
{
v___x_766_ = v___x_763_;
v_isShared_767_ = v_isSharedCheck_778_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_763_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_778_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v_fst_768_; 
v_fst_768_ = lean_ctor_get(v_a_764_, 0);
if (lean_obj_tag(v_fst_768_) == 0)
{
lean_object* v_snd_769_; lean_object* v___x_770_; lean_object* v___x_772_; 
v_snd_769_ = lean_ctor_get(v_a_764_, 1);
lean_inc(v_snd_769_);
lean_dec(v_a_764_);
v___x_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_770_, 0, v_snd_769_);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v___x_770_);
v___x_772_ = v___x_766_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v___x_770_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
else
{
lean_object* v_val_774_; lean_object* v___x_776_; 
lean_inc_ref(v_fst_768_);
lean_dec(v_a_764_);
v_val_774_ = lean_ctor_get(v_fst_768_, 0);
lean_inc(v_val_774_);
lean_dec_ref(v_fst_768_);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v_val_774_);
v___x_776_ = v___x_766_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_val_774_);
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
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
v_a_779_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_763_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_763_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
else
{
lean_object* v_vs_787_; lean_object* v___x_788_; lean_object* v___x_789_; size_t v_sz_790_; size_t v___x_791_; lean_object* v___x_792_; 
v_vs_787_ = lean_ctor_get(v_n_751_, 0);
v___x_788_ = lean_box(0);
v___x_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_789_, 0, v___x_788_);
lean_ctor_set(v___x_789_, 1, v_b_752_);
v_sz_790_ = lean_array_size(v_vs_787_);
v___x_791_ = ((size_t)0ULL);
v___x_792_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2(v_ignoreLetDecls_749_, v_forbidden_750_, v_vs_787_, v_sz_790_, v___x_791_, v___x_789_, v___y_753_, v___y_754_, v___y_755_, v___y_756_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_807_; 
v_a_793_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_807_ == 0)
{
v___x_795_ = v___x_792_;
v_isShared_796_ = v_isSharedCheck_807_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_dec(v___x_792_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_807_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v_fst_797_; 
v_fst_797_ = lean_ctor_get(v_a_793_, 0);
if (lean_obj_tag(v_fst_797_) == 0)
{
lean_object* v_snd_798_; lean_object* v___x_799_; lean_object* v___x_801_; 
v_snd_798_ = lean_ctor_get(v_a_793_, 1);
lean_inc(v_snd_798_);
lean_dec(v_a_793_);
v___x_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_799_, 0, v_snd_798_);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v___x_799_);
v___x_801_ = v___x_795_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v___x_799_);
v___x_801_ = v_reuseFailAlloc_802_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
return v___x_801_;
}
}
else
{
lean_object* v_val_803_; lean_object* v___x_805_; 
lean_inc_ref(v_fst_797_);
lean_dec(v_a_793_);
v_val_803_ = lean_ctor_get(v_fst_797_, 0);
lean_inc(v_val_803_);
lean_dec_ref(v_fst_797_);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v_val_803_);
v___x_805_ = v___x_795_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_val_803_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
else
{
lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_815_; 
v_a_808_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_815_ == 0)
{
v___x_810_ = v___x_792_;
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_792_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_813_; 
if (v_isShared_811_ == 0)
{
v___x_813_ = v___x_810_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_a_808_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1(lean_object* v_init_816_, uint8_t v_ignoreLetDecls_817_, lean_object* v_forbidden_818_, lean_object* v_as_819_, size_t v_sz_820_, size_t v_i_821_, lean_object* v_b_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
uint8_t v___x_828_; 
v___x_828_ = lean_usize_dec_lt(v_i_821_, v_sz_820_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; 
v___x_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_829_, 0, v_b_822_);
return v___x_829_;
}
else
{
lean_object* v_snd_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_864_; 
v_snd_830_ = lean_ctor_get(v_b_822_, 1);
v_isSharedCheck_864_ = !lean_is_exclusive(v_b_822_);
if (v_isSharedCheck_864_ == 0)
{
lean_object* v_unused_865_; 
v_unused_865_ = lean_ctor_get(v_b_822_, 0);
lean_dec(v_unused_865_);
v___x_832_ = v_b_822_;
v_isShared_833_ = v_isSharedCheck_864_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_snd_830_);
lean_dec(v_b_822_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_864_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v_a_834_; lean_object* v___x_835_; 
v_a_834_ = lean_array_uget_borrowed(v_as_819_, v_i_821_);
lean_inc(v_snd_830_);
v___x_835_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(v_init_816_, v_ignoreLetDecls_817_, v_forbidden_818_, v_a_834_, v_snd_830_, v___y_823_, v___y_824_, v___y_825_, v___y_826_);
if (lean_obj_tag(v___x_835_) == 0)
{
lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_855_; 
v_a_836_ = lean_ctor_get(v___x_835_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_855_ == 0)
{
v___x_838_ = v___x_835_;
v_isShared_839_ = v_isSharedCheck_855_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v___x_835_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_855_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
if (lean_obj_tag(v_a_836_) == 0)
{
lean_object* v___x_840_; lean_object* v___x_842_; 
v___x_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_840_, 0, v_a_836_);
if (v_isShared_833_ == 0)
{
lean_ctor_set(v___x_832_, 0, v___x_840_);
v___x_842_ = v___x_832_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_840_);
lean_ctor_set(v_reuseFailAlloc_846_, 1, v_snd_830_);
v___x_842_ = v_reuseFailAlloc_846_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
lean_object* v___x_844_; 
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 0, v___x_842_);
v___x_844_ = v___x_838_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v___x_842_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
else
{
lean_object* v_a_847_; lean_object* v___x_848_; lean_object* v___x_850_; 
lean_del_object(v___x_838_);
lean_dec(v_snd_830_);
v_a_847_ = lean_ctor_get(v_a_836_, 0);
lean_inc(v_a_847_);
lean_dec_ref(v_a_836_);
v___x_848_ = lean_box(0);
if (v_isShared_833_ == 0)
{
lean_ctor_set(v___x_832_, 1, v_a_847_);
lean_ctor_set(v___x_832_, 0, v___x_848_);
v___x_850_ = v___x_832_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v___x_848_);
lean_ctor_set(v_reuseFailAlloc_854_, 1, v_a_847_);
v___x_850_ = v_reuseFailAlloc_854_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
size_t v___x_851_; size_t v___x_852_; 
v___x_851_ = ((size_t)1ULL);
v___x_852_ = lean_usize_add(v_i_821_, v___x_851_);
v_i_821_ = v___x_852_;
v_b_822_ = v___x_850_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_863_; 
lean_del_object(v___x_832_);
lean_dec(v_snd_830_);
v_a_856_ = lean_ctor_get(v___x_835_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_863_ == 0)
{
v___x_858_ = v___x_835_;
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_835_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_a_856_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1___boxed(lean_object* v_init_866_, lean_object* v_ignoreLetDecls_867_, lean_object* v_forbidden_868_, lean_object* v_as_869_, lean_object* v_sz_870_, lean_object* v_i_871_, lean_object* v_b_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_878_; size_t v_sz_boxed_879_; size_t v_i_boxed_880_; lean_object* v_res_881_; 
v_ignoreLetDecls_boxed_878_ = lean_unbox(v_ignoreLetDecls_867_);
v_sz_boxed_879_ = lean_unbox_usize(v_sz_870_);
lean_dec(v_sz_870_);
v_i_boxed_880_ = lean_unbox_usize(v_i_871_);
lean_dec(v_i_871_);
v_res_881_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1(v_init_866_, v_ignoreLetDecls_boxed_878_, v_forbidden_868_, v_as_869_, v_sz_boxed_879_, v_i_boxed_880_, v_b_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_);
lean_dec(v___y_876_);
lean_dec_ref(v___y_875_);
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec_ref(v_as_869_);
lean_dec(v_forbidden_868_);
lean_dec_ref(v_init_866_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0___boxed(lean_object* v_init_882_, lean_object* v_ignoreLetDecls_883_, lean_object* v_forbidden_884_, lean_object* v_n_885_, lean_object* v_b_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_892_; lean_object* v_res_893_; 
v_ignoreLetDecls_boxed_892_ = lean_unbox(v_ignoreLetDecls_883_);
v_res_893_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(v_init_882_, v_ignoreLetDecls_boxed_892_, v_forbidden_884_, v_n_885_, v_b_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_);
lean_dec(v___y_890_);
lean_dec_ref(v___y_889_);
lean_dec(v___y_888_);
lean_dec_ref(v___y_887_);
lean_dec_ref(v_n_885_);
lean_dec(v_forbidden_884_);
lean_dec_ref(v_init_882_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(uint8_t v_ignoreLetDecls_894_, lean_object* v_forbidden_895_, lean_object* v_as_896_, size_t v_sz_897_, size_t v_i_898_, lean_object* v_b_899_, lean_object* v___y_900_, lean_object* v___y_901_){
_start:
{
uint8_t v___x_903_; 
v___x_903_ = lean_usize_dec_lt(v_i_898_, v_sz_897_);
if (v___x_903_ == 0)
{
lean_object* v___x_904_; 
v___x_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_904_, 0, v_b_899_);
return v___x_904_;
}
else
{
lean_object* v_snd_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_1070_; 
v_snd_905_ = lean_ctor_get(v_b_899_, 1);
v_isSharedCheck_1070_ = !lean_is_exclusive(v_b_899_);
if (v_isSharedCheck_1070_ == 0)
{
lean_object* v_unused_1071_; 
v_unused_1071_ = lean_ctor_get(v_b_899_, 0);
lean_dec(v_unused_1071_);
v___x_907_ = v_b_899_;
v_isShared_908_ = v_isSharedCheck_1070_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_snd_905_);
lean_dec(v_b_899_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_1070_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_909_; lean_object* v_a_911_; lean_object* v_a_918_; 
v___x_909_ = lean_box(0);
v_a_918_ = lean_array_uget_borrowed(v_as_896_, v_i_898_);
if (lean_obj_tag(v_a_918_) == 0)
{
v_a_911_ = v_snd_905_;
goto v___jp_910_;
}
else
{
lean_object* v_val_919_; lean_object* v_fst_920_; lean_object* v_snd_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_1069_; 
v_val_919_ = lean_ctor_get(v_a_918_, 0);
v_fst_920_ = lean_ctor_get(v_snd_905_, 0);
v_snd_921_ = lean_ctor_get(v_snd_905_, 1);
v_isSharedCheck_1069_ = !lean_is_exclusive(v_snd_905_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_923_ = v_snd_905_;
v_isShared_924_ = v_isSharedCheck_1069_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_snd_921_);
lean_inc(v_fst_920_);
lean_dec(v_snd_905_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_1069_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_929_; uint8_t v_a_931_; uint8_t v_fst_937_; lean_object* v_mctx_938_; lean_object* v___y_955_; uint8_t v_fst_961_; lean_object* v_snd_962_; lean_object* v___y_980_; uint8_t v_fst_985_; lean_object* v_mctx_986_; lean_object* v___y_1003_; uint8_t v___x_1008_; 
v___x_929_ = l_Lean_LocalDecl_fvarId(v_val_919_);
v___x_1008_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v___x_929_, v_forbidden_895_);
if (v___x_1008_ == 0)
{
lean_object* v___f_1009_; lean_object* v___y_1011_; lean_object* v___y_1012_; uint8_t v_fst_1013_; lean_object* v_snd_1014_; lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; uint8_t v___y_1027_; uint8_t v___y_1063_; uint8_t v___x_1065_; 
lean_inc(v_fst_920_);
v___f_1009_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1009_, 0, v_fst_920_);
v___x_1065_ = l_Lean_LocalDecl_isAuxDecl(v_val_919_);
if (v___x_1065_ == 0)
{
uint8_t v___x_1066_; uint8_t v___x_1067_; 
v___x_1066_ = l_Lean_LocalDecl_binderInfo(v_val_919_);
v___x_1067_ = l_Lean_BinderInfo_isInstImplicit(v___x_1066_);
v___y_1063_ = v___x_1067_;
goto v___jp_1062_;
}
else
{
v___y_1063_ = v___x_1065_;
goto v___jp_1062_;
}
v___jp_1010_:
{
if (v_fst_1013_ == 0)
{
uint8_t v___x_1015_; 
v___x_1015_ = l_Lean_Expr_hasFVar(v___y_1012_);
if (v___x_1015_ == 0)
{
uint8_t v___x_1016_; 
v___x_1016_ = l_Lean_Expr_hasMVar(v___y_1012_);
if (v___x_1016_ == 0)
{
lean_dec_ref(v___y_1012_);
lean_dec_ref(v___y_1011_);
lean_dec_ref(v___f_1009_);
v_fst_961_ = v___x_1016_;
v_snd_962_ = v_snd_1014_;
goto v___jp_960_;
}
else
{
lean_object* v___x_1017_; 
v___x_1017_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1009_, v___y_1011_, v___y_1012_, v_snd_1014_);
v___y_980_ = v___x_1017_;
goto v___jp_979_;
}
}
else
{
lean_object* v___x_1018_; 
v___x_1018_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1009_, v___y_1011_, v___y_1012_, v_snd_1014_);
v___y_980_ = v___x_1018_;
goto v___jp_979_;
}
}
else
{
lean_dec_ref(v___y_1012_);
lean_dec_ref(v___y_1011_);
lean_dec_ref(v___f_1009_);
v_fst_961_ = v_fst_1013_;
v_snd_962_ = v_snd_1014_;
goto v___jp_960_;
}
}
v___jp_1019_:
{
lean_object* v_fst_1023_; lean_object* v_snd_1024_; uint8_t v___x_1025_; 
v_fst_1023_ = lean_ctor_get(v___y_1022_, 0);
lean_inc(v_fst_1023_);
v_snd_1024_ = lean_ctor_get(v___y_1022_, 1);
lean_inc(v_snd_1024_);
lean_dec_ref(v___y_1022_);
v___x_1025_ = lean_unbox(v_fst_1023_);
lean_dec(v_fst_1023_);
v___y_1011_ = v___y_1020_;
v___y_1012_ = v___y_1021_;
v_fst_1013_ = v___x_1025_;
v_snd_1014_ = v_snd_1024_;
goto v___jp_1010_;
}
v___jp_1026_:
{
lean_object* v___x_1028_; lean_object* v___f_1029_; 
v___x_1028_ = lean_box(v___y_1027_);
v___f_1029_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1029_, 0, v___x_1028_);
if (lean_obj_tag(v_val_919_) == 0)
{
lean_object* v_type_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v_mctx_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; uint8_t v___x_1036_; 
v_type_1030_ = lean_ctor_get(v_val_919_, 3);
v___x_1031_ = lean_st_ref_get(v___y_901_);
lean_dec(v___x_1031_);
v___x_1032_ = lean_st_ref_get(v___y_900_);
v_mctx_1033_ = lean_ctor_get(v___x_1032_, 0);
lean_inc_ref_n(v_mctx_1033_, 2);
lean_dec(v___x_1032_);
v___x_1034_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_1035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1034_);
lean_ctor_set(v___x_1035_, 1, v_mctx_1033_);
v___x_1036_ = l_Lean_Expr_hasFVar(v_type_1030_);
if (v___x_1036_ == 0)
{
uint8_t v___x_1037_; 
v___x_1037_ = l_Lean_Expr_hasMVar(v_type_1030_);
if (v___x_1037_ == 0)
{
lean_dec_ref(v___x_1035_);
lean_dec_ref(v___f_1029_);
lean_dec_ref(v___f_1009_);
v_fst_937_ = v___x_1037_;
v_mctx_938_ = v_mctx_1033_;
goto v___jp_936_;
}
else
{
lean_object* v___x_1038_; 
lean_dec_ref(v_mctx_1033_);
lean_inc_ref(v_type_1030_);
v___x_1038_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1009_, v___f_1029_, v_type_1030_, v___x_1035_);
v___y_955_ = v___x_1038_;
goto v___jp_954_;
}
}
else
{
lean_object* v___x_1039_; 
lean_dec_ref(v_mctx_1033_);
lean_inc_ref(v_type_1030_);
v___x_1039_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1009_, v___f_1029_, v_type_1030_, v___x_1035_);
v___y_955_ = v___x_1039_;
goto v___jp_954_;
}
}
else
{
uint8_t v_nondep_1040_; 
v_nondep_1040_ = lean_ctor_get_uint8(v_val_919_, sizeof(void*)*5);
if (v_nondep_1040_ == 0)
{
lean_object* v_type_1041_; lean_object* v_value_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v_mctx_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; uint8_t v___x_1048_; 
v_type_1041_ = lean_ctor_get(v_val_919_, 3);
v_value_1042_ = lean_ctor_get(v_val_919_, 4);
v___x_1043_ = lean_st_ref_get(v___y_901_);
lean_dec(v___x_1043_);
v___x_1044_ = lean_st_ref_get(v___y_900_);
v_mctx_1045_ = lean_ctor_get(v___x_1044_, 0);
lean_inc_ref(v_mctx_1045_);
lean_dec(v___x_1044_);
v___x_1046_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_1047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1046_);
lean_ctor_set(v___x_1047_, 1, v_mctx_1045_);
v___x_1048_ = l_Lean_Expr_hasFVar(v_type_1041_);
if (v___x_1048_ == 0)
{
uint8_t v___x_1049_; 
v___x_1049_ = l_Lean_Expr_hasMVar(v_type_1041_);
if (v___x_1049_ == 0)
{
lean_inc_ref(v_value_1042_);
v___y_1011_ = v___f_1029_;
v___y_1012_ = v_value_1042_;
v_fst_1013_ = v___x_1049_;
v_snd_1014_ = v___x_1047_;
goto v___jp_1010_;
}
else
{
lean_object* v___x_1050_; 
lean_inc_ref(v_type_1041_);
lean_inc_ref(v___f_1029_);
lean_inc_ref(v___f_1009_);
v___x_1050_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1009_, v___f_1029_, v_type_1041_, v___x_1047_);
lean_inc_ref(v_value_1042_);
v___y_1020_ = v___f_1029_;
v___y_1021_ = v_value_1042_;
v___y_1022_ = v___x_1050_;
goto v___jp_1019_;
}
}
else
{
lean_object* v___x_1051_; 
lean_inc_ref(v_type_1041_);
lean_inc_ref(v___f_1029_);
lean_inc_ref(v___f_1009_);
v___x_1051_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1009_, v___f_1029_, v_type_1041_, v___x_1047_);
lean_inc_ref(v_value_1042_);
v___y_1020_ = v___f_1029_;
v___y_1021_ = v_value_1042_;
v___y_1022_ = v___x_1051_;
goto v___jp_1019_;
}
}
else
{
lean_object* v_type_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v_mctx_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; uint8_t v___x_1058_; 
v_type_1052_ = lean_ctor_get(v_val_919_, 3);
v___x_1053_ = lean_st_ref_get(v___y_901_);
lean_dec(v___x_1053_);
v___x_1054_ = lean_st_ref_get(v___y_900_);
v_mctx_1055_ = lean_ctor_get(v___x_1054_, 0);
lean_inc_ref_n(v_mctx_1055_, 2);
lean_dec(v___x_1054_);
v___x_1056_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_1057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1056_);
lean_ctor_set(v___x_1057_, 1, v_mctx_1055_);
v___x_1058_ = l_Lean_Expr_hasFVar(v_type_1052_);
if (v___x_1058_ == 0)
{
uint8_t v___x_1059_; 
v___x_1059_ = l_Lean_Expr_hasMVar(v_type_1052_);
if (v___x_1059_ == 0)
{
lean_dec_ref(v___x_1057_);
lean_dec_ref(v___f_1029_);
lean_dec_ref(v___f_1009_);
v_fst_985_ = v___x_1059_;
v_mctx_986_ = v_mctx_1055_;
goto v___jp_984_;
}
else
{
lean_object* v___x_1060_; 
lean_dec_ref(v_mctx_1055_);
lean_inc_ref(v_type_1052_);
v___x_1060_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1009_, v___f_1029_, v_type_1052_, v___x_1057_);
v___y_1003_ = v___x_1060_;
goto v___jp_1002_;
}
}
else
{
lean_object* v___x_1061_; 
lean_dec_ref(v_mctx_1055_);
lean_inc_ref(v_type_1052_);
v___x_1061_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1009_, v___f_1029_, v_type_1052_, v___x_1057_);
v___y_1003_ = v___x_1061_;
goto v___jp_1002_;
}
}
}
}
v___jp_1062_:
{
if (v___y_1063_ == 0)
{
if (v_ignoreLetDecls_894_ == 0)
{
lean_del_object(v___x_923_);
v___y_1027_ = v_ignoreLetDecls_894_;
goto v___jp_1026_;
}
else
{
uint8_t v___x_1064_; 
v___x_1064_ = l_Lean_LocalDecl_isLet(v_val_919_, v___y_1063_);
if (v___x_1064_ == 0)
{
lean_del_object(v___x_923_);
v___y_1027_ = v___x_1064_;
goto v___jp_1026_;
}
else
{
lean_dec_ref(v___f_1009_);
lean_dec(v___x_929_);
goto v___jp_925_;
}
}
}
else
{
lean_dec_ref(v___f_1009_);
lean_dec(v___x_929_);
goto v___jp_925_;
}
}
}
else
{
lean_object* v___x_1068_; 
lean_dec(v___x_929_);
lean_del_object(v___x_923_);
v___x_1068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1068_, 0, v_fst_920_);
lean_ctor_set(v___x_1068_, 1, v_snd_921_);
v_a_911_ = v___x_1068_;
goto v___jp_910_;
}
v___jp_925_:
{
lean_object* v___x_927_; 
if (v_isShared_924_ == 0)
{
v___x_927_ = v___x_923_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_fst_920_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v_snd_921_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
v_a_911_ = v___x_927_;
goto v___jp_910_;
}
}
v___jp_930_:
{
if (v_a_931_ == 0)
{
lean_object* v___x_932_; 
lean_dec(v___x_929_);
v___x_932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_932_, 0, v_fst_920_);
lean_ctor_set(v___x_932_, 1, v_snd_921_);
v_a_911_ = v___x_932_;
goto v___jp_910_;
}
else
{
lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
lean_inc(v___x_929_);
v___x_933_ = l_Lean_FVarIdSet_insert(v_snd_921_, v___x_929_);
v___x_934_ = l_Lean_FVarIdSet_insert(v_fst_920_, v___x_929_);
v___x_935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_935_, 0, v___x_934_);
lean_ctor_set(v___x_935_, 1, v___x_933_);
v_a_911_ = v___x_935_;
goto v___jp_910_;
}
}
v___jp_936_:
{
lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v_cache_941_; lean_object* v_zetaDeltaFVarIds_942_; lean_object* v_postponed_943_; lean_object* v_diag_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_952_; 
v___x_939_ = lean_st_ref_get(v___y_901_);
lean_dec(v___x_939_);
v___x_940_ = lean_st_ref_take(v___y_900_);
v_cache_941_ = lean_ctor_get(v___x_940_, 1);
v_zetaDeltaFVarIds_942_ = lean_ctor_get(v___x_940_, 2);
v_postponed_943_ = lean_ctor_get(v___x_940_, 3);
v_diag_944_ = lean_ctor_get(v___x_940_, 4);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_952_ == 0)
{
lean_object* v_unused_953_; 
v_unused_953_ = lean_ctor_get(v___x_940_, 0);
lean_dec(v_unused_953_);
v___x_946_ = v___x_940_;
v_isShared_947_ = v_isSharedCheck_952_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_diag_944_);
lean_inc(v_postponed_943_);
lean_inc(v_zetaDeltaFVarIds_942_);
lean_inc(v_cache_941_);
lean_dec(v___x_940_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_952_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 0, v_mctx_938_);
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_mctx_938_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v_cache_941_);
lean_ctor_set(v_reuseFailAlloc_951_, 2, v_zetaDeltaFVarIds_942_);
lean_ctor_set(v_reuseFailAlloc_951_, 3, v_postponed_943_);
lean_ctor_set(v_reuseFailAlloc_951_, 4, v_diag_944_);
v___x_949_ = v_reuseFailAlloc_951_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
lean_object* v___x_950_; 
v___x_950_ = lean_st_ref_set(v___y_900_, v___x_949_);
v_a_931_ = v_fst_937_;
goto v___jp_930_;
}
}
}
v___jp_954_:
{
lean_object* v_snd_956_; lean_object* v_fst_957_; lean_object* v_mctx_958_; uint8_t v___x_959_; 
v_snd_956_ = lean_ctor_get(v___y_955_, 1);
lean_inc(v_snd_956_);
v_fst_957_ = lean_ctor_get(v___y_955_, 0);
lean_inc(v_fst_957_);
lean_dec_ref(v___y_955_);
v_mctx_958_ = lean_ctor_get(v_snd_956_, 1);
lean_inc_ref(v_mctx_958_);
lean_dec(v_snd_956_);
v___x_959_ = lean_unbox(v_fst_957_);
lean_dec(v_fst_957_);
v_fst_937_ = v___x_959_;
v_mctx_938_ = v_mctx_958_;
goto v___jp_936_;
}
v___jp_960_:
{
lean_object* v_mctx_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v_cache_966_; lean_object* v_zetaDeltaFVarIds_967_; lean_object* v_postponed_968_; lean_object* v_diag_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_977_; 
v_mctx_963_ = lean_ctor_get(v_snd_962_, 1);
lean_inc_ref(v_mctx_963_);
lean_dec_ref(v_snd_962_);
v___x_964_ = lean_st_ref_get(v___y_901_);
lean_dec(v___x_964_);
v___x_965_ = lean_st_ref_take(v___y_900_);
v_cache_966_ = lean_ctor_get(v___x_965_, 1);
v_zetaDeltaFVarIds_967_ = lean_ctor_get(v___x_965_, 2);
v_postponed_968_ = lean_ctor_get(v___x_965_, 3);
v_diag_969_ = lean_ctor_get(v___x_965_, 4);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_977_ == 0)
{
lean_object* v_unused_978_; 
v_unused_978_ = lean_ctor_get(v___x_965_, 0);
lean_dec(v_unused_978_);
v___x_971_ = v___x_965_;
v_isShared_972_ = v_isSharedCheck_977_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_diag_969_);
lean_inc(v_postponed_968_);
lean_inc(v_zetaDeltaFVarIds_967_);
lean_inc(v_cache_966_);
lean_dec(v___x_965_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_977_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_974_; 
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 0, v_mctx_963_);
v___x_974_ = v___x_971_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_mctx_963_);
lean_ctor_set(v_reuseFailAlloc_976_, 1, v_cache_966_);
lean_ctor_set(v_reuseFailAlloc_976_, 2, v_zetaDeltaFVarIds_967_);
lean_ctor_set(v_reuseFailAlloc_976_, 3, v_postponed_968_);
lean_ctor_set(v_reuseFailAlloc_976_, 4, v_diag_969_);
v___x_974_ = v_reuseFailAlloc_976_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
lean_object* v___x_975_; 
v___x_975_ = lean_st_ref_set(v___y_900_, v___x_974_);
v_a_931_ = v_fst_961_;
goto v___jp_930_;
}
}
}
v___jp_979_:
{
lean_object* v_fst_981_; lean_object* v_snd_982_; uint8_t v___x_983_; 
v_fst_981_ = lean_ctor_get(v___y_980_, 0);
lean_inc(v_fst_981_);
v_snd_982_ = lean_ctor_get(v___y_980_, 1);
lean_inc(v_snd_982_);
lean_dec_ref(v___y_980_);
v___x_983_ = lean_unbox(v_fst_981_);
lean_dec(v_fst_981_);
v_fst_961_ = v___x_983_;
v_snd_962_ = v_snd_982_;
goto v___jp_960_;
}
v___jp_984_:
{
lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v_cache_989_; lean_object* v_zetaDeltaFVarIds_990_; lean_object* v_postponed_991_; lean_object* v_diag_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1000_; 
v___x_987_ = lean_st_ref_get(v___y_901_);
lean_dec(v___x_987_);
v___x_988_ = lean_st_ref_take(v___y_900_);
v_cache_989_ = lean_ctor_get(v___x_988_, 1);
v_zetaDeltaFVarIds_990_ = lean_ctor_get(v___x_988_, 2);
v_postponed_991_ = lean_ctor_get(v___x_988_, 3);
v_diag_992_ = lean_ctor_get(v___x_988_, 4);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_1000_ == 0)
{
lean_object* v_unused_1001_; 
v_unused_1001_ = lean_ctor_get(v___x_988_, 0);
lean_dec(v_unused_1001_);
v___x_994_ = v___x_988_;
v_isShared_995_ = v_isSharedCheck_1000_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_diag_992_);
lean_inc(v_postponed_991_);
lean_inc(v_zetaDeltaFVarIds_990_);
lean_inc(v_cache_989_);
lean_dec(v___x_988_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1000_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_997_; 
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 0, v_mctx_986_);
v___x_997_ = v___x_994_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v_mctx_986_);
lean_ctor_set(v_reuseFailAlloc_999_, 1, v_cache_989_);
lean_ctor_set(v_reuseFailAlloc_999_, 2, v_zetaDeltaFVarIds_990_);
lean_ctor_set(v_reuseFailAlloc_999_, 3, v_postponed_991_);
lean_ctor_set(v_reuseFailAlloc_999_, 4, v_diag_992_);
v___x_997_ = v_reuseFailAlloc_999_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
lean_object* v___x_998_; 
v___x_998_ = lean_st_ref_set(v___y_900_, v___x_997_);
v_a_931_ = v_fst_985_;
goto v___jp_930_;
}
}
}
v___jp_1002_:
{
lean_object* v_snd_1004_; lean_object* v_fst_1005_; lean_object* v_mctx_1006_; uint8_t v___x_1007_; 
v_snd_1004_ = lean_ctor_get(v___y_1003_, 1);
lean_inc(v_snd_1004_);
v_fst_1005_ = lean_ctor_get(v___y_1003_, 0);
lean_inc(v_fst_1005_);
lean_dec_ref(v___y_1003_);
v_mctx_1006_ = lean_ctor_get(v_snd_1004_, 1);
lean_inc_ref(v_mctx_1006_);
lean_dec(v_snd_1004_);
v___x_1007_ = lean_unbox(v_fst_1005_);
lean_dec(v_fst_1005_);
v_fst_985_ = v___x_1007_;
v_mctx_986_ = v_mctx_1006_;
goto v___jp_984_;
}
}
}
v___jp_910_:
{
lean_object* v___x_913_; 
if (v_isShared_908_ == 0)
{
lean_ctor_set(v___x_907_, 1, v_a_911_);
lean_ctor_set(v___x_907_, 0, v___x_909_);
v___x_913_ = v___x_907_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v___x_909_);
lean_ctor_set(v_reuseFailAlloc_917_, 1, v_a_911_);
v___x_913_ = v_reuseFailAlloc_917_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
size_t v___x_914_; size_t v___x_915_; 
v___x_914_ = ((size_t)1ULL);
v___x_915_ = lean_usize_add(v_i_898_, v___x_914_);
v_i_898_ = v___x_915_;
v_b_899_ = v___x_913_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ignoreLetDecls_1072_, lean_object* v_forbidden_1073_, lean_object* v_as_1074_, lean_object* v_sz_1075_, lean_object* v_i_1076_, lean_object* v_b_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1081_; size_t v_sz_boxed_1082_; size_t v_i_boxed_1083_; lean_object* v_res_1084_; 
v_ignoreLetDecls_boxed_1081_ = lean_unbox(v_ignoreLetDecls_1072_);
v_sz_boxed_1082_ = lean_unbox_usize(v_sz_1075_);
lean_dec(v_sz_1075_);
v_i_boxed_1083_ = lean_unbox_usize(v_i_1076_);
lean_dec(v_i_1076_);
v_res_1084_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(v_ignoreLetDecls_boxed_1081_, v_forbidden_1073_, v_as_1074_, v_sz_boxed_1082_, v_i_boxed_1083_, v_b_1077_, v___y_1078_, v___y_1079_);
lean_dec(v___y_1079_);
lean_dec(v___y_1078_);
lean_dec_ref(v_as_1074_);
lean_dec(v_forbidden_1073_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1(uint8_t v_ignoreLetDecls_1085_, lean_object* v_forbidden_1086_, lean_object* v_as_1087_, size_t v_sz_1088_, size_t v_i_1089_, lean_object* v_b_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_){
_start:
{
uint8_t v___x_1096_; 
v___x_1096_ = lean_usize_dec_lt(v_i_1089_, v_sz_1088_);
if (v___x_1096_ == 0)
{
lean_object* v___x_1097_; 
v___x_1097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1097_, 0, v_b_1090_);
return v___x_1097_;
}
else
{
lean_object* v_snd_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1263_; 
v_snd_1098_ = lean_ctor_get(v_b_1090_, 1);
v_isSharedCheck_1263_ = !lean_is_exclusive(v_b_1090_);
if (v_isSharedCheck_1263_ == 0)
{
lean_object* v_unused_1264_; 
v_unused_1264_ = lean_ctor_get(v_b_1090_, 0);
lean_dec(v_unused_1264_);
v___x_1100_ = v_b_1090_;
v_isShared_1101_ = v_isSharedCheck_1263_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_snd_1098_);
lean_dec(v_b_1090_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1263_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___x_1102_; lean_object* v_a_1104_; lean_object* v_a_1111_; 
v___x_1102_ = lean_box(0);
v_a_1111_ = lean_array_uget_borrowed(v_as_1087_, v_i_1089_);
if (lean_obj_tag(v_a_1111_) == 0)
{
v_a_1104_ = v_snd_1098_;
goto v___jp_1103_;
}
else
{
lean_object* v_val_1112_; lean_object* v_fst_1113_; lean_object* v_snd_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1262_; 
v_val_1112_ = lean_ctor_get(v_a_1111_, 0);
v_fst_1113_ = lean_ctor_get(v_snd_1098_, 0);
v_snd_1114_ = lean_ctor_get(v_snd_1098_, 1);
v_isSharedCheck_1262_ = !lean_is_exclusive(v_snd_1098_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1116_ = v_snd_1098_;
v_isShared_1117_ = v_isSharedCheck_1262_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_snd_1114_);
lean_inc(v_fst_1113_);
lean_dec(v_snd_1098_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1262_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1122_; uint8_t v_a_1124_; uint8_t v_fst_1130_; lean_object* v_mctx_1131_; lean_object* v___y_1148_; uint8_t v_fst_1154_; lean_object* v_snd_1155_; lean_object* v___y_1173_; uint8_t v_fst_1178_; lean_object* v_mctx_1179_; lean_object* v___y_1196_; uint8_t v___x_1201_; 
v___x_1122_ = l_Lean_LocalDecl_fvarId(v_val_1112_);
v___x_1201_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v___x_1122_, v_forbidden_1086_);
if (v___x_1201_ == 0)
{
lean_object* v___f_1202_; lean_object* v___y_1204_; lean_object* v___y_1205_; uint8_t v_fst_1206_; lean_object* v_snd_1207_; lean_object* v___y_1213_; lean_object* v___y_1214_; lean_object* v___y_1215_; uint8_t v___y_1220_; uint8_t v___y_1256_; uint8_t v___x_1258_; 
lean_inc(v_fst_1113_);
v___f_1202_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1202_, 0, v_fst_1113_);
v___x_1258_ = l_Lean_LocalDecl_isAuxDecl(v_val_1112_);
if (v___x_1258_ == 0)
{
uint8_t v___x_1259_; uint8_t v___x_1260_; 
v___x_1259_ = l_Lean_LocalDecl_binderInfo(v_val_1112_);
v___x_1260_ = l_Lean_BinderInfo_isInstImplicit(v___x_1259_);
v___y_1256_ = v___x_1260_;
goto v___jp_1255_;
}
else
{
v___y_1256_ = v___x_1258_;
goto v___jp_1255_;
}
v___jp_1203_:
{
if (v_fst_1206_ == 0)
{
uint8_t v___x_1208_; 
v___x_1208_ = l_Lean_Expr_hasFVar(v___y_1205_);
if (v___x_1208_ == 0)
{
uint8_t v___x_1209_; 
v___x_1209_ = l_Lean_Expr_hasMVar(v___y_1205_);
if (v___x_1209_ == 0)
{
lean_dec_ref(v___y_1205_);
lean_dec_ref(v___y_1204_);
lean_dec_ref(v___f_1202_);
v_fst_1154_ = v___x_1209_;
v_snd_1155_ = v_snd_1207_;
goto v___jp_1153_;
}
else
{
lean_object* v___x_1210_; 
v___x_1210_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1202_, v___y_1204_, v___y_1205_, v_snd_1207_);
v___y_1173_ = v___x_1210_;
goto v___jp_1172_;
}
}
else
{
lean_object* v___x_1211_; 
v___x_1211_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1202_, v___y_1204_, v___y_1205_, v_snd_1207_);
v___y_1173_ = v___x_1211_;
goto v___jp_1172_;
}
}
else
{
lean_dec_ref(v___y_1205_);
lean_dec_ref(v___y_1204_);
lean_dec_ref(v___f_1202_);
v_fst_1154_ = v_fst_1206_;
v_snd_1155_ = v_snd_1207_;
goto v___jp_1153_;
}
}
v___jp_1212_:
{
lean_object* v_fst_1216_; lean_object* v_snd_1217_; uint8_t v___x_1218_; 
v_fst_1216_ = lean_ctor_get(v___y_1215_, 0);
lean_inc(v_fst_1216_);
v_snd_1217_ = lean_ctor_get(v___y_1215_, 1);
lean_inc(v_snd_1217_);
lean_dec_ref(v___y_1215_);
v___x_1218_ = lean_unbox(v_fst_1216_);
lean_dec(v_fst_1216_);
v___y_1204_ = v___y_1213_;
v___y_1205_ = v___y_1214_;
v_fst_1206_ = v___x_1218_;
v_snd_1207_ = v_snd_1217_;
goto v___jp_1203_;
}
v___jp_1219_:
{
lean_object* v___x_1221_; lean_object* v___f_1222_; 
v___x_1221_ = lean_box(v___y_1220_);
v___f_1222_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1222_, 0, v___x_1221_);
if (lean_obj_tag(v_val_1112_) == 0)
{
lean_object* v_type_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v_mctx_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; uint8_t v___x_1229_; 
v_type_1223_ = lean_ctor_get(v_val_1112_, 3);
v___x_1224_ = lean_st_ref_get(v___y_1094_);
lean_dec(v___x_1224_);
v___x_1225_ = lean_st_ref_get(v___y_1092_);
v_mctx_1226_ = lean_ctor_get(v___x_1225_, 0);
lean_inc_ref_n(v_mctx_1226_, 2);
lean_dec(v___x_1225_);
v___x_1227_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_1228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1227_);
lean_ctor_set(v___x_1228_, 1, v_mctx_1226_);
v___x_1229_ = l_Lean_Expr_hasFVar(v_type_1223_);
if (v___x_1229_ == 0)
{
uint8_t v___x_1230_; 
v___x_1230_ = l_Lean_Expr_hasMVar(v_type_1223_);
if (v___x_1230_ == 0)
{
lean_dec_ref(v___x_1228_);
lean_dec_ref(v___f_1222_);
lean_dec_ref(v___f_1202_);
v_fst_1130_ = v___x_1230_;
v_mctx_1131_ = v_mctx_1226_;
goto v___jp_1129_;
}
else
{
lean_object* v___x_1231_; 
lean_dec_ref(v_mctx_1226_);
lean_inc_ref(v_type_1223_);
v___x_1231_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1202_, v___f_1222_, v_type_1223_, v___x_1228_);
v___y_1148_ = v___x_1231_;
goto v___jp_1147_;
}
}
else
{
lean_object* v___x_1232_; 
lean_dec_ref(v_mctx_1226_);
lean_inc_ref(v_type_1223_);
v___x_1232_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1202_, v___f_1222_, v_type_1223_, v___x_1228_);
v___y_1148_ = v___x_1232_;
goto v___jp_1147_;
}
}
else
{
uint8_t v_nondep_1233_; 
v_nondep_1233_ = lean_ctor_get_uint8(v_val_1112_, sizeof(void*)*5);
if (v_nondep_1233_ == 0)
{
lean_object* v_type_1234_; lean_object* v_value_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v_mctx_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; uint8_t v___x_1241_; 
v_type_1234_ = lean_ctor_get(v_val_1112_, 3);
v_value_1235_ = lean_ctor_get(v_val_1112_, 4);
v___x_1236_ = lean_st_ref_get(v___y_1094_);
lean_dec(v___x_1236_);
v___x_1237_ = lean_st_ref_get(v___y_1092_);
v_mctx_1238_ = lean_ctor_get(v___x_1237_, 0);
lean_inc_ref(v_mctx_1238_);
lean_dec(v___x_1237_);
v___x_1239_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_1240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1239_);
lean_ctor_set(v___x_1240_, 1, v_mctx_1238_);
v___x_1241_ = l_Lean_Expr_hasFVar(v_type_1234_);
if (v___x_1241_ == 0)
{
uint8_t v___x_1242_; 
v___x_1242_ = l_Lean_Expr_hasMVar(v_type_1234_);
if (v___x_1242_ == 0)
{
lean_inc_ref(v_value_1235_);
v___y_1204_ = v___f_1222_;
v___y_1205_ = v_value_1235_;
v_fst_1206_ = v___x_1242_;
v_snd_1207_ = v___x_1240_;
goto v___jp_1203_;
}
else
{
lean_object* v___x_1243_; 
lean_inc_ref(v_type_1234_);
lean_inc_ref(v___f_1222_);
lean_inc_ref(v___f_1202_);
v___x_1243_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1202_, v___f_1222_, v_type_1234_, v___x_1240_);
lean_inc_ref(v_value_1235_);
v___y_1213_ = v___f_1222_;
v___y_1214_ = v_value_1235_;
v___y_1215_ = v___x_1243_;
goto v___jp_1212_;
}
}
else
{
lean_object* v___x_1244_; 
lean_inc_ref(v_type_1234_);
lean_inc_ref(v___f_1222_);
lean_inc_ref(v___f_1202_);
v___x_1244_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1202_, v___f_1222_, v_type_1234_, v___x_1240_);
lean_inc_ref(v_value_1235_);
v___y_1213_ = v___f_1222_;
v___y_1214_ = v_value_1235_;
v___y_1215_ = v___x_1244_;
goto v___jp_1212_;
}
}
else
{
lean_object* v_type_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v_mctx_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; uint8_t v___x_1251_; 
v_type_1245_ = lean_ctor_get(v_val_1112_, 3);
v___x_1246_ = lean_st_ref_get(v___y_1094_);
lean_dec(v___x_1246_);
v___x_1247_ = lean_st_ref_get(v___y_1092_);
v_mctx_1248_ = lean_ctor_get(v___x_1247_, 0);
lean_inc_ref_n(v_mctx_1248_, 2);
lean_dec(v___x_1247_);
v___x_1249_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_1250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1249_);
lean_ctor_set(v___x_1250_, 1, v_mctx_1248_);
v___x_1251_ = l_Lean_Expr_hasFVar(v_type_1245_);
if (v___x_1251_ == 0)
{
uint8_t v___x_1252_; 
v___x_1252_ = l_Lean_Expr_hasMVar(v_type_1245_);
if (v___x_1252_ == 0)
{
lean_dec_ref(v___x_1250_);
lean_dec_ref(v___f_1222_);
lean_dec_ref(v___f_1202_);
v_fst_1178_ = v___x_1252_;
v_mctx_1179_ = v_mctx_1248_;
goto v___jp_1177_;
}
else
{
lean_object* v___x_1253_; 
lean_dec_ref(v_mctx_1248_);
lean_inc_ref(v_type_1245_);
v___x_1253_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1202_, v___f_1222_, v_type_1245_, v___x_1250_);
v___y_1196_ = v___x_1253_;
goto v___jp_1195_;
}
}
else
{
lean_object* v___x_1254_; 
lean_dec_ref(v_mctx_1248_);
lean_inc_ref(v_type_1245_);
v___x_1254_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1202_, v___f_1222_, v_type_1245_, v___x_1250_);
v___y_1196_ = v___x_1254_;
goto v___jp_1195_;
}
}
}
}
v___jp_1255_:
{
if (v___y_1256_ == 0)
{
if (v_ignoreLetDecls_1085_ == 0)
{
lean_del_object(v___x_1116_);
v___y_1220_ = v_ignoreLetDecls_1085_;
goto v___jp_1219_;
}
else
{
uint8_t v___x_1257_; 
v___x_1257_ = l_Lean_LocalDecl_isLet(v_val_1112_, v___y_1256_);
if (v___x_1257_ == 0)
{
lean_del_object(v___x_1116_);
v___y_1220_ = v___x_1257_;
goto v___jp_1219_;
}
else
{
lean_dec_ref(v___f_1202_);
lean_dec(v___x_1122_);
goto v___jp_1118_;
}
}
}
else
{
lean_dec_ref(v___f_1202_);
lean_dec(v___x_1122_);
goto v___jp_1118_;
}
}
}
else
{
lean_object* v___x_1261_; 
lean_dec(v___x_1122_);
lean_del_object(v___x_1116_);
v___x_1261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1261_, 0, v_fst_1113_);
lean_ctor_set(v___x_1261_, 1, v_snd_1114_);
v_a_1104_ = v___x_1261_;
goto v___jp_1103_;
}
v___jp_1118_:
{
lean_object* v___x_1120_; 
if (v_isShared_1117_ == 0)
{
v___x_1120_ = v___x_1116_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_fst_1113_);
lean_ctor_set(v_reuseFailAlloc_1121_, 1, v_snd_1114_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
v_a_1104_ = v___x_1120_;
goto v___jp_1103_;
}
}
v___jp_1123_:
{
if (v_a_1124_ == 0)
{
lean_object* v___x_1125_; 
lean_dec(v___x_1122_);
v___x_1125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1125_, 0, v_fst_1113_);
lean_ctor_set(v___x_1125_, 1, v_snd_1114_);
v_a_1104_ = v___x_1125_;
goto v___jp_1103_;
}
else
{
lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
lean_inc(v___x_1122_);
v___x_1126_ = l_Lean_FVarIdSet_insert(v_snd_1114_, v___x_1122_);
v___x_1127_ = l_Lean_FVarIdSet_insert(v_fst_1113_, v___x_1122_);
v___x_1128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1127_);
lean_ctor_set(v___x_1128_, 1, v___x_1126_);
v_a_1104_ = v___x_1128_;
goto v___jp_1103_;
}
}
v___jp_1129_:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v_cache_1134_; lean_object* v_zetaDeltaFVarIds_1135_; lean_object* v_postponed_1136_; lean_object* v_diag_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1145_; 
v___x_1132_ = lean_st_ref_get(v___y_1094_);
lean_dec(v___x_1132_);
v___x_1133_ = lean_st_ref_take(v___y_1092_);
v_cache_1134_ = lean_ctor_get(v___x_1133_, 1);
v_zetaDeltaFVarIds_1135_ = lean_ctor_get(v___x_1133_, 2);
v_postponed_1136_ = lean_ctor_get(v___x_1133_, 3);
v_diag_1137_ = lean_ctor_get(v___x_1133_, 4);
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1133_);
if (v_isSharedCheck_1145_ == 0)
{
lean_object* v_unused_1146_; 
v_unused_1146_ = lean_ctor_get(v___x_1133_, 0);
lean_dec(v_unused_1146_);
v___x_1139_ = v___x_1133_;
v_isShared_1140_ = v_isSharedCheck_1145_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_diag_1137_);
lean_inc(v_postponed_1136_);
lean_inc(v_zetaDeltaFVarIds_1135_);
lean_inc(v_cache_1134_);
lean_dec(v___x_1133_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1145_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1142_; 
if (v_isShared_1140_ == 0)
{
lean_ctor_set(v___x_1139_, 0, v_mctx_1131_);
v___x_1142_ = v___x_1139_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_mctx_1131_);
lean_ctor_set(v_reuseFailAlloc_1144_, 1, v_cache_1134_);
lean_ctor_set(v_reuseFailAlloc_1144_, 2, v_zetaDeltaFVarIds_1135_);
lean_ctor_set(v_reuseFailAlloc_1144_, 3, v_postponed_1136_);
lean_ctor_set(v_reuseFailAlloc_1144_, 4, v_diag_1137_);
v___x_1142_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
lean_object* v___x_1143_; 
v___x_1143_ = lean_st_ref_set(v___y_1092_, v___x_1142_);
v_a_1124_ = v_fst_1130_;
goto v___jp_1123_;
}
}
}
v___jp_1147_:
{
lean_object* v_snd_1149_; lean_object* v_fst_1150_; lean_object* v_mctx_1151_; uint8_t v___x_1152_; 
v_snd_1149_ = lean_ctor_get(v___y_1148_, 1);
lean_inc(v_snd_1149_);
v_fst_1150_ = lean_ctor_get(v___y_1148_, 0);
lean_inc(v_fst_1150_);
lean_dec_ref(v___y_1148_);
v_mctx_1151_ = lean_ctor_get(v_snd_1149_, 1);
lean_inc_ref(v_mctx_1151_);
lean_dec(v_snd_1149_);
v___x_1152_ = lean_unbox(v_fst_1150_);
lean_dec(v_fst_1150_);
v_fst_1130_ = v___x_1152_;
v_mctx_1131_ = v_mctx_1151_;
goto v___jp_1129_;
}
v___jp_1153_:
{
lean_object* v_mctx_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v_cache_1159_; lean_object* v_zetaDeltaFVarIds_1160_; lean_object* v_postponed_1161_; lean_object* v_diag_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1170_; 
v_mctx_1156_ = lean_ctor_get(v_snd_1155_, 1);
lean_inc_ref(v_mctx_1156_);
lean_dec_ref(v_snd_1155_);
v___x_1157_ = lean_st_ref_get(v___y_1094_);
lean_dec(v___x_1157_);
v___x_1158_ = lean_st_ref_take(v___y_1092_);
v_cache_1159_ = lean_ctor_get(v___x_1158_, 1);
v_zetaDeltaFVarIds_1160_ = lean_ctor_get(v___x_1158_, 2);
v_postponed_1161_ = lean_ctor_get(v___x_1158_, 3);
v_diag_1162_ = lean_ctor_get(v___x_1158_, 4);
v_isSharedCheck_1170_ = !lean_is_exclusive(v___x_1158_);
if (v_isSharedCheck_1170_ == 0)
{
lean_object* v_unused_1171_; 
v_unused_1171_ = lean_ctor_get(v___x_1158_, 0);
lean_dec(v_unused_1171_);
v___x_1164_ = v___x_1158_;
v_isShared_1165_ = v_isSharedCheck_1170_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_diag_1162_);
lean_inc(v_postponed_1161_);
lean_inc(v_zetaDeltaFVarIds_1160_);
lean_inc(v_cache_1159_);
lean_dec(v___x_1158_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1170_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1167_; 
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 0, v_mctx_1156_);
v___x_1167_ = v___x_1164_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_mctx_1156_);
lean_ctor_set(v_reuseFailAlloc_1169_, 1, v_cache_1159_);
lean_ctor_set(v_reuseFailAlloc_1169_, 2, v_zetaDeltaFVarIds_1160_);
lean_ctor_set(v_reuseFailAlloc_1169_, 3, v_postponed_1161_);
lean_ctor_set(v_reuseFailAlloc_1169_, 4, v_diag_1162_);
v___x_1167_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
lean_object* v___x_1168_; 
v___x_1168_ = lean_st_ref_set(v___y_1092_, v___x_1167_);
v_a_1124_ = v_fst_1154_;
goto v___jp_1123_;
}
}
}
v___jp_1172_:
{
lean_object* v_fst_1174_; lean_object* v_snd_1175_; uint8_t v___x_1176_; 
v_fst_1174_ = lean_ctor_get(v___y_1173_, 0);
lean_inc(v_fst_1174_);
v_snd_1175_ = lean_ctor_get(v___y_1173_, 1);
lean_inc(v_snd_1175_);
lean_dec_ref(v___y_1173_);
v___x_1176_ = lean_unbox(v_fst_1174_);
lean_dec(v_fst_1174_);
v_fst_1154_ = v___x_1176_;
v_snd_1155_ = v_snd_1175_;
goto v___jp_1153_;
}
v___jp_1177_:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v_cache_1182_; lean_object* v_zetaDeltaFVarIds_1183_; lean_object* v_postponed_1184_; lean_object* v_diag_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1193_; 
v___x_1180_ = lean_st_ref_get(v___y_1094_);
lean_dec(v___x_1180_);
v___x_1181_ = lean_st_ref_take(v___y_1092_);
v_cache_1182_ = lean_ctor_get(v___x_1181_, 1);
v_zetaDeltaFVarIds_1183_ = lean_ctor_get(v___x_1181_, 2);
v_postponed_1184_ = lean_ctor_get(v___x_1181_, 3);
v_diag_1185_ = lean_ctor_get(v___x_1181_, 4);
v_isSharedCheck_1193_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1193_ == 0)
{
lean_object* v_unused_1194_; 
v_unused_1194_ = lean_ctor_get(v___x_1181_, 0);
lean_dec(v_unused_1194_);
v___x_1187_ = v___x_1181_;
v_isShared_1188_ = v_isSharedCheck_1193_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_diag_1185_);
lean_inc(v_postponed_1184_);
lean_inc(v_zetaDeltaFVarIds_1183_);
lean_inc(v_cache_1182_);
lean_dec(v___x_1181_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1193_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1190_; 
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 0, v_mctx_1179_);
v___x_1190_ = v___x_1187_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_mctx_1179_);
lean_ctor_set(v_reuseFailAlloc_1192_, 1, v_cache_1182_);
lean_ctor_set(v_reuseFailAlloc_1192_, 2, v_zetaDeltaFVarIds_1183_);
lean_ctor_set(v_reuseFailAlloc_1192_, 3, v_postponed_1184_);
lean_ctor_set(v_reuseFailAlloc_1192_, 4, v_diag_1185_);
v___x_1190_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
lean_object* v___x_1191_; 
v___x_1191_ = lean_st_ref_set(v___y_1092_, v___x_1190_);
v_a_1124_ = v_fst_1178_;
goto v___jp_1123_;
}
}
}
v___jp_1195_:
{
lean_object* v_snd_1197_; lean_object* v_fst_1198_; lean_object* v_mctx_1199_; uint8_t v___x_1200_; 
v_snd_1197_ = lean_ctor_get(v___y_1196_, 1);
lean_inc(v_snd_1197_);
v_fst_1198_ = lean_ctor_get(v___y_1196_, 0);
lean_inc(v_fst_1198_);
lean_dec_ref(v___y_1196_);
v_mctx_1199_ = lean_ctor_get(v_snd_1197_, 1);
lean_inc_ref(v_mctx_1199_);
lean_dec(v_snd_1197_);
v___x_1200_ = lean_unbox(v_fst_1198_);
lean_dec(v_fst_1198_);
v_fst_1178_ = v___x_1200_;
v_mctx_1179_ = v_mctx_1199_;
goto v___jp_1177_;
}
}
}
v___jp_1103_:
{
lean_object* v___x_1106_; 
if (v_isShared_1101_ == 0)
{
lean_ctor_set(v___x_1100_, 1, v_a_1104_);
lean_ctor_set(v___x_1100_, 0, v___x_1102_);
v___x_1106_ = v___x_1100_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1102_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v_a_1104_);
v___x_1106_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
size_t v___x_1107_; size_t v___x_1108_; lean_object* v___x_1109_; 
v___x_1107_ = ((size_t)1ULL);
v___x_1108_ = lean_usize_add(v_i_1089_, v___x_1107_);
v___x_1109_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(v_ignoreLetDecls_1085_, v_forbidden_1086_, v_as_1087_, v_sz_1088_, v___x_1108_, v___x_1106_, v___y_1092_, v___y_1094_);
return v___x_1109_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___boxed(lean_object* v_ignoreLetDecls_1265_, lean_object* v_forbidden_1266_, lean_object* v_as_1267_, lean_object* v_sz_1268_, lean_object* v_i_1269_, lean_object* v_b_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1276_; size_t v_sz_boxed_1277_; size_t v_i_boxed_1278_; lean_object* v_res_1279_; 
v_ignoreLetDecls_boxed_1276_ = lean_unbox(v_ignoreLetDecls_1265_);
v_sz_boxed_1277_ = lean_unbox_usize(v_sz_1268_);
lean_dec(v_sz_1268_);
v_i_boxed_1278_ = lean_unbox_usize(v_i_1269_);
lean_dec(v_i_1269_);
v_res_1279_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1(v_ignoreLetDecls_boxed_1276_, v_forbidden_1266_, v_as_1267_, v_sz_boxed_1277_, v_i_boxed_1278_, v_b_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_);
lean_dec(v___y_1274_);
lean_dec_ref(v___y_1273_);
lean_dec(v___y_1272_);
lean_dec_ref(v___y_1271_);
lean_dec_ref(v_as_1267_);
lean_dec(v_forbidden_1266_);
return v_res_1279_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0(uint8_t v_ignoreLetDecls_1280_, lean_object* v_forbidden_1281_, lean_object* v_t_1282_, lean_object* v_init_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_){
_start:
{
lean_object* v_root_1289_; lean_object* v_tail_1290_; lean_object* v___x_1291_; 
v_root_1289_ = lean_ctor_get(v_t_1282_, 0);
v_tail_1290_ = lean_ctor_get(v_t_1282_, 1);
lean_inc_ref(v_init_1283_);
v___x_1291_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(v_init_1283_, v_ignoreLetDecls_1280_, v_forbidden_1281_, v_root_1289_, v_init_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_);
lean_dec_ref(v_init_1283_);
if (lean_obj_tag(v___x_1291_) == 0)
{
lean_object* v_a_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1328_; 
v_a_1292_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1328_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1294_ = v___x_1291_;
v_isShared_1295_ = v_isSharedCheck_1328_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_a_1292_);
lean_dec(v___x_1291_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1328_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
if (lean_obj_tag(v_a_1292_) == 0)
{
lean_object* v_a_1296_; lean_object* v___x_1298_; 
v_a_1296_ = lean_ctor_get(v_a_1292_, 0);
lean_inc(v_a_1296_);
lean_dec_ref(v_a_1292_);
if (v_isShared_1295_ == 0)
{
lean_ctor_set(v___x_1294_, 0, v_a_1296_);
v___x_1298_ = v___x_1294_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_a_1296_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
else
{
lean_object* v_a_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; size_t v_sz_1303_; size_t v___x_1304_; lean_object* v___x_1305_; 
lean_del_object(v___x_1294_);
v_a_1300_ = lean_ctor_get(v_a_1292_, 0);
lean_inc(v_a_1300_);
lean_dec_ref(v_a_1292_);
v___x_1301_ = lean_box(0);
v___x_1302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1301_);
lean_ctor_set(v___x_1302_, 1, v_a_1300_);
v_sz_1303_ = lean_array_size(v_tail_1290_);
v___x_1304_ = ((size_t)0ULL);
v___x_1305_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1(v_ignoreLetDecls_1280_, v_forbidden_1281_, v_tail_1290_, v_sz_1303_, v___x_1304_, v___x_1302_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_);
if (lean_obj_tag(v___x_1305_) == 0)
{
lean_object* v_a_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1319_; 
v_a_1306_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1308_ = v___x_1305_;
v_isShared_1309_ = v_isSharedCheck_1319_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_a_1306_);
lean_dec(v___x_1305_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1319_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v_fst_1310_; 
v_fst_1310_ = lean_ctor_get(v_a_1306_, 0);
if (lean_obj_tag(v_fst_1310_) == 0)
{
lean_object* v_snd_1311_; lean_object* v___x_1313_; 
v_snd_1311_ = lean_ctor_get(v_a_1306_, 1);
lean_inc(v_snd_1311_);
lean_dec(v_a_1306_);
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 0, v_snd_1311_);
v___x_1313_ = v___x_1308_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v_snd_1311_);
v___x_1313_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
return v___x_1313_;
}
}
else
{
lean_object* v_val_1315_; lean_object* v___x_1317_; 
lean_inc_ref(v_fst_1310_);
lean_dec(v_a_1306_);
v_val_1315_ = lean_ctor_get(v_fst_1310_, 0);
lean_inc(v_val_1315_);
lean_dec_ref(v_fst_1310_);
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 0, v_val_1315_);
v___x_1317_ = v___x_1308_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_val_1315_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
}
else
{
lean_object* v_a_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1327_; 
v_a_1320_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1327_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1327_ == 0)
{
v___x_1322_ = v___x_1305_;
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_a_1320_);
lean_dec(v___x_1305_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1325_; 
if (v_isShared_1323_ == 0)
{
v___x_1325_ = v___x_1322_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v_a_1320_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
return v___x_1325_;
}
}
}
}
}
}
else
{
lean_object* v_a_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1336_; 
v_a_1329_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1331_ = v___x_1291_;
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_a_1329_);
lean_dec(v___x_1291_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1334_; 
if (v_isShared_1332_ == 0)
{
v___x_1334_ = v___x_1331_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_a_1329_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
return v___x_1334_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0___boxed(lean_object* v_ignoreLetDecls_1337_, lean_object* v_forbidden_1338_, lean_object* v_t_1339_, lean_object* v_init_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1346_; lean_object* v_res_1347_; 
v_ignoreLetDecls_boxed_1346_ = lean_unbox(v_ignoreLetDecls_1337_);
v_res_1347_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0(v_ignoreLetDecls_boxed_1346_, v_forbidden_1338_, v_t_1339_, v_init_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
lean_dec(v___y_1342_);
lean_dec_ref(v___y_1341_);
lean_dec_ref(v_t_1339_);
lean_dec(v_forbidden_1338_);
return v_res_1347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarSetToGeneralize(lean_object* v_targets_1348_, lean_object* v_forbidden_1349_, uint8_t v_ignoreLetDecls_1350_, lean_object* v_a_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_){
_start:
{
lean_object* v_r_1356_; lean_object* v___y_1358_; lean_object* v___x_1380_; lean_object* v___x_1381_; uint8_t v___x_1382_; 
v_r_1356_ = lean_box(1);
v___x_1380_ = lean_unsigned_to_nat(0u);
v___x_1381_ = lean_array_get_size(v_targets_1348_);
v___x_1382_ = lean_nat_dec_lt(v___x_1380_, v___x_1381_);
if (v___x_1382_ == 0)
{
v___y_1358_ = v_r_1356_;
goto v___jp_1357_;
}
else
{
uint8_t v___x_1383_; 
v___x_1383_ = lean_nat_dec_le(v___x_1381_, v___x_1381_);
if (v___x_1383_ == 0)
{
if (v___x_1382_ == 0)
{
v___y_1358_ = v_r_1356_;
goto v___jp_1357_;
}
else
{
size_t v___x_1384_; size_t v___x_1385_; lean_object* v___x_1386_; 
v___x_1384_ = ((size_t)0ULL);
v___x_1385_ = lean_usize_of_nat(v___x_1381_);
v___x_1386_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(v_targets_1348_, v___x_1384_, v___x_1385_, v_r_1356_);
v___y_1358_ = v___x_1386_;
goto v___jp_1357_;
}
}
else
{
size_t v___x_1387_; size_t v___x_1388_; lean_object* v___x_1389_; 
v___x_1387_ = ((size_t)0ULL);
v___x_1388_ = lean_usize_of_nat(v___x_1381_);
v___x_1389_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(v_targets_1348_, v___x_1387_, v___x_1388_, v_r_1356_);
v___y_1358_ = v___x_1389_;
goto v___jp_1357_;
}
}
v___jp_1357_:
{
lean_object* v_lctx_1359_; lean_object* v_decls_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v_lctx_1359_ = lean_ctor_get(v_a_1351_, 2);
v_decls_1360_ = lean_ctor_get(v_lctx_1359_, 1);
v___x_1361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1361_, 0, v___y_1358_);
lean_ctor_set(v___x_1361_, 1, v_r_1356_);
v___x_1362_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0(v_ignoreLetDecls_1350_, v_forbidden_1349_, v_decls_1360_, v___x_1361_, v_a_1351_, v_a_1352_, v_a_1353_, v_a_1354_);
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1371_; 
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1365_ = v___x_1362_;
v_isShared_1366_ = v_isSharedCheck_1371_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1362_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1371_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v_snd_1367_; lean_object* v___x_1369_; 
v_snd_1367_ = lean_ctor_get(v_a_1363_, 1);
lean_inc(v_snd_1367_);
lean_dec(v_a_1363_);
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 0, v_snd_1367_);
v___x_1369_ = v___x_1365_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_snd_1367_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
}
else
{
lean_object* v_a_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1379_; 
v_a_1372_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1374_ = v___x_1362_;
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_a_1372_);
lean_dec(v___x_1362_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1377_; 
if (v_isShared_1375_ == 0)
{
v___x_1377_ = v___x_1374_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_a_1372_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarSetToGeneralize___boxed(lean_object* v_targets_1390_, lean_object* v_forbidden_1391_, lean_object* v_ignoreLetDecls_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1398_; lean_object* v_res_1399_; 
v_ignoreLetDecls_boxed_1398_ = lean_unbox(v_ignoreLetDecls_1392_);
v_res_1399_ = l_Lean_Meta_getFVarSetToGeneralize(v_targets_1390_, v_forbidden_1391_, v_ignoreLetDecls_boxed_1398_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_);
lean_dec(v_a_1396_);
lean_dec_ref(v_a_1395_);
lean_dec(v_a_1394_);
lean_dec_ref(v_a_1393_);
lean_dec(v_forbidden_1391_);
lean_dec_ref(v_targets_1390_);
return v_res_1399_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4(uint8_t v_ignoreLetDecls_1400_, lean_object* v_forbidden_1401_, lean_object* v_as_1402_, size_t v_sz_1403_, size_t v_i_1404_, lean_object* v_b_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_){
_start:
{
lean_object* v___x_1411_; 
v___x_1411_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(v_ignoreLetDecls_1400_, v_forbidden_1401_, v_as_1402_, v_sz_1403_, v_i_1404_, v_b_1405_, v___y_1407_, v___y_1409_);
return v___x_1411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___boxed(lean_object* v_ignoreLetDecls_1412_, lean_object* v_forbidden_1413_, lean_object* v_as_1414_, lean_object* v_sz_1415_, lean_object* v_i_1416_, lean_object* v_b_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1423_; size_t v_sz_boxed_1424_; size_t v_i_boxed_1425_; lean_object* v_res_1426_; 
v_ignoreLetDecls_boxed_1423_ = lean_unbox(v_ignoreLetDecls_1412_);
v_sz_boxed_1424_ = lean_unbox_usize(v_sz_1415_);
lean_dec(v_sz_1415_);
v_i_boxed_1425_ = lean_unbox_usize(v_i_1416_);
lean_dec(v_i_1416_);
v_res_1426_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4(v_ignoreLetDecls_boxed_1423_, v_forbidden_1413_, v_as_1414_, v_sz_boxed_1424_, v_i_boxed_1425_, v_b_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_);
lean_dec(v___y_1421_);
lean_dec_ref(v___y_1420_);
lean_dec(v___y_1419_);
lean_dec_ref(v___y_1418_);
lean_dec_ref(v_as_1414_);
lean_dec(v_forbidden_1413_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4(uint8_t v_ignoreLetDecls_1427_, lean_object* v_forbidden_1428_, lean_object* v_as_1429_, size_t v_sz_1430_, size_t v_i_1431_, lean_object* v_b_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_){
_start:
{
lean_object* v___x_1438_; 
v___x_1438_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(v_ignoreLetDecls_1427_, v_forbidden_1428_, v_as_1429_, v_sz_1430_, v_i_1431_, v_b_1432_, v___y_1434_, v___y_1436_);
return v___x_1438_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_ignoreLetDecls_1439_, lean_object* v_forbidden_1440_, lean_object* v_as_1441_, lean_object* v_sz_1442_, lean_object* v_i_1443_, lean_object* v_b_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1450_; size_t v_sz_boxed_1451_; size_t v_i_boxed_1452_; lean_object* v_res_1453_; 
v_ignoreLetDecls_boxed_1450_ = lean_unbox(v_ignoreLetDecls_1439_);
v_sz_boxed_1451_ = lean_unbox_usize(v_sz_1442_);
lean_dec(v_sz_1442_);
v_i_boxed_1452_ = lean_unbox_usize(v_i_1443_);
lean_dec(v_i_1443_);
v_res_1453_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4(v_ignoreLetDecls_boxed_1450_, v_forbidden_1440_, v_as_1441_, v_sz_boxed_1451_, v_i_boxed_1452_, v_b_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_);
lean_dec(v___y_1448_);
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1446_);
lean_dec_ref(v___y_1445_);
lean_dec_ref(v_as_1441_);
lean_dec(v_forbidden_1440_);
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0_spec__0(lean_object* v_init_1454_, lean_object* v_x_1455_){
_start:
{
if (lean_obj_tag(v_x_1455_) == 0)
{
lean_object* v_k_1456_; lean_object* v_l_1457_; lean_object* v_r_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
v_k_1456_ = lean_ctor_get(v_x_1455_, 1);
lean_inc(v_k_1456_);
v_l_1457_ = lean_ctor_get(v_x_1455_, 3);
lean_inc(v_l_1457_);
v_r_1458_ = lean_ctor_get(v_x_1455_, 4);
lean_inc(v_r_1458_);
lean_dec_ref(v_x_1455_);
v___x_1459_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0_spec__0(v_init_1454_, v_l_1457_);
v___x_1460_ = lean_array_push(v___x_1459_, v_k_1456_);
v_init_1454_ = v___x_1460_;
v_x_1455_ = v_r_1458_;
goto _start;
}
else
{
return v_init_1454_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarsToGeneralize(lean_object* v_targets_1462_, lean_object* v_forbidden_1463_, uint8_t v_ignoreLetDecls_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_){
_start:
{
lean_object* v___x_1470_; 
v___x_1470_ = l_Lean_Meta_mkGeneralizationForbiddenSet(v_targets_1462_, v_forbidden_1463_, v_a_1465_, v_a_1466_, v_a_1467_, v_a_1468_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v_a_1471_; lean_object* v___x_1472_; 
v_a_1471_ = lean_ctor_get(v___x_1470_, 0);
lean_inc(v_a_1471_);
lean_dec_ref(v___x_1470_);
v___x_1472_ = l_Lean_Meta_getFVarSetToGeneralize(v_targets_1462_, v_a_1471_, v_ignoreLetDecls_1464_, v_a_1465_, v_a_1466_, v_a_1467_, v_a_1468_);
lean_dec(v_a_1471_);
if (lean_obj_tag(v___x_1472_) == 0)
{
lean_object* v_a_1473_; lean_object* v___y_1475_; 
v_a_1473_ = lean_ctor_get(v___x_1472_, 0);
lean_inc(v_a_1473_);
lean_dec_ref(v___x_1472_);
if (lean_obj_tag(v_a_1473_) == 0)
{
lean_object* v_size_1479_; 
v_size_1479_ = lean_ctor_get(v_a_1473_, 0);
lean_inc(v_size_1479_);
v___y_1475_ = v_size_1479_;
goto v___jp_1474_;
}
else
{
lean_object* v___x_1480_; 
v___x_1480_ = lean_unsigned_to_nat(0u);
v___y_1475_ = v___x_1480_;
goto v___jp_1474_;
}
v___jp_1474_:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1476_ = lean_mk_empty_array_with_capacity(v___y_1475_);
lean_dec(v___y_1475_);
v___x_1477_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0_spec__0(v___x_1476_, v_a_1473_);
v___x_1478_ = l_Lean_Meta_sortFVarIds___redArg(v___x_1477_, v_a_1465_);
return v___x_1478_;
}
}
else
{
lean_object* v_a_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1488_; 
v_a_1481_ = lean_ctor_get(v___x_1472_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1483_ = v___x_1472_;
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_a_1481_);
lean_dec(v___x_1472_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1486_; 
if (v_isShared_1484_ == 0)
{
v___x_1486_ = v___x_1483_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v_a_1481_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
return v___x_1486_;
}
}
}
}
else
{
lean_object* v_a_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1496_; 
v_a_1489_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1496_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1491_ = v___x_1470_;
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_a_1489_);
lean_dec(v___x_1470_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1494_; 
if (v_isShared_1492_ == 0)
{
v___x_1494_ = v___x_1491_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_a_1489_);
v___x_1494_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
return v___x_1494_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarsToGeneralize___boxed(lean_object* v_targets_1497_, lean_object* v_forbidden_1498_, lean_object* v_ignoreLetDecls_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_, lean_object* v_a_1504_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1505_; lean_object* v_res_1506_; 
v_ignoreLetDecls_boxed_1505_ = lean_unbox(v_ignoreLetDecls_1499_);
v_res_1506_ = l_Lean_Meta_getFVarsToGeneralize(v_targets_1497_, v_forbidden_1498_, v_ignoreLetDecls_boxed_1505_, v_a_1500_, v_a_1501_, v_a_1502_, v_a_1503_);
lean_dec(v_a_1503_);
lean_dec_ref(v_a_1502_);
lean_dec(v_a_1501_);
lean_dec_ref(v_a_1500_);
lean_dec_ref(v_targets_1497_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0(lean_object* v_init_1507_, lean_object* v_t_1508_){
_start:
{
lean_object* v___x_1509_; 
v___x_1509_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0_spec__0(v_init_1507_, v_t_1508_);
return v___x_1509_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_GeneralizeVars(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_GeneralizeVars(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_GeneralizeVars(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_GeneralizeVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_GeneralizeVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_GeneralizeVars(builtin);
}
#ifdef __cplusplus
}
#endif
