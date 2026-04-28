// Lean compiler output
// Module: Lean.Elab.Tactic.ExposeNames
// Imports: public import Lean.Meta.Tactic.ExposeNames public import Lean.Elab.Tactic.Basic
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
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_exposeNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExposeNames___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExposeNames___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalExposeNames___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalExposeNames___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExposeNames___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExposeNames___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExposeNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExposeNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__6;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExposeNames___redArg___lam__0(lean_object* v___y_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2_, v___y_5_, v___y_6_, v___y_7_, v___y_8_);
if (lean_obj_tag(v___x_10_) == 0)
{
lean_object* v_a_11_; lean_object* v___x_12_; 
v_a_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc(v_a_11_);
lean_dec_ref(v___x_10_);
v___x_12_ = l_Lean_MVarId_exposeNames(v_a_11_, v___y_5_, v___y_6_, v___y_7_, v___y_8_);
if (lean_obj_tag(v___x_12_) == 0)
{
lean_object* v_a_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v_a_13_ = lean_ctor_get(v___x_12_, 0);
lean_inc(v_a_13_);
lean_dec_ref(v___x_12_);
v___x_14_ = lean_box(0);
v___x_15_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_15_, 0, v_a_13_);
lean_ctor_set(v___x_15_, 1, v___x_14_);
v___x_16_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_15_, v___y_2_, v___y_5_, v___y_6_, v___y_7_, v___y_8_);
return v___x_16_;
}
else
{
lean_object* v_a_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_24_; 
v_a_17_ = lean_ctor_get(v___x_12_, 0);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_24_ == 0)
{
v___x_19_ = v___x_12_;
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_a_17_);
lean_dec(v___x_12_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_22_; 
if (v_isShared_20_ == 0)
{
v___x_22_ = v___x_19_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_a_17_);
v___x_22_ = v_reuseFailAlloc_23_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
return v___x_22_;
}
}
}
}
else
{
lean_object* v_a_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_32_; 
v_a_25_ = lean_ctor_get(v___x_10_, 0);
v_isSharedCheck_32_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_32_ == 0)
{
v___x_27_ = v___x_10_;
v_isShared_28_ = v_isSharedCheck_32_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_a_25_);
lean_dec(v___x_10_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_32_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v___x_30_; 
if (v_isShared_28_ == 0)
{
v___x_30_ = v___x_27_;
goto v_reusejp_29_;
}
else
{
lean_object* v_reuseFailAlloc_31_; 
v_reuseFailAlloc_31_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_31_, 0, v_a_25_);
v___x_30_ = v_reuseFailAlloc_31_;
goto v_reusejp_29_;
}
v_reusejp_29_:
{
return v___x_30_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExposeNames___redArg___lam__0___boxed(lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_Lean_Elab_Tactic_evalExposeNames___redArg___lam__0(v___y_33_, v___y_34_, v___y_35_, v___y_36_, v___y_37_, v___y_38_, v___y_39_, v___y_40_);
lean_dec(v___y_40_);
lean_dec_ref(v___y_39_);
lean_dec(v___y_38_);
lean_dec_ref(v___y_37_);
lean_dec(v___y_36_);
lean_dec_ref(v___y_35_);
lean_dec(v___y_34_);
lean_dec_ref(v___y_33_);
return v_res_42_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalExposeNames___redArg___closed__0(void){
_start:
{
lean_object* v___f_43_; 
v___f_43_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalExposeNames___redArg___lam__0___boxed), 9, 0);
return v___f_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExposeNames___redArg(lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v___f_53_; lean_object* v___x_54_; 
v___f_53_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExposeNames___redArg___closed__0, &l_Lean_Elab_Tactic_evalExposeNames___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_evalExposeNames___redArg___closed__0);
v___x_54_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_53_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExposeNames___redArg___boxed(lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lean_Elab_Tactic_evalExposeNames___redArg(v_a_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_);
lean_dec(v_a_62_);
lean_dec_ref(v_a_61_);
lean_dec(v_a_60_);
lean_dec_ref(v_a_59_);
lean_dec(v_a_58_);
lean_dec_ref(v_a_57_);
lean_dec(v_a_56_);
lean_dec_ref(v_a_55_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExposeNames(lean_object* v_x_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Elab_Tactic_evalExposeNames___redArg(v_a_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_, v_a_72_, v_a_73_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExposeNames___boxed(lean_object* v_x_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Lean_Elab_Tactic_evalExposeNames(v_x_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_);
lean_dec(v_a_84_);
lean_dec_ref(v_a_83_);
lean_dec(v_a_82_);
lean_dec_ref(v_a_81_);
lean_dec(v_a_80_);
lean_dec_ref(v_a_79_);
lean_dec(v_a_78_);
lean_dec_ref(v_a_77_);
lean_dec(v_x_76_);
return v_res_86_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__0(void){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_87_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__1(void){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_88_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__2(void){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_89_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__3(void){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_mk_string_unchecked("exposeNames", 11, 11);
return v___x_90_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__4(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_91_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__3, &l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__3);
v___x_92_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__2, &l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__2);
v___x_93_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__1, &l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__1);
v___x_94_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__0, &l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__0);
v___x_95_ = l_Lean_Name_mkStr4(v___x_94_, v___x_93_, v___x_92_, v___x_91_);
return v___x_95_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__5(void){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_96_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__6(void){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = lean_mk_string_unchecked("evalExposeNames", 15, 15);
return v___x_97_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__7(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_98_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__6, &l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__6_once, _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__6);
v___x_99_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__2, &l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__2);
v___x_100_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__5, &l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__5_once, _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__5);
v___x_101_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__0, &l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__0);
v___x_102_ = l_Lean_Name_mkStr4(v___x_101_, v___x_100_, v___x_99_, v___x_98_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1(){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_104_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_105_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__4, &l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__4_once, _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__4);
v___x_106_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__7, &l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__7_once, _init_l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___closed__7);
v___x_107_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalExposeNames___boxed), 10, 0);
v___x_108_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_104_, v___x_105_, v___x_106_, v___x_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1___boxed(lean_object* v_a_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1();
return v_res_110_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_ExposeNames(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_ExposeNames(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_ExposeNames(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ExposeNames_0__Lean_Elab_Tactic_evalExposeNames___regBuiltin_Lean_Elab_Tactic_evalExposeNames__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_ExposeNames(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_ExposeNames(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_ExposeNames(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_ExposeNames(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_ExposeNames(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_ExposeNames(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_ExposeNames(builtin);
}
#ifdef __cplusplus
}
#endif
