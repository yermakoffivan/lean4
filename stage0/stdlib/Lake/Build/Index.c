// Lean compiler output
// Module: Lake.Build.Index
// Imports: public import Lake.Build.Fetch import Lake.Config.Monad import Lake.Build.Topological import Lake.Util.StoreInsts
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
uint8_t l_Lake_BuildKey_quickCmp(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lake_instDecidableEqBuildKey_decEq(lean_object*, lean_object*);
lean_object* l_Lake_BuildInfo_key(lean_object*);
lean_object* l_Lake_Package_findTargetDecl_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_BuildTrace_nil(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lake_BuildKey_toString(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lake_FacetConfigMap_get_x3f(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lake_buildCycleError(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__0;
static lean_once_cell_t l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__1;
static lean_once_cell_t l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__2;
static lean_once_cell_t l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__3;
static lean_once_cell_t l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__4;
static lean_once_cell_t l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__5;
static lean_once_cell_t l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__6;
static lean_once_cell_t l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__7;
static lean_once_cell_t l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__8;
static lean_once_cell_t l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__9;
LEAN_EXPORT lean_object* l___private_Lake_Build_Index_0__Lake_recBuildWithIndex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_partition_loop___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_partition_loop___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Index_0__Lake_recFetchWithIndex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Index_0__Lake_recFetchWithIndex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_FetchT_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_FetchT_run___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_FetchT_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_FetchT_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_FetchT_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_FetchT_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__0___redArg(lean_object* v_t_1_, lean_object* v_k_2_){
_start:
{
if (lean_obj_tag(v_t_1_) == 0)
{
lean_object* v_k_3_; lean_object* v_v_4_; lean_object* v_l_5_; lean_object* v_r_6_; uint8_t v___x_7_; 
v_k_3_ = lean_ctor_get(v_t_1_, 1);
v_v_4_ = lean_ctor_get(v_t_1_, 2);
v_l_5_ = lean_ctor_get(v_t_1_, 3);
v_r_6_ = lean_ctor_get(v_t_1_, 4);
v___x_7_ = l_Lake_BuildKey_quickCmp(v_k_2_, v_k_3_);
switch(v___x_7_)
{
case 0:
{
v_t_1_ = v_l_5_;
goto _start;
}
case 1:
{
lean_object* v___x_9_; 
lean_inc(v_v_4_);
v___x_9_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_9_, 0, v_v_4_);
return v___x_9_;
}
default: 
{
v_t_1_ = v_r_6_;
goto _start;
}
}
}
else
{
lean_object* v___x_11_; 
v___x_11_ = lean_box(0);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__0___redArg___boxed(lean_object* v_t_12_, lean_object* v_k_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__0___redArg(v_t_12_, v_k_13_);
lean_dec_ref(v_k_13_);
lean_dec(v_t_12_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__1___redArg(lean_object* v_k_15_, lean_object* v_v_16_, lean_object* v_t_17_){
_start:
{
if (lean_obj_tag(v_t_17_) == 0)
{
lean_object* v_size_18_; lean_object* v_k_19_; lean_object* v_v_20_; lean_object* v_l_21_; lean_object* v_r_22_; lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_302_; 
v_size_18_ = lean_ctor_get(v_t_17_, 0);
v_k_19_ = lean_ctor_get(v_t_17_, 1);
v_v_20_ = lean_ctor_get(v_t_17_, 2);
v_l_21_ = lean_ctor_get(v_t_17_, 3);
v_r_22_ = lean_ctor_get(v_t_17_, 4);
v_isSharedCheck_302_ = !lean_is_exclusive(v_t_17_);
if (v_isSharedCheck_302_ == 0)
{
v___x_24_ = v_t_17_;
v_isShared_25_ = v_isSharedCheck_302_;
goto v_resetjp_23_;
}
else
{
lean_inc(v_r_22_);
lean_inc(v_l_21_);
lean_inc(v_v_20_);
lean_inc(v_k_19_);
lean_inc(v_size_18_);
lean_dec(v_t_17_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_302_;
goto v_resetjp_23_;
}
v_resetjp_23_:
{
uint8_t v___x_26_; 
v___x_26_ = l_Lake_BuildKey_quickCmp(v_k_15_, v_k_19_);
switch(v___x_26_)
{
case 0:
{
lean_object* v_impl_27_; lean_object* v___x_28_; 
lean_dec(v_size_18_);
v_impl_27_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__1___redArg(v_k_15_, v_v_16_, v_l_21_);
v___x_28_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_22_) == 0)
{
lean_object* v_size_29_; lean_object* v_size_30_; lean_object* v_k_31_; lean_object* v_v_32_; lean_object* v_l_33_; lean_object* v_r_34_; lean_object* v___x_35_; lean_object* v___x_36_; uint8_t v___x_37_; 
v_size_29_ = lean_ctor_get(v_r_22_, 0);
v_size_30_ = lean_ctor_get(v_impl_27_, 0);
lean_inc(v_size_30_);
v_k_31_ = lean_ctor_get(v_impl_27_, 1);
lean_inc(v_k_31_);
v_v_32_ = lean_ctor_get(v_impl_27_, 2);
lean_inc(v_v_32_);
v_l_33_ = lean_ctor_get(v_impl_27_, 3);
lean_inc(v_l_33_);
v_r_34_ = lean_ctor_get(v_impl_27_, 4);
lean_inc(v_r_34_);
v___x_35_ = lean_unsigned_to_nat(3u);
v___x_36_ = lean_nat_mul(v___x_35_, v_size_29_);
v___x_37_ = lean_nat_dec_lt(v___x_36_, v_size_30_);
lean_dec(v___x_36_);
if (v___x_37_ == 0)
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_41_; 
lean_dec(v_r_34_);
lean_dec(v_l_33_);
lean_dec(v_v_32_);
lean_dec(v_k_31_);
v___x_38_ = lean_nat_add(v___x_28_, v_size_30_);
lean_dec(v_size_30_);
v___x_39_ = lean_nat_add(v___x_38_, v_size_29_);
lean_dec(v___x_38_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 3, v_impl_27_);
lean_ctor_set(v___x_24_, 0, v___x_39_);
v___x_41_ = v___x_24_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v___x_39_);
lean_ctor_set(v_reuseFailAlloc_42_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_42_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_42_, 3, v_impl_27_);
lean_ctor_set(v_reuseFailAlloc_42_, 4, v_r_22_);
v___x_41_ = v_reuseFailAlloc_42_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
return v___x_41_;
}
}
else
{
lean_object* v___x_44_; uint8_t v_isShared_45_; uint8_t v_isSharedCheck_108_; 
v_isSharedCheck_108_ = !lean_is_exclusive(v_impl_27_);
if (v_isSharedCheck_108_ == 0)
{
lean_object* v_unused_109_; lean_object* v_unused_110_; lean_object* v_unused_111_; lean_object* v_unused_112_; lean_object* v_unused_113_; 
v_unused_109_ = lean_ctor_get(v_impl_27_, 4);
lean_dec(v_unused_109_);
v_unused_110_ = lean_ctor_get(v_impl_27_, 3);
lean_dec(v_unused_110_);
v_unused_111_ = lean_ctor_get(v_impl_27_, 2);
lean_dec(v_unused_111_);
v_unused_112_ = lean_ctor_get(v_impl_27_, 1);
lean_dec(v_unused_112_);
v_unused_113_ = lean_ctor_get(v_impl_27_, 0);
lean_dec(v_unused_113_);
v___x_44_ = v_impl_27_;
v_isShared_45_ = v_isSharedCheck_108_;
goto v_resetjp_43_;
}
else
{
lean_dec(v_impl_27_);
v___x_44_ = lean_box(0);
v_isShared_45_ = v_isSharedCheck_108_;
goto v_resetjp_43_;
}
v_resetjp_43_:
{
lean_object* v_size_46_; lean_object* v_size_47_; lean_object* v_k_48_; lean_object* v_v_49_; lean_object* v_l_50_; lean_object* v_r_51_; lean_object* v___x_52_; lean_object* v___x_53_; uint8_t v___x_54_; 
v_size_46_ = lean_ctor_get(v_l_33_, 0);
v_size_47_ = lean_ctor_get(v_r_34_, 0);
v_k_48_ = lean_ctor_get(v_r_34_, 1);
v_v_49_ = lean_ctor_get(v_r_34_, 2);
v_l_50_ = lean_ctor_get(v_r_34_, 3);
v_r_51_ = lean_ctor_get(v_r_34_, 4);
v___x_52_ = lean_unsigned_to_nat(2u);
v___x_53_ = lean_nat_mul(v___x_52_, v_size_46_);
v___x_54_ = lean_nat_dec_lt(v_size_47_, v___x_53_);
lean_dec(v___x_53_);
if (v___x_54_ == 0)
{
lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_83_; 
lean_inc(v_r_51_);
lean_inc(v_l_50_);
lean_inc(v_v_49_);
lean_inc(v_k_48_);
v_isSharedCheck_83_ = !lean_is_exclusive(v_r_34_);
if (v_isSharedCheck_83_ == 0)
{
lean_object* v_unused_84_; lean_object* v_unused_85_; lean_object* v_unused_86_; lean_object* v_unused_87_; lean_object* v_unused_88_; 
v_unused_84_ = lean_ctor_get(v_r_34_, 4);
lean_dec(v_unused_84_);
v_unused_85_ = lean_ctor_get(v_r_34_, 3);
lean_dec(v_unused_85_);
v_unused_86_ = lean_ctor_get(v_r_34_, 2);
lean_dec(v_unused_86_);
v_unused_87_ = lean_ctor_get(v_r_34_, 1);
lean_dec(v_unused_87_);
v_unused_88_ = lean_ctor_get(v_r_34_, 0);
lean_dec(v_unused_88_);
v___x_56_ = v_r_34_;
v_isShared_57_ = v_isSharedCheck_83_;
goto v_resetjp_55_;
}
else
{
lean_dec(v_r_34_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_83_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___y_61_; lean_object* v___y_62_; lean_object* v___y_63_; lean_object* v___x_71_; lean_object* v___y_73_; 
v___x_58_ = lean_nat_add(v___x_28_, v_size_30_);
lean_dec(v_size_30_);
v___x_59_ = lean_nat_add(v___x_58_, v_size_29_);
lean_dec(v___x_58_);
v___x_71_ = lean_nat_add(v___x_28_, v_size_46_);
if (lean_obj_tag(v_l_50_) == 0)
{
lean_object* v_size_81_; 
v_size_81_ = lean_ctor_get(v_l_50_, 0);
lean_inc(v_size_81_);
v___y_73_ = v_size_81_;
goto v___jp_72_;
}
else
{
lean_object* v___x_82_; 
v___x_82_ = lean_unsigned_to_nat(0u);
v___y_73_ = v___x_82_;
goto v___jp_72_;
}
v___jp_60_:
{
lean_object* v___x_64_; lean_object* v___x_66_; 
v___x_64_ = lean_nat_add(v___y_61_, v___y_63_);
lean_dec(v___y_63_);
lean_dec(v___y_61_);
if (v_isShared_57_ == 0)
{
lean_ctor_set(v___x_56_, 4, v_r_22_);
lean_ctor_set(v___x_56_, 3, v_r_51_);
lean_ctor_set(v___x_56_, 2, v_v_20_);
lean_ctor_set(v___x_56_, 1, v_k_19_);
lean_ctor_set(v___x_56_, 0, v___x_64_);
v___x_66_ = v___x_56_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v___x_64_);
lean_ctor_set(v_reuseFailAlloc_70_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_70_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_70_, 3, v_r_51_);
lean_ctor_set(v_reuseFailAlloc_70_, 4, v_r_22_);
v___x_66_ = v_reuseFailAlloc_70_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
lean_object* v___x_68_; 
if (v_isShared_45_ == 0)
{
lean_ctor_set(v___x_44_, 4, v___x_66_);
lean_ctor_set(v___x_44_, 3, v___y_62_);
lean_ctor_set(v___x_44_, 2, v_v_49_);
lean_ctor_set(v___x_44_, 1, v_k_48_);
lean_ctor_set(v___x_44_, 0, v___x_59_);
v___x_68_ = v___x_44_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v___x_59_);
lean_ctor_set(v_reuseFailAlloc_69_, 1, v_k_48_);
lean_ctor_set(v_reuseFailAlloc_69_, 2, v_v_49_);
lean_ctor_set(v_reuseFailAlloc_69_, 3, v___y_62_);
lean_ctor_set(v_reuseFailAlloc_69_, 4, v___x_66_);
v___x_68_ = v_reuseFailAlloc_69_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
return v___x_68_;
}
}
}
v___jp_72_:
{
lean_object* v___x_74_; lean_object* v___x_76_; 
v___x_74_ = lean_nat_add(v___x_71_, v___y_73_);
lean_dec(v___y_73_);
lean_dec(v___x_71_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_l_50_);
lean_ctor_set(v___x_24_, 3, v_l_33_);
lean_ctor_set(v___x_24_, 2, v_v_32_);
lean_ctor_set(v___x_24_, 1, v_k_31_);
lean_ctor_set(v___x_24_, 0, v___x_74_);
v___x_76_ = v___x_24_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v___x_74_);
lean_ctor_set(v_reuseFailAlloc_80_, 1, v_k_31_);
lean_ctor_set(v_reuseFailAlloc_80_, 2, v_v_32_);
lean_ctor_set(v_reuseFailAlloc_80_, 3, v_l_33_);
lean_ctor_set(v_reuseFailAlloc_80_, 4, v_l_50_);
v___x_76_ = v_reuseFailAlloc_80_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
lean_object* v___x_77_; 
v___x_77_ = lean_nat_add(v___x_28_, v_size_29_);
if (lean_obj_tag(v_r_51_) == 0)
{
lean_object* v_size_78_; 
v_size_78_ = lean_ctor_get(v_r_51_, 0);
lean_inc(v_size_78_);
v___y_61_ = v___x_77_;
v___y_62_ = v___x_76_;
v___y_63_ = v_size_78_;
goto v___jp_60_;
}
else
{
lean_object* v___x_79_; 
v___x_79_ = lean_unsigned_to_nat(0u);
v___y_61_ = v___x_77_;
v___y_62_ = v___x_76_;
v___y_63_ = v___x_79_;
goto v___jp_60_;
}
}
}
}
}
else
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_94_; 
lean_del_object(v___x_24_);
v___x_89_ = lean_nat_add(v___x_28_, v_size_30_);
lean_dec(v_size_30_);
v___x_90_ = lean_nat_add(v___x_89_, v_size_29_);
lean_dec(v___x_89_);
v___x_91_ = lean_nat_add(v___x_28_, v_size_29_);
v___x_92_ = lean_nat_add(v___x_91_, v_size_47_);
lean_dec(v___x_91_);
lean_inc_ref(v_r_22_);
if (v_isShared_45_ == 0)
{
lean_ctor_set(v___x_44_, 4, v_r_22_);
lean_ctor_set(v___x_44_, 3, v_r_34_);
lean_ctor_set(v___x_44_, 2, v_v_20_);
lean_ctor_set(v___x_44_, 1, v_k_19_);
lean_ctor_set(v___x_44_, 0, v___x_92_);
v___x_94_ = v___x_44_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v___x_92_);
lean_ctor_set(v_reuseFailAlloc_107_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_107_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_107_, 3, v_r_34_);
lean_ctor_set(v_reuseFailAlloc_107_, 4, v_r_22_);
v___x_94_ = v_reuseFailAlloc_107_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_101_; 
v_isSharedCheck_101_ = !lean_is_exclusive(v_r_22_);
if (v_isSharedCheck_101_ == 0)
{
lean_object* v_unused_102_; lean_object* v_unused_103_; lean_object* v_unused_104_; lean_object* v_unused_105_; lean_object* v_unused_106_; 
v_unused_102_ = lean_ctor_get(v_r_22_, 4);
lean_dec(v_unused_102_);
v_unused_103_ = lean_ctor_get(v_r_22_, 3);
lean_dec(v_unused_103_);
v_unused_104_ = lean_ctor_get(v_r_22_, 2);
lean_dec(v_unused_104_);
v_unused_105_ = lean_ctor_get(v_r_22_, 1);
lean_dec(v_unused_105_);
v_unused_106_ = lean_ctor_get(v_r_22_, 0);
lean_dec(v_unused_106_);
v___x_96_ = v_r_22_;
v_isShared_97_ = v_isSharedCheck_101_;
goto v_resetjp_95_;
}
else
{
lean_dec(v_r_22_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_101_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v___x_99_; 
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v___x_94_);
lean_ctor_set(v___x_96_, 3, v_l_33_);
lean_ctor_set(v___x_96_, 2, v_v_32_);
lean_ctor_set(v___x_96_, 1, v_k_31_);
lean_ctor_set(v___x_96_, 0, v___x_90_);
v___x_99_ = v___x_96_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v___x_90_);
lean_ctor_set(v_reuseFailAlloc_100_, 1, v_k_31_);
lean_ctor_set(v_reuseFailAlloc_100_, 2, v_v_32_);
lean_ctor_set(v_reuseFailAlloc_100_, 3, v_l_33_);
lean_ctor_set(v_reuseFailAlloc_100_, 4, v___x_94_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
return v___x_99_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_114_; 
v_l_114_ = lean_ctor_get(v_impl_27_, 3);
lean_inc(v_l_114_);
if (lean_obj_tag(v_l_114_) == 0)
{
lean_object* v_r_115_; lean_object* v_k_116_; lean_object* v_v_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_128_; 
v_r_115_ = lean_ctor_get(v_impl_27_, 4);
v_k_116_ = lean_ctor_get(v_impl_27_, 1);
v_v_117_ = lean_ctor_get(v_impl_27_, 2);
v_isSharedCheck_128_ = !lean_is_exclusive(v_impl_27_);
if (v_isSharedCheck_128_ == 0)
{
lean_object* v_unused_129_; lean_object* v_unused_130_; 
v_unused_129_ = lean_ctor_get(v_impl_27_, 3);
lean_dec(v_unused_129_);
v_unused_130_ = lean_ctor_get(v_impl_27_, 0);
lean_dec(v_unused_130_);
v___x_119_ = v_impl_27_;
v_isShared_120_ = v_isSharedCheck_128_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_r_115_);
lean_inc(v_v_117_);
lean_inc(v_k_116_);
lean_dec(v_impl_27_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_128_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_121_; lean_object* v___x_123_; 
v___x_121_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_115_);
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 3, v_r_115_);
lean_ctor_set(v___x_119_, 2, v_v_20_);
lean_ctor_set(v___x_119_, 1, v_k_19_);
lean_ctor_set(v___x_119_, 0, v___x_28_);
v___x_123_ = v___x_119_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v___x_28_);
lean_ctor_set(v_reuseFailAlloc_127_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_127_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_127_, 3, v_r_115_);
lean_ctor_set(v_reuseFailAlloc_127_, 4, v_r_115_);
v___x_123_ = v_reuseFailAlloc_127_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
lean_object* v___x_125_; 
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v___x_123_);
lean_ctor_set(v___x_24_, 3, v_l_114_);
lean_ctor_set(v___x_24_, 2, v_v_117_);
lean_ctor_set(v___x_24_, 1, v_k_116_);
lean_ctor_set(v___x_24_, 0, v___x_121_);
v___x_125_ = v___x_24_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v___x_121_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v_k_116_);
lean_ctor_set(v_reuseFailAlloc_126_, 2, v_v_117_);
lean_ctor_set(v_reuseFailAlloc_126_, 3, v_l_114_);
lean_ctor_set(v_reuseFailAlloc_126_, 4, v___x_123_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
}
else
{
lean_object* v_r_131_; 
v_r_131_ = lean_ctor_get(v_impl_27_, 4);
lean_inc(v_r_131_);
if (lean_obj_tag(v_r_131_) == 0)
{
lean_object* v_k_132_; lean_object* v_v_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_156_; 
v_k_132_ = lean_ctor_get(v_impl_27_, 1);
v_v_133_ = lean_ctor_get(v_impl_27_, 2);
v_isSharedCheck_156_ = !lean_is_exclusive(v_impl_27_);
if (v_isSharedCheck_156_ == 0)
{
lean_object* v_unused_157_; lean_object* v_unused_158_; lean_object* v_unused_159_; 
v_unused_157_ = lean_ctor_get(v_impl_27_, 4);
lean_dec(v_unused_157_);
v_unused_158_ = lean_ctor_get(v_impl_27_, 3);
lean_dec(v_unused_158_);
v_unused_159_ = lean_ctor_get(v_impl_27_, 0);
lean_dec(v_unused_159_);
v___x_135_ = v_impl_27_;
v_isShared_136_ = v_isSharedCheck_156_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_v_133_);
lean_inc(v_k_132_);
lean_dec(v_impl_27_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_156_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v_k_137_; lean_object* v_v_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_152_; 
v_k_137_ = lean_ctor_get(v_r_131_, 1);
v_v_138_ = lean_ctor_get(v_r_131_, 2);
v_isSharedCheck_152_ = !lean_is_exclusive(v_r_131_);
if (v_isSharedCheck_152_ == 0)
{
lean_object* v_unused_153_; lean_object* v_unused_154_; lean_object* v_unused_155_; 
v_unused_153_ = lean_ctor_get(v_r_131_, 4);
lean_dec(v_unused_153_);
v_unused_154_ = lean_ctor_get(v_r_131_, 3);
lean_dec(v_unused_154_);
v_unused_155_ = lean_ctor_get(v_r_131_, 0);
lean_dec(v_unused_155_);
v___x_140_ = v_r_131_;
v_isShared_141_ = v_isSharedCheck_152_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_v_138_);
lean_inc(v_k_137_);
lean_dec(v_r_131_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_152_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_142_; lean_object* v___x_144_; 
v___x_142_ = lean_unsigned_to_nat(3u);
if (v_isShared_141_ == 0)
{
lean_ctor_set(v___x_140_, 4, v_l_114_);
lean_ctor_set(v___x_140_, 3, v_l_114_);
lean_ctor_set(v___x_140_, 2, v_v_133_);
lean_ctor_set(v___x_140_, 1, v_k_132_);
lean_ctor_set(v___x_140_, 0, v___x_28_);
v___x_144_ = v___x_140_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v___x_28_);
lean_ctor_set(v_reuseFailAlloc_151_, 1, v_k_132_);
lean_ctor_set(v_reuseFailAlloc_151_, 2, v_v_133_);
lean_ctor_set(v_reuseFailAlloc_151_, 3, v_l_114_);
lean_ctor_set(v_reuseFailAlloc_151_, 4, v_l_114_);
v___x_144_ = v_reuseFailAlloc_151_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
lean_object* v___x_146_; 
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 4, v_l_114_);
lean_ctor_set(v___x_135_, 2, v_v_20_);
lean_ctor_set(v___x_135_, 1, v_k_19_);
lean_ctor_set(v___x_135_, 0, v___x_28_);
v___x_146_ = v___x_135_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v___x_28_);
lean_ctor_set(v_reuseFailAlloc_150_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_150_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_150_, 3, v_l_114_);
lean_ctor_set(v_reuseFailAlloc_150_, 4, v_l_114_);
v___x_146_ = v_reuseFailAlloc_150_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
lean_object* v___x_148_; 
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v___x_146_);
lean_ctor_set(v___x_24_, 3, v___x_144_);
lean_ctor_set(v___x_24_, 2, v_v_138_);
lean_ctor_set(v___x_24_, 1, v_k_137_);
lean_ctor_set(v___x_24_, 0, v___x_142_);
v___x_148_ = v___x_24_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v___x_142_);
lean_ctor_set(v_reuseFailAlloc_149_, 1, v_k_137_);
lean_ctor_set(v_reuseFailAlloc_149_, 2, v_v_138_);
lean_ctor_set(v_reuseFailAlloc_149_, 3, v___x_144_);
lean_ctor_set(v_reuseFailAlloc_149_, 4, v___x_146_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
}
}
}
else
{
lean_object* v___x_160_; lean_object* v___x_162_; 
v___x_160_ = lean_unsigned_to_nat(2u);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_r_131_);
lean_ctor_set(v___x_24_, 3, v_impl_27_);
lean_ctor_set(v___x_24_, 0, v___x_160_);
v___x_162_ = v___x_24_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v___x_160_);
lean_ctor_set(v_reuseFailAlloc_163_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_163_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_163_, 3, v_impl_27_);
lean_ctor_set(v_reuseFailAlloc_163_, 4, v_r_131_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
}
case 1:
{
lean_object* v___x_165_; 
lean_dec(v_v_20_);
lean_dec(v_k_19_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 2, v_v_16_);
lean_ctor_set(v___x_24_, 1, v_k_15_);
v___x_165_ = v___x_24_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_size_18_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v_k_15_);
lean_ctor_set(v_reuseFailAlloc_166_, 2, v_v_16_);
lean_ctor_set(v_reuseFailAlloc_166_, 3, v_l_21_);
lean_ctor_set(v_reuseFailAlloc_166_, 4, v_r_22_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
default: 
{
lean_object* v_impl_167_; lean_object* v___x_168_; 
lean_dec(v_size_18_);
v_impl_167_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__1___redArg(v_k_15_, v_v_16_, v_r_22_);
v___x_168_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_21_) == 0)
{
lean_object* v_size_169_; lean_object* v_size_170_; lean_object* v_k_171_; lean_object* v_v_172_; lean_object* v_l_173_; lean_object* v_r_174_; lean_object* v___x_175_; lean_object* v___x_176_; uint8_t v___x_177_; 
v_size_169_ = lean_ctor_get(v_l_21_, 0);
v_size_170_ = lean_ctor_get(v_impl_167_, 0);
lean_inc(v_size_170_);
v_k_171_ = lean_ctor_get(v_impl_167_, 1);
lean_inc(v_k_171_);
v_v_172_ = lean_ctor_get(v_impl_167_, 2);
lean_inc(v_v_172_);
v_l_173_ = lean_ctor_get(v_impl_167_, 3);
lean_inc(v_l_173_);
v_r_174_ = lean_ctor_get(v_impl_167_, 4);
lean_inc(v_r_174_);
v___x_175_ = lean_unsigned_to_nat(3u);
v___x_176_ = lean_nat_mul(v___x_175_, v_size_169_);
v___x_177_ = lean_nat_dec_lt(v___x_176_, v_size_170_);
lean_dec(v___x_176_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_181_; 
lean_dec(v_r_174_);
lean_dec(v_l_173_);
lean_dec(v_v_172_);
lean_dec(v_k_171_);
v___x_178_ = lean_nat_add(v___x_168_, v_size_169_);
v___x_179_ = lean_nat_add(v___x_178_, v_size_170_);
lean_dec(v_size_170_);
lean_dec(v___x_178_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_impl_167_);
lean_ctor_set(v___x_24_, 0, v___x_179_);
v___x_181_ = v___x_24_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v___x_179_);
lean_ctor_set(v_reuseFailAlloc_182_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_182_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_182_, 3, v_l_21_);
lean_ctor_set(v_reuseFailAlloc_182_, 4, v_impl_167_);
v___x_181_ = v_reuseFailAlloc_182_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
return v___x_181_;
}
}
else
{
lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_246_; 
v_isSharedCheck_246_ = !lean_is_exclusive(v_impl_167_);
if (v_isSharedCheck_246_ == 0)
{
lean_object* v_unused_247_; lean_object* v_unused_248_; lean_object* v_unused_249_; lean_object* v_unused_250_; lean_object* v_unused_251_; 
v_unused_247_ = lean_ctor_get(v_impl_167_, 4);
lean_dec(v_unused_247_);
v_unused_248_ = lean_ctor_get(v_impl_167_, 3);
lean_dec(v_unused_248_);
v_unused_249_ = lean_ctor_get(v_impl_167_, 2);
lean_dec(v_unused_249_);
v_unused_250_ = lean_ctor_get(v_impl_167_, 1);
lean_dec(v_unused_250_);
v_unused_251_ = lean_ctor_get(v_impl_167_, 0);
lean_dec(v_unused_251_);
v___x_184_ = v_impl_167_;
v_isShared_185_ = v_isSharedCheck_246_;
goto v_resetjp_183_;
}
else
{
lean_dec(v_impl_167_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_246_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v_size_186_; lean_object* v_k_187_; lean_object* v_v_188_; lean_object* v_l_189_; lean_object* v_r_190_; lean_object* v_size_191_; lean_object* v___x_192_; lean_object* v___x_193_; uint8_t v___x_194_; 
v_size_186_ = lean_ctor_get(v_l_173_, 0);
v_k_187_ = lean_ctor_get(v_l_173_, 1);
v_v_188_ = lean_ctor_get(v_l_173_, 2);
v_l_189_ = lean_ctor_get(v_l_173_, 3);
v_r_190_ = lean_ctor_get(v_l_173_, 4);
v_size_191_ = lean_ctor_get(v_r_174_, 0);
v___x_192_ = lean_unsigned_to_nat(2u);
v___x_193_ = lean_nat_mul(v___x_192_, v_size_191_);
v___x_194_ = lean_nat_dec_lt(v_size_186_, v___x_193_);
lean_dec(v___x_193_);
if (v___x_194_ == 0)
{
lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_222_; 
lean_inc(v_r_190_);
lean_inc(v_l_189_);
lean_inc(v_v_188_);
lean_inc(v_k_187_);
v_isSharedCheck_222_ = !lean_is_exclusive(v_l_173_);
if (v_isSharedCheck_222_ == 0)
{
lean_object* v_unused_223_; lean_object* v_unused_224_; lean_object* v_unused_225_; lean_object* v_unused_226_; lean_object* v_unused_227_; 
v_unused_223_ = lean_ctor_get(v_l_173_, 4);
lean_dec(v_unused_223_);
v_unused_224_ = lean_ctor_get(v_l_173_, 3);
lean_dec(v_unused_224_);
v_unused_225_ = lean_ctor_get(v_l_173_, 2);
lean_dec(v_unused_225_);
v_unused_226_ = lean_ctor_get(v_l_173_, 1);
lean_dec(v_unused_226_);
v_unused_227_ = lean_ctor_get(v_l_173_, 0);
lean_dec(v_unused_227_);
v___x_196_ = v_l_173_;
v_isShared_197_ = v_isSharedCheck_222_;
goto v_resetjp_195_;
}
else
{
lean_dec(v_l_173_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_222_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___y_201_; lean_object* v___y_202_; lean_object* v___y_203_; lean_object* v___y_212_; 
v___x_198_ = lean_nat_add(v___x_168_, v_size_169_);
v___x_199_ = lean_nat_add(v___x_198_, v_size_170_);
lean_dec(v_size_170_);
if (lean_obj_tag(v_l_189_) == 0)
{
lean_object* v_size_220_; 
v_size_220_ = lean_ctor_get(v_l_189_, 0);
lean_inc(v_size_220_);
v___y_212_ = v_size_220_;
goto v___jp_211_;
}
else
{
lean_object* v___x_221_; 
v___x_221_ = lean_unsigned_to_nat(0u);
v___y_212_ = v___x_221_;
goto v___jp_211_;
}
v___jp_200_:
{
lean_object* v___x_204_; lean_object* v___x_206_; 
v___x_204_ = lean_nat_add(v___y_202_, v___y_203_);
lean_dec(v___y_203_);
lean_dec(v___y_202_);
if (v_isShared_197_ == 0)
{
lean_ctor_set(v___x_196_, 4, v_r_174_);
lean_ctor_set(v___x_196_, 3, v_r_190_);
lean_ctor_set(v___x_196_, 2, v_v_172_);
lean_ctor_set(v___x_196_, 1, v_k_171_);
lean_ctor_set(v___x_196_, 0, v___x_204_);
v___x_206_ = v___x_196_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v___x_204_);
lean_ctor_set(v_reuseFailAlloc_210_, 1, v_k_171_);
lean_ctor_set(v_reuseFailAlloc_210_, 2, v_v_172_);
lean_ctor_set(v_reuseFailAlloc_210_, 3, v_r_190_);
lean_ctor_set(v_reuseFailAlloc_210_, 4, v_r_174_);
v___x_206_ = v_reuseFailAlloc_210_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
lean_object* v___x_208_; 
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 4, v___x_206_);
lean_ctor_set(v___x_184_, 3, v___y_201_);
lean_ctor_set(v___x_184_, 2, v_v_188_);
lean_ctor_set(v___x_184_, 1, v_k_187_);
lean_ctor_set(v___x_184_, 0, v___x_199_);
v___x_208_ = v___x_184_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v___x_199_);
lean_ctor_set(v_reuseFailAlloc_209_, 1, v_k_187_);
lean_ctor_set(v_reuseFailAlloc_209_, 2, v_v_188_);
lean_ctor_set(v_reuseFailAlloc_209_, 3, v___y_201_);
lean_ctor_set(v_reuseFailAlloc_209_, 4, v___x_206_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
v___jp_211_:
{
lean_object* v___x_213_; lean_object* v___x_215_; 
v___x_213_ = lean_nat_add(v___x_198_, v___y_212_);
lean_dec(v___y_212_);
lean_dec(v___x_198_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_l_189_);
lean_ctor_set(v___x_24_, 0, v___x_213_);
v___x_215_ = v___x_24_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v___x_213_);
lean_ctor_set(v_reuseFailAlloc_219_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_219_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_219_, 3, v_l_21_);
lean_ctor_set(v_reuseFailAlloc_219_, 4, v_l_189_);
v___x_215_ = v_reuseFailAlloc_219_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
lean_object* v___x_216_; 
v___x_216_ = lean_nat_add(v___x_168_, v_size_191_);
if (lean_obj_tag(v_r_190_) == 0)
{
lean_object* v_size_217_; 
v_size_217_ = lean_ctor_get(v_r_190_, 0);
lean_inc(v_size_217_);
v___y_201_ = v___x_215_;
v___y_202_ = v___x_216_;
v___y_203_ = v_size_217_;
goto v___jp_200_;
}
else
{
lean_object* v___x_218_; 
v___x_218_ = lean_unsigned_to_nat(0u);
v___y_201_ = v___x_215_;
v___y_202_ = v___x_216_;
v___y_203_ = v___x_218_;
goto v___jp_200_;
}
}
}
}
}
else
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_232_; 
lean_del_object(v___x_24_);
v___x_228_ = lean_nat_add(v___x_168_, v_size_169_);
v___x_229_ = lean_nat_add(v___x_228_, v_size_170_);
lean_dec(v_size_170_);
v___x_230_ = lean_nat_add(v___x_228_, v_size_186_);
lean_dec(v___x_228_);
lean_inc_ref(v_l_21_);
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 4, v_l_173_);
lean_ctor_set(v___x_184_, 3, v_l_21_);
lean_ctor_set(v___x_184_, 2, v_v_20_);
lean_ctor_set(v___x_184_, 1, v_k_19_);
lean_ctor_set(v___x_184_, 0, v___x_230_);
v___x_232_ = v___x_184_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_230_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_245_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_245_, 3, v_l_21_);
lean_ctor_set(v_reuseFailAlloc_245_, 4, v_l_173_);
v___x_232_ = v_reuseFailAlloc_245_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_239_; 
v_isSharedCheck_239_ = !lean_is_exclusive(v_l_21_);
if (v_isSharedCheck_239_ == 0)
{
lean_object* v_unused_240_; lean_object* v_unused_241_; lean_object* v_unused_242_; lean_object* v_unused_243_; lean_object* v_unused_244_; 
v_unused_240_ = lean_ctor_get(v_l_21_, 4);
lean_dec(v_unused_240_);
v_unused_241_ = lean_ctor_get(v_l_21_, 3);
lean_dec(v_unused_241_);
v_unused_242_ = lean_ctor_get(v_l_21_, 2);
lean_dec(v_unused_242_);
v_unused_243_ = lean_ctor_get(v_l_21_, 1);
lean_dec(v_unused_243_);
v_unused_244_ = lean_ctor_get(v_l_21_, 0);
lean_dec(v_unused_244_);
v___x_234_ = v_l_21_;
v_isShared_235_ = v_isSharedCheck_239_;
goto v_resetjp_233_;
}
else
{
lean_dec(v_l_21_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_239_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_237_; 
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 4, v_r_174_);
lean_ctor_set(v___x_234_, 3, v___x_232_);
lean_ctor_set(v___x_234_, 2, v_v_172_);
lean_ctor_set(v___x_234_, 1, v_k_171_);
lean_ctor_set(v___x_234_, 0, v___x_229_);
v___x_237_ = v___x_234_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v___x_229_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v_k_171_);
lean_ctor_set(v_reuseFailAlloc_238_, 2, v_v_172_);
lean_ctor_set(v_reuseFailAlloc_238_, 3, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_238_, 4, v_r_174_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_252_; 
v_l_252_ = lean_ctor_get(v_impl_167_, 3);
lean_inc(v_l_252_);
if (lean_obj_tag(v_l_252_) == 0)
{
lean_object* v_r_253_; lean_object* v_k_254_; lean_object* v_v_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_278_; 
v_r_253_ = lean_ctor_get(v_impl_167_, 4);
v_k_254_ = lean_ctor_get(v_impl_167_, 1);
v_v_255_ = lean_ctor_get(v_impl_167_, 2);
v_isSharedCheck_278_ = !lean_is_exclusive(v_impl_167_);
if (v_isSharedCheck_278_ == 0)
{
lean_object* v_unused_279_; lean_object* v_unused_280_; 
v_unused_279_ = lean_ctor_get(v_impl_167_, 3);
lean_dec(v_unused_279_);
v_unused_280_ = lean_ctor_get(v_impl_167_, 0);
lean_dec(v_unused_280_);
v___x_257_ = v_impl_167_;
v_isShared_258_ = v_isSharedCheck_278_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_r_253_);
lean_inc(v_v_255_);
lean_inc(v_k_254_);
lean_dec(v_impl_167_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_278_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v_k_259_; lean_object* v_v_260_; lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_274_; 
v_k_259_ = lean_ctor_get(v_l_252_, 1);
v_v_260_ = lean_ctor_get(v_l_252_, 2);
v_isSharedCheck_274_ = !lean_is_exclusive(v_l_252_);
if (v_isSharedCheck_274_ == 0)
{
lean_object* v_unused_275_; lean_object* v_unused_276_; lean_object* v_unused_277_; 
v_unused_275_ = lean_ctor_get(v_l_252_, 4);
lean_dec(v_unused_275_);
v_unused_276_ = lean_ctor_get(v_l_252_, 3);
lean_dec(v_unused_276_);
v_unused_277_ = lean_ctor_get(v_l_252_, 0);
lean_dec(v_unused_277_);
v___x_262_ = v_l_252_;
v_isShared_263_ = v_isSharedCheck_274_;
goto v_resetjp_261_;
}
else
{
lean_inc(v_v_260_);
lean_inc(v_k_259_);
lean_dec(v_l_252_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_274_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v___x_264_; lean_object* v___x_266_; 
v___x_264_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_253_, 2);
if (v_isShared_263_ == 0)
{
lean_ctor_set(v___x_262_, 4, v_r_253_);
lean_ctor_set(v___x_262_, 3, v_r_253_);
lean_ctor_set(v___x_262_, 2, v_v_20_);
lean_ctor_set(v___x_262_, 1, v_k_19_);
lean_ctor_set(v___x_262_, 0, v___x_168_);
v___x_266_ = v___x_262_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v___x_168_);
lean_ctor_set(v_reuseFailAlloc_273_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_273_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_273_, 3, v_r_253_);
lean_ctor_set(v_reuseFailAlloc_273_, 4, v_r_253_);
v___x_266_ = v_reuseFailAlloc_273_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
lean_object* v___x_268_; 
lean_inc(v_r_253_);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 3, v_r_253_);
lean_ctor_set(v___x_257_, 0, v___x_168_);
v___x_268_ = v___x_257_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v___x_168_);
lean_ctor_set(v_reuseFailAlloc_272_, 1, v_k_254_);
lean_ctor_set(v_reuseFailAlloc_272_, 2, v_v_255_);
lean_ctor_set(v_reuseFailAlloc_272_, 3, v_r_253_);
lean_ctor_set(v_reuseFailAlloc_272_, 4, v_r_253_);
v___x_268_ = v_reuseFailAlloc_272_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
lean_object* v___x_270_; 
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v___x_268_);
lean_ctor_set(v___x_24_, 3, v___x_266_);
lean_ctor_set(v___x_24_, 2, v_v_260_);
lean_ctor_set(v___x_24_, 1, v_k_259_);
lean_ctor_set(v___x_24_, 0, v___x_264_);
v___x_270_ = v___x_24_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v___x_264_);
lean_ctor_set(v_reuseFailAlloc_271_, 1, v_k_259_);
lean_ctor_set(v_reuseFailAlloc_271_, 2, v_v_260_);
lean_ctor_set(v_reuseFailAlloc_271_, 3, v___x_266_);
lean_ctor_set(v_reuseFailAlloc_271_, 4, v___x_268_);
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
}
}
else
{
lean_object* v_r_281_; 
v_r_281_ = lean_ctor_get(v_impl_167_, 4);
lean_inc(v_r_281_);
if (lean_obj_tag(v_r_281_) == 0)
{
lean_object* v_k_282_; lean_object* v_v_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_294_; 
v_k_282_ = lean_ctor_get(v_impl_167_, 1);
v_v_283_ = lean_ctor_get(v_impl_167_, 2);
v_isSharedCheck_294_ = !lean_is_exclusive(v_impl_167_);
if (v_isSharedCheck_294_ == 0)
{
lean_object* v_unused_295_; lean_object* v_unused_296_; lean_object* v_unused_297_; 
v_unused_295_ = lean_ctor_get(v_impl_167_, 4);
lean_dec(v_unused_295_);
v_unused_296_ = lean_ctor_get(v_impl_167_, 3);
lean_dec(v_unused_296_);
v_unused_297_ = lean_ctor_get(v_impl_167_, 0);
lean_dec(v_unused_297_);
v___x_285_ = v_impl_167_;
v_isShared_286_ = v_isSharedCheck_294_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_v_283_);
lean_inc(v_k_282_);
lean_dec(v_impl_167_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_294_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_287_; lean_object* v___x_289_; 
v___x_287_ = lean_unsigned_to_nat(3u);
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 4, v_l_252_);
lean_ctor_set(v___x_285_, 2, v_v_20_);
lean_ctor_set(v___x_285_, 1, v_k_19_);
lean_ctor_set(v___x_285_, 0, v___x_168_);
v___x_289_ = v___x_285_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v___x_168_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_293_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_293_, 3, v_l_252_);
lean_ctor_set(v_reuseFailAlloc_293_, 4, v_l_252_);
v___x_289_ = v_reuseFailAlloc_293_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
lean_object* v___x_291_; 
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_r_281_);
lean_ctor_set(v___x_24_, 3, v___x_289_);
lean_ctor_set(v___x_24_, 2, v_v_283_);
lean_ctor_set(v___x_24_, 1, v_k_282_);
lean_ctor_set(v___x_24_, 0, v___x_287_);
v___x_291_ = v___x_24_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v___x_287_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v_k_282_);
lean_ctor_set(v_reuseFailAlloc_292_, 2, v_v_283_);
lean_ctor_set(v_reuseFailAlloc_292_, 3, v___x_289_);
lean_ctor_set(v_reuseFailAlloc_292_, 4, v_r_281_);
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
else
{
lean_object* v___x_298_; lean_object* v___x_300_; 
v___x_298_ = lean_unsigned_to_nat(2u);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_impl_167_);
lean_ctor_set(v___x_24_, 3, v_r_281_);
lean_ctor_set(v___x_24_, 0, v___x_298_);
v___x_300_ = v___x_24_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v___x_298_);
lean_ctor_set(v_reuseFailAlloc_301_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_301_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_301_, 3, v_r_281_);
lean_ctor_set(v_reuseFailAlloc_301_, 4, v_impl_167_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
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
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = lean_unsigned_to_nat(1u);
v___x_304_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
lean_ctor_set(v___x_304_, 1, v_k_15_);
lean_ctor_set(v___x_304_, 2, v_v_16_);
lean_ctor_set(v___x_304_, 3, v_t_17_);
lean_ctor_set(v___x_304_, 4, v_t_17_);
return v___x_304_;
}
}
}
static lean_object* _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__0(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_305_ = lean_unsigned_to_nat(0u);
v___x_306_ = lean_mk_empty_array_with_capacity(v___x_305_);
return v___x_306_;
}
}
static lean_object* _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__1(void){
_start:
{
lean_object* v___x_307_; 
v___x_307_ = lean_mk_string_unchecked("", 0, 0);
return v___x_307_;
}
}
static lean_object* _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__2(void){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = lean_mk_string_unchecked("<nil>", 5, 5);
return v___x_308_;
}
}
static lean_object* _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__3(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = lean_obj_once(&l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__2, &l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__2_once, _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__2);
v___x_310_ = l_Lake_BuildTrace_nil(v___x_309_);
return v___x_310_;
}
}
static lean_object* _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__4(void){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = lean_mk_string_unchecked("invalid target '", 16, 16);
return v___x_311_;
}
}
static lean_object* _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__5(void){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = lean_mk_string_unchecked("': target not found in package", 30, 30);
return v___x_312_;
}
}
static lean_object* _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__6(void){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = lean_mk_string_unchecked("': input target is of kind '", 28, 28);
return v___x_313_;
}
}
static lean_object* _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__7(void){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = lean_mk_string_unchecked("', but facet expects '", 22, 22);
return v___x_314_;
}
}
static lean_object* _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__8(void){
_start:
{
lean_object* v___x_315_; 
v___x_315_ = lean_mk_string_unchecked("'", 1, 1);
return v___x_315_;
}
}
static lean_object* _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__9(void){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = lean_mk_string_unchecked("': unknown facet '", 18, 18);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Index_0__Lake_recBuildWithIndex(lean_object* v_info_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_){
_start:
{
if (lean_obj_tag(v_info_317_) == 0)
{
lean_object* v_package_325_; lean_object* v_target_326_; lean_object* v___x_327_; 
v_package_325_ = lean_ctor_get(v_info_317_, 0);
v_target_326_ = lean_ctor_get(v_info_317_, 1);
v___x_327_ = l_Lake_Package_findTargetDecl_x3f(v_target_326_, v_package_325_);
if (lean_obj_tag(v___x_327_) == 1)
{
lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_364_; 
lean_inc(v_target_326_);
lean_inc_ref(v_package_325_);
v_isSharedCheck_364_ = !lean_is_exclusive(v_info_317_);
if (v_isSharedCheck_364_ == 0)
{
lean_object* v_unused_365_; lean_object* v_unused_366_; 
v_unused_365_ = lean_ctor_get(v_info_317_, 1);
lean_dec(v_unused_365_);
v_unused_366_ = lean_ctor_get(v_info_317_, 0);
lean_dec(v_unused_366_);
v___x_329_ = v_info_317_;
v_isShared_330_ = v_isSharedCheck_364_;
goto v_resetjp_328_;
}
else
{
lean_dec(v_info_317_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_364_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v_val_331_; lean_object* v_name_332_; lean_object* v_kind_333_; lean_object* v_config_334_; uint8_t v___x_335_; 
v_val_331_ = lean_ctor_get(v___x_327_, 0);
lean_inc(v_val_331_);
lean_dec_ref(v___x_327_);
v_name_332_ = lean_ctor_get(v_val_331_, 1);
lean_inc(v_name_332_);
v_kind_333_ = lean_ctor_get(v_val_331_, 2);
lean_inc(v_kind_333_);
v_config_334_ = lean_ctor_get(v_val_331_, 3);
lean_inc(v_config_334_);
lean_dec(v_val_331_);
v___x_335_ = l_Lean_Name_isAnonymous(v_kind_333_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; uint8_t v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_344_; 
lean_dec(v_target_326_);
lean_dec_ref(v_a_318_);
v___x_336_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_336_, 0, v_package_325_);
lean_ctor_set(v___x_336_, 1, v_name_332_);
lean_ctor_set(v___x_336_, 2, v_config_334_);
v___x_337_ = lean_unsigned_to_nat(0u);
v___x_338_ = lean_obj_once(&l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__0, &l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__0_once, _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__0);
v___x_339_ = lean_obj_once(&l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__1, &l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__1_once, _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__1);
v___x_340_ = 0;
v___x_341_ = lean_obj_once(&l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__3, &l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__3_once, _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__3);
v___x_342_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_342_, 0, v___x_338_);
lean_ctor_set(v___x_342_, 1, v___x_341_);
lean_ctor_set(v___x_342_, 2, v___x_337_);
lean_ctor_set_uint8(v___x_342_, sizeof(void*)*3, v___x_340_);
lean_ctor_set_uint8(v___x_342_, sizeof(void*)*3 + 1, v___x_335_);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 1, v___x_342_);
lean_ctor_set(v___x_329_, 0, v___x_336_);
v___x_344_ = v___x_329_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v___x_336_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v___x_342_);
v___x_344_ = v_reuseFailAlloc_348_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
lean_object* v___x_345_; lean_object* v_job_346_; lean_object* v___x_347_; 
v___x_345_ = lean_task_pure(v___x_344_);
v_job_346_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_job_346_, 0, v___x_345_);
lean_ctor_set(v_job_346_, 1, v_kind_333_);
lean_ctor_set(v_job_346_, 2, v___x_339_);
lean_ctor_set_uint8(v_job_346_, sizeof(void*)*3, v___x_335_);
v___x_347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_347_, 0, v_job_346_);
lean_ctor_set(v___x_347_, 1, v_a_323_);
return v___x_347_;
}
}
else
{
lean_object* v_keyName_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v_key_353_; 
lean_dec(v_kind_333_);
lean_dec(v_name_332_);
v_keyName_349_ = lean_ctor_get(v_package_325_, 2);
v___x_350_ = lean_st_ref_take(v_a_321_);
lean_inc(v___x_350_);
v___x_351_ = lean_st_ref_set(v_a_321_, v___x_350_);
lean_inc(v_keyName_349_);
if (v_isShared_330_ == 0)
{
lean_ctor_set_tag(v___x_329_, 3);
lean_ctor_set(v___x_329_, 0, v_keyName_349_);
v_key_353_ = v___x_329_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_keyName_349_);
lean_ctor_set(v_reuseFailAlloc_363_, 1, v_target_326_);
v_key_353_ = v_reuseFailAlloc_363_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
lean_object* v___x_354_; 
v___x_354_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__0___redArg(v___x_350_, v_key_353_);
lean_dec(v___x_350_);
if (lean_obj_tag(v___x_354_) == 0)
{
lean_object* v_fetchFn_355_; lean_object* v___x_356_; 
v_fetchFn_355_ = lean_ctor_get(v_config_334_, 0);
lean_inc_ref(v_fetchFn_355_);
lean_dec(v_config_334_);
lean_inc_ref(v_a_322_);
lean_inc(v_a_321_);
lean_inc(v_a_320_);
lean_inc(v_a_319_);
v___x_356_ = lean_apply_8(v_fetchFn_355_, v_package_325_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, lean_box(0));
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
lean_inc(v_a_357_);
v___x_358_ = lean_st_ref_take(v_a_321_);
v___x_359_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__1___redArg(v_key_353_, v_a_357_, v___x_358_);
v___x_360_ = lean_st_ref_set(v_a_321_, v___x_359_);
return v___x_356_;
}
else
{
lean_dec_ref(v_key_353_);
return v___x_356_;
}
}
else
{
lean_object* v_val_361_; lean_object* v___x_362_; 
lean_dec_ref(v_key_353_);
lean_dec(v_config_334_);
lean_dec_ref(v_package_325_);
lean_dec_ref(v_a_318_);
v_val_361_ = lean_ctor_get(v___x_354_, 0);
lean_inc(v_val_361_);
lean_dec_ref(v___x_354_);
v___x_362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_362_, 0, v_val_361_);
lean_ctor_set(v___x_362_, 1, v_a_323_);
return v___x_362_;
}
}
}
}
}
else
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
lean_dec(v___x_327_);
lean_dec_ref(v_a_318_);
v___x_367_ = lean_obj_once(&l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__4, &l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__4_once, _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__4);
v___x_368_ = l_Lake_BuildInfo_key(v_info_317_);
v___x_369_ = l_Lake_BuildKey_toString(v___x_368_);
v___x_370_ = lean_string_append(v___x_367_, v___x_369_);
lean_dec_ref(v___x_369_);
v___x_371_ = lean_obj_once(&l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__5, &l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__5_once, _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__5);
v___x_372_ = lean_string_append(v___x_370_, v___x_371_);
v___x_373_ = 3;
v___x_374_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_374_, 0, v___x_372_);
lean_ctor_set_uint8(v___x_374_, sizeof(void*)*1, v___x_373_);
v___x_375_ = lean_array_get_size(v_a_323_);
v___x_376_ = lean_array_push(v_a_323_, v___x_374_);
v___x_377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_375_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
return v___x_377_;
}
}
else
{
lean_object* v_toContext_378_; lean_object* v_target_379_; lean_object* v_kind_380_; lean_object* v_data_381_; lean_object* v_facet_382_; lean_object* v_facetConfigs_383_; lean_object* v___x_384_; 
v_toContext_378_ = lean_ctor_get(v_a_322_, 1);
v_target_379_ = lean_ctor_get(v_info_317_, 0);
v_kind_380_ = lean_ctor_get(v_info_317_, 1);
v_data_381_ = lean_ctor_get(v_info_317_, 2);
v_facet_382_ = lean_ctor_get(v_info_317_, 3);
v_facetConfigs_383_ = lean_ctor_get(v_toContext_378_, 6);
v___x_384_ = l_Lake_FacetConfigMap_get_x3f(v_facet_382_, v_facetConfigs_383_);
if (lean_obj_tag(v___x_384_) == 1)
{
lean_object* v_val_385_; lean_object* v_kind_386_; lean_object* v_fetchFn_387_; uint8_t v_memoize_388_; uint8_t v___x_389_; 
lean_inc(v_kind_380_);
v_val_385_ = lean_ctor_get(v___x_384_, 0);
lean_inc(v_val_385_);
lean_dec_ref(v___x_384_);
v_kind_386_ = lean_ctor_get(v_val_385_, 0);
lean_inc(v_kind_386_);
v_fetchFn_387_ = lean_ctor_get(v_val_385_, 1);
lean_inc_ref(v_fetchFn_387_);
v_memoize_388_ = lean_ctor_get_uint8(v_val_385_, sizeof(void*)*4 + 1);
lean_dec(v_val_385_);
v___x_389_ = lean_name_eq(v_kind_386_, v_kind_380_);
if (v___x_389_ == 0)
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; uint8_t v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; uint8_t v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
lean_dec_ref(v_fetchFn_387_);
lean_dec_ref(v_a_318_);
v___x_390_ = lean_obj_once(&l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__4, &l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__4_once, _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__4);
v___x_391_ = l_Lake_BuildInfo_key(v_info_317_);
v___x_392_ = l_Lake_BuildKey_toString(v___x_391_);
v___x_393_ = lean_string_append(v___x_390_, v___x_392_);
lean_dec_ref(v___x_392_);
v___x_394_ = lean_obj_once(&l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__6, &l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__6_once, _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__6);
v___x_395_ = lean_string_append(v___x_393_, v___x_394_);
v___x_396_ = 1;
v___x_397_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_380_, v___x_396_);
v___x_398_ = lean_string_append(v___x_395_, v___x_397_);
lean_dec_ref(v___x_397_);
v___x_399_ = lean_obj_once(&l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__7, &l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__7_once, _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__7);
v___x_400_ = lean_string_append(v___x_398_, v___x_399_);
v___x_401_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_386_, v___x_396_);
v___x_402_ = lean_string_append(v___x_400_, v___x_401_);
lean_dec_ref(v___x_401_);
v___x_403_ = lean_obj_once(&l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__8, &l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__8_once, _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__8);
v___x_404_ = lean_string_append(v___x_402_, v___x_403_);
v___x_405_ = 3;
v___x_406_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_406_, 0, v___x_404_);
lean_ctor_set_uint8(v___x_406_, sizeof(void*)*1, v___x_405_);
v___x_407_ = lean_array_get_size(v_a_323_);
v___x_408_ = lean_array_push(v_a_323_, v___x_406_);
v___x_409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_407_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
return v___x_409_;
}
else
{
lean_inc(v_facet_382_);
lean_inc(v_data_381_);
lean_inc_ref(v_target_379_);
lean_dec(v_kind_386_);
lean_dec(v_kind_380_);
lean_dec_ref(v_info_317_);
if (v_memoize_388_ == 0)
{
lean_object* v___x_410_; 
lean_dec(v_facet_382_);
lean_dec_ref(v_target_379_);
lean_inc_ref(v_a_322_);
lean_inc(v_a_321_);
lean_inc(v_a_320_);
lean_inc(v_a_319_);
v___x_410_ = lean_apply_8(v_fetchFn_387_, v_data_381_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, lean_box(0));
return v___x_410_;
}
else
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_411_ = lean_st_ref_take(v_a_321_);
lean_inc(v___x_411_);
v___x_412_ = lean_st_ref_set(v_a_321_, v___x_411_);
v___x_413_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_413_, 0, v_target_379_);
lean_ctor_set(v___x_413_, 1, v_facet_382_);
v___x_414_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__0___redArg(v___x_411_, v___x_413_);
lean_dec(v___x_411_);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v___x_415_; 
lean_inc_ref(v_a_322_);
lean_inc(v_a_321_);
lean_inc(v_a_320_);
lean_inc(v_a_319_);
v___x_415_ = lean_apply_8(v_fetchFn_387_, v_data_381_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, lean_box(0));
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc(v_a_416_);
v___x_417_ = lean_st_ref_take(v_a_321_);
v___x_418_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__1___redArg(v___x_413_, v_a_416_, v___x_417_);
v___x_419_ = lean_st_ref_set(v_a_321_, v___x_418_);
return v___x_415_;
}
else
{
lean_dec_ref(v___x_413_);
return v___x_415_;
}
}
else
{
lean_object* v_val_420_; lean_object* v___x_421_; 
lean_dec_ref(v___x_413_);
lean_dec_ref(v_fetchFn_387_);
lean_dec(v_data_381_);
lean_dec_ref(v_a_318_);
v_val_420_ = lean_ctor_get(v___x_414_, 0);
lean_inc(v_val_420_);
lean_dec_ref(v___x_414_);
v___x_421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_421_, 0, v_val_420_);
lean_ctor_set(v___x_421_, 1, v_a_323_);
return v___x_421_;
}
}
}
}
else
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; uint8_t v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
lean_inc(v_facet_382_);
lean_dec(v___x_384_);
lean_dec_ref(v_a_318_);
v___x_422_ = lean_obj_once(&l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__4, &l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__4_once, _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__4);
v___x_423_ = l_Lake_BuildInfo_key(v_info_317_);
v___x_424_ = l_Lake_BuildKey_toString(v___x_423_);
v___x_425_ = lean_string_append(v___x_422_, v___x_424_);
lean_dec_ref(v___x_424_);
v___x_426_ = lean_obj_once(&l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__9, &l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__9_once, _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__9);
v___x_427_ = lean_string_append(v___x_425_, v___x_426_);
v___x_428_ = 1;
v___x_429_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_facet_382_, v___x_428_);
v___x_430_ = lean_string_append(v___x_427_, v___x_429_);
lean_dec_ref(v___x_429_);
v___x_431_ = lean_obj_once(&l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__8, &l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__8_once, _init_l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___closed__8);
v___x_432_ = lean_string_append(v___x_430_, v___x_431_);
v___x_433_ = 3;
v___x_434_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_434_, 0, v___x_432_);
lean_ctor_set_uint8(v___x_434_, sizeof(void*)*1, v___x_433_);
v___x_435_ = lean_array_get_size(v_a_323_);
v___x_436_ = lean_array_push(v_a_323_, v___x_434_);
v___x_437_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_437_, 0, v___x_435_);
lean_ctor_set(v___x_437_, 1, v___x_436_);
return v___x_437_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Index_0__Lake_recBuildWithIndex___boxed(lean_object* v_info_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l___private_Lake_Build_Index_0__Lake_recBuildWithIndex(v_info_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_, v_a_443_, v_a_444_);
lean_dec_ref(v_a_443_);
lean_dec(v_a_442_);
lean_dec(v_a_441_);
lean_dec(v_a_440_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__0(lean_object* v_00_u03b2_447_, lean_object* v_inst_448_, lean_object* v_t_449_, lean_object* v_k_450_){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__0___redArg(v_t_449_, v_k_450_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__0___boxed(lean_object* v_00_u03b2_452_, lean_object* v_inst_453_, lean_object* v_t_454_, lean_object* v_k_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__0(v_00_u03b2_452_, v_inst_453_, v_t_454_, v_k_455_);
lean_dec_ref(v_k_455_);
lean_dec(v_t_454_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__1(lean_object* v_00_u03b2_457_, lean_object* v_k_458_, lean_object* v_v_459_, lean_object* v_t_460_, lean_object* v_hl_461_){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Index_0__Lake_recBuildWithIndex_spec__1___redArg(v_k_458_, v_v_459_, v_t_460_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_List_partition_loop___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__1(lean_object* v___x_463_, uint8_t v___x_464_, lean_object* v_a_465_, lean_object* v_a_466_){
_start:
{
if (lean_obj_tag(v_a_465_) == 0)
{
lean_object* v_fst_467_; lean_object* v_snd_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_477_; 
v_fst_467_ = lean_ctor_get(v_a_466_, 0);
v_snd_468_ = lean_ctor_get(v_a_466_, 1);
v_isSharedCheck_477_ = !lean_is_exclusive(v_a_466_);
if (v_isSharedCheck_477_ == 0)
{
v___x_470_ = v_a_466_;
v_isShared_471_ = v_isSharedCheck_477_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_snd_468_);
lean_inc(v_fst_467_);
lean_dec(v_a_466_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_477_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_475_; 
v___x_472_ = l_List_reverse___redArg(v_fst_467_);
v___x_473_ = l_List_reverse___redArg(v_snd_468_);
if (v_isShared_471_ == 0)
{
lean_ctor_set(v___x_470_, 1, v___x_473_);
lean_ctor_set(v___x_470_, 0, v___x_472_);
v___x_475_ = v___x_470_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v___x_472_);
lean_ctor_set(v_reuseFailAlloc_476_, 1, v___x_473_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
else
{
lean_object* v_head_478_; lean_object* v_tail_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_501_; 
v_head_478_ = lean_ctor_get(v_a_465_, 0);
v_tail_479_ = lean_ctor_get(v_a_465_, 1);
v_isSharedCheck_501_ = !lean_is_exclusive(v_a_465_);
if (v_isSharedCheck_501_ == 0)
{
v___x_481_ = v_a_465_;
v_isShared_482_ = v_isSharedCheck_501_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_tail_479_);
lean_inc(v_head_478_);
lean_dec(v_a_465_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_501_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v_fst_483_; lean_object* v_snd_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_500_; 
v_fst_483_ = lean_ctor_get(v_a_466_, 0);
v_snd_484_ = lean_ctor_get(v_a_466_, 1);
v_isSharedCheck_500_ = !lean_is_exclusive(v_a_466_);
if (v_isSharedCheck_500_ == 0)
{
v___x_486_ = v_a_466_;
v_isShared_487_ = v_isSharedCheck_500_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_snd_484_);
lean_inc(v_fst_483_);
lean_dec(v_a_466_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_500_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
uint8_t v___x_496_; 
v___x_496_ = l_Lake_instDecidableEqBuildKey_decEq(v_head_478_, v___x_463_);
if (v___x_496_ == 0)
{
if (v___x_464_ == 0)
{
goto v___jp_488_;
}
else
{
lean_object* v___x_497_; lean_object* v___x_498_; 
lean_del_object(v___x_486_);
lean_del_object(v___x_481_);
v___x_497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_497_, 0, v_head_478_);
lean_ctor_set(v___x_497_, 1, v_fst_483_);
v___x_498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
lean_ctor_set(v___x_498_, 1, v_snd_484_);
v_a_465_ = v_tail_479_;
v_a_466_ = v___x_498_;
goto _start;
}
}
else
{
goto v___jp_488_;
}
v___jp_488_:
{
lean_object* v___x_490_; 
if (v_isShared_482_ == 0)
{
lean_ctor_set(v___x_481_, 1, v_snd_484_);
v___x_490_ = v___x_481_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_head_478_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v_snd_484_);
v___x_490_ = v_reuseFailAlloc_495_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
lean_object* v___x_492_; 
if (v_isShared_487_ == 0)
{
lean_ctor_set(v___x_486_, 1, v___x_490_);
v___x_492_ = v___x_486_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_fst_483_);
lean_ctor_set(v_reuseFailAlloc_494_, 1, v___x_490_);
v___x_492_ = v_reuseFailAlloc_494_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
v_a_465_ = v_tail_479_;
v_a_466_ = v___x_492_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_partition_loop___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__1___boxed(lean_object* v___x_502_, lean_object* v___x_503_, lean_object* v_a_504_, lean_object* v_a_505_){
_start:
{
uint8_t v___x_3042__boxed_506_; lean_object* v_res_507_; 
v___x_3042__boxed_506_ = lean_unbox(v___x_503_);
v_res_507_ = l_List_partition_loop___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__1(v___x_502_, v___x_3042__boxed_506_, v_a_504_, v_a_505_);
lean_dec_ref(v___x_502_);
return v_res_507_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__0(lean_object* v_a_508_, lean_object* v_x_509_){
_start:
{
if (lean_obj_tag(v_x_509_) == 0)
{
uint8_t v___x_510_; 
v___x_510_ = 0;
return v___x_510_;
}
else
{
lean_object* v_head_511_; lean_object* v_tail_512_; uint8_t v___x_513_; 
v_head_511_ = lean_ctor_get(v_x_509_, 0);
v_tail_512_ = lean_ctor_get(v_x_509_, 1);
v___x_513_ = l_Lake_instDecidableEqBuildKey_decEq(v_a_508_, v_head_511_);
if (v___x_513_ == 0)
{
v_x_509_ = v_tail_512_;
goto _start;
}
else
{
return v___x_513_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__0___boxed(lean_object* v_a_515_, lean_object* v_x_516_){
_start:
{
uint8_t v_res_517_; lean_object* v_r_518_; 
v_res_517_ = l_List_elem___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__0(v_a_515_, v_x_516_);
lean_dec(v_x_516_);
lean_dec_ref(v_a_515_);
v_r_518_ = lean_box(v_res_517_);
return v_r_518_;
}
}
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg___lam__0___boxed(lean_object* v___x_519_, lean_object* v_a_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg___lam__0(v___x_519_, v_a_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_);
lean_dec_ref(v___y_524_);
lean_dec(v___y_523_);
lean_dec(v___y_522_);
lean_dec(v___y_521_);
lean_dec(v___x_519_);
return v_res_527_;
}
}
static lean_object* _init_l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_528_ = lean_box(0);
v___x_529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
lean_ctor_set(v___x_529_, 1, v___x_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg(lean_object* v_a_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_){
_start:
{
lean_object* v___x_537_; uint8_t v___x_538_; 
lean_inc_ref(v_a_530_);
v___x_537_ = l_Lake_BuildInfo_key(v_a_530_);
v___x_538_ = l_List_elem___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__0(v___x_537_, v___y_532_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; lean_object* v___f_540_; lean_object* v___x_541_; 
lean_inc(v___y_532_);
v___x_539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_539_, 0, v___x_537_);
lean_ctor_set(v___x_539_, 1, v___y_532_);
lean_inc_ref(v___x_539_);
v___f_540_ = lean_alloc_closure((void*)(l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_540_, 0, v___x_539_);
v___x_541_ = l___private_Lake_Build_Index_0__Lake_recBuildWithIndex(v_a_530_, v___f_540_, v___y_531_, v___x_539_, v___y_533_, v___y_534_, v___y_535_);
lean_dec_ref(v___x_539_);
return v___x_541_;
}
else
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v_fst_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_560_; 
lean_dec_ref(v_a_530_);
v___x_542_ = lean_box(0);
v___x_543_ = lean_obj_once(&l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg___closed__0, &l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg___closed__0_once, _init_l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg___closed__0);
lean_inc(v___y_532_);
v___x_544_ = l_List_partition_loop___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__1(v___x_537_, v___x_538_, v___y_532_, v___x_543_);
v_fst_545_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_560_ == 0)
{
lean_object* v_unused_561_; 
v_unused_561_ = lean_ctor_get(v___x_544_, 1);
lean_dec(v_unused_561_);
v___x_547_ = v___x_544_;
v_isShared_548_ = v_isSharedCheck_560_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_fst_545_);
lean_dec(v___x_544_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_560_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_550_; 
lean_inc_ref(v___x_537_);
if (v_isShared_548_ == 0)
{
lean_ctor_set_tag(v___x_547_, 1);
lean_ctor_set(v___x_547_, 1, v_fst_545_);
lean_ctor_set(v___x_547_, 0, v___x_537_);
v___x_550_ = v___x_547_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v___x_537_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v_fst_545_);
v___x_550_ = v_reuseFailAlloc_559_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; uint8_t v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_551_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_551_, 0, v___x_537_);
lean_ctor_set(v___x_551_, 1, v___x_542_);
v___x_552_ = l_List_appendTR___redArg(v___x_550_, v___x_551_);
v___x_553_ = l_Lake_buildCycleError(v___x_552_);
v___x_554_ = 3;
v___x_555_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_555_, 0, v___x_553_);
lean_ctor_set_uint8(v___x_555_, sizeof(void*)*1, v___x_554_);
v___x_556_ = lean_array_get_size(v___y_535_);
v___x_557_ = lean_array_push(v___y_535_, v___x_555_);
v___x_558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_556_);
lean_ctor_set(v___x_558_, 1, v___x_557_);
return v___x_558_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg___lam__0(lean_object* v___x_562_, lean_object* v_a_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg(v_a_563_, v___y_564_, v___x_562_, v___y_566_, v___y_567_, v___y_568_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg___boxed(lean_object* v_a_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg(v_a_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
lean_dec_ref(v___y_575_);
lean_dec(v___y_574_);
lean_dec(v___y_573_);
lean_dec(v___y_572_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Index_0__Lake_recFetchWithIndex(lean_object* v_info_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg(v_info_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Index_0__Lake_recFetchWithIndex___boxed(lean_object* v_info_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l___private_Lake_Build_Index_0__Lake_recFetchWithIndex(v_info_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_);
lean_dec_ref(v_a_591_);
lean_dec(v_a_590_);
lean_dec(v_a_589_);
lean_dec(v_a_588_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0(lean_object* v_a_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_){
_start:
{
lean_object* v___x_602_; 
v___x_602_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg(v_a_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0___boxed(lean_object* v_a_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0(v_a_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec(v___y_606_);
lean_dec(v___y_605_);
lean_dec(v___y_604_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2(lean_object* v_inst_611_, lean_object* v_a_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___redArg(v_a_612_, v___y_613_, v___y_614_, v___y_615_, v___y_616_, v___y_617_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2___boxed(lean_object* v_inst_620_, lean_object* v_a_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Build_Index_0__Lake_recFetchWithIndex_spec__0_spec__2(v_inst_620_, v_a_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec(v___y_624_);
lean_dec(v___y_623_);
lean_dec(v___y_622_);
return v_res_628_;
}
}
static lean_object* _init_l_Lake_FetchT_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_629_; 
v___x_629_ = lean_alloc_closure((void*)(l___private_Lake_Build_Index_0__Lake_recFetchWithIndex___boxed), 7, 0);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lake_FetchT_run___redArg(lean_object* v_x_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = lean_obj_once(&l_Lake_FetchT_run___redArg___closed__0, &l_Lake_FetchT_run___redArg___closed__0_once, _init_l_Lake_FetchT_run___redArg___closed__0);
lean_inc_ref(v_a_634_);
lean_inc(v_a_633_);
lean_inc(v_a_632_);
lean_inc(v_a_631_);
v___x_636_ = lean_apply_5(v_x_630_, v___x_635_, v_a_631_, v_a_632_, v_a_633_, v_a_634_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lake_FetchT_run___redArg___boxed(lean_object* v_x_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = l_Lake_FetchT_run___redArg(v_x_637_, v_a_638_, v_a_639_, v_a_640_, v_a_641_);
lean_dec_ref(v_a_641_);
lean_dec(v_a_640_);
lean_dec(v_a_639_);
lean_dec(v_a_638_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l_Lake_FetchT_run(lean_object* v_m_643_, lean_object* v_00_u03b1_644_, lean_object* v_x_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = lean_obj_once(&l_Lake_FetchT_run___redArg___closed__0, &l_Lake_FetchT_run___redArg___closed__0_once, _init_l_Lake_FetchT_run___redArg___closed__0);
lean_inc_ref(v_a_649_);
lean_inc(v_a_648_);
lean_inc(v_a_647_);
lean_inc(v_a_646_);
v___x_651_ = lean_apply_5(v_x_645_, v___x_650_, v_a_646_, v_a_647_, v_a_648_, v_a_649_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_Lake_FetchT_run___boxed(lean_object* v_m_652_, lean_object* v_00_u03b1_653_, lean_object* v_x_654_, lean_object* v_a_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l_Lake_FetchT_run(v_m_652_, v_00_u03b1_653_, v_x_654_, v_a_655_, v_a_656_, v_a_657_, v_a_658_);
lean_dec_ref(v_a_658_);
lean_dec(v_a_657_);
lean_dec(v_a_656_);
lean_dec(v_a_655_);
return v_res_659_;
}
}
lean_object* runtime_initialize_Lake_Build_Fetch(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Topological(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_StoreInsts(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Index(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lake_Build_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Topological(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_StoreInsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Index(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Build_Fetch(uint8_t builtin);
lean_object* initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* initialize_Lake_Build_Topological(uint8_t builtin);
lean_object* initialize_Lake_Util_StoreInsts(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Index(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Build_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Topological(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_StoreInsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Index(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Index(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Index(builtin);
}
#ifdef __cplusplus
}
#endif
