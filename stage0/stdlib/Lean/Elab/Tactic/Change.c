// Lean compiler output
// Module: Lean.Elab.Tactic.Change
// Imports: public import Lean.Meta.Tactic.Replace public import Lean.Elab.Tactic.Location
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainTag___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_runTermElab___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_addPPExplicitToExposeDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofLazyM(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_changeLocalDecl(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_mkOptionalNode(lean_object*);
lean_object* l_Lean_Elab_Tactic_expandOptLocation(lean_object*);
lean_object* l_Lean_Elab_Tactic_withLocation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChangeDefaultError___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChangeDefaultError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChangeDefaultError___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabChange_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabChange_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabChange_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabChange_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChange___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChange___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChange___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChange___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalChange___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalChange___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_evalChange___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalChange___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalChange___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalChange___lam__2___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalChange___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalChange___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_evalChange___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalChange___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_evalChange___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalChange___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_evalChange___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalChange___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_evalChange___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalChange___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_evalChange___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalChange___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_evalChange___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalChange___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_evalChange___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalChange___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange_docString__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange_docString__3___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange_docString__3___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("'change' tactic failed, pattern", 31, 31);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__0, &l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__0);
v___x_3_ = l_Lean_stringToMessageData(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__2(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("\nis not definitionally equal to target", 38, 38);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__3(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__2, &l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__2);
v___x_6_ = l_Lean_stringToMessageData(v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChangeDefaultError___redArg(lean_object* v_p_7_, lean_object* v_tgt_8_){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_10_ = lean_obj_once(&l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__1, &l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__1);
v___x_11_ = l_Lean_indentExpr(v_p_7_);
v___x_12_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_12_, 0, v___x_10_);
lean_ctor_set(v___x_12_, 1, v___x_11_);
v___x_13_ = lean_obj_once(&l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__3, &l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__3_once, _init_l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___closed__3);
v___x_14_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_14_, 0, v___x_12_);
lean_ctor_set(v___x_14_, 1, v___x_13_);
v___x_15_ = l_Lean_indentExpr(v_tgt_8_);
v___x_16_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_16_, 0, v___x_14_);
lean_ctor_set(v___x_16_, 1, v___x_15_);
v___x_17_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChangeDefaultError___redArg___boxed(lean_object* v_p_18_, lean_object* v_tgt_19_, lean_object* v_a_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Lean_Elab_Tactic_elabChangeDefaultError___redArg(v_p_18_, v_tgt_19_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChangeDefaultError(lean_object* v_p_22_, lean_object* v_tgt_23_, lean_object* v_a_24_, lean_object* v_a_25_, lean_object* v_a_26_, lean_object* v_a_27_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_Elab_Tactic_elabChangeDefaultError___redArg(v_p_22_, v_tgt_23_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChangeDefaultError___boxed(lean_object* v_p_30_, lean_object* v_tgt_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_Elab_Tactic_elabChangeDefaultError(v_p_30_, v_tgt_31_, v_a_32_, v_a_33_, v_a_34_, v_a_35_);
lean_dec(v_a_35_);
lean_dec_ref(v_a_34_);
lean_dec(v_a_33_);
lean_dec_ref(v_a_32_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabChange_spec__1___redArg(lean_object* v_e_38_, lean_object* v___y_39_, lean_object* v___y_40_){
_start:
{
uint8_t v___x_42_; 
v___x_42_ = l_Lean_Expr_hasMVar(v_e_38_);
if (v___x_42_ == 0)
{
lean_object* v___x_43_; 
v___x_43_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_43_, 0, v_e_38_);
return v___x_43_;
}
else
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v_mctx_46_; lean_object* v___x_47_; lean_object* v_fst_48_; lean_object* v_snd_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v_cache_52_; lean_object* v_zetaDeltaFVarIds_53_; lean_object* v_postponed_54_; lean_object* v_diag_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_64_; 
v___x_44_ = lean_st_ref_get(v___y_40_);
lean_dec(v___x_44_);
v___x_45_ = lean_st_ref_get(v___y_39_);
v_mctx_46_ = lean_ctor_get(v___x_45_, 0);
lean_inc_ref(v_mctx_46_);
lean_dec(v___x_45_);
v___x_47_ = l_Lean_instantiateMVarsCore(v_mctx_46_, v_e_38_);
v_fst_48_ = lean_ctor_get(v___x_47_, 0);
lean_inc(v_fst_48_);
v_snd_49_ = lean_ctor_get(v___x_47_, 1);
lean_inc(v_snd_49_);
lean_dec_ref(v___x_47_);
v___x_50_ = lean_st_ref_get(v___y_40_);
lean_dec(v___x_50_);
v___x_51_ = lean_st_ref_take(v___y_39_);
v_cache_52_ = lean_ctor_get(v___x_51_, 1);
v_zetaDeltaFVarIds_53_ = lean_ctor_get(v___x_51_, 2);
v_postponed_54_ = lean_ctor_get(v___x_51_, 3);
v_diag_55_ = lean_ctor_get(v___x_51_, 4);
v_isSharedCheck_64_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_64_ == 0)
{
lean_object* v_unused_65_; 
v_unused_65_ = lean_ctor_get(v___x_51_, 0);
lean_dec(v_unused_65_);
v___x_57_ = v___x_51_;
v_isShared_58_ = v_isSharedCheck_64_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_diag_55_);
lean_inc(v_postponed_54_);
lean_inc(v_zetaDeltaFVarIds_53_);
lean_inc(v_cache_52_);
lean_dec(v___x_51_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_64_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_60_; 
if (v_isShared_58_ == 0)
{
lean_ctor_set(v___x_57_, 0, v_snd_49_);
v___x_60_ = v___x_57_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v_snd_49_);
lean_ctor_set(v_reuseFailAlloc_63_, 1, v_cache_52_);
lean_ctor_set(v_reuseFailAlloc_63_, 2, v_zetaDeltaFVarIds_53_);
lean_ctor_set(v_reuseFailAlloc_63_, 3, v_postponed_54_);
lean_ctor_set(v_reuseFailAlloc_63_, 4, v_diag_55_);
v___x_60_ = v_reuseFailAlloc_63_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_st_ref_set(v___y_39_, v___x_60_);
v___x_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_62_, 0, v_fst_48_);
return v___x_62_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabChange_spec__1___redArg___boxed(lean_object* v_e_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabChange_spec__1___redArg(v_e_66_, v___y_67_, v___y_68_);
lean_dec(v___y_68_);
lean_dec(v___y_67_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabChange_spec__1(lean_object* v_e_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabChange_spec__1___redArg(v_e_71_, v___y_77_, v___y_79_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabChange_spec__1___boxed(lean_object* v_e_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabChange_spec__1(v_e_82_, v___y_83_, v___y_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_);
lean_dec(v___y_90_);
lean_dec_ref(v___y_89_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
lean_dec(v___y_86_);
lean_dec_ref(v___y_85_);
lean_dec(v___y_84_);
lean_dec_ref(v___y_83_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChange___lam__0(lean_object* v_e_93_, lean_object* v_p_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v___x_102_; 
lean_inc(v___y_100_);
lean_inc_ref(v___y_99_);
lean_inc(v___y_98_);
lean_inc_ref(v___y_97_);
lean_inc_ref(v_e_93_);
v___x_102_ = lean_infer_type(v_e_93_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
if (lean_obj_tag(v___x_102_) == 0)
{
lean_object* v_a_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_160_; 
v_a_103_ = lean_ctor_get(v___x_102_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_102_);
if (v_isSharedCheck_160_ == 0)
{
v___x_105_ = v___x_102_;
v_isShared_106_ = v_isSharedCheck_160_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_a_103_);
lean_dec(v___x_102_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_160_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_108_; 
if (v_isShared_106_ == 0)
{
lean_ctor_set_tag(v___x_105_, 1);
v___x_108_ = v___x_105_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_a_103_);
v___x_108_ = v_reuseFailAlloc_159_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
uint8_t v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_109_ = 1;
v___x_110_ = lean_box(0);
v___x_111_ = l_Lean_Elab_Term_elabTermEnsuringType(v_p_94_, v___x_108_, v___x_109_, v___x_109_, v___x_110_, v___y_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
if (lean_obj_tag(v___x_111_) == 0)
{
lean_object* v_a_112_; lean_object* v___x_113_; 
v_a_112_ = lean_ctor_get(v___x_111_, 0);
lean_inc_n(v_a_112_, 2);
lean_dec_ref(v___x_111_);
lean_inc_ref(v_e_93_);
v___x_113_ = l_Lean_Meta_isExprDefEq(v_a_112_, v_e_93_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_150_; 
v_a_114_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_150_ == 0)
{
v___x_116_ = v___x_113_;
v_isShared_117_ = v_isSharedCheck_150_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___x_113_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_150_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
uint8_t v___x_118_; 
v___x_118_ = lean_unbox(v_a_114_);
if (v___x_118_ == 0)
{
uint8_t v___x_119_; uint8_t v___x_120_; lean_object* v___x_121_; 
lean_del_object(v___x_116_);
v___x_119_ = 2;
v___x_120_ = lean_unbox(v_a_114_);
lean_dec(v_a_114_);
v___x_121_ = l_Lean_Elab_Term_synthesizeSyntheticMVars(v___x_119_, v___x_120_, v___y_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v___x_122_; 
lean_dec_ref(v___x_121_);
lean_inc(v_a_112_);
v___x_122_ = l_Lean_Meta_isExprDefEq(v_a_112_, v_e_93_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
if (lean_obj_tag(v___x_122_) == 0)
{
lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_129_; 
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_129_ == 0)
{
lean_object* v_unused_130_; 
v_unused_130_ = lean_ctor_get(v___x_122_, 0);
lean_dec(v_unused_130_);
v___x_124_ = v___x_122_;
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
else
{
lean_dec(v___x_122_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 0, v_a_112_);
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_a_112_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
else
{
lean_object* v_a_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_138_; 
lean_dec(v_a_112_);
v_a_131_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_138_ == 0)
{
v___x_133_ = v___x_122_;
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_a_131_);
lean_dec(v___x_122_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v___x_136_; 
if (v_isShared_134_ == 0)
{
v___x_136_ = v___x_133_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_a_131_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
}
else
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_146_; 
lean_dec(v_a_112_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec_ref(v_e_93_);
v_a_139_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_146_ == 0)
{
v___x_141_ = v___x_121_;
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v___x_121_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_a_139_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
}
else
{
lean_object* v___x_148_; 
lean_dec(v_a_114_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec_ref(v_e_93_);
if (v_isShared_117_ == 0)
{
lean_ctor_set(v___x_116_, 0, v_a_112_);
v___x_148_ = v___x_116_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_a_112_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
}
else
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_158_; 
lean_dec(v_a_112_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec_ref(v_e_93_);
v_a_151_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_158_ == 0)
{
v___x_153_ = v___x_113_;
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_113_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_156_; 
if (v_isShared_154_ == 0)
{
v___x_156_ = v___x_153_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_a_151_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
}
else
{
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec_ref(v_e_93_);
return v___x_111_;
}
}
}
}
else
{
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v_p_94_);
lean_dec_ref(v_e_93_);
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChange___lam__0___boxed(lean_object* v_e_161_, lean_object* v_p_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Lean_Elab_Tactic_elabChange___lam__0(v_e_161_, v_p_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChange___lam__1(lean_object* v_a_171_, lean_object* v_e_172_, lean_object* v_mkDefeqError_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = l_Lean_Meta_addPPExplicitToExposeDiff(v_a_171_, v_e_172_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
if (lean_obj_tag(v___x_179_) == 0)
{
lean_object* v_a_180_; lean_object* v_fst_181_; lean_object* v_snd_182_; lean_object* v___x_183_; 
v_a_180_ = lean_ctor_get(v___x_179_, 0);
lean_inc(v_a_180_);
lean_dec_ref(v___x_179_);
v_fst_181_ = lean_ctor_get(v_a_180_, 0);
lean_inc(v_fst_181_);
v_snd_182_ = lean_ctor_get(v_a_180_, 1);
lean_inc(v_snd_182_);
lean_dec(v_a_180_);
v___x_183_ = lean_apply_7(v_mkDefeqError_173_, v_fst_181_, v_snd_182_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, lean_box(0));
return v___x_183_;
}
else
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec_ref(v_mkDefeqError_173_);
v_a_184_ = lean_ctor_get(v___x_179_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_179_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_179_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_179_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_a_184_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChange___lam__1___boxed(lean_object* v_a_192_, lean_object* v_e_193_, lean_object* v_mkDefeqError_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Lean_Elab_Tactic_elabChange___lam__1(v_a_192_, v_e_193_, v_mkDefeqError_194_, v___y_195_, v___y_196_, v___y_197_, v___y_198_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0_spec__0(lean_object* v_msgData_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v___x_207_; lean_object* v_env_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v_mctx_211_; lean_object* v_lctx_212_; lean_object* v_options_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_207_ = lean_st_ref_get(v___y_205_);
v_env_208_ = lean_ctor_get(v___x_207_, 0);
lean_inc_ref(v_env_208_);
lean_dec(v___x_207_);
v___x_209_ = lean_st_ref_get(v___y_205_);
lean_dec(v___x_209_);
v___x_210_ = lean_st_ref_get(v___y_203_);
v_mctx_211_ = lean_ctor_get(v___x_210_, 0);
lean_inc_ref(v_mctx_211_);
lean_dec(v___x_210_);
v_lctx_212_ = lean_ctor_get(v___y_202_, 2);
v_options_213_ = lean_ctor_get(v___y_204_, 2);
lean_inc_ref(v_options_213_);
lean_inc_ref(v_lctx_212_);
v___x_214_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_214_, 0, v_env_208_);
lean_ctor_set(v___x_214_, 1, v_mctx_211_);
lean_ctor_set(v___x_214_, 2, v_lctx_212_);
lean_ctor_set(v___x_214_, 3, v_options_213_);
v___x_215_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
lean_ctor_set(v___x_215_, 1, v_msgData_201_);
v___x_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0_spec__0___boxed(lean_object* v_msgData_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0_spec__0(v_msgData_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
lean_dec(v___y_219_);
lean_dec_ref(v___y_218_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0___redArg(lean_object* v_msg_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_){
_start:
{
lean_object* v_ref_230_; lean_object* v___x_231_; lean_object* v_a_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_240_; 
v_ref_230_ = lean_ctor_get(v___y_227_, 5);
v___x_231_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0_spec__0(v_msg_224_, v___y_225_, v___y_226_, v___y_227_, v___y_228_);
v_a_232_ = lean_ctor_get(v___x_231_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_240_ == 0)
{
v___x_234_ = v___x_231_;
v_isShared_235_ = v_isSharedCheck_240_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_a_232_);
lean_dec(v___x_231_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_240_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_236_; lean_object* v___x_238_; 
lean_inc(v_ref_230_);
v___x_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_236_, 0, v_ref_230_);
lean_ctor_set(v___x_236_, 1, v_a_232_);
if (v_isShared_235_ == 0)
{
lean_ctor_set_tag(v___x_234_, 1);
lean_ctor_set(v___x_234_, 0, v___x_236_);
v___x_238_ = v___x_234_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_236_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0___redArg___boxed(lean_object* v_msg_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0___redArg(v_msg_241_, v___y_242_, v___y_243_, v___y_244_, v___y_245_);
lean_dec(v___y_245_);
lean_dec_ref(v___y_244_);
lean_dec(v___y_243_);
lean_dec_ref(v___y_242_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChange(lean_object* v_e_248_, lean_object* v_p_249_, lean_object* v_mkDefeqError_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_){
_start:
{
lean_object* v___y_261_; lean_object* v___f_270_; uint8_t v___x_271_; lean_object* v___x_272_; 
lean_inc_ref(v_e_248_);
v___f_270_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabChange___lam__0___boxed), 9, 2);
lean_closure_set(v___f_270_, 0, v_e_248_);
lean_closure_set(v___f_270_, 1, v_p_249_);
v___x_271_ = 0;
v___x_272_ = l_Lean_Elab_Tactic_runTermElab___redArg(v___f_270_, v___x_271_, v_a_251_, v_a_252_, v_a_253_, v_a_254_, v_a_255_, v_a_256_, v_a_257_, v_a_258_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v_a_273_; lean_object* v___x_274_; uint8_t v_foApprox_275_; uint8_t v_ctxApprox_276_; uint8_t v_quasiPatternApprox_277_; uint8_t v_constApprox_278_; uint8_t v_isDefEqStuckEx_279_; uint8_t v_unificationHints_280_; uint8_t v_proofIrrelevance_281_; uint8_t v_offsetCnstrs_282_; uint8_t v_transparency_283_; uint8_t v_etaStruct_284_; uint8_t v_univApprox_285_; uint8_t v_iota_286_; uint8_t v_beta_287_; uint8_t v_proj_288_; uint8_t v_zeta_289_; uint8_t v_zetaDelta_290_; uint8_t v_zetaUnused_291_; uint8_t v_zetaHave_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_340_; 
v_a_273_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_a_273_);
lean_dec_ref(v___x_272_);
v___x_274_ = l_Lean_Meta_Context_config(v_a_255_);
v_foApprox_275_ = lean_ctor_get_uint8(v___x_274_, 0);
v_ctxApprox_276_ = lean_ctor_get_uint8(v___x_274_, 1);
v_quasiPatternApprox_277_ = lean_ctor_get_uint8(v___x_274_, 2);
v_constApprox_278_ = lean_ctor_get_uint8(v___x_274_, 3);
v_isDefEqStuckEx_279_ = lean_ctor_get_uint8(v___x_274_, 4);
v_unificationHints_280_ = lean_ctor_get_uint8(v___x_274_, 5);
v_proofIrrelevance_281_ = lean_ctor_get_uint8(v___x_274_, 6);
v_offsetCnstrs_282_ = lean_ctor_get_uint8(v___x_274_, 8);
v_transparency_283_ = lean_ctor_get_uint8(v___x_274_, 9);
v_etaStruct_284_ = lean_ctor_get_uint8(v___x_274_, 10);
v_univApprox_285_ = lean_ctor_get_uint8(v___x_274_, 11);
v_iota_286_ = lean_ctor_get_uint8(v___x_274_, 12);
v_beta_287_ = lean_ctor_get_uint8(v___x_274_, 13);
v_proj_288_ = lean_ctor_get_uint8(v___x_274_, 14);
v_zeta_289_ = lean_ctor_get_uint8(v___x_274_, 15);
v_zetaDelta_290_ = lean_ctor_get_uint8(v___x_274_, 16);
v_zetaUnused_291_ = lean_ctor_get_uint8(v___x_274_, 17);
v_zetaHave_292_ = lean_ctor_get_uint8(v___x_274_, 18);
v_isSharedCheck_340_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_340_ == 0)
{
v___x_294_ = v___x_274_;
v_isShared_295_ = v_isSharedCheck_340_;
goto v_resetjp_293_;
}
else
{
lean_dec(v___x_274_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_340_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
uint8_t v_trackZetaDelta_296_; lean_object* v_zetaDeltaSet_297_; lean_object* v_lctx_298_; lean_object* v_localInstances_299_; lean_object* v_defEqCtx_x3f_300_; lean_object* v_synthPendingDepth_301_; lean_object* v_canUnfold_x3f_302_; uint8_t v_univApprox_303_; uint8_t v_inTypeClassResolution_304_; uint8_t v_cacheInferType_305_; uint8_t v___x_306_; lean_object* v___x_308_; 
v_trackZetaDelta_296_ = lean_ctor_get_uint8(v_a_255_, sizeof(void*)*7);
v_zetaDeltaSet_297_ = lean_ctor_get(v_a_255_, 1);
v_lctx_298_ = lean_ctor_get(v_a_255_, 2);
v_localInstances_299_ = lean_ctor_get(v_a_255_, 3);
v_defEqCtx_x3f_300_ = lean_ctor_get(v_a_255_, 4);
v_synthPendingDepth_301_ = lean_ctor_get(v_a_255_, 5);
v_canUnfold_x3f_302_ = lean_ctor_get(v_a_255_, 6);
v_univApprox_303_ = lean_ctor_get_uint8(v_a_255_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_304_ = lean_ctor_get_uint8(v_a_255_, sizeof(void*)*7 + 2);
v_cacheInferType_305_ = lean_ctor_get_uint8(v_a_255_, sizeof(void*)*7 + 3);
v___x_306_ = 1;
if (v_isShared_295_ == 0)
{
v___x_308_ = v___x_294_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 0, v_foApprox_275_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 1, v_ctxApprox_276_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 2, v_quasiPatternApprox_277_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 3, v_constApprox_278_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 4, v_isDefEqStuckEx_279_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 5, v_unificationHints_280_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 6, v_proofIrrelevance_281_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 8, v_offsetCnstrs_282_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 9, v_transparency_283_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 10, v_etaStruct_284_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 11, v_univApprox_285_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 12, v_iota_286_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 13, v_beta_287_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 14, v_proj_288_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 15, v_zeta_289_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 16, v_zetaDelta_290_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 17, v_zetaUnused_291_);
lean_ctor_set_uint8(v_reuseFailAlloc_339_, 18, v_zetaHave_292_);
v___x_308_ = v_reuseFailAlloc_339_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
uint64_t v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
lean_ctor_set_uint8(v___x_308_, 7, v___x_306_);
v___x_309_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_308_);
v___x_310_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_310_, 0, v___x_308_);
lean_ctor_set_uint64(v___x_310_, sizeof(void*)*1, v___x_309_);
lean_inc(v_canUnfold_x3f_302_);
lean_inc(v_synthPendingDepth_301_);
lean_inc(v_defEqCtx_x3f_300_);
lean_inc_ref(v_localInstances_299_);
lean_inc_ref(v_lctx_298_);
lean_inc(v_zetaDeltaSet_297_);
v___x_311_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_311_, 0, v___x_310_);
lean_ctor_set(v___x_311_, 1, v_zetaDeltaSet_297_);
lean_ctor_set(v___x_311_, 2, v_lctx_298_);
lean_ctor_set(v___x_311_, 3, v_localInstances_299_);
lean_ctor_set(v___x_311_, 4, v_defEqCtx_x3f_300_);
lean_ctor_set(v___x_311_, 5, v_synthPendingDepth_301_);
lean_ctor_set(v___x_311_, 6, v_canUnfold_x3f_302_);
lean_ctor_set_uint8(v___x_311_, sizeof(void*)*7, v_trackZetaDelta_296_);
lean_ctor_set_uint8(v___x_311_, sizeof(void*)*7 + 1, v_univApprox_303_);
lean_ctor_set_uint8(v___x_311_, sizeof(void*)*7 + 2, v_inTypeClassResolution_304_);
lean_ctor_set_uint8(v___x_311_, sizeof(void*)*7 + 3, v_cacheInferType_305_);
lean_inc_ref(v_e_248_);
lean_inc(v_a_273_);
v___x_312_ = l_Lean_Meta_isExprDefEq(v_a_273_, v_e_248_, v___x_311_, v_a_256_, v_a_257_, v_a_258_);
if (lean_obj_tag(v___x_312_) == 0)
{
lean_object* v_a_313_; uint8_t v___x_314_; 
v_a_313_ = lean_ctor_get(v___x_312_, 0);
lean_inc(v_a_313_);
lean_dec_ref(v___x_312_);
v___x_314_ = lean_unbox(v_a_313_);
lean_dec(v_a_313_);
if (v___x_314_ == 0)
{
lean_object* v___f_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v_a_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_329_; 
lean_inc_ref(v_e_248_);
lean_inc(v_a_273_);
v___f_315_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabChange___lam__1___boxed), 8, 3);
lean_closure_set(v___f_315_, 0, v_a_273_);
lean_closure_set(v___f_315_, 1, v_e_248_);
lean_closure_set(v___f_315_, 2, v_mkDefeqError_250_);
v___x_316_ = lean_unsigned_to_nat(2u);
v___x_317_ = lean_mk_empty_array_with_capacity(v___x_316_);
v___x_318_ = lean_array_push(v___x_317_, v_a_273_);
v___x_319_ = lean_array_push(v___x_318_, v_e_248_);
v___x_320_ = l_Lean_MessageData_ofLazyM(v___f_315_, v___x_319_);
v___x_321_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0___redArg(v___x_320_, v___x_311_, v_a_256_, v_a_257_, v_a_258_);
lean_dec_ref(v___x_311_);
v_a_322_ = lean_ctor_get(v___x_321_, 0);
v_isSharedCheck_329_ = !lean_is_exclusive(v___x_321_);
if (v_isSharedCheck_329_ == 0)
{
v___x_324_ = v___x_321_;
v_isShared_325_ = v_isSharedCheck_329_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_a_322_);
lean_dec(v___x_321_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_329_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___x_327_; 
if (v_isShared_325_ == 0)
{
v___x_327_ = v___x_324_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v_a_322_);
v___x_327_ = v_reuseFailAlloc_328_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
return v___x_327_;
}
}
}
else
{
lean_object* v___x_330_; 
lean_dec_ref(v___x_311_);
lean_dec_ref(v_mkDefeqError_250_);
lean_dec_ref(v_e_248_);
v___x_330_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabChange_spec__1___redArg(v_a_273_, v_a_256_, v_a_258_);
v___y_261_ = v___x_330_;
goto v___jp_260_;
}
}
else
{
lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_338_; 
lean_dec_ref(v___x_311_);
lean_dec(v_a_273_);
lean_dec_ref(v_mkDefeqError_250_);
lean_dec_ref(v_e_248_);
v_a_331_ = lean_ctor_get(v___x_312_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_312_);
if (v_isSharedCheck_338_ == 0)
{
v___x_333_ = v___x_312_;
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_312_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_336_; 
if (v_isShared_334_ == 0)
{
v___x_336_ = v___x_333_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_a_331_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_mkDefeqError_250_);
lean_dec_ref(v_e_248_);
return v___x_272_;
}
v___jp_260_:
{
lean_object* v_a_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_269_; 
v_a_262_ = lean_ctor_get(v___y_261_, 0);
v_isSharedCheck_269_ = !lean_is_exclusive(v___y_261_);
if (v_isSharedCheck_269_ == 0)
{
v___x_264_ = v___y_261_;
v_isShared_265_ = v_isSharedCheck_269_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_a_262_);
lean_dec(v___y_261_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_269_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___x_267_; 
if (v_isShared_265_ == 0)
{
v___x_267_ = v___x_264_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_a_262_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabChange___boxed(lean_object* v_e_341_, lean_object* v_p_342_, lean_object* v_mkDefeqError_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Lean_Elab_Tactic_elabChange(v_e_341_, v_p_342_, v_mkDefeqError_343_, v_a_344_, v_a_345_, v_a_346_, v_a_347_, v_a_348_, v_a_349_, v_a_350_, v_a_351_);
lean_dec(v_a_351_);
lean_dec_ref(v_a_350_);
lean_dec(v_a_349_);
lean_dec_ref(v_a_348_);
lean_dec(v_a_347_);
lean_dec_ref(v_a_346_);
lean_dec(v_a_345_);
lean_dec_ref(v_a_344_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0(lean_object* v_00_u03b1_354_, lean_object* v_msg_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0___redArg(v_msg_355_, v___y_360_, v___y_361_, v___y_362_, v___y_363_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0___boxed(lean_object* v_00_u03b1_366_, lean_object* v_msg_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0(v_00_u03b1_366_, v_msg_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec(v___y_373_);
lean_dec_ref(v___y_372_);
lean_dec(v___y_371_);
lean_dec_ref(v___y_370_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
return v_res_377_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_378_ = lean_box(0);
v___x_379_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_380_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
lean_ctor_set(v___x_380_, 1, v___x_378_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0___redArg(){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_382_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0___redArg___closed__0);
v___x_383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0___redArg___boxed(lean_object* v___y_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0___redArg();
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0(lean_object* v_00_u03b1_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_){
_start:
{
lean_object* v___x_396_; 
v___x_396_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0___redArg();
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0___boxed(lean_object* v_00_u03b1_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0(v_00_u03b1_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
lean_dec(v___y_401_);
lean_dec_ref(v___y_400_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
return v_res_407_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalChange___lam__0___closed__0(void){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = lean_mk_string_unchecked("'change' tactic failed", 22, 22);
return v___x_408_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalChange___lam__0___closed__1(void){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___lam__0___closed__0, &l_Lean_Elab_Tactic_evalChange___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_evalChange___lam__0___closed__0);
v___x_410_ = l_Lean_stringToMessageData(v___x_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__0(lean_object* v_x_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___lam__0___closed__1, &l_Lean_Elab_Tactic_evalChange___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_evalChange___lam__0___closed__1);
v___x_422_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabChange_spec__0___redArg(v___x_421_, v___y_416_, v___y_417_, v___y_418_, v___y_419_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__0___boxed(lean_object* v_x_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lean_Elab_Tactic_evalChange___lam__0(v_x_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_);
lean_dec(v___y_431_);
lean_dec_ref(v___y_430_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
lean_dec(v___y_427_);
lean_dec_ref(v___y_426_);
lean_dec(v___y_425_);
lean_dec_ref(v___y_424_);
lean_dec(v_x_423_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__1(lean_object* v_fst_434_, lean_object* v_snd_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_437_, v___y_440_, v___y_441_, v___y_442_, v___y_443_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v_a_446_; lean_object* v___x_447_; 
v_a_446_ = lean_ctor_get(v___x_445_, 0);
lean_inc(v_a_446_);
lean_dec_ref(v___x_445_);
v___x_447_ = l_Lean_MVarId_replaceTargetDefEq(v_a_446_, v_fst_434_, v___y_440_, v___y_441_, v___y_442_, v___y_443_);
if (lean_obj_tag(v___x_447_) == 0)
{
lean_object* v_a_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v_a_448_ = lean_ctor_get(v___x_447_, 0);
lean_inc(v_a_448_);
lean_dec_ref(v___x_447_);
v___x_449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_449_, 0, v_a_448_);
lean_ctor_set(v___x_449_, 1, v_snd_435_);
v___x_450_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_449_, v___y_437_, v___y_440_, v___y_441_, v___y_442_, v___y_443_);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_458_; 
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_458_ == 0)
{
lean_object* v_unused_459_; 
v_unused_459_ = lean_ctor_get(v___x_450_, 0);
lean_dec(v_unused_459_);
v___x_452_ = v___x_450_;
v_isShared_453_ = v_isSharedCheck_458_;
goto v_resetjp_451_;
}
else
{
lean_dec(v___x_450_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_458_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_454_; lean_object* v___x_456_; 
v___x_454_ = lean_box(0);
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 0, v___x_454_);
v___x_456_ = v___x_452_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v___x_454_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
else
{
return v___x_450_;
}
}
else
{
lean_object* v_a_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_467_; 
lean_dec(v_snd_435_);
v_a_460_ = lean_ctor_get(v___x_447_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_467_ == 0)
{
v___x_462_ = v___x_447_;
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_a_460_);
lean_dec(v___x_447_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_465_; 
if (v_isShared_463_ == 0)
{
v___x_465_ = v___x_462_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_a_460_);
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
lean_object* v_a_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_475_; 
lean_dec(v_snd_435_);
lean_dec_ref(v_fst_434_);
v_a_468_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_475_ == 0)
{
v___x_470_ = v___x_445_;
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_a_468_);
lean_dec(v___x_445_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_473_; 
if (v_isShared_471_ == 0)
{
v___x_473_ = v___x_470_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_a_468_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__1___boxed(lean_object* v_fst_476_, lean_object* v_snd_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Lean_Elab_Tactic_evalChange___lam__1(v_fst_476_, v_snd_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
lean_dec(v___y_481_);
lean_dec_ref(v___y_480_);
lean_dec(v___y_479_);
lean_dec_ref(v___y_478_);
return v_res_487_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalChange___lam__2___closed__0(void){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabChangeDefaultError___boxed), 7, 0);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__2(lean_object* v_newType_489_, lean_object* v___x_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = l_Lean_Elab_Tactic_getMainTarget(v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
if (lean_obj_tag(v___x_500_) == 0)
{
lean_object* v_a_501_; lean_object* v___x_502_; 
v_a_501_ = lean_ctor_get(v___x_500_, 0);
lean_inc(v_a_501_);
lean_dec_ref(v___x_500_);
v___x_502_ = l_Lean_Elab_Tactic_getMainTag___redArg(v___y_492_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v_a_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; uint8_t v___x_507_; lean_object* v___x_508_; 
v_a_503_ = lean_ctor_get(v___x_502_, 0);
lean_inc(v_a_503_);
lean_dec_ref(v___x_502_);
v___x_504_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___lam__2___closed__0, &l_Lean_Elab_Tactic_evalChange___lam__2___closed__0_once, _init_l_Lean_Elab_Tactic_evalChange___lam__2___closed__0);
v___x_505_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabChange___boxed), 12, 3);
lean_closure_set(v___x_505_, 0, v_a_501_);
lean_closure_set(v___x_505_, 1, v_newType_489_);
lean_closure_set(v___x_505_, 2, v___x_504_);
v___x_506_ = l_Lean_Name_mkStr1(v___x_490_);
v___x_507_ = 0;
v___x_508_ = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(v___x_505_, v_a_503_, v___x_506_, v___x_507_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
if (lean_obj_tag(v___x_508_) == 0)
{
lean_object* v_a_509_; lean_object* v_fst_510_; lean_object* v_snd_511_; lean_object* v___f_512_; lean_object* v___x_513_; 
v_a_509_ = lean_ctor_get(v___x_508_, 0);
lean_inc(v_a_509_);
lean_dec_ref(v___x_508_);
v_fst_510_ = lean_ctor_get(v_a_509_, 0);
lean_inc(v_fst_510_);
v_snd_511_ = lean_ctor_get(v_a_509_, 1);
lean_inc(v_snd_511_);
lean_dec(v_a_509_);
v___f_512_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalChange___lam__1___boxed), 11, 2);
lean_closure_set(v___f_512_, 0, v_fst_510_);
lean_closure_set(v___f_512_, 1, v_snd_511_);
v___x_513_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_512_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
return v___x_513_;
}
else
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_521_; 
v_a_514_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_521_ == 0)
{
v___x_516_ = v___x_508_;
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_508_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_519_; 
if (v_isShared_517_ == 0)
{
v___x_519_ = v___x_516_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_a_514_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
}
}
else
{
lean_object* v_a_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_529_; 
lean_dec(v_a_501_);
lean_dec_ref(v___x_490_);
lean_dec(v_newType_489_);
v_a_522_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_529_ == 0)
{
v___x_524_ = v___x_502_;
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_a_522_);
lean_dec(v___x_502_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_527_; 
if (v_isShared_525_ == 0)
{
v___x_527_ = v___x_524_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v_a_522_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
}
}
else
{
lean_object* v_a_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_537_; 
lean_dec_ref(v___x_490_);
lean_dec(v_newType_489_);
v_a_530_ = lean_ctor_get(v___x_500_, 0);
v_isSharedCheck_537_ = !lean_is_exclusive(v___x_500_);
if (v_isSharedCheck_537_ == 0)
{
v___x_532_ = v___x_500_;
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_a_530_);
lean_dec(v___x_500_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___x_535_; 
if (v_isShared_533_ == 0)
{
v___x_535_ = v___x_532_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_a_530_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
return v___x_535_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__2___boxed(lean_object* v_newType_538_, lean_object* v___x_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_Lean_Elab_Tactic_evalChange___lam__2(v_newType_538_, v___x_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_);
lean_dec(v___y_547_);
lean_dec_ref(v___y_546_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__3(lean_object* v_h_550_, lean_object* v_fst_551_, uint8_t v___x_552_, lean_object* v_snd_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_){
_start:
{
lean_object* v___x_563_; 
v___x_563_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_555_, v___y_558_, v___y_559_, v___y_560_, v___y_561_);
if (lean_obj_tag(v___x_563_) == 0)
{
lean_object* v_a_564_; lean_object* v___x_565_; 
v_a_564_ = lean_ctor_get(v___x_563_, 0);
lean_inc(v_a_564_);
lean_dec_ref(v___x_563_);
v___x_565_ = l_Lean_MVarId_changeLocalDecl(v_a_564_, v_h_550_, v_fst_551_, v___x_552_, v___y_558_, v___y_559_, v___y_560_, v___y_561_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v_a_566_ = lean_ctor_get(v___x_565_, 0);
lean_inc(v_a_566_);
lean_dec_ref(v___x_565_);
v___x_567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_567_, 0, v_a_566_);
lean_ctor_set(v___x_567_, 1, v_snd_553_);
v___x_568_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_567_, v___y_555_, v___y_558_, v___y_559_, v___y_560_, v___y_561_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_576_; 
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_576_ == 0)
{
lean_object* v_unused_577_; 
v_unused_577_ = lean_ctor_get(v___x_568_, 0);
lean_dec(v_unused_577_);
v___x_570_ = v___x_568_;
v_isShared_571_ = v_isSharedCheck_576_;
goto v_resetjp_569_;
}
else
{
lean_dec(v___x_568_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_576_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_572_; lean_object* v___x_574_; 
v___x_572_ = lean_box(0);
if (v_isShared_571_ == 0)
{
lean_ctor_set(v___x_570_, 0, v___x_572_);
v___x_574_ = v___x_570_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___x_572_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
else
{
return v___x_568_;
}
}
else
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_585_; 
lean_dec(v_snd_553_);
v_a_578_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_585_ == 0)
{
v___x_580_ = v___x_565_;
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_565_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___x_583_; 
if (v_isShared_581_ == 0)
{
v___x_583_ = v___x_580_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_a_578_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
}
else
{
lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_593_; 
lean_dec(v_snd_553_);
lean_dec_ref(v_fst_551_);
lean_dec(v_h_550_);
v_a_586_ = lean_ctor_get(v___x_563_, 0);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_563_);
if (v_isSharedCheck_593_ == 0)
{
v___x_588_ = v___x_563_;
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_dec(v___x_563_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_591_; 
if (v_isShared_589_ == 0)
{
v___x_591_ = v___x_588_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_a_586_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__3___boxed(lean_object* v_h_594_, lean_object* v_fst_595_, lean_object* v___x_596_, lean_object* v_snd_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_){
_start:
{
uint8_t v___x_3893__boxed_607_; lean_object* v_res_608_; 
v___x_3893__boxed_607_ = lean_unbox(v___x_596_);
v_res_608_ = l_Lean_Elab_Tactic_evalChange___lam__3(v_h_594_, v_fst_595_, v___x_3893__boxed_607_, v_snd_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
lean_dec(v___y_605_);
lean_dec_ref(v___y_604_);
lean_dec(v___y_603_);
lean_dec_ref(v___y_602_);
lean_dec(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__4(lean_object* v_newType_609_, lean_object* v___x_610_, uint8_t v___x_611_, lean_object* v_h_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_){
_start:
{
lean_object* v___x_622_; 
lean_inc(v_h_612_);
v___x_622_ = l_Lean_FVarId_getType___redArg(v_h_612_, v___y_617_, v___y_619_, v___y_620_);
if (lean_obj_tag(v___x_622_) == 0)
{
lean_object* v_a_623_; lean_object* v___x_624_; 
v_a_623_ = lean_ctor_get(v___x_622_, 0);
lean_inc(v_a_623_);
lean_dec_ref(v___x_622_);
v___x_624_ = l_Lean_Elab_Tactic_getMainTag___redArg(v___y_614_, v___y_617_, v___y_618_, v___y_619_, v___y_620_);
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_a_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; uint8_t v___x_629_; lean_object* v___x_630_; 
v_a_625_ = lean_ctor_get(v___x_624_, 0);
lean_inc(v_a_625_);
lean_dec_ref(v___x_624_);
v___x_626_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___lam__2___closed__0, &l_Lean_Elab_Tactic_evalChange___lam__2___closed__0_once, _init_l_Lean_Elab_Tactic_evalChange___lam__2___closed__0);
v___x_627_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabChange___boxed), 12, 3);
lean_closure_set(v___x_627_, 0, v_a_623_);
lean_closure_set(v___x_627_, 1, v_newType_609_);
lean_closure_set(v___x_627_, 2, v___x_626_);
v___x_628_ = l_Lean_Name_mkStr1(v___x_610_);
v___x_629_ = 0;
v___x_630_ = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(v___x_627_, v_a_625_, v___x_628_, v___x_629_, v___y_613_, v___y_614_, v___y_615_, v___y_616_, v___y_617_, v___y_618_, v___y_619_, v___y_620_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; lean_object* v_fst_632_; lean_object* v_snd_633_; lean_object* v___x_634_; lean_object* v___f_635_; lean_object* v___x_636_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_a_631_);
lean_dec_ref(v___x_630_);
v_fst_632_ = lean_ctor_get(v_a_631_, 0);
lean_inc(v_fst_632_);
v_snd_633_ = lean_ctor_get(v_a_631_, 1);
lean_inc(v_snd_633_);
lean_dec(v_a_631_);
v___x_634_ = lean_box(v___x_611_);
v___f_635_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalChange___lam__3___boxed), 13, 4);
lean_closure_set(v___f_635_, 0, v_h_612_);
lean_closure_set(v___f_635_, 1, v_fst_632_);
lean_closure_set(v___f_635_, 2, v___x_634_);
lean_closure_set(v___f_635_, 3, v_snd_633_);
v___x_636_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_635_, v___y_613_, v___y_614_, v___y_615_, v___y_616_, v___y_617_, v___y_618_, v___y_619_, v___y_620_);
return v___x_636_;
}
else
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_644_; 
lean_dec(v_h_612_);
v_a_637_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_644_ == 0)
{
v___x_639_ = v___x_630_;
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___x_630_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_642_; 
if (v_isShared_640_ == 0)
{
v___x_642_ = v___x_639_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_a_637_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
else
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_652_; 
lean_dec(v_a_623_);
lean_dec(v_h_612_);
lean_dec_ref(v___x_610_);
lean_dec(v_newType_609_);
v_a_645_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_652_ == 0)
{
v___x_647_ = v___x_624_;
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_624_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
if (v_isShared_648_ == 0)
{
v___x_650_ = v___x_647_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_a_645_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
else
{
lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_660_; 
lean_dec(v_h_612_);
lean_dec_ref(v___x_610_);
lean_dec(v_newType_609_);
v_a_653_ = lean_ctor_get(v___x_622_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_622_);
if (v_isSharedCheck_660_ == 0)
{
v___x_655_ = v___x_622_;
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_dec(v___x_622_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_658_; 
if (v_isShared_656_ == 0)
{
v___x_658_ = v___x_655_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_a_653_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___lam__4___boxed(lean_object* v_newType_661_, lean_object* v___x_662_, lean_object* v___x_663_, lean_object* v_h_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_){
_start:
{
uint8_t v___x_3994__boxed_674_; lean_object* v_res_675_; 
v___x_3994__boxed_674_ = lean_unbox(v___x_663_);
v_res_675_ = l_Lean_Elab_Tactic_evalChange___lam__4(v_newType_661_, v___x_662_, v___x_3994__boxed_674_, v_h_664_, v___y_665_, v___y_666_, v___y_667_, v___y_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_);
lean_dec(v___y_672_);
lean_dec_ref(v___y_671_);
lean_dec(v___y_670_);
lean_dec_ref(v___y_669_);
lean_dec(v___y_668_);
lean_dec_ref(v___y_667_);
lean_dec(v___y_666_);
lean_dec_ref(v___y_665_);
return v_res_675_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalChange___closed__0(void){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_676_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalChange___closed__1(void){
_start:
{
lean_object* v___x_677_; 
v___x_677_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_677_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalChange___closed__2(void){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_678_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalChange___closed__3(void){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = lean_mk_string_unchecked("change", 6, 6);
return v___x_679_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalChange___closed__4(void){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_680_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___closed__3, &l_Lean_Elab_Tactic_evalChange___closed__3_once, _init_l_Lean_Elab_Tactic_evalChange___closed__3);
v___x_681_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___closed__2, &l_Lean_Elab_Tactic_evalChange___closed__2_once, _init_l_Lean_Elab_Tactic_evalChange___closed__2);
v___x_682_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___closed__1, &l_Lean_Elab_Tactic_evalChange___closed__1_once, _init_l_Lean_Elab_Tactic_evalChange___closed__1);
v___x_683_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___closed__0, &l_Lean_Elab_Tactic_evalChange___closed__0_once, _init_l_Lean_Elab_Tactic_evalChange___closed__0);
v___x_684_ = l_Lean_Name_mkStr4(v___x_683_, v___x_682_, v___x_681_, v___x_680_);
return v___x_684_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalChange___closed__5(void){
_start:
{
lean_object* v___f_685_; 
v___f_685_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalChange___lam__0___boxed), 10, 0);
return v___f_685_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalChange___closed__6(void){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = lean_mk_string_unchecked("location", 8, 8);
return v___x_686_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalChange___closed__7(void){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_687_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___closed__6, &l_Lean_Elab_Tactic_evalChange___closed__6_once, _init_l_Lean_Elab_Tactic_evalChange___closed__6);
v___x_688_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___closed__2, &l_Lean_Elab_Tactic_evalChange___closed__2_once, _init_l_Lean_Elab_Tactic_evalChange___closed__2);
v___x_689_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___closed__1, &l_Lean_Elab_Tactic_evalChange___closed__1_once, _init_l_Lean_Elab_Tactic_evalChange___closed__1);
v___x_690_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___closed__0, &l_Lean_Elab_Tactic_evalChange___closed__0_once, _init_l_Lean_Elab_Tactic_evalChange___closed__0);
v___x_691_ = l_Lean_Name_mkStr4(v___x_690_, v___x_689_, v___x_688_, v___x_687_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange(lean_object* v_x_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_){
_start:
{
lean_object* v___x_702_; lean_object* v___x_703_; uint8_t v___x_704_; 
v___x_702_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___closed__3, &l_Lean_Elab_Tactic_evalChange___closed__3_once, _init_l_Lean_Elab_Tactic_evalChange___closed__3);
v___x_703_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___closed__4, &l_Lean_Elab_Tactic_evalChange___closed__4_once, _init_l_Lean_Elab_Tactic_evalChange___closed__4);
lean_inc(v_x_692_);
v___x_704_ = l_Lean_Syntax_isOfKind(v_x_692_, v___x_703_);
if (v___x_704_ == 0)
{
lean_object* v___x_705_; 
lean_dec(v_x_692_);
v___x_705_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0___redArg();
return v___x_705_;
}
else
{
lean_object* v___f_706_; lean_object* v___y_708_; lean_object* v___y_709_; lean_object* v___y_710_; lean_object* v___y_711_; lean_object* v___y_712_; lean_object* v___y_713_; lean_object* v___y_714_; lean_object* v___y_715_; lean_object* v___y_716_; lean_object* v___y_717_; lean_object* v___y_718_; lean_object* v___x_722_; lean_object* v_newType_723_; lean_object* v___f_724_; lean_object* v___x_725_; lean_object* v___f_726_; lean_object* v___x_727_; lean_object* v___x_728_; uint8_t v___x_729_; 
v___f_706_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___closed__5, &l_Lean_Elab_Tactic_evalChange___closed__5_once, _init_l_Lean_Elab_Tactic_evalChange___closed__5);
v___x_722_ = lean_unsigned_to_nat(1u);
v_newType_723_ = l_Lean_Syntax_getArg(v_x_692_, v___x_722_);
lean_inc(v_newType_723_);
v___f_724_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalChange___lam__2___boxed), 11, 2);
lean_closure_set(v___f_724_, 0, v_newType_723_);
lean_closure_set(v___f_724_, 1, v___x_702_);
v___x_725_ = lean_box(v___x_704_);
v___f_726_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalChange___lam__4___boxed), 13, 3);
lean_closure_set(v___f_726_, 0, v_newType_723_);
lean_closure_set(v___f_726_, 1, v___x_702_);
lean_closure_set(v___f_726_, 2, v___x_725_);
v___x_727_ = lean_unsigned_to_nat(2u);
v___x_728_ = l_Lean_Syntax_getArg(v_x_692_, v___x_727_);
lean_dec(v_x_692_);
v___x_729_ = l_Lean_Syntax_isNone(v___x_728_);
if (v___x_729_ == 0)
{
uint8_t v___x_730_; 
lean_inc(v___x_728_);
v___x_730_ = l_Lean_Syntax_matchesNull(v___x_728_, v___x_722_);
if (v___x_730_ == 0)
{
lean_object* v___x_731_; 
lean_dec(v___x_728_);
lean_dec_ref(v___f_726_);
lean_dec_ref(v___f_724_);
v___x_731_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0___redArg();
return v___x_731_;
}
else
{
lean_object* v___x_732_; lean_object* v_loc_733_; lean_object* v___x_734_; uint8_t v___x_735_; 
v___x_732_ = lean_unsigned_to_nat(0u);
v_loc_733_ = l_Lean_Syntax_getArg(v___x_728_, v___x_732_);
lean_dec(v___x_728_);
v___x_734_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___closed__7, &l_Lean_Elab_Tactic_evalChange___closed__7_once, _init_l_Lean_Elab_Tactic_evalChange___closed__7);
lean_inc(v_loc_733_);
v___x_735_ = l_Lean_Syntax_isOfKind(v_loc_733_, v___x_734_);
if (v___x_735_ == 0)
{
lean_object* v___x_736_; 
lean_dec(v_loc_733_);
lean_dec_ref(v___f_726_);
lean_dec_ref(v___f_724_);
v___x_736_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalChange_spec__0___redArg();
return v___x_736_;
}
else
{
lean_object* v___x_737_; 
v___x_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_737_, 0, v_loc_733_);
v___y_708_ = v_a_699_;
v___y_709_ = v_a_693_;
v___y_710_ = v_a_698_;
v___y_711_ = v_a_695_;
v___y_712_ = v___f_726_;
v___y_713_ = v_a_697_;
v___y_714_ = v_a_694_;
v___y_715_ = v_a_700_;
v___y_716_ = v_a_696_;
v___y_717_ = v___f_724_;
v___y_718_ = v___x_737_;
goto v___jp_707_;
}
}
}
else
{
lean_object* v___x_738_; 
lean_dec(v___x_728_);
v___x_738_ = lean_box(0);
v___y_708_ = v_a_699_;
v___y_709_ = v_a_693_;
v___y_710_ = v_a_698_;
v___y_711_ = v_a_695_;
v___y_712_ = v___f_726_;
v___y_713_ = v_a_697_;
v___y_714_ = v_a_694_;
v___y_715_ = v_a_700_;
v___y_716_ = v_a_696_;
v___y_717_ = v___f_724_;
v___y_718_ = v___x_738_;
goto v___jp_707_;
}
v___jp_707_:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_719_ = l_Lean_mkOptionalNode(v___y_718_);
v___x_720_ = l_Lean_Elab_Tactic_expandOptLocation(v___x_719_);
lean_dec(v___x_719_);
v___x_721_ = l_Lean_Elab_Tactic_withLocation(v___x_720_, v___y_712_, v___y_717_, v___f_706_, v___y_709_, v___y_714_, v___y_711_, v___y_716_, v___y_713_, v___y_710_, v___y_708_, v___y_715_);
lean_dec(v___x_720_);
return v___x_721_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalChange___boxed(lean_object* v_x_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l_Lean_Elab_Tactic_evalChange(v_x_739_, v_a_740_, v_a_741_, v_a_742_, v_a_743_, v_a_744_, v_a_745_, v_a_746_, v_a_747_);
lean_dec(v_a_747_);
lean_dec_ref(v_a_746_);
lean_dec(v_a_745_);
lean_dec_ref(v_a_744_);
lean_dec(v_a_743_);
lean_dec_ref(v_a_742_);
lean_dec(v_a_741_);
lean_dec_ref(v_a_740_);
return v_res_749_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__0(void){
_start:
{
lean_object* v___x_750_; 
v___x_750_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_750_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__1(void){
_start:
{
lean_object* v___x_751_; 
v___x_751_ = lean_mk_string_unchecked("evalChange", 10, 10);
return v___x_751_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__2(void){
_start:
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_752_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__1, &l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__1);
v___x_753_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___closed__2, &l_Lean_Elab_Tactic_evalChange___closed__2_once, _init_l_Lean_Elab_Tactic_evalChange___closed__2);
v___x_754_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__0, &l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__0);
v___x_755_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___closed__0, &l_Lean_Elab_Tactic_evalChange___closed__0_once, _init_l_Lean_Elab_Tactic_evalChange___closed__0);
v___x_756_ = l_Lean_Name_mkStr4(v___x_755_, v___x_754_, v___x_753_, v___x_752_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1(){
_start:
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_758_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_759_ = lean_obj_once(&l_Lean_Elab_Tactic_evalChange___closed__4, &l_Lean_Elab_Tactic_evalChange___closed__4_once, _init_l_Lean_Elab_Tactic_evalChange___closed__4);
v___x_760_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__2, &l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__2);
v___x_761_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalChange___boxed), 10, 0);
v___x_762_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_758_, v___x_759_, v___x_760_, v___x_761_);
return v___x_762_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___boxed(lean_object* v_a_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1();
return v_res_764_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange_docString__3___closed__0(void){
_start:
{
lean_object* v___x_765_; 
v___x_765_ = lean_mk_string_unchecked("`change` can be used to replace the main goal or its hypotheses with\ndifferent, yet definitionally equal, goal or hypotheses.\n\nFor example, if `n : Nat` and the current goal is `⊢ n + 2 = 2`, then\n```lean\nchange _ + 1 = _\n```\nchanges the goal to `⊢ n + 1 + 1 = 2`.\n\nThe tactic also applies to hypotheses. If `h : n + 2 = 2` and `h' : n + 3 = 4`\nare hypotheses, then\n```lean\nchange _ + 1 = _ at h h'\n```\nchanges their types to be `h : n + 1 + 1 = 2` and `h' : n + 2 + 1 = 4`.\n\nChange is like `refine` in that every placeholder needs to be solved for by unification,\nbut using named placeholders or `\?_` results in `change` to creating new goals.\n\nThe tactic `show e` is interchangeable with `change e`, where the pattern `e` is applied to\nthe main goal. ", 757, 753);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange_docString__3(){
_start:
{
lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_767_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__2, &l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1___closed__2);
v___x_768_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange_docString__3___closed__0, &l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange_docString__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange_docString__3___closed__0);
v___x_769_ = l_Lean_addBuiltinDocString(v___x_767_, v___x_768_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange_docString__3___boxed(lean_object* v_a_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange_docString__3();
return v_res_771_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Location(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Change(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Location(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Change_0__Lean_Elab_Tactic_evalChange___regBuiltin_Lean_Elab_Tactic_evalChange_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Change(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Location(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Change(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Location(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Change(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Change(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Change(builtin);
}
#ifdef __cplusplus
}
#endif
