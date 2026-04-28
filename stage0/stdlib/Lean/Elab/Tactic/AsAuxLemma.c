// Lean compiler output
// Module: Lean.Elab.Tactic.AsAuxLemma
// Imports: public import Lean.Elab.Tactic.Meta
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
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxTheorem(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00elabAsAuxLemma_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00elabAsAuxLemma_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00elabAsAuxLemma_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00elabAsAuxLemma_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00elabAsAuxLemma_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00elabAsAuxLemma_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00elabAsAuxLemma_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00elabAsAuxLemma_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_elabAsAuxLemma___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabAsAuxLemma___lam__0___closed__0;
static lean_once_cell_t l_elabAsAuxLemma___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabAsAuxLemma___lam__0___closed__1;
LEAN_EXPORT lean_object* l_elabAsAuxLemma___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_elabAsAuxLemma___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_elabAsAuxLemma___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabAsAuxLemma___closed__0;
static lean_once_cell_t l_elabAsAuxLemma___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabAsAuxLemma___closed__1;
static lean_once_cell_t l_elabAsAuxLemma___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabAsAuxLemma___closed__2;
static lean_once_cell_t l_elabAsAuxLemma___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabAsAuxLemma___closed__3;
static lean_once_cell_t l_elabAsAuxLemma___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabAsAuxLemma___closed__4;
static lean_once_cell_t l_elabAsAuxLemma___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabAsAuxLemma___closed__5;
static lean_once_cell_t l_elabAsAuxLemma___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_elabAsAuxLemma___closed__6;
LEAN_EXPORT lean_object* l_elabAsAuxLemma(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_elabAsAuxLemma___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00elabAsAuxLemma_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00elabAsAuxLemma_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00elabAsAuxLemma_spec__1___redArg(lean_object* v_e_1_, lean_object* v___y_2_, lean_object* v___y_3_){
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00elabAsAuxLemma_spec__1___redArg___boxed(lean_object* v_e_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_instantiateMVars___at___00elabAsAuxLemma_spec__1___redArg(v_e_29_, v___y_30_, v___y_31_);
lean_dec(v___y_31_);
lean_dec(v___y_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00elabAsAuxLemma_spec__1(lean_object* v_e_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lean_instantiateMVars___at___00elabAsAuxLemma_spec__1___redArg(v_e_34_, v___y_40_, v___y_42_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00elabAsAuxLemma_spec__1___boxed(lean_object* v_e_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lean_instantiateMVars___at___00elabAsAuxLemma_spec__1(v_e_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
lean_dec(v___y_49_);
lean_dec_ref(v___y_48_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00elabAsAuxLemma_spec__0_spec__0(lean_object* v_msgData_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_){
_start:
{
lean_object* v___x_62_; lean_object* v_env_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v_mctx_66_; lean_object* v_lctx_67_; lean_object* v_options_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_62_ = lean_st_ref_get(v___y_60_);
v_env_63_ = lean_ctor_get(v___x_62_, 0);
lean_inc_ref(v_env_63_);
lean_dec(v___x_62_);
v___x_64_ = lean_st_ref_get(v___y_60_);
lean_dec(v___x_64_);
v___x_65_ = lean_st_ref_get(v___y_58_);
v_mctx_66_ = lean_ctor_get(v___x_65_, 0);
lean_inc_ref(v_mctx_66_);
lean_dec(v___x_65_);
v_lctx_67_ = lean_ctor_get(v___y_57_, 2);
v_options_68_ = lean_ctor_get(v___y_59_, 2);
lean_inc_ref(v_options_68_);
lean_inc_ref(v_lctx_67_);
v___x_69_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_69_, 0, v_env_63_);
lean_ctor_set(v___x_69_, 1, v_mctx_66_);
lean_ctor_set(v___x_69_, 2, v_lctx_67_);
lean_ctor_set(v___x_69_, 3, v_options_68_);
v___x_70_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v_msgData_56_);
v___x_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00elabAsAuxLemma_spec__0_spec__0___boxed(lean_object* v_msgData_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00elabAsAuxLemma_spec__0_spec__0(v_msgData_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_);
lean_dec(v___y_76_);
lean_dec_ref(v___y_75_);
lean_dec(v___y_74_);
lean_dec_ref(v___y_73_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00elabAsAuxLemma_spec__0___redArg(lean_object* v_msg_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v_ref_85_; lean_object* v___x_86_; lean_object* v_a_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_95_; 
v_ref_85_ = lean_ctor_get(v___y_82_, 5);
v___x_86_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00elabAsAuxLemma_spec__0_spec__0(v_msg_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
v_a_87_ = lean_ctor_get(v___x_86_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_86_);
if (v_isSharedCheck_95_ == 0)
{
v___x_89_ = v___x_86_;
v_isShared_90_ = v_isSharedCheck_95_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_a_87_);
lean_dec(v___x_86_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_95_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_91_; lean_object* v___x_93_; 
lean_inc(v_ref_85_);
v___x_91_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_91_, 0, v_ref_85_);
lean_ctor_set(v___x_91_, 1, v_a_87_);
if (v_isShared_90_ == 0)
{
lean_ctor_set_tag(v___x_89_, 1);
lean_ctor_set(v___x_89_, 0, v___x_91_);
v___x_93_ = v___x_89_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v___x_91_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00elabAsAuxLemma_spec__0___redArg___boxed(lean_object* v_msg_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_throwError___at___00elabAsAuxLemma_spec__0___redArg(v_msg_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(lean_object* v_x_103_, lean_object* v_x_104_, lean_object* v_x_105_, lean_object* v_x_106_){
_start:
{
lean_object* v_ks_107_; lean_object* v_vs_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_132_; 
v_ks_107_ = lean_ctor_get(v_x_103_, 0);
v_vs_108_ = lean_ctor_get(v_x_103_, 1);
v_isSharedCheck_132_ = !lean_is_exclusive(v_x_103_);
if (v_isSharedCheck_132_ == 0)
{
v___x_110_ = v_x_103_;
v_isShared_111_ = v_isSharedCheck_132_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_vs_108_);
lean_inc(v_ks_107_);
lean_dec(v_x_103_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_132_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_112_; uint8_t v___x_113_; 
v___x_112_ = lean_array_get_size(v_ks_107_);
v___x_113_ = lean_nat_dec_lt(v_x_104_, v___x_112_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_117_; 
lean_dec(v_x_104_);
v___x_114_ = lean_array_push(v_ks_107_, v_x_105_);
v___x_115_ = lean_array_push(v_vs_108_, v_x_106_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 1, v___x_115_);
lean_ctor_set(v___x_110_, 0, v___x_114_);
v___x_117_ = v___x_110_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v___x_114_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v___x_115_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
else
{
lean_object* v_k_x27_119_; uint8_t v___x_120_; 
v_k_x27_119_ = lean_array_fget_borrowed(v_ks_107_, v_x_104_);
v___x_120_ = l_Lean_instBEqMVarId_beq(v_x_105_, v_k_x27_119_);
if (v___x_120_ == 0)
{
lean_object* v___x_122_; 
if (v_isShared_111_ == 0)
{
v___x_122_ = v___x_110_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_ks_107_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v_vs_108_);
v___x_122_ = v_reuseFailAlloc_126_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = lean_unsigned_to_nat(1u);
v___x_124_ = lean_nat_add(v_x_104_, v___x_123_);
lean_dec(v_x_104_);
v_x_103_ = v___x_122_;
v_x_104_ = v___x_124_;
goto _start;
}
}
else
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_130_; 
v___x_127_ = lean_array_fset(v_ks_107_, v_x_104_, v_x_105_);
v___x_128_ = lean_array_fset(v_vs_108_, v_x_104_, v_x_106_);
lean_dec(v_x_104_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 1, v___x_128_);
lean_ctor_set(v___x_110_, 0, v___x_127_);
v___x_130_ = v___x_110_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v___x_127_);
lean_ctor_set(v_reuseFailAlloc_131_, 1, v___x_128_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5___redArg(lean_object* v_n_133_, lean_object* v_k_134_, lean_object* v_v_135_){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = lean_unsigned_to_nat(0u);
v___x_137_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(v_n_133_, v___x_136_, v_k_134_, v_v_135_);
return v___x_137_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__0(void){
_start:
{
size_t v___x_138_; size_t v___x_139_; size_t v___x_140_; 
v___x_138_ = ((size_t)5ULL);
v___x_139_ = ((size_t)1ULL);
v___x_140_ = lean_usize_shift_left(v___x_139_, v___x_138_);
return v___x_140_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_141_; size_t v___x_142_; size_t v___x_143_; 
v___x_141_ = ((size_t)1ULL);
v___x_142_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_143_ = lean_usize_sub(v___x_142_, v___x_141_);
return v___x_143_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg(lean_object* v_x_145_, size_t v_x_146_, size_t v_x_147_, lean_object* v_x_148_, lean_object* v_x_149_){
_start:
{
if (lean_obj_tag(v_x_145_) == 0)
{
lean_object* v_es_150_; size_t v___x_151_; size_t v___x_152_; size_t v___x_153_; size_t v___x_154_; lean_object* v_j_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
v_es_150_ = lean_ctor_get(v_x_145_, 0);
v___x_151_ = ((size_t)5ULL);
v___x_152_ = ((size_t)1ULL);
v___x_153_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_154_ = lean_usize_land(v_x_146_, v___x_153_);
v_j_155_ = lean_usize_to_nat(v___x_154_);
v___x_156_ = lean_array_get_size(v_es_150_);
v___x_157_ = lean_nat_dec_lt(v_j_155_, v___x_156_);
if (v___x_157_ == 0)
{
lean_dec(v_j_155_);
lean_dec(v_x_149_);
lean_dec(v_x_148_);
return v_x_145_;
}
else
{
lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_194_; 
lean_inc_ref(v_es_150_);
v_isSharedCheck_194_ = !lean_is_exclusive(v_x_145_);
if (v_isSharedCheck_194_ == 0)
{
lean_object* v_unused_195_; 
v_unused_195_ = lean_ctor_get(v_x_145_, 0);
lean_dec(v_unused_195_);
v___x_159_ = v_x_145_;
v_isShared_160_ = v_isSharedCheck_194_;
goto v_resetjp_158_;
}
else
{
lean_dec(v_x_145_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_194_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v_v_161_; lean_object* v___x_162_; lean_object* v_xs_x27_163_; lean_object* v___y_165_; 
v_v_161_ = lean_array_fget(v_es_150_, v_j_155_);
v___x_162_ = lean_box(0);
v_xs_x27_163_ = lean_array_fset(v_es_150_, v_j_155_, v___x_162_);
switch(lean_obj_tag(v_v_161_))
{
case 0:
{
lean_object* v_key_170_; lean_object* v_val_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_181_; 
v_key_170_ = lean_ctor_get(v_v_161_, 0);
v_val_171_ = lean_ctor_get(v_v_161_, 1);
v_isSharedCheck_181_ = !lean_is_exclusive(v_v_161_);
if (v_isSharedCheck_181_ == 0)
{
v___x_173_ = v_v_161_;
v_isShared_174_ = v_isSharedCheck_181_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_val_171_);
lean_inc(v_key_170_);
lean_dec(v_v_161_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_181_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
uint8_t v___x_175_; 
v___x_175_ = l_Lean_instBEqMVarId_beq(v_x_148_, v_key_170_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; lean_object* v___x_177_; 
lean_del_object(v___x_173_);
v___x_176_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_170_, v_val_171_, v_x_148_, v_x_149_);
v___x_177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
v___y_165_ = v___x_177_;
goto v___jp_164_;
}
else
{
lean_object* v___x_179_; 
lean_dec(v_val_171_);
lean_dec(v_key_170_);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 1, v_x_149_);
lean_ctor_set(v___x_173_, 0, v_x_148_);
v___x_179_ = v___x_173_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v_x_148_);
lean_ctor_set(v_reuseFailAlloc_180_, 1, v_x_149_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
v___y_165_ = v___x_179_;
goto v___jp_164_;
}
}
}
}
case 1:
{
lean_object* v_node_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_192_; 
v_node_182_ = lean_ctor_get(v_v_161_, 0);
v_isSharedCheck_192_ = !lean_is_exclusive(v_v_161_);
if (v_isSharedCheck_192_ == 0)
{
v___x_184_ = v_v_161_;
v_isShared_185_ = v_isSharedCheck_192_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_node_182_);
lean_dec(v_v_161_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_192_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
size_t v___x_186_; size_t v___x_187_; lean_object* v___x_188_; lean_object* v___x_190_; 
v___x_186_ = lean_usize_shift_right(v_x_146_, v___x_151_);
v___x_187_ = lean_usize_add(v_x_147_, v___x_152_);
v___x_188_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg(v_node_182_, v___x_186_, v___x_187_, v_x_148_, v_x_149_);
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 0, v___x_188_);
v___x_190_ = v___x_184_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v___x_188_);
v___x_190_ = v_reuseFailAlloc_191_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
v___y_165_ = v___x_190_;
goto v___jp_164_;
}
}
}
default: 
{
lean_object* v___x_193_; 
v___x_193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_193_, 0, v_x_148_);
lean_ctor_set(v___x_193_, 1, v_x_149_);
v___y_165_ = v___x_193_;
goto v___jp_164_;
}
}
v___jp_164_:
{
lean_object* v___x_166_; lean_object* v___x_168_; 
v___x_166_ = lean_array_fset(v_xs_x27_163_, v_j_155_, v___y_165_);
lean_dec(v_j_155_);
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 0, v___x_166_);
v___x_168_ = v___x_159_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_166_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
return v___x_168_;
}
}
}
}
}
else
{
lean_object* v_ks_196_; lean_object* v_vs_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_217_; 
v_ks_196_ = lean_ctor_get(v_x_145_, 0);
v_vs_197_ = lean_ctor_get(v_x_145_, 1);
v_isSharedCheck_217_ = !lean_is_exclusive(v_x_145_);
if (v_isSharedCheck_217_ == 0)
{
v___x_199_ = v_x_145_;
v_isShared_200_ = v_isSharedCheck_217_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_vs_197_);
lean_inc(v_ks_196_);
lean_dec(v_x_145_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_217_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_202_; 
if (v_isShared_200_ == 0)
{
v___x_202_ = v___x_199_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_ks_196_);
lean_ctor_set(v_reuseFailAlloc_216_, 1, v_vs_197_);
v___x_202_ = v_reuseFailAlloc_216_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
lean_object* v_newNode_203_; uint8_t v___y_205_; size_t v___x_211_; uint8_t v___x_212_; 
v_newNode_203_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5___redArg(v___x_202_, v_x_148_, v_x_149_);
v___x_211_ = ((size_t)7ULL);
v___x_212_ = lean_usize_dec_le(v___x_211_, v_x_147_);
if (v___x_212_ == 0)
{
lean_object* v___x_213_; lean_object* v___x_214_; uint8_t v___x_215_; 
v___x_213_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_203_);
v___x_214_ = lean_unsigned_to_nat(4u);
v___x_215_ = lean_nat_dec_lt(v___x_213_, v___x_214_);
lean_dec(v___x_213_);
v___y_205_ = v___x_215_;
goto v___jp_204_;
}
else
{
v___y_205_ = v___x_212_;
goto v___jp_204_;
}
v___jp_204_:
{
if (v___y_205_ == 0)
{
lean_object* v_ks_206_; lean_object* v_vs_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v_ks_206_ = lean_ctor_get(v_newNode_203_, 0);
lean_inc_ref(v_ks_206_);
v_vs_207_ = lean_ctor_get(v_newNode_203_, 1);
lean_inc_ref(v_vs_207_);
lean_dec_ref(v_newNode_203_);
v___x_208_ = lean_unsigned_to_nat(0u);
v___x_209_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___closed__2);
v___x_210_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___redArg(v_x_147_, v_ks_206_, v_vs_207_, v___x_208_, v___x_209_);
lean_dec_ref(v_vs_207_);
lean_dec_ref(v_ks_206_);
return v___x_210_;
}
else
{
return v_newNode_203_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___redArg(size_t v_depth_218_, lean_object* v_keys_219_, lean_object* v_vals_220_, lean_object* v_i_221_, lean_object* v_entries_222_){
_start:
{
lean_object* v___x_223_; uint8_t v___x_224_; 
v___x_223_ = lean_array_get_size(v_keys_219_);
v___x_224_ = lean_nat_dec_lt(v_i_221_, v___x_223_);
if (v___x_224_ == 0)
{
lean_dec(v_i_221_);
return v_entries_222_;
}
else
{
lean_object* v_k_225_; lean_object* v_v_226_; uint64_t v___x_227_; size_t v_h_228_; size_t v___x_229_; lean_object* v___x_230_; size_t v___x_231_; size_t v___x_232_; size_t v___x_233_; size_t v_h_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v_k_225_ = lean_array_fget_borrowed(v_keys_219_, v_i_221_);
v_v_226_ = lean_array_fget_borrowed(v_vals_220_, v_i_221_);
v___x_227_ = l_Lean_instHashableMVarId_hash(v_k_225_);
v_h_228_ = lean_uint64_to_usize(v___x_227_);
v___x_229_ = ((size_t)5ULL);
v___x_230_ = lean_unsigned_to_nat(1u);
v___x_231_ = ((size_t)1ULL);
v___x_232_ = lean_usize_sub(v_depth_218_, v___x_231_);
v___x_233_ = lean_usize_mul(v___x_229_, v___x_232_);
v_h_234_ = lean_usize_shift_right(v_h_228_, v___x_233_);
v___x_235_ = lean_nat_add(v_i_221_, v___x_230_);
lean_dec(v_i_221_);
lean_inc(v_v_226_);
lean_inc(v_k_225_);
v___x_236_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg(v_entries_222_, v_h_234_, v_depth_218_, v_k_225_, v_v_226_);
v_i_221_ = v___x_235_;
v_entries_222_ = v___x_236_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___redArg___boxed(lean_object* v_depth_238_, lean_object* v_keys_239_, lean_object* v_vals_240_, lean_object* v_i_241_, lean_object* v_entries_242_){
_start:
{
size_t v_depth_boxed_243_; lean_object* v_res_244_; 
v_depth_boxed_243_ = lean_unbox_usize(v_depth_238_);
lean_dec(v_depth_238_);
v_res_244_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___redArg(v_depth_boxed_243_, v_keys_239_, v_vals_240_, v_i_241_, v_entries_242_);
lean_dec_ref(v_vals_240_);
lean_dec_ref(v_keys_239_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_x_245_, lean_object* v_x_246_, lean_object* v_x_247_, lean_object* v_x_248_, lean_object* v_x_249_){
_start:
{
size_t v_x_4740__boxed_250_; size_t v_x_4741__boxed_251_; lean_object* v_res_252_; 
v_x_4740__boxed_250_ = lean_unbox_usize(v_x_246_);
lean_dec(v_x_246_);
v_x_4741__boxed_251_ = lean_unbox_usize(v_x_247_);
lean_dec(v_x_247_);
v_res_252_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg(v_x_245_, v_x_4740__boxed_250_, v_x_4741__boxed_251_, v_x_248_, v_x_249_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3___redArg(lean_object* v_x_253_, lean_object* v_x_254_, lean_object* v_x_255_){
_start:
{
uint64_t v___x_256_; size_t v___x_257_; size_t v___x_258_; lean_object* v___x_259_; 
v___x_256_ = l_Lean_instHashableMVarId_hash(v_x_254_);
v___x_257_ = lean_uint64_to_usize(v___x_256_);
v___x_258_ = ((size_t)1ULL);
v___x_259_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg(v_x_253_, v___x_257_, v___x_258_, v_x_254_, v_x_255_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2___redArg(lean_object* v_mvarId_260_, lean_object* v_val_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v_mctx_267_; lean_object* v_cache_268_; lean_object* v_zetaDeltaFVarIds_269_; lean_object* v_postponed_270_; lean_object* v_diag_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_299_; 
v___x_265_ = lean_st_ref_get(v___y_263_);
lean_dec(v___x_265_);
v___x_266_ = lean_st_ref_take(v___y_262_);
v_mctx_267_ = lean_ctor_get(v___x_266_, 0);
v_cache_268_ = lean_ctor_get(v___x_266_, 1);
v_zetaDeltaFVarIds_269_ = lean_ctor_get(v___x_266_, 2);
v_postponed_270_ = lean_ctor_get(v___x_266_, 3);
v_diag_271_ = lean_ctor_get(v___x_266_, 4);
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_266_);
if (v_isSharedCheck_299_ == 0)
{
v___x_273_ = v___x_266_;
v_isShared_274_ = v_isSharedCheck_299_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_diag_271_);
lean_inc(v_postponed_270_);
lean_inc(v_zetaDeltaFVarIds_269_);
lean_inc(v_cache_268_);
lean_inc(v_mctx_267_);
lean_dec(v___x_266_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_299_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v_depth_275_; lean_object* v_levelAssignDepth_276_; lean_object* v_lmvarCounter_277_; lean_object* v_mvarCounter_278_; lean_object* v_lDecls_279_; lean_object* v_decls_280_; lean_object* v_userNames_281_; lean_object* v_lAssignment_282_; lean_object* v_eAssignment_283_; lean_object* v_dAssignment_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_298_; 
v_depth_275_ = lean_ctor_get(v_mctx_267_, 0);
v_levelAssignDepth_276_ = lean_ctor_get(v_mctx_267_, 1);
v_lmvarCounter_277_ = lean_ctor_get(v_mctx_267_, 2);
v_mvarCounter_278_ = lean_ctor_get(v_mctx_267_, 3);
v_lDecls_279_ = lean_ctor_get(v_mctx_267_, 4);
v_decls_280_ = lean_ctor_get(v_mctx_267_, 5);
v_userNames_281_ = lean_ctor_get(v_mctx_267_, 6);
v_lAssignment_282_ = lean_ctor_get(v_mctx_267_, 7);
v_eAssignment_283_ = lean_ctor_get(v_mctx_267_, 8);
v_dAssignment_284_ = lean_ctor_get(v_mctx_267_, 9);
v_isSharedCheck_298_ = !lean_is_exclusive(v_mctx_267_);
if (v_isSharedCheck_298_ == 0)
{
v___x_286_ = v_mctx_267_;
v_isShared_287_ = v_isSharedCheck_298_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_dAssignment_284_);
lean_inc(v_eAssignment_283_);
lean_inc(v_lAssignment_282_);
lean_inc(v_userNames_281_);
lean_inc(v_decls_280_);
lean_inc(v_lDecls_279_);
lean_inc(v_mvarCounter_278_);
lean_inc(v_lmvarCounter_277_);
lean_inc(v_levelAssignDepth_276_);
lean_inc(v_depth_275_);
lean_dec(v_mctx_267_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_298_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v___x_288_; lean_object* v___x_290_; 
v___x_288_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3___redArg(v_eAssignment_283_, v_mvarId_260_, v_val_261_);
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 8, v___x_288_);
v___x_290_ = v___x_286_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_depth_275_);
lean_ctor_set(v_reuseFailAlloc_297_, 1, v_levelAssignDepth_276_);
lean_ctor_set(v_reuseFailAlloc_297_, 2, v_lmvarCounter_277_);
lean_ctor_set(v_reuseFailAlloc_297_, 3, v_mvarCounter_278_);
lean_ctor_set(v_reuseFailAlloc_297_, 4, v_lDecls_279_);
lean_ctor_set(v_reuseFailAlloc_297_, 5, v_decls_280_);
lean_ctor_set(v_reuseFailAlloc_297_, 6, v_userNames_281_);
lean_ctor_set(v_reuseFailAlloc_297_, 7, v_lAssignment_282_);
lean_ctor_set(v_reuseFailAlloc_297_, 8, v___x_288_);
lean_ctor_set(v_reuseFailAlloc_297_, 9, v_dAssignment_284_);
v___x_290_ = v_reuseFailAlloc_297_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
lean_object* v___x_292_; 
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 0, v___x_290_);
v___x_292_ = v___x_273_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v___x_290_);
lean_ctor_set(v_reuseFailAlloc_296_, 1, v_cache_268_);
lean_ctor_set(v_reuseFailAlloc_296_, 2, v_zetaDeltaFVarIds_269_);
lean_ctor_set(v_reuseFailAlloc_296_, 3, v_postponed_270_);
lean_ctor_set(v_reuseFailAlloc_296_, 4, v_diag_271_);
v___x_292_ = v_reuseFailAlloc_296_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_293_ = lean_st_ref_set(v___y_262_, v___x_292_);
v___x_294_ = lean_box(0);
v___x_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
return v___x_295_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2___redArg___boxed(lean_object* v_mvarId_300_, lean_object* v_val_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2___redArg(v_mvarId_300_, v_val_301_, v___y_302_, v___y_303_);
lean_dec(v___y_303_);
lean_dec(v___y_302_);
return v_res_305_;
}
}
static lean_object* _init_l_elabAsAuxLemma___lam__0___closed__0(void){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = lean_mk_string_unchecked("Cannot abstract term into auxiliary lemma because there are open goals.", 71, 71);
return v___x_306_;
}
}
static lean_object* _init_l_elabAsAuxLemma___lam__0___closed__1(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_obj_once(&l_elabAsAuxLemma___lam__0___closed__0, &l_elabAsAuxLemma___lam__0___closed__0_once, _init_l_elabAsAuxLemma___lam__0___closed__0);
v___x_308_ = l_Lean_stringToMessageData(v___x_307_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_elabAsAuxLemma___lam__0(lean_object* v___x_309_, uint8_t v___x_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_312_, v___y_315_, v___y_316_, v___y_317_, v___y_318_);
if (lean_obj_tag(v___x_320_) == 0)
{
lean_object* v_a_321_; lean_object* v___y_323_; lean_object* v___y_324_; lean_object* v___y_325_; lean_object* v___y_326_; lean_object* v___y_327_; lean_object* v___y_328_; lean_object* v___y_329_; lean_object* v___y_330_; lean_object* v___x_357_; lean_object* v___x_358_; 
v_a_321_ = lean_ctor_get(v___x_320_, 0);
lean_inc_n(v_a_321_, 2);
lean_dec_ref(v___x_320_);
v___x_357_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___boxed), 10, 1);
lean_closure_set(v___x_357_, 0, v___x_309_);
v___x_358_ = l_Lean_Elab_Tactic_run(v_a_321_, v___x_357_, v___y_313_, v___y_314_, v___y_315_, v___y_316_, v___y_317_, v___y_318_);
if (lean_obj_tag(v___x_358_) == 0)
{
lean_object* v_a_359_; uint8_t v___x_360_; 
v_a_359_ = lean_ctor_get(v___x_358_, 0);
lean_inc(v_a_359_);
lean_dec_ref(v___x_358_);
v___x_360_ = l_List_isEmpty___redArg(v_a_359_);
lean_dec(v_a_359_);
if (v___x_360_ == 0)
{
lean_object* v___x_361_; lean_object* v___x_362_; 
lean_dec(v_a_321_);
v___x_361_ = lean_obj_once(&l_elabAsAuxLemma___lam__0___closed__1, &l_elabAsAuxLemma___lam__0___closed__1_once, _init_l_elabAsAuxLemma___lam__0___closed__1);
v___x_362_ = l_Lean_throwError___at___00elabAsAuxLemma_spec__0___redArg(v___x_361_, v___y_315_, v___y_316_, v___y_317_, v___y_318_);
return v___x_362_;
}
else
{
v___y_323_ = v___y_311_;
v___y_324_ = v___y_312_;
v___y_325_ = v___y_313_;
v___y_326_ = v___y_314_;
v___y_327_ = v___y_315_;
v___y_328_ = v___y_316_;
v___y_329_ = v___y_317_;
v___y_330_ = v___y_318_;
goto v___jp_322_;
}
}
else
{
lean_object* v_a_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_370_; 
lean_dec(v_a_321_);
v_a_363_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_370_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_370_ == 0)
{
v___x_365_ = v___x_358_;
v_isShared_366_ = v_isSharedCheck_370_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_a_363_);
lean_dec(v___x_358_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_370_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v___x_368_; 
if (v_isShared_366_ == 0)
{
v___x_368_ = v___x_365_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v_a_363_);
v___x_368_ = v_reuseFailAlloc_369_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
return v___x_368_;
}
}
}
v___jp_322_:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v_a_333_; lean_object* v___x_334_; 
lean_inc_n(v_a_321_, 2);
v___x_331_ = l_Lean_mkMVar(v_a_321_);
v___x_332_ = l_Lean_instantiateMVars___at___00elabAsAuxLemma_spec__1___redArg(v___x_331_, v___y_328_, v___y_330_);
v_a_333_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_a_333_);
lean_dec_ref(v___x_332_);
v___x_334_ = l_Lean_MVarId_getType(v_a_321_, v___y_327_, v___y_328_, v___y_329_, v___y_330_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; uint8_t v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v_a_335_ = lean_ctor_get(v___x_334_, 0);
lean_inc(v_a_335_);
lean_dec_ref(v___x_334_);
v___x_336_ = 0;
v___x_337_ = lean_box(0);
v___x_338_ = l_Lean_Meta_mkAuxTheorem(v_a_335_, v_a_333_, v___x_336_, v___x_337_, v___x_310_, v___y_327_, v___y_328_, v___y_329_, v___y_330_);
if (lean_obj_tag(v___x_338_) == 0)
{
lean_object* v_a_339_; lean_object* v___x_340_; 
v_a_339_ = lean_ctor_get(v___x_338_, 0);
lean_inc(v_a_339_);
lean_dec_ref(v___x_338_);
v___x_340_ = l_Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2___redArg(v_a_321_, v_a_339_, v___y_328_, v___y_330_);
return v___x_340_;
}
else
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_348_; 
lean_dec(v_a_321_);
v_a_341_ = lean_ctor_get(v___x_338_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_348_ == 0)
{
v___x_343_ = v___x_338_;
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v___x_338_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_346_; 
if (v_isShared_344_ == 0)
{
v___x_346_ = v___x_343_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_a_341_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
}
else
{
lean_object* v_a_349_; lean_object* v___x_351_; uint8_t v_isShared_352_; uint8_t v_isSharedCheck_356_; 
lean_dec(v_a_333_);
lean_dec(v_a_321_);
v_a_349_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_356_ == 0)
{
v___x_351_ = v___x_334_;
v_isShared_352_ = v_isSharedCheck_356_;
goto v_resetjp_350_;
}
else
{
lean_inc(v_a_349_);
lean_dec(v___x_334_);
v___x_351_ = lean_box(0);
v_isShared_352_ = v_isSharedCheck_356_;
goto v_resetjp_350_;
}
v_resetjp_350_:
{
lean_object* v___x_354_; 
if (v_isShared_352_ == 0)
{
v___x_354_ = v___x_351_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v_a_349_);
v___x_354_ = v_reuseFailAlloc_355_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
return v___x_354_;
}
}
}
}
}
else
{
lean_object* v_a_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_378_; 
lean_dec(v___x_309_);
v_a_371_ = lean_ctor_get(v___x_320_, 0);
v_isSharedCheck_378_ = !lean_is_exclusive(v___x_320_);
if (v_isSharedCheck_378_ == 0)
{
v___x_373_ = v___x_320_;
v_isShared_374_ = v_isSharedCheck_378_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_a_371_);
lean_dec(v___x_320_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_378_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_376_; 
if (v_isShared_374_ == 0)
{
v___x_376_ = v___x_373_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v_a_371_);
v___x_376_ = v_reuseFailAlloc_377_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
return v___x_376_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_elabAsAuxLemma___lam__0___boxed(lean_object* v___x_379_, lean_object* v___x_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
uint8_t v___x_4971__boxed_390_; lean_object* v_res_391_; 
v___x_4971__boxed_390_ = lean_unbox(v___x_380_);
v_res_391_ = l_elabAsAuxLemma___lam__0(v___x_379_, v___x_4971__boxed_390_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
return v_res_391_;
}
}
static lean_object* _init_l_elabAsAuxLemma___closed__0(void){
_start:
{
lean_object* v___x_392_; 
v___x_392_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_392_;
}
}
static lean_object* _init_l_elabAsAuxLemma___closed__1(void){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_393_;
}
}
static lean_object* _init_l_elabAsAuxLemma___closed__2(void){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_394_;
}
}
static lean_object* _init_l_elabAsAuxLemma___closed__3(void){
_start:
{
lean_object* v___x_395_; 
v___x_395_ = lean_mk_string_unchecked("as_aux_lemma", 12, 12);
return v___x_395_;
}
}
static lean_object* _init_l_elabAsAuxLemma___closed__4(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_396_ = lean_obj_once(&l_elabAsAuxLemma___closed__3, &l_elabAsAuxLemma___closed__3_once, _init_l_elabAsAuxLemma___closed__3);
v___x_397_ = lean_obj_once(&l_elabAsAuxLemma___closed__2, &l_elabAsAuxLemma___closed__2_once, _init_l_elabAsAuxLemma___closed__2);
v___x_398_ = lean_obj_once(&l_elabAsAuxLemma___closed__1, &l_elabAsAuxLemma___closed__1_once, _init_l_elabAsAuxLemma___closed__1);
v___x_399_ = lean_obj_once(&l_elabAsAuxLemma___closed__0, &l_elabAsAuxLemma___closed__0_once, _init_l_elabAsAuxLemma___closed__0);
v___x_400_ = l_Lean_Name_mkStr4(v___x_399_, v___x_398_, v___x_397_, v___x_396_);
return v___x_400_;
}
}
static lean_object* _init_l_elabAsAuxLemma___closed__5(void){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = lean_mk_string_unchecked("Invalid as_aux_lemma syntax", 27, 27);
return v___x_401_;
}
}
static lean_object* _init_l_elabAsAuxLemma___closed__6(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_402_ = lean_obj_once(&l_elabAsAuxLemma___closed__5, &l_elabAsAuxLemma___closed__5_once, _init_l_elabAsAuxLemma___closed__5);
v___x_403_ = l_Lean_stringToMessageData(v___x_402_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_elabAsAuxLemma(lean_object* v_x_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_){
_start:
{
lean_object* v___x_414_; uint8_t v___x_415_; 
v___x_414_ = lean_obj_once(&l_elabAsAuxLemma___closed__4, &l_elabAsAuxLemma___closed__4_once, _init_l_elabAsAuxLemma___closed__4);
lean_inc(v_x_404_);
v___x_415_ = l_Lean_Syntax_isOfKind(v_x_404_, v___x_414_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; lean_object* v___x_417_; 
lean_dec(v_x_404_);
v___x_416_ = lean_obj_once(&l_elabAsAuxLemma___closed__6, &l_elabAsAuxLemma___closed__6_once, _init_l_elabAsAuxLemma___closed__6);
v___x_417_ = l_Lean_throwError___at___00elabAsAuxLemma_spec__0___redArg(v___x_416_, v_a_409_, v_a_410_, v_a_411_, v_a_412_);
return v___x_417_;
}
else
{
lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___f_421_; lean_object* v___x_422_; 
v___x_418_ = lean_unsigned_to_nat(2u);
v___x_419_ = l_Lean_Syntax_getArg(v_x_404_, v___x_418_);
lean_dec(v_x_404_);
v___x_420_ = lean_box(v___x_415_);
v___f_421_ = lean_alloc_closure((void*)(l_elabAsAuxLemma___lam__0___boxed), 11, 2);
lean_closure_set(v___f_421_, 0, v___x_419_);
lean_closure_set(v___f_421_, 1, v___x_420_);
v___x_422_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_421_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_);
return v___x_422_;
}
}
}
LEAN_EXPORT lean_object* l_elabAsAuxLemma___boxed(lean_object* v_x_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_elabAsAuxLemma(v_x_423_, v_a_424_, v_a_425_, v_a_426_, v_a_427_, v_a_428_, v_a_429_, v_a_430_, v_a_431_);
lean_dec(v_a_431_);
lean_dec_ref(v_a_430_);
lean_dec(v_a_429_);
lean_dec_ref(v_a_428_);
lean_dec(v_a_427_);
lean_dec_ref(v_a_426_);
lean_dec(v_a_425_);
lean_dec_ref(v_a_424_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00elabAsAuxLemma_spec__0(lean_object* v_00_u03b1_434_, lean_object* v_msg_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_Lean_throwError___at___00elabAsAuxLemma_spec__0___redArg(v_msg_435_, v___y_440_, v___y_441_, v___y_442_, v___y_443_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00elabAsAuxLemma_spec__0___boxed(lean_object* v_00_u03b1_446_, lean_object* v_msg_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_Lean_throwError___at___00elabAsAuxLemma_spec__0(v_00_u03b1_446_, v_msg_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_);
lean_dec(v___y_455_);
lean_dec_ref(v___y_454_);
lean_dec(v___y_453_);
lean_dec_ref(v___y_452_);
lean_dec(v___y_451_);
lean_dec_ref(v___y_450_);
lean_dec(v___y_449_);
lean_dec_ref(v___y_448_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2(lean_object* v_mvarId_458_, lean_object* v_val_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = l_Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2___redArg(v_mvarId_458_, v_val_459_, v___y_465_, v___y_467_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2___boxed(lean_object* v_mvarId_470_, lean_object* v_val_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2(v_mvarId_470_, v_val_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_);
lean_dec(v___y_479_);
lean_dec_ref(v___y_478_);
lean_dec(v___y_477_);
lean_dec_ref(v___y_476_);
lean_dec(v___y_475_);
lean_dec_ref(v___y_474_);
lean_dec(v___y_473_);
lean_dec_ref(v___y_472_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3(lean_object* v_00_u03b2_482_, lean_object* v_x_483_, lean_object* v_x_484_, lean_object* v_x_485_){
_start:
{
lean_object* v___x_486_; 
v___x_486_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3___redArg(v_x_483_, v_x_484_, v_x_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_487_, lean_object* v_x_488_, size_t v_x_489_, size_t v_x_490_, lean_object* v_x_491_, lean_object* v_x_492_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___redArg(v_x_488_, v_x_489_, v_x_490_, v_x_491_, v_x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_494_, lean_object* v_x_495_, lean_object* v_x_496_, lean_object* v_x_497_, lean_object* v_x_498_, lean_object* v_x_499_){
_start:
{
size_t v_x_5254__boxed_500_; size_t v_x_5255__boxed_501_; lean_object* v_res_502_; 
v_x_5254__boxed_500_ = lean_unbox_usize(v_x_496_);
lean_dec(v_x_496_);
v_x_5255__boxed_501_ = lean_unbox_usize(v_x_497_);
lean_dec(v_x_497_);
v_res_502_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4(v_00_u03b2_494_, v_x_495_, v_x_5254__boxed_500_, v_x_5255__boxed_501_, v_x_498_, v_x_499_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_503_, lean_object* v_n_504_, lean_object* v_k_505_, lean_object* v_v_506_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5___redArg(v_n_504_, v_k_505_, v_v_506_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_508_, size_t v_depth_509_, lean_object* v_keys_510_, lean_object* v_vals_511_, lean_object* v_heq_512_, lean_object* v_i_513_, lean_object* v_entries_514_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___redArg(v_depth_509_, v_keys_510_, v_vals_511_, v_i_513_, v_entries_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6___boxed(lean_object* v_00_u03b2_516_, lean_object* v_depth_517_, lean_object* v_keys_518_, lean_object* v_vals_519_, lean_object* v_heq_520_, lean_object* v_i_521_, lean_object* v_entries_522_){
_start:
{
size_t v_depth_boxed_523_; lean_object* v_res_524_; 
v_depth_boxed_523_ = lean_unbox_usize(v_depth_517_);
lean_dec(v_depth_517_);
v_res_524_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__6(v_00_u03b2_516_, v_depth_boxed_523_, v_keys_518_, v_vals_519_, v_heq_520_, v_i_521_, v_entries_522_);
lean_dec_ref(v_vals_519_);
lean_dec_ref(v_keys_518_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_525_, lean_object* v_x_526_, lean_object* v_x_527_, lean_object* v_x_528_, lean_object* v_x_529_){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00elabAsAuxLemma_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(v_x_526_, v_x_527_, v_x_528_, v_x_529_);
return v___x_530_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1___closed__0(void){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = lean_mk_string_unchecked("elabAsAuxLemma", 14, 14);
return v___x_531_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1___closed__1(void){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_532_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1___closed__0, &l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1___closed__0);
v___x_533_ = l_Lean_Name_mkStr1(v___x_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1(){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_535_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_536_ = lean_obj_once(&l_elabAsAuxLemma___closed__4, &l_elabAsAuxLemma___closed__4_once, _init_l_elabAsAuxLemma___closed__4);
v___x_537_ = lean_obj_once(&l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1___closed__1, &l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1___closed__1);
v___x_538_ = lean_alloc_closure((void*)(l_elabAsAuxLemma___boxed), 10, 0);
v___x_539_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_535_, v___x_536_, v___x_537_, v___x_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1___boxed(lean_object* v_a_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1();
return v_res_541_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_AsAuxLemma(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_AsAuxLemma_0__elabAsAuxLemma___regBuiltin_elabAsAuxLemma__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_AsAuxLemma(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_AsAuxLemma(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_AsAuxLemma(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_AsAuxLemma(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_AsAuxLemma(builtin);
}
#ifdef __cplusplus
}
#endif
