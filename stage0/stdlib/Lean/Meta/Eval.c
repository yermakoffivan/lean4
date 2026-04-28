// Lean compiler output
// Module: Lean.Meta.Eval
// Imports: public import Lean.AddDecl public import Lean.Meta.Check public import Lean.Util.CollectLevelParams import Lean.Compiler.Options
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
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_addAndCompile(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
uint8_t lean_has_compile_error(lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_abortCommandExceptionId;
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
extern lean_object* l_Lean_Compiler_compiler_relaxedMetaCheck;
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
extern lean_object* l_Lean_Compiler_compiler_postponeCompile;
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_markMeta(lean_object*, lean_object*);
lean_object* l_Lean_traceBlock___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_async;
extern lean_object* l_Lean_diagnostics;
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_collectLevelParams(lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Environment_importEnv_x3f(lean_object*);
lean_object* l_Lean_Expr_getUsedConstants(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Environment_isImportedConst(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHasTypeButIsExpectedMsg___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__6(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1___closed__0;
static lean_once_cell_t l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__4;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__5;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__6;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__9;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__11;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12;
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_evalExpr___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExpr___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_evalExpr___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExpr___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_Meta_evalExpr___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExpr___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_, lean_object* v___y_3_){
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg___boxed(lean_object* v_e_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg(v_e_29_, v___y_30_, v___y_31_);
lean_dec(v___y_31_);
lean_dec(v___y_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0(lean_object* v_e_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg(v_e_34_, v___y_36_, v___y_38_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___boxed(lean_object* v_e_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0(v_e_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__2(lean_object* v_opts_48_, lean_object* v_opt_49_){
_start:
{
lean_object* v_name_50_; lean_object* v_defValue_51_; lean_object* v_map_52_; lean_object* v___x_53_; 
v_name_50_ = lean_ctor_get(v_opt_49_, 0);
v_defValue_51_ = lean_ctor_get(v_opt_49_, 1);
v_map_52_ = lean_ctor_get(v_opts_48_, 0);
v___x_53_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_52_, v_name_50_);
if (lean_obj_tag(v___x_53_) == 0)
{
uint8_t v___x_54_; 
v___x_54_ = lean_unbox(v_defValue_51_);
return v___x_54_;
}
else
{
lean_object* v_val_55_; 
v_val_55_ = lean_ctor_get(v___x_53_, 0);
lean_inc(v_val_55_);
lean_dec_ref(v___x_53_);
if (lean_obj_tag(v_val_55_) == 1)
{
uint8_t v_v_56_; 
v_v_56_ = lean_ctor_get_uint8(v_val_55_, 0);
lean_dec_ref(v_val_55_);
return v_v_56_;
}
else
{
uint8_t v___x_57_; 
lean_dec(v_val_55_);
v___x_57_ = lean_unbox(v_defValue_51_);
return v___x_57_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__2___boxed(lean_object* v_opts_58_, lean_object* v_opt_59_){
_start:
{
uint8_t v_res_60_; lean_object* v_r_61_; 
v_res_60_ = l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__2(v_opts_58_, v_opt_59_);
lean_dec_ref(v_opt_59_);
lean_dec_ref(v_opts_58_);
v_r_61_ = lean_box(v_res_60_);
return v_r_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__3(lean_object* v_opts_62_, lean_object* v_opt_63_){
_start:
{
lean_object* v_name_64_; lean_object* v_defValue_65_; lean_object* v_map_66_; lean_object* v___x_67_; 
v_name_64_ = lean_ctor_get(v_opt_63_, 0);
v_defValue_65_ = lean_ctor_get(v_opt_63_, 1);
v_map_66_ = lean_ctor_get(v_opts_62_, 0);
v___x_67_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_66_, v_name_64_);
if (lean_obj_tag(v___x_67_) == 0)
{
lean_inc(v_defValue_65_);
return v_defValue_65_;
}
else
{
lean_object* v_val_68_; 
v_val_68_ = lean_ctor_get(v___x_67_, 0);
lean_inc(v_val_68_);
lean_dec_ref(v___x_67_);
if (lean_obj_tag(v_val_68_) == 3)
{
lean_object* v_v_69_; 
v_v_69_ = lean_ctor_get(v_val_68_, 0);
lean_inc(v_v_69_);
lean_dec_ref(v_val_68_);
return v_v_69_;
}
else
{
lean_dec(v_val_68_);
lean_inc(v_defValue_65_);
return v_defValue_65_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__3___boxed(lean_object* v_opts_70_, lean_object* v_opt_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__3(v_opts_70_, v_opt_71_);
lean_dec_ref(v_opt_71_);
lean_dec_ref(v_opts_70_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5_spec__8(lean_object* v_msgData_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_){
_start:
{
lean_object* v___x_79_; lean_object* v_env_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v_mctx_83_; lean_object* v_lctx_84_; lean_object* v_options_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_79_ = lean_st_ref_get(v___y_77_);
v_env_80_ = lean_ctor_get(v___x_79_, 0);
lean_inc_ref(v_env_80_);
lean_dec(v___x_79_);
v___x_81_ = lean_st_ref_get(v___y_77_);
lean_dec(v___x_81_);
v___x_82_ = lean_st_ref_get(v___y_75_);
v_mctx_83_ = lean_ctor_get(v___x_82_, 0);
lean_inc_ref(v_mctx_83_);
lean_dec(v___x_82_);
v_lctx_84_ = lean_ctor_get(v___y_74_, 2);
v_options_85_ = lean_ctor_get(v___y_76_, 2);
lean_inc_ref(v_options_85_);
lean_inc_ref(v_lctx_84_);
v___x_86_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_86_, 0, v_env_80_);
lean_ctor_set(v___x_86_, 1, v_mctx_83_);
lean_ctor_set(v___x_86_, 2, v_lctx_84_);
lean_ctor_set(v___x_86_, 3, v_options_85_);
v___x_87_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
lean_ctor_set(v___x_87_, 1, v_msgData_73_);
v___x_88_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5_spec__8___boxed(lean_object* v_msgData_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5_spec__8(v_msgData_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg(lean_object* v_msg_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v_ref_102_; lean_object* v___x_103_; lean_object* v_a_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_112_; 
v_ref_102_ = lean_ctor_get(v___y_99_, 5);
v___x_103_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5_spec__8(v_msg_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
v_a_104_ = lean_ctor_get(v___x_103_, 0);
v_isSharedCheck_112_ = !lean_is_exclusive(v___x_103_);
if (v_isSharedCheck_112_ == 0)
{
v___x_106_ = v___x_103_;
v_isShared_107_ = v_isSharedCheck_112_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_a_104_);
lean_dec(v___x_103_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_112_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_108_; lean_object* v___x_110_; 
lean_inc(v_ref_102_);
v___x_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_108_, 0, v_ref_102_);
lean_ctor_set(v___x_108_, 1, v_a_104_);
if (v_isShared_107_ == 0)
{
lean_ctor_set_tag(v___x_106_, 1);
lean_ctor_set(v___x_106_, 0, v___x_108_);
v___x_110_ = v___x_106_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v___x_108_);
v___x_110_ = v_reuseFailAlloc_111_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
return v___x_110_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg___boxed(lean_object* v_msg_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg(v_msg_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_);
lean_dec(v___y_117_);
lean_dec_ref(v___y_116_);
lean_dec(v___y_115_);
lean_dec_ref(v___y_114_);
return v_res_119_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__6(lean_object* v___x_120_, lean_object* v_as_121_, size_t v_i_122_, size_t v_stop_123_){
_start:
{
uint8_t v___x_124_; 
v___x_124_ = lean_usize_dec_eq(v_i_122_, v_stop_123_);
if (v___x_124_ == 0)
{
uint8_t v___x_125_; lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_125_ = 1;
v___x_126_ = lean_array_uget_borrowed(v_as_121_, v_i_122_);
v___x_127_ = l_Lean_Environment_isImportedConst(v___x_120_, v___x_126_);
if (v___x_127_ == 0)
{
return v___x_125_;
}
else
{
if (v___x_124_ == 0)
{
size_t v___x_128_; size_t v___x_129_; 
v___x_128_ = ((size_t)1ULL);
v___x_129_ = lean_usize_add(v_i_122_, v___x_128_);
v_i_122_ = v___x_129_;
goto _start;
}
else
{
return v___x_125_;
}
}
}
else
{
uint8_t v___x_131_; 
v___x_131_ = 0;
return v___x_131_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__6___boxed(lean_object* v___x_132_, lean_object* v_as_133_, lean_object* v_i_134_, lean_object* v_stop_135_){
_start:
{
size_t v_i_boxed_136_; size_t v_stop_boxed_137_; uint8_t v_res_138_; lean_object* v_r_139_; 
v_i_boxed_136_ = lean_unbox_usize(v_i_134_);
lean_dec(v_i_134_);
v_stop_boxed_137_ = lean_unbox_usize(v_stop_135_);
lean_dec(v_stop_135_);
v_res_138_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__6(v___x_132_, v_as_133_, v_i_boxed_136_, v_stop_boxed_137_);
lean_dec_ref(v_as_133_);
lean_dec_ref(v___x_132_);
v_r_139_ = lean_box(v_res_138_);
return v_r_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__5___redArg(lean_object* v_x_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_){
_start:
{
if (lean_obj_tag(v_x_140_) == 0)
{
lean_object* v_a_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v_a_146_ = lean_ctor_get(v_x_140_, 0);
lean_inc(v_a_146_);
lean_dec_ref(v_x_140_);
v___x_147_ = l_Lean_stringToMessageData(v_a_146_);
v___x_148_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg(v___x_147_, v___y_141_, v___y_142_, v___y_143_, v___y_144_);
return v___x_148_;
}
else
{
lean_object* v_a_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_156_; 
v_a_149_ = lean_ctor_get(v_x_140_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v_x_140_);
if (v_isSharedCheck_156_ == 0)
{
v___x_151_ = v_x_140_;
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_a_149_);
lean_dec(v_x_140_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_154_; 
if (v_isShared_152_ == 0)
{
lean_ctor_set_tag(v___x_151_, 0);
v___x_154_ = v___x_151_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_a_149_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__5___redArg___boxed(lean_object* v_x_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__5___redArg(v_x_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
lean_dec(v___y_159_);
lean_dec_ref(v___y_158_);
return v_res_163_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_164_ = lean_box(0);
v___x_165_ = l_Lean_Elab_abortCommandExceptionId;
v___x_166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
lean_ctor_set(v___x_166_, 1, v___x_164_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6___redArg(){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_168_ = lean_obj_once(&l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6___redArg___closed__0, &l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6___redArg___closed__0);
v___x_169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6___redArg___boxed(lean_object* v___y_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6___redArg();
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4___redArg(lean_object* v_constName_172_, uint8_t v_checkMeta_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
lean_object* v___x_179_; lean_object* v_env_180_; uint8_t v___x_181_; 
v___x_179_ = lean_st_ref_get(v___y_177_);
v_env_180_ = lean_ctor_get(v___x_179_, 0);
lean_inc_ref(v_env_180_);
lean_dec(v___x_179_);
lean_inc(v_constName_172_);
v___x_181_ = lean_has_compile_error(v_env_180_, v_constName_172_);
if (v___x_181_ == 0)
{
lean_object* v___x_182_; lean_object* v_env_183_; lean_object* v_options_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_182_ = lean_st_ref_get(v___y_177_);
v_env_183_ = lean_ctor_get(v___x_182_, 0);
lean_inc_ref(v_env_183_);
lean_dec(v___x_182_);
v_options_184_ = lean_ctor_get(v___y_176_, 2);
v___x_185_ = l_Lean_Environment_evalConst___redArg(v_env_183_, v_options_184_, v_constName_172_, v_checkMeta_173_);
lean_dec(v_constName_172_);
lean_dec_ref(v_env_183_);
v___x_186_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__5___redArg(v___x_185_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
return v___x_186_;
}
else
{
lean_object* v___x_187_; 
v___x_187_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6___redArg();
if (lean_obj_tag(v___x_187_) == 0)
{
lean_object* v___x_188_; lean_object* v_env_189_; lean_object* v_options_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
lean_dec_ref(v___x_187_);
v___x_188_ = lean_st_ref_get(v___y_177_);
v_env_189_ = lean_ctor_get(v___x_188_, 0);
lean_inc_ref(v_env_189_);
lean_dec(v___x_188_);
v_options_190_ = lean_ctor_get(v___y_176_, 2);
v___x_191_ = l_Lean_Environment_evalConst___redArg(v_env_189_, v_options_190_, v_constName_172_, v_checkMeta_173_);
lean_dec(v_constName_172_);
lean_dec_ref(v_env_189_);
v___x_192_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__5___redArg(v___x_191_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
return v___x_192_;
}
else
{
lean_object* v_a_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_200_; 
lean_dec(v_constName_172_);
v_a_193_ = lean_ctor_get(v___x_187_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_200_ == 0)
{
v___x_195_ = v___x_187_;
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_a_193_);
lean_dec(v___x_187_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___x_198_; 
if (v_isShared_196_ == 0)
{
v___x_198_ = v___x_195_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_a_193_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4___redArg___boxed(lean_object* v_constName_201_, lean_object* v_checkMeta_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_){
_start:
{
uint8_t v_checkMeta_boxed_208_; lean_object* v_res_209_; 
v_checkMeta_boxed_208_ = lean_unbox(v_checkMeta_202_);
v_res_209_ = l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4___redArg(v_constName_201_, v_checkMeta_boxed_208_, v___y_203_, v___y_204_, v___y_205_, v___y_206_);
lean_dec(v___y_206_);
lean_dec_ref(v___y_205_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
return v_res_209_;
}
}
static lean_object* _init_l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_210_;
}
}
static lean_object* _init_l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1___closed__1(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_211_ = lean_obj_once(&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1___closed__0, &l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1___closed__0_once, _init_l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1___closed__0);
v___x_212_ = l_Lean_Name_mkStr1(v___x_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1(lean_object* v_o_213_, lean_object* v_k_214_, uint8_t v_v_215_){
_start:
{
lean_object* v_map_216_; uint8_t v_hasTrace_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_231_; 
v_map_216_ = lean_ctor_get(v_o_213_, 0);
v_hasTrace_217_ = lean_ctor_get_uint8(v_o_213_, sizeof(void*)*1);
v_isSharedCheck_231_ = !lean_is_exclusive(v_o_213_);
if (v_isSharedCheck_231_ == 0)
{
v___x_219_ = v_o_213_;
v_isShared_220_ = v_isSharedCheck_231_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_map_216_);
lean_dec(v_o_213_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_231_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_221_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_221_, 0, v_v_215_);
lean_inc(v_k_214_);
v___x_222_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_214_, v___x_221_, v_map_216_);
if (v_hasTrace_217_ == 0)
{
lean_object* v___x_223_; uint8_t v___x_224_; lean_object* v___x_226_; 
v___x_223_ = lean_obj_once(&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1___closed__1, &l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1___closed__1_once, _init_l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1___closed__1);
v___x_224_ = l_Lean_Name_isPrefixOf(v___x_223_, v_k_214_);
lean_dec(v_k_214_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 0, v___x_222_);
v___x_226_ = v___x_219_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v___x_222_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
lean_ctor_set_uint8(v___x_226_, sizeof(void*)*1, v___x_224_);
return v___x_226_;
}
}
else
{
lean_object* v___x_229_; 
lean_dec(v_k_214_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 0, v___x_222_);
v___x_229_ = v___x_219_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v___x_222_);
lean_ctor_set_uint8(v_reuseFailAlloc_230_, sizeof(void*)*1, v_hasTrace_217_);
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
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1___boxed(lean_object* v_o_232_, lean_object* v_k_233_, lean_object* v_v_234_){
_start:
{
uint8_t v_v_boxed_235_; lean_object* v_res_236_; 
v_v_boxed_235_ = lean_unbox(v_v_234_);
v_res_236_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1(v_o_232_, v_k_233_, v_v_boxed_235_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1(lean_object* v_opts_237_, lean_object* v_opt_238_, uint8_t v_val_239_){
_start:
{
lean_object* v_name_240_; lean_object* v___x_241_; 
v_name_240_ = lean_ctor_get(v_opt_238_, 0);
lean_inc(v_name_240_);
lean_dec_ref(v_opt_238_);
v___x_241_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1_spec__1(v_opts_237_, v_name_240_, v_val_239_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1___boxed(lean_object* v_opts_242_, lean_object* v_opt_243_, lean_object* v_val_244_){
_start:
{
uint8_t v_val_boxed_245_; lean_object* v_res_246_; 
v_val_boxed_245_ = lean_unbox(v_val_244_);
v_res_246_ = l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1(v_opts_242_, v_opt_243_, v_val_boxed_245_);
return v_res_246_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_247_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_248_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0);
v___x_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
return v___x_249_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1);
v___x_251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
lean_ctor_set(v___x_251_, 1, v___x_250_);
return v___x_251_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1);
v___x_253_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
lean_ctor_set(v___x_253_, 2, v___x_252_);
lean_ctor_set(v___x_253_, 3, v___x_252_);
lean_ctor_set(v___x_253_, 4, v___x_252_);
lean_ctor_set(v___x_253_, 5, v___x_252_);
return v___x_253_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = lean_mk_string_unchecked("compiler env", 12, 12);
return v___x_254_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = lean_mk_string_unchecked("_tmp", 4, 4);
return v___x_255_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__6(void){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_256_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__5, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__5_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__5);
v___x_257_ = l_Lean_Name_mkStr1(v___x_256_);
return v___x_257_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_258_ = lean_box(0);
v___x_259_ = lean_unsigned_to_nat(16u);
v___x_260_ = lean_mk_array(v___x_259_, v___x_258_);
return v___x_260_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_261_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7);
v___x_262_ = lean_unsigned_to_nat(0u);
v___x_263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
lean_ctor_set(v___x_263_, 1, v___x_261_);
return v___x_263_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__9(void){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = lean_unsigned_to_nat(0u);
v___x_265_ = lean_mk_empty_array_with_capacity(v___x_264_);
return v___x_265_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10(void){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_266_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__9, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__9_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__9);
v___x_267_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8);
v___x_268_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
lean_ctor_set(v___x_268_, 2, v___x_266_);
return v___x_268_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__11(void){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = lean_mk_string_unchecked("failed to evaluate expression, it contains metavariables", 56, 56);
return v___x_269_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__11, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__11_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__11);
v___x_271_ = l_Lean_stringToMessageData(v___x_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0(uint8_t v_checkMeta_272_, lean_object* v_checkType_273_, uint8_t v_safety_274_, lean_object* v_value_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
uint8_t v___y_282_; lean_object* v___y_283_; lean_object* v___y_284_; uint8_t v___y_285_; uint8_t v___y_286_; lean_object* v___y_287_; lean_object* v___y_288_; lean_object* v___y_289_; lean_object* v___y_290_; lean_object* v_fileName_291_; lean_object* v_fileMap_292_; lean_object* v_currRecDepth_293_; lean_object* v_ref_294_; lean_object* v_currNamespace_295_; lean_object* v_openDecls_296_; lean_object* v_initHeartbeats_297_; lean_object* v_maxHeartbeats_298_; lean_object* v_quotContext_299_; lean_object* v_currMacroScope_300_; lean_object* v_cancelTk_x3f_301_; uint8_t v_suppressElabErrors_302_; lean_object* v_inheritedTraceOptions_303_; lean_object* v___y_304_; uint8_t v___y_318_; lean_object* v___y_319_; lean_object* v___y_320_; uint8_t v___y_321_; uint8_t v___y_322_; lean_object* v___y_323_; lean_object* v___y_324_; lean_object* v___y_325_; lean_object* v___y_326_; lean_object* v___y_327_; lean_object* v___y_328_; uint8_t v___y_343_; lean_object* v___y_344_; lean_object* v___y_345_; lean_object* v___y_346_; lean_object* v___y_347_; lean_object* v___y_348_; lean_object* v___y_349_; uint8_t v___y_350_; uint8_t v___y_351_; lean_object* v___y_352_; lean_object* v___y_353_; lean_object* v___y_354_; uint8_t v___y_355_; uint8_t v___y_376_; lean_object* v___y_377_; lean_object* v___y_378_; lean_object* v___y_379_; uint8_t v___y_380_; lean_object* v___y_381_; uint8_t v___y_382_; lean_object* v___y_383_; lean_object* v___y_384_; lean_object* v___y_385_; lean_object* v___y_386_; lean_object* v___y_387_; lean_object* v___y_388_; uint8_t v___y_419_; lean_object* v___y_420_; lean_object* v___y_421_; lean_object* v___y_422_; lean_object* v___y_423_; lean_object* v___y_424_; lean_object* v___y_425_; lean_object* v___y_426_; lean_object* v___y_427_; uint8_t v___y_428_; uint8_t v___y_429_; lean_object* v___y_430_; lean_object* v___y_431_; uint8_t v___y_432_; uint8_t v___y_453_; lean_object* v___y_454_; lean_object* v___y_455_; uint8_t v___y_456_; lean_object* v___y_457_; uint8_t v___y_458_; lean_object* v___y_459_; lean_object* v___y_460_; lean_object* v___y_461_; lean_object* v___y_462_; lean_object* v___y_463_; lean_object* v___y_464_; uint8_t v___y_496_; lean_object* v___y_497_; uint8_t v___y_498_; lean_object* v___y_499_; lean_object* v___y_500_; lean_object* v___y_501_; lean_object* v___y_502_; lean_object* v___y_503_; uint8_t v___y_504_; lean_object* v___y_505_; lean_object* v___y_506_; lean_object* v___y_507_; uint8_t v___y_508_; lean_object* v___y_529_; lean_object* v___y_530_; lean_object* v___y_531_; lean_object* v___y_532_; lean_object* v___y_533_; lean_object* v___y_534_; lean_object* v___y_535_; lean_object* v___y_536_; lean_object* v___y_622_; lean_object* v___y_623_; lean_object* v___y_624_; lean_object* v___y_625_; lean_object* v_nextMacroScope_668_; lean_object* v_ngen_669_; lean_object* v_auxDeclNGen_670_; lean_object* v_traceState_671_; lean_object* v_messages_672_; lean_object* v_infoState_673_; lean_object* v_snapshotTasks_674_; lean_object* v___y_675_; lean_object* v___x_695_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; uint8_t v___x_711_; 
v___x_695_ = lean_st_ref_get(v___y_279_);
lean_inc_ref(v_value_275_);
v___x_708_ = l_Lean_Expr_getUsedConstants(v_value_275_);
v___x_709_ = lean_unsigned_to_nat(0u);
v___x_710_ = lean_array_get_size(v___x_708_);
v___x_711_ = lean_nat_dec_lt(v___x_709_, v___x_710_);
if (v___x_711_ == 0)
{
lean_dec_ref(v___x_708_);
lean_dec(v___x_695_);
goto v___jp_696_;
}
else
{
if (v___x_711_ == 0)
{
lean_dec_ref(v___x_708_);
lean_dec(v___x_695_);
goto v___jp_696_;
}
else
{
lean_object* v_env_712_; size_t v___x_713_; size_t v___x_714_; uint8_t v___x_715_; 
v_env_712_ = lean_ctor_get(v___x_695_, 0);
lean_inc_ref(v_env_712_);
lean_dec(v___x_695_);
v___x_713_ = ((size_t)0ULL);
v___x_714_ = lean_usize_of_nat(v___x_710_);
v___x_715_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__6(v_env_712_, v___x_708_, v___x_713_, v___x_714_);
lean_dec_ref(v___x_708_);
lean_dec_ref(v_env_712_);
if (v___x_715_ == 0)
{
goto v___jp_696_;
}
else
{
v___y_622_ = v___y_276_;
v___y_623_ = v___y_277_;
v___y_624_ = v___y_278_;
v___y_625_ = v___y_279_;
goto v___jp_621_;
}
}
}
v___jp_281_:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_305_ = l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__3(v___y_289_, v___y_287_);
v___x_306_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_306_, 0, v_fileName_291_);
lean_ctor_set(v___x_306_, 1, v_fileMap_292_);
lean_ctor_set(v___x_306_, 2, v___y_289_);
lean_ctor_set(v___x_306_, 3, v_currRecDepth_293_);
lean_ctor_set(v___x_306_, 4, v___x_305_);
lean_ctor_set(v___x_306_, 5, v_ref_294_);
lean_ctor_set(v___x_306_, 6, v_currNamespace_295_);
lean_ctor_set(v___x_306_, 7, v_openDecls_296_);
lean_ctor_set(v___x_306_, 8, v_initHeartbeats_297_);
lean_ctor_set(v___x_306_, 9, v_maxHeartbeats_298_);
lean_ctor_set(v___x_306_, 10, v_quotContext_299_);
lean_ctor_set(v___x_306_, 11, v_currMacroScope_300_);
lean_ctor_set(v___x_306_, 12, v_cancelTk_x3f_301_);
lean_ctor_set(v___x_306_, 13, v_inheritedTraceOptions_303_);
lean_ctor_set_uint8(v___x_306_, sizeof(void*)*14, v___y_285_);
lean_ctor_set_uint8(v___x_306_, sizeof(void*)*14 + 1, v_suppressElabErrors_302_);
v___x_307_ = l_Lean_addAndCompile(v___y_283_, v___y_282_, v___y_286_, v___x_306_, v___y_304_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v___x_308_; 
lean_dec_ref(v___x_307_);
v___x_308_ = l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4___redArg(v___y_288_, v_checkMeta_272_, v___y_290_, v___y_284_, v___x_306_, v___y_304_);
lean_dec(v___y_304_);
lean_dec_ref(v___x_306_);
lean_dec(v___y_284_);
lean_dec_ref(v___y_290_);
return v___x_308_;
}
else
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
lean_dec_ref(v___x_306_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_290_);
lean_dec(v___y_288_);
lean_dec(v___y_284_);
v_a_309_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_307_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_307_);
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
v___jp_317_:
{
lean_object* v_fileName_329_; lean_object* v_fileMap_330_; lean_object* v_currRecDepth_331_; lean_object* v_ref_332_; lean_object* v_currNamespace_333_; lean_object* v_openDecls_334_; lean_object* v_initHeartbeats_335_; lean_object* v_maxHeartbeats_336_; lean_object* v_quotContext_337_; lean_object* v_currMacroScope_338_; lean_object* v_cancelTk_x3f_339_; uint8_t v_suppressElabErrors_340_; lean_object* v_inheritedTraceOptions_341_; 
v_fileName_329_ = lean_ctor_get(v___y_327_, 0);
lean_inc_ref(v_fileName_329_);
v_fileMap_330_ = lean_ctor_get(v___y_327_, 1);
lean_inc_ref(v_fileMap_330_);
v_currRecDepth_331_ = lean_ctor_get(v___y_327_, 3);
lean_inc(v_currRecDepth_331_);
v_ref_332_ = lean_ctor_get(v___y_327_, 5);
lean_inc(v_ref_332_);
v_currNamespace_333_ = lean_ctor_get(v___y_327_, 6);
lean_inc(v_currNamespace_333_);
v_openDecls_334_ = lean_ctor_get(v___y_327_, 7);
lean_inc(v_openDecls_334_);
v_initHeartbeats_335_ = lean_ctor_get(v___y_327_, 8);
lean_inc(v_initHeartbeats_335_);
v_maxHeartbeats_336_ = lean_ctor_get(v___y_327_, 9);
lean_inc(v_maxHeartbeats_336_);
v_quotContext_337_ = lean_ctor_get(v___y_327_, 10);
lean_inc(v_quotContext_337_);
v_currMacroScope_338_ = lean_ctor_get(v___y_327_, 11);
lean_inc(v_currMacroScope_338_);
v_cancelTk_x3f_339_ = lean_ctor_get(v___y_327_, 12);
lean_inc(v_cancelTk_x3f_339_);
v_suppressElabErrors_340_ = lean_ctor_get_uint8(v___y_327_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_341_ = lean_ctor_get(v___y_327_, 13);
lean_inc_ref(v_inheritedTraceOptions_341_);
lean_dec_ref(v___y_327_);
v___y_282_ = v___y_318_;
v___y_283_ = v___y_319_;
v___y_284_ = v___y_320_;
v___y_285_ = v___y_321_;
v___y_286_ = v___y_322_;
v___y_287_ = v___y_323_;
v___y_288_ = v___y_324_;
v___y_289_ = v___y_325_;
v___y_290_ = v___y_326_;
v_fileName_291_ = v_fileName_329_;
v_fileMap_292_ = v_fileMap_330_;
v_currRecDepth_293_ = v_currRecDepth_331_;
v_ref_294_ = v_ref_332_;
v_currNamespace_295_ = v_currNamespace_333_;
v_openDecls_296_ = v_openDecls_334_;
v_initHeartbeats_297_ = v_initHeartbeats_335_;
v_maxHeartbeats_298_ = v_maxHeartbeats_336_;
v_quotContext_299_ = v_quotContext_337_;
v_currMacroScope_300_ = v_currMacroScope_338_;
v_cancelTk_x3f_301_ = v_cancelTk_x3f_339_;
v_suppressElabErrors_302_ = v_suppressElabErrors_340_;
v_inheritedTraceOptions_303_ = v_inheritedTraceOptions_341_;
v___y_304_ = v___y_328_;
goto v___jp_281_;
}
v___jp_342_:
{
if (v___y_355_ == 0)
{
lean_object* v___x_356_; lean_object* v_env_357_; lean_object* v_nextMacroScope_358_; lean_object* v_ngen_359_; lean_object* v_auxDeclNGen_360_; lean_object* v_traceState_361_; lean_object* v_messages_362_; lean_object* v_infoState_363_; lean_object* v_snapshotTasks_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_373_; 
v___x_356_ = lean_st_ref_take(v___y_346_);
v_env_357_ = lean_ctor_get(v___x_356_, 0);
v_nextMacroScope_358_ = lean_ctor_get(v___x_356_, 1);
v_ngen_359_ = lean_ctor_get(v___x_356_, 2);
v_auxDeclNGen_360_ = lean_ctor_get(v___x_356_, 3);
v_traceState_361_ = lean_ctor_get(v___x_356_, 4);
v_messages_362_ = lean_ctor_get(v___x_356_, 6);
v_infoState_363_ = lean_ctor_get(v___x_356_, 7);
v_snapshotTasks_364_ = lean_ctor_get(v___x_356_, 8);
v_isSharedCheck_373_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_373_ == 0)
{
lean_object* v_unused_374_; 
v_unused_374_ = lean_ctor_get(v___x_356_, 5);
lean_dec(v_unused_374_);
v___x_366_ = v___x_356_;
v_isShared_367_ = v_isSharedCheck_373_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_snapshotTasks_364_);
lean_inc(v_infoState_363_);
lean_inc(v_messages_362_);
lean_inc(v_traceState_361_);
lean_inc(v_auxDeclNGen_360_);
lean_inc(v_ngen_359_);
lean_inc(v_nextMacroScope_358_);
lean_inc(v_env_357_);
lean_dec(v___x_356_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_373_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_368_; lean_object* v___x_370_; 
v___x_368_ = l_Lean_Kernel_enableDiag(v_env_357_, v___y_350_);
lean_inc_ref(v___y_353_);
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 5, v___y_353_);
lean_ctor_set(v___x_366_, 0, v___x_368_);
v___x_370_ = v___x_366_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_368_);
lean_ctor_set(v_reuseFailAlloc_372_, 1, v_nextMacroScope_358_);
lean_ctor_set(v_reuseFailAlloc_372_, 2, v_ngen_359_);
lean_ctor_set(v_reuseFailAlloc_372_, 3, v_auxDeclNGen_360_);
lean_ctor_set(v_reuseFailAlloc_372_, 4, v_traceState_361_);
lean_ctor_set(v_reuseFailAlloc_372_, 5, v___y_353_);
lean_ctor_set(v_reuseFailAlloc_372_, 6, v_messages_362_);
lean_ctor_set(v_reuseFailAlloc_372_, 7, v_infoState_363_);
lean_ctor_set(v_reuseFailAlloc_372_, 8, v_snapshotTasks_364_);
v___x_370_ = v_reuseFailAlloc_372_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
lean_object* v___x_371_; 
v___x_371_ = lean_st_ref_set(v___y_346_, v___x_370_);
v___y_318_ = v___y_343_;
v___y_319_ = v___y_344_;
v___y_320_ = v___y_345_;
v___y_321_ = v___y_350_;
v___y_322_ = v___y_351_;
v___y_323_ = v___y_347_;
v___y_324_ = v___y_354_;
v___y_325_ = v___y_348_;
v___y_326_ = v___y_349_;
v___y_327_ = v___y_352_;
v___y_328_ = v___y_346_;
goto v___jp_317_;
}
}
}
else
{
v___y_318_ = v___y_343_;
v___y_319_ = v___y_344_;
v___y_320_ = v___y_345_;
v___y_321_ = v___y_350_;
v___y_322_ = v___y_351_;
v___y_323_ = v___y_347_;
v___y_324_ = v___y_354_;
v___y_325_ = v___y_348_;
v___y_326_ = v___y_349_;
v___y_327_ = v___y_352_;
v___y_328_ = v___y_346_;
goto v___jp_317_;
}
}
v___jp_375_:
{
lean_object* v___x_389_; lean_object* v_fileName_390_; lean_object* v_fileMap_391_; lean_object* v_currRecDepth_392_; lean_object* v_ref_393_; lean_object* v_currNamespace_394_; lean_object* v_openDecls_395_; lean_object* v_initHeartbeats_396_; lean_object* v_maxHeartbeats_397_; lean_object* v_quotContext_398_; lean_object* v_currMacroScope_399_; lean_object* v_cancelTk_x3f_400_; uint8_t v_suppressElabErrors_401_; lean_object* v_inheritedTraceOptions_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_415_; 
v___x_389_ = lean_st_ref_get(v___y_388_);
v_fileName_390_ = lean_ctor_get(v___y_387_, 0);
v_fileMap_391_ = lean_ctor_get(v___y_387_, 1);
v_currRecDepth_392_ = lean_ctor_get(v___y_387_, 3);
v_ref_393_ = lean_ctor_get(v___y_387_, 5);
v_currNamespace_394_ = lean_ctor_get(v___y_387_, 6);
v_openDecls_395_ = lean_ctor_get(v___y_387_, 7);
v_initHeartbeats_396_ = lean_ctor_get(v___y_387_, 8);
v_maxHeartbeats_397_ = lean_ctor_get(v___y_387_, 9);
v_quotContext_398_ = lean_ctor_get(v___y_387_, 10);
v_currMacroScope_399_ = lean_ctor_get(v___y_387_, 11);
v_cancelTk_x3f_400_ = lean_ctor_get(v___y_387_, 12);
v_suppressElabErrors_401_ = lean_ctor_get_uint8(v___y_387_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_402_ = lean_ctor_get(v___y_387_, 13);
v_isSharedCheck_415_ = !lean_is_exclusive(v___y_387_);
if (v_isSharedCheck_415_ == 0)
{
lean_object* v_unused_416_; lean_object* v_unused_417_; 
v_unused_416_ = lean_ctor_get(v___y_387_, 4);
lean_dec(v_unused_416_);
v_unused_417_ = lean_ctor_get(v___y_387_, 2);
lean_dec(v_unused_417_);
v___x_404_ = v___y_387_;
v_isShared_405_ = v_isSharedCheck_415_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_inheritedTraceOptions_402_);
lean_inc(v_cancelTk_x3f_400_);
lean_inc(v_currMacroScope_399_);
lean_inc(v_quotContext_398_);
lean_inc(v_maxHeartbeats_397_);
lean_inc(v_initHeartbeats_396_);
lean_inc(v_openDecls_395_);
lean_inc(v_currNamespace_394_);
lean_inc(v_ref_393_);
lean_inc(v_currRecDepth_392_);
lean_inc(v_fileMap_391_);
lean_inc(v_fileName_390_);
lean_dec(v___y_387_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_415_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v_env_406_; lean_object* v___x_407_; lean_object* v___x_409_; 
v_env_406_ = lean_ctor_get(v___x_389_, 0);
lean_inc_ref(v_env_406_);
lean_dec(v___x_389_);
v___x_407_ = l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__3(v___y_381_, v___y_383_);
lean_inc_ref(v_inheritedTraceOptions_402_);
lean_inc(v_cancelTk_x3f_400_);
lean_inc(v_currMacroScope_399_);
lean_inc(v_quotContext_398_);
lean_inc(v_maxHeartbeats_397_);
lean_inc(v_initHeartbeats_396_);
lean_inc(v_openDecls_395_);
lean_inc(v_currNamespace_394_);
lean_inc(v_ref_393_);
lean_inc(v_currRecDepth_392_);
lean_inc_ref(v___y_381_);
lean_inc_ref(v_fileMap_391_);
lean_inc_ref(v_fileName_390_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 4, v___x_407_);
lean_ctor_set(v___x_404_, 2, v___y_381_);
v___x_409_ = v___x_404_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_fileName_390_);
lean_ctor_set(v_reuseFailAlloc_414_, 1, v_fileMap_391_);
lean_ctor_set(v_reuseFailAlloc_414_, 2, v___y_381_);
lean_ctor_set(v_reuseFailAlloc_414_, 3, v_currRecDepth_392_);
lean_ctor_set(v_reuseFailAlloc_414_, 4, v___x_407_);
lean_ctor_set(v_reuseFailAlloc_414_, 5, v_ref_393_);
lean_ctor_set(v_reuseFailAlloc_414_, 6, v_currNamespace_394_);
lean_ctor_set(v_reuseFailAlloc_414_, 7, v_openDecls_395_);
lean_ctor_set(v_reuseFailAlloc_414_, 8, v_initHeartbeats_396_);
lean_ctor_set(v_reuseFailAlloc_414_, 9, v_maxHeartbeats_397_);
lean_ctor_set(v_reuseFailAlloc_414_, 10, v_quotContext_398_);
lean_ctor_set(v_reuseFailAlloc_414_, 11, v_currMacroScope_399_);
lean_ctor_set(v_reuseFailAlloc_414_, 12, v_cancelTk_x3f_400_);
lean_ctor_set(v_reuseFailAlloc_414_, 13, v_inheritedTraceOptions_402_);
lean_ctor_set_uint8(v_reuseFailAlloc_414_, sizeof(void*)*14 + 1, v_suppressElabErrors_401_);
v___x_409_ = v_reuseFailAlloc_414_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
lean_object* v___x_410_; lean_object* v___x_411_; uint8_t v___x_412_; uint8_t v___x_413_; 
lean_ctor_set_uint8(v___x_409_, sizeof(void*)*14, v___y_382_);
v___x_410_ = l_Lean_Compiler_compiler_relaxedMetaCheck;
v___x_411_ = l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1(v___y_381_, v___x_410_, v___y_376_);
v___x_412_ = l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__2(v___x_411_, v___y_377_);
v___x_413_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_406_);
lean_dec_ref(v_env_406_);
if (v___x_413_ == 0)
{
if (v___x_412_ == 0)
{
lean_dec_ref(v___x_409_);
v___y_282_ = v___y_376_;
v___y_283_ = v___y_378_;
v___y_284_ = v___y_379_;
v___y_285_ = v___x_412_;
v___y_286_ = v___y_380_;
v___y_287_ = v___y_383_;
v___y_288_ = v___y_385_;
v___y_289_ = v___x_411_;
v___y_290_ = v___y_386_;
v_fileName_291_ = v_fileName_390_;
v_fileMap_292_ = v_fileMap_391_;
v_currRecDepth_293_ = v_currRecDepth_392_;
v_ref_294_ = v_ref_393_;
v_currNamespace_295_ = v_currNamespace_394_;
v_openDecls_296_ = v_openDecls_395_;
v_initHeartbeats_297_ = v_initHeartbeats_396_;
v_maxHeartbeats_298_ = v_maxHeartbeats_397_;
v_quotContext_299_ = v_quotContext_398_;
v_currMacroScope_300_ = v_currMacroScope_399_;
v_cancelTk_x3f_301_ = v_cancelTk_x3f_400_;
v_suppressElabErrors_302_ = v_suppressElabErrors_401_;
v_inheritedTraceOptions_303_ = v_inheritedTraceOptions_402_;
v___y_304_ = v___y_388_;
goto v___jp_281_;
}
else
{
lean_dec_ref(v_inheritedTraceOptions_402_);
lean_dec(v_cancelTk_x3f_400_);
lean_dec(v_currMacroScope_399_);
lean_dec(v_quotContext_398_);
lean_dec(v_maxHeartbeats_397_);
lean_dec(v_initHeartbeats_396_);
lean_dec(v_openDecls_395_);
lean_dec(v_currNamespace_394_);
lean_dec(v_ref_393_);
lean_dec(v_currRecDepth_392_);
lean_dec_ref(v_fileMap_391_);
lean_dec_ref(v_fileName_390_);
v___y_343_ = v___y_376_;
v___y_344_ = v___y_378_;
v___y_345_ = v___y_379_;
v___y_346_ = v___y_388_;
v___y_347_ = v___y_383_;
v___y_348_ = v___x_411_;
v___y_349_ = v___y_386_;
v___y_350_ = v___x_412_;
v___y_351_ = v___y_380_;
v___y_352_ = v___x_409_;
v___y_353_ = v___y_384_;
v___y_354_ = v___y_385_;
v___y_355_ = v___x_413_;
goto v___jp_342_;
}
}
else
{
lean_dec_ref(v_inheritedTraceOptions_402_);
lean_dec(v_cancelTk_x3f_400_);
lean_dec(v_currMacroScope_399_);
lean_dec(v_quotContext_398_);
lean_dec(v_maxHeartbeats_397_);
lean_dec(v_initHeartbeats_396_);
lean_dec(v_openDecls_395_);
lean_dec(v_currNamespace_394_);
lean_dec(v_ref_393_);
lean_dec(v_currRecDepth_392_);
lean_dec_ref(v_fileMap_391_);
lean_dec_ref(v_fileName_390_);
v___y_343_ = v___y_376_;
v___y_344_ = v___y_378_;
v___y_345_ = v___y_379_;
v___y_346_ = v___y_388_;
v___y_347_ = v___y_383_;
v___y_348_ = v___x_411_;
v___y_349_ = v___y_386_;
v___y_350_ = v___x_412_;
v___y_351_ = v___y_380_;
v___y_352_ = v___x_409_;
v___y_353_ = v___y_384_;
v___y_354_ = v___y_385_;
v___y_355_ = v___x_412_;
goto v___jp_342_;
}
}
}
}
v___jp_418_:
{
if (v___y_432_ == 0)
{
lean_object* v___x_433_; lean_object* v_env_434_; lean_object* v_nextMacroScope_435_; lean_object* v_ngen_436_; lean_object* v_auxDeclNGen_437_; lean_object* v_traceState_438_; lean_object* v_messages_439_; lean_object* v_infoState_440_; lean_object* v_snapshotTasks_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_450_; 
v___x_433_ = lean_st_ref_take(v___y_427_);
v_env_434_ = lean_ctor_get(v___x_433_, 0);
v_nextMacroScope_435_ = lean_ctor_get(v___x_433_, 1);
v_ngen_436_ = lean_ctor_get(v___x_433_, 2);
v_auxDeclNGen_437_ = lean_ctor_get(v___x_433_, 3);
v_traceState_438_ = lean_ctor_get(v___x_433_, 4);
v_messages_439_ = lean_ctor_get(v___x_433_, 6);
v_infoState_440_ = lean_ctor_get(v___x_433_, 7);
v_snapshotTasks_441_ = lean_ctor_get(v___x_433_, 8);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_450_ == 0)
{
lean_object* v_unused_451_; 
v_unused_451_ = lean_ctor_get(v___x_433_, 5);
lean_dec(v_unused_451_);
v___x_443_ = v___x_433_;
v_isShared_444_ = v_isSharedCheck_450_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_snapshotTasks_441_);
lean_inc(v_infoState_440_);
lean_inc(v_messages_439_);
lean_inc(v_traceState_438_);
lean_inc(v_auxDeclNGen_437_);
lean_inc(v_ngen_436_);
lean_inc(v_nextMacroScope_435_);
lean_inc(v_env_434_);
lean_dec(v___x_433_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_450_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_445_; lean_object* v___x_447_; 
v___x_445_ = l_Lean_Kernel_enableDiag(v_env_434_, v___y_429_);
lean_inc_ref(v___y_430_);
if (v_isShared_444_ == 0)
{
lean_ctor_set(v___x_443_, 5, v___y_430_);
lean_ctor_set(v___x_443_, 0, v___x_445_);
v___x_447_ = v___x_443_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_445_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v_nextMacroScope_435_);
lean_ctor_set(v_reuseFailAlloc_449_, 2, v_ngen_436_);
lean_ctor_set(v_reuseFailAlloc_449_, 3, v_auxDeclNGen_437_);
lean_ctor_set(v_reuseFailAlloc_449_, 4, v_traceState_438_);
lean_ctor_set(v_reuseFailAlloc_449_, 5, v___y_430_);
lean_ctor_set(v_reuseFailAlloc_449_, 6, v_messages_439_);
lean_ctor_set(v_reuseFailAlloc_449_, 7, v_infoState_440_);
lean_ctor_set(v_reuseFailAlloc_449_, 8, v_snapshotTasks_441_);
v___x_447_ = v_reuseFailAlloc_449_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
lean_object* v___x_448_; 
v___x_448_ = lean_st_ref_set(v___y_427_, v___x_447_);
v___y_376_ = v___y_419_;
v___y_377_ = v___y_426_;
v___y_378_ = v___y_420_;
v___y_379_ = v___y_422_;
v___y_380_ = v___y_428_;
v___y_381_ = v___y_423_;
v___y_382_ = v___y_429_;
v___y_383_ = v___y_424_;
v___y_384_ = v___y_430_;
v___y_385_ = v___y_431_;
v___y_386_ = v___y_425_;
v___y_387_ = v___y_421_;
v___y_388_ = v___y_427_;
goto v___jp_375_;
}
}
}
else
{
v___y_376_ = v___y_419_;
v___y_377_ = v___y_426_;
v___y_378_ = v___y_420_;
v___y_379_ = v___y_422_;
v___y_380_ = v___y_428_;
v___y_381_ = v___y_423_;
v___y_382_ = v___y_429_;
v___y_383_ = v___y_424_;
v___y_384_ = v___y_430_;
v___y_385_ = v___y_431_;
v___y_386_ = v___y_425_;
v___y_387_ = v___y_421_;
v___y_388_ = v___y_427_;
goto v___jp_375_;
}
}
v___jp_452_:
{
lean_object* v___x_465_; lean_object* v_fileName_466_; lean_object* v_fileMap_467_; lean_object* v_currRecDepth_468_; lean_object* v_ref_469_; lean_object* v_currNamespace_470_; lean_object* v_openDecls_471_; lean_object* v_initHeartbeats_472_; lean_object* v_maxHeartbeats_473_; lean_object* v_quotContext_474_; lean_object* v_currMacroScope_475_; lean_object* v_cancelTk_x3f_476_; uint8_t v_suppressElabErrors_477_; lean_object* v_inheritedTraceOptions_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_492_; 
v___x_465_ = lean_st_ref_get(v___y_464_);
v_fileName_466_ = lean_ctor_get(v___y_463_, 0);
v_fileMap_467_ = lean_ctor_get(v___y_463_, 1);
v_currRecDepth_468_ = lean_ctor_get(v___y_463_, 3);
v_ref_469_ = lean_ctor_get(v___y_463_, 5);
v_currNamespace_470_ = lean_ctor_get(v___y_463_, 6);
v_openDecls_471_ = lean_ctor_get(v___y_463_, 7);
v_initHeartbeats_472_ = lean_ctor_get(v___y_463_, 8);
v_maxHeartbeats_473_ = lean_ctor_get(v___y_463_, 9);
v_quotContext_474_ = lean_ctor_get(v___y_463_, 10);
v_currMacroScope_475_ = lean_ctor_get(v___y_463_, 11);
v_cancelTk_x3f_476_ = lean_ctor_get(v___y_463_, 12);
v_suppressElabErrors_477_ = lean_ctor_get_uint8(v___y_463_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_478_ = lean_ctor_get(v___y_463_, 13);
v_isSharedCheck_492_ = !lean_is_exclusive(v___y_463_);
if (v_isSharedCheck_492_ == 0)
{
lean_object* v_unused_493_; lean_object* v_unused_494_; 
v_unused_493_ = lean_ctor_get(v___y_463_, 4);
lean_dec(v_unused_493_);
v_unused_494_ = lean_ctor_get(v___y_463_, 2);
lean_dec(v_unused_494_);
v___x_480_ = v___y_463_;
v_isShared_481_ = v_isSharedCheck_492_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_inheritedTraceOptions_478_);
lean_inc(v_cancelTk_x3f_476_);
lean_inc(v_currMacroScope_475_);
lean_inc(v_quotContext_474_);
lean_inc(v_maxHeartbeats_473_);
lean_inc(v_initHeartbeats_472_);
lean_inc(v_openDecls_471_);
lean_inc(v_currNamespace_470_);
lean_inc(v_ref_469_);
lean_inc(v_currRecDepth_468_);
lean_inc(v_fileMap_467_);
lean_inc(v_fileName_466_);
lean_dec(v___y_463_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_492_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v_env_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_486_; 
v_env_482_ = lean_ctor_get(v___x_465_, 0);
lean_inc_ref(v_env_482_);
lean_dec(v___x_465_);
v___x_483_ = l_Lean_maxRecDepth;
v___x_484_ = l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__3(v___y_462_, v___x_483_);
lean_inc_ref(v___y_462_);
if (v_isShared_481_ == 0)
{
lean_ctor_set(v___x_480_, 4, v___x_484_);
lean_ctor_set(v___x_480_, 2, v___y_462_);
v___x_486_ = v___x_480_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_fileName_466_);
lean_ctor_set(v_reuseFailAlloc_491_, 1, v_fileMap_467_);
lean_ctor_set(v_reuseFailAlloc_491_, 2, v___y_462_);
lean_ctor_set(v_reuseFailAlloc_491_, 3, v_currRecDepth_468_);
lean_ctor_set(v_reuseFailAlloc_491_, 4, v___x_484_);
lean_ctor_set(v_reuseFailAlloc_491_, 5, v_ref_469_);
lean_ctor_set(v_reuseFailAlloc_491_, 6, v_currNamespace_470_);
lean_ctor_set(v_reuseFailAlloc_491_, 7, v_openDecls_471_);
lean_ctor_set(v_reuseFailAlloc_491_, 8, v_initHeartbeats_472_);
lean_ctor_set(v_reuseFailAlloc_491_, 9, v_maxHeartbeats_473_);
lean_ctor_set(v_reuseFailAlloc_491_, 10, v_quotContext_474_);
lean_ctor_set(v_reuseFailAlloc_491_, 11, v_currMacroScope_475_);
lean_ctor_set(v_reuseFailAlloc_491_, 12, v_cancelTk_x3f_476_);
lean_ctor_set(v_reuseFailAlloc_491_, 13, v_inheritedTraceOptions_478_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*14 + 1, v_suppressElabErrors_477_);
v___x_486_ = v_reuseFailAlloc_491_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
lean_object* v___x_487_; lean_object* v___x_488_; uint8_t v___x_489_; uint8_t v___x_490_; 
lean_ctor_set_uint8(v___x_486_, sizeof(void*)*14, v___y_456_);
v___x_487_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_488_ = l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1(v___y_462_, v___x_487_, v___y_458_);
v___x_489_ = l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__2(v___x_488_, v___y_454_);
v___x_490_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_482_);
lean_dec_ref(v_env_482_);
if (v___x_490_ == 0)
{
if (v___x_489_ == 0)
{
v___y_376_ = v___y_453_;
v___y_377_ = v___y_454_;
v___y_378_ = v___y_455_;
v___y_379_ = v___y_457_;
v___y_380_ = v___y_458_;
v___y_381_ = v___x_488_;
v___y_382_ = v___x_489_;
v___y_383_ = v___x_483_;
v___y_384_ = v___y_460_;
v___y_385_ = v___y_459_;
v___y_386_ = v___y_461_;
v___y_387_ = v___x_486_;
v___y_388_ = v___y_464_;
goto v___jp_375_;
}
else
{
v___y_419_ = v___y_453_;
v___y_420_ = v___y_455_;
v___y_421_ = v___x_486_;
v___y_422_ = v___y_457_;
v___y_423_ = v___x_488_;
v___y_424_ = v___x_483_;
v___y_425_ = v___y_461_;
v___y_426_ = v___y_454_;
v___y_427_ = v___y_464_;
v___y_428_ = v___y_458_;
v___y_429_ = v___x_489_;
v___y_430_ = v___y_460_;
v___y_431_ = v___y_459_;
v___y_432_ = v___x_490_;
goto v___jp_418_;
}
}
else
{
v___y_419_ = v___y_453_;
v___y_420_ = v___y_455_;
v___y_421_ = v___x_486_;
v___y_422_ = v___y_457_;
v___y_423_ = v___x_488_;
v___y_424_ = v___x_483_;
v___y_425_ = v___y_461_;
v___y_426_ = v___y_454_;
v___y_427_ = v___y_464_;
v___y_428_ = v___y_458_;
v___y_429_ = v___x_489_;
v___y_430_ = v___y_460_;
v___y_431_ = v___y_459_;
v___y_432_ = v___x_489_;
goto v___jp_418_;
}
}
}
}
v___jp_495_:
{
if (v___y_508_ == 0)
{
lean_object* v___x_509_; lean_object* v_env_510_; lean_object* v_nextMacroScope_511_; lean_object* v_ngen_512_; lean_object* v_auxDeclNGen_513_; lean_object* v_traceState_514_; lean_object* v_messages_515_; lean_object* v_infoState_516_; lean_object* v_snapshotTasks_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_526_; 
v___x_509_ = lean_st_ref_take(v___y_499_);
v_env_510_ = lean_ctor_get(v___x_509_, 0);
v_nextMacroScope_511_ = lean_ctor_get(v___x_509_, 1);
v_ngen_512_ = lean_ctor_get(v___x_509_, 2);
v_auxDeclNGen_513_ = lean_ctor_get(v___x_509_, 3);
v_traceState_514_ = lean_ctor_get(v___x_509_, 4);
v_messages_515_ = lean_ctor_get(v___x_509_, 6);
v_infoState_516_ = lean_ctor_get(v___x_509_, 7);
v_snapshotTasks_517_ = lean_ctor_get(v___x_509_, 8);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_509_);
if (v_isSharedCheck_526_ == 0)
{
lean_object* v_unused_527_; 
v_unused_527_ = lean_ctor_get(v___x_509_, 5);
lean_dec(v_unused_527_);
v___x_519_ = v___x_509_;
v_isShared_520_ = v_isSharedCheck_526_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_snapshotTasks_517_);
lean_inc(v_infoState_516_);
lean_inc(v_messages_515_);
lean_inc(v_traceState_514_);
lean_inc(v_auxDeclNGen_513_);
lean_inc(v_ngen_512_);
lean_inc(v_nextMacroScope_511_);
lean_inc(v_env_510_);
lean_dec(v___x_509_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_526_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_521_; lean_object* v___x_523_; 
v___x_521_ = l_Lean_Kernel_enableDiag(v_env_510_, v___y_498_);
lean_inc_ref(v___y_505_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 5, v___y_505_);
lean_ctor_set(v___x_519_, 0, v___x_521_);
v___x_523_ = v___x_519_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_521_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v_nextMacroScope_511_);
lean_ctor_set(v_reuseFailAlloc_525_, 2, v_ngen_512_);
lean_ctor_set(v_reuseFailAlloc_525_, 3, v_auxDeclNGen_513_);
lean_ctor_set(v_reuseFailAlloc_525_, 4, v_traceState_514_);
lean_ctor_set(v_reuseFailAlloc_525_, 5, v___y_505_);
lean_ctor_set(v_reuseFailAlloc_525_, 6, v_messages_515_);
lean_ctor_set(v_reuseFailAlloc_525_, 7, v_infoState_516_);
lean_ctor_set(v_reuseFailAlloc_525_, 8, v_snapshotTasks_517_);
v___x_523_ = v_reuseFailAlloc_525_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
lean_object* v___x_524_; 
v___x_524_ = lean_st_ref_set(v___y_499_, v___x_523_);
v___y_453_ = v___y_496_;
v___y_454_ = v___y_503_;
v___y_455_ = v___y_497_;
v___y_456_ = v___y_498_;
v___y_457_ = v___y_500_;
v___y_458_ = v___y_504_;
v___y_459_ = v___y_506_;
v___y_460_ = v___y_505_;
v___y_461_ = v___y_502_;
v___y_462_ = v___y_507_;
v___y_463_ = v___y_501_;
v___y_464_ = v___y_499_;
goto v___jp_452_;
}
}
}
else
{
v___y_453_ = v___y_496_;
v___y_454_ = v___y_503_;
v___y_455_ = v___y_497_;
v___y_456_ = v___y_498_;
v___y_457_ = v___y_500_;
v___y_458_ = v___y_504_;
v___y_459_ = v___y_506_;
v___y_460_ = v___y_505_;
v___y_461_ = v___y_502_;
v___y_462_ = v___y_507_;
v___y_463_ = v___y_501_;
v___y_464_ = v___y_499_;
goto v___jp_452_;
}
}
v___jp_528_:
{
lean_object* v___x_537_; 
lean_inc(v___y_536_);
lean_inc_ref(v___y_535_);
lean_inc(v___y_534_);
lean_inc_ref(v___y_533_);
lean_inc_ref(v___y_530_);
v___x_537_ = lean_infer_type(v___y_530_, v___y_533_, v___y_534_, v___y_535_, v___y_536_);
if (lean_obj_tag(v___x_537_) == 0)
{
lean_object* v_a_538_; lean_object* v___x_539_; 
v_a_538_ = lean_ctor_get(v___x_537_, 0);
lean_inc_n(v_a_538_, 2);
lean_dec_ref(v___x_537_);
lean_inc(v___y_536_);
lean_inc_ref(v___y_535_);
lean_inc(v___y_534_);
lean_inc_ref(v___y_533_);
v___x_539_ = lean_apply_6(v_checkType_273_, v_a_538_, v___y_533_, v___y_534_, v___y_535_, v___y_536_, lean_box(0));
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v___x_540_; lean_object* v_env_541_; lean_object* v_nextMacroScope_542_; lean_object* v_ngen_543_; lean_object* v_auxDeclNGen_544_; lean_object* v_traceState_545_; lean_object* v_messages_546_; lean_object* v_infoState_547_; lean_object* v_snapshotTasks_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_603_; 
lean_dec_ref(v___x_539_);
v___x_540_ = lean_st_ref_take(v___y_536_);
v_env_541_ = lean_ctor_get(v___x_540_, 0);
v_nextMacroScope_542_ = lean_ctor_get(v___x_540_, 1);
v_ngen_543_ = lean_ctor_get(v___x_540_, 2);
v_auxDeclNGen_544_ = lean_ctor_get(v___x_540_, 3);
v_traceState_545_ = lean_ctor_get(v___x_540_, 4);
v_messages_546_ = lean_ctor_get(v___x_540_, 6);
v_infoState_547_ = lean_ctor_get(v___x_540_, 7);
v_snapshotTasks_548_ = lean_ctor_get(v___x_540_, 8);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_603_ == 0)
{
lean_object* v_unused_604_; 
v_unused_604_ = lean_ctor_get(v___x_540_, 5);
lean_dec(v_unused_604_);
v___x_550_ = v___x_540_;
v_isShared_551_ = v_isSharedCheck_603_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_snapshotTasks_548_);
lean_inc(v_infoState_547_);
lean_inc(v_messages_546_);
lean_inc(v_traceState_545_);
lean_inc(v_auxDeclNGen_544_);
lean_inc(v_ngen_543_);
lean_inc(v_nextMacroScope_542_);
lean_inc(v_env_541_);
lean_dec(v___x_540_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_603_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_558_; 
v___x_552_ = lean_array_to_list(v___y_529_);
lean_inc_n(v___y_532_, 3);
v___x_553_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_553_, 0, v___y_532_);
lean_ctor_set(v___x_553_, 1, v___x_552_);
lean_ctor_set(v___x_553_, 2, v_a_538_);
lean_inc(v___y_531_);
v___x_554_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_554_, 0, v___y_532_);
lean_ctor_set(v___x_554_, 1, v___y_531_);
v___x_555_ = l_Lean_markMeta(v_env_541_, v___y_532_);
v___x_556_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2);
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 5, v___x_556_);
lean_ctor_set(v___x_550_, 0, v___x_555_);
v___x_558_ = v___x_550_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v___x_555_);
lean_ctor_set(v_reuseFailAlloc_602_, 1, v_nextMacroScope_542_);
lean_ctor_set(v_reuseFailAlloc_602_, 2, v_ngen_543_);
lean_ctor_set(v_reuseFailAlloc_602_, 3, v_auxDeclNGen_544_);
lean_ctor_set(v_reuseFailAlloc_602_, 4, v_traceState_545_);
lean_ctor_set(v_reuseFailAlloc_602_, 5, v___x_556_);
lean_ctor_set(v_reuseFailAlloc_602_, 6, v_messages_546_);
lean_ctor_set(v_reuseFailAlloc_602_, 7, v_infoState_547_);
lean_ctor_set(v_reuseFailAlloc_602_, 8, v_snapshotTasks_548_);
v___x_558_ = v_reuseFailAlloc_602_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v_mctx_562_; lean_object* v_zetaDeltaFVarIds_563_; lean_object* v_postponed_564_; lean_object* v_diag_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_600_; 
v___x_559_ = lean_st_ref_set(v___y_536_, v___x_558_);
v___x_560_ = lean_st_ref_get(v___y_536_);
lean_dec(v___x_560_);
v___x_561_ = lean_st_ref_take(v___y_534_);
v_mctx_562_ = lean_ctor_get(v___x_561_, 0);
v_zetaDeltaFVarIds_563_ = lean_ctor_get(v___x_561_, 2);
v_postponed_564_ = lean_ctor_get(v___x_561_, 3);
v_diag_565_ = lean_ctor_get(v___x_561_, 4);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_600_ == 0)
{
lean_object* v_unused_601_; 
v_unused_601_ = lean_ctor_get(v___x_561_, 1);
lean_dec(v_unused_601_);
v___x_567_ = v___x_561_;
v_isShared_568_ = v_isSharedCheck_600_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_diag_565_);
lean_inc(v_postponed_564_);
lean_inc(v_zetaDeltaFVarIds_563_);
lean_inc(v_mctx_562_);
lean_dec(v___x_561_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_600_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_569_; lean_object* v___x_571_; 
v___x_569_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3);
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 1, v___x_569_);
v___x_571_ = v___x_567_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_mctx_562_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v___x_569_);
lean_ctor_set(v_reuseFailAlloc_599_, 2, v_zetaDeltaFVarIds_563_);
lean_ctor_set(v_reuseFailAlloc_599_, 3, v_postponed_564_);
lean_ctor_set(v_reuseFailAlloc_599_, 4, v_diag_565_);
v___x_571_ = v_reuseFailAlloc_599_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v_env_574_; lean_object* v_checked_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_572_ = lean_st_ref_set(v___y_534_, v___x_571_);
v___x_573_ = lean_st_ref_get(v___y_536_);
v_env_574_ = lean_ctor_get(v___x_573_, 0);
lean_inc_ref(v_env_574_);
lean_dec(v___x_573_);
v_checked_575_ = lean_ctor_get(v_env_574_, 2);
lean_inc_ref(v_checked_575_);
lean_dec_ref(v_env_574_);
v___x_576_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__4, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__4_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__4);
v___x_577_ = l_Lean_traceBlock___redArg(v___x_576_, v_checked_575_, v___y_535_, v___y_536_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v___x_578_; lean_object* v_options_579_; lean_object* v_env_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; uint8_t v___x_584_; uint8_t v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; uint8_t v___x_589_; uint8_t v___x_590_; 
lean_dec_ref(v___x_577_);
v___x_578_ = lean_st_ref_get(v___y_536_);
v_options_579_ = lean_ctor_get(v___y_535_, 2);
v_env_580_ = lean_ctor_get(v___x_578_, 0);
lean_inc_ref(v_env_580_);
lean_dec(v___x_578_);
v___x_581_ = lean_box(0);
v___x_582_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_582_, 0, v___x_553_);
lean_ctor_set(v___x_582_, 1, v___y_530_);
lean_ctor_set(v___x_582_, 2, v___x_581_);
lean_ctor_set(v___x_582_, 3, v___x_554_);
lean_ctor_set_uint8(v___x_582_, sizeof(void*)*4, v_safety_274_);
v___x_583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
v___x_584_ = 1;
v___x_585_ = 0;
v___x_586_ = l_Lean_Elab_async;
lean_inc_ref(v_options_579_);
v___x_587_ = l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__1(v_options_579_, v___x_586_, v___x_585_);
v___x_588_ = l_Lean_diagnostics;
v___x_589_ = l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__2(v___x_587_, v___x_588_);
v___x_590_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_580_);
lean_dec_ref(v_env_580_);
if (v___x_590_ == 0)
{
if (v___x_589_ == 0)
{
v___y_453_ = v___x_584_;
v___y_454_ = v___x_588_;
v___y_455_ = v___x_583_;
v___y_456_ = v___x_589_;
v___y_457_ = v___y_534_;
v___y_458_ = v___x_585_;
v___y_459_ = v___y_532_;
v___y_460_ = v___x_556_;
v___y_461_ = v___y_533_;
v___y_462_ = v___x_587_;
v___y_463_ = v___y_535_;
v___y_464_ = v___y_536_;
goto v___jp_452_;
}
else
{
v___y_496_ = v___x_584_;
v___y_497_ = v___x_583_;
v___y_498_ = v___x_589_;
v___y_499_ = v___y_536_;
v___y_500_ = v___y_534_;
v___y_501_ = v___y_535_;
v___y_502_ = v___y_533_;
v___y_503_ = v___x_588_;
v___y_504_ = v___x_585_;
v___y_505_ = v___x_556_;
v___y_506_ = v___y_532_;
v___y_507_ = v___x_587_;
v___y_508_ = v___x_590_;
goto v___jp_495_;
}
}
else
{
v___y_496_ = v___x_584_;
v___y_497_ = v___x_583_;
v___y_498_ = v___x_589_;
v___y_499_ = v___y_536_;
v___y_500_ = v___y_534_;
v___y_501_ = v___y_535_;
v___y_502_ = v___y_533_;
v___y_503_ = v___x_588_;
v___y_504_ = v___x_585_;
v___y_505_ = v___x_556_;
v___y_506_ = v___y_532_;
v___y_507_ = v___x_587_;
v___y_508_ = v___x_589_;
goto v___jp_495_;
}
}
else
{
lean_object* v_a_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_598_; 
lean_dec_ref(v___x_554_);
lean_dec_ref(v___x_553_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec(v___y_534_);
lean_dec_ref(v___y_533_);
lean_dec(v___y_532_);
lean_dec_ref(v___y_530_);
v_a_591_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_598_ == 0)
{
v___x_593_ = v___x_577_;
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_a_591_);
lean_dec(v___x_577_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_a_591_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
lean_dec(v_a_538_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec(v___y_534_);
lean_dec_ref(v___y_533_);
lean_dec(v___y_532_);
lean_dec_ref(v___y_530_);
lean_dec_ref(v___y_529_);
v_a_605_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_539_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_539_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_a_605_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
else
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec(v___y_534_);
lean_dec_ref(v___y_533_);
lean_dec(v___y_532_);
lean_dec_ref(v___y_530_);
lean_dec_ref(v___y_529_);
lean_dec_ref(v_checkType_273_);
v_a_613_ = lean_ctor_get(v___x_537_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_537_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_537_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
v___jp_621_:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_626_ = lean_st_ref_get(v___y_625_);
v___x_627_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__6, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__6_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__6);
v___x_628_ = l_Lean_Core_mkFreshUserName(v___x_627_, v___y_624_, v___y_625_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; lean_object* v___x_630_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_a_629_);
lean_dec_ref(v___x_628_);
v___x_630_ = l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg(v_value_275_, v___y_623_, v___y_625_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; lean_object* v_env_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v_params_635_; lean_object* v___x_636_; lean_object* v___x_637_; uint8_t v___x_638_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc_n(v_a_631_, 2);
lean_dec_ref(v___x_630_);
v_env_632_ = lean_ctor_get(v___x_626_, 0);
lean_inc_ref(v_env_632_);
lean_dec(v___x_626_);
v___x_633_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10);
v___x_634_ = l_Lean_collectLevelParams(v___x_633_, v_a_631_);
v_params_635_ = lean_ctor_get(v___x_634_, 2);
lean_inc_ref(v_params_635_);
lean_dec_ref(v___x_634_);
v___x_636_ = l_Lean_mkPrivateName(v_env_632_, v_a_629_);
lean_dec_ref(v_env_632_);
v___x_637_ = lean_box(0);
v___x_638_ = l_Lean_Expr_hasMVar(v_a_631_);
if (v___x_638_ == 0)
{
v___y_529_ = v_params_635_;
v___y_530_ = v_a_631_;
v___y_531_ = v___x_637_;
v___y_532_ = v___x_636_;
v___y_533_ = v___y_622_;
v___y_534_ = v___y_623_;
v___y_535_ = v___y_624_;
v___y_536_ = v___y_625_;
goto v___jp_528_;
}
else
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_639_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12);
lean_inc(v_a_631_);
v___x_640_ = l_Lean_indentExpr(v_a_631_);
v___x_641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_639_);
lean_ctor_set(v___x_641_, 1, v___x_640_);
v___x_642_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg(v___x_641_, v___y_622_, v___y_623_, v___y_624_, v___y_625_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_dec_ref(v___x_642_);
v___y_529_ = v_params_635_;
v___y_530_ = v_a_631_;
v___y_531_ = v___x_637_;
v___y_532_ = v___x_636_;
v___y_533_ = v___y_622_;
v___y_534_ = v___y_623_;
v___y_535_ = v___y_624_;
v___y_536_ = v___y_625_;
goto v___jp_528_;
}
else
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_650_; 
lean_dec(v___x_636_);
lean_dec_ref(v_params_635_);
lean_dec(v_a_631_);
lean_dec(v___y_625_);
lean_dec_ref(v___y_624_);
lean_dec(v___y_623_);
lean_dec_ref(v___y_622_);
lean_dec_ref(v_checkType_273_);
v_a_643_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_650_ == 0)
{
v___x_645_ = v___x_642_;
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_642_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
if (v_isShared_646_ == 0)
{
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_643_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
}
}
}
else
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_658_; 
lean_dec(v_a_629_);
lean_dec(v___x_626_);
lean_dec(v___y_625_);
lean_dec_ref(v___y_624_);
lean_dec(v___y_623_);
lean_dec_ref(v___y_622_);
lean_dec_ref(v_checkType_273_);
v_a_651_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_658_ == 0)
{
v___x_653_ = v___x_630_;
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v___x_630_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_656_; 
if (v_isShared_654_ == 0)
{
v___x_656_ = v___x_653_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_a_651_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
}
else
{
lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_666_; 
lean_dec(v___x_626_);
lean_dec(v___y_625_);
lean_dec_ref(v___y_624_);
lean_dec(v___y_623_);
lean_dec_ref(v___y_622_);
lean_dec_ref(v_value_275_);
lean_dec_ref(v_checkType_273_);
v_a_659_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_666_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_666_ == 0)
{
v___x_661_ = v___x_628_;
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_dec(v___x_628_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_664_; 
if (v_isShared_662_ == 0)
{
v___x_664_ = v___x_661_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_a_659_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
}
}
v___jp_667_:
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v_mctx_681_; lean_object* v_zetaDeltaFVarIds_682_; lean_object* v_postponed_683_; lean_object* v_diag_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_693_; 
v___x_676_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2);
v___x_677_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_677_, 0, v___y_675_);
lean_ctor_set(v___x_677_, 1, v_nextMacroScope_668_);
lean_ctor_set(v___x_677_, 2, v_ngen_669_);
lean_ctor_set(v___x_677_, 3, v_auxDeclNGen_670_);
lean_ctor_set(v___x_677_, 4, v_traceState_671_);
lean_ctor_set(v___x_677_, 5, v___x_676_);
lean_ctor_set(v___x_677_, 6, v_messages_672_);
lean_ctor_set(v___x_677_, 7, v_infoState_673_);
lean_ctor_set(v___x_677_, 8, v_snapshotTasks_674_);
v___x_678_ = lean_st_ref_set(v___y_279_, v___x_677_);
v___x_679_ = lean_st_ref_get(v___y_279_);
lean_dec(v___x_679_);
v___x_680_ = lean_st_ref_take(v___y_277_);
v_mctx_681_ = lean_ctor_get(v___x_680_, 0);
v_zetaDeltaFVarIds_682_ = lean_ctor_get(v___x_680_, 2);
v_postponed_683_ = lean_ctor_get(v___x_680_, 3);
v_diag_684_ = lean_ctor_get(v___x_680_, 4);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_693_ == 0)
{
lean_object* v_unused_694_; 
v_unused_694_ = lean_ctor_get(v___x_680_, 1);
lean_dec(v_unused_694_);
v___x_686_ = v___x_680_;
v_isShared_687_ = v_isSharedCheck_693_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_diag_684_);
lean_inc(v_postponed_683_);
lean_inc(v_zetaDeltaFVarIds_682_);
lean_inc(v_mctx_681_);
lean_dec(v___x_680_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_693_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_688_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 1, v___x_688_);
v___x_690_ = v___x_686_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_mctx_681_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v___x_688_);
lean_ctor_set(v_reuseFailAlloc_692_, 2, v_zetaDeltaFVarIds_682_);
lean_ctor_set(v_reuseFailAlloc_692_, 3, v_postponed_683_);
lean_ctor_set(v_reuseFailAlloc_692_, 4, v_diag_684_);
v___x_690_ = v_reuseFailAlloc_692_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_691_; 
v___x_691_ = lean_st_ref_set(v___y_277_, v___x_690_);
v___y_622_ = v___y_276_;
v___y_623_ = v___y_277_;
v___y_624_ = v___y_278_;
v___y_625_ = v___y_279_;
goto v___jp_621_;
}
}
}
v___jp_696_:
{
lean_object* v___x_697_; lean_object* v_env_698_; lean_object* v_nextMacroScope_699_; lean_object* v_ngen_700_; lean_object* v_auxDeclNGen_701_; lean_object* v_traceState_702_; lean_object* v_messages_703_; lean_object* v_infoState_704_; lean_object* v_snapshotTasks_705_; lean_object* v___x_706_; 
v___x_697_ = lean_st_ref_take(v___y_279_);
v_env_698_ = lean_ctor_get(v___x_697_, 0);
lean_inc_ref_n(v_env_698_, 2);
v_nextMacroScope_699_ = lean_ctor_get(v___x_697_, 1);
lean_inc(v_nextMacroScope_699_);
v_ngen_700_ = lean_ctor_get(v___x_697_, 2);
lean_inc_ref(v_ngen_700_);
v_auxDeclNGen_701_ = lean_ctor_get(v___x_697_, 3);
lean_inc_ref(v_auxDeclNGen_701_);
v_traceState_702_ = lean_ctor_get(v___x_697_, 4);
lean_inc_ref(v_traceState_702_);
v_messages_703_ = lean_ctor_get(v___x_697_, 6);
lean_inc_ref(v_messages_703_);
v_infoState_704_ = lean_ctor_get(v___x_697_, 7);
lean_inc_ref(v_infoState_704_);
v_snapshotTasks_705_ = lean_ctor_get(v___x_697_, 8);
lean_inc_ref(v_snapshotTasks_705_);
lean_dec(v___x_697_);
v___x_706_ = l_Lean_Environment_importEnv_x3f(v_env_698_);
if (lean_obj_tag(v___x_706_) == 0)
{
v_nextMacroScope_668_ = v_nextMacroScope_699_;
v_ngen_669_ = v_ngen_700_;
v_auxDeclNGen_670_ = v_auxDeclNGen_701_;
v_traceState_671_ = v_traceState_702_;
v_messages_672_ = v_messages_703_;
v_infoState_673_ = v_infoState_704_;
v_snapshotTasks_674_ = v_snapshotTasks_705_;
v___y_675_ = v_env_698_;
goto v___jp_667_;
}
else
{
lean_object* v_val_707_; 
lean_dec_ref(v_env_698_);
v_val_707_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_val_707_);
lean_dec_ref(v___x_706_);
v_nextMacroScope_668_ = v_nextMacroScope_699_;
v_ngen_669_ = v_ngen_700_;
v_auxDeclNGen_670_ = v_auxDeclNGen_701_;
v_traceState_671_ = v_traceState_702_;
v_messages_672_ = v_messages_703_;
v_infoState_673_ = v_infoState_704_;
v_snapshotTasks_674_ = v_snapshotTasks_705_;
v___y_675_ = v_val_707_;
goto v___jp_667_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___boxed(lean_object* v_checkMeta_716_, lean_object* v_checkType_717_, lean_object* v_safety_718_, lean_object* v_value_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_){
_start:
{
uint8_t v_checkMeta_boxed_725_; uint8_t v_safety_boxed_726_; lean_object* v_res_727_; 
v_checkMeta_boxed_725_ = lean_unbox(v_checkMeta_716_);
v_safety_boxed_726_ = lean_unbox(v_safety_718_);
v_res_727_ = l_Lean_Meta_evalExprCore___redArg___lam__0(v_checkMeta_boxed_725_, v_checkType_717_, v_safety_boxed_726_, v_value_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__11___redArg(lean_object* v_env_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
lean_object* v___x_732_; lean_object* v_nextMacroScope_733_; lean_object* v_ngen_734_; lean_object* v_auxDeclNGen_735_; lean_object* v_traceState_736_; lean_object* v_messages_737_; lean_object* v_infoState_738_; lean_object* v_snapshotTasks_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_766_; 
v___x_732_ = lean_st_ref_take(v___y_730_);
v_nextMacroScope_733_ = lean_ctor_get(v___x_732_, 1);
v_ngen_734_ = lean_ctor_get(v___x_732_, 2);
v_auxDeclNGen_735_ = lean_ctor_get(v___x_732_, 3);
v_traceState_736_ = lean_ctor_get(v___x_732_, 4);
v_messages_737_ = lean_ctor_get(v___x_732_, 6);
v_infoState_738_ = lean_ctor_get(v___x_732_, 7);
v_snapshotTasks_739_ = lean_ctor_get(v___x_732_, 8);
v_isSharedCheck_766_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_766_ == 0)
{
lean_object* v_unused_767_; lean_object* v_unused_768_; 
v_unused_767_ = lean_ctor_get(v___x_732_, 5);
lean_dec(v_unused_767_);
v_unused_768_ = lean_ctor_get(v___x_732_, 0);
lean_dec(v_unused_768_);
v___x_741_ = v___x_732_;
v_isShared_742_ = v_isSharedCheck_766_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_snapshotTasks_739_);
lean_inc(v_infoState_738_);
lean_inc(v_messages_737_);
lean_inc(v_traceState_736_);
lean_inc(v_auxDeclNGen_735_);
lean_inc(v_ngen_734_);
lean_inc(v_nextMacroScope_733_);
lean_dec(v___x_732_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_766_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_743_; lean_object* v___x_745_; 
v___x_743_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2);
if (v_isShared_742_ == 0)
{
lean_ctor_set(v___x_741_, 5, v___x_743_);
lean_ctor_set(v___x_741_, 0, v_env_728_);
v___x_745_ = v___x_741_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_env_728_);
lean_ctor_set(v_reuseFailAlloc_765_, 1, v_nextMacroScope_733_);
lean_ctor_set(v_reuseFailAlloc_765_, 2, v_ngen_734_);
lean_ctor_set(v_reuseFailAlloc_765_, 3, v_auxDeclNGen_735_);
lean_ctor_set(v_reuseFailAlloc_765_, 4, v_traceState_736_);
lean_ctor_set(v_reuseFailAlloc_765_, 5, v___x_743_);
lean_ctor_set(v_reuseFailAlloc_765_, 6, v_messages_737_);
lean_ctor_set(v_reuseFailAlloc_765_, 7, v_infoState_738_);
lean_ctor_set(v_reuseFailAlloc_765_, 8, v_snapshotTasks_739_);
v___x_745_ = v_reuseFailAlloc_765_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v_mctx_749_; lean_object* v_zetaDeltaFVarIds_750_; lean_object* v_postponed_751_; lean_object* v_diag_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_763_; 
v___x_746_ = lean_st_ref_set(v___y_730_, v___x_745_);
v___x_747_ = lean_st_ref_get(v___y_730_);
lean_dec(v___x_747_);
v___x_748_ = lean_st_ref_take(v___y_729_);
v_mctx_749_ = lean_ctor_get(v___x_748_, 0);
v_zetaDeltaFVarIds_750_ = lean_ctor_get(v___x_748_, 2);
v_postponed_751_ = lean_ctor_get(v___x_748_, 3);
v_diag_752_ = lean_ctor_get(v___x_748_, 4);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_763_ == 0)
{
lean_object* v_unused_764_; 
v_unused_764_ = lean_ctor_get(v___x_748_, 1);
lean_dec(v_unused_764_);
v___x_754_ = v___x_748_;
v_isShared_755_ = v_isSharedCheck_763_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_diag_752_);
lean_inc(v_postponed_751_);
lean_inc(v_zetaDeltaFVarIds_750_);
lean_inc(v_mctx_749_);
lean_dec(v___x_748_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_763_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_756_; lean_object* v___x_758_; 
v___x_756_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3);
if (v_isShared_755_ == 0)
{
lean_ctor_set(v___x_754_, 1, v___x_756_);
v___x_758_ = v___x_754_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_mctx_749_);
lean_ctor_set(v_reuseFailAlloc_762_, 1, v___x_756_);
lean_ctor_set(v_reuseFailAlloc_762_, 2, v_zetaDeltaFVarIds_750_);
lean_ctor_set(v_reuseFailAlloc_762_, 3, v_postponed_751_);
lean_ctor_set(v_reuseFailAlloc_762_, 4, v_diag_752_);
v___x_758_ = v_reuseFailAlloc_762_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_759_ = lean_st_ref_set(v___y_729_, v___x_758_);
v___x_760_ = lean_box(0);
v___x_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
return v___x_761_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__11___redArg___boxed(lean_object* v_env_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__11___redArg(v_env_769_, v___y_770_, v___y_771_);
lean_dec(v___y_771_);
lean_dec(v___y_770_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___redArg(lean_object* v_env_774_, lean_object* v_x_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
lean_object* v___x_781_; lean_object* v_env_782_; lean_object* v_a_784_; lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_781_ = lean_st_ref_get(v___y_779_);
v_env_782_ = lean_ctor_get(v___x_781_, 0);
lean_inc_ref(v_env_782_);
lean_dec(v___x_781_);
v___x_794_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__11___redArg(v_env_774_, v___y_777_, v___y_779_);
lean_dec_ref(v___x_794_);
lean_inc(v___y_779_);
lean_inc_ref(v___y_778_);
lean_inc(v___y_777_);
lean_inc_ref(v___y_776_);
v___x_795_ = lean_apply_5(v_x_775_, v___y_776_, v___y_777_, v___y_778_, v___y_779_, lean_box(0));
if (lean_obj_tag(v___x_795_) == 0)
{
lean_object* v_a_796_; lean_object* v___x_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_804_; 
v_a_796_ = lean_ctor_get(v___x_795_, 0);
lean_inc(v_a_796_);
lean_dec_ref(v___x_795_);
v___x_797_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__11___redArg(v_env_782_, v___y_777_, v___y_779_);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_804_ == 0)
{
lean_object* v_unused_805_; 
v_unused_805_ = lean_ctor_get(v___x_797_, 0);
lean_dec(v_unused_805_);
v___x_799_ = v___x_797_;
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
else
{
lean_dec(v___x_797_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_802_; 
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 0, v_a_796_);
v___x_802_ = v___x_799_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_a_796_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
else
{
lean_object* v_a_806_; 
v_a_806_ = lean_ctor_get(v___x_795_, 0);
lean_inc(v_a_806_);
lean_dec_ref(v___x_795_);
v_a_784_ = v_a_806_;
goto v___jp_783_;
}
v___jp_783_:
{
lean_object* v___x_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_792_; 
v___x_785_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__11___redArg(v_env_782_, v___y_777_, v___y_779_);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_785_);
if (v_isSharedCheck_792_ == 0)
{
lean_object* v_unused_793_; 
v_unused_793_ = lean_ctor_get(v___x_785_, 0);
lean_dec(v_unused_793_);
v___x_787_ = v___x_785_;
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
else
{
lean_dec(v___x_785_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_790_; 
if (v_isShared_788_ == 0)
{
lean_ctor_set_tag(v___x_787_, 1);
lean_ctor_set(v___x_787_, 0, v_a_784_);
v___x_790_ = v___x_787_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_784_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___redArg___boxed(lean_object* v_env_807_, lean_object* v_x_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___redArg(v_env_807_, v_x_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_);
lean_dec(v___y_812_);
lean_dec_ref(v___y_811_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg(lean_object* v_value_815_, lean_object* v_checkType_816_, uint8_t v_safety_817_, uint8_t v_checkMeta_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_){
_start:
{
lean_object* v___x_824_; lean_object* v_env_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___f_828_; lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_824_ = lean_st_ref_get(v_a_822_);
v_env_825_ = lean_ctor_get(v___x_824_, 0);
lean_inc_ref(v_env_825_);
lean_dec(v___x_824_);
v___x_826_ = lean_box(v_checkMeta_818_);
v___x_827_ = lean_box(v_safety_817_);
v___f_828_ = lean_alloc_closure((void*)(l_Lean_Meta_evalExprCore___redArg___lam__0___boxed), 9, 4);
lean_closure_set(v___f_828_, 0, v___x_826_);
lean_closure_set(v___f_828_, 1, v_checkType_816_);
lean_closure_set(v___f_828_, 2, v___x_827_);
lean_closure_set(v___f_828_, 3, v_value_815_);
v___x_829_ = l_Lean_Environment_unlockAsync(v_env_825_);
v___x_830_ = l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___redArg(v___x_829_, v___f_828_, v_a_819_, v_a_820_, v_a_821_, v_a_822_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___boxed(lean_object* v_value_831_, lean_object* v_checkType_832_, lean_object* v_safety_833_, lean_object* v_checkMeta_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_){
_start:
{
uint8_t v_safety_boxed_840_; uint8_t v_checkMeta_boxed_841_; lean_object* v_res_842_; 
v_safety_boxed_840_ = lean_unbox(v_safety_833_);
v_checkMeta_boxed_841_ = lean_unbox(v_checkMeta_834_);
v_res_842_ = l_Lean_Meta_evalExprCore___redArg(v_value_831_, v_checkType_832_, v_safety_boxed_840_, v_checkMeta_boxed_841_, v_a_835_, v_a_836_, v_a_837_, v_a_838_);
lean_dec(v_a_838_);
lean_dec_ref(v_a_837_);
lean_dec(v_a_836_);
lean_dec_ref(v_a_835_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore(lean_object* v_00_u03b1_843_, lean_object* v_value_844_, lean_object* v_checkType_845_, uint8_t v_safety_846_, uint8_t v_checkMeta_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_){
_start:
{
lean_object* v___x_853_; 
v___x_853_ = l_Lean_Meta_evalExprCore___redArg(v_value_844_, v_checkType_845_, v_safety_846_, v_checkMeta_847_, v_a_848_, v_a_849_, v_a_850_, v_a_851_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___boxed(lean_object* v_00_u03b1_854_, lean_object* v_value_855_, lean_object* v_checkType_856_, lean_object* v_safety_857_, lean_object* v_checkMeta_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_){
_start:
{
uint8_t v_safety_boxed_864_; uint8_t v_checkMeta_boxed_865_; lean_object* v_res_866_; 
v_safety_boxed_864_ = lean_unbox(v_safety_857_);
v_checkMeta_boxed_865_ = lean_unbox(v_checkMeta_858_);
v_res_866_ = l_Lean_Meta_evalExprCore(v_00_u03b1_854_, v_value_855_, v_checkType_856_, v_safety_boxed_864_, v_checkMeta_boxed_865_, v_a_859_, v_a_860_, v_a_861_, v_a_862_);
lean_dec(v_a_862_);
lean_dec_ref(v_a_861_);
lean_dec(v_a_860_);
lean_dec_ref(v_a_859_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6(lean_object* v_00_u03b1_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_){
_start:
{
lean_object* v___x_873_; 
v___x_873_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6___redArg();
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6___boxed(lean_object* v_00_u03b1_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_){
_start:
{
lean_object* v_res_880_; 
v_res_880_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__6(v_00_u03b1_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_);
lean_dec(v___y_878_);
lean_dec_ref(v___y_877_);
lean_dec(v___y_876_);
lean_dec_ref(v___y_875_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4(lean_object* v_00_u03b1_881_, lean_object* v_constName_882_, uint8_t v_checkMeta_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_){
_start:
{
lean_object* v___x_889_; 
v___x_889_ = l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4___redArg(v_constName_882_, v_checkMeta_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4___boxed(lean_object* v_00_u03b1_890_, lean_object* v_constName_891_, lean_object* v_checkMeta_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_){
_start:
{
uint8_t v_checkMeta_boxed_898_; lean_object* v_res_899_; 
v_checkMeta_boxed_898_ = lean_unbox(v_checkMeta_892_);
v_res_899_ = l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4(v_00_u03b1_890_, v_constName_891_, v_checkMeta_boxed_898_, v___y_893_, v___y_894_, v___y_895_, v___y_896_);
lean_dec(v___y_896_);
lean_dec_ref(v___y_895_);
lean_dec(v___y_894_);
lean_dec_ref(v___y_893_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5(lean_object* v_00_u03b1_900_, lean_object* v_msg_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg(v_msg_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___boxed(lean_object* v_00_u03b1_908_, lean_object* v_msg_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5(v_00_u03b1_908_, v_msg_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_);
lean_dec(v___y_913_);
lean_dec_ref(v___y_912_);
lean_dec(v___y_911_);
lean_dec_ref(v___y_910_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__11(lean_object* v_env_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_){
_start:
{
lean_object* v___x_922_; 
v___x_922_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__11___redArg(v_env_916_, v___y_918_, v___y_920_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__11___boxed(lean_object* v_env_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_){
_start:
{
lean_object* v_res_929_; 
v_res_929_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7_spec__11(v_env_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_);
lean_dec(v___y_927_);
lean_dec_ref(v___y_926_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7(lean_object* v_00_u03b1_930_, lean_object* v_env_931_, lean_object* v_x_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_){
_start:
{
lean_object* v___x_938_; 
v___x_938_ = l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___redArg(v_env_931_, v_x_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7___boxed(lean_object* v_00_u03b1_939_, lean_object* v_env_940_, lean_object* v_x_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__7(v_00_u03b1_939_, v_env_940_, v_x_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec(v___y_943_);
lean_dec_ref(v___y_942_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__5(lean_object* v_00_u03b1_948_, lean_object* v_x_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_){
_start:
{
lean_object* v___x_955_; 
v___x_955_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__5___redArg(v_x_949_, v___y_950_, v___y_951_, v___y_952_, v___y_953_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__5___boxed(lean_object* v_00_u03b1_956_, lean_object* v_x_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__4_spec__5(v_00_u03b1_956_, v_x_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
lean_dec(v___y_961_);
lean_dec_ref(v___y_960_);
lean_dec(v___y_959_);
lean_dec_ref(v___y_958_);
return v_res_963_;
}
}
static lean_object* _init_l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_964_; 
v___x_964_ = lean_mk_string_unchecked("unexpected type at evalExpr", 27, 27);
return v___x_964_;
}
}
static lean_object* _init_l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_965_ = lean_obj_once(&l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__0, &l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__0);
v___x_966_ = l_Lean_stringToMessageData(v___x_965_);
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0(lean_object* v_typeName_967_, lean_object* v_type_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_){
_start:
{
lean_object* v___x_974_; 
v___x_974_ = l_Lean_Meta_whnfD(v_type_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_988_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_988_ == 0)
{
v___x_977_ = v___x_974_;
v_isShared_978_ = v_isSharedCheck_988_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_974_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_988_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
uint8_t v___x_979_; 
v___x_979_ = l_Lean_Expr_isConstOf(v_a_975_, v_typeName_967_);
if (v___x_979_ == 0)
{
lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
lean_del_object(v___x_977_);
v___x_980_ = lean_obj_once(&l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1, &l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1_once, _init_l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1);
v___x_981_ = l_Lean_indentExpr(v_a_975_);
v___x_982_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_980_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
v___x_983_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg(v___x_982_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
return v___x_983_;
}
else
{
lean_object* v___x_984_; lean_object* v___x_986_; 
lean_dec(v_a_975_);
v___x_984_ = lean_box(0);
if (v_isShared_978_ == 0)
{
lean_ctor_set(v___x_977_, 0, v___x_984_);
v___x_986_ = v___x_977_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v___x_984_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
}
else
{
lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_996_; 
v_a_989_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_996_ == 0)
{
v___x_991_ = v___x_974_;
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_dec(v___x_974_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_994_; 
if (v_isShared_992_ == 0)
{
v___x_994_ = v___x_991_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_a_989_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0___boxed(lean_object* v_typeName_997_, lean_object* v_type_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l_Lean_Meta_evalExpr_x27___redArg___lam__0(v_typeName_997_, v_type_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_);
lean_dec(v___y_1002_);
lean_dec_ref(v___y_1001_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec(v_typeName_997_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg(lean_object* v_typeName_1005_, lean_object* v_value_1006_, uint8_t v_safety_1007_, uint8_t v_checkMeta_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v___f_1014_; lean_object* v___x_1015_; 
v___f_1014_ = lean_alloc_closure((void*)(l_Lean_Meta_evalExpr_x27___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1014_, 0, v_typeName_1005_);
v___x_1015_ = l_Lean_Meta_evalExprCore___redArg(v_value_1006_, v___f_1014_, v_safety_1007_, v_checkMeta_1008_, v_a_1009_, v_a_1010_, v_a_1011_, v_a_1012_);
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___boxed(lean_object* v_typeName_1016_, lean_object* v_value_1017_, lean_object* v_safety_1018_, lean_object* v_checkMeta_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_){
_start:
{
uint8_t v_safety_boxed_1025_; uint8_t v_checkMeta_boxed_1026_; lean_object* v_res_1027_; 
v_safety_boxed_1025_ = lean_unbox(v_safety_1018_);
v_checkMeta_boxed_1026_ = lean_unbox(v_checkMeta_1019_);
v_res_1027_ = l_Lean_Meta_evalExpr_x27___redArg(v_typeName_1016_, v_value_1017_, v_safety_boxed_1025_, v_checkMeta_boxed_1026_, v_a_1020_, v_a_1021_, v_a_1022_, v_a_1023_);
lean_dec(v_a_1023_);
lean_dec_ref(v_a_1022_);
lean_dec(v_a_1021_);
lean_dec_ref(v_a_1020_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27(lean_object* v_00_u03b1_1028_, lean_object* v_typeName_1029_, lean_object* v_value_1030_, uint8_t v_safety_1031_, uint8_t v_checkMeta_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_){
_start:
{
lean_object* v___x_1038_; 
v___x_1038_ = l_Lean_Meta_evalExpr_x27___redArg(v_typeName_1029_, v_value_1030_, v_safety_1031_, v_checkMeta_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_);
return v___x_1038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___boxed(lean_object* v_00_u03b1_1039_, lean_object* v_typeName_1040_, lean_object* v_value_1041_, lean_object* v_safety_1042_, lean_object* v_checkMeta_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_){
_start:
{
uint8_t v_safety_boxed_1049_; uint8_t v_checkMeta_boxed_1050_; lean_object* v_res_1051_; 
v_safety_boxed_1049_ = lean_unbox(v_safety_1042_);
v_checkMeta_boxed_1050_ = lean_unbox(v_checkMeta_1043_);
v_res_1051_ = l_Lean_Meta_evalExpr_x27(v_00_u03b1_1039_, v_typeName_1040_, v_value_1041_, v_safety_boxed_1049_, v_checkMeta_boxed_1050_, v_a_1044_, v_a_1045_, v_a_1046_, v_a_1047_);
lean_dec(v_a_1047_);
lean_dec_ref(v_a_1046_);
lean_dec(v_a_1045_);
lean_dec_ref(v_a_1044_);
return v_res_1051_;
}
}
static lean_object* _init_l_Lean_Meta_evalExpr___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1052_ = lean_unsigned_to_nat(0u);
v___x_1053_ = lean_mk_empty_array_with_capacity(v___x_1052_);
return v___x_1053_;
}
}
static lean_object* _init_l_Lean_Meta_evalExpr___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1054_; 
v___x_1054_ = lean_mk_string_unchecked("unexpected type at `evalExpr` ", 30, 30);
return v___x_1054_;
}
}
static lean_object* _init_l_Lean_Meta_evalExpr___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1055_ = lean_obj_once(&l_Lean_Meta_evalExpr___redArg___lam__0___closed__1, &l_Lean_Meta_evalExpr___redArg___lam__0___closed__1_once, _init_l_Lean_Meta_evalExpr___redArg___lam__0___closed__1);
v___x_1056_ = l_Lean_stringToMessageData(v___x_1055_);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___lam__0(lean_object* v_expectedType_1057_, lean_object* v_type_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
lean_object* v___x_1064_; 
lean_inc_ref(v_expectedType_1057_);
lean_inc_ref(v_type_1058_);
v___x_1064_ = l_Lean_Meta_isExprDefEq(v_type_1058_, v_expectedType_1057_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
if (lean_obj_tag(v___x_1064_) == 0)
{
lean_object* v_a_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1089_; 
v_a_1065_ = lean_ctor_get(v___x_1064_, 0);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1064_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1067_ = v___x_1064_;
v_isShared_1068_ = v_isSharedCheck_1089_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_a_1065_);
lean_dec(v___x_1064_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1089_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
uint8_t v___x_1069_; 
v___x_1069_ = lean_unbox(v_a_1065_);
lean_dec(v_a_1065_);
if (v___x_1069_ == 0)
{
lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
lean_del_object(v___x_1067_);
v___x_1070_ = lean_box(0);
v___x_1071_ = lean_obj_once(&l_Lean_Meta_evalExpr___redArg___lam__0___closed__0, &l_Lean_Meta_evalExpr___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_evalExpr___redArg___lam__0___closed__0);
v___x_1072_ = l_Lean_Meta_mkHasTypeButIsExpectedMsg___redArg(v_type_1058_, v_expectedType_1057_, v___x_1070_, v___x_1071_);
if (lean_obj_tag(v___x_1072_) == 0)
{
lean_object* v_a_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v_a_1073_ = lean_ctor_get(v___x_1072_, 0);
lean_inc(v_a_1073_);
lean_dec_ref(v___x_1072_);
v___x_1074_ = lean_obj_once(&l_Lean_Meta_evalExpr___redArg___lam__0___closed__2, &l_Lean_Meta_evalExpr___redArg___lam__0___closed__2_once, _init_l_Lean_Meta_evalExpr___redArg___lam__0___closed__2);
v___x_1075_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1074_);
lean_ctor_set(v___x_1075_, 1, v_a_1073_);
v___x_1076_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__5___redArg(v___x_1075_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
return v___x_1076_;
}
else
{
lean_object* v_a_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1084_; 
v_a_1077_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1079_ = v___x_1072_;
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_a_1077_);
lean_dec(v___x_1072_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1082_; 
if (v_isShared_1080_ == 0)
{
v___x_1082_ = v___x_1079_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_a_1077_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
return v___x_1082_;
}
}
}
}
else
{
lean_object* v___x_1085_; lean_object* v___x_1087_; 
lean_dec_ref(v_type_1058_);
lean_dec_ref(v_expectedType_1057_);
v___x_1085_ = lean_box(0);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 0, v___x_1085_);
v___x_1087_ = v___x_1067_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v___x_1085_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
}
}
else
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
lean_dec_ref(v_type_1058_);
lean_dec_ref(v_expectedType_1057_);
v_a_1090_ = lean_ctor_get(v___x_1064_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1064_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1092_ = v___x_1064_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1064_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1095_; 
if (v_isShared_1093_ == 0)
{
v___x_1095_ = v___x_1092_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_a_1090_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___lam__0___boxed(lean_object* v_expectedType_1098_, lean_object* v_type_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l_Lean_Meta_evalExpr___redArg___lam__0(v_expectedType_1098_, v_type_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_);
lean_dec(v___y_1103_);
lean_dec_ref(v___y_1102_);
lean_dec(v___y_1101_);
lean_dec_ref(v___y_1100_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg(lean_object* v_expectedType_1106_, lean_object* v_value_1107_, uint8_t v_safety_1108_, uint8_t v_checkMeta_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_){
_start:
{
lean_object* v___f_1115_; lean_object* v___x_1116_; 
v___f_1115_ = lean_alloc_closure((void*)(l_Lean_Meta_evalExpr___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1115_, 0, v_expectedType_1106_);
v___x_1116_ = l_Lean_Meta_evalExprCore___redArg(v_value_1107_, v___f_1115_, v_safety_1108_, v_checkMeta_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___boxed(lean_object* v_expectedType_1117_, lean_object* v_value_1118_, lean_object* v_safety_1119_, lean_object* v_checkMeta_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_){
_start:
{
uint8_t v_safety_boxed_1126_; uint8_t v_checkMeta_boxed_1127_; lean_object* v_res_1128_; 
v_safety_boxed_1126_ = lean_unbox(v_safety_1119_);
v_checkMeta_boxed_1127_ = lean_unbox(v_checkMeta_1120_);
v_res_1128_ = l_Lean_Meta_evalExpr___redArg(v_expectedType_1117_, v_value_1118_, v_safety_boxed_1126_, v_checkMeta_boxed_1127_, v_a_1121_, v_a_1122_, v_a_1123_, v_a_1124_);
lean_dec(v_a_1124_);
lean_dec_ref(v_a_1123_);
lean_dec(v_a_1122_);
lean_dec_ref(v_a_1121_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr(lean_object* v_00_u03b1_1129_, lean_object* v_expectedType_1130_, lean_object* v_value_1131_, uint8_t v_safety_1132_, uint8_t v_checkMeta_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_){
_start:
{
lean_object* v___x_1139_; 
v___x_1139_ = l_Lean_Meta_evalExpr___redArg(v_expectedType_1130_, v_value_1131_, v_safety_1132_, v_checkMeta_1133_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_);
return v___x_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___boxed(lean_object* v_00_u03b1_1140_, lean_object* v_expectedType_1141_, lean_object* v_value_1142_, lean_object* v_safety_1143_, lean_object* v_checkMeta_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_){
_start:
{
uint8_t v_safety_boxed_1150_; uint8_t v_checkMeta_boxed_1151_; lean_object* v_res_1152_; 
v_safety_boxed_1150_ = lean_unbox(v_safety_1143_);
v_checkMeta_boxed_1151_ = lean_unbox(v_checkMeta_1144_);
v_res_1152_ = l_Lean_Meta_evalExpr(v_00_u03b1_1140_, v_expectedType_1141_, v_value_1142_, v_safety_boxed_1150_, v_checkMeta_boxed_1151_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_);
lean_dec(v_a_1148_);
lean_dec_ref(v_a_1147_);
lean_dec(v_a_1146_);
lean_dec_ref(v_a_1145_);
return v_res_1152_;
}
}
lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectLevelParams(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Eval(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectLevelParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Eval(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_AddDecl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectLevelParams(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Eval(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLevelParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Eval(builtin);
}
#ifdef __cplusplus
}
#endif
