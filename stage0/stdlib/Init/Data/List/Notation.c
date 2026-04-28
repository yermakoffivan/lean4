// Lean compiler output
// Module: Init.Data.List.Notation
// Imports: public meta import Init.Grind.Tactics public import Init.Notation
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
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Array_appendCore___redArg(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_term_x5b___x5d___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__0;
static lean_once_cell_t l_term_x5b___x5d___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__1;
static lean_once_cell_t l_term_x5b___x5d___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__2;
static lean_once_cell_t l_term_x5b___x5d___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__3;
static lean_once_cell_t l_term_x5b___x5d___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__4;
static lean_once_cell_t l_term_x5b___x5d___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__5;
static lean_once_cell_t l_term_x5b___x5d___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__6;
static lean_once_cell_t l_term_x5b___x5d___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__7;
static lean_once_cell_t l_term_x5b___x5d___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__8;
static lean_once_cell_t l_term_x5b___x5d___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__9;
static lean_once_cell_t l_term_x5b___x5d___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__10;
static lean_once_cell_t l_term_x5b___x5d___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__11;
static lean_once_cell_t l_term_x5b___x5d___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__12;
static lean_once_cell_t l_term_x5b___x5d___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__13;
static lean_once_cell_t l_term_x5b___x5d___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__14;
static lean_once_cell_t l_term_x5b___x5d___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__15;
static lean_once_cell_t l_term_x5b___x5d___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__16;
static lean_once_cell_t l_term_x5b___x5d___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__17;
static lean_once_cell_t l_term_x5b___x5d___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__18;
static lean_once_cell_t l_term_x5b___x5d___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__19;
static lean_once_cell_t l_term_x5b___x5d___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x5b___x5d___closed__20;
LEAN_EXPORT lean_object* l_term_x5b___x5d;
static lean_once_cell_t l_term_x25_x5b___x7c___x5d___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x25_x5b___x7c___x5d___closed__0;
static lean_once_cell_t l_term_x25_x5b___x7c___x5d___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x25_x5b___x7c___x5d___closed__1;
static lean_once_cell_t l_term_x25_x5b___x7c___x5d___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x25_x5b___x7c___x5d___closed__2;
static lean_once_cell_t l_term_x25_x5b___x7c___x5d___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x25_x5b___x7c___x5d___closed__3;
static lean_once_cell_t l_term_x25_x5b___x7c___x5d___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x25_x5b___x7c___x5d___closed__4;
static lean_once_cell_t l_term_x25_x5b___x7c___x5d___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x25_x5b___x7c___x5d___closed__5;
static lean_once_cell_t l_term_x25_x5b___x7c___x5d___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x25_x5b___x7c___x5d___closed__6;
static lean_once_cell_t l_term_x25_x5b___x7c___x5d___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x25_x5b___x7c___x5d___closed__7;
static lean_once_cell_t l_term_x25_x5b___x7c___x5d___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x25_x5b___x7c___x5d___closed__8;
static lean_once_cell_t l_term_x25_x5b___x7c___x5d___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x25_x5b___x7c___x5d___closed__9;
static lean_once_cell_t l_term_x25_x5b___x7c___x5d___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x25_x5b___x7c___x5d___closed__10;
static lean_once_cell_t l_term_x25_x5b___x7c___x5d___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x25_x5b___x7c___x5d___closed__11;
LEAN_EXPORT lean_object* l_term_x25_x5b___x7c___x5d;
static lean_once_cell_t l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__0;
static lean_once_cell_t l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__1;
static lean_once_cell_t l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__2;
static lean_once_cell_t l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__3;
static lean_once_cell_t l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__4;
static lean_once_cell_t l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__5;
static lean_once_cell_t l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__6;
static lean_once_cell_t l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__7;
static lean_once_cell_t l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__8;
static lean_once_cell_t l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__9;
static lean_once_cell_t l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__10;
static lean_once_cell_t l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__11;
static lean_once_cell_t l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__12;
static lean_once_cell_t l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__13;
static lean_once_cell_t l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__14;
static lean_once_cell_t l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__15;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__0;
static lean_once_cell_t l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__1;
static lean_once_cell_t l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__2;
static lean_once_cell_t l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__3;
static lean_once_cell_t l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__4;
static lean_once_cell_t l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__5;
static lean_once_cell_t l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__6;
static lean_once_cell_t l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__7;
static lean_once_cell_t l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__8;
static lean_once_cell_t l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__9;
LEAN_EXPORT lean_object* l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_term_x5b___x5d___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("term[_]", 7, 7);
return v___x_1_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_term_x5b___x5d___closed__0, &l_term_x5b___x5d___closed__0_once, _init_l_term_x5b___x5d___closed__0);
v___x_3_ = l_Lean_Name_mkStr1(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__2(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_4_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__3(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_term_x5b___x5d___closed__2, &l_term_x5b___x5d___closed__2_once, _init_l_term_x5b___x5d___closed__2);
v___x_6_ = l_Lean_Name_mkStr1(v___x_5_);
return v___x_6_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__4(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_mk_string_unchecked("[", 1, 1);
return v___x_7_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__5(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_obj_once(&l_term_x5b___x5d___closed__4, &l_term_x5b___x5d___closed__4_once, _init_l_term_x5b___x5d___closed__4);
v___x_9_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__6(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_mk_string_unchecked("withoutPosition", 15, 15);
return v___x_10_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__7(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = lean_obj_once(&l_term_x5b___x5d___closed__6, &l_term_x5b___x5d___closed__6_once, _init_l_term_x5b___x5d___closed__6);
v___x_12_ = l_Lean_Name_mkStr1(v___x_11_);
return v___x_12_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__8(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_mk_string_unchecked("term", 4, 4);
return v___x_13_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__9(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_obj_once(&l_term_x5b___x5d___closed__8, &l_term_x5b___x5d___closed__8_once, _init_l_term_x5b___x5d___closed__8);
v___x_15_ = l_Lean_Name_mkStr1(v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__10(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_16_ = lean_unsigned_to_nat(0u);
v___x_17_ = lean_obj_once(&l_term_x5b___x5d___closed__9, &l_term_x5b___x5d___closed__9_once, _init_l_term_x5b___x5d___closed__9);
v___x_18_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
lean_ctor_set(v___x_18_, 1, v___x_16_);
return v___x_18_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__11(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = lean_mk_string_unchecked(",", 1, 1);
return v___x_19_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__12(void){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_mk_string_unchecked(", ", 2, 2);
return v___x_20_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__13(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_obj_once(&l_term_x5b___x5d___closed__12, &l_term_x5b___x5d___closed__12_once, _init_l_term_x5b___x5d___closed__12);
v___x_22_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
return v___x_22_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__14(void){
_start:
{
uint8_t v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_23_ = 1;
v___x_24_ = lean_obj_once(&l_term_x5b___x5d___closed__13, &l_term_x5b___x5d___closed__13_once, _init_l_term_x5b___x5d___closed__13);
v___x_25_ = lean_obj_once(&l_term_x5b___x5d___closed__11, &l_term_x5b___x5d___closed__11_once, _init_l_term_x5b___x5d___closed__11);
v___x_26_ = lean_obj_once(&l_term_x5b___x5d___closed__10, &l_term_x5b___x5d___closed__10_once, _init_l_term_x5b___x5d___closed__10);
v___x_27_ = lean_alloc_ctor(10, 3, 1);
lean_ctor_set(v___x_27_, 0, v___x_26_);
lean_ctor_set(v___x_27_, 1, v___x_25_);
lean_ctor_set(v___x_27_, 2, v___x_24_);
lean_ctor_set_uint8(v___x_27_, sizeof(void*)*3, v___x_23_);
return v___x_27_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__15(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_28_ = lean_obj_once(&l_term_x5b___x5d___closed__14, &l_term_x5b___x5d___closed__14_once, _init_l_term_x5b___x5d___closed__14);
v___x_29_ = lean_obj_once(&l_term_x5b___x5d___closed__7, &l_term_x5b___x5d___closed__7_once, _init_l_term_x5b___x5d___closed__7);
v___x_30_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
lean_ctor_set(v___x_30_, 1, v___x_28_);
return v___x_30_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__16(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_31_ = lean_obj_once(&l_term_x5b___x5d___closed__15, &l_term_x5b___x5d___closed__15_once, _init_l_term_x5b___x5d___closed__15);
v___x_32_ = lean_obj_once(&l_term_x5b___x5d___closed__5, &l_term_x5b___x5d___closed__5_once, _init_l_term_x5b___x5d___closed__5);
v___x_33_ = lean_obj_once(&l_term_x5b___x5d___closed__3, &l_term_x5b___x5d___closed__3_once, _init_l_term_x5b___x5d___closed__3);
v___x_34_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_34_, 0, v___x_33_);
lean_ctor_set(v___x_34_, 1, v___x_32_);
lean_ctor_set(v___x_34_, 2, v___x_31_);
return v___x_34_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__17(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_mk_string_unchecked("]", 1, 1);
return v___x_35_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__18(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_obj_once(&l_term_x5b___x5d___closed__17, &l_term_x5b___x5d___closed__17_once, _init_l_term_x5b___x5d___closed__17);
v___x_37_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
return v___x_37_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__19(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_38_ = lean_obj_once(&l_term_x5b___x5d___closed__18, &l_term_x5b___x5d___closed__18_once, _init_l_term_x5b___x5d___closed__18);
v___x_39_ = lean_obj_once(&l_term_x5b___x5d___closed__16, &l_term_x5b___x5d___closed__16_once, _init_l_term_x5b___x5d___closed__16);
v___x_40_ = lean_obj_once(&l_term_x5b___x5d___closed__3, &l_term_x5b___x5d___closed__3_once, _init_l_term_x5b___x5d___closed__3);
v___x_41_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
lean_ctor_set(v___x_41_, 1, v___x_39_);
lean_ctor_set(v___x_41_, 2, v___x_38_);
return v___x_41_;
}
}
static lean_object* _init_l_term_x5b___x5d___closed__20(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_42_ = lean_obj_once(&l_term_x5b___x5d___closed__19, &l_term_x5b___x5d___closed__19_once, _init_l_term_x5b___x5d___closed__19);
v___x_43_ = lean_unsigned_to_nat(1024u);
v___x_44_ = lean_obj_once(&l_term_x5b___x5d___closed__1, &l_term_x5b___x5d___closed__1_once, _init_l_term_x5b___x5d___closed__1);
v___x_45_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_45_, 0, v___x_44_);
lean_ctor_set(v___x_45_, 1, v___x_43_);
lean_ctor_set(v___x_45_, 2, v___x_42_);
return v___x_45_;
}
}
static lean_object* _init_l_term_x5b___x5d(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_obj_once(&l_term_x5b___x5d___closed__20, &l_term_x5b___x5d___closed__20_once, _init_l_term_x5b___x5d___closed__20);
return v___x_46_;
}
}
static lean_object* _init_l_term_x25_x5b___x7c___x5d___closed__0(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_mk_string_unchecked("term%[_|_]", 10, 10);
return v___x_47_;
}
}
static lean_object* _init_l_term_x25_x5b___x7c___x5d___closed__1(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = lean_obj_once(&l_term_x25_x5b___x7c___x5d___closed__0, &l_term_x25_x5b___x7c___x5d___closed__0_once, _init_l_term_x25_x5b___x7c___x5d___closed__0);
v___x_49_ = l_Lean_Name_mkStr1(v___x_48_);
return v___x_49_;
}
}
static lean_object* _init_l_term_x25_x5b___x7c___x5d___closed__2(void){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_mk_string_unchecked("%[", 2, 2);
return v___x_50_;
}
}
static lean_object* _init_l_term_x25_x5b___x7c___x5d___closed__3(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_obj_once(&l_term_x25_x5b___x7c___x5d___closed__2, &l_term_x25_x5b___x7c___x5d___closed__2_once, _init_l_term_x25_x5b___x7c___x5d___closed__2);
v___x_52_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
return v___x_52_;
}
}
static lean_object* _init_l_term_x25_x5b___x7c___x5d___closed__4(void){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lean_mk_string_unchecked(" | ", 3, 3);
return v___x_53_;
}
}
static lean_object* _init_l_term_x25_x5b___x7c___x5d___closed__5(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_obj_once(&l_term_x25_x5b___x7c___x5d___closed__4, &l_term_x25_x5b___x7c___x5d___closed__4_once, _init_l_term_x25_x5b___x7c___x5d___closed__4);
v___x_55_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_l_term_x25_x5b___x7c___x5d___closed__6(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_56_ = lean_obj_once(&l_term_x25_x5b___x7c___x5d___closed__5, &l_term_x25_x5b___x7c___x5d___closed__5_once, _init_l_term_x25_x5b___x7c___x5d___closed__5);
v___x_57_ = lean_obj_once(&l_term_x5b___x5d___closed__14, &l_term_x5b___x5d___closed__14_once, _init_l_term_x5b___x5d___closed__14);
v___x_58_ = lean_obj_once(&l_term_x5b___x5d___closed__3, &l_term_x5b___x5d___closed__3_once, _init_l_term_x5b___x5d___closed__3);
v___x_59_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set(v___x_59_, 1, v___x_57_);
lean_ctor_set(v___x_59_, 2, v___x_56_);
return v___x_59_;
}
}
static lean_object* _init_l_term_x25_x5b___x7c___x5d___closed__7(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_60_ = lean_obj_once(&l_term_x5b___x5d___closed__10, &l_term_x5b___x5d___closed__10_once, _init_l_term_x5b___x5d___closed__10);
v___x_61_ = lean_obj_once(&l_term_x25_x5b___x7c___x5d___closed__6, &l_term_x25_x5b___x7c___x5d___closed__6_once, _init_l_term_x25_x5b___x7c___x5d___closed__6);
v___x_62_ = lean_obj_once(&l_term_x5b___x5d___closed__3, &l_term_x5b___x5d___closed__3_once, _init_l_term_x5b___x5d___closed__3);
v___x_63_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
lean_ctor_set(v___x_63_, 1, v___x_61_);
lean_ctor_set(v___x_63_, 2, v___x_60_);
return v___x_63_;
}
}
static lean_object* _init_l_term_x25_x5b___x7c___x5d___closed__8(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = lean_obj_once(&l_term_x25_x5b___x7c___x5d___closed__7, &l_term_x25_x5b___x7c___x5d___closed__7_once, _init_l_term_x25_x5b___x7c___x5d___closed__7);
v___x_65_ = lean_obj_once(&l_term_x5b___x5d___closed__7, &l_term_x5b___x5d___closed__7_once, _init_l_term_x5b___x5d___closed__7);
v___x_66_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set(v___x_66_, 1, v___x_64_);
return v___x_66_;
}
}
static lean_object* _init_l_term_x25_x5b___x7c___x5d___closed__9(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_67_ = lean_obj_once(&l_term_x25_x5b___x7c___x5d___closed__8, &l_term_x25_x5b___x7c___x5d___closed__8_once, _init_l_term_x25_x5b___x7c___x5d___closed__8);
v___x_68_ = lean_obj_once(&l_term_x25_x5b___x7c___x5d___closed__3, &l_term_x25_x5b___x7c___x5d___closed__3_once, _init_l_term_x25_x5b___x7c___x5d___closed__3);
v___x_69_ = lean_obj_once(&l_term_x5b___x5d___closed__3, &l_term_x5b___x5d___closed__3_once, _init_l_term_x5b___x5d___closed__3);
v___x_70_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v___x_68_);
lean_ctor_set(v___x_70_, 2, v___x_67_);
return v___x_70_;
}
}
static lean_object* _init_l_term_x25_x5b___x7c___x5d___closed__10(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_71_ = lean_obj_once(&l_term_x5b___x5d___closed__18, &l_term_x5b___x5d___closed__18_once, _init_l_term_x5b___x5d___closed__18);
v___x_72_ = lean_obj_once(&l_term_x25_x5b___x7c___x5d___closed__9, &l_term_x25_x5b___x7c___x5d___closed__9_once, _init_l_term_x25_x5b___x7c___x5d___closed__9);
v___x_73_ = lean_obj_once(&l_term_x5b___x5d___closed__3, &l_term_x5b___x5d___closed__3_once, _init_l_term_x5b___x5d___closed__3);
v___x_74_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v___x_72_);
lean_ctor_set(v___x_74_, 2, v___x_71_);
return v___x_74_;
}
}
static lean_object* _init_l_term_x25_x5b___x7c___x5d___closed__11(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_75_ = lean_obj_once(&l_term_x25_x5b___x7c___x5d___closed__10, &l_term_x25_x5b___x7c___x5d___closed__10_once, _init_l_term_x25_x5b___x7c___x5d___closed__10);
v___x_76_ = lean_unsigned_to_nat(1024u);
v___x_77_ = lean_obj_once(&l_term_x25_x5b___x7c___x5d___closed__1, &l_term_x25_x5b___x7c___x5d___closed__1_once, _init_l_term_x25_x5b___x7c___x5d___closed__1);
v___x_78_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
lean_ctor_set(v___x_78_, 1, v___x_76_);
lean_ctor_set(v___x_78_, 2, v___x_75_);
return v___x_78_;
}
}
static lean_object* _init_l_term_x25_x5b___x7c___x5d(void){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = lean_obj_once(&l_term_x25_x5b___x7c___x5d___closed__11, &l_term_x25_x5b___x7c___x5d___closed__11_once, _init_l_term_x25_x5b___x7c___x5d___closed__11);
return v___x_79_;
}
}
static lean_object* _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__0(void){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_80_;
}
}
static lean_object* _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__1(void){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_81_;
}
}
static lean_object* _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__2(void){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_82_;
}
}
static lean_object* _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__3(void){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = lean_mk_string_unchecked("app", 3, 3);
return v___x_83_;
}
}
static lean_object* _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__4(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_84_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__3, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__3_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__3);
v___x_85_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__2, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__2_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__2);
v___x_86_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__1, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__1_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__1);
v___x_87_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__0, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__0_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__0);
v___x_88_ = l_Lean_Name_mkStr4(v___x_87_, v___x_86_, v___x_85_, v___x_84_);
return v___x_88_;
}
}
static lean_object* _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__5(void){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lean_mk_string_unchecked("List.cons", 9, 9);
return v___x_89_;
}
}
static lean_object* _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__6(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__5, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__5_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__5);
v___x_91_ = l_String_toRawSubstring_x27(v___x_90_);
return v___x_91_;
}
}
static lean_object* _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__7(void){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = lean_mk_string_unchecked("List", 4, 4);
return v___x_92_;
}
}
static lean_object* _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__8(void){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = lean_mk_string_unchecked("cons", 4, 4);
return v___x_93_;
}
}
static lean_object* _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__9(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__8, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__8_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__8);
v___x_95_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__7, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__7_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__7);
v___x_96_ = l_Lean_Name_mkStr2(v___x_95_, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__10(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = lean_box(0);
v___x_98_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__9, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__9_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__9);
v___x_99_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
lean_ctor_set(v___x_99_, 1, v___x_97_);
return v___x_99_;
}
}
static lean_object* _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__11(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__9, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__9_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__9);
v___x_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
return v___x_101_;
}
}
static lean_object* _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__12(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_102_ = lean_box(0);
v___x_103_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__11, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__11_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__11);
v___x_104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_103_);
lean_ctor_set(v___x_104_, 1, v___x_102_);
return v___x_104_;
}
}
static lean_object* _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__13(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_105_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__12, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__12_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__12);
v___x_106_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__10, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__10_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__10);
v___x_107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
lean_ctor_set(v___x_107_, 1, v___x_105_);
return v___x_107_;
}
}
static lean_object* _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__14(void){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_108_;
}
}
static lean_object* _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__15(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__14, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__14_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__14);
v___x_110_ = l_Lean_Name_mkStr1(v___x_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit(lean_object* v_elems_111_, lean_object* v_i_112_, uint8_t v_skip_113_, lean_object* v_result_114_, lean_object* v_a_115_, lean_object* v_a_116_){
_start:
{
lean_object* v_zero_117_; uint8_t v_isZero_118_; 
v_zero_117_ = lean_unsigned_to_nat(0u);
v_isZero_118_ = lean_nat_dec_eq(v_i_112_, v_zero_117_);
if (v_isZero_118_ == 1)
{
lean_object* v___x_119_; 
lean_dec(v_i_112_);
v___x_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_119_, 0, v_result_114_);
lean_ctor_set(v___x_119_, 1, v_a_116_);
return v___x_119_;
}
else
{
lean_object* v_one_120_; lean_object* v_n_121_; 
v_one_120_ = lean_unsigned_to_nat(1u);
v_n_121_ = lean_nat_sub(v_i_112_, v_one_120_);
lean_dec(v_i_112_);
if (v_skip_113_ == 0)
{
lean_object* v_quotContext_122_; lean_object* v_currMacroScope_123_; lean_object* v_ref_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; uint8_t v___x_137_; 
v_quotContext_122_ = lean_ctor_get(v_a_115_, 1);
v_currMacroScope_123_ = lean_ctor_get(v_a_115_, 2);
v_ref_124_ = lean_ctor_get(v_a_115_, 5);
v___x_125_ = lean_box(0);
v___x_126_ = l_Lean_SourceInfo_fromRef(v_ref_124_, v_skip_113_);
v___x_127_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__4, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__4_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__4);
v___x_128_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__6, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__6_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__6);
v___x_129_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__9, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__9_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__9);
lean_inc(v_currMacroScope_123_);
lean_inc(v_quotContext_122_);
v___x_130_ = l_Lean_addMacroScope(v_quotContext_122_, v___x_129_, v_currMacroScope_123_);
v___x_131_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__13, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__13_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__13);
lean_inc_n(v___x_126_, 2);
v___x_132_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_132_, 0, v___x_126_);
lean_ctor_set(v___x_132_, 1, v___x_128_);
lean_ctor_set(v___x_132_, 2, v___x_130_);
lean_ctor_set(v___x_132_, 3, v___x_131_);
v___x_133_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__15, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__15_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__15);
v___x_134_ = lean_array_get_borrowed(v___x_125_, v_elems_111_, v_n_121_);
lean_inc(v___x_134_);
v___x_135_ = l_Lean_Syntax_node2(v___x_126_, v___x_133_, v___x_134_, v_result_114_);
v___x_136_ = l_Lean_Syntax_node2(v___x_126_, v___x_127_, v___x_132_, v___x_135_);
v___x_137_ = 1;
v_i_112_ = v_n_121_;
v_skip_113_ = v___x_137_;
v_result_114_ = v___x_136_;
goto _start;
}
else
{
v_i_112_ = v_n_121_;
v_skip_113_ = v_isZero_118_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___boxed(lean_object* v_elems_140_, lean_object* v_i_141_, lean_object* v_skip_142_, lean_object* v_result_143_, lean_object* v_a_144_, lean_object* v_a_145_){
_start:
{
uint8_t v_skip_boxed_146_; lean_object* v_res_147_; 
v_skip_boxed_146_ = lean_unbox(v_skip_142_);
v_res_147_ = l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit(v_elems_140_, v_i_141_, v_skip_boxed_146_, v_result_143_, v_a_144_, v_a_145_);
lean_dec_ref(v_a_144_);
lean_dec_ref(v_elems_140_);
return v_res_147_;
}
}
static lean_object* _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__0(void){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = l_Array_mkArray0(lean_box(0));
return v___x_148_;
}
}
static lean_object* _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__1(void){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lean_mk_string_unchecked("|", 1, 1);
return v___x_149_;
}
}
static lean_object* _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__2(void){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = lean_mk_string_unchecked("List.nil", 8, 8);
return v___x_150_;
}
}
static lean_object* _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__3(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = lean_obj_once(&l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__2, &l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__2_once, _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__2);
v___x_152_ = l_String_toRawSubstring_x27(v___x_151_);
return v___x_152_;
}
}
static lean_object* _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__4(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_mk_string_unchecked("nil", 3, 3);
return v___x_153_;
}
}
static lean_object* _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__5(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_154_ = lean_obj_once(&l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__4, &l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__4_once, _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__4);
v___x_155_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__7, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__7_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__7);
v___x_156_ = l_Lean_Name_mkStr2(v___x_155_, v___x_154_);
return v___x_156_;
}
}
static lean_object* _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__6(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_157_ = lean_box(0);
v___x_158_ = lean_obj_once(&l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__5, &l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__5_once, _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__5);
v___x_159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_158_);
lean_ctor_set(v___x_159_, 1, v___x_157_);
return v___x_159_;
}
}
static lean_object* _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__7(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = lean_obj_once(&l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__5, &l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__5_once, _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__5);
v___x_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
return v___x_161_;
}
}
static lean_object* _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__8(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_162_ = lean_box(0);
v___x_163_ = lean_obj_once(&l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__7, &l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__7_once, _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__7);
v___x_164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
lean_ctor_set(v___x_164_, 1, v___x_162_);
return v___x_164_;
}
}
static lean_object* _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__9(void){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_165_ = lean_obj_once(&l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__8, &l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__8_once, _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__8);
v___x_166_ = lean_obj_once(&l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__6, &l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__6_once, _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__6);
v___x_167_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
lean_ctor_set(v___x_167_, 1, v___x_165_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1(lean_object* v_x_168_, lean_object* v_a_169_, lean_object* v_a_170_){
_start:
{
lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_171_ = lean_obj_once(&l_term_x5b___x5d___closed__1, &l_term_x5b___x5d___closed__1_once, _init_l_term_x5b___x5d___closed__1);
lean_inc(v_x_168_);
v___x_172_ = l_Lean_Syntax_isOfKind(v_x_168_, v___x_171_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; lean_object* v___x_174_; 
lean_dec(v_x_168_);
v___x_173_ = lean_box(1);
v___x_174_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
lean_ctor_set(v___x_174_, 1, v_a_170_);
return v___x_174_;
}
else
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v_elems_177_; lean_object* v_size_178_; lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_175_ = lean_unsigned_to_nat(1u);
v___x_176_ = l_Lean_Syntax_getArg(v_x_168_, v___x_175_);
lean_dec(v_x_168_);
v_elems_177_ = l_Lean_Syntax_getArgs(v___x_176_);
lean_dec(v___x_176_);
v_size_178_ = lean_array_get_size(v_elems_177_);
v___x_179_ = lean_unsigned_to_nat(64u);
v___x_180_ = lean_nat_dec_lt(v_size_178_, v___x_179_);
if (v___x_180_ == 0)
{
lean_object* v_quotContext_181_; lean_object* v_currMacroScope_182_; lean_object* v_ref_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v_quotContext_181_ = lean_ctor_get(v_a_169_, 1);
v_currMacroScope_182_ = lean_ctor_get(v_a_169_, 2);
v_ref_183_ = lean_ctor_get(v_a_169_, 5);
v___x_184_ = l_Lean_SourceInfo_fromRef(v_ref_183_, v___x_180_);
v___x_185_ = lean_obj_once(&l_term_x25_x5b___x7c___x5d___closed__1, &l_term_x25_x5b___x7c___x5d___closed__1_once, _init_l_term_x25_x5b___x7c___x5d___closed__1);
v___x_186_ = lean_obj_once(&l_term_x25_x5b___x7c___x5d___closed__2, &l_term_x25_x5b___x7c___x5d___closed__2_once, _init_l_term_x25_x5b___x7c___x5d___closed__2);
lean_inc_n(v___x_184_, 5);
v___x_187_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_184_);
lean_ctor_set(v___x_187_, 1, v___x_186_);
v___x_188_ = lean_obj_once(&l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__15, &l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__15_once, _init_l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit___closed__15);
v___x_189_ = lean_obj_once(&l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__0, &l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__0_once, _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__0);
v___x_190_ = l_Array_appendCore___redArg(v___x_189_, v_elems_177_);
lean_dec_ref(v_elems_177_);
v___x_191_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_191_, 0, v___x_184_);
lean_ctor_set(v___x_191_, 1, v___x_188_);
lean_ctor_set(v___x_191_, 2, v___x_190_);
v___x_192_ = lean_obj_once(&l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__1, &l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__1_once, _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__1);
v___x_193_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_184_);
lean_ctor_set(v___x_193_, 1, v___x_192_);
v___x_194_ = lean_obj_once(&l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__3, &l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__3_once, _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__3);
v___x_195_ = lean_obj_once(&l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__5, &l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__5_once, _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__5);
lean_inc(v_currMacroScope_182_);
lean_inc(v_quotContext_181_);
v___x_196_ = l_Lean_addMacroScope(v_quotContext_181_, v___x_195_, v_currMacroScope_182_);
v___x_197_ = lean_obj_once(&l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__9, &l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__9_once, _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__9);
v___x_198_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_198_, 0, v___x_184_);
lean_ctor_set(v___x_198_, 1, v___x_194_);
lean_ctor_set(v___x_198_, 2, v___x_196_);
lean_ctor_set(v___x_198_, 3, v___x_197_);
v___x_199_ = lean_obj_once(&l_term_x5b___x5d___closed__17, &l_term_x5b___x5d___closed__17_once, _init_l_term_x5b___x5d___closed__17);
v___x_200_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_184_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
v___x_201_ = l_Lean_Syntax_node5(v___x_184_, v___x_185_, v___x_187_, v___x_191_, v___x_193_, v___x_198_, v___x_200_);
v___x_202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
lean_ctor_set(v___x_202_, 1, v_a_170_);
return v___x_202_;
}
else
{
lean_object* v_quotContext_203_; lean_object* v_currMacroScope_204_; lean_object* v_ref_205_; lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; uint8_t v___x_216_; lean_object* v___x_217_; 
v_quotContext_203_ = lean_ctor_get(v_a_169_, 1);
v_currMacroScope_204_ = lean_ctor_get(v_a_169_, 2);
v_ref_205_ = lean_ctor_get(v_a_169_, 5);
v___x_206_ = lean_unsigned_to_nat(0u);
v___x_207_ = lean_unsigned_to_nat(2u);
v___x_208_ = 0;
v___x_209_ = l_Lean_SourceInfo_fromRef(v_ref_205_, v___x_208_);
v___x_210_ = lean_obj_once(&l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__3, &l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__3_once, _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__3);
v___x_211_ = lean_obj_once(&l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__5, &l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__5_once, _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__5);
lean_inc(v_currMacroScope_204_);
lean_inc(v_quotContext_203_);
v___x_212_ = l_Lean_addMacroScope(v_quotContext_203_, v___x_211_, v_currMacroScope_204_);
v___x_213_ = lean_obj_once(&l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__9, &l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__9_once, _init_l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___closed__9);
v___x_214_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_214_, 0, v___x_209_);
lean_ctor_set(v___x_214_, 1, v___x_210_);
lean_ctor_set(v___x_214_, 2, v___x_212_);
lean_ctor_set(v___x_214_, 3, v___x_213_);
v___x_215_ = lean_nat_mod(v_size_178_, v___x_207_);
v___x_216_ = lean_nat_dec_eq(v___x_215_, v___x_206_);
lean_dec(v___x_215_);
v___x_217_ = l___private_Init_Data_List_Notation_0__Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1_expandListLit(v_elems_177_, v_size_178_, v___x_216_, v___x_214_, v_a_169_, v_a_170_);
lean_dec_ref(v_elems_177_);
return v___x_217_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1___boxed(lean_object* v_x_218_, lean_object* v_a_219_, lean_object* v_a_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Lean___aux__Init__Data__List__Notation______macroRules__term_x5b___x5d__1(v_x_218_, v_a_219_, v_a_220_);
lean_dec_ref(v_a_219_);
return v_res_221_;
}
}
lean_object* runtime_initialize_Init_Notation(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_List_Notation(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Grind_Tactics(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_List_Notation(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_term_x5b___x5d = _init_l_term_x5b___x5d();
lean_mark_persistent(l_term_x5b___x5d);
l_term_x25_x5b___x7c___x5d = _init_l_term_x25_x5b___x7c___x5d();
lean_mark_persistent(l_term_x25_x5b___x7c___x5d);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Tactics(uint8_t builtin);
lean_object* initialize_Init_Notation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_List_Notation(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_List_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_List_Notation(builtin);
}
#ifdef __cplusplus
}
#endif
