// Lean compiler output
// Module: Lean.Compiler.LCNF.EmitUtil
// Imports: public import Lean.Compiler.LCNF.CompilerM import Lean.Compiler.LCNF.PhaseExt import Lean.Compiler.InitAttr
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_getBuiltinInitFnNameFor_x3f(lean_object*, lean_object*);
lean_object* lean_get_init_fn_name_for(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
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
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
uint8_t l_Lean_instBEqIRPhases_beq(uint8_t, uint8_t);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__0;
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__1;
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__2;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_visitCode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_visitCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_collectUsedDecls___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_collectUsedDecls___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_collectUsedDecls___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_collectUsedDecls___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_collectUsedDecls(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_collectUsedDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_usesModuleFrom_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_usesModuleFrom_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_usesModuleFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_usesModuleFrom___boxed(lean_object*, lean_object*);
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_instMonadEIO(lean_box(0));
return v___x_1_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__1(void){
_start:
{
lean_object* v___f_2_; 
v___f_2_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_2_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__2(void){
_start:
{
lean_object* v___f_3_; 
v___f_3_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_3_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2(lean_object* v_msg_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v_toApplicative_11_; lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_43_; 
v___x_9_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__0);
v___x_10_ = l_StateRefT_x27_instMonad___redArg(v___x_9_);
v_toApplicative_11_ = lean_ctor_get(v___x_10_, 0);
v_isSharedCheck_43_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_43_ == 0)
{
lean_object* v_unused_44_; 
v_unused_44_ = lean_ctor_get(v___x_10_, 1);
lean_dec(v_unused_44_);
v___x_13_ = v___x_10_;
v_isShared_14_ = v_isSharedCheck_43_;
goto v_resetjp_12_;
}
else
{
lean_inc(v_toApplicative_11_);
lean_dec(v___x_10_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_43_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v_toFunctor_15_; lean_object* v_toSeq_16_; lean_object* v_toSeqLeft_17_; lean_object* v_toSeqRight_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_41_; 
v_toFunctor_15_ = lean_ctor_get(v_toApplicative_11_, 0);
v_toSeq_16_ = lean_ctor_get(v_toApplicative_11_, 2);
v_toSeqLeft_17_ = lean_ctor_get(v_toApplicative_11_, 3);
v_toSeqRight_18_ = lean_ctor_get(v_toApplicative_11_, 4);
v_isSharedCheck_41_ = !lean_is_exclusive(v_toApplicative_11_);
if (v_isSharedCheck_41_ == 0)
{
lean_object* v_unused_42_; 
v_unused_42_ = lean_ctor_get(v_toApplicative_11_, 1);
lean_dec(v_unused_42_);
v___x_20_ = v_toApplicative_11_;
v_isShared_21_ = v_isSharedCheck_41_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_toSeqRight_18_);
lean_inc(v_toSeqLeft_17_);
lean_inc(v_toSeq_16_);
lean_inc(v_toFunctor_15_);
lean_dec(v_toApplicative_11_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_41_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v___f_22_; lean_object* v___f_23_; lean_object* v___f_24_; lean_object* v___f_25_; lean_object* v___x_26_; lean_object* v___f_27_; lean_object* v___f_28_; lean_object* v___f_29_; lean_object* v___x_31_; 
v___f_22_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__1, &l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__1_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__1);
v___f_23_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__2, &l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__2_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__2);
lean_inc_ref(v_toFunctor_15_);
v___f_24_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_24_, 0, v_toFunctor_15_);
v___f_25_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_25_, 0, v_toFunctor_15_);
v___x_26_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_26_, 0, v___f_24_);
lean_ctor_set(v___x_26_, 1, v___f_25_);
v___f_27_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_27_, 0, v_toSeqRight_18_);
v___f_28_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_28_, 0, v_toSeqLeft_17_);
v___f_29_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_29_, 0, v_toSeq_16_);
if (v_isShared_21_ == 0)
{
lean_ctor_set(v___x_20_, 4, v___f_27_);
lean_ctor_set(v___x_20_, 3, v___f_28_);
lean_ctor_set(v___x_20_, 2, v___f_29_);
lean_ctor_set(v___x_20_, 1, v___f_22_);
lean_ctor_set(v___x_20_, 0, v___x_26_);
v___x_31_ = v___x_20_;
goto v_reusejp_30_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v___x_26_);
lean_ctor_set(v_reuseFailAlloc_40_, 1, v___f_22_);
lean_ctor_set(v_reuseFailAlloc_40_, 2, v___f_29_);
lean_ctor_set(v_reuseFailAlloc_40_, 3, v___f_28_);
lean_ctor_set(v_reuseFailAlloc_40_, 4, v___f_27_);
v___x_31_ = v_reuseFailAlloc_40_;
goto v_reusejp_30_;
}
v_reusejp_30_:
{
lean_object* v___x_33_; 
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 1, v___f_23_);
lean_ctor_set(v___x_13_, 0, v___x_31_);
v___x_33_ = v___x_13_;
goto v_reusejp_32_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v___x_31_);
lean_ctor_set(v_reuseFailAlloc_39_, 1, v___f_23_);
v___x_33_ = v_reuseFailAlloc_39_;
goto v_reusejp_32_;
}
v_reusejp_32_:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_6426__overap_37_; lean_object* v___x_38_; 
v___x_34_ = l_StateRefT_x27_instMonad___redArg(v___x_33_);
v___x_35_ = lean_box(0);
v___x_36_ = l_instInhabitedOfMonad___redArg(v___x_34_, v___x_35_);
v___x_6426__overap_37_ = lean_panic_fn_borrowed(v___x_36_, v_msg_4_);
lean_dec(v___x_36_);
lean_inc(v___y_7_);
lean_inc_ref(v___y_6_);
lean_inc(v___y_5_);
v___x_38_ = lean_apply_4(v___x_6426__overap_37_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_38_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___boxed(lean_object* v_msg_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2(v_msg_45_, v___y_46_, v___y_47_, v___y_48_);
lean_dec(v___y_48_);
lean_dec_ref(v___y_47_);
lean_dec(v___y_46_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___redArg(lean_object* v_f_51_, lean_object* v_v_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
if (lean_obj_tag(v_v_52_) == 0)
{
lean_object* v_code_57_; lean_object* v___x_58_; 
v_code_57_ = lean_ctor_get(v_v_52_, 0);
lean_inc_ref(v_code_57_);
lean_dec_ref(v_v_52_);
lean_inc(v___y_55_);
lean_inc_ref(v___y_54_);
lean_inc(v___y_53_);
v___x_58_ = lean_apply_5(v_f_51_, v_code_57_, v___y_53_, v___y_54_, v___y_55_, lean_box(0));
return v___x_58_;
}
else
{
lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_66_; 
lean_dec_ref(v_f_51_);
v_isSharedCheck_66_ = !lean_is_exclusive(v_v_52_);
if (v_isSharedCheck_66_ == 0)
{
lean_object* v_unused_67_; 
v_unused_67_ = lean_ctor_get(v_v_52_, 0);
lean_dec(v_unused_67_);
v___x_60_ = v_v_52_;
v_isShared_61_ = v_isSharedCheck_66_;
goto v_resetjp_59_;
}
else
{
lean_dec(v_v_52_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_66_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_62_; lean_object* v___x_64_; 
v___x_62_ = lean_box(0);
if (v_isShared_61_ == 0)
{
lean_ctor_set_tag(v___x_60_, 0);
lean_ctor_set(v___x_60_, 0, v___x_62_);
v___x_64_ = v___x_60_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v___x_62_);
v___x_64_ = v_reuseFailAlloc_65_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
return v___x_64_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___redArg___boxed(lean_object* v_f_68_, lean_object* v_v_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___redArg(v_f_68_, v_v_69_, v___y_70_, v___y_71_, v___y_72_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
lean_dec(v___y_70_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___lam__0___boxed(lean_object* v___x_75_, lean_object* v_x_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
uint8_t v___x_7254__boxed_81_; lean_object* v_res_82_; 
v___x_7254__boxed_81_ = lean_unbox(v___x_75_);
v_res_82_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___lam__0(v___x_7254__boxed_81_, v_x_76_, v___y_77_, v___y_78_, v___y_79_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
lean_dec(v___y_77_);
return v_res_82_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__0(void){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = lean_mk_string_unchecked("Lean.Compiler.LCNF.EmitUtil", 27, 27);
return v___x_83_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__1(void){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = lean_mk_string_unchecked("_private.Lean.Compiler.LCNF.EmitUtil.0.Lean.Compiler.LCNF.collectUsedDecls.go", 77, 77);
return v___x_84_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__2(void){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = lean_mk_string_unchecked("collectUsedDecls: could not find declaration or signature for '", 63, 63);
return v___x_85_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__3(void){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = lean_mk_string_unchecked("'", 1, 1);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3(lean_object* v_as_87_, size_t v_i_88_, size_t v_stop_89_, lean_object* v_b_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
lean_object* v_a_96_; lean_object* v___y_101_; uint8_t v___x_103_; 
v___x_103_ = lean_usize_dec_eq(v_i_88_, v_stop_89_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v_visited_106_; lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_104_ = lean_st_ref_get(v___y_93_);
lean_dec(v___x_104_);
v___x_105_ = lean_st_ref_get(v___y_91_);
v_visited_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_visited_106_);
lean_dec(v___x_105_);
v___x_107_ = lean_array_uget_borrowed(v_as_87_, v_i_88_);
v___x_108_ = l_Lean_NameSet_contains(v_visited_106_, v___x_107_);
lean_dec(v_visited_106_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v_visited_111_; lean_object* v_localDecls_112_; lean_object* v_extSigs_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_204_; 
v___x_109_ = lean_st_ref_get(v___y_93_);
lean_dec(v___x_109_);
v___x_110_ = lean_st_ref_take(v___y_91_);
v_visited_111_ = lean_ctor_get(v___x_110_, 0);
v_localDecls_112_ = lean_ctor_get(v___x_110_, 1);
v_extSigs_113_ = lean_ctor_get(v___x_110_, 2);
v_isSharedCheck_204_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_204_ == 0)
{
v___x_115_ = v___x_110_;
v_isShared_116_ = v_isSharedCheck_204_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_extSigs_113_);
lean_inc(v_localDecls_112_);
lean_inc(v_visited_111_);
lean_dec(v___x_110_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_204_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_117_; lean_object* v___x_119_; 
lean_inc(v___x_107_);
v___x_117_ = l_Lean_NameSet_insert(v_visited_111_, v___x_107_);
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 0, v___x_117_);
v___x_119_ = v___x_115_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v___x_117_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v_localDecls_112_);
lean_ctor_set(v_reuseFailAlloc_203_, 2, v_extSigs_113_);
v___x_119_ = v_reuseFailAlloc_203_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = lean_st_ref_set(v___y_91_, v___x_119_);
v___x_121_ = l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___redArg(v___x_107_, v___y_93_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v_a_122_; 
v_a_122_ = lean_ctor_get(v___x_121_, 0);
lean_inc(v_a_122_);
lean_dec_ref(v___x_121_);
if (lean_obj_tag(v_a_122_) == 1)
{
lean_object* v_val_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v_visited_126_; lean_object* v_localDecls_127_; lean_object* v_extSigs_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_156_; 
v_val_123_ = lean_ctor_get(v_a_122_, 0);
lean_inc(v_val_123_);
lean_dec_ref(v_a_122_);
v___x_124_ = lean_st_ref_get(v___y_93_);
lean_dec(v___x_124_);
v___x_125_ = lean_st_ref_take(v___y_91_);
v_visited_126_ = lean_ctor_get(v___x_125_, 0);
v_localDecls_127_ = lean_ctor_get(v___x_125_, 1);
v_extSigs_128_ = lean_ctor_get(v___x_125_, 2);
v_isSharedCheck_156_ = !lean_is_exclusive(v___x_125_);
if (v_isSharedCheck_156_ == 0)
{
v___x_130_ = v___x_125_;
v_isShared_131_ = v_isSharedCheck_156_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_extSigs_128_);
lean_inc(v_localDecls_127_);
lean_inc(v_visited_126_);
lean_dec(v___x_125_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_156_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_132_; lean_object* v___x_134_; 
lean_inc(v_val_123_);
v___x_132_ = lean_array_push(v_localDecls_127_, v_val_123_);
if (v_isShared_131_ == 0)
{
lean_ctor_set(v___x_130_, 1, v___x_132_);
v___x_134_ = v___x_130_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_visited_126_);
lean_ctor_set(v_reuseFailAlloc_155_, 1, v___x_132_);
lean_ctor_set(v_reuseFailAlloc_155_, 2, v_extSigs_128_);
v___x_134_ = v_reuseFailAlloc_155_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
lean_object* v___x_135_; lean_object* v_toSignature_136_; lean_object* v_value_137_; uint8_t v___x_138_; lean_object* v___x_139_; lean_object* v___f_140_; lean_object* v___x_141_; 
v___x_135_ = lean_st_ref_set(v___y_91_, v___x_134_);
v_toSignature_136_ = lean_ctor_get(v_val_123_, 0);
lean_inc_ref(v_toSignature_136_);
v_value_137_ = lean_ctor_get(v_val_123_, 1);
lean_inc_ref(v_value_137_);
lean_dec(v_val_123_);
v___x_138_ = 1;
v___x_139_ = lean_box(v___x_138_);
v___f_140_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___lam__0___boxed), 6, 1);
lean_closure_set(v___f_140_, 0, v___x_139_);
v___x_141_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___redArg(v___f_140_, v_value_137_, v___y_91_, v___y_92_, v___y_93_);
if (lean_obj_tag(v___x_141_) == 0)
{
lean_object* v___x_142_; lean_object* v___y_144_; lean_object* v_env_151_; lean_object* v_name_152_; lean_object* v___x_153_; 
lean_dec_ref(v___x_141_);
v___x_142_ = lean_st_ref_get(v___y_93_);
v_env_151_ = lean_ctor_get(v___x_142_, 0);
lean_inc_ref_n(v_env_151_, 2);
lean_dec(v___x_142_);
v_name_152_ = lean_ctor_get(v_toSignature_136_, 0);
lean_inc_n(v_name_152_, 2);
lean_dec_ref(v_toSignature_136_);
v___x_153_ = l_Lean_getBuiltinInitFnNameFor_x3f(v_env_151_, v_name_152_);
if (lean_obj_tag(v___x_153_) == 0)
{
lean_object* v___x_154_; 
v___x_154_ = lean_get_init_fn_name_for(v_env_151_, v_name_152_);
v___y_144_ = v___x_154_;
goto v___jp_143_;
}
else
{
lean_dec(v_name_152_);
lean_dec_ref(v_env_151_);
v___y_144_ = v___x_153_;
goto v___jp_143_;
}
v___jp_143_:
{
if (lean_obj_tag(v___y_144_) == 1)
{
lean_object* v_val_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v_val_145_ = lean_ctor_get(v___y_144_, 0);
lean_inc(v_val_145_);
lean_dec_ref(v___y_144_);
v___x_146_ = lean_unsigned_to_nat(1u);
v___x_147_ = lean_mk_empty_array_with_capacity(v___x_146_);
v___x_148_ = lean_array_push(v___x_147_, v_val_145_);
v___x_149_ = l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go(v___x_148_, v___y_91_, v___y_92_, v___y_93_);
lean_dec_ref(v___x_148_);
v___y_101_ = v___x_149_;
goto v___jp_100_;
}
else
{
lean_object* v___x_150_; 
lean_dec(v___y_144_);
v___x_150_ = lean_box(0);
v_a_96_ = v___x_150_;
goto v___jp_95_;
}
}
}
else
{
lean_dec_ref(v_toSignature_136_);
v___y_101_ = v___x_141_;
goto v___jp_100_;
}
}
}
}
else
{
lean_object* v___x_157_; 
lean_dec(v_a_122_);
lean_inc(v___x_107_);
v___x_157_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v___x_107_, v___y_93_);
if (lean_obj_tag(v___x_157_) == 0)
{
lean_object* v_a_158_; 
v_a_158_ = lean_ctor_get(v___x_157_, 0);
lean_inc(v_a_158_);
lean_dec_ref(v___x_157_);
if (lean_obj_tag(v_a_158_) == 1)
{
lean_object* v_val_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v_visited_162_; lean_object* v_localDecls_163_; lean_object* v_extSigs_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_174_; 
v_val_159_ = lean_ctor_get(v_a_158_, 0);
lean_inc(v_val_159_);
lean_dec_ref(v_a_158_);
v___x_160_ = lean_st_ref_get(v___y_93_);
lean_dec(v___x_160_);
v___x_161_ = lean_st_ref_take(v___y_91_);
v_visited_162_ = lean_ctor_get(v___x_161_, 0);
v_localDecls_163_ = lean_ctor_get(v___x_161_, 1);
v_extSigs_164_ = lean_ctor_get(v___x_161_, 2);
v_isSharedCheck_174_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_174_ == 0)
{
v___x_166_ = v___x_161_;
v_isShared_167_ = v_isSharedCheck_174_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_extSigs_164_);
lean_inc(v_localDecls_163_);
lean_inc(v_visited_162_);
lean_dec(v___x_161_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_174_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_168_; lean_object* v___x_170_; 
v___x_168_ = lean_array_push(v_extSigs_164_, v_val_159_);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 2, v___x_168_);
v___x_170_ = v___x_166_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v_visited_162_);
lean_ctor_set(v_reuseFailAlloc_173_, 1, v_localDecls_163_);
lean_ctor_set(v_reuseFailAlloc_173_, 2, v___x_168_);
v___x_170_ = v_reuseFailAlloc_173_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = lean_st_ref_set(v___y_91_, v___x_170_);
v___x_172_ = lean_box(0);
v_a_96_ = v___x_172_;
goto v___jp_95_;
}
}
}
else
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; uint8_t v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
lean_dec(v_a_158_);
v___x_175_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__0);
v___x_176_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__1);
v___x_177_ = lean_unsigned_to_nat(42u);
v___x_178_ = lean_unsigned_to_nat(8u);
v___x_179_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__2);
v___x_180_ = 1;
lean_inc(v___x_107_);
v___x_181_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_107_, v___x_180_);
v___x_182_ = lean_string_append(v___x_179_, v___x_181_);
lean_dec_ref(v___x_181_);
v___x_183_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__3);
v___x_184_ = lean_string_append(v___x_182_, v___x_183_);
v___x_185_ = l_mkPanicMessageWithDecl(v___x_175_, v___x_176_, v___x_177_, v___x_178_, v___x_184_);
lean_dec_ref(v___x_184_);
v___x_186_ = l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2(v___x_185_, v___y_91_, v___y_92_, v___y_93_);
v___y_101_ = v___x_186_;
goto v___jp_100_;
}
}
else
{
lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_194_; 
v_a_187_ = lean_ctor_get(v___x_157_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_194_ == 0)
{
v___x_189_ = v___x_157_;
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_dec(v___x_157_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_192_; 
if (v_isShared_190_ == 0)
{
v___x_192_ = v___x_189_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v_a_187_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
}
}
}
else
{
lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_202_; 
v_a_195_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_202_ == 0)
{
v___x_197_ = v___x_121_;
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_121_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_200_; 
if (v_isShared_198_ == 0)
{
v___x_200_ = v___x_197_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v_a_195_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
return v___x_200_;
}
}
}
}
}
}
else
{
lean_object* v___x_205_; 
v___x_205_ = lean_box(0);
v_a_96_ = v___x_205_;
goto v___jp_95_;
}
}
else
{
lean_object* v___x_206_; 
v___x_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_206_, 0, v_b_90_);
return v___x_206_;
}
v___jp_95_:
{
size_t v___x_97_; size_t v___x_98_; 
v___x_97_ = ((size_t)1ULL);
v___x_98_ = lean_usize_add(v_i_88_, v___x_97_);
v_i_88_ = v___x_98_;
v_b_90_ = v_a_96_;
goto _start;
}
v___jp_100_:
{
if (lean_obj_tag(v___y_101_) == 0)
{
lean_object* v_a_102_; 
v_a_102_ = lean_ctor_get(v___y_101_, 0);
lean_inc(v_a_102_);
lean_dec_ref(v___y_101_);
v_a_96_ = v_a_102_;
goto v___jp_95_;
}
else
{
return v___y_101_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go(lean_object* v_names_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; uint8_t v___x_215_; 
v___x_212_ = lean_unsigned_to_nat(0u);
v___x_213_ = lean_array_get_size(v_names_207_);
v___x_214_ = lean_box(0);
v___x_215_ = lean_nat_dec_lt(v___x_212_, v___x_213_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; 
v___x_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_216_, 0, v___x_214_);
return v___x_216_;
}
else
{
uint8_t v___x_217_; 
v___x_217_ = lean_nat_dec_le(v___x_213_, v___x_213_);
if (v___x_217_ == 0)
{
if (v___x_215_ == 0)
{
lean_object* v___x_218_; 
v___x_218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_218_, 0, v___x_214_);
return v___x_218_;
}
else
{
size_t v___x_219_; size_t v___x_220_; lean_object* v___x_221_; 
v___x_219_ = ((size_t)0ULL);
v___x_220_ = lean_usize_of_nat(v___x_213_);
v___x_221_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3(v_names_207_, v___x_219_, v___x_220_, v___x_214_, v_a_208_, v_a_209_, v_a_210_);
return v___x_221_;
}
}
else
{
size_t v___x_222_; size_t v___x_223_; lean_object* v___x_224_; 
v___x_222_ = ((size_t)0ULL);
v___x_223_ = lean_usize_of_nat(v___x_213_);
v___x_224_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3(v_names_207_, v___x_222_, v___x_223_, v___x_214_, v_a_208_, v_a_209_, v_a_210_);
return v___x_224_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_visitCode(lean_object* v_code_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_){
_start:
{
if (lean_obj_tag(v_code_225_) == 0)
{
lean_object* v_decl_230_; lean_object* v_value_231_; 
v_decl_230_ = lean_ctor_get(v_code_225_, 0);
lean_inc_ref(v_decl_230_);
lean_dec_ref(v_code_225_);
v_value_231_ = lean_ctor_get(v_decl_230_, 3);
lean_inc(v_value_231_);
lean_dec_ref(v_decl_230_);
switch(lean_obj_tag(v_value_231_))
{
case 3:
{
lean_object* v_declName_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v_declName_232_ = lean_ctor_get(v_value_231_, 0);
lean_inc(v_declName_232_);
lean_dec_ref(v_value_231_);
v___x_233_ = lean_unsigned_to_nat(1u);
v___x_234_ = lean_mk_empty_array_with_capacity(v___x_233_);
v___x_235_ = lean_array_push(v___x_234_, v_declName_232_);
v___x_236_ = l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go(v___x_235_, v_a_226_, v_a_227_, v_a_228_);
lean_dec_ref(v___x_235_);
return v___x_236_;
}
case 9:
{
lean_object* v_fn_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v_fn_237_ = lean_ctor_get(v_value_231_, 0);
lean_inc(v_fn_237_);
lean_dec_ref(v_value_231_);
v___x_238_ = lean_unsigned_to_nat(1u);
v___x_239_ = lean_mk_empty_array_with_capacity(v___x_238_);
v___x_240_ = lean_array_push(v___x_239_, v_fn_237_);
v___x_241_ = l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go(v___x_240_, v_a_226_, v_a_227_, v_a_228_);
lean_dec_ref(v___x_240_);
return v___x_241_;
}
case 10:
{
lean_object* v_fn_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v_fn_242_ = lean_ctor_get(v_value_231_, 0);
lean_inc(v_fn_242_);
lean_dec_ref(v_value_231_);
v___x_243_ = lean_unsigned_to_nat(1u);
v___x_244_ = lean_mk_empty_array_with_capacity(v___x_243_);
v___x_245_ = lean_array_push(v___x_244_, v_fn_242_);
v___x_246_ = l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go(v___x_245_, v_a_226_, v_a_227_, v_a_228_);
lean_dec_ref(v___x_245_);
return v___x_246_;
}
default: 
{
lean_object* v___x_247_; lean_object* v___x_248_; 
lean_dec(v_value_231_);
v___x_247_ = lean_box(0);
v___x_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
return v___x_248_;
}
}
}
else
{
lean_object* v___x_249_; lean_object* v___x_250_; 
lean_dec_ref(v_code_225_);
v___x_249_ = lean_box(0);
v___x_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_250_, 0, v___x_249_);
return v___x_250_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0_spec__1(uint8_t v_pu_251_, lean_object* v_as_252_, size_t v_i_253_, size_t v_stop_254_, lean_object* v_b_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
lean_object* v___y_261_; uint8_t v___x_266_; 
v___x_266_ = lean_usize_dec_eq(v_i_253_, v_stop_254_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; 
v___x_267_ = lean_array_uget_borrowed(v_as_252_, v_i_253_);
switch(lean_obj_tag(v___x_267_))
{
case 0:
{
lean_object* v_code_268_; lean_object* v___x_269_; 
v_code_268_ = lean_ctor_get(v___x_267_, 2);
lean_inc_ref(v_code_268_);
v___x_269_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(v_pu_251_, v_code_268_, v___y_256_, v___y_257_, v___y_258_);
v___y_261_ = v___x_269_;
goto v___jp_260_;
}
case 1:
{
lean_object* v_code_270_; lean_object* v___x_271_; 
v_code_270_ = lean_ctor_get(v___x_267_, 1);
lean_inc_ref(v_code_270_);
v___x_271_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(v_pu_251_, v_code_270_, v___y_256_, v___y_257_, v___y_258_);
v___y_261_ = v___x_271_;
goto v___jp_260_;
}
default: 
{
lean_object* v_code_272_; lean_object* v___x_273_; 
v_code_272_ = lean_ctor_get(v___x_267_, 0);
lean_inc_ref(v_code_272_);
v___x_273_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(v_pu_251_, v_code_272_, v___y_256_, v___y_257_, v___y_258_);
v___y_261_ = v___x_273_;
goto v___jp_260_;
}
}
}
else
{
lean_object* v___x_274_; 
v___x_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_274_, 0, v_b_255_);
return v___x_274_;
}
v___jp_260_:
{
if (lean_obj_tag(v___y_261_) == 0)
{
lean_object* v_a_262_; size_t v___x_263_; size_t v___x_264_; 
v_a_262_ = lean_ctor_get(v___y_261_, 0);
lean_inc(v_a_262_);
lean_dec_ref(v___y_261_);
v___x_263_ = ((size_t)1ULL);
v___x_264_ = lean_usize_add(v_i_253_, v___x_263_);
v_i_253_ = v___x_264_;
v_b_255_ = v_a_262_;
goto _start;
}
else
{
return v___y_261_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(uint8_t v_pu_275_, lean_object* v_c_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
lean_object* v___x_281_; 
lean_inc_ref(v_c_276_);
v___x_281_ = l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_visitCode(v_c_276_, v___y_277_, v___y_278_, v___y_279_);
if (lean_obj_tag(v___x_281_) == 0)
{
lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_334_; 
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_281_);
if (v_isSharedCheck_334_ == 0)
{
lean_object* v_unused_335_; 
v_unused_335_ = lean_ctor_get(v___x_281_, 0);
lean_dec(v_unused_335_);
v___x_283_ = v___x_281_;
v_isShared_284_ = v_isSharedCheck_334_;
goto v_resetjp_282_;
}
else
{
lean_dec(v___x_281_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_334_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
switch(lean_obj_tag(v_c_276_))
{
case 0:
{
lean_object* v_k_285_; 
lean_del_object(v___x_283_);
v_k_285_ = lean_ctor_get(v_c_276_, 1);
lean_inc_ref(v_k_285_);
lean_dec_ref(v_c_276_);
v_c_276_ = v_k_285_;
goto _start;
}
case 1:
{
lean_object* v_decl_287_; lean_object* v_k_288_; lean_object* v_value_289_; lean_object* v___x_290_; 
lean_del_object(v___x_283_);
v_decl_287_ = lean_ctor_get(v_c_276_, 0);
lean_inc_ref(v_decl_287_);
v_k_288_ = lean_ctor_get(v_c_276_, 1);
lean_inc_ref(v_k_288_);
lean_dec_ref(v_c_276_);
v_value_289_ = lean_ctor_get(v_decl_287_, 4);
lean_inc_ref(v_value_289_);
lean_dec_ref(v_decl_287_);
v___x_290_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(v_pu_275_, v_value_289_, v___y_277_, v___y_278_, v___y_279_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_dec_ref(v___x_290_);
v_c_276_ = v_k_288_;
goto _start;
}
else
{
lean_dec_ref(v_k_288_);
return v___x_290_;
}
}
case 2:
{
lean_object* v_decl_292_; lean_object* v_k_293_; lean_object* v_value_294_; lean_object* v___x_295_; 
lean_del_object(v___x_283_);
v_decl_292_ = lean_ctor_get(v_c_276_, 0);
lean_inc_ref(v_decl_292_);
v_k_293_ = lean_ctor_get(v_c_276_, 1);
lean_inc_ref(v_k_293_);
lean_dec_ref(v_c_276_);
v_value_294_ = lean_ctor_get(v_decl_292_, 4);
lean_inc_ref(v_value_294_);
lean_dec_ref(v_decl_292_);
v___x_295_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(v_pu_275_, v_value_294_, v___y_277_, v___y_278_, v___y_279_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_dec_ref(v___x_295_);
v_c_276_ = v_k_293_;
goto _start;
}
else
{
lean_dec_ref(v_k_293_);
return v___x_295_;
}
}
case 4:
{
lean_object* v_cases_297_; lean_object* v_alts_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; uint8_t v___x_302_; 
v_cases_297_ = lean_ctor_get(v_c_276_, 0);
lean_inc_ref(v_cases_297_);
lean_dec_ref(v_c_276_);
v_alts_298_ = lean_ctor_get(v_cases_297_, 3);
lean_inc_ref(v_alts_298_);
lean_dec_ref(v_cases_297_);
v___x_299_ = lean_unsigned_to_nat(0u);
v___x_300_ = lean_array_get_size(v_alts_298_);
v___x_301_ = lean_box(0);
v___x_302_ = lean_nat_dec_lt(v___x_299_, v___x_300_);
if (v___x_302_ == 0)
{
lean_object* v___x_304_; 
lean_dec_ref(v_alts_298_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 0, v___x_301_);
v___x_304_ = v___x_283_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_301_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
else
{
uint8_t v___x_306_; 
v___x_306_ = lean_nat_dec_le(v___x_300_, v___x_300_);
if (v___x_306_ == 0)
{
if (v___x_302_ == 0)
{
lean_object* v___x_308_; 
lean_dec_ref(v_alts_298_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 0, v___x_301_);
v___x_308_ = v___x_283_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v___x_301_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
else
{
size_t v___x_310_; size_t v___x_311_; lean_object* v___x_312_; 
lean_del_object(v___x_283_);
v___x_310_ = ((size_t)0ULL);
v___x_311_ = lean_usize_of_nat(v___x_300_);
v___x_312_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0_spec__1(v_pu_275_, v_alts_298_, v___x_310_, v___x_311_, v___x_301_, v___y_277_, v___y_278_, v___y_279_);
lean_dec_ref(v_alts_298_);
return v___x_312_;
}
}
else
{
size_t v___x_313_; size_t v___x_314_; lean_object* v___x_315_; 
lean_del_object(v___x_283_);
v___x_313_ = ((size_t)0ULL);
v___x_314_ = lean_usize_of_nat(v___x_300_);
v___x_315_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0_spec__1(v_pu_275_, v_alts_298_, v___x_313_, v___x_314_, v___x_301_, v___y_277_, v___y_278_, v___y_279_);
lean_dec_ref(v_alts_298_);
return v___x_315_;
}
}
}
case 7:
{
lean_object* v_k_316_; 
lean_del_object(v___x_283_);
v_k_316_ = lean_ctor_get(v_c_276_, 3);
lean_inc_ref(v_k_316_);
lean_dec_ref(v_c_276_);
v_c_276_ = v_k_316_;
goto _start;
}
case 8:
{
lean_object* v_k_318_; 
lean_del_object(v___x_283_);
v_k_318_ = lean_ctor_get(v_c_276_, 3);
lean_inc_ref(v_k_318_);
lean_dec_ref(v_c_276_);
v_c_276_ = v_k_318_;
goto _start;
}
case 9:
{
lean_object* v_k_320_; 
lean_del_object(v___x_283_);
v_k_320_ = lean_ctor_get(v_c_276_, 5);
lean_inc_ref(v_k_320_);
lean_dec_ref(v_c_276_);
v_c_276_ = v_k_320_;
goto _start;
}
case 10:
{
lean_object* v_k_322_; 
lean_del_object(v___x_283_);
v_k_322_ = lean_ctor_get(v_c_276_, 2);
lean_inc_ref(v_k_322_);
lean_dec_ref(v_c_276_);
v_c_276_ = v_k_322_;
goto _start;
}
case 11:
{
lean_object* v_k_324_; 
lean_del_object(v___x_283_);
v_k_324_ = lean_ctor_get(v_c_276_, 2);
lean_inc_ref(v_k_324_);
lean_dec_ref(v_c_276_);
v_c_276_ = v_k_324_;
goto _start;
}
case 12:
{
lean_object* v_k_326_; 
lean_del_object(v___x_283_);
v_k_326_ = lean_ctor_get(v_c_276_, 2);
lean_inc_ref(v_k_326_);
lean_dec_ref(v_c_276_);
v_c_276_ = v_k_326_;
goto _start;
}
case 13:
{
lean_object* v_k_328_; 
lean_del_object(v___x_283_);
v_k_328_ = lean_ctor_get(v_c_276_, 1);
lean_inc_ref(v_k_328_);
lean_dec_ref(v_c_276_);
v_c_276_ = v_k_328_;
goto _start;
}
default: 
{
lean_object* v___x_330_; lean_object* v___x_332_; 
lean_dec_ref(v_c_276_);
v___x_330_ = lean_box(0);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 0, v___x_330_);
v___x_332_ = v___x_283_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v___x_330_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
}
}
else
{
lean_dec_ref(v_c_276_);
return v___x_281_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___lam__0(uint8_t v___x_336_, lean_object* v_x_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(v___x_336_, v_x_337_, v___y_338_, v___y_339_, v___y_340_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0_spec__1___boxed(lean_object* v_pu_343_, lean_object* v_as_344_, lean_object* v_i_345_, lean_object* v_stop_346_, lean_object* v_b_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_){
_start:
{
uint8_t v_pu_boxed_352_; size_t v_i_boxed_353_; size_t v_stop_boxed_354_; lean_object* v_res_355_; 
v_pu_boxed_352_ = lean_unbox(v_pu_343_);
v_i_boxed_353_ = lean_unbox_usize(v_i_345_);
lean_dec(v_i_345_);
v_stop_boxed_354_ = lean_unbox_usize(v_stop_346_);
lean_dec(v_stop_346_);
v_res_355_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0_spec__1(v_pu_boxed_352_, v_as_344_, v_i_boxed_353_, v_stop_boxed_354_, v_b_347_, v___y_348_, v___y_349_, v___y_350_);
lean_dec(v___y_350_);
lean_dec_ref(v___y_349_);
lean_dec(v___y_348_);
lean_dec_ref(v_as_344_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go___boxed(lean_object* v_names_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go(v_names_356_, v_a_357_, v_a_358_, v_a_359_);
lean_dec(v_a_359_);
lean_dec_ref(v_a_358_);
lean_dec(v_a_357_);
lean_dec_ref(v_names_356_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_visitCode___boxed(lean_object* v_code_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_visitCode(v_code_362_, v_a_363_, v_a_364_, v_a_365_);
lean_dec(v_a_365_);
lean_dec_ref(v_a_364_);
lean_dec(v_a_363_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0___boxed(lean_object* v_pu_368_, lean_object* v_c_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_){
_start:
{
uint8_t v_pu_boxed_374_; lean_object* v_res_375_; 
v_pu_boxed_374_ = lean_unbox(v_pu_368_);
v_res_375_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(v_pu_boxed_374_, v_c_369_, v___y_370_, v___y_371_, v___y_372_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
lean_dec(v___y_370_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___boxed(lean_object* v_as_376_, lean_object* v_i_377_, lean_object* v_stop_378_, lean_object* v_b_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_){
_start:
{
size_t v_i_boxed_384_; size_t v_stop_boxed_385_; lean_object* v_res_386_; 
v_i_boxed_384_ = lean_unbox_usize(v_i_377_);
lean_dec(v_i_377_);
v_stop_boxed_385_ = lean_unbox_usize(v_stop_378_);
lean_dec(v_stop_378_);
v_res_386_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3(v_as_376_, v_i_boxed_384_, v_stop_boxed_385_, v_b_379_, v___y_380_, v___y_381_, v___y_382_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
lean_dec(v___y_380_);
lean_dec_ref(v_as_376_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1(uint8_t v_pu_387_, lean_object* v_f_388_, lean_object* v_v_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___redArg(v_f_388_, v_v_389_, v___y_390_, v___y_391_, v___y_392_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___boxed(lean_object* v_pu_395_, lean_object* v_f_396_, lean_object* v_v_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_){
_start:
{
uint8_t v_pu_boxed_402_; lean_object* v_res_403_; 
v_pu_boxed_402_ = lean_unbox(v_pu_395_);
v_res_403_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1(v_pu_boxed_402_, v_f_396_, v_v_397_, v___y_398_, v___y_399_, v___y_400_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
lean_dec(v___y_398_);
return v_res_403_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_collectUsedDecls___closed__0(void){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_404_ = lean_unsigned_to_nat(0u);
v___x_405_ = lean_mk_empty_array_with_capacity(v___x_404_);
return v___x_405_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_collectUsedDecls___closed__1(void){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_406_ = lean_obj_once(&l_Lean_Compiler_LCNF_collectUsedDecls___closed__0, &l_Lean_Compiler_LCNF_collectUsedDecls___closed__0_once, _init_l_Lean_Compiler_LCNF_collectUsedDecls___closed__0);
v___x_407_ = l_Lean_NameSet_empty;
v___x_408_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_408_, 0, v___x_407_);
lean_ctor_set(v___x_408_, 1, v___x_406_);
lean_ctor_set(v___x_408_, 2, v___x_406_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_collectUsedDecls(lean_object* v_decls_409_, lean_object* v_a_410_, lean_object* v_a_411_){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_413_ = lean_st_ref_get(v_a_411_);
lean_dec(v___x_413_);
v___x_414_ = lean_obj_once(&l_Lean_Compiler_LCNF_collectUsedDecls___closed__1, &l_Lean_Compiler_LCNF_collectUsedDecls___closed__1_once, _init_l_Lean_Compiler_LCNF_collectUsedDecls___closed__1);
v___x_415_ = lean_st_mk_ref(v___x_414_);
v___x_416_ = l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go(v_decls_409_, v___x_415_, v_a_410_, v_a_411_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_428_; 
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_428_ == 0)
{
lean_object* v_unused_429_; 
v_unused_429_ = lean_ctor_get(v___x_416_, 0);
lean_dec(v_unused_429_);
v___x_418_ = v___x_416_;
v_isShared_419_ = v_isSharedCheck_428_;
goto v_resetjp_417_;
}
else
{
lean_dec(v___x_416_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_428_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v_localDecls_422_; lean_object* v_extSigs_423_; lean_object* v___x_424_; lean_object* v___x_426_; 
v___x_420_ = lean_st_ref_get(v_a_411_);
lean_dec(v___x_420_);
v___x_421_ = lean_st_ref_get(v___x_415_);
lean_dec(v___x_415_);
v_localDecls_422_ = lean_ctor_get(v___x_421_, 1);
lean_inc_ref(v_localDecls_422_);
v_extSigs_423_ = lean_ctor_get(v___x_421_, 2);
lean_inc_ref(v_extSigs_423_);
lean_dec(v___x_421_);
v___x_424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_424_, 0, v_localDecls_422_);
lean_ctor_set(v___x_424_, 1, v_extSigs_423_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v___x_424_);
v___x_426_ = v___x_418_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v___x_424_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
else
{
lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_437_; 
lean_dec(v___x_415_);
v_a_430_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_437_ == 0)
{
v___x_432_ = v___x_416_;
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_dec(v___x_416_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_a_430_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_collectUsedDecls___boxed(lean_object* v_decls_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Lean_Compiler_LCNF_collectUsedDecls(v_decls_438_, v_a_439_, v_a_440_);
lean_dec(v_a_440_);
lean_dec_ref(v_a_439_);
lean_dec_ref(v_decls_438_);
return v_res_442_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_usesModuleFrom_spec__0(lean_object* v_modulePrefix_443_, lean_object* v_as_444_, size_t v_i_445_, size_t v_stop_446_){
_start:
{
uint8_t v___x_447_; 
v___x_447_ = lean_usize_dec_eq(v_i_445_, v_stop_446_);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; lean_object* v_toImport_449_; uint8_t v_irPhases_450_; uint8_t v___x_451_; uint8_t v___y_453_; uint8_t v___x_457_; uint8_t v___x_458_; 
v___x_448_ = lean_array_uget_borrowed(v_as_444_, v_i_445_);
v_toImport_449_ = lean_ctor_get(v___x_448_, 0);
v_irPhases_450_ = lean_ctor_get_uint8(v___x_448_, sizeof(void*)*1);
v___x_451_ = 1;
v___x_457_ = 1;
v___x_458_ = l_Lean_instBEqIRPhases_beq(v_irPhases_450_, v___x_457_);
if (v___x_458_ == 0)
{
lean_object* v_module_459_; uint8_t v___x_460_; 
v_module_459_ = lean_ctor_get(v_toImport_449_, 0);
v___x_460_ = l_Lean_Name_isPrefixOf(v_modulePrefix_443_, v_module_459_);
v___y_453_ = v___x_460_;
goto v___jp_452_;
}
else
{
v___y_453_ = v___x_447_;
goto v___jp_452_;
}
v___jp_452_:
{
if (v___y_453_ == 0)
{
size_t v___x_454_; size_t v___x_455_; 
v___x_454_ = ((size_t)1ULL);
v___x_455_ = lean_usize_add(v_i_445_, v___x_454_);
v_i_445_ = v___x_455_;
goto _start;
}
else
{
return v___x_451_;
}
}
}
else
{
uint8_t v___x_461_; 
v___x_461_ = 0;
return v___x_461_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_usesModuleFrom_spec__0___boxed(lean_object* v_modulePrefix_462_, lean_object* v_as_463_, lean_object* v_i_464_, lean_object* v_stop_465_){
_start:
{
size_t v_i_boxed_466_; size_t v_stop_boxed_467_; uint8_t v_res_468_; lean_object* v_r_469_; 
v_i_boxed_466_ = lean_unbox_usize(v_i_464_);
lean_dec(v_i_464_);
v_stop_boxed_467_ = lean_unbox_usize(v_stop_465_);
lean_dec(v_stop_465_);
v_res_468_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_usesModuleFrom_spec__0(v_modulePrefix_462_, v_as_463_, v_i_boxed_466_, v_stop_boxed_467_);
lean_dec_ref(v_as_463_);
lean_dec(v_modulePrefix_462_);
v_r_469_ = lean_box(v_res_468_);
return v_r_469_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_usesModuleFrom(lean_object* v_env_470_, lean_object* v_modulePrefix_471_){
_start:
{
lean_object* v___x_472_; lean_object* v_modules_473_; lean_object* v___x_474_; lean_object* v___x_475_; uint8_t v___x_476_; 
v___x_472_ = l_Lean_Environment_header(v_env_470_);
v_modules_473_ = lean_ctor_get(v___x_472_, 3);
lean_inc_ref(v_modules_473_);
lean_dec_ref(v___x_472_);
v___x_474_ = lean_unsigned_to_nat(0u);
v___x_475_ = lean_array_get_size(v_modules_473_);
v___x_476_ = lean_nat_dec_lt(v___x_474_, v___x_475_);
if (v___x_476_ == 0)
{
lean_dec_ref(v_modules_473_);
return v___x_476_;
}
else
{
if (v___x_476_ == 0)
{
lean_dec_ref(v_modules_473_);
return v___x_476_;
}
else
{
size_t v___x_477_; size_t v___x_478_; uint8_t v___x_479_; 
v___x_477_ = ((size_t)0ULL);
v___x_478_ = lean_usize_of_nat(v___x_475_);
v___x_479_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_usesModuleFrom_spec__0(v_modulePrefix_471_, v_modules_473_, v___x_477_, v___x_478_);
lean_dec_ref(v_modules_473_);
return v___x_479_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_usesModuleFrom___boxed(lean_object* v_env_480_, lean_object* v_modulePrefix_481_){
_start:
{
uint8_t v_res_482_; lean_object* v_r_483_; 
v_res_482_ = l_Lean_Compiler_LCNF_usesModuleFrom(v_env_480_, v_modulePrefix_481_);
lean_dec(v_modulePrefix_481_);
lean_dec_ref(v_env_480_);
v_r_483_ = lean_box(v_res_482_);
return v_r_483_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_InitAttr(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_EmitUtil(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_EmitUtil(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_InitAttr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_EmitUtil(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_EmitUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_EmitUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_EmitUtil(builtin);
}
#ifdef __cplusplus
}
#endif
