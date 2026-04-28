// Lean compiler output
// Module: Init.Data.Array.BasicAux
// Imports: import all Init.Data.Array.Basic public import Init.Data.Array.Set public import Init.Util import Init.Data.Nat.Linear
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__List_toArrayAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__List_toArrayAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMono___redArg___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Array_mapMono___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapMono___redArg___closed__0;
static lean_once_cell_t l_Array_mapMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapMono___redArg___closed__1;
static lean_once_cell_t l_Array_mapMono___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapMono___redArg___closed__2;
static lean_once_cell_t l_Array_mapMono___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapMono___redArg___closed__3;
static lean_once_cell_t l_Array_mapMono___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapMono___redArg___closed__4;
static lean_once_cell_t l_Array_mapMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapMono___redArg___closed__5;
static lean_once_cell_t l_Array_mapMono___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapMono___redArg___closed__6;
static lean_once_cell_t l_Array_mapMono___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapMono___redArg___closed__7;
static lean_once_cell_t l_Array_mapMono___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapMono___redArg___closed__8;
static lean_once_cell_t l_Array_mapMono___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapMono___redArg___closed__9;
LEAN_EXPORT lean_object* l_Array_mapMono___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMono(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__List_toArrayAux_match__1_splitter___redArg(lean_object* v_x_1_, lean_object* v_x_2_, lean_object* v_h__1_3_, lean_object* v_h__2_4_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_5_; 
lean_dec(v_h__2_4_);
v___x_5_ = lean_apply_1(v_h__1_3_, v_x_2_);
return v___x_5_;
}
else
{
lean_object* v_head_6_; lean_object* v_tail_7_; lean_object* v___x_8_; 
lean_dec(v_h__1_3_);
v_head_6_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_head_6_);
v_tail_7_ = lean_ctor_get(v_x_1_, 1);
lean_inc(v_tail_7_);
lean_dec_ref(v_x_1_);
v___x_8_ = lean_apply_3(v_h__2_4_, v_head_6_, v_tail_7_, v_x_2_);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__List_toArrayAux_match__1_splitter(lean_object* v_00_u03b1_9_, lean_object* v_motive_10_, lean_object* v_x_11_, lean_object* v_x_12_, lean_object* v_h__1_13_, lean_object* v_h__2_14_){
_start:
{
if (lean_obj_tag(v_x_11_) == 0)
{
lean_object* v___x_15_; 
lean_dec(v_h__2_14_);
v___x_15_ = lean_apply_1(v_h__1_13_, v_x_12_);
return v___x_15_;
}
else
{
lean_object* v_head_16_; lean_object* v_tail_17_; lean_object* v___x_18_; 
lean_dec(v_h__1_13_);
v_head_16_ = lean_ctor_get(v_x_11_, 0);
lean_inc(v_head_16_);
v_tail_17_ = lean_ctor_get(v_x_11_, 1);
lean_inc(v_tail_17_);
lean_dec_ref(v_x_11_);
v___x_18_ = lean_apply_3(v_h__2_14_, v_head_16_, v_tail_17_, v_x_12_);
return v___x_18_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___redArg___lam__0___boxed(lean_object* v_i_19_, lean_object* v_acc_20_, lean_object* v_inst_21_, lean_object* v_f_22_, lean_object* v_as_23_, lean_object* v_b_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___redArg___lam__0(v_i_19_, v_acc_20_, v_inst_21_, v_f_22_, v_as_23_, v_b_24_);
lean_dec(v_i_19_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___redArg(lean_object* v_inst_26_, lean_object* v_f_27_, lean_object* v_as_28_, lean_object* v_i_29_, lean_object* v_acc_30_){
_start:
{
lean_object* v___x_31_; uint8_t v___x_32_; 
v___x_31_ = lean_array_get_size(v_as_28_);
v___x_32_ = lean_nat_dec_eq(v_i_29_, v___x_31_);
if (v___x_32_ == 0)
{
lean_object* v_toBind_33_; lean_object* v___f_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v_toBind_33_ = lean_ctor_get(v_inst_26_, 1);
lean_inc(v_toBind_33_);
lean_inc_ref(v_as_28_);
lean_inc(v_f_27_);
lean_inc(v_i_29_);
v___f_34_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_34_, 0, v_i_29_);
lean_closure_set(v___f_34_, 1, v_acc_30_);
lean_closure_set(v___f_34_, 2, v_inst_26_);
lean_closure_set(v___f_34_, 3, v_f_27_);
lean_closure_set(v___f_34_, 4, v_as_28_);
v___x_35_ = lean_array_fget(v_as_28_, v_i_29_);
lean_dec(v_i_29_);
lean_dec_ref(v_as_28_);
v___x_36_ = lean_apply_1(v_f_27_, v___x_35_);
v___x_37_ = lean_apply_4(v_toBind_33_, lean_box(0), lean_box(0), v___x_36_, v___f_34_);
return v___x_37_;
}
else
{
lean_object* v_toApplicative_38_; lean_object* v_toPure_39_; lean_object* v___x_40_; 
lean_dec(v_i_29_);
lean_dec_ref(v_as_28_);
lean_dec(v_f_27_);
v_toApplicative_38_ = lean_ctor_get(v_inst_26_, 0);
lean_inc_ref(v_toApplicative_38_);
lean_dec_ref(v_inst_26_);
v_toPure_39_ = lean_ctor_get(v_toApplicative_38_, 1);
lean_inc(v_toPure_39_);
lean_dec_ref(v_toApplicative_38_);
v___x_40_ = lean_apply_2(v_toPure_39_, lean_box(0), v_acc_30_);
return v___x_40_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___redArg___lam__0(lean_object* v_i_41_, lean_object* v_acc_42_, lean_object* v_inst_43_, lean_object* v_f_44_, lean_object* v_as_45_, lean_object* v_b_46_){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_47_ = lean_unsigned_to_nat(1u);
v___x_48_ = lean_nat_add(v_i_41_, v___x_47_);
v___x_49_ = lean_array_push(v_acc_42_, v_b_46_);
v___x_50_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___redArg(v_inst_43_, v_f_44_, v_as_45_, v___x_48_, v___x_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go(lean_object* v_m_51_, lean_object* v_00_u03b1_52_, lean_object* v_00_u03b2_53_, lean_object* v_inst_54_, lean_object* v_f_55_, lean_object* v_as_56_, lean_object* v_i_57_, lean_object* v_acc_58_, lean_object* v_hle_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___redArg(v_inst_54_, v_f_55_, v_as_56_, v_i_57_, v_acc_58_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27___redArg(lean_object* v_inst_61_, lean_object* v_f_62_, lean_object* v_as_63_){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_64_ = lean_unsigned_to_nat(0u);
v___x_65_ = lean_array_get_size(v_as_63_);
v___x_66_ = lean_mk_empty_array_with_capacity(v___x_65_);
v___x_67_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___redArg(v_inst_61_, v_f_62_, v_as_63_, v___x_64_, v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27(lean_object* v_m_68_, lean_object* v_00_u03b1_69_, lean_object* v_00_u03b2_70_, lean_object* v_inst_71_, lean_object* v_f_72_, lean_object* v_as_73_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_Array_mapM_x27___redArg(v_inst_71_, v_f_72_, v_as_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___redArg___lam__0___boxed(lean_object* v_a_75_, lean_object* v_i_76_, lean_object* v_as_77_, lean_object* v_inst_78_, lean_object* v_f_79_, lean_object* v_b_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___redArg___lam__0(v_a_75_, v_i_76_, v_as_77_, v_inst_78_, v_f_79_, v_b_80_);
lean_dec(v_i_76_);
lean_dec(v_a_75_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___redArg(lean_object* v_inst_82_, lean_object* v_f_83_, lean_object* v_i_84_, lean_object* v_as_85_){
_start:
{
lean_object* v___x_86_; uint8_t v___x_87_; 
v___x_86_ = lean_array_get_size(v_as_85_);
v___x_87_ = lean_nat_dec_lt(v_i_84_, v___x_86_);
if (v___x_87_ == 0)
{
lean_object* v_toApplicative_88_; lean_object* v_toPure_89_; lean_object* v___x_90_; 
lean_dec(v_i_84_);
lean_dec(v_f_83_);
v_toApplicative_88_ = lean_ctor_get(v_inst_82_, 0);
lean_inc_ref(v_toApplicative_88_);
lean_dec_ref(v_inst_82_);
v_toPure_89_ = lean_ctor_get(v_toApplicative_88_, 1);
lean_inc(v_toPure_89_);
lean_dec_ref(v_toApplicative_88_);
v___x_90_ = lean_apply_2(v_toPure_89_, lean_box(0), v_as_85_);
return v___x_90_;
}
else
{
lean_object* v_toBind_91_; lean_object* v_a_92_; lean_object* v___f_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v_toBind_91_ = lean_ctor_get(v_inst_82_, 1);
lean_inc(v_toBind_91_);
v_a_92_ = lean_array_fget(v_as_85_, v_i_84_);
lean_inc(v_f_83_);
lean_inc(v_a_92_);
v___f_93_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_93_, 0, v_a_92_);
lean_closure_set(v___f_93_, 1, v_i_84_);
lean_closure_set(v___f_93_, 2, v_as_85_);
lean_closure_set(v___f_93_, 3, v_inst_82_);
lean_closure_set(v___f_93_, 4, v_f_83_);
v___x_94_ = lean_apply_1(v_f_83_, v_a_92_);
v___x_95_ = lean_apply_4(v_toBind_91_, lean_box(0), lean_box(0), v___x_94_, v___f_93_);
return v___x_95_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___redArg___lam__0(lean_object* v_a_96_, lean_object* v_i_97_, lean_object* v_as_98_, lean_object* v_inst_99_, lean_object* v_f_100_, lean_object* v_b_101_){
_start:
{
size_t v___x_102_; size_t v___x_103_; uint8_t v___x_104_; 
v___x_102_ = lean_ptr_addr(v_a_96_);
v___x_103_ = lean_ptr_addr(v_b_101_);
v___x_104_ = lean_usize_dec_eq(v___x_102_, v___x_103_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_105_ = lean_unsigned_to_nat(1u);
v___x_106_ = lean_nat_add(v_i_97_, v___x_105_);
v___x_107_ = lean_array_fset(v_as_98_, v_i_97_, v_b_101_);
v___x_108_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___redArg(v_inst_99_, v_f_100_, v___x_106_, v___x_107_);
return v___x_108_;
}
else
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
lean_dec(v_b_101_);
v___x_109_ = lean_unsigned_to_nat(1u);
v___x_110_ = lean_nat_add(v_i_97_, v___x_109_);
v___x_111_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___redArg(v_inst_99_, v_f_100_, v___x_110_, v_as_98_);
return v___x_111_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go(lean_object* v_m_112_, lean_object* v_00_u03b1_113_, lean_object* v_inst_114_, lean_object* v_f_115_, lean_object* v_i_116_, lean_object* v_as_117_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___redArg(v_inst_114_, v_f_115_, v_i_116_, v_as_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp___redArg(lean_object* v_inst_119_, lean_object* v_as_120_, lean_object* v_f_121_){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = lean_unsigned_to_nat(0u);
v___x_123_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___redArg(v_inst_119_, v_f_121_, v___x_122_, v_as_120_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp(lean_object* v_m_124_, lean_object* v_00_u03b1_125_, lean_object* v_inst_126_, lean_object* v_as_127_, lean_object* v_f_128_){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_unsigned_to_nat(0u);
v___x_130_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___redArg(v_inst_126_, v_f_128_, v___x_129_, v_as_127_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Array_mapMono___redArg___lam__0(lean_object* v_f_131_, lean_object* v_x_132_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = lean_apply_1(v_f_131_, v_x_132_);
return v___x_133_;
}
}
static lean_object* _init_l_Array_mapMono___redArg___closed__0(void){
_start:
{
lean_object* v___f_134_; 
v___f_134_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_134_;
}
}
static lean_object* _init_l_Array_mapMono___redArg___closed__1(void){
_start:
{
lean_object* v___f_135_; 
v___f_135_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_135_;
}
}
static lean_object* _init_l_Array_mapMono___redArg___closed__2(void){
_start:
{
lean_object* v___f_136_; 
v___f_136_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_136_;
}
}
static lean_object* _init_l_Array_mapMono___redArg___closed__3(void){
_start:
{
lean_object* v___f_137_; 
v___f_137_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_137_;
}
}
static lean_object* _init_l_Array_mapMono___redArg___closed__4(void){
_start:
{
lean_object* v___f_138_; 
v___f_138_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_138_;
}
}
static lean_object* _init_l_Array_mapMono___redArg___closed__5(void){
_start:
{
lean_object* v___f_139_; 
v___f_139_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_139_;
}
}
static lean_object* _init_l_Array_mapMono___redArg___closed__6(void){
_start:
{
lean_object* v___f_140_; 
v___f_140_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_140_;
}
}
static lean_object* _init_l_Array_mapMono___redArg___closed__7(void){
_start:
{
lean_object* v___f_141_; lean_object* v___f_142_; lean_object* v___x_143_; 
v___f_141_ = lean_obj_once(&l_Array_mapMono___redArg___closed__1, &l_Array_mapMono___redArg___closed__1_once, _init_l_Array_mapMono___redArg___closed__1);
v___f_142_ = lean_obj_once(&l_Array_mapMono___redArg___closed__0, &l_Array_mapMono___redArg___closed__0_once, _init_l_Array_mapMono___redArg___closed__0);
v___x_143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_143_, 0, v___f_142_);
lean_ctor_set(v___x_143_, 1, v___f_141_);
return v___x_143_;
}
}
static lean_object* _init_l_Array_mapMono___redArg___closed__8(void){
_start:
{
lean_object* v___f_144_; lean_object* v___f_145_; lean_object* v___f_146_; lean_object* v___f_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___f_144_ = lean_obj_once(&l_Array_mapMono___redArg___closed__5, &l_Array_mapMono___redArg___closed__5_once, _init_l_Array_mapMono___redArg___closed__5);
v___f_145_ = lean_obj_once(&l_Array_mapMono___redArg___closed__4, &l_Array_mapMono___redArg___closed__4_once, _init_l_Array_mapMono___redArg___closed__4);
v___f_146_ = lean_obj_once(&l_Array_mapMono___redArg___closed__3, &l_Array_mapMono___redArg___closed__3_once, _init_l_Array_mapMono___redArg___closed__3);
v___f_147_ = lean_obj_once(&l_Array_mapMono___redArg___closed__2, &l_Array_mapMono___redArg___closed__2_once, _init_l_Array_mapMono___redArg___closed__2);
v___x_148_ = lean_obj_once(&l_Array_mapMono___redArg___closed__7, &l_Array_mapMono___redArg___closed__7_once, _init_l_Array_mapMono___redArg___closed__7);
v___x_149_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
lean_ctor_set(v___x_149_, 1, v___f_147_);
lean_ctor_set(v___x_149_, 2, v___f_146_);
lean_ctor_set(v___x_149_, 3, v___f_145_);
lean_ctor_set(v___x_149_, 4, v___f_144_);
return v___x_149_;
}
}
static lean_object* _init_l_Array_mapMono___redArg___closed__9(void){
_start:
{
lean_object* v___f_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___f_150_ = lean_obj_once(&l_Array_mapMono___redArg___closed__6, &l_Array_mapMono___redArg___closed__6_once, _init_l_Array_mapMono___redArg___closed__6);
v___x_151_ = lean_obj_once(&l_Array_mapMono___redArg___closed__8, &l_Array_mapMono___redArg___closed__8_once, _init_l_Array_mapMono___redArg___closed__8);
v___x_152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
lean_ctor_set(v___x_152_, 1, v___f_150_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Array_mapMono___redArg(lean_object* v_as_153_, lean_object* v_f_154_){
_start:
{
lean_object* v___f_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___f_155_ = lean_alloc_closure((void*)(l_Array_mapMono___redArg___lam__0), 2, 1);
lean_closure_set(v___f_155_, 0, v_f_154_);
v___x_156_ = lean_obj_once(&l_Array_mapMono___redArg___closed__9, &l_Array_mapMono___redArg___closed__9_once, _init_l_Array_mapMono___redArg___closed__9);
v___x_157_ = lean_unsigned_to_nat(0u);
v___x_158_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___redArg(v___x_156_, v___f_155_, v___x_157_, v_as_153_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Array_mapMono(lean_object* v_00_u03b1_159_, lean_object* v_as_160_, lean_object* v_f_161_){
_start:
{
lean_object* v___f_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___f_162_ = lean_alloc_closure((void*)(l_Array_mapMono___redArg___lam__0), 2, 1);
lean_closure_set(v___f_162_, 0, v_f_161_);
v___x_163_ = lean_obj_once(&l_Array_mapMono___redArg___closed__9, &l_Array_mapMono___redArg___closed__9_once, _init_l_Array_mapMono___redArg___closed__9);
v___x_164_ = lean_unsigned_to_nat(0u);
v___x_165_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___redArg(v___x_163_, v___f_162_, v___x_164_, v_as_160_);
return v___x_165_;
}
}
lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Set(uint8_t builtin);
lean_object* runtime_initialize_Init_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Linear(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Array_BasicAux(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Array_BasicAux(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Set(uint8_t builtin);
lean_object* initialize_Init_Util(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Linear(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Array_BasicAux(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Array_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Array_BasicAux(builtin);
}
#ifdef __cplusplus
}
#endif
