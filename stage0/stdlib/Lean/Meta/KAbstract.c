// Lean compiler output
// Module: Lean.Meta.KAbstract
// Imports: public import Lean.HeadIndex public import Lean.Meta.Basic
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
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Expr_toHeadIndex(lean_object*);
lean_object* l_Lean_Expr_headNumArgs(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
uint8_t l_Lean_instBEqHeadIndex_beq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Occurrences_contains(lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint8_t l_Lean_Meta_instBEqOccurrences_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_KAbstract_0__Lean_Meta_kabstract_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_KAbstract_0__Lean_Meta_kabstract_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_kabstract_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_kabstract_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_kabstract_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_kabstract_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_kabstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_kabstract___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_KAbstract_0__Lean_Meta_kabstract_visit(lean_object* v_p_1_, lean_object* v_occs_2_, lean_object* v_pHeadIdx_3_, lean_object* v_pNumArgs_4_, lean_object* v_e_5_, lean_object* v_offset_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_){
_start:
{
lean_object* v___y_14_; lean_object* v___y_15_; uint8_t v___y_16_; lean_object* v___y_21_; lean_object* v___y_22_; uint8_t v___y_23_; lean_object* v___y_24_; lean_object* v___y_25_; lean_object* v___y_26_; uint8_t v___y_27_; lean_object* v___y_37_; lean_object* v___y_38_; lean_object* v___y_39_; uint8_t v___y_40_; uint8_t v___y_41_; lean_object* v___y_49_; lean_object* v___y_50_; uint8_t v___y_51_; lean_object* v___y_52_; uint8_t v___y_53_; lean_object* v___y_61_; lean_object* v___y_62_; lean_object* v___y_63_; lean_object* v___y_64_; lean_object* v___y_65_; uint8_t v___x_167_; 
v___x_167_ = l_Lean_Expr_hasLooseBVars(v_e_5_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; uint8_t v___x_169_; 
lean_inc_ref(v_e_5_);
v___x_168_ = l_Lean_Expr_toHeadIndex(v_e_5_);
v___x_169_ = l_Lean_instBEqHeadIndex_beq(v___x_168_, v_pHeadIdx_3_);
lean_dec(v___x_168_);
if (v___x_169_ == 0)
{
v___y_61_ = v_a_7_;
v___y_62_ = v_a_8_;
v___y_63_ = v_a_9_;
v___y_64_ = v_a_10_;
v___y_65_ = v_a_11_;
goto v___jp_60_;
}
else
{
if (v___x_167_ == 0)
{
lean_object* v___x_170_; uint8_t v___x_171_; 
v___x_170_ = l_Lean_Expr_headNumArgs(v_e_5_);
v___x_171_ = lean_nat_dec_eq(v___x_170_, v_pNumArgs_4_);
lean_dec(v___x_170_);
if (v___x_171_ == 0)
{
v___y_61_ = v_a_7_;
v___y_62_ = v_a_8_;
v___y_63_ = v_a_9_;
v___y_64_ = v_a_10_;
v___y_65_ = v_a_11_;
goto v___jp_60_;
}
else
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_172_ = lean_st_ref_get(v_a_11_);
lean_dec(v___x_172_);
v___x_173_ = lean_st_ref_get(v_a_9_);
lean_inc_ref(v_p_1_);
lean_inc_ref(v_e_5_);
v___x_174_ = l_Lean_Meta_isExprDefEq(v_e_5_, v_p_1_, v_a_8_, v_a_9_, v_a_10_, v_a_11_);
if (lean_obj_tag(v___x_174_) == 0)
{
lean_object* v_a_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_207_; 
v_a_175_ = lean_ctor_get(v___x_174_, 0);
v_isSharedCheck_207_ = !lean_is_exclusive(v___x_174_);
if (v_isSharedCheck_207_ == 0)
{
v___x_177_ = v___x_174_;
v_isShared_178_ = v_isSharedCheck_207_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_a_175_);
lean_dec(v___x_174_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_207_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
uint8_t v___x_179_; 
v___x_179_ = lean_unbox(v_a_175_);
lean_dec(v_a_175_);
if (v___x_179_ == 0)
{
lean_del_object(v___x_177_);
lean_dec(v___x_173_);
v___y_61_ = v_a_7_;
v___y_62_ = v_a_8_;
v___y_63_ = v_a_9_;
v___y_64_ = v_a_10_;
v___y_65_ = v_a_11_;
goto v___jp_60_;
}
else
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_180_ = lean_st_ref_get(v_a_11_);
lean_dec(v___x_180_);
v___x_181_ = lean_st_ref_get(v_a_7_);
v___x_182_ = lean_st_ref_get(v_a_11_);
lean_dec(v___x_182_);
v___x_183_ = lean_unsigned_to_nat(1u);
v___x_184_ = lean_nat_add(v___x_181_, v___x_183_);
v___x_185_ = lean_st_ref_set(v_a_7_, v___x_184_);
v___x_186_ = l_Lean_Meta_Occurrences_contains(v_occs_2_, v___x_181_);
lean_dec(v___x_181_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v_mctx_189_; lean_object* v_cache_190_; lean_object* v_zetaDeltaFVarIds_191_; lean_object* v_postponed_192_; lean_object* v_diag_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_201_; 
lean_del_object(v___x_177_);
v___x_187_ = lean_st_ref_get(v_a_11_);
lean_dec(v___x_187_);
v___x_188_ = lean_st_ref_take(v_a_9_);
v_mctx_189_ = lean_ctor_get(v___x_173_, 0);
lean_inc_ref(v_mctx_189_);
lean_dec(v___x_173_);
v_cache_190_ = lean_ctor_get(v___x_188_, 1);
v_zetaDeltaFVarIds_191_ = lean_ctor_get(v___x_188_, 2);
v_postponed_192_ = lean_ctor_get(v___x_188_, 3);
v_diag_193_ = lean_ctor_get(v___x_188_, 4);
v_isSharedCheck_201_ = !lean_is_exclusive(v___x_188_);
if (v_isSharedCheck_201_ == 0)
{
lean_object* v_unused_202_; 
v_unused_202_ = lean_ctor_get(v___x_188_, 0);
lean_dec(v_unused_202_);
v___x_195_ = v___x_188_;
v_isShared_196_ = v_isSharedCheck_201_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_diag_193_);
lean_inc(v_postponed_192_);
lean_inc(v_zetaDeltaFVarIds_191_);
lean_inc(v_cache_190_);
lean_dec(v___x_188_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_201_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___x_198_; 
if (v_isShared_196_ == 0)
{
lean_ctor_set(v___x_195_, 0, v_mctx_189_);
v___x_198_ = v___x_195_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_mctx_189_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v_cache_190_);
lean_ctor_set(v_reuseFailAlloc_200_, 2, v_zetaDeltaFVarIds_191_);
lean_ctor_set(v_reuseFailAlloc_200_, 3, v_postponed_192_);
lean_ctor_set(v_reuseFailAlloc_200_, 4, v_diag_193_);
v___x_198_ = v_reuseFailAlloc_200_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
lean_object* v___x_199_; 
v___x_199_ = lean_st_ref_set(v_a_9_, v___x_198_);
v___y_61_ = v_a_7_;
v___y_62_ = v_a_8_;
v___y_63_ = v_a_9_;
v___y_64_ = v_a_10_;
v___y_65_ = v_a_11_;
goto v___jp_60_;
}
}
}
else
{
lean_object* v___x_203_; lean_object* v___x_205_; 
lean_dec(v___x_173_);
lean_dec_ref(v_e_5_);
lean_dec_ref(v_p_1_);
v___x_203_ = l_Lean_mkBVar(v_offset_6_);
if (v_isShared_178_ == 0)
{
lean_ctor_set(v___x_177_, 0, v___x_203_);
v___x_205_ = v___x_177_;
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
}
}
else
{
lean_object* v_a_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_215_; 
lean_dec(v___x_173_);
lean_dec(v_offset_6_);
lean_dec_ref(v_e_5_);
lean_dec_ref(v_p_1_);
v_a_208_ = lean_ctor_get(v___x_174_, 0);
v_isSharedCheck_215_ = !lean_is_exclusive(v___x_174_);
if (v_isSharedCheck_215_ == 0)
{
v___x_210_ = v___x_174_;
v_isShared_211_ = v_isSharedCheck_215_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_a_208_);
lean_dec(v___x_174_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_215_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v___x_213_; 
if (v_isShared_211_ == 0)
{
v___x_213_ = v___x_210_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_a_208_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
}
}
else
{
v___y_61_ = v_a_7_;
v___y_62_ = v_a_8_;
v___y_63_ = v_a_9_;
v___y_64_ = v_a_10_;
v___y_65_ = v_a_11_;
goto v___jp_60_;
}
}
}
else
{
v___y_61_ = v_a_7_;
v___y_62_ = v_a_8_;
v___y_63_ = v_a_9_;
v___y_64_ = v_a_10_;
v___y_65_ = v_a_11_;
goto v___jp_60_;
}
v___jp_13_:
{
if (v___y_16_ == 0)
{
lean_object* v___x_17_; lean_object* v___x_18_; 
lean_dec_ref(v_e_5_);
v___x_17_ = l_Lean_Expr_app___override(v___y_15_, v___y_14_);
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
return v___x_18_;
}
else
{
lean_object* v___x_19_; 
lean_dec_ref(v___y_15_);
lean_dec_ref(v___y_14_);
v___x_19_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_19_, 0, v_e_5_);
return v___x_19_;
}
}
v___jp_20_:
{
if (v___y_27_ == 0)
{
lean_object* v___x_28_; lean_object* v___x_29_; 
lean_dec_ref(v___y_24_);
lean_dec_ref(v_e_5_);
v___x_28_ = l_Lean_Expr_letE___override(v___y_21_, v___y_22_, v___y_26_, v___y_25_, v___y_23_);
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
else
{
size_t v___x_30_; size_t v___x_31_; uint8_t v___x_32_; 
v___x_30_ = lean_ptr_addr(v___y_24_);
lean_dec_ref(v___y_24_);
v___x_31_ = lean_ptr_addr(v___y_25_);
v___x_32_ = lean_usize_dec_eq(v___x_30_, v___x_31_);
if (v___x_32_ == 0)
{
lean_object* v___x_33_; lean_object* v___x_34_; 
lean_dec_ref(v_e_5_);
v___x_33_ = l_Lean_Expr_letE___override(v___y_21_, v___y_22_, v___y_26_, v___y_25_, v___y_23_);
v___x_34_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_34_, 0, v___x_33_);
return v___x_34_;
}
else
{
lean_object* v___x_35_; 
lean_dec_ref(v___y_26_);
lean_dec_ref(v___y_25_);
lean_dec_ref(v___y_22_);
lean_dec(v___y_21_);
v___x_35_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_35_, 0, v_e_5_);
return v___x_35_;
}
}
}
v___jp_36_:
{
if (v___y_41_ == 0)
{
lean_object* v___x_42_; lean_object* v___x_43_; 
lean_dec_ref(v_e_5_);
v___x_42_ = l_Lean_Expr_lam___override(v___y_39_, v___y_37_, v___y_38_, v___y_40_);
v___x_43_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
return v___x_43_;
}
else
{
uint8_t v___x_44_; 
v___x_44_ = l_Lean_instBEqBinderInfo_beq(v___y_40_, v___y_40_);
if (v___x_44_ == 0)
{
lean_object* v___x_45_; lean_object* v___x_46_; 
lean_dec_ref(v_e_5_);
v___x_45_ = l_Lean_Expr_lam___override(v___y_39_, v___y_37_, v___y_38_, v___y_40_);
v___x_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
return v___x_46_;
}
else
{
lean_object* v___x_47_; 
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
lean_dec_ref(v___y_37_);
v___x_47_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_47_, 0, v_e_5_);
return v___x_47_;
}
}
}
v___jp_48_:
{
if (v___y_53_ == 0)
{
lean_object* v___x_54_; lean_object* v___x_55_; 
lean_dec_ref(v_e_5_);
v___x_54_ = l_Lean_Expr_forallE___override(v___y_49_, v___y_50_, v___y_52_, v___y_51_);
v___x_55_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
return v___x_55_;
}
else
{
uint8_t v___x_56_; 
v___x_56_ = l_Lean_instBEqBinderInfo_beq(v___y_51_, v___y_51_);
if (v___x_56_ == 0)
{
lean_object* v___x_57_; lean_object* v___x_58_; 
lean_dec_ref(v_e_5_);
v___x_57_ = l_Lean_Expr_forallE___override(v___y_49_, v___y_50_, v___y_52_, v___y_51_);
v___x_58_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
return v___x_58_;
}
else
{
lean_object* v___x_59_; 
lean_dec_ref(v___y_52_);
lean_dec_ref(v___y_50_);
lean_dec(v___y_49_);
v___x_59_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_59_, 0, v_e_5_);
return v___x_59_;
}
}
}
v___jp_60_:
{
switch(lean_obj_tag(v_e_5_))
{
case 5:
{
lean_object* v_fn_66_; lean_object* v_arg_67_; lean_object* v___x_68_; 
v_fn_66_ = lean_ctor_get(v_e_5_, 0);
v_arg_67_ = lean_ctor_get(v_e_5_, 1);
lean_inc(v_offset_6_);
lean_inc_ref(v_fn_66_);
lean_inc_ref(v_p_1_);
v___x_68_ = l___private_Lean_Meta_KAbstract_0__Lean_Meta_kabstract_visit(v_p_1_, v_occs_2_, v_pHeadIdx_3_, v_pNumArgs_4_, v_fn_66_, v_offset_6_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
if (lean_obj_tag(v___x_68_) == 0)
{
lean_object* v_a_69_; lean_object* v___x_70_; 
v_a_69_ = lean_ctor_get(v___x_68_, 0);
lean_inc(v_a_69_);
lean_dec_ref(v___x_68_);
lean_inc_ref(v_arg_67_);
v___x_70_ = l___private_Lean_Meta_KAbstract_0__Lean_Meta_kabstract_visit(v_p_1_, v_occs_2_, v_pHeadIdx_3_, v_pNumArgs_4_, v_arg_67_, v_offset_6_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
if (lean_obj_tag(v___x_70_) == 0)
{
lean_object* v_a_71_; size_t v___x_72_; size_t v___x_73_; uint8_t v___x_74_; 
v_a_71_ = lean_ctor_get(v___x_70_, 0);
lean_inc(v_a_71_);
lean_dec_ref(v___x_70_);
v___x_72_ = lean_ptr_addr(v_fn_66_);
v___x_73_ = lean_ptr_addr(v_a_69_);
v___x_74_ = lean_usize_dec_eq(v___x_72_, v___x_73_);
if (v___x_74_ == 0)
{
v___y_14_ = v_a_71_;
v___y_15_ = v_a_69_;
v___y_16_ = v___x_74_;
goto v___jp_13_;
}
else
{
size_t v___x_75_; size_t v___x_76_; uint8_t v___x_77_; 
v___x_75_ = lean_ptr_addr(v_arg_67_);
v___x_76_ = lean_ptr_addr(v_a_71_);
v___x_77_ = lean_usize_dec_eq(v___x_75_, v___x_76_);
v___y_14_ = v_a_71_;
v___y_15_ = v_a_69_;
v___y_16_ = v___x_77_;
goto v___jp_13_;
}
}
else
{
lean_dec(v_a_69_);
lean_dec_ref(v_e_5_);
return v___x_70_;
}
}
else
{
lean_dec_ref(v_e_5_);
lean_dec(v_offset_6_);
lean_dec_ref(v_p_1_);
return v___x_68_;
}
}
case 10:
{
lean_object* v_data_78_; lean_object* v_expr_79_; lean_object* v___x_80_; 
v_data_78_ = lean_ctor_get(v_e_5_, 0);
v_expr_79_ = lean_ctor_get(v_e_5_, 1);
lean_inc_ref(v_expr_79_);
v___x_80_ = l___private_Lean_Meta_KAbstract_0__Lean_Meta_kabstract_visit(v_p_1_, v_occs_2_, v_pHeadIdx_3_, v_pNumArgs_4_, v_expr_79_, v_offset_6_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
if (lean_obj_tag(v___x_80_) == 0)
{
lean_object* v_a_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_95_; 
v_a_81_ = lean_ctor_get(v___x_80_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_80_);
if (v_isSharedCheck_95_ == 0)
{
v___x_83_ = v___x_80_;
v_isShared_84_ = v_isSharedCheck_95_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_a_81_);
lean_dec(v___x_80_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_95_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
size_t v___x_85_; size_t v___x_86_; uint8_t v___x_87_; 
v___x_85_ = lean_ptr_addr(v_expr_79_);
v___x_86_ = lean_ptr_addr(v_a_81_);
v___x_87_ = lean_usize_dec_eq(v___x_85_, v___x_86_);
if (v___x_87_ == 0)
{
lean_object* v___x_88_; lean_object* v___x_90_; 
lean_inc(v_data_78_);
lean_dec_ref(v_e_5_);
v___x_88_ = l_Lean_Expr_mdata___override(v_data_78_, v_a_81_);
if (v_isShared_84_ == 0)
{
lean_ctor_set(v___x_83_, 0, v___x_88_);
v___x_90_ = v___x_83_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v___x_88_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
else
{
lean_object* v___x_93_; 
lean_dec(v_a_81_);
if (v_isShared_84_ == 0)
{
lean_ctor_set(v___x_83_, 0, v_e_5_);
v___x_93_ = v___x_83_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v_e_5_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
}
else
{
lean_dec_ref(v_e_5_);
return v___x_80_;
}
}
case 11:
{
lean_object* v_typeName_96_; lean_object* v_idx_97_; lean_object* v_struct_98_; lean_object* v___x_99_; 
v_typeName_96_ = lean_ctor_get(v_e_5_, 0);
v_idx_97_ = lean_ctor_get(v_e_5_, 1);
v_struct_98_ = lean_ctor_get(v_e_5_, 2);
lean_inc_ref(v_struct_98_);
v___x_99_ = l___private_Lean_Meta_KAbstract_0__Lean_Meta_kabstract_visit(v_p_1_, v_occs_2_, v_pHeadIdx_3_, v_pNumArgs_4_, v_struct_98_, v_offset_6_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
if (lean_obj_tag(v___x_99_) == 0)
{
lean_object* v_a_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_114_; 
v_a_100_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_114_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_114_ == 0)
{
v___x_102_ = v___x_99_;
v_isShared_103_ = v_isSharedCheck_114_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_a_100_);
lean_dec(v___x_99_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_114_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
size_t v___x_104_; size_t v___x_105_; uint8_t v___x_106_; 
v___x_104_ = lean_ptr_addr(v_struct_98_);
v___x_105_ = lean_ptr_addr(v_a_100_);
v___x_106_ = lean_usize_dec_eq(v___x_104_, v___x_105_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; lean_object* v___x_109_; 
lean_inc(v_idx_97_);
lean_inc(v_typeName_96_);
lean_dec_ref(v_e_5_);
v___x_107_ = l_Lean_Expr_proj___override(v_typeName_96_, v_idx_97_, v_a_100_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 0, v___x_107_);
v___x_109_ = v___x_102_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v___x_107_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
else
{
lean_object* v___x_112_; 
lean_dec(v_a_100_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 0, v_e_5_);
v___x_112_ = v___x_102_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_e_5_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
}
}
}
}
else
{
lean_dec_ref(v_e_5_);
return v___x_99_;
}
}
case 8:
{
lean_object* v_declName_115_; lean_object* v_type_116_; lean_object* v_value_117_; lean_object* v_body_118_; uint8_t v_nondep_119_; lean_object* v___x_120_; 
v_declName_115_ = lean_ctor_get(v_e_5_, 0);
v_type_116_ = lean_ctor_get(v_e_5_, 1);
v_value_117_ = lean_ctor_get(v_e_5_, 2);
v_body_118_ = lean_ctor_get(v_e_5_, 3);
v_nondep_119_ = lean_ctor_get_uint8(v_e_5_, sizeof(void*)*4 + 8);
lean_inc(v_offset_6_);
lean_inc_ref(v_type_116_);
lean_inc_ref(v_p_1_);
v___x_120_ = l___private_Lean_Meta_KAbstract_0__Lean_Meta_kabstract_visit(v_p_1_, v_occs_2_, v_pHeadIdx_3_, v_pNumArgs_4_, v_type_116_, v_offset_6_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
if (lean_obj_tag(v___x_120_) == 0)
{
lean_object* v_a_121_; lean_object* v___x_122_; 
v_a_121_ = lean_ctor_get(v___x_120_, 0);
lean_inc(v_a_121_);
lean_dec_ref(v___x_120_);
lean_inc(v_offset_6_);
lean_inc_ref(v_value_117_);
lean_inc_ref(v_p_1_);
v___x_122_ = l___private_Lean_Meta_KAbstract_0__Lean_Meta_kabstract_visit(v_p_1_, v_occs_2_, v_pHeadIdx_3_, v_pNumArgs_4_, v_value_117_, v_offset_6_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
if (lean_obj_tag(v___x_122_) == 0)
{
lean_object* v_a_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v_a_123_ = lean_ctor_get(v___x_122_, 0);
lean_inc(v_a_123_);
lean_dec_ref(v___x_122_);
v___x_124_ = lean_unsigned_to_nat(1u);
v___x_125_ = lean_nat_add(v_offset_6_, v___x_124_);
lean_dec(v_offset_6_);
lean_inc_ref(v_body_118_);
v___x_126_ = l___private_Lean_Meta_KAbstract_0__Lean_Meta_kabstract_visit(v_p_1_, v_occs_2_, v_pHeadIdx_3_, v_pNumArgs_4_, v_body_118_, v___x_125_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
if (lean_obj_tag(v___x_126_) == 0)
{
lean_object* v_a_127_; size_t v___x_128_; size_t v___x_129_; uint8_t v___x_130_; 
v_a_127_ = lean_ctor_get(v___x_126_, 0);
lean_inc(v_a_127_);
lean_dec_ref(v___x_126_);
v___x_128_ = lean_ptr_addr(v_type_116_);
v___x_129_ = lean_ptr_addr(v_a_121_);
v___x_130_ = lean_usize_dec_eq(v___x_128_, v___x_129_);
if (v___x_130_ == 0)
{
lean_inc_ref(v_body_118_);
lean_inc(v_declName_115_);
v___y_21_ = v_declName_115_;
v___y_22_ = v_a_121_;
v___y_23_ = v_nondep_119_;
v___y_24_ = v_body_118_;
v___y_25_ = v_a_127_;
v___y_26_ = v_a_123_;
v___y_27_ = v___x_130_;
goto v___jp_20_;
}
else
{
size_t v___x_131_; size_t v___x_132_; uint8_t v___x_133_; 
v___x_131_ = lean_ptr_addr(v_value_117_);
v___x_132_ = lean_ptr_addr(v_a_123_);
v___x_133_ = lean_usize_dec_eq(v___x_131_, v___x_132_);
lean_inc_ref(v_body_118_);
lean_inc(v_declName_115_);
v___y_21_ = v_declName_115_;
v___y_22_ = v_a_121_;
v___y_23_ = v_nondep_119_;
v___y_24_ = v_body_118_;
v___y_25_ = v_a_127_;
v___y_26_ = v_a_123_;
v___y_27_ = v___x_133_;
goto v___jp_20_;
}
}
else
{
lean_dec(v_a_123_);
lean_dec(v_a_121_);
lean_dec_ref(v_e_5_);
return v___x_126_;
}
}
else
{
lean_dec(v_a_121_);
lean_dec_ref(v_e_5_);
lean_dec(v_offset_6_);
lean_dec_ref(v_p_1_);
return v___x_122_;
}
}
else
{
lean_dec_ref(v_e_5_);
lean_dec(v_offset_6_);
lean_dec_ref(v_p_1_);
return v___x_120_;
}
}
case 6:
{
lean_object* v_binderName_134_; lean_object* v_binderType_135_; lean_object* v_body_136_; uint8_t v_binderInfo_137_; lean_object* v___x_138_; 
v_binderName_134_ = lean_ctor_get(v_e_5_, 0);
v_binderType_135_ = lean_ctor_get(v_e_5_, 1);
v_body_136_ = lean_ctor_get(v_e_5_, 2);
v_binderInfo_137_ = lean_ctor_get_uint8(v_e_5_, sizeof(void*)*3 + 8);
lean_inc(v_offset_6_);
lean_inc_ref(v_binderType_135_);
lean_inc_ref(v_p_1_);
v___x_138_ = l___private_Lean_Meta_KAbstract_0__Lean_Meta_kabstract_visit(v_p_1_, v_occs_2_, v_pHeadIdx_3_, v_pNumArgs_4_, v_binderType_135_, v_offset_6_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
if (lean_obj_tag(v___x_138_) == 0)
{
lean_object* v_a_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v_a_139_ = lean_ctor_get(v___x_138_, 0);
lean_inc(v_a_139_);
lean_dec_ref(v___x_138_);
v___x_140_ = lean_unsigned_to_nat(1u);
v___x_141_ = lean_nat_add(v_offset_6_, v___x_140_);
lean_dec(v_offset_6_);
lean_inc_ref(v_body_136_);
v___x_142_ = l___private_Lean_Meta_KAbstract_0__Lean_Meta_kabstract_visit(v_p_1_, v_occs_2_, v_pHeadIdx_3_, v_pNumArgs_4_, v_body_136_, v___x_141_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
if (lean_obj_tag(v___x_142_) == 0)
{
lean_object* v_a_143_; size_t v___x_144_; size_t v___x_145_; uint8_t v___x_146_; 
v_a_143_ = lean_ctor_get(v___x_142_, 0);
lean_inc(v_a_143_);
lean_dec_ref(v___x_142_);
v___x_144_ = lean_ptr_addr(v_binderType_135_);
v___x_145_ = lean_ptr_addr(v_a_139_);
v___x_146_ = lean_usize_dec_eq(v___x_144_, v___x_145_);
if (v___x_146_ == 0)
{
lean_inc(v_binderName_134_);
v___y_37_ = v_a_139_;
v___y_38_ = v_a_143_;
v___y_39_ = v_binderName_134_;
v___y_40_ = v_binderInfo_137_;
v___y_41_ = v___x_146_;
goto v___jp_36_;
}
else
{
size_t v___x_147_; size_t v___x_148_; uint8_t v___x_149_; 
v___x_147_ = lean_ptr_addr(v_body_136_);
v___x_148_ = lean_ptr_addr(v_a_143_);
v___x_149_ = lean_usize_dec_eq(v___x_147_, v___x_148_);
lean_inc(v_binderName_134_);
v___y_37_ = v_a_139_;
v___y_38_ = v_a_143_;
v___y_39_ = v_binderName_134_;
v___y_40_ = v_binderInfo_137_;
v___y_41_ = v___x_149_;
goto v___jp_36_;
}
}
else
{
lean_dec(v_a_139_);
lean_dec_ref(v_e_5_);
return v___x_142_;
}
}
else
{
lean_dec_ref(v_e_5_);
lean_dec(v_offset_6_);
lean_dec_ref(v_p_1_);
return v___x_138_;
}
}
case 7:
{
lean_object* v_binderName_150_; lean_object* v_binderType_151_; lean_object* v_body_152_; uint8_t v_binderInfo_153_; lean_object* v___x_154_; 
v_binderName_150_ = lean_ctor_get(v_e_5_, 0);
v_binderType_151_ = lean_ctor_get(v_e_5_, 1);
v_body_152_ = lean_ctor_get(v_e_5_, 2);
v_binderInfo_153_ = lean_ctor_get_uint8(v_e_5_, sizeof(void*)*3 + 8);
lean_inc(v_offset_6_);
lean_inc_ref(v_binderType_151_);
lean_inc_ref(v_p_1_);
v___x_154_ = l___private_Lean_Meta_KAbstract_0__Lean_Meta_kabstract_visit(v_p_1_, v_occs_2_, v_pHeadIdx_3_, v_pNumArgs_4_, v_binderType_151_, v_offset_6_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
if (lean_obj_tag(v___x_154_) == 0)
{
lean_object* v_a_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v_a_155_ = lean_ctor_get(v___x_154_, 0);
lean_inc(v_a_155_);
lean_dec_ref(v___x_154_);
v___x_156_ = lean_unsigned_to_nat(1u);
v___x_157_ = lean_nat_add(v_offset_6_, v___x_156_);
lean_dec(v_offset_6_);
lean_inc_ref(v_body_152_);
v___x_158_ = l___private_Lean_Meta_KAbstract_0__Lean_Meta_kabstract_visit(v_p_1_, v_occs_2_, v_pHeadIdx_3_, v_pNumArgs_4_, v_body_152_, v___x_157_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
if (lean_obj_tag(v___x_158_) == 0)
{
lean_object* v_a_159_; size_t v___x_160_; size_t v___x_161_; uint8_t v___x_162_; 
v_a_159_ = lean_ctor_get(v___x_158_, 0);
lean_inc(v_a_159_);
lean_dec_ref(v___x_158_);
v___x_160_ = lean_ptr_addr(v_binderType_151_);
v___x_161_ = lean_ptr_addr(v_a_155_);
v___x_162_ = lean_usize_dec_eq(v___x_160_, v___x_161_);
if (v___x_162_ == 0)
{
lean_inc(v_binderName_150_);
v___y_49_ = v_binderName_150_;
v___y_50_ = v_a_155_;
v___y_51_ = v_binderInfo_153_;
v___y_52_ = v_a_159_;
v___y_53_ = v___x_162_;
goto v___jp_48_;
}
else
{
size_t v___x_163_; size_t v___x_164_; uint8_t v___x_165_; 
v___x_163_ = lean_ptr_addr(v_body_152_);
v___x_164_ = lean_ptr_addr(v_a_159_);
v___x_165_ = lean_usize_dec_eq(v___x_163_, v___x_164_);
lean_inc(v_binderName_150_);
v___y_49_ = v_binderName_150_;
v___y_50_ = v_a_155_;
v___y_51_ = v_binderInfo_153_;
v___y_52_ = v_a_159_;
v___y_53_ = v___x_165_;
goto v___jp_48_;
}
}
else
{
lean_dec(v_a_155_);
lean_dec_ref(v_e_5_);
return v___x_158_;
}
}
else
{
lean_dec_ref(v_e_5_);
lean_dec(v_offset_6_);
lean_dec_ref(v_p_1_);
return v___x_154_;
}
}
default: 
{
lean_object* v___x_166_; 
lean_dec(v_offset_6_);
lean_dec_ref(v_p_1_);
v___x_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_166_, 0, v_e_5_);
return v___x_166_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_KAbstract_0__Lean_Meta_kabstract_visit___boxed(lean_object* v_p_216_, lean_object* v_occs_217_, lean_object* v_pHeadIdx_218_, lean_object* v_pNumArgs_219_, lean_object* v_e_220_, lean_object* v_offset_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l___private_Lean_Meta_KAbstract_0__Lean_Meta_kabstract_visit(v_p_216_, v_occs_217_, v_pHeadIdx_218_, v_pNumArgs_219_, v_e_220_, v_offset_221_, v_a_222_, v_a_223_, v_a_224_, v_a_225_, v_a_226_);
lean_dec(v_a_226_);
lean_dec_ref(v_a_225_);
lean_dec(v_a_224_);
lean_dec_ref(v_a_223_);
lean_dec(v_a_222_);
lean_dec(v_pNumArgs_219_);
lean_dec(v_pHeadIdx_218_);
lean_dec(v_occs_217_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_kabstract_spec__0___redArg(lean_object* v_e_229_, lean_object* v___y_230_, lean_object* v___y_231_){
_start:
{
uint8_t v___x_233_; 
v___x_233_ = l_Lean_Expr_hasMVar(v_e_229_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; 
v___x_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_234_, 0, v_e_229_);
return v___x_234_;
}
else
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v_mctx_237_; lean_object* v___x_238_; lean_object* v_fst_239_; lean_object* v_snd_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v_cache_243_; lean_object* v_zetaDeltaFVarIds_244_; lean_object* v_postponed_245_; lean_object* v_diag_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_255_; 
v___x_235_ = lean_st_ref_get(v___y_231_);
lean_dec(v___x_235_);
v___x_236_ = lean_st_ref_get(v___y_230_);
v_mctx_237_ = lean_ctor_get(v___x_236_, 0);
lean_inc_ref(v_mctx_237_);
lean_dec(v___x_236_);
v___x_238_ = l_Lean_instantiateMVarsCore(v_mctx_237_, v_e_229_);
v_fst_239_ = lean_ctor_get(v___x_238_, 0);
lean_inc(v_fst_239_);
v_snd_240_ = lean_ctor_get(v___x_238_, 1);
lean_inc(v_snd_240_);
lean_dec_ref(v___x_238_);
v___x_241_ = lean_st_ref_get(v___y_231_);
lean_dec(v___x_241_);
v___x_242_ = lean_st_ref_take(v___y_230_);
v_cache_243_ = lean_ctor_get(v___x_242_, 1);
v_zetaDeltaFVarIds_244_ = lean_ctor_get(v___x_242_, 2);
v_postponed_245_ = lean_ctor_get(v___x_242_, 3);
v_diag_246_ = lean_ctor_get(v___x_242_, 4);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_242_);
if (v_isSharedCheck_255_ == 0)
{
lean_object* v_unused_256_; 
v_unused_256_ = lean_ctor_get(v___x_242_, 0);
lean_dec(v_unused_256_);
v___x_248_ = v___x_242_;
v_isShared_249_ = v_isSharedCheck_255_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_diag_246_);
lean_inc(v_postponed_245_);
lean_inc(v_zetaDeltaFVarIds_244_);
lean_inc(v_cache_243_);
lean_dec(v___x_242_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_255_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_251_; 
if (v_isShared_249_ == 0)
{
lean_ctor_set(v___x_248_, 0, v_snd_240_);
v___x_251_ = v___x_248_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_snd_240_);
lean_ctor_set(v_reuseFailAlloc_254_, 1, v_cache_243_);
lean_ctor_set(v_reuseFailAlloc_254_, 2, v_zetaDeltaFVarIds_244_);
lean_ctor_set(v_reuseFailAlloc_254_, 3, v_postponed_245_);
lean_ctor_set(v_reuseFailAlloc_254_, 4, v_diag_246_);
v___x_251_ = v_reuseFailAlloc_254_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = lean_st_ref_set(v___y_230_, v___x_251_);
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v_fst_239_);
return v___x_253_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_kabstract_spec__0___redArg___boxed(lean_object* v_e_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_instantiateMVars___at___00Lean_Meta_kabstract_spec__0___redArg(v_e_257_, v___y_258_, v___y_259_);
lean_dec(v___y_259_);
lean_dec(v___y_258_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_kabstract_spec__0(lean_object* v_e_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = l_Lean_instantiateMVars___at___00Lean_Meta_kabstract_spec__0___redArg(v_e_262_, v___y_264_, v___y_266_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_kabstract_spec__0___boxed(lean_object* v_e_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_Lean_instantiateMVars___at___00Lean_Meta_kabstract_spec__0(v_e_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
lean_dec(v___y_271_);
lean_dec_ref(v___y_270_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_kabstract(lean_object* v_e_276_, lean_object* v_p_277_, lean_object* v_occs_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_){
_start:
{
lean_object* v___x_284_; lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_318_; 
v___x_284_ = l_Lean_instantiateMVars___at___00Lean_Meta_kabstract_spec__0___redArg(v_e_276_, v_a_280_, v_a_282_);
v_a_285_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_318_ == 0)
{
v___x_287_ = v___x_284_;
v_isShared_288_ = v_isSharedCheck_318_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_284_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_318_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
uint8_t v___y_290_; uint8_t v___x_315_; 
v___x_315_ = l_Lean_Expr_isFVar(v_p_277_);
if (v___x_315_ == 0)
{
v___y_290_ = v___x_315_;
goto v___jp_289_;
}
else
{
lean_object* v___x_316_; uint8_t v___x_317_; 
v___x_316_ = lean_box(0);
lean_inc(v_occs_278_);
v___x_317_ = l_Lean_Meta_instBEqOccurrences_beq(v_occs_278_, v___x_316_);
v___y_290_ = v___x_317_;
goto v___jp_289_;
}
v___jp_289_:
{
if (v___y_290_ == 0)
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
lean_del_object(v___x_287_);
v___x_291_ = lean_st_ref_get(v_a_282_);
lean_dec(v___x_291_);
v___x_292_ = lean_unsigned_to_nat(1u);
v___x_293_ = lean_st_mk_ref(v___x_292_);
lean_inc_ref(v_p_277_);
v___x_294_ = l_Lean_Expr_toHeadIndex(v_p_277_);
v___x_295_ = l_Lean_Expr_headNumArgs(v_p_277_);
v___x_296_ = lean_unsigned_to_nat(0u);
v___x_297_ = l___private_Lean_Meta_KAbstract_0__Lean_Meta_kabstract_visit(v_p_277_, v_occs_278_, v___x_294_, v___x_295_, v_a_285_, v___x_296_, v___x_293_, v_a_279_, v_a_280_, v_a_281_, v_a_282_);
lean_dec(v___x_295_);
lean_dec(v___x_294_);
lean_dec(v_occs_278_);
if (lean_obj_tag(v___x_297_) == 0)
{
lean_object* v_a_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_307_; 
v_a_298_ = lean_ctor_get(v___x_297_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_307_ == 0)
{
v___x_300_ = v___x_297_;
v_isShared_301_ = v_isSharedCheck_307_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_a_298_);
lean_dec(v___x_297_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_307_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_305_; 
v___x_302_ = lean_st_ref_get(v_a_282_);
lean_dec(v___x_302_);
v___x_303_ = lean_st_ref_get(v___x_293_);
lean_dec(v___x_293_);
lean_dec(v___x_303_);
if (v_isShared_301_ == 0)
{
v___x_305_ = v___x_300_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_298_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
else
{
lean_dec(v___x_293_);
return v___x_297_;
}
}
else
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_313_; 
lean_dec(v_occs_278_);
v___x_308_ = lean_unsigned_to_nat(1u);
v___x_309_ = lean_mk_empty_array_with_capacity(v___x_308_);
v___x_310_ = lean_array_push(v___x_309_, v_p_277_);
v___x_311_ = lean_expr_abstract(v_a_285_, v___x_310_);
lean_dec_ref(v___x_310_);
lean_dec(v_a_285_);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 0, v___x_311_);
v___x_313_ = v___x_287_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v___x_311_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_kabstract___boxed(lean_object* v_e_319_, lean_object* v_p_320_, lean_object* v_occs_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_Meta_kabstract(v_e_319_, v_p_320_, v_occs_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_);
lean_dec(v_a_325_);
lean_dec_ref(v_a_324_);
lean_dec(v_a_323_);
lean_dec_ref(v_a_322_);
return v_res_327_;
}
}
lean_object* runtime_initialize_Lean_HeadIndex(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_KAbstract(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_HeadIndex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_KAbstract(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_HeadIndex(uint8_t builtin);
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_KAbstract(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_HeadIndex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_KAbstract(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_KAbstract(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_KAbstract(builtin);
}
#ifdef __cplusplus
}
#endif
