// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Cutsat.ToIntInfo
// Imports: public import Lean.Meta.Tactic.Grind.Arith.Util import Lean.Meta.LitValues
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_mkIntSub(lean_object*, lean_object*);
lean_object* l_Lean_mkIntMod(lean_object*, lean_object*);
lean_object* l_Lean_mkIntAdd(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getIntValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Lean_mkIntLit(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntThms_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntThms_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntThms_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntThms;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_SymbolicBound_isNumeral(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicBound_isNumeral___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_co_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_co_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ci_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ci_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_io_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_io_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ii_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ii_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_isFinite(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_isFinite___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_lo_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_hi_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntInfo_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntInfo;
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntThms_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_box(0);
v___x_2_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2_, 0, v___x_1_);
lean_ctor_set(v___x_2_, 1, v___x_1_);
lean_ctor_set(v___x_2_, 2, v___x_1_);
lean_ctor_set(v___x_2_, 3, v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntThms_default(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntThms_default___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntThms_default___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntThms_default___closed__0);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntThms(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntThms_default;
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__0(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_mk_string_unchecked("_inhabitedExprDummy", 19, 19);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__1(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__0);
v___x_7_ = l_Lean_Name_mkStr1(v___x_6_);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__2(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_8_ = lean_box(0);
v___x_9_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__1);
v___x_10_ = l_Lean_Expr_const___override(v___x_9_, v___x_8_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__3(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = lean_box(0);
v___x_12_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__2, &l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__2);
v___x_13_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
lean_ctor_set(v___x_13_, 1, v___x_11_);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__3, &l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__3);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default;
return v___x_15_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_SymbolicBound_isNumeral(lean_object* v_b_16_){
_start:
{
lean_object* v_ival_x3f_17_; 
v_ival_x3f_17_ = lean_ctor_get(v_b_16_, 1);
if (lean_obj_tag(v_ival_x3f_17_) == 0)
{
uint8_t v___x_18_; 
v___x_18_ = 0;
return v___x_18_;
}
else
{
uint8_t v___x_19_; 
v___x_19_ = 1;
return v___x_19_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicBound_isNumeral___boxed(lean_object* v_b_20_){
_start:
{
uint8_t v_res_21_; lean_object* v_r_22_; 
v_res_21_ = l_Lean_Meta_Grind_Arith_Cutsat_SymbolicBound_isNumeral(v_b_20_);
lean_dec_ref(v_b_20_);
v_r_22_ = lean_box(v_res_21_);
return v_r_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorIdx(lean_object* v_x_23_){
_start:
{
switch(lean_obj_tag(v_x_23_))
{
case 0:
{
lean_object* v___x_24_; 
v___x_24_ = lean_unsigned_to_nat(0u);
return v___x_24_;
}
case 1:
{
lean_object* v___x_25_; 
v___x_25_ = lean_unsigned_to_nat(1u);
return v___x_25_;
}
case 2:
{
lean_object* v___x_26_; 
v___x_26_ = lean_unsigned_to_nat(2u);
return v___x_26_;
}
default: 
{
lean_object* v___x_27_; 
v___x_27_ = lean_unsigned_to_nat(3u);
return v___x_27_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorIdx___boxed(lean_object* v_x_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorIdx(v_x_28_);
lean_dec(v_x_28_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorElim___redArg(lean_object* v_t_30_, lean_object* v_k_31_){
_start:
{
switch(lean_obj_tag(v_t_30_))
{
case 0:
{
lean_object* v_lo_32_; lean_object* v_hi_33_; lean_object* v___x_34_; 
v_lo_32_ = lean_ctor_get(v_t_30_, 0);
lean_inc_ref(v_lo_32_);
v_hi_33_ = lean_ctor_get(v_t_30_, 1);
lean_inc_ref(v_hi_33_);
lean_dec_ref(v_t_30_);
v___x_34_ = lean_apply_2(v_k_31_, v_lo_32_, v_hi_33_);
return v___x_34_;
}
case 3:
{
return v_k_31_;
}
default: 
{
lean_object* v_lo_35_; lean_object* v___x_36_; 
v_lo_35_ = lean_ctor_get(v_t_30_, 0);
lean_inc_ref(v_lo_35_);
lean_dec(v_t_30_);
v___x_36_ = lean_apply_1(v_k_31_, v_lo_35_);
return v___x_36_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorElim(lean_object* v_motive_37_, lean_object* v_ctorIdx_38_, lean_object* v_t_39_, lean_object* v_h_40_, lean_object* v_k_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorElim___redArg(v_t_39_, v_k_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorElim___boxed(lean_object* v_motive_43_, lean_object* v_ctorIdx_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_k_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorElim(v_motive_43_, v_ctorIdx_44_, v_t_45_, v_h_46_, v_k_47_);
lean_dec(v_ctorIdx_44_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_co_elim___redArg(lean_object* v_t_49_, lean_object* v_co_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorElim___redArg(v_t_49_, v_co_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_co_elim(lean_object* v_motive_52_, lean_object* v_t_53_, lean_object* v_h_54_, lean_object* v_co_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorElim___redArg(v_t_53_, v_co_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ci_elim___redArg(lean_object* v_t_57_, lean_object* v_ci_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorElim___redArg(v_t_57_, v_ci_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ci_elim(lean_object* v_motive_60_, lean_object* v_t_61_, lean_object* v_h_62_, lean_object* v_ci_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorElim___redArg(v_t_61_, v_ci_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_io_elim___redArg(lean_object* v_t_65_, lean_object* v_io_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorElim___redArg(v_t_65_, v_io_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_io_elim(lean_object* v_motive_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_io_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorElim___redArg(v_t_69_, v_io_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ii_elim___redArg(lean_object* v_t_73_, lean_object* v_ii_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorElim___redArg(v_t_73_, v_ii_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ii_elim(lean_object* v_motive_76_, lean_object* v_t_77_, lean_object* v_h_78_, lean_object* v_ii_79_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_ctorElim___redArg(v_t_77_, v_ii_79_);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval_default___closed__0(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_81_ = l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default;
v___x_82_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
return v___x_82_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval_default(void){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval_default___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval_default___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval_default___closed__0);
return v___x_83_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval(void){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval_default;
return v___x_84_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_isFinite(lean_object* v_i_85_){
_start:
{
switch(lean_obj_tag(v_i_85_))
{
case 0:
{
uint8_t v___x_86_; 
v___x_86_ = 1;
return v___x_86_;
}
case 3:
{
uint8_t v___x_87_; 
v___x_87_ = 0;
return v___x_87_;
}
default: 
{
uint8_t v___x_88_; 
v___x_88_ = 0;
return v___x_88_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_isFinite___boxed(lean_object* v_i_89_){
_start:
{
uint8_t v_res_90_; lean_object* v_r_91_; 
v_res_90_ = l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_isFinite(v_i_89_);
lean_dec(v_i_89_);
v_r_91_ = lean_box(v_res_90_);
return v_r_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_lo_x3f(lean_object* v_i_92_){
_start:
{
switch(lean_obj_tag(v_i_92_))
{
case 0:
{
lean_object* v_lo_93_; lean_object* v___x_94_; 
v_lo_93_ = lean_ctor_get(v_i_92_, 0);
lean_inc_ref(v_lo_93_);
lean_dec_ref(v_i_92_);
v___x_94_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_94_, 0, v_lo_93_);
return v___x_94_;
}
case 1:
{
lean_object* v_lo_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_102_; 
v_lo_95_ = lean_ctor_get(v_i_92_, 0);
v_isSharedCheck_102_ = !lean_is_exclusive(v_i_92_);
if (v_isSharedCheck_102_ == 0)
{
v___x_97_ = v_i_92_;
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_lo_95_);
lean_dec(v_i_92_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_100_; 
if (v_isShared_98_ == 0)
{
v___x_100_ = v___x_97_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_lo_95_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
return v___x_100_;
}
}
}
default: 
{
lean_object* v___x_103_; 
lean_dec(v_i_92_);
v___x_103_ = lean_box(0);
return v___x_103_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_hi_x3f(lean_object* v_i_104_){
_start:
{
switch(lean_obj_tag(v_i_104_))
{
case 0:
{
lean_object* v_hi_105_; lean_object* v___x_106_; 
v_hi_105_ = lean_ctor_get(v_i_104_, 1);
lean_inc_ref(v_hi_105_);
lean_dec_ref(v_i_104_);
v___x_106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_106_, 0, v_hi_105_);
return v___x_106_;
}
case 2:
{
lean_object* v_hi_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_114_; 
v_hi_107_ = lean_ctor_get(v_i_104_, 0);
v_isSharedCheck_114_ = !lean_is_exclusive(v_i_104_);
if (v_isSharedCheck_114_ == 0)
{
v___x_109_ = v_i_104_;
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_hi_107_);
lean_dec(v_i_104_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_112_; 
if (v_isShared_110_ == 0)
{
lean_ctor_set_tag(v___x_109_, 1);
v___x_112_ = v___x_109_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_hi_107_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
}
}
}
default: 
{
lean_object* v___x_115_; 
lean_dec(v_i_104_);
v___x_115_ = lean_box(0);
return v___x_115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0_spec__0(lean_object* v_msgData_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_){
_start:
{
lean_object* v___x_122_; lean_object* v_env_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v_mctx_126_; lean_object* v_lctx_127_; lean_object* v_options_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_122_ = lean_st_ref_get(v___y_120_);
v_env_123_ = lean_ctor_get(v___x_122_, 0);
lean_inc_ref(v_env_123_);
lean_dec(v___x_122_);
v___x_124_ = lean_st_ref_get(v___y_120_);
lean_dec(v___x_124_);
v___x_125_ = lean_st_ref_get(v___y_118_);
v_mctx_126_ = lean_ctor_get(v___x_125_, 0);
lean_inc_ref(v_mctx_126_);
lean_dec(v___x_125_);
v_lctx_127_ = lean_ctor_get(v___y_117_, 2);
v_options_128_ = lean_ctor_get(v___y_119_, 2);
lean_inc_ref(v_options_128_);
lean_inc_ref(v_lctx_127_);
v___x_129_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_129_, 0, v_env_123_);
lean_ctor_set(v___x_129_, 1, v_mctx_126_);
lean_ctor_set(v___x_129_, 2, v_lctx_127_);
lean_ctor_set(v___x_129_, 3, v_options_128_);
v___x_130_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v_msgData_116_);
v___x_131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_131_, 0, v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0_spec__0___boxed(lean_object* v_msgData_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0_spec__0(v_msgData_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_);
lean_dec(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0___redArg(lean_object* v_msg_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_){
_start:
{
lean_object* v_ref_145_; lean_object* v___x_146_; lean_object* v_a_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_155_; 
v_ref_145_ = lean_ctor_get(v___y_142_, 5);
v___x_146_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0_spec__0(v_msg_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_);
v_a_147_ = lean_ctor_get(v___x_146_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_146_);
if (v_isSharedCheck_155_ == 0)
{
v___x_149_ = v___x_146_;
v_isShared_150_ = v_isSharedCheck_155_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_a_147_);
lean_dec(v___x_146_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_155_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_151_; lean_object* v___x_153_; 
lean_inc(v_ref_145_);
v___x_151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_151_, 0, v_ref_145_);
lean_ctor_set(v___x_151_, 1, v_a_147_);
if (v_isShared_150_ == 0)
{
lean_ctor_set_tag(v___x_149_, 1);
lean_ctor_set(v___x_149_, 0, v___x_151_);
v___x_153_ = v___x_149_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v___x_151_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0___redArg___boxed(lean_object* v_msg_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0___redArg(v_msg_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
lean_dec(v___y_158_);
lean_dec_ref(v___y_157_);
return v_res_162_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__0(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = lean_unsigned_to_nat(0u);
v___x_164_ = lean_nat_to_int(v___x_163_);
return v___x_164_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__1(void){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = lean_mk_string_unchecked("`grind` internal error, `.ci` interval support has not been implemented yet", 75, 75);
return v___x_165_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__2(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__1);
v___x_167_ = l_Lean_stringToMessageData(v___x_166_);
return v___x_167_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__3(void){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lean_mk_string_unchecked("`grind` internal error, `.io` interval support has not been implemented yet", 75, 75);
return v___x_168_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__4(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__3, &l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__3);
v___x_170_ = l_Lean_stringToMessageData(v___x_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap(lean_object* v_i_171_, lean_object* v_x_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_){
_start:
{
switch(lean_obj_tag(v_i_171_))
{
case 0:
{
lean_object* v_lo_178_; lean_object* v_hi_179_; lean_object* v_val_180_; lean_object* v_ival_x3f_181_; 
v_lo_178_ = lean_ctor_get(v_i_171_, 0);
lean_inc_ref(v_lo_178_);
v_hi_179_ = lean_ctor_get(v_i_171_, 1);
lean_inc_ref(v_hi_179_);
lean_dec_ref(v_i_171_);
v_val_180_ = lean_ctor_get(v_lo_178_, 0);
lean_inc_ref(v_val_180_);
v_ival_x3f_181_ = lean_ctor_get(v_lo_178_, 1);
lean_inc(v_ival_x3f_181_);
lean_dec_ref(v_lo_178_);
if (lean_obj_tag(v_ival_x3f_181_) == 1)
{
lean_object* v_ival_x3f_189_; 
v_ival_x3f_189_ = lean_ctor_get(v_hi_179_, 1);
if (lean_obj_tag(v_ival_x3f_189_) == 1)
{
lean_object* v_val_190_; lean_object* v_val_191_; lean_object* v_val_192_; lean_object* v___x_193_; 
lean_inc_ref(v_ival_x3f_189_);
lean_dec_ref(v_val_180_);
v_val_190_ = lean_ctor_get(v_ival_x3f_181_, 0);
lean_inc(v_val_190_);
lean_dec_ref(v_ival_x3f_181_);
v_val_191_ = lean_ctor_get(v_hi_179_, 0);
lean_inc_ref(v_val_191_);
lean_dec_ref(v_hi_179_);
v_val_192_ = lean_ctor_get(v_ival_x3f_189_, 0);
lean_inc(v_val_192_);
lean_dec_ref(v_ival_x3f_189_);
lean_inc_ref(v_x_172_);
v___x_193_ = l_Lean_Meta_getIntValue_x3f(v_x_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_);
if (lean_obj_tag(v___x_193_) == 0)
{
lean_object* v_a_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_222_; 
v_a_194_ = lean_ctor_get(v___x_193_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_193_);
if (v_isSharedCheck_222_ == 0)
{
v___x_196_ = v___x_193_;
v_isShared_197_ = v_isSharedCheck_222_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_a_194_);
lean_dec(v___x_193_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_222_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
if (lean_obj_tag(v_a_194_) == 1)
{
lean_object* v_val_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_205_; 
lean_dec_ref(v_val_191_);
lean_dec_ref(v_x_172_);
v_val_198_ = lean_ctor_get(v_a_194_, 0);
lean_inc(v_val_198_);
lean_dec_ref(v_a_194_);
v___x_199_ = lean_int_sub(v_val_198_, v_val_190_);
lean_dec(v_val_198_);
v___x_200_ = lean_int_sub(v_val_192_, v_val_190_);
lean_dec(v_val_192_);
v___x_201_ = lean_int_emod(v___x_199_, v___x_200_);
lean_dec(v___x_200_);
lean_dec(v___x_199_);
v___x_202_ = lean_int_add(v___x_201_, v_val_190_);
lean_dec(v_val_190_);
lean_dec(v___x_201_);
v___x_203_ = l_Lean_mkIntLit(v___x_202_);
lean_dec(v___x_202_);
if (v_isShared_197_ == 0)
{
lean_ctor_set(v___x_196_, 0, v___x_203_);
v___x_205_ = v___x_196_;
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
else
{
lean_object* v___x_207_; uint8_t v___x_208_; 
lean_dec(v_a_194_);
v___x_207_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__0);
v___x_208_ = lean_int_dec_eq(v_val_190_, v___x_207_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_216_; 
lean_dec_ref(v_val_191_);
v___x_209_ = l_Lean_mkIntLit(v_val_190_);
lean_inc_ref(v___x_209_);
v___x_210_ = l_Lean_mkIntSub(v_x_172_, v___x_209_);
v___x_211_ = lean_int_sub(v_val_192_, v_val_190_);
lean_dec(v_val_190_);
lean_dec(v_val_192_);
v___x_212_ = l_Lean_mkIntLit(v___x_211_);
lean_dec(v___x_211_);
v___x_213_ = l_Lean_mkIntMod(v___x_210_, v___x_212_);
v___x_214_ = l_Lean_mkIntAdd(v___x_213_, v___x_209_);
if (v_isShared_197_ == 0)
{
lean_ctor_set(v___x_196_, 0, v___x_214_);
v___x_216_ = v___x_196_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v___x_214_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
else
{
lean_object* v___x_218_; lean_object* v___x_220_; 
lean_dec(v_val_192_);
lean_dec(v_val_190_);
v___x_218_ = l_Lean_mkIntMod(v_x_172_, v_val_191_);
if (v_isShared_197_ == 0)
{
lean_ctor_set(v___x_196_, 0, v___x_218_);
v___x_220_ = v___x_196_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v___x_218_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
}
}
else
{
lean_object* v_a_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_230_; 
lean_dec(v_val_192_);
lean_dec_ref(v_val_191_);
lean_dec(v_val_190_);
lean_dec_ref(v_x_172_);
v_a_223_ = lean_ctor_get(v___x_193_, 0);
v_isSharedCheck_230_ = !lean_is_exclusive(v___x_193_);
if (v_isSharedCheck_230_ == 0)
{
v___x_225_ = v___x_193_;
v_isShared_226_ = v_isSharedCheck_230_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_a_223_);
lean_dec(v___x_193_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_230_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v___x_228_; 
if (v_isShared_226_ == 0)
{
v___x_228_ = v___x_225_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v_a_223_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
return v___x_228_;
}
}
}
}
else
{
lean_object* v_val_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_242_; 
v_val_231_ = lean_ctor_get(v_ival_x3f_181_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v_ival_x3f_181_);
if (v_isSharedCheck_242_ == 0)
{
v___x_233_ = v_ival_x3f_181_;
v_isShared_234_ = v_isSharedCheck_242_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_val_231_);
lean_dec(v_ival_x3f_181_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_242_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v_val_235_; lean_object* v___x_236_; uint8_t v___x_237_; 
v_val_235_ = lean_ctor_get(v_hi_179_, 0);
v___x_236_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__0);
v___x_237_ = lean_int_dec_eq(v_val_231_, v___x_236_);
lean_dec(v_val_231_);
if (v___x_237_ == 0)
{
lean_del_object(v___x_233_);
goto v___jp_182_;
}
else
{
lean_object* v___x_238_; lean_object* v___x_240_; 
lean_inc_ref(v_val_235_);
lean_dec_ref(v_val_180_);
lean_dec_ref(v_hi_179_);
v___x_238_ = l_Lean_mkIntMod(v_x_172_, v_val_235_);
if (v_isShared_234_ == 0)
{
lean_ctor_set_tag(v___x_233_, 0);
lean_ctor_set(v___x_233_, 0, v___x_238_);
v___x_240_ = v___x_233_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v___x_238_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
}
}
}
else
{
lean_dec(v_ival_x3f_181_);
goto v___jp_182_;
}
v___jp_182_:
{
lean_object* v_val_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v_val_183_ = lean_ctor_get(v_hi_179_, 0);
lean_inc_ref(v_val_183_);
lean_dec_ref(v_hi_179_);
lean_inc_ref_n(v_val_180_, 2);
v___x_184_ = l_Lean_mkIntSub(v_x_172_, v_val_180_);
v___x_185_ = l_Lean_mkIntSub(v_val_183_, v_val_180_);
v___x_186_ = l_Lean_mkIntMod(v___x_184_, v___x_185_);
v___x_187_ = l_Lean_mkIntAdd(v___x_186_, v_val_180_);
v___x_188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
return v___x_188_;
}
}
case 1:
{
lean_object* v___x_243_; lean_object* v___x_244_; 
lean_dec_ref(v_i_171_);
lean_dec_ref(v_x_172_);
v___x_243_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__2, &l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__2);
v___x_244_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0___redArg(v___x_243_, v_a_173_, v_a_174_, v_a_175_, v_a_176_);
return v___x_244_;
}
case 2:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
lean_dec_ref(v_i_171_);
lean_dec_ref(v_x_172_);
v___x_245_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__4, &l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__4_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___closed__4);
v___x_246_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0___redArg(v___x_245_, v_a_173_, v_a_174_, v_a_175_, v_a_176_);
return v___x_246_;
}
default: 
{
lean_object* v___x_247_; 
v___x_247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_247_, 0, v_x_172_);
return v___x_247_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap___boxed(lean_object* v_i_248_, lean_object* v_x_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap(v_i_248_, v_x_249_, v_a_250_, v_a_251_, v_a_252_, v_a_253_);
lean_dec(v_a_253_);
lean_dec_ref(v_a_252_);
lean_dec(v_a_251_);
lean_dec_ref(v_a_250_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0(lean_object* v_00_u03b1_256_, lean_object* v_msg_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0___redArg(v_msg_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0___boxed(lean_object* v_00_u03b1_264_, lean_object* v_msg_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_SymbolicIntInterval_wrap_spec__0(v_00_u03b1_264_, v_msg_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
lean_dec(v___y_269_);
lean_dec_ref(v___y_268_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
return v_res_271_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntInfo_default___closed__0(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_272_ = lean_box(0);
v___x_273_ = l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval_default;
v___x_274_ = lean_box(0);
v___x_275_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__2, &l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default___closed__2);
v___x_276_ = lean_unsigned_to_nat(0u);
v___x_277_ = lean_alloc_ctor(0, 26, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v___x_275_);
lean_ctor_set(v___x_277_, 2, v___x_274_);
lean_ctor_set(v___x_277_, 3, v___x_275_);
lean_ctor_set(v___x_277_, 4, v___x_275_);
lean_ctor_set(v___x_277_, 5, v___x_273_);
lean_ctor_set(v___x_277_, 6, v___x_275_);
lean_ctor_set(v___x_277_, 7, v___x_275_);
lean_ctor_set(v___x_277_, 8, v___x_272_);
lean_ctor_set(v___x_277_, 9, v___x_275_);
lean_ctor_set(v___x_277_, 10, v___x_275_);
lean_ctor_set(v___x_277_, 11, v___x_272_);
lean_ctor_set(v___x_277_, 12, v___x_272_);
lean_ctor_set(v___x_277_, 13, v___x_272_);
lean_ctor_set(v___x_277_, 14, v___x_272_);
lean_ctor_set(v___x_277_, 15, v___x_272_);
lean_ctor_set(v___x_277_, 16, v___x_272_);
lean_ctor_set(v___x_277_, 17, v___x_272_);
lean_ctor_set(v___x_277_, 18, v___x_272_);
lean_ctor_set(v___x_277_, 19, v___x_272_);
lean_ctor_set(v___x_277_, 20, v___x_272_);
lean_ctor_set(v___x_277_, 21, v___x_272_);
lean_ctor_set(v___x_277_, 22, v___x_272_);
lean_ctor_set(v___x_277_, 23, v___x_272_);
lean_ctor_set(v___x_277_, 24, v___x_272_);
lean_ctor_set(v___x_277_, 25, v___x_272_);
return v___x_277_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntInfo_default(void){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntInfo_default___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntInfo_default___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntInfo_default___closed__0);
return v___x_278_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntInfo(void){
_start:
{
lean_object* v___x_279_; 
v___x_279_ = l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntInfo_default;
return v___x_279_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LitValues(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToIntInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntThms_default = _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntThms_default();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntThms_default);
l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntThms = _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntThms();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntThms);
l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default = _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound_default);
l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound = _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicBound);
l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval_default = _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval_default();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval_default);
l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval = _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedSymbolicIntInterval);
l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntInfo_default = _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntInfo_default();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntInfo_default);
l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntInfo = _init_l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntInfo();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Cutsat_instInhabitedToIntInfo);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToIntInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_LitValues(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToIntInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToIntInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToIntInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToIntInfo(builtin);
}
#ifdef __cplusplus
}
#endif
