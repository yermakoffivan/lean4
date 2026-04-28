// Lean compiler output
// Module: Lake.Build.Store
// Imports: public import Lake.Util.Store public import Lake.Build.Job.Basic
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
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildStore_empty;
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getModuleFacetJob_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getModuleFacetJob_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getModuleFacetJob_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getModuleFacetJob_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectModuleFacetArray___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectModuleFacetArray___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__0;
static lean_once_cell_t l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__1;
static lean_once_cell_t l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__2;
static lean_once_cell_t l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__3;
static lean_once_cell_t l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__4;
static lean_once_cell_t l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__5;
static lean_once_cell_t l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__6;
static lean_once_cell_t l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__7;
static lean_once_cell_t l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__8;
static lean_once_cell_t l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__9;
static lean_once_cell_t l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__10;
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectModuleFacetArray___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectModuleFacetArray(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectModuleFacetMap___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectModuleFacetMap___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectModuleFacetMap___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectModuleFacetMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getPackageFacetJob_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getPackageFacetJob_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getPackageFacetJob_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getPackageFacetJob_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectPackageFacetArray___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectPackageFacetArray___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectPackageFacetArray___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectPackageFacetArray(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getTargetFacetJob_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getTargetFacetJob_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getTargetFacetJob_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getTargetFacetJob_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectTargetFacetArray___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectTargetFacetArray___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectTargetFacetArray___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectTargetFacetArray(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__0;
static lean_once_cell_t l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__1;
static lean_once_cell_t l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectSharedExternLibs___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectSharedExternLibs(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lake_BuildStore_empty(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_box(1);
return v___x_1_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getModuleFacetJob_x3f___redArg(lean_object* v_facet_2_, lean_object* v_k_3_, lean_object* v_v_4_){
_start:
{
if (lean_obj_tag(v_k_3_) == 4)
{
lean_object* v_target_5_; 
v_target_5_ = lean_ctor_get(v_k_3_, 0);
lean_inc_ref(v_target_5_);
switch(lean_obj_tag(v_target_5_))
{
case 0:
{
lean_object* v_facet_6_; lean_object* v___x_8_; uint8_t v_isShared_9_; uint8_t v_isSharedCheck_23_; 
v_facet_6_ = lean_ctor_get(v_k_3_, 1);
v_isSharedCheck_23_ = !lean_is_exclusive(v_k_3_);
if (v_isSharedCheck_23_ == 0)
{
lean_object* v_unused_24_; 
v_unused_24_ = lean_ctor_get(v_k_3_, 0);
lean_dec(v_unused_24_);
v___x_8_ = v_k_3_;
v_isShared_9_ = v_isSharedCheck_23_;
goto v_resetjp_7_;
}
else
{
lean_inc(v_facet_6_);
lean_dec(v_k_3_);
v___x_8_ = lean_box(0);
v_isShared_9_ = v_isSharedCheck_23_;
goto v_resetjp_7_;
}
v_resetjp_7_:
{
lean_object* v_module_10_; lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_22_; 
v_module_10_ = lean_ctor_get(v_target_5_, 0);
v_isSharedCheck_22_ = !lean_is_exclusive(v_target_5_);
if (v_isSharedCheck_22_ == 0)
{
v___x_12_ = v_target_5_;
v_isShared_13_ = v_isSharedCheck_22_;
goto v_resetjp_11_;
}
else
{
lean_inc(v_module_10_);
lean_dec(v_target_5_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_22_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
uint8_t v___x_14_; 
v___x_14_ = lean_name_eq(v_facet_6_, v_facet_2_);
lean_dec(v_facet_6_);
if (v___x_14_ == 0)
{
lean_object* v___x_15_; 
lean_del_object(v___x_12_);
lean_dec(v_module_10_);
lean_del_object(v___x_8_);
lean_dec_ref(v_v_4_);
v___x_15_ = lean_box(0);
return v___x_15_;
}
else
{
lean_object* v___x_17_; 
if (v_isShared_9_ == 0)
{
lean_ctor_set_tag(v___x_8_, 0);
lean_ctor_set(v___x_8_, 1, v_v_4_);
lean_ctor_set(v___x_8_, 0, v_module_10_);
v___x_17_ = v___x_8_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v_module_10_);
lean_ctor_set(v_reuseFailAlloc_21_, 1, v_v_4_);
v___x_17_ = v_reuseFailAlloc_21_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
lean_object* v___x_19_; 
if (v_isShared_13_ == 0)
{
lean_ctor_set_tag(v___x_12_, 1);
lean_ctor_set(v___x_12_, 0, v___x_17_);
v___x_19_ = v___x_12_;
goto v_reusejp_18_;
}
else
{
lean_object* v_reuseFailAlloc_20_; 
v_reuseFailAlloc_20_ = lean_alloc_ctor(1, 1, 0);
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
}
case 2:
{
lean_object* v_facet_25_; lean_object* v_module_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_36_; 
v_facet_25_ = lean_ctor_get(v_k_3_, 1);
lean_inc(v_facet_25_);
lean_dec_ref(v_k_3_);
v_module_26_ = lean_ctor_get(v_target_5_, 1);
v_isSharedCheck_36_ = !lean_is_exclusive(v_target_5_);
if (v_isSharedCheck_36_ == 0)
{
lean_object* v_unused_37_; 
v_unused_37_ = lean_ctor_get(v_target_5_, 0);
lean_dec(v_unused_37_);
v___x_28_ = v_target_5_;
v_isShared_29_ = v_isSharedCheck_36_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_module_26_);
lean_dec(v_target_5_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_36_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
uint8_t v___x_30_; 
v___x_30_ = lean_name_eq(v_facet_25_, v_facet_2_);
lean_dec(v_facet_25_);
if (v___x_30_ == 0)
{
lean_object* v___x_31_; 
lean_del_object(v___x_28_);
lean_dec(v_module_26_);
lean_dec_ref(v_v_4_);
v___x_31_ = lean_box(0);
return v___x_31_;
}
else
{
lean_object* v___x_33_; 
if (v_isShared_29_ == 0)
{
lean_ctor_set_tag(v___x_28_, 0);
lean_ctor_set(v___x_28_, 1, v_v_4_);
lean_ctor_set(v___x_28_, 0, v_module_26_);
v___x_33_ = v___x_28_;
goto v_reusejp_32_;
}
else
{
lean_object* v_reuseFailAlloc_35_; 
v_reuseFailAlloc_35_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_35_, 0, v_module_26_);
lean_ctor_set(v_reuseFailAlloc_35_, 1, v_v_4_);
v___x_33_ = v_reuseFailAlloc_35_;
goto v_reusejp_32_;
}
v_reusejp_32_:
{
lean_object* v___x_34_; 
v___x_34_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_34_, 0, v___x_33_);
return v___x_34_;
}
}
}
}
default: 
{
lean_object* v___x_38_; 
lean_dec_ref(v_target_5_);
lean_dec_ref(v_k_3_);
lean_dec_ref(v_v_4_);
v___x_38_ = lean_box(0);
return v___x_38_;
}
}
}
else
{
lean_object* v___x_39_; 
lean_dec_ref(v_v_4_);
lean_dec_ref(v_k_3_);
v___x_39_ = lean_box(0);
return v___x_39_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getModuleFacetJob_x3f___redArg___boxed(lean_object* v_facet_40_, lean_object* v_k_41_, lean_object* v_v_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l___private_Lake_Build_Store_0__Lake_BuildStore_getModuleFacetJob_x3f___redArg(v_facet_40_, v_k_41_, v_v_42_);
lean_dec(v_facet_40_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getModuleFacetJob_x3f(lean_object* v_00_u03b1_44_, lean_object* v_facet_45_, lean_object* v_inst_46_, lean_object* v_k_47_, lean_object* v_v_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l___private_Lake_Build_Store_0__Lake_BuildStore_getModuleFacetJob_x3f___redArg(v_facet_45_, v_k_47_, v_v_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getModuleFacetJob_x3f___boxed(lean_object* v_00_u03b1_50_, lean_object* v_facet_51_, lean_object* v_inst_52_, lean_object* v_k_53_, lean_object* v_v_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l___private_Lake_Build_Store_0__Lake_BuildStore_getModuleFacetJob_x3f(v_00_u03b1_50_, v_facet_51_, v_inst_52_, v_k_53_, v_v_54_);
lean_dec(v_facet_51_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectModuleFacetArray___redArg___lam__0(lean_object* v_facet_56_, lean_object* v_a_57_, lean_object* v_b_58_, lean_object* v_acc_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l___private_Lake_Build_Store_0__Lake_BuildStore_getModuleFacetJob_x3f___redArg(v_facet_56_, v_a_57_, v_b_58_);
if (lean_obj_tag(v___x_60_) == 1)
{
lean_object* v_val_61_; lean_object* v___x_63_; uint8_t v_isShared_64_; uint8_t v_isSharedCheck_70_; 
v_val_61_ = lean_ctor_get(v___x_60_, 0);
v_isSharedCheck_70_ = !lean_is_exclusive(v___x_60_);
if (v_isSharedCheck_70_ == 0)
{
v___x_63_ = v___x_60_;
v_isShared_64_ = v_isSharedCheck_70_;
goto v_resetjp_62_;
}
else
{
lean_inc(v_val_61_);
lean_dec(v___x_60_);
v___x_63_ = lean_box(0);
v_isShared_64_ = v_isSharedCheck_70_;
goto v_resetjp_62_;
}
v_resetjp_62_:
{
lean_object* v_snd_65_; lean_object* v___x_66_; lean_object* v___x_68_; 
v_snd_65_ = lean_ctor_get(v_val_61_, 1);
lean_inc(v_snd_65_);
lean_dec(v_val_61_);
v___x_66_ = lean_array_push(v_acc_59_, v_snd_65_);
if (v_isShared_64_ == 0)
{
lean_ctor_set(v___x_63_, 0, v___x_66_);
v___x_68_ = v___x_63_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v___x_66_);
v___x_68_ = v_reuseFailAlloc_69_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
return v___x_68_;
}
}
}
else
{
lean_object* v___x_71_; 
lean_dec(v___x_60_);
v___x_71_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_71_, 0, v_acc_59_);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectModuleFacetArray___redArg___lam__0___boxed(lean_object* v_facet_72_, lean_object* v_a_73_, lean_object* v_b_74_, lean_object* v_acc_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Lake_BuildStore_collectModuleFacetArray___redArg___lam__0(v_facet_72_, v_a_73_, v_b_74_, v_acc_75_);
lean_dec(v_facet_72_);
return v_res_76_;
}
}
static lean_object* _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__0(void){
_start:
{
lean_object* v___f_77_; 
v___f_77_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_77_;
}
}
static lean_object* _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__1(void){
_start:
{
lean_object* v___f_78_; 
v___f_78_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_78_;
}
}
static lean_object* _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__2(void){
_start:
{
lean_object* v___f_79_; 
v___f_79_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_79_;
}
}
static lean_object* _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__3(void){
_start:
{
lean_object* v___f_80_; 
v___f_80_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_80_;
}
}
static lean_object* _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__4(void){
_start:
{
lean_object* v___f_81_; 
v___f_81_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_81_;
}
}
static lean_object* _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__5(void){
_start:
{
lean_object* v___f_82_; 
v___f_82_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_82_;
}
}
static lean_object* _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__6(void){
_start:
{
lean_object* v___f_83_; 
v___f_83_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_83_;
}
}
static lean_object* _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__7(void){
_start:
{
lean_object* v___f_84_; lean_object* v___f_85_; lean_object* v___x_86_; 
v___f_84_ = lean_obj_once(&l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__1, &l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__1_once, _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__1);
v___f_85_ = lean_obj_once(&l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__0, &l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__0_once, _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__0);
v___x_86_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_86_, 0, v___f_85_);
lean_ctor_set(v___x_86_, 1, v___f_84_);
return v___x_86_;
}
}
static lean_object* _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__8(void){
_start:
{
lean_object* v___f_87_; lean_object* v___f_88_; lean_object* v___f_89_; lean_object* v___f_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___f_87_ = lean_obj_once(&l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__5, &l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__5_once, _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__5);
v___f_88_ = lean_obj_once(&l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__4, &l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__4_once, _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__4);
v___f_89_ = lean_obj_once(&l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__3, &l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__3_once, _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__3);
v___f_90_ = lean_obj_once(&l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__2, &l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__2_once, _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__2);
v___x_91_ = lean_obj_once(&l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__7, &l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__7_once, _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__7);
v___x_92_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
lean_ctor_set(v___x_92_, 1, v___f_90_);
lean_ctor_set(v___x_92_, 2, v___f_89_);
lean_ctor_set(v___x_92_, 3, v___f_88_);
lean_ctor_set(v___x_92_, 4, v___f_87_);
return v___x_92_;
}
}
static lean_object* _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__9(void){
_start:
{
lean_object* v___f_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___f_93_ = lean_obj_once(&l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__6, &l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__6_once, _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__6);
v___x_94_ = lean_obj_once(&l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__8, &l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__8_once, _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__8);
v___x_95_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
lean_ctor_set(v___x_95_, 1, v___f_93_);
return v___x_95_;
}
}
static lean_object* _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__10(void){
_start:
{
lean_object* v___x_96_; lean_object* v_res_97_; 
v___x_96_ = lean_unsigned_to_nat(0u);
v_res_97_ = lean_mk_empty_array_with_capacity(v___x_96_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectModuleFacetArray___redArg(lean_object* v_self_98_, lean_object* v_facet_99_){
_start:
{
lean_object* v___f_100_; lean_object* v___x_101_; lean_object* v_res_102_; lean_object* v___x_103_; lean_object* v_a_104_; 
v___f_100_ = lean_alloc_closure((void*)(l_Lake_BuildStore_collectModuleFacetArray___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_100_, 0, v_facet_99_);
v___x_101_ = lean_obj_once(&l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__9, &l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__9_once, _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__9);
v_res_102_ = lean_obj_once(&l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__10, &l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__10_once, _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__10);
v___x_103_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v___x_101_, v___f_100_, v_res_102_, v_self_98_);
v_a_104_ = lean_ctor_get(v___x_103_, 0);
lean_inc(v_a_104_);
lean_dec(v___x_103_);
return v_a_104_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectModuleFacetArray(lean_object* v_00_u03b1_105_, lean_object* v_self_106_, lean_object* v_facet_107_, lean_object* v_inst_108_){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = l_Lake_BuildStore_collectModuleFacetArray___redArg(v_self_106_, v_facet_107_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectModuleFacetMap___redArg___lam__0(lean_object* v_facet_110_, lean_object* v_a_111_, lean_object* v_b_112_, lean_object* v_acc_113_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l___private_Lake_Build_Store_0__Lake_BuildStore_getModuleFacetJob_x3f___redArg(v_facet_110_, v_a_111_, v_b_112_);
if (lean_obj_tag(v___x_114_) == 1)
{
lean_object* v_val_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_125_; 
v_val_115_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_125_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_125_ == 0)
{
v___x_117_ = v___x_114_;
v_isShared_118_ = v_isSharedCheck_125_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_val_115_);
lean_dec(v___x_114_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_125_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v_fst_119_; lean_object* v_snd_120_; lean_object* v___x_121_; lean_object* v___x_123_; 
v_fst_119_ = lean_ctor_get(v_val_115_, 0);
lean_inc(v_fst_119_);
v_snd_120_ = lean_ctor_get(v_val_115_, 1);
lean_inc(v_snd_120_);
lean_dec(v_val_115_);
v___x_121_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_119_, v_snd_120_, v_acc_113_);
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 0, v___x_121_);
v___x_123_ = v___x_117_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_121_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
}
else
{
lean_object* v___x_126_; 
lean_dec(v___x_114_);
v___x_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_126_, 0, v_acc_113_);
return v___x_126_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectModuleFacetMap___redArg___lam__0___boxed(lean_object* v_facet_127_, lean_object* v_a_128_, lean_object* v_b_129_, lean_object* v_acc_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lake_BuildStore_collectModuleFacetMap___redArg___lam__0(v_facet_127_, v_a_128_, v_b_129_, v_acc_130_);
lean_dec(v_facet_127_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectModuleFacetMap___redArg(lean_object* v_self_132_, lean_object* v_facet_133_){
_start:
{
lean_object* v___f_134_; lean_object* v___x_135_; lean_object* v_res_136_; lean_object* v___x_137_; lean_object* v_a_138_; 
v___f_134_ = lean_alloc_closure((void*)(l_Lake_BuildStore_collectModuleFacetMap___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_134_, 0, v_facet_133_);
v___x_135_ = lean_obj_once(&l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__9, &l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__9_once, _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__9);
v_res_136_ = lean_box(1);
v___x_137_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v___x_135_, v___f_134_, v_res_136_, v_self_132_);
v_a_138_ = lean_ctor_get(v___x_137_, 0);
lean_inc(v_a_138_);
lean_dec(v___x_137_);
return v_a_138_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectModuleFacetMap(lean_object* v_00_u03b1_139_, lean_object* v_self_140_, lean_object* v_facet_141_, lean_object* v_inst_142_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = l_Lake_BuildStore_collectModuleFacetMap___redArg(v_self_140_, v_facet_141_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getPackageFacetJob_x3f___redArg(lean_object* v_facet_144_, lean_object* v_k_145_, lean_object* v_v_146_){
_start:
{
if (lean_obj_tag(v_k_145_) == 4)
{
lean_object* v_target_147_; 
v_target_147_ = lean_ctor_get(v_k_145_, 0);
lean_inc_ref(v_target_147_);
if (lean_obj_tag(v_target_147_) == 1)
{
lean_object* v_facet_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_157_; 
v_facet_148_ = lean_ctor_get(v_k_145_, 1);
lean_inc(v_facet_148_);
lean_dec_ref(v_k_145_);
v_isSharedCheck_157_ = !lean_is_exclusive(v_target_147_);
if (v_isSharedCheck_157_ == 0)
{
lean_object* v_unused_158_; 
v_unused_158_ = lean_ctor_get(v_target_147_, 0);
lean_dec(v_unused_158_);
v___x_150_ = v_target_147_;
v_isShared_151_ = v_isSharedCheck_157_;
goto v_resetjp_149_;
}
else
{
lean_dec(v_target_147_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_157_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
uint8_t v___x_152_; 
v___x_152_ = lean_name_eq(v_facet_148_, v_facet_144_);
lean_dec(v_facet_148_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; 
lean_del_object(v___x_150_);
lean_dec_ref(v_v_146_);
v___x_153_ = lean_box(0);
return v___x_153_;
}
else
{
lean_object* v___x_155_; 
if (v_isShared_151_ == 0)
{
lean_ctor_set(v___x_150_, 0, v_v_146_);
v___x_155_ = v___x_150_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v_v_146_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
}
}
else
{
lean_object* v___x_159_; 
lean_dec_ref(v_target_147_);
lean_dec_ref(v_k_145_);
lean_dec_ref(v_v_146_);
v___x_159_ = lean_box(0);
return v___x_159_;
}
}
else
{
lean_object* v___x_160_; 
lean_dec_ref(v_v_146_);
lean_dec_ref(v_k_145_);
v___x_160_ = lean_box(0);
return v___x_160_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getPackageFacetJob_x3f___redArg___boxed(lean_object* v_facet_161_, lean_object* v_k_162_, lean_object* v_v_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l___private_Lake_Build_Store_0__Lake_BuildStore_getPackageFacetJob_x3f___redArg(v_facet_161_, v_k_162_, v_v_163_);
lean_dec(v_facet_161_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getPackageFacetJob_x3f(lean_object* v_00_u03b1_165_, lean_object* v_facet_166_, lean_object* v_inst_167_, lean_object* v_k_168_, lean_object* v_v_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = l___private_Lake_Build_Store_0__Lake_BuildStore_getPackageFacetJob_x3f___redArg(v_facet_166_, v_k_168_, v_v_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getPackageFacetJob_x3f___boxed(lean_object* v_00_u03b1_171_, lean_object* v_facet_172_, lean_object* v_inst_173_, lean_object* v_k_174_, lean_object* v_v_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l___private_Lake_Build_Store_0__Lake_BuildStore_getPackageFacetJob_x3f(v_00_u03b1_171_, v_facet_172_, v_inst_173_, v_k_174_, v_v_175_);
lean_dec(v_facet_172_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectPackageFacetArray___redArg___lam__0(lean_object* v_facet_177_, lean_object* v_a_178_, lean_object* v_b_179_, lean_object* v_acc_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = l___private_Lake_Build_Store_0__Lake_BuildStore_getPackageFacetJob_x3f___redArg(v_facet_177_, v_a_178_, v_b_179_);
if (lean_obj_tag(v___x_181_) == 1)
{
lean_object* v_val_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_190_; 
v_val_182_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_190_ == 0)
{
v___x_184_ = v___x_181_;
v_isShared_185_ = v_isSharedCheck_190_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_val_182_);
lean_dec(v___x_181_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_190_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_186_; lean_object* v___x_188_; 
v___x_186_ = lean_array_push(v_acc_180_, v_val_182_);
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 0, v___x_186_);
v___x_188_ = v___x_184_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v___x_186_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
else
{
lean_object* v___x_191_; 
lean_dec(v___x_181_);
v___x_191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_191_, 0, v_acc_180_);
return v___x_191_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectPackageFacetArray___redArg___lam__0___boxed(lean_object* v_facet_192_, lean_object* v_a_193_, lean_object* v_b_194_, lean_object* v_acc_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Lake_BuildStore_collectPackageFacetArray___redArg___lam__0(v_facet_192_, v_a_193_, v_b_194_, v_acc_195_);
lean_dec(v_facet_192_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectPackageFacetArray___redArg(lean_object* v_self_197_, lean_object* v_facet_198_){
_start:
{
lean_object* v___f_199_; lean_object* v___x_200_; lean_object* v_res_201_; lean_object* v___x_202_; lean_object* v_a_203_; 
v___f_199_ = lean_alloc_closure((void*)(l_Lake_BuildStore_collectPackageFacetArray___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_199_, 0, v_facet_198_);
v___x_200_ = lean_obj_once(&l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__9, &l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__9_once, _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__9);
v_res_201_ = lean_obj_once(&l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__10, &l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__10_once, _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__10);
v___x_202_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v___x_200_, v___f_199_, v_res_201_, v_self_197_);
v_a_203_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_a_203_);
lean_dec(v___x_202_);
return v_a_203_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectPackageFacetArray(lean_object* v_00_u03b1_204_, lean_object* v_self_205_, lean_object* v_facet_206_, lean_object* v_inst_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Lake_BuildStore_collectPackageFacetArray___redArg(v_self_205_, v_facet_206_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getTargetFacetJob_x3f___redArg(lean_object* v_facet_209_, lean_object* v_k_210_, lean_object* v_v_211_){
_start:
{
if (lean_obj_tag(v_k_210_) == 4)
{
lean_object* v_target_212_; 
v_target_212_ = lean_ctor_get(v_k_210_, 0);
if (lean_obj_tag(v_target_212_) == 3)
{
lean_object* v_facet_213_; uint8_t v___x_214_; 
v_facet_213_ = lean_ctor_get(v_k_210_, 1);
v___x_214_ = lean_name_eq(v_facet_213_, v_facet_209_);
if (v___x_214_ == 0)
{
lean_object* v___x_215_; 
lean_dec_ref(v_v_211_);
v___x_215_ = lean_box(0);
return v___x_215_;
}
else
{
lean_object* v___x_216_; 
v___x_216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_216_, 0, v_v_211_);
return v___x_216_;
}
}
else
{
lean_object* v___x_217_; 
lean_dec_ref(v_v_211_);
v___x_217_ = lean_box(0);
return v___x_217_;
}
}
else
{
lean_object* v___x_218_; 
lean_dec_ref(v_v_211_);
v___x_218_ = lean_box(0);
return v___x_218_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getTargetFacetJob_x3f___redArg___boxed(lean_object* v_facet_219_, lean_object* v_k_220_, lean_object* v_v_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l___private_Lake_Build_Store_0__Lake_BuildStore_getTargetFacetJob_x3f___redArg(v_facet_219_, v_k_220_, v_v_221_);
lean_dec_ref(v_k_220_);
lean_dec(v_facet_219_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getTargetFacetJob_x3f(lean_object* v_00_u03b1_223_, lean_object* v_facet_224_, lean_object* v_inst_225_, lean_object* v_k_226_, lean_object* v_v_227_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l___private_Lake_Build_Store_0__Lake_BuildStore_getTargetFacetJob_x3f___redArg(v_facet_224_, v_k_226_, v_v_227_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Store_0__Lake_BuildStore_getTargetFacetJob_x3f___boxed(lean_object* v_00_u03b1_229_, lean_object* v_facet_230_, lean_object* v_inst_231_, lean_object* v_k_232_, lean_object* v_v_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l___private_Lake_Build_Store_0__Lake_BuildStore_getTargetFacetJob_x3f(v_00_u03b1_229_, v_facet_230_, v_inst_231_, v_k_232_, v_v_233_);
lean_dec_ref(v_k_232_);
lean_dec(v_facet_230_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectTargetFacetArray___redArg___lam__0(lean_object* v_facet_235_, lean_object* v_a_236_, lean_object* v_b_237_, lean_object* v_acc_238_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = l___private_Lake_Build_Store_0__Lake_BuildStore_getTargetFacetJob_x3f___redArg(v_facet_235_, v_a_236_, v_b_237_);
if (lean_obj_tag(v___x_239_) == 1)
{
lean_object* v_val_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_248_; 
v_val_240_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_248_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_248_ == 0)
{
v___x_242_ = v___x_239_;
v_isShared_243_ = v_isSharedCheck_248_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_val_240_);
lean_dec(v___x_239_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_248_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v___x_244_; lean_object* v___x_246_; 
v___x_244_ = lean_array_push(v_acc_238_, v_val_240_);
if (v_isShared_243_ == 0)
{
lean_ctor_set(v___x_242_, 0, v___x_244_);
v___x_246_ = v___x_242_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v___x_244_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
return v___x_246_;
}
}
}
else
{
lean_object* v___x_249_; 
lean_dec(v___x_239_);
v___x_249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_249_, 0, v_acc_238_);
return v___x_249_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectTargetFacetArray___redArg___lam__0___boxed(lean_object* v_facet_250_, lean_object* v_a_251_, lean_object* v_b_252_, lean_object* v_acc_253_){
_start:
{
lean_object* v_res_254_; 
v_res_254_ = l_Lake_BuildStore_collectTargetFacetArray___redArg___lam__0(v_facet_250_, v_a_251_, v_b_252_, v_acc_253_);
lean_dec_ref(v_a_251_);
lean_dec(v_facet_250_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectTargetFacetArray___redArg(lean_object* v_self_255_, lean_object* v_facet_256_){
_start:
{
lean_object* v___f_257_; lean_object* v___x_258_; lean_object* v_res_259_; lean_object* v___x_260_; lean_object* v_a_261_; 
v___f_257_ = lean_alloc_closure((void*)(l_Lake_BuildStore_collectTargetFacetArray___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_257_, 0, v_facet_256_);
v___x_258_ = lean_obj_once(&l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__9, &l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__9_once, _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__9);
v_res_259_ = lean_obj_once(&l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__10, &l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__10_once, _init_l_Lake_BuildStore_collectModuleFacetArray___redArg___closed__10);
v___x_260_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v___x_258_, v___f_257_, v_res_259_, v_self_255_);
v_a_261_ = lean_ctor_get(v___x_260_, 0);
lean_inc(v_a_261_);
lean_dec(v___x_260_);
return v_a_261_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectTargetFacetArray(lean_object* v_00_u03b1_262_, lean_object* v_self_263_, lean_object* v_facet_264_, lean_object* v_inst_265_){
_start:
{
lean_object* v___x_266_; 
v___x_266_ = l_Lake_BuildStore_collectTargetFacetArray___redArg(v_self_263_, v_facet_264_);
return v___x_266_;
}
}
static lean_object* _init_l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__0(void){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = lean_mk_string_unchecked("externLib", 9, 9);
return v___x_267_;
}
}
static lean_object* _init_l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__1(void){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = lean_mk_string_unchecked("shared", 6, 6);
return v___x_268_;
}
}
static lean_object* _init_l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__2(void){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_269_ = lean_obj_once(&l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__1, &l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__1_once, _init_l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__1);
v___x_270_ = lean_obj_once(&l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__0, &l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__0_once, _init_l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__0);
v___x_271_ = l_Lean_Name_mkStr2(v___x_270_, v___x_269_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectSharedExternLibs___redArg(lean_object* v_self_272_){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = lean_obj_once(&l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__2, &l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__2_once, _init_l_Lake_BuildStore_collectSharedExternLibs___redArg___closed__2);
v___x_274_ = l_Lake_BuildStore_collectTargetFacetArray___redArg(v_self_272_, v___x_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildStore_collectSharedExternLibs(lean_object* v_00_u03b1_275_, lean_object* v_self_276_, lean_object* v_inst_277_){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = l_Lake_BuildStore_collectSharedExternLibs___redArg(v_self_276_);
return v___x_278_;
}
}
lean_object* runtime_initialize_Lake_Util_Store(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Store(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lake_Util_Store(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_BuildStore_empty = _init_l_Lake_BuildStore_empty();
lean_mark_persistent(l_Lake_BuildStore_empty);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Store(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Util_Store(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Store(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Util_Store(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Store(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Store(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Store(builtin);
}
#ifdef __cplusplus
}
#endif
