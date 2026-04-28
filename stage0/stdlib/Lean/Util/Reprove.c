// Lean compiler output
// Module: Lean.Util.Reprove
// Imports: public meta import Lean.Elab.Command public import Init.Notation import Lean.Exception
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftCoreM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Core_mkFreshUserName___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withDeclName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_Lean_addAndCompile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Command_reproveDecl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Command_reproveDecl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Command_reproveDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Command_reproveDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_reproveDecl___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_reproveDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__0;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__1;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__2;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Command_reproveDecl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reproveDecl___closed__0;
static lean_once_cell_t l_Lean_Elab_Command_reproveDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reproveDecl___closed__1;
static lean_once_cell_t l_Lean_Elab_Command_reproveDecl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reproveDecl___closed__2;
static lean_once_cell_t l_Lean_Elab_Command_reproveDecl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reproveDecl___closed__3;
static lean_once_cell_t l_Lean_Elab_Command_reproveDecl___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reproveDecl___closed__4;
static lean_once_cell_t l_Lean_Elab_Command_reproveDecl___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reproveDecl___closed__5;
static lean_once_cell_t l_Lean_Elab_Command_reproveDecl___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reproveDecl___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_reproveDecl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_reproveDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__0;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__1;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__2;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__3;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__4;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__5;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__6;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__7;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__8;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__9;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__10;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__11;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__12;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__13;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__14;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__15;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__16;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__17;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__18;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__19;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__20;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__21;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__22;
static lean_once_cell_t l_Lean_Elab_Command_reprove___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_reprove___closed__23;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_reprove;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabReprove_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabReprove_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabReprove(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabReprove___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Command_reproveDecl_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_, lean_object* v___y_3_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v_e_1_);
return v___x_6_;
}
else
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v_mctx_9_; lean_object* v___x_10_; lean_object* v_fst_11_; lean_object* v_snd_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v_cache_15_; lean_object* v_zetaDeltaFVarIds_16_; lean_object* v_postponed_17_; lean_object* v_diag_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_27_; 
v___x_7_ = lean_st_ref_get(v___y_3_);
lean_dec(v___x_7_);
v___x_8_ = lean_st_ref_get(v___y_2_);
v_mctx_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc_ref(v_mctx_9_);
lean_dec(v___x_8_);
v___x_10_ = l_Lean_instantiateMVarsCore(v_mctx_9_, v_e_1_);
v_fst_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc(v_fst_11_);
v_snd_12_ = lean_ctor_get(v___x_10_, 1);
lean_inc(v_snd_12_);
lean_dec_ref(v___x_10_);
v___x_13_ = lean_st_ref_get(v___y_3_);
lean_dec(v___x_13_);
v___x_14_ = lean_st_ref_take(v___y_2_);
v_cache_15_ = lean_ctor_get(v___x_14_, 1);
v_zetaDeltaFVarIds_16_ = lean_ctor_get(v___x_14_, 2);
v_postponed_17_ = lean_ctor_get(v___x_14_, 3);
v_diag_18_ = lean_ctor_get(v___x_14_, 4);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_14_);
if (v_isSharedCheck_27_ == 0)
{
lean_object* v_unused_28_; 
v_unused_28_ = lean_ctor_get(v___x_14_, 0);
lean_dec(v_unused_28_);
v___x_20_ = v___x_14_;
v_isShared_21_ = v_isSharedCheck_27_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_diag_18_);
lean_inc(v_postponed_17_);
lean_inc(v_zetaDeltaFVarIds_16_);
lean_inc(v_cache_15_);
lean_dec(v___x_14_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_27_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v___x_23_; 
if (v_isShared_21_ == 0)
{
lean_ctor_set(v___x_20_, 0, v_snd_12_);
v___x_23_ = v___x_20_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_snd_12_);
lean_ctor_set(v_reuseFailAlloc_26_, 1, v_cache_15_);
lean_ctor_set(v_reuseFailAlloc_26_, 2, v_zetaDeltaFVarIds_16_);
lean_ctor_set(v_reuseFailAlloc_26_, 3, v_postponed_17_);
lean_ctor_set(v_reuseFailAlloc_26_, 4, v_diag_18_);
v___x_23_ = v_reuseFailAlloc_26_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_st_ref_set(v___y_2_, v___x_23_);
v___x_25_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_25_, 0, v_fst_11_);
return v___x_25_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Command_reproveDecl_spec__0___redArg___boxed(lean_object* v_e_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_instantiateMVars___at___00Lean_Elab_Command_reproveDecl_spec__0___redArg(v_e_29_, v___y_30_, v___y_31_);
lean_dec(v___y_31_);
lean_dec(v___y_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Command_reproveDecl_spec__0(lean_object* v_e_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_instantiateMVars___at___00Lean_Elab_Command_reproveDecl_spec__0___redArg(v_e_34_, v___y_38_, v___y_40_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Command_reproveDecl_spec__0___boxed(lean_object* v_e_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_instantiateMVars___at___00Lean_Elab_Command_reproveDecl_spec__0(v_e_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_);
lean_dec(v___y_49_);
lean_dec_ref(v___y_48_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_reproveDecl___lam__0(lean_object* v___x_52_, uint8_t v___x_53_, lean_object* v___x_54_, lean_object* v_tacticSeq_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_Meta_mkFreshExprMVar(v___x_52_, v___x_53_, v___x_54_, v___y_58_, v___y_59_, v___y_60_, v___y_61_);
if (lean_obj_tag(v___x_63_) == 0)
{
lean_object* v_a_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v_a_64_ = lean_ctor_get(v___x_63_, 0);
lean_inc(v_a_64_);
lean_dec_ref(v___x_63_);
v___x_65_ = l_Lean_Expr_mvarId_x21(v_a_64_);
v___x_66_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___boxed), 10, 1);
lean_closure_set(v___x_66_, 0, v_tacticSeq_55_);
v___x_67_ = l_Lean_Elab_Tactic_run(v___x_65_, v___x_66_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_);
if (lean_obj_tag(v___x_67_) == 0)
{
lean_object* v___x_68_; 
lean_dec_ref(v___x_67_);
v___x_68_ = l_Lean_instantiateMVars___at___00Lean_Elab_Command_reproveDecl_spec__0___redArg(v_a_64_, v___y_59_, v___y_61_);
return v___x_68_;
}
else
{
lean_object* v_a_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_76_; 
lean_dec(v_a_64_);
v_a_69_ = lean_ctor_get(v___x_67_, 0);
v_isSharedCheck_76_ = !lean_is_exclusive(v___x_67_);
if (v_isSharedCheck_76_ == 0)
{
v___x_71_ = v___x_67_;
v_isShared_72_ = v_isSharedCheck_76_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_a_69_);
lean_dec(v___x_67_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_76_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
lean_object* v___x_74_; 
if (v_isShared_72_ == 0)
{
v___x_74_ = v___x_71_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_75_; 
v_reuseFailAlloc_75_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_75_, 0, v_a_69_);
v___x_74_ = v_reuseFailAlloc_75_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
return v___x_74_;
}
}
}
}
else
{
lean_dec(v_tacticSeq_55_);
return v___x_63_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_reproveDecl___lam__0___boxed(lean_object* v___x_77_, lean_object* v___x_78_, lean_object* v___x_79_, lean_object* v_tacticSeq_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
uint8_t v___x_2622__boxed_88_; lean_object* v_res_89_; 
v___x_2622__boxed_88_ = lean_unbox(v___x_78_);
v_res_89_ = l_Lean_Elab_Command_reproveDecl___lam__0(v___x_77_, v___x_2622__boxed_88_, v___x_79_, v_tacticSeq_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_, v___y_85_, v___y_86_);
lean_dec(v___y_86_);
lean_dec_ref(v___y_85_);
lean_dec(v___y_84_);
lean_dec_ref(v___y_83_);
lean_dec(v___y_82_);
lean_dec_ref(v___y_81_);
return v_res_89_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__0(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_box(1);
v___x_91_ = l_Lean_MessageData_ofFormat(v___x_90_);
return v___x_91_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__1(void){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = lean_mk_string_unchecked("while expanding", 15, 15);
return v___x_92_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__2(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__1, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__1_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__1);
v___x_94_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
return v___x_94_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__3(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__2, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__2_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__2);
v___x_96_ = l_Lean_MessageData_ofFormat(v___x_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4(lean_object* v_x_97_, lean_object* v_x_98_){
_start:
{
if (lean_obj_tag(v_x_98_) == 0)
{
return v_x_97_;
}
else
{
lean_object* v_head_99_; lean_object* v_tail_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_122_; 
v_head_99_ = lean_ctor_get(v_x_98_, 0);
v_tail_100_ = lean_ctor_get(v_x_98_, 1);
v_isSharedCheck_122_ = !lean_is_exclusive(v_x_98_);
if (v_isSharedCheck_122_ == 0)
{
v___x_102_ = v_x_98_;
v_isShared_103_ = v_isSharedCheck_122_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_tail_100_);
lean_inc(v_head_99_);
lean_dec(v_x_98_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_122_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v_before_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_120_; 
v_before_104_ = lean_ctor_get(v_head_99_, 0);
v_isSharedCheck_120_ = !lean_is_exclusive(v_head_99_);
if (v_isSharedCheck_120_ == 0)
{
lean_object* v_unused_121_; 
v_unused_121_ = lean_ctor_get(v_head_99_, 1);
lean_dec(v_unused_121_);
v___x_106_ = v_head_99_;
v_isShared_107_ = v_isSharedCheck_120_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_before_104_);
lean_dec(v_head_99_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_120_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_108_; lean_object* v___x_110_; 
v___x_108_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__0);
if (v_isShared_107_ == 0)
{
lean_ctor_set_tag(v___x_106_, 7);
lean_ctor_set(v___x_106_, 1, v___x_108_);
lean_ctor_set(v___x_106_, 0, v_x_97_);
v___x_110_ = v___x_106_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v_x_97_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v___x_108_);
v___x_110_ = v_reuseFailAlloc_119_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
lean_object* v___x_111_; lean_object* v___x_113_; 
v___x_111_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__3);
if (v_isShared_103_ == 0)
{
lean_ctor_set_tag(v___x_102_, 7);
lean_ctor_set(v___x_102_, 1, v___x_111_);
lean_ctor_set(v___x_102_, 0, v___x_110_);
v___x_113_ = v___x_102_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v___x_110_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v___x_111_);
v___x_113_ = v_reuseFailAlloc_118_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_114_ = l_Lean_MessageData_ofSyntax(v_before_104_);
v___x_115_ = l_Lean_indentD(v___x_114_);
v___x_116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_113_);
lean_ctor_set(v___x_116_, 1, v___x_115_);
v_x_97_ = v___x_116_;
v_x_98_ = v_tail_100_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__3(lean_object* v_opts_123_, lean_object* v_opt_124_){
_start:
{
lean_object* v_name_125_; lean_object* v_defValue_126_; lean_object* v_map_127_; lean_object* v___x_128_; 
v_name_125_ = lean_ctor_get(v_opt_124_, 0);
v_defValue_126_ = lean_ctor_get(v_opt_124_, 1);
v_map_127_ = lean_ctor_get(v_opts_123_, 0);
v___x_128_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_127_, v_name_125_);
if (lean_obj_tag(v___x_128_) == 0)
{
uint8_t v___x_129_; 
v___x_129_ = lean_unbox(v_defValue_126_);
return v___x_129_;
}
else
{
lean_object* v_val_130_; 
v_val_130_ = lean_ctor_get(v___x_128_, 0);
lean_inc(v_val_130_);
lean_dec_ref(v___x_128_);
if (lean_obj_tag(v_val_130_) == 1)
{
uint8_t v_v_131_; 
v_v_131_ = lean_ctor_get_uint8(v_val_130_, 0);
lean_dec_ref(v_val_130_);
return v_v_131_;
}
else
{
uint8_t v___x_132_; 
lean_dec(v_val_130_);
v___x_132_ = lean_unbox(v_defValue_126_);
return v___x_132_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__3___boxed(lean_object* v_opts_133_, lean_object* v_opt_134_){
_start:
{
uint8_t v_res_135_; lean_object* v_r_136_; 
v_res_135_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__3(v_opts_133_, v_opt_134_);
lean_dec_ref(v_opt_134_);
lean_dec_ref(v_opts_133_);
v_r_136_ = lean_box(v_res_135_);
return v_r_136_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lean_mk_string_unchecked("with resulting expansion", 24, 24);
return v___x_137_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_138_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__0, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__0);
v___x_139_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
return v___x_139_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_140_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__1, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__1);
v___x_141_ = l_Lean_MessageData_ofFormat(v___x_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg(lean_object* v_msgData_142_, lean_object* v_macroStack_143_, lean_object* v___y_144_){
_start:
{
lean_object* v___x_146_; lean_object* v_scopes_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v_opts_150_; lean_object* v___x_151_; uint8_t v___x_152_; 
v___x_146_ = lean_st_ref_get(v___y_144_);
v_scopes_147_ = lean_ctor_get(v___x_146_, 2);
lean_inc(v_scopes_147_);
lean_dec(v___x_146_);
v___x_148_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_149_ = l_List_head_x21___redArg(v___x_148_, v_scopes_147_);
lean_dec(v_scopes_147_);
v_opts_150_ = lean_ctor_get(v___x_149_, 1);
lean_inc_ref(v_opts_150_);
lean_dec(v___x_149_);
v___x_151_ = l_Lean_Elab_pp_macroStack;
v___x_152_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__3(v_opts_150_, v___x_151_);
lean_dec_ref(v_opts_150_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; 
lean_dec(v_macroStack_143_);
v___x_153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_153_, 0, v_msgData_142_);
return v___x_153_;
}
else
{
if (lean_obj_tag(v_macroStack_143_) == 0)
{
lean_object* v___x_154_; 
v___x_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_154_, 0, v_msgData_142_);
return v___x_154_;
}
else
{
lean_object* v_head_155_; lean_object* v_after_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_171_; 
v_head_155_ = lean_ctor_get(v_macroStack_143_, 0);
lean_inc(v_head_155_);
v_after_156_ = lean_ctor_get(v_head_155_, 1);
v_isSharedCheck_171_ = !lean_is_exclusive(v_head_155_);
if (v_isSharedCheck_171_ == 0)
{
lean_object* v_unused_172_; 
v_unused_172_ = lean_ctor_get(v_head_155_, 0);
lean_dec(v_unused_172_);
v___x_158_ = v_head_155_;
v_isShared_159_ = v_isSharedCheck_171_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_after_156_);
lean_dec(v_head_155_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_171_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_160_; lean_object* v___x_162_; 
v___x_160_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4___closed__0);
if (v_isShared_159_ == 0)
{
lean_ctor_set_tag(v___x_158_, 7);
lean_ctor_set(v___x_158_, 1, v___x_160_);
lean_ctor_set(v___x_158_, 0, v_msgData_142_);
v___x_162_ = v___x_158_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_msgData_142_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v___x_160_);
v___x_162_ = v_reuseFailAlloc_170_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v_msgData_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_163_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___closed__2);
v___x_164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_162_);
lean_ctor_set(v___x_164_, 1, v___x_163_);
v___x_165_ = l_Lean_MessageData_ofSyntax(v_after_156_);
v___x_166_ = l_Lean_indentD(v___x_165_);
v_msgData_167_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_167_, 0, v___x_164_);
lean_ctor_set(v_msgData_167_, 1, v___x_166_);
v___x_168_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2_spec__4(v_msgData_167_, v_macroStack_143_);
v___x_169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
return v___x_169_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg___boxed(lean_object* v_msgData_173_, lean_object* v_macroStack_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg(v_msgData_173_, v_macroStack_174_, v___y_175_);
lean_dec(v___y_175_);
return v_res_177_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_178_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__0);
v___x_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
return v___x_180_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_181_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__1);
v___x_182_ = lean_unsigned_to_nat(0u);
v___x_183_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
lean_ctor_set(v___x_183_, 2, v___x_182_);
lean_ctor_set(v___x_183_, 3, v___x_182_);
lean_ctor_set(v___x_183_, 4, v___x_181_);
lean_ctor_set(v___x_183_, 5, v___x_181_);
lean_ctor_set(v___x_183_, 6, v___x_181_);
lean_ctor_set(v___x_183_, 7, v___x_181_);
lean_ctor_set(v___x_183_, 8, v___x_181_);
lean_ctor_set(v___x_183_, 9, v___x_181_);
return v___x_183_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_184_ = lean_unsigned_to_nat(32u);
v___x_185_ = lean_mk_empty_array_with_capacity(v___x_184_);
v___x_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
return v___x_186_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__4(void){
_start:
{
size_t v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_187_ = ((size_t)5ULL);
v___x_188_ = lean_unsigned_to_nat(0u);
v___x_189_ = lean_unsigned_to_nat(32u);
v___x_190_ = lean_mk_empty_array_with_capacity(v___x_189_);
v___x_191_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__3);
v___x_192_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_192_, 0, v___x_191_);
lean_ctor_set(v___x_192_, 1, v___x_190_);
lean_ctor_set(v___x_192_, 2, v___x_188_);
lean_ctor_set(v___x_192_, 3, v___x_188_);
lean_ctor_set_usize(v___x_192_, 4, v___x_187_);
return v___x_192_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__5(void){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_193_ = lean_box(1);
v___x_194_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__4);
v___x_195_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__1);
v___x_196_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
lean_ctor_set(v___x_196_, 1, v___x_194_);
lean_ctor_set(v___x_196_, 2, v___x_193_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg(lean_object* v_msgData_197_, lean_object* v___y_198_){
_start:
{
lean_object* v___x_200_; lean_object* v_env_201_; lean_object* v___x_202_; lean_object* v_scopes_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v_opts_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_200_ = lean_st_ref_get(v___y_198_);
v_env_201_ = lean_ctor_get(v___x_200_, 0);
lean_inc_ref(v_env_201_);
lean_dec(v___x_200_);
v___x_202_ = lean_st_ref_get(v___y_198_);
v_scopes_203_ = lean_ctor_get(v___x_202_, 2);
lean_inc(v_scopes_203_);
lean_dec(v___x_202_);
v___x_204_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_205_ = l_List_head_x21___redArg(v___x_204_, v_scopes_203_);
lean_dec(v_scopes_203_);
v_opts_206_ = lean_ctor_get(v___x_205_, 1);
lean_inc_ref(v_opts_206_);
lean_dec(v___x_205_);
v___x_207_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__2);
v___x_208_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___closed__5);
v___x_209_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_209_, 0, v_env_201_);
lean_ctor_set(v___x_209_, 1, v___x_207_);
lean_ctor_set(v___x_209_, 2, v___x_208_);
lean_ctor_set(v___x_209_, 3, v_opts_206_);
v___x_210_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
lean_ctor_set(v___x_210_, 1, v_msgData_197_);
v___x_211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg___boxed(lean_object* v_msgData_212_, lean_object* v___y_213_, lean_object* v___y_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg(v_msgData_212_, v___y_213_);
lean_dec(v___y_213_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1___redArg(lean_object* v_msg_216_, lean_object* v___y_217_, lean_object* v___y_218_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Lean_Elab_Command_getRef___redArg(v___y_217_);
if (lean_obj_tag(v___x_220_) == 0)
{
lean_object* v_a_221_; lean_object* v_macroStack_222_; lean_object* v___x_223_; lean_object* v_a_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_235_; 
v_a_221_ = lean_ctor_get(v___x_220_, 0);
lean_inc(v_a_221_);
lean_dec_ref(v___x_220_);
v_macroStack_222_ = lean_ctor_get(v___y_217_, 4);
v___x_223_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg(v_msg_216_, v___y_218_);
v_a_224_ = lean_ctor_get(v___x_223_, 0);
lean_inc(v_a_224_);
lean_dec_ref(v___x_223_);
v___x_225_ = l_Lean_Elab_getBetterRef(v_a_221_, v_macroStack_222_);
lean_dec(v_a_221_);
lean_inc(v_macroStack_222_);
v___x_226_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg(v_a_224_, v_macroStack_222_, v___y_218_);
v_a_227_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_235_ == 0)
{
v___x_229_ = v___x_226_;
v_isShared_230_ = v_isSharedCheck_235_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v___x_226_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_235_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_231_; lean_object* v___x_233_; 
v___x_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_225_);
lean_ctor_set(v___x_231_, 1, v_a_227_);
if (v_isShared_230_ == 0)
{
lean_ctor_set_tag(v___x_229_, 1);
lean_ctor_set(v___x_229_, 0, v___x_231_);
v___x_233_ = v___x_229_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_231_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
else
{
lean_object* v_a_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_243_; 
lean_dec_ref(v_msg_216_);
v_a_236_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_243_ == 0)
{
v___x_238_ = v___x_220_;
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_a_236_);
lean_dec(v___x_220_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_241_; 
if (v_isShared_239_ == 0)
{
v___x_241_ = v___x_238_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_a_236_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1___redArg___boxed(lean_object* v_msg_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1___redArg(v_msg_244_, v___y_245_, v___y_246_);
lean_dec(v___y_246_);
lean_dec_ref(v___y_245_);
return v_res_248_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reproveDecl___closed__0(void){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = lean_mk_string_unchecked("reprove_example", 15, 15);
return v___x_249_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reproveDecl___closed__1(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = lean_obj_once(&l_Lean_Elab_Command_reproveDecl___closed__0, &l_Lean_Elab_Command_reproveDecl___closed__0_once, _init_l_Lean_Elab_Command_reproveDecl___closed__0);
v___x_251_ = l_Lean_Name_mkStr1(v___x_250_);
return v___x_251_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reproveDecl___closed__2(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = lean_obj_once(&l_Lean_Elab_Command_reproveDecl___closed__1, &l_Lean_Elab_Command_reproveDecl___closed__1_once, _init_l_Lean_Elab_Command_reproveDecl___closed__1);
v___x_253_ = lean_alloc_closure((void*)(l_Lean_Core_mkFreshUserName___boxed), 4, 1);
lean_closure_set(v___x_253_, 0, v___x_252_);
return v___x_253_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reproveDecl___closed__3(void){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = lean_mk_string_unchecked("unknown declaration '", 21, 21);
return v___x_254_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reproveDecl___closed__4(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = lean_obj_once(&l_Lean_Elab_Command_reproveDecl___closed__3, &l_Lean_Elab_Command_reproveDecl___closed__3_once, _init_l_Lean_Elab_Command_reproveDecl___closed__3);
v___x_256_ = l_Lean_stringToMessageData(v___x_255_);
return v___x_256_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reproveDecl___closed__5(void){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = lean_mk_string_unchecked("'", 1, 1);
return v___x_257_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reproveDecl___closed__6(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = lean_obj_once(&l_Lean_Elab_Command_reproveDecl___closed__5, &l_Lean_Elab_Command_reproveDecl___closed__5_once, _init_l_Lean_Elab_Command_reproveDecl___closed__5);
v___x_259_ = l_Lean_stringToMessageData(v___x_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_reproveDecl(lean_object* v_declName_260_, lean_object* v_tacticSeq_261_, lean_object* v_a_262_, lean_object* v_a_263_){
_start:
{
lean_object* v___x_265_; lean_object* v_env_266_; uint8_t v___x_267_; lean_object* v___x_268_; 
v___x_265_ = lean_st_ref_get(v_a_263_);
v_env_266_ = lean_ctor_get(v___x_265_, 0);
lean_inc_ref(v_env_266_);
lean_dec(v___x_265_);
v___x_267_ = 0;
lean_inc(v_declName_260_);
v___x_268_ = l_Lean_Environment_find_x3f(v_env_266_, v_declName_260_, v___x_267_);
if (lean_obj_tag(v___x_268_) == 1)
{
lean_object* v_val_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_316_; 
lean_dec(v_declName_260_);
v_val_269_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_316_ == 0)
{
v___x_271_ = v___x_268_;
v_isShared_272_ = v_isSharedCheck_316_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_val_269_);
lean_dec(v___x_268_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_316_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = lean_obj_once(&l_Lean_Elab_Command_reproveDecl___closed__2, &l_Lean_Elab_Command_reproveDecl___closed__2_once, _init_l_Lean_Elab_Command_reproveDecl___closed__2);
v___x_274_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_273_, v_a_262_, v_a_263_);
if (lean_obj_tag(v___x_274_) == 0)
{
lean_object* v_a_275_; lean_object* v___x_276_; lean_object* v___x_278_; 
v_a_275_ = lean_ctor_get(v___x_274_, 0);
lean_inc(v_a_275_);
lean_dec_ref(v___x_274_);
v___x_276_ = l_Lean_ConstantInfo_type(v_val_269_);
lean_inc_ref(v___x_276_);
if (v_isShared_272_ == 0)
{
lean_ctor_set(v___x_271_, 0, v___x_276_);
v___x_278_ = v___x_271_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v___x_276_);
v___x_278_ = v_reuseFailAlloc_307_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
uint8_t v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___f_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_279_ = 0;
v___x_280_ = lean_box(0);
v___x_281_ = lean_box(v___x_279_);
v___f_282_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_reproveDecl___lam__0___boxed), 11, 4);
lean_closure_set(v___f_282_, 0, v___x_278_);
lean_closure_set(v___f_282_, 1, v___x_281_);
lean_closure_set(v___f_282_, 2, v___x_280_);
lean_closure_set(v___f_282_, 3, v_tacticSeq_261_);
lean_inc(v_a_275_);
v___x_283_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withDeclName___boxed), 10, 3);
lean_closure_set(v___x_283_, 0, lean_box(0));
lean_closure_set(v___x_283_, 1, v_a_275_);
lean_closure_set(v___x_283_, 2, v___f_282_);
v___x_284_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_283_, v_a_262_, v_a_263_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v_a_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; uint8_t v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; uint8_t v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_a_285_ = lean_ctor_get(v___x_284_, 0);
lean_inc(v_a_285_);
lean_dec_ref(v___x_284_);
v___x_286_ = l_Lean_ConstantInfo_levelParams(v_val_269_);
lean_dec(v_val_269_);
lean_inc(v_a_275_);
v___x_287_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_287_, 0, v_a_275_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
lean_ctor_set(v___x_287_, 2, v___x_276_);
v___x_288_ = lean_box(0);
v___x_289_ = 1;
v___x_290_ = lean_box(0);
v___x_291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_291_, 0, v_a_275_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_292_, 0, v___x_287_);
lean_ctor_set(v___x_292_, 1, v_a_285_);
lean_ctor_set(v___x_292_, 2, v___x_288_);
lean_ctor_set(v___x_292_, 3, v___x_291_);
lean_ctor_set_uint8(v___x_292_, sizeof(void*)*4, v___x_289_);
v___x_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
v___x_294_ = 1;
v___x_295_ = lean_box(v___x_294_);
v___x_296_ = lean_box(v___x_267_);
v___x_297_ = lean_alloc_closure((void*)(l_Lean_addAndCompile___boxed), 6, 3);
lean_closure_set(v___x_297_, 0, v___x_293_);
lean_closure_set(v___x_297_, 1, v___x_295_);
lean_closure_set(v___x_297_, 2, v___x_296_);
v___x_298_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_297_, v_a_262_, v_a_263_);
return v___x_298_;
}
else
{
lean_object* v_a_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_306_; 
lean_dec_ref(v___x_276_);
lean_dec(v_a_275_);
lean_dec(v_val_269_);
v_a_299_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_306_ == 0)
{
v___x_301_ = v___x_284_;
v_isShared_302_ = v_isSharedCheck_306_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_a_299_);
lean_dec(v___x_284_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_306_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_304_; 
if (v_isShared_302_ == 0)
{
v___x_304_ = v___x_301_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v_a_299_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
}
}
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_del_object(v___x_271_);
lean_dec(v_val_269_);
lean_dec(v_tacticSeq_261_);
v_a_308_ = lean_ctor_get(v___x_274_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_274_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_274_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
}
else
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
lean_dec(v___x_268_);
lean_dec(v_tacticSeq_261_);
v___x_317_ = lean_obj_once(&l_Lean_Elab_Command_reproveDecl___closed__4, &l_Lean_Elab_Command_reproveDecl___closed__4_once, _init_l_Lean_Elab_Command_reproveDecl___closed__4);
v___x_318_ = l_Lean_MessageData_ofName(v_declName_260_);
v___x_319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_319_, 0, v___x_317_);
lean_ctor_set(v___x_319_, 1, v___x_318_);
v___x_320_ = lean_obj_once(&l_Lean_Elab_Command_reproveDecl___closed__6, &l_Lean_Elab_Command_reproveDecl___closed__6_once, _init_l_Lean_Elab_Command_reproveDecl___closed__6);
v___x_321_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_321_, 0, v___x_319_);
lean_ctor_set(v___x_321_, 1, v___x_320_);
v___x_322_ = l_Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1___redArg(v___x_321_, v_a_262_, v_a_263_);
return v___x_322_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_reproveDecl___boxed(lean_object* v_declName_323_, lean_object* v_tacticSeq_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Lean_Elab_Command_reproveDecl(v_declName_323_, v_tacticSeq_324_, v_a_325_, v_a_326_);
lean_dec(v_a_326_);
lean_dec_ref(v_a_325_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1(lean_object* v_msgData_329_, lean_object* v___y_330_, lean_object* v___y_331_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___redArg(v_msgData_329_, v___y_331_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1___boxed(lean_object* v_msgData_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__1(v_msgData_334_, v___y_335_, v___y_336_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1(lean_object* v_00_u03b1_339_, lean_object* v_msg_340_, lean_object* v___y_341_, lean_object* v___y_342_){
_start:
{
lean_object* v___x_344_; 
v___x_344_ = l_Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1___redArg(v_msg_340_, v___y_341_, v___y_342_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1___boxed(lean_object* v_00_u03b1_345_, lean_object* v_msg_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_){
_start:
{
lean_object* v_res_350_; 
v_res_350_ = l_Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1(v_00_u03b1_345_, v_msg_346_, v___y_347_, v___y_348_);
lean_dec(v___y_348_);
lean_dec_ref(v___y_347_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2(lean_object* v_msgData_351_, lean_object* v_macroStack_352_, lean_object* v___y_353_, lean_object* v___y_354_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___redArg(v_msgData_351_, v_macroStack_352_, v___y_354_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2___boxed(lean_object* v_msgData_357_, lean_object* v_macroStack_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Command_reproveDecl_spec__1_spec__2(v_msgData_357_, v_macroStack_358_, v___y_359_, v___y_360_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
return v_res_362_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__0(void){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_363_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__1(void){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_364_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__2(void){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = lean_mk_string_unchecked("Command", 7, 7);
return v___x_365_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__3(void){
_start:
{
lean_object* v___x_366_; 
v___x_366_ = lean_mk_string_unchecked("reprove", 7, 7);
return v___x_366_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__4(void){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_367_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__3, &l_Lean_Elab_Command_reprove___closed__3_once, _init_l_Lean_Elab_Command_reprove___closed__3);
v___x_368_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__2, &l_Lean_Elab_Command_reprove___closed__2_once, _init_l_Lean_Elab_Command_reprove___closed__2);
v___x_369_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__1, &l_Lean_Elab_Command_reprove___closed__1_once, _init_l_Lean_Elab_Command_reprove___closed__1);
v___x_370_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__0, &l_Lean_Elab_Command_reprove___closed__0_once, _init_l_Lean_Elab_Command_reprove___closed__0);
v___x_371_ = l_Lean_Name_mkStr4(v___x_370_, v___x_369_, v___x_368_, v___x_367_);
return v___x_371_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__5(void){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_372_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__6(void){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__5, &l_Lean_Elab_Command_reprove___closed__5_once, _init_l_Lean_Elab_Command_reprove___closed__5);
v___x_374_ = l_Lean_Name_mkStr1(v___x_373_);
return v___x_374_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__7(void){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = lean_mk_string_unchecked("reprove ", 8, 8);
return v___x_375_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__8(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__7, &l_Lean_Elab_Command_reprove___closed__7_once, _init_l_Lean_Elab_Command_reprove___closed__7);
v___x_377_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
return v___x_377_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__9(void){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = lean_mk_string_unchecked("many1", 5, 5);
return v___x_378_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__10(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__9, &l_Lean_Elab_Command_reprove___closed__9_once, _init_l_Lean_Elab_Command_reprove___closed__9);
v___x_380_ = l_Lean_Name_mkStr1(v___x_379_);
return v___x_380_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__11(void){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_381_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__12(void){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_382_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__11, &l_Lean_Elab_Command_reprove___closed__11_once, _init_l_Lean_Elab_Command_reprove___closed__11);
v___x_383_ = l_Lean_Name_mkStr1(v___x_382_);
return v___x_383_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__13(void){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_384_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__12, &l_Lean_Elab_Command_reprove___closed__12_once, _init_l_Lean_Elab_Command_reprove___closed__12);
v___x_385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
return v___x_385_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__14(void){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_386_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__13, &l_Lean_Elab_Command_reprove___closed__13_once, _init_l_Lean_Elab_Command_reprove___closed__13);
v___x_387_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__10, &l_Lean_Elab_Command_reprove___closed__10_once, _init_l_Lean_Elab_Command_reprove___closed__10);
v___x_388_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_387_);
lean_ctor_set(v___x_388_, 1, v___x_386_);
return v___x_388_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__15(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_389_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__14, &l_Lean_Elab_Command_reprove___closed__14_once, _init_l_Lean_Elab_Command_reprove___closed__14);
v___x_390_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__8, &l_Lean_Elab_Command_reprove___closed__8_once, _init_l_Lean_Elab_Command_reprove___closed__8);
v___x_391_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__6, &l_Lean_Elab_Command_reprove___closed__6_once, _init_l_Lean_Elab_Command_reprove___closed__6);
v___x_392_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
lean_ctor_set(v___x_392_, 1, v___x_390_);
lean_ctor_set(v___x_392_, 2, v___x_389_);
return v___x_392_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__16(void){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = lean_mk_string_unchecked(" by ", 4, 4);
return v___x_393_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__17(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__16, &l_Lean_Elab_Command_reprove___closed__16_once, _init_l_Lean_Elab_Command_reprove___closed__16);
v___x_395_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
return v___x_395_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__18(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_396_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__17, &l_Lean_Elab_Command_reprove___closed__17_once, _init_l_Lean_Elab_Command_reprove___closed__17);
v___x_397_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__15, &l_Lean_Elab_Command_reprove___closed__15_once, _init_l_Lean_Elab_Command_reprove___closed__15);
v___x_398_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__6, &l_Lean_Elab_Command_reprove___closed__6_once, _init_l_Lean_Elab_Command_reprove___closed__6);
v___x_399_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
lean_ctor_set(v___x_399_, 1, v___x_397_);
lean_ctor_set(v___x_399_, 2, v___x_396_);
return v___x_399_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__19(void){
_start:
{
lean_object* v___x_400_; 
v___x_400_ = lean_mk_string_unchecked("tacticSeq", 9, 9);
return v___x_400_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__20(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_401_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__19, &l_Lean_Elab_Command_reprove___closed__19_once, _init_l_Lean_Elab_Command_reprove___closed__19);
v___x_402_ = l_Lean_Name_mkStr1(v___x_401_);
return v___x_402_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__21(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_403_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__20, &l_Lean_Elab_Command_reprove___closed__20_once, _init_l_Lean_Elab_Command_reprove___closed__20);
v___x_404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_404_, 0, v___x_403_);
return v___x_404_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__22(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_405_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__21, &l_Lean_Elab_Command_reprove___closed__21_once, _init_l_Lean_Elab_Command_reprove___closed__21);
v___x_406_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__18, &l_Lean_Elab_Command_reprove___closed__18_once, _init_l_Lean_Elab_Command_reprove___closed__18);
v___x_407_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__6, &l_Lean_Elab_Command_reprove___closed__6_once, _init_l_Lean_Elab_Command_reprove___closed__6);
v___x_408_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_408_, 0, v___x_407_);
lean_ctor_set(v___x_408_, 1, v___x_406_);
lean_ctor_set(v___x_408_, 2, v___x_405_);
return v___x_408_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove___closed__23(void){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_409_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__22, &l_Lean_Elab_Command_reprove___closed__22_once, _init_l_Lean_Elab_Command_reprove___closed__22);
v___x_410_ = lean_unsigned_to_nat(1022u);
v___x_411_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__4, &l_Lean_Elab_Command_reprove___closed__4_once, _init_l_Lean_Elab_Command_reprove___closed__4);
v___x_412_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
lean_ctor_set(v___x_412_, 1, v___x_410_);
lean_ctor_set(v___x_412_, 2, v___x_409_);
return v___x_412_;
}
}
static lean_object* _init_l_Lean_Elab_Command_reprove(void){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = lean_obj_once(&l_Lean_Elab_Command_reprove___closed__23, &l_Lean_Elab_Command_reprove___closed__23_once, _init_l_Lean_Elab_Command_reprove___closed__23);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabReprove_spec__0(lean_object* v_tacticSeq_414_, lean_object* v_as_415_, size_t v_sz_416_, size_t v_i_417_, lean_object* v_b_418_, lean_object* v___y_419_, lean_object* v___y_420_){
_start:
{
uint8_t v___x_422_; 
v___x_422_ = lean_usize_dec_lt(v_i_417_, v_sz_416_);
if (v___x_422_ == 0)
{
lean_object* v___x_423_; 
lean_dec(v_tacticSeq_414_);
v___x_423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_423_, 0, v_b_418_);
return v___x_423_;
}
else
{
lean_object* v_a_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v_a_424_ = lean_array_uget_borrowed(v_as_415_, v_i_417_);
v___x_425_ = lean_box(0);
lean_inc(v_a_424_);
v___x_426_ = lean_alloc_closure((void*)(l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo___boxed), 5, 2);
lean_closure_set(v___x_426_, 0, v_a_424_);
lean_closure_set(v___x_426_, 1, v___x_425_);
v___x_427_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_426_, v___y_419_, v___y_420_);
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v_a_428_; lean_object* v___x_429_; 
v_a_428_ = lean_ctor_get(v___x_427_, 0);
lean_inc(v_a_428_);
lean_dec_ref(v___x_427_);
lean_inc(v_tacticSeq_414_);
v___x_429_ = l_Lean_Elab_Command_reproveDecl(v_a_428_, v_tacticSeq_414_, v___y_419_, v___y_420_);
if (lean_obj_tag(v___x_429_) == 0)
{
lean_object* v___x_430_; size_t v___x_431_; size_t v___x_432_; 
lean_dec_ref(v___x_429_);
v___x_430_ = lean_box(0);
v___x_431_ = ((size_t)1ULL);
v___x_432_ = lean_usize_add(v_i_417_, v___x_431_);
v_i_417_ = v___x_432_;
v_b_418_ = v___x_430_;
goto _start;
}
else
{
lean_dec(v_tacticSeq_414_);
return v___x_429_;
}
}
else
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
lean_dec(v_tacticSeq_414_);
v_a_434_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_441_ == 0)
{
v___x_436_ = v___x_427_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_427_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_434_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabReprove_spec__0___boxed(lean_object* v_tacticSeq_442_, lean_object* v_as_443_, lean_object* v_sz_444_, lean_object* v_i_445_, lean_object* v_b_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
size_t v_sz_boxed_450_; size_t v_i_boxed_451_; lean_object* v_res_452_; 
v_sz_boxed_450_ = lean_unbox_usize(v_sz_444_);
lean_dec(v_sz_444_);
v_i_boxed_451_ = lean_unbox_usize(v_i_445_);
lean_dec(v_i_445_);
v_res_452_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabReprove_spec__0(v_tacticSeq_442_, v_as_443_, v_sz_boxed_450_, v_i_boxed_451_, v_b_446_, v___y_447_, v___y_448_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec_ref(v_as_443_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabReprove(lean_object* v_stx_453_, lean_object* v_a_454_, lean_object* v_a_455_){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v_identStxs_459_; lean_object* v___x_460_; lean_object* v_tacticSeq_461_; lean_object* v___x_462_; size_t v_sz_463_; size_t v___x_464_; lean_object* v___x_465_; 
v___x_457_ = lean_unsigned_to_nat(1u);
v___x_458_ = l_Lean_Syntax_getArg(v_stx_453_, v___x_457_);
v_identStxs_459_ = l_Lean_Syntax_getArgs(v___x_458_);
lean_dec(v___x_458_);
v___x_460_ = lean_unsigned_to_nat(3u);
v_tacticSeq_461_ = l_Lean_Syntax_getArg(v_stx_453_, v___x_460_);
v___x_462_ = lean_box(0);
v_sz_463_ = lean_array_size(v_identStxs_459_);
v___x_464_ = ((size_t)0ULL);
v___x_465_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabReprove_spec__0(v_tacticSeq_461_, v_identStxs_459_, v_sz_463_, v___x_464_, v___x_462_, v_a_454_, v_a_455_);
lean_dec_ref(v_identStxs_459_);
if (lean_obj_tag(v___x_465_) == 0)
{
lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_472_; 
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_465_);
if (v_isSharedCheck_472_ == 0)
{
lean_object* v_unused_473_; 
v_unused_473_ = lean_ctor_get(v___x_465_, 0);
lean_dec(v_unused_473_);
v___x_467_ = v___x_465_;
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
else
{
lean_dec(v___x_465_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_470_; 
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 0, v___x_462_);
v___x_470_ = v___x_467_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_462_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
else
{
return v___x_465_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabReprove___boxed(lean_object* v_stx_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lean_Elab_Command_elabReprove(v_stx_474_, v_a_475_, v_a_476_);
lean_dec(v_a_476_);
lean_dec_ref(v_a_475_);
lean_dec(v_stx_474_);
return v_res_478_;
}
}
lean_object* runtime_initialize_Init_Notation(uint8_t builtin);
lean_object* runtime_initialize_Lean_Exception(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_Reprove(uint8_t builtin) {
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
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_Reprove(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Command_reprove = _init_l_Lean_Elab_Command_reprove();
lean_mark_persistent(l_Lean_Elab_Command_reprove);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Init_Notation(uint8_t builtin);
lean_object* initialize_Lean_Exception(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_Reprove(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Reprove(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_Reprove(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_Reprove(builtin);
}
#ifdef __cplusplus
}
#endif
