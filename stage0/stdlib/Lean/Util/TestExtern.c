// Lean compiler output
// Module: Lean.Util.TestExtern
// Imports: public meta import Lean.Meta.Tactic.Unfold public meta import Lean.Meta.Eval public meta import Lean.Compiler.ImplementedByAttr public meta import Lean.Elab.Command public import Init.Notation import Lean.Exception public meta import Lean.Compiler.ExternAttr
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermAndSynthesize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_unfold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalExpr___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_isExtern(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_getImplementedBy_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_testExternCmd___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_testExternCmd___closed__0;
static lean_once_cell_t l_testExternCmd___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_testExternCmd___closed__1;
static lean_once_cell_t l_testExternCmd___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_testExternCmd___closed__2;
static lean_once_cell_t l_testExternCmd___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_testExternCmd___closed__3;
static lean_once_cell_t l_testExternCmd___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_testExternCmd___closed__4;
static lean_once_cell_t l_testExternCmd___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_testExternCmd___closed__5;
static lean_once_cell_t l_testExternCmd___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_testExternCmd___closed__6;
static lean_once_cell_t l_testExternCmd___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_testExternCmd___closed__7;
static lean_once_cell_t l_testExternCmd___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_testExternCmd___closed__8;
static lean_once_cell_t l_testExternCmd___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_testExternCmd___closed__9;
static lean_once_cell_t l_testExternCmd___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_testExternCmd___closed__10;
LEAN_EXPORT lean_object* l_testExternCmd;
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__0;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__1;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__2;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00elabTestExtern_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00elabTestExtern_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_elabTestExtern___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__0;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__1;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__2;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__3;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__4;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__5;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__6;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__7;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__8;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__9;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__10;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__11;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__12;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__13;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__14;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__15;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__16;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__17;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__18;
static lean_once_cell_t l_elabTestExtern___lam__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabTestExtern___lam__0___closed__19;
LEAN_EXPORT lean_object* l_elabTestExtern___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_elabTestExtern___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_elabTestExtern(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_elabTestExtern___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00elabTestExtern_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00elabTestExtern_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_testExternCmd___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("testExternCmd", 13, 13);
return v___x_1_;
}
}
static lean_object* _init_l_testExternCmd___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_testExternCmd___closed__0, &l_testExternCmd___closed__0_once, _init_l_testExternCmd___closed__0);
v___x_3_ = l_Lean_Name_mkStr1(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_testExternCmd___closed__2(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_4_;
}
}
static lean_object* _init_l_testExternCmd___closed__3(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_testExternCmd___closed__2, &l_testExternCmd___closed__2_once, _init_l_testExternCmd___closed__2);
v___x_6_ = l_Lean_Name_mkStr1(v___x_5_);
return v___x_6_;
}
}
static lean_object* _init_l_testExternCmd___closed__4(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_mk_string_unchecked("test_extern ", 12, 12);
return v___x_7_;
}
}
static lean_object* _init_l_testExternCmd___closed__5(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_obj_once(&l_testExternCmd___closed__4, &l_testExternCmd___closed__4_once, _init_l_testExternCmd___closed__4);
v___x_9_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
static lean_object* _init_l_testExternCmd___closed__6(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_mk_string_unchecked("term", 4, 4);
return v___x_10_;
}
}
static lean_object* _init_l_testExternCmd___closed__7(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = lean_obj_once(&l_testExternCmd___closed__6, &l_testExternCmd___closed__6_once, _init_l_testExternCmd___closed__6);
v___x_12_ = l_Lean_Name_mkStr1(v___x_11_);
return v___x_12_;
}
}
static lean_object* _init_l_testExternCmd___closed__8(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_13_ = lean_unsigned_to_nat(0u);
v___x_14_ = lean_obj_once(&l_testExternCmd___closed__7, &l_testExternCmd___closed__7_once, _init_l_testExternCmd___closed__7);
v___x_15_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
return v___x_15_;
}
}
static lean_object* _init_l_testExternCmd___closed__9(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_16_ = lean_obj_once(&l_testExternCmd___closed__8, &l_testExternCmd___closed__8_once, _init_l_testExternCmd___closed__8);
v___x_17_ = lean_obj_once(&l_testExternCmd___closed__5, &l_testExternCmd___closed__5_once, _init_l_testExternCmd___closed__5);
v___x_18_ = lean_obj_once(&l_testExternCmd___closed__3, &l_testExternCmd___closed__3_once, _init_l_testExternCmd___closed__3);
v___x_19_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
lean_ctor_set(v___x_19_, 1, v___x_17_);
lean_ctor_set(v___x_19_, 2, v___x_16_);
return v___x_19_;
}
}
static lean_object* _init_l_testExternCmd___closed__10(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_20_ = lean_obj_once(&l_testExternCmd___closed__9, &l_testExternCmd___closed__9_once, _init_l_testExternCmd___closed__9);
v___x_21_ = lean_unsigned_to_nat(1022u);
v___x_22_ = lean_obj_once(&l_testExternCmd___closed__1, &l_testExternCmd___closed__1_once, _init_l_testExternCmd___closed__1);
v___x_23_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
lean_ctor_set(v___x_23_, 1, v___x_21_);
lean_ctor_set(v___x_23_, 2, v___x_20_);
return v___x_23_;
}
}
static lean_object* _init_l_testExternCmd(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_obj_once(&l_testExternCmd___closed__10, &l_testExternCmd___closed__10_once, _init_l_testExternCmd___closed__10);
return v___x_24_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_25_ = lean_box(0);
v___x_26_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_27_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
lean_ctor_set(v___x_27_, 1, v___x_25_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0___redArg(){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_29_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0___redArg___closed__0);
v___x_30_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0___redArg___boxed(lean_object* v___y_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0___redArg();
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0(lean_object* v_00_u03b1_33_, lean_object* v___y_34_, lean_object* v___y_35_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0___redArg();
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0___boxed(lean_object* v_00_u03b1_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0(v_00_u03b1_38_, v___y_39_, v___y_40_);
lean_dec(v___y_40_);
lean_dec_ref(v___y_39_);
return v_res_42_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__3(lean_object* v_opts_43_, lean_object* v_opt_44_){
_start:
{
lean_object* v_name_45_; lean_object* v_defValue_46_; lean_object* v_map_47_; lean_object* v___x_48_; 
v_name_45_ = lean_ctor_get(v_opt_44_, 0);
v_defValue_46_ = lean_ctor_get(v_opt_44_, 1);
v_map_47_ = lean_ctor_get(v_opts_43_, 0);
v___x_48_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_47_, v_name_45_);
if (lean_obj_tag(v___x_48_) == 0)
{
uint8_t v___x_49_; 
v___x_49_ = lean_unbox(v_defValue_46_);
return v___x_49_;
}
else
{
lean_object* v_val_50_; 
v_val_50_ = lean_ctor_get(v___x_48_, 0);
lean_inc(v_val_50_);
lean_dec_ref(v___x_48_);
if (lean_obj_tag(v_val_50_) == 1)
{
uint8_t v_v_51_; 
v_v_51_ = lean_ctor_get_uint8(v_val_50_, 0);
lean_dec_ref(v_val_50_);
return v_v_51_;
}
else
{
uint8_t v___x_52_; 
lean_dec(v_val_50_);
v___x_52_ = lean_unbox(v_defValue_46_);
return v___x_52_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__3___boxed(lean_object* v_opts_53_, lean_object* v_opt_54_){
_start:
{
uint8_t v_res_55_; lean_object* v_r_56_; 
v_res_55_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__3(v_opts_53_, v_opt_54_);
lean_dec_ref(v_opt_54_);
lean_dec_ref(v_opts_53_);
v_r_56_ = lean_box(v_res_55_);
return v_r_56_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__0(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_box(1);
v___x_58_ = l_Lean_MessageData_ofFormat(v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__1(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_mk_string_unchecked("while expanding", 15, 15);
return v___x_59_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__2(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__1, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__1_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__1);
v___x_61_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
return v___x_61_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__3(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__2, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__2_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__2);
v___x_63_ = l_Lean_MessageData_ofFormat(v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4(lean_object* v_x_64_, lean_object* v_x_65_){
_start:
{
if (lean_obj_tag(v_x_65_) == 0)
{
return v_x_64_;
}
else
{
lean_object* v_head_66_; lean_object* v_tail_67_; lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_89_; 
v_head_66_ = lean_ctor_get(v_x_65_, 0);
v_tail_67_ = lean_ctor_get(v_x_65_, 1);
v_isSharedCheck_89_ = !lean_is_exclusive(v_x_65_);
if (v_isSharedCheck_89_ == 0)
{
v___x_69_ = v_x_65_;
v_isShared_70_ = v_isSharedCheck_89_;
goto v_resetjp_68_;
}
else
{
lean_inc(v_tail_67_);
lean_inc(v_head_66_);
lean_dec(v_x_65_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_89_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
lean_object* v_before_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_87_; 
v_before_71_ = lean_ctor_get(v_head_66_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v_head_66_);
if (v_isSharedCheck_87_ == 0)
{
lean_object* v_unused_88_; 
v_unused_88_ = lean_ctor_get(v_head_66_, 1);
lean_dec(v_unused_88_);
v___x_73_ = v_head_66_;
v_isShared_74_ = v_isSharedCheck_87_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_before_71_);
lean_dec(v_head_66_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_87_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v___x_75_; lean_object* v___x_77_; 
v___x_75_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__0);
if (v_isShared_74_ == 0)
{
lean_ctor_set_tag(v___x_73_, 7);
lean_ctor_set(v___x_73_, 1, v___x_75_);
lean_ctor_set(v___x_73_, 0, v_x_64_);
v___x_77_ = v___x_73_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v_x_64_);
lean_ctor_set(v_reuseFailAlloc_86_, 1, v___x_75_);
v___x_77_ = v_reuseFailAlloc_86_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
lean_object* v___x_78_; lean_object* v___x_80_; 
v___x_78_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__3);
if (v_isShared_70_ == 0)
{
lean_ctor_set_tag(v___x_69_, 7);
lean_ctor_set(v___x_69_, 1, v___x_78_);
lean_ctor_set(v___x_69_, 0, v___x_77_);
v___x_80_ = v___x_69_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v___x_77_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v___x_78_);
v___x_80_ = v_reuseFailAlloc_85_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_81_ = l_Lean_MessageData_ofSyntax(v_before_71_);
v___x_82_ = l_Lean_indentD(v___x_81_);
v___x_83_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_80_);
lean_ctor_set(v___x_83_, 1, v___x_82_);
v_x_64_ = v___x_83_;
v_x_65_ = v_tail_67_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_mk_string_unchecked("with resulting expansion", 24, 24);
return v___x_90_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__0, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__0);
v___x_92_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
return v___x_92_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__1, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__1);
v___x_94_ = l_Lean_MessageData_ofFormat(v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg(lean_object* v_msgData_95_, lean_object* v_macroStack_96_, lean_object* v___y_97_){
_start:
{
lean_object* v_options_99_; lean_object* v___x_100_; uint8_t v___x_101_; 
v_options_99_ = lean_ctor_get(v___y_97_, 2);
v___x_100_ = l_Lean_Elab_pp_macroStack;
v___x_101_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__3(v_options_99_, v___x_100_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; 
lean_dec(v_macroStack_96_);
v___x_102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_102_, 0, v_msgData_95_);
return v___x_102_;
}
else
{
if (lean_obj_tag(v_macroStack_96_) == 0)
{
lean_object* v___x_103_; 
v___x_103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_103_, 0, v_msgData_95_);
return v___x_103_;
}
else
{
lean_object* v_head_104_; lean_object* v_after_105_; lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_120_; 
v_head_104_ = lean_ctor_get(v_macroStack_96_, 0);
lean_inc(v_head_104_);
v_after_105_ = lean_ctor_get(v_head_104_, 1);
v_isSharedCheck_120_ = !lean_is_exclusive(v_head_104_);
if (v_isSharedCheck_120_ == 0)
{
lean_object* v_unused_121_; 
v_unused_121_ = lean_ctor_get(v_head_104_, 0);
lean_dec(v_unused_121_);
v___x_107_ = v_head_104_;
v_isShared_108_ = v_isSharedCheck_120_;
goto v_resetjp_106_;
}
else
{
lean_inc(v_after_105_);
lean_dec(v_head_104_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_120_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v___x_109_; lean_object* v___x_111_; 
v___x_109_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4___closed__0);
if (v_isShared_108_ == 0)
{
lean_ctor_set_tag(v___x_107_, 7);
lean_ctor_set(v___x_107_, 1, v___x_109_);
lean_ctor_set(v___x_107_, 0, v_msgData_95_);
v___x_111_ = v___x_107_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v_msgData_95_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v___x_109_);
v___x_111_ = v_reuseFailAlloc_119_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v_msgData_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_112_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___closed__2);
v___x_113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_111_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
v___x_114_ = l_Lean_MessageData_ofSyntax(v_after_105_);
v___x_115_ = l_Lean_indentD(v___x_114_);
v_msgData_116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_116_, 0, v___x_113_);
lean_ctor_set(v_msgData_116_, 1, v___x_115_);
v___x_117_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2_spec__4(v_msgData_116_, v_macroStack_96_);
v___x_118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
return v___x_118_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg___boxed(lean_object* v_msgData_122_, lean_object* v_macroStack_123_, lean_object* v___y_124_, lean_object* v___y_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg(v_msgData_122_, v_macroStack_123_, v___y_124_);
lean_dec_ref(v___y_124_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__1(lean_object* v_msgData_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_){
_start:
{
lean_object* v___x_133_; lean_object* v_env_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v_mctx_137_; lean_object* v_lctx_138_; lean_object* v_options_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_133_ = lean_st_ref_get(v___y_131_);
v_env_134_ = lean_ctor_get(v___x_133_, 0);
lean_inc_ref(v_env_134_);
lean_dec(v___x_133_);
v___x_135_ = lean_st_ref_get(v___y_131_);
lean_dec(v___x_135_);
v___x_136_ = lean_st_ref_get(v___y_129_);
v_mctx_137_ = lean_ctor_get(v___x_136_, 0);
lean_inc_ref(v_mctx_137_);
lean_dec(v___x_136_);
v_lctx_138_ = lean_ctor_get(v___y_128_, 2);
v_options_139_ = lean_ctor_get(v___y_130_, 2);
lean_inc_ref(v_options_139_);
lean_inc_ref(v_lctx_138_);
v___x_140_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_140_, 0, v_env_134_);
lean_ctor_set(v___x_140_, 1, v_mctx_137_);
lean_ctor_set(v___x_140_, 2, v_lctx_138_);
lean_ctor_set(v___x_140_, 3, v_options_139_);
v___x_141_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
lean_ctor_set(v___x_141_, 1, v_msgData_127_);
v___x_142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__1___boxed(lean_object* v_msgData_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__1(v_msgData_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00elabTestExtern_spec__1___redArg(lean_object* v_msg_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_){
_start:
{
lean_object* v_ref_158_; lean_object* v___x_159_; lean_object* v_a_160_; lean_object* v_macroStack_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_172_; 
v_ref_158_ = lean_ctor_get(v___y_155_, 5);
v___x_159_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__1(v_msg_150_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
v_a_160_ = lean_ctor_get(v___x_159_, 0);
lean_inc(v_a_160_);
lean_dec_ref(v___x_159_);
v_macroStack_161_ = lean_ctor_get(v___y_151_, 1);
v___x_162_ = l_Lean_Elab_getBetterRef(v_ref_158_, v_macroStack_161_);
lean_inc(v_macroStack_161_);
v___x_163_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg(v_a_160_, v_macroStack_161_, v___y_155_);
v_a_164_ = lean_ctor_get(v___x_163_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v___x_163_);
if (v_isSharedCheck_172_ == 0)
{
v___x_166_ = v___x_163_;
v_isShared_167_ = v_isSharedCheck_172_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_163_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_172_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_168_; lean_object* v___x_170_; 
v___x_168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_168_, 0, v___x_162_);
lean_ctor_set(v___x_168_, 1, v_a_164_);
if (v_isShared_167_ == 0)
{
lean_ctor_set_tag(v___x_166_, 1);
lean_ctor_set(v___x_166_, 0, v___x_168_);
v___x_170_ = v___x_166_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v___x_168_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00elabTestExtern_spec__1___redArg___boxed(lean_object* v_msg_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lean_throwError___at___00elabTestExtern_spec__1___redArg(v_msg_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
return v_res_181_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__0(void){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_182_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__1(void){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = lean_mk_string_unchecked("reduceBool", 10, 10);
return v___x_183_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__2(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_184_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__1, &l_elabTestExtern___lam__0___closed__1_once, _init_l_elabTestExtern___lam__0___closed__1);
v___x_185_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__0, &l_elabTestExtern___lam__0___closed__0_once, _init_l_elabTestExtern___lam__0___closed__0);
v___x_186_ = l_Lean_Name_mkStr2(v___x_185_, v___x_184_);
return v___x_186_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__3(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_187_ = lean_box(0);
v___x_188_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__2, &l_elabTestExtern___lam__0___closed__2_once, _init_l_elabTestExtern___lam__0___closed__2);
v___x_189_ = l_Lean_Expr_const___override(v___x_188_, v___x_187_);
return v___x_189_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__4(void){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = lean_mk_string_unchecked("Bool", 4, 4);
return v___x_190_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__5(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__4, &l_elabTestExtern___lam__0___closed__4_once, _init_l_elabTestExtern___lam__0___closed__4);
v___x_192_ = l_Lean_Name_mkStr1(v___x_191_);
return v___x_192_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__6(void){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_193_ = lean_box(0);
v___x_194_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__5, &l_elabTestExtern___lam__0___closed__5_once, _init_l_elabTestExtern___lam__0___closed__5);
v___x_195_ = l_Lean_Expr_const___override(v___x_194_, v___x_193_);
return v___x_195_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__7(void){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = lean_mk_string_unchecked("native implementation did not agree with reference implementation!\n", 67, 67);
return v___x_196_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__8(void){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__7, &l_elabTestExtern___lam__0___closed__7_once, _init_l_elabTestExtern___lam__0___closed__7);
v___x_198_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
return v___x_198_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__9(void){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_199_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__8, &l_elabTestExtern___lam__0___closed__8_once, _init_l_elabTestExtern___lam__0___closed__8);
v___x_200_ = l_Lean_MessageData_ofFormat(v___x_199_);
return v___x_200_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__10(void){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = lean_mk_string_unchecked("Compare the outputs of:\n#eval ", 30, 30);
return v___x_201_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__11(void){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__10, &l_elabTestExtern___lam__0___closed__10_once, _init_l_elabTestExtern___lam__0___closed__10);
v___x_203_ = l_Lean_stringToMessageData(v___x_202_);
return v___x_203_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__12(void){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = lean_mk_string_unchecked("\n and\n#eval ", 12, 12);
return v___x_204_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__13(void){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_205_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__12, &l_elabTestExtern___lam__0___closed__12_once, _init_l_elabTestExtern___lam__0___closed__12);
v___x_206_ = l_Lean_stringToMessageData(v___x_205_);
return v___x_206_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__14(void){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = lean_mk_string_unchecked("test_extern: ", 13, 13);
return v___x_207_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__15(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__14, &l_elabTestExtern___lam__0___closed__14_once, _init_l_elabTestExtern___lam__0___closed__14);
v___x_209_ = l_Lean_stringToMessageData(v___x_208_);
return v___x_209_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__16(void){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = lean_mk_string_unchecked(" does not have an @[extern] attribute or @[implemented_by] attribute", 68, 68);
return v___x_210_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__17(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_211_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__16, &l_elabTestExtern___lam__0___closed__16_once, _init_l_elabTestExtern___lam__0___closed__16);
v___x_212_ = l_Lean_stringToMessageData(v___x_211_);
return v___x_212_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__18(void){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = lean_mk_string_unchecked("test_extern: expects a function application", 43, 43);
return v___x_213_;
}
}
static lean_object* _init_l_elabTestExtern___lam__0___closed__19(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__18, &l_elabTestExtern___lam__0___closed__18_once, _init_l_elabTestExtern___lam__0___closed__18);
v___x_215_ = l_Lean_stringToMessageData(v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_elabTestExtern___lam__0(lean_object* v___x_216_, lean_object* v___x_217_, uint8_t v___x_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_Lean_Elab_Term_elabTermAndSynthesize(v___x_216_, v___x_217_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v_a_227_; lean_object* v___x_228_; 
v_a_227_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_a_227_);
lean_dec_ref(v___x_226_);
v___x_228_ = l_Lean_Expr_getAppFn(v_a_227_);
if (lean_obj_tag(v___x_228_) == 4)
{
lean_object* v_declName_229_; lean_object* v___x_230_; uint8_t v___y_297_; lean_object* v_env_304_; uint8_t v___x_305_; 
v_declName_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc_n(v_declName_229_, 2);
lean_dec_ref(v___x_228_);
v___x_230_ = lean_st_ref_get(v___y_224_);
v_env_304_ = lean_ctor_get(v___x_230_, 0);
lean_inc_ref_n(v_env_304_, 2);
lean_dec(v___x_230_);
v___x_305_ = l_Lean_isExtern(v_env_304_, v_declName_229_);
if (v___x_305_ == 0)
{
lean_object* v___x_306_; 
lean_inc(v_declName_229_);
v___x_306_ = l_Lean_Compiler_getImplementedBy_x3f(v_env_304_, v_declName_229_);
if (lean_obj_tag(v___x_306_) == 0)
{
v___y_297_ = v___x_305_;
goto v___jp_296_;
}
else
{
lean_dec_ref(v___x_306_);
v___y_297_ = v___x_218_;
goto v___jp_296_;
}
}
else
{
lean_dec_ref(v_env_304_);
goto v___jp_231_;
}
v___jp_231_:
{
lean_object* v___x_232_; 
lean_inc(v_a_227_);
v___x_232_ = l_Lean_Meta_unfold(v_a_227_, v_declName_229_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v_a_233_; lean_object* v_expr_234_; lean_object* v___x_235_; 
v_a_233_ = lean_ctor_get(v___x_232_, 0);
lean_inc(v_a_233_);
lean_dec_ref(v___x_232_);
v_expr_234_ = lean_ctor_get(v_a_233_, 0);
lean_inc_ref_n(v_expr_234_, 2);
lean_dec(v_a_233_);
lean_inc(v_a_227_);
v___x_235_ = l_Lean_Meta_mkEq(v_a_227_, v_expr_234_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
if (lean_obj_tag(v___x_235_) == 0)
{
lean_object* v_a_236_; lean_object* v___x_237_; 
v_a_236_ = lean_ctor_get(v___x_235_, 0);
lean_inc(v_a_236_);
lean_dec_ref(v___x_235_);
v___x_237_ = l_Lean_Meta_mkDecide(v_a_236_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
if (lean_obj_tag(v___x_237_) == 0)
{
lean_object* v_a_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; uint8_t v___x_242_; lean_object* v___x_243_; 
v_a_238_ = lean_ctor_get(v___x_237_, 0);
lean_inc(v_a_238_);
lean_dec_ref(v___x_237_);
v___x_239_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__3, &l_elabTestExtern___lam__0___closed__3_once, _init_l_elabTestExtern___lam__0___closed__3);
v___x_240_ = l_Lean_Expr_app___override(v___x_239_, v_a_238_);
v___x_241_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__6, &l_elabTestExtern___lam__0___closed__6_once, _init_l_elabTestExtern___lam__0___closed__6);
v___x_242_ = 1;
v___x_243_ = l_Lean_Meta_evalExpr___redArg(v___x_241_, v___x_240_, v___x_242_, v___x_218_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v_a_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_263_; 
v_a_244_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_263_ == 0)
{
v___x_246_ = v___x_243_;
v_isShared_247_ = v_isSharedCheck_263_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_a_244_);
lean_dec(v___x_243_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_263_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
uint8_t v___x_248_; 
v___x_248_ = lean_unbox(v_a_244_);
lean_dec(v_a_244_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
lean_del_object(v___x_246_);
v___x_249_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__9, &l_elabTestExtern___lam__0___closed__9_once, _init_l_elabTestExtern___lam__0___closed__9);
v___x_250_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__11, &l_elabTestExtern___lam__0___closed__11_once, _init_l_elabTestExtern___lam__0___closed__11);
v___x_251_ = l_Lean_MessageData_ofExpr(v_a_227_);
v___x_252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_250_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__13, &l_elabTestExtern___lam__0___closed__13_once, _init_l_elabTestExtern___lam__0___closed__13);
v___x_254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_252_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
v___x_255_ = l_Lean_MessageData_ofExpr(v_expr_234_);
v___x_256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_254_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_249_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
v___x_258_ = l_Lean_throwError___at___00elabTestExtern_spec__1___redArg(v___x_257_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
return v___x_258_;
}
else
{
lean_object* v___x_259_; lean_object* v___x_261_; 
lean_dec_ref(v_expr_234_);
lean_dec(v_a_227_);
v___x_259_ = lean_box(0);
if (v_isShared_247_ == 0)
{
lean_ctor_set(v___x_246_, 0, v___x_259_);
v___x_261_ = v___x_246_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_259_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
else
{
lean_object* v_a_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
lean_dec_ref(v_expr_234_);
lean_dec(v_a_227_);
v_a_264_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v___x_243_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_243_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_264_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
}
else
{
lean_object* v_a_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_279_; 
lean_dec_ref(v_expr_234_);
lean_dec(v_a_227_);
v_a_272_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_279_ == 0)
{
v___x_274_ = v___x_237_;
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_a_272_);
lean_dec(v___x_237_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_277_; 
if (v_isShared_275_ == 0)
{
v___x_277_ = v___x_274_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_a_272_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
}
else
{
lean_object* v_a_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_287_; 
lean_dec_ref(v_expr_234_);
lean_dec(v_a_227_);
v_a_280_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_287_ == 0)
{
v___x_282_ = v___x_235_;
v_isShared_283_ = v_isSharedCheck_287_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_a_280_);
lean_dec(v___x_235_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_287_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_285_; 
if (v_isShared_283_ == 0)
{
v___x_285_ = v___x_282_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_a_280_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
}
}
else
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_295_; 
lean_dec(v_a_227_);
v_a_288_ = lean_ctor_get(v___x_232_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_295_ == 0)
{
v___x_290_ = v___x_232_;
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___x_232_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_293_; 
if (v_isShared_291_ == 0)
{
v___x_293_ = v___x_290_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_a_288_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
}
v___jp_296_:
{
if (v___y_297_ == 0)
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
lean_dec(v_a_227_);
v___x_298_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__15, &l_elabTestExtern___lam__0___closed__15_once, _init_l_elabTestExtern___lam__0___closed__15);
v___x_299_ = l_Lean_MessageData_ofName(v_declName_229_);
v___x_300_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_298_);
lean_ctor_set(v___x_300_, 1, v___x_299_);
v___x_301_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__17, &l_elabTestExtern___lam__0___closed__17_once, _init_l_elabTestExtern___lam__0___closed__17);
v___x_302_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_300_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v___x_303_ = l_Lean_throwError___at___00elabTestExtern_spec__1___redArg(v___x_302_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
return v___x_303_;
}
else
{
goto v___jp_231_;
}
}
}
else
{
lean_object* v___x_307_; lean_object* v___x_308_; 
lean_dec_ref(v___x_228_);
lean_dec(v_a_227_);
v___x_307_ = lean_obj_once(&l_elabTestExtern___lam__0___closed__19, &l_elabTestExtern___lam__0___closed__19_once, _init_l_elabTestExtern___lam__0___closed__19);
v___x_308_ = l_Lean_throwError___at___00elabTestExtern_spec__1___redArg(v___x_307_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
return v___x_308_;
}
}
else
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
v_a_309_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_226_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_226_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_elabTestExtern___lam__0___boxed(lean_object* v___x_317_, lean_object* v___x_318_, lean_object* v___x_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_){
_start:
{
uint8_t v___x_5061__boxed_327_; lean_object* v_res_328_; 
v___x_5061__boxed_327_ = lean_unbox(v___x_319_);
v_res_328_ = l_elabTestExtern___lam__0(v___x_317_, v___x_318_, v___x_5061__boxed_327_, v___y_320_, v___y_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_);
lean_dec(v___y_325_);
lean_dec_ref(v___y_324_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
lean_dec(v___y_321_);
lean_dec_ref(v___y_320_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_elabTestExtern(lean_object* v_x_329_, lean_object* v_a_330_, lean_object* v_a_331_){
_start:
{
lean_object* v___x_333_; uint8_t v___x_334_; 
v___x_333_ = lean_obj_once(&l_testExternCmd___closed__1, &l_testExternCmd___closed__1_once, _init_l_testExternCmd___closed__1);
lean_inc(v_x_329_);
v___x_334_ = l_Lean_Syntax_isOfKind(v_x_329_, v___x_333_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; 
lean_dec(v_x_329_);
v___x_335_ = l_Lean_Elab_throwUnsupportedSyntax___at___00elabTestExtern_spec__0___redArg();
return v___x_335_;
}
else
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___f_340_; lean_object* v___x_341_; 
v___x_336_ = lean_unsigned_to_nat(1u);
v___x_337_ = l_Lean_Syntax_getArg(v_x_329_, v___x_336_);
lean_dec(v_x_329_);
v___x_338_ = lean_box(0);
v___x_339_ = lean_box(v___x_334_);
v___f_340_ = lean_alloc_closure((void*)(l_elabTestExtern___lam__0___boxed), 10, 3);
lean_closure_set(v___f_340_, 0, v___x_337_);
lean_closure_set(v___f_340_, 1, v___x_338_);
lean_closure_set(v___f_340_, 2, v___x_339_);
v___x_341_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___f_340_, v_a_330_, v_a_331_);
return v___x_341_;
}
}
}
LEAN_EXPORT lean_object* l_elabTestExtern___boxed(lean_object* v_x_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_elabTestExtern(v_x_342_, v_a_343_, v_a_344_);
lean_dec(v_a_344_);
lean_dec_ref(v_a_343_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00elabTestExtern_spec__1(lean_object* v_00_u03b1_347_, lean_object* v_msg_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = l_Lean_throwError___at___00elabTestExtern_spec__1___redArg(v_msg_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00elabTestExtern_spec__1___boxed(lean_object* v_00_u03b1_357_, lean_object* v_msg_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_Lean_throwError___at___00elabTestExtern_spec__1(v_00_u03b1_357_, v_msg_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_);
lean_dec(v___y_364_);
lean_dec_ref(v___y_363_);
lean_dec(v___y_362_);
lean_dec_ref(v___y_361_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2(lean_object* v_msgData_367_, lean_object* v_macroStack_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___redArg(v_msgData_367_, v_macroStack_368_, v___y_373_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2___boxed(lean_object* v_msgData_377_, lean_object* v_macroStack_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00elabTestExtern_spec__1_spec__2(v_msgData_377_, v_macroStack_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
lean_dec(v___y_380_);
lean_dec_ref(v___y_379_);
return v_res_386_;
}
}
lean_object* runtime_initialize_Init_Notation(uint8_t builtin);
lean_object* runtime_initialize_Lean_Exception(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_TestExtern(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Unfold(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Eval(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ExternAttr(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_TestExtern(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Unfold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ExternAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_testExternCmd = _init_l_testExternCmd();
lean_mark_persistent(l_testExternCmd);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Unfold(uint8_t builtin);
lean_object* initialize_Lean_Meta_Eval(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Init_Notation(uint8_t builtin);
lean_object* initialize_Lean_Exception(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ExternAttr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_TestExtern(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Unfold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ExternAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_TestExtern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_TestExtern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_TestExtern(builtin);
}
#ifdef __cplusplus
}
#endif
