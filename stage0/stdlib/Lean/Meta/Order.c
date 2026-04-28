// Lean compiler output
// Module: Lean.Meta.Order
// Imports: public import Lean.Meta.PProdN public import Lean.Meta.AppBuilder public import Init.Internal.Order.Basic
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
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_PProdN_genMk___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkInstPiOfInstForall___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__0;
static lean_once_cell_t l_Lean_Meta_mkInstPiOfInstForall___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__1;
static lean_once_cell_t l_Lean_Meta_mkInstPiOfInstForall___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__2;
static lean_once_cell_t l_Lean_Meta_mkInstPiOfInstForall___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__3;
static lean_once_cell_t l_Lean_Meta_mkInstPiOfInstForall___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__4;
static lean_once_cell_t l_Lean_Meta_mkInstPiOfInstForall___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__5;
static lean_once_cell_t l_Lean_Meta_mkInstPiOfInstForall___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__6;
static lean_once_cell_t l_Lean_Meta_mkInstPiOfInstForall___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__7;
static lean_once_cell_t l_Lean_Meta_mkInstPiOfInstForall___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__8;
static lean_once_cell_t l_Lean_Meta_mkInstPiOfInstForall___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__9;
static lean_once_cell_t l_Lean_Meta_mkInstPiOfInstForall___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__10;
static lean_once_cell_t l_Lean_Meta_mkInstPiOfInstForall___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstsForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstsForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkFixOfMonFun___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkFixOfMonFun___closed__0;
static lean_once_cell_t l_Lean_Meta_mkFixOfMonFun___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkFixOfMonFun___closed__1;
static lean_once_cell_t l_Lean_Meta_mkFixOfMonFun___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkFixOfMonFun___closed__2;
static lean_once_cell_t l_Lean_Meta_mkFixOfMonFun___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkFixOfMonFun___closed__3;
static lean_once_cell_t l_Lean_Meta_mkFixOfMonFun___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkFixOfMonFun___closed__4;
static lean_once_cell_t l_Lean_Meta_mkFixOfMonFun___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkFixOfMonFun___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_mkFixOfMonFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkFixOfMonFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_toPartialOrder___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_toPartialOrder___closed__0;
static lean_once_cell_t l_Lean_Meta_toPartialOrder___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_toPartialOrder___closed__1;
static lean_once_cell_t l_Lean_Meta_toPartialOrder___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_toPartialOrder___closed__2;
static lean_once_cell_t l_Lean_Meta_toPartialOrder___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_toPartialOrder___closed__3;
static lean_once_cell_t l_Lean_Meta_toPartialOrder___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_toPartialOrder___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_toPartialOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_toPartialOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkInstCCPOPProd___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstCCPOPProd___closed__0;
static lean_once_cell_t l_Lean_Meta_mkInstCCPOPProd___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstCCPOPProd___closed__1;
static lean_once_cell_t l_Lean_Meta_mkInstCCPOPProd___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstCCPOPProd___closed__2;
static lean_once_cell_t l_Lean_Meta_mkInstCCPOPProd___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstCCPOPProd___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCCPOPProd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCCPOPProd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkInstCompleteLatticePProd___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstCompleteLatticePProd___closed__0;
static lean_once_cell_t l_Lean_Meta_mkInstCompleteLatticePProd___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstCompleteLatticePProd___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCompleteLatticePProd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCompleteLatticePProd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkPackedPPRodInstance_spec__3(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkPackedPPRodInstance___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__0;
static lean_once_cell_t l_Lean_Meta_mkPackedPPRodInstance___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__1;
static lean_once_cell_t l_Lean_Meta_mkPackedPPRodInstance___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__2;
static lean_once_cell_t l_Lean_Meta_mkPackedPPRodInstance___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__3;
static lean_once_cell_t l_Lean_Meta_mkPackedPPRodInstance___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__4;
static lean_once_cell_t l_Lean_Meta_mkPackedPPRodInstance___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_mkPackedPPRodInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkPackedPPRodInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v_mctx_11_; lean_object* v_lctx_12_; lean_object* v_options_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = lean_st_ref_get(v___y_5_);
lean_dec(v___x_9_);
v___x_10_ = lean_st_ref_get(v___y_3_);
v_mctx_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc_ref(v_mctx_11_);
lean_dec(v___x_10_);
v_lctx_12_ = lean_ctor_get(v___y_2_, 2);
v_options_13_ = lean_ctor_get(v___y_4_, 2);
lean_inc_ref(v_options_13_);
lean_inc_ref(v_lctx_12_);
v___x_14_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_14_, 0, v_env_8_);
lean_ctor_set(v___x_14_, 1, v_mctx_11_);
lean_ctor_set(v___x_14_, 2, v_lctx_12_);
lean_ctor_set(v___x_14_, 3, v_options_13_);
v___x_15_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v_msgData_1_);
v___x_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0___boxed(lean_object* v_msgData_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0(v_msgData_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(lean_object* v_msg_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_ref_30_; lean_object* v___x_31_; lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_40_; 
v_ref_30_ = lean_ctor_get(v___y_27_, 5);
v___x_31_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0(v_msg_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
v_a_32_ = lean_ctor_get(v___x_31_, 0);
v_isSharedCheck_40_ = !lean_is_exclusive(v___x_31_);
if (v_isSharedCheck_40_ == 0)
{
v___x_34_ = v___x_31_;
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_31_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_36_; lean_object* v___x_38_; 
lean_inc(v_ref_30_);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v_ref_30_);
lean_ctor_set(v___x_36_, 1, v_a_32_);
if (v_isShared_35_ == 0)
{
lean_ctor_set_tag(v___x_34_, 1);
lean_ctor_set(v___x_34_, 0, v___x_36_);
v___x_38_ = v___x_34_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v___x_36_);
v___x_38_ = v_reuseFailAlloc_39_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
return v___x_38_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg___boxed(lean_object* v_msg_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v_msg_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstPiOfInstForall___closed__0(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstPiOfInstForall___closed__1(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_mk_string_unchecked("Order", 5, 5);
return v___x_49_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstPiOfInstForall___closed__2(void){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_mk_string_unchecked("CCPO", 4, 4);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstPiOfInstForall___closed__3(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_51_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__2, &l_Lean_Meta_mkInstPiOfInstForall___closed__2_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__2);
v___x_52_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__1, &l_Lean_Meta_mkInstPiOfInstForall___closed__1_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__1);
v___x_53_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__0, &l_Lean_Meta_mkInstPiOfInstForall___closed__0_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__0);
v___x_54_ = l_Lean_Name_mkStr3(v___x_53_, v___x_52_, v___x_51_);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstPiOfInstForall___closed__4(void){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_mk_string_unchecked("CompleteLattice", 15, 15);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstPiOfInstForall___closed__5(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_56_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__4, &l_Lean_Meta_mkInstPiOfInstForall___closed__4_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__4);
v___x_57_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__1, &l_Lean_Meta_mkInstPiOfInstForall___closed__1_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__1);
v___x_58_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__0, &l_Lean_Meta_mkInstPiOfInstForall___closed__0_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__0);
v___x_59_ = l_Lean_Name_mkStr3(v___x_58_, v___x_57_, v___x_56_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstPiOfInstForall___closed__6(void){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = lean_mk_string_unchecked("mkInstPiOfInstForall: unexpected type of ", 41, 41);
return v___x_60_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstPiOfInstForall___closed__7(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__6, &l_Lean_Meta_mkInstPiOfInstForall___closed__6_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__6);
v___x_62_ = l_Lean_stringToMessageData(v___x_61_);
return v___x_62_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstPiOfInstForall___closed__8(void){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = lean_mk_string_unchecked("instCompleteLatticePi", 21, 21);
return v___x_63_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstPiOfInstForall___closed__9(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_64_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__8, &l_Lean_Meta_mkInstPiOfInstForall___closed__8_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__8);
v___x_65_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__1, &l_Lean_Meta_mkInstPiOfInstForall___closed__1_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__1);
v___x_66_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__0, &l_Lean_Meta_mkInstPiOfInstForall___closed__0_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__0);
v___x_67_ = l_Lean_Name_mkStr3(v___x_66_, v___x_65_, v___x_64_);
return v___x_67_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstPiOfInstForall___closed__10(void){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_mk_string_unchecked("instCCPOPi", 10, 10);
return v___x_68_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstPiOfInstForall___closed__11(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_69_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__10, &l_Lean_Meta_mkInstPiOfInstForall___closed__10_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__10);
v___x_70_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__1, &l_Lean_Meta_mkInstPiOfInstForall___closed__1_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__1);
v___x_71_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__0, &l_Lean_Meta_mkInstPiOfInstForall___closed__0_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__0);
v___x_72_ = l_Lean_Name_mkStr3(v___x_71_, v___x_70_, v___x_69_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstForall(lean_object* v_x_73_, lean_object* v_inst_74_, lean_object* v_a_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_){
_start:
{
lean_object* v___x_80_; 
lean_inc(v_a_78_);
lean_inc_ref(v_a_77_);
lean_inc(v_a_76_);
lean_inc_ref(v_a_75_);
lean_inc_ref(v_inst_74_);
v___x_80_ = lean_infer_type(v_inst_74_, v_a_75_, v_a_76_, v_a_77_, v_a_78_);
if (lean_obj_tag(v___x_80_) == 0)
{
lean_object* v_a_81_; lean_object* v___x_82_; uint8_t v___x_83_; uint8_t v___x_84_; 
v_a_81_ = lean_ctor_get(v___x_80_, 0);
lean_inc(v_a_81_);
lean_dec_ref(v___x_80_);
v___x_82_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__3, &l_Lean_Meta_mkInstPiOfInstForall___closed__3_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__3);
v___x_83_ = l_Lean_Expr_isAppOf(v_a_81_, v___x_82_);
lean_dec(v_a_81_);
v___x_84_ = 1;
if (v___x_83_ == 0)
{
lean_object* v___x_85_; 
lean_inc(v_a_78_);
lean_inc_ref(v_a_77_);
lean_inc(v_a_76_);
lean_inc_ref(v_a_75_);
lean_inc_ref(v_inst_74_);
v___x_85_ = lean_infer_type(v_inst_74_, v_a_75_, v_a_76_, v_a_77_, v_a_78_);
if (lean_obj_tag(v___x_85_) == 0)
{
lean_object* v_a_86_; lean_object* v___x_87_; uint8_t v___x_88_; 
v_a_86_ = lean_ctor_get(v___x_85_, 0);
lean_inc(v_a_86_);
lean_dec_ref(v___x_85_);
v___x_87_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__5, &l_Lean_Meta_mkInstPiOfInstForall___closed__5_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__5);
v___x_88_ = l_Lean_Expr_isAppOf(v_a_86_, v___x_87_);
lean_dec(v_a_86_);
if (v___x_88_ == 0)
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
lean_dec_ref(v_x_73_);
v___x_89_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__7, &l_Lean_Meta_mkInstPiOfInstForall___closed__7_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__7);
v___x_90_ = l_Lean_MessageData_ofExpr(v_inst_74_);
v___x_91_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_89_);
lean_ctor_set(v___x_91_, 1, v___x_90_);
v___x_92_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v___x_91_, v_a_75_, v_a_76_, v_a_77_, v_a_78_);
return v___x_92_;
}
else
{
lean_object* v___x_93_; 
lean_inc(v_a_78_);
lean_inc_ref(v_a_77_);
lean_inc(v_a_76_);
lean_inc_ref(v_a_75_);
lean_inc_ref(v_x_73_);
v___x_93_ = lean_infer_type(v_x_73_, v_a_75_, v_a_76_, v_a_77_, v_a_78_);
if (lean_obj_tag(v___x_93_) == 0)
{
lean_object* v_a_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_122_; 
v_a_94_ = lean_ctor_get(v___x_93_, 0);
v_isSharedCheck_122_ = !lean_is_exclusive(v___x_93_);
if (v_isSharedCheck_122_ == 0)
{
v___x_96_ = v___x_93_;
v_isShared_97_ = v_isSharedCheck_122_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_a_94_);
lean_dec(v___x_93_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_122_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; uint8_t v___x_101_; lean_object* v___x_102_; 
v___x_98_ = lean_unsigned_to_nat(1u);
v___x_99_ = lean_mk_empty_array_with_capacity(v___x_98_);
v___x_100_ = lean_array_push(v___x_99_, v_x_73_);
v___x_101_ = 1;
v___x_102_ = l_Lean_Meta_mkLambdaFVars(v___x_100_, v_inst_74_, v___x_83_, v___x_84_, v___x_83_, v___x_84_, v___x_101_, v_a_75_, v_a_76_, v_a_77_, v_a_78_);
lean_dec_ref(v___x_100_);
if (lean_obj_tag(v___x_102_) == 0)
{
lean_object* v_a_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_121_; 
v_a_103_ = lean_ctor_get(v___x_102_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___x_102_);
if (v_isSharedCheck_121_ == 0)
{
v___x_105_ = v___x_102_;
v_isShared_106_ = v_isSharedCheck_121_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_a_103_);
lean_dec(v___x_102_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_121_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_107_; lean_object* v___x_109_; 
v___x_107_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__9, &l_Lean_Meta_mkInstPiOfInstForall___closed__9_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__9);
if (v_isShared_106_ == 0)
{
lean_ctor_set_tag(v___x_105_, 1);
lean_ctor_set(v___x_105_, 0, v_a_94_);
v___x_109_ = v___x_105_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_a_94_);
v___x_109_ = v_reuseFailAlloc_120_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
lean_object* v___x_110_; lean_object* v___x_112_; 
v___x_110_ = lean_box(0);
if (v_isShared_97_ == 0)
{
lean_ctor_set_tag(v___x_96_, 1);
lean_ctor_set(v___x_96_, 0, v_a_103_);
v___x_112_ = v___x_96_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v_a_103_);
v___x_112_ = v_reuseFailAlloc_119_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_113_ = lean_unsigned_to_nat(3u);
v___x_114_ = lean_mk_empty_array_with_capacity(v___x_113_);
v___x_115_ = lean_array_push(v___x_114_, v___x_109_);
v___x_116_ = lean_array_push(v___x_115_, v___x_110_);
v___x_117_ = lean_array_push(v___x_116_, v___x_112_);
v___x_118_ = l_Lean_Meta_mkAppOptM(v___x_107_, v___x_117_, v_a_75_, v_a_76_, v_a_77_, v_a_78_);
return v___x_118_;
}
}
}
}
else
{
lean_del_object(v___x_96_);
lean_dec(v_a_94_);
return v___x_102_;
}
}
}
else
{
lean_dec_ref(v_inst_74_);
lean_dec_ref(v_x_73_);
return v___x_93_;
}
}
}
else
{
lean_dec_ref(v_inst_74_);
lean_dec_ref(v_x_73_);
return v___x_85_;
}
}
else
{
lean_object* v___x_123_; 
lean_inc(v_a_78_);
lean_inc_ref(v_a_77_);
lean_inc(v_a_76_);
lean_inc_ref(v_a_75_);
lean_inc_ref(v_x_73_);
v___x_123_ = lean_infer_type(v_x_73_, v_a_75_, v_a_76_, v_a_77_, v_a_78_);
if (lean_obj_tag(v___x_123_) == 0)
{
lean_object* v_a_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_153_; 
v_a_124_ = lean_ctor_get(v___x_123_, 0);
v_isSharedCheck_153_ = !lean_is_exclusive(v___x_123_);
if (v_isSharedCheck_153_ == 0)
{
v___x_126_ = v___x_123_;
v_isShared_127_ = v_isSharedCheck_153_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_a_124_);
lean_dec(v___x_123_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_153_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; uint8_t v___x_131_; uint8_t v___x_132_; lean_object* v___x_133_; 
v___x_128_ = lean_unsigned_to_nat(1u);
v___x_129_ = lean_mk_empty_array_with_capacity(v___x_128_);
v___x_130_ = lean_array_push(v___x_129_, v_x_73_);
v___x_131_ = 0;
v___x_132_ = 1;
v___x_133_ = l_Lean_Meta_mkLambdaFVars(v___x_130_, v_inst_74_, v___x_131_, v___x_84_, v___x_131_, v___x_84_, v___x_132_, v_a_75_, v_a_76_, v_a_77_, v_a_78_);
lean_dec_ref(v___x_130_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v_a_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_152_; 
v_a_134_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_152_ == 0)
{
v___x_136_ = v___x_133_;
v_isShared_137_ = v_isSharedCheck_152_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_a_134_);
lean_dec(v___x_133_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_152_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_138_; lean_object* v___x_140_; 
v___x_138_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__11, &l_Lean_Meta_mkInstPiOfInstForall___closed__11_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__11);
if (v_isShared_137_ == 0)
{
lean_ctor_set_tag(v___x_136_, 1);
lean_ctor_set(v___x_136_, 0, v_a_124_);
v___x_140_ = v___x_136_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v_a_124_);
v___x_140_ = v_reuseFailAlloc_151_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
lean_object* v___x_141_; lean_object* v___x_143_; 
v___x_141_ = lean_box(0);
if (v_isShared_127_ == 0)
{
lean_ctor_set_tag(v___x_126_, 1);
lean_ctor_set(v___x_126_, 0, v_a_134_);
v___x_143_ = v___x_126_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_a_134_);
v___x_143_ = v_reuseFailAlloc_150_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_144_ = lean_unsigned_to_nat(3u);
v___x_145_ = lean_mk_empty_array_with_capacity(v___x_144_);
v___x_146_ = lean_array_push(v___x_145_, v___x_140_);
v___x_147_ = lean_array_push(v___x_146_, v___x_141_);
v___x_148_ = lean_array_push(v___x_147_, v___x_143_);
v___x_149_ = l_Lean_Meta_mkAppOptM(v___x_138_, v___x_148_, v_a_75_, v_a_76_, v_a_77_, v_a_78_);
return v___x_149_;
}
}
}
}
else
{
lean_del_object(v___x_126_);
lean_dec(v_a_124_);
return v___x_133_;
}
}
}
else
{
lean_dec_ref(v_inst_74_);
lean_dec_ref(v_x_73_);
return v___x_123_;
}
}
}
else
{
lean_dec_ref(v_inst_74_);
lean_dec_ref(v_x_73_);
return v___x_80_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstForall___boxed(lean_object* v_x_154_, lean_object* v_inst_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Lean_Meta_mkInstPiOfInstForall(v_x_154_, v_inst_155_, v_a_156_, v_a_157_, v_a_158_, v_a_159_);
lean_dec(v_a_159_);
lean_dec_ref(v_a_158_);
lean_dec(v_a_157_);
lean_dec_ref(v_a_156_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0(lean_object* v_00_u03b1_162_, lean_object* v_msg_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v_msg_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___boxed(lean_object* v_00_u03b1_170_, lean_object* v_msg_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0(v_00_u03b1_170_, v_msg_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0(lean_object* v_as_178_, size_t v_sz_179_, size_t v_i_180_, lean_object* v_b_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_){
_start:
{
uint8_t v___x_187_; 
v___x_187_ = lean_usize_dec_lt(v_i_180_, v_sz_179_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; 
v___x_188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_188_, 0, v_b_181_);
return v___x_188_;
}
else
{
lean_object* v_a_189_; lean_object* v___x_190_; 
v_a_189_ = lean_array_uget_borrowed(v_as_178_, v_i_180_);
lean_inc(v_a_189_);
v___x_190_ = l_Lean_Meta_mkInstPiOfInstForall(v_a_189_, v_b_181_, v___y_182_, v___y_183_, v___y_184_, v___y_185_);
if (lean_obj_tag(v___x_190_) == 0)
{
lean_object* v_a_191_; size_t v___x_192_; size_t v___x_193_; 
v_a_191_ = lean_ctor_get(v___x_190_, 0);
lean_inc(v_a_191_);
lean_dec_ref(v___x_190_);
v___x_192_ = ((size_t)1ULL);
v___x_193_ = lean_usize_add(v_i_180_, v___x_192_);
v_i_180_ = v___x_193_;
v_b_181_ = v_a_191_;
goto _start;
}
else
{
return v___x_190_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0___boxed(lean_object* v_as_195_, lean_object* v_sz_196_, lean_object* v_i_197_, lean_object* v_b_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_){
_start:
{
size_t v_sz_boxed_204_; size_t v_i_boxed_205_; lean_object* v_res_206_; 
v_sz_boxed_204_ = lean_unbox_usize(v_sz_196_);
lean_dec(v_sz_196_);
v_i_boxed_205_ = lean_unbox_usize(v_i_197_);
lean_dec(v_i_197_);
v_res_206_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0(v_as_195_, v_sz_boxed_204_, v_i_boxed_205_, v_b_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_);
lean_dec(v___y_202_);
lean_dec_ref(v___y_201_);
lean_dec(v___y_200_);
lean_dec_ref(v___y_199_);
lean_dec_ref(v_as_195_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstsForall(lean_object* v_xs_207_, lean_object* v_inst_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_){
_start:
{
lean_object* v___x_214_; size_t v_sz_215_; size_t v___x_216_; lean_object* v___x_217_; 
v___x_214_ = l_Array_reverse___redArg(v_xs_207_);
v_sz_215_ = lean_array_size(v___x_214_);
v___x_216_ = ((size_t)0ULL);
v___x_217_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0(v___x_214_, v_sz_215_, v___x_216_, v_inst_208_, v_a_209_, v_a_210_, v_a_211_, v_a_212_);
lean_dec_ref(v___x_214_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstsForall___boxed(lean_object* v_xs_218_, lean_object* v_inst_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Lean_Meta_mkInstPiOfInstsForall(v_xs_218_, v_inst_219_, v_a_220_, v_a_221_, v_a_222_, v_a_223_);
lean_dec(v_a_223_);
lean_dec_ref(v_a_222_);
lean_dec(v_a_221_);
lean_dec_ref(v_a_220_);
return v_res_225_;
}
}
static lean_object* _init_l_Lean_Meta_mkFixOfMonFun___closed__0(void){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = lean_mk_string_unchecked("mkFixOfMonFun: unexpected type of ", 34, 34);
return v___x_226_;
}
}
static lean_object* _init_l_Lean_Meta_mkFixOfMonFun___closed__1(void){
_start:
{
lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_227_ = lean_obj_once(&l_Lean_Meta_mkFixOfMonFun___closed__0, &l_Lean_Meta_mkFixOfMonFun___closed__0_once, _init_l_Lean_Meta_mkFixOfMonFun___closed__0);
v___x_228_ = l_Lean_stringToMessageData(v___x_227_);
return v___x_228_;
}
}
static lean_object* _init_l_Lean_Meta_mkFixOfMonFun___closed__2(void){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = lean_mk_string_unchecked("lfp_monotone", 12, 12);
return v___x_229_;
}
}
static lean_object* _init_l_Lean_Meta_mkFixOfMonFun___closed__3(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_230_ = lean_obj_once(&l_Lean_Meta_mkFixOfMonFun___closed__2, &l_Lean_Meta_mkFixOfMonFun___closed__2_once, _init_l_Lean_Meta_mkFixOfMonFun___closed__2);
v___x_231_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__1, &l_Lean_Meta_mkInstPiOfInstForall___closed__1_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__1);
v___x_232_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__0, &l_Lean_Meta_mkInstPiOfInstForall___closed__0_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__0);
v___x_233_ = l_Lean_Name_mkStr3(v___x_232_, v___x_231_, v___x_230_);
return v___x_233_;
}
}
static lean_object* _init_l_Lean_Meta_mkFixOfMonFun___closed__4(void){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = lean_mk_string_unchecked("fix", 3, 3);
return v___x_234_;
}
}
static lean_object* _init_l_Lean_Meta_mkFixOfMonFun___closed__5(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_235_ = lean_obj_once(&l_Lean_Meta_mkFixOfMonFun___closed__4, &l_Lean_Meta_mkFixOfMonFun___closed__4_once, _init_l_Lean_Meta_mkFixOfMonFun___closed__4);
v___x_236_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__1, &l_Lean_Meta_mkInstPiOfInstForall___closed__1_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__1);
v___x_237_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__0, &l_Lean_Meta_mkInstPiOfInstForall___closed__0_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__0);
v___x_238_ = l_Lean_Name_mkStr3(v___x_237_, v___x_236_, v___x_235_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFixOfMonFun(lean_object* v_packedType_239_, lean_object* v_packedInst_240_, lean_object* v_hmono_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_){
_start:
{
lean_object* v___x_247_; 
lean_inc(v_a_245_);
lean_inc_ref(v_a_244_);
lean_inc(v_a_243_);
lean_inc_ref(v_a_242_);
lean_inc_ref(v_packedInst_240_);
v___x_247_ = lean_infer_type(v_packedInst_240_, v_a_242_, v_a_243_, v_a_244_, v_a_245_);
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v_a_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_296_; 
v_a_248_ = lean_ctor_get(v___x_247_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_296_ == 0)
{
v___x_250_ = v___x_247_;
v_isShared_251_ = v_isSharedCheck_296_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_a_248_);
lean_dec(v___x_247_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_296_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_252_; uint8_t v___x_253_; 
v___x_252_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__3, &l_Lean_Meta_mkInstPiOfInstForall___closed__3_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__3);
v___x_253_ = l_Lean_Expr_isAppOf(v_a_248_, v___x_252_);
lean_dec(v_a_248_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; 
lean_inc(v_a_245_);
lean_inc_ref(v_a_244_);
lean_inc(v_a_243_);
lean_inc_ref(v_a_242_);
lean_inc_ref(v_packedInst_240_);
v___x_254_ = lean_infer_type(v_packedInst_240_, v_a_242_, v_a_243_, v_a_244_, v_a_245_);
if (lean_obj_tag(v___x_254_) == 0)
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_281_; 
v_a_255_ = lean_ctor_get(v___x_254_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_281_ == 0)
{
v___x_257_ = v___x_254_;
v_isShared_258_ = v_isSharedCheck_281_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v___x_254_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_281_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_259_; uint8_t v___x_260_; 
v___x_259_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__5, &l_Lean_Meta_mkInstPiOfInstForall___closed__5_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__5);
v___x_260_ = l_Lean_Expr_isAppOf(v_a_255_, v___x_259_);
lean_dec(v_a_255_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
lean_del_object(v___x_257_);
lean_del_object(v___x_250_);
lean_dec_ref(v_hmono_241_);
lean_dec_ref(v_packedType_239_);
v___x_261_ = lean_obj_once(&l_Lean_Meta_mkFixOfMonFun___closed__1, &l_Lean_Meta_mkFixOfMonFun___closed__1_once, _init_l_Lean_Meta_mkFixOfMonFun___closed__1);
v___x_262_ = l_Lean_MessageData_ofExpr(v_packedInst_240_);
v___x_263_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_261_);
lean_ctor_set(v___x_263_, 1, v___x_262_);
v___x_264_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v___x_263_, v_a_242_, v_a_243_, v_a_244_, v_a_245_);
return v___x_264_;
}
else
{
lean_object* v___x_265_; lean_object* v___x_267_; 
v___x_265_ = lean_obj_once(&l_Lean_Meta_mkFixOfMonFun___closed__3, &l_Lean_Meta_mkFixOfMonFun___closed__3_once, _init_l_Lean_Meta_mkFixOfMonFun___closed__3);
if (v_isShared_258_ == 0)
{
lean_ctor_set_tag(v___x_257_, 1);
lean_ctor_set(v___x_257_, 0, v_packedType_239_);
v___x_267_ = v___x_257_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_packedType_239_);
v___x_267_ = v_reuseFailAlloc_280_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
lean_object* v___x_269_; 
if (v_isShared_251_ == 0)
{
lean_ctor_set_tag(v___x_250_, 1);
lean_ctor_set(v___x_250_, 0, v_packedInst_240_);
v___x_269_ = v___x_250_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_packedInst_240_);
v___x_269_ = v_reuseFailAlloc_279_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_270_ = lean_box(0);
v___x_271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_271_, 0, v_hmono_241_);
v___x_272_ = lean_unsigned_to_nat(4u);
v___x_273_ = lean_mk_empty_array_with_capacity(v___x_272_);
v___x_274_ = lean_array_push(v___x_273_, v___x_267_);
v___x_275_ = lean_array_push(v___x_274_, v___x_269_);
v___x_276_ = lean_array_push(v___x_275_, v___x_270_);
v___x_277_ = lean_array_push(v___x_276_, v___x_271_);
v___x_278_ = l_Lean_Meta_mkAppOptM(v___x_265_, v___x_277_, v_a_242_, v_a_243_, v_a_244_, v_a_245_);
return v___x_278_;
}
}
}
}
}
else
{
lean_del_object(v___x_250_);
lean_dec_ref(v_hmono_241_);
lean_dec_ref(v_packedInst_240_);
lean_dec_ref(v_packedType_239_);
return v___x_254_;
}
}
else
{
lean_object* v___x_282_; lean_object* v___x_284_; 
v___x_282_ = lean_obj_once(&l_Lean_Meta_mkFixOfMonFun___closed__5, &l_Lean_Meta_mkFixOfMonFun___closed__5_once, _init_l_Lean_Meta_mkFixOfMonFun___closed__5);
if (v_isShared_251_ == 0)
{
lean_ctor_set_tag(v___x_250_, 1);
lean_ctor_set(v___x_250_, 0, v_packedType_239_);
v___x_284_ = v___x_250_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_packedType_239_);
v___x_284_ = v_reuseFailAlloc_295_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_285_, 0, v_packedInst_240_);
v___x_286_ = lean_box(0);
v___x_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_287_, 0, v_hmono_241_);
v___x_288_ = lean_unsigned_to_nat(4u);
v___x_289_ = lean_mk_empty_array_with_capacity(v___x_288_);
v___x_290_ = lean_array_push(v___x_289_, v___x_284_);
v___x_291_ = lean_array_push(v___x_290_, v___x_285_);
v___x_292_ = lean_array_push(v___x_291_, v___x_286_);
v___x_293_ = lean_array_push(v___x_292_, v___x_287_);
v___x_294_ = l_Lean_Meta_mkAppOptM(v___x_282_, v___x_293_, v_a_242_, v_a_243_, v_a_244_, v_a_245_);
return v___x_294_;
}
}
}
}
else
{
lean_dec_ref(v_hmono_241_);
lean_dec_ref(v_packedInst_240_);
lean_dec_ref(v_packedType_239_);
return v___x_247_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFixOfMonFun___boxed(lean_object* v_packedType_297_, lean_object* v_packedInst_298_, lean_object* v_hmono_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_Meta_mkFixOfMonFun(v_packedType_297_, v_packedInst_298_, v_hmono_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
lean_dec(v_a_301_);
lean_dec_ref(v_a_300_);
return v_res_305_;
}
}
static lean_object* _init_l_Lean_Meta_toPartialOrder___closed__0(void){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = lean_mk_string_unchecked("getUnderlyingOrder: unexpected type of ", 39, 39);
return v___x_306_;
}
}
static lean_object* _init_l_Lean_Meta_toPartialOrder___closed__1(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_obj_once(&l_Lean_Meta_toPartialOrder___closed__0, &l_Lean_Meta_toPartialOrder___closed__0_once, _init_l_Lean_Meta_toPartialOrder___closed__0);
v___x_308_ = l_Lean_stringToMessageData(v___x_307_);
return v___x_308_;
}
}
static lean_object* _init_l_Lean_Meta_toPartialOrder___closed__2(void){
_start:
{
lean_object* v___x_309_; 
v___x_309_ = lean_mk_string_unchecked("toPartialOrder", 14, 14);
return v___x_309_;
}
}
static lean_object* _init_l_Lean_Meta_toPartialOrder___closed__3(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_310_ = lean_obj_once(&l_Lean_Meta_toPartialOrder___closed__2, &l_Lean_Meta_toPartialOrder___closed__2_once, _init_l_Lean_Meta_toPartialOrder___closed__2);
v___x_311_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__4, &l_Lean_Meta_mkInstPiOfInstForall___closed__4_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__4);
v___x_312_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__1, &l_Lean_Meta_mkInstPiOfInstForall___closed__1_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__1);
v___x_313_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__0, &l_Lean_Meta_mkInstPiOfInstForall___closed__0_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__0);
v___x_314_ = l_Lean_Name_mkStr4(v___x_313_, v___x_312_, v___x_311_, v___x_310_);
return v___x_314_;
}
}
static lean_object* _init_l_Lean_Meta_toPartialOrder___closed__4(void){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_315_ = lean_obj_once(&l_Lean_Meta_toPartialOrder___closed__2, &l_Lean_Meta_toPartialOrder___closed__2_once, _init_l_Lean_Meta_toPartialOrder___closed__2);
v___x_316_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__2, &l_Lean_Meta_mkInstPiOfInstForall___closed__2_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__2);
v___x_317_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__1, &l_Lean_Meta_mkInstPiOfInstForall___closed__1_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__1);
v___x_318_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__0, &l_Lean_Meta_mkInstPiOfInstForall___closed__0_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__0);
v___x_319_ = l_Lean_Name_mkStr4(v___x_318_, v___x_317_, v___x_316_, v___x_315_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_toPartialOrder(lean_object* v_packedInst_320_, lean_object* v_type_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_){
_start:
{
lean_object* v___x_327_; 
lean_inc(v_a_325_);
lean_inc_ref(v_a_324_);
lean_inc(v_a_323_);
lean_inc_ref(v_a_322_);
lean_inc_ref(v_packedInst_320_);
v___x_327_ = lean_infer_type(v_packedInst_320_, v_a_322_, v_a_323_, v_a_324_, v_a_325_);
if (lean_obj_tag(v___x_327_) == 0)
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_364_; 
v_a_328_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_364_ == 0)
{
v___x_330_ = v___x_327_;
v_isShared_331_ = v_isSharedCheck_364_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_327_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_364_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_332_; uint8_t v___x_333_; 
v___x_332_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__3, &l_Lean_Meta_mkInstPiOfInstForall___closed__3_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__3);
v___x_333_ = l_Lean_Expr_isAppOf(v_a_328_, v___x_332_);
lean_dec(v_a_328_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; 
lean_del_object(v___x_330_);
lean_inc(v_a_325_);
lean_inc_ref(v_a_324_);
lean_inc(v_a_323_);
lean_inc_ref(v_a_322_);
lean_inc_ref(v_packedInst_320_);
v___x_334_ = lean_infer_type(v_packedInst_320_, v_a_322_, v_a_323_, v_a_324_, v_a_325_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_354_; 
v_a_335_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_354_ == 0)
{
v___x_337_ = v___x_334_;
v_isShared_338_ = v_isSharedCheck_354_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_a_335_);
lean_dec(v___x_334_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_354_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_339_; uint8_t v___x_340_; 
v___x_339_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__5, &l_Lean_Meta_mkInstPiOfInstForall___closed__5_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__5);
v___x_340_ = l_Lean_Expr_isAppOf(v_a_335_, v___x_339_);
lean_dec(v_a_335_);
if (v___x_340_ == 0)
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
lean_del_object(v___x_337_);
lean_dec(v_type_321_);
v___x_341_ = lean_obj_once(&l_Lean_Meta_toPartialOrder___closed__1, &l_Lean_Meta_toPartialOrder___closed__1_once, _init_l_Lean_Meta_toPartialOrder___closed__1);
v___x_342_ = l_Lean_MessageData_ofExpr(v_packedInst_320_);
v___x_343_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_343_, 0, v___x_341_);
lean_ctor_set(v___x_343_, 1, v___x_342_);
v___x_344_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v___x_343_, v_a_322_, v_a_323_, v_a_324_, v_a_325_);
return v___x_344_;
}
else
{
lean_object* v___x_345_; lean_object* v___x_347_; 
v___x_345_ = lean_obj_once(&l_Lean_Meta_toPartialOrder___closed__3, &l_Lean_Meta_toPartialOrder___closed__3_once, _init_l_Lean_Meta_toPartialOrder___closed__3);
if (v_isShared_338_ == 0)
{
lean_ctor_set_tag(v___x_337_, 1);
lean_ctor_set(v___x_337_, 0, v_packedInst_320_);
v___x_347_ = v___x_337_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_packedInst_320_);
v___x_347_ = v_reuseFailAlloc_353_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_348_ = lean_unsigned_to_nat(2u);
v___x_349_ = lean_mk_empty_array_with_capacity(v___x_348_);
v___x_350_ = lean_array_push(v___x_349_, v_type_321_);
v___x_351_ = lean_array_push(v___x_350_, v___x_347_);
v___x_352_ = l_Lean_Meta_mkAppOptM(v___x_345_, v___x_351_, v_a_322_, v_a_323_, v_a_324_, v_a_325_);
return v___x_352_;
}
}
}
}
else
{
lean_dec(v_type_321_);
lean_dec_ref(v_packedInst_320_);
return v___x_334_;
}
}
else
{
lean_object* v___x_355_; lean_object* v___x_357_; 
v___x_355_ = lean_obj_once(&l_Lean_Meta_toPartialOrder___closed__4, &l_Lean_Meta_toPartialOrder___closed__4_once, _init_l_Lean_Meta_toPartialOrder___closed__4);
if (v_isShared_331_ == 0)
{
lean_ctor_set_tag(v___x_330_, 1);
lean_ctor_set(v___x_330_, 0, v_packedInst_320_);
v___x_357_ = v___x_330_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_packedInst_320_);
v___x_357_ = v_reuseFailAlloc_363_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_358_ = lean_unsigned_to_nat(2u);
v___x_359_ = lean_mk_empty_array_with_capacity(v___x_358_);
v___x_360_ = lean_array_push(v___x_359_, v_type_321_);
v___x_361_ = lean_array_push(v___x_360_, v___x_357_);
v___x_362_ = l_Lean_Meta_mkAppOptM(v___x_355_, v___x_361_, v_a_322_, v_a_323_, v_a_324_, v_a_325_);
return v___x_362_;
}
}
}
}
else
{
lean_dec(v_type_321_);
lean_dec_ref(v_packedInst_320_);
return v___x_327_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_toPartialOrder___boxed(lean_object* v_packedInst_365_, lean_object* v_type_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lean_Meta_toPartialOrder(v_packedInst_365_, v_type_366_, v_a_367_, v_a_368_, v_a_369_, v_a_370_);
lean_dec(v_a_370_);
lean_dec_ref(v_a_369_);
lean_dec(v_a_368_);
lean_dec_ref(v_a_367_);
return v_res_372_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstCCPOPProd___closed__0(void){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = lean_mk_string_unchecked("instCCPOPProd", 13, 13);
return v___x_373_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstCCPOPProd___closed__1(void){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_374_ = lean_obj_once(&l_Lean_Meta_mkInstCCPOPProd___closed__0, &l_Lean_Meta_mkInstCCPOPProd___closed__0_once, _init_l_Lean_Meta_mkInstCCPOPProd___closed__0);
v___x_375_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__1, &l_Lean_Meta_mkInstPiOfInstForall___closed__1_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__1);
v___x_376_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__0, &l_Lean_Meta_mkInstPiOfInstForall___closed__0_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__0);
v___x_377_ = l_Lean_Name_mkStr3(v___x_376_, v___x_375_, v___x_374_);
return v___x_377_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstCCPOPProd___closed__2(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_378_ = lean_box(0);
v___x_379_ = lean_unsigned_to_nat(4u);
v___x_380_ = lean_mk_empty_array_with_capacity(v___x_379_);
v___x_381_ = lean_array_push(v___x_380_, v___x_378_);
return v___x_381_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstCCPOPProd___closed__3(void){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_382_ = lean_box(0);
v___x_383_ = lean_obj_once(&l_Lean_Meta_mkInstCCPOPProd___closed__2, &l_Lean_Meta_mkInstCCPOPProd___closed__2_once, _init_l_Lean_Meta_mkInstCCPOPProd___closed__2);
v___x_384_ = lean_array_push(v___x_383_, v___x_382_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCCPOPProd(lean_object* v_inst_u2081_385_, lean_object* v_inst_u2082_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_392_ = lean_obj_once(&l_Lean_Meta_mkInstCCPOPProd___closed__1, &l_Lean_Meta_mkInstCCPOPProd___closed__1_once, _init_l_Lean_Meta_mkInstCCPOPProd___closed__1);
v___x_393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_393_, 0, v_inst_u2081_385_);
v___x_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_394_, 0, v_inst_u2082_386_);
v___x_395_ = lean_obj_once(&l_Lean_Meta_mkInstCCPOPProd___closed__3, &l_Lean_Meta_mkInstCCPOPProd___closed__3_once, _init_l_Lean_Meta_mkInstCCPOPProd___closed__3);
v___x_396_ = lean_array_push(v___x_395_, v___x_393_);
v___x_397_ = lean_array_push(v___x_396_, v___x_394_);
v___x_398_ = l_Lean_Meta_mkAppOptM(v___x_392_, v___x_397_, v_a_387_, v_a_388_, v_a_389_, v_a_390_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCCPOPProd___boxed(lean_object* v_inst_u2081_399_, lean_object* v_inst_u2082_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l_Lean_Meta_mkInstCCPOPProd(v_inst_u2081_399_, v_inst_u2082_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_);
lean_dec(v_a_404_);
lean_dec_ref(v_a_403_);
lean_dec(v_a_402_);
lean_dec_ref(v_a_401_);
return v_res_406_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstCompleteLatticePProd___closed__0(void){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = lean_mk_string_unchecked("instCompleteLatticePProd", 24, 24);
return v___x_407_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstCompleteLatticePProd___closed__1(void){
_start:
{
lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_408_ = lean_obj_once(&l_Lean_Meta_mkInstCompleteLatticePProd___closed__0, &l_Lean_Meta_mkInstCompleteLatticePProd___closed__0_once, _init_l_Lean_Meta_mkInstCompleteLatticePProd___closed__0);
v___x_409_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__1, &l_Lean_Meta_mkInstPiOfInstForall___closed__1_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__1);
v___x_410_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__0, &l_Lean_Meta_mkInstPiOfInstForall___closed__0_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__0);
v___x_411_ = l_Lean_Name_mkStr3(v___x_410_, v___x_409_, v___x_408_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCompleteLatticePProd(lean_object* v_inst_u2081_412_, lean_object* v_inst_u2082_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_419_ = lean_obj_once(&l_Lean_Meta_mkInstCompleteLatticePProd___closed__1, &l_Lean_Meta_mkInstCompleteLatticePProd___closed__1_once, _init_l_Lean_Meta_mkInstCompleteLatticePProd___closed__1);
v___x_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_420_, 0, v_inst_u2081_412_);
v___x_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_421_, 0, v_inst_u2082_413_);
v___x_422_ = lean_obj_once(&l_Lean_Meta_mkInstCCPOPProd___closed__3, &l_Lean_Meta_mkInstCCPOPProd___closed__3_once, _init_l_Lean_Meta_mkInstCCPOPProd___closed__3);
v___x_423_ = lean_array_push(v___x_422_, v___x_420_);
v___x_424_ = lean_array_push(v___x_423_, v___x_421_);
v___x_425_ = l_Lean_Meta_mkAppOptM(v___x_419_, v___x_424_, v_a_414_, v_a_415_, v_a_416_, v_a_417_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCompleteLatticePProd___boxed(lean_object* v_inst_u2081_426_, lean_object* v_inst_u2082_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lean_Meta_mkInstCompleteLatticePProd(v_inst_u2081_426_, v_inst_u2082_427_, v_a_428_, v_a_429_, v_a_430_, v_a_431_);
lean_dec(v_a_431_);
lean_dec_ref(v_a_430_);
lean_dec(v_a_429_);
lean_dec_ref(v_a_428_);
return v_res_433_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1(lean_object* v_as_434_, size_t v_i_435_, size_t v_stop_436_){
_start:
{
uint8_t v___x_437_; 
v___x_437_ = lean_usize_dec_eq(v_i_435_, v_stop_436_);
if (v___x_437_ == 0)
{
uint8_t v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; uint8_t v___x_441_; 
v___x_438_ = 1;
v___x_439_ = lean_array_uget_borrowed(v_as_434_, v_i_435_);
v___x_440_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__3, &l_Lean_Meta_mkInstPiOfInstForall___closed__3_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__3);
v___x_441_ = l_Lean_Expr_isAppOf(v___x_439_, v___x_440_);
if (v___x_441_ == 0)
{
return v___x_438_;
}
else
{
if (v___x_437_ == 0)
{
size_t v___x_442_; size_t v___x_443_; 
v___x_442_ = ((size_t)1ULL);
v___x_443_ = lean_usize_add(v_i_435_, v___x_442_);
v_i_435_ = v___x_443_;
goto _start;
}
else
{
return v___x_438_;
}
}
}
else
{
uint8_t v___x_445_; 
v___x_445_ = 0;
return v___x_445_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1___boxed(lean_object* v_as_446_, lean_object* v_i_447_, lean_object* v_stop_448_){
_start:
{
size_t v_i_boxed_449_; size_t v_stop_boxed_450_; uint8_t v_res_451_; lean_object* v_r_452_; 
v_i_boxed_449_ = lean_unbox_usize(v_i_447_);
lean_dec(v_i_447_);
v_stop_boxed_450_ = lean_unbox_usize(v_stop_448_);
lean_dec(v_stop_448_);
v_res_451_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1(v_as_446_, v_i_boxed_449_, v_stop_boxed_450_);
lean_dec_ref(v_as_446_);
v_r_452_ = lean_box(v_res_451_);
return v_r_452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0(size_t v_sz_453_, size_t v_i_454_, lean_object* v_bs_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_){
_start:
{
uint8_t v___x_461_; 
v___x_461_ = lean_usize_dec_lt(v_i_454_, v_sz_453_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; 
v___x_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_462_, 0, v_bs_455_);
return v___x_462_;
}
else
{
lean_object* v_v_463_; lean_object* v___x_464_; 
v_v_463_ = lean_array_uget_borrowed(v_bs_455_, v_i_454_);
lean_inc(v___y_459_);
lean_inc_ref(v___y_458_);
lean_inc(v___y_457_);
lean_inc_ref(v___y_456_);
lean_inc(v_v_463_);
v___x_464_ = lean_infer_type(v_v_463_, v___y_456_, v___y_457_, v___y_458_, v___y_459_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; lean_object* v___x_466_; lean_object* v_bs_x27_467_; size_t v___x_468_; size_t v___x_469_; lean_object* v___x_470_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
lean_inc(v_a_465_);
lean_dec_ref(v___x_464_);
v___x_466_ = lean_unsigned_to_nat(0u);
v_bs_x27_467_ = lean_array_uset(v_bs_455_, v_i_454_, v___x_466_);
v___x_468_ = ((size_t)1ULL);
v___x_469_ = lean_usize_add(v_i_454_, v___x_468_);
v___x_470_ = lean_array_uset(v_bs_x27_467_, v_i_454_, v_a_465_);
v_i_454_ = v___x_469_;
v_bs_455_ = v___x_470_;
goto _start;
}
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
lean_dec_ref(v_bs_455_);
v_a_472_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v___x_464_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_464_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_a_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0___boxed(lean_object* v_sz_480_, lean_object* v_i_481_, lean_object* v_bs_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
size_t v_sz_boxed_488_; size_t v_i_boxed_489_; lean_object* v_res_490_; 
v_sz_boxed_488_ = lean_unbox_usize(v_sz_480_);
lean_dec(v_sz_480_);
v_i_boxed_489_ = lean_unbox_usize(v_i_481_);
lean_dec(v_i_481_);
v_res_490_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0(v_sz_boxed_488_, v_i_boxed_489_, v_bs_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
return v_res_490_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2(uint8_t v___x_491_, lean_object* v_as_492_, size_t v_i_493_, size_t v_stop_494_){
_start:
{
uint8_t v___x_499_; 
v___x_499_ = lean_usize_dec_eq(v_i_493_, v_stop_494_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; lean_object* v___x_501_; uint8_t v___x_502_; 
v___x_500_ = lean_array_uget_borrowed(v_as_492_, v_i_493_);
v___x_501_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__5, &l_Lean_Meta_mkInstPiOfInstForall___closed__5_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__5);
v___x_502_ = l_Lean_Expr_isAppOf(v___x_500_, v___x_501_);
if (v___x_502_ == 0)
{
if (v___x_491_ == 0)
{
goto v___jp_495_;
}
else
{
return v___x_491_;
}
}
else
{
goto v___jp_495_;
}
}
else
{
uint8_t v___x_503_; 
v___x_503_ = 0;
return v___x_503_;
}
v___jp_495_:
{
size_t v___x_496_; size_t v___x_497_; 
v___x_496_ = ((size_t)1ULL);
v___x_497_ = lean_usize_add(v_i_493_, v___x_496_);
v_i_493_ = v___x_497_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2___boxed(lean_object* v___x_504_, lean_object* v_as_505_, lean_object* v_i_506_, lean_object* v_stop_507_){
_start:
{
uint8_t v___x_1465__boxed_508_; size_t v_i_boxed_509_; size_t v_stop_boxed_510_; uint8_t v_res_511_; lean_object* v_r_512_; 
v___x_1465__boxed_508_ = lean_unbox(v___x_504_);
v_i_boxed_509_ = lean_unbox_usize(v_i_506_);
lean_dec(v_i_506_);
v_stop_boxed_510_ = lean_unbox_usize(v_stop_507_);
lean_dec(v_stop_507_);
v_res_511_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2(v___x_1465__boxed_508_, v_as_505_, v_i_boxed_509_, v_stop_boxed_510_);
lean_dec_ref(v_as_505_);
v_r_512_ = lean_box(v_res_511_);
return v_r_512_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkPackedPPRodInstance_spec__3(lean_object* v_a_513_, lean_object* v_a_514_){
_start:
{
if (lean_obj_tag(v_a_513_) == 0)
{
lean_object* v___x_515_; 
v___x_515_ = l_List_reverse___redArg(v_a_514_);
return v___x_515_;
}
else
{
lean_object* v_head_516_; lean_object* v_tail_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_526_; 
v_head_516_ = lean_ctor_get(v_a_513_, 0);
v_tail_517_ = lean_ctor_get(v_a_513_, 1);
v_isSharedCheck_526_ = !lean_is_exclusive(v_a_513_);
if (v_isSharedCheck_526_ == 0)
{
v___x_519_ = v_a_513_;
v_isShared_520_ = v_isSharedCheck_526_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_tail_517_);
lean_inc(v_head_516_);
lean_dec(v_a_513_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_526_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_521_; lean_object* v___x_523_; 
v___x_521_ = l_Lean_MessageData_ofExpr(v_head_516_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 1, v_a_514_);
lean_ctor_set(v___x_519_, 0, v___x_521_);
v___x_523_ = v___x_519_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_521_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v_a_514_);
v___x_523_ = v_reuseFailAlloc_525_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
v_a_513_ = v_tail_517_;
v_a_514_ = v___x_523_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_mkPackedPPRodInstance___closed__0(void){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = lean_alloc_closure((void*)(l_Lean_Meta_mkInstCompleteLatticePProd___boxed), 7, 0);
return v___x_527_;
}
}
static lean_object* _init_l_Lean_Meta_mkPackedPPRodInstance___closed__1(void){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = lean_alloc_closure((void*)(l_Lean_Meta_mkInstCCPOPProd___boxed), 7, 0);
return v___x_528_;
}
}
static lean_object* _init_l_Lean_Meta_mkPackedPPRodInstance___closed__2(void){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = lean_mk_string_unchecked("mkPackedPPRoodInstance: unexpected types ", 41, 41);
return v___x_529_;
}
}
static lean_object* _init_l_Lean_Meta_mkPackedPPRodInstance___closed__3(void){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = lean_obj_once(&l_Lean_Meta_mkPackedPPRodInstance___closed__2, &l_Lean_Meta_mkPackedPPRodInstance___closed__2_once, _init_l_Lean_Meta_mkPackedPPRodInstance___closed__2);
v___x_531_ = l_Lean_stringToMessageData(v___x_530_);
return v___x_531_;
}
}
static lean_object* _init_l_Lean_Meta_mkPackedPPRodInstance___closed__4(void){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = lean_mk_string_unchecked(" of ", 4, 4);
return v___x_532_;
}
}
static lean_object* _init_l_Lean_Meta_mkPackedPPRodInstance___closed__5(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = lean_obj_once(&l_Lean_Meta_mkPackedPPRodInstance___closed__4, &l_Lean_Meta_mkPackedPPRodInstance___closed__4_once, _init_l_Lean_Meta_mkPackedPPRodInstance___closed__4);
v___x_534_ = l_Lean_stringToMessageData(v___x_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPackedPPRodInstance(lean_object* v_insts_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_){
_start:
{
size_t v_sz_541_; size_t v___x_542_; lean_object* v___x_543_; 
v_sz_541_ = lean_array_size(v_insts_535_);
v___x_542_ = ((size_t)0ULL);
lean_inc_ref(v_insts_535_);
v___x_543_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0(v_sz_541_, v___x_542_, v_insts_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_);
if (lean_obj_tag(v___x_543_) == 0)
{
lean_object* v_a_544_; lean_object* v___x_553_; lean_object* v___x_554_; uint8_t v___x_555_; 
v_a_544_ = lean_ctor_get(v___x_543_, 0);
lean_inc(v_a_544_);
lean_dec_ref(v___x_543_);
v___x_553_ = lean_unsigned_to_nat(0u);
v___x_554_ = lean_array_get_size(v_a_544_);
v___x_555_ = lean_nat_dec_lt(v___x_553_, v___x_554_);
if (v___x_555_ == 0)
{
lean_dec(v_a_544_);
goto v___jp_549_;
}
else
{
if (v___x_555_ == 0)
{
lean_dec(v_a_544_);
goto v___jp_549_;
}
else
{
size_t v___x_556_; uint8_t v___x_557_; 
v___x_556_ = lean_usize_of_nat(v___x_554_);
v___x_557_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1(v_a_544_, v___x_542_, v___x_556_);
if (v___x_557_ == 0)
{
lean_dec(v_a_544_);
goto v___jp_549_;
}
else
{
if (v___x_555_ == 0)
{
lean_dec(v_a_544_);
goto v___jp_545_;
}
else
{
if (v___x_555_ == 0)
{
lean_dec(v_a_544_);
goto v___jp_545_;
}
else
{
uint8_t v___x_558_; 
v___x_558_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2(v___x_557_, v_a_544_, v___x_542_, v___x_556_);
if (v___x_558_ == 0)
{
lean_dec(v_a_544_);
goto v___jp_545_;
}
else
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_559_ = lean_obj_once(&l_Lean_Meta_mkPackedPPRodInstance___closed__3, &l_Lean_Meta_mkPackedPPRodInstance___closed__3_once, _init_l_Lean_Meta_mkPackedPPRodInstance___closed__3);
v___x_560_ = lean_array_to_list(v_a_544_);
v___x_561_ = lean_box(0);
v___x_562_ = l_List_mapTR_loop___at___00Lean_Meta_mkPackedPPRodInstance_spec__3(v___x_560_, v___x_561_);
v___x_563_ = l_Lean_MessageData_ofList(v___x_562_);
v___x_564_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_564_, 0, v___x_559_);
lean_ctor_set(v___x_564_, 1, v___x_563_);
v___x_565_ = lean_obj_once(&l_Lean_Meta_mkPackedPPRodInstance___closed__5, &l_Lean_Meta_mkPackedPPRodInstance___closed__5_once, _init_l_Lean_Meta_mkPackedPPRodInstance___closed__5);
v___x_566_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_566_, 0, v___x_564_);
lean_ctor_set(v___x_566_, 1, v___x_565_);
v___x_567_ = lean_array_to_list(v_insts_535_);
v___x_568_ = l_List_mapTR_loop___at___00Lean_Meta_mkPackedPPRodInstance_spec__3(v___x_567_, v___x_561_);
v___x_569_ = l_Lean_MessageData_ofList(v___x_568_);
v___x_570_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_570_, 0, v___x_566_);
lean_ctor_set(v___x_570_, 1, v___x_569_);
v___x_571_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v___x_570_, v_a_536_, v_a_537_, v_a_538_, v_a_539_);
return v___x_571_;
}
}
}
}
}
}
v___jp_545_:
{
lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_546_ = l_Lean_instInhabitedExpr;
v___x_547_ = lean_obj_once(&l_Lean_Meta_mkPackedPPRodInstance___closed__0, &l_Lean_Meta_mkPackedPPRodInstance___closed__0_once, _init_l_Lean_Meta_mkPackedPPRodInstance___closed__0);
v___x_548_ = l_Lean_Meta_PProdN_genMk___redArg(v___x_546_, v___x_547_, v_insts_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_);
return v___x_548_;
}
v___jp_549_:
{
lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_550_ = l_Lean_instInhabitedExpr;
v___x_551_ = lean_obj_once(&l_Lean_Meta_mkPackedPPRodInstance___closed__1, &l_Lean_Meta_mkPackedPPRodInstance___closed__1_once, _init_l_Lean_Meta_mkPackedPPRodInstance___closed__1);
v___x_552_ = l_Lean_Meta_PProdN_genMk___redArg(v___x_550_, v___x_551_, v_insts_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_);
return v___x_552_;
}
}
else
{
lean_object* v_a_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_579_; 
lean_dec_ref(v_insts_535_);
v_a_572_ = lean_ctor_get(v___x_543_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_543_);
if (v_isSharedCheck_579_ == 0)
{
v___x_574_ = v___x_543_;
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_a_572_);
lean_dec(v___x_543_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_577_; 
if (v_isShared_575_ == 0)
{
v___x_577_ = v___x_574_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_a_572_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPackedPPRodInstance___boxed(lean_object* v_insts_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Lean_Meta_mkPackedPPRodInstance(v_insts_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_);
lean_dec(v_a_584_);
lean_dec_ref(v_a_583_);
lean_dec(v_a_582_);
lean_dec_ref(v_a_581_);
return v_res_586_;
}
}
lean_object* runtime_initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Init_Internal_Order_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Order(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Order(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Init_Internal_Order_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Order(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Order(builtin);
}
#ifdef __cplusplus
}
#endif
