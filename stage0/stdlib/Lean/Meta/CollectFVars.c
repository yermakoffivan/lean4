// Lean compiler output
// Module: Lean.Meta.CollectFVars
// Imports: public import Lean.Util.CollectFVars public import Lean.Meta.Basic
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_local_ctx_erase(lean_object*, lean_object*);
lean_object* l_Lean_LocalInstances_erase(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Expr_collectFVars_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Expr_collectFVars_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Expr_collectFVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Expr_collectFVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_collectFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_collectFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_collectFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_collectFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_getNext_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_getNext_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_getNext_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_getNext_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CollectFVars_State_addDependencies(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CollectFVars_State_addDependencies___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_removeUnused_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_removeUnused_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_removeUnused_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_removeUnused_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_removeUnused___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_removeUnused___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_removeUnused(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_removeUnused___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_removeUnused_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_removeUnused_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Expr_collectFVars_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_, lean_object* v___y_3_){
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Expr_collectFVars_spec__0___redArg___boxed(lean_object* v_e_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_instantiateMVars___at___00Lean_Expr_collectFVars_spec__0___redArg(v_e_29_, v___y_30_, v___y_31_);
lean_dec(v___y_31_);
lean_dec(v___y_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Expr_collectFVars_spec__0(lean_object* v_e_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_instantiateMVars___at___00Lean_Expr_collectFVars_spec__0___redArg(v_e_34_, v___y_37_, v___y_39_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Expr_collectFVars_spec__0___boxed(lean_object* v_e_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lean_instantiateMVars___at___00Lean_Expr_collectFVars_spec__0(v_e_42_, v___y_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_collectFVars(lean_object* v_e_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_){
_start:
{
lean_object* v___x_57_; lean_object* v_a_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_70_; 
v___x_57_ = l_Lean_instantiateMVars___at___00Lean_Expr_collectFVars_spec__0___redArg(v_e_50_, v_a_53_, v_a_55_);
v_a_58_ = lean_ctor_get(v___x_57_, 0);
v_isSharedCheck_70_ = !lean_is_exclusive(v___x_57_);
if (v_isSharedCheck_70_ == 0)
{
v___x_60_ = v___x_57_;
v_isShared_61_ = v_isSharedCheck_70_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_a_58_);
lean_dec(v___x_57_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_70_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_68_; 
v___x_62_ = lean_st_ref_get(v_a_55_);
lean_dec(v___x_62_);
v___x_63_ = lean_st_ref_take(v_a_51_);
v___x_64_ = l_Lean_collectFVars(v___x_63_, v_a_58_);
v___x_65_ = lean_st_ref_set(v_a_51_, v___x_64_);
v___x_66_ = lean_box(0);
if (v_isShared_61_ == 0)
{
lean_ctor_set(v___x_60_, 0, v___x_66_);
v___x_68_ = v___x_60_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(0, 1, 0);
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
}
LEAN_EXPORT lean_object* l_Lean_Expr_collectFVars___boxed(lean_object* v_e_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_, lean_object* v_a_76_, lean_object* v_a_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Lean_Expr_collectFVars(v_e_71_, v_a_72_, v_a_73_, v_a_74_, v_a_75_, v_a_76_);
lean_dec(v_a_76_);
lean_dec_ref(v_a_75_);
lean_dec(v_a_74_);
lean_dec_ref(v_a_73_);
lean_dec(v_a_72_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_collectFVars(lean_object* v_localDecl_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
if (lean_obj_tag(v_localDecl_79_) == 0)
{
lean_object* v_type_86_; lean_object* v___x_87_; 
v_type_86_ = lean_ctor_get(v_localDecl_79_, 3);
lean_inc_ref(v_type_86_);
lean_dec_ref(v_localDecl_79_);
v___x_87_ = l_Lean_Expr_collectFVars(v_type_86_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_);
return v___x_87_;
}
else
{
lean_object* v_type_88_; lean_object* v_value_89_; lean_object* v___x_90_; 
v_type_88_ = lean_ctor_get(v_localDecl_79_, 3);
lean_inc_ref(v_type_88_);
v_value_89_ = lean_ctor_get(v_localDecl_79_, 4);
lean_inc_ref(v_value_89_);
lean_dec_ref(v_localDecl_79_);
v___x_90_ = l_Lean_Expr_collectFVars(v_type_88_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_);
if (lean_obj_tag(v___x_90_) == 0)
{
lean_object* v___x_91_; 
lean_dec_ref(v___x_90_);
v___x_91_ = l_Lean_Expr_collectFVars(v_value_89_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_);
return v___x_91_;
}
else
{
lean_dec_ref(v_value_89_);
return v___x_90_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_collectFVars___boxed(lean_object* v_localDecl_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lean_LocalDecl_collectFVars(v_localDecl_92_, v_a_93_, v_a_94_, v_a_95_, v_a_96_, v_a_97_);
lean_dec(v_a_97_);
lean_dec_ref(v_a_96_);
lean_dec(v_a_95_);
lean_dec_ref(v_a_94_);
lean_dec(v_a_93_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_getNext_x3f___redArg(lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v_fvarIds_108_; lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_104_ = lean_st_ref_get(v_a_102_);
lean_dec(v___x_104_);
v___x_105_ = lean_st_ref_get(v_a_101_);
v___x_106_ = lean_st_ref_get(v_a_102_);
lean_dec(v___x_106_);
v___x_107_ = lean_st_ref_get(v_a_100_);
v_fvarIds_108_ = lean_ctor_get(v___x_105_, 2);
lean_inc_ref(v_fvarIds_108_);
lean_dec(v___x_105_);
v___x_109_ = lean_array_get_size(v_fvarIds_108_);
v___x_110_ = lean_nat_dec_lt(v___x_107_, v___x_109_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; lean_object* v___x_112_; 
lean_dec_ref(v_fvarIds_108_);
lean_dec(v___x_107_);
v___x_111_ = lean_box(0);
v___x_112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
return v___x_112_;
}
else
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_113_ = lean_st_ref_get(v_a_102_);
lean_dec(v___x_113_);
v___x_114_ = lean_st_ref_take(v_a_100_);
v___x_115_ = lean_unsigned_to_nat(1u);
v___x_116_ = lean_nat_add(v___x_114_, v___x_115_);
lean_dec(v___x_114_);
v___x_117_ = lean_st_ref_set(v_a_100_, v___x_116_);
v___x_118_ = lean_array_fget(v_fvarIds_108_, v___x_107_);
lean_dec(v___x_107_);
lean_dec_ref(v_fvarIds_108_);
v___x_119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
v___x_120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
return v___x_120_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_getNext_x3f___redArg___boxed(lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_getNext_x3f___redArg(v_a_121_, v_a_122_, v_a_123_);
lean_dec(v_a_123_);
lean_dec(v_a_122_);
lean_dec(v_a_121_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_getNext_x3f(lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_getNext_x3f___redArg(v_a_126_, v_a_127_, v_a_131_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_getNext_x3f___boxed(lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_getNext_x3f(v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_, v_a_139_);
lean_dec(v_a_139_);
lean_dec_ref(v_a_138_);
lean_dec(v_a_137_);
lean_dec_ref(v_a_136_);
lean_dec(v_a_135_);
lean_dec(v_a_134_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_go(lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_getNext_x3f___redArg(v_a_142_, v_a_143_, v_a_147_);
if (lean_obj_tag(v___x_149_) == 0)
{
lean_object* v_a_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_168_; 
v_a_150_ = lean_ctor_get(v___x_149_, 0);
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_149_);
if (v_isSharedCheck_168_ == 0)
{
v___x_152_ = v___x_149_;
v_isShared_153_ = v_isSharedCheck_168_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_a_150_);
lean_dec(v___x_149_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_168_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
if (lean_obj_tag(v_a_150_) == 1)
{
lean_object* v_val_154_; lean_object* v_lctx_155_; lean_object* v___x_156_; 
v_val_154_ = lean_ctor_get(v_a_150_, 0);
lean_inc(v_val_154_);
lean_dec_ref(v_a_150_);
v_lctx_155_ = lean_ctor_get(v_a_144_, 2);
lean_inc_ref(v_lctx_155_);
v___x_156_ = lean_local_ctx_find(v_lctx_155_, v_val_154_);
if (lean_obj_tag(v___x_156_) == 1)
{
lean_object* v_val_157_; lean_object* v___x_158_; 
lean_del_object(v___x_152_);
v_val_157_ = lean_ctor_get(v___x_156_, 0);
lean_inc(v_val_157_);
lean_dec_ref(v___x_156_);
v___x_158_ = l_Lean_LocalDecl_collectFVars(v_val_157_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_);
if (lean_obj_tag(v___x_158_) == 0)
{
lean_dec_ref(v___x_158_);
goto _start;
}
else
{
return v___x_158_;
}
}
else
{
lean_object* v___x_160_; lean_object* v___x_162_; 
lean_dec(v___x_156_);
v___x_160_ = lean_box(0);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 0, v___x_160_);
v___x_162_ = v___x_152_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v___x_160_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
else
{
lean_object* v___x_164_; lean_object* v___x_166_; 
lean_dec(v_a_150_);
v___x_164_ = lean_box(0);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 0, v___x_164_);
v___x_166_ = v___x_152_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v___x_164_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
}
}
else
{
lean_object* v_a_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_176_; 
v_a_169_ = lean_ctor_get(v___x_149_, 0);
v_isSharedCheck_176_ = !lean_is_exclusive(v___x_149_);
if (v_isSharedCheck_176_ == 0)
{
v___x_171_ = v___x_149_;
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_a_169_);
lean_dec(v___x_149_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_174_; 
if (v_isShared_172_ == 0)
{
v___x_174_ = v___x_171_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_a_169_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_go___boxed(lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_go(v_a_177_, v_a_178_, v_a_179_, v_a_180_, v_a_181_, v_a_182_);
lean_dec(v_a_182_);
lean_dec_ref(v_a_181_);
lean_dec(v_a_180_);
lean_dec_ref(v_a_179_);
lean_dec(v_a_178_);
lean_dec(v_a_177_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_CollectFVars_State_addDependencies(lean_object* v_s_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_191_ = lean_st_ref_get(v_a_189_);
lean_dec(v___x_191_);
v___x_192_ = lean_st_mk_ref(v_s_185_);
v___x_193_ = lean_st_ref_get(v_a_189_);
lean_dec(v___x_193_);
v___x_194_ = lean_unsigned_to_nat(0u);
v___x_195_ = lean_st_mk_ref(v___x_194_);
v___x_196_ = l___private_Lean_Meta_CollectFVars_0__Lean_CollectFVars_State_addDependencies_go(v___x_195_, v___x_192_, v_a_186_, v_a_187_, v_a_188_, v_a_189_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_207_; 
v_isSharedCheck_207_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_207_ == 0)
{
lean_object* v_unused_208_; 
v_unused_208_ = lean_ctor_get(v___x_196_, 0);
lean_dec(v_unused_208_);
v___x_198_ = v___x_196_;
v_isShared_199_ = v_isSharedCheck_207_;
goto v_resetjp_197_;
}
else
{
lean_dec(v___x_196_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_207_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_205_; 
v___x_200_ = lean_st_ref_get(v_a_189_);
lean_dec(v___x_200_);
v___x_201_ = lean_st_ref_get(v___x_195_);
lean_dec(v___x_195_);
lean_dec(v___x_201_);
v___x_202_ = lean_st_ref_get(v_a_189_);
lean_dec(v___x_202_);
v___x_203_ = lean_st_ref_get(v___x_192_);
lean_dec(v___x_192_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 0, v___x_203_);
v___x_205_ = v___x_198_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___x_203_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
}
else
{
lean_object* v_a_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_216_; 
lean_dec(v___x_195_);
lean_dec(v___x_192_);
v_a_209_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_216_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_216_ == 0)
{
v___x_211_ = v___x_196_;
v_isShared_212_ = v_isSharedCheck_216_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_a_209_);
lean_dec(v___x_196_);
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
}
LEAN_EXPORT lean_object* l_Lean_CollectFVars_State_addDependencies___boxed(lean_object* v_s_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Lean_CollectFVars_State_addDependencies(v_s_217_, v_a_218_, v_a_219_, v_a_220_, v_a_221_);
lean_dec(v_a_221_);
lean_dec_ref(v_a_220_);
lean_dec(v_a_219_);
lean_dec_ref(v_a_218_);
return v_res_223_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_removeUnused_spec__0___redArg(lean_object* v_k_224_, lean_object* v_t_225_){
_start:
{
if (lean_obj_tag(v_t_225_) == 0)
{
lean_object* v_k_226_; lean_object* v_l_227_; lean_object* v_r_228_; uint8_t v___x_229_; 
v_k_226_ = lean_ctor_get(v_t_225_, 1);
v_l_227_ = lean_ctor_get(v_t_225_, 3);
v_r_228_ = lean_ctor_get(v_t_225_, 4);
v___x_229_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_224_, v_k_226_);
switch(v___x_229_)
{
case 0:
{
v_t_225_ = v_l_227_;
goto _start;
}
case 1:
{
uint8_t v___x_231_; 
v___x_231_ = 1;
return v___x_231_;
}
default: 
{
v_t_225_ = v_r_228_;
goto _start;
}
}
}
else
{
uint8_t v___x_233_; 
v___x_233_ = 0;
return v___x_233_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_removeUnused_spec__0___redArg___boxed(lean_object* v_k_234_, lean_object* v_t_235_){
_start:
{
uint8_t v_res_236_; lean_object* v_r_237_; 
v_res_236_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_removeUnused_spec__0___redArg(v_k_234_, v_t_235_);
lean_dec(v_t_235_);
lean_dec(v_k_234_);
v_r_237_ = lean_box(v_res_236_);
return v_r_237_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_removeUnused_spec__1(lean_object* v_as_238_, size_t v_i_239_, size_t v_stop_240_, lean_object* v_b_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_){
_start:
{
uint8_t v___x_247_; 
v___x_247_ = lean_usize_dec_eq(v_i_239_, v_stop_240_);
if (v___x_247_ == 0)
{
lean_object* v_snd_248_; lean_object* v_snd_249_; lean_object* v_snd_250_; lean_object* v_fst_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_317_; 
v_snd_248_ = lean_ctor_get(v_b_241_, 1);
lean_inc(v_snd_248_);
v_snd_249_ = lean_ctor_get(v_snd_248_, 1);
lean_inc(v_snd_249_);
v_snd_250_ = lean_ctor_get(v_snd_249_, 1);
v_fst_251_ = lean_ctor_get(v_b_241_, 0);
v_isSharedCheck_317_ = !lean_is_exclusive(v_b_241_);
if (v_isSharedCheck_317_ == 0)
{
lean_object* v_unused_318_; 
v_unused_318_ = lean_ctor_get(v_b_241_, 1);
lean_dec(v_unused_318_);
v___x_253_ = v_b_241_;
v_isShared_254_ = v_isSharedCheck_317_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_fst_251_);
lean_dec(v_b_241_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_317_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v_fst_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_315_; 
v_fst_255_ = lean_ctor_get(v_snd_248_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v_snd_248_);
if (v_isSharedCheck_315_ == 0)
{
lean_object* v_unused_316_; 
v_unused_316_ = lean_ctor_get(v_snd_248_, 1);
lean_dec(v_unused_316_);
v___x_257_ = v_snd_248_;
v_isShared_258_ = v_isSharedCheck_315_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_fst_255_);
lean_dec(v_snd_248_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_315_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v_fst_259_; lean_object* v_fvarSet_260_; size_t v___x_261_; size_t v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; uint8_t v___x_265_; 
v_fst_259_ = lean_ctor_get(v_snd_249_, 0);
v_fvarSet_260_ = lean_ctor_get(v_snd_250_, 1);
v___x_261_ = ((size_t)1ULL);
v___x_262_ = lean_usize_sub(v_i_239_, v___x_261_);
v___x_263_ = lean_array_uget_borrowed(v_as_238_, v___x_262_);
v___x_264_ = l_Lean_Expr_fvarId_x21(v___x_263_);
v___x_265_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_removeUnused_spec__0___redArg(v___x_264_, v_fvarSet_260_);
if (v___x_265_ == 0)
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_269_; 
lean_inc(v___x_264_);
v___x_266_ = lean_local_ctx_erase(v_fst_251_, v___x_264_);
v___x_267_ = l_Lean_LocalInstances_erase(v_fst_255_, v___x_264_);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 0, v___x_267_);
v___x_269_ = v___x_257_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v___x_267_);
lean_ctor_set(v_reuseFailAlloc_274_, 1, v_snd_249_);
v___x_269_ = v_reuseFailAlloc_274_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
lean_object* v___x_271_; 
if (v_isShared_254_ == 0)
{
lean_ctor_set(v___x_253_, 1, v___x_269_);
lean_ctor_set(v___x_253_, 0, v___x_266_);
v___x_271_ = v___x_253_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v___x_266_);
lean_ctor_set(v_reuseFailAlloc_273_, 1, v___x_269_);
v___x_271_ = v_reuseFailAlloc_273_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
v_i_239_ = v___x_262_;
v_b_241_ = v___x_271_;
goto _start;
}
}
}
else
{
lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_312_; 
lean_inc(v_fst_259_);
lean_inc(v_snd_250_);
lean_dec(v___x_264_);
v_isSharedCheck_312_ = !lean_is_exclusive(v_snd_249_);
if (v_isSharedCheck_312_ == 0)
{
lean_object* v_unused_313_; lean_object* v_unused_314_; 
v_unused_313_ = lean_ctor_get(v_snd_249_, 1);
lean_dec(v_unused_313_);
v_unused_314_ = lean_ctor_get(v_snd_249_, 0);
lean_dec(v_unused_314_);
v___x_276_ = v_snd_249_;
v_isShared_277_ = v_isSharedCheck_312_;
goto v_resetjp_275_;
}
else
{
lean_dec(v_snd_249_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_312_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_278_; 
lean_inc(v___y_245_);
lean_inc_ref(v___y_244_);
lean_inc(v___y_243_);
lean_inc_ref(v___y_242_);
lean_inc(v___x_263_);
v___x_278_ = lean_infer_type(v___x_263_, v___y_242_, v___y_243_, v___y_244_, v___y_245_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v_a_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v_a_279_ = lean_ctor_get(v___x_278_, 0);
lean_inc(v_a_279_);
lean_dec_ref(v___x_278_);
v___x_280_ = lean_st_ref_get(v___y_245_);
lean_dec(v___x_280_);
v___x_281_ = lean_st_mk_ref(v_snd_250_);
v___x_282_ = l_Lean_Expr_collectFVars(v_a_279_, v___x_281_, v___y_242_, v___y_243_, v___y_244_, v___y_245_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_287_; 
lean_dec_ref(v___x_282_);
v___x_283_ = lean_st_ref_get(v___y_245_);
lean_dec(v___x_283_);
v___x_284_ = lean_st_ref_get(v___x_281_);
lean_dec(v___x_281_);
lean_inc(v___x_263_);
v___x_285_ = lean_array_push(v_fst_259_, v___x_263_);
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 1, v___x_284_);
lean_ctor_set(v___x_276_, 0, v___x_285_);
v___x_287_ = v___x_276_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v___x_285_);
lean_ctor_set(v_reuseFailAlloc_295_, 1, v___x_284_);
v___x_287_ = v_reuseFailAlloc_295_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
lean_object* v___x_289_; 
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 1, v___x_287_);
v___x_289_ = v___x_257_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_fst_255_);
lean_ctor_set(v_reuseFailAlloc_294_, 1, v___x_287_);
v___x_289_ = v_reuseFailAlloc_294_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
lean_object* v___x_291_; 
if (v_isShared_254_ == 0)
{
lean_ctor_set(v___x_253_, 1, v___x_289_);
v___x_291_ = v___x_253_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_fst_251_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v___x_289_);
v___x_291_ = v_reuseFailAlloc_293_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
v_i_239_ = v___x_262_;
v_b_241_ = v___x_291_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_303_; 
lean_dec(v___x_281_);
lean_del_object(v___x_276_);
lean_dec(v_fst_259_);
lean_del_object(v___x_257_);
lean_dec(v_fst_255_);
lean_del_object(v___x_253_);
lean_dec(v_fst_251_);
v_a_296_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_303_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_303_ == 0)
{
v___x_298_ = v___x_282_;
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_282_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_a_296_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
}
else
{
lean_object* v_a_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_311_; 
lean_del_object(v___x_276_);
lean_dec(v_fst_259_);
lean_del_object(v___x_257_);
lean_dec(v_fst_255_);
lean_del_object(v___x_253_);
lean_dec(v_fst_251_);
lean_dec(v_snd_250_);
v_a_304_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_311_ == 0)
{
v___x_306_ = v___x_278_;
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_a_304_);
lean_dec(v___x_278_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_309_; 
if (v_isShared_307_ == 0)
{
v___x_309_ = v___x_306_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v_a_304_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
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
lean_object* v___x_319_; 
v___x_319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_319_, 0, v_b_241_);
return v___x_319_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_removeUnused_spec__1___boxed(lean_object* v_as_320_, lean_object* v_i_321_, lean_object* v_stop_322_, lean_object* v_b_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
size_t v_i_boxed_329_; size_t v_stop_boxed_330_; lean_object* v_res_331_; 
v_i_boxed_329_ = lean_unbox_usize(v_i_321_);
lean_dec(v_i_321_);
v_stop_boxed_330_ = lean_unbox_usize(v_stop_322_);
lean_dec(v_stop_322_);
v_res_331_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_removeUnused_spec__1(v_as_320_, v_i_boxed_329_, v_stop_boxed_330_, v_b_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_);
lean_dec(v___y_327_);
lean_dec_ref(v___y_326_);
lean_dec(v___y_325_);
lean_dec_ref(v___y_324_);
lean_dec_ref(v_as_320_);
return v_res_331_;
}
}
static lean_object* _init_l_Lean_Meta_removeUnused___closed__0(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = lean_unsigned_to_nat(0u);
v___x_333_ = lean_mk_empty_array_with_capacity(v___x_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_removeUnused(lean_object* v_vars_334_, lean_object* v_used_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_){
_start:
{
lean_object* v_fst_342_; lean_object* v_fst_343_; lean_object* v_fst_344_; lean_object* v_lctx_349_; lean_object* v_localInstances_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; uint8_t v___x_354_; 
v_lctx_349_ = lean_ctor_get(v_a_336_, 2);
v_localInstances_350_ = lean_ctor_get(v_a_336_, 3);
v___x_351_ = lean_unsigned_to_nat(0u);
v___x_352_ = lean_obj_once(&l_Lean_Meta_removeUnused___closed__0, &l_Lean_Meta_removeUnused___closed__0_once, _init_l_Lean_Meta_removeUnused___closed__0);
v___x_353_ = lean_array_get_size(v_vars_334_);
v___x_354_ = lean_nat_dec_lt(v___x_351_, v___x_353_);
if (v___x_354_ == 0)
{
lean_dec_ref(v_used_335_);
lean_inc_ref(v_localInstances_350_);
lean_inc_ref(v_lctx_349_);
v_fst_342_ = v_lctx_349_;
v_fst_343_ = v_localInstances_350_;
v_fst_344_ = v___x_352_;
goto v___jp_341_;
}
else
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; size_t v___x_358_; size_t v___x_359_; lean_object* v___x_360_; 
v___x_355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_355_, 0, v___x_352_);
lean_ctor_set(v___x_355_, 1, v_used_335_);
lean_inc_ref(v_localInstances_350_);
v___x_356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_356_, 0, v_localInstances_350_);
lean_ctor_set(v___x_356_, 1, v___x_355_);
lean_inc_ref(v_lctx_349_);
v___x_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_357_, 0, v_lctx_349_);
lean_ctor_set(v___x_357_, 1, v___x_356_);
v___x_358_ = lean_usize_of_nat(v___x_353_);
v___x_359_ = ((size_t)0ULL);
v___x_360_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_removeUnused_spec__1(v_vars_334_, v___x_358_, v___x_359_, v___x_357_, v_a_336_, v_a_337_, v_a_338_, v_a_339_);
if (lean_obj_tag(v___x_360_) == 0)
{
lean_object* v_a_361_; lean_object* v_snd_362_; lean_object* v_snd_363_; lean_object* v_fst_364_; lean_object* v_fst_365_; lean_object* v_fst_366_; 
v_a_361_ = lean_ctor_get(v___x_360_, 0);
lean_inc(v_a_361_);
lean_dec_ref(v___x_360_);
v_snd_362_ = lean_ctor_get(v_a_361_, 1);
lean_inc(v_snd_362_);
v_snd_363_ = lean_ctor_get(v_snd_362_, 1);
lean_inc(v_snd_363_);
v_fst_364_ = lean_ctor_get(v_a_361_, 0);
lean_inc(v_fst_364_);
lean_dec(v_a_361_);
v_fst_365_ = lean_ctor_get(v_snd_362_, 0);
lean_inc(v_fst_365_);
lean_dec(v_snd_362_);
v_fst_366_ = lean_ctor_get(v_snd_363_, 0);
lean_inc(v_fst_366_);
lean_dec(v_snd_363_);
v_fst_342_ = v_fst_364_;
v_fst_343_ = v_fst_365_;
v_fst_344_ = v_fst_366_;
goto v___jp_341_;
}
else
{
lean_object* v_a_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_374_; 
v_a_367_ = lean_ctor_get(v___x_360_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_374_ == 0)
{
v___x_369_ = v___x_360_;
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_a_367_);
lean_dec(v___x_360_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_372_; 
if (v_isShared_370_ == 0)
{
v___x_372_ = v___x_369_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_a_367_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
}
v___jp_341_:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_345_ = l_Array_reverse___redArg(v_fst_344_);
v___x_346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_346_, 0, v_fst_343_);
lean_ctor_set(v___x_346_, 1, v___x_345_);
v___x_347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_347_, 0, v_fst_342_);
lean_ctor_set(v___x_347_, 1, v___x_346_);
v___x_348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
return v___x_348_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_removeUnused___boxed(lean_object* v_vars_375_, lean_object* v_used_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l_Lean_Meta_removeUnused(v_vars_375_, v_used_376_, v_a_377_, v_a_378_, v_a_379_, v_a_380_);
lean_dec(v_a_380_);
lean_dec_ref(v_a_379_);
lean_dec(v_a_378_);
lean_dec_ref(v_a_377_);
lean_dec_ref(v_vars_375_);
return v_res_382_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_removeUnused_spec__0(lean_object* v_00_u03b2_383_, lean_object* v_k_384_, lean_object* v_t_385_){
_start:
{
uint8_t v___x_386_; 
v___x_386_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_removeUnused_spec__0___redArg(v_k_384_, v_t_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_removeUnused_spec__0___boxed(lean_object* v_00_u03b2_387_, lean_object* v_k_388_, lean_object* v_t_389_){
_start:
{
uint8_t v_res_390_; lean_object* v_r_391_; 
v_res_390_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_removeUnused_spec__0(v_00_u03b2_387_, v_k_388_, v_t_389_);
lean_dec(v_t_389_);
lean_dec(v_k_388_);
v_r_391_ = lean_box(v_res_390_);
return v_r_391_;
}
}
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_CollectFVars(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_CollectFVars(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_CollectFVars(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_CollectFVars(builtin);
}
#ifdef __cplusplus
}
#endif
