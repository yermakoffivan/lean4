// Lean compiler output
// Module: Lake.Config.ConfigTarget
// Imports: public import Lake.Config.Package
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
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Package_findTargetDecl_x3f(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_once_cell_t l_Lake_instHashableConfigTarget___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lake_instHashableConfigTarget___lam__0___closed__0;
LEAN_EXPORT uint64_t l_Lake_instHashableConfigTarget___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instHashableConfigTarget___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lake_instHashableConfigTarget___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instHashableConfigTarget___closed__0;
LEAN_EXPORT lean_object* l_Lake_instHashableConfigTarget(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instHashableConfigTarget___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_instBEqConfigTarget___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instBEqConfigTarget___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instBEqConfigTarget___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instBEqConfigTarget___closed__0;
LEAN_EXPORT lean_object* l_Lake_instBEqConfigTarget(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instBEqConfigTarget___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_mkConfigTarget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_mkConfigTarget___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_configTargets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_configTargets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Package_configTargets___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_configTargets___closed__0;
static lean_once_cell_t l_Lake_Package_configTargets___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_configTargets___closed__1;
static lean_once_cell_t l_Lake_Package_configTargets___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_configTargets___closed__2;
static lean_once_cell_t l_Lake_Package_configTargets___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_configTargets___closed__3;
static lean_once_cell_t l_Lake_Package_configTargets___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_configTargets___closed__4;
static lean_once_cell_t l_Lake_Package_configTargets___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_configTargets___closed__5;
static lean_once_cell_t l_Lake_Package_configTargets___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_configTargets___closed__6;
static lean_once_cell_t l_Lake_Package_configTargets___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_configTargets___closed__7;
static lean_once_cell_t l_Lake_Package_configTargets___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_configTargets___closed__8;
static lean_once_cell_t l_Lake_Package_configTargets___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_configTargets___closed__9;
static lean_once_cell_t l_Lake_Package_configTargets___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_configTargets___closed__10;
LEAN_EXPORT lean_object* l_Lake_Package_configTargets(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_findConfigTarget_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_findConfigTarget_x3f___boxed(lean_object*, lean_object*, lean_object*);
static uint64_t _init_l_Lake_instHashableConfigTarget___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1_; uint64_t v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(1723u);
v___x_2_ = lean_uint64_of_nat(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT uint64_t l_Lake_instHashableConfigTarget___lam__0(lean_object* v_x_3_){
_start:
{
lean_object* v_name_4_; 
v_name_4_ = lean_ctor_get(v_x_3_, 1);
if (lean_obj_tag(v_name_4_) == 0)
{
uint64_t v___x_5_; 
v___x_5_ = lean_uint64_once(&l_Lake_instHashableConfigTarget___lam__0___closed__0, &l_Lake_instHashableConfigTarget___lam__0___closed__0_once, _init_l_Lake_instHashableConfigTarget___lam__0___closed__0);
return v___x_5_;
}
else
{
uint64_t v_hash_6_; 
v_hash_6_ = lean_ctor_get_uint64(v_name_4_, sizeof(void*)*2);
return v_hash_6_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instHashableConfigTarget___lam__0___boxed(lean_object* v_x_7_){
_start:
{
uint64_t v_res_8_; lean_object* v_r_9_; 
v_res_8_ = l_Lake_instHashableConfigTarget___lam__0(v_x_7_);
lean_dec_ref(v_x_7_);
v_r_9_ = lean_box_uint64(v_res_8_);
return v_r_9_;
}
}
static lean_object* _init_l_Lake_instHashableConfigTarget___closed__0(void){
_start:
{
lean_object* v___f_10_; 
v___f_10_ = lean_alloc_closure((void*)(l_Lake_instHashableConfigTarget___lam__0___boxed), 1, 0);
return v___f_10_;
}
}
LEAN_EXPORT lean_object* l_Lake_instHashableConfigTarget(lean_object* v_k_11_){
_start:
{
lean_object* v___f_12_; 
v___f_12_ = lean_obj_once(&l_Lake_instHashableConfigTarget___closed__0, &l_Lake_instHashableConfigTarget___closed__0_once, _init_l_Lake_instHashableConfigTarget___closed__0);
return v___f_12_;
}
}
LEAN_EXPORT lean_object* l_Lake_instHashableConfigTarget___boxed(lean_object* v_k_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lake_instHashableConfigTarget(v_k_13_);
lean_dec(v_k_13_);
return v_res_14_;
}
}
LEAN_EXPORT uint8_t l_Lake_instBEqConfigTarget___lam__0(lean_object* v_x1_15_, lean_object* v_x2_16_){
_start:
{
lean_object* v_name_17_; lean_object* v_name_18_; uint8_t v___x_19_; 
v_name_17_ = lean_ctor_get(v_x1_15_, 1);
v_name_18_ = lean_ctor_get(v_x2_16_, 1);
v___x_19_ = lean_name_eq(v_name_17_, v_name_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lake_instBEqConfigTarget___lam__0___boxed(lean_object* v_x1_20_, lean_object* v_x2_21_){
_start:
{
uint8_t v_res_22_; lean_object* v_r_23_; 
v_res_22_ = l_Lake_instBEqConfigTarget___lam__0(v_x1_20_, v_x2_21_);
lean_dec_ref(v_x2_21_);
lean_dec_ref(v_x1_20_);
v_r_23_ = lean_box(v_res_22_);
return v_r_23_;
}
}
static lean_object* _init_l_Lake_instBEqConfigTarget___closed__0(void){
_start:
{
lean_object* v___f_24_; 
v___f_24_ = lean_alloc_closure((void*)(l_Lake_instBEqConfigTarget___lam__0___boxed), 2, 0);
return v___f_24_;
}
}
LEAN_EXPORT lean_object* l_Lake_instBEqConfigTarget(lean_object* v_k_25_){
_start:
{
lean_object* v___f_26_; 
v___f_26_ = lean_obj_once(&l_Lake_instBEqConfigTarget___closed__0, &l_Lake_instBEqConfigTarget___closed__0_once, _init_l_Lake_instBEqConfigTarget___closed__0);
return v___f_26_;
}
}
LEAN_EXPORT lean_object* l_Lake_instBEqConfigTarget___boxed(lean_object* v_k_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lake_instBEqConfigTarget(v_k_27_);
lean_dec(v_k_27_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_mkConfigTarget(lean_object* v_pkg_29_, lean_object* v_self_30_){
_start:
{
lean_object* v_name_31_; lean_object* v_config_32_; lean_object* v___x_33_; 
v_name_31_ = lean_ctor_get(v_self_30_, 1);
v_config_32_ = lean_ctor_get(v_self_30_, 3);
lean_inc(v_config_32_);
lean_inc(v_name_31_);
v___x_33_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_33_, 0, v_pkg_29_);
lean_ctor_set(v___x_33_, 1, v_name_31_);
lean_ctor_set(v___x_33_, 2, v_config_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lake_PConfigDecl_mkConfigTarget___boxed(lean_object* v_pkg_34_, lean_object* v_self_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lake_PConfigDecl_mkConfigTarget(v_pkg_34_, v_self_35_);
lean_dec_ref(v_self_35_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_configTargets___lam__0(lean_object* v_kind_37_, lean_object* v_self_38_, lean_object* v_x1_39_, lean_object* v_x2_40_){
_start:
{
lean_object* v_name_41_; lean_object* v_kind_42_; lean_object* v_config_43_; uint8_t v___x_44_; 
v_name_41_ = lean_ctor_get(v_x2_40_, 1);
v_kind_42_ = lean_ctor_get(v_x2_40_, 2);
v_config_43_ = lean_ctor_get(v_x2_40_, 3);
v___x_44_ = lean_name_eq(v_kind_42_, v_kind_37_);
if (v___x_44_ == 0)
{
lean_dec_ref(v_self_38_);
return v_x1_39_;
}
else
{
lean_object* v___x_45_; lean_object* v___x_46_; 
lean_inc(v_config_43_);
lean_inc(v_name_41_);
v___x_45_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_45_, 0, v_self_38_);
lean_ctor_set(v___x_45_, 1, v_name_41_);
lean_ctor_set(v___x_45_, 2, v_config_43_);
v___x_46_ = lean_array_push(v_x1_39_, v___x_45_);
return v___x_46_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_configTargets___lam__0___boxed(lean_object* v_kind_47_, lean_object* v_self_48_, lean_object* v_x1_49_, lean_object* v_x2_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lake_Package_configTargets___lam__0(v_kind_47_, v_self_48_, v_x1_49_, v_x2_50_);
lean_dec_ref(v_x2_50_);
lean_dec(v_kind_47_);
return v_res_51_;
}
}
static lean_object* _init_l_Lake_Package_configTargets___closed__0(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = lean_unsigned_to_nat(0u);
v___x_53_ = lean_mk_empty_array_with_capacity(v___x_52_);
return v___x_53_;
}
}
static lean_object* _init_l_Lake_Package_configTargets___closed__1(void){
_start:
{
lean_object* v___f_54_; 
v___f_54_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_54_;
}
}
static lean_object* _init_l_Lake_Package_configTargets___closed__2(void){
_start:
{
lean_object* v___f_55_; 
v___f_55_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_55_;
}
}
static lean_object* _init_l_Lake_Package_configTargets___closed__3(void){
_start:
{
lean_object* v___f_56_; 
v___f_56_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_56_;
}
}
static lean_object* _init_l_Lake_Package_configTargets___closed__4(void){
_start:
{
lean_object* v___f_57_; 
v___f_57_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_57_;
}
}
static lean_object* _init_l_Lake_Package_configTargets___closed__5(void){
_start:
{
lean_object* v___f_58_; 
v___f_58_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_58_;
}
}
static lean_object* _init_l_Lake_Package_configTargets___closed__6(void){
_start:
{
lean_object* v___f_59_; 
v___f_59_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_59_;
}
}
static lean_object* _init_l_Lake_Package_configTargets___closed__7(void){
_start:
{
lean_object* v___f_60_; 
v___f_60_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_60_;
}
}
static lean_object* _init_l_Lake_Package_configTargets___closed__8(void){
_start:
{
lean_object* v___f_61_; lean_object* v___f_62_; lean_object* v___x_63_; 
v___f_61_ = lean_obj_once(&l_Lake_Package_configTargets___closed__2, &l_Lake_Package_configTargets___closed__2_once, _init_l_Lake_Package_configTargets___closed__2);
v___f_62_ = lean_obj_once(&l_Lake_Package_configTargets___closed__1, &l_Lake_Package_configTargets___closed__1_once, _init_l_Lake_Package_configTargets___closed__1);
v___x_63_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_63_, 0, v___f_62_);
lean_ctor_set(v___x_63_, 1, v___f_61_);
return v___x_63_;
}
}
static lean_object* _init_l_Lake_Package_configTargets___closed__9(void){
_start:
{
lean_object* v___f_64_; lean_object* v___f_65_; lean_object* v___f_66_; lean_object* v___f_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___f_64_ = lean_obj_once(&l_Lake_Package_configTargets___closed__6, &l_Lake_Package_configTargets___closed__6_once, _init_l_Lake_Package_configTargets___closed__6);
v___f_65_ = lean_obj_once(&l_Lake_Package_configTargets___closed__5, &l_Lake_Package_configTargets___closed__5_once, _init_l_Lake_Package_configTargets___closed__5);
v___f_66_ = lean_obj_once(&l_Lake_Package_configTargets___closed__4, &l_Lake_Package_configTargets___closed__4_once, _init_l_Lake_Package_configTargets___closed__4);
v___f_67_ = lean_obj_once(&l_Lake_Package_configTargets___closed__3, &l_Lake_Package_configTargets___closed__3_once, _init_l_Lake_Package_configTargets___closed__3);
v___x_68_ = lean_obj_once(&l_Lake_Package_configTargets___closed__8, &l_Lake_Package_configTargets___closed__8_once, _init_l_Lake_Package_configTargets___closed__8);
v___x_69_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___f_67_);
lean_ctor_set(v___x_69_, 2, v___f_66_);
lean_ctor_set(v___x_69_, 3, v___f_65_);
lean_ctor_set(v___x_69_, 4, v___f_64_);
return v___x_69_;
}
}
static lean_object* _init_l_Lake_Package_configTargets___closed__10(void){
_start:
{
lean_object* v___f_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___f_70_ = lean_obj_once(&l_Lake_Package_configTargets___closed__7, &l_Lake_Package_configTargets___closed__7_once, _init_l_Lake_Package_configTargets___closed__7);
v___x_71_ = lean_obj_once(&l_Lake_Package_configTargets___closed__9, &l_Lake_Package_configTargets___closed__9_once, _init_l_Lake_Package_configTargets___closed__9);
v___x_72_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
lean_ctor_set(v___x_72_, 1, v___f_70_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_configTargets(lean_object* v_kind_73_, lean_object* v_self_74_){
_start:
{
lean_object* v_targetDecls_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; uint8_t v___x_80_; 
v_targetDecls_75_ = lean_ctor_get(v_self_74_, 14);
lean_inc_ref(v_targetDecls_75_);
v___x_76_ = lean_unsigned_to_nat(0u);
v___x_77_ = lean_obj_once(&l_Lake_Package_configTargets___closed__0, &l_Lake_Package_configTargets___closed__0_once, _init_l_Lake_Package_configTargets___closed__0);
v___x_78_ = lean_array_get_size(v_targetDecls_75_);
v___x_79_ = lean_obj_once(&l_Lake_Package_configTargets___closed__10, &l_Lake_Package_configTargets___closed__10_once, _init_l_Lake_Package_configTargets___closed__10);
v___x_80_ = lean_nat_dec_lt(v___x_76_, v___x_78_);
if (v___x_80_ == 0)
{
lean_dec_ref(v_targetDecls_75_);
lean_dec_ref(v_self_74_);
lean_dec(v_kind_73_);
return v___x_77_;
}
else
{
lean_object* v___f_81_; uint8_t v___x_82_; 
v___f_81_ = lean_alloc_closure((void*)(l_Lake_Package_configTargets___lam__0___boxed), 4, 2);
lean_closure_set(v___f_81_, 0, v_kind_73_);
lean_closure_set(v___f_81_, 1, v_self_74_);
v___x_82_ = lean_nat_dec_le(v___x_78_, v___x_78_);
if (v___x_82_ == 0)
{
if (v___x_80_ == 0)
{
lean_dec_ref(v___f_81_);
lean_dec_ref(v_targetDecls_75_);
return v___x_77_;
}
else
{
size_t v___x_83_; size_t v___x_84_; lean_object* v___x_85_; 
v___x_83_ = ((size_t)0ULL);
v___x_84_ = lean_usize_of_nat(v___x_78_);
v___x_85_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_79_, v___f_81_, v_targetDecls_75_, v___x_83_, v___x_84_, v___x_77_);
return v___x_85_;
}
}
else
{
size_t v___x_86_; size_t v___x_87_; lean_object* v___x_88_; 
v___x_86_ = ((size_t)0ULL);
v___x_87_ = lean_usize_of_nat(v___x_78_);
v___x_88_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_79_, v___f_81_, v_targetDecls_75_, v___x_86_, v___x_87_, v___x_77_);
return v___x_88_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_findConfigTarget_x3f(lean_object* v_kind_89_, lean_object* v_name_90_, lean_object* v_self_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = l_Lake_Package_findTargetDecl_x3f(v_name_90_, v_self_91_);
if (lean_obj_tag(v___x_92_) == 0)
{
lean_object* v___x_93_; 
lean_dec_ref(v_self_91_);
v___x_93_ = lean_box(0);
return v___x_93_;
}
else
{
lean_object* v_val_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_107_; 
v_val_94_ = lean_ctor_get(v___x_92_, 0);
v_isSharedCheck_107_ = !lean_is_exclusive(v___x_92_);
if (v_isSharedCheck_107_ == 0)
{
v___x_96_ = v___x_92_;
v_isShared_97_ = v_isSharedCheck_107_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_val_94_);
lean_dec(v___x_92_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_107_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v_name_98_; lean_object* v_kind_99_; lean_object* v_config_100_; uint8_t v___x_101_; 
v_name_98_ = lean_ctor_get(v_val_94_, 1);
lean_inc(v_name_98_);
v_kind_99_ = lean_ctor_get(v_val_94_, 2);
lean_inc(v_kind_99_);
v_config_100_ = lean_ctor_get(v_val_94_, 3);
lean_inc(v_config_100_);
lean_dec(v_val_94_);
v___x_101_ = lean_name_eq(v_kind_99_, v_kind_89_);
lean_dec(v_kind_99_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; 
lean_dec(v_config_100_);
lean_dec(v_name_98_);
lean_del_object(v___x_96_);
lean_dec_ref(v_self_91_);
v___x_102_ = lean_box(0);
return v___x_102_;
}
else
{
lean_object* v___x_103_; lean_object* v___x_105_; 
v___x_103_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_103_, 0, v_self_91_);
lean_ctor_set(v___x_103_, 1, v_name_98_);
lean_ctor_set(v___x_103_, 2, v_config_100_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 0, v___x_103_);
v___x_105_ = v___x_96_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v___x_103_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_findConfigTarget_x3f___boxed(lean_object* v_kind_108_, lean_object* v_name_109_, lean_object* v_self_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l_Lake_Package_findConfigTarget_x3f(v_kind_108_, v_name_109_, v_self_110_);
lean_dec(v_name_109_);
lean_dec(v_kind_108_);
return v_res_111_;
}
}
lean_object* runtime_initialize_Lake_Config_Package(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_ConfigTarget(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lake_Config_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_ConfigTarget(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Package(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_ConfigTarget(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_ConfigTarget(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_ConfigTarget(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_ConfigTarget(builtin);
}
#ifdef __cplusplus
}
#endif
