// Lean compiler output
// Module: Lake.Config.Glob
// Imports: public import Lean.Util.Path import Init.Data.ToString.Name import Lean.Data.Name
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_modToFilePath(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_forEachModuleInDir___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_singleton(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_one_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_one_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_submodules_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_submodules_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_andSubmodules_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_andSubmodules_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instInhabitedGlob_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedGlob_default___closed__0;
LEAN_EXPORT lean_object* l_Lake_instInhabitedGlob_default;
LEAN_EXPORT lean_object* l_Lake_instInhabitedGlob;
static lean_once_cell_t l_Lake_instReprGlob_repr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprGlob_repr___closed__0;
static lean_once_cell_t l_Lake_instReprGlob_repr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprGlob_repr___closed__1;
static lean_once_cell_t l_Lake_instReprGlob_repr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprGlob_repr___closed__2;
static lean_once_cell_t l_Lake_instReprGlob_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprGlob_repr___closed__3;
static lean_once_cell_t l_Lake_instReprGlob_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprGlob_repr___closed__4;
static lean_once_cell_t l_Lake_instReprGlob_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprGlob_repr___closed__5;
static lean_once_cell_t l_Lake_instReprGlob_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprGlob_repr___closed__6;
static lean_once_cell_t l_Lake_instReprGlob_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprGlob_repr___closed__7;
static lean_once_cell_t l_Lake_instReprGlob_repr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprGlob_repr___closed__8;
static lean_once_cell_t l_Lake_instReprGlob_repr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprGlob_repr___closed__9;
static lean_once_cell_t l_Lake_instReprGlob_repr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprGlob_repr___closed__10;
LEAN_EXPORT lean_object* l_Lake_instReprGlob_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprGlob_repr___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instReprGlob___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprGlob___closed__0;
LEAN_EXPORT lean_object* l_Lake_instReprGlob;
LEAN_EXPORT uint8_t l_Lake_instDecidableEqGlob_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqGlob_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqGlob(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqGlob___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeNameGlob___lam__0(lean_object*);
static lean_once_cell_t l_Lake_instCoeNameGlob___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instCoeNameGlob___closed__0;
LEAN_EXPORT lean_object* l_Lake_instCoeNameGlob;
static lean_once_cell_t l_Lake_instCoeGlobArray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instCoeGlobArray___closed__0;
LEAN_EXPORT lean_object* l_Lake_instCoeGlobArray;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__0;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__1;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__2;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__3;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__4;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__5;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__6;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__7;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__8;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__9;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__10;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__11;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__12;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__13;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__14;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__15;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__16;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__17;
static lean_once_cell_t l_Lake_term_____x2e_x2a___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2a___closed__18;
LEAN_EXPORT lean_object* l_Lake_term_____x2e_x2a;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__0;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__1;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__2;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__3;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__5;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__6;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__8;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__9;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__11;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__12;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__13;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__14;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__15;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__16;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__17;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_term_____x2e_x2b___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2b___closed__0;
static lean_once_cell_t l_Lake_term_____x2e_x2b___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2b___closed__1;
static lean_once_cell_t l_Lake_term_____x2e_x2b___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2b___closed__2;
static lean_once_cell_t l_Lake_term_____x2e_x2b___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2b___closed__3;
static lean_once_cell_t l_Lake_term_____x2e_x2b___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2b___closed__4;
static lean_once_cell_t l_Lake_term_____x2e_x2b___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_term_____x2e_x2b___closed__5;
LEAN_EXPORT lean_object* l_Lake_term_____x2e_x2b;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__0;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__1;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__2;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__3;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__5;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__6;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__7;
static lean_once_cell_t l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__8;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_toString(lean_object*);
static lean_once_cell_t l_Lake_Glob_instToString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Glob_instToString___closed__0;
LEAN_EXPORT lean_object* l_Lake_Glob_instToString;
LEAN_EXPORT uint8_t l_Lake_Glob_matches(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_matches___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0;
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Glob_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lake_Glob_ctorIdx(v_x_5_);
lean_dec_ref(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
lean_object* v_a_9_; lean_object* v___x_10_; 
v_a_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_a_9_);
lean_dec_ref(v_t_7_);
v___x_10_ = lean_apply_1(v_k_8_, v_a_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, lean_object* v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lake_Glob_ctorElim___redArg(v_t_13_, v_k_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_ctorElim___boxed(lean_object* v_motive_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lake_Glob_ctorElim(v_motive_17_, v_ctorIdx_18_, v_t_19_, v_h_20_, v_k_21_);
lean_dec(v_ctorIdx_18_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_one_elim___redArg(lean_object* v_t_23_, lean_object* v_one_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lake_Glob_ctorElim___redArg(v_t_23_, v_one_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_one_elim(lean_object* v_motive_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_one_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lake_Glob_ctorElim___redArg(v_t_27_, v_one_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_submodules_elim___redArg(lean_object* v_t_31_, lean_object* v_submodules_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lake_Glob_ctorElim___redArg(v_t_31_, v_submodules_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_submodules_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_submodules_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lake_Glob_ctorElim___redArg(v_t_35_, v_submodules_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_andSubmodules_elim___redArg(lean_object* v_t_39_, lean_object* v_andSubmodules_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lake_Glob_ctorElim___redArg(v_t_39_, v_andSubmodules_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_andSubmodules_elim(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_andSubmodules_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lake_Glob_ctorElim___redArg(v_t_43_, v_andSubmodules_45_);
return v___x_46_;
}
}
static lean_object* _init_l_Lake_instInhabitedGlob_default___closed__0(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = lean_box(0);
v___x_48_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
return v___x_48_;
}
}
static lean_object* _init_l_Lake_instInhabitedGlob_default(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_obj_once(&l_Lake_instInhabitedGlob_default___closed__0, &l_Lake_instInhabitedGlob_default___closed__0_once, _init_l_Lake_instInhabitedGlob_default___closed__0);
return v___x_49_;
}
}
static lean_object* _init_l_Lake_instInhabitedGlob(void){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lake_instInhabitedGlob_default;
return v___x_50_;
}
}
static lean_object* _init_l_Lake_instReprGlob_repr___closed__0(void){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = lean_mk_string_unchecked("Lake.Glob.one", 13, 13);
return v___x_51_;
}
}
static lean_object* _init_l_Lake_instReprGlob_repr___closed__1(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__0, &l_Lake_instReprGlob_repr___closed__0_once, _init_l_Lake_instReprGlob_repr___closed__0);
v___x_53_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
return v___x_53_;
}
}
static lean_object* _init_l_Lake_instReprGlob_repr___closed__2(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_54_ = lean_box(1);
v___x_55_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__1, &l_Lake_instReprGlob_repr___closed__1_once, _init_l_Lake_instReprGlob_repr___closed__1);
v___x_56_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
lean_ctor_set(v___x_56_, 1, v___x_54_);
return v___x_56_;
}
}
static lean_object* _init_l_Lake_instReprGlob_repr___closed__3(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_unsigned_to_nat(2u);
v___x_58_ = lean_nat_to_int(v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_l_Lake_instReprGlob_repr___closed__4(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_unsigned_to_nat(1u);
v___x_60_ = lean_nat_to_int(v___x_59_);
return v___x_60_;
}
}
static lean_object* _init_l_Lake_instReprGlob_repr___closed__5(void){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_mk_string_unchecked("Lake.Glob.submodules", 20, 20);
return v___x_61_;
}
}
static lean_object* _init_l_Lake_instReprGlob_repr___closed__6(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__5, &l_Lake_instReprGlob_repr___closed__5_once, _init_l_Lake_instReprGlob_repr___closed__5);
v___x_63_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
return v___x_63_;
}
}
static lean_object* _init_l_Lake_instReprGlob_repr___closed__7(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = lean_box(1);
v___x_65_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__6, &l_Lake_instReprGlob_repr___closed__6_once, _init_l_Lake_instReprGlob_repr___closed__6);
v___x_66_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set(v___x_66_, 1, v___x_64_);
return v___x_66_;
}
}
static lean_object* _init_l_Lake_instReprGlob_repr___closed__8(void){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = lean_mk_string_unchecked("Lake.Glob.andSubmodules", 23, 23);
return v___x_67_;
}
}
static lean_object* _init_l_Lake_instReprGlob_repr___closed__9(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__8, &l_Lake_instReprGlob_repr___closed__8_once, _init_l_Lake_instReprGlob_repr___closed__8);
v___x_69_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
return v___x_69_;
}
}
static lean_object* _init_l_Lake_instReprGlob_repr___closed__10(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = lean_box(1);
v___x_71_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__9, &l_Lake_instReprGlob_repr___closed__9_once, _init_l_Lake_instReprGlob_repr___closed__9);
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
lean_ctor_set(v___x_72_, 1, v___x_70_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprGlob_repr(lean_object* v_x_73_, lean_object* v_prec_74_){
_start:
{
switch(lean_obj_tag(v_x_73_))
{
case 0:
{
lean_object* v_a_75_; lean_object* v___y_77_; lean_object* v___x_86_; uint8_t v___x_87_; 
v_a_75_ = lean_ctor_get(v_x_73_, 0);
lean_inc(v_a_75_);
lean_dec_ref(v_x_73_);
v___x_86_ = lean_unsigned_to_nat(1024u);
v___x_87_ = lean_nat_dec_le(v___x_86_, v_prec_74_);
if (v___x_87_ == 0)
{
lean_object* v___x_88_; 
v___x_88_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__3, &l_Lake_instReprGlob_repr___closed__3_once, _init_l_Lake_instReprGlob_repr___closed__3);
v___y_77_ = v___x_88_;
goto v___jp_76_;
}
else
{
lean_object* v___x_89_; 
v___x_89_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__4, &l_Lake_instReprGlob_repr___closed__4_once, _init_l_Lake_instReprGlob_repr___closed__4);
v___y_77_ = v___x_89_;
goto v___jp_76_;
}
v___jp_76_:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; uint8_t v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_78_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__2, &l_Lake_instReprGlob_repr___closed__2_once, _init_l_Lake_instReprGlob_repr___closed__2);
v___x_79_ = lean_unsigned_to_nat(1024u);
v___x_80_ = l_Lean_Name_reprPrec(v_a_75_, v___x_79_);
v___x_81_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_78_);
lean_ctor_set(v___x_81_, 1, v___x_80_);
lean_inc(v___y_77_);
v___x_82_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_82_, 0, v___y_77_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
v___x_83_ = 0;
v___x_84_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_84_, 0, v___x_82_);
lean_ctor_set_uint8(v___x_84_, sizeof(void*)*1, v___x_83_);
v___x_85_ = l_Repr_addAppParen(v___x_84_, v_prec_74_);
return v___x_85_;
}
}
case 1:
{
lean_object* v_a_90_; lean_object* v___y_92_; lean_object* v___x_101_; uint8_t v___x_102_; 
v_a_90_ = lean_ctor_get(v_x_73_, 0);
lean_inc(v_a_90_);
lean_dec_ref(v_x_73_);
v___x_101_ = lean_unsigned_to_nat(1024u);
v___x_102_ = lean_nat_dec_le(v___x_101_, v_prec_74_);
if (v___x_102_ == 0)
{
lean_object* v___x_103_; 
v___x_103_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__3, &l_Lake_instReprGlob_repr___closed__3_once, _init_l_Lake_instReprGlob_repr___closed__3);
v___y_92_ = v___x_103_;
goto v___jp_91_;
}
else
{
lean_object* v___x_104_; 
v___x_104_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__4, &l_Lake_instReprGlob_repr___closed__4_once, _init_l_Lake_instReprGlob_repr___closed__4);
v___y_92_ = v___x_104_;
goto v___jp_91_;
}
v___jp_91_:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; uint8_t v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_93_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__7, &l_Lake_instReprGlob_repr___closed__7_once, _init_l_Lake_instReprGlob_repr___closed__7);
v___x_94_ = lean_unsigned_to_nat(1024u);
v___x_95_ = l_Lean_Name_reprPrec(v_a_90_, v___x_94_);
v___x_96_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_93_);
lean_ctor_set(v___x_96_, 1, v___x_95_);
lean_inc(v___y_92_);
v___x_97_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_97_, 0, v___y_92_);
lean_ctor_set(v___x_97_, 1, v___x_96_);
v___x_98_ = 0;
v___x_99_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_99_, 0, v___x_97_);
lean_ctor_set_uint8(v___x_99_, sizeof(void*)*1, v___x_98_);
v___x_100_ = l_Repr_addAppParen(v___x_99_, v_prec_74_);
return v___x_100_;
}
}
default: 
{
lean_object* v_a_105_; lean_object* v___y_107_; lean_object* v___x_116_; uint8_t v___x_117_; 
v_a_105_ = lean_ctor_get(v_x_73_, 0);
lean_inc(v_a_105_);
lean_dec_ref(v_x_73_);
v___x_116_ = lean_unsigned_to_nat(1024u);
v___x_117_ = lean_nat_dec_le(v___x_116_, v_prec_74_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; 
v___x_118_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__3, &l_Lake_instReprGlob_repr___closed__3_once, _init_l_Lake_instReprGlob_repr___closed__3);
v___y_107_ = v___x_118_;
goto v___jp_106_;
}
else
{
lean_object* v___x_119_; 
v___x_119_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__4, &l_Lake_instReprGlob_repr___closed__4_once, _init_l_Lake_instReprGlob_repr___closed__4);
v___y_107_ = v___x_119_;
goto v___jp_106_;
}
v___jp_106_:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; uint8_t v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_108_ = lean_obj_once(&l_Lake_instReprGlob_repr___closed__10, &l_Lake_instReprGlob_repr___closed__10_once, _init_l_Lake_instReprGlob_repr___closed__10);
v___x_109_ = lean_unsigned_to_nat(1024u);
v___x_110_ = l_Lean_Name_reprPrec(v_a_105_, v___x_109_);
v___x_111_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_108_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
lean_inc(v___y_107_);
v___x_112_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_112_, 0, v___y_107_);
lean_ctor_set(v___x_112_, 1, v___x_111_);
v___x_113_ = 0;
v___x_114_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_114_, 0, v___x_112_);
lean_ctor_set_uint8(v___x_114_, sizeof(void*)*1, v___x_113_);
v___x_115_ = l_Repr_addAppParen(v___x_114_, v_prec_74_);
return v___x_115_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprGlob_repr___boxed(lean_object* v_x_120_, lean_object* v_prec_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lake_instReprGlob_repr(v_x_120_, v_prec_121_);
lean_dec(v_prec_121_);
return v_res_122_;
}
}
static lean_object* _init_l_Lake_instReprGlob___closed__0(void){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = lean_alloc_closure((void*)(l_Lake_instReprGlob_repr___boxed), 2, 0);
return v___x_123_;
}
}
static lean_object* _init_l_Lake_instReprGlob(void){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = lean_obj_once(&l_Lake_instReprGlob___closed__0, &l_Lake_instReprGlob___closed__0_once, _init_l_Lake_instReprGlob___closed__0);
return v___x_124_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqGlob_decEq(lean_object* v_x_125_, lean_object* v_x_126_){
_start:
{
switch(lean_obj_tag(v_x_125_))
{
case 0:
{
if (lean_obj_tag(v_x_126_) == 0)
{
lean_object* v_a_127_; lean_object* v_a_128_; uint8_t v___x_129_; 
v_a_127_ = lean_ctor_get(v_x_125_, 0);
v_a_128_ = lean_ctor_get(v_x_126_, 0);
v___x_129_ = lean_name_eq(v_a_127_, v_a_128_);
return v___x_129_;
}
else
{
uint8_t v___x_130_; 
v___x_130_ = 0;
return v___x_130_;
}
}
case 1:
{
if (lean_obj_tag(v_x_126_) == 1)
{
lean_object* v_a_131_; lean_object* v_a_132_; uint8_t v___x_133_; 
v_a_131_ = lean_ctor_get(v_x_125_, 0);
v_a_132_ = lean_ctor_get(v_x_126_, 0);
v___x_133_ = lean_name_eq(v_a_131_, v_a_132_);
return v___x_133_;
}
else
{
uint8_t v___x_134_; 
v___x_134_ = 0;
return v___x_134_;
}
}
default: 
{
if (lean_obj_tag(v_x_126_) == 2)
{
lean_object* v_a_135_; lean_object* v_a_136_; uint8_t v___x_137_; 
v_a_135_ = lean_ctor_get(v_x_125_, 0);
v_a_136_ = lean_ctor_get(v_x_126_, 0);
v___x_137_ = lean_name_eq(v_a_135_, v_a_136_);
return v___x_137_;
}
else
{
uint8_t v___x_138_; 
v___x_138_ = 0;
return v___x_138_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqGlob_decEq___boxed(lean_object* v_x_139_, lean_object* v_x_140_){
_start:
{
uint8_t v_res_141_; lean_object* v_r_142_; 
v_res_141_ = l_Lake_instDecidableEqGlob_decEq(v_x_139_, v_x_140_);
lean_dec_ref(v_x_140_);
lean_dec_ref(v_x_139_);
v_r_142_ = lean_box(v_res_141_);
return v_r_142_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqGlob(lean_object* v_x_143_, lean_object* v_x_144_){
_start:
{
uint8_t v___x_145_; 
v___x_145_ = l_Lake_instDecidableEqGlob_decEq(v_x_143_, v_x_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqGlob___boxed(lean_object* v_x_146_, lean_object* v_x_147_){
_start:
{
uint8_t v_res_148_; lean_object* v_r_149_; 
v_res_148_ = l_Lake_instDecidableEqGlob(v_x_146_, v_x_147_);
lean_dec_ref(v_x_147_);
lean_dec_ref(v_x_146_);
v_r_149_ = lean_box(v_res_148_);
return v_r_149_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeNameGlob___lam__0(lean_object* v_a_150_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_151_, 0, v_a_150_);
return v___x_151_;
}
}
static lean_object* _init_l_Lake_instCoeNameGlob___closed__0(void){
_start:
{
lean_object* v___f_152_; 
v___f_152_ = lean_alloc_closure((void*)(l_Lake_instCoeNameGlob___lam__0), 1, 0);
return v___f_152_;
}
}
static lean_object* _init_l_Lake_instCoeNameGlob(void){
_start:
{
lean_object* v___f_153_; 
v___f_153_ = lean_obj_once(&l_Lake_instCoeNameGlob___closed__0, &l_Lake_instCoeNameGlob___closed__0_once, _init_l_Lake_instCoeNameGlob___closed__0);
return v___f_153_;
}
}
static lean_object* _init_l_Lake_instCoeGlobArray___closed__0(void){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lean_alloc_closure((void*)(l_Array_singleton), 2, 1);
lean_closure_set(v___x_154_, 0, lean_box(0));
return v___x_154_;
}
}
static lean_object* _init_l_Lake_instCoeGlobArray(void){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lean_obj_once(&l_Lake_instCoeGlobArray___closed__0, &l_Lake_instCoeGlobArray___closed__0_once, _init_l_Lake_instCoeGlobArray___closed__0);
return v___x_155_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__0(void){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = lean_mk_string_unchecked("Lake", 4, 4);
return v___x_156_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__1(void){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lean_mk_string_unchecked("term__.*", 8, 8);
return v___x_157_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__2(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_158_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__1, &l_Lake_term_____x2e_x2a___closed__1_once, _init_l_Lake_term_____x2e_x2a___closed__1);
v___x_159_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__0, &l_Lake_term_____x2e_x2a___closed__0_once, _init_l_Lake_term_____x2e_x2a___closed__0);
v___x_160_ = l_Lean_Name_mkStr2(v___x_159_, v___x_158_);
return v___x_160_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__3(void){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_161_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__4(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__3, &l_Lake_term_____x2e_x2a___closed__3_once, _init_l_Lake_term_____x2e_x2a___closed__3);
v___x_163_ = l_Lean_Name_mkStr1(v___x_162_);
return v___x_163_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__5(void){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lean_mk_string_unchecked("name", 4, 4);
return v___x_164_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__6(void){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__5, &l_Lake_term_____x2e_x2a___closed__5_once, _init_l_Lake_term_____x2e_x2a___closed__5);
v___x_166_ = l_Lean_Name_mkStr1(v___x_165_);
return v___x_166_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__7(void){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_167_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__6, &l_Lake_term_____x2e_x2a___closed__6_once, _init_l_Lake_term_____x2e_x2a___closed__6);
v___x_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
return v___x_168_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__8(void){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = lean_mk_string_unchecked("group", 5, 5);
return v___x_169_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__9(void){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__8, &l_Lake_term_____x2e_x2a___closed__8_once, _init_l_Lake_term_____x2e_x2a___closed__8);
v___x_171_ = l_Lean_Name_mkStr1(v___x_170_);
return v___x_171_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__10(void){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = lean_mk_string_unchecked("noWs", 4, 4);
return v___x_172_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__11(void){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_173_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__10, &l_Lake_term_____x2e_x2a___closed__10_once, _init_l_Lake_term_____x2e_x2a___closed__10);
v___x_174_ = l_Lean_Name_mkStr1(v___x_173_);
return v___x_174_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__12(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__11, &l_Lake_term_____x2e_x2a___closed__11_once, _init_l_Lake_term_____x2e_x2a___closed__11);
v___x_176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
return v___x_176_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__13(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_177_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__12, &l_Lake_term_____x2e_x2a___closed__12_once, _init_l_Lake_term_____x2e_x2a___closed__12);
v___x_178_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__9, &l_Lake_term_____x2e_x2a___closed__9_once, _init_l_Lake_term_____x2e_x2a___closed__9);
v___x_179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_178_);
lean_ctor_set(v___x_179_, 1, v___x_177_);
return v___x_179_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__14(void){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_180_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__13, &l_Lake_term_____x2e_x2a___closed__13_once, _init_l_Lake_term_____x2e_x2a___closed__13);
v___x_181_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__7, &l_Lake_term_____x2e_x2a___closed__7_once, _init_l_Lake_term_____x2e_x2a___closed__7);
v___x_182_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__4, &l_Lake_term_____x2e_x2a___closed__4_once, _init_l_Lake_term_____x2e_x2a___closed__4);
v___x_183_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
lean_ctor_set(v___x_183_, 1, v___x_181_);
lean_ctor_set(v___x_183_, 2, v___x_180_);
return v___x_183_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__15(void){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = lean_mk_string_unchecked(".*", 2, 2);
return v___x_184_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__16(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__15, &l_Lake_term_____x2e_x2a___closed__15_once, _init_l_Lake_term_____x2e_x2a___closed__15);
v___x_186_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
return v___x_186_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__17(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_187_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__16, &l_Lake_term_____x2e_x2a___closed__16_once, _init_l_Lake_term_____x2e_x2a___closed__16);
v___x_188_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__14, &l_Lake_term_____x2e_x2a___closed__14_once, _init_l_Lake_term_____x2e_x2a___closed__14);
v___x_189_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__4, &l_Lake_term_____x2e_x2a___closed__4_once, _init_l_Lake_term_____x2e_x2a___closed__4);
v___x_190_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_190_, 0, v___x_189_);
lean_ctor_set(v___x_190_, 1, v___x_188_);
lean_ctor_set(v___x_190_, 2, v___x_187_);
return v___x_190_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a___closed__18(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_191_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__17, &l_Lake_term_____x2e_x2a___closed__17_once, _init_l_Lake_term_____x2e_x2a___closed__17);
v___x_192_ = lean_unsigned_to_nat(1024u);
v___x_193_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__2, &l_Lake_term_____x2e_x2a___closed__2_once, _init_l_Lake_term_____x2e_x2a___closed__2);
v___x_194_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
lean_ctor_set(v___x_194_, 1, v___x_192_);
lean_ctor_set(v___x_194_, 2, v___x_191_);
return v___x_194_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2a(void){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__18, &l_Lake_term_____x2e_x2a___closed__18_once, _init_l_Lake_term_____x2e_x2a___closed__18);
return v___x_195_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__0(void){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_196_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__1(void){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_197_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__2(void){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_198_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__3(void){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = lean_mk_string_unchecked("app", 3, 3);
return v___x_199_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4(void){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_200_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__3, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__3_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__3);
v___x_201_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__2, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__2_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__2);
v___x_202_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__1, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__1_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__1);
v___x_203_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__0, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__0_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__0);
v___x_204_ = l_Lean_Name_mkStr4(v___x_203_, v___x_202_, v___x_201_, v___x_200_);
return v___x_204_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__5(void){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = lean_mk_string_unchecked("Glob.andSubmodules", 18, 18);
return v___x_205_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__6(void){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_206_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__5, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__5_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__5);
v___x_207_ = l_String_toRawSubstring_x27(v___x_206_);
return v___x_207_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7(void){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = lean_mk_string_unchecked("Glob", 4, 4);
return v___x_208_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__8(void){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = lean_mk_string_unchecked("andSubmodules", 13, 13);
return v___x_209_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__9(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_210_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__8, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__8_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__8);
v___x_211_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7);
v___x_212_ = l_Lean_Name_mkStr2(v___x_211_, v___x_210_);
return v___x_212_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10(void){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_213_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__8, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__8_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__8);
v___x_214_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7);
v___x_215_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__0, &l_Lake_term_____x2e_x2a___closed__0_once, _init_l_Lake_term_____x2e_x2a___closed__0);
v___x_216_ = l_Lean_Name_mkStr3(v___x_215_, v___x_214_, v___x_213_);
return v___x_216_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__11(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_217_ = lean_box(0);
v___x_218_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10);
v___x_219_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
lean_ctor_set(v___x_219_, 1, v___x_217_);
return v___x_219_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__12(void){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__10);
v___x_221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
return v___x_221_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__13(void){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_222_ = lean_box(0);
v___x_223_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__12, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__12_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__12);
v___x_224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
lean_ctor_set(v___x_224_, 1, v___x_222_);
return v___x_224_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__14(void){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_225_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__13, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__13_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__13);
v___x_226_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__11, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__11_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__11);
v___x_227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
lean_ctor_set(v___x_227_, 1, v___x_225_);
return v___x_227_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__15(void){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_228_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__16(void){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__15, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__15_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__15);
v___x_230_ = l_Lean_Name_mkStr1(v___x_229_);
return v___x_230_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__17(void){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = lean_mk_string_unchecked("quotedName", 10, 10);
return v___x_231_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_232_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__17, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__17_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__17);
v___x_233_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__2, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__2_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__2);
v___x_234_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__1, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__1_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__1);
v___x_235_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__0, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__0_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__0);
v___x_236_ = l_Lean_Name_mkStr4(v___x_235_, v___x_234_, v___x_233_, v___x_232_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1(lean_object* v_x_237_, lean_object* v_a_238_, lean_object* v_a_239_){
_start:
{
lean_object* v___x_240_; uint8_t v___x_241_; 
v___x_240_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__2, &l_Lake_term_____x2e_x2a___closed__2_once, _init_l_Lake_term_____x2e_x2a___closed__2);
lean_inc(v_x_237_);
v___x_241_ = l_Lean_Syntax_isOfKind(v_x_237_, v___x_240_);
if (v___x_241_ == 0)
{
lean_object* v___x_242_; lean_object* v___x_243_; 
lean_dec(v_x_237_);
v___x_242_ = lean_box(1);
v___x_243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
lean_ctor_set(v___x_243_, 1, v_a_239_);
return v___x_243_;
}
else
{
lean_object* v_quotContext_244_; lean_object* v_currMacroScope_245_; lean_object* v_ref_246_; lean_object* v___x_247_; lean_object* v___x_248_; uint8_t v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v_quotContext_244_ = lean_ctor_get(v_a_238_, 1);
v_currMacroScope_245_ = lean_ctor_get(v_a_238_, 2);
v_ref_246_ = lean_ctor_get(v_a_238_, 5);
v___x_247_ = lean_unsigned_to_nat(0u);
v___x_248_ = l_Lean_Syntax_getArg(v_x_237_, v___x_247_);
lean_dec(v_x_237_);
v___x_249_ = 0;
v___x_250_ = l_Lean_SourceInfo_fromRef(v_ref_246_, v___x_249_);
v___x_251_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4);
v___x_252_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__6, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__6_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__6);
v___x_253_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__9, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__9_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__9);
lean_inc(v_currMacroScope_245_);
lean_inc(v_quotContext_244_);
v___x_254_ = l_Lean_addMacroScope(v_quotContext_244_, v___x_253_, v_currMacroScope_245_);
v___x_255_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__14, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__14_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__14);
lean_inc_n(v___x_250_, 2);
v___x_256_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_256_, 0, v___x_250_);
lean_ctor_set(v___x_256_, 1, v___x_252_);
lean_ctor_set(v___x_256_, 2, v___x_254_);
lean_ctor_set(v___x_256_, 3, v___x_255_);
v___x_257_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__16, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__16_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__16);
v___x_258_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18);
v___x_259_ = lean_unsigned_to_nat(1u);
v___x_260_ = lean_mk_empty_array_with_capacity(v___x_259_);
v___x_261_ = lean_array_push(v___x_260_, v___x_248_);
v___x_262_ = lean_box(2);
v___x_263_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
lean_ctor_set(v___x_263_, 1, v___x_258_);
lean_ctor_set(v___x_263_, 2, v___x_261_);
v___x_264_ = l_Lean_Syntax_node1(v___x_250_, v___x_257_, v___x_263_);
v___x_265_ = l_Lean_Syntax_node2(v___x_250_, v___x_251_, v___x_256_, v___x_264_);
v___x_266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_266_, 0, v___x_265_);
lean_ctor_set(v___x_266_, 1, v_a_239_);
return v___x_266_;
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___boxed(lean_object* v_x_267_, lean_object* v_a_268_, lean_object* v_a_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1(v_x_267_, v_a_268_, v_a_269_);
lean_dec_ref(v_a_268_);
return v_res_270_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2b___closed__0(void){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = lean_mk_string_unchecked("term__.+", 8, 8);
return v___x_271_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2b___closed__1(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_272_ = lean_obj_once(&l_Lake_term_____x2e_x2b___closed__0, &l_Lake_term_____x2e_x2b___closed__0_once, _init_l_Lake_term_____x2e_x2b___closed__0);
v___x_273_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__0, &l_Lake_term_____x2e_x2a___closed__0_once, _init_l_Lake_term_____x2e_x2a___closed__0);
v___x_274_ = l_Lean_Name_mkStr2(v___x_273_, v___x_272_);
return v___x_274_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2b___closed__2(void){
_start:
{
lean_object* v___x_275_; 
v___x_275_ = lean_mk_string_unchecked(".+", 2, 2);
return v___x_275_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2b___closed__3(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_276_ = lean_obj_once(&l_Lake_term_____x2e_x2b___closed__2, &l_Lake_term_____x2e_x2b___closed__2_once, _init_l_Lake_term_____x2e_x2b___closed__2);
v___x_277_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
return v___x_277_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2b___closed__4(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_278_ = lean_obj_once(&l_Lake_term_____x2e_x2b___closed__3, &l_Lake_term_____x2e_x2b___closed__3_once, _init_l_Lake_term_____x2e_x2b___closed__3);
v___x_279_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__14, &l_Lake_term_____x2e_x2a___closed__14_once, _init_l_Lake_term_____x2e_x2a___closed__14);
v___x_280_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__4, &l_Lake_term_____x2e_x2a___closed__4_once, _init_l_Lake_term_____x2e_x2a___closed__4);
v___x_281_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
lean_ctor_set(v___x_281_, 1, v___x_279_);
lean_ctor_set(v___x_281_, 2, v___x_278_);
return v___x_281_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2b___closed__5(void){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_282_ = lean_obj_once(&l_Lake_term_____x2e_x2b___closed__4, &l_Lake_term_____x2e_x2b___closed__4_once, _init_l_Lake_term_____x2e_x2b___closed__4);
v___x_283_ = lean_unsigned_to_nat(1024u);
v___x_284_ = lean_obj_once(&l_Lake_term_____x2e_x2b___closed__1, &l_Lake_term_____x2e_x2b___closed__1_once, _init_l_Lake_term_____x2e_x2b___closed__1);
v___x_285_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
lean_ctor_set(v___x_285_, 1, v___x_283_);
lean_ctor_set(v___x_285_, 2, v___x_282_);
return v___x_285_;
}
}
static lean_object* _init_l_Lake_term_____x2e_x2b(void){
_start:
{
lean_object* v___x_286_; 
v___x_286_ = lean_obj_once(&l_Lake_term_____x2e_x2b___closed__5, &l_Lake_term_____x2e_x2b___closed__5_once, _init_l_Lake_term_____x2e_x2b___closed__5);
return v___x_286_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__0(void){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = lean_mk_string_unchecked("Glob.submodules", 15, 15);
return v___x_287_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__1(void){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__0, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__0_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__0);
v___x_289_ = l_String_toRawSubstring_x27(v___x_288_);
return v___x_289_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__2(void){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = lean_mk_string_unchecked("submodules", 10, 10);
return v___x_290_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__3(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_291_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__2, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__2_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__2);
v___x_292_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7);
v___x_293_ = l_Lean_Name_mkStr2(v___x_292_, v___x_291_);
return v___x_293_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_294_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__2, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__2_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__2);
v___x_295_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__7);
v___x_296_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__0, &l_Lake_term_____x2e_x2a___closed__0_once, _init_l_Lake_term_____x2e_x2a___closed__0);
v___x_297_ = l_Lean_Name_mkStr3(v___x_296_, v___x_295_, v___x_294_);
return v___x_297_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__5(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_298_ = lean_box(0);
v___x_299_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4);
v___x_300_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
lean_ctor_set(v___x_300_, 1, v___x_298_);
return v___x_300_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__6(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__4);
v___x_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_302_, 0, v___x_301_);
return v___x_302_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__7(void){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_303_ = lean_box(0);
v___x_304_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__6, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__6_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__6);
v___x_305_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set(v___x_305_, 1, v___x_303_);
return v___x_305_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__8(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_306_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__7, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__7_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__7);
v___x_307_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__5, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__5_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__5);
v___x_308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
lean_ctor_set(v___x_308_, 1, v___x_306_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1(lean_object* v_x_309_, lean_object* v_a_310_, lean_object* v_a_311_){
_start:
{
lean_object* v___x_312_; uint8_t v___x_313_; 
v___x_312_ = lean_obj_once(&l_Lake_term_____x2e_x2b___closed__1, &l_Lake_term_____x2e_x2b___closed__1_once, _init_l_Lake_term_____x2e_x2b___closed__1);
lean_inc(v_x_309_);
v___x_313_ = l_Lean_Syntax_isOfKind(v_x_309_, v___x_312_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; lean_object* v___x_315_; 
lean_dec(v_x_309_);
v___x_314_ = lean_box(1);
v___x_315_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
lean_ctor_set(v___x_315_, 1, v_a_311_);
return v___x_315_;
}
else
{
lean_object* v_quotContext_316_; lean_object* v_currMacroScope_317_; lean_object* v_ref_318_; lean_object* v___x_319_; lean_object* v___x_320_; uint8_t v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v_quotContext_316_ = lean_ctor_get(v_a_310_, 1);
v_currMacroScope_317_ = lean_ctor_get(v_a_310_, 2);
v_ref_318_ = lean_ctor_get(v_a_310_, 5);
v___x_319_ = lean_unsigned_to_nat(0u);
v___x_320_ = l_Lean_Syntax_getArg(v_x_309_, v___x_319_);
lean_dec(v_x_309_);
v___x_321_ = 0;
v___x_322_ = l_Lean_SourceInfo_fromRef(v_ref_318_, v___x_321_);
v___x_323_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__4);
v___x_324_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__1, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__1_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__1);
v___x_325_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__3, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__3_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__3);
lean_inc(v_currMacroScope_317_);
lean_inc(v_quotContext_316_);
v___x_326_ = l_Lean_addMacroScope(v_quotContext_316_, v___x_325_, v_currMacroScope_317_);
v___x_327_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__8, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__8_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___closed__8);
lean_inc_n(v___x_322_, 2);
v___x_328_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_328_, 0, v___x_322_);
lean_ctor_set(v___x_328_, 1, v___x_324_);
lean_ctor_set(v___x_328_, 2, v___x_326_);
lean_ctor_set(v___x_328_, 3, v___x_327_);
v___x_329_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__16, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__16_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__16);
v___x_330_ = lean_obj_once(&l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18, &l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18_once, _init_l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2a__1___closed__18);
v___x_331_ = lean_unsigned_to_nat(1u);
v___x_332_ = lean_mk_empty_array_with_capacity(v___x_331_);
v___x_333_ = lean_array_push(v___x_332_, v___x_320_);
v___x_334_ = lean_box(2);
v___x_335_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
lean_ctor_set(v___x_335_, 1, v___x_330_);
lean_ctor_set(v___x_335_, 2, v___x_333_);
v___x_336_ = l_Lean_Syntax_node1(v___x_322_, v___x_329_, v___x_335_);
v___x_337_ = l_Lean_Syntax_node2(v___x_322_, v___x_323_, v___x_328_, v___x_336_);
v___x_338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
lean_ctor_set(v___x_338_, 1, v_a_311_);
return v___x_338_;
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1___boxed(lean_object* v_x_339_, lean_object* v_a_340_, lean_object* v_a_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Lake___aux__Lake__Config__Glob______macroRules__Lake__term_____x2e_x2b__1(v_x_339_, v_a_340_, v_a_341_);
lean_dec_ref(v_a_340_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_toString(lean_object* v_x_343_){
_start:
{
switch(lean_obj_tag(v_x_343_))
{
case 0:
{
lean_object* v_a_344_; uint8_t v___x_345_; lean_object* v___x_346_; 
v_a_344_ = lean_ctor_get(v_x_343_, 0);
lean_inc(v_a_344_);
lean_dec_ref(v_x_343_);
v___x_345_ = 1;
v___x_346_ = l_Lean_Name_toString(v_a_344_, v___x_345_);
return v___x_346_;
}
case 1:
{
lean_object* v_a_347_; uint8_t v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v_a_347_ = lean_ctor_get(v_x_343_, 0);
lean_inc(v_a_347_);
lean_dec_ref(v_x_343_);
v___x_348_ = 1;
v___x_349_ = l_Lean_Name_toString(v_a_347_, v___x_348_);
v___x_350_ = lean_obj_once(&l_Lake_term_____x2e_x2b___closed__2, &l_Lake_term_____x2e_x2b___closed__2_once, _init_l_Lake_term_____x2e_x2b___closed__2);
v___x_351_ = lean_string_append(v___x_349_, v___x_350_);
return v___x_351_;
}
default: 
{
lean_object* v_a_352_; uint8_t v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v_a_352_ = lean_ctor_get(v_x_343_, 0);
lean_inc(v_a_352_);
lean_dec_ref(v_x_343_);
v___x_353_ = 1;
v___x_354_ = l_Lean_Name_toString(v_a_352_, v___x_353_);
v___x_355_ = lean_obj_once(&l_Lake_term_____x2e_x2a___closed__15, &l_Lake_term_____x2e_x2a___closed__15_once, _init_l_Lake_term_____x2e_x2a___closed__15);
v___x_356_ = lean_string_append(v___x_354_, v___x_355_);
return v___x_356_;
}
}
}
}
static lean_object* _init_l_Lake_Glob_instToString___closed__0(void){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = lean_alloc_closure((void*)(l_Lake_Glob_toString), 1, 0);
return v___x_357_;
}
}
static lean_object* _init_l_Lake_Glob_instToString(void){
_start:
{
lean_object* v___x_358_; 
v___x_358_ = lean_obj_once(&l_Lake_Glob_instToString___closed__0, &l_Lake_Glob_instToString___closed__0_once, _init_l_Lake_Glob_instToString___closed__0);
return v___x_358_;
}
}
LEAN_EXPORT uint8_t l_Lake_Glob_matches(lean_object* v_m_359_, lean_object* v_x_360_){
_start:
{
switch(lean_obj_tag(v_x_360_))
{
case 0:
{
lean_object* v_a_361_; uint8_t v___x_362_; 
v_a_361_ = lean_ctor_get(v_x_360_, 0);
v___x_362_ = lean_name_eq(v_a_361_, v_m_359_);
return v___x_362_;
}
case 1:
{
lean_object* v_a_363_; uint8_t v___x_364_; 
v_a_363_ = lean_ctor_get(v_x_360_, 0);
v___x_364_ = l_Lean_Name_isPrefixOf(v_a_363_, v_m_359_);
if (v___x_364_ == 0)
{
return v___x_364_;
}
else
{
uint8_t v___x_365_; 
v___x_365_ = lean_name_eq(v_a_363_, v_m_359_);
if (v___x_365_ == 0)
{
return v___x_364_;
}
else
{
uint8_t v___x_366_; 
v___x_366_ = 0;
return v___x_366_;
}
}
}
default: 
{
lean_object* v_a_367_; uint8_t v___x_368_; 
v_a_367_ = lean_ctor_get(v_x_360_, 0);
v___x_368_ = l_Lean_Name_isPrefixOf(v_a_367_, v_m_359_);
return v___x_368_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_matches___boxed(lean_object* v_m_369_, lean_object* v_x_370_){
_start:
{
uint8_t v_res_371_; lean_object* v_r_372_; 
v_res_371_ = l_Lake_Glob_matches(v_m_369_, v_x_370_);
lean_dec_ref(v_x_370_);
lean_dec(v_m_369_);
v_r_372_ = lean_box(v_res_371_);
return v_r_372_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn___redArg___lam__0(lean_object* v_a_373_, lean_object* v_f_374_, lean_object* v_x_375_){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = l_Lean_Name_append(v_a_373_, v_x_375_);
v___x_377_ = lean_apply_1(v_f_374_, v___x_376_);
return v___x_377_;
}
}
static lean_object* _init_l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0(void){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = lean_mk_string_unchecked("", 0, 0);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn___redArg___lam__2(lean_object* v_dir_379_, lean_object* v_a_380_, lean_object* v_inst_381_, lean_object* v_inst_382_, lean_object* v___f_383_, lean_object* v_x_384_){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_385_ = lean_obj_once(&l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0, &l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0_once, _init_l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0);
v___x_386_ = l_Lean_modToFilePath(v_dir_379_, v_a_380_, v___x_385_);
v___x_387_ = l_Lean_forEachModuleInDir___redArg(v_inst_381_, v_inst_382_, v___x_386_, v___f_383_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn___redArg___lam__2___boxed(lean_object* v_dir_388_, lean_object* v_a_389_, lean_object* v_inst_390_, lean_object* v_inst_391_, lean_object* v___f_392_, lean_object* v_x_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Lake_Glob_forEachModuleIn___redArg___lam__2(v_dir_388_, v_a_389_, v_inst_390_, v_inst_391_, v___f_392_, v_x_393_);
lean_dec_ref(v_dir_388_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn___redArg(lean_object* v_inst_395_, lean_object* v_inst_396_, lean_object* v_dir_397_, lean_object* v_f_398_, lean_object* v_x_399_){
_start:
{
switch(lean_obj_tag(v_x_399_))
{
case 0:
{
lean_object* v_a_400_; lean_object* v___x_401_; 
lean_dec_ref(v_dir_397_);
lean_dec(v_inst_396_);
lean_dec_ref(v_inst_395_);
v_a_400_ = lean_ctor_get(v_x_399_, 0);
lean_inc(v_a_400_);
lean_dec_ref(v_x_399_);
v___x_401_ = lean_apply_1(v_f_398_, v_a_400_);
return v___x_401_;
}
case 1:
{
lean_object* v_a_402_; lean_object* v___f_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v_a_402_ = lean_ctor_get(v_x_399_, 0);
lean_inc_n(v_a_402_, 2);
lean_dec_ref(v_x_399_);
v___f_403_ = lean_alloc_closure((void*)(l_Lake_Glob_forEachModuleIn___redArg___lam__0), 3, 2);
lean_closure_set(v___f_403_, 0, v_a_402_);
lean_closure_set(v___f_403_, 1, v_f_398_);
v___x_404_ = lean_obj_once(&l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0, &l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0_once, _init_l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0);
v___x_405_ = l_Lean_modToFilePath(v_dir_397_, v_a_402_, v___x_404_);
lean_dec_ref(v_dir_397_);
v___x_406_ = l_Lean_forEachModuleInDir___redArg(v_inst_395_, v_inst_396_, v___x_405_, v___f_403_);
return v___x_406_;
}
default: 
{
lean_object* v_toApplicative_407_; lean_object* v_toSeqRight_408_; lean_object* v_a_409_; lean_object* v___f_410_; lean_object* v___f_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v_toApplicative_407_ = lean_ctor_get(v_inst_395_, 0);
v_toSeqRight_408_ = lean_ctor_get(v_toApplicative_407_, 4);
lean_inc(v_toSeqRight_408_);
v_a_409_ = lean_ctor_get(v_x_399_, 0);
lean_inc_n(v_a_409_, 3);
lean_dec_ref(v_x_399_);
lean_inc(v_f_398_);
v___f_410_ = lean_alloc_closure((void*)(l_Lake_Glob_forEachModuleIn___redArg___lam__0), 3, 2);
lean_closure_set(v___f_410_, 0, v_a_409_);
lean_closure_set(v___f_410_, 1, v_f_398_);
v___f_411_ = lean_alloc_closure((void*)(l_Lake_Glob_forEachModuleIn___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_411_, 0, v_dir_397_);
lean_closure_set(v___f_411_, 1, v_a_409_);
lean_closure_set(v___f_411_, 2, v_inst_395_);
lean_closure_set(v___f_411_, 3, v_inst_396_);
lean_closure_set(v___f_411_, 4, v___f_410_);
v___x_412_ = lean_apply_1(v_f_398_, v_a_409_);
v___x_413_ = lean_apply_4(v_toSeqRight_408_, lean_box(0), lean_box(0), v___x_412_, v___f_411_);
return v___x_413_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Glob_forEachModuleIn(lean_object* v_m_414_, lean_object* v_inst_415_, lean_object* v_inst_416_, lean_object* v_dir_417_, lean_object* v_f_418_, lean_object* v_x_419_){
_start:
{
switch(lean_obj_tag(v_x_419_))
{
case 0:
{
lean_object* v_a_420_; lean_object* v___x_421_; 
lean_dec_ref(v_dir_417_);
lean_dec(v_inst_416_);
lean_dec_ref(v_inst_415_);
v_a_420_ = lean_ctor_get(v_x_419_, 0);
lean_inc(v_a_420_);
lean_dec_ref(v_x_419_);
v___x_421_ = lean_apply_1(v_f_418_, v_a_420_);
return v___x_421_;
}
case 1:
{
lean_object* v_a_422_; lean_object* v___f_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v_a_422_ = lean_ctor_get(v_x_419_, 0);
lean_inc_n(v_a_422_, 2);
lean_dec_ref(v_x_419_);
v___f_423_ = lean_alloc_closure((void*)(l_Lake_Glob_forEachModuleIn___redArg___lam__0), 3, 2);
lean_closure_set(v___f_423_, 0, v_a_422_);
lean_closure_set(v___f_423_, 1, v_f_418_);
v___x_424_ = lean_obj_once(&l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0, &l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0_once, _init_l_Lake_Glob_forEachModuleIn___redArg___lam__2___closed__0);
v___x_425_ = l_Lean_modToFilePath(v_dir_417_, v_a_422_, v___x_424_);
lean_dec_ref(v_dir_417_);
v___x_426_ = l_Lean_forEachModuleInDir___redArg(v_inst_415_, v_inst_416_, v___x_425_, v___f_423_);
return v___x_426_;
}
default: 
{
lean_object* v_toApplicative_427_; lean_object* v_toSeqRight_428_; lean_object* v_a_429_; lean_object* v___f_430_; lean_object* v___f_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v_toApplicative_427_ = lean_ctor_get(v_inst_415_, 0);
v_toSeqRight_428_ = lean_ctor_get(v_toApplicative_427_, 4);
lean_inc(v_toSeqRight_428_);
v_a_429_ = lean_ctor_get(v_x_419_, 0);
lean_inc_n(v_a_429_, 3);
lean_dec_ref(v_x_419_);
lean_inc(v_f_418_);
v___f_430_ = lean_alloc_closure((void*)(l_Lake_Glob_forEachModuleIn___redArg___lam__0), 3, 2);
lean_closure_set(v___f_430_, 0, v_a_429_);
lean_closure_set(v___f_430_, 1, v_f_418_);
v___f_431_ = lean_alloc_closure((void*)(l_Lake_Glob_forEachModuleIn___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_431_, 0, v_dir_417_);
lean_closure_set(v___f_431_, 1, v_a_429_);
lean_closure_set(v___f_431_, 2, v_inst_415_);
lean_closure_set(v___f_431_, 3, v_inst_416_);
lean_closure_set(v___f_431_, 4, v___f_430_);
v___x_432_ = lean_apply_1(v_f_418_, v_a_429_);
v___x_433_ = lean_apply_4(v_toSeqRight_428_, lean_box(0), lean_box(0), v___x_432_, v___f_431_);
return v___x_433_;
}
}
}
}
lean_object* runtime_initialize_Lean_Util_Path(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Name(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Name(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_Glob(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Util_Path(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instInhabitedGlob_default = _init_l_Lake_instInhabitedGlob_default();
lean_mark_persistent(l_Lake_instInhabitedGlob_default);
l_Lake_instInhabitedGlob = _init_l_Lake_instInhabitedGlob();
lean_mark_persistent(l_Lake_instInhabitedGlob);
l_Lake_instReprGlob = _init_l_Lake_instReprGlob();
lean_mark_persistent(l_Lake_instReprGlob);
l_Lake_instCoeNameGlob = _init_l_Lake_instCoeNameGlob();
lean_mark_persistent(l_Lake_instCoeNameGlob);
l_Lake_instCoeGlobArray = _init_l_Lake_instCoeGlobArray();
lean_mark_persistent(l_Lake_instCoeGlobArray);
l_Lake_Glob_instToString = _init_l_Lake_Glob_instToString();
lean_mark_persistent(l_Lake_Glob_instToString);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_Glob(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lake_term_____x2e_x2a = _init_l_Lake_term_____x2e_x2a();
lean_mark_persistent(l_Lake_term_____x2e_x2a);
l_Lake_term_____x2e_x2b = _init_l_Lake_term_____x2e_x2b();
lean_mark_persistent(l_Lake_term_____x2e_x2b);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_Path(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Name(uint8_t builtin);
lean_object* initialize_Lean_Data_Name(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_Glob(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_Path(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Glob(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_Glob(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_Glob(builtin);
}
#ifdef __cplusplus
}
#endif
