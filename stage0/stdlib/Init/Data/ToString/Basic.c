// Lean compiler output
// Module: Init.Data.ToString.Basic
// Imports: public import Init.Data.Repr import Init.Data.Char.Basic
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
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_string_isprefixof(lean_object*, lean_object*);
uint8_t lean_string_any(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_usize_to_nat(size_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Substring_Raw_Internal_toString___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instToStringId___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instToStringId___aux__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instToStringId___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringId___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringId___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instToStringId___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instToStringId(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringId___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringId__1___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instToStringId__1___aux__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instToStringId__1___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringId__1___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringId__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instToStringId__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instToStringId__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringId__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringString___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_instToStringString___lam__0___boxed(lean_object*);
static lean_once_cell_t l_instToStringString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringString___closed__0;
LEAN_EXPORT lean_object* l_instToStringString;
static lean_once_cell_t l_instToStringRaw___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringRaw___closed__0;
LEAN_EXPORT lean_object* l_instToStringRaw;
static lean_once_cell_t l_instToStringChar___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringChar___lam__0___closed__0;
LEAN_EXPORT lean_object* l_instToStringChar___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_instToStringChar___lam__0___boxed(lean_object*);
static lean_once_cell_t l_instToStringChar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringChar___closed__0;
LEAN_EXPORT lean_object* l_instToStringChar;
static lean_once_cell_t l_instToStringBool___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringBool___lam__0___closed__0;
static lean_once_cell_t l_instToStringBool___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringBool___lam__0___closed__1;
LEAN_EXPORT lean_object* l_instToStringBool___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_instToStringBool___lam__0___boxed(lean_object*);
static lean_once_cell_t l_instToStringBool___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringBool___closed__0;
LEAN_EXPORT lean_object* l_instToStringBool;
LEAN_EXPORT lean_object* l_instToStringDecidable___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_instToStringDecidable___lam__0___boxed(lean_object*);
static lean_once_cell_t l_instToStringDecidable___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringDecidable___closed__0;
LEAN_EXPORT lean_object* l_instToStringDecidable(lean_object*);
static lean_once_cell_t l_instToStringPUnit___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringPUnit___lam__0___closed__0;
LEAN_EXPORT lean_object* l_instToStringPUnit___lam__0(lean_object*);
static lean_once_cell_t l_instToStringPUnit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringPUnit___closed__0;
LEAN_EXPORT lean_object* l_instToStringPUnit;
LEAN_EXPORT lean_object* l_instToStringULift___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringULift___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instToStringULift(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringUnit;
static lean_once_cell_t l_instToStringNat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringNat___closed__0;
LEAN_EXPORT lean_object* l_instToStringNat;
LEAN_EXPORT lean_object* l_instToStringRaw__1;
LEAN_EXPORT lean_object* l_instToStringFin(lean_object*);
LEAN_EXPORT lean_object* l_instToStringFin___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instToStringUInt8___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_instToStringUInt8___lam__0___boxed(lean_object*);
static lean_once_cell_t l_instToStringUInt8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringUInt8___closed__0;
LEAN_EXPORT lean_object* l_instToStringUInt8;
LEAN_EXPORT lean_object* l_instToStringUInt16___lam__0(uint16_t);
LEAN_EXPORT lean_object* l_instToStringUInt16___lam__0___boxed(lean_object*);
static lean_once_cell_t l_instToStringUInt16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringUInt16___closed__0;
LEAN_EXPORT lean_object* l_instToStringUInt16;
LEAN_EXPORT lean_object* l_instToStringUInt32___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_instToStringUInt32___lam__0___boxed(lean_object*);
static lean_once_cell_t l_instToStringUInt32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringUInt32___closed__0;
LEAN_EXPORT lean_object* l_instToStringUInt32;
LEAN_EXPORT lean_object* l_instToStringUInt64___lam__0(uint64_t);
LEAN_EXPORT lean_object* l_instToStringUInt64___lam__0___boxed(lean_object*);
static lean_once_cell_t l_instToStringUInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringUInt64___closed__0;
LEAN_EXPORT lean_object* l_instToStringUInt64;
LEAN_EXPORT lean_object* l_instToStringUSize___lam__0(size_t);
LEAN_EXPORT lean_object* l_instToStringUSize___lam__0___boxed(lean_object*);
static lean_once_cell_t l_instToStringUSize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringUSize___closed__0;
LEAN_EXPORT lean_object* l_instToStringUSize;
LEAN_EXPORT lean_object* l_instToStringFormat___lam__0(lean_object*);
static lean_once_cell_t l_instToStringFormat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringFormat___closed__0;
LEAN_EXPORT lean_object* l_instToStringFormat;
LEAN_EXPORT uint8_t l_addParenHeuristic___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_addParenHeuristic___lam__0___boxed(lean_object*);
static lean_once_cell_t l_addParenHeuristic___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_addParenHeuristic___closed__0;
static lean_once_cell_t l_addParenHeuristic___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_addParenHeuristic___closed__1;
static lean_once_cell_t l_addParenHeuristic___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_addParenHeuristic___closed__2;
static lean_once_cell_t l_addParenHeuristic___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_addParenHeuristic___closed__3;
static lean_once_cell_t l_addParenHeuristic___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_addParenHeuristic___closed__4;
static lean_once_cell_t l_addParenHeuristic___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_addParenHeuristic___closed__5;
LEAN_EXPORT lean_object* l_addParenHeuristic(lean_object*);
static lean_once_cell_t l_instToStringOption___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringOption___redArg___lam__0___closed__0;
static lean_once_cell_t l_instToStringOption___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringOption___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_instToStringOption___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instToStringOption(lean_object*, lean_object*);
static lean_once_cell_t l_instToStringSum___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringSum___redArg___lam__0___closed__0;
static lean_once_cell_t l_instToStringSum___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringSum___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_instToStringSum___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringSum___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringSum(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_instToStringProd___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringProd___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_instToStringProd___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringProd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringProd(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_instToStringSigma___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringSigma___redArg___lam__0___closed__0;
static lean_once_cell_t l_instToStringSigma___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringSigma___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_instToStringSigma___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringSigma___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringSigma(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringSubtype___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringSubtype___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instToStringSubtype(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_instToStringExcept___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringExcept___redArg___lam__0___closed__0;
static lean_once_cell_t l_instToStringExcept___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instToStringExcept___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_instToStringExcept___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringExcept___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringExcept(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_instReprExcept___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instReprExcept___redArg___lam__0___closed__0;
static lean_once_cell_t l_instReprExcept___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instReprExcept___redArg___lam__0___closed__1;
static lean_once_cell_t l_instReprExcept___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instReprExcept___redArg___lam__0___closed__2;
static lean_once_cell_t l_instReprExcept___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instReprExcept___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l_instReprExcept___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprExcept___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprExcept___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instReprExcept(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringId___aux__1___redArg(lean_object* v_inst_1_){
_start:
{
lean_inc_ref(v_inst_1_);
return v_inst_1_;
}
}
LEAN_EXPORT lean_object* l_instToStringId___aux__1___redArg___boxed(lean_object* v_inst_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = l_instToStringId___aux__1___redArg(v_inst_2_);
lean_dec_ref(v_inst_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_instToStringId___aux__1(lean_object* v_00_u03b1_4_, lean_object* v_inst_5_){
_start:
{
lean_inc_ref(v_inst_5_);
return v_inst_5_;
}
}
LEAN_EXPORT lean_object* l_instToStringId___aux__1___boxed(lean_object* v_00_u03b1_6_, lean_object* v_inst_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_instToStringId___aux__1(v_00_u03b1_6_, v_inst_7_);
lean_dec_ref(v_inst_7_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_instToStringId___redArg(lean_object* v_inst_9_){
_start:
{
lean_inc_ref(v_inst_9_);
return v_inst_9_;
}
}
LEAN_EXPORT lean_object* l_instToStringId___redArg___boxed(lean_object* v_inst_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_instToStringId___redArg(v_inst_10_);
lean_dec_ref(v_inst_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_instToStringId(lean_object* v_00_u03b1_12_, lean_object* v_inst_13_){
_start:
{
lean_inc_ref(v_inst_13_);
return v_inst_13_;
}
}
LEAN_EXPORT lean_object* l_instToStringId___boxed(lean_object* v_00_u03b1_14_, lean_object* v_inst_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l_instToStringId(v_00_u03b1_14_, v_inst_15_);
lean_dec_ref(v_inst_15_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l_instToStringId__1___aux__1___redArg(lean_object* v_inst_17_){
_start:
{
lean_inc_ref(v_inst_17_);
return v_inst_17_;
}
}
LEAN_EXPORT lean_object* l_instToStringId__1___aux__1___redArg___boxed(lean_object* v_inst_18_){
_start:
{
lean_object* v_res_19_; 
v_res_19_ = l_instToStringId__1___aux__1___redArg(v_inst_18_);
lean_dec_ref(v_inst_18_);
return v_res_19_;
}
}
LEAN_EXPORT lean_object* l_instToStringId__1___aux__1(lean_object* v_00_u03b1_20_, lean_object* v_inst_21_){
_start:
{
lean_inc_ref(v_inst_21_);
return v_inst_21_;
}
}
LEAN_EXPORT lean_object* l_instToStringId__1___aux__1___boxed(lean_object* v_00_u03b1_22_, lean_object* v_inst_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_instToStringId__1___aux__1(v_00_u03b1_22_, v_inst_23_);
lean_dec_ref(v_inst_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_instToStringId__1___redArg(lean_object* v_inst_25_){
_start:
{
lean_inc_ref(v_inst_25_);
return v_inst_25_;
}
}
LEAN_EXPORT lean_object* l_instToStringId__1___redArg___boxed(lean_object* v_inst_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_instToStringId__1___redArg(v_inst_26_);
lean_dec_ref(v_inst_26_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_instToStringId__1(lean_object* v_00_u03b1_28_, lean_object* v_inst_29_){
_start:
{
lean_inc_ref(v_inst_29_);
return v_inst_29_;
}
}
LEAN_EXPORT lean_object* l_instToStringId__1___boxed(lean_object* v_00_u03b1_30_, lean_object* v_inst_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_instToStringId__1(v_00_u03b1_30_, v_inst_31_);
lean_dec_ref(v_inst_31_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_instToStringString___lam__0(lean_object* v_s_33_){
_start:
{
lean_inc_ref(v_s_33_);
return v_s_33_;
}
}
LEAN_EXPORT lean_object* l_instToStringString___lam__0___boxed(lean_object* v_s_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l_instToStringString___lam__0(v_s_34_);
lean_dec_ref(v_s_34_);
return v_res_35_;
}
}
static lean_object* _init_l_instToStringString___closed__0(void){
_start:
{
lean_object* v___f_36_; 
v___f_36_ = lean_alloc_closure((void*)(l_instToStringString___lam__0___boxed), 1, 0);
return v___f_36_;
}
}
static lean_object* _init_l_instToStringString(void){
_start:
{
lean_object* v___f_37_; 
v___f_37_ = lean_obj_once(&l_instToStringString___closed__0, &l_instToStringString___closed__0_once, _init_l_instToStringString___closed__0);
return v___f_37_;
}
}
static lean_object* _init_l_instToStringRaw___closed__0(void){
_start:
{
lean_object* v___f_38_; 
v___f_38_ = lean_alloc_closure((void*)(l_Substring_Raw_Internal_toString___boxed), 1, 0);
return v___f_38_;
}
}
static lean_object* _init_l_instToStringRaw(void){
_start:
{
lean_object* v___f_39_; 
v___f_39_ = lean_obj_once(&l_instToStringRaw___closed__0, &l_instToStringRaw___closed__0_once, _init_l_instToStringRaw___closed__0);
return v___f_39_;
}
}
static lean_object* _init_l_instToStringChar___lam__0___closed__0(void){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lean_mk_string_unchecked("", 0, 0);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_instToStringChar___lam__0(uint32_t v_c_41_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_obj_once(&l_instToStringChar___lam__0___closed__0, &l_instToStringChar___lam__0___closed__0_once, _init_l_instToStringChar___lam__0___closed__0);
v___x_43_ = lean_string_push(v___x_42_, v_c_41_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_instToStringChar___lam__0___boxed(lean_object* v_c_44_){
_start:
{
uint32_t v_c_boxed_45_; lean_object* v_res_46_; 
v_c_boxed_45_ = lean_unbox_uint32(v_c_44_);
lean_dec(v_c_44_);
v_res_46_ = l_instToStringChar___lam__0(v_c_boxed_45_);
return v_res_46_;
}
}
static lean_object* _init_l_instToStringChar___closed__0(void){
_start:
{
lean_object* v___f_47_; 
v___f_47_ = lean_alloc_closure((void*)(l_instToStringChar___lam__0___boxed), 1, 0);
return v___f_47_;
}
}
static lean_object* _init_l_instToStringChar(void){
_start:
{
lean_object* v___f_48_; 
v___f_48_ = lean_obj_once(&l_instToStringChar___closed__0, &l_instToStringChar___closed__0_once, _init_l_instToStringChar___closed__0);
return v___f_48_;
}
}
static lean_object* _init_l_instToStringBool___lam__0___closed__0(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_mk_string_unchecked("false", 5, 5);
return v___x_49_;
}
}
static lean_object* _init_l_instToStringBool___lam__0___closed__1(void){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_mk_string_unchecked("true", 4, 4);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_instToStringBool___lam__0(uint8_t v_b_51_){
_start:
{
if (v_b_51_ == 0)
{
lean_object* v___x_52_; 
v___x_52_ = lean_obj_once(&l_instToStringBool___lam__0___closed__0, &l_instToStringBool___lam__0___closed__0_once, _init_l_instToStringBool___lam__0___closed__0);
return v___x_52_;
}
else
{
lean_object* v___x_53_; 
v___x_53_ = lean_obj_once(&l_instToStringBool___lam__0___closed__1, &l_instToStringBool___lam__0___closed__1_once, _init_l_instToStringBool___lam__0___closed__1);
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* l_instToStringBool___lam__0___boxed(lean_object* v_b_54_){
_start:
{
uint8_t v_b_boxed_55_; lean_object* v_res_56_; 
v_b_boxed_55_ = lean_unbox(v_b_54_);
v_res_56_ = l_instToStringBool___lam__0(v_b_boxed_55_);
return v_res_56_;
}
}
static lean_object* _init_l_instToStringBool___closed__0(void){
_start:
{
lean_object* v___f_57_; 
v___f_57_ = lean_alloc_closure((void*)(l_instToStringBool___lam__0___boxed), 1, 0);
return v___f_57_;
}
}
static lean_object* _init_l_instToStringBool(void){
_start:
{
lean_object* v___f_58_; 
v___f_58_ = lean_obj_once(&l_instToStringBool___closed__0, &l_instToStringBool___closed__0_once, _init_l_instToStringBool___closed__0);
return v___f_58_;
}
}
LEAN_EXPORT lean_object* l_instToStringDecidable___lam__0(uint8_t v_h_59_){
_start:
{
if (v_h_59_ == 0)
{
lean_object* v___x_60_; 
v___x_60_ = lean_obj_once(&l_instToStringBool___lam__0___closed__0, &l_instToStringBool___lam__0___closed__0_once, _init_l_instToStringBool___lam__0___closed__0);
return v___x_60_;
}
else
{
lean_object* v___x_61_; 
v___x_61_ = lean_obj_once(&l_instToStringBool___lam__0___closed__1, &l_instToStringBool___lam__0___closed__1_once, _init_l_instToStringBool___lam__0___closed__1);
return v___x_61_;
}
}
}
LEAN_EXPORT lean_object* l_instToStringDecidable___lam__0___boxed(lean_object* v_h_62_){
_start:
{
uint8_t v_h_boxed_63_; lean_object* v_res_64_; 
v_h_boxed_63_ = lean_unbox(v_h_62_);
v_res_64_ = l_instToStringDecidable___lam__0(v_h_boxed_63_);
return v_res_64_;
}
}
static lean_object* _init_l_instToStringDecidable___closed__0(void){
_start:
{
lean_object* v___f_65_; 
v___f_65_ = lean_alloc_closure((void*)(l_instToStringDecidable___lam__0___boxed), 1, 0);
return v___f_65_;
}
}
LEAN_EXPORT lean_object* l_instToStringDecidable(lean_object* v_p_66_){
_start:
{
lean_object* v___f_67_; 
v___f_67_ = lean_obj_once(&l_instToStringDecidable___closed__0, &l_instToStringDecidable___closed__0_once, _init_l_instToStringDecidable___closed__0);
return v___f_67_;
}
}
static lean_object* _init_l_instToStringPUnit___lam__0___closed__0(void){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_mk_string_unchecked("()", 2, 2);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_instToStringPUnit___lam__0(lean_object* v_x_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = lean_obj_once(&l_instToStringPUnit___lam__0___closed__0, &l_instToStringPUnit___lam__0___closed__0_once, _init_l_instToStringPUnit___lam__0___closed__0);
return v___x_70_;
}
}
static lean_object* _init_l_instToStringPUnit___closed__0(void){
_start:
{
lean_object* v___f_71_; 
v___f_71_ = lean_alloc_closure((void*)(l_instToStringPUnit___lam__0), 1, 0);
return v___f_71_;
}
}
static lean_object* _init_l_instToStringPUnit(void){
_start:
{
lean_object* v___f_72_; 
v___f_72_ = lean_obj_once(&l_instToStringPUnit___closed__0, &l_instToStringPUnit___closed__0_once, _init_l_instToStringPUnit___closed__0);
return v___f_72_;
}
}
LEAN_EXPORT lean_object* l_instToStringULift___redArg___lam__0(lean_object* v_inst_73_, lean_object* v_v_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lean_apply_1(v_inst_73_, v_v_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_instToStringULift___redArg(lean_object* v_inst_76_){
_start:
{
lean_object* v___f_77_; 
v___f_77_ = lean_alloc_closure((void*)(l_instToStringULift___redArg___lam__0), 2, 1);
lean_closure_set(v___f_77_, 0, v_inst_76_);
return v___f_77_;
}
}
LEAN_EXPORT lean_object* l_instToStringULift(lean_object* v_00_u03b1_78_, lean_object* v_inst_79_){
_start:
{
lean_object* v___f_80_; 
v___f_80_ = lean_alloc_closure((void*)(l_instToStringULift___redArg___lam__0), 2, 1);
lean_closure_set(v___f_80_, 0, v_inst_79_);
return v___f_80_;
}
}
static lean_object* _init_l_instToStringUnit(void){
_start:
{
lean_object* v___f_81_; 
v___f_81_ = lean_obj_once(&l_instToStringPUnit___closed__0, &l_instToStringPUnit___closed__0_once, _init_l_instToStringPUnit___closed__0);
return v___f_81_;
}
}
static lean_object* _init_l_instToStringNat___closed__0(void){
_start:
{
lean_object* v___f_82_; 
v___f_82_ = lean_alloc_closure((void*)(l_Nat_reprFast), 1, 0);
return v___f_82_;
}
}
static lean_object* _init_l_instToStringNat(void){
_start:
{
lean_object* v___f_83_; 
v___f_83_ = lean_obj_once(&l_instToStringNat___closed__0, &l_instToStringNat___closed__0_once, _init_l_instToStringNat___closed__0);
return v___f_83_;
}
}
static lean_object* _init_l_instToStringRaw__1(void){
_start:
{
lean_object* v___f_84_; 
v___f_84_ = lean_obj_once(&l_instToStringNat___closed__0, &l_instToStringNat___closed__0_once, _init_l_instToStringNat___closed__0);
return v___f_84_;
}
}
LEAN_EXPORT lean_object* l_instToStringFin(lean_object* v_n_85_){
_start:
{
lean_object* v___f_86_; 
v___f_86_ = lean_obj_once(&l_instToStringNat___closed__0, &l_instToStringNat___closed__0_once, _init_l_instToStringNat___closed__0);
return v___f_86_;
}
}
LEAN_EXPORT lean_object* l_instToStringFin___boxed(lean_object* v_n_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_instToStringFin(v_n_87_);
lean_dec(v_n_87_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_instToStringUInt8___lam__0(uint8_t v_n_89_){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_uint8_to_nat(v_n_89_);
v___x_91_ = l_Nat_reprFast(v___x_90_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_instToStringUInt8___lam__0___boxed(lean_object* v_n_92_){
_start:
{
uint8_t v_n_boxed_93_; lean_object* v_res_94_; 
v_n_boxed_93_ = lean_unbox(v_n_92_);
v_res_94_ = l_instToStringUInt8___lam__0(v_n_boxed_93_);
return v_res_94_;
}
}
static lean_object* _init_l_instToStringUInt8___closed__0(void){
_start:
{
lean_object* v___f_95_; 
v___f_95_ = lean_alloc_closure((void*)(l_instToStringUInt8___lam__0___boxed), 1, 0);
return v___f_95_;
}
}
static lean_object* _init_l_instToStringUInt8(void){
_start:
{
lean_object* v___f_96_; 
v___f_96_ = lean_obj_once(&l_instToStringUInt8___closed__0, &l_instToStringUInt8___closed__0_once, _init_l_instToStringUInt8___closed__0);
return v___f_96_;
}
}
LEAN_EXPORT lean_object* l_instToStringUInt16___lam__0(uint16_t v_n_97_){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_98_ = lean_uint16_to_nat(v_n_97_);
v___x_99_ = l_Nat_reprFast(v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_instToStringUInt16___lam__0___boxed(lean_object* v_n_100_){
_start:
{
uint16_t v_n_boxed_101_; lean_object* v_res_102_; 
v_n_boxed_101_ = lean_unbox(v_n_100_);
v_res_102_ = l_instToStringUInt16___lam__0(v_n_boxed_101_);
return v_res_102_;
}
}
static lean_object* _init_l_instToStringUInt16___closed__0(void){
_start:
{
lean_object* v___f_103_; 
v___f_103_ = lean_alloc_closure((void*)(l_instToStringUInt16___lam__0___boxed), 1, 0);
return v___f_103_;
}
}
static lean_object* _init_l_instToStringUInt16(void){
_start:
{
lean_object* v___f_104_; 
v___f_104_ = lean_obj_once(&l_instToStringUInt16___closed__0, &l_instToStringUInt16___closed__0_once, _init_l_instToStringUInt16___closed__0);
return v___f_104_;
}
}
LEAN_EXPORT lean_object* l_instToStringUInt32___lam__0(uint32_t v_n_105_){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = lean_uint32_to_nat(v_n_105_);
v___x_107_ = l_Nat_reprFast(v___x_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_instToStringUInt32___lam__0___boxed(lean_object* v_n_108_){
_start:
{
uint32_t v_n_boxed_109_; lean_object* v_res_110_; 
v_n_boxed_109_ = lean_unbox_uint32(v_n_108_);
lean_dec(v_n_108_);
v_res_110_ = l_instToStringUInt32___lam__0(v_n_boxed_109_);
return v_res_110_;
}
}
static lean_object* _init_l_instToStringUInt32___closed__0(void){
_start:
{
lean_object* v___f_111_; 
v___f_111_ = lean_alloc_closure((void*)(l_instToStringUInt32___lam__0___boxed), 1, 0);
return v___f_111_;
}
}
static lean_object* _init_l_instToStringUInt32(void){
_start:
{
lean_object* v___f_112_; 
v___f_112_ = lean_obj_once(&l_instToStringUInt32___closed__0, &l_instToStringUInt32___closed__0_once, _init_l_instToStringUInt32___closed__0);
return v___f_112_;
}
}
LEAN_EXPORT lean_object* l_instToStringUInt64___lam__0(uint64_t v_n_113_){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = lean_uint64_to_nat(v_n_113_);
v___x_115_ = l_Nat_reprFast(v___x_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_instToStringUInt64___lam__0___boxed(lean_object* v_n_116_){
_start:
{
uint64_t v_n_boxed_117_; lean_object* v_res_118_; 
v_n_boxed_117_ = lean_unbox_uint64(v_n_116_);
lean_dec_ref(v_n_116_);
v_res_118_ = l_instToStringUInt64___lam__0(v_n_boxed_117_);
return v_res_118_;
}
}
static lean_object* _init_l_instToStringUInt64___closed__0(void){
_start:
{
lean_object* v___f_119_; 
v___f_119_ = lean_alloc_closure((void*)(l_instToStringUInt64___lam__0___boxed), 1, 0);
return v___f_119_;
}
}
static lean_object* _init_l_instToStringUInt64(void){
_start:
{
lean_object* v___f_120_; 
v___f_120_ = lean_obj_once(&l_instToStringUInt64___closed__0, &l_instToStringUInt64___closed__0_once, _init_l_instToStringUInt64___closed__0);
return v___f_120_;
}
}
LEAN_EXPORT lean_object* l_instToStringUSize___lam__0(size_t v_n_121_){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = lean_usize_to_nat(v_n_121_);
v___x_123_ = l_Nat_reprFast(v___x_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_instToStringUSize___lam__0___boxed(lean_object* v_n_124_){
_start:
{
size_t v_n_boxed_125_; lean_object* v_res_126_; 
v_n_boxed_125_ = lean_unbox_usize(v_n_124_);
lean_dec(v_n_124_);
v_res_126_ = l_instToStringUSize___lam__0(v_n_boxed_125_);
return v_res_126_;
}
}
static lean_object* _init_l_instToStringUSize___closed__0(void){
_start:
{
lean_object* v___f_127_; 
v___f_127_ = lean_alloc_closure((void*)(l_instToStringUSize___lam__0___boxed), 1, 0);
return v___f_127_;
}
}
static lean_object* _init_l_instToStringUSize(void){
_start:
{
lean_object* v___f_128_; 
v___f_128_ = lean_obj_once(&l_instToStringUSize___closed__0, &l_instToStringUSize___closed__0_once, _init_l_instToStringUSize___closed__0);
return v___f_128_;
}
}
LEAN_EXPORT lean_object* l_instToStringFormat___lam__0(lean_object* v_f_129_){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_130_ = l_Std_Format_defWidth;
v___x_131_ = lean_unsigned_to_nat(0u);
v___x_132_ = l_Std_Format_pretty(v_f_129_, v___x_130_, v___x_131_, v___x_131_);
return v___x_132_;
}
}
static lean_object* _init_l_instToStringFormat___closed__0(void){
_start:
{
lean_object* v___f_133_; 
v___f_133_ = lean_alloc_closure((void*)(l_instToStringFormat___lam__0), 1, 0);
return v___f_133_;
}
}
static lean_object* _init_l_instToStringFormat(void){
_start:
{
lean_object* v___f_134_; 
v___f_134_ = lean_obj_once(&l_instToStringFormat___closed__0, &l_instToStringFormat___closed__0_once, _init_l_instToStringFormat___closed__0);
return v___f_134_;
}
}
LEAN_EXPORT uint8_t l_addParenHeuristic___lam__0(uint32_t v___y_135_){
_start:
{
uint8_t v___y_137_; uint32_t v___x_142_; uint8_t v___x_143_; 
v___x_142_ = 32;
v___x_143_ = lean_uint32_dec_eq(v___y_135_, v___x_142_);
if (v___x_143_ == 0)
{
uint32_t v___x_144_; uint8_t v___x_145_; 
v___x_144_ = 9;
v___x_145_ = lean_uint32_dec_eq(v___y_135_, v___x_144_);
v___y_137_ = v___x_145_;
goto v___jp_136_;
}
else
{
v___y_137_ = v___x_143_;
goto v___jp_136_;
}
v___jp_136_:
{
if (v___y_137_ == 0)
{
uint32_t v___x_138_; uint8_t v___x_139_; 
v___x_138_ = 13;
v___x_139_ = lean_uint32_dec_eq(v___y_135_, v___x_138_);
if (v___x_139_ == 0)
{
uint32_t v___x_140_; uint8_t v___x_141_; 
v___x_140_ = 10;
v___x_141_ = lean_uint32_dec_eq(v___y_135_, v___x_140_);
return v___x_141_;
}
else
{
return v___x_139_;
}
}
else
{
return v___y_137_;
}
}
}
}
LEAN_EXPORT lean_object* l_addParenHeuristic___lam__0___boxed(lean_object* v___y_146_){
_start:
{
uint32_t v___y_211__boxed_147_; uint8_t v_res_148_; lean_object* v_r_149_; 
v___y_211__boxed_147_ = lean_unbox_uint32(v___y_146_);
lean_dec(v___y_146_);
v_res_148_ = l_addParenHeuristic___lam__0(v___y_211__boxed_147_);
v_r_149_ = lean_box(v_res_148_);
return v_r_149_;
}
}
static lean_object* _init_l_addParenHeuristic___closed__0(void){
_start:
{
lean_object* v___f_150_; 
v___f_150_ = lean_alloc_closure((void*)(l_addParenHeuristic___lam__0___boxed), 1, 0);
return v___f_150_;
}
}
static lean_object* _init_l_addParenHeuristic___closed__1(void){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lean_mk_string_unchecked("(", 1, 1);
return v___x_151_;
}
}
static lean_object* _init_l_addParenHeuristic___closed__2(void){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lean_mk_string_unchecked("{", 1, 1);
return v___x_152_;
}
}
static lean_object* _init_l_addParenHeuristic___closed__3(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_mk_string_unchecked("#[", 2, 2);
return v___x_153_;
}
}
static lean_object* _init_l_addParenHeuristic___closed__4(void){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lean_mk_string_unchecked(")", 1, 1);
return v___x_154_;
}
}
static lean_object* _init_l_addParenHeuristic___closed__5(void){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lean_mk_string_unchecked("[", 1, 1);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_addParenHeuristic(lean_object* v_s_156_){
_start:
{
lean_object* v___f_157_; lean_object* v___x_158_; uint8_t v___y_160_; uint8_t v___x_169_; 
v___f_157_ = lean_obj_once(&l_addParenHeuristic___closed__0, &l_addParenHeuristic___closed__0_once, _init_l_addParenHeuristic___closed__0);
v___x_158_ = lean_obj_once(&l_addParenHeuristic___closed__1, &l_addParenHeuristic___closed__1_once, _init_l_addParenHeuristic___closed__1);
lean_inc_ref(v_s_156_);
v___x_169_ = lean_string_isprefixof(v___x_158_, v_s_156_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; uint8_t v___x_171_; 
v___x_170_ = lean_obj_once(&l_addParenHeuristic___closed__5, &l_addParenHeuristic___closed__5_once, _init_l_addParenHeuristic___closed__5);
lean_inc_ref(v_s_156_);
v___x_171_ = lean_string_isprefixof(v___x_170_, v_s_156_);
v___y_160_ = v___x_171_;
goto v___jp_159_;
}
else
{
v___y_160_ = v___x_169_;
goto v___jp_159_;
}
v___jp_159_:
{
if (v___y_160_ == 0)
{
lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_161_ = lean_obj_once(&l_addParenHeuristic___closed__2, &l_addParenHeuristic___closed__2_once, _init_l_addParenHeuristic___closed__2);
lean_inc_ref(v_s_156_);
v___x_162_ = lean_string_isprefixof(v___x_161_, v_s_156_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; uint8_t v___x_164_; 
v___x_163_ = lean_obj_once(&l_addParenHeuristic___closed__3, &l_addParenHeuristic___closed__3_once, _init_l_addParenHeuristic___closed__3);
lean_inc_ref(v_s_156_);
v___x_164_ = lean_string_isprefixof(v___x_163_, v_s_156_);
if (v___x_164_ == 0)
{
uint8_t v___x_165_; 
lean_inc_ref(v_s_156_);
v___x_165_ = lean_string_any(v_s_156_, v___f_157_);
if (v___x_165_ == 0)
{
return v_s_156_;
}
else
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_166_ = lean_string_append(v___x_158_, v_s_156_);
lean_dec_ref(v_s_156_);
v___x_167_ = lean_obj_once(&l_addParenHeuristic___closed__4, &l_addParenHeuristic___closed__4_once, _init_l_addParenHeuristic___closed__4);
v___x_168_ = lean_string_append(v___x_166_, v___x_167_);
return v___x_168_;
}
}
else
{
return v_s_156_;
}
}
else
{
return v_s_156_;
}
}
else
{
return v_s_156_;
}
}
}
}
static lean_object* _init_l_instToStringOption___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = lean_mk_string_unchecked("none", 4, 4);
return v___x_172_;
}
}
static lean_object* _init_l_instToStringOption___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lean_mk_string_unchecked("(some ", 6, 6);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_instToStringOption___redArg___lam__0(lean_object* v_inst_174_, lean_object* v_x_175_){
_start:
{
if (lean_obj_tag(v_x_175_) == 0)
{
lean_object* v___x_176_; 
lean_dec_ref(v_inst_174_);
v___x_176_ = lean_obj_once(&l_instToStringOption___redArg___lam__0___closed__0, &l_instToStringOption___redArg___lam__0___closed__0_once, _init_l_instToStringOption___redArg___lam__0___closed__0);
return v___x_176_;
}
else
{
lean_object* v_val_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v_val_177_ = lean_ctor_get(v_x_175_, 0);
lean_inc(v_val_177_);
lean_dec_ref(v_x_175_);
v___x_178_ = lean_obj_once(&l_instToStringOption___redArg___lam__0___closed__1, &l_instToStringOption___redArg___lam__0___closed__1_once, _init_l_instToStringOption___redArg___lam__0___closed__1);
v___x_179_ = lean_apply_1(v_inst_174_, v_val_177_);
v___x_180_ = l_addParenHeuristic(v___x_179_);
v___x_181_ = lean_string_append(v___x_178_, v___x_180_);
lean_dec_ref(v___x_180_);
v___x_182_ = lean_obj_once(&l_addParenHeuristic___closed__4, &l_addParenHeuristic___closed__4_once, _init_l_addParenHeuristic___closed__4);
v___x_183_ = lean_string_append(v___x_181_, v___x_182_);
return v___x_183_;
}
}
}
LEAN_EXPORT lean_object* l_instToStringOption___redArg(lean_object* v_inst_184_){
_start:
{
lean_object* v___f_185_; 
v___f_185_ = lean_alloc_closure((void*)(l_instToStringOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_185_, 0, v_inst_184_);
return v___f_185_;
}
}
LEAN_EXPORT lean_object* l_instToStringOption(lean_object* v_00_u03b1_186_, lean_object* v_inst_187_){
_start:
{
lean_object* v___f_188_; 
v___f_188_ = lean_alloc_closure((void*)(l_instToStringOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_188_, 0, v_inst_187_);
return v___f_188_;
}
}
static lean_object* _init_l_instToStringSum___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = lean_mk_string_unchecked("(inl ", 5, 5);
return v___x_189_;
}
}
static lean_object* _init_l_instToStringSum___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = lean_mk_string_unchecked("(inr ", 5, 5);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_instToStringSum___redArg___lam__0(lean_object* v_inst_191_, lean_object* v_inst_192_, lean_object* v_x_193_){
_start:
{
if (lean_obj_tag(v_x_193_) == 0)
{
lean_object* v_val_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
lean_dec_ref(v_inst_192_);
v_val_194_ = lean_ctor_get(v_x_193_, 0);
lean_inc(v_val_194_);
lean_dec_ref(v_x_193_);
v___x_195_ = lean_obj_once(&l_instToStringSum___redArg___lam__0___closed__0, &l_instToStringSum___redArg___lam__0___closed__0_once, _init_l_instToStringSum___redArg___lam__0___closed__0);
v___x_196_ = lean_apply_1(v_inst_191_, v_val_194_);
v___x_197_ = l_addParenHeuristic(v___x_196_);
v___x_198_ = lean_string_append(v___x_195_, v___x_197_);
lean_dec_ref(v___x_197_);
v___x_199_ = lean_obj_once(&l_addParenHeuristic___closed__4, &l_addParenHeuristic___closed__4_once, _init_l_addParenHeuristic___closed__4);
v___x_200_ = lean_string_append(v___x_198_, v___x_199_);
return v___x_200_;
}
else
{
lean_object* v_val_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
lean_dec_ref(v_inst_191_);
v_val_201_ = lean_ctor_get(v_x_193_, 0);
lean_inc(v_val_201_);
lean_dec_ref(v_x_193_);
v___x_202_ = lean_obj_once(&l_instToStringSum___redArg___lam__0___closed__1, &l_instToStringSum___redArg___lam__0___closed__1_once, _init_l_instToStringSum___redArg___lam__0___closed__1);
v___x_203_ = lean_apply_1(v_inst_192_, v_val_201_);
v___x_204_ = l_addParenHeuristic(v___x_203_);
v___x_205_ = lean_string_append(v___x_202_, v___x_204_);
lean_dec_ref(v___x_204_);
v___x_206_ = lean_obj_once(&l_addParenHeuristic___closed__4, &l_addParenHeuristic___closed__4_once, _init_l_addParenHeuristic___closed__4);
v___x_207_ = lean_string_append(v___x_205_, v___x_206_);
return v___x_207_;
}
}
}
LEAN_EXPORT lean_object* l_instToStringSum___redArg(lean_object* v_inst_208_, lean_object* v_inst_209_){
_start:
{
lean_object* v___f_210_; 
v___f_210_ = lean_alloc_closure((void*)(l_instToStringSum___redArg___lam__0), 3, 2);
lean_closure_set(v___f_210_, 0, v_inst_208_);
lean_closure_set(v___f_210_, 1, v_inst_209_);
return v___f_210_;
}
}
LEAN_EXPORT lean_object* l_instToStringSum(lean_object* v_00_u03b1_211_, lean_object* v_00_u03b2_212_, lean_object* v_inst_213_, lean_object* v_inst_214_){
_start:
{
lean_object* v___f_215_; 
v___f_215_ = lean_alloc_closure((void*)(l_instToStringSum___redArg___lam__0), 3, 2);
lean_closure_set(v___f_215_, 0, v_inst_213_);
lean_closure_set(v___f_215_, 1, v_inst_214_);
return v___f_215_;
}
}
static lean_object* _init_l_instToStringProd___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = lean_mk_string_unchecked(", ", 2, 2);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_instToStringProd___redArg___lam__0(lean_object* v_inst_217_, lean_object* v_inst_218_, lean_object* v_x_219_){
_start:
{
lean_object* v_fst_220_; lean_object* v_snd_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v_fst_220_ = lean_ctor_get(v_x_219_, 0);
lean_inc(v_fst_220_);
v_snd_221_ = lean_ctor_get(v_x_219_, 1);
lean_inc(v_snd_221_);
lean_dec_ref(v_x_219_);
v___x_222_ = lean_obj_once(&l_addParenHeuristic___closed__1, &l_addParenHeuristic___closed__1_once, _init_l_addParenHeuristic___closed__1);
v___x_223_ = lean_apply_1(v_inst_217_, v_fst_220_);
v___x_224_ = lean_string_append(v___x_222_, v___x_223_);
lean_dec_ref(v___x_223_);
v___x_225_ = lean_obj_once(&l_instToStringProd___redArg___lam__0___closed__0, &l_instToStringProd___redArg___lam__0___closed__0_once, _init_l_instToStringProd___redArg___lam__0___closed__0);
v___x_226_ = lean_string_append(v___x_224_, v___x_225_);
v___x_227_ = lean_apply_1(v_inst_218_, v_snd_221_);
v___x_228_ = lean_string_append(v___x_226_, v___x_227_);
lean_dec_ref(v___x_227_);
v___x_229_ = lean_obj_once(&l_addParenHeuristic___closed__4, &l_addParenHeuristic___closed__4_once, _init_l_addParenHeuristic___closed__4);
v___x_230_ = lean_string_append(v___x_228_, v___x_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_instToStringProd___redArg(lean_object* v_inst_231_, lean_object* v_inst_232_){
_start:
{
lean_object* v___f_233_; 
v___f_233_ = lean_alloc_closure((void*)(l_instToStringProd___redArg___lam__0), 3, 2);
lean_closure_set(v___f_233_, 0, v_inst_231_);
lean_closure_set(v___f_233_, 1, v_inst_232_);
return v___f_233_;
}
}
LEAN_EXPORT lean_object* l_instToStringProd(lean_object* v_00_u03b1_234_, lean_object* v_00_u03b2_235_, lean_object* v_inst_236_, lean_object* v_inst_237_){
_start:
{
lean_object* v___f_238_; 
v___f_238_ = lean_alloc_closure((void*)(l_instToStringProd___redArg___lam__0), 3, 2);
lean_closure_set(v___f_238_, 0, v_inst_236_);
lean_closure_set(v___f_238_, 1, v_inst_237_);
return v___f_238_;
}
}
static lean_object* _init_l_instToStringSigma___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = lean_mk_string_unchecked("⟨", 3, 1);
return v___x_239_;
}
}
static lean_object* _init_l_instToStringSigma___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = lean_mk_string_unchecked("⟩", 3, 1);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_instToStringSigma___redArg___lam__0(lean_object* v_inst_241_, lean_object* v_inst_242_, lean_object* v_x_243_){
_start:
{
lean_object* v_fst_244_; lean_object* v_snd_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v_fst_244_ = lean_ctor_get(v_x_243_, 0);
lean_inc_n(v_fst_244_, 2);
v_snd_245_ = lean_ctor_get(v_x_243_, 1);
lean_inc(v_snd_245_);
lean_dec_ref(v_x_243_);
v___x_246_ = lean_obj_once(&l_instToStringSigma___redArg___lam__0___closed__0, &l_instToStringSigma___redArg___lam__0___closed__0_once, _init_l_instToStringSigma___redArg___lam__0___closed__0);
v___x_247_ = lean_apply_1(v_inst_241_, v_fst_244_);
v___x_248_ = lean_string_append(v___x_246_, v___x_247_);
lean_dec_ref(v___x_247_);
v___x_249_ = lean_obj_once(&l_instToStringProd___redArg___lam__0___closed__0, &l_instToStringProd___redArg___lam__0___closed__0_once, _init_l_instToStringProd___redArg___lam__0___closed__0);
v___x_250_ = lean_string_append(v___x_248_, v___x_249_);
v___x_251_ = lean_apply_2(v_inst_242_, v_fst_244_, v_snd_245_);
v___x_252_ = lean_string_append(v___x_250_, v___x_251_);
lean_dec_ref(v___x_251_);
v___x_253_ = lean_obj_once(&l_instToStringSigma___redArg___lam__0___closed__1, &l_instToStringSigma___redArg___lam__0___closed__1_once, _init_l_instToStringSigma___redArg___lam__0___closed__1);
v___x_254_ = lean_string_append(v___x_252_, v___x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_instToStringSigma___redArg(lean_object* v_inst_255_, lean_object* v_inst_256_){
_start:
{
lean_object* v___f_257_; 
v___f_257_ = lean_alloc_closure((void*)(l_instToStringSigma___redArg___lam__0), 3, 2);
lean_closure_set(v___f_257_, 0, v_inst_255_);
lean_closure_set(v___f_257_, 1, v_inst_256_);
return v___f_257_;
}
}
LEAN_EXPORT lean_object* l_instToStringSigma(lean_object* v_00_u03b1_258_, lean_object* v_00_u03b2_259_, lean_object* v_inst_260_, lean_object* v_inst_261_){
_start:
{
lean_object* v___f_262_; 
v___f_262_ = lean_alloc_closure((void*)(l_instToStringSigma___redArg___lam__0), 3, 2);
lean_closure_set(v___f_262_, 0, v_inst_260_);
lean_closure_set(v___f_262_, 1, v_inst_261_);
return v___f_262_;
}
}
LEAN_EXPORT lean_object* l_instToStringSubtype___redArg___lam__0(lean_object* v_inst_263_, lean_object* v_s_264_){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = lean_apply_1(v_inst_263_, v_s_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_instToStringSubtype___redArg(lean_object* v_inst_266_){
_start:
{
lean_object* v___f_267_; 
v___f_267_ = lean_alloc_closure((void*)(l_instToStringSubtype___redArg___lam__0), 2, 1);
lean_closure_set(v___f_267_, 0, v_inst_266_);
return v___f_267_;
}
}
LEAN_EXPORT lean_object* l_instToStringSubtype(lean_object* v_00_u03b1_268_, lean_object* v_p_269_, lean_object* v_inst_270_){
_start:
{
lean_object* v___f_271_; 
v___f_271_ = lean_alloc_closure((void*)(l_instToStringSubtype___redArg___lam__0), 2, 1);
lean_closure_set(v___f_271_, 0, v_inst_270_);
return v___f_271_;
}
}
static lean_object* _init_l_instToStringExcept___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_272_; 
v___x_272_ = lean_mk_string_unchecked("error: ", 7, 7);
return v___x_272_;
}
}
static lean_object* _init_l_instToStringExcept___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = lean_mk_string_unchecked("ok: ", 4, 4);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_instToStringExcept___redArg___lam__0(lean_object* v_inst_274_, lean_object* v_inst_275_, lean_object* v_x_276_){
_start:
{
if (lean_obj_tag(v_x_276_) == 0)
{
lean_object* v_a_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
lean_dec_ref(v_inst_275_);
v_a_277_ = lean_ctor_get(v_x_276_, 0);
lean_inc(v_a_277_);
lean_dec_ref(v_x_276_);
v___x_278_ = lean_obj_once(&l_instToStringExcept___redArg___lam__0___closed__0, &l_instToStringExcept___redArg___lam__0___closed__0_once, _init_l_instToStringExcept___redArg___lam__0___closed__0);
v___x_279_ = lean_apply_1(v_inst_274_, v_a_277_);
v___x_280_ = lean_string_append(v___x_278_, v___x_279_);
lean_dec_ref(v___x_279_);
return v___x_280_;
}
else
{
lean_object* v_a_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
lean_dec_ref(v_inst_274_);
v_a_281_ = lean_ctor_get(v_x_276_, 0);
lean_inc(v_a_281_);
lean_dec_ref(v_x_276_);
v___x_282_ = lean_obj_once(&l_instToStringExcept___redArg___lam__0___closed__1, &l_instToStringExcept___redArg___lam__0___closed__1_once, _init_l_instToStringExcept___redArg___lam__0___closed__1);
v___x_283_ = lean_apply_1(v_inst_275_, v_a_281_);
v___x_284_ = lean_string_append(v___x_282_, v___x_283_);
lean_dec_ref(v___x_283_);
return v___x_284_;
}
}
}
LEAN_EXPORT lean_object* l_instToStringExcept___redArg(lean_object* v_inst_285_, lean_object* v_inst_286_){
_start:
{
lean_object* v___f_287_; 
v___f_287_ = lean_alloc_closure((void*)(l_instToStringExcept___redArg___lam__0), 3, 2);
lean_closure_set(v___f_287_, 0, v_inst_285_);
lean_closure_set(v___f_287_, 1, v_inst_286_);
return v___f_287_;
}
}
LEAN_EXPORT lean_object* l_instToStringExcept(lean_object* v_00_u03b5_288_, lean_object* v_00_u03b1_289_, lean_object* v_inst_290_, lean_object* v_inst_291_){
_start:
{
lean_object* v___f_292_; 
v___f_292_ = lean_alloc_closure((void*)(l_instToStringExcept___redArg___lam__0), 3, 2);
lean_closure_set(v___f_292_, 0, v_inst_290_);
lean_closure_set(v___f_292_, 1, v_inst_291_);
return v___f_292_;
}
}
static lean_object* _init_l_instReprExcept___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = lean_mk_string_unchecked("Except.error ", 13, 13);
return v___x_293_;
}
}
static lean_object* _init_l_instReprExcept___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_obj_once(&l_instReprExcept___redArg___lam__0___closed__0, &l_instReprExcept___redArg___lam__0___closed__0_once, _init_l_instReprExcept___redArg___lam__0___closed__0);
v___x_295_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
return v___x_295_;
}
}
static lean_object* _init_l_instReprExcept___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = lean_mk_string_unchecked("Except.ok ", 10, 10);
return v___x_296_;
}
}
static lean_object* _init_l_instReprExcept___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = lean_obj_once(&l_instReprExcept___redArg___lam__0___closed__2, &l_instReprExcept___redArg___lam__0___closed__2_once, _init_l_instReprExcept___redArg___lam__0___closed__2);
v___x_298_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_instReprExcept___redArg___lam__0(lean_object* v_inst_299_, lean_object* v_inst_300_, lean_object* v_x_301_, lean_object* v_x_302_){
_start:
{
if (lean_obj_tag(v_x_301_) == 0)
{
lean_object* v_a_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
lean_dec_ref(v_inst_300_);
v_a_303_ = lean_ctor_get(v_x_301_, 0);
lean_inc(v_a_303_);
lean_dec_ref(v_x_301_);
v___x_304_ = lean_obj_once(&l_instReprExcept___redArg___lam__0___closed__1, &l_instReprExcept___redArg___lam__0___closed__1_once, _init_l_instReprExcept___redArg___lam__0___closed__1);
v___x_305_ = lean_unsigned_to_nat(1024u);
v___x_306_ = lean_apply_2(v_inst_299_, v_a_303_, v___x_305_);
v___x_307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_304_);
lean_ctor_set(v___x_307_, 1, v___x_306_);
v___x_308_ = l_Repr_addAppParen(v___x_307_, v_x_302_);
return v___x_308_;
}
else
{
lean_object* v_a_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
lean_dec_ref(v_inst_299_);
v_a_309_ = lean_ctor_get(v_x_301_, 0);
lean_inc(v_a_309_);
lean_dec_ref(v_x_301_);
v___x_310_ = lean_obj_once(&l_instReprExcept___redArg___lam__0___closed__3, &l_instReprExcept___redArg___lam__0___closed__3_once, _init_l_instReprExcept___redArg___lam__0___closed__3);
v___x_311_ = lean_unsigned_to_nat(1024u);
v___x_312_ = lean_apply_2(v_inst_300_, v_a_309_, v___x_311_);
v___x_313_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_313_, 0, v___x_310_);
lean_ctor_set(v___x_313_, 1, v___x_312_);
v___x_314_ = l_Repr_addAppParen(v___x_313_, v_x_302_);
return v___x_314_;
}
}
}
LEAN_EXPORT lean_object* l_instReprExcept___redArg___lam__0___boxed(lean_object* v_inst_315_, lean_object* v_inst_316_, lean_object* v_x_317_, lean_object* v_x_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_instReprExcept___redArg___lam__0(v_inst_315_, v_inst_316_, v_x_317_, v_x_318_);
lean_dec(v_x_318_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_instReprExcept___redArg(lean_object* v_inst_320_, lean_object* v_inst_321_){
_start:
{
lean_object* v___f_322_; 
v___f_322_ = lean_alloc_closure((void*)(l_instReprExcept___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_322_, 0, v_inst_320_);
lean_closure_set(v___f_322_, 1, v_inst_321_);
return v___f_322_;
}
}
LEAN_EXPORT lean_object* l_instReprExcept(lean_object* v_00_u03b5_323_, lean_object* v_00_u03b1_324_, lean_object* v_inst_325_, lean_object* v_inst_326_){
_start:
{
lean_object* v___f_327_; 
v___f_327_ = lean_alloc_closure((void*)(l_instReprExcept___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_327_, 0, v_inst_325_);
lean_closure_set(v___f_327_, 1, v_inst_326_);
return v___f_327_;
}
}
lean_object* runtime_initialize_Init_Data_Repr(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Char_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_ToString_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_Repr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instToStringString = _init_l_instToStringString();
lean_mark_persistent(l_instToStringString);
l_instToStringRaw = _init_l_instToStringRaw();
lean_mark_persistent(l_instToStringRaw);
l_instToStringChar = _init_l_instToStringChar();
lean_mark_persistent(l_instToStringChar);
l_instToStringBool = _init_l_instToStringBool();
lean_mark_persistent(l_instToStringBool);
l_instToStringPUnit = _init_l_instToStringPUnit();
lean_mark_persistent(l_instToStringPUnit);
l_instToStringUnit = _init_l_instToStringUnit();
lean_mark_persistent(l_instToStringUnit);
l_instToStringNat = _init_l_instToStringNat();
lean_mark_persistent(l_instToStringNat);
l_instToStringRaw__1 = _init_l_instToStringRaw__1();
lean_mark_persistent(l_instToStringRaw__1);
l_instToStringUInt8 = _init_l_instToStringUInt8();
lean_mark_persistent(l_instToStringUInt8);
l_instToStringUInt16 = _init_l_instToStringUInt16();
lean_mark_persistent(l_instToStringUInt16);
l_instToStringUInt32 = _init_l_instToStringUInt32();
lean_mark_persistent(l_instToStringUInt32);
l_instToStringUInt64 = _init_l_instToStringUInt64();
lean_mark_persistent(l_instToStringUInt64);
l_instToStringUSize = _init_l_instToStringUSize();
lean_mark_persistent(l_instToStringUSize);
l_instToStringFormat = _init_l_instToStringFormat();
lean_mark_persistent(l_instToStringFormat);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_ToString_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Repr(uint8_t builtin);
lean_object* initialize_Init_Data_Char_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_ToString_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Repr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_ToString_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_ToString_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
