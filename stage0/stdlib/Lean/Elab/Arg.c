// Lean compiler output
// Module: Lean.Elab.Arg
// Imports: public import Lean.Elab.Term
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
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_stx_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_stx_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_expr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_expr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Term_instInhabitedArg_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_instInhabitedArg_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instInhabitedArg_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instInhabitedArg;
static lean_once_cell_t l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instInhabitedNamedArg_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instInhabitedNamedArg;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instToMessageDataArg___lam__0(lean_object*);
static lean_once_cell_t l_Lean_Elab_Term_instToMessageDataArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_instToMessageDataArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instToMessageDataArg;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_addNamedArg_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_addNamedArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Term_addNamedArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_addNamedArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Term_addNamedArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_addNamedArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Term_addNamedArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_addNamedArg___closed__2;
static lean_once_cell_t l_Lean_Elab_Term_addNamedArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_addNamedArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_addNamedArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_addNamedArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__4;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__5;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__7;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__8;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Term_expandArgs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_expandArgs___closed__0;
static lean_once_cell_t l_Lean_Elab_Term_expandArgs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_expandArgs___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Elab_Term_Arg_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_val_8_; lean_object* v___x_9_; 
v_val_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_val_8_);
lean_dec_ref(v_t_6_);
v___x_9_ = lean_apply_1(v_k_7_, v_val_8_);
return v___x_9_;
}
else
{
lean_object* v_val_10_; lean_object* v___x_11_; 
v_val_10_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_val_10_);
lean_dec_ref(v_t_6_);
v___x_11_ = lean_apply_1(v_k_7_, v_val_10_);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorElim(lean_object* v_motive_12_, lean_object* v_ctorIdx_13_, lean_object* v_t_14_, lean_object* v_h_15_, lean_object* v_k_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_Elab_Term_Arg_ctorElim___redArg(v_t_14_, v_k_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_ctorElim___boxed(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_Elab_Term_Arg_ctorElim(v_motive_18_, v_ctorIdx_19_, v_t_20_, v_h_21_, v_k_22_);
lean_dec(v_ctorIdx_19_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_stx_elim___redArg(lean_object* v_t_24_, lean_object* v_stx_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Lean_Elab_Term_Arg_ctorElim___redArg(v_t_24_, v_stx_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_stx_elim(lean_object* v_motive_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_stx_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Elab_Term_Arg_ctorElim___redArg(v_t_28_, v_stx_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_expr_elim___redArg(lean_object* v_t_32_, lean_object* v_expr_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_Elab_Term_Arg_ctorElim___redArg(v_t_32_, v_expr_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Arg_expr_elim(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_expr_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Elab_Term_Arg_ctorElim___redArg(v_t_36_, v_expr_38_);
return v___x_39_;
}
}
static lean_object* _init_l_Lean_Elab_Term_instInhabitedArg_default___closed__0(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_box(0);
v___x_41_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_Elab_Term_instInhabitedArg_default(void){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lean_obj_once(&l_Lean_Elab_Term_instInhabitedArg_default___closed__0, &l_Lean_Elab_Term_instInhabitedArg_default___closed__0_once, _init_l_Lean_Elab_Term_instInhabitedArg_default___closed__0);
return v___x_42_;
}
}
static lean_object* _init_l_Lean_Elab_Term_instInhabitedArg(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_Elab_Term_instInhabitedArg_default;
return v___x_43_;
}
}
static lean_object* _init_l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__0(void){
_start:
{
uint8_t v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_44_ = 0;
v___x_45_ = l_Lean_Elab_Term_instInhabitedArg_default;
v___x_46_ = lean_box(0);
v___x_47_ = lean_box(0);
v___x_48_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v___x_46_);
lean_ctor_set(v___x_48_, 2, v___x_45_);
lean_ctor_set_uint8(v___x_48_, sizeof(void*)*3, v___x_44_);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_Elab_Term_instInhabitedNamedArg_default(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_obj_once(&l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__0, &l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__0_once, _init_l_Lean_Elab_Term_instInhabitedNamedArg_default___closed__0);
return v___x_49_;
}
}
static lean_object* _init_l_Lean_Elab_Term_instInhabitedNamedArg(void){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_Elab_Term_instInhabitedNamedArg_default;
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_instToMessageDataArg___lam__0(lean_object* v_x_51_){
_start:
{
if (lean_obj_tag(v_x_51_) == 0)
{
lean_object* v_val_52_; lean_object* v___x_53_; 
v_val_52_ = lean_ctor_get(v_x_51_, 0);
lean_inc(v_val_52_);
lean_dec_ref(v_x_51_);
v___x_53_ = l_Lean_MessageData_ofSyntax(v_val_52_);
return v___x_53_;
}
else
{
lean_object* v_val_54_; lean_object* v___x_55_; 
v_val_54_ = lean_ctor_get(v_x_51_, 0);
lean_inc_ref(v_val_54_);
lean_dec_ref(v_x_51_);
v___x_55_ = l_Lean_MessageData_ofExpr(v_val_54_);
return v___x_55_;
}
}
}
static lean_object* _init_l_Lean_Elab_Term_instToMessageDataArg___closed__0(void){
_start:
{
lean_object* v___f_56_; 
v___f_56_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_instToMessageDataArg___lam__0), 1, 0);
return v___f_56_;
}
}
static lean_object* _init_l_Lean_Elab_Term_instToMessageDataArg(void){
_start:
{
lean_object* v___f_57_; 
v___f_57_ = lean_obj_once(&l_Lean_Elab_Term_instToMessageDataArg___closed__0, &l_Lean_Elab_Term_instToMessageDataArg___closed__0_once, _init_l_Lean_Elab_Term_instToMessageDataArg___closed__0);
return v___f_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1_spec__2(lean_object* v_msgData_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_){
_start:
{
lean_object* v___x_64_; lean_object* v_env_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v_mctx_68_; lean_object* v_lctx_69_; lean_object* v_options_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_64_ = lean_st_ref_get(v___y_62_);
v_env_65_ = lean_ctor_get(v___x_64_, 0);
lean_inc_ref(v_env_65_);
lean_dec(v___x_64_);
v___x_66_ = lean_st_ref_get(v___y_62_);
lean_dec(v___x_66_);
v___x_67_ = lean_st_ref_get(v___y_60_);
v_mctx_68_ = lean_ctor_get(v___x_67_, 0);
lean_inc_ref(v_mctx_68_);
lean_dec(v___x_67_);
v_lctx_69_ = lean_ctor_get(v___y_59_, 2);
v_options_70_ = lean_ctor_get(v___y_61_, 2);
lean_inc_ref(v_options_70_);
lean_inc_ref(v_lctx_69_);
v___x_71_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_71_, 0, v_env_65_);
lean_ctor_set(v___x_71_, 1, v_mctx_68_);
lean_ctor_set(v___x_71_, 2, v_lctx_69_);
lean_ctor_set(v___x_71_, 3, v_options_70_);
v___x_72_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
lean_ctor_set(v___x_72_, 1, v_msgData_58_);
v___x_73_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1_spec__2___boxed(lean_object* v_msgData_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1_spec__2(v_msgData_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_);
lean_dec(v___y_78_);
lean_dec_ref(v___y_77_);
lean_dec(v___y_76_);
lean_dec_ref(v___y_75_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___redArg(lean_object* v_msg_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_){
_start:
{
lean_object* v_ref_87_; lean_object* v___x_88_; lean_object* v_a_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_97_; 
v_ref_87_ = lean_ctor_get(v___y_84_, 5);
v___x_88_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1_spec__2(v_msg_81_, v___y_82_, v___y_83_, v___y_84_, v___y_85_);
v_a_89_ = lean_ctor_get(v___x_88_, 0);
v_isSharedCheck_97_ = !lean_is_exclusive(v___x_88_);
if (v_isSharedCheck_97_ == 0)
{
v___x_91_ = v___x_88_;
v_isShared_92_ = v_isSharedCheck_97_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_a_89_);
lean_dec(v___x_88_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_97_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_93_; lean_object* v___x_95_; 
lean_inc(v_ref_87_);
v___x_93_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_93_, 0, v_ref_87_);
lean_ctor_set(v___x_93_, 1, v_a_89_);
if (v_isShared_92_ == 0)
{
lean_ctor_set_tag(v___x_91_, 1);
lean_ctor_set(v___x_91_, 0, v___x_93_);
v___x_95_ = v___x_91_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v___x_93_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
return v___x_95_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___redArg___boxed(lean_object* v_msg_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___redArg(v_msg_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_101_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___redArg(lean_object* v_ref_105_, lean_object* v_msg_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_){
_start:
{
lean_object* v_fileName_112_; lean_object* v_fileMap_113_; lean_object* v_options_114_; lean_object* v_currRecDepth_115_; lean_object* v_maxRecDepth_116_; lean_object* v_ref_117_; lean_object* v_currNamespace_118_; lean_object* v_openDecls_119_; lean_object* v_initHeartbeats_120_; lean_object* v_maxHeartbeats_121_; lean_object* v_quotContext_122_; lean_object* v_currMacroScope_123_; uint8_t v_diag_124_; lean_object* v_cancelTk_x3f_125_; uint8_t v_suppressElabErrors_126_; lean_object* v_inheritedTraceOptions_127_; lean_object* v_ref_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v_fileName_112_ = lean_ctor_get(v___y_109_, 0);
v_fileMap_113_ = lean_ctor_get(v___y_109_, 1);
v_options_114_ = lean_ctor_get(v___y_109_, 2);
v_currRecDepth_115_ = lean_ctor_get(v___y_109_, 3);
v_maxRecDepth_116_ = lean_ctor_get(v___y_109_, 4);
v_ref_117_ = lean_ctor_get(v___y_109_, 5);
v_currNamespace_118_ = lean_ctor_get(v___y_109_, 6);
v_openDecls_119_ = lean_ctor_get(v___y_109_, 7);
v_initHeartbeats_120_ = lean_ctor_get(v___y_109_, 8);
v_maxHeartbeats_121_ = lean_ctor_get(v___y_109_, 9);
v_quotContext_122_ = lean_ctor_get(v___y_109_, 10);
v_currMacroScope_123_ = lean_ctor_get(v___y_109_, 11);
v_diag_124_ = lean_ctor_get_uint8(v___y_109_, sizeof(void*)*14);
v_cancelTk_x3f_125_ = lean_ctor_get(v___y_109_, 12);
v_suppressElabErrors_126_ = lean_ctor_get_uint8(v___y_109_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_127_ = lean_ctor_get(v___y_109_, 13);
v_ref_128_ = l_Lean_replaceRef(v_ref_105_, v_ref_117_);
lean_inc_ref(v_inheritedTraceOptions_127_);
lean_inc(v_cancelTk_x3f_125_);
lean_inc(v_currMacroScope_123_);
lean_inc(v_quotContext_122_);
lean_inc(v_maxHeartbeats_121_);
lean_inc(v_initHeartbeats_120_);
lean_inc(v_openDecls_119_);
lean_inc(v_currNamespace_118_);
lean_inc(v_maxRecDepth_116_);
lean_inc(v_currRecDepth_115_);
lean_inc_ref(v_options_114_);
lean_inc_ref(v_fileMap_113_);
lean_inc_ref(v_fileName_112_);
v___x_129_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_129_, 0, v_fileName_112_);
lean_ctor_set(v___x_129_, 1, v_fileMap_113_);
lean_ctor_set(v___x_129_, 2, v_options_114_);
lean_ctor_set(v___x_129_, 3, v_currRecDepth_115_);
lean_ctor_set(v___x_129_, 4, v_maxRecDepth_116_);
lean_ctor_set(v___x_129_, 5, v_ref_128_);
lean_ctor_set(v___x_129_, 6, v_currNamespace_118_);
lean_ctor_set(v___x_129_, 7, v_openDecls_119_);
lean_ctor_set(v___x_129_, 8, v_initHeartbeats_120_);
lean_ctor_set(v___x_129_, 9, v_maxHeartbeats_121_);
lean_ctor_set(v___x_129_, 10, v_quotContext_122_);
lean_ctor_set(v___x_129_, 11, v_currMacroScope_123_);
lean_ctor_set(v___x_129_, 12, v_cancelTk_x3f_125_);
lean_ctor_set(v___x_129_, 13, v_inheritedTraceOptions_127_);
lean_ctor_set_uint8(v___x_129_, sizeof(void*)*14, v_diag_124_);
lean_ctor_set_uint8(v___x_129_, sizeof(void*)*14 + 1, v_suppressElabErrors_126_);
v___x_130_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___redArg(v_msg_106_, v___y_107_, v___y_108_, v___x_129_, v___y_110_);
lean_dec_ref(v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___redArg___boxed(lean_object* v_ref_131_, lean_object* v_msg_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___redArg(v_ref_131_, v_msg_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_);
lean_dec(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
lean_dec(v_ref_131_);
return v_res_138_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_addNamedArg_spec__0(lean_object* v_namedArg_139_, lean_object* v_as_140_, size_t v_i_141_, size_t v_stop_142_){
_start:
{
uint8_t v___x_143_; 
v___x_143_ = lean_usize_dec_eq(v_i_141_, v_stop_142_);
if (v___x_143_ == 0)
{
lean_object* v_name_144_; lean_object* v___x_145_; lean_object* v_name_146_; uint8_t v___x_147_; 
v_name_144_ = lean_ctor_get(v_namedArg_139_, 1);
v___x_145_ = lean_array_uget_borrowed(v_as_140_, v_i_141_);
v_name_146_ = lean_ctor_get(v___x_145_, 1);
v___x_147_ = lean_name_eq(v_name_144_, v_name_146_);
if (v___x_147_ == 0)
{
size_t v___x_148_; size_t v___x_149_; 
v___x_148_ = ((size_t)1ULL);
v___x_149_ = lean_usize_add(v_i_141_, v___x_148_);
v_i_141_ = v___x_149_;
goto _start;
}
else
{
return v___x_147_;
}
}
else
{
uint8_t v___x_151_; 
v___x_151_ = 0;
return v___x_151_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_addNamedArg_spec__0___boxed(lean_object* v_namedArg_152_, lean_object* v_as_153_, lean_object* v_i_154_, lean_object* v_stop_155_){
_start:
{
size_t v_i_boxed_156_; size_t v_stop_boxed_157_; uint8_t v_res_158_; lean_object* v_r_159_; 
v_i_boxed_156_ = lean_unbox_usize(v_i_154_);
lean_dec(v_i_154_);
v_stop_boxed_157_ = lean_unbox_usize(v_stop_155_);
lean_dec(v_stop_155_);
v_res_158_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_addNamedArg_spec__0(v_namedArg_152_, v_as_153_, v_i_boxed_156_, v_stop_boxed_157_);
lean_dec_ref(v_as_153_);
lean_dec_ref(v_namedArg_152_);
v_r_159_ = lean_box(v_res_158_);
return v_r_159_;
}
}
static lean_object* _init_l_Lean_Elab_Term_addNamedArg___closed__0(void){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lean_mk_string_unchecked("Argument `", 10, 10);
return v___x_160_;
}
}
static lean_object* _init_l_Lean_Elab_Term_addNamedArg___closed__1(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_161_ = lean_obj_once(&l_Lean_Elab_Term_addNamedArg___closed__0, &l_Lean_Elab_Term_addNamedArg___closed__0_once, _init_l_Lean_Elab_Term_addNamedArg___closed__0);
v___x_162_ = l_Lean_stringToMessageData(v___x_161_);
return v___x_162_;
}
}
static lean_object* _init_l_Lean_Elab_Term_addNamedArg___closed__2(void){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = lean_mk_string_unchecked("` was already set", 17, 17);
return v___x_163_;
}
}
static lean_object* _init_l_Lean_Elab_Term_addNamedArg___closed__3(void){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = lean_obj_once(&l_Lean_Elab_Term_addNamedArg___closed__2, &l_Lean_Elab_Term_addNamedArg___closed__2_once, _init_l_Lean_Elab_Term_addNamedArg___closed__2);
v___x_165_ = l_Lean_stringToMessageData(v___x_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_addNamedArg(lean_object* v_namedArgs_166_, lean_object* v_namedArg_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_176_ = lean_unsigned_to_nat(0u);
v___x_177_ = lean_array_get_size(v_namedArgs_166_);
v___x_178_ = lean_nat_dec_lt(v___x_176_, v___x_177_);
if (v___x_178_ == 0)
{
goto v___jp_173_;
}
else
{
if (v___x_178_ == 0)
{
goto v___jp_173_;
}
else
{
size_t v___x_179_; size_t v___x_180_; uint8_t v___x_181_; 
v___x_179_ = ((size_t)0ULL);
v___x_180_ = lean_usize_of_nat(v___x_177_);
v___x_181_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_addNamedArg_spec__0(v_namedArg_167_, v_namedArgs_166_, v___x_179_, v___x_180_);
if (v___x_181_ == 0)
{
goto v___jp_173_;
}
else
{
lean_object* v_ref_182_; lean_object* v_name_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v_a_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_197_; 
lean_dec_ref(v_namedArgs_166_);
v_ref_182_ = lean_ctor_get(v_namedArg_167_, 0);
lean_inc(v_ref_182_);
v_name_183_ = lean_ctor_get(v_namedArg_167_, 1);
lean_inc(v_name_183_);
lean_dec_ref(v_namedArg_167_);
v___x_184_ = lean_obj_once(&l_Lean_Elab_Term_addNamedArg___closed__1, &l_Lean_Elab_Term_addNamedArg___closed__1_once, _init_l_Lean_Elab_Term_addNamedArg___closed__1);
v___x_185_ = l_Lean_MessageData_ofName(v_name_183_);
v___x_186_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_186_, 0, v___x_184_);
lean_ctor_set(v___x_186_, 1, v___x_185_);
v___x_187_ = lean_obj_once(&l_Lean_Elab_Term_addNamedArg___closed__3, &l_Lean_Elab_Term_addNamedArg___closed__3_once, _init_l_Lean_Elab_Term_addNamedArg___closed__3);
v___x_188_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_186_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
v___x_189_ = l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___redArg(v_ref_182_, v___x_188_, v_a_168_, v_a_169_, v_a_170_, v_a_171_);
lean_dec(v_ref_182_);
v_a_190_ = lean_ctor_get(v___x_189_, 0);
v_isSharedCheck_197_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_197_ == 0)
{
v___x_192_ = v___x_189_;
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_a_190_);
lean_dec(v___x_189_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___x_195_; 
if (v_isShared_193_ == 0)
{
v___x_195_ = v___x_192_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_a_190_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
}
}
}
v___jp_173_:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = lean_array_push(v_namedArgs_166_, v_namedArg_167_);
v___x_175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
return v___x_175_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_addNamedArg___boxed(lean_object* v_namedArgs_198_, lean_object* v_namedArg_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_Elab_Term_addNamedArg(v_namedArgs_198_, v_namedArg_199_, v_a_200_, v_a_201_, v_a_202_, v_a_203_);
lean_dec(v_a_203_);
lean_dec_ref(v_a_202_);
lean_dec(v_a_201_);
lean_dec_ref(v_a_200_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1(lean_object* v_00_u03b1_206_, lean_object* v_ref_207_, lean_object* v_msg_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___redArg(v_ref_207_, v_msg_208_, v___y_209_, v___y_210_, v___y_211_, v___y_212_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___boxed(lean_object* v_00_u03b1_215_, lean_object* v_ref_216_, lean_object* v_msg_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1(v_00_u03b1_215_, v_ref_216_, v_msg_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
lean_dec(v___y_219_);
lean_dec_ref(v___y_218_);
lean_dec(v_ref_216_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1(lean_object* v_00_u03b1_224_, lean_object* v_msg_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___redArg(v_msg_225_, v___y_226_, v___y_227_, v___y_228_, v___y_229_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1___boxed(lean_object* v_00_u03b1_232_, lean_object* v_msg_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1_spec__1(v_00_u03b1_232_, v_msg_233_, v___y_234_, v___y_235_, v___y_236_, v___y_237_);
lean_dec(v___y_237_);
lean_dec_ref(v___y_236_);
lean_dec(v___y_235_);
lean_dec_ref(v___y_234_);
return v_res_239_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__0(void){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_240_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__1(void){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_241_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__2(void){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_242_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__3(void){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = lean_mk_string_unchecked("namedArgument", 13, 13);
return v___x_243_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__4(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_244_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__3);
v___x_245_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__2);
v___x_246_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__1);
v___x_247_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__0);
v___x_248_ = l_Lean_Name_mkStr4(v___x_247_, v___x_246_, v___x_245_, v___x_244_);
return v___x_248_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__5(void){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = lean_mk_string_unchecked("ellipsis", 8, 8);
return v___x_249_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_250_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__5);
v___x_251_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__2);
v___x_252_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__1);
v___x_253_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__0);
v___x_254_ = l_Lean_Name_mkStr4(v___x_253_, v___x_252_, v___x_251_, v___x_250_);
return v___x_254_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__7(void){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = lean_mk_string_unchecked("unexpected '..'", 15, 15);
return v___x_255_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__8(void){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_256_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__7);
v___x_257_ = l_Lean_stringToMessageData(v___x_256_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0(lean_object* v_as_258_, size_t v_i_259_, size_t v_stop_260_, lean_object* v_b_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v_a_268_; uint8_t v___x_272_; 
v___x_272_ = lean_usize_dec_eq(v_i_259_, v_stop_260_);
if (v___x_272_ == 0)
{
lean_object* v_fst_273_; lean_object* v_snd_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_313_; 
v_fst_273_ = lean_ctor_get(v_b_261_, 0);
v_snd_274_ = lean_ctor_get(v_b_261_, 1);
v_isSharedCheck_313_ = !lean_is_exclusive(v_b_261_);
if (v_isSharedCheck_313_ == 0)
{
v___x_276_ = v_b_261_;
v_isShared_277_ = v_isSharedCheck_313_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_snd_274_);
lean_inc(v_fst_273_);
lean_dec(v_b_261_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_313_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_278_ = lean_array_uget_borrowed(v_as_258_, v_i_259_);
lean_inc(v___x_278_);
v___x_279_ = l_Lean_Syntax_getKind(v___x_278_);
v___x_280_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__4, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__4);
v___x_281_ = lean_name_eq(v___x_279_, v___x_280_);
if (v___x_281_ == 0)
{
lean_object* v___x_282_; uint8_t v___x_283_; 
v___x_282_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6);
v___x_283_ = lean_name_eq(v___x_279_, v___x_282_);
lean_dec(v___x_279_);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_287_; 
lean_inc(v___x_278_);
v___x_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_284_, 0, v___x_278_);
v___x_285_ = lean_array_push(v_snd_274_, v___x_284_);
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 1, v___x_285_);
v___x_287_ = v___x_276_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_fst_273_);
lean_ctor_set(v_reuseFailAlloc_288_, 1, v___x_285_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
v_a_268_ = v___x_287_;
goto v___jp_267_;
}
}
else
{
lean_object* v___x_289_; lean_object* v___x_290_; 
lean_del_object(v___x_276_);
lean_dec(v_snd_274_);
lean_dec(v_fst_273_);
v___x_289_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__8, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__8);
v___x_290_ = l_Lean_throwErrorAt___at___00Lean_Elab_Term_addNamedArg_spec__1___redArg(v___x_278_, v___x_289_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v_a_291_; 
v_a_291_ = lean_ctor_get(v___x_290_, 0);
lean_inc(v_a_291_);
lean_dec_ref(v___x_290_);
v_a_268_ = v_a_291_;
goto v___jp_267_;
}
else
{
return v___x_290_;
}
}
}
else
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v_name_295_; lean_object* v___x_296_; lean_object* v_val_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
lean_dec(v___x_279_);
v___x_292_ = lean_unsigned_to_nat(1u);
v___x_293_ = l_Lean_Syntax_getArg(v___x_278_, v___x_292_);
v___x_294_ = l_Lean_Syntax_getId(v___x_293_);
lean_dec(v___x_293_);
v_name_295_ = lean_erase_macro_scopes(v___x_294_);
v___x_296_ = lean_unsigned_to_nat(3u);
v_val_297_ = l_Lean_Syntax_getArg(v___x_278_, v___x_296_);
v___x_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_298_, 0, v_val_297_);
lean_inc(v___x_278_);
v___x_299_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_299_, 0, v___x_278_);
lean_ctor_set(v___x_299_, 1, v_name_295_);
lean_ctor_set(v___x_299_, 2, v___x_298_);
lean_ctor_set_uint8(v___x_299_, sizeof(void*)*3, v___x_272_);
v___x_300_ = l_Lean_Elab_Term_addNamedArg(v_fst_273_, v___x_299_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
if (lean_obj_tag(v___x_300_) == 0)
{
lean_object* v_a_301_; lean_object* v___x_303_; 
v_a_301_ = lean_ctor_get(v___x_300_, 0);
lean_inc(v_a_301_);
lean_dec_ref(v___x_300_);
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 0, v_a_301_);
v___x_303_ = v___x_276_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_a_301_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v_snd_274_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
v_a_268_ = v___x_303_;
goto v___jp_267_;
}
}
else
{
lean_object* v_a_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_312_; 
lean_del_object(v___x_276_);
lean_dec(v_snd_274_);
v_a_305_ = lean_ctor_get(v___x_300_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_300_);
if (v_isSharedCheck_312_ == 0)
{
v___x_307_ = v___x_300_;
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_a_305_);
lean_dec(v___x_300_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v___x_310_; 
if (v_isShared_308_ == 0)
{
v___x_310_ = v___x_307_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v_a_305_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
}
}
}
else
{
lean_object* v___x_314_; 
v___x_314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_314_, 0, v_b_261_);
return v___x_314_;
}
v___jp_267_:
{
size_t v___x_269_; size_t v___x_270_; 
v___x_269_ = ((size_t)1ULL);
v___x_270_ = lean_usize_add(v_i_259_, v___x_269_);
v_i_259_ = v___x_270_;
v_b_261_ = v_a_268_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___boxed(lean_object* v_as_315_, lean_object* v_i_316_, lean_object* v_stop_317_, lean_object* v_b_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_){
_start:
{
size_t v_i_boxed_324_; size_t v_stop_boxed_325_; lean_object* v_res_326_; 
v_i_boxed_324_ = lean_unbox_usize(v_i_316_);
lean_dec(v_i_316_);
v_stop_boxed_325_ = lean_unbox_usize(v_stop_317_);
lean_dec(v_stop_317_);
v_res_326_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0(v_as_315_, v_i_boxed_324_, v_stop_boxed_325_, v_b_318_, v___y_319_, v___y_320_, v___y_321_, v___y_322_);
lean_dec(v___y_322_);
lean_dec_ref(v___y_321_);
lean_dec(v___y_320_);
lean_dec_ref(v___y_319_);
lean_dec_ref(v_as_315_);
return v_res_326_;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandArgs___closed__0(void){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = lean_unsigned_to_nat(0u);
v___x_328_ = lean_mk_empty_array_with_capacity(v___x_327_);
return v___x_328_;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandArgs___closed__1(void){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_329_ = lean_obj_once(&l_Lean_Elab_Term_expandArgs___closed__0, &l_Lean_Elab_Term_expandArgs___closed__0_once, _init_l_Lean_Elab_Term_expandArgs___closed__0);
v___x_330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
lean_ctor_set(v___x_330_, 1, v___x_329_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandArgs(lean_object* v_args_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_){
_start:
{
uint8_t v___y_338_; lean_object* v_fst_339_; lean_object* v_snd_340_; uint8_t v___y_346_; lean_object* v___y_347_; lean_object* v_fst_360_; uint8_t v_snd_361_; lean_object* v___x_374_; lean_object* v___x_375_; uint8_t v___x_376_; 
v___x_374_ = lean_array_get_size(v_args_331_);
v___x_375_ = lean_unsigned_to_nat(0u);
v___x_376_ = lean_nat_dec_eq(v___x_374_, v___x_375_);
if (v___x_376_ == 0)
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; uint8_t v___x_382_; 
v___x_377_ = lean_box(0);
v___x_378_ = lean_unsigned_to_nat(1u);
v___x_379_ = lean_nat_sub(v___x_374_, v___x_378_);
v___x_380_ = lean_array_get_borrowed(v___x_377_, v_args_331_, v___x_379_);
lean_dec(v___x_379_);
v___x_381_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0___closed__6);
lean_inc(v___x_380_);
v___x_382_ = l_Lean_Syntax_isOfKind(v___x_380_, v___x_381_);
if (v___x_382_ == 0)
{
v_fst_360_ = v_args_331_;
v_snd_361_ = v___x_382_;
goto v___jp_359_;
}
else
{
lean_object* v___x_383_; 
v___x_383_ = lean_array_pop(v_args_331_);
v_fst_360_ = v___x_383_;
v_snd_361_ = v___x_382_;
goto v___jp_359_;
}
}
else
{
uint8_t v___x_384_; 
v___x_384_ = 0;
v_fst_360_ = v_args_331_;
v_snd_361_ = v___x_384_;
goto v___jp_359_;
}
v___jp_337_:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_341_ = lean_box(v___y_338_);
v___x_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_342_, 0, v_snd_340_);
lean_ctor_set(v___x_342_, 1, v___x_341_);
v___x_343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_343_, 0, v_fst_339_);
lean_ctor_set(v___x_343_, 1, v___x_342_);
v___x_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_344_, 0, v___x_343_);
return v___x_344_;
}
v___jp_345_:
{
if (lean_obj_tag(v___y_347_) == 0)
{
lean_object* v_a_348_; lean_object* v_fst_349_; lean_object* v_snd_350_; 
v_a_348_ = lean_ctor_get(v___y_347_, 0);
lean_inc(v_a_348_);
lean_dec_ref(v___y_347_);
v_fst_349_ = lean_ctor_get(v_a_348_, 0);
lean_inc(v_fst_349_);
v_snd_350_ = lean_ctor_get(v_a_348_, 1);
lean_inc(v_snd_350_);
lean_dec(v_a_348_);
v___y_338_ = v___y_346_;
v_fst_339_ = v_fst_349_;
v_snd_340_ = v_snd_350_;
goto v___jp_337_;
}
else
{
lean_object* v_a_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_358_; 
v_a_351_ = lean_ctor_get(v___y_347_, 0);
v_isSharedCheck_358_ = !lean_is_exclusive(v___y_347_);
if (v_isSharedCheck_358_ == 0)
{
v___x_353_ = v___y_347_;
v_isShared_354_ = v_isSharedCheck_358_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_a_351_);
lean_dec(v___y_347_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_358_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_356_; 
if (v_isShared_354_ == 0)
{
v___x_356_ = v___x_353_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v_a_351_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
}
}
v___jp_359_:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_362_ = lean_unsigned_to_nat(0u);
v___x_363_ = lean_obj_once(&l_Lean_Elab_Term_expandArgs___closed__0, &l_Lean_Elab_Term_expandArgs___closed__0_once, _init_l_Lean_Elab_Term_expandArgs___closed__0);
v___x_364_ = lean_array_get_size(v_fst_360_);
v___x_365_ = lean_nat_dec_lt(v___x_362_, v___x_364_);
if (v___x_365_ == 0)
{
lean_dec_ref(v_fst_360_);
v___y_338_ = v_snd_361_;
v_fst_339_ = v___x_363_;
v_snd_340_ = v___x_363_;
goto v___jp_337_;
}
else
{
lean_object* v___x_366_; uint8_t v___x_367_; 
v___x_366_ = lean_obj_once(&l_Lean_Elab_Term_expandArgs___closed__1, &l_Lean_Elab_Term_expandArgs___closed__1_once, _init_l_Lean_Elab_Term_expandArgs___closed__1);
v___x_367_ = lean_nat_dec_le(v___x_364_, v___x_364_);
if (v___x_367_ == 0)
{
if (v___x_365_ == 0)
{
lean_dec_ref(v_fst_360_);
v___y_338_ = v_snd_361_;
v_fst_339_ = v___x_363_;
v_snd_340_ = v___x_363_;
goto v___jp_337_;
}
else
{
size_t v___x_368_; size_t v___x_369_; lean_object* v___x_370_; 
v___x_368_ = ((size_t)0ULL);
v___x_369_ = lean_usize_of_nat(v___x_364_);
v___x_370_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0(v_fst_360_, v___x_368_, v___x_369_, v___x_366_, v_a_332_, v_a_333_, v_a_334_, v_a_335_);
lean_dec_ref(v_fst_360_);
v___y_346_ = v_snd_361_;
v___y_347_ = v___x_370_;
goto v___jp_345_;
}
}
else
{
size_t v___x_371_; size_t v___x_372_; lean_object* v___x_373_; 
v___x_371_ = ((size_t)0ULL);
v___x_372_ = lean_usize_of_nat(v___x_364_);
v___x_373_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_expandArgs_spec__0(v_fst_360_, v___x_371_, v___x_372_, v___x_366_, v_a_332_, v_a_333_, v_a_334_, v_a_335_);
lean_dec_ref(v_fst_360_);
v___y_346_ = v_snd_361_;
v___y_347_ = v___x_373_;
goto v___jp_345_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandArgs___boxed(lean_object* v_args_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Lean_Elab_Term_expandArgs(v_args_385_, v_a_386_, v_a_387_, v_a_388_, v_a_389_);
lean_dec(v_a_389_);
lean_dec_ref(v_a_388_);
lean_dec(v_a_387_);
lean_dec_ref(v_a_386_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandApp(lean_object* v_stx_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_398_ = lean_unsigned_to_nat(1u);
v___x_399_ = l_Lean_Syntax_getArg(v_stx_392_, v___x_398_);
v___x_400_ = l_Lean_Syntax_getArgs(v___x_399_);
lean_dec(v___x_399_);
v___x_401_ = l_Lean_Elab_Term_expandArgs(v___x_400_, v_a_393_, v_a_394_, v_a_395_, v_a_396_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_412_; 
v_a_402_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_412_ == 0)
{
v___x_404_ = v___x_401_;
v_isShared_405_ = v_isSharedCheck_412_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_401_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_412_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_410_; 
v___x_406_ = lean_unsigned_to_nat(0u);
v___x_407_ = l_Lean_Syntax_getArg(v_stx_392_, v___x_406_);
v___x_408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_408_, 0, v___x_407_);
lean_ctor_set(v___x_408_, 1, v_a_402_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v___x_408_);
v___x_410_ = v___x_404_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v___x_408_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
else
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_420_; 
v_a_413_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_420_ == 0)
{
v___x_415_ = v___x_401_;
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v___x_401_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_418_; 
if (v_isShared_416_ == 0)
{
v___x_418_ = v___x_415_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_a_413_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
return v___x_418_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandApp___boxed(lean_object* v_stx_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Lean_Elab_Term_expandApp(v_stx_421_, v_a_422_, v_a_423_, v_a_424_, v_a_425_);
lean_dec(v_a_425_);
lean_dec_ref(v_a_424_);
lean_dec(v_a_423_);
lean_dec_ref(v_a_422_);
lean_dec(v_stx_421_);
return v_res_427_;
}
}
lean_object* runtime_initialize_Lean_Elab_Term(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Arg(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_instInhabitedArg_default = _init_l_Lean_Elab_Term_instInhabitedArg_default();
lean_mark_persistent(l_Lean_Elab_Term_instInhabitedArg_default);
l_Lean_Elab_Term_instInhabitedArg = _init_l_Lean_Elab_Term_instInhabitedArg();
lean_mark_persistent(l_Lean_Elab_Term_instInhabitedArg);
l_Lean_Elab_Term_instInhabitedNamedArg_default = _init_l_Lean_Elab_Term_instInhabitedNamedArg_default();
lean_mark_persistent(l_Lean_Elab_Term_instInhabitedNamedArg_default);
l_Lean_Elab_Term_instInhabitedNamedArg = _init_l_Lean_Elab_Term_instInhabitedNamedArg();
lean_mark_persistent(l_Lean_Elab_Term_instInhabitedNamedArg);
l_Lean_Elab_Term_instToMessageDataArg = _init_l_Lean_Elab_Term_instToMessageDataArg();
lean_mark_persistent(l_Lean_Elab_Term_instToMessageDataArg);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Arg(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Term(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Arg(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Arg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Arg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Arg(builtin);
}
#ifdef __cplusplus
}
#endif
