// Lean compiler output
// Module: Std.Http.Data.Headers.Value
// Imports: public import Init.Data.ToString public import Std.Http.Internal
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_string_data(lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* l_Char_utf8Size(uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
lean_object* l_String_hash___boxed(lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__0;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__1;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__2;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__3;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__4;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__6;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__7;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__8;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__9;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__10;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__11;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__12;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__13;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__14;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__15;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__16;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__17;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__18;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__19;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__20;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__21;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__22;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__23;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__24;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__25;
static lean_once_cell_t l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__26;
LEAN_EXPORT lean_object* l_Std_Http_Header_Value_isValidHeaderValue___autoParam;
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqValue_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqValue_beq___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Header_instBEqValue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instBEqValue___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqValue;
LEAN_EXPORT uint8_t l_Std_Http_Header_instDecidableEqValue_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instDecidableEqValue_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Header_instDecidableEqValue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instDecidableEqValue___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_Header_instReprValue_repr_spec__0(lean_object*);
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__0;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__1;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__2;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__3;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__4;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__5;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__6;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__7;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__8;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__9;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__10;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__11;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__12;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__13;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__14;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__15;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__16;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__17;
static lean_once_cell_t l_Std_Http_Header_instReprValue_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue_repr___redArg___closed__18;
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprValue_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprValue_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprValue_repr___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Header_instReprValue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprValue___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprValue;
LEAN_EXPORT lean_object* l_Std_Http_Header_instHashableValue___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instHashableValue___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Std_Http_Header_instHashableValue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instHashableValue___closed__0;
static lean_once_cell_t l_Std_Http_Header_instHashableValue___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instHashableValue___closed__1;
static lean_once_cell_t l_Std_Http_Header_instHashableValue___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instHashableValue___closed__2;
LEAN_EXPORT lean_object* l_Std_Http_Header_instHashableValue;
static lean_once_cell_t l_Std_Http_Header_instInhabitedValue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instInhabitedValue___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Header_instInhabitedValue;
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_Header_Value_ofString_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_Header_Value_ofString_x3f_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_Value_ofString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_Header_Value_ofString_x21_spec__0(lean_object*);
static lean_once_cell_t l_Std_Http_Header_Value_ofString_x21___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_ofString_x21___closed__0;
static lean_once_cell_t l_Std_Http_Header_Value_ofString_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_ofString_x21___closed__1;
static lean_once_cell_t l_Std_Http_Header_Value_ofString_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_ofString_x21___closed__2;
LEAN_EXPORT lean_object* l_Std_Http_Header_Value_ofString_x21(lean_object*);
LEAN_EXPORT lean_object* l_String_mapAux___at___00Std_Http_Header_Value_is_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Header_Value_is(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_Value_is___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_Value_instToString___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_Value_instToString___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Std_Http_Header_Value_instToString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Value_instToString___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Header_Value_instToString;
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_2_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_3_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("tacticSeq", 9, 9);
return v___x_4_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__4(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_5_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__3, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__3_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__3);
v___x_6_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__2, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__2_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__2);
v___x_7_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__1, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__1_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__1);
v___x_8_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__0, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__0_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__0);
v___x_9_ = l_Lean_Name_mkStr4(v___x_8_, v___x_7_, v___x_6_, v___x_5_);
return v___x_9_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_mk_empty_array_with_capacity(v___x_10_);
return v___x_11_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__6(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return v___x_12_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__7(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_13_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__6, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__6_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__6);
v___x_14_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__2, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__2_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__2);
v___x_15_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__1, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__1_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__1);
v___x_16_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__0, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__0_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__0);
v___x_17_ = l_Lean_Name_mkStr4(v___x_16_, v___x_15_, v___x_14_, v___x_13_);
return v___x_17_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__8(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_18_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__9(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__8, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__8_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__8);
v___x_20_ = l_Lean_Name_mkStr1(v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__10(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_mk_string_unchecked("decide", 6, 6);
return v___x_21_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__11(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_22_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__10, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__10_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__10);
v___x_23_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__2, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__2_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__2);
v___x_24_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__1, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__1_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__1);
v___x_25_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__0, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__0_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__0);
v___x_26_ = l_Lean_Name_mkStr4(v___x_25_, v___x_24_, v___x_23_, v___x_22_);
return v___x_26_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__12(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__10, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__10_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__10);
v___x_28_ = l_Lean_mkAtom(v___x_27_);
return v___x_28_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__13(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__12, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__12_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__12);
v___x_30_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5);
v___x_31_ = lean_array_push(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__14(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_mk_string_unchecked("optConfig", 9, 9);
return v___x_32_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__15(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_33_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__14, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__14_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__14);
v___x_34_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__2, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__2_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__2);
v___x_35_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__1, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__1_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__1);
v___x_36_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__0, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__0_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__0);
v___x_37_ = l_Lean_Name_mkStr4(v___x_36_, v___x_35_, v___x_34_, v___x_33_);
return v___x_37_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__16(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_38_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5);
v___x_39_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__9, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__9_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__9);
v___x_40_ = lean_box(2);
v___x_41_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
lean_ctor_set(v___x_41_, 1, v___x_39_);
lean_ctor_set(v___x_41_, 2, v___x_38_);
return v___x_41_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__17(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__16, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__16_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__16);
v___x_43_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5);
v___x_44_ = lean_array_push(v___x_43_, v___x_42_);
return v___x_44_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__18(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_45_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__17, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__17_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__17);
v___x_46_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__15, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__15_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__15);
v___x_47_ = lean_box(2);
v___x_48_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v___x_46_);
lean_ctor_set(v___x_48_, 2, v___x_45_);
return v___x_48_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__19(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_49_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__18, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__18_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__18);
v___x_50_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__13, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__13_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__13);
v___x_51_ = lean_array_push(v___x_50_, v___x_49_);
return v___x_51_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__20(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_52_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__19, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__19_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__19);
v___x_53_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__11, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__11_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__11);
v___x_54_ = lean_box(2);
v___x_55_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v___x_53_);
lean_ctor_set(v___x_55_, 2, v___x_52_);
return v___x_55_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__21(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__20, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__20_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__20);
v___x_57_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5);
v___x_58_ = lean_array_push(v___x_57_, v___x_56_);
return v___x_58_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__22(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_59_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__21, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__21_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__21);
v___x_60_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__9, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__9_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__9);
v___x_61_ = lean_box(2);
v___x_62_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
lean_ctor_set(v___x_62_, 2, v___x_59_);
return v___x_62_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__23(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__22, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__22_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__22);
v___x_64_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5);
v___x_65_ = lean_array_push(v___x_64_, v___x_63_);
return v___x_65_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__24(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_66_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__23, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__23_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__23);
v___x_67_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__7, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__7_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__7);
v___x_68_ = lean_box(2);
v___x_69_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_67_);
lean_ctor_set(v___x_69_, 2, v___x_66_);
return v___x_69_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__25(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__24, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__24_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__24);
v___x_71_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__5);
v___x_72_ = lean_array_push(v___x_71_, v___x_70_);
return v___x_72_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__26(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_73_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__25, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__25_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__25);
v___x_74_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__4, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__4_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__4);
v___x_75_ = lean_box(2);
v___x_76_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
lean_ctor_set(v___x_76_, 1, v___x_74_);
lean_ctor_set(v___x_76_, 2, v___x_73_);
return v___x_76_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam(void){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_obj_once(&l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__26, &l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__26_once, _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam___closed__26);
return v___x_77_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqValue_beq(lean_object* v_x_78_, lean_object* v_x_79_){
_start:
{
uint8_t v___x_80_; 
v___x_80_ = lean_string_dec_eq(v_x_78_, v_x_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqValue_beq___boxed(lean_object* v_x_81_, lean_object* v_x_82_){
_start:
{
uint8_t v_res_83_; lean_object* v_r_84_; 
v_res_83_ = l_Std_Http_Header_instBEqValue_beq(v_x_81_, v_x_82_);
lean_dec_ref(v_x_82_);
lean_dec_ref(v_x_81_);
v_r_84_ = lean_box(v_res_83_);
return v_r_84_;
}
}
static lean_object* _init_l_Std_Http_Header_instBEqValue___closed__0(void){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = lean_alloc_closure((void*)(l_Std_Http_Header_instBEqValue_beq___boxed), 2, 0);
return v___x_85_;
}
}
static lean_object* _init_l_Std_Http_Header_instBEqValue(void){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = lean_obj_once(&l_Std_Http_Header_instBEqValue___closed__0, &l_Std_Http_Header_instBEqValue___closed__0_once, _init_l_Std_Http_Header_instBEqValue___closed__0);
return v___x_86_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_instDecidableEqValue_decEq(lean_object* v_x_87_, lean_object* v_x_88_){
_start:
{
uint8_t v___x_89_; 
v___x_89_ = lean_string_dec_eq(v_x_87_, v_x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instDecidableEqValue_decEq___boxed(lean_object* v_x_90_, lean_object* v_x_91_){
_start:
{
uint8_t v_res_92_; lean_object* v_r_93_; 
v_res_92_ = l_Std_Http_Header_instDecidableEqValue_decEq(v_x_90_, v_x_91_);
lean_dec_ref(v_x_91_);
lean_dec_ref(v_x_90_);
v_r_93_ = lean_box(v_res_92_);
return v_r_93_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_instDecidableEqValue(lean_object* v_x_94_, lean_object* v_x_95_){
_start:
{
uint8_t v___x_96_; 
v___x_96_ = lean_string_dec_eq(v_x_94_, v_x_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instDecidableEqValue___boxed(lean_object* v_x_97_, lean_object* v_x_98_){
_start:
{
uint8_t v_res_99_; lean_object* v_r_100_; 
v_res_99_ = l_Std_Http_Header_instDecidableEqValue(v_x_97_, v_x_98_);
lean_dec_ref(v_x_98_);
lean_dec_ref(v_x_97_);
v_r_100_ = lean_box(v_res_99_);
return v_r_100_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_Header_instReprValue_repr_spec__0(lean_object* v_a_101_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lean_nat_to_int(v_a_101_);
return v___x_102_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__0(void){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = lean_mk_string_unchecked("{ ", 2, 2);
return v___x_103_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__1(void){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = lean_mk_string_unchecked("value", 5, 5);
return v___x_104_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__1, &l_Std_Http_Header_instReprValue_repr___redArg___closed__1_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__1);
v___x_106_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
return v___x_106_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__2, &l_Std_Http_Header_instReprValue_repr___redArg___closed__2_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__2);
v___x_108_ = lean_box(0);
v___x_109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set(v___x_109_, 1, v___x_107_);
return v___x_109_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = lean_mk_string_unchecked(" := ", 4, 4);
return v___x_110_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__5(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__4, &l_Std_Http_Header_instReprValue_repr___redArg___closed__4_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__4);
v___x_112_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
return v___x_112_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_113_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__5, &l_Std_Http_Header_instReprValue_repr___redArg___closed__5_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__5);
v___x_114_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__3, &l_Std_Http_Header_instReprValue_repr___redArg___closed__3_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__3);
v___x_115_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
lean_ctor_set(v___x_115_, 1, v___x_113_);
return v___x_115_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = lean_unsigned_to_nat(9u);
v___x_117_ = lean_nat_to_int(v___x_116_);
return v___x_117_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_mk_string_unchecked(",", 1, 1);
return v___x_118_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__8, &l_Std_Http_Header_instReprValue_repr___redArg___closed__8_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__8);
v___x_120_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
return v___x_120_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_mk_string_unchecked("isValidHeaderValue", 18, 18);
return v___x_121_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__10, &l_Std_Http_Header_instReprValue_repr___redArg___closed__10_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__10);
v___x_123_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
return v___x_123_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = lean_mk_string_unchecked("_", 1, 1);
return v___x_124_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__12, &l_Std_Http_Header_instReprValue_repr___redArg___closed__12_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__12);
v___x_126_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
return v___x_126_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lean_mk_string_unchecked(" }", 2, 2);
return v___x_127_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__0, &l_Std_Http_Header_instReprValue_repr___redArg___closed__0_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__0);
v___x_129_ = lean_string_length(v___x_128_);
return v___x_129_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__15, &l_Std_Http_Header_instReprValue_repr___redArg___closed__15_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__15);
v___x_131_ = lean_nat_to_int(v___x_130_);
return v___x_131_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__0, &l_Std_Http_Header_instReprValue_repr___redArg___closed__0_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__0);
v___x_133_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
return v___x_133_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__14, &l_Std_Http_Header_instReprValue_repr___redArg___closed__14_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__14);
v___x_135_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprValue_repr___redArg(lean_object* v_x_136_){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_137_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__5, &l_Std_Http_Header_instReprValue_repr___redArg___closed__5_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__5);
v___x_138_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__6, &l_Std_Http_Header_instReprValue_repr___redArg___closed__6_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__6);
v___x_139_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__7, &l_Std_Http_Header_instReprValue_repr___redArg___closed__7_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__7);
v___x_140_ = l_String_quote(v_x_136_);
v___x_141_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
v___x_142_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_139_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
v___x_143_ = 0;
v___x_144_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_144_, 0, v___x_142_);
lean_ctor_set_uint8(v___x_144_, sizeof(void*)*1, v___x_143_);
v___x_145_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_145_, 0, v___x_138_);
lean_ctor_set(v___x_145_, 1, v___x_144_);
v___x_146_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__9, &l_Std_Http_Header_instReprValue_repr___redArg___closed__9_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__9);
v___x_147_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_147_, 0, v___x_145_);
lean_ctor_set(v___x_147_, 1, v___x_146_);
v___x_148_ = lean_box(1);
v___x_149_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_149_, 0, v___x_147_);
lean_ctor_set(v___x_149_, 1, v___x_148_);
v___x_150_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__11, &l_Std_Http_Header_instReprValue_repr___redArg___closed__11_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__11);
v___x_151_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_149_);
lean_ctor_set(v___x_151_, 1, v___x_150_);
v___x_152_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
lean_ctor_set(v___x_152_, 1, v___x_137_);
v___x_153_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__13, &l_Std_Http_Header_instReprValue_repr___redArg___closed__13_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__13);
v___x_154_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_154_, 0, v___x_152_);
lean_ctor_set(v___x_154_, 1, v___x_153_);
v___x_155_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__16, &l_Std_Http_Header_instReprValue_repr___redArg___closed__16_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__16);
v___x_156_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__17, &l_Std_Http_Header_instReprValue_repr___redArg___closed__17_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__17);
v___x_157_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
lean_ctor_set(v___x_157_, 1, v___x_154_);
v___x_158_ = lean_obj_once(&l_Std_Http_Header_instReprValue_repr___redArg___closed__18, &l_Std_Http_Header_instReprValue_repr___redArg___closed__18_once, _init_l_Std_Http_Header_instReprValue_repr___redArg___closed__18);
v___x_159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_157_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
v___x_160_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_155_);
lean_ctor_set(v___x_160_, 1, v___x_159_);
v___x_161_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_161_, 0, v___x_160_);
lean_ctor_set_uint8(v___x_161_, sizeof(void*)*1, v___x_143_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprValue_repr(lean_object* v_x_162_, lean_object* v_prec_163_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = l_Std_Http_Header_instReprValue_repr___redArg(v_x_162_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprValue_repr___boxed(lean_object* v_x_165_, lean_object* v_prec_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Std_Http_Header_instReprValue_repr(v_x_165_, v_prec_166_);
lean_dec(v_prec_166_);
return v_res_167_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue___closed__0(void){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lean_alloc_closure((void*)(l_Std_Http_Header_instReprValue_repr___boxed), 2, 0);
return v___x_168_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprValue(void){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = lean_obj_once(&l_Std_Http_Header_instReprValue___closed__0, &l_Std_Http_Header_instReprValue___closed__0_once, _init_l_Std_Http_Header_instReprValue___closed__0);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instHashableValue___lam__0(lean_object* v_self_170_){
_start:
{
lean_inc_ref(v_self_170_);
return v_self_170_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instHashableValue___lam__0___boxed(lean_object* v_self_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Std_Http_Header_instHashableValue___lam__0(v_self_171_);
lean_dec_ref(v_self_171_);
return v_res_172_;
}
}
static lean_object* _init_l_Std_Http_Header_instHashableValue___closed__0(void){
_start:
{
lean_object* v___f_173_; 
v___f_173_ = lean_alloc_closure((void*)(l_Std_Http_Header_instHashableValue___lam__0___boxed), 1, 0);
return v___f_173_;
}
}
static lean_object* _init_l_Std_Http_Header_instHashableValue___closed__1(void){
_start:
{
lean_object* v___x_174_; 
v___x_174_ = lean_alloc_closure((void*)(l_String_hash___boxed), 1, 0);
return v___x_174_;
}
}
static lean_object* _init_l_Std_Http_Header_instHashableValue___closed__2(void){
_start:
{
lean_object* v___f_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___f_175_ = lean_obj_once(&l_Std_Http_Header_instHashableValue___closed__0, &l_Std_Http_Header_instHashableValue___closed__0_once, _init_l_Std_Http_Header_instHashableValue___closed__0);
v___x_176_ = lean_obj_once(&l_Std_Http_Header_instHashableValue___closed__1, &l_Std_Http_Header_instHashableValue___closed__1_once, _init_l_Std_Http_Header_instHashableValue___closed__1);
v___x_177_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_177_, 0, lean_box(0));
lean_closure_set(v___x_177_, 1, lean_box(0));
lean_closure_set(v___x_177_, 2, lean_box(0));
lean_closure_set(v___x_177_, 3, v___x_176_);
lean_closure_set(v___x_177_, 4, v___f_175_);
return v___x_177_;
}
}
static lean_object* _init_l_Std_Http_Header_instHashableValue(void){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = lean_obj_once(&l_Std_Http_Header_instHashableValue___closed__2, &l_Std_Http_Header_instHashableValue___closed__2_once, _init_l_Std_Http_Header_instHashableValue___closed__2);
return v___x_178_;
}
}
static lean_object* _init_l_Std_Http_Header_instInhabitedValue___closed__0(void){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = lean_mk_string_unchecked("", 0, 0);
return v___x_179_;
}
}
static lean_object* _init_l_Std_Http_Header_instInhabitedValue(void){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = lean_obj_once(&l_Std_Http_Header_instInhabitedValue___closed__0, &l_Std_Http_Header_instInhabitedValue___closed__0_once, _init_l_Std_Http_Header_instInhabitedValue___closed__0);
return v___x_180_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_Header_Value_ofString_x3f_spec__0(lean_object* v_x_181_){
_start:
{
if (lean_obj_tag(v_x_181_) == 0)
{
uint8_t v___x_182_; 
v___x_182_ = 1;
return v___x_182_;
}
else
{
lean_object* v_head_183_; lean_object* v_tail_184_; uint32_t v___x_194_; uint32_t v___x_195_; uint8_t v___x_196_; 
v_head_183_ = lean_ctor_get(v_x_181_, 0);
v_tail_184_ = lean_ctor_get(v_x_181_, 1);
v___x_194_ = 33;
v___x_195_ = lean_unbox_uint32(v_head_183_);
v___x_196_ = lean_uint32_dec_le(v___x_194_, v___x_195_);
if (v___x_196_ == 0)
{
goto v___jp_185_;
}
else
{
uint32_t v___x_197_; uint32_t v___x_198_; uint8_t v___x_199_; 
v___x_197_ = 126;
v___x_198_ = lean_unbox_uint32(v_head_183_);
v___x_199_ = lean_uint32_dec_le(v___x_198_, v___x_197_);
if (v___x_199_ == 0)
{
goto v___jp_185_;
}
else
{
v_x_181_ = v_tail_184_;
goto _start;
}
}
v___jp_185_:
{
uint32_t v___x_186_; uint32_t v___x_187_; uint8_t v___x_188_; 
v___x_186_ = 32;
v___x_187_ = lean_unbox_uint32(v_head_183_);
v___x_188_ = lean_uint32_dec_eq(v___x_187_, v___x_186_);
if (v___x_188_ == 0)
{
uint32_t v___x_189_; uint32_t v___x_190_; uint8_t v___x_191_; 
v___x_189_ = 9;
v___x_190_ = lean_unbox_uint32(v_head_183_);
v___x_191_ = lean_uint32_dec_eq(v___x_190_, v___x_189_);
if (v___x_191_ == 0)
{
return v___x_191_;
}
else
{
v_x_181_ = v_tail_184_;
goto _start;
}
}
else
{
v_x_181_ = v_tail_184_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_Header_Value_ofString_x3f_spec__0___boxed(lean_object* v_x_201_){
_start:
{
uint8_t v_res_202_; lean_object* v_r_203_; 
v_res_202_ = l_List_all___at___00Std_Http_Header_Value_ofString_x3f_spec__0(v_x_201_);
lean_dec(v_x_201_);
v_r_203_ = lean_box(v_res_202_);
return v_r_203_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Value_ofString_x3f(lean_object* v_s_204_){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v_val_209_; uint8_t v___y_211_; lean_object* v___x_232_; uint8_t v___x_233_; 
v___x_205_ = lean_unsigned_to_nat(0u);
v___x_206_ = lean_string_utf8_byte_size(v_s_204_);
v___x_207_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_207_, 0, v_s_204_);
lean_ctor_set(v___x_207_, 1, v___x_205_);
lean_ctor_set(v___x_207_, 2, v___x_206_);
v___x_208_ = l_String_Slice_trimAscii(v___x_207_);
v_val_209_ = l_String_Slice_toString(v___x_208_);
lean_dec_ref(v___x_208_);
lean_inc_ref(v_val_209_);
v___x_232_ = lean_string_data(v_val_209_);
v___x_233_ = l_List_all___at___00Std_Http_Header_Value_ofString_x3f_spec__0(v___x_232_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; 
lean_dec(v___x_232_);
lean_dec_ref(v_val_209_);
v___x_234_ = lean_box(0);
return v___x_234_;
}
else
{
lean_object* v___x_235_; 
v___x_235_ = l_List_head_x3f___redArg(v___x_232_);
lean_dec(v___x_232_);
if (lean_obj_tag(v___x_235_) == 0)
{
v___y_211_ = v___x_233_;
goto v___jp_210_;
}
else
{
lean_object* v_val_236_; uint32_t v___x_237_; uint32_t v___x_238_; uint8_t v___x_239_; 
v_val_236_ = lean_ctor_get(v___x_235_, 0);
lean_inc(v_val_236_);
lean_dec_ref(v___x_235_);
v___x_237_ = 33;
v___x_238_ = lean_unbox_uint32(v_val_236_);
v___x_239_ = lean_uint32_dec_le(v___x_237_, v___x_238_);
if (v___x_239_ == 0)
{
lean_object* v___x_240_; 
lean_dec(v_val_236_);
lean_dec_ref(v_val_209_);
v___x_240_ = lean_box(0);
return v___x_240_;
}
else
{
uint32_t v___x_241_; uint32_t v___x_242_; uint8_t v___x_243_; 
v___x_241_ = 126;
v___x_242_ = lean_unbox_uint32(v_val_236_);
lean_dec(v_val_236_);
v___x_243_ = lean_uint32_dec_le(v___x_242_, v___x_241_);
if (v___x_243_ == 0)
{
lean_object* v___x_244_; 
lean_dec_ref(v_val_209_);
v___x_244_ = lean_box(0);
return v___x_244_;
}
else
{
v___y_211_ = v___x_233_;
goto v___jp_210_;
}
}
}
}
v___jp_210_:
{
if (v___y_211_ == 0)
{
lean_object* v___x_212_; 
lean_dec_ref(v_val_209_);
v___x_212_ = lean_box(0);
return v___x_212_;
}
else
{
lean_object* v___x_213_; lean_object* v___x_214_; 
lean_inc_ref(v_val_209_);
v___x_213_ = lean_string_data(v_val_209_);
v___x_214_ = l_List_getLast_x3f___redArg(v___x_213_);
lean_dec(v___x_213_);
if (lean_obj_tag(v___x_214_) == 0)
{
lean_object* v___x_215_; 
v___x_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_215_, 0, v_val_209_);
return v___x_215_;
}
else
{
lean_object* v_val_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_231_; 
v_val_216_ = lean_ctor_get(v___x_214_, 0);
v_isSharedCheck_231_ = !lean_is_exclusive(v___x_214_);
if (v_isSharedCheck_231_ == 0)
{
v___x_218_ = v___x_214_;
v_isShared_219_ = v_isSharedCheck_231_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_val_216_);
lean_dec(v___x_214_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_231_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
uint32_t v___x_220_; uint32_t v___x_221_; uint8_t v___x_222_; 
v___x_220_ = 33;
v___x_221_ = lean_unbox_uint32(v_val_216_);
v___x_222_ = lean_uint32_dec_le(v___x_220_, v___x_221_);
if (v___x_222_ == 0)
{
lean_object* v___x_223_; 
lean_del_object(v___x_218_);
lean_dec(v_val_216_);
lean_dec_ref(v_val_209_);
v___x_223_ = lean_box(0);
return v___x_223_;
}
else
{
uint32_t v___x_224_; uint32_t v___x_225_; uint8_t v___x_226_; 
v___x_224_ = 126;
v___x_225_ = lean_unbox_uint32(v_val_216_);
lean_dec(v_val_216_);
v___x_226_ = lean_uint32_dec_le(v___x_225_, v___x_224_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; 
lean_del_object(v___x_218_);
lean_dec_ref(v_val_209_);
v___x_227_ = lean_box(0);
return v___x_227_;
}
else
{
lean_object* v___x_229_; 
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 0, v_val_209_);
v___x_229_ = v___x_218_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v_val_209_);
v___x_229_ = v_reuseFailAlloc_230_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
return v___x_229_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_Header_Value_ofString_x21_spec__0(lean_object* v_msg_245_){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_246_ = lean_obj_once(&l_Std_Http_Header_instInhabitedValue___closed__0, &l_Std_Http_Header_instInhabitedValue___closed__0_once, _init_l_Std_Http_Header_instInhabitedValue___closed__0);
v___x_247_ = lean_panic_fn_borrowed(v___x_246_, v_msg_245_);
return v___x_247_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_ofString_x21___closed__0(void){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = lean_mk_string_unchecked("Std.Http.Data.Headers.Value", 27, 27);
return v___x_248_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_ofString_x21___closed__1(void){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = lean_mk_string_unchecked("Std.Http.Header.Value.ofString!", 31, 31);
return v___x_249_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_ofString_x21___closed__2(void){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = lean_mk_string_unchecked("invalid header value: ", 22, 22);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Value_ofString_x21(lean_object* v_s_251_){
_start:
{
lean_object* v___x_252_; 
lean_inc_ref(v_s_251_);
v___x_252_ = l_Std_Http_Header_Value_ofString_x3f(v_s_251_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_253_ = lean_obj_once(&l_Std_Http_Header_Value_ofString_x21___closed__0, &l_Std_Http_Header_Value_ofString_x21___closed__0_once, _init_l_Std_Http_Header_Value_ofString_x21___closed__0);
v___x_254_ = lean_obj_once(&l_Std_Http_Header_Value_ofString_x21___closed__1, &l_Std_Http_Header_Value_ofString_x21___closed__1_once, _init_l_Std_Http_Header_Value_ofString_x21___closed__1);
v___x_255_ = lean_unsigned_to_nat(91u);
v___x_256_ = lean_unsigned_to_nat(12u);
v___x_257_ = lean_obj_once(&l_Std_Http_Header_Value_ofString_x21___closed__2, &l_Std_Http_Header_Value_ofString_x21___closed__2_once, _init_l_Std_Http_Header_Value_ofString_x21___closed__2);
v___x_258_ = l_String_quote(v_s_251_);
v___x_259_ = lean_string_append(v___x_257_, v___x_258_);
lean_dec_ref(v___x_258_);
v___x_260_ = l_mkPanicMessageWithDecl(v___x_253_, v___x_254_, v___x_255_, v___x_256_, v___x_259_);
lean_dec_ref(v___x_259_);
v___x_261_ = l_panic___at___00Std_Http_Header_Value_ofString_x21_spec__0(v___x_260_);
return v___x_261_;
}
else
{
lean_object* v_val_262_; 
lean_dec_ref(v_s_251_);
v_val_262_ = lean_ctor_get(v___x_252_, 0);
lean_inc(v_val_262_);
lean_dec_ref(v___x_252_);
return v_val_262_;
}
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00Std_Http_Header_Value_is_spec__0(lean_object* v_s_263_, lean_object* v_p_264_){
_start:
{
uint32_t v___y_266_; lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_271_ = lean_string_utf8_byte_size(v_s_263_);
v___x_272_ = lean_nat_dec_eq(v_p_264_, v___x_271_);
if (v___x_272_ == 0)
{
uint32_t v___x_273_; uint32_t v___x_274_; uint8_t v___x_275_; 
v___x_273_ = lean_string_utf8_get_fast(v_s_263_, v_p_264_);
v___x_274_ = 65;
v___x_275_ = lean_uint32_dec_le(v___x_274_, v___x_273_);
if (v___x_275_ == 0)
{
v___y_266_ = v___x_273_;
goto v___jp_265_;
}
else
{
uint32_t v___x_276_; uint8_t v___x_277_; 
v___x_276_ = 90;
v___x_277_ = lean_uint32_dec_le(v___x_273_, v___x_276_);
if (v___x_277_ == 0)
{
v___y_266_ = v___x_273_;
goto v___jp_265_;
}
else
{
uint32_t v___x_278_; uint32_t v___x_279_; 
v___x_278_ = 32;
v___x_279_ = lean_uint32_add(v___x_273_, v___x_278_);
v___y_266_ = v___x_279_;
goto v___jp_265_;
}
}
}
else
{
lean_dec(v_p_264_);
return v_s_263_;
}
v___jp_265_:
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
lean_inc(v_p_264_);
v___x_267_ = lean_string_utf8_set(v_s_263_, v_p_264_, v___y_266_);
v___x_268_ = l_Char_utf8Size(v___y_266_);
v___x_269_ = lean_nat_add(v_p_264_, v___x_268_);
lean_dec(v___x_268_);
lean_dec(v_p_264_);
v_s_263_ = v___x_267_;
v_p_264_ = v___x_269_;
goto _start;
}
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_Value_is(lean_object* v_s_280_, lean_object* v_h_281_){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; uint8_t v___x_285_; 
v___x_282_ = lean_unsigned_to_nat(0u);
v___x_283_ = l_String_mapAux___at___00Std_Http_Header_Value_is_spec__0(v_s_280_, v___x_282_);
v___x_284_ = l_String_mapAux___at___00Std_Http_Header_Value_is_spec__0(v_h_281_, v___x_282_);
v___x_285_ = lean_string_dec_eq(v___x_283_, v___x_284_);
lean_dec_ref(v___x_284_);
lean_dec_ref(v___x_283_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Value_is___boxed(lean_object* v_s_286_, lean_object* v_h_287_){
_start:
{
uint8_t v_res_288_; lean_object* v_r_289_; 
v_res_288_ = l_Std_Http_Header_Value_is(v_s_286_, v_h_287_);
v_r_289_ = lean_box(v_res_288_);
return v_r_289_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Value_instToString___lam__0(lean_object* v_v_290_){
_start:
{
lean_inc_ref(v_v_290_);
return v_v_290_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Value_instToString___lam__0___boxed(lean_object* v_v_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Std_Http_Header_Value_instToString___lam__0(v_v_291_);
lean_dec_ref(v_v_291_);
return v_res_292_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_instToString___closed__0(void){
_start:
{
lean_object* v___f_293_; 
v___f_293_ = lean_alloc_closure((void*)(l_Std_Http_Header_Value_instToString___lam__0___boxed), 1, 0);
return v___f_293_;
}
}
static lean_object* _init_l_Std_Http_Header_Value_instToString(void){
_start:
{
lean_object* v___f_294_; 
v___f_294_ = lean_obj_once(&l_Std_Http_Header_Value_instToString___closed__0, &l_Std_Http_Header_Value_instToString___closed__0_once, _init_l_Std_Http_Header_Value_instToString___closed__0);
return v___f_294_;
}
}
lean_object* runtime_initialize_Init_Data_ToString(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Internal(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_Headers_Value(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_ToString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Http_Header_instBEqValue = _init_l_Std_Http_Header_instBEqValue();
lean_mark_persistent(l_Std_Http_Header_instBEqValue);
l_Std_Http_Header_instReprValue = _init_l_Std_Http_Header_instReprValue();
lean_mark_persistent(l_Std_Http_Header_instReprValue);
l_Std_Http_Header_instHashableValue = _init_l_Std_Http_Header_instHashableValue();
lean_mark_persistent(l_Std_Http_Header_instHashableValue);
l_Std_Http_Header_instInhabitedValue = _init_l_Std_Http_Header_instInhabitedValue();
lean_mark_persistent(l_Std_Http_Header_instInhabitedValue);
l_Std_Http_Header_Value_instToString = _init_l_Std_Http_Header_Value_instToString();
lean_mark_persistent(l_Std_Http_Header_Value_instToString);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_Headers_Value(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Std_Http_Header_Value_isValidHeaderValue___autoParam = _init_l_Std_Http_Header_Value_isValidHeaderValue___autoParam();
lean_mark_persistent(l_Std_Http_Header_Value_isValidHeaderValue___autoParam);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_ToString(uint8_t builtin);
lean_object* initialize_Std_Http_Internal(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_Headers_Value(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_ToString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Headers_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_Headers_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_Headers_Value(builtin);
}
#ifdef __cplusplus
}
#endif
