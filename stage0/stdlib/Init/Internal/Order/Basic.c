// Lean compiler output
// Module: Init.Internal.Order.Basic
// Imports: public import Init.System.IO import all Init.Control.Except import all Init.Control.StateRef import all Init.Control.Option import all Init.System.ST import Init.ByCases
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Order_term___u2291___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term___u2291___00__closed__0;
static lean_once_cell_t l_Lean_Order_term___u2291___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term___u2291___00__closed__1;
static lean_once_cell_t l_Lean_Order_term___u2291___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term___u2291___00__closed__2;
static lean_once_cell_t l_Lean_Order_term___u2291___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term___u2291___00__closed__3;
static lean_once_cell_t l_Lean_Order_term___u2291___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term___u2291___00__closed__4;
static lean_once_cell_t l_Lean_Order_term___u2291___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term___u2291___00__closed__5;
static lean_once_cell_t l_Lean_Order_term___u2291___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term___u2291___00__closed__6;
static lean_once_cell_t l_Lean_Order_term___u2291___00__closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term___u2291___00__closed__7;
static lean_once_cell_t l_Lean_Order_term___u2291___00__closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term___u2291___00__closed__8;
static lean_once_cell_t l_Lean_Order_term___u2291___00__closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term___u2291___00__closed__9;
static lean_once_cell_t l_Lean_Order_term___u2291___00__closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term___u2291___00__closed__10;
static lean_once_cell_t l_Lean_Order_term___u2291___00__closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term___u2291___00__closed__11;
static lean_once_cell_t l_Lean_Order_term___u2291___00__closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term___u2291___00__closed__12;
LEAN_EXPORT lean_object* l_Lean_Order_term___u2291__;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__0;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__1;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__2;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__4;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__5;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__6;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__7;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__8;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__9;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__10;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__11;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__12;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__13;
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__0;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Order_term_u22a5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term_u22a5___closed__0;
static lean_once_cell_t l_Lean_Order_term_u22a5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term_u22a5___closed__1;
static lean_once_cell_t l_Lean_Order_term_u22a5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term_u22a5___closed__2;
static lean_once_cell_t l_Lean_Order_term_u22a5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term_u22a5___closed__3;
static lean_once_cell_t l_Lean_Order_term_u22a5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order_term_u22a5___closed__4;
LEAN_EXPORT lean_object* l_Lean_Order_term_u22a5;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__1;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__2;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__3;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__4;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__bot__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__bot__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instOrderPi(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instOrderPi___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPi(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPi___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePi(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePi___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderPProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instCCPO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instCCPO___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOption(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOption(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderExceptT___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderExceptT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOExceptT___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOExceptT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOptionT___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOptionT(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOptionT___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOptionT(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderReaderT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOReaderT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateRefT_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateRefT_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateT___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateT___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOESTOfNonempty(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Internal_Order_Basic_0__EST_bind_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Internal_Order_Basic_0__EST_bind_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOEIOOfNonempty(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOIO(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_ImplicationOrder_instOrder;
LEAN_EXPORT lean_object* l_Lean_Order_ImplicationOrder_instCompleteLattice;
LEAN_EXPORT lean_object* l_Lean_Order_ReverseImplicationOrder_instOrder;
LEAN_EXPORT lean_object* l_Lean_Order_ReverseImplicationOrder_instCompleteLattice;
LEAN_EXPORT lean_object* l_Lean_Order_Example_findF(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Order_term___u2291___00__closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Order_term___u2291___00__closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Order", 5, 5);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Order_term___u2291___00__closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("term_⊑_", 9, 7);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Order_term___u2291___00__closed__3(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_4_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__2, &l_Lean_Order_term___u2291___00__closed__2_once, _init_l_Lean_Order_term___u2291___00__closed__2);
v___x_5_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__1, &l_Lean_Order_term___u2291___00__closed__1_once, _init_l_Lean_Order_term___u2291___00__closed__1);
v___x_6_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__0, &l_Lean_Order_term___u2291___00__closed__0_once, _init_l_Lean_Order_term___u2291___00__closed__0);
v___x_7_ = l_Lean_Name_mkStr3(v___x_6_, v___x_5_, v___x_4_);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_Order_term___u2291___00__closed__4(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Order_term___u2291___00__closed__5(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__4, &l_Lean_Order_term___u2291___00__closed__4_once, _init_l_Lean_Order_term___u2291___00__closed__4);
v___x_10_ = l_Lean_Name_mkStr1(v___x_9_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Order_term___u2291___00__closed__6(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_mk_string_unchecked(" ⊑ ", 5, 3);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Order_term___u2291___00__closed__7(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_12_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__6, &l_Lean_Order_term___u2291___00__closed__6_once, _init_l_Lean_Order_term___u2291___00__closed__6);
v___x_13_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Order_term___u2291___00__closed__8(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_mk_string_unchecked("term", 4, 4);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Order_term___u2291___00__closed__9(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__8, &l_Lean_Order_term___u2291___00__closed__8_once, _init_l_Lean_Order_term___u2291___00__closed__8);
v___x_16_ = l_Lean_Name_mkStr1(v___x_15_);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_Order_term___u2291___00__closed__10(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_17_ = lean_unsigned_to_nat(51u);
v___x_18_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__9, &l_Lean_Order_term___u2291___00__closed__9_once, _init_l_Lean_Order_term___u2291___00__closed__9);
v___x_19_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
lean_ctor_set(v___x_19_, 1, v___x_17_);
return v___x_19_;
}
}
static lean_object* _init_l_Lean_Order_term___u2291___00__closed__11(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_20_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__10, &l_Lean_Order_term___u2291___00__closed__10_once, _init_l_Lean_Order_term___u2291___00__closed__10);
v___x_21_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__7, &l_Lean_Order_term___u2291___00__closed__7_once, _init_l_Lean_Order_term___u2291___00__closed__7);
v___x_22_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__5, &l_Lean_Order_term___u2291___00__closed__5_once, _init_l_Lean_Order_term___u2291___00__closed__5);
v___x_23_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
lean_ctor_set(v___x_23_, 1, v___x_21_);
lean_ctor_set(v___x_23_, 2, v___x_20_);
return v___x_23_;
}
}
static lean_object* _init_l_Lean_Order_term___u2291___00__closed__12(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_24_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__11, &l_Lean_Order_term___u2291___00__closed__11_once, _init_l_Lean_Order_term___u2291___00__closed__11);
v___x_25_ = lean_unsigned_to_nat(51u);
v___x_26_ = lean_unsigned_to_nat(50u);
v___x_27_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__3, &l_Lean_Order_term___u2291___00__closed__3_once, _init_l_Lean_Order_term___u2291___00__closed__3);
v___x_28_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_28_, 0, v___x_27_);
lean_ctor_set(v___x_28_, 1, v___x_26_);
lean_ctor_set(v___x_28_, 2, v___x_25_);
lean_ctor_set(v___x_28_, 3, v___x_24_);
return v___x_28_;
}
}
static lean_object* _init_l_Lean_Order_term___u2291__(void){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__12, &l_Lean_Order_term___u2291___00__closed__12_once, _init_l_Lean_Order_term___u2291___00__closed__12);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__0(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_30_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__1(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_31_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__2(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_mk_string_unchecked("app", 3, 3);
return v___x_32_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_33_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__2, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__2_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__2);
v___x_34_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__1, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__1_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__1);
v___x_35_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__0, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__0_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__0);
v___x_36_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__0, &l_Lean_Order_term___u2291___00__closed__0_once, _init_l_Lean_Order_term___u2291___00__closed__0);
v___x_37_ = l_Lean_Name_mkStr4(v___x_36_, v___x_35_, v___x_34_, v___x_33_);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__4(void){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lean_mk_string_unchecked("PartialOrder.rel", 16, 16);
return v___x_38_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__5(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__4, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__4_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__4);
v___x_40_ = l_String_toRawSubstring_x27(v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__6(void){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lean_mk_string_unchecked("PartialOrder", 12, 12);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__7(void){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lean_mk_string_unchecked("rel", 3, 3);
return v___x_42_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__8(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_43_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__7, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__7_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__7);
v___x_44_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__6, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__6_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__6);
v___x_45_ = l_Lean_Name_mkStr2(v___x_44_, v___x_43_);
return v___x_45_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__9(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_46_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__7, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__7_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__7);
v___x_47_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__6, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__6_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__6);
v___x_48_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__1, &l_Lean_Order_term___u2291___00__closed__1_once, _init_l_Lean_Order_term___u2291___00__closed__1);
v___x_49_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__0, &l_Lean_Order_term___u2291___00__closed__0_once, _init_l_Lean_Order_term___u2291___00__closed__0);
v___x_50_ = l_Lean_Name_mkStr4(v___x_49_, v___x_48_, v___x_47_, v___x_46_);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__10(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = lean_box(0);
v___x_52_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__9, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__9_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__9);
v___x_53_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
lean_ctor_set(v___x_53_, 1, v___x_51_);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__11(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_54_ = lean_box(0);
v___x_55_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__10, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__10_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__10);
v___x_56_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
lean_ctor_set(v___x_56_, 1, v___x_54_);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__12(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_57_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__13(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__12, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__12_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__12);
v___x_59_ = l_Lean_Name_mkStr1(v___x_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1(lean_object* v_x_60_, lean_object* v_a_61_, lean_object* v_a_62_){
_start:
{
lean_object* v___x_63_; uint8_t v___x_64_; 
v___x_63_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__3, &l_Lean_Order_term___u2291___00__closed__3_once, _init_l_Lean_Order_term___u2291___00__closed__3);
lean_inc(v_x_60_);
v___x_64_ = l_Lean_Syntax_isOfKind(v_x_60_, v___x_63_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; lean_object* v___x_66_; 
lean_dec(v_x_60_);
v___x_65_ = lean_box(1);
v___x_66_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set(v___x_66_, 1, v_a_62_);
return v___x_66_;
}
else
{
lean_object* v_quotContext_67_; lean_object* v_currMacroScope_68_; lean_object* v_ref_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; uint8_t v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v_quotContext_67_ = lean_ctor_get(v_a_61_, 1);
v_currMacroScope_68_ = lean_ctor_get(v_a_61_, 2);
v_ref_69_ = lean_ctor_get(v_a_61_, 5);
v___x_70_ = lean_unsigned_to_nat(0u);
v___x_71_ = l_Lean_Syntax_getArg(v_x_60_, v___x_70_);
v___x_72_ = lean_unsigned_to_nat(2u);
v___x_73_ = l_Lean_Syntax_getArg(v_x_60_, v___x_72_);
lean_dec(v_x_60_);
v___x_74_ = 0;
v___x_75_ = l_Lean_SourceInfo_fromRef(v_ref_69_, v___x_74_);
v___x_76_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3);
v___x_77_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__5, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__5_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__5);
v___x_78_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__8, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__8_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__8);
lean_inc(v_currMacroScope_68_);
lean_inc(v_quotContext_67_);
v___x_79_ = l_Lean_addMacroScope(v_quotContext_67_, v___x_78_, v_currMacroScope_68_);
v___x_80_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__11, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__11_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__11);
lean_inc_n(v___x_75_, 2);
v___x_81_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_81_, 0, v___x_75_);
lean_ctor_set(v___x_81_, 1, v___x_77_);
lean_ctor_set(v___x_81_, 2, v___x_79_);
lean_ctor_set(v___x_81_, 3, v___x_80_);
v___x_82_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__13, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__13_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__13);
v___x_83_ = l_Lean_Syntax_node2(v___x_75_, v___x_82_, v___x_71_, v___x_73_);
v___x_84_ = l_Lean_Syntax_node2(v___x_75_, v___x_76_, v___x_81_, v___x_83_);
v___x_85_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set(v___x_85_, 1, v_a_62_);
return v___x_85_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___boxed(lean_object* v_x_86_, lean_object* v_a_87_, lean_object* v_a_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1(v_x_86_, v_a_87_, v_a_88_);
lean_dec_ref(v_a_87_);
return v_res_89_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__0(void){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_90_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__1(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__0, &l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__0_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__0);
v___x_92_ = l_Lean_Name_mkStr1(v___x_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1(lean_object* v_x_93_, lean_object* v_a_94_, lean_object* v_a_95_){
_start:
{
lean_object* v___x_96_; uint8_t v___x_97_; 
v___x_96_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3);
lean_inc(v_x_93_);
v___x_97_ = l_Lean_Syntax_isOfKind(v_x_93_, v___x_96_);
if (v___x_97_ == 0)
{
lean_object* v___x_98_; lean_object* v___x_99_; 
lean_dec(v_x_93_);
v___x_98_ = lean_box(0);
v___x_99_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
lean_ctor_set(v___x_99_, 1, v_a_95_);
return v___x_99_;
}
else
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_100_ = lean_unsigned_to_nat(0u);
v___x_101_ = l_Lean_Syntax_getArg(v_x_93_, v___x_100_);
v___x_102_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__1, &l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__1_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__1);
lean_inc(v___x_101_);
v___x_103_ = l_Lean_Syntax_isOfKind(v___x_101_, v___x_102_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; lean_object* v___x_105_; 
lean_dec(v___x_101_);
lean_dec(v_x_93_);
v___x_104_ = lean_box(0);
v___x_105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v_a_95_);
return v___x_105_;
}
else
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_106_ = lean_unsigned_to_nat(1u);
v___x_107_ = l_Lean_Syntax_getArg(v_x_93_, v___x_106_);
lean_dec(v_x_93_);
v___x_108_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_107_);
v___x_109_ = l_Lean_Syntax_matchesNull(v___x_107_, v___x_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; lean_object* v___x_111_; 
lean_dec(v___x_107_);
lean_dec(v___x_101_);
v___x_110_ = lean_box(0);
v___x_111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set(v___x_111_, 1, v_a_95_);
return v___x_111_;
}
else
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v_ref_114_; uint8_t v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_112_ = l_Lean_Syntax_getArg(v___x_107_, v___x_100_);
v___x_113_ = l_Lean_Syntax_getArg(v___x_107_, v___x_106_);
lean_dec(v___x_107_);
v_ref_114_ = l_Lean_replaceRef(v___x_101_, v_a_94_);
lean_dec(v___x_101_);
v___x_115_ = 0;
v___x_116_ = l_Lean_SourceInfo_fromRef(v_ref_114_, v___x_115_);
lean_dec(v_ref_114_);
v___x_117_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__3, &l_Lean_Order_term___u2291___00__closed__3_once, _init_l_Lean_Order_term___u2291___00__closed__3);
v___x_118_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__6, &l_Lean_Order_term___u2291___00__closed__6_once, _init_l_Lean_Order_term___u2291___00__closed__6);
lean_inc(v___x_116_);
v___x_119_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_116_);
lean_ctor_set(v___x_119_, 1, v___x_118_);
v___x_120_ = l_Lean_Syntax_node3(v___x_116_, v___x_117_, v___x_112_, v___x_119_, v___x_113_);
v___x_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set(v___x_121_, 1, v_a_95_);
return v___x_121_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___boxed(lean_object* v_x_122_, lean_object* v_a_123_, lean_object* v_a_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1(v_x_122_, v_a_123_, v_a_124_);
lean_dec(v_a_123_);
return v_res_125_;
}
}
static lean_object* _init_l_Lean_Order_term_u22a5___closed__0(void){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = lean_mk_string_unchecked("term⊥", 7, 5);
return v___x_126_;
}
}
static lean_object* _init_l_Lean_Order_term_u22a5___closed__1(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_127_ = lean_obj_once(&l_Lean_Order_term_u22a5___closed__0, &l_Lean_Order_term_u22a5___closed__0_once, _init_l_Lean_Order_term_u22a5___closed__0);
v___x_128_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__1, &l_Lean_Order_term___u2291___00__closed__1_once, _init_l_Lean_Order_term___u2291___00__closed__1);
v___x_129_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__0, &l_Lean_Order_term___u2291___00__closed__0_once, _init_l_Lean_Order_term___u2291___00__closed__0);
v___x_130_ = l_Lean_Name_mkStr3(v___x_129_, v___x_128_, v___x_127_);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_Order_term_u22a5___closed__2(void){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = lean_mk_string_unchecked("⊥", 3, 1);
return v___x_131_;
}
}
static lean_object* _init_l_Lean_Order_term_u22a5___closed__3(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = lean_obj_once(&l_Lean_Order_term_u22a5___closed__2, &l_Lean_Order_term_u22a5___closed__2_once, _init_l_Lean_Order_term_u22a5___closed__2);
v___x_133_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
return v___x_133_;
}
}
static lean_object* _init_l_Lean_Order_term_u22a5___closed__4(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_134_ = lean_obj_once(&l_Lean_Order_term_u22a5___closed__3, &l_Lean_Order_term_u22a5___closed__3_once, _init_l_Lean_Order_term_u22a5___closed__3);
v___x_135_ = lean_unsigned_to_nat(1024u);
v___x_136_ = lean_obj_once(&l_Lean_Order_term_u22a5___closed__1, &l_Lean_Order_term_u22a5___closed__1_once, _init_l_Lean_Order_term_u22a5___closed__1);
v___x_137_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_137_, 0, v___x_136_);
lean_ctor_set(v___x_137_, 1, v___x_135_);
lean_ctor_set(v___x_137_, 2, v___x_134_);
return v___x_137_;
}
}
static lean_object* _init_l_Lean_Order_term_u22a5(void){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lean_obj_once(&l_Lean_Order_term_u22a5___closed__4, &l_Lean_Order_term_u22a5___closed__4_once, _init_l_Lean_Order_term_u22a5___closed__4);
return v___x_138_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0(void){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = lean_mk_string_unchecked("bot", 3, 3);
return v___x_139_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__1(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_140_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0);
v___x_141_ = l_String_toRawSubstring_x27(v___x_140_);
return v___x_141_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__2(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_142_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0);
v___x_143_ = l_Lean_Name_mkStr1(v___x_142_);
return v___x_143_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__3(void){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_144_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0);
v___x_145_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__1, &l_Lean_Order_term___u2291___00__closed__1_once, _init_l_Lean_Order_term___u2291___00__closed__1);
v___x_146_ = lean_obj_once(&l_Lean_Order_term___u2291___00__closed__0, &l_Lean_Order_term___u2291___00__closed__0_once, _init_l_Lean_Order_term___u2291___00__closed__0);
v___x_147_ = l_Lean_Name_mkStr3(v___x_146_, v___x_145_, v___x_144_);
return v___x_147_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__4(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = lean_box(0);
v___x_149_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__3, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__3_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__3);
v___x_150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v___x_148_);
return v___x_150_;
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__5(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_151_ = lean_box(0);
v___x_152_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__4, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__4_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__4);
v___x_153_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
lean_ctor_set(v___x_153_, 1, v___x_151_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1(lean_object* v_x_154_, lean_object* v_a_155_, lean_object* v_a_156_){
_start:
{
lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_157_ = lean_obj_once(&l_Lean_Order_term_u22a5___closed__1, &l_Lean_Order_term_u22a5___closed__1_once, _init_l_Lean_Order_term_u22a5___closed__1);
v___x_158_ = l_Lean_Syntax_isOfKind(v_x_154_, v___x_157_);
if (v___x_158_ == 0)
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_box(1);
v___x_160_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
lean_ctor_set(v___x_160_, 1, v_a_156_);
return v___x_160_;
}
else
{
lean_object* v_quotContext_161_; lean_object* v_currMacroScope_162_; lean_object* v_ref_163_; uint8_t v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v_quotContext_161_ = lean_ctor_get(v_a_155_, 1);
v_currMacroScope_162_ = lean_ctor_get(v_a_155_, 2);
v_ref_163_ = lean_ctor_get(v_a_155_, 5);
v___x_164_ = 0;
v___x_165_ = l_Lean_SourceInfo_fromRef(v_ref_163_, v___x_164_);
v___x_166_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__1, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__1_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__1);
v___x_167_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__2, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__2_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__2);
lean_inc(v_currMacroScope_162_);
lean_inc(v_quotContext_161_);
v___x_168_ = l_Lean_addMacroScope(v_quotContext_161_, v___x_167_, v_currMacroScope_162_);
v___x_169_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__5, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__5_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__5);
v___x_170_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_170_, 0, v___x_165_);
lean_ctor_set(v___x_170_, 1, v___x_166_);
lean_ctor_set(v___x_170_, 2, v___x_168_);
lean_ctor_set(v___x_170_, 3, v___x_169_);
v___x_171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
lean_ctor_set(v___x_171_, 1, v_a_156_);
return v___x_171_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___boxed(lean_object* v_x_172_, lean_object* v_a_173_, lean_object* v_a_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1(v_x_172_, v_a_173_, v_a_174_);
lean_dec_ref(v_a_173_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__bot__1(lean_object* v_x_176_, lean_object* v_a_177_, lean_object* v_a_178_){
_start:
{
lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_179_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__1, &l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__1_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__1);
lean_inc(v_x_176_);
v___x_180_ = l_Lean_Syntax_isOfKind(v_x_176_, v___x_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; lean_object* v___x_182_; 
lean_dec(v_x_176_);
v___x_181_ = lean_box(0);
v___x_182_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
lean_ctor_set(v___x_182_, 1, v_a_178_);
return v___x_182_;
}
else
{
lean_object* v_ref_183_; uint8_t v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v_ref_183_ = l_Lean_replaceRef(v_x_176_, v_a_177_);
lean_dec(v_x_176_);
v___x_184_ = 0;
v___x_185_ = l_Lean_SourceInfo_fromRef(v_ref_183_, v___x_184_);
lean_dec(v_ref_183_);
v___x_186_ = lean_obj_once(&l_Lean_Order_term_u22a5___closed__1, &l_Lean_Order_term_u22a5___closed__1_once, _init_l_Lean_Order_term_u22a5___closed__1);
v___x_187_ = lean_obj_once(&l_Lean_Order_term_u22a5___closed__2, &l_Lean_Order_term_u22a5___closed__2_once, _init_l_Lean_Order_term_u22a5___closed__2);
lean_inc(v___x_185_);
v___x_188_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_185_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
v___x_189_ = l_Lean_Syntax_node1(v___x_185_, v___x_186_, v___x_188_);
v___x_190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_190_, 0, v___x_189_);
lean_ctor_set(v___x_190_, 1, v_a_178_);
return v___x_190_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__bot__1___boxed(lean_object* v_x_191_, lean_object* v_a_192_, lean_object* v_a_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__bot__1(v_x_191_, v_a_192_, v_a_193_);
lean_dec(v_a_192_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instOrderPi(lean_object* v_00_u03b1_195_, lean_object* v_00_u03b2_196_, lean_object* v_inst_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = lean_box(0);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instOrderPi___boxed(lean_object* v_00_u03b1_199_, lean_object* v_00_u03b2_200_, lean_object* v_inst_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Lean_Order_instOrderPi(v_00_u03b1_199_, v_00_u03b2_200_, v_inst_201_);
lean_dec_ref(v_inst_201_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPi(lean_object* v_00_u03b1_203_, lean_object* v_00_u03b2_204_, lean_object* v_inst_205_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = lean_box(0);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPi___boxed(lean_object* v_00_u03b1_207_, lean_object* v_00_u03b2_208_, lean_object* v_inst_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lean_Order_instCCPOPi(v_00_u03b1_207_, v_00_u03b2_208_, v_inst_209_);
lean_dec_ref(v_inst_209_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePi(lean_object* v_00_u03b1_211_, lean_object* v_00_u03b2_212_, lean_object* v_inst_213_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_box(0);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePi___boxed(lean_object* v_00_u03b1_215_, lean_object* v_00_u03b2_216_, lean_object* v_inst_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l_Lean_Order_instCompleteLatticePi(v_00_u03b1_215_, v_00_u03b2_216_, v_inst_217_);
lean_dec_ref(v_inst_217_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderPProd(lean_object* v_00_u03b1_219_, lean_object* v_00_u03b2_220_, lean_object* v_inst_221_, lean_object* v_inst_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = lean_box(0);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPProd(lean_object* v_00_u03b1_224_, lean_object* v_00_u03b2_225_, lean_object* v_inst_226_, lean_object* v_inst_227_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = lean_box(0);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePProd(lean_object* v_00_u03b1_229_, lean_object* v_00_u03b2_230_, lean_object* v_inst_231_, lean_object* v_inst_232_){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = lean_box(0);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instOrder(lean_object* v_00_u03b1_234_, lean_object* v_b_235_){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = lean_box(0);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instOrder___boxed(lean_object* v_00_u03b1_237_, lean_object* v_b_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_Order_FlatOrder_instOrder(v_00_u03b1_237_, v_b_238_);
lean_dec(v_b_238_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instCCPO(lean_object* v_00_u03b1_240_, lean_object* v_b_241_){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = lean_box(0);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instCCPO___boxed(lean_object* v_00_u03b1_243_, lean_object* v_b_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Lean_Order_FlatOrder_instCCPO(v_00_u03b1_243_, v_b_244_);
lean_dec(v_b_244_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOption(lean_object* v_00_u03b1_246_){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = lean_box(0);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOption(lean_object* v_00_u03b1_248_){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = lean_box(0);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderExceptT___redArg(lean_object* v_inst_250_){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = lean_apply_1(v_inst_250_, lean_box(0));
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderExceptT(lean_object* v_m_252_, lean_object* v_00_u03b5_253_, lean_object* v_00_u03b1_254_, lean_object* v_inst_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = lean_apply_1(v_inst_255_, lean_box(0));
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOExceptT___redArg(lean_object* v_inst_257_){
_start:
{
lean_object* v___x_258_; 
v___x_258_ = lean_apply_1(v_inst_257_, lean_box(0));
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOExceptT(lean_object* v_m_259_, lean_object* v_00_u03b5_260_, lean_object* v_00_u03b1_261_, lean_object* v_inst_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = lean_apply_1(v_inst_262_, lean_box(0));
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOptionT___redArg(lean_object* v_inst_264_){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = lean_apply_1(v_inst_264_, lean_box(0));
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOptionT(lean_object* v_m_266_, lean_object* v_00_u03b1_267_, lean_object* v_inst_268_){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = lean_apply_1(v_inst_268_, lean_box(0));
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOptionT___redArg(lean_object* v_inst_270_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = lean_apply_1(v_inst_270_, lean_box(0));
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOptionT(lean_object* v_m_272_, lean_object* v_00_u03b1_273_, lean_object* v_inst_274_){
_start:
{
lean_object* v___x_275_; 
v___x_275_ = lean_apply_1(v_inst_274_, lean_box(0));
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderReaderT(lean_object* v_m_276_, lean_object* v_00_u03c1_277_, lean_object* v_00_u03b1_278_, lean_object* v_inst_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = lean_box(0);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOReaderT(lean_object* v_m_281_, lean_object* v_00_u03c1_282_, lean_object* v_00_u03b1_283_, lean_object* v_inst_284_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = lean_box(0);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateRefT_x27(lean_object* v_m_286_, lean_object* v_00_u03c9_287_, lean_object* v_00_u03c3_288_, lean_object* v_00_u03b1_289_, lean_object* v_inst_290_){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = lean_box(0);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateRefT_x27(lean_object* v_m_292_, lean_object* v_00_u03c9_293_, lean_object* v_00_u03c3_294_, lean_object* v_00_u03b1_295_, lean_object* v_inst_296_){
_start:
{
lean_object* v___x_297_; 
v___x_297_ = lean_box(0);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateT(lean_object* v_m_298_, lean_object* v_00_u03c3_299_, lean_object* v_00_u03b1_300_, lean_object* v_inst_301_){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = lean_box(0);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateT___boxed(lean_object* v_m_303_, lean_object* v_00_u03c3_304_, lean_object* v_00_u03b1_305_, lean_object* v_inst_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_Order_instPartialOrderStateT(v_m_303_, v_00_u03c3_304_, v_00_u03b1_305_, v_inst_306_);
lean_dec_ref(v_inst_306_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateT(lean_object* v_m_308_, lean_object* v_00_u03c3_309_, lean_object* v_00_u03b1_310_, lean_object* v_inst_311_){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = lean_box(0);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateT___boxed(lean_object* v_m_313_, lean_object* v_00_u03c3_314_, lean_object* v_00_u03b1_315_, lean_object* v_inst_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Lean_Order_instCCPOStateT(v_m_313_, v_00_u03c3_314_, v_00_u03b1_315_, v_inst_316_);
lean_dec_ref(v_inst_316_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOESTOfNonempty(lean_object* v_00_u03b5_318_, lean_object* v_00_u03c3_319_, lean_object* v_00_u03b1_320_, lean_object* v_inst_321_){
_start:
{
lean_object* v___x_322_; 
v___x_322_ = lean_box(0);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Internal_Order_Basic_0__EST_bind_match__1_splitter___redArg(lean_object* v_x_323_, lean_object* v_h__1_324_, lean_object* v_h__2_325_){
_start:
{
if (lean_obj_tag(v_x_323_) == 0)
{
lean_object* v_a_326_; lean_object* v___x_327_; 
lean_dec(v_h__2_325_);
v_a_326_ = lean_ctor_get(v_x_323_, 0);
lean_inc(v_a_326_);
lean_dec_ref(v_x_323_);
v___x_327_ = lean_apply_2(v_h__1_324_, v_a_326_, lean_box(0));
return v___x_327_;
}
else
{
lean_object* v_a_328_; lean_object* v___x_329_; 
lean_dec(v_h__1_324_);
v_a_328_ = lean_ctor_get(v_x_323_, 0);
lean_inc(v_a_328_);
lean_dec_ref(v_x_323_);
v___x_329_ = lean_apply_2(v_h__2_325_, v_a_328_, lean_box(0));
return v___x_329_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Internal_Order_Basic_0__EST_bind_match__1_splitter(lean_object* v_00_u03b5_330_, lean_object* v_00_u03c3_331_, lean_object* v_00_u03b1_332_, lean_object* v_motive_333_, lean_object* v_x_334_, lean_object* v_h__1_335_, lean_object* v_h__2_336_){
_start:
{
if (lean_obj_tag(v_x_334_) == 0)
{
lean_object* v_a_337_; lean_object* v___x_338_; 
lean_dec(v_h__2_336_);
v_a_337_ = lean_ctor_get(v_x_334_, 0);
lean_inc(v_a_337_);
lean_dec_ref(v_x_334_);
v___x_338_ = lean_apply_2(v_h__1_335_, v_a_337_, lean_box(0));
return v___x_338_;
}
else
{
lean_object* v_a_339_; lean_object* v___x_340_; 
lean_dec(v_h__1_335_);
v_a_339_ = lean_ctor_get(v_x_334_, 0);
lean_inc(v_a_339_);
lean_dec_ref(v_x_334_);
v___x_340_ = lean_apply_2(v_h__2_336_, v_a_339_, lean_box(0));
return v___x_340_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOEIOOfNonempty(lean_object* v_00_u03b5_341_, lean_object* v_00_u03b1_342_, lean_object* v_inst_343_){
_start:
{
lean_object* v___x_344_; 
v___x_344_ = lean_box(0);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOIO(lean_object* v_00_u03b1_345_){
_start:
{
lean_object* v___x_346_; 
v___x_346_ = lean_box(0);
return v___x_346_;
}
}
static lean_object* _init_l_Lean_Order_ImplicationOrder_instOrder(void){
_start:
{
lean_object* v___x_347_; 
v___x_347_ = lean_box(0);
return v___x_347_;
}
}
static lean_object* _init_l_Lean_Order_ImplicationOrder_instCompleteLattice(void){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = lean_box(0);
return v___x_348_;
}
}
static lean_object* _init_l_Lean_Order_ReverseImplicationOrder_instOrder(void){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = lean_box(0);
return v___x_349_;
}
}
static lean_object* _init_l_Lean_Order_ReverseImplicationOrder_instCompleteLattice(void){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = lean_box(0);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_Example_findF(lean_object* v_P_351_, lean_object* v_rec_352_, lean_object* v_x_353_){
_start:
{
lean_object* v___x_354_; uint8_t v___x_355_; 
lean_inc(v_x_353_);
v___x_354_ = lean_apply_1(v_P_351_, v_x_353_);
v___x_355_ = lean_unbox(v___x_354_);
if (v___x_355_ == 0)
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_356_ = lean_unsigned_to_nat(1u);
v___x_357_ = lean_nat_add(v_x_353_, v___x_356_);
lean_dec(v_x_353_);
v___x_358_ = lean_apply_1(v_rec_352_, v___x_357_);
return v___x_358_;
}
else
{
lean_object* v___x_359_; 
lean_dec_ref(v_rec_352_);
v___x_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_359_, 0, v_x_353_);
return v___x_359_;
}
}
}
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_Except(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_StateRef(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_Option(uint8_t builtin);
lean_object* runtime_initialize_Init_System_ST(uint8_t builtin);
lean_object* runtime_initialize_Init_ByCases(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Internal_Order_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Except(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_StateRef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Option(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_ST(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Order_ImplicationOrder_instOrder = _init_l_Lean_Order_ImplicationOrder_instOrder();
lean_mark_persistent(l_Lean_Order_ImplicationOrder_instOrder);
l_Lean_Order_ImplicationOrder_instCompleteLattice = _init_l_Lean_Order_ImplicationOrder_instCompleteLattice();
lean_mark_persistent(l_Lean_Order_ImplicationOrder_instCompleteLattice);
l_Lean_Order_ReverseImplicationOrder_instOrder = _init_l_Lean_Order_ReverseImplicationOrder_instOrder();
lean_mark_persistent(l_Lean_Order_ReverseImplicationOrder_instOrder);
l_Lean_Order_ReverseImplicationOrder_instCompleteLattice = _init_l_Lean_Order_ReverseImplicationOrder_instCompleteLattice();
lean_mark_persistent(l_Lean_Order_ReverseImplicationOrder_instCompleteLattice);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Internal_Order_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Order_term___u2291__ = _init_l_Lean_Order_term___u2291__();
lean_mark_persistent(l_Lean_Order_term___u2291__);
l_Lean_Order_term_u22a5 = _init_l_Lean_Order_term_u22a5();
lean_mark_persistent(l_Lean_Order_term_u22a5);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Init_Control_Except(uint8_t builtin);
lean_object* initialize_Init_Control_StateRef(uint8_t builtin);
lean_object* initialize_Init_Control_Option(uint8_t builtin);
lean_object* initialize_Init_System_ST(uint8_t builtin);
lean_object* initialize_Init_ByCases(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Internal_Order_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Except(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_StateRef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Option(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_ST(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Internal_Order_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
