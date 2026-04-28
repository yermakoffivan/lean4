// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.AC.ToExpr
// Imports: public import Init.Grind.AC public import Lean.ToExpr
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
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_AC_ofSeq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_ofSeq___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_AC_ofSeq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_ofSeq___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_AC_ofSeq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_ofSeq___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_AC_ofSeq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_ofSeq___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_AC_ofSeq___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_ofSeq___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_AC_ofSeq___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_ofSeq___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_AC_ofSeq___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_ofSeq___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_AC_ofSeq___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_ofSeq___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_AC_ofSeq___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_ofSeq___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_AC_ofSeq___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_ofSeq___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_ofSeq(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_AC_instToExprSeq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_instToExprSeq___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_AC_instToExprSeq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_instToExprSeq___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_AC_instToExprSeq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_instToExprSeq___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_AC_instToExprSeq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_instToExprSeq___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_instToExprSeq;
static lean_once_cell_t l_Lean_Meta_Grind_AC_ofExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_ofExpr___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_AC_ofExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_ofExpr___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_AC_ofExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_ofExpr___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_AC_ofExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_ofExpr___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_AC_ofExpr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_ofExpr___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_AC_ofExpr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_ofExpr___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_ofExpr(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_AC_instToExprExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_instToExprExpr___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_AC_instToExprExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_instToExprExpr___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_AC_instToExprExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_instToExprExpr___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_AC_instToExprExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_instToExprExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_instToExprExpr;
static lean_object* _init_l_Lean_Meta_Grind_AC_ofSeq___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_ofSeq___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_ofSeq___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("AC", 2, 2);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_ofSeq___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("Seq", 3, 3);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_ofSeq___closed__4(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_mk_string_unchecked("var", 3, 3);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_ofSeq___closed__5(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_6_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__4, &l_Lean_Meta_Grind_AC_ofSeq___closed__4_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__4);
v___x_7_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__3, &l_Lean_Meta_Grind_AC_ofSeq___closed__3_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__3);
v___x_8_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__2, &l_Lean_Meta_Grind_AC_ofSeq___closed__2_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__2);
v___x_9_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__1, &l_Lean_Meta_Grind_AC_ofSeq___closed__1_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__1);
v___x_10_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__0, &l_Lean_Meta_Grind_AC_ofSeq___closed__0_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__0);
v___x_11_ = l_Lean_Name_mkStr5(v___x_10_, v___x_9_, v___x_8_, v___x_7_, v___x_6_);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_ofSeq___closed__6(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = lean_box(0);
v___x_13_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__5, &l_Lean_Meta_Grind_AC_ofSeq___closed__5_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__5);
v___x_14_ = l_Lean_mkConst(v___x_13_, v___x_12_);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_ofSeq___closed__7(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_mk_string_unchecked("cons", 4, 4);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_ofSeq___closed__8(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_16_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__7, &l_Lean_Meta_Grind_AC_ofSeq___closed__7_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__7);
v___x_17_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__3, &l_Lean_Meta_Grind_AC_ofSeq___closed__3_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__3);
v___x_18_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__2, &l_Lean_Meta_Grind_AC_ofSeq___closed__2_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__2);
v___x_19_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__1, &l_Lean_Meta_Grind_AC_ofSeq___closed__1_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__1);
v___x_20_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__0, &l_Lean_Meta_Grind_AC_ofSeq___closed__0_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__0);
v___x_21_ = l_Lean_Name_mkStr5(v___x_20_, v___x_19_, v___x_18_, v___x_17_, v___x_16_);
return v___x_21_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_ofSeq___closed__9(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_22_ = lean_box(0);
v___x_23_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__8, &l_Lean_Meta_Grind_AC_ofSeq___closed__8_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__8);
v___x_24_ = l_Lean_mkConst(v___x_23_, v___x_22_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_ofSeq(lean_object* v_m_25_){
_start:
{
if (lean_obj_tag(v_m_25_) == 0)
{
lean_object* v_x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v_x_26_ = lean_ctor_get(v_m_25_, 0);
lean_inc(v_x_26_);
lean_dec_ref(v_m_25_);
v___x_27_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__6, &l_Lean_Meta_Grind_AC_ofSeq___closed__6_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__6);
v___x_28_ = l_Lean_mkNatLit(v_x_26_);
v___x_29_ = l_Lean_Expr_app___override(v___x_27_, v___x_28_);
return v___x_29_;
}
else
{
lean_object* v_x_30_; lean_object* v_s_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v_x_30_ = lean_ctor_get(v_m_25_, 0);
lean_inc(v_x_30_);
v_s_31_ = lean_ctor_get(v_m_25_, 1);
lean_inc_ref(v_s_31_);
lean_dec_ref(v_m_25_);
v___x_32_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__9, &l_Lean_Meta_Grind_AC_ofSeq___closed__9_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__9);
v___x_33_ = l_Lean_mkNatLit(v_x_30_);
v___x_34_ = l_Lean_Meta_Grind_AC_ofSeq(v_s_31_);
v___x_35_ = l_Lean_mkAppB(v___x_32_, v___x_33_, v___x_34_);
return v___x_35_;
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_instToExprSeq___closed__0(void){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_AC_ofSeq), 1, 0);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_instToExprSeq___closed__1(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_37_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__3, &l_Lean_Meta_Grind_AC_ofSeq___closed__3_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__3);
v___x_38_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__2, &l_Lean_Meta_Grind_AC_ofSeq___closed__2_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__2);
v___x_39_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__1, &l_Lean_Meta_Grind_AC_ofSeq___closed__1_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__1);
v___x_40_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__0, &l_Lean_Meta_Grind_AC_ofSeq___closed__0_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__0);
v___x_41_ = l_Lean_Name_mkStr4(v___x_40_, v___x_39_, v___x_38_, v___x_37_);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_instToExprSeq___closed__2(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = lean_box(0);
v___x_43_ = lean_obj_once(&l_Lean_Meta_Grind_AC_instToExprSeq___closed__1, &l_Lean_Meta_Grind_AC_instToExprSeq___closed__1_once, _init_l_Lean_Meta_Grind_AC_instToExprSeq___closed__1);
v___x_44_ = l_Lean_mkConst(v___x_43_, v___x_42_);
return v___x_44_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_instToExprSeq___closed__3(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_45_ = lean_obj_once(&l_Lean_Meta_Grind_AC_instToExprSeq___closed__2, &l_Lean_Meta_Grind_AC_instToExprSeq___closed__2_once, _init_l_Lean_Meta_Grind_AC_instToExprSeq___closed__2);
v___x_46_ = lean_obj_once(&l_Lean_Meta_Grind_AC_instToExprSeq___closed__0, &l_Lean_Meta_Grind_AC_instToExprSeq___closed__0_once, _init_l_Lean_Meta_Grind_AC_instToExprSeq___closed__0);
v___x_47_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_47_, 0, v___x_46_);
lean_ctor_set(v___x_47_, 1, v___x_45_);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_instToExprSeq(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_obj_once(&l_Lean_Meta_Grind_AC_instToExprSeq___closed__3, &l_Lean_Meta_Grind_AC_instToExprSeq___closed__3_once, _init_l_Lean_Meta_Grind_AC_instToExprSeq___closed__3);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_ofExpr___closed__0(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_mk_string_unchecked("Expr", 4, 4);
return v___x_49_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_ofExpr___closed__1(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_50_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__4, &l_Lean_Meta_Grind_AC_ofSeq___closed__4_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__4);
v___x_51_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofExpr___closed__0, &l_Lean_Meta_Grind_AC_ofExpr___closed__0_once, _init_l_Lean_Meta_Grind_AC_ofExpr___closed__0);
v___x_52_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__2, &l_Lean_Meta_Grind_AC_ofSeq___closed__2_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__2);
v___x_53_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__1, &l_Lean_Meta_Grind_AC_ofSeq___closed__1_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__1);
v___x_54_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__0, &l_Lean_Meta_Grind_AC_ofSeq___closed__0_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__0);
v___x_55_ = l_Lean_Name_mkStr5(v___x_54_, v___x_53_, v___x_52_, v___x_51_, v___x_50_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_ofExpr___closed__2(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = lean_box(0);
v___x_57_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofExpr___closed__1, &l_Lean_Meta_Grind_AC_ofExpr___closed__1_once, _init_l_Lean_Meta_Grind_AC_ofExpr___closed__1);
v___x_58_ = l_Lean_mkConst(v___x_57_, v___x_56_);
return v___x_58_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_ofExpr___closed__3(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_mk_string_unchecked("op", 2, 2);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_ofExpr___closed__4(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_60_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofExpr___closed__3, &l_Lean_Meta_Grind_AC_ofExpr___closed__3_once, _init_l_Lean_Meta_Grind_AC_ofExpr___closed__3);
v___x_61_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofExpr___closed__0, &l_Lean_Meta_Grind_AC_ofExpr___closed__0_once, _init_l_Lean_Meta_Grind_AC_ofExpr___closed__0);
v___x_62_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__2, &l_Lean_Meta_Grind_AC_ofSeq___closed__2_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__2);
v___x_63_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__1, &l_Lean_Meta_Grind_AC_ofSeq___closed__1_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__1);
v___x_64_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__0, &l_Lean_Meta_Grind_AC_ofSeq___closed__0_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__0);
v___x_65_ = l_Lean_Name_mkStr5(v___x_64_, v___x_63_, v___x_62_, v___x_61_, v___x_60_);
return v___x_65_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_ofExpr___closed__5(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_66_ = lean_box(0);
v___x_67_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofExpr___closed__4, &l_Lean_Meta_Grind_AC_ofExpr___closed__4_once, _init_l_Lean_Meta_Grind_AC_ofExpr___closed__4);
v___x_68_ = l_Lean_mkConst(v___x_67_, v___x_66_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_ofExpr(lean_object* v_m_69_){
_start:
{
if (lean_obj_tag(v_m_69_) == 0)
{
lean_object* v_x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v_x_70_ = lean_ctor_get(v_m_69_, 0);
lean_inc(v_x_70_);
lean_dec_ref(v_m_69_);
v___x_71_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofExpr___closed__2, &l_Lean_Meta_Grind_AC_ofExpr___closed__2_once, _init_l_Lean_Meta_Grind_AC_ofExpr___closed__2);
v___x_72_ = l_Lean_mkNatLit(v_x_70_);
v___x_73_ = l_Lean_Expr_app___override(v___x_71_, v___x_72_);
return v___x_73_;
}
else
{
lean_object* v_lhs_74_; lean_object* v_rhs_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v_lhs_74_ = lean_ctor_get(v_m_69_, 0);
lean_inc_ref(v_lhs_74_);
v_rhs_75_ = lean_ctor_get(v_m_69_, 1);
lean_inc_ref(v_rhs_75_);
lean_dec_ref(v_m_69_);
v___x_76_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofExpr___closed__5, &l_Lean_Meta_Grind_AC_ofExpr___closed__5_once, _init_l_Lean_Meta_Grind_AC_ofExpr___closed__5);
v___x_77_ = l_Lean_Meta_Grind_AC_ofExpr(v_lhs_74_);
v___x_78_ = l_Lean_Meta_Grind_AC_ofExpr(v_rhs_75_);
v___x_79_ = l_Lean_mkAppB(v___x_76_, v___x_77_, v___x_78_);
return v___x_79_;
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_instToExprExpr___closed__0(void){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_AC_ofExpr), 1, 0);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_instToExprExpr___closed__1(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_81_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofExpr___closed__0, &l_Lean_Meta_Grind_AC_ofExpr___closed__0_once, _init_l_Lean_Meta_Grind_AC_ofExpr___closed__0);
v___x_82_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__2, &l_Lean_Meta_Grind_AC_ofSeq___closed__2_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__2);
v___x_83_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__1, &l_Lean_Meta_Grind_AC_ofSeq___closed__1_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__1);
v___x_84_ = lean_obj_once(&l_Lean_Meta_Grind_AC_ofSeq___closed__0, &l_Lean_Meta_Grind_AC_ofSeq___closed__0_once, _init_l_Lean_Meta_Grind_AC_ofSeq___closed__0);
v___x_85_ = l_Lean_Name_mkStr4(v___x_84_, v___x_83_, v___x_82_, v___x_81_);
return v___x_85_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_instToExprExpr___closed__2(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_86_ = lean_box(0);
v___x_87_ = lean_obj_once(&l_Lean_Meta_Grind_AC_instToExprExpr___closed__1, &l_Lean_Meta_Grind_AC_instToExprExpr___closed__1_once, _init_l_Lean_Meta_Grind_AC_instToExprExpr___closed__1);
v___x_88_ = l_Lean_mkConst(v___x_87_, v___x_86_);
return v___x_88_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_instToExprExpr___closed__3(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_89_ = lean_obj_once(&l_Lean_Meta_Grind_AC_instToExprExpr___closed__2, &l_Lean_Meta_Grind_AC_instToExprExpr___closed__2_once, _init_l_Lean_Meta_Grind_AC_instToExprExpr___closed__2);
v___x_90_ = lean_obj_once(&l_Lean_Meta_Grind_AC_instToExprExpr___closed__0, &l_Lean_Meta_Grind_AC_instToExprExpr___closed__0_once, _init_l_Lean_Meta_Grind_AC_instToExprExpr___closed__0);
v___x_91_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set(v___x_91_, 1, v___x_89_);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_instToExprExpr(void){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = lean_obj_once(&l_Lean_Meta_Grind_AC_instToExprExpr___closed__3, &l_Lean_Meta_Grind_AC_instToExprExpr___closed__3_once, _init_l_Lean_Meta_Grind_AC_instToExprExpr___closed__3);
return v___x_92_;
}
}
lean_object* runtime_initialize_Init_Grind_AC(uint8_t builtin);
lean_object* runtime_initialize_Lean_ToExpr(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_AC_ToExpr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Grind_AC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Grind_AC_instToExprSeq = _init_l_Lean_Meta_Grind_AC_instToExprSeq();
lean_mark_persistent(l_Lean_Meta_Grind_AC_instToExprSeq);
l_Lean_Meta_Grind_AC_instToExprExpr = _init_l_Lean_Meta_Grind_AC_instToExprExpr();
lean_mark_persistent(l_Lean_Meta_Grind_AC_instToExprExpr);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_AC_ToExpr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_AC(uint8_t builtin);
lean_object* initialize_Lean_ToExpr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_AC_ToExpr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_AC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_AC_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_AC_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_AC_ToExpr(builtin);
}
#ifdef __cplusplus
}
#endif
