// Lean compiler output
// Module: Lean.Data.Json.FromToJson.Extra
// Imports: public import Lean.Data.Json.FromToJson.Basic public import Std.Data.TreeMap.AdditionalOperations
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
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_pure(lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObj_x3f(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__3;
static lean_once_cell_t l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__4;
static lean_once_cell_t l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__5;
static lean_once_cell_t l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__6;
static lean_once_cell_t l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__7;
static lean_once_cell_t l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__8;
static lean_once_cell_t l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonTreeMapStringCompare___private__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonTreeMapStringCompare___private__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonTreeMapStringCompare___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonTreeMapStringCompare(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonTreeMapString___private__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonTreeMapString___private__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonTreeMapString___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonTreeMapString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___redArg___lam__0(lean_object* v_inst_1_, lean_object* v_x_2_, lean_object* v___y_3_){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_apply_1(v_inst_1_, v___y_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___redArg___lam__0___boxed(lean_object* v_inst_5_, lean_object* v_x_6_, lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___redArg___lam__0(v_inst_5_, v_x_6_, v___y_7_);
lean_dec_ref(v_x_6_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___redArg(lean_object* v_inst_9_, lean_object* v_map_10_){
_start:
{
lean_object* v___f_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___f_11_ = lean_alloc_closure((void*)(l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_11_, 0, v_inst_9_);
v___x_12_ = l_Std_DTreeMap_Internal_Impl_map___redArg(v___f_11_, v_map_10_);
v___x_13_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson(lean_object* v_00_u03b1_14_, lean_object* v_inst_15_, lean_object* v_map_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___redArg(v_inst_15_, v_map_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___lam__0(lean_object* v_inst_18_, lean_object* v_cmp_19_, lean_object* v_x_20_, lean_object* v_k_21_, lean_object* v_v_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = lean_apply_1(v_inst_18_, v_v_22_);
if (lean_obj_tag(v___x_23_) == 0)
{
lean_object* v_a_24_; lean_object* v___x_26_; uint8_t v_isShared_27_; uint8_t v_isSharedCheck_31_; 
lean_dec_ref(v_k_21_);
lean_dec(v_x_20_);
lean_dec_ref(v_cmp_19_);
v_a_24_ = lean_ctor_get(v___x_23_, 0);
v_isSharedCheck_31_ = !lean_is_exclusive(v___x_23_);
if (v_isSharedCheck_31_ == 0)
{
v___x_26_ = v___x_23_;
v_isShared_27_ = v_isSharedCheck_31_;
goto v_resetjp_25_;
}
else
{
lean_inc(v_a_24_);
lean_dec(v___x_23_);
v___x_26_ = lean_box(0);
v_isShared_27_ = v_isSharedCheck_31_;
goto v_resetjp_25_;
}
v_resetjp_25_:
{
lean_object* v___x_29_; 
if (v_isShared_27_ == 0)
{
v___x_29_ = v___x_26_;
goto v_reusejp_28_;
}
else
{
lean_object* v_reuseFailAlloc_30_; 
v_reuseFailAlloc_30_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_30_, 0, v_a_24_);
v___x_29_ = v_reuseFailAlloc_30_;
goto v_reusejp_28_;
}
v_reusejp_28_:
{
return v___x_29_;
}
}
}
else
{
lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_40_; 
v_a_32_ = lean_ctor_get(v___x_23_, 0);
v_isSharedCheck_40_ = !lean_is_exclusive(v___x_23_);
if (v_isSharedCheck_40_ == 0)
{
v___x_34_ = v___x_23_;
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_23_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_36_; lean_object* v___x_38_; 
v___x_36_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v_cmp_19_, v_k_21_, v_a_32_, v_x_20_);
if (v_isShared_35_ == 0)
{
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
}
static lean_object* _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___f_41_; 
v___f_41_ = lean_alloc_closure((void*)(l_Except_instMonad___lam__0), 4, 0);
return v___f_41_;
}
}
static lean_object* _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___f_42_; 
v___f_42_ = lean_alloc_closure((void*)(l_Except_instMonad___lam__1), 4, 0);
return v___f_42_;
}
}
static lean_object* _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__2(void){
_start:
{
lean_object* v___f_43_; 
v___f_43_ = lean_alloc_closure((void*)(l_Except_instMonad___lam__2___boxed), 4, 0);
return v___f_43_;
}
}
static lean_object* _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__3(void){
_start:
{
lean_object* v___f_44_; 
v___f_44_ = lean_alloc_closure((void*)(l_Except_instMonad___lam__3), 4, 0);
return v___f_44_;
}
}
static lean_object* _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__4(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_alloc_closure((void*)(l_Except_map), 5, 1);
lean_closure_set(v___x_45_, 0, lean_box(0));
return v___x_45_;
}
}
static lean_object* _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__5(void){
_start:
{
lean_object* v___f_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___f_46_ = lean_obj_once(&l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__0, &l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__0_once, _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__0);
v___x_47_ = lean_obj_once(&l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__4, &l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__4_once, _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__4);
v___x_48_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v___f_46_);
return v___x_48_;
}
}
static lean_object* _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__6(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_alloc_closure((void*)(l_Except_pure), 3, 1);
lean_closure_set(v___x_49_, 0, lean_box(0));
return v___x_49_;
}
}
static lean_object* _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__7(void){
_start:
{
lean_object* v___f_50_; lean_object* v___f_51_; lean_object* v___f_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___f_50_ = lean_obj_once(&l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__3, &l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__3_once, _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__3);
v___f_51_ = lean_obj_once(&l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__2, &l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__2_once, _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__2);
v___f_52_ = lean_obj_once(&l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__1, &l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__1_once, _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__1);
v___x_53_ = lean_obj_once(&l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__6, &l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__6_once, _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__6);
v___x_54_ = lean_obj_once(&l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__5, &l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__5_once, _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__5);
v___x_55_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v___x_53_);
lean_ctor_set(v___x_55_, 2, v___f_52_);
lean_ctor_set(v___x_55_, 3, v___f_51_);
lean_ctor_set(v___x_55_, 4, v___f_50_);
return v___x_55_;
}
}
static lean_object* _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__8(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_alloc_closure((void*)(l_Except_bind), 5, 1);
lean_closure_set(v___x_56_, 0, lean_box(0));
return v___x_56_;
}
}
static lean_object* _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__9(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = lean_obj_once(&l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__8, &l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__8_once, _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__8);
v___x_58_ = lean_obj_once(&l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__7, &l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__7_once, _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__7);
v___x_59_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set(v___x_59_, 1, v___x_57_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg(lean_object* v_cmp_60_, lean_object* v_inst_61_, lean_object* v_j_62_){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = lean_obj_once(&l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__9, &l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__9_once, _init_l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___closed__9);
v___x_64_ = l_Lean_Json_getObj_x3f(v_j_62_);
if (lean_obj_tag(v___x_64_) == 0)
{
lean_object* v_a_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_72_; 
lean_dec_ref(v_inst_61_);
lean_dec_ref(v_cmp_60_);
v_a_65_ = lean_ctor_get(v___x_64_, 0);
v_isSharedCheck_72_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_72_ == 0)
{
v___x_67_ = v___x_64_;
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_a_65_);
lean_dec(v___x_64_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v___x_70_; 
if (v_isShared_68_ == 0)
{
v___x_70_ = v___x_67_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_a_65_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
else
{
lean_object* v_a_73_; lean_object* v___f_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v_a_73_ = lean_ctor_get(v___x_64_, 0);
lean_inc(v_a_73_);
lean_dec_ref(v___x_64_);
v___f_74_ = lean_alloc_closure((void*)(l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg___lam__0), 5, 2);
lean_closure_set(v___f_74_, 0, v_inst_61_);
lean_closure_set(v___f_74_, 1, v_cmp_60_);
v___x_75_ = lean_box(1);
v___x_76_ = l_Std_DTreeMap_Internal_Impl_foldlM___redArg(v___x_63_, v___f_74_, v___x_75_, v_a_73_);
return v___x_76_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f(lean_object* v_00_u03b1_77_, lean_object* v_cmp_78_, lean_object* v_inst_79_, lean_object* v_j_80_){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg(v_cmp_78_, v_inst_79_, v_j_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonTreeMapStringCompare___private__1___redArg(lean_object* v_inst_82_, lean_object* v_map_83_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___redArg(v_inst_82_, v_map_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonTreeMapStringCompare___private__1(lean_object* v_00_u03b1_85_, lean_object* v_inst_86_, lean_object* v_map_87_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___redArg(v_inst_86_, v_map_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonTreeMapStringCompare___redArg(lean_object* v_inst_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_alloc_closure((void*)(l_Lean_instToJsonTreeMapStringCompare___private__1), 3, 2);
lean_closure_set(v___x_90_, 0, lean_box(0));
lean_closure_set(v___x_90_, 1, v_inst_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonTreeMapStringCompare(lean_object* v_00_u03b1_91_, lean_object* v_inst_92_){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = lean_alloc_closure((void*)(l_Lean_instToJsonTreeMapStringCompare___private__1), 3, 2);
lean_closure_set(v___x_93_, 0, lean_box(0));
lean_closure_set(v___x_93_, 1, v_inst_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonTreeMapString___private__1___redArg(lean_object* v_cmp_94_, lean_object* v_inst_95_, lean_object* v_j_96_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg(v_cmp_94_, v_inst_95_, v_j_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonTreeMapString___private__1(lean_object* v_00_u03b1_98_, lean_object* v_cmp_99_, lean_object* v_inst_100_, lean_object* v_j_101_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___redArg(v_cmp_99_, v_inst_100_, v_j_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonTreeMapString___redArg(lean_object* v_cmp_103_, lean_object* v_inst_104_){
_start:
{
lean_object* v___x_105_; 
v___x_105_ = lean_alloc_closure((void*)(l_Lean_instFromJsonTreeMapString___private__1), 4, 3);
lean_closure_set(v___x_105_, 0, lean_box(0));
lean_closure_set(v___x_105_, 1, v_cmp_103_);
lean_closure_set(v___x_105_, 2, v_inst_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonTreeMapString(lean_object* v_00_u03b1_106_, lean_object* v_cmp_107_, lean_object* v_inst_108_){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = lean_alloc_closure((void*)(l_Lean_instFromJsonTreeMapString___private__1), 4, 3);
lean_closure_set(v___x_109_, 0, lean_box(0));
lean_closure_set(v___x_109_, 1, v_cmp_107_);
lean_closure_set(v___x_109_, 2, v_inst_108_);
return v___x_109_;
}
}
lean_object* runtime_initialize_Lean_Data_Json_FromToJson_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_TreeMap_AdditionalOperations(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Json_FromToJson_Extra(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Data_Json_FromToJson_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_TreeMap_AdditionalOperations(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Json_FromToJson_Extra(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Json_FromToJson_Basic(uint8_t builtin);
lean_object* initialize_Std_Data_TreeMap_AdditionalOperations(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Json_FromToJson_Extra(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Json_FromToJson_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_TreeMap_AdditionalOperations(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Json_FromToJson_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Json_FromToJson_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Json_FromToJson_Extra(builtin);
}
#ifdef __cplusplus
}
#endif
