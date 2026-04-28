// Lean compiler output
// Module: Lean.Meta.Sym.Arith.Types
// Imports: public import Init.Grind.Ring.CommSemiringAdapter public import Lean.Meta.Sym.SymM
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Sym_registerSymExtension___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_SymExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedSemiring;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedRing_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedRing_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedRing_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedRing;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedCommRing;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_commRing_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_commRing_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_nonCommRing_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_nonCommRing_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_commSemiring_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_commSemiring_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_nonCommSemiring_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_nonCommSemiring_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_none_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_none_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedState_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedState;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___lam__0_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___lam__0_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___closed__0_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___closed__0_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_arithExt;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getArithState___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getArithState___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getArithState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getArithState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_modifyArithState___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_modifyArithState___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_modifyArithState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_modifyArithState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getExpThreshold___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getExpThreshold___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getExpThreshold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getExpThreshold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_withExpThreshold___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_withExpThreshold___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_withExpThreshold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_withExpThreshold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("_inhabitedExprDummy", 19, 19);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__0, &l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__0_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__0);
v___x_3_ = l_Lean_Name_mkStr1(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__1, &l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__1_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__1);
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__3(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_7_ = lean_box(0);
v___x_8_ = lean_box(0);
v___x_9_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2, &l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2);
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_11_, 0, v___x_10_);
lean_ctor_set(v___x_11_, 1, v___x_9_);
lean_ctor_set(v___x_11_, 2, v___x_8_);
lean_ctor_set(v___x_11_, 3, v___x_9_);
lean_ctor_set(v___x_11_, 4, v___x_7_);
lean_ctor_set(v___x_11_, 5, v___x_7_);
lean_ctor_set(v___x_11_, 6, v___x_7_);
lean_ctor_set(v___x_11_, 7, v___x_7_);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__3, &l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__3_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__3);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default;
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedRing_default___closed__0(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_14_ = lean_box(0);
v___x_15_ = lean_box(0);
v___x_16_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2, &l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2);
v___x_17_ = lean_unsigned_to_nat(0u);
v___x_18_ = lean_alloc_ctor(0, 14, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
lean_ctor_set(v___x_18_, 1, v___x_16_);
lean_ctor_set(v___x_18_, 2, v___x_15_);
lean_ctor_set(v___x_18_, 3, v___x_16_);
lean_ctor_set(v___x_18_, 4, v___x_16_);
lean_ctor_set(v___x_18_, 5, v___x_14_);
lean_ctor_set(v___x_18_, 6, v___x_14_);
lean_ctor_set(v___x_18_, 7, v___x_14_);
lean_ctor_set(v___x_18_, 8, v___x_14_);
lean_ctor_set(v___x_18_, 9, v___x_14_);
lean_ctor_set(v___x_18_, 10, v___x_14_);
lean_ctor_set(v___x_18_, 11, v___x_14_);
lean_ctor_set(v___x_18_, 12, v___x_14_);
lean_ctor_set(v___x_18_, 13, v___x_14_);
return v___x_18_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedRing_default(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedRing_default___closed__0, &l_Lean_Meta_Sym_Arith_instInhabitedRing_default___closed__0_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedRing_default___closed__0);
return v___x_19_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedRing(void){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = l_Lean_Meta_Sym_Arith_instInhabitedRing_default;
return v___x_20_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default___closed__0(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_21_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2, &l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2);
v___x_22_ = lean_box(0);
v___x_23_ = l_Lean_Meta_Sym_Arith_instInhabitedRing_default;
v___x_24_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
lean_ctor_set(v___x_24_, 1, v___x_22_);
lean_ctor_set(v___x_24_, 2, v___x_22_);
lean_ctor_set(v___x_24_, 3, v___x_21_);
lean_ctor_set(v___x_24_, 4, v___x_21_);
lean_ctor_set(v___x_24_, 5, v___x_22_);
lean_ctor_set(v___x_24_, 6, v___x_22_);
return v___x_24_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default(void){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default___closed__0, &l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default___closed__0_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default___closed__0);
return v___x_25_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedCommRing(void){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default;
return v___x_26_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default___closed__0(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_27_ = lean_box(0);
v___x_28_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2, &l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2);
v___x_29_ = lean_unsigned_to_nat(0u);
v___x_30_ = l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default;
v___x_31_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
lean_ctor_set(v___x_31_, 1, v___x_29_);
lean_ctor_set(v___x_31_, 2, v___x_28_);
lean_ctor_set(v___x_31_, 3, v___x_27_);
lean_ctor_set(v___x_31_, 4, v___x_27_);
return v___x_31_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default___closed__0, &l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default___closed__0_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default___closed__0);
return v___x_32_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring(void){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default;
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorIdx(lean_object* v_x_34_){
_start:
{
switch(lean_obj_tag(v_x_34_))
{
case 0:
{
lean_object* v___x_35_; 
v___x_35_ = lean_unsigned_to_nat(0u);
return v___x_35_;
}
case 1:
{
lean_object* v___x_36_; 
v___x_36_ = lean_unsigned_to_nat(1u);
return v___x_36_;
}
case 2:
{
lean_object* v___x_37_; 
v___x_37_ = lean_unsigned_to_nat(2u);
return v___x_37_;
}
case 3:
{
lean_object* v___x_38_; 
v___x_38_ = lean_unsigned_to_nat(3u);
return v___x_38_;
}
default: 
{
lean_object* v___x_39_; 
v___x_39_ = lean_unsigned_to_nat(4u);
return v___x_39_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorIdx___boxed(lean_object* v_x_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorIdx(v_x_40_);
lean_dec(v_x_40_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(lean_object* v_t_42_, lean_object* v_k_43_){
_start:
{
if (lean_obj_tag(v_t_42_) == 4)
{
return v_k_43_;
}
else
{
lean_object* v_id_44_; lean_object* v___x_45_; 
v_id_44_ = lean_ctor_get(v_t_42_, 0);
lean_inc(v_id_44_);
lean_dec(v_t_42_);
v___x_45_ = lean_apply_1(v_k_43_, v_id_44_);
return v___x_45_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim(lean_object* v_motive_46_, lean_object* v_ctorIdx_47_, lean_object* v_t_48_, lean_object* v_h_49_, lean_object* v_k_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_48_, v_k_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___boxed(lean_object* v_motive_52_, lean_object* v_ctorIdx_53_, lean_object* v_t_54_, lean_object* v_h_55_, lean_object* v_k_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim(v_motive_52_, v_ctorIdx_53_, v_t_54_, v_h_55_, v_k_56_);
lean_dec(v_ctorIdx_53_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_commRing_elim___redArg(lean_object* v_t_58_, lean_object* v_commRing_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_58_, v_commRing_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_commRing_elim(lean_object* v_motive_61_, lean_object* v_t_62_, lean_object* v_h_63_, lean_object* v_commRing_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_62_, v_commRing_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_nonCommRing_elim___redArg(lean_object* v_t_66_, lean_object* v_nonCommRing_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_66_, v_nonCommRing_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_nonCommRing_elim(lean_object* v_motive_69_, lean_object* v_t_70_, lean_object* v_h_71_, lean_object* v_nonCommRing_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_70_, v_nonCommRing_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_commSemiring_elim___redArg(lean_object* v_t_74_, lean_object* v_commSemiring_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_74_, v_commSemiring_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_commSemiring_elim(lean_object* v_motive_77_, lean_object* v_t_78_, lean_object* v_h_79_, lean_object* v_commSemiring_80_){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_78_, v_commSemiring_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_nonCommSemiring_elim___redArg(lean_object* v_t_82_, lean_object* v_nonCommSemiring_83_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_82_, v_nonCommSemiring_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_nonCommSemiring_elim(lean_object* v_motive_85_, lean_object* v_t_86_, lean_object* v_h_87_, lean_object* v_nonCommSemiring_88_){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_86_, v_nonCommSemiring_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_none_elim___redArg(lean_object* v_t_90_, lean_object* v_none_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_90_, v_none_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_none_elim(lean_object* v_motive_93_, lean_object* v_t_94_, lean_object* v_h_95_, lean_object* v_none_96_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_94_, v_none_96_);
return v___x_97_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default___closed__0(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_98_ = lean_unsigned_to_nat(0u);
v___x_99_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default(void){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default___closed__0, &l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default___closed__0_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default___closed__0);
return v___x_100_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult(void){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default;
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__0(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = lean_unsigned_to_nat(0u);
v___x_103_ = lean_mk_empty_array_with_capacity(v___x_102_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__1(void){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_104_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__2(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__1, &l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__1_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__1);
v___x_106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
return v___x_106_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_107_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__2, &l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__2_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__2);
v___x_108_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__0, &l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__0_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__0);
v___x_109_ = lean_unsigned_to_nat(8u);
v___x_110_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set(v___x_110_, 1, v___x_108_);
lean_ctor_set(v___x_110_, 2, v___x_108_);
lean_ctor_set(v___x_110_, 3, v___x_108_);
lean_ctor_set(v___x_110_, 4, v___x_108_);
lean_ctor_set(v___x_110_, 5, v___x_107_);
return v___x_110_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default(void){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3, &l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3);
return v___x_111_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedState(void){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = l_Lean_Meta_Sym_Arith_instInhabitedState_default;
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___lam__0_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2_(lean_object* v___x_113_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_115_, 0, v___x_113_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___lam__0_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2____boxed(lean_object* v___x_116_, lean_object* v___y_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___lam__0_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2_(v___x_116_);
return v_res_118_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___closed__0_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_119_; lean_object* v___f_120_; 
v___x_119_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3, &l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3);
v___f_120_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___lam__0_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_120_, 0, v___x_119_);
return v___f_120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_122_; lean_object* v___x_123_; 
v___f_122_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___closed__0_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___closed__0_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___closed__0_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2_);
v___x_123_ = l_Lean_Meta_Sym_registerSymExtension___redArg(v___f_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2____boxed(lean_object* v_a_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2_();
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getArithState___redArg(lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = l_Lean_Meta_Sym_Arith_arithExt;
v___x_131_ = l_Lean_Meta_Sym_SymExtension_getState___redArg(v___x_130_, v_a_126_, v_a_127_, v_a_128_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getArithState___redArg___boxed(lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Lean_Meta_Sym_Arith_getArithState___redArg(v_a_132_, v_a_133_, v_a_134_);
lean_dec(v_a_134_);
lean_dec_ref(v_a_133_);
lean_dec(v_a_132_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getArithState(lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = l_Lean_Meta_Sym_Arith_getArithState___redArg(v_a_138_, v_a_141_, v_a_142_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getArithState___boxed(lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lean_Meta_Sym_Arith_getArithState(v_a_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_, v_a_150_);
lean_dec(v_a_150_);
lean_dec_ref(v_a_149_);
lean_dec(v_a_148_);
lean_dec_ref(v_a_147_);
lean_dec(v_a_146_);
lean_dec_ref(v_a_145_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_modifyArithState___redArg(lean_object* v_f_153_, lean_object* v_a_154_, lean_object* v_a_155_){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = l_Lean_Meta_Sym_Arith_arithExt;
v___x_158_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl___redArg(v___x_157_, v_f_153_, v_a_154_, v_a_155_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_modifyArithState___redArg___boxed(lean_object* v_f_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l_Lean_Meta_Sym_Arith_modifyArithState___redArg(v_f_159_, v_a_160_, v_a_161_);
lean_dec(v_a_161_);
lean_dec(v_a_160_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_modifyArithState(lean_object* v_f_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = l_Lean_Meta_Sym_Arith_arithExt;
v___x_173_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl___redArg(v___x_172_, v_f_164_, v_a_166_, v_a_170_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_modifyArithState___boxed(lean_object* v_f_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_Lean_Meta_Sym_Arith_modifyArithState(v_f_174_, v_a_175_, v_a_176_, v_a_177_, v_a_178_, v_a_179_, v_a_180_);
lean_dec(v_a_180_);
lean_dec_ref(v_a_179_);
lean_dec(v_a_178_);
lean_dec_ref(v_a_177_);
lean_dec(v_a_176_);
lean_dec_ref(v_a_175_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getExpThreshold___redArg(lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = l_Lean_Meta_Sym_Arith_getArithState___redArg(v_a_183_, v_a_184_, v_a_185_);
if (lean_obj_tag(v___x_187_) == 0)
{
lean_object* v_a_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_196_; 
v_a_188_ = lean_ctor_get(v___x_187_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_196_ == 0)
{
v___x_190_ = v___x_187_;
v_isShared_191_ = v_isSharedCheck_196_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_a_188_);
lean_dec(v___x_187_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_196_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v_exp_192_; lean_object* v___x_194_; 
v_exp_192_ = lean_ctor_get(v_a_188_, 0);
lean_inc(v_exp_192_);
lean_dec(v_a_188_);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 0, v_exp_192_);
v___x_194_ = v___x_190_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_exp_192_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
else
{
lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_204_; 
v_a_197_ = lean_ctor_get(v___x_187_, 0);
v_isSharedCheck_204_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_204_ == 0)
{
v___x_199_ = v___x_187_;
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_187_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_202_; 
if (v_isShared_200_ == 0)
{
v___x_202_ = v___x_199_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_a_197_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getExpThreshold___redArg___boxed(lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lean_Meta_Sym_Arith_getExpThreshold___redArg(v_a_205_, v_a_206_, v_a_207_);
lean_dec(v_a_207_);
lean_dec_ref(v_a_206_);
lean_dec(v_a_205_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getExpThreshold(lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l_Lean_Meta_Sym_Arith_getExpThreshold___redArg(v_a_211_, v_a_214_, v_a_215_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getExpThreshold___boxed(lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Lean_Meta_Sym_Arith_getExpThreshold(v_a_218_, v_a_219_, v_a_220_, v_a_221_, v_a_222_, v_a_223_);
lean_dec(v_a_223_);
lean_dec_ref(v_a_222_);
lean_dec(v_a_221_);
lean_dec_ref(v_a_220_);
lean_dec(v_a_219_);
lean_dec_ref(v_a_218_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold___redArg___lam__0(lean_object* v_exp_226_, lean_object* v_s_227_){
_start:
{
lean_object* v_rings_228_; lean_object* v_semirings_229_; lean_object* v_ncRings_230_; lean_object* v_ncSemirings_231_; lean_object* v_typeClassify_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_239_; 
v_rings_228_ = lean_ctor_get(v_s_227_, 1);
v_semirings_229_ = lean_ctor_get(v_s_227_, 2);
v_ncRings_230_ = lean_ctor_get(v_s_227_, 3);
v_ncSemirings_231_ = lean_ctor_get(v_s_227_, 4);
v_typeClassify_232_ = lean_ctor_get(v_s_227_, 5);
v_isSharedCheck_239_ = !lean_is_exclusive(v_s_227_);
if (v_isSharedCheck_239_ == 0)
{
lean_object* v_unused_240_; 
v_unused_240_ = lean_ctor_get(v_s_227_, 0);
lean_dec(v_unused_240_);
v___x_234_ = v_s_227_;
v_isShared_235_ = v_isSharedCheck_239_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_typeClassify_232_);
lean_inc(v_ncSemirings_231_);
lean_inc(v_ncRings_230_);
lean_inc(v_semirings_229_);
lean_inc(v_rings_228_);
lean_dec(v_s_227_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_239_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_237_; 
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 0, v_exp_226_);
v___x_237_ = v___x_234_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_exp_226_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v_rings_228_);
lean_ctor_set(v_reuseFailAlloc_238_, 2, v_semirings_229_);
lean_ctor_set(v_reuseFailAlloc_238_, 3, v_ncRings_230_);
lean_ctor_set(v_reuseFailAlloc_238_, 4, v_ncSemirings_231_);
lean_ctor_set(v_reuseFailAlloc_238_, 5, v_typeClassify_232_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold___redArg(lean_object* v_exp_241_, lean_object* v_a_242_, lean_object* v_a_243_){
_start:
{
lean_object* v___f_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___f_245_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_setExpThreshold___redArg___lam__0), 2, 1);
lean_closure_set(v___f_245_, 0, v_exp_241_);
v___x_246_ = l_Lean_Meta_Sym_Arith_arithExt;
v___x_247_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl___redArg(v___x_246_, v___f_245_, v_a_242_, v_a_243_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold___redArg___boxed(lean_object* v_exp_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lean_Meta_Sym_Arith_setExpThreshold___redArg(v_exp_248_, v_a_249_, v_a_250_);
lean_dec(v_a_250_);
lean_dec(v_a_249_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold(lean_object* v_exp_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = l_Lean_Meta_Sym_Arith_setExpThreshold___redArg(v_exp_253_, v_a_255_, v_a_259_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold___boxed(lean_object* v_exp_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Lean_Meta_Sym_Arith_setExpThreshold(v_exp_262_, v_a_263_, v_a_264_, v_a_265_, v_a_266_, v_a_267_, v_a_268_);
lean_dec(v_a_268_);
lean_dec_ref(v_a_267_);
lean_dec(v_a_266_);
lean_dec_ref(v_a_265_);
lean_dec(v_a_264_);
lean_dec_ref(v_a_263_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_withExpThreshold___redArg(lean_object* v_exp_271_, lean_object* v_k_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = l_Lean_Meta_Sym_Arith_getArithState___redArg(v_a_274_, v_a_277_, v_a_278_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; lean_object* v___x_282_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_a_281_);
lean_dec_ref(v___x_280_);
v___x_282_ = l_Lean_Meta_Sym_Arith_setExpThreshold___redArg(v_exp_271_, v_a_274_, v_a_278_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v_exp_283_; lean_object* v_r_284_; 
lean_dec_ref(v___x_282_);
v_exp_283_ = lean_ctor_get(v_a_281_, 0);
lean_inc(v_exp_283_);
lean_dec(v_a_281_);
lean_inc(v_a_278_);
lean_inc_ref(v_a_277_);
lean_inc(v_a_276_);
lean_inc_ref(v_a_275_);
lean_inc(v_a_274_);
lean_inc_ref(v_a_273_);
v_r_284_ = lean_apply_7(v_k_272_, v_a_273_, v_a_274_, v_a_275_, v_a_276_, v_a_277_, v_a_278_, lean_box(0));
if (lean_obj_tag(v_r_284_) == 0)
{
lean_object* v_a_285_; lean_object* v___x_286_; 
v_a_285_ = lean_ctor_get(v_r_284_, 0);
lean_inc(v_a_285_);
lean_dec_ref(v_r_284_);
v___x_286_ = l_Lean_Meta_Sym_Arith_setExpThreshold___redArg(v_exp_283_, v_a_274_, v_a_278_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_293_; 
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_293_ == 0)
{
lean_object* v_unused_294_; 
v_unused_294_ = lean_ctor_get(v___x_286_, 0);
lean_dec(v_unused_294_);
v___x_288_ = v___x_286_;
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
else
{
lean_dec(v___x_286_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_291_; 
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 0, v_a_285_);
v___x_291_ = v___x_288_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_a_285_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
else
{
lean_object* v_a_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_302_; 
lean_dec(v_a_285_);
v_a_295_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_302_ == 0)
{
v___x_297_ = v___x_286_;
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_a_295_);
lean_dec(v___x_286_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_300_; 
if (v_isShared_298_ == 0)
{
v___x_300_ = v___x_297_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v_a_295_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
}
else
{
lean_object* v_a_303_; lean_object* v___x_304_; 
v_a_303_ = lean_ctor_get(v_r_284_, 0);
lean_inc(v_a_303_);
lean_dec_ref(v_r_284_);
v___x_304_ = l_Lean_Meta_Sym_Arith_setExpThreshold___redArg(v_exp_283_, v_a_274_, v_a_278_);
if (lean_obj_tag(v___x_304_) == 0)
{
lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_311_; 
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_311_ == 0)
{
lean_object* v_unused_312_; 
v_unused_312_ = lean_ctor_get(v___x_304_, 0);
lean_dec(v_unused_312_);
v___x_306_ = v___x_304_;
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
else
{
lean_dec(v___x_304_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_309_; 
if (v_isShared_307_ == 0)
{
lean_ctor_set_tag(v___x_306_, 1);
lean_ctor_set(v___x_306_, 0, v_a_303_);
v___x_309_ = v___x_306_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v_a_303_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
lean_dec(v_a_303_);
v_a_313_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_320_ == 0)
{
v___x_315_ = v___x_304_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_304_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
}
else
{
lean_object* v_a_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_328_; 
lean_dec(v_a_281_);
lean_dec_ref(v_k_272_);
v_a_321_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_328_ == 0)
{
v___x_323_ = v___x_282_;
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_a_321_);
lean_dec(v___x_282_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_326_; 
if (v_isShared_324_ == 0)
{
v___x_326_ = v___x_323_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_a_321_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
}
}
else
{
lean_object* v_a_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_336_; 
lean_dec_ref(v_k_272_);
lean_dec(v_exp_271_);
v_a_329_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_336_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_336_ == 0)
{
v___x_331_ = v___x_280_;
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_a_329_);
lean_dec(v___x_280_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_334_; 
if (v_isShared_332_ == 0)
{
v___x_334_ = v___x_331_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_a_329_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_withExpThreshold___redArg___boxed(lean_object* v_exp_337_, lean_object* v_k_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Lean_Meta_Sym_Arith_withExpThreshold___redArg(v_exp_337_, v_k_338_, v_a_339_, v_a_340_, v_a_341_, v_a_342_, v_a_343_, v_a_344_);
lean_dec(v_a_344_);
lean_dec_ref(v_a_343_);
lean_dec(v_a_342_);
lean_dec_ref(v_a_341_);
lean_dec(v_a_340_);
lean_dec_ref(v_a_339_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_withExpThreshold(lean_object* v_00_u03b1_347_, lean_object* v_exp_348_, lean_object* v_k_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = l_Lean_Meta_Sym_Arith_withExpThreshold___redArg(v_exp_348_, v_k_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_withExpThreshold___boxed(lean_object* v_00_u03b1_358_, lean_object* v_exp_359_, lean_object* v_k_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Lean_Meta_Sym_Arith_withExpThreshold(v_00_u03b1_358_, v_exp_359_, v_k_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_);
lean_dec(v_a_366_);
lean_dec_ref(v_a_365_);
lean_dec(v_a_364_);
lean_dec_ref(v_a_363_);
lean_dec(v_a_362_);
lean_dec_ref(v_a_361_);
return v_res_368_;
}
}
lean_object* runtime_initialize_Init_Grind_Ring_CommSemiringAdapter(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Arith_Types(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Grind_Ring_CommSemiringAdapter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default = _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default);
l_Lean_Meta_Sym_Arith_instInhabitedSemiring = _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedSemiring);
l_Lean_Meta_Sym_Arith_instInhabitedRing_default = _init_l_Lean_Meta_Sym_Arith_instInhabitedRing_default();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedRing_default);
l_Lean_Meta_Sym_Arith_instInhabitedRing = _init_l_Lean_Meta_Sym_Arith_instInhabitedRing();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedRing);
l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default = _init_l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default);
l_Lean_Meta_Sym_Arith_instInhabitedCommRing = _init_l_Lean_Meta_Sym_Arith_instInhabitedCommRing();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedCommRing);
l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default = _init_l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default);
l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring = _init_l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring);
l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default = _init_l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default);
l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult = _init_l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult);
l_Lean_Meta_Sym_Arith_instInhabitedState_default = _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedState_default);
l_Lean_Meta_Sym_Arith_instInhabitedState = _init_l_Lean_Meta_Sym_Arith_instInhabitedState();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedState);
res = l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn_00___x40_Lean_Meta_Sym_Arith_Types_989437093____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Sym_Arith_arithExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Sym_Arith_arithExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Arith_Types(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Ring_CommSemiringAdapter(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Arith_Types(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Ring_CommSemiringAdapter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Arith_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Arith_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Arith_Types(builtin);
}
#ifdef __cplusplus
}
#endif
