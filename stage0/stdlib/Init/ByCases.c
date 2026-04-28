// Lean compiler output
// Module: Init.ByCases
// Imports: public meta import Init.Grind.Tactics public import Init.Grind.Tactics import Init.SimpLemmas
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
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__0;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__1;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__2;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__3;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__4;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__5;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__6;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__7;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__8;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__9;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__10;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__11;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__12;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__13;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__14;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__15;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__16;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__17;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__18;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__19;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__20;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__21;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__22;
static lean_once_cell_t l_tacticBy__cases___x3a___00__closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_tacticBy__cases___x3a___00__closed__23;
LEAN_EXPORT lean_object* l_tacticBy__cases___x3a__;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__0;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__1;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__2;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__3;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__4;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__5;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__6;
LEAN_EXPORT lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__2;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__3;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__4;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__5;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__6;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__7;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__8;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__9;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__10;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__11;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__12;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__13;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__14;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__15;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__16;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__17;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__18;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__19;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__20;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__21;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__22;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__23;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__24;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__25;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__26;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__27;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__28;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__29;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__30;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__31;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__32;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__33;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__34;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__35;
static lean_once_cell_t l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__36;
LEAN_EXPORT lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("tacticBy_cases_:_", 17, 17);
return v___x_1_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__0, &l_tacticBy__cases___x3a___00__closed__0_once, _init_l_tacticBy__cases___x3a___00__closed__0);
v___x_3_ = l_Lean_Name_mkStr1(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__2(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_4_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__3(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__2, &l_tacticBy__cases___x3a___00__closed__2_once, _init_l_tacticBy__cases___x3a___00__closed__2);
v___x_6_ = l_Lean_Name_mkStr1(v___x_5_);
return v___x_6_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__4(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_mk_string_unchecked("by_cases ", 9, 9);
return v___x_7_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__5(void){
_start:
{
uint8_t v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_8_ = 0;
v___x_9_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__4, &l_tacticBy__cases___x3a___00__closed__4_once, _init_l_tacticBy__cases___x3a___00__closed__4);
v___x_10_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_10_, 0, v___x_9_);
lean_ctor_set_uint8(v___x_10_, sizeof(void*)*1, v___x_8_);
return v___x_10_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__6(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_mk_string_unchecked("optional", 8, 8);
return v___x_11_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__7(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_12_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__6, &l_tacticBy__cases___x3a___00__closed__6_once, _init_l_tacticBy__cases___x3a___00__closed__6);
v___x_13_ = l_Lean_Name_mkStr1(v___x_12_);
return v___x_13_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__8(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_mk_string_unchecked("atomic", 6, 6);
return v___x_14_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__9(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__8, &l_tacticBy__cases___x3a___00__closed__8_once, _init_l_tacticBy__cases___x3a___00__closed__8);
v___x_16_ = l_Lean_Name_mkStr1(v___x_15_);
return v___x_16_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__10(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_17_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__11(void){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_18_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__10, &l_tacticBy__cases___x3a___00__closed__10_once, _init_l_tacticBy__cases___x3a___00__closed__10);
v___x_19_ = l_Lean_Name_mkStr1(v___x_18_);
return v___x_19_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__12(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__11, &l_tacticBy__cases___x3a___00__closed__11_once, _init_l_tacticBy__cases___x3a___00__closed__11);
v___x_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
return v___x_21_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__13(void){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = lean_mk_string_unchecked(" : ", 3, 3);
return v___x_22_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__14(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_23_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__13, &l_tacticBy__cases___x3a___00__closed__13_once, _init_l_tacticBy__cases___x3a___00__closed__13);
v___x_24_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
return v___x_24_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__15(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_25_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__14, &l_tacticBy__cases___x3a___00__closed__14_once, _init_l_tacticBy__cases___x3a___00__closed__14);
v___x_26_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__12, &l_tacticBy__cases___x3a___00__closed__12_once, _init_l_tacticBy__cases___x3a___00__closed__12);
v___x_27_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__3, &l_tacticBy__cases___x3a___00__closed__3_once, _init_l_tacticBy__cases___x3a___00__closed__3);
v___x_28_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_28_, 0, v___x_27_);
lean_ctor_set(v___x_28_, 1, v___x_26_);
lean_ctor_set(v___x_28_, 2, v___x_25_);
return v___x_28_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__16(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__15, &l_tacticBy__cases___x3a___00__closed__15_once, _init_l_tacticBy__cases___x3a___00__closed__15);
v___x_30_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__9, &l_tacticBy__cases___x3a___00__closed__9_once, _init_l_tacticBy__cases___x3a___00__closed__9);
v___x_31_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
lean_ctor_set(v___x_31_, 1, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__17(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_32_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__16, &l_tacticBy__cases___x3a___00__closed__16_once, _init_l_tacticBy__cases___x3a___00__closed__16);
v___x_33_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__7, &l_tacticBy__cases___x3a___00__closed__7_once, _init_l_tacticBy__cases___x3a___00__closed__7);
v___x_34_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_34_, 0, v___x_33_);
lean_ctor_set(v___x_34_, 1, v___x_32_);
return v___x_34_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__18(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_35_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__17, &l_tacticBy__cases___x3a___00__closed__17_once, _init_l_tacticBy__cases___x3a___00__closed__17);
v___x_36_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__5, &l_tacticBy__cases___x3a___00__closed__5_once, _init_l_tacticBy__cases___x3a___00__closed__5);
v___x_37_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__3, &l_tacticBy__cases___x3a___00__closed__3_once, _init_l_tacticBy__cases___x3a___00__closed__3);
v___x_38_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v___x_36_);
lean_ctor_set(v___x_38_, 2, v___x_35_);
return v___x_38_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__19(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_mk_string_unchecked("term", 4, 4);
return v___x_39_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__20(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__19, &l_tacticBy__cases___x3a___00__closed__19_once, _init_l_tacticBy__cases___x3a___00__closed__19);
v___x_41_ = l_Lean_Name_mkStr1(v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__21(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = lean_unsigned_to_nat(0u);
v___x_43_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__20, &l_tacticBy__cases___x3a___00__closed__20_once, _init_l_tacticBy__cases___x3a___00__closed__20);
v___x_44_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
lean_ctor_set(v___x_44_, 1, v___x_42_);
return v___x_44_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__22(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_45_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__21, &l_tacticBy__cases___x3a___00__closed__21_once, _init_l_tacticBy__cases___x3a___00__closed__21);
v___x_46_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__18, &l_tacticBy__cases___x3a___00__closed__18_once, _init_l_tacticBy__cases___x3a___00__closed__18);
v___x_47_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__3, &l_tacticBy__cases___x3a___00__closed__3_once, _init_l_tacticBy__cases___x3a___00__closed__3);
v___x_48_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v___x_46_);
lean_ctor_set(v___x_48_, 2, v___x_45_);
return v___x_48_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a___00__closed__23(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_49_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__22, &l_tacticBy__cases___x3a___00__closed__22_once, _init_l_tacticBy__cases___x3a___00__closed__22);
v___x_50_ = lean_unsigned_to_nat(1022u);
v___x_51_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__1, &l_tacticBy__cases___x3a___00__closed__1_once, _init_l_tacticBy__cases___x3a___00__closed__1);
v___x_52_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
lean_ctor_set(v___x_52_, 1, v___x_50_);
lean_ctor_set(v___x_52_, 2, v___x_49_);
return v___x_52_;
}
}
static lean_object* _init_l_tacticBy__cases___x3a__(void){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__23, &l_tacticBy__cases___x3a___00__closed__23_once, _init_l_tacticBy__cases___x3a___00__closed__23);
return v___x_53_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__0(void){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lean_mk_string_unchecked("by_cases", 8, 8);
return v___x_54_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__1(void){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_55_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__2(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__1, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__1_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__1);
v___x_57_ = l_Lean_Name_mkStr1(v___x_56_);
return v___x_57_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__3(void){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = lean_mk_string_unchecked("h", 1, 1);
return v___x_58_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__4(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__3, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__3_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__3);
v___x_60_ = l_String_toRawSubstring_x27(v___x_59_);
return v___x_60_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__5(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__3, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__3_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__3);
v___x_62_ = l_Lean_Name_mkStr1(v___x_61_);
return v___x_62_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__6(void){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = lean_mk_string_unchecked(":", 1, 1);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1(lean_object* v_x_64_, lean_object* v_a_65_, lean_object* v_a_66_){
_start:
{
lean_object* v___x_67_; uint8_t v___x_68_; 
v___x_67_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__1, &l_tacticBy__cases___x3a___00__closed__1_once, _init_l_tacticBy__cases___x3a___00__closed__1);
lean_inc(v_x_64_);
v___x_68_ = l_Lean_Syntax_isOfKind(v_x_64_, v___x_67_);
if (v___x_68_ == 0)
{
lean_object* v___x_69_; lean_object* v___x_70_; 
lean_dec(v_x_64_);
v___x_69_ = lean_box(1);
v___x_70_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v_a_66_);
return v___x_70_;
}
else
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; uint8_t v___x_74_; 
v___x_71_ = lean_unsigned_to_nat(0u);
v___x_72_ = lean_unsigned_to_nat(1u);
v___x_73_ = l_Lean_Syntax_getArg(v_x_64_, v___x_72_);
v___x_74_ = l_Lean_Syntax_matchesNull(v___x_73_, v___x_71_);
if (v___x_74_ == 0)
{
lean_object* v___x_75_; lean_object* v___x_76_; 
lean_dec(v_x_64_);
v___x_75_ = lean_box(1);
v___x_76_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
lean_ctor_set(v___x_76_, 1, v_a_66_);
return v___x_76_;
}
else
{
lean_object* v_quotContext_77_; lean_object* v_currMacroScope_78_; lean_object* v_ref_79_; lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v_quotContext_77_ = lean_ctor_get(v_a_65_, 1);
v_currMacroScope_78_ = lean_ctor_get(v_a_65_, 2);
v_ref_79_ = lean_ctor_get(v_a_65_, 5);
v___x_80_ = lean_unsigned_to_nat(2u);
v___x_81_ = l_Lean_Syntax_getArg(v_x_64_, v___x_80_);
lean_dec(v_x_64_);
v___x_82_ = 0;
v___x_83_ = l_Lean_SourceInfo_fromRef(v_ref_79_, v___x_82_);
v___x_84_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__0, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__0_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__0);
lean_inc_n(v___x_83_, 4);
v___x_85_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_83_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__2, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__2_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__2);
v___x_87_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__4, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__4_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__4);
v___x_88_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__5, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__5_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__5);
lean_inc(v_currMacroScope_78_);
lean_inc(v_quotContext_77_);
v___x_89_ = l_Lean_addMacroScope(v_quotContext_77_, v___x_88_, v_currMacroScope_78_);
v___x_90_ = lean_box(0);
v___x_91_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_91_, 0, v___x_83_);
lean_ctor_set(v___x_91_, 1, v___x_87_);
lean_ctor_set(v___x_91_, 2, v___x_89_);
lean_ctor_set(v___x_91_, 3, v___x_90_);
v___x_92_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__6, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__6_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__6);
v___x_93_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_83_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = l_Lean_Syntax_node2(v___x_83_, v___x_86_, v___x_91_, v___x_93_);
v___x_95_ = l_Lean_Syntax_node3(v___x_83_, v___x_67_, v___x_85_, v___x_94_, v___x_81_);
v___x_96_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
lean_ctor_set(v___x_96_, 1, v_a_66_);
return v___x_96_;
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___boxed(lean_object* v_x_97_, lean_object* v_a_98_, lean_object* v_a_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1(v_x_97_, v_a_98_, v_a_99_);
lean_dec_ref(v_a_98_);
return v_res_100_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0(void){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_101_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1(void){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_102_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__2(void){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_103_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__3(void){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = lean_mk_string_unchecked("open", 4, 4);
return v___x_104_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__4(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_105_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__3, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__3_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__3);
v___x_106_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__2, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__2_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__2);
v___x_107_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1);
v___x_108_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0);
v___x_109_ = l_Lean_Name_mkStr4(v___x_108_, v___x_107_, v___x_106_, v___x_105_);
return v___x_109_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__5(void){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = lean_mk_string_unchecked("Command", 7, 7);
return v___x_110_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__6(void){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = lean_mk_string_unchecked("openSimple", 10, 10);
return v___x_111_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__7(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_112_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__6, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__6_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__6);
v___x_113_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__5, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__5_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__5);
v___x_114_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1);
v___x_115_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0);
v___x_116_ = l_Lean_Name_mkStr4(v___x_115_, v___x_114_, v___x_113_, v___x_112_);
return v___x_116_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__8(void){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = lean_mk_string_unchecked("Classical", 9, 9);
return v___x_117_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__9(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_118_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__8, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__8_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__8);
v___x_119_ = l_String_toRawSubstring_x27(v___x_118_);
return v___x_119_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__10(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__8, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__8_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__8);
v___x_121_ = l_Lean_Name_mkStr1(v___x_120_);
return v___x_121_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__11(void){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__10, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__10_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__10);
v___x_123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
return v___x_123_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__12(void){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_124_ = lean_box(0);
v___x_125_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__11, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__11_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__11);
v___x_126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v___x_124_);
return v___x_126_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__13(void){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lean_mk_string_unchecked("in", 2, 2);
return v___x_127_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__14(void){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = lean_mk_string_unchecked("tacticSeq", 9, 9);
return v___x_128_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__15(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_129_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__14, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__14_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__14);
v___x_130_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__2, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__2_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__2);
v___x_131_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1);
v___x_132_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0);
v___x_133_ = l_Lean_Name_mkStr4(v___x_132_, v___x_131_, v___x_130_, v___x_129_);
return v___x_133_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__16(void){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return v___x_134_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__17(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_135_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__16, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__16_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__16);
v___x_136_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__2, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__2_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__2);
v___x_137_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1);
v___x_138_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0);
v___x_139_ = l_Lean_Name_mkStr4(v___x_138_, v___x_137_, v___x_136_, v___x_135_);
return v___x_139_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__18(void){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = lean_mk_string_unchecked("refine", 6, 6);
return v___x_140_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__19(void){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_141_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__18, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__18_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__18);
v___x_142_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__2, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__2_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__2);
v___x_143_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1);
v___x_144_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0);
v___x_145_ = l_Lean_Name_mkStr4(v___x_144_, v___x_143_, v___x_142_, v___x_141_);
return v___x_145_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__20(void){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lean_mk_string_unchecked("termDepIfThenElse", 17, 17);
return v___x_146_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__21(void){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__20, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__20_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__20);
v___x_148_ = l_Lean_Name_mkStr1(v___x_147_);
return v___x_148_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__22(void){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lean_mk_string_unchecked("if", 2, 2);
return v___x_149_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__23(void){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = lean_mk_string_unchecked("binderIdent", 11, 11);
return v___x_150_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__24(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_151_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__23, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__23_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__23);
v___x_152_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0);
v___x_153_ = l_Lean_Name_mkStr2(v___x_152_, v___x_151_);
return v___x_153_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__25(void){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lean_mk_string_unchecked("then", 4, 4);
return v___x_154_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__26(void){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_155_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__27(void){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = lean_mk_string_unchecked("syntheticHole", 13, 13);
return v___x_156_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__28(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_157_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__27, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__27_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__27);
v___x_158_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__26, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__26_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__26);
v___x_159_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__1);
v___x_160_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__0);
v___x_161_ = l_Lean_Name_mkStr4(v___x_160_, v___x_159_, v___x_158_, v___x_157_);
return v___x_161_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__29(void){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = lean_mk_string_unchecked("\?", 1, 1);
return v___x_162_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__30(void){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = lean_mk_string_unchecked("pos", 3, 3);
return v___x_163_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__31(void){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__30, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__30_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__30);
v___x_165_ = l_String_toRawSubstring_x27(v___x_164_);
return v___x_165_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__32(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__30, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__30_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__30);
v___x_167_ = l_Lean_Name_mkStr1(v___x_166_);
return v___x_167_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__33(void){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lean_mk_string_unchecked("else", 4, 4);
return v___x_168_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__34(void){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = lean_mk_string_unchecked("neg", 3, 3);
return v___x_169_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__35(void){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__34, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__34_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__34);
v___x_171_ = l_String_toRawSubstring_x27(v___x_170_);
return v___x_171_;
}
}
static lean_object* _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__36(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__34, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__34_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__34);
v___x_173_ = l_Lean_Name_mkStr1(v___x_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2(lean_object* v_x_174_, lean_object* v_a_175_, lean_object* v_a_176_){
_start:
{
lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_177_ = lean_obj_once(&l_tacticBy__cases___x3a___00__closed__1, &l_tacticBy__cases___x3a___00__closed__1_once, _init_l_tacticBy__cases___x3a___00__closed__1);
lean_inc(v_x_174_);
v___x_178_ = l_Lean_Syntax_isOfKind(v_x_174_, v___x_177_);
if (v___x_178_ == 0)
{
lean_object* v___x_179_; lean_object* v___x_180_; 
lean_dec(v_x_174_);
v___x_179_ = lean_box(1);
v___x_180_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
lean_ctor_set(v___x_180_, 1, v_a_176_);
return v___x_180_;
}
else
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_181_ = lean_unsigned_to_nat(1u);
v___x_182_ = l_Lean_Syntax_getArg(v_x_174_, v___x_181_);
v___x_183_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_182_);
v___x_184_ = l_Lean_Syntax_matchesNull(v___x_182_, v___x_183_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; lean_object* v___x_186_; 
lean_dec(v___x_182_);
lean_dec(v_x_174_);
v___x_185_ = lean_box(1);
v___x_186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
lean_ctor_set(v___x_186_, 1, v_a_176_);
return v___x_186_;
}
else
{
lean_object* v_quotContext_187_; lean_object* v_currMacroScope_188_; lean_object* v_ref_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v_quotContext_187_ = lean_ctor_get(v_a_175_, 1);
v_currMacroScope_188_ = lean_ctor_get(v_a_175_, 2);
v_ref_189_ = lean_ctor_get(v_a_175_, 5);
v___x_190_ = lean_unsigned_to_nat(0u);
v___x_191_ = l_Lean_Syntax_getArg(v___x_182_, v___x_190_);
lean_dec(v___x_182_);
v___x_192_ = l_Lean_Syntax_getArg(v_x_174_, v___x_183_);
lean_dec(v_x_174_);
v___x_193_ = 0;
v___x_194_ = l_Lean_SourceInfo_fromRef(v_ref_189_, v___x_193_);
v___x_195_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__3, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__3_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__3);
v___x_196_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__4, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__4_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__4);
lean_inc_n(v___x_194_, 21);
v___x_197_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_197_, 0, v___x_194_);
lean_ctor_set(v___x_197_, 1, v___x_195_);
v___x_198_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__7, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__7_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__7);
v___x_199_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__2, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__2_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__2);
v___x_200_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__9, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__9_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__9);
v___x_201_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__10, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__10_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__10);
lean_inc_n(v_currMacroScope_188_, 3);
lean_inc_n(v_quotContext_187_, 3);
v___x_202_ = l_Lean_addMacroScope(v_quotContext_187_, v___x_201_, v_currMacroScope_188_);
v___x_203_ = lean_box(0);
v___x_204_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__12, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__12_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__12);
v___x_205_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_205_, 0, v___x_194_);
lean_ctor_set(v___x_205_, 1, v___x_200_);
lean_ctor_set(v___x_205_, 2, v___x_202_);
lean_ctor_set(v___x_205_, 3, v___x_204_);
v___x_206_ = l_Lean_Syntax_node1(v___x_194_, v___x_199_, v___x_205_);
v___x_207_ = l_Lean_Syntax_node1(v___x_194_, v___x_198_, v___x_206_);
v___x_208_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__13, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__13_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__13);
v___x_209_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_194_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__15, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__15_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__15);
v___x_211_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__17, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__17_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__17);
v___x_212_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__18, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__18_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__18);
v___x_213_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__19, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__19_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__19);
v___x_214_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_194_);
lean_ctor_set(v___x_214_, 1, v___x_212_);
v___x_215_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__21, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__21_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__21);
v___x_216_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__22, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__22_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__22);
v___x_217_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_194_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__24, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__24_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__24);
v___x_219_ = l_Lean_Syntax_node1(v___x_194_, v___x_218_, v___x_191_);
v___x_220_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__6, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__6_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____1___closed__6);
v___x_221_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_194_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
v___x_222_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__25, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__25_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__25);
v___x_223_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_194_);
lean_ctor_set(v___x_223_, 1, v___x_222_);
v___x_224_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__28, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__28_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__28);
v___x_225_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__29, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__29_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__29);
v___x_226_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_194_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___x_227_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__31, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__31_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__31);
v___x_228_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__32, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__32_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__32);
v___x_229_ = l_Lean_addMacroScope(v_quotContext_187_, v___x_228_, v_currMacroScope_188_);
v___x_230_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_230_, 0, v___x_194_);
lean_ctor_set(v___x_230_, 1, v___x_227_);
lean_ctor_set(v___x_230_, 2, v___x_229_);
lean_ctor_set(v___x_230_, 3, v___x_203_);
lean_inc_ref(v___x_226_);
v___x_231_ = l_Lean_Syntax_node2(v___x_194_, v___x_224_, v___x_226_, v___x_230_);
v___x_232_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__33, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__33_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__33);
v___x_233_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_194_);
lean_ctor_set(v___x_233_, 1, v___x_232_);
v___x_234_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__35, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__35_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__35);
v___x_235_ = lean_obj_once(&l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__36, &l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__36_once, _init_l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___closed__36);
v___x_236_ = l_Lean_addMacroScope(v_quotContext_187_, v___x_235_, v_currMacroScope_188_);
v___x_237_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_237_, 0, v___x_194_);
lean_ctor_set(v___x_237_, 1, v___x_234_);
lean_ctor_set(v___x_237_, 2, v___x_236_);
lean_ctor_set(v___x_237_, 3, v___x_203_);
v___x_238_ = l_Lean_Syntax_node2(v___x_194_, v___x_224_, v___x_226_, v___x_237_);
v___x_239_ = l_Lean_Syntax_node8(v___x_194_, v___x_215_, v___x_217_, v___x_219_, v___x_221_, v___x_192_, v___x_223_, v___x_231_, v___x_233_, v___x_238_);
v___x_240_ = l_Lean_Syntax_node2(v___x_194_, v___x_213_, v___x_214_, v___x_239_);
v___x_241_ = l_Lean_Syntax_node1(v___x_194_, v___x_199_, v___x_240_);
v___x_242_ = l_Lean_Syntax_node1(v___x_194_, v___x_211_, v___x_241_);
v___x_243_ = l_Lean_Syntax_node1(v___x_194_, v___x_210_, v___x_242_);
v___x_244_ = l_Lean_Syntax_node4(v___x_194_, v___x_196_, v___x_197_, v___x_207_, v___x_209_, v___x_243_);
v___x_245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
lean_ctor_set(v___x_245_, 1, v_a_176_);
return v___x_245_;
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2___boxed(lean_object* v_x_246_, lean_object* v_a_247_, lean_object* v_a_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l___aux__Init__ByCases______macroRules__tacticBy__cases___x3a____2(v_x_246_, v_a_247_, v_a_248_);
lean_dec_ref(v_a_247_);
return v_res_249_;
}
}
lean_object* runtime_initialize_Init_Grind_Tactics(uint8_t builtin);
lean_object* runtime_initialize_Init_SimpLemmas(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_ByCases(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_SimpLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Grind_Tactics(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_ByCases(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_tacticBy__cases___x3a__ = _init_l_tacticBy__cases___x3a__();
lean_mark_persistent(l_tacticBy__cases___x3a__);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Tactics(uint8_t builtin);
lean_object* initialize_Init_Grind_Tactics(uint8_t builtin);
lean_object* initialize_Init_SimpLemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_ByCases(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_SimpLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_ByCases(builtin);
}
#ifdef __cplusplus
}
#endif
