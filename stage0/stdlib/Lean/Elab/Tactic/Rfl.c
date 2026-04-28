// Lean compiler output
// Module: Lean.Elab.Tactic.Rfl
// Imports: public import Lean.Meta.Tactic.Rfl
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
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_applyRfl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_docString__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_docString__3___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_docString__3___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0___redArg();
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0___boxed(lean_object* v_00_u03b1_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0(v_00_u03b1_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
lean_dec(v___y_28_);
lean_dec_ref(v___y_27_);
lean_dec(v___y_26_);
lean_dec_ref(v___y_25_);
lean_dec(v___y_24_);
lean_dec_ref(v___y_23_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl___lam__0(lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_32_, v___y_35_, v___y_36_, v___y_37_, v___y_38_);
if (lean_obj_tag(v___x_40_) == 0)
{
lean_object* v_a_41_; lean_object* v___x_42_; 
v_a_41_ = lean_ctor_get(v___x_40_, 0);
lean_inc(v_a_41_);
lean_dec_ref(v___x_40_);
v___x_42_ = l_Lean_MVarId_applyRfl(v_a_41_, v___y_35_, v___y_36_, v___y_37_, v___y_38_);
if (lean_obj_tag(v___x_42_) == 0)
{
lean_object* v___x_43_; lean_object* v___x_44_; 
lean_dec_ref(v___x_42_);
v___x_43_ = lean_box(0);
v___x_44_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_43_, v___y_32_, v___y_35_, v___y_36_, v___y_37_, v___y_38_);
if (lean_obj_tag(v___x_44_) == 0)
{
lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_52_; 
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_52_ == 0)
{
lean_object* v_unused_53_; 
v_unused_53_ = lean_ctor_get(v___x_44_, 0);
lean_dec(v_unused_53_);
v___x_46_ = v___x_44_;
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
else
{
lean_dec(v___x_44_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_48_; lean_object* v___x_50_; 
v___x_48_ = lean_box(0);
if (v_isShared_47_ == 0)
{
lean_ctor_set(v___x_46_, 0, v___x_48_);
v___x_50_ = v___x_46_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v___x_48_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
else
{
return v___x_44_;
}
}
else
{
return v___x_42_;
}
}
else
{
lean_object* v_a_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_61_; 
v_a_54_ = lean_ctor_get(v___x_40_, 0);
v_isSharedCheck_61_ = !lean_is_exclusive(v___x_40_);
if (v_isSharedCheck_61_ == 0)
{
v___x_56_ = v___x_40_;
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_a_54_);
lean_dec(v___x_40_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_59_; 
if (v_isShared_57_ == 0)
{
v___x_59_ = v___x_56_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_a_54_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl___lam__0___boxed(lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Lean_Elab_Tactic_Rfl_evalApplyRfl___lam__0(v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_);
lean_dec(v___y_69_);
lean_dec_ref(v___y_68_);
lean_dec(v___y_67_);
lean_dec_ref(v___y_66_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl___lam__1(lean_object* v___f_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl___lam__1___boxed(lean_object* v___f_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_Elab_Tactic_Rfl_evalApplyRfl___lam__1(v___f_83_, v___y_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
lean_dec(v___y_87_);
lean_dec_ref(v___y_86_);
lean_dec(v___y_85_);
lean_dec_ref(v___y_84_);
return v_res_93_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__0(void){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_94_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__1(void){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__2(void){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__3(void){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = lean_mk_string_unchecked("applyRfl", 8, 8);
return v___x_97_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__4(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_98_ = lean_obj_once(&l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__3, &l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__3_once, _init_l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__3);
v___x_99_ = lean_obj_once(&l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__2, &l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__2_once, _init_l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__2);
v___x_100_ = lean_obj_once(&l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__1, &l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__1_once, _init_l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__1);
v___x_101_ = lean_obj_once(&l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__0, &l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__0_once, _init_l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__0);
v___x_102_ = l_Lean_Name_mkStr4(v___x_101_, v___x_100_, v___x_99_, v___x_98_);
return v___x_102_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__5(void){
_start:
{
lean_object* v___f_103_; 
v___f_103_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Rfl_evalApplyRfl___lam__0___boxed), 9, 0);
return v___f_103_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__6(void){
_start:
{
lean_object* v___f_104_; lean_object* v___f_105_; 
v___f_104_ = lean_obj_once(&l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__5, &l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__5_once, _init_l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__5);
v___f_105_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Rfl_evalApplyRfl___lam__1___boxed), 10, 1);
lean_closure_set(v___f_105_, 0, v___f_104_);
return v___f_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl(lean_object* v_stx_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
lean_object* v___x_116_; uint8_t v___x_117_; 
v___x_116_ = lean_obj_once(&l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__4, &l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__4_once, _init_l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__4);
v___x_117_ = l_Lean_Syntax_isOfKind(v_stx_106_, v___x_116_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; 
v___x_118_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Rfl_evalApplyRfl_spec__0___redArg();
return v___x_118_;
}
else
{
lean_object* v___f_119_; lean_object* v___x_120_; 
v___f_119_ = lean_obj_once(&l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__6, &l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__6_once, _init_l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__6);
v___x_120_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_119_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_, v_a_113_, v_a_114_);
return v___x_120_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Rfl_evalApplyRfl___boxed(lean_object* v_stx_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lean_Elab_Tactic_Rfl_evalApplyRfl(v_stx_121_, v_a_122_, v_a_123_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_, v_a_129_);
lean_dec(v_a_129_);
lean_dec_ref(v_a_128_);
lean_dec(v_a_127_);
lean_dec_ref(v_a_126_);
lean_dec(v_a_125_);
lean_dec_ref(v_a_124_);
lean_dec(v_a_123_);
lean_dec_ref(v_a_122_);
return v_res_131_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__0(void){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_132_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__1(void){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = lean_mk_string_unchecked("Rfl", 3, 3);
return v___x_133_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__2(void){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = lean_mk_string_unchecked("evalApplyRfl", 12, 12);
return v___x_134_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__3(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_135_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__2, &l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__2);
v___x_136_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__1, &l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__1);
v___x_137_ = lean_obj_once(&l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__2, &l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__2_once, _init_l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__2);
v___x_138_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__0, &l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__0);
v___x_139_ = lean_obj_once(&l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__0, &l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__0_once, _init_l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__0);
v___x_140_ = l_Lean_Name_mkStr5(v___x_139_, v___x_138_, v___x_137_, v___x_136_, v___x_135_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1(){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_142_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_143_ = lean_obj_once(&l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__4, &l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__4_once, _init_l_Lean_Elab_Tactic_Rfl_evalApplyRfl___closed__4);
v___x_144_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__3, &l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__3);
v___x_145_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Rfl_evalApplyRfl___boxed), 10, 0);
v___x_146_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_142_, v___x_143_, v___x_144_, v___x_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___boxed(lean_object* v_a_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1();
return v_res_148_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_docString__3___closed__0(void){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lean_mk_string_unchecked("This tactic applies to a goal whose target has the form `x ~ x`, where `~` is a reflexive\nrelation, that is, a relation which has a reflexive lemma tagged with the attribute [refl].\n", 182, 182);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_docString__3(){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_151_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__3, &l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__3);
v___x_152_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_docString__3___closed__0, &l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_docString__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_docString__3___closed__0);
v___x_153_ = l_Lean_addBuiltinDocString(v___x_151_, v___x_152_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_docString__3___boxed(lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_docString__3();
return v_res_155_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__0(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_156_ = lean_unsigned_to_nat(46u);
v___x_157_ = lean_unsigned_to_nat(19u);
v___x_158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
lean_ctor_set(v___x_158_, 1, v___x_156_);
return v___x_158_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__1(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_159_ = lean_unsigned_to_nat(31u);
v___x_160_ = lean_unsigned_to_nat(22u);
v___x_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
lean_ctor_set(v___x_161_, 1, v___x_159_);
return v___x_161_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__2(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_162_ = lean_unsigned_to_nat(31u);
v___x_163_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__1, &l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__1_once, _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__1);
v___x_164_ = lean_unsigned_to_nat(46u);
v___x_165_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__0, &l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__0_once, _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__0);
v___x_166_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
lean_ctor_set(v___x_166_, 1, v___x_164_);
lean_ctor_set(v___x_166_, 2, v___x_163_);
lean_ctor_set(v___x_166_, 3, v___x_162_);
return v___x_166_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__3(void){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_167_ = lean_unsigned_to_nat(50u);
v___x_168_ = lean_unsigned_to_nat(19u);
v___x_169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
lean_ctor_set(v___x_169_, 1, v___x_167_);
return v___x_169_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__4(void){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_170_ = lean_unsigned_to_nat(62u);
v___x_171_ = lean_unsigned_to_nat(19u);
v___x_172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
lean_ctor_set(v___x_172_, 1, v___x_170_);
return v___x_172_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__5(void){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_173_ = lean_unsigned_to_nat(62u);
v___x_174_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__4, &l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__4_once, _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__4);
v___x_175_ = lean_unsigned_to_nat(50u);
v___x_176_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__3, &l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__3_once, _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__3);
v___x_177_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
lean_ctor_set(v___x_177_, 1, v___x_175_);
lean_ctor_set(v___x_177_, 2, v___x_174_);
lean_ctor_set(v___x_177_, 3, v___x_173_);
return v___x_177_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__6(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_178_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__5, &l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__5_once, _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__5);
v___x_179_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__2, &l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__2_once, _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__2);
v___x_180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
lean_ctor_set(v___x_180_, 1, v___x_178_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5(){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_182_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__3, &l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1___closed__3);
v___x_183_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__6, &l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__6_once, _init_l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___closed__6);
v___x_184_ = l_Lean_addBuiltinDeclarationRanges(v___x_182_, v___x_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5___boxed(lean_object* v_a_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5();
return v_res_186_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Rfl(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Rfl(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Rfl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Rfl_0__Lean_Elab_Tactic_Rfl_evalApplyRfl___regBuiltin_Lean_Elab_Tactic_Rfl_evalApplyRfl_declRange__5();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Rfl(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Rfl(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Rfl(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Rfl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Rfl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Rfl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Rfl(builtin);
}
#ifdef __cplusplus
}
#endif
