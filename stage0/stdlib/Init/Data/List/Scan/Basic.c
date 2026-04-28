// Lean compiler output
// Module: Init.Data.List.Scan.Basic
// Imports: public import Init.Data.List.Basic public import Init.Control.Id
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
lean_object* l_List_reverse(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_flip(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_scanlM___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_scanlM___redArg___closed__0;
LEAN_EXPORT lean_object* l_List_scanlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_scanlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_scanrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_scanrM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_scanl___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_scanl___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_scanl___redArg___closed__0;
static lean_once_cell_t l_List_scanl___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_scanl___redArg___closed__1;
static lean_once_cell_t l_List_scanl___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_scanl___redArg___closed__2;
static lean_once_cell_t l_List_scanl___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_scanl___redArg___closed__3;
static lean_once_cell_t l_List_scanl___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_scanl___redArg___closed__4;
static lean_once_cell_t l_List_scanl___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_scanl___redArg___closed__5;
static lean_once_cell_t l_List_scanl___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_scanl___redArg___closed__6;
static lean_once_cell_t l_List_scanl___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_scanl___redArg___closed__7;
static lean_once_cell_t l_List_scanl___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_scanl___redArg___closed__8;
static lean_once_cell_t l_List_scanl___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_scanl___redArg___closed__9;
LEAN_EXPORT lean_object* l_List_scanl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_scanl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_scanr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_scanr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go___redArg(lean_object* v_inst_1_, lean_object* v_f_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_){
_start:
{
if (lean_obj_tag(v_a_3_) == 0)
{
lean_object* v_toApplicative_6_; lean_object* v___x_8_; uint8_t v_isShared_9_; uint8_t v_isSharedCheck_15_; 
v_toApplicative_6_ = lean_ctor_get(v_inst_1_, 0);
lean_inc_ref(v_toApplicative_6_);
lean_dec(v_f_2_);
v_isSharedCheck_15_ = !lean_is_exclusive(v_inst_1_);
if (v_isSharedCheck_15_ == 0)
{
lean_object* v_unused_16_; lean_object* v_unused_17_; 
v_unused_16_ = lean_ctor_get(v_inst_1_, 1);
lean_dec(v_unused_16_);
v_unused_17_ = lean_ctor_get(v_inst_1_, 0);
lean_dec(v_unused_17_);
v___x_8_ = v_inst_1_;
v_isShared_9_ = v_isSharedCheck_15_;
goto v_resetjp_7_;
}
else
{
lean_dec(v_inst_1_);
v___x_8_ = lean_box(0);
v_isShared_9_ = v_isSharedCheck_15_;
goto v_resetjp_7_;
}
v_resetjp_7_:
{
lean_object* v_toPure_10_; lean_object* v___x_12_; 
v_toPure_10_ = lean_ctor_get(v_toApplicative_6_, 1);
lean_inc(v_toPure_10_);
lean_dec_ref(v_toApplicative_6_);
if (v_isShared_9_ == 0)
{
lean_ctor_set_tag(v___x_8_, 1);
lean_ctor_set(v___x_8_, 1, v_a_5_);
lean_ctor_set(v___x_8_, 0, v_a_4_);
v___x_12_ = v___x_8_;
goto v_reusejp_11_;
}
else
{
lean_object* v_reuseFailAlloc_14_; 
v_reuseFailAlloc_14_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_14_, 0, v_a_4_);
lean_ctor_set(v_reuseFailAlloc_14_, 1, v_a_5_);
v___x_12_ = v_reuseFailAlloc_14_;
goto v_reusejp_11_;
}
v_reusejp_11_:
{
lean_object* v___x_13_; 
v___x_13_ = lean_apply_2(v_toPure_10_, lean_box(0), v___x_12_);
return v___x_13_;
}
}
}
else
{
lean_object* v_toBind_18_; lean_object* v_head_19_; lean_object* v_tail_20_; lean_object* v___f_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v_toBind_18_ = lean_ctor_get(v_inst_1_, 1);
lean_inc(v_toBind_18_);
v_head_19_ = lean_ctor_get(v_a_3_, 0);
lean_inc(v_head_19_);
v_tail_20_ = lean_ctor_get(v_a_3_, 1);
lean_inc(v_tail_20_);
lean_dec_ref(v_a_3_);
lean_inc(v_f_2_);
lean_inc(v_a_4_);
v___f_21_ = lean_alloc_closure((void*)(l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go___redArg___lam__0), 6, 5);
lean_closure_set(v___f_21_, 0, v_a_4_);
lean_closure_set(v___f_21_, 1, v_a_5_);
lean_closure_set(v___f_21_, 2, v_inst_1_);
lean_closure_set(v___f_21_, 3, v_f_2_);
lean_closure_set(v___f_21_, 4, v_tail_20_);
v___x_22_ = lean_apply_2(v_f_2_, v_a_4_, v_head_19_);
v___x_23_ = lean_apply_4(v_toBind_18_, lean_box(0), lean_box(0), v___x_22_, v___f_21_);
return v___x_23_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go___redArg___lam__0(lean_object* v_a_24_, lean_object* v_a_25_, lean_object* v_inst_26_, lean_object* v_f_27_, lean_object* v_tail_28_, lean_object* v_____do__lift_29_){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_30_, 0, v_a_24_);
lean_ctor_set(v___x_30_, 1, v_a_25_);
v___x_31_ = l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go___redArg(v_inst_26_, v_f_27_, v_tail_28_, v_____do__lift_29_, v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go(lean_object* v_m_32_, lean_object* v_00_u03b2_33_, lean_object* v_00_u03b1_34_, lean_object* v_inst_35_, lean_object* v_f_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go___redArg(v_inst_35_, v_f_36_, v_a_37_, v_a_38_, v_a_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM___redArg(lean_object* v_inst_41_, lean_object* v_f_42_, lean_object* v_init_43_, lean_object* v_l_44_){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_box(0);
v___x_46_ = l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go___redArg(v_inst_41_, v_f_42_, v_l_44_, v_init_43_, v___x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM(lean_object* v_m_47_, lean_object* v_00_u03b2_48_, lean_object* v_00_u03b1_49_, lean_object* v_inst_50_, lean_object* v_f_51_, lean_object* v_init_52_, lean_object* v_l_53_){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_box(0);
v___x_55_ = l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go___redArg(v_inst_50_, v_f_51_, v_l_53_, v_init_52_, v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_l_List_scanlM___redArg___closed__0(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_alloc_closure((void*)(l_List_reverse), 2, 1);
lean_closure_set(v___x_56_, 0, lean_box(0));
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_List_scanlM___redArg(lean_object* v_inst_57_, lean_object* v_f_58_, lean_object* v_init_59_, lean_object* v_l_60_){
_start:
{
lean_object* v_toApplicative_61_; lean_object* v_toFunctor_62_; lean_object* v_map_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v_toApplicative_61_ = lean_ctor_get(v_inst_57_, 0);
v_toFunctor_62_ = lean_ctor_get(v_toApplicative_61_, 0);
v_map_63_ = lean_ctor_get(v_toFunctor_62_, 0);
lean_inc(v_map_63_);
v___x_64_ = lean_obj_once(&l_List_scanlM___redArg___closed__0, &l_List_scanlM___redArg___closed__0_once, _init_l_List_scanlM___redArg___closed__0);
v___x_65_ = lean_box(0);
v___x_66_ = l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go___redArg(v_inst_57_, v_f_58_, v_l_60_, v_init_59_, v___x_65_);
v___x_67_ = lean_apply_4(v_map_63_, lean_box(0), lean_box(0), v___x_64_, v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_List_scanlM(lean_object* v_m_68_, lean_object* v_00_u03b2_69_, lean_object* v_00_u03b1_70_, lean_object* v_inst_71_, lean_object* v_f_72_, lean_object* v_init_73_, lean_object* v_l_74_){
_start:
{
lean_object* v_toApplicative_75_; lean_object* v_toFunctor_76_; lean_object* v_map_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v_toApplicative_75_ = lean_ctor_get(v_inst_71_, 0);
v_toFunctor_76_ = lean_ctor_get(v_toApplicative_75_, 0);
v_map_77_ = lean_ctor_get(v_toFunctor_76_, 0);
lean_inc(v_map_77_);
v___x_78_ = lean_obj_once(&l_List_scanlM___redArg___closed__0, &l_List_scanlM___redArg___closed__0_once, _init_l_List_scanlM___redArg___closed__0);
v___x_79_ = lean_box(0);
v___x_80_ = l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go___redArg(v_inst_71_, v_f_72_, v_l_74_, v_init_73_, v___x_79_);
v___x_81_ = lean_apply_4(v_map_77_, lean_box(0), lean_box(0), v___x_78_, v___x_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_List_scanrM___redArg(lean_object* v_inst_82_, lean_object* v_f_83_, lean_object* v_init_84_, lean_object* v_xs_85_){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_86_ = lean_alloc_closure((void*)(l_flip), 6, 4);
lean_closure_set(v___x_86_, 0, lean_box(0));
lean_closure_set(v___x_86_, 1, lean_box(0));
lean_closure_set(v___x_86_, 2, lean_box(0));
lean_closure_set(v___x_86_, 3, v_f_83_);
v___x_87_ = l_List_reverse___redArg(v_xs_85_);
v___x_88_ = lean_box(0);
v___x_89_ = l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go___redArg(v_inst_82_, v___x_86_, v___x_87_, v_init_84_, v___x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_List_scanrM(lean_object* v_m_90_, lean_object* v_00_u03b1_91_, lean_object* v_00_u03b2_92_, lean_object* v_inst_93_, lean_object* v_f_94_, lean_object* v_init_95_, lean_object* v_xs_96_){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_97_ = lean_alloc_closure((void*)(l_flip), 6, 4);
lean_closure_set(v___x_97_, 0, lean_box(0));
lean_closure_set(v___x_97_, 1, lean_box(0));
lean_closure_set(v___x_97_, 2, lean_box(0));
lean_closure_set(v___x_97_, 3, v_f_94_);
v___x_98_ = l_List_reverse___redArg(v_xs_96_);
v___x_99_ = lean_box(0);
v___x_100_ = l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go___redArg(v_inst_93_, v___x_97_, v___x_98_, v_init_95_, v___x_99_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_List_scanl___redArg___lam__0(lean_object* v_f_101_, lean_object* v_x1_102_, lean_object* v_x2_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = lean_apply_2(v_f_101_, v_x1_102_, v_x2_103_);
return v___x_104_;
}
}
static lean_object* _init_l_List_scanl___redArg___closed__0(void){
_start:
{
lean_object* v___f_105_; 
v___f_105_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_105_;
}
}
static lean_object* _init_l_List_scanl___redArg___closed__1(void){
_start:
{
lean_object* v___f_106_; 
v___f_106_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_106_;
}
}
static lean_object* _init_l_List_scanl___redArg___closed__2(void){
_start:
{
lean_object* v___f_107_; 
v___f_107_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_107_;
}
}
static lean_object* _init_l_List_scanl___redArg___closed__3(void){
_start:
{
lean_object* v___f_108_; 
v___f_108_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_108_;
}
}
static lean_object* _init_l_List_scanl___redArg___closed__4(void){
_start:
{
lean_object* v___f_109_; 
v___f_109_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_109_;
}
}
static lean_object* _init_l_List_scanl___redArg___closed__5(void){
_start:
{
lean_object* v___f_110_; 
v___f_110_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_110_;
}
}
static lean_object* _init_l_List_scanl___redArg___closed__6(void){
_start:
{
lean_object* v___f_111_; 
v___f_111_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_111_;
}
}
static lean_object* _init_l_List_scanl___redArg___closed__7(void){
_start:
{
lean_object* v___f_112_; lean_object* v___f_113_; lean_object* v___x_114_; 
v___f_112_ = lean_obj_once(&l_List_scanl___redArg___closed__1, &l_List_scanl___redArg___closed__1_once, _init_l_List_scanl___redArg___closed__1);
v___f_113_ = lean_obj_once(&l_List_scanl___redArg___closed__0, &l_List_scanl___redArg___closed__0_once, _init_l_List_scanl___redArg___closed__0);
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v___f_113_);
lean_ctor_set(v___x_114_, 1, v___f_112_);
return v___x_114_;
}
}
static lean_object* _init_l_List_scanl___redArg___closed__8(void){
_start:
{
lean_object* v___f_115_; lean_object* v___f_116_; lean_object* v___f_117_; lean_object* v___f_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___f_115_ = lean_obj_once(&l_List_scanl___redArg___closed__5, &l_List_scanl___redArg___closed__5_once, _init_l_List_scanl___redArg___closed__5);
v___f_116_ = lean_obj_once(&l_List_scanl___redArg___closed__4, &l_List_scanl___redArg___closed__4_once, _init_l_List_scanl___redArg___closed__4);
v___f_117_ = lean_obj_once(&l_List_scanl___redArg___closed__3, &l_List_scanl___redArg___closed__3_once, _init_l_List_scanl___redArg___closed__3);
v___f_118_ = lean_obj_once(&l_List_scanl___redArg___closed__2, &l_List_scanl___redArg___closed__2_once, _init_l_List_scanl___redArg___closed__2);
v___x_119_ = lean_obj_once(&l_List_scanl___redArg___closed__7, &l_List_scanl___redArg___closed__7_once, _init_l_List_scanl___redArg___closed__7);
v___x_120_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set(v___x_120_, 1, v___f_118_);
lean_ctor_set(v___x_120_, 2, v___f_117_);
lean_ctor_set(v___x_120_, 3, v___f_116_);
lean_ctor_set(v___x_120_, 4, v___f_115_);
return v___x_120_;
}
}
static lean_object* _init_l_List_scanl___redArg___closed__9(void){
_start:
{
lean_object* v___f_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___f_121_ = lean_obj_once(&l_List_scanl___redArg___closed__6, &l_List_scanl___redArg___closed__6_once, _init_l_List_scanl___redArg___closed__6);
v___x_122_ = lean_obj_once(&l_List_scanl___redArg___closed__8, &l_List_scanl___redArg___closed__8_once, _init_l_List_scanl___redArg___closed__8);
v___x_123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
lean_ctor_set(v___x_123_, 1, v___f_121_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_List_scanl___redArg(lean_object* v_f_124_, lean_object* v_init_125_, lean_object* v_as_126_){
_start:
{
lean_object* v___f_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___f_127_ = lean_alloc_closure((void*)(l_List_scanl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_127_, 0, v_f_124_);
v___x_128_ = lean_obj_once(&l_List_scanl___redArg___closed__9, &l_List_scanl___redArg___closed__9_once, _init_l_List_scanl___redArg___closed__9);
v___x_129_ = lean_box(0);
v___x_130_ = l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go___redArg(v___x_128_, v___f_127_, v_as_126_, v_init_125_, v___x_129_);
v___x_131_ = l_List_reverse___redArg(v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_List_scanl(lean_object* v_00_u03b2_132_, lean_object* v_00_u03b1_133_, lean_object* v_f_134_, lean_object* v_init_135_, lean_object* v_as_136_){
_start:
{
lean_object* v___f_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___f_137_ = lean_alloc_closure((void*)(l_List_scanl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_137_, 0, v_f_134_);
v___x_138_ = lean_obj_once(&l_List_scanl___redArg___closed__9, &l_List_scanl___redArg___closed__9_once, _init_l_List_scanl___redArg___closed__9);
v___x_139_ = lean_box(0);
v___x_140_ = l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go___redArg(v___x_138_, v___f_137_, v_as_136_, v_init_135_, v___x_139_);
v___x_141_ = l_List_reverse___redArg(v___x_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_List_scanr___redArg(lean_object* v_f_142_, lean_object* v_init_143_, lean_object* v_as_144_){
_start:
{
lean_object* v___f_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___f_145_ = lean_alloc_closure((void*)(l_List_scanl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_145_, 0, v_f_142_);
v___x_146_ = lean_obj_once(&l_List_scanl___redArg___closed__9, &l_List_scanl___redArg___closed__9_once, _init_l_List_scanl___redArg___closed__9);
v___x_147_ = lean_alloc_closure((void*)(l_flip), 6, 4);
lean_closure_set(v___x_147_, 0, lean_box(0));
lean_closure_set(v___x_147_, 1, lean_box(0));
lean_closure_set(v___x_147_, 2, lean_box(0));
lean_closure_set(v___x_147_, 3, v___f_145_);
v___x_148_ = l_List_reverse___redArg(v_as_144_);
v___x_149_ = lean_box(0);
v___x_150_ = l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go___redArg(v___x_146_, v___x_147_, v___x_148_, v_init_143_, v___x_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_List_scanr(lean_object* v_00_u03b1_151_, lean_object* v_00_u03b2_152_, lean_object* v_f_153_, lean_object* v_init_154_, lean_object* v_as_155_){
_start:
{
lean_object* v___f_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___f_156_ = lean_alloc_closure((void*)(l_List_scanl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_156_, 0, v_f_153_);
v___x_157_ = lean_obj_once(&l_List_scanl___redArg___closed__9, &l_List_scanl___redArg___closed__9_once, _init_l_List_scanl___redArg___closed__9);
v___x_158_ = lean_alloc_closure((void*)(l_flip), 6, 4);
lean_closure_set(v___x_158_, 0, lean_box(0));
lean_closure_set(v___x_158_, 1, lean_box(0));
lean_closure_set(v___x_158_, 2, lean_box(0));
lean_closure_set(v___x_158_, 3, v___f_156_);
v___x_159_ = l_List_reverse___redArg(v_as_155_);
v___x_160_ = lean_box(0);
v___x_161_ = l___private_Init_Data_List_Scan_Basic_0__List_scanAuxM_go___redArg(v___x_157_, v___x_158_, v___x_159_, v_init_154_, v___x_160_);
return v___x_161_;
}
}
lean_object* runtime_initialize_Init_Data_List_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_Id(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_List_Scan_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_List_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Id(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_List_Scan_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_List_Basic(uint8_t builtin);
lean_object* initialize_Init_Control_Id(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_List_Scan_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_List_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Id(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Scan_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_List_Scan_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_List_Scan_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
