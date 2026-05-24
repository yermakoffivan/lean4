// Lean compiler output
// Module: Lean.Meta.Sym.DSimp.DSimproc
// Imports: public import Lean.Meta.Sym.DSimp.Result
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
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimproc_andThen(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimproc_andThen___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instAndThenDSimproc___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instAndThenDSimproc___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instAndThenDSimproc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_DSimp_instAndThenDSimproc___lam__0___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instAndThenDSimproc___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instAndThenDSimproc___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_DSimp_instAndThenDSimproc = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instAndThenDSimproc___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimproc_orElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimproc_orElse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instOrElseDSimproc___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instOrElseDSimproc___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_DSimp_instOrElseDSimproc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_DSimp_instOrElseDSimproc___lam__0___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_DSimp_instOrElseDSimproc___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instOrElseDSimproc___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_DSimp_instOrElseDSimproc = (const lean_object*)&l_Lean_Meta_Sym_DSimp_instOrElseDSimproc___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimproc_tryCatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimproc_tryCatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimproc_andThen(lean_object* v_f_1_, lean_object* v_g_2_, lean_object* v_e_u2081_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_){
_start:
{
lean_object* v___x_14_; 
lean_inc(v_a_12_);
lean_inc_ref(v_a_11_);
lean_inc(v_a_10_);
lean_inc_ref(v_a_9_);
lean_inc(v_a_8_);
lean_inc_ref(v_a_7_);
lean_inc(v_a_6_);
lean_inc(v_a_5_);
lean_inc(v_a_4_);
lean_inc_ref(v_e_u2081_3_);
v___x_14_ = lean_apply_11(v_f_1_, v_e_u2081_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_, v_a_11_, v_a_12_, lean_box(0));
if (lean_obj_tag(v___x_14_) == 0)
{
lean_object* v_a_15_; 
v_a_15_ = lean_ctor_get(v___x_14_, 0);
lean_inc(v_a_15_);
if (lean_obj_tag(v_a_15_) == 0)
{
uint8_t v_done_16_; 
v_done_16_ = lean_ctor_get_uint8(v_a_15_, 0);
lean_dec_ref_known(v_a_15_, 0);
if (v_done_16_ == 0)
{
lean_object* v___x_17_; 
lean_dec_ref_known(v___x_14_, 1);
lean_inc(v_a_12_);
lean_inc_ref(v_a_11_);
lean_inc(v_a_10_);
lean_inc_ref(v_a_9_);
lean_inc(v_a_8_);
lean_inc_ref(v_a_7_);
lean_inc(v_a_6_);
lean_inc(v_a_5_);
lean_inc(v_a_4_);
v___x_17_ = lean_apply_11(v_g_2_, v_e_u2081_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_, v_a_11_, v_a_12_, lean_box(0));
return v___x_17_;
}
else
{
lean_dec_ref(v_e_u2081_3_);
lean_dec_ref(v_g_2_);
return v___x_14_;
}
}
else
{
uint8_t v_done_18_; 
lean_dec_ref(v_e_u2081_3_);
v_done_18_ = lean_ctor_get_uint8(v_a_15_, sizeof(void*)*1);
if (v_done_18_ == 0)
{
lean_object* v_e_x27_19_; lean_object* v___x_20_; 
lean_dec_ref_known(v___x_14_, 1);
v_e_x27_19_ = lean_ctor_get(v_a_15_, 0);
lean_inc_ref(v_e_x27_19_);
lean_dec_ref_known(v_a_15_, 1);
lean_inc(v_a_12_);
lean_inc_ref(v_a_11_);
lean_inc(v_a_10_);
lean_inc_ref(v_a_9_);
lean_inc(v_a_8_);
lean_inc_ref(v_a_7_);
lean_inc(v_a_6_);
lean_inc(v_a_5_);
lean_inc(v_a_4_);
v___x_20_ = lean_apply_11(v_g_2_, v_e_x27_19_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_, v_a_11_, v_a_12_, lean_box(0));
return v___x_20_;
}
else
{
lean_dec_ref_known(v_a_15_, 1);
lean_dec_ref(v_g_2_);
return v___x_14_;
}
}
}
else
{
lean_dec_ref(v_e_u2081_3_);
lean_dec_ref(v_g_2_);
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimproc_andThen___boxed(lean_object* v_f_21_, lean_object* v_g_22_, lean_object* v_e_u2081_23_, lean_object* v_a_24_, lean_object* v_a_25_, lean_object* v_a_26_, lean_object* v_a_27_, lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l_Lean_Meta_Sym_DSimp_DSimproc_andThen(v_f_21_, v_g_22_, v_e_u2081_23_, v_a_24_, v_a_25_, v_a_26_, v_a_27_, v_a_28_, v_a_29_, v_a_30_, v_a_31_, v_a_32_);
lean_dec(v_a_32_);
lean_dec_ref(v_a_31_);
lean_dec(v_a_30_);
lean_dec_ref(v_a_29_);
lean_dec(v_a_28_);
lean_dec_ref(v_a_27_);
lean_dec(v_a_26_);
lean_dec(v_a_25_);
lean_dec(v_a_24_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instAndThenDSimproc___lam__0(lean_object* v_f_35_, lean_object* v_g_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v___x_48_; 
lean_inc(v___y_46_);
lean_inc_ref(v___y_45_);
lean_inc(v___y_44_);
lean_inc_ref(v___y_43_);
lean_inc(v___y_42_);
lean_inc_ref(v___y_41_);
lean_inc(v___y_40_);
lean_inc(v___y_39_);
lean_inc(v___y_38_);
lean_inc_ref(v___y_37_);
v___x_48_ = lean_apply_11(v_f_35_, v___y_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_, v___y_46_, lean_box(0));
if (lean_obj_tag(v___x_48_) == 0)
{
lean_object* v_a_49_; lean_object* v___x_50_; 
v_a_49_ = lean_ctor_get(v___x_48_, 0);
lean_inc(v_a_49_);
v___x_50_ = lean_box(0);
if (lean_obj_tag(v_a_49_) == 0)
{
uint8_t v_done_51_; 
v_done_51_ = lean_ctor_get_uint8(v_a_49_, 0);
lean_dec_ref_known(v_a_49_, 0);
if (v_done_51_ == 0)
{
lean_object* v___x_52_; 
lean_dec_ref_known(v___x_48_, 1);
lean_inc(v___y_46_);
lean_inc_ref(v___y_45_);
lean_inc(v___y_44_);
lean_inc_ref(v___y_43_);
lean_inc(v___y_42_);
lean_inc_ref(v___y_41_);
lean_inc(v___y_40_);
lean_inc(v___y_39_);
lean_inc(v___y_38_);
v___x_52_ = lean_apply_12(v_g_36_, v___x_50_, v___y_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_, v___y_46_, lean_box(0));
return v___x_52_;
}
else
{
lean_dec_ref(v___y_37_);
lean_dec_ref(v_g_36_);
return v___x_48_;
}
}
else
{
uint8_t v_done_53_; 
lean_dec_ref(v___y_37_);
v_done_53_ = lean_ctor_get_uint8(v_a_49_, sizeof(void*)*1);
if (v_done_53_ == 0)
{
lean_object* v_e_x27_54_; lean_object* v___x_55_; 
lean_dec_ref_known(v___x_48_, 1);
v_e_x27_54_ = lean_ctor_get(v_a_49_, 0);
lean_inc_ref(v_e_x27_54_);
lean_dec_ref_known(v_a_49_, 1);
lean_inc(v___y_46_);
lean_inc_ref(v___y_45_);
lean_inc(v___y_44_);
lean_inc_ref(v___y_43_);
lean_inc(v___y_42_);
lean_inc_ref(v___y_41_);
lean_inc(v___y_40_);
lean_inc(v___y_39_);
lean_inc(v___y_38_);
v___x_55_ = lean_apply_12(v_g_36_, v___x_50_, v_e_x27_54_, v___y_38_, v___y_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_, v___y_46_, lean_box(0));
return v___x_55_;
}
else
{
lean_dec_ref_known(v_a_49_, 1);
lean_dec_ref(v_g_36_);
return v___x_48_;
}
}
}
else
{
lean_dec_ref(v___y_37_);
lean_dec_ref(v_g_36_);
return v___x_48_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instAndThenDSimproc___lam__0___boxed(lean_object* v_f_56_, lean_object* v_g_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lean_Meta_Sym_DSimp_instAndThenDSimproc___lam__0(v_f_56_, v_g_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_);
lean_dec(v___y_67_);
lean_dec_ref(v___y_66_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
lean_dec(v___y_61_);
lean_dec(v___y_60_);
lean_dec(v___y_59_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimproc_orElse(lean_object* v_f_72_, lean_object* v_g_73_, lean_object* v_e_u2081_74_, lean_object* v_a_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_){
_start:
{
lean_object* v___x_85_; 
lean_inc(v_a_83_);
lean_inc_ref(v_a_82_);
lean_inc(v_a_81_);
lean_inc_ref(v_a_80_);
lean_inc(v_a_79_);
lean_inc_ref(v_a_78_);
lean_inc(v_a_77_);
lean_inc(v_a_76_);
lean_inc(v_a_75_);
lean_inc_ref(v_e_u2081_74_);
v___x_85_ = lean_apply_11(v_f_72_, v_e_u2081_74_, v_a_75_, v_a_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, lean_box(0));
if (lean_obj_tag(v___x_85_) == 0)
{
lean_object* v_a_86_; 
v_a_86_ = lean_ctor_get(v___x_85_, 0);
lean_inc(v_a_86_);
if (lean_obj_tag(v_a_86_) == 0)
{
uint8_t v_done_87_; 
v_done_87_ = lean_ctor_get_uint8(v_a_86_, 0);
lean_dec_ref_known(v_a_86_, 0);
if (v_done_87_ == 0)
{
lean_object* v___x_88_; 
lean_dec_ref_known(v___x_85_, 1);
lean_inc(v_a_83_);
lean_inc_ref(v_a_82_);
lean_inc(v_a_81_);
lean_inc_ref(v_a_80_);
lean_inc(v_a_79_);
lean_inc_ref(v_a_78_);
lean_inc(v_a_77_);
lean_inc(v_a_76_);
lean_inc(v_a_75_);
v___x_88_ = lean_apply_11(v_g_73_, v_e_u2081_74_, v_a_75_, v_a_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, lean_box(0));
return v___x_88_;
}
else
{
lean_dec_ref(v_e_u2081_74_);
lean_dec_ref(v_g_73_);
return v___x_85_;
}
}
else
{
lean_dec_ref_known(v_a_86_, 1);
lean_dec_ref(v_e_u2081_74_);
lean_dec_ref(v_g_73_);
return v___x_85_;
}
}
else
{
lean_dec_ref(v_e_u2081_74_);
lean_dec_ref(v_g_73_);
return v___x_85_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimproc_orElse___boxed(lean_object* v_f_89_, lean_object* v_g_90_, lean_object* v_e_u2081_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_Meta_Sym_DSimp_DSimproc_orElse(v_f_89_, v_g_90_, v_e_u2081_91_, v_a_92_, v_a_93_, v_a_94_, v_a_95_, v_a_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_);
lean_dec(v_a_100_);
lean_dec_ref(v_a_99_);
lean_dec(v_a_98_);
lean_dec_ref(v_a_97_);
lean_dec(v_a_96_);
lean_dec_ref(v_a_95_);
lean_dec(v_a_94_);
lean_dec(v_a_93_);
lean_dec(v_a_92_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instOrElseDSimproc___lam__0(lean_object* v_f_103_, lean_object* v_g_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_){
_start:
{
lean_object* v___x_116_; 
lean_inc(v___y_114_);
lean_inc_ref(v___y_113_);
lean_inc(v___y_112_);
lean_inc_ref(v___y_111_);
lean_inc(v___y_110_);
lean_inc_ref(v___y_109_);
lean_inc(v___y_108_);
lean_inc(v___y_107_);
lean_inc(v___y_106_);
lean_inc_ref(v___y_105_);
v___x_116_ = lean_apply_11(v_f_103_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, lean_box(0));
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v_a_117_; 
v_a_117_ = lean_ctor_get(v___x_116_, 0);
lean_inc(v_a_117_);
if (lean_obj_tag(v_a_117_) == 0)
{
uint8_t v_done_118_; 
v_done_118_ = lean_ctor_get_uint8(v_a_117_, 0);
lean_dec_ref_known(v_a_117_, 0);
if (v_done_118_ == 0)
{
lean_object* v___x_119_; lean_object* v___x_120_; 
lean_dec_ref_known(v___x_116_, 1);
v___x_119_ = lean_box(0);
lean_inc(v___y_114_);
lean_inc_ref(v___y_113_);
lean_inc(v___y_112_);
lean_inc_ref(v___y_111_);
lean_inc(v___y_110_);
lean_inc_ref(v___y_109_);
lean_inc(v___y_108_);
lean_inc(v___y_107_);
lean_inc(v___y_106_);
v___x_120_ = lean_apply_12(v_g_104_, v___x_119_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, lean_box(0));
return v___x_120_;
}
else
{
lean_dec_ref(v___y_105_);
lean_dec_ref(v_g_104_);
return v___x_116_;
}
}
else
{
lean_dec_ref_known(v_a_117_, 1);
lean_dec_ref(v___y_105_);
lean_dec_ref(v_g_104_);
return v___x_116_;
}
}
else
{
lean_dec_ref(v___y_105_);
lean_dec_ref(v_g_104_);
return v___x_116_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_instOrElseDSimproc___lam__0___boxed(lean_object* v_f_121_, lean_object* v_g_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_Lean_Meta_Sym_DSimp_instOrElseDSimproc___lam__0(v_f_121_, v_g_122_, v___y_123_, v___y_124_, v___y_125_, v___y_126_, v___y_127_, v___y_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_);
lean_dec(v___y_132_);
lean_dec_ref(v___y_131_);
lean_dec(v___y_130_);
lean_dec_ref(v___y_129_);
lean_dec(v___y_128_);
lean_dec_ref(v___y_127_);
lean_dec(v___y_126_);
lean_dec(v___y_125_);
lean_dec(v___y_124_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimproc_tryCatch(lean_object* v_f_137_, lean_object* v_e_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v___x_149_; 
lean_inc(v_a_147_);
lean_inc_ref(v_a_146_);
lean_inc(v_a_145_);
lean_inc_ref(v_a_144_);
lean_inc(v_a_143_);
lean_inc_ref(v_a_142_);
lean_inc(v_a_141_);
lean_inc(v_a_140_);
lean_inc(v_a_139_);
v___x_149_ = lean_apply_11(v_f_137_, v_e_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, lean_box(0));
if (lean_obj_tag(v___x_149_) == 0)
{
return v___x_149_;
}
else
{
lean_object* v_a_150_; uint8_t v___y_152_; uint8_t v___x_162_; 
v_a_150_ = lean_ctor_get(v___x_149_, 0);
lean_inc(v_a_150_);
v___x_162_ = l_Lean_Exception_isInterrupt(v_a_150_);
if (v___x_162_ == 0)
{
uint8_t v___x_163_; 
v___x_163_ = l_Lean_Exception_isRuntime(v_a_150_);
v___y_152_ = v___x_163_;
goto v___jp_151_;
}
else
{
lean_dec(v_a_150_);
v___y_152_ = v___x_162_;
goto v___jp_151_;
}
v___jp_151_:
{
if (v___y_152_ == 0)
{
lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_160_; 
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_149_);
if (v_isSharedCheck_160_ == 0)
{
lean_object* v_unused_161_; 
v_unused_161_ = lean_ctor_get(v___x_149_, 0);
lean_dec(v_unused_161_);
v___x_154_ = v___x_149_;
v_isShared_155_ = v_isSharedCheck_160_;
goto v_resetjp_153_;
}
else
{
lean_dec(v___x_149_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_160_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_156_; lean_object* v___x_158_; 
v___x_156_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_156_, 0, v___y_152_);
if (v_isShared_155_ == 0)
{
lean_ctor_set_tag(v___x_154_, 0);
lean_ctor_set(v___x_154_, 0, v___x_156_);
v___x_158_ = v___x_154_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_156_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
else
{
return v___x_149_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_DSimp_DSimproc_tryCatch___boxed(lean_object* v_f_164_, lean_object* v_e_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Lean_Meta_Sym_DSimp_DSimproc_tryCatch(v_f_164_, v_e_165_, v_a_166_, v_a_167_, v_a_168_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
lean_dec(v_a_174_);
lean_dec_ref(v_a_173_);
lean_dec(v_a_172_);
lean_dec_ref(v_a_171_);
lean_dec(v_a_170_);
lean_dec_ref(v_a_169_);
lean_dec(v_a_168_);
lean_dec(v_a_167_);
lean_dec(v_a_166_);
return v_res_176_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_Result(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_DSimproc(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_DSimp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_DSimp_DSimproc(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_DSimp_Result(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_DSimp_DSimproc(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_DSimp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_DSimproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_DSimp_DSimproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_DSimp_DSimproc(builtin);
}
#ifdef __cplusplus
}
#endif
