// Lean compiler output
// Module: Lean.Meta.Inductive
// Imports: public import Lean.Meta.Basic
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescope(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__0;
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__1;
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__2;
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__3;
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__4;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__0;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__1;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__2;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__3;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__4;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__5;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__6;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_compatibleCtors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_compatibleCtors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_instMonadEIO(lean_box(0));
return v___x_1_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___f_2_; 
v___f_2_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_2_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__2(void){
_start:
{
lean_object* v___f_3_; 
v___f_3_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_3_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___f_4_; 
v___f_4_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return v___f_4_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__4(void){
_start:
{
lean_object* v___f_5_; 
v___f_5_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 0);
return v___f_5_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1(lean_object* v_msg_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v_toApplicative_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_75_; 
v___x_12_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__0);
v___x_13_ = l_StateRefT_x27_instMonad___redArg(v___x_12_);
v_toApplicative_14_ = lean_ctor_get(v___x_13_, 0);
v_isSharedCheck_75_ = !lean_is_exclusive(v___x_13_);
if (v_isSharedCheck_75_ == 0)
{
lean_object* v_unused_76_; 
v_unused_76_ = lean_ctor_get(v___x_13_, 1);
lean_dec(v_unused_76_);
v___x_16_ = v___x_13_;
v_isShared_17_ = v_isSharedCheck_75_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_toApplicative_14_);
lean_dec(v___x_13_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_75_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v_toFunctor_18_; lean_object* v_toSeq_19_; lean_object* v_toSeqLeft_20_; lean_object* v_toSeqRight_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_73_; 
v_toFunctor_18_ = lean_ctor_get(v_toApplicative_14_, 0);
v_toSeq_19_ = lean_ctor_get(v_toApplicative_14_, 2);
v_toSeqLeft_20_ = lean_ctor_get(v_toApplicative_14_, 3);
v_toSeqRight_21_ = lean_ctor_get(v_toApplicative_14_, 4);
v_isSharedCheck_73_ = !lean_is_exclusive(v_toApplicative_14_);
if (v_isSharedCheck_73_ == 0)
{
lean_object* v_unused_74_; 
v_unused_74_ = lean_ctor_get(v_toApplicative_14_, 1);
lean_dec(v_unused_74_);
v___x_23_ = v_toApplicative_14_;
v_isShared_24_ = v_isSharedCheck_73_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_toSeqRight_21_);
lean_inc(v_toSeqLeft_20_);
lean_inc(v_toSeq_19_);
lean_inc(v_toFunctor_18_);
lean_dec(v_toApplicative_14_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_73_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___f_25_; lean_object* v___f_26_; lean_object* v___f_27_; lean_object* v___f_28_; lean_object* v___x_29_; lean_object* v___f_30_; lean_object* v___f_31_; lean_object* v___f_32_; lean_object* v___x_34_; 
v___f_25_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__1, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__1_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__1);
v___f_26_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__2, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__2_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__2);
lean_inc_ref(v_toFunctor_18_);
v___f_27_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_27_, 0, v_toFunctor_18_);
v___f_28_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_28_, 0, v_toFunctor_18_);
v___x_29_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_29_, 0, v___f_27_);
lean_ctor_set(v___x_29_, 1, v___f_28_);
v___f_30_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_30_, 0, v_toSeqRight_21_);
v___f_31_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_31_, 0, v_toSeqLeft_20_);
v___f_32_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_32_, 0, v_toSeq_19_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 4, v___f_30_);
lean_ctor_set(v___x_23_, 3, v___f_31_);
lean_ctor_set(v___x_23_, 2, v___f_32_);
lean_ctor_set(v___x_23_, 1, v___f_25_);
lean_ctor_set(v___x_23_, 0, v___x_29_);
v___x_34_ = v___x_23_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_72_; 
v_reuseFailAlloc_72_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_72_, 0, v___x_29_);
lean_ctor_set(v_reuseFailAlloc_72_, 1, v___f_25_);
lean_ctor_set(v_reuseFailAlloc_72_, 2, v___f_32_);
lean_ctor_set(v_reuseFailAlloc_72_, 3, v___f_31_);
lean_ctor_set(v_reuseFailAlloc_72_, 4, v___f_30_);
v___x_34_ = v_reuseFailAlloc_72_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
lean_object* v___x_36_; 
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 1, v___f_26_);
lean_ctor_set(v___x_16_, 0, v___x_34_);
v___x_36_ = v___x_16_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v___x_34_);
lean_ctor_set(v_reuseFailAlloc_71_, 1, v___f_26_);
v___x_36_ = v_reuseFailAlloc_71_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
lean_object* v___x_37_; lean_object* v_toApplicative_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_69_; 
v___x_37_ = l_StateRefT_x27_instMonad___redArg(v___x_36_);
v_toApplicative_38_ = lean_ctor_get(v___x_37_, 0);
v_isSharedCheck_69_ = !lean_is_exclusive(v___x_37_);
if (v_isSharedCheck_69_ == 0)
{
lean_object* v_unused_70_; 
v_unused_70_ = lean_ctor_get(v___x_37_, 1);
lean_dec(v_unused_70_);
v___x_40_ = v___x_37_;
v_isShared_41_ = v_isSharedCheck_69_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_toApplicative_38_);
lean_dec(v___x_37_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_69_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v_toFunctor_42_; lean_object* v_toSeq_43_; lean_object* v_toSeqLeft_44_; lean_object* v_toSeqRight_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_67_; 
v_toFunctor_42_ = lean_ctor_get(v_toApplicative_38_, 0);
v_toSeq_43_ = lean_ctor_get(v_toApplicative_38_, 2);
v_toSeqLeft_44_ = lean_ctor_get(v_toApplicative_38_, 3);
v_toSeqRight_45_ = lean_ctor_get(v_toApplicative_38_, 4);
v_isSharedCheck_67_ = !lean_is_exclusive(v_toApplicative_38_);
if (v_isSharedCheck_67_ == 0)
{
lean_object* v_unused_68_; 
v_unused_68_ = lean_ctor_get(v_toApplicative_38_, 1);
lean_dec(v_unused_68_);
v___x_47_ = v_toApplicative_38_;
v_isShared_48_ = v_isSharedCheck_67_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_toSeqRight_45_);
lean_inc(v_toSeqLeft_44_);
lean_inc(v_toSeq_43_);
lean_inc(v_toFunctor_42_);
lean_dec(v_toApplicative_38_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_67_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___f_49_; lean_object* v___f_50_; lean_object* v___f_51_; lean_object* v___f_52_; lean_object* v___x_53_; lean_object* v___f_54_; lean_object* v___f_55_; lean_object* v___f_56_; lean_object* v___x_58_; 
v___f_49_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__3, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__3_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__3);
v___f_50_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__4, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__4_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___closed__4);
lean_inc_ref(v_toFunctor_42_);
v___f_51_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_51_, 0, v_toFunctor_42_);
v___f_52_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_52_, 0, v_toFunctor_42_);
v___x_53_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_53_, 0, v___f_51_);
lean_ctor_set(v___x_53_, 1, v___f_52_);
v___f_54_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_54_, 0, v_toSeqRight_45_);
v___f_55_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_55_, 0, v_toSeqLeft_44_);
v___f_56_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_56_, 0, v_toSeq_43_);
if (v_isShared_48_ == 0)
{
lean_ctor_set(v___x_47_, 4, v___f_54_);
lean_ctor_set(v___x_47_, 3, v___f_55_);
lean_ctor_set(v___x_47_, 2, v___f_56_);
lean_ctor_set(v___x_47_, 1, v___f_49_);
lean_ctor_set(v___x_47_, 0, v___x_53_);
v___x_58_ = v___x_47_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_66_; 
v_reuseFailAlloc_66_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_66_, 0, v___x_53_);
lean_ctor_set(v_reuseFailAlloc_66_, 1, v___f_49_);
lean_ctor_set(v_reuseFailAlloc_66_, 2, v___f_56_);
lean_ctor_set(v_reuseFailAlloc_66_, 3, v___f_55_);
lean_ctor_set(v_reuseFailAlloc_66_, 4, v___f_54_);
v___x_58_ = v_reuseFailAlloc_66_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
lean_object* v___x_60_; 
if (v_isShared_41_ == 0)
{
lean_ctor_set(v___x_40_, 1, v___f_50_);
lean_ctor_set(v___x_40_, 0, v___x_58_);
v___x_60_ = v___x_40_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v___x_58_);
lean_ctor_set(v_reuseFailAlloc_65_, 1, v___f_50_);
v___x_60_ = v_reuseFailAlloc_65_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_1852__overap_63_; lean_object* v___x_64_; 
v___x_61_ = lean_box(0);
v___x_62_ = l_instInhabitedOfMonad___redArg(v___x_60_, v___x_61_);
v___x_1852__overap_63_ = lean_panic_fn_borrowed(v___x_62_, v_msg_6_);
lean_dec(v___x_62_);
lean_inc(v___y_10_);
lean_inc_ref(v___y_9_);
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
v___x_64_ = lean_apply_5(v___x_1852__overap_63_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, lean_box(0));
return v___x_64_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1___boxed(lean_object* v_msg_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1(v_msg_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0_spec__1(lean_object* v_msgData_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_){
_start:
{
lean_object* v___x_90_; lean_object* v_env_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v_mctx_94_; lean_object* v_lctx_95_; lean_object* v_options_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_90_ = lean_st_ref_get(v___y_88_);
v_env_91_ = lean_ctor_get(v___x_90_, 0);
lean_inc_ref(v_env_91_);
lean_dec(v___x_90_);
v___x_92_ = lean_st_ref_get(v___y_88_);
lean_dec(v___x_92_);
v___x_93_ = lean_st_ref_get(v___y_86_);
v_mctx_94_ = lean_ctor_get(v___x_93_, 0);
lean_inc_ref(v_mctx_94_);
lean_dec(v___x_93_);
v_lctx_95_ = lean_ctor_get(v___y_85_, 2);
v_options_96_ = lean_ctor_get(v___y_87_, 2);
lean_inc_ref(v_options_96_);
lean_inc_ref(v_lctx_95_);
v___x_97_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_97_, 0, v_env_91_);
lean_ctor_set(v___x_97_, 1, v_mctx_94_);
lean_ctor_set(v___x_97_, 2, v_lctx_95_);
lean_ctor_set(v___x_97_, 3, v_options_96_);
v___x_98_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v_msgData_84_);
v___x_99_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0_spec__1(v_msgData_100_, v___y_101_, v___y_102_, v___y_103_, v___y_104_);
lean_dec(v___y_104_);
lean_dec_ref(v___y_103_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_101_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0___redArg(lean_object* v_msg_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_){
_start:
{
lean_object* v_ref_113_; lean_object* v___x_114_; lean_object* v_a_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_123_; 
v_ref_113_ = lean_ctor_get(v___y_110_, 5);
v___x_114_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0_spec__1(v_msg_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_);
v_a_115_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_123_ == 0)
{
v___x_117_ = v___x_114_;
v_isShared_118_ = v_isSharedCheck_123_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_a_115_);
lean_dec(v___x_114_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_123_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_119_; lean_object* v___x_121_; 
lean_inc(v_ref_113_);
v___x_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_119_, 0, v_ref_113_);
lean_ctor_set(v___x_119_, 1, v_a_115_);
if (v_isShared_118_ == 0)
{
lean_ctor_set_tag(v___x_117_, 1);
lean_ctor_set(v___x_117_, 0, v___x_119_);
v___x_121_ = v___x_117_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v___x_119_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0___redArg___boxed(lean_object* v_msg_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0___redArg(v_msg_124_, v___y_125_, v___y_126_, v___y_127_, v___y_128_);
lean_dec(v___y_128_);
lean_dec_ref(v___y_127_);
lean_dec(v___y_126_);
lean_dec_ref(v___y_125_);
return v_res_130_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__0(void){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = lean_mk_string_unchecked("`", 1, 1);
return v___x_131_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__1(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__0, &l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__0_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__0);
v___x_133_ = l_Lean_stringToMessageData(v___x_132_);
return v___x_133_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__2(void){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = lean_mk_string_unchecked("` is not a constructor", 22, 22);
return v___x_134_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__3(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__2, &l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__2_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__2);
v___x_136_ = l_Lean_stringToMessageData(v___x_135_);
return v___x_136_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__4(void){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lean_mk_string_unchecked("Lean.MonadEnv", 13, 13);
return v___x_137_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__5(void){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lean_mk_string_unchecked("Lean.isCtor\?", 12, 12);
return v___x_138_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__6(void){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_139_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__7(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_140_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__6, &l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__6_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__6);
v___x_141_ = lean_unsigned_to_nat(11u);
v___x_142_ = lean_unsigned_to_nat(122u);
v___x_143_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__5, &l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__5_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__5);
v___x_144_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__4, &l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__4_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__4);
v___x_145_ = l_mkPanicMessageWithDecl(v___x_144_, v___x_143_, v___x_142_, v___x_141_, v___x_140_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0(lean_object* v_constName_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_){
_start:
{
lean_object* v___x_160_; lean_object* v_env_161_; uint8_t v___x_162_; lean_object* v___x_163_; 
v___x_160_ = lean_st_ref_get(v___y_150_);
v_env_161_ = lean_ctor_get(v___x_160_, 0);
lean_inc_ref(v_env_161_);
lean_dec(v___x_160_);
v___x_162_ = 0;
lean_inc(v_constName_146_);
v___x_163_ = l_Lean_Environment_findAsync_x3f(v_env_161_, v_constName_146_, v___x_162_);
if (lean_obj_tag(v___x_163_) == 1)
{
lean_object* v_val_164_; uint8_t v_kind_165_; 
v_val_164_ = lean_ctor_get(v___x_163_, 0);
lean_inc(v_val_164_);
lean_dec_ref(v___x_163_);
v_kind_165_ = lean_ctor_get_uint8(v_val_164_, sizeof(void*)*3);
if (v_kind_165_ == 6)
{
lean_object* v___x_166_; 
v___x_166_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_164_);
if (lean_obj_tag(v___x_166_) == 6)
{
lean_object* v_val_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_174_; 
lean_dec(v_constName_146_);
v_val_167_ = lean_ctor_get(v___x_166_, 0);
v_isSharedCheck_174_ = !lean_is_exclusive(v___x_166_);
if (v_isSharedCheck_174_ == 0)
{
v___x_169_ = v___x_166_;
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_val_167_);
lean_dec(v___x_166_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_172_; 
if (v_isShared_170_ == 0)
{
lean_ctor_set_tag(v___x_169_, 0);
v___x_172_ = v___x_169_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v_val_167_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
}
else
{
lean_object* v___x_175_; lean_object* v___x_176_; 
lean_dec_ref(v___x_166_);
v___x_175_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__7, &l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__7);
v___x_176_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__1(v___x_175_, v___y_147_, v___y_148_, v___y_149_, v___y_150_);
if (lean_obj_tag(v___x_176_) == 0)
{
lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_185_; 
v_a_177_ = lean_ctor_get(v___x_176_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_176_);
if (v_isSharedCheck_185_ == 0)
{
v___x_179_ = v___x_176_;
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_dec(v___x_176_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
if (lean_obj_tag(v_a_177_) == 0)
{
lean_del_object(v___x_179_);
goto v___jp_152_;
}
else
{
lean_object* v_val_181_; lean_object* v___x_183_; 
lean_dec(v_constName_146_);
v_val_181_ = lean_ctor_get(v_a_177_, 0);
lean_inc(v_val_181_);
lean_dec_ref(v_a_177_);
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 0, v_val_181_);
v___x_183_ = v___x_179_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_val_181_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
}
else
{
lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_193_; 
lean_dec(v_constName_146_);
v_a_186_ = lean_ctor_get(v___x_176_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v___x_176_);
if (v_isSharedCheck_193_ == 0)
{
v___x_188_ = v___x_176_;
v_isShared_189_ = v_isSharedCheck_193_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v___x_176_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_193_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_191_; 
if (v_isShared_189_ == 0)
{
v___x_191_ = v___x_188_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_a_186_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
}
}
}
else
{
lean_dec(v_val_164_);
goto v___jp_152_;
}
}
else
{
lean_dec(v___x_163_);
goto v___jp_152_;
}
v___jp_152_:
{
lean_object* v___x_153_; uint8_t v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_153_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__1);
v___x_154_ = 0;
v___x_155_ = l_Lean_MessageData_ofConstName(v_constName_146_, v___x_154_);
v___x_156_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_153_);
lean_ctor_set(v___x_156_, 1, v___x_155_);
v___x_157_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__3, &l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___closed__3);
v___x_158_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_158_, 0, v___x_156_);
lean_ctor_set(v___x_158_, 1, v___x_157_);
v___x_159_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0___redArg(v___x_158_, v___y_147_, v___y_148_, v___y_149_, v___y_150_);
return v___x_159_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0___boxed(lean_object* v_constName_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0(v_constName_194_, v___y_195_, v___y_196_, v___y_197_, v___y_198_);
lean_dec(v___y_198_);
lean_dec_ref(v___y_197_);
lean_dec(v___y_196_);
lean_dec_ref(v___y_195_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_compatibleCtors(lean_object* v_ctorName_u2081_201_, lean_object* v_ctorName_u2082_202_, lean_object* v_a_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0(v_ctorName_u2081_201_, v_a_203_, v_a_204_, v_a_205_, v_a_206_);
if (lean_obj_tag(v___x_208_) == 0)
{
lean_object* v_a_209_; lean_object* v___x_210_; 
v_a_209_ = lean_ctor_get(v___x_208_, 0);
lean_inc(v_a_209_);
lean_dec_ref(v___x_208_);
v___x_210_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0(v_ctorName_u2082_202_, v_a_203_, v_a_204_, v_a_205_, v_a_206_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_252_; 
v_a_211_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_252_ == 0)
{
v___x_213_ = v___x_210_;
v_isShared_214_ = v_isSharedCheck_252_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_210_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_252_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v_toConstantVal_215_; lean_object* v_induct_216_; lean_object* v_toConstantVal_217_; lean_object* v_induct_218_; uint8_t v___x_219_; 
v_toConstantVal_215_ = lean_ctor_get(v_a_209_, 0);
lean_inc_ref(v_toConstantVal_215_);
v_induct_216_ = lean_ctor_get(v_a_209_, 1);
lean_inc(v_induct_216_);
lean_dec(v_a_209_);
v_toConstantVal_217_ = lean_ctor_get(v_a_211_, 0);
lean_inc_ref(v_toConstantVal_217_);
v_induct_218_ = lean_ctor_get(v_a_211_, 1);
lean_inc(v_induct_218_);
lean_dec(v_a_211_);
v___x_219_ = lean_name_eq(v_induct_216_, v_induct_218_);
lean_dec(v_induct_218_);
lean_dec(v_induct_216_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; lean_object* v___x_222_; 
lean_dec_ref(v_toConstantVal_217_);
lean_dec_ref(v_toConstantVal_215_);
v___x_220_ = lean_box(v___x_219_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 0, v___x_220_);
v___x_222_ = v___x_213_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_220_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
else
{
lean_object* v_type_224_; uint8_t v___x_225_; lean_object* v___x_226_; 
lean_del_object(v___x_213_);
v_type_224_ = lean_ctor_get(v_toConstantVal_215_, 2);
lean_inc_ref(v_type_224_);
lean_dec_ref(v_toConstantVal_215_);
v___x_225_ = 0;
v___x_226_ = l_Lean_Meta_forallMetaTelescope(v_type_224_, v___x_225_, v_a_203_, v_a_204_, v_a_205_, v_a_206_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v_a_227_; lean_object* v_snd_228_; lean_object* v_snd_229_; lean_object* v_type_230_; lean_object* v___x_231_; 
v_a_227_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_a_227_);
lean_dec_ref(v___x_226_);
v_snd_228_ = lean_ctor_get(v_a_227_, 1);
lean_inc(v_snd_228_);
lean_dec(v_a_227_);
v_snd_229_ = lean_ctor_get(v_snd_228_, 1);
lean_inc(v_snd_229_);
lean_dec(v_snd_228_);
v_type_230_ = lean_ctor_get(v_toConstantVal_217_, 2);
lean_inc_ref(v_type_230_);
lean_dec_ref(v_toConstantVal_217_);
v___x_231_ = l_Lean_Meta_forallMetaTelescope(v_type_230_, v___x_225_, v_a_203_, v_a_204_, v_a_205_, v_a_206_);
if (lean_obj_tag(v___x_231_) == 0)
{
lean_object* v_a_232_; lean_object* v_snd_233_; lean_object* v_snd_234_; lean_object* v___x_235_; 
v_a_232_ = lean_ctor_get(v___x_231_, 0);
lean_inc(v_a_232_);
lean_dec_ref(v___x_231_);
v_snd_233_ = lean_ctor_get(v_a_232_, 1);
lean_inc(v_snd_233_);
lean_dec(v_a_232_);
v_snd_234_ = lean_ctor_get(v_snd_233_, 1);
lean_inc(v_snd_234_);
lean_dec(v_snd_233_);
v___x_235_ = l_Lean_Meta_isExprDefEq(v_snd_229_, v_snd_234_, v_a_203_, v_a_204_, v_a_205_, v_a_206_);
return v___x_235_;
}
else
{
lean_object* v_a_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_243_; 
lean_dec(v_snd_229_);
v_a_236_ = lean_ctor_get(v___x_231_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_243_ == 0)
{
v___x_238_ = v___x_231_;
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_a_236_);
lean_dec(v___x_231_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_241_; 
if (v_isShared_239_ == 0)
{
v___x_241_ = v___x_238_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_a_236_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
else
{
lean_object* v_a_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_251_; 
lean_dec_ref(v_toConstantVal_217_);
v_a_244_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_251_ == 0)
{
v___x_246_ = v___x_226_;
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_a_244_);
lean_dec(v___x_226_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v___x_249_; 
if (v_isShared_247_ == 0)
{
v___x_249_ = v___x_246_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v_a_244_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
}
}
}
else
{
lean_object* v_a_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_260_; 
lean_dec(v_a_209_);
v_a_253_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_260_ == 0)
{
v___x_255_ = v___x_210_;
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_a_253_);
lean_dec(v___x_210_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_258_; 
if (v_isShared_256_ == 0)
{
v___x_258_ = v___x_255_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_a_253_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
else
{
lean_object* v_a_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_268_; 
lean_dec(v_ctorName_u2082_202_);
v_a_261_ = lean_ctor_get(v___x_208_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_208_);
if (v_isSharedCheck_268_ == 0)
{
v___x_263_ = v___x_208_;
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_a_261_);
lean_dec(v___x_208_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_a_261_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_compatibleCtors___boxed(lean_object* v_ctorName_u2081_269_, lean_object* v_ctorName_u2082_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Lean_Meta_compatibleCtors(v_ctorName_u2081_269_, v_ctorName_u2082_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_);
lean_dec(v_a_274_);
lean_dec_ref(v_a_273_);
lean_dec(v_a_272_);
lean_dec_ref(v_a_271_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0(lean_object* v_00_u03b1_277_, lean_object* v_msg_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0___redArg(v_msg_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0___boxed(lean_object* v_00_u03b1_285_, lean_object* v_msg_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_Meta_compatibleCtors_spec__0_spec__0(v_00_u03b1_285_, v_msg_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
return v_res_292_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Inductive(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Inductive(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Inductive(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Inductive(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Inductive(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Inductive(builtin);
}
#ifdef __cplusplus
}
#endif
