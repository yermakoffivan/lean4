// Lean compiler output
// Module: Lean.Elab.ErrorUtils
// Imports: import Lean.Message
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__0;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__1;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__2;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__3;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__4;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__5;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__6;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__7;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__8;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__9;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__10;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__11;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__12;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__13;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__0;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__1;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__2;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__3;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__0;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__1;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__2;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__3;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__4;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__5;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__6;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__7;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__List_toOxford___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__List_toOxford(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___lam__0(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___closed__0;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___lam__0(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___closed__0;
static lean_once_cell_t l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_plural___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_plural___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_plural(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_plural___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("th", 2, 2);
return v___x_1_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("rd", 2, 2);
return v___x_2_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("nd", 2, 2);
return v___x_3_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("tenth", 5, 5);
return v___x_4_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__4(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_mk_string_unchecked("ninth", 5, 5);
return v___x_5_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__5(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_mk_string_unchecked("eighth", 6, 6);
return v___x_6_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__6(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_mk_string_unchecked("seventh", 7, 7);
return v___x_7_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__7(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_mk_string_unchecked("sixth", 5, 5);
return v___x_8_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__8(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_mk_string_unchecked("fifth", 5, 5);
return v___x_9_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__9(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_mk_string_unchecked("fourth", 6, 6);
return v___x_10_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__10(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_mk_string_unchecked("third", 5, 5);
return v___x_11_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__11(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_mk_string_unchecked("second", 6, 6);
return v___x_12_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__12(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_mk_string_unchecked("first", 5, 5);
return v___x_13_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__13(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_mk_string_unchecked("zeroth", 6, 6);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal(lean_object* v_x_15_){
_start:
{
lean_object* v___x_16_; uint8_t v___x_17_; 
v___x_16_ = lean_unsigned_to_nat(0u);
v___x_17_ = lean_nat_dec_eq(v_x_15_, v___x_16_);
if (v___x_17_ == 0)
{
lean_object* v___x_18_; uint8_t v___x_19_; 
v___x_18_ = lean_unsigned_to_nat(1u);
v___x_19_ = lean_nat_dec_eq(v_x_15_, v___x_18_);
if (v___x_19_ == 0)
{
lean_object* v___x_20_; uint8_t v___x_21_; 
v___x_20_ = lean_unsigned_to_nat(2u);
v___x_21_ = lean_nat_dec_eq(v_x_15_, v___x_20_);
if (v___x_21_ == 0)
{
lean_object* v___x_22_; uint8_t v___x_23_; 
v___x_22_ = lean_unsigned_to_nat(3u);
v___x_23_ = lean_nat_dec_eq(v_x_15_, v___x_22_);
if (v___x_23_ == 0)
{
lean_object* v___x_24_; uint8_t v___x_25_; 
v___x_24_ = lean_unsigned_to_nat(4u);
v___x_25_ = lean_nat_dec_eq(v_x_15_, v___x_24_);
if (v___x_25_ == 0)
{
lean_object* v___x_26_; uint8_t v___x_27_; 
v___x_26_ = lean_unsigned_to_nat(5u);
v___x_27_ = lean_nat_dec_eq(v_x_15_, v___x_26_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; uint8_t v___x_29_; 
v___x_28_ = lean_unsigned_to_nat(6u);
v___x_29_ = lean_nat_dec_eq(v_x_15_, v___x_28_);
if (v___x_29_ == 0)
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = lean_unsigned_to_nat(7u);
v___x_31_ = lean_nat_dec_eq(v_x_15_, v___x_30_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_32_ = lean_unsigned_to_nat(8u);
v___x_33_ = lean_nat_dec_eq(v_x_15_, v___x_32_);
if (v___x_33_ == 0)
{
lean_object* v___x_34_; uint8_t v___x_35_; 
v___x_34_ = lean_unsigned_to_nat(9u);
v___x_35_ = lean_nat_dec_eq(v_x_15_, v___x_34_);
if (v___x_35_ == 0)
{
lean_object* v___x_36_; uint8_t v___y_38_; uint8_t v___x_54_; 
v___x_36_ = lean_unsigned_to_nat(10u);
v___x_54_ = lean_nat_dec_eq(v_x_15_, v___x_36_);
if (v___x_54_ == 0)
{
lean_object* v___x_55_; lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_55_ = lean_unsigned_to_nat(100u);
v___x_56_ = lean_nat_mod(v_x_15_, v___x_55_);
v___x_57_ = lean_nat_dec_lt(v___x_36_, v___x_56_);
if (v___x_57_ == 0)
{
lean_dec(v___x_56_);
v___y_38_ = v___x_57_;
goto v___jp_37_;
}
else
{
lean_object* v___x_58_; uint8_t v___x_59_; 
v___x_58_ = lean_unsigned_to_nat(20u);
v___x_59_ = lean_nat_dec_lt(v___x_56_, v___x_58_);
lean_dec(v___x_56_);
v___y_38_ = v___x_59_;
goto v___jp_37_;
}
}
else
{
lean_object* v___x_60_; 
lean_dec(v_x_15_);
v___x_60_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__3, &l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__3_once, _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__3);
return v___x_60_;
}
v___jp_37_:
{
if (v___y_38_ == 0)
{
lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_39_ = lean_nat_mod(v_x_15_, v___x_36_);
v___x_40_ = lean_nat_dec_eq(v___x_39_, v___x_20_);
if (v___x_40_ == 0)
{
uint8_t v___x_41_; 
v___x_41_ = lean_nat_dec_eq(v___x_39_, v___x_22_);
lean_dec(v___x_39_);
if (v___x_41_ == 0)
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = l_Nat_reprFast(v_x_15_);
v___x_43_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__0, &l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__0_once, _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__0);
v___x_44_ = lean_string_append(v___x_42_, v___x_43_);
return v___x_44_;
}
else
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_45_ = l_Nat_reprFast(v_x_15_);
v___x_46_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__1, &l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__1_once, _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__1);
v___x_47_ = lean_string_append(v___x_45_, v___x_46_);
return v___x_47_;
}
}
else
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
lean_dec(v___x_39_);
v___x_48_ = l_Nat_reprFast(v_x_15_);
v___x_49_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__2, &l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__2_once, _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__2);
v___x_50_ = lean_string_append(v___x_48_, v___x_49_);
return v___x_50_;
}
}
else
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = l_Nat_reprFast(v_x_15_);
v___x_52_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__0, &l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__0_once, _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__0);
v___x_53_ = lean_string_append(v___x_51_, v___x_52_);
return v___x_53_;
}
}
}
else
{
lean_object* v___x_61_; 
lean_dec(v_x_15_);
v___x_61_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__4, &l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__4_once, _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__4);
return v___x_61_;
}
}
else
{
lean_object* v___x_62_; 
lean_dec(v_x_15_);
v___x_62_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__5, &l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__5_once, _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__5);
return v___x_62_;
}
}
else
{
lean_object* v___x_63_; 
lean_dec(v_x_15_);
v___x_63_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__6, &l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__6_once, _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__6);
return v___x_63_;
}
}
else
{
lean_object* v___x_64_; 
lean_dec(v_x_15_);
v___x_64_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__7, &l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__7_once, _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__7);
return v___x_64_;
}
}
else
{
lean_object* v___x_65_; 
lean_dec(v_x_15_);
v___x_65_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__8, &l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__8_once, _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__8);
return v___x_65_;
}
}
else
{
lean_object* v___x_66_; 
lean_dec(v_x_15_);
v___x_66_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__9, &l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__9_once, _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__9);
return v___x_66_;
}
}
else
{
lean_object* v___x_67_; 
lean_dec(v_x_15_);
v___x_67_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__10, &l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__10_once, _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__10);
return v___x_67_;
}
}
else
{
lean_object* v___x_68_; 
lean_dec(v_x_15_);
v___x_68_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__11, &l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__11_once, _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__11);
return v___x_68_;
}
}
else
{
lean_object* v___x_69_; 
lean_dec(v_x_15_);
v___x_69_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__12, &l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__12_once, _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__12);
return v___x_69_;
}
}
else
{
lean_object* v___x_70_; 
lean_dec(v_x_15_);
v___x_70_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__13, &l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__13_once, _init_l___private_Lean_Elab_ErrorUtils_0__Nat_toOrdinal___closed__13);
return v___x_70_;
}
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__0(void){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lean_mk_string_unchecked("", 0, 0);
return v___x_71_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__1(void){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lean_mk_string_unchecked(" and ", 5, 5);
return v___x_72_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__2(void){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = lean_mk_string_unchecked(", ", 2, 2);
return v___x_73_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__3(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_mk_string_unchecked(", and ", 6, 6);
return v___x_74_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__4(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_75_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__3, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__3_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__3);
v___x_76_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__2, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__2_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__2);
v___x_77_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__1, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__1_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__1);
v___x_78_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__0, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__0_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__0);
v___x_79_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_77_);
lean_ctor_set(v___x_79_, 2, v___x_76_);
lean_ctor_set(v___x_79_, 3, v___x_75_);
return v___x_79_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString(void){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__4, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__4_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__4);
return v___x_80_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__0(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_81_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__0, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__0_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__0);
v___x_82_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
return v___x_82_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__1(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__0, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__0_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__0);
v___x_84_ = l_Lean_MessageData_ofFormat(v___x_83_);
return v___x_84_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__2(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__1, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__1_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__1);
v___x_86_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
return v___x_86_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__3(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__2, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__2_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__2);
v___x_88_ = l_Lean_MessageData_ofFormat(v___x_87_);
return v___x_88_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__4(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__2, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__2_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__2);
v___x_90_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
return v___x_90_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__5(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__4, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__4_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__4);
v___x_92_ = l_Lean_MessageData_ofFormat(v___x_91_);
return v___x_92_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__6(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__3, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__3_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__3);
v___x_94_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
return v___x_94_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__7(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__6, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__6_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__6);
v___x_96_ = l_Lean_MessageData_ofFormat(v___x_95_);
return v___x_96_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__8(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_97_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__7, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__7_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__7);
v___x_98_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__5, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__5_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__5);
v___x_99_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__3, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__3_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__3);
v___x_100_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__1, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__1_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__1);
v___x_101_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set(v___x_101_, 1, v___x_99_);
lean_ctor_set(v___x_101_, 2, v___x_98_);
lean_ctor_set(v___x_101_, 3, v___x_97_);
return v___x_101_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData(void){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__8, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__8_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData___closed__8);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__List_toOxford___redArg(lean_object* v_inst_103_, lean_object* v_inst_104_, lean_object* v_x_105_){
_start:
{
if (lean_obj_tag(v_x_105_) == 0)
{
lean_object* v_emp_106_; 
lean_dec(v_inst_103_);
v_emp_106_ = lean_ctor_get(v_inst_104_, 0);
lean_inc(v_emp_106_);
lean_dec_ref(v_inst_104_);
return v_emp_106_;
}
else
{
lean_object* v_tail_107_; 
v_tail_107_ = lean_ctor_get(v_x_105_, 1);
if (lean_obj_tag(v_tail_107_) == 0)
{
lean_object* v_head_108_; 
lean_dec_ref(v_inst_104_);
lean_dec(v_inst_103_);
v_head_108_ = lean_ctor_get(v_x_105_, 0);
lean_inc(v_head_108_);
lean_dec_ref(v_x_105_);
return v_head_108_;
}
else
{
lean_object* v_tail_109_; 
lean_inc_ref(v_tail_107_);
v_tail_109_ = lean_ctor_get(v_tail_107_, 1);
if (lean_obj_tag(v_tail_109_) == 0)
{
lean_object* v_head_110_; lean_object* v_head_111_; lean_object* v_and_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v_head_110_ = lean_ctor_get(v_x_105_, 0);
lean_inc(v_head_110_);
lean_dec_ref(v_x_105_);
v_head_111_ = lean_ctor_get(v_tail_107_, 0);
lean_inc(v_head_111_);
lean_dec_ref(v_tail_107_);
v_and_112_ = lean_ctor_get(v_inst_104_, 1);
lean_inc(v_and_112_);
lean_dec_ref(v_inst_104_);
lean_inc(v_inst_103_);
v___x_113_ = lean_apply_2(v_inst_103_, v_head_110_, v_and_112_);
v___x_114_ = lean_apply_2(v_inst_103_, v___x_113_, v_head_111_);
return v___x_114_;
}
else
{
lean_object* v_tail_115_; 
v_tail_115_ = lean_ctor_get(v_tail_109_, 1);
if (lean_obj_tag(v_tail_115_) == 0)
{
lean_object* v_head_116_; lean_object* v_head_117_; lean_object* v_head_118_; lean_object* v_comma_119_; lean_object* v_commaAnd_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
lean_inc_ref(v_tail_109_);
v_head_116_ = lean_ctor_get(v_x_105_, 0);
lean_inc(v_head_116_);
lean_dec_ref(v_x_105_);
v_head_117_ = lean_ctor_get(v_tail_107_, 0);
lean_inc(v_head_117_);
lean_dec_ref(v_tail_107_);
v_head_118_ = lean_ctor_get(v_tail_109_, 0);
lean_inc(v_head_118_);
lean_dec_ref(v_tail_109_);
v_comma_119_ = lean_ctor_get(v_inst_104_, 2);
lean_inc(v_comma_119_);
v_commaAnd_120_ = lean_ctor_get(v_inst_104_, 3);
lean_inc(v_commaAnd_120_);
lean_dec_ref(v_inst_104_);
lean_inc_n(v_inst_103_, 3);
v___x_121_ = lean_apply_2(v_inst_103_, v_head_116_, v_comma_119_);
v___x_122_ = lean_apply_2(v_inst_103_, v___x_121_, v_head_117_);
v___x_123_ = lean_apply_2(v_inst_103_, v___x_122_, v_commaAnd_120_);
v___x_124_ = lean_apply_2(v_inst_103_, v___x_123_, v_head_118_);
return v___x_124_;
}
else
{
lean_object* v_head_125_; lean_object* v_comma_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v_head_125_ = lean_ctor_get(v_x_105_, 0);
lean_inc(v_head_125_);
lean_dec_ref(v_x_105_);
v_comma_126_ = lean_ctor_get(v_inst_104_, 2);
lean_inc_n(v_inst_103_, 2);
lean_inc(v_comma_126_);
v___x_127_ = lean_apply_2(v_inst_103_, v_head_125_, v_comma_126_);
v___x_128_ = l___private_Lean_Elab_ErrorUtils_0__List_toOxford___redArg(v_inst_103_, v_inst_104_, v_tail_107_);
v___x_129_ = lean_apply_2(v_inst_103_, v___x_127_, v___x_128_);
return v___x_129_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__List_toOxford(lean_object* v_00_u03b1_130_, lean_object* v_inst_131_, lean_object* v_inst_132_, lean_object* v_x_133_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l___private_Lean_Elab_ErrorUtils_0__List_toOxford___redArg(v_inst_131_, v_inst_132_, v_x_133_);
return v___x_134_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___lam__0___closed__0(void){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lean_mk_string_unchecked("s", 1, 1);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___lam__0(lean_object* v_x_136_){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___lam__0___closed__0, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___lam__0___closed__0_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___lam__0___closed__0);
v___x_138_ = lean_string_append(v_x_136_, v___x_137_);
return v___x_138_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___closed__0(void){
_start:
{
lean_object* v___f_139_; 
v___f_139_ = lean_alloc_closure((void*)(l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___lam__0), 1, 0);
return v___f_139_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___closed__1(void){
_start:
{
lean_object* v___f_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___f_140_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___closed__0, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___closed__0_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___closed__0);
v___x_141_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__0, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__0_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString___closed__0);
v___x_142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
lean_ctor_set(v___x_142_, 1, v___f_140_);
return v___x_142_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString(void){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___closed__1, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___closed__1_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___closed__1);
return v___x_143_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___lam__0___closed__0(void){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_144_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___lam__0___closed__0, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___lam__0___closed__0_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString___lam__0___closed__0);
v___x_145_ = l_Lean_stringToMessageData(v___x_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___lam__0(lean_object* v_x_146_){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___lam__0___closed__0, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___lam__0___closed__0_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___lam__0___closed__0);
v___x_148_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_148_, 0, v_x_146_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
return v___x_148_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___closed__0(void){
_start:
{
lean_object* v___f_149_; 
v___f_149_ = lean_alloc_closure((void*)(l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___lam__0), 1, 0);
return v___f_149_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___closed__1(void){
_start:
{
lean_object* v___f_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___f_150_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___closed__0, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___closed__0_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___closed__0);
v___x_151_ = l_Lean_MessageData_nil;
v___x_152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
lean_ctor_set(v___x_152_, 1, v___f_150_);
return v___x_152_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_obj_once(&l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___closed__1, &l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___closed__1_once, _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData___closed__1);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_plural___redArg(lean_object* v_count_154_, lean_object* v_singular_155_, lean_object* v_plural_156_){
_start:
{
lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_157_ = lean_unsigned_to_nat(1u);
v___x_158_ = lean_nat_dec_eq(v_count_154_, v___x_157_);
if (v___x_158_ == 0)
{
lean_inc(v_plural_156_);
return v_plural_156_;
}
else
{
lean_inc(v_singular_155_);
return v_singular_155_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_plural___redArg___boxed(lean_object* v_count_159_, lean_object* v_singular_160_, lean_object* v_plural_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l___private_Lean_Elab_ErrorUtils_0__Nat_plural___redArg(v_count_159_, v_singular_160_, v_plural_161_);
lean_dec(v_plural_161_);
lean_dec(v_singular_160_);
lean_dec(v_count_159_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_plural(lean_object* v_00_u03b1_163_, lean_object* v_inst_164_, lean_object* v_count_165_, lean_object* v_singular_166_, lean_object* v_plural_167_){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = l___private_Lean_Elab_ErrorUtils_0__Nat_plural___redArg(v_count_165_, v_singular_166_, v_plural_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_plural___boxed(lean_object* v_00_u03b1_169_, lean_object* v_inst_170_, lean_object* v_count_171_, lean_object* v_singular_172_, lean_object* v_plural_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l___private_Lean_Elab_ErrorUtils_0__Nat_plural(v_00_u03b1_169_, v_inst_170_, v_count_171_, v_singular_172_, v_plural_173_);
lean_dec(v_plural_173_);
lean_dec(v_singular_172_);
lean_dec(v_count_171_);
lean_dec_ref(v_inst_170_);
return v_res_174_;
}
}
lean_object* runtime_initialize_Lean_Message(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_ErrorUtils(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString = _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString();
lean_mark_persistent(l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsString);
l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData = _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData();
lean_mark_persistent(l___private_Lean_Elab_ErrorUtils_0__Lean_instHasOxfordStringsMessageData);
l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString = _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString();
lean_mark_persistent(l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsString);
l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData = _init_l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData();
lean_mark_persistent(l___private_Lean_Elab_ErrorUtils_0__Lean_instHasPluralDefaultsMessageData);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_ErrorUtils(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Message(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_ErrorUtils(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ErrorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_ErrorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_ErrorUtils(builtin);
}
#ifdef __cplusplus
}
#endif
