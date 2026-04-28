// Lean compiler output
// Module: Lean.Meta.Tactic.Refl
// Imports: public import Lean.Meta.Reduce public import Lean.Meta.Tactic.Apply
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_refl___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_refl___lam__0___closed__0;
static lean_once_cell_t l_Lean_MVarId_refl___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_refl___lam__0___closed__1;
static lean_once_cell_t l_Lean_MVarId_refl___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_refl___lam__0___closed__2;
static lean_once_cell_t l_Lean_MVarId_refl___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_refl___lam__0___closed__3;
static lean_once_cell_t l_Lean_MVarId_refl___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_refl___lam__0___closed__4;
static lean_once_cell_t l_Lean_MVarId_refl___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_refl___lam__0___closed__5;
static lean_once_cell_t l_Lean_MVarId_refl___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_refl___lam__0___closed__6;
static lean_once_cell_t l_Lean_MVarId_refl___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_refl___lam__0___closed__7;
static lean_once_cell_t l_Lean_MVarId_refl___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_refl___lam__0___closed__8;
static lean_once_cell_t l_Lean_MVarId_refl___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_refl___lam__0___closed__9;
LEAN_EXPORT lean_object* l_Lean_MVarId_refl___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_refl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_refl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_refl___closed__0;
static lean_once_cell_t l_Lean_MVarId_refl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_refl___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_refl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_heqOfEq___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_heqOfEq___lam__0___closed__0;
static lean_once_cell_t l_Lean_MVarId_heqOfEq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_heqOfEq___lam__0___closed__1;
static lean_once_cell_t l_Lean_MVarId_heqOfEq___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_heqOfEq___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_eqOfHEq___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_eqOfHEq___lam__0___closed__0;
static lean_once_cell_t l_Lean_MVarId_eqOfHEq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_eqOfHEq___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_hrefl___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_hrefl___lam__0___closed__0;
static lean_once_cell_t l_Lean_MVarId_hrefl___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_hrefl___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_hrefl___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_hrefl___lam__1___closed__0;
static lean_once_cell_t l_Lean_MVarId_hrefl___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_hrefl___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_, lean_object* v___y_3_){
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___redArg___boxed(lean_object* v_e_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___redArg(v_e_29_, v___y_30_, v___y_31_);
lean_dec(v___y_31_);
lean_dec(v___y_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0(lean_object* v_e_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___redArg(v_e_34_, v___y_36_, v___y_38_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___boxed(lean_object* v_e_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0(v_e_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg(lean_object* v_mvarId_48_, lean_object* v_x_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_48_, v_x_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
if (lean_obj_tag(v___x_55_) == 0)
{
lean_object* v_a_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_63_; 
v_a_56_ = lean_ctor_get(v___x_55_, 0);
v_isSharedCheck_63_ = !lean_is_exclusive(v___x_55_);
if (v_isSharedCheck_63_ == 0)
{
v___x_58_ = v___x_55_;
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_a_56_);
lean_dec(v___x_55_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_61_; 
if (v_isShared_59_ == 0)
{
v___x_61_ = v___x_58_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_a_56_);
v___x_61_ = v_reuseFailAlloc_62_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
return v___x_61_;
}
}
}
else
{
lean_object* v_a_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_71_; 
v_a_64_ = lean_ctor_get(v___x_55_, 0);
v_isSharedCheck_71_ = !lean_is_exclusive(v___x_55_);
if (v_isSharedCheck_71_ == 0)
{
v___x_66_ = v___x_55_;
v_isShared_67_ = v_isSharedCheck_71_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_a_64_);
lean_dec(v___x_55_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_71_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_69_; 
if (v_isShared_67_ == 0)
{
v___x_69_ = v___x_66_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v_a_64_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
return v___x_69_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg___boxed(lean_object* v_mvarId_72_, lean_object* v_x_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg(v_mvarId_72_, v_x_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
lean_dec(v___y_75_);
lean_dec_ref(v___y_74_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2(lean_object* v_00_u03b1_80_, lean_object* v_mvarId_81_, lean_object* v_x_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg(v_mvarId_81_, v_x_82_, v___y_83_, v___y_84_, v___y_85_, v___y_86_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___boxed(lean_object* v_00_u03b1_89_, lean_object* v_mvarId_90_, lean_object* v_x_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2(v_00_u03b1_89_, v_mvarId_90_, v_x_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_98_, lean_object* v_x_99_, lean_object* v_x_100_, lean_object* v_x_101_){
_start:
{
lean_object* v_ks_102_; lean_object* v_vs_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_127_; 
v_ks_102_ = lean_ctor_get(v_x_98_, 0);
v_vs_103_ = lean_ctor_get(v_x_98_, 1);
v_isSharedCheck_127_ = !lean_is_exclusive(v_x_98_);
if (v_isSharedCheck_127_ == 0)
{
v___x_105_ = v_x_98_;
v_isShared_106_ = v_isSharedCheck_127_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_vs_103_);
lean_inc(v_ks_102_);
lean_dec(v_x_98_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_127_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_107_ = lean_array_get_size(v_ks_102_);
v___x_108_ = lean_nat_dec_lt(v_x_99_, v___x_107_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_112_; 
lean_dec(v_x_99_);
v___x_109_ = lean_array_push(v_ks_102_, v_x_100_);
v___x_110_ = lean_array_push(v_vs_103_, v_x_101_);
if (v_isShared_106_ == 0)
{
lean_ctor_set(v___x_105_, 1, v___x_110_);
lean_ctor_set(v___x_105_, 0, v___x_109_);
v___x_112_ = v___x_105_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v___x_109_);
lean_ctor_set(v_reuseFailAlloc_113_, 1, v___x_110_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
}
}
else
{
lean_object* v_k_x27_114_; uint8_t v___x_115_; 
v_k_x27_114_ = lean_array_fget_borrowed(v_ks_102_, v_x_99_);
v___x_115_ = l_Lean_instBEqMVarId_beq(v_x_100_, v_k_x27_114_);
if (v___x_115_ == 0)
{
lean_object* v___x_117_; 
if (v_isShared_106_ == 0)
{
v___x_117_ = v___x_105_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_ks_102_);
lean_ctor_set(v_reuseFailAlloc_121_, 1, v_vs_103_);
v___x_117_ = v_reuseFailAlloc_121_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_118_ = lean_unsigned_to_nat(1u);
v___x_119_ = lean_nat_add(v_x_99_, v___x_118_);
lean_dec(v_x_99_);
v_x_98_ = v___x_117_;
v_x_99_ = v___x_119_;
goto _start;
}
}
else
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_125_; 
v___x_122_ = lean_array_fset(v_ks_102_, v_x_99_, v_x_100_);
v___x_123_ = lean_array_fset(v_vs_103_, v_x_99_, v_x_101_);
lean_dec(v_x_99_);
if (v_isShared_106_ == 0)
{
lean_ctor_set(v___x_105_, 1, v___x_123_);
lean_ctor_set(v___x_105_, 0, v___x_122_);
v___x_125_ = v___x_105_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v___x_122_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v___x_123_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4___redArg(lean_object* v_n_128_, lean_object* v_k_129_, lean_object* v_v_130_){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = lean_unsigned_to_nat(0u);
v___x_132_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(v_n_128_, v___x_131_, v_k_129_, v_v_130_);
return v___x_132_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
size_t v___x_133_; size_t v___x_134_; size_t v___x_135_; 
v___x_133_ = ((size_t)5ULL);
v___x_134_ = ((size_t)1ULL);
v___x_135_ = lean_usize_shift_left(v___x_134_, v___x_133_);
return v___x_135_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__1(void){
_start:
{
size_t v___x_136_; size_t v___x_137_; size_t v___x_138_; 
v___x_136_ = ((size_t)1ULL);
v___x_137_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__0);
v___x_138_ = lean_usize_sub(v___x_137_, v___x_136_);
return v___x_138_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg(lean_object* v_x_140_, size_t v_x_141_, size_t v_x_142_, lean_object* v_x_143_, lean_object* v_x_144_){
_start:
{
if (lean_obj_tag(v_x_140_) == 0)
{
lean_object* v_es_145_; size_t v___x_146_; size_t v___x_147_; size_t v___x_148_; size_t v___x_149_; lean_object* v_j_150_; lean_object* v___x_151_; uint8_t v___x_152_; 
v_es_145_ = lean_ctor_get(v_x_140_, 0);
v___x_146_ = ((size_t)5ULL);
v___x_147_ = ((size_t)1ULL);
v___x_148_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__1);
v___x_149_ = lean_usize_land(v_x_141_, v___x_148_);
v_j_150_ = lean_usize_to_nat(v___x_149_);
v___x_151_ = lean_array_get_size(v_es_145_);
v___x_152_ = lean_nat_dec_lt(v_j_150_, v___x_151_);
if (v___x_152_ == 0)
{
lean_dec(v_j_150_);
lean_dec(v_x_144_);
lean_dec(v_x_143_);
return v_x_140_;
}
else
{
lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_189_; 
lean_inc_ref(v_es_145_);
v_isSharedCheck_189_ = !lean_is_exclusive(v_x_140_);
if (v_isSharedCheck_189_ == 0)
{
lean_object* v_unused_190_; 
v_unused_190_ = lean_ctor_get(v_x_140_, 0);
lean_dec(v_unused_190_);
v___x_154_ = v_x_140_;
v_isShared_155_ = v_isSharedCheck_189_;
goto v_resetjp_153_;
}
else
{
lean_dec(v_x_140_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_189_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v_v_156_; lean_object* v___x_157_; lean_object* v_xs_x27_158_; lean_object* v___y_160_; 
v_v_156_ = lean_array_fget(v_es_145_, v_j_150_);
v___x_157_ = lean_box(0);
v_xs_x27_158_ = lean_array_fset(v_es_145_, v_j_150_, v___x_157_);
switch(lean_obj_tag(v_v_156_))
{
case 0:
{
lean_object* v_key_165_; lean_object* v_val_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_176_; 
v_key_165_ = lean_ctor_get(v_v_156_, 0);
v_val_166_ = lean_ctor_get(v_v_156_, 1);
v_isSharedCheck_176_ = !lean_is_exclusive(v_v_156_);
if (v_isSharedCheck_176_ == 0)
{
v___x_168_ = v_v_156_;
v_isShared_169_ = v_isSharedCheck_176_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_val_166_);
lean_inc(v_key_165_);
lean_dec(v_v_156_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_176_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
uint8_t v___x_170_; 
v___x_170_ = l_Lean_instBEqMVarId_beq(v_x_143_, v_key_165_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; lean_object* v___x_172_; 
lean_del_object(v___x_168_);
v___x_171_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_165_, v_val_166_, v_x_143_, v_x_144_);
v___x_172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
v___y_160_ = v___x_172_;
goto v___jp_159_;
}
else
{
lean_object* v___x_174_; 
lean_dec(v_val_166_);
lean_dec(v_key_165_);
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 1, v_x_144_);
lean_ctor_set(v___x_168_, 0, v_x_143_);
v___x_174_ = v___x_168_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_x_143_);
lean_ctor_set(v_reuseFailAlloc_175_, 1, v_x_144_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
v___y_160_ = v___x_174_;
goto v___jp_159_;
}
}
}
}
case 1:
{
lean_object* v_node_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_187_; 
v_node_177_ = lean_ctor_get(v_v_156_, 0);
v_isSharedCheck_187_ = !lean_is_exclusive(v_v_156_);
if (v_isSharedCheck_187_ == 0)
{
v___x_179_ = v_v_156_;
v_isShared_180_ = v_isSharedCheck_187_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_node_177_);
lean_dec(v_v_156_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_187_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
size_t v___x_181_; size_t v___x_182_; lean_object* v___x_183_; lean_object* v___x_185_; 
v___x_181_ = lean_usize_shift_right(v_x_141_, v___x_146_);
v___x_182_ = lean_usize_add(v_x_142_, v___x_147_);
v___x_183_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg(v_node_177_, v___x_181_, v___x_182_, v_x_143_, v_x_144_);
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 0, v___x_183_);
v___x_185_ = v___x_179_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v___x_183_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
v___y_160_ = v___x_185_;
goto v___jp_159_;
}
}
}
default: 
{
lean_object* v___x_188_; 
v___x_188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_188_, 0, v_x_143_);
lean_ctor_set(v___x_188_, 1, v_x_144_);
v___y_160_ = v___x_188_;
goto v___jp_159_;
}
}
v___jp_159_:
{
lean_object* v___x_161_; lean_object* v___x_163_; 
v___x_161_ = lean_array_fset(v_xs_x27_158_, v_j_150_, v___y_160_);
lean_dec(v_j_150_);
if (v_isShared_155_ == 0)
{
lean_ctor_set(v___x_154_, 0, v___x_161_);
v___x_163_ = v___x_154_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v___x_161_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
}
}
else
{
lean_object* v_ks_191_; lean_object* v_vs_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_212_; 
v_ks_191_ = lean_ctor_get(v_x_140_, 0);
v_vs_192_ = lean_ctor_get(v_x_140_, 1);
v_isSharedCheck_212_ = !lean_is_exclusive(v_x_140_);
if (v_isSharedCheck_212_ == 0)
{
v___x_194_ = v_x_140_;
v_isShared_195_ = v_isSharedCheck_212_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_vs_192_);
lean_inc(v_ks_191_);
lean_dec(v_x_140_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_212_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
lean_object* v___x_197_; 
if (v_isShared_195_ == 0)
{
v___x_197_ = v___x_194_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_ks_191_);
lean_ctor_set(v_reuseFailAlloc_211_, 1, v_vs_192_);
v___x_197_ = v_reuseFailAlloc_211_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
lean_object* v_newNode_198_; uint8_t v___y_200_; size_t v___x_206_; uint8_t v___x_207_; 
v_newNode_198_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4___redArg(v___x_197_, v_x_143_, v_x_144_);
v___x_206_ = ((size_t)7ULL);
v___x_207_ = lean_usize_dec_le(v___x_206_, v_x_142_);
if (v___x_207_ == 0)
{
lean_object* v___x_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_208_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_198_);
v___x_209_ = lean_unsigned_to_nat(4u);
v___x_210_ = lean_nat_dec_lt(v___x_208_, v___x_209_);
lean_dec(v___x_208_);
v___y_200_ = v___x_210_;
goto v___jp_199_;
}
else
{
v___y_200_ = v___x_207_;
goto v___jp_199_;
}
v___jp_199_:
{
if (v___y_200_ == 0)
{
lean_object* v_ks_201_; lean_object* v_vs_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v_ks_201_ = lean_ctor_get(v_newNode_198_, 0);
lean_inc_ref(v_ks_201_);
v_vs_202_ = lean_ctor_get(v_newNode_198_, 1);
lean_inc_ref(v_vs_202_);
lean_dec_ref(v_newNode_198_);
v___x_203_ = lean_unsigned_to_nat(0u);
v___x_204_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__2);
v___x_205_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___redArg(v_x_142_, v_ks_201_, v_vs_202_, v___x_203_, v___x_204_);
lean_dec_ref(v_vs_202_);
lean_dec_ref(v_ks_201_);
return v___x_205_;
}
else
{
return v_newNode_198_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___redArg(size_t v_depth_213_, lean_object* v_keys_214_, lean_object* v_vals_215_, lean_object* v_i_216_, lean_object* v_entries_217_){
_start:
{
lean_object* v___x_218_; uint8_t v___x_219_; 
v___x_218_ = lean_array_get_size(v_keys_214_);
v___x_219_ = lean_nat_dec_lt(v_i_216_, v___x_218_);
if (v___x_219_ == 0)
{
lean_dec(v_i_216_);
return v_entries_217_;
}
else
{
lean_object* v_k_220_; lean_object* v_v_221_; uint64_t v___x_222_; size_t v_h_223_; size_t v___x_224_; lean_object* v___x_225_; size_t v___x_226_; size_t v___x_227_; size_t v___x_228_; size_t v_h_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v_k_220_ = lean_array_fget_borrowed(v_keys_214_, v_i_216_);
v_v_221_ = lean_array_fget_borrowed(v_vals_215_, v_i_216_);
v___x_222_ = l_Lean_instHashableMVarId_hash(v_k_220_);
v_h_223_ = lean_uint64_to_usize(v___x_222_);
v___x_224_ = ((size_t)5ULL);
v___x_225_ = lean_unsigned_to_nat(1u);
v___x_226_ = ((size_t)1ULL);
v___x_227_ = lean_usize_sub(v_depth_213_, v___x_226_);
v___x_228_ = lean_usize_mul(v___x_224_, v___x_227_);
v_h_229_ = lean_usize_shift_right(v_h_223_, v___x_228_);
v___x_230_ = lean_nat_add(v_i_216_, v___x_225_);
lean_dec(v_i_216_);
lean_inc(v_v_221_);
lean_inc(v_k_220_);
v___x_231_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg(v_entries_217_, v_h_229_, v_depth_213_, v_k_220_, v_v_221_);
v_i_216_ = v___x_230_;
v_entries_217_ = v___x_231_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_depth_233_, lean_object* v_keys_234_, lean_object* v_vals_235_, lean_object* v_i_236_, lean_object* v_entries_237_){
_start:
{
size_t v_depth_boxed_238_; lean_object* v_res_239_; 
v_depth_boxed_238_ = lean_unbox_usize(v_depth_233_);
lean_dec(v_depth_233_);
v_res_239_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___redArg(v_depth_boxed_238_, v_keys_234_, v_vals_235_, v_i_236_, v_entries_237_);
lean_dec_ref(v_vals_235_);
lean_dec_ref(v_keys_234_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_x_240_, lean_object* v_x_241_, lean_object* v_x_242_, lean_object* v_x_243_, lean_object* v_x_244_){
_start:
{
size_t v_x_2636__boxed_245_; size_t v_x_2637__boxed_246_; lean_object* v_res_247_; 
v_x_2636__boxed_245_ = lean_unbox_usize(v_x_241_);
lean_dec(v_x_241_);
v_x_2637__boxed_246_ = lean_unbox_usize(v_x_242_);
lean_dec(v_x_242_);
v_res_247_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg(v_x_240_, v_x_2636__boxed_245_, v_x_2637__boxed_246_, v_x_243_, v_x_244_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1___redArg(lean_object* v_x_248_, lean_object* v_x_249_, lean_object* v_x_250_){
_start:
{
uint64_t v___x_251_; size_t v___x_252_; size_t v___x_253_; lean_object* v___x_254_; 
v___x_251_ = l_Lean_instHashableMVarId_hash(v_x_249_);
v___x_252_ = lean_uint64_to_usize(v___x_251_);
v___x_253_ = ((size_t)1ULL);
v___x_254_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg(v_x_248_, v___x_252_, v___x_253_, v_x_249_, v_x_250_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___redArg(lean_object* v_mvarId_255_, lean_object* v_val_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v_mctx_262_; lean_object* v_cache_263_; lean_object* v_zetaDeltaFVarIds_264_; lean_object* v_postponed_265_; lean_object* v_diag_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_294_; 
v___x_260_ = lean_st_ref_get(v___y_258_);
lean_dec(v___x_260_);
v___x_261_ = lean_st_ref_take(v___y_257_);
v_mctx_262_ = lean_ctor_get(v___x_261_, 0);
v_cache_263_ = lean_ctor_get(v___x_261_, 1);
v_zetaDeltaFVarIds_264_ = lean_ctor_get(v___x_261_, 2);
v_postponed_265_ = lean_ctor_get(v___x_261_, 3);
v_diag_266_ = lean_ctor_get(v___x_261_, 4);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_261_);
if (v_isSharedCheck_294_ == 0)
{
v___x_268_ = v___x_261_;
v_isShared_269_ = v_isSharedCheck_294_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_diag_266_);
lean_inc(v_postponed_265_);
lean_inc(v_zetaDeltaFVarIds_264_);
lean_inc(v_cache_263_);
lean_inc(v_mctx_262_);
lean_dec(v___x_261_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_294_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v_depth_270_; lean_object* v_levelAssignDepth_271_; lean_object* v_lmvarCounter_272_; lean_object* v_mvarCounter_273_; lean_object* v_lDecls_274_; lean_object* v_decls_275_; lean_object* v_userNames_276_; lean_object* v_lAssignment_277_; lean_object* v_eAssignment_278_; lean_object* v_dAssignment_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_293_; 
v_depth_270_ = lean_ctor_get(v_mctx_262_, 0);
v_levelAssignDepth_271_ = lean_ctor_get(v_mctx_262_, 1);
v_lmvarCounter_272_ = lean_ctor_get(v_mctx_262_, 2);
v_mvarCounter_273_ = lean_ctor_get(v_mctx_262_, 3);
v_lDecls_274_ = lean_ctor_get(v_mctx_262_, 4);
v_decls_275_ = lean_ctor_get(v_mctx_262_, 5);
v_userNames_276_ = lean_ctor_get(v_mctx_262_, 6);
v_lAssignment_277_ = lean_ctor_get(v_mctx_262_, 7);
v_eAssignment_278_ = lean_ctor_get(v_mctx_262_, 8);
v_dAssignment_279_ = lean_ctor_get(v_mctx_262_, 9);
v_isSharedCheck_293_ = !lean_is_exclusive(v_mctx_262_);
if (v_isSharedCheck_293_ == 0)
{
v___x_281_ = v_mctx_262_;
v_isShared_282_ = v_isSharedCheck_293_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_dAssignment_279_);
lean_inc(v_eAssignment_278_);
lean_inc(v_lAssignment_277_);
lean_inc(v_userNames_276_);
lean_inc(v_decls_275_);
lean_inc(v_lDecls_274_);
lean_inc(v_mvarCounter_273_);
lean_inc(v_lmvarCounter_272_);
lean_inc(v_levelAssignDepth_271_);
lean_inc(v_depth_270_);
lean_dec(v_mctx_262_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_293_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_283_; lean_object* v___x_285_; 
v___x_283_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1___redArg(v_eAssignment_278_, v_mvarId_255_, v_val_256_);
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 8, v___x_283_);
v___x_285_ = v___x_281_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_depth_270_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v_levelAssignDepth_271_);
lean_ctor_set(v_reuseFailAlloc_292_, 2, v_lmvarCounter_272_);
lean_ctor_set(v_reuseFailAlloc_292_, 3, v_mvarCounter_273_);
lean_ctor_set(v_reuseFailAlloc_292_, 4, v_lDecls_274_);
lean_ctor_set(v_reuseFailAlloc_292_, 5, v_decls_275_);
lean_ctor_set(v_reuseFailAlloc_292_, 6, v_userNames_276_);
lean_ctor_set(v_reuseFailAlloc_292_, 7, v_lAssignment_277_);
lean_ctor_set(v_reuseFailAlloc_292_, 8, v___x_283_);
lean_ctor_set(v_reuseFailAlloc_292_, 9, v_dAssignment_279_);
v___x_285_ = v_reuseFailAlloc_292_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
lean_object* v___x_287_; 
if (v_isShared_269_ == 0)
{
lean_ctor_set(v___x_268_, 0, v___x_285_);
v___x_287_ = v___x_268_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_285_);
lean_ctor_set(v_reuseFailAlloc_291_, 1, v_cache_263_);
lean_ctor_set(v_reuseFailAlloc_291_, 2, v_zetaDeltaFVarIds_264_);
lean_ctor_set(v_reuseFailAlloc_291_, 3, v_postponed_265_);
lean_ctor_set(v_reuseFailAlloc_291_, 4, v_diag_266_);
v___x_287_ = v_reuseFailAlloc_291_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_288_ = lean_st_ref_set(v___y_257_, v___x_287_);
v___x_289_ = lean_box(0);
v___x_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
return v___x_290_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___redArg___boxed(lean_object* v_mvarId_295_, lean_object* v_val_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___redArg(v_mvarId_295_, v_val_296_, v___y_297_, v___y_298_);
lean_dec(v___y_298_);
lean_dec(v___y_297_);
return v_res_300_;
}
}
static lean_object* _init_l_Lean_MVarId_refl___lam__0___closed__0(void){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_301_;
}
}
static lean_object* _init_l_Lean_MVarId_refl___lam__0___closed__1(void){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = lean_mk_string_unchecked("rfl", 3, 3);
return v___x_302_;
}
}
static lean_object* _init_l_Lean_MVarId_refl___lam__0___closed__2(void){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = lean_obj_once(&l_Lean_MVarId_refl___lam__0___closed__1, &l_Lean_MVarId_refl___lam__0___closed__1_once, _init_l_Lean_MVarId_refl___lam__0___closed__1);
v___x_304_ = l_Lean_Name_mkStr1(v___x_303_);
return v___x_304_;
}
}
static lean_object* _init_l_Lean_MVarId_refl___lam__0___closed__3(void){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = lean_mk_string_unchecked("equality lhs", 12, 12);
return v___x_305_;
}
}
static lean_object* _init_l_Lean_MVarId_refl___lam__0___closed__4(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = lean_obj_once(&l_Lean_MVarId_refl___lam__0___closed__3, &l_Lean_MVarId_refl___lam__0___closed__3_once, _init_l_Lean_MVarId_refl___lam__0___closed__3);
v___x_307_ = l_Lean_stringToMessageData(v___x_306_);
return v___x_307_;
}
}
static lean_object* _init_l_Lean_MVarId_refl___lam__0___closed__5(void){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = lean_mk_string_unchecked("\nis not definitionally equal to rhs", 35, 35);
return v___x_308_;
}
}
static lean_object* _init_l_Lean_MVarId_refl___lam__0___closed__6(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = lean_obj_once(&l_Lean_MVarId_refl___lam__0___closed__5, &l_Lean_MVarId_refl___lam__0___closed__5_once, _init_l_Lean_MVarId_refl___lam__0___closed__5);
v___x_310_ = l_Lean_stringToMessageData(v___x_309_);
return v___x_310_;
}
}
static lean_object* _init_l_Lean_MVarId_refl___lam__0___closed__7(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_311_ = lean_obj_once(&l_Lean_MVarId_refl___lam__0___closed__0, &l_Lean_MVarId_refl___lam__0___closed__0_once, _init_l_Lean_MVarId_refl___lam__0___closed__0);
v___x_312_ = l_Lean_Name_mkStr1(v___x_311_);
return v___x_312_;
}
}
static lean_object* _init_l_Lean_MVarId_refl___lam__0___closed__8(void){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = lean_mk_string_unchecked("equality expected", 17, 17);
return v___x_313_;
}
}
static lean_object* _init_l_Lean_MVarId_refl___lam__0___closed__9(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_obj_once(&l_Lean_MVarId_refl___lam__0___closed__8, &l_Lean_MVarId_refl___lam__0___closed__8_once, _init_l_Lean_MVarId_refl___lam__0___closed__8);
v___x_315_ = l_Lean_stringToMessageData(v___x_314_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_refl___lam__0(lean_object* v_mvarId_316_, lean_object* v___x_317_, lean_object* v___x_318_, uint8_t v_check_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_){
_start:
{
lean_object* v___x_325_; 
lean_inc(v_mvarId_316_);
v___x_325_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_316_, v___x_317_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
if (lean_obj_tag(v___x_325_) == 0)
{
lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_405_; 
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_405_ == 0)
{
lean_object* v_unused_406_; 
v_unused_406_ = lean_ctor_get(v___x_325_, 0);
lean_dec(v_unused_406_);
v___x_327_ = v___x_325_;
v_isShared_328_ = v_isSharedCheck_405_;
goto v_resetjp_326_;
}
else
{
lean_dec(v___x_325_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_405_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_329_; 
lean_inc(v_mvarId_316_);
v___x_329_ = l_Lean_MVarId_getType_x27(v_mvarId_316_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; lean_object* v___y_332_; lean_object* v___y_333_; lean_object* v___y_334_; lean_object* v___y_335_; lean_object* v___y_336_; lean_object* v___y_337_; lean_object* v___y_348_; lean_object* v___y_349_; lean_object* v___y_350_; lean_object* v___y_351_; lean_object* v___x_386_; lean_object* v___x_387_; uint8_t v___x_388_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_a_330_);
lean_dec_ref(v___x_329_);
v___x_386_ = lean_obj_once(&l_Lean_MVarId_refl___lam__0___closed__7, &l_Lean_MVarId_refl___lam__0___closed__7_once, _init_l_Lean_MVarId_refl___lam__0___closed__7);
v___x_387_ = lean_unsigned_to_nat(3u);
v___x_388_ = l_Lean_Expr_isAppOfArity(v_a_330_, v___x_386_, v___x_387_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_394_; 
v___x_389_ = lean_obj_once(&l_Lean_MVarId_refl___lam__0___closed__2, &l_Lean_MVarId_refl___lam__0___closed__2_once, _init_l_Lean_MVarId_refl___lam__0___closed__2);
v___x_390_ = lean_obj_once(&l_Lean_MVarId_refl___lam__0___closed__9, &l_Lean_MVarId_refl___lam__0___closed__9_once, _init_l_Lean_MVarId_refl___lam__0___closed__9);
lean_inc(v_a_330_);
v___x_391_ = l_Lean_indentExpr(v_a_330_);
v___x_392_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_390_);
lean_ctor_set(v___x_392_, 1, v___x_391_);
if (v_isShared_328_ == 0)
{
lean_ctor_set_tag(v___x_327_, 1);
lean_ctor_set(v___x_327_, 0, v___x_392_);
v___x_394_ = v___x_327_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v___x_392_);
v___x_394_ = v_reuseFailAlloc_396_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
lean_object* v___x_395_; 
lean_inc(v_mvarId_316_);
v___x_395_ = l_Lean_Meta_throwTacticEx___redArg(v___x_389_, v_mvarId_316_, v___x_394_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
if (lean_obj_tag(v___x_395_) == 0)
{
lean_dec_ref(v___x_395_);
v___y_348_ = v___y_320_;
v___y_349_ = v___y_321_;
v___y_350_ = v___y_322_;
v___y_351_ = v___y_323_;
goto v___jp_347_;
}
else
{
lean_dec(v_a_330_);
lean_dec_ref(v___x_318_);
lean_dec(v_mvarId_316_);
return v___x_395_;
}
}
}
else
{
lean_del_object(v___x_327_);
v___y_348_ = v___y_320_;
v___y_349_ = v___y_321_;
v___y_350_ = v___y_322_;
v___y_351_ = v___y_323_;
goto v___jp_347_;
}
v___jp_331_:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_338_ = l_Lean_Expr_getAppFn(v_a_330_);
lean_dec(v_a_330_);
v___x_339_ = l_Lean_Expr_constLevels_x21(v___x_338_);
lean_dec_ref(v___x_338_);
v___x_340_ = l_Lean_Expr_appFn_x21(v___y_332_);
lean_dec_ref(v___y_332_);
v___x_341_ = l_Lean_Expr_appArg_x21(v___x_340_);
lean_dec_ref(v___x_340_);
v___x_342_ = lean_obj_once(&l_Lean_MVarId_refl___lam__0___closed__0, &l_Lean_MVarId_refl___lam__0___closed__0_once, _init_l_Lean_MVarId_refl___lam__0___closed__0);
v___x_343_ = l_Lean_Name_mkStr2(v___x_342_, v___x_318_);
v___x_344_ = l_Lean_mkConst(v___x_343_, v___x_339_);
v___x_345_ = l_Lean_mkAppB(v___x_344_, v___x_341_, v___y_333_);
v___x_346_ = l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___redArg(v_mvarId_316_, v___x_345_, v___y_335_, v___y_337_);
return v___x_346_;
}
v___jp_347_:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v_a_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_352_ = l_Lean_Expr_appFn_x21(v_a_330_);
v___x_353_ = l_Lean_Expr_appArg_x21(v___x_352_);
v___x_354_ = l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___redArg(v___x_353_, v___y_349_, v___y_351_);
v_a_355_ = lean_ctor_get(v___x_354_, 0);
lean_inc(v_a_355_);
lean_dec_ref(v___x_354_);
v___x_356_ = l_Lean_Expr_appArg_x21(v_a_330_);
v___x_357_ = l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___redArg(v___x_356_, v___y_349_, v___y_351_);
if (v_check_319_ == 0)
{
lean_dec_ref(v___x_357_);
v___y_332_ = v___x_352_;
v___y_333_ = v_a_355_;
v___y_334_ = v___y_348_;
v___y_335_ = v___y_349_;
v___y_336_ = v___y_350_;
v___y_337_ = v___y_351_;
goto v___jp_331_;
}
else
{
lean_object* v_a_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_385_; 
v_a_358_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_385_ == 0)
{
v___x_360_ = v___x_357_;
v_isShared_361_ = v_isSharedCheck_385_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_a_358_);
lean_dec(v___x_357_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_385_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_362_; 
lean_inc(v_a_358_);
lean_inc(v_a_355_);
v___x_362_ = l_Lean_Meta_isExprDefEq(v_a_355_, v_a_358_, v___y_348_, v___y_349_, v___y_350_, v___y_351_);
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v_a_363_; uint8_t v___x_364_; 
v_a_363_ = lean_ctor_get(v___x_362_, 0);
lean_inc(v_a_363_);
lean_dec_ref(v___x_362_);
v___x_364_ = lean_unbox(v_a_363_);
lean_dec(v_a_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_374_; 
v___x_365_ = lean_obj_once(&l_Lean_MVarId_refl___lam__0___closed__2, &l_Lean_MVarId_refl___lam__0___closed__2_once, _init_l_Lean_MVarId_refl___lam__0___closed__2);
v___x_366_ = lean_obj_once(&l_Lean_MVarId_refl___lam__0___closed__4, &l_Lean_MVarId_refl___lam__0___closed__4_once, _init_l_Lean_MVarId_refl___lam__0___closed__4);
lean_inc(v_a_355_);
v___x_367_ = l_Lean_indentExpr(v_a_355_);
v___x_368_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_368_, 0, v___x_366_);
lean_ctor_set(v___x_368_, 1, v___x_367_);
v___x_369_ = lean_obj_once(&l_Lean_MVarId_refl___lam__0___closed__6, &l_Lean_MVarId_refl___lam__0___closed__6_once, _init_l_Lean_MVarId_refl___lam__0___closed__6);
v___x_370_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_370_, 0, v___x_368_);
lean_ctor_set(v___x_370_, 1, v___x_369_);
v___x_371_ = l_Lean_indentExpr(v_a_358_);
v___x_372_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_370_);
lean_ctor_set(v___x_372_, 1, v___x_371_);
if (v_isShared_361_ == 0)
{
lean_ctor_set_tag(v___x_360_, 1);
lean_ctor_set(v___x_360_, 0, v___x_372_);
v___x_374_ = v___x_360_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v___x_372_);
v___x_374_ = v_reuseFailAlloc_376_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
lean_object* v___x_375_; 
lean_inc(v_mvarId_316_);
v___x_375_ = l_Lean_Meta_throwTacticEx___redArg(v___x_365_, v_mvarId_316_, v___x_374_, v___y_348_, v___y_349_, v___y_350_, v___y_351_);
if (lean_obj_tag(v___x_375_) == 0)
{
lean_dec_ref(v___x_375_);
v___y_332_ = v___x_352_;
v___y_333_ = v_a_355_;
v___y_334_ = v___y_348_;
v___y_335_ = v___y_349_;
v___y_336_ = v___y_350_;
v___y_337_ = v___y_351_;
goto v___jp_331_;
}
else
{
lean_dec(v_a_355_);
lean_dec_ref(v___x_352_);
lean_dec(v_a_330_);
lean_dec_ref(v___x_318_);
lean_dec(v_mvarId_316_);
return v___x_375_;
}
}
}
else
{
lean_del_object(v___x_360_);
lean_dec(v_a_358_);
v___y_332_ = v___x_352_;
v___y_333_ = v_a_355_;
v___y_334_ = v___y_348_;
v___y_335_ = v___y_349_;
v___y_336_ = v___y_350_;
v___y_337_ = v___y_351_;
goto v___jp_331_;
}
}
else
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
lean_del_object(v___x_360_);
lean_dec(v_a_358_);
lean_dec(v_a_355_);
lean_dec_ref(v___x_352_);
lean_dec(v_a_330_);
lean_dec_ref(v___x_318_);
lean_dec(v_mvarId_316_);
v_a_377_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v___x_362_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_362_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_a_377_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_404_; 
lean_del_object(v___x_327_);
lean_dec_ref(v___x_318_);
lean_dec(v_mvarId_316_);
v_a_397_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_404_ == 0)
{
v___x_399_ = v___x_329_;
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_a_397_);
lean_dec(v___x_329_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v___x_402_; 
if (v_isShared_400_ == 0)
{
v___x_402_ = v___x_399_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_a_397_);
v___x_402_ = v_reuseFailAlloc_403_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
return v___x_402_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_318_);
lean_dec(v_mvarId_316_);
return v___x_325_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_refl___lam__0___boxed(lean_object* v_mvarId_407_, lean_object* v___x_408_, lean_object* v___x_409_, lean_object* v_check_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_){
_start:
{
uint8_t v_check_boxed_416_; lean_object* v_res_417_; 
v_check_boxed_416_ = lean_unbox(v_check_410_);
v_res_417_ = l_Lean_MVarId_refl___lam__0(v_mvarId_407_, v___x_408_, v___x_409_, v_check_boxed_416_, v___y_411_, v___y_412_, v___y_413_, v___y_414_);
lean_dec(v___y_414_);
lean_dec_ref(v___y_413_);
lean_dec(v___y_412_);
lean_dec_ref(v___y_411_);
return v_res_417_;
}
}
static lean_object* _init_l_Lean_MVarId_refl___closed__0(void){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = lean_mk_string_unchecked("refl", 4, 4);
return v___x_418_;
}
}
static lean_object* _init_l_Lean_MVarId_refl___closed__1(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = lean_obj_once(&l_Lean_MVarId_refl___closed__0, &l_Lean_MVarId_refl___closed__0_once, _init_l_Lean_MVarId_refl___closed__0);
v___x_420_ = l_Lean_Name_mkStr1(v___x_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_refl(lean_object* v_mvarId_421_, uint8_t v_check_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___f_431_; lean_object* v___x_432_; 
v___x_428_ = lean_obj_once(&l_Lean_MVarId_refl___closed__0, &l_Lean_MVarId_refl___closed__0_once, _init_l_Lean_MVarId_refl___closed__0);
v___x_429_ = lean_obj_once(&l_Lean_MVarId_refl___closed__1, &l_Lean_MVarId_refl___closed__1_once, _init_l_Lean_MVarId_refl___closed__1);
v___x_430_ = lean_box(v_check_422_);
lean_inc(v_mvarId_421_);
v___f_431_ = lean_alloc_closure((void*)(l_Lean_MVarId_refl___lam__0___boxed), 9, 4);
lean_closure_set(v___f_431_, 0, v_mvarId_421_);
lean_closure_set(v___f_431_, 1, v___x_429_);
lean_closure_set(v___f_431_, 2, v___x_428_);
lean_closure_set(v___f_431_, 3, v___x_430_);
v___x_432_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg(v_mvarId_421_, v___f_431_, v_a_423_, v_a_424_, v_a_425_, v_a_426_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_refl___boxed(lean_object* v_mvarId_433_, lean_object* v_check_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_){
_start:
{
uint8_t v_check_boxed_440_; lean_object* v_res_441_; 
v_check_boxed_440_ = lean_unbox(v_check_434_);
v_res_441_ = l_Lean_MVarId_refl(v_mvarId_433_, v_check_boxed_440_, v_a_435_, v_a_436_, v_a_437_, v_a_438_);
lean_dec(v_a_438_);
lean_dec_ref(v_a_437_);
lean_dec(v_a_436_);
lean_dec_ref(v_a_435_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1(lean_object* v_mvarId_442_, lean_object* v_val_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
lean_object* v___x_449_; 
v___x_449_ = l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___redArg(v_mvarId_442_, v_val_443_, v___y_445_, v___y_447_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___boxed(lean_object* v_mvarId_450_, lean_object* v_val_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1(v_mvarId_450_, v_val_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_);
lean_dec(v___y_455_);
lean_dec_ref(v___y_454_);
lean_dec(v___y_453_);
lean_dec_ref(v___y_452_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1(lean_object* v_00_u03b2_458_, lean_object* v_x_459_, lean_object* v_x_460_, lean_object* v_x_461_){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1___redArg(v_x_459_, v_x_460_, v_x_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_463_, lean_object* v_x_464_, size_t v_x_465_, size_t v_x_466_, lean_object* v_x_467_, lean_object* v_x_468_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg(v_x_464_, v_x_465_, v_x_466_, v_x_467_, v_x_468_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_470_, lean_object* v_x_471_, lean_object* v_x_472_, lean_object* v_x_473_, lean_object* v_x_474_, lean_object* v_x_475_){
_start:
{
size_t v_x_3150__boxed_476_; size_t v_x_3151__boxed_477_; lean_object* v_res_478_; 
v_x_3150__boxed_476_ = lean_unbox_usize(v_x_472_);
lean_dec(v_x_472_);
v_x_3151__boxed_477_ = lean_unbox_usize(v_x_473_);
lean_dec(v_x_473_);
v_res_478_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3(v_00_u03b2_470_, v_x_471_, v_x_3150__boxed_476_, v_x_3151__boxed_477_, v_x_474_, v_x_475_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_479_, lean_object* v_n_480_, lean_object* v_k_481_, lean_object* v_v_482_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4___redArg(v_n_480_, v_k_481_, v_v_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_484_, size_t v_depth_485_, lean_object* v_keys_486_, lean_object* v_vals_487_, lean_object* v_heq_488_, lean_object* v_i_489_, lean_object* v_entries_490_){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___redArg(v_depth_485_, v_keys_486_, v_vals_487_, v_i_489_, v_entries_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___boxed(lean_object* v_00_u03b2_492_, lean_object* v_depth_493_, lean_object* v_keys_494_, lean_object* v_vals_495_, lean_object* v_heq_496_, lean_object* v_i_497_, lean_object* v_entries_498_){
_start:
{
size_t v_depth_boxed_499_; lean_object* v_res_500_; 
v_depth_boxed_499_ = lean_unbox_usize(v_depth_493_);
lean_dec(v_depth_493_);
v_res_500_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5(v_00_u03b2_492_, v_depth_boxed_499_, v_keys_494_, v_vals_495_, v_heq_496_, v_i_497_, v_entries_498_);
lean_dec_ref(v_vals_495_);
lean_dec_ref(v_keys_494_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_501_, lean_object* v_x_502_, lean_object* v_x_503_, lean_object* v_x_504_, lean_object* v_x_505_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(v_x_502_, v_x_503_, v_x_504_, v_x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___redArg(lean_object* v_x_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = l_Lean_Meta_saveState___redArg(v___y_509_, v___y_511_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v_a_514_; lean_object* v___x_515_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
lean_inc(v_a_514_);
lean_dec_ref(v___x_513_);
lean_inc(v___y_511_);
lean_inc_ref(v___y_510_);
lean_inc(v___y_509_);
lean_inc_ref(v___y_508_);
v___x_515_ = lean_apply_5(v_x_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, lean_box(0));
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_524_; 
lean_dec(v_a_514_);
v_a_516_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_524_ == 0)
{
v___x_518_ = v___x_515_;
v_isShared_519_ = v_isSharedCheck_524_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_515_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_524_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_520_; lean_object* v___x_522_; 
v___x_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_520_, 0, v_a_516_);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 0, v___x_520_);
v___x_522_ = v___x_518_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v___x_520_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
}
else
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_554_; 
v_a_525_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_554_ == 0)
{
v___x_527_ = v___x_515_;
v_isShared_528_ = v_isSharedCheck_554_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___x_515_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_554_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
uint8_t v___y_530_; uint8_t v___x_552_; 
v___x_552_ = l_Lean_Exception_isInterrupt(v_a_525_);
if (v___x_552_ == 0)
{
uint8_t v___x_553_; 
lean_inc(v_a_525_);
v___x_553_ = l_Lean_Exception_isRuntime(v_a_525_);
v___y_530_ = v___x_553_;
goto v___jp_529_;
}
else
{
v___y_530_ = v___x_552_;
goto v___jp_529_;
}
v___jp_529_:
{
if (v___y_530_ == 0)
{
lean_object* v___x_531_; 
lean_del_object(v___x_527_);
lean_dec(v_a_525_);
v___x_531_ = l_Lean_Meta_SavedState_restore___redArg(v_a_514_, v___y_509_, v___y_511_);
lean_dec(v_a_514_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_539_; 
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_539_ == 0)
{
lean_object* v_unused_540_; 
v_unused_540_ = lean_ctor_get(v___x_531_, 0);
lean_dec(v_unused_540_);
v___x_533_ = v___x_531_;
v_isShared_534_ = v_isSharedCheck_539_;
goto v_resetjp_532_;
}
else
{
lean_dec(v___x_531_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_539_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_535_; lean_object* v___x_537_; 
v___x_535_ = lean_box(0);
if (v_isShared_534_ == 0)
{
lean_ctor_set(v___x_533_, 0, v___x_535_);
v___x_537_ = v___x_533_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v___x_535_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
else
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
v_a_541_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_531_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_531_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
else
{
lean_object* v___x_550_; 
lean_dec(v_a_514_);
if (v_isShared_528_ == 0)
{
v___x_550_ = v___x_527_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_a_525_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
return v___x_550_;
}
}
}
}
}
}
else
{
lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_562_; 
lean_dec_ref(v_x_507_);
v_a_555_ = lean_ctor_get(v___x_513_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_513_);
if (v_isSharedCheck_562_ == 0)
{
v___x_557_ = v___x_513_;
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_513_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_560_; 
if (v_isShared_558_ == 0)
{
v___x_560_ = v___x_557_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v_a_555_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___redArg___boxed(lean_object* v_x_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___redArg(v_x_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0(lean_object* v_00_u03b1_570_, lean_object* v_x_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_){
_start:
{
lean_object* v___x_577_; 
v___x_577_ = l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___redArg(v_x_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___boxed(lean_object* v_00_u03b1_578_, lean_object* v_x_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0(v_00_u03b1_578_, v_x_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_);
lean_dec(v___y_583_);
lean_dec_ref(v___y_582_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
return v_res_585_;
}
}
static lean_object* _init_l_Lean_MVarId_heqOfEq___lam__0___closed__0(void){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = lean_mk_string_unchecked("heq_of_eq", 9, 9);
return v___x_586_;
}
}
static lean_object* _init_l_Lean_MVarId_heqOfEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = lean_obj_once(&l_Lean_MVarId_heqOfEq___lam__0___closed__0, &l_Lean_MVarId_heqOfEq___lam__0___closed__0_once, _init_l_Lean_MVarId_heqOfEq___lam__0___closed__0);
v___x_588_ = l_Lean_Name_mkStr1(v___x_587_);
return v___x_588_;
}
}
static lean_object* _init_l_Lean_MVarId_heqOfEq___lam__0___closed__2(void){
_start:
{
uint8_t v___x_589_; uint8_t v___x_590_; uint8_t v___x_591_; lean_object* v___x_592_; 
v___x_589_ = 0;
v___x_590_ = 1;
v___x_591_ = 0;
v___x_592_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_592_, 0, v___x_591_);
lean_ctor_set_uint8(v___x_592_, 1, v___x_590_);
lean_ctor_set_uint8(v___x_592_, 2, v___x_589_);
lean_ctor_set_uint8(v___x_592_, 3, v___x_590_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___lam__0(lean_object* v_mvarId_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = l_Lean_Meta_mkFreshLevelMVar(v___y_594_, v___y_595_, v___y_596_, v___y_597_);
if (lean_obj_tag(v___x_599_) == 0)
{
lean_object* v_a_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v_a_600_ = lean_ctor_get(v___x_599_, 0);
lean_inc(v_a_600_);
lean_dec_ref(v___x_599_);
v___x_601_ = lean_obj_once(&l_Lean_MVarId_heqOfEq___lam__0___closed__1, &l_Lean_MVarId_heqOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_heqOfEq___lam__0___closed__1);
v___x_602_ = lean_box(0);
v___x_603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_603_, 0, v_a_600_);
lean_ctor_set(v___x_603_, 1, v___x_602_);
v___x_604_ = l_Lean_mkConst(v___x_601_, v___x_603_);
v___x_605_ = lean_obj_once(&l_Lean_MVarId_heqOfEq___lam__0___closed__2, &l_Lean_MVarId_heqOfEq___lam__0___closed__2_once, _init_l_Lean_MVarId_heqOfEq___lam__0___closed__2);
v___x_606_ = lean_box(0);
v___x_607_ = l_Lean_MVarId_apply(v_mvarId_593_, v___x_604_, v___x_605_, v___x_606_, v___y_594_, v___y_595_, v___y_596_, v___y_597_);
return v___x_607_;
}
else
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_615_; 
lean_dec(v_mvarId_593_);
v_a_608_ = lean_ctor_get(v___x_599_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_599_);
if (v_isSharedCheck_615_ == 0)
{
v___x_610_ = v___x_599_;
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v___x_599_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_613_; 
if (v_isShared_611_ == 0)
{
v___x_613_ = v___x_610_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_a_608_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___lam__0___boxed(lean_object* v_mvarId_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l_Lean_MVarId_heqOfEq___lam__0(v_mvarId_616_, v___y_617_, v___y_618_, v___y_619_, v___y_620_);
lean_dec(v___y_620_);
lean_dec_ref(v___y_619_);
lean_dec(v___y_618_);
lean_dec_ref(v___y_617_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___lam__1(lean_object* v___f_623_, lean_object* v_mvarId_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_){
_start:
{
lean_object* v___x_630_; 
v___x_630_ = l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___redArg(v___f_623_, v___y_625_, v___y_626_, v___y_627_, v___y_628_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_650_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_650_ == 0)
{
v___x_633_ = v___x_630_;
v_isShared_634_ = v_isSharedCheck_650_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_a_631_);
lean_dec(v___x_630_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_650_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
if (lean_obj_tag(v_a_631_) == 1)
{
lean_object* v_val_635_; 
v_val_635_ = lean_ctor_get(v_a_631_, 0);
lean_inc(v_val_635_);
lean_dec_ref(v_a_631_);
if (lean_obj_tag(v_val_635_) == 1)
{
lean_object* v_tail_636_; 
v_tail_636_ = lean_ctor_get(v_val_635_, 1);
if (lean_obj_tag(v_tail_636_) == 0)
{
lean_object* v_head_637_; lean_object* v___x_639_; 
lean_dec(v_mvarId_624_);
v_head_637_ = lean_ctor_get(v_val_635_, 0);
lean_inc(v_head_637_);
lean_dec_ref(v_val_635_);
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 0, v_head_637_);
v___x_639_ = v___x_633_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_head_637_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
else
{
lean_object* v___x_642_; 
lean_dec_ref(v_val_635_);
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 0, v_mvarId_624_);
v___x_642_ = v___x_633_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_mvarId_624_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
else
{
lean_object* v___x_645_; 
lean_dec(v_val_635_);
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 0, v_mvarId_624_);
v___x_645_ = v___x_633_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_mvarId_624_);
v___x_645_ = v_reuseFailAlloc_646_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
return v___x_645_;
}
}
}
else
{
lean_object* v___x_648_; 
lean_dec(v_a_631_);
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 0, v_mvarId_624_);
v___x_648_ = v___x_633_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_mvarId_624_);
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
else
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_658_; 
lean_dec(v_mvarId_624_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___lam__1___boxed(lean_object* v___f_659_, lean_object* v_mvarId_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l_Lean_MVarId_heqOfEq___lam__1(v___f_659_, v_mvarId_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_);
lean_dec(v___y_664_);
lean_dec_ref(v___y_663_);
lean_dec(v___y_662_);
lean_dec_ref(v___y_661_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq(lean_object* v_mvarId_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_){
_start:
{
lean_object* v___f_673_; lean_object* v___f_674_; lean_object* v___x_675_; 
lean_inc_n(v_mvarId_667_, 2);
v___f_673_ = lean_alloc_closure((void*)(l_Lean_MVarId_heqOfEq___lam__0___boxed), 6, 1);
lean_closure_set(v___f_673_, 0, v_mvarId_667_);
v___f_674_ = lean_alloc_closure((void*)(l_Lean_MVarId_heqOfEq___lam__1___boxed), 7, 2);
lean_closure_set(v___f_674_, 0, v___f_673_);
lean_closure_set(v___f_674_, 1, v_mvarId_667_);
v___x_675_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg(v_mvarId_667_, v___f_674_, v_a_668_, v_a_669_, v_a_670_, v_a_671_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___boxed(lean_object* v_mvarId_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_Lean_MVarId_heqOfEq(v_mvarId_676_, v_a_677_, v_a_678_, v_a_679_, v_a_680_);
lean_dec(v_a_680_);
lean_dec_ref(v_a_679_);
lean_dec(v_a_678_);
lean_dec_ref(v_a_677_);
return v_res_682_;
}
}
static lean_object* _init_l_Lean_MVarId_eqOfHEq___lam__0___closed__0(void){
_start:
{
lean_object* v___x_683_; 
v___x_683_ = lean_mk_string_unchecked("eq_of_heq", 9, 9);
return v___x_683_;
}
}
static lean_object* _init_l_Lean_MVarId_eqOfHEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_684_ = lean_obj_once(&l_Lean_MVarId_eqOfHEq___lam__0___closed__0, &l_Lean_MVarId_eqOfHEq___lam__0___closed__0_once, _init_l_Lean_MVarId_eqOfHEq___lam__0___closed__0);
v___x_685_ = l_Lean_Name_mkStr1(v___x_684_);
return v___x_685_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq___lam__0(lean_object* v_mvarId_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_){
_start:
{
lean_object* v___x_692_; 
v___x_692_ = l_Lean_Meta_mkFreshLevelMVar(v___y_687_, v___y_688_, v___y_689_, v___y_690_);
if (lean_obj_tag(v___x_692_) == 0)
{
lean_object* v_a_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v_a_693_ = lean_ctor_get(v___x_692_, 0);
lean_inc(v_a_693_);
lean_dec_ref(v___x_692_);
v___x_694_ = lean_obj_once(&l_Lean_MVarId_eqOfHEq___lam__0___closed__1, &l_Lean_MVarId_eqOfHEq___lam__0___closed__1_once, _init_l_Lean_MVarId_eqOfHEq___lam__0___closed__1);
v___x_695_ = lean_box(0);
v___x_696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_696_, 0, v_a_693_);
lean_ctor_set(v___x_696_, 1, v___x_695_);
v___x_697_ = l_Lean_mkConst(v___x_694_, v___x_696_);
v___x_698_ = lean_obj_once(&l_Lean_MVarId_heqOfEq___lam__0___closed__2, &l_Lean_MVarId_heqOfEq___lam__0___closed__2_once, _init_l_Lean_MVarId_heqOfEq___lam__0___closed__2);
v___x_699_ = lean_box(0);
v___x_700_ = l_Lean_MVarId_apply(v_mvarId_686_, v___x_697_, v___x_698_, v___x_699_, v___y_687_, v___y_688_, v___y_689_, v___y_690_);
return v___x_700_;
}
else
{
lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_708_; 
lean_dec(v_mvarId_686_);
v_a_701_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_708_ == 0)
{
v___x_703_ = v___x_692_;
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_692_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_706_; 
if (v_isShared_704_ == 0)
{
v___x_706_ = v___x_703_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_a_701_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq___lam__0___boxed(lean_object* v_mvarId_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_){
_start:
{
lean_object* v_res_715_; 
v_res_715_ = l_Lean_MVarId_eqOfHEq___lam__0(v_mvarId_709_, v___y_710_, v___y_711_, v___y_712_, v___y_713_);
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq___lam__1(lean_object* v___f_716_, lean_object* v_mvarId_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_){
_start:
{
lean_object* v___x_723_; 
v___x_723_ = l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___redArg(v___f_716_, v___y_718_, v___y_719_, v___y_720_, v___y_721_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_743_; 
v_a_724_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_743_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_743_ == 0)
{
v___x_726_ = v___x_723_;
v_isShared_727_ = v_isSharedCheck_743_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_a_724_);
lean_dec(v___x_723_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_743_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
if (lean_obj_tag(v_a_724_) == 1)
{
lean_object* v_val_728_; 
v_val_728_ = lean_ctor_get(v_a_724_, 0);
lean_inc(v_val_728_);
lean_dec_ref(v_a_724_);
if (lean_obj_tag(v_val_728_) == 1)
{
lean_object* v_tail_729_; 
v_tail_729_ = lean_ctor_get(v_val_728_, 1);
if (lean_obj_tag(v_tail_729_) == 0)
{
lean_object* v_head_730_; lean_object* v___x_732_; 
lean_dec(v_mvarId_717_);
v_head_730_ = lean_ctor_get(v_val_728_, 0);
lean_inc(v_head_730_);
lean_dec_ref(v_val_728_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 0, v_head_730_);
v___x_732_ = v___x_726_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_head_730_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
else
{
lean_object* v___x_735_; 
lean_dec_ref(v_val_728_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 0, v_mvarId_717_);
v___x_735_ = v___x_726_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_mvarId_717_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
else
{
lean_object* v___x_738_; 
lean_dec(v_val_728_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 0, v_mvarId_717_);
v___x_738_ = v___x_726_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_mvarId_717_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
else
{
lean_object* v___x_741_; 
lean_dec(v_a_724_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 0, v_mvarId_717_);
v___x_741_ = v___x_726_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_mvarId_717_);
v___x_741_ = v_reuseFailAlloc_742_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
return v___x_741_;
}
}
}
}
else
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_751_; 
lean_dec(v_mvarId_717_);
v_a_744_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_751_ == 0)
{
v___x_746_ = v___x_723_;
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v___x_723_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_749_; 
if (v_isShared_747_ == 0)
{
v___x_749_ = v___x_746_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_a_744_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq___lam__1___boxed(lean_object* v___f_752_, lean_object* v_mvarId_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_){
_start:
{
lean_object* v_res_759_; 
v_res_759_ = l_Lean_MVarId_eqOfHEq___lam__1(v___f_752_, v_mvarId_753_, v___y_754_, v___y_755_, v___y_756_, v___y_757_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq(lean_object* v_mvarId_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_, lean_object* v_a_764_){
_start:
{
lean_object* v___f_766_; lean_object* v___f_767_; lean_object* v___x_768_; 
lean_inc_n(v_mvarId_760_, 2);
v___f_766_ = lean_alloc_closure((void*)(l_Lean_MVarId_eqOfHEq___lam__0___boxed), 6, 1);
lean_closure_set(v___f_766_, 0, v_mvarId_760_);
v___f_767_ = lean_alloc_closure((void*)(l_Lean_MVarId_eqOfHEq___lam__1___boxed), 7, 2);
lean_closure_set(v___f_767_, 0, v___f_766_);
lean_closure_set(v___f_767_, 1, v_mvarId_760_);
v___x_768_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg(v_mvarId_760_, v___f_767_, v_a_761_, v_a_762_, v_a_763_, v_a_764_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq___boxed(lean_object* v_mvarId_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = l_Lean_MVarId_eqOfHEq(v_mvarId_769_, v_a_770_, v_a_771_, v_a_772_, v_a_773_);
lean_dec(v_a_773_);
lean_dec_ref(v_a_772_);
lean_dec(v_a_771_);
lean_dec_ref(v_a_770_);
return v_res_775_;
}
}
static lean_object* _init_l_Lean_MVarId_hrefl___lam__0___closed__0(void){
_start:
{
lean_object* v___x_776_; 
v___x_776_ = lean_mk_string_unchecked("HEq", 3, 3);
return v___x_776_;
}
}
static lean_object* _init_l_Lean_MVarId_hrefl___lam__0___closed__1(void){
_start:
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_777_ = lean_obj_once(&l_Lean_MVarId_refl___closed__0, &l_Lean_MVarId_refl___closed__0_once, _init_l_Lean_MVarId_refl___closed__0);
v___x_778_ = lean_obj_once(&l_Lean_MVarId_hrefl___lam__0___closed__0, &l_Lean_MVarId_hrefl___lam__0___closed__0_once, _init_l_Lean_MVarId_hrefl___lam__0___closed__0);
v___x_779_ = l_Lean_Name_mkStr2(v___x_778_, v___x_777_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___lam__0(lean_object* v_mvarId_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
lean_object* v___x_786_; 
v___x_786_ = l_Lean_Meta_mkFreshLevelMVar(v___y_781_, v___y_782_, v___y_783_, v___y_784_);
if (lean_obj_tag(v___x_786_) == 0)
{
lean_object* v_a_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
v_a_787_ = lean_ctor_get(v___x_786_, 0);
lean_inc(v_a_787_);
lean_dec_ref(v___x_786_);
v___x_788_ = lean_obj_once(&l_Lean_MVarId_hrefl___lam__0___closed__1, &l_Lean_MVarId_hrefl___lam__0___closed__1_once, _init_l_Lean_MVarId_hrefl___lam__0___closed__1);
v___x_789_ = lean_box(0);
v___x_790_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_790_, 0, v_a_787_);
lean_ctor_set(v___x_790_, 1, v___x_789_);
v___x_791_ = l_Lean_mkConst(v___x_788_, v___x_790_);
v___x_792_ = lean_obj_once(&l_Lean_MVarId_heqOfEq___lam__0___closed__2, &l_Lean_MVarId_heqOfEq___lam__0___closed__2_once, _init_l_Lean_MVarId_heqOfEq___lam__0___closed__2);
v___x_793_ = lean_box(0);
v___x_794_ = l_Lean_MVarId_apply(v_mvarId_780_, v___x_791_, v___x_792_, v___x_793_, v___y_781_, v___y_782_, v___y_783_, v___y_784_);
return v___x_794_;
}
else
{
lean_object* v_a_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_802_; 
lean_dec(v_mvarId_780_);
v_a_795_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_802_ == 0)
{
v___x_797_ = v___x_786_;
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_a_795_);
lean_dec(v___x_786_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_795_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___lam__0___boxed(lean_object* v_mvarId_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_){
_start:
{
lean_object* v_res_809_; 
v_res_809_ = l_Lean_MVarId_hrefl___lam__0(v_mvarId_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_);
lean_dec(v___y_807_);
lean_dec_ref(v___y_806_);
lean_dec(v___y_805_);
lean_dec_ref(v___y_804_);
return v_res_809_;
}
}
static lean_object* _init_l_Lean_MVarId_hrefl___lam__1___closed__0(void){
_start:
{
lean_object* v___x_810_; 
v___x_810_ = lean_mk_string_unchecked("hrefl", 5, 5);
return v___x_810_;
}
}
static lean_object* _init_l_Lean_MVarId_hrefl___lam__1___closed__1(void){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_811_ = lean_obj_once(&l_Lean_MVarId_hrefl___lam__1___closed__0, &l_Lean_MVarId_hrefl___lam__1___closed__0_once, _init_l_Lean_MVarId_hrefl___lam__1___closed__0);
v___x_812_ = l_Lean_Name_mkStr1(v___x_811_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___lam__1(lean_object* v___f_813_, lean_object* v_mvarId_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_){
_start:
{
lean_object* v___x_820_; 
v___x_820_ = l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___redArg(v___f_813_, v___y_815_, v___y_816_, v___y_817_, v___y_818_);
if (lean_obj_tag(v___x_820_) == 0)
{
lean_object* v_a_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_838_; 
v_a_821_ = lean_ctor_get(v___x_820_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_820_);
if (v_isSharedCheck_838_ == 0)
{
v___x_823_ = v___x_820_;
v_isShared_824_ = v_isSharedCheck_838_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_a_821_);
lean_dec(v___x_820_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_838_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___y_826_; lean_object* v___y_827_; lean_object* v___y_828_; lean_object* v___y_829_; 
if (lean_obj_tag(v_a_821_) == 1)
{
lean_object* v_val_833_; 
v_val_833_ = lean_ctor_get(v_a_821_, 0);
lean_inc(v_val_833_);
lean_dec_ref(v_a_821_);
if (lean_obj_tag(v_val_833_) == 0)
{
lean_object* v___x_834_; lean_object* v___x_836_; 
lean_dec(v_mvarId_814_);
v___x_834_ = lean_box(0);
if (v_isShared_824_ == 0)
{
lean_ctor_set(v___x_823_, 0, v___x_834_);
v___x_836_ = v___x_823_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v___x_834_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
else
{
lean_dec(v_val_833_);
lean_del_object(v___x_823_);
v___y_826_ = v___y_815_;
v___y_827_ = v___y_816_;
v___y_828_ = v___y_817_;
v___y_829_ = v___y_818_;
goto v___jp_825_;
}
}
else
{
lean_del_object(v___x_823_);
lean_dec(v_a_821_);
v___y_826_ = v___y_815_;
v___y_827_ = v___y_816_;
v___y_828_ = v___y_817_;
v___y_829_ = v___y_818_;
goto v___jp_825_;
}
v___jp_825_:
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_830_ = lean_obj_once(&l_Lean_MVarId_hrefl___lam__1___closed__1, &l_Lean_MVarId_hrefl___lam__1___closed__1_once, _init_l_Lean_MVarId_hrefl___lam__1___closed__1);
v___x_831_ = lean_box(0);
v___x_832_ = l_Lean_Meta_throwTacticEx___redArg(v___x_830_, v_mvarId_814_, v___x_831_, v___y_826_, v___y_827_, v___y_828_, v___y_829_);
return v___x_832_;
}
}
}
else
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
lean_dec(v_mvarId_814_);
v_a_839_ = lean_ctor_get(v___x_820_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_820_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_820_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_820_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___lam__1___boxed(lean_object* v___f_847_, lean_object* v_mvarId_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = l_Lean_MVarId_hrefl___lam__1(v___f_847_, v_mvarId_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_);
lean_dec(v___y_852_);
lean_dec_ref(v___y_851_);
lean_dec(v___y_850_);
lean_dec_ref(v___y_849_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl(lean_object* v_mvarId_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_){
_start:
{
lean_object* v___f_861_; lean_object* v___f_862_; lean_object* v___x_863_; 
lean_inc_n(v_mvarId_855_, 2);
v___f_861_ = lean_alloc_closure((void*)(l_Lean_MVarId_hrefl___lam__0___boxed), 6, 1);
lean_closure_set(v___f_861_, 0, v_mvarId_855_);
v___f_862_ = lean_alloc_closure((void*)(l_Lean_MVarId_hrefl___lam__1___boxed), 7, 2);
lean_closure_set(v___f_862_, 0, v___f_861_);
lean_closure_set(v___f_862_, 1, v_mvarId_855_);
v___x_863_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg(v_mvarId_855_, v___f_862_, v_a_856_, v_a_857_, v_a_858_, v_a_859_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___boxed(lean_object* v_mvarId_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_){
_start:
{
lean_object* v_res_870_; 
v_res_870_ = l_Lean_MVarId_hrefl(v_mvarId_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_);
lean_dec(v_a_868_);
lean_dec_ref(v_a_867_);
lean_dec(v_a_866_);
lean_dec_ref(v_a_865_);
return v_res_870_;
}
}
lean_object* runtime_initialize_Lean_Meta_Reduce(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Reduce(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Reduce(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Reduce(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Refl(builtin);
}
#ifdef __cplusplus
}
#endif
