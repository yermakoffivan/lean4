// Lean compiler output
// Module: Lean.Elab.Tactic.Conv.Change
// Imports: public import Lean.Elab.Tactic.Change public import Lean.Elab.Tactic.Conv.Basic
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
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_getLhs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Elab_Tactic_elabChangeDefaultError___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_elabChange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_logUnassignedAndAbort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_changeLhs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalChange___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalChange___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalChange___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalChange___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalChange___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalChange___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalChange___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalChange___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalChange___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalChange___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalChange___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalChange___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalChange___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalChange___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalChange___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalChange___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalChange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0___redArg___closed__0(void){
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
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0___redArg();
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0___boxed(lean_object* v_00_u03b1_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0(v_00_u03b1_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
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
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalChange___lam__0___closed__0(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabChangeDefaultError___boxed), 7, 0);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalChange___lam__0(lean_object* v_e_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_Elab_Tactic_Conv_getLhs___redArg(v___y_34_, v___y_37_, v___y_38_, v___y_39_, v___y_40_);
if (lean_obj_tag(v___x_42_) == 0)
{
lean_object* v_a_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v_a_43_ = lean_ctor_get(v___x_42_, 0);
lean_inc(v_a_43_);
lean_dec_ref(v___x_42_);
v___x_44_ = lean_st_ref_get(v___y_38_);
v___x_45_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalChange___lam__0___closed__0, &l_Lean_Elab_Tactic_Conv_evalChange___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalChange___lam__0___closed__0);
v___x_46_ = l_Lean_Elab_Tactic_elabChange(v_a_43_, v_e_32_, v___x_45_, v___y_33_, v___y_34_, v___y_35_, v___y_36_, v___y_37_, v___y_38_, v___y_39_, v___y_40_);
if (lean_obj_tag(v___x_46_) == 0)
{
lean_object* v_a_47_; lean_object* v___x_48_; 
v_a_47_ = lean_ctor_get(v___x_46_, 0);
lean_inc_n(v_a_47_, 2);
lean_dec_ref(v___x_46_);
v___x_48_ = l_Lean_Meta_getMVars(v_a_47_, v___y_37_, v___y_38_, v___y_39_, v___y_40_);
if (lean_obj_tag(v___x_48_) == 0)
{
lean_object* v_mctx_49_; lean_object* v_a_50_; lean_object* v_mvarCounter_51_; lean_object* v___x_52_; 
v_mctx_49_ = lean_ctor_get(v___x_44_, 0);
lean_inc_ref(v_mctx_49_);
lean_dec(v___x_44_);
v_a_50_ = lean_ctor_get(v___x_48_, 0);
lean_inc(v_a_50_);
lean_dec_ref(v___x_48_);
v_mvarCounter_51_ = lean_ctor_get(v_mctx_49_, 3);
lean_inc(v_mvarCounter_51_);
lean_dec_ref(v_mctx_49_);
v___x_52_ = l_Lean_Elab_Tactic_filterOldMVars___redArg(v_a_50_, v_mvarCounter_51_, v___y_38_);
lean_dec(v_mvarCounter_51_);
lean_dec(v_a_50_);
if (lean_obj_tag(v___x_52_) == 0)
{
lean_object* v_a_53_; lean_object* v___x_54_; 
v_a_53_ = lean_ctor_get(v___x_52_, 0);
lean_inc(v_a_53_);
lean_dec_ref(v___x_52_);
v___x_54_ = l_Lean_Elab_Tactic_logUnassignedAndAbort(v_a_53_, v___y_33_, v___y_34_, v___y_35_, v___y_36_, v___y_37_, v___y_38_, v___y_39_, v___y_40_);
lean_dec(v_a_53_);
if (lean_obj_tag(v___x_54_) == 0)
{
lean_object* v___x_55_; 
lean_dec_ref(v___x_54_);
v___x_55_ = l_Lean_Elab_Tactic_Conv_changeLhs(v_a_47_, v___y_33_, v___y_34_, v___y_35_, v___y_36_, v___y_37_, v___y_38_, v___y_39_, v___y_40_);
return v___x_55_;
}
else
{
lean_dec(v_a_47_);
return v___x_54_;
}
}
else
{
lean_object* v_a_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_63_; 
lean_dec(v_a_47_);
v_a_56_ = lean_ctor_get(v___x_52_, 0);
v_isSharedCheck_63_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_63_ == 0)
{
v___x_58_ = v___x_52_;
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_a_56_);
lean_dec(v___x_52_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_61_; 
if (v_isShared_59_ == 0)
{
v___x_61_ = v___x_58_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_a_56_);
v___x_61_ = v_reuseFailAlloc_62_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
return v___x_61_;
}
}
}
}
else
{
lean_object* v_a_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_71_; 
lean_dec(v_a_47_);
lean_dec(v___x_44_);
v_a_64_ = lean_ctor_get(v___x_48_, 0);
v_isSharedCheck_71_ = !lean_is_exclusive(v___x_48_);
if (v_isSharedCheck_71_ == 0)
{
v___x_66_ = v___x_48_;
v_isShared_67_ = v_isSharedCheck_71_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_a_64_);
lean_dec(v___x_48_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_71_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_69_; 
if (v_isShared_67_ == 0)
{
v___x_69_ = v___x_66_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v_a_64_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
return v___x_69_;
}
}
}
}
else
{
lean_object* v_a_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_79_; 
lean_dec(v___x_44_);
v_a_72_ = lean_ctor_get(v___x_46_, 0);
v_isSharedCheck_79_ = !lean_is_exclusive(v___x_46_);
if (v_isSharedCheck_79_ == 0)
{
v___x_74_ = v___x_46_;
v_isShared_75_ = v_isSharedCheck_79_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_a_72_);
lean_dec(v___x_46_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_79_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
lean_object* v___x_77_; 
if (v_isShared_75_ == 0)
{
v___x_77_ = v___x_74_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v_a_72_);
v___x_77_ = v_reuseFailAlloc_78_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
return v___x_77_;
}
}
}
}
else
{
lean_object* v_a_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_87_; 
lean_dec(v_e_32_);
v_a_80_ = lean_ctor_get(v___x_42_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v___x_42_);
if (v_isSharedCheck_87_ == 0)
{
v___x_82_ = v___x_42_;
v_isShared_83_ = v_isSharedCheck_87_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_a_80_);
lean_dec(v___x_42_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_87_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_85_; 
if (v_isShared_83_ == 0)
{
v___x_85_ = v___x_82_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v_a_80_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalChange___lam__0___boxed(lean_object* v_e_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l_Lean_Elab_Tactic_Conv_evalChange___lam__0(v_e_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_);
lean_dec(v___y_96_);
lean_dec_ref(v___y_95_);
lean_dec(v___y_94_);
lean_dec_ref(v___y_93_);
lean_dec(v___y_92_);
lean_dec_ref(v___y_91_);
lean_dec(v___y_90_);
lean_dec_ref(v___y_89_);
return v_res_98_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalChange___closed__0(void){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalChange___closed__1(void){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_100_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalChange___closed__2(void){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalChange___closed__3(void){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lean_mk_string_unchecked("Conv", 4, 4);
return v___x_102_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalChange___closed__4(void){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = lean_mk_string_unchecked("change", 6, 6);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalChange___closed__5(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_104_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalChange___closed__4, &l_Lean_Elab_Tactic_Conv_evalChange___closed__4_once, _init_l_Lean_Elab_Tactic_Conv_evalChange___closed__4);
v___x_105_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalChange___closed__3, &l_Lean_Elab_Tactic_Conv_evalChange___closed__3_once, _init_l_Lean_Elab_Tactic_Conv_evalChange___closed__3);
v___x_106_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalChange___closed__2, &l_Lean_Elab_Tactic_Conv_evalChange___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalChange___closed__2);
v___x_107_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalChange___closed__1, &l_Lean_Elab_Tactic_Conv_evalChange___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalChange___closed__1);
v___x_108_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalChange___closed__0, &l_Lean_Elab_Tactic_Conv_evalChange___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalChange___closed__0);
v___x_109_ = l_Lean_Name_mkStr5(v___x_108_, v___x_107_, v___x_106_, v___x_105_, v___x_104_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalChange(lean_object* v_stx_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_){
_start:
{
lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_120_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalChange___closed__5, &l_Lean_Elab_Tactic_Conv_evalChange___closed__5_once, _init_l_Lean_Elab_Tactic_Conv_evalChange___closed__5);
lean_inc(v_stx_110_);
v___x_121_ = l_Lean_Syntax_isOfKind(v_stx_110_, v___x_120_);
if (v___x_121_ == 0)
{
lean_object* v___x_122_; 
lean_dec(v_stx_110_);
v___x_122_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalChange_spec__0___redArg();
return v___x_122_;
}
else
{
lean_object* v___x_123_; lean_object* v_e_124_; lean_object* v___f_125_; lean_object* v___x_126_; 
v___x_123_ = lean_unsigned_to_nat(1u);
v_e_124_ = l_Lean_Syntax_getArg(v_stx_110_, v___x_123_);
lean_dec(v_stx_110_);
v___f_125_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalChange___lam__0___boxed), 10, 1);
lean_closure_set(v___f_125_, 0, v_e_124_);
v___x_126_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_125_, v_a_111_, v_a_112_, v_a_113_, v_a_114_, v_a_115_, v_a_116_, v_a_117_, v_a_118_);
return v___x_126_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalChange___boxed(lean_object* v_stx_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Lean_Elab_Tactic_Conv_evalChange(v_stx_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_);
lean_dec(v_a_135_);
lean_dec_ref(v_a_134_);
lean_dec(v_a_133_);
lean_dec_ref(v_a_132_);
lean_dec(v_a_131_);
lean_dec_ref(v_a_130_);
lean_dec(v_a_129_);
lean_dec_ref(v_a_128_);
return v_res_137_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__0(void){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_138_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__1(void){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = lean_mk_string_unchecked("evalChange", 10, 10);
return v___x_139_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__2(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_140_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__1, &l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__1);
v___x_141_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalChange___closed__3, &l_Lean_Elab_Tactic_Conv_evalChange___closed__3_once, _init_l_Lean_Elab_Tactic_Conv_evalChange___closed__3);
v___x_142_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalChange___closed__2, &l_Lean_Elab_Tactic_Conv_evalChange___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalChange___closed__2);
v___x_143_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__0, &l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__0);
v___x_144_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalChange___closed__0, &l_Lean_Elab_Tactic_Conv_evalChange___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalChange___closed__0);
v___x_145_ = l_Lean_Name_mkStr5(v___x_144_, v___x_143_, v___x_142_, v___x_141_, v___x_140_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1(){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_147_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_148_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalChange___closed__5, &l_Lean_Elab_Tactic_Conv_evalChange___closed__5_once, _init_l_Lean_Elab_Tactic_Conv_evalChange___closed__5);
v___x_149_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__2, &l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__2);
v___x_150_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalChange___boxed), 10, 0);
v___x_151_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_147_, v___x_148_, v___x_149_, v___x_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___boxed(lean_object* v_a_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1();
return v_res_153_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_154_ = lean_unsigned_to_nat(49u);
v___x_155_ = lean_unsigned_to_nat(13u);
v___x_156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
lean_ctor_set(v___x_156_, 1, v___x_154_);
return v___x_156_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_157_ = lean_unsigned_to_nat(31u);
v___x_158_ = lean_unsigned_to_nat(23u);
v___x_159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_158_);
lean_ctor_set(v___x_159_, 1, v___x_157_);
return v___x_159_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_160_ = lean_unsigned_to_nat(31u);
v___x_161_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__1);
v___x_162_ = lean_unsigned_to_nat(49u);
v___x_163_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__0);
v___x_164_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
lean_ctor_set(v___x_164_, 1, v___x_162_);
lean_ctor_set(v___x_164_, 2, v___x_161_);
lean_ctor_set(v___x_164_, 3, v___x_160_);
return v___x_164_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_165_ = lean_unsigned_to_nat(53u);
v___x_166_ = lean_unsigned_to_nat(13u);
v___x_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
lean_ctor_set(v___x_167_, 1, v___x_165_);
return v___x_167_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_168_ = lean_unsigned_to_nat(63u);
v___x_169_ = lean_unsigned_to_nat(13u);
v___x_170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
lean_ctor_set(v___x_170_, 1, v___x_168_);
return v___x_170_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_171_ = lean_unsigned_to_nat(63u);
v___x_172_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__4);
v___x_173_ = lean_unsigned_to_nat(53u);
v___x_174_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__3);
v___x_175_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
lean_ctor_set(v___x_175_, 1, v___x_173_);
lean_ctor_set(v___x_175_, 2, v___x_172_);
lean_ctor_set(v___x_175_, 3, v___x_171_);
return v___x_175_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_176_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__5);
v___x_177_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__2);
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v___x_176_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3(){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_180_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__2, &l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1___closed__2);
v___x_181_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___closed__6);
v___x_182_ = l_Lean_addBuiltinDeclarationRanges(v___x_180_, v___x_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3___boxed(lean_object* v_a_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3();
return v_res_184_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Change(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Conv_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Conv_Change(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Change(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Conv_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Change_0__Lean_Elab_Tactic_Conv_evalChange___regBuiltin_Lean_Elab_Tactic_Conv_evalChange_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Conv_Change(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Change(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Conv_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Conv_Change(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Change(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Conv_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Conv_Change(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Conv_Change(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Conv_Change(builtin);
}
#ifdef __cplusplus
}
#endif
