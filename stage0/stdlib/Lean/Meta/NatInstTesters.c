// Lean compiler output
// Module: Lean.Meta.NatInstTesters
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
extern lean_object* l_Lean_Nat_mkInstMul;
lean_object* l_Lean_Meta_isDefEqI(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Nat_mkInstHMul;
extern lean_object* l_Lean_Nat_mkInstHAdd;
extern lean_object* l_Lean_Nat_mkInstLT;
extern lean_object* l_Lean_Nat_mkInstLE;
extern lean_object* l_Lean_Nat_mkInstAdd;
static lean_once_cell_t l_Lean_Meta_Structural_isInstOfNatNat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstOfNatNat___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstOfNatNat___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstOfNatNat___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstOfNatNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstOfNatNat___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstOfNatNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstOfNatNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstAddNat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstAddNat___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstAddNat___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstAddNat___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstAddNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstAddNat___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstAddNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstAddNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstSubNat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstSubNat___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstSubNat___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstSubNat___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstSubNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstSubNat___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstSubNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstSubNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstMulNat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstMulNat___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstMulNat___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstMulNat___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstMulNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstMulNat___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstMulNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstMulNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstDivNat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstDivNat___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstDivNat___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstDivNat___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Structural_isInstDivNat___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstDivNat___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDivNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDivNat___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDivNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDivNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstModNat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstModNat___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstModNat___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstModNat___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstModNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstModNat___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstModNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstModNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstNatPowNat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstNatPowNat___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstNatPowNat___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstNatPowNat___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNatPowNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNatPowNat___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNatPowNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNatPowNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstPowNat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstPowNat___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstPowNat___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstPowNat___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstPowNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstPowNat___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstPowNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstPowNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstHAddNat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHAddNat___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstHAddNat___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHAddNat___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHAddNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHAddNat___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHAddNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHAddNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstHSubNat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHSubNat___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstHSubNat___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHSubNat___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHSubNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHSubNat___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHSubNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHSubNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstHMulNat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHMulNat___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstHMulNat___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHMulNat___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHMulNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHMulNat___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHMulNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHMulNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstHDivNat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHDivNat___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstHDivNat___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHDivNat___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHDivNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHDivNat___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHDivNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHDivNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstHModNat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHModNat___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstHModNat___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHModNat___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHModNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHModNat___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHModNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHModNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstHPowNat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHPowNat___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstHPowNat___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstHPowNat___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHPowNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHPowNat___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHPowNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHPowNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstLTNat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstLTNat___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstLTNat___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstLTNat___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLTNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLTNat___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLTNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLTNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstLENat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstLENat___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstLENat___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstLENat___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLENat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLENat___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLENat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLENat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Structural_isInstDvdNat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstDvdNat___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Structural_isInstDvdNat___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Structural_isInstDvdNat___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDvdNat___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDvdNat___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDvdNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDvdNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstAddNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstAddNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHAddNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHAddNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstMulNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstMulNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHMulNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHMulNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstLTNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstLTNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstLENat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstLENat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Structural_isInstOfNatNat___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("instOfNatNat", 12, 12);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstOfNatNat___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_Meta_Structural_isInstOfNatNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstOfNatNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstOfNatNat___redArg___closed__0);
v___x_3_ = l_Lean_Name_mkStr1(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstOfNatNat___redArg(lean_object* v_e_4_, lean_object* v_a_5_, lean_object* v_a_6_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_4_, v_a_5_, v_a_6_);
if (lean_obj_tag(v___x_8_) == 0)
{
lean_object* v_a_9_; lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_26_; 
v_a_9_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_26_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_26_ == 0)
{
v___x_11_ = v___x_8_;
v_isShared_12_ = v_isSharedCheck_26_;
goto v_resetjp_10_;
}
else
{
lean_inc(v_a_9_);
lean_dec(v___x_8_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_26_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
lean_object* v___x_19_; uint8_t v___x_20_; 
v___x_19_ = l_Lean_Expr_cleanupAnnotations(v_a_9_);
v___x_20_ = l_Lean_Expr_isApp(v___x_19_);
if (v___x_20_ == 0)
{
lean_dec_ref(v___x_19_);
goto v___jp_13_;
}
else
{
lean_object* v___x_21_; lean_object* v___x_22_; uint8_t v___x_23_; 
v___x_21_ = l_Lean_Expr_appFnCleanup___redArg(v___x_19_);
v___x_22_ = lean_obj_once(&l_Lean_Meta_Structural_isInstOfNatNat___redArg___closed__1, &l_Lean_Meta_Structural_isInstOfNatNat___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstOfNatNat___redArg___closed__1);
v___x_23_ = l_Lean_Expr_isConstOf(v___x_21_, v___x_22_);
lean_dec_ref(v___x_21_);
if (v___x_23_ == 0)
{
goto v___jp_13_;
}
else
{
lean_object* v___x_24_; lean_object* v___x_25_; 
lean_del_object(v___x_11_);
v___x_24_ = lean_box(v___x_23_);
v___x_25_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
return v___x_25_;
}
}
v___jp_13_:
{
uint8_t v___x_14_; lean_object* v___x_15_; lean_object* v___x_17_; 
v___x_14_ = 0;
v___x_15_ = lean_box(v___x_14_);
if (v_isShared_12_ == 0)
{
lean_ctor_set(v___x_11_, 0, v___x_15_);
v___x_17_ = v___x_11_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
}
else
{
lean_object* v_a_27_; lean_object* v___x_29_; uint8_t v_isShared_30_; uint8_t v_isSharedCheck_34_; 
v_a_27_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_34_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_34_ == 0)
{
v___x_29_ = v___x_8_;
v_isShared_30_ = v_isSharedCheck_34_;
goto v_resetjp_28_;
}
else
{
lean_inc(v_a_27_);
lean_dec(v___x_8_);
v___x_29_ = lean_box(0);
v_isShared_30_ = v_isSharedCheck_34_;
goto v_resetjp_28_;
}
v_resetjp_28_:
{
lean_object* v___x_32_; 
if (v_isShared_30_ == 0)
{
v___x_32_ = v___x_29_;
goto v_reusejp_31_;
}
else
{
lean_object* v_reuseFailAlloc_33_; 
v_reuseFailAlloc_33_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_33_, 0, v_a_27_);
v___x_32_ = v_reuseFailAlloc_33_;
goto v_reusejp_31_;
}
v_reusejp_31_:
{
return v___x_32_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstOfNatNat___redArg___boxed(lean_object* v_e_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_Lean_Meta_Structural_isInstOfNatNat___redArg(v_e_35_, v_a_36_, v_a_37_);
lean_dec(v_a_37_);
lean_dec(v_a_36_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstOfNatNat(lean_object* v_e_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_Meta_Structural_isInstOfNatNat___redArg(v_e_40_, v_a_42_, v_a_44_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstOfNatNat___boxed(lean_object* v_e_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Lean_Meta_Structural_isInstOfNatNat(v_e_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_);
lean_dec(v_a_51_);
lean_dec_ref(v_a_50_);
lean_dec(v_a_49_);
lean_dec_ref(v_a_48_);
return v_res_53_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstAddNat___redArg___closed__0(void){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lean_mk_string_unchecked("instAddNat", 10, 10);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstAddNat___redArg___closed__1(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_obj_once(&l_Lean_Meta_Structural_isInstAddNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstAddNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstAddNat___redArg___closed__0);
v___x_56_ = l_Lean_Name_mkStr1(v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstAddNat___redArg(lean_object* v_e_57_, lean_object* v_a_58_, lean_object* v_a_59_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_57_, v_a_58_, v_a_59_);
if (lean_obj_tag(v___x_61_) == 0)
{
lean_object* v_a_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_73_; 
v_a_62_ = lean_ctor_get(v___x_61_, 0);
v_isSharedCheck_73_ = !lean_is_exclusive(v___x_61_);
if (v_isSharedCheck_73_ == 0)
{
v___x_64_ = v___x_61_;
v_isShared_65_ = v_isSharedCheck_73_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_a_62_);
lean_dec(v___x_61_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_73_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
lean_object* v___x_66_; lean_object* v___x_67_; uint8_t v___x_68_; lean_object* v___x_69_; lean_object* v___x_71_; 
v___x_66_ = l_Lean_Expr_cleanupAnnotations(v_a_62_);
v___x_67_ = lean_obj_once(&l_Lean_Meta_Structural_isInstAddNat___redArg___closed__1, &l_Lean_Meta_Structural_isInstAddNat___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstAddNat___redArg___closed__1);
v___x_68_ = l_Lean_Expr_isConstOf(v___x_66_, v___x_67_);
lean_dec_ref(v___x_66_);
v___x_69_ = lean_box(v___x_68_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 0, v___x_69_);
v___x_71_ = v___x_64_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_72_; 
v_reuseFailAlloc_72_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_72_, 0, v___x_69_);
v___x_71_ = v_reuseFailAlloc_72_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
return v___x_71_;
}
}
}
else
{
lean_object* v_a_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_81_; 
v_a_74_ = lean_ctor_get(v___x_61_, 0);
v_isSharedCheck_81_ = !lean_is_exclusive(v___x_61_);
if (v_isSharedCheck_81_ == 0)
{
v___x_76_ = v___x_61_;
v_isShared_77_ = v_isSharedCheck_81_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_a_74_);
lean_dec(v___x_61_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_81_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v___x_79_; 
if (v_isShared_77_ == 0)
{
v___x_79_ = v___x_76_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v_a_74_);
v___x_79_ = v_reuseFailAlloc_80_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
return v___x_79_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstAddNat___redArg___boxed(lean_object* v_e_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Lean_Meta_Structural_isInstAddNat___redArg(v_e_82_, v_a_83_, v_a_84_);
lean_dec(v_a_84_);
lean_dec(v_a_83_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstAddNat(lean_object* v_e_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = l_Lean_Meta_Structural_isInstAddNat___redArg(v_e_87_, v_a_89_, v_a_91_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstAddNat___boxed(lean_object* v_e_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_Lean_Meta_Structural_isInstAddNat(v_e_94_, v_a_95_, v_a_96_, v_a_97_, v_a_98_);
lean_dec(v_a_98_);
lean_dec_ref(v_a_97_);
lean_dec(v_a_96_);
lean_dec_ref(v_a_95_);
return v_res_100_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstSubNat___redArg___closed__0(void){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_mk_string_unchecked("instSubNat", 10, 10);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstSubNat___redArg___closed__1(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = lean_obj_once(&l_Lean_Meta_Structural_isInstSubNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstSubNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstSubNat___redArg___closed__0);
v___x_103_ = l_Lean_Name_mkStr1(v___x_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstSubNat___redArg(lean_object* v_e_104_, lean_object* v_a_105_, lean_object* v_a_106_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_104_, v_a_105_, v_a_106_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_120_; 
v_a_109_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_120_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_120_ == 0)
{
v___x_111_ = v___x_108_;
v_isShared_112_ = v_isSharedCheck_120_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v___x_108_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_120_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v___x_115_; lean_object* v___x_116_; lean_object* v___x_118_; 
v___x_113_ = l_Lean_Expr_cleanupAnnotations(v_a_109_);
v___x_114_ = lean_obj_once(&l_Lean_Meta_Structural_isInstSubNat___redArg___closed__1, &l_Lean_Meta_Structural_isInstSubNat___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstSubNat___redArg___closed__1);
v___x_115_ = l_Lean_Expr_isConstOf(v___x_113_, v___x_114_);
lean_dec_ref(v___x_113_);
v___x_116_ = lean_box(v___x_115_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 0, v___x_116_);
v___x_118_ = v___x_111_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_116_);
v___x_118_ = v_reuseFailAlloc_119_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
return v___x_118_;
}
}
}
else
{
lean_object* v_a_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_128_; 
v_a_121_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_128_ == 0)
{
v___x_123_ = v___x_108_;
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_a_121_);
lean_dec(v___x_108_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_126_; 
if (v_isShared_124_ == 0)
{
v___x_126_ = v___x_123_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_a_121_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstSubNat___redArg___boxed(lean_object* v_e_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l_Lean_Meta_Structural_isInstSubNat___redArg(v_e_129_, v_a_130_, v_a_131_);
lean_dec(v_a_131_);
lean_dec(v_a_130_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstSubNat(lean_object* v_e_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = l_Lean_Meta_Structural_isInstSubNat___redArg(v_e_134_, v_a_136_, v_a_138_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstSubNat___boxed(lean_object* v_e_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l_Lean_Meta_Structural_isInstSubNat(v_e_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
lean_dec(v_a_145_);
lean_dec_ref(v_a_144_);
lean_dec(v_a_143_);
lean_dec_ref(v_a_142_);
return v_res_147_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstMulNat___redArg___closed__0(void){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = lean_mk_string_unchecked("instMulNat", 10, 10);
return v___x_148_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstMulNat___redArg___closed__1(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = lean_obj_once(&l_Lean_Meta_Structural_isInstMulNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstMulNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstMulNat___redArg___closed__0);
v___x_150_ = l_Lean_Name_mkStr1(v___x_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstMulNat___redArg(lean_object* v_e_151_, lean_object* v_a_152_, lean_object* v_a_153_){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_151_, v_a_152_, v_a_153_);
if (lean_obj_tag(v___x_155_) == 0)
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_167_; 
v_a_156_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_167_ == 0)
{
v___x_158_ = v___x_155_;
v_isShared_159_ = v_isSharedCheck_167_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_155_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_167_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_160_; lean_object* v___x_161_; uint8_t v___x_162_; lean_object* v___x_163_; lean_object* v___x_165_; 
v___x_160_ = l_Lean_Expr_cleanupAnnotations(v_a_156_);
v___x_161_ = lean_obj_once(&l_Lean_Meta_Structural_isInstMulNat___redArg___closed__1, &l_Lean_Meta_Structural_isInstMulNat___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstMulNat___redArg___closed__1);
v___x_162_ = l_Lean_Expr_isConstOf(v___x_160_, v___x_161_);
lean_dec_ref(v___x_160_);
v___x_163_ = lean_box(v___x_162_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 0, v___x_163_);
v___x_165_ = v___x_158_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v___x_163_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
else
{
lean_object* v_a_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_175_; 
v_a_168_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_175_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_175_ == 0)
{
v___x_170_ = v___x_155_;
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_a_168_);
lean_dec(v___x_155_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_173_; 
if (v_isShared_171_ == 0)
{
v___x_173_ = v___x_170_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_a_168_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstMulNat___redArg___boxed(lean_object* v_e_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Lean_Meta_Structural_isInstMulNat___redArg(v_e_176_, v_a_177_, v_a_178_);
lean_dec(v_a_178_);
lean_dec(v_a_177_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstMulNat(lean_object* v_e_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = l_Lean_Meta_Structural_isInstMulNat___redArg(v_e_181_, v_a_183_, v_a_185_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstMulNat___boxed(lean_object* v_e_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lean_Meta_Structural_isInstMulNat(v_e_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_);
lean_dec(v_a_192_);
lean_dec_ref(v_a_191_);
lean_dec(v_a_190_);
lean_dec_ref(v_a_189_);
return v_res_194_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstDivNat___redArg___closed__0(void){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = lean_mk_string_unchecked("Nat", 3, 3);
return v___x_195_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstDivNat___redArg___closed__1(void){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = lean_mk_string_unchecked("instDiv", 7, 7);
return v___x_196_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstDivNat___redArg___closed__2(void){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_197_ = lean_obj_once(&l_Lean_Meta_Structural_isInstDivNat___redArg___closed__1, &l_Lean_Meta_Structural_isInstDivNat___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstDivNat___redArg___closed__1);
v___x_198_ = lean_obj_once(&l_Lean_Meta_Structural_isInstDivNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstDivNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstDivNat___redArg___closed__0);
v___x_199_ = l_Lean_Name_mkStr2(v___x_198_, v___x_197_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDivNat___redArg(lean_object* v_e_200_, lean_object* v_a_201_, lean_object* v_a_202_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_200_, v_a_201_, v_a_202_);
if (lean_obj_tag(v___x_204_) == 0)
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_216_; 
v_a_205_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_216_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_216_ == 0)
{
v___x_207_ = v___x_204_;
v_isShared_208_ = v_isSharedCheck_216_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_204_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_216_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_209_; lean_object* v___x_210_; uint8_t v___x_211_; lean_object* v___x_212_; lean_object* v___x_214_; 
v___x_209_ = l_Lean_Expr_cleanupAnnotations(v_a_205_);
v___x_210_ = lean_obj_once(&l_Lean_Meta_Structural_isInstDivNat___redArg___closed__2, &l_Lean_Meta_Structural_isInstDivNat___redArg___closed__2_once, _init_l_Lean_Meta_Structural_isInstDivNat___redArg___closed__2);
v___x_211_ = l_Lean_Expr_isConstOf(v___x_209_, v___x_210_);
lean_dec_ref(v___x_209_);
v___x_212_ = lean_box(v___x_211_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v___x_212_);
v___x_214_ = v___x_207_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v___x_212_);
v___x_214_ = v_reuseFailAlloc_215_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
return v___x_214_;
}
}
}
else
{
lean_object* v_a_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_224_; 
v_a_217_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_224_ == 0)
{
v___x_219_ = v___x_204_;
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_a_217_);
lean_dec(v___x_204_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_222_; 
if (v_isShared_220_ == 0)
{
v___x_222_ = v___x_219_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_a_217_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDivNat___redArg___boxed(lean_object* v_e_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lean_Meta_Structural_isInstDivNat___redArg(v_e_225_, v_a_226_, v_a_227_);
lean_dec(v_a_227_);
lean_dec(v_a_226_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDivNat(lean_object* v_e_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = l_Lean_Meta_Structural_isInstDivNat___redArg(v_e_230_, v_a_232_, v_a_234_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDivNat___boxed(lean_object* v_e_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Lean_Meta_Structural_isInstDivNat(v_e_237_, v_a_238_, v_a_239_, v_a_240_, v_a_241_);
lean_dec(v_a_241_);
lean_dec_ref(v_a_240_);
lean_dec(v_a_239_);
lean_dec_ref(v_a_238_);
return v_res_243_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstModNat___redArg___closed__0(void){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = lean_mk_string_unchecked("instMod", 7, 7);
return v___x_244_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstModNat___redArg___closed__1(void){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_245_ = lean_obj_once(&l_Lean_Meta_Structural_isInstModNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstModNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstModNat___redArg___closed__0);
v___x_246_ = lean_obj_once(&l_Lean_Meta_Structural_isInstDivNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstDivNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstDivNat___redArg___closed__0);
v___x_247_ = l_Lean_Name_mkStr2(v___x_246_, v___x_245_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstModNat___redArg(lean_object* v_e_248_, lean_object* v_a_249_, lean_object* v_a_250_){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_248_, v_a_249_, v_a_250_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v_a_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_264_; 
v_a_253_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_264_ == 0)
{
v___x_255_ = v___x_252_;
v_isShared_256_ = v_isSharedCheck_264_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_a_253_);
lean_dec(v___x_252_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_264_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; lean_object* v___x_260_; lean_object* v___x_262_; 
v___x_257_ = l_Lean_Expr_cleanupAnnotations(v_a_253_);
v___x_258_ = lean_obj_once(&l_Lean_Meta_Structural_isInstModNat___redArg___closed__1, &l_Lean_Meta_Structural_isInstModNat___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstModNat___redArg___closed__1);
v___x_259_ = l_Lean_Expr_isConstOf(v___x_257_, v___x_258_);
lean_dec_ref(v___x_257_);
v___x_260_ = lean_box(v___x_259_);
if (v_isShared_256_ == 0)
{
lean_ctor_set(v___x_255_, 0, v___x_260_);
v___x_262_ = v___x_255_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v___x_260_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
else
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_272_; 
v_a_265_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_272_ == 0)
{
v___x_267_ = v___x_252_;
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v___x_252_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_270_; 
if (v_isShared_268_ == 0)
{
v___x_270_ = v___x_267_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_a_265_);
v___x_270_ = v_reuseFailAlloc_271_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
return v___x_270_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstModNat___redArg___boxed(lean_object* v_e_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lean_Meta_Structural_isInstModNat___redArg(v_e_273_, v_a_274_, v_a_275_);
lean_dec(v_a_275_);
lean_dec(v_a_274_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstModNat(lean_object* v_e_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_Lean_Meta_Structural_isInstModNat___redArg(v_e_278_, v_a_280_, v_a_282_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstModNat___boxed(lean_object* v_e_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_Lean_Meta_Structural_isInstModNat(v_e_285_, v_a_286_, v_a_287_, v_a_288_, v_a_289_);
lean_dec(v_a_289_);
lean_dec_ref(v_a_288_);
lean_dec(v_a_287_);
lean_dec_ref(v_a_286_);
return v_res_291_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstNatPowNat___redArg___closed__0(void){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = lean_mk_string_unchecked("instNatPowNat", 13, 13);
return v___x_292_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstNatPowNat___redArg___closed__1(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = lean_obj_once(&l_Lean_Meta_Structural_isInstNatPowNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstNatPowNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstNatPowNat___redArg___closed__0);
v___x_294_ = l_Lean_Name_mkStr1(v___x_293_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNatPowNat___redArg(lean_object* v_e_295_, lean_object* v_a_296_, lean_object* v_a_297_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_295_, v_a_296_, v_a_297_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_311_; 
v_a_300_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_311_ == 0)
{
v___x_302_ = v___x_299_;
v_isShared_303_ = v_isSharedCheck_311_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_299_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_311_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_304_; lean_object* v___x_305_; uint8_t v___x_306_; lean_object* v___x_307_; lean_object* v___x_309_; 
v___x_304_ = l_Lean_Expr_cleanupAnnotations(v_a_300_);
v___x_305_ = lean_obj_once(&l_Lean_Meta_Structural_isInstNatPowNat___redArg___closed__1, &l_Lean_Meta_Structural_isInstNatPowNat___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstNatPowNat___redArg___closed__1);
v___x_306_ = l_Lean_Expr_isConstOf(v___x_304_, v___x_305_);
lean_dec_ref(v___x_304_);
v___x_307_ = lean_box(v___x_306_);
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 0, v___x_307_);
v___x_309_ = v___x_302_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_307_);
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
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_319_; 
v_a_312_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_319_ == 0)
{
v___x_314_ = v___x_299_;
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v___x_299_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_317_; 
if (v_isShared_315_ == 0)
{
v___x_317_ = v___x_314_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v_a_312_);
v___x_317_ = v_reuseFailAlloc_318_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
return v___x_317_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNatPowNat___redArg___boxed(lean_object* v_e_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_Meta_Structural_isInstNatPowNat___redArg(v_e_320_, v_a_321_, v_a_322_);
lean_dec(v_a_322_);
lean_dec(v_a_321_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNatPowNat(lean_object* v_e_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_){
_start:
{
lean_object* v___x_331_; 
v___x_331_ = l_Lean_Meta_Structural_isInstNatPowNat___redArg(v_e_325_, v_a_327_, v_a_329_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstNatPowNat___boxed(lean_object* v_e_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lean_Meta_Structural_isInstNatPowNat(v_e_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_);
lean_dec(v_a_336_);
lean_dec_ref(v_a_335_);
lean_dec(v_a_334_);
lean_dec_ref(v_a_333_);
return v_res_338_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstPowNat___redArg___closed__0(void){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = lean_mk_string_unchecked("instPowNat", 10, 10);
return v___x_339_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstPowNat___redArg___closed__1(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_340_ = lean_obj_once(&l_Lean_Meta_Structural_isInstPowNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstPowNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstPowNat___redArg___closed__0);
v___x_341_ = l_Lean_Name_mkStr1(v___x_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstPowNat___redArg(lean_object* v_e_342_, lean_object* v_a_343_, lean_object* v_a_344_){
_start:
{
lean_object* v___x_346_; 
v___x_346_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_342_, v_a_343_, v_a_344_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_366_; 
v_a_347_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_366_ == 0)
{
v___x_349_ = v___x_346_;
v_isShared_350_ = v_isSharedCheck_366_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_346_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_366_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_357_ = l_Lean_Expr_cleanupAnnotations(v_a_347_);
v___x_358_ = l_Lean_Expr_isApp(v___x_357_);
if (v___x_358_ == 0)
{
lean_dec_ref(v___x_357_);
goto v___jp_351_;
}
else
{
lean_object* v_arg_359_; lean_object* v___x_360_; uint8_t v___x_361_; 
v_arg_359_ = lean_ctor_get(v___x_357_, 1);
lean_inc_ref(v_arg_359_);
v___x_360_ = l_Lean_Expr_appFnCleanup___redArg(v___x_357_);
v___x_361_ = l_Lean_Expr_isApp(v___x_360_);
if (v___x_361_ == 0)
{
lean_dec_ref(v___x_360_);
lean_dec_ref(v_arg_359_);
goto v___jp_351_;
}
else
{
lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_362_ = l_Lean_Expr_appFnCleanup___redArg(v___x_360_);
v___x_363_ = lean_obj_once(&l_Lean_Meta_Structural_isInstPowNat___redArg___closed__1, &l_Lean_Meta_Structural_isInstPowNat___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstPowNat___redArg___closed__1);
v___x_364_ = l_Lean_Expr_isConstOf(v___x_362_, v___x_363_);
lean_dec_ref(v___x_362_);
if (v___x_364_ == 0)
{
lean_dec_ref(v_arg_359_);
goto v___jp_351_;
}
else
{
lean_object* v___x_365_; 
lean_del_object(v___x_349_);
v___x_365_ = l_Lean_Meta_Structural_isInstNatPowNat___redArg(v_arg_359_, v_a_343_, v_a_344_);
return v___x_365_;
}
}
}
v___jp_351_:
{
uint8_t v___x_352_; lean_object* v___x_353_; lean_object* v___x_355_; 
v___x_352_ = 0;
v___x_353_ = lean_box(v___x_352_);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 0, v___x_353_);
v___x_355_ = v___x_349_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v___x_353_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
}
else
{
lean_object* v_a_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_374_; 
v_a_367_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_374_ == 0)
{
v___x_369_ = v___x_346_;
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_a_367_);
lean_dec(v___x_346_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_372_; 
if (v_isShared_370_ == 0)
{
v___x_372_ = v___x_369_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_a_367_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstPowNat___redArg___boxed(lean_object* v_e_375_, lean_object* v_a_376_, lean_object* v_a_377_, lean_object* v_a_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l_Lean_Meta_Structural_isInstPowNat___redArg(v_e_375_, v_a_376_, v_a_377_);
lean_dec(v_a_377_);
lean_dec(v_a_376_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstPowNat(lean_object* v_e_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = l_Lean_Meta_Structural_isInstPowNat___redArg(v_e_380_, v_a_382_, v_a_384_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstPowNat___boxed(lean_object* v_e_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_Meta_Structural_isInstPowNat(v_e_387_, v_a_388_, v_a_389_, v_a_390_, v_a_391_);
lean_dec(v_a_391_);
lean_dec_ref(v_a_390_);
lean_dec(v_a_389_);
lean_dec_ref(v_a_388_);
return v_res_393_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHAddNat___redArg___closed__0(void){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = lean_mk_string_unchecked("instHAdd", 8, 8);
return v___x_394_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHAddNat___redArg___closed__1(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_395_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHAddNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstHAddNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstHAddNat___redArg___closed__0);
v___x_396_ = l_Lean_Name_mkStr1(v___x_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHAddNat___redArg(lean_object* v_e_397_, lean_object* v_a_398_, lean_object* v_a_399_){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_397_, v_a_398_, v_a_399_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_421_; 
v_a_402_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_421_ == 0)
{
v___x_404_ = v___x_401_;
v_isShared_405_ = v_isSharedCheck_421_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_401_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_421_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_412_ = l_Lean_Expr_cleanupAnnotations(v_a_402_);
v___x_413_ = l_Lean_Expr_isApp(v___x_412_);
if (v___x_413_ == 0)
{
lean_dec_ref(v___x_412_);
goto v___jp_406_;
}
else
{
lean_object* v_arg_414_; lean_object* v___x_415_; uint8_t v___x_416_; 
v_arg_414_ = lean_ctor_get(v___x_412_, 1);
lean_inc_ref(v_arg_414_);
v___x_415_ = l_Lean_Expr_appFnCleanup___redArg(v___x_412_);
v___x_416_ = l_Lean_Expr_isApp(v___x_415_);
if (v___x_416_ == 0)
{
lean_dec_ref(v___x_415_);
lean_dec_ref(v_arg_414_);
goto v___jp_406_;
}
else
{
lean_object* v___x_417_; lean_object* v___x_418_; uint8_t v___x_419_; 
v___x_417_ = l_Lean_Expr_appFnCleanup___redArg(v___x_415_);
v___x_418_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHAddNat___redArg___closed__1, &l_Lean_Meta_Structural_isInstHAddNat___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstHAddNat___redArg___closed__1);
v___x_419_ = l_Lean_Expr_isConstOf(v___x_417_, v___x_418_);
lean_dec_ref(v___x_417_);
if (v___x_419_ == 0)
{
lean_dec_ref(v_arg_414_);
goto v___jp_406_;
}
else
{
lean_object* v___x_420_; 
lean_del_object(v___x_404_);
v___x_420_ = l_Lean_Meta_Structural_isInstAddNat___redArg(v_arg_414_, v_a_398_, v_a_399_);
return v___x_420_;
}
}
}
v___jp_406_:
{
uint8_t v___x_407_; lean_object* v___x_408_; lean_object* v___x_410_; 
v___x_407_ = 0;
v___x_408_ = lean_box(v___x_407_);
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
}
else
{
lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_429_; 
v_a_422_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_429_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_429_ == 0)
{
v___x_424_ = v___x_401_;
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v___x_401_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_427_; 
if (v_isShared_425_ == 0)
{
v___x_427_ = v___x_424_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_a_422_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHAddNat___redArg___boxed(lean_object* v_e_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_Lean_Meta_Structural_isInstHAddNat___redArg(v_e_430_, v_a_431_, v_a_432_);
lean_dec(v_a_432_);
lean_dec(v_a_431_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHAddNat(lean_object* v_e_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = l_Lean_Meta_Structural_isInstHAddNat___redArg(v_e_435_, v_a_437_, v_a_439_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHAddNat___boxed(lean_object* v_e_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_Lean_Meta_Structural_isInstHAddNat(v_e_442_, v_a_443_, v_a_444_, v_a_445_, v_a_446_);
lean_dec(v_a_446_);
lean_dec_ref(v_a_445_);
lean_dec(v_a_444_);
lean_dec_ref(v_a_443_);
return v_res_448_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHSubNat___redArg___closed__0(void){
_start:
{
lean_object* v___x_449_; 
v___x_449_ = lean_mk_string_unchecked("instHSub", 8, 8);
return v___x_449_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHSubNat___redArg___closed__1(void){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_450_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHSubNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstHSubNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstHSubNat___redArg___closed__0);
v___x_451_ = l_Lean_Name_mkStr1(v___x_450_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHSubNat___redArg(lean_object* v_e_452_, lean_object* v_a_453_, lean_object* v_a_454_){
_start:
{
lean_object* v___x_456_; 
v___x_456_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_452_, v_a_453_, v_a_454_);
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_476_; 
v_a_457_ = lean_ctor_get(v___x_456_, 0);
v_isSharedCheck_476_ = !lean_is_exclusive(v___x_456_);
if (v_isSharedCheck_476_ == 0)
{
v___x_459_ = v___x_456_;
v_isShared_460_ = v_isSharedCheck_476_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_456_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_476_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_467_; uint8_t v___x_468_; 
v___x_467_ = l_Lean_Expr_cleanupAnnotations(v_a_457_);
v___x_468_ = l_Lean_Expr_isApp(v___x_467_);
if (v___x_468_ == 0)
{
lean_dec_ref(v___x_467_);
goto v___jp_461_;
}
else
{
lean_object* v_arg_469_; lean_object* v___x_470_; uint8_t v___x_471_; 
v_arg_469_ = lean_ctor_get(v___x_467_, 1);
lean_inc_ref(v_arg_469_);
v___x_470_ = l_Lean_Expr_appFnCleanup___redArg(v___x_467_);
v___x_471_ = l_Lean_Expr_isApp(v___x_470_);
if (v___x_471_ == 0)
{
lean_dec_ref(v___x_470_);
lean_dec_ref(v_arg_469_);
goto v___jp_461_;
}
else
{
lean_object* v___x_472_; lean_object* v___x_473_; uint8_t v___x_474_; 
v___x_472_ = l_Lean_Expr_appFnCleanup___redArg(v___x_470_);
v___x_473_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHSubNat___redArg___closed__1, &l_Lean_Meta_Structural_isInstHSubNat___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstHSubNat___redArg___closed__1);
v___x_474_ = l_Lean_Expr_isConstOf(v___x_472_, v___x_473_);
lean_dec_ref(v___x_472_);
if (v___x_474_ == 0)
{
lean_dec_ref(v_arg_469_);
goto v___jp_461_;
}
else
{
lean_object* v___x_475_; 
lean_del_object(v___x_459_);
v___x_475_ = l_Lean_Meta_Structural_isInstSubNat___redArg(v_arg_469_, v_a_453_, v_a_454_);
return v___x_475_;
}
}
}
v___jp_461_:
{
uint8_t v___x_462_; lean_object* v___x_463_; lean_object* v___x_465_; 
v___x_462_ = 0;
v___x_463_ = lean_box(v___x_462_);
if (v_isShared_460_ == 0)
{
lean_ctor_set(v___x_459_, 0, v___x_463_);
v___x_465_ = v___x_459_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v___x_463_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
}
}
else
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_484_; 
v_a_477_ = lean_ctor_get(v___x_456_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_456_);
if (v_isSharedCheck_484_ == 0)
{
v___x_479_ = v___x_456_;
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_456_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_482_; 
if (v_isShared_480_ == 0)
{
v___x_482_ = v___x_479_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_a_477_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHSubNat___redArg___boxed(lean_object* v_e_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Lean_Meta_Structural_isInstHSubNat___redArg(v_e_485_, v_a_486_, v_a_487_);
lean_dec(v_a_487_);
lean_dec(v_a_486_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHSubNat(lean_object* v_e_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_){
_start:
{
lean_object* v___x_496_; 
v___x_496_ = l_Lean_Meta_Structural_isInstHSubNat___redArg(v_e_490_, v_a_492_, v_a_494_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHSubNat___boxed(lean_object* v_e_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Lean_Meta_Structural_isInstHSubNat(v_e_497_, v_a_498_, v_a_499_, v_a_500_, v_a_501_);
lean_dec(v_a_501_);
lean_dec_ref(v_a_500_);
lean_dec(v_a_499_);
lean_dec_ref(v_a_498_);
return v_res_503_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHMulNat___redArg___closed__0(void){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = lean_mk_string_unchecked("instHMul", 8, 8);
return v___x_504_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHMulNat___redArg___closed__1(void){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHMulNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstHMulNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstHMulNat___redArg___closed__0);
v___x_506_ = l_Lean_Name_mkStr1(v___x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHMulNat___redArg(lean_object* v_e_507_, lean_object* v_a_508_, lean_object* v_a_509_){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_507_, v_a_508_, v_a_509_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_531_; 
v_a_512_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_531_ == 0)
{
v___x_514_ = v___x_511_;
v_isShared_515_ = v_isSharedCheck_531_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_511_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_531_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_522_ = l_Lean_Expr_cleanupAnnotations(v_a_512_);
v___x_523_ = l_Lean_Expr_isApp(v___x_522_);
if (v___x_523_ == 0)
{
lean_dec_ref(v___x_522_);
goto v___jp_516_;
}
else
{
lean_object* v_arg_524_; lean_object* v___x_525_; uint8_t v___x_526_; 
v_arg_524_ = lean_ctor_get(v___x_522_, 1);
lean_inc_ref(v_arg_524_);
v___x_525_ = l_Lean_Expr_appFnCleanup___redArg(v___x_522_);
v___x_526_ = l_Lean_Expr_isApp(v___x_525_);
if (v___x_526_ == 0)
{
lean_dec_ref(v___x_525_);
lean_dec_ref(v_arg_524_);
goto v___jp_516_;
}
else
{
lean_object* v___x_527_; lean_object* v___x_528_; uint8_t v___x_529_; 
v___x_527_ = l_Lean_Expr_appFnCleanup___redArg(v___x_525_);
v___x_528_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHMulNat___redArg___closed__1, &l_Lean_Meta_Structural_isInstHMulNat___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstHMulNat___redArg___closed__1);
v___x_529_ = l_Lean_Expr_isConstOf(v___x_527_, v___x_528_);
lean_dec_ref(v___x_527_);
if (v___x_529_ == 0)
{
lean_dec_ref(v_arg_524_);
goto v___jp_516_;
}
else
{
lean_object* v___x_530_; 
lean_del_object(v___x_514_);
v___x_530_ = l_Lean_Meta_Structural_isInstMulNat___redArg(v_arg_524_, v_a_508_, v_a_509_);
return v___x_530_;
}
}
}
v___jp_516_:
{
uint8_t v___x_517_; lean_object* v___x_518_; lean_object* v___x_520_; 
v___x_517_ = 0;
v___x_518_ = lean_box(v___x_517_);
if (v_isShared_515_ == 0)
{
lean_ctor_set(v___x_514_, 0, v___x_518_);
v___x_520_ = v___x_514_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v___x_518_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
}
else
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
v_a_532_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_511_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_511_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_a_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHMulNat___redArg___boxed(lean_object* v_e_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Lean_Meta_Structural_isInstHMulNat___redArg(v_e_540_, v_a_541_, v_a_542_);
lean_dec(v_a_542_);
lean_dec(v_a_541_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHMulNat(lean_object* v_e_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_){
_start:
{
lean_object* v___x_551_; 
v___x_551_ = l_Lean_Meta_Structural_isInstHMulNat___redArg(v_e_545_, v_a_547_, v_a_549_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHMulNat___boxed(lean_object* v_e_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_Meta_Structural_isInstHMulNat(v_e_552_, v_a_553_, v_a_554_, v_a_555_, v_a_556_);
lean_dec(v_a_556_);
lean_dec_ref(v_a_555_);
lean_dec(v_a_554_);
lean_dec_ref(v_a_553_);
return v_res_558_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHDivNat___redArg___closed__0(void){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = lean_mk_string_unchecked("instHDiv", 8, 8);
return v___x_559_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHDivNat___redArg___closed__1(void){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_560_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHDivNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstHDivNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstHDivNat___redArg___closed__0);
v___x_561_ = l_Lean_Name_mkStr1(v___x_560_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHDivNat___redArg(lean_object* v_e_562_, lean_object* v_a_563_, lean_object* v_a_564_){
_start:
{
lean_object* v___x_566_; 
v___x_566_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_562_, v_a_563_, v_a_564_);
if (lean_obj_tag(v___x_566_) == 0)
{
lean_object* v_a_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_586_; 
v_a_567_ = lean_ctor_get(v___x_566_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_566_);
if (v_isSharedCheck_586_ == 0)
{
v___x_569_ = v___x_566_;
v_isShared_570_ = v_isSharedCheck_586_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_a_567_);
lean_dec(v___x_566_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_586_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_577_ = l_Lean_Expr_cleanupAnnotations(v_a_567_);
v___x_578_ = l_Lean_Expr_isApp(v___x_577_);
if (v___x_578_ == 0)
{
lean_dec_ref(v___x_577_);
goto v___jp_571_;
}
else
{
lean_object* v_arg_579_; lean_object* v___x_580_; uint8_t v___x_581_; 
v_arg_579_ = lean_ctor_get(v___x_577_, 1);
lean_inc_ref(v_arg_579_);
v___x_580_ = l_Lean_Expr_appFnCleanup___redArg(v___x_577_);
v___x_581_ = l_Lean_Expr_isApp(v___x_580_);
if (v___x_581_ == 0)
{
lean_dec_ref(v___x_580_);
lean_dec_ref(v_arg_579_);
goto v___jp_571_;
}
else
{
lean_object* v___x_582_; lean_object* v___x_583_; uint8_t v___x_584_; 
v___x_582_ = l_Lean_Expr_appFnCleanup___redArg(v___x_580_);
v___x_583_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHDivNat___redArg___closed__1, &l_Lean_Meta_Structural_isInstHDivNat___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstHDivNat___redArg___closed__1);
v___x_584_ = l_Lean_Expr_isConstOf(v___x_582_, v___x_583_);
lean_dec_ref(v___x_582_);
if (v___x_584_ == 0)
{
lean_dec_ref(v_arg_579_);
goto v___jp_571_;
}
else
{
lean_object* v___x_585_; 
lean_del_object(v___x_569_);
v___x_585_ = l_Lean_Meta_Structural_isInstDivNat___redArg(v_arg_579_, v_a_563_, v_a_564_);
return v___x_585_;
}
}
}
v___jp_571_:
{
uint8_t v___x_572_; lean_object* v___x_573_; lean_object* v___x_575_; 
v___x_572_ = 0;
v___x_573_ = lean_box(v___x_572_);
if (v_isShared_570_ == 0)
{
lean_ctor_set(v___x_569_, 0, v___x_573_);
v___x_575_ = v___x_569_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_573_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
}
else
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_594_; 
v_a_587_ = lean_ctor_get(v___x_566_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_566_);
if (v_isSharedCheck_594_ == 0)
{
v___x_589_ = v___x_566_;
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___x_566_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_592_; 
if (v_isShared_590_ == 0)
{
v___x_592_ = v___x_589_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_a_587_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHDivNat___redArg___boxed(lean_object* v_e_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l_Lean_Meta_Structural_isInstHDivNat___redArg(v_e_595_, v_a_596_, v_a_597_);
lean_dec(v_a_597_);
lean_dec(v_a_596_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHDivNat(lean_object* v_e_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_){
_start:
{
lean_object* v___x_606_; 
v___x_606_ = l_Lean_Meta_Structural_isInstHDivNat___redArg(v_e_600_, v_a_602_, v_a_604_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHDivNat___boxed(lean_object* v_e_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l_Lean_Meta_Structural_isInstHDivNat(v_e_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_);
lean_dec(v_a_611_);
lean_dec_ref(v_a_610_);
lean_dec(v_a_609_);
lean_dec_ref(v_a_608_);
return v_res_613_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHModNat___redArg___closed__0(void){
_start:
{
lean_object* v___x_614_; 
v___x_614_ = lean_mk_string_unchecked("instHMod", 8, 8);
return v___x_614_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHModNat___redArg___closed__1(void){
_start:
{
lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_615_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHModNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstHModNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstHModNat___redArg___closed__0);
v___x_616_ = l_Lean_Name_mkStr1(v___x_615_);
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHModNat___redArg(lean_object* v_e_617_, lean_object* v_a_618_, lean_object* v_a_619_){
_start:
{
lean_object* v___x_621_; 
v___x_621_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_617_, v_a_618_, v_a_619_);
if (lean_obj_tag(v___x_621_) == 0)
{
lean_object* v_a_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_641_; 
v_a_622_ = lean_ctor_get(v___x_621_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_621_);
if (v_isSharedCheck_641_ == 0)
{
v___x_624_ = v___x_621_;
v_isShared_625_ = v_isSharedCheck_641_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_a_622_);
lean_dec(v___x_621_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_641_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_632_; uint8_t v___x_633_; 
v___x_632_ = l_Lean_Expr_cleanupAnnotations(v_a_622_);
v___x_633_ = l_Lean_Expr_isApp(v___x_632_);
if (v___x_633_ == 0)
{
lean_dec_ref(v___x_632_);
goto v___jp_626_;
}
else
{
lean_object* v_arg_634_; lean_object* v___x_635_; uint8_t v___x_636_; 
v_arg_634_ = lean_ctor_get(v___x_632_, 1);
lean_inc_ref(v_arg_634_);
v___x_635_ = l_Lean_Expr_appFnCleanup___redArg(v___x_632_);
v___x_636_ = l_Lean_Expr_isApp(v___x_635_);
if (v___x_636_ == 0)
{
lean_dec_ref(v___x_635_);
lean_dec_ref(v_arg_634_);
goto v___jp_626_;
}
else
{
lean_object* v___x_637_; lean_object* v___x_638_; uint8_t v___x_639_; 
v___x_637_ = l_Lean_Expr_appFnCleanup___redArg(v___x_635_);
v___x_638_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHModNat___redArg___closed__1, &l_Lean_Meta_Structural_isInstHModNat___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstHModNat___redArg___closed__1);
v___x_639_ = l_Lean_Expr_isConstOf(v___x_637_, v___x_638_);
lean_dec_ref(v___x_637_);
if (v___x_639_ == 0)
{
lean_dec_ref(v_arg_634_);
goto v___jp_626_;
}
else
{
lean_object* v___x_640_; 
lean_del_object(v___x_624_);
v___x_640_ = l_Lean_Meta_Structural_isInstModNat___redArg(v_arg_634_, v_a_618_, v_a_619_);
return v___x_640_;
}
}
}
v___jp_626_:
{
uint8_t v___x_627_; lean_object* v___x_628_; lean_object* v___x_630_; 
v___x_627_ = 0;
v___x_628_ = lean_box(v___x_627_);
if (v_isShared_625_ == 0)
{
lean_ctor_set(v___x_624_, 0, v___x_628_);
v___x_630_ = v___x_624_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v___x_628_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
else
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_649_; 
v_a_642_ = lean_ctor_get(v___x_621_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_621_);
if (v_isSharedCheck_649_ == 0)
{
v___x_644_ = v___x_621_;
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_621_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_642_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHModNat___redArg___boxed(lean_object* v_e_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lean_Meta_Structural_isInstHModNat___redArg(v_e_650_, v_a_651_, v_a_652_);
lean_dec(v_a_652_);
lean_dec(v_a_651_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHModNat(lean_object* v_e_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_){
_start:
{
lean_object* v___x_661_; 
v___x_661_ = l_Lean_Meta_Structural_isInstHModNat___redArg(v_e_655_, v_a_657_, v_a_659_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHModNat___boxed(lean_object* v_e_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l_Lean_Meta_Structural_isInstHModNat(v_e_662_, v_a_663_, v_a_664_, v_a_665_, v_a_666_);
lean_dec(v_a_666_);
lean_dec_ref(v_a_665_);
lean_dec(v_a_664_);
lean_dec_ref(v_a_663_);
return v_res_668_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHPowNat___redArg___closed__0(void){
_start:
{
lean_object* v___x_669_; 
v___x_669_ = lean_mk_string_unchecked("instHPow", 8, 8);
return v___x_669_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstHPowNat___redArg___closed__1(void){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_670_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHPowNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstHPowNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstHPowNat___redArg___closed__0);
v___x_671_ = l_Lean_Name_mkStr1(v___x_670_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHPowNat___redArg(lean_object* v_e_672_, lean_object* v_a_673_, lean_object* v_a_674_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_672_, v_a_673_, v_a_674_);
if (lean_obj_tag(v___x_676_) == 0)
{
lean_object* v_a_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_698_; 
v_a_677_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_698_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_698_ == 0)
{
v___x_679_ = v___x_676_;
v_isShared_680_ = v_isSharedCheck_698_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_a_677_);
lean_dec(v___x_676_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_698_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_687_; uint8_t v___x_688_; 
v___x_687_ = l_Lean_Expr_cleanupAnnotations(v_a_677_);
v___x_688_ = l_Lean_Expr_isApp(v___x_687_);
if (v___x_688_ == 0)
{
lean_dec_ref(v___x_687_);
goto v___jp_681_;
}
else
{
lean_object* v_arg_689_; lean_object* v___x_690_; uint8_t v___x_691_; 
v_arg_689_ = lean_ctor_get(v___x_687_, 1);
lean_inc_ref(v_arg_689_);
v___x_690_ = l_Lean_Expr_appFnCleanup___redArg(v___x_687_);
v___x_691_ = l_Lean_Expr_isApp(v___x_690_);
if (v___x_691_ == 0)
{
lean_dec_ref(v___x_690_);
lean_dec_ref(v_arg_689_);
goto v___jp_681_;
}
else
{
lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_692_ = l_Lean_Expr_appFnCleanup___redArg(v___x_690_);
v___x_693_ = l_Lean_Expr_isApp(v___x_692_);
if (v___x_693_ == 0)
{
lean_dec_ref(v___x_692_);
lean_dec_ref(v_arg_689_);
goto v___jp_681_;
}
else
{
lean_object* v___x_694_; lean_object* v___x_695_; uint8_t v___x_696_; 
v___x_694_ = l_Lean_Expr_appFnCleanup___redArg(v___x_692_);
v___x_695_ = lean_obj_once(&l_Lean_Meta_Structural_isInstHPowNat___redArg___closed__1, &l_Lean_Meta_Structural_isInstHPowNat___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstHPowNat___redArg___closed__1);
v___x_696_ = l_Lean_Expr_isConstOf(v___x_694_, v___x_695_);
lean_dec_ref(v___x_694_);
if (v___x_696_ == 0)
{
lean_dec_ref(v_arg_689_);
goto v___jp_681_;
}
else
{
lean_object* v___x_697_; 
lean_del_object(v___x_679_);
v___x_697_ = l_Lean_Meta_Structural_isInstPowNat___redArg(v_arg_689_, v_a_673_, v_a_674_);
return v___x_697_;
}
}
}
}
v___jp_681_:
{
uint8_t v___x_682_; lean_object* v___x_683_; lean_object* v___x_685_; 
v___x_682_ = 0;
v___x_683_ = lean_box(v___x_682_);
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 0, v___x_683_);
v___x_685_ = v___x_679_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_683_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
}
else
{
lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_706_; 
v_a_699_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_706_ == 0)
{
v___x_701_ = v___x_676_;
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v___x_676_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_704_; 
if (v_isShared_702_ == 0)
{
v___x_704_ = v___x_701_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_a_699_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHPowNat___redArg___boxed(lean_object* v_e_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Lean_Meta_Structural_isInstHPowNat___redArg(v_e_707_, v_a_708_, v_a_709_);
lean_dec(v_a_709_);
lean_dec(v_a_708_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHPowNat(lean_object* v_e_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_){
_start:
{
lean_object* v___x_718_; 
v___x_718_ = l_Lean_Meta_Structural_isInstHPowNat___redArg(v_e_712_, v_a_714_, v_a_716_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstHPowNat___boxed(lean_object* v_e_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lean_Meta_Structural_isInstHPowNat(v_e_719_, v_a_720_, v_a_721_, v_a_722_, v_a_723_);
lean_dec(v_a_723_);
lean_dec_ref(v_a_722_);
lean_dec(v_a_721_);
lean_dec_ref(v_a_720_);
return v_res_725_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstLTNat___redArg___closed__0(void){
_start:
{
lean_object* v___x_726_; 
v___x_726_ = lean_mk_string_unchecked("instLTNat", 9, 9);
return v___x_726_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstLTNat___redArg___closed__1(void){
_start:
{
lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_727_ = lean_obj_once(&l_Lean_Meta_Structural_isInstLTNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstLTNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstLTNat___redArg___closed__0);
v___x_728_ = l_Lean_Name_mkStr1(v___x_727_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLTNat___redArg(lean_object* v_e_729_, lean_object* v_a_730_, lean_object* v_a_731_){
_start:
{
lean_object* v___x_733_; 
v___x_733_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_729_, v_a_730_, v_a_731_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_object* v_a_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_745_; 
v_a_734_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_745_ == 0)
{
v___x_736_ = v___x_733_;
v_isShared_737_ = v_isSharedCheck_745_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_a_734_);
lean_dec(v___x_733_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_745_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v___x_738_; lean_object* v___x_739_; uint8_t v___x_740_; lean_object* v___x_741_; lean_object* v___x_743_; 
v___x_738_ = l_Lean_Expr_cleanupAnnotations(v_a_734_);
v___x_739_ = lean_obj_once(&l_Lean_Meta_Structural_isInstLTNat___redArg___closed__1, &l_Lean_Meta_Structural_isInstLTNat___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstLTNat___redArg___closed__1);
v___x_740_ = l_Lean_Expr_isConstOf(v___x_738_, v___x_739_);
lean_dec_ref(v___x_738_);
v___x_741_ = lean_box(v___x_740_);
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 0, v___x_741_);
v___x_743_ = v___x_736_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_741_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
else
{
lean_object* v_a_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_753_; 
v_a_746_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_753_ == 0)
{
v___x_748_ = v___x_733_;
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_a_746_);
lean_dec(v___x_733_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_751_; 
if (v_isShared_749_ == 0)
{
v___x_751_ = v___x_748_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_a_746_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLTNat___redArg___boxed(lean_object* v_e_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Lean_Meta_Structural_isInstLTNat___redArg(v_e_754_, v_a_755_, v_a_756_);
lean_dec(v_a_756_);
lean_dec(v_a_755_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLTNat(lean_object* v_e_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_){
_start:
{
lean_object* v___x_765_; 
v___x_765_ = l_Lean_Meta_Structural_isInstLTNat___redArg(v_e_759_, v_a_761_, v_a_763_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLTNat___boxed(lean_object* v_e_766_, lean_object* v_a_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Lean_Meta_Structural_isInstLTNat(v_e_766_, v_a_767_, v_a_768_, v_a_769_, v_a_770_);
lean_dec(v_a_770_);
lean_dec_ref(v_a_769_);
lean_dec(v_a_768_);
lean_dec_ref(v_a_767_);
return v_res_772_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstLENat___redArg___closed__0(void){
_start:
{
lean_object* v___x_773_; 
v___x_773_ = lean_mk_string_unchecked("instLENat", 9, 9);
return v___x_773_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstLENat___redArg___closed__1(void){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = lean_obj_once(&l_Lean_Meta_Structural_isInstLENat___redArg___closed__0, &l_Lean_Meta_Structural_isInstLENat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstLENat___redArg___closed__0);
v___x_775_ = l_Lean_Name_mkStr1(v___x_774_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLENat___redArg(lean_object* v_e_776_, lean_object* v_a_777_, lean_object* v_a_778_){
_start:
{
lean_object* v___x_780_; 
v___x_780_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_776_, v_a_777_, v_a_778_);
if (lean_obj_tag(v___x_780_) == 0)
{
lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_792_; 
v_a_781_ = lean_ctor_get(v___x_780_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_792_ == 0)
{
v___x_783_ = v___x_780_;
v_isShared_784_ = v_isSharedCheck_792_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v___x_780_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_792_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_785_; lean_object* v___x_786_; uint8_t v___x_787_; lean_object* v___x_788_; lean_object* v___x_790_; 
v___x_785_ = l_Lean_Expr_cleanupAnnotations(v_a_781_);
v___x_786_ = lean_obj_once(&l_Lean_Meta_Structural_isInstLENat___redArg___closed__1, &l_Lean_Meta_Structural_isInstLENat___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstLENat___redArg___closed__1);
v___x_787_ = l_Lean_Expr_isConstOf(v___x_785_, v___x_786_);
lean_dec_ref(v___x_785_);
v___x_788_ = lean_box(v___x_787_);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 0, v___x_788_);
v___x_790_ = v___x_783_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v___x_788_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
else
{
lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_800_; 
v_a_793_ = lean_ctor_get(v___x_780_, 0);
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_800_ == 0)
{
v___x_795_ = v___x_780_;
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_dec(v___x_780_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_798_; 
if (v_isShared_796_ == 0)
{
v___x_798_ = v___x_795_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_a_793_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLENat___redArg___boxed(lean_object* v_e_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_){
_start:
{
lean_object* v_res_805_; 
v_res_805_ = l_Lean_Meta_Structural_isInstLENat___redArg(v_e_801_, v_a_802_, v_a_803_);
lean_dec(v_a_803_);
lean_dec(v_a_802_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLENat(lean_object* v_e_806_, lean_object* v_a_807_, lean_object* v_a_808_, lean_object* v_a_809_, lean_object* v_a_810_){
_start:
{
lean_object* v___x_812_; 
v___x_812_ = l_Lean_Meta_Structural_isInstLENat___redArg(v_e_806_, v_a_808_, v_a_810_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstLENat___boxed(lean_object* v_e_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lean_Meta_Structural_isInstLENat(v_e_813_, v_a_814_, v_a_815_, v_a_816_, v_a_817_);
lean_dec(v_a_817_);
lean_dec_ref(v_a_816_);
lean_dec(v_a_815_);
lean_dec_ref(v_a_814_);
return v_res_819_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstDvdNat___redArg___closed__0(void){
_start:
{
lean_object* v___x_820_; 
v___x_820_ = lean_mk_string_unchecked("instDvd", 7, 7);
return v___x_820_;
}
}
static lean_object* _init_l_Lean_Meta_Structural_isInstDvdNat___redArg___closed__1(void){
_start:
{
lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_821_ = lean_obj_once(&l_Lean_Meta_Structural_isInstDvdNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstDvdNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstDvdNat___redArg___closed__0);
v___x_822_ = lean_obj_once(&l_Lean_Meta_Structural_isInstDivNat___redArg___closed__0, &l_Lean_Meta_Structural_isInstDivNat___redArg___closed__0_once, _init_l_Lean_Meta_Structural_isInstDivNat___redArg___closed__0);
v___x_823_ = l_Lean_Name_mkStr2(v___x_822_, v___x_821_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDvdNat___redArg(lean_object* v_e_824_, lean_object* v_a_825_, lean_object* v_a_826_){
_start:
{
lean_object* v___x_828_; 
v___x_828_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_824_, v_a_825_, v_a_826_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_840_; 
v_a_829_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_840_ == 0)
{
v___x_831_ = v___x_828_;
v_isShared_832_ = v_isSharedCheck_840_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_dec(v___x_828_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_840_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_833_; lean_object* v___x_834_; uint8_t v___x_835_; lean_object* v___x_836_; lean_object* v___x_838_; 
v___x_833_ = l_Lean_Expr_cleanupAnnotations(v_a_829_);
v___x_834_ = lean_obj_once(&l_Lean_Meta_Structural_isInstDvdNat___redArg___closed__1, &l_Lean_Meta_Structural_isInstDvdNat___redArg___closed__1_once, _init_l_Lean_Meta_Structural_isInstDvdNat___redArg___closed__1);
v___x_835_ = l_Lean_Expr_isConstOf(v___x_833_, v___x_834_);
lean_dec_ref(v___x_833_);
v___x_836_ = lean_box(v___x_835_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 0, v___x_836_);
v___x_838_ = v___x_831_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v___x_836_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
else
{
lean_object* v_a_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_848_; 
v_a_841_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_848_ == 0)
{
v___x_843_ = v___x_828_;
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_a_841_);
lean_dec(v___x_828_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_846_; 
if (v_isShared_844_ == 0)
{
v___x_846_ = v___x_843_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_a_841_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDvdNat___redArg___boxed(lean_object* v_e_849_, lean_object* v_a_850_, lean_object* v_a_851_, lean_object* v_a_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lean_Meta_Structural_isInstDvdNat___redArg(v_e_849_, v_a_850_, v_a_851_);
lean_dec(v_a_851_);
lean_dec(v_a_850_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDvdNat(lean_object* v_e_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_){
_start:
{
lean_object* v___x_860_; 
v___x_860_ = l_Lean_Meta_Structural_isInstDvdNat___redArg(v_e_854_, v_a_856_, v_a_858_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Structural_isInstDvdNat___boxed(lean_object* v_e_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_){
_start:
{
lean_object* v_res_867_; 
v_res_867_ = l_Lean_Meta_Structural_isInstDvdNat(v_e_861_, v_a_862_, v_a_863_, v_a_864_, v_a_865_);
lean_dec(v_a_865_);
lean_dec_ref(v_a_864_);
lean_dec(v_a_863_);
lean_dec_ref(v_a_862_);
return v_res_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstAddNat(lean_object* v_e_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_){
_start:
{
lean_object* v___x_874_; 
lean_inc_ref(v_e_868_);
v___x_874_ = l_Lean_Meta_Structural_isInstAddNat___redArg(v_e_868_, v_a_870_, v_a_872_);
if (lean_obj_tag(v___x_874_) == 0)
{
lean_object* v_a_875_; uint8_t v___x_876_; 
v_a_875_ = lean_ctor_get(v___x_874_, 0);
lean_inc(v_a_875_);
v___x_876_ = lean_unbox(v_a_875_);
lean_dec(v_a_875_);
if (v___x_876_ == 0)
{
lean_object* v___x_877_; lean_object* v___x_878_; 
lean_dec_ref(v___x_874_);
v___x_877_ = l_Lean_Nat_mkInstAdd;
v___x_878_ = l_Lean_Meta_isDefEqI(v_e_868_, v___x_877_, v_a_869_, v_a_870_, v_a_871_, v_a_872_);
return v___x_878_;
}
else
{
lean_dec_ref(v_e_868_);
return v___x_874_;
}
}
else
{
lean_dec_ref(v_e_868_);
return v___x_874_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstAddNat___boxed(lean_object* v_e_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l_Lean_Meta_DefEq_isInstAddNat(v_e_879_, v_a_880_, v_a_881_, v_a_882_, v_a_883_);
lean_dec(v_a_883_);
lean_dec_ref(v_a_882_);
lean_dec(v_a_881_);
lean_dec_ref(v_a_880_);
return v_res_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHAddNat(lean_object* v_e_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_){
_start:
{
lean_object* v___x_892_; 
lean_inc_ref(v_e_886_);
v___x_892_ = l_Lean_Meta_Structural_isInstHAddNat___redArg(v_e_886_, v_a_888_, v_a_890_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v_a_893_; uint8_t v___x_894_; 
v_a_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_a_893_);
v___x_894_ = lean_unbox(v_a_893_);
lean_dec(v_a_893_);
if (v___x_894_ == 0)
{
lean_object* v___x_895_; lean_object* v___x_896_; 
lean_dec_ref(v___x_892_);
v___x_895_ = l_Lean_Nat_mkInstHAdd;
v___x_896_ = l_Lean_Meta_isDefEqI(v_e_886_, v___x_895_, v_a_887_, v_a_888_, v_a_889_, v_a_890_);
return v___x_896_;
}
else
{
lean_dec_ref(v_e_886_);
return v___x_892_;
}
}
else
{
lean_dec_ref(v_e_886_);
return v___x_892_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHAddNat___boxed(lean_object* v_e_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = l_Lean_Meta_DefEq_isInstHAddNat(v_e_897_, v_a_898_, v_a_899_, v_a_900_, v_a_901_);
lean_dec(v_a_901_);
lean_dec_ref(v_a_900_);
lean_dec(v_a_899_);
lean_dec_ref(v_a_898_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstMulNat(lean_object* v_e_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_){
_start:
{
lean_object* v___x_910_; 
lean_inc_ref(v_e_904_);
v___x_910_ = l_Lean_Meta_Structural_isInstMulNat___redArg(v_e_904_, v_a_906_, v_a_908_);
if (lean_obj_tag(v___x_910_) == 0)
{
lean_object* v_a_911_; uint8_t v___x_912_; 
v_a_911_ = lean_ctor_get(v___x_910_, 0);
lean_inc(v_a_911_);
v___x_912_ = lean_unbox(v_a_911_);
lean_dec(v_a_911_);
if (v___x_912_ == 0)
{
lean_object* v___x_913_; lean_object* v___x_914_; 
lean_dec_ref(v___x_910_);
v___x_913_ = l_Lean_Nat_mkInstMul;
v___x_914_ = l_Lean_Meta_isDefEqI(v_e_904_, v___x_913_, v_a_905_, v_a_906_, v_a_907_, v_a_908_);
return v___x_914_;
}
else
{
lean_dec_ref(v_e_904_);
return v___x_910_;
}
}
else
{
lean_dec_ref(v_e_904_);
return v___x_910_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstMulNat___boxed(lean_object* v_e_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_){
_start:
{
lean_object* v_res_921_; 
v_res_921_ = l_Lean_Meta_DefEq_isInstMulNat(v_e_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_);
lean_dec(v_a_919_);
lean_dec_ref(v_a_918_);
lean_dec(v_a_917_);
lean_dec_ref(v_a_916_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHMulNat(lean_object* v_e_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_){
_start:
{
lean_object* v___x_928_; 
lean_inc_ref(v_e_922_);
v___x_928_ = l_Lean_Meta_Structural_isInstHMulNat___redArg(v_e_922_, v_a_924_, v_a_926_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v_a_929_; uint8_t v___x_930_; 
v_a_929_ = lean_ctor_get(v___x_928_, 0);
lean_inc(v_a_929_);
v___x_930_ = lean_unbox(v_a_929_);
lean_dec(v_a_929_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; lean_object* v___x_932_; 
lean_dec_ref(v___x_928_);
v___x_931_ = l_Lean_Nat_mkInstHMul;
v___x_932_ = l_Lean_Meta_isDefEqI(v_e_922_, v___x_931_, v_a_923_, v_a_924_, v_a_925_, v_a_926_);
return v___x_932_;
}
else
{
lean_dec_ref(v_e_922_);
return v___x_928_;
}
}
else
{
lean_dec_ref(v_e_922_);
return v___x_928_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstHMulNat___boxed(lean_object* v_e_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Lean_Meta_DefEq_isInstHMulNat(v_e_933_, v_a_934_, v_a_935_, v_a_936_, v_a_937_);
lean_dec(v_a_937_);
lean_dec_ref(v_a_936_);
lean_dec(v_a_935_);
lean_dec_ref(v_a_934_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstLTNat(lean_object* v_e_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_){
_start:
{
lean_object* v___x_946_; 
lean_inc_ref(v_e_940_);
v___x_946_ = l_Lean_Meta_Structural_isInstLTNat___redArg(v_e_940_, v_a_942_, v_a_944_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v_a_947_; uint8_t v___x_948_; 
v_a_947_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_a_947_);
v___x_948_ = lean_unbox(v_a_947_);
lean_dec(v_a_947_);
if (v___x_948_ == 0)
{
lean_object* v___x_949_; lean_object* v___x_950_; 
lean_dec_ref(v___x_946_);
v___x_949_ = l_Lean_Nat_mkInstLT;
v___x_950_ = l_Lean_Meta_isDefEqI(v_e_940_, v___x_949_, v_a_941_, v_a_942_, v_a_943_, v_a_944_);
return v___x_950_;
}
else
{
lean_dec_ref(v_e_940_);
return v___x_946_;
}
}
else
{
lean_dec_ref(v_e_940_);
return v___x_946_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstLTNat___boxed(lean_object* v_e_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_Lean_Meta_DefEq_isInstLTNat(v_e_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_);
lean_dec(v_a_955_);
lean_dec_ref(v_a_954_);
lean_dec(v_a_953_);
lean_dec_ref(v_a_952_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstLENat(lean_object* v_e_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_){
_start:
{
lean_object* v___x_964_; 
lean_inc_ref(v_e_958_);
v___x_964_ = l_Lean_Meta_Structural_isInstLENat___redArg(v_e_958_, v_a_960_, v_a_962_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v_a_965_; uint8_t v___x_966_; 
v_a_965_ = lean_ctor_get(v___x_964_, 0);
lean_inc(v_a_965_);
v___x_966_ = lean_unbox(v_a_965_);
lean_dec(v_a_965_);
if (v___x_966_ == 0)
{
lean_object* v___x_967_; lean_object* v___x_968_; 
lean_dec_ref(v___x_964_);
v___x_967_ = l_Lean_Nat_mkInstLE;
v___x_968_ = l_Lean_Meta_isDefEqI(v_e_958_, v___x_967_, v_a_959_, v_a_960_, v_a_961_, v_a_962_);
return v___x_968_;
}
else
{
lean_dec_ref(v_e_958_);
return v___x_964_;
}
}
else
{
lean_dec_ref(v_e_958_);
return v___x_964_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DefEq_isInstLENat___boxed(lean_object* v_e_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lean_Meta_DefEq_isInstLENat(v_e_969_, v_a_970_, v_a_971_, v_a_972_, v_a_973_);
lean_dec(v_a_973_);
lean_dec_ref(v_a_972_);
lean_dec(v_a_971_);
lean_dec_ref(v_a_970_);
return v_res_975_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_NatInstTesters(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_NatInstTesters(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_NatInstTesters(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_NatInstTesters(builtin);
}
#ifdef __cplusplus
}
#endif
