// Lean compiler output
// Module: Lean.Meta.Sym.Intro
// Imports: public import Lean.Meta.Sym.SymM import Lean.Meta.Sym.InstantiateS import Lean.Meta.Sym.IsClass import Lean.Meta.Sym.AlphaShareBuilder
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateRevRangeS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isClass_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkValueLoop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkValueLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkAppBVars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_hugeNat;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_failed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_failed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_goal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_goal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_intros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_intros___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_introN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_introN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkValueLoop(lean_object* v_max_1_, lean_object* v_i_2_, lean_object* v_type_3_, lean_object* v_body_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_nat_dec_le(v_max_1_, v_i_2_);
if (v___x_5_ == 0)
{
switch(lean_obj_tag(v_type_3_))
{
case 10:
{
lean_object* v_expr_6_; 
v_expr_6_ = lean_ctor_get(v_type_3_, 1);
lean_inc_ref(v_expr_6_);
lean_dec_ref(v_type_3_);
v_type_3_ = v_expr_6_;
goto _start;
}
case 7:
{
lean_object* v_binderName_8_; lean_object* v_binderType_9_; lean_object* v_body_10_; uint8_t v_binderInfo_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v_binderName_8_ = lean_ctor_get(v_type_3_, 0);
lean_inc(v_binderName_8_);
v_binderType_9_ = lean_ctor_get(v_type_3_, 1);
lean_inc_ref(v_binderType_9_);
v_body_10_ = lean_ctor_get(v_type_3_, 2);
lean_inc_ref(v_body_10_);
v_binderInfo_11_ = lean_ctor_get_uint8(v_type_3_, sizeof(void*)*3 + 8);
lean_dec_ref(v_type_3_);
v___x_12_ = lean_unsigned_to_nat(1u);
v___x_13_ = lean_nat_add(v_i_2_, v___x_12_);
v___x_14_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkValueLoop(v_max_1_, v___x_13_, v_body_10_, v_body_4_);
lean_dec(v___x_13_);
v___x_15_ = l_Lean_mkLambda(v_binderName_8_, v_binderInfo_11_, v_binderType_9_, v___x_14_);
return v___x_15_;
}
case 8:
{
lean_object* v_declName_16_; lean_object* v_type_17_; lean_object* v_value_18_; lean_object* v_body_19_; uint8_t v_nondep_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v_declName_16_ = lean_ctor_get(v_type_3_, 0);
lean_inc(v_declName_16_);
v_type_17_ = lean_ctor_get(v_type_3_, 1);
lean_inc_ref(v_type_17_);
v_value_18_ = lean_ctor_get(v_type_3_, 2);
lean_inc_ref(v_value_18_);
v_body_19_ = lean_ctor_get(v_type_3_, 3);
lean_inc_ref(v_body_19_);
v_nondep_20_ = lean_ctor_get_uint8(v_type_3_, sizeof(void*)*4 + 8);
lean_dec_ref(v_type_3_);
v___x_21_ = lean_unsigned_to_nat(1u);
v___x_22_ = lean_nat_add(v_i_2_, v___x_21_);
v___x_23_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkValueLoop(v_max_1_, v___x_22_, v_body_19_, v_body_4_);
lean_dec(v___x_22_);
v___x_24_ = l_Lean_Expr_letE___override(v_declName_16_, v_type_17_, v_value_18_, v___x_23_, v_nondep_20_);
return v___x_24_;
}
default: 
{
lean_dec_ref(v_type_3_);
lean_inc_ref(v_body_4_);
return v_body_4_;
}
}
}
else
{
lean_dec_ref(v_type_3_);
lean_inc_ref(v_body_4_);
return v_body_4_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkValueLoop___boxed(lean_object* v_max_25_, lean_object* v_i_26_, lean_object* v_type_27_, lean_object* v_body_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkValueLoop(v_max_25_, v_i_26_, v_type_27_, v_body_28_);
lean_dec_ref(v_body_28_);
lean_dec(v_i_26_);
lean_dec(v_max_25_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkAppBVars(lean_object* v_e_30_, lean_object* v_n_31_){
_start:
{
lean_object* v_zero_32_; uint8_t v_isZero_33_; 
v_zero_32_ = lean_unsigned_to_nat(0u);
v_isZero_33_ = lean_nat_dec_eq(v_n_31_, v_zero_32_);
if (v_isZero_33_ == 1)
{
lean_dec(v_n_31_);
return v_e_30_;
}
else
{
lean_object* v_one_34_; lean_object* v_n_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v_one_34_ = lean_unsigned_to_nat(1u);
v_n_35_ = lean_nat_sub(v_n_31_, v_one_34_);
lean_dec(v_n_31_);
lean_inc(v_n_35_);
v___x_36_ = l_Lean_mkBVar(v_n_35_);
v___x_37_ = l_Lean_Expr_app___override(v_e_30_, v___x_36_);
v_e_30_ = v___x_37_;
v_n_31_ = v_n_35_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___redArg(lean_object* v_fvarId_39_, lean_object* v___y_40_, lean_object* v___y_41_){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = l_Lean_Expr_fvar___override(v_fvarId_39_);
v___x_44_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_43_, v___y_40_, v___y_41_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___redArg___boxed(lean_object* v_fvarId_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___redArg(v_fvarId_45_, v___y_46_, v___y_47_);
lean_dec(v___y_47_);
lean_dec(v___y_46_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1(lean_object* v_fvarId_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___redArg(v_fvarId_50_, v___y_52_, v___y_56_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___boxed(lean_object* v_fvarId_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1(v_fvarId_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
lean_dec(v___y_61_);
lean_dec_ref(v___y_60_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___redArg(lean_object* v___y_68_){
_start:
{
lean_object* v___x_70_; lean_object* v_ngen_71_; lean_object* v_namePrefix_72_; lean_object* v_idx_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_102_; 
v___x_70_ = lean_st_ref_get(v___y_68_);
v_ngen_71_ = lean_ctor_get(v___x_70_, 2);
lean_inc_ref(v_ngen_71_);
lean_dec(v___x_70_);
v_namePrefix_72_ = lean_ctor_get(v_ngen_71_, 0);
v_idx_73_ = lean_ctor_get(v_ngen_71_, 1);
v_isSharedCheck_102_ = !lean_is_exclusive(v_ngen_71_);
if (v_isSharedCheck_102_ == 0)
{
v___x_75_ = v_ngen_71_;
v_isShared_76_ = v_isSharedCheck_102_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_idx_73_);
lean_inc(v_namePrefix_72_);
lean_dec(v_ngen_71_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_102_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_77_; lean_object* v_env_78_; lean_object* v_nextMacroScope_79_; lean_object* v_auxDeclNGen_80_; lean_object* v_traceState_81_; lean_object* v_cache_82_; lean_object* v_messages_83_; lean_object* v_infoState_84_; lean_object* v_snapshotTasks_85_; lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_100_; 
v___x_77_ = lean_st_ref_take(v___y_68_);
v_env_78_ = lean_ctor_get(v___x_77_, 0);
v_nextMacroScope_79_ = lean_ctor_get(v___x_77_, 1);
v_auxDeclNGen_80_ = lean_ctor_get(v___x_77_, 3);
v_traceState_81_ = lean_ctor_get(v___x_77_, 4);
v_cache_82_ = lean_ctor_get(v___x_77_, 5);
v_messages_83_ = lean_ctor_get(v___x_77_, 6);
v_infoState_84_ = lean_ctor_get(v___x_77_, 7);
v_snapshotTasks_85_ = lean_ctor_get(v___x_77_, 8);
v_isSharedCheck_100_ = !lean_is_exclusive(v___x_77_);
if (v_isSharedCheck_100_ == 0)
{
lean_object* v_unused_101_; 
v_unused_101_ = lean_ctor_get(v___x_77_, 2);
lean_dec(v_unused_101_);
v___x_87_ = v___x_77_;
v_isShared_88_ = v_isSharedCheck_100_;
goto v_resetjp_86_;
}
else
{
lean_inc(v_snapshotTasks_85_);
lean_inc(v_infoState_84_);
lean_inc(v_messages_83_);
lean_inc(v_cache_82_);
lean_inc(v_traceState_81_);
lean_inc(v_auxDeclNGen_80_);
lean_inc(v_nextMacroScope_79_);
lean_inc(v_env_78_);
lean_dec(v___x_77_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_100_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v_r_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_93_; 
lean_inc(v_idx_73_);
lean_inc(v_namePrefix_72_);
v_r_89_ = l_Lean_Name_num___override(v_namePrefix_72_, v_idx_73_);
v___x_90_ = lean_unsigned_to_nat(1u);
v___x_91_ = lean_nat_add(v_idx_73_, v___x_90_);
lean_dec(v_idx_73_);
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 1, v___x_91_);
v___x_93_ = v___x_75_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_namePrefix_72_);
lean_ctor_set(v_reuseFailAlloc_99_, 1, v___x_91_);
v___x_93_ = v_reuseFailAlloc_99_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
lean_object* v___x_95_; 
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 2, v___x_93_);
v___x_95_ = v___x_87_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_env_78_);
lean_ctor_set(v_reuseFailAlloc_98_, 1, v_nextMacroScope_79_);
lean_ctor_set(v_reuseFailAlloc_98_, 2, v___x_93_);
lean_ctor_set(v_reuseFailAlloc_98_, 3, v_auxDeclNGen_80_);
lean_ctor_set(v_reuseFailAlloc_98_, 4, v_traceState_81_);
lean_ctor_set(v_reuseFailAlloc_98_, 5, v_cache_82_);
lean_ctor_set(v_reuseFailAlloc_98_, 6, v_messages_83_);
lean_ctor_set(v_reuseFailAlloc_98_, 7, v_infoState_84_);
lean_ctor_set(v_reuseFailAlloc_98_, 8, v_snapshotTasks_85_);
v___x_95_ = v_reuseFailAlloc_98_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_st_ref_set(v___y_68_, v___x_95_);
v___x_97_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_97_, 0, v_r_89_);
return v___x_97_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___redArg___boxed(lean_object* v___y_103_, lean_object* v___y_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___redArg(v___y_103_);
lean_dec(v___y_103_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0(lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_){
_start:
{
lean_object* v___x_113_; lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_121_; 
v___x_113_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___redArg(v___y_111_);
v_a_114_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_121_ == 0)
{
v___x_116_ = v___x_113_;
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___x_113_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v___x_119_; 
if (v_isShared_117_ == 0)
{
v___x_119_ = v___x_116_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_a_114_);
v___x_119_ = v_reuseFailAlloc_120_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
return v___x_119_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0___boxed(lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0(v___y_122_, v___y_123_, v___y_124_, v___y_125_, v___y_126_, v___y_127_);
lean_dec(v___y_127_);
lean_dec_ref(v___y_126_);
lean_dec(v___y_125_);
lean_dec_ref(v___y_124_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit(lean_object* v_max_130_, lean_object* v_finalize_131_, lean_object* v_mkName_132_, lean_object* v_updateLocalInsts_133_, lean_object* v_i_134_, lean_object* v_lctx_135_, lean_object* v_localInsts_136_, lean_object* v_fvars_137_, lean_object* v_type_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_){
_start:
{
uint8_t v___x_146_; 
v___x_146_ = lean_nat_dec_le(v_max_130_, v_i_134_);
if (v___x_146_ == 0)
{
switch(lean_obj_tag(v_type_138_))
{
case 10:
{
lean_object* v_expr_147_; 
v_expr_147_ = lean_ctor_get(v_type_138_, 1);
lean_inc_ref(v_expr_147_);
lean_dec_ref(v_type_138_);
v_type_138_ = v_expr_147_;
goto _start;
}
case 7:
{
lean_object* v_binderName_149_; lean_object* v_binderType_150_; lean_object* v_body_151_; uint8_t v_binderInfo_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v_binderName_149_ = lean_ctor_get(v_type_138_, 0);
lean_inc(v_binderName_149_);
v_binderType_150_ = lean_ctor_get(v_type_138_, 1);
lean_inc_ref(v_binderType_150_);
v_body_151_ = lean_ctor_get(v_type_138_, 2);
lean_inc_ref(v_body_151_);
v_binderInfo_152_ = lean_ctor_get_uint8(v_type_138_, sizeof(void*)*3 + 8);
lean_dec_ref(v_type_138_);
v___x_153_ = lean_unsigned_to_nat(0u);
v___x_154_ = lean_array_get_size(v_fvars_137_);
v___x_155_ = l_Lean_Meta_Sym_instantiateRevRangeS(v_binderType_150_, v___x_153_, v___x_154_, v_fvars_137_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_);
if (lean_obj_tag(v___x_155_) == 0)
{
lean_object* v_a_156_; lean_object* v___x_157_; 
v_a_156_ = lean_ctor_get(v___x_155_, 0);
lean_inc(v_a_156_);
lean_dec_ref(v___x_155_);
v___x_157_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0(v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_);
if (lean_obj_tag(v___x_157_) == 0)
{
lean_object* v_a_158_; lean_object* v___x_159_; 
v_a_158_ = lean_ctor_get(v___x_157_, 0);
lean_inc(v_a_158_);
lean_dec_ref(v___x_157_);
lean_inc_ref(v_mkName_132_);
lean_inc(v_a_144_);
lean_inc_ref(v_a_143_);
lean_inc(v_a_142_);
lean_inc_ref(v_a_141_);
lean_inc(v_i_134_);
v___x_159_ = lean_apply_7(v_mkName_132_, v_binderName_149_, v_i_134_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, lean_box(0));
if (lean_obj_tag(v___x_159_) == 0)
{
lean_object* v_a_160_; uint8_t v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v_a_160_ = lean_ctor_get(v___x_159_, 0);
lean_inc(v_a_160_);
lean_dec_ref(v___x_159_);
v___x_161_ = 0;
lean_inc(v_a_156_);
lean_inc(v_a_158_);
v___x_162_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_135_, v_a_158_, v_a_160_, v_a_156_, v_binderInfo_152_, v___x_161_);
v___x_163_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___redArg(v_a_158_, v_a_140_, v_a_144_);
if (lean_obj_tag(v___x_163_) == 0)
{
lean_object* v_a_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v_a_164_ = lean_ctor_get(v___x_163_, 0);
lean_inc_n(v_a_164_, 2);
lean_dec_ref(v___x_163_);
v___x_165_ = lean_array_push(v_fvars_137_, v_a_164_);
lean_inc_ref(v_updateLocalInsts_133_);
v___x_166_ = lean_apply_3(v_updateLocalInsts_133_, v_localInsts_136_, v_a_164_, v_a_156_);
v___x_167_ = lean_unsigned_to_nat(1u);
v___x_168_ = lean_nat_add(v_i_134_, v___x_167_);
lean_dec(v_i_134_);
v_i_134_ = v___x_168_;
v_lctx_135_ = v___x_162_;
v_localInsts_136_ = v___x_166_;
v_fvars_137_ = v___x_165_;
v_type_138_ = v_body_151_;
goto _start;
}
else
{
lean_object* v_a_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_177_; 
lean_dec_ref(v___x_162_);
lean_dec(v_a_156_);
lean_dec_ref(v_body_151_);
lean_dec_ref(v_fvars_137_);
lean_dec_ref(v_localInsts_136_);
lean_dec(v_i_134_);
lean_dec_ref(v_updateLocalInsts_133_);
lean_dec_ref(v_mkName_132_);
lean_dec_ref(v_finalize_131_);
v_a_170_ = lean_ctor_get(v___x_163_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v___x_163_);
if (v_isSharedCheck_177_ == 0)
{
v___x_172_ = v___x_163_;
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_a_170_);
lean_dec(v___x_163_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_175_; 
if (v_isShared_173_ == 0)
{
v___x_175_ = v___x_172_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_a_170_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
}
else
{
lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_185_; 
lean_dec(v_a_158_);
lean_dec(v_a_156_);
lean_dec_ref(v_body_151_);
lean_dec_ref(v_fvars_137_);
lean_dec_ref(v_localInsts_136_);
lean_dec_ref(v_lctx_135_);
lean_dec(v_i_134_);
lean_dec_ref(v_updateLocalInsts_133_);
lean_dec_ref(v_mkName_132_);
lean_dec_ref(v_finalize_131_);
v_a_178_ = lean_ctor_get(v___x_159_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_159_);
if (v_isSharedCheck_185_ == 0)
{
v___x_180_ = v___x_159_;
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v___x_159_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___x_183_; 
if (v_isShared_181_ == 0)
{
v___x_183_ = v___x_180_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_a_178_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
}
else
{
lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_193_; 
lean_dec(v_a_156_);
lean_dec_ref(v_body_151_);
lean_dec(v_binderName_149_);
lean_dec_ref(v_fvars_137_);
lean_dec_ref(v_localInsts_136_);
lean_dec_ref(v_lctx_135_);
lean_dec(v_i_134_);
lean_dec_ref(v_updateLocalInsts_133_);
lean_dec_ref(v_mkName_132_);
lean_dec_ref(v_finalize_131_);
v_a_186_ = lean_ctor_get(v___x_157_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_193_ == 0)
{
v___x_188_ = v___x_157_;
v_isShared_189_ = v_isSharedCheck_193_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v___x_157_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_193_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_191_; 
if (v_isShared_189_ == 0)
{
v___x_191_ = v___x_188_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_a_186_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
}
}
else
{
lean_object* v_a_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_201_; 
lean_dec_ref(v_body_151_);
lean_dec(v_binderName_149_);
lean_dec_ref(v_fvars_137_);
lean_dec_ref(v_localInsts_136_);
lean_dec_ref(v_lctx_135_);
lean_dec(v_i_134_);
lean_dec_ref(v_updateLocalInsts_133_);
lean_dec_ref(v_mkName_132_);
lean_dec_ref(v_finalize_131_);
v_a_194_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_201_ == 0)
{
v___x_196_ = v___x_155_;
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_a_194_);
lean_dec(v___x_155_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_199_; 
if (v_isShared_197_ == 0)
{
v___x_199_ = v___x_196_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_a_194_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
}
}
case 8:
{
lean_object* v_declName_202_; lean_object* v_type_203_; lean_object* v_value_204_; lean_object* v_body_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v_declName_202_ = lean_ctor_get(v_type_138_, 0);
lean_inc(v_declName_202_);
v_type_203_ = lean_ctor_get(v_type_138_, 1);
lean_inc_ref(v_type_203_);
v_value_204_ = lean_ctor_get(v_type_138_, 2);
lean_inc_ref(v_value_204_);
v_body_205_ = lean_ctor_get(v_type_138_, 3);
lean_inc_ref(v_body_205_);
lean_dec_ref(v_type_138_);
v___x_206_ = lean_unsigned_to_nat(0u);
v___x_207_ = lean_array_get_size(v_fvars_137_);
v___x_208_ = l_Lean_Meta_Sym_instantiateRevRangeS(v_type_203_, v___x_206_, v___x_207_, v_fvars_137_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_);
if (lean_obj_tag(v___x_208_) == 0)
{
lean_object* v_a_209_; lean_object* v___x_210_; 
v_a_209_ = lean_ctor_get(v___x_208_, 0);
lean_inc(v_a_209_);
lean_dec_ref(v___x_208_);
v___x_210_ = l_Lean_Meta_Sym_instantiateRevRangeS(v_value_204_, v___x_206_, v___x_207_, v_fvars_137_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v_a_211_; lean_object* v___x_212_; 
v_a_211_ = lean_ctor_get(v___x_210_, 0);
lean_inc(v_a_211_);
lean_dec_ref(v___x_210_);
v___x_212_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0(v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_);
if (lean_obj_tag(v___x_212_) == 0)
{
lean_object* v_a_213_; lean_object* v___x_214_; 
v_a_213_ = lean_ctor_get(v___x_212_, 0);
lean_inc(v_a_213_);
lean_dec_ref(v___x_212_);
lean_inc_ref(v_mkName_132_);
lean_inc(v_a_144_);
lean_inc_ref(v_a_143_);
lean_inc(v_a_142_);
lean_inc_ref(v_a_141_);
lean_inc(v_i_134_);
v___x_214_ = lean_apply_7(v_mkName_132_, v_declName_202_, v_i_134_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, lean_box(0));
if (lean_obj_tag(v___x_214_) == 0)
{
lean_object* v_a_215_; uint8_t v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v_a_215_ = lean_ctor_get(v___x_214_, 0);
lean_inc(v_a_215_);
lean_dec_ref(v___x_214_);
v___x_216_ = 0;
lean_inc(v_a_209_);
lean_inc(v_a_213_);
v___x_217_ = l_Lean_LocalContext_mkLetDecl(v_lctx_135_, v_a_213_, v_a_215_, v_a_209_, v_a_211_, v___x_146_, v___x_216_);
v___x_218_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___redArg(v_a_213_, v_a_140_, v_a_144_);
if (lean_obj_tag(v___x_218_) == 0)
{
lean_object* v_a_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v_a_219_ = lean_ctor_get(v___x_218_, 0);
lean_inc_n(v_a_219_, 2);
lean_dec_ref(v___x_218_);
v___x_220_ = lean_array_push(v_fvars_137_, v_a_219_);
lean_inc_ref(v_updateLocalInsts_133_);
v___x_221_ = lean_apply_3(v_updateLocalInsts_133_, v_localInsts_136_, v_a_219_, v_a_209_);
v___x_222_ = lean_unsigned_to_nat(1u);
v___x_223_ = lean_nat_add(v_i_134_, v___x_222_);
lean_dec(v_i_134_);
v_i_134_ = v___x_223_;
v_lctx_135_ = v___x_217_;
v_localInsts_136_ = v___x_221_;
v_fvars_137_ = v___x_220_;
v_type_138_ = v_body_205_;
goto _start;
}
else
{
lean_object* v_a_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_232_; 
lean_dec_ref(v___x_217_);
lean_dec(v_a_209_);
lean_dec_ref(v_body_205_);
lean_dec_ref(v_fvars_137_);
lean_dec_ref(v_localInsts_136_);
lean_dec(v_i_134_);
lean_dec_ref(v_updateLocalInsts_133_);
lean_dec_ref(v_mkName_132_);
lean_dec_ref(v_finalize_131_);
v_a_225_ = lean_ctor_get(v___x_218_, 0);
v_isSharedCheck_232_ = !lean_is_exclusive(v___x_218_);
if (v_isSharedCheck_232_ == 0)
{
v___x_227_ = v___x_218_;
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_a_225_);
lean_dec(v___x_218_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_230_; 
if (v_isShared_228_ == 0)
{
v___x_230_ = v___x_227_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_a_225_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
}
else
{
lean_object* v_a_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_240_; 
lean_dec(v_a_213_);
lean_dec(v_a_211_);
lean_dec(v_a_209_);
lean_dec_ref(v_body_205_);
lean_dec_ref(v_fvars_137_);
lean_dec_ref(v_localInsts_136_);
lean_dec_ref(v_lctx_135_);
lean_dec(v_i_134_);
lean_dec_ref(v_updateLocalInsts_133_);
lean_dec_ref(v_mkName_132_);
lean_dec_ref(v_finalize_131_);
v_a_233_ = lean_ctor_get(v___x_214_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_214_);
if (v_isSharedCheck_240_ == 0)
{
v___x_235_ = v___x_214_;
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_a_233_);
lean_dec(v___x_214_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_236_ == 0)
{
v___x_238_ = v___x_235_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_a_233_);
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
else
{
lean_object* v_a_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_248_; 
lean_dec(v_a_211_);
lean_dec(v_a_209_);
lean_dec_ref(v_body_205_);
lean_dec(v_declName_202_);
lean_dec_ref(v_fvars_137_);
lean_dec_ref(v_localInsts_136_);
lean_dec_ref(v_lctx_135_);
lean_dec(v_i_134_);
lean_dec_ref(v_updateLocalInsts_133_);
lean_dec_ref(v_mkName_132_);
lean_dec_ref(v_finalize_131_);
v_a_241_ = lean_ctor_get(v___x_212_, 0);
v_isSharedCheck_248_ = !lean_is_exclusive(v___x_212_);
if (v_isSharedCheck_248_ == 0)
{
v___x_243_ = v___x_212_;
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_a_241_);
lean_dec(v___x_212_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___x_246_; 
if (v_isShared_244_ == 0)
{
v___x_246_ = v___x_243_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v_a_241_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
return v___x_246_;
}
}
}
}
else
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_256_; 
lean_dec(v_a_209_);
lean_dec_ref(v_body_205_);
lean_dec(v_declName_202_);
lean_dec_ref(v_fvars_137_);
lean_dec_ref(v_localInsts_136_);
lean_dec_ref(v_lctx_135_);
lean_dec(v_i_134_);
lean_dec_ref(v_updateLocalInsts_133_);
lean_dec_ref(v_mkName_132_);
lean_dec_ref(v_finalize_131_);
v_a_249_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_256_ == 0)
{
v___x_251_ = v___x_210_;
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_210_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_254_; 
if (v_isShared_252_ == 0)
{
v___x_254_ = v___x_251_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_a_249_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
}
else
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_264_; 
lean_dec_ref(v_body_205_);
lean_dec_ref(v_value_204_);
lean_dec(v_declName_202_);
lean_dec_ref(v_fvars_137_);
lean_dec_ref(v_localInsts_136_);
lean_dec_ref(v_lctx_135_);
lean_dec(v_i_134_);
lean_dec_ref(v_updateLocalInsts_133_);
lean_dec_ref(v_mkName_132_);
lean_dec_ref(v_finalize_131_);
v_a_257_ = lean_ctor_get(v___x_208_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_208_);
if (v_isSharedCheck_264_ == 0)
{
v___x_259_ = v___x_208_;
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v___x_208_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_262_; 
if (v_isShared_260_ == 0)
{
v___x_262_ = v___x_259_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_a_257_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
}
default: 
{
lean_object* v___x_265_; 
lean_dec(v_i_134_);
lean_dec_ref(v_updateLocalInsts_133_);
lean_dec_ref(v_mkName_132_);
lean_inc(v_a_144_);
lean_inc_ref(v_a_143_);
lean_inc(v_a_142_);
lean_inc_ref(v_a_141_);
lean_inc(v_a_140_);
lean_inc_ref(v_a_139_);
v___x_265_ = lean_apply_11(v_finalize_131_, v_lctx_135_, v_localInsts_136_, v_fvars_137_, v_type_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, lean_box(0));
return v___x_265_;
}
}
}
else
{
lean_object* v___x_266_; 
lean_dec(v_i_134_);
lean_dec_ref(v_updateLocalInsts_133_);
lean_dec_ref(v_mkName_132_);
lean_inc(v_a_144_);
lean_inc_ref(v_a_143_);
lean_inc(v_a_142_);
lean_inc_ref(v_a_141_);
lean_inc(v_a_140_);
lean_inc_ref(v_a_139_);
v___x_266_ = lean_apply_11(v_finalize_131_, v_lctx_135_, v_localInsts_136_, v_fvars_137_, v_type_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, lean_box(0));
return v___x_266_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit___boxed(lean_object* v_max_267_, lean_object* v_finalize_268_, lean_object* v_mkName_269_, lean_object* v_updateLocalInsts_270_, lean_object* v_i_271_, lean_object* v_lctx_272_, lean_object* v_localInsts_273_, lean_object* v_fvars_274_, lean_object* v_type_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit(v_max_267_, v_finalize_268_, v_mkName_269_, v_updateLocalInsts_270_, v_i_271_, v_lctx_272_, v_localInsts_273_, v_fvars_274_, v_type_275_, v_a_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
lean_dec(v_a_281_);
lean_dec_ref(v_a_280_);
lean_dec(v_a_279_);
lean_dec_ref(v_a_278_);
lean_dec(v_a_277_);
lean_dec_ref(v_a_276_);
lean_dec(v_max_267_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0(lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___redArg(v___y_289_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___boxed(lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0(v___y_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_294_);
lean_dec(v___y_293_);
lean_dec_ref(v___y_292_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__0(lean_object* v_names_300_, lean_object* v_binderName_301_, lean_object* v_i_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v___x_308_; uint8_t v___x_309_; 
v___x_308_ = lean_array_get_size(v_names_300_);
v___x_309_ = lean_nat_dec_lt(v_i_302_, v___x_308_);
if (v___x_309_ == 0)
{
lean_object* v___x_310_; 
v___x_310_ = l_Lean_Core_mkFreshUserName(v_binderName_301_, v___y_305_, v___y_306_);
return v___x_310_;
}
else
{
lean_object* v___x_311_; lean_object* v___x_312_; 
lean_dec(v_binderName_301_);
v___x_311_ = lean_array_fget_borrowed(v_names_300_, v_i_302_);
lean_inc(v___x_311_);
v___x_312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
return v___x_312_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__0___boxed(lean_object* v_names_313_, lean_object* v_binderName_314_, lean_object* v_i_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__0(v_names_313_, v_binderName_314_, v_i_315_, v___y_316_, v___y_317_, v___y_318_, v___y_319_);
lean_dec(v___y_319_);
lean_dec_ref(v___y_318_);
lean_dec(v___y_317_);
lean_dec_ref(v___y_316_);
lean_dec(v_i_315_);
lean_dec_ref(v_names_313_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(lean_object* v_x_322_, lean_object* v_x_323_, lean_object* v_x_324_, lean_object* v_x_325_){
_start:
{
lean_object* v_ks_326_; lean_object* v_vs_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_351_; 
v_ks_326_ = lean_ctor_get(v_x_322_, 0);
v_vs_327_ = lean_ctor_get(v_x_322_, 1);
v_isSharedCheck_351_ = !lean_is_exclusive(v_x_322_);
if (v_isSharedCheck_351_ == 0)
{
v___x_329_ = v_x_322_;
v_isShared_330_ = v_isSharedCheck_351_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_vs_327_);
lean_inc(v_ks_326_);
lean_dec(v_x_322_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_351_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_331_; uint8_t v___x_332_; 
v___x_331_ = lean_array_get_size(v_ks_326_);
v___x_332_ = lean_nat_dec_lt(v_x_323_, v___x_331_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_336_; 
lean_dec(v_x_323_);
v___x_333_ = lean_array_push(v_ks_326_, v_x_324_);
v___x_334_ = lean_array_push(v_vs_327_, v_x_325_);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 1, v___x_334_);
lean_ctor_set(v___x_329_, 0, v___x_333_);
v___x_336_ = v___x_329_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v___x_333_);
lean_ctor_set(v_reuseFailAlloc_337_, 1, v___x_334_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
else
{
lean_object* v_k_x27_338_; uint8_t v___x_339_; 
v_k_x27_338_ = lean_array_fget_borrowed(v_ks_326_, v_x_323_);
v___x_339_ = l_Lean_instBEqMVarId_beq(v_x_324_, v_k_x27_338_);
if (v___x_339_ == 0)
{
lean_object* v___x_341_; 
if (v_isShared_330_ == 0)
{
v___x_341_ = v___x_329_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_ks_326_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v_vs_327_);
v___x_341_ = v_reuseFailAlloc_345_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_342_ = lean_unsigned_to_nat(1u);
v___x_343_ = lean_nat_add(v_x_323_, v___x_342_);
lean_dec(v_x_323_);
v_x_322_ = v___x_341_;
v_x_323_ = v___x_343_;
goto _start;
}
}
else
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_349_; 
v___x_346_ = lean_array_fset(v_ks_326_, v_x_323_, v_x_324_);
v___x_347_ = lean_array_fset(v_vs_327_, v_x_323_, v_x_325_);
lean_dec(v_x_323_);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 1, v___x_347_);
lean_ctor_set(v___x_329_, 0, v___x_346_);
v___x_349_ = v___x_329_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v___x_346_);
lean_ctor_set(v_reuseFailAlloc_350_, 1, v___x_347_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_n_352_, lean_object* v_k_353_, lean_object* v_v_354_){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = lean_unsigned_to_nat(0u);
v___x_356_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(v_n_352_, v___x_355_, v_k_353_, v_v_354_);
return v___x_356_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_357_; size_t v___x_358_; size_t v___x_359_; 
v___x_357_ = ((size_t)5ULL);
v___x_358_ = ((size_t)1ULL);
v___x_359_ = lean_usize_shift_left(v___x_358_, v___x_357_);
return v___x_359_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_360_; size_t v___x_361_; size_t v___x_362_; 
v___x_360_ = ((size_t)1ULL);
v___x_361_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_362_ = lean_usize_sub(v___x_361_, v___x_360_);
return v___x_362_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg(lean_object* v_x_364_, size_t v_x_365_, size_t v_x_366_, lean_object* v_x_367_, lean_object* v_x_368_){
_start:
{
if (lean_obj_tag(v_x_364_) == 0)
{
lean_object* v_es_369_; size_t v___x_370_; size_t v___x_371_; size_t v___x_372_; size_t v___x_373_; lean_object* v_j_374_; lean_object* v___x_375_; uint8_t v___x_376_; 
v_es_369_ = lean_ctor_get(v_x_364_, 0);
v___x_370_ = ((size_t)5ULL);
v___x_371_ = ((size_t)1ULL);
v___x_372_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_373_ = lean_usize_land(v_x_365_, v___x_372_);
v_j_374_ = lean_usize_to_nat(v___x_373_);
v___x_375_ = lean_array_get_size(v_es_369_);
v___x_376_ = lean_nat_dec_lt(v_j_374_, v___x_375_);
if (v___x_376_ == 0)
{
lean_dec(v_j_374_);
lean_dec(v_x_368_);
lean_dec(v_x_367_);
return v_x_364_;
}
else
{
lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_413_; 
lean_inc_ref(v_es_369_);
v_isSharedCheck_413_ = !lean_is_exclusive(v_x_364_);
if (v_isSharedCheck_413_ == 0)
{
lean_object* v_unused_414_; 
v_unused_414_ = lean_ctor_get(v_x_364_, 0);
lean_dec(v_unused_414_);
v___x_378_ = v_x_364_;
v_isShared_379_ = v_isSharedCheck_413_;
goto v_resetjp_377_;
}
else
{
lean_dec(v_x_364_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_413_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v_v_380_; lean_object* v___x_381_; lean_object* v_xs_x27_382_; lean_object* v___y_384_; 
v_v_380_ = lean_array_fget(v_es_369_, v_j_374_);
v___x_381_ = lean_box(0);
v_xs_x27_382_ = lean_array_fset(v_es_369_, v_j_374_, v___x_381_);
switch(lean_obj_tag(v_v_380_))
{
case 0:
{
lean_object* v_key_389_; lean_object* v_val_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_400_; 
v_key_389_ = lean_ctor_get(v_v_380_, 0);
v_val_390_ = lean_ctor_get(v_v_380_, 1);
v_isSharedCheck_400_ = !lean_is_exclusive(v_v_380_);
if (v_isSharedCheck_400_ == 0)
{
v___x_392_ = v_v_380_;
v_isShared_393_ = v_isSharedCheck_400_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_val_390_);
lean_inc(v_key_389_);
lean_dec(v_v_380_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_400_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
uint8_t v___x_394_; 
v___x_394_ = l_Lean_instBEqMVarId_beq(v_x_367_, v_key_389_);
if (v___x_394_ == 0)
{
lean_object* v___x_395_; lean_object* v___x_396_; 
lean_del_object(v___x_392_);
v___x_395_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_389_, v_val_390_, v_x_367_, v_x_368_);
v___x_396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_396_, 0, v___x_395_);
v___y_384_ = v___x_396_;
goto v___jp_383_;
}
else
{
lean_object* v___x_398_; 
lean_dec(v_val_390_);
lean_dec(v_key_389_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 1, v_x_368_);
lean_ctor_set(v___x_392_, 0, v_x_367_);
v___x_398_ = v___x_392_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v_x_367_);
lean_ctor_set(v_reuseFailAlloc_399_, 1, v_x_368_);
v___x_398_ = v_reuseFailAlloc_399_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
v___y_384_ = v___x_398_;
goto v___jp_383_;
}
}
}
}
case 1:
{
lean_object* v_node_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_411_; 
v_node_401_ = lean_ctor_get(v_v_380_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v_v_380_);
if (v_isSharedCheck_411_ == 0)
{
v___x_403_ = v_v_380_;
v_isShared_404_ = v_isSharedCheck_411_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_node_401_);
lean_dec(v_v_380_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_411_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
size_t v___x_405_; size_t v___x_406_; lean_object* v___x_407_; lean_object* v___x_409_; 
v___x_405_ = lean_usize_shift_right(v_x_365_, v___x_370_);
v___x_406_ = lean_usize_add(v_x_366_, v___x_371_);
v___x_407_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg(v_node_401_, v___x_405_, v___x_406_, v_x_367_, v_x_368_);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 0, v___x_407_);
v___x_409_ = v___x_403_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v___x_407_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
v___y_384_ = v___x_409_;
goto v___jp_383_;
}
}
}
default: 
{
lean_object* v___x_412_; 
v___x_412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_412_, 0, v_x_367_);
lean_ctor_set(v___x_412_, 1, v_x_368_);
v___y_384_ = v___x_412_;
goto v___jp_383_;
}
}
v___jp_383_:
{
lean_object* v___x_385_; lean_object* v___x_387_; 
v___x_385_ = lean_array_fset(v_xs_x27_382_, v_j_374_, v___y_384_);
lean_dec(v_j_374_);
if (v_isShared_379_ == 0)
{
lean_ctor_set(v___x_378_, 0, v___x_385_);
v___x_387_ = v___x_378_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_385_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
}
else
{
lean_object* v_ks_415_; lean_object* v_vs_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_436_; 
v_ks_415_ = lean_ctor_get(v_x_364_, 0);
v_vs_416_ = lean_ctor_get(v_x_364_, 1);
v_isSharedCheck_436_ = !lean_is_exclusive(v_x_364_);
if (v_isSharedCheck_436_ == 0)
{
v___x_418_ = v_x_364_;
v_isShared_419_ = v_isSharedCheck_436_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_vs_416_);
lean_inc(v_ks_415_);
lean_dec(v_x_364_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_436_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_421_; 
if (v_isShared_419_ == 0)
{
v___x_421_ = v___x_418_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_ks_415_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v_vs_416_);
v___x_421_ = v_reuseFailAlloc_435_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
lean_object* v_newNode_422_; uint8_t v___y_424_; size_t v___x_430_; uint8_t v___x_431_; 
v_newNode_422_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4___redArg(v___x_421_, v_x_367_, v_x_368_);
v___x_430_ = ((size_t)7ULL);
v___x_431_ = lean_usize_dec_le(v___x_430_, v_x_366_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; lean_object* v___x_433_; uint8_t v___x_434_; 
v___x_432_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_422_);
v___x_433_ = lean_unsigned_to_nat(4u);
v___x_434_ = lean_nat_dec_lt(v___x_432_, v___x_433_);
lean_dec(v___x_432_);
v___y_424_ = v___x_434_;
goto v___jp_423_;
}
else
{
v___y_424_ = v___x_431_;
goto v___jp_423_;
}
v___jp_423_:
{
if (v___y_424_ == 0)
{
lean_object* v_ks_425_; lean_object* v_vs_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v_ks_425_ = lean_ctor_get(v_newNode_422_, 0);
lean_inc_ref(v_ks_425_);
v_vs_426_ = lean_ctor_get(v_newNode_422_, 1);
lean_inc_ref(v_vs_426_);
lean_dec_ref(v_newNode_422_);
v___x_427_ = lean_unsigned_to_nat(0u);
v___x_428_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__2);
v___x_429_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___redArg(v_x_366_, v_ks_425_, v_vs_426_, v___x_427_, v___x_428_);
lean_dec_ref(v_vs_426_);
lean_dec_ref(v_ks_425_);
return v___x_429_;
}
else
{
return v_newNode_422_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___redArg(size_t v_depth_437_, lean_object* v_keys_438_, lean_object* v_vals_439_, lean_object* v_i_440_, lean_object* v_entries_441_){
_start:
{
lean_object* v___x_442_; uint8_t v___x_443_; 
v___x_442_ = lean_array_get_size(v_keys_438_);
v___x_443_ = lean_nat_dec_lt(v_i_440_, v___x_442_);
if (v___x_443_ == 0)
{
lean_dec(v_i_440_);
return v_entries_441_;
}
else
{
lean_object* v_k_444_; lean_object* v_v_445_; uint64_t v___x_446_; size_t v_h_447_; size_t v___x_448_; lean_object* v___x_449_; size_t v___x_450_; size_t v___x_451_; size_t v___x_452_; size_t v_h_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v_k_444_ = lean_array_fget_borrowed(v_keys_438_, v_i_440_);
v_v_445_ = lean_array_fget_borrowed(v_vals_439_, v_i_440_);
v___x_446_ = l_Lean_instHashableMVarId_hash(v_k_444_);
v_h_447_ = lean_uint64_to_usize(v___x_446_);
v___x_448_ = ((size_t)5ULL);
v___x_449_ = lean_unsigned_to_nat(1u);
v___x_450_ = ((size_t)1ULL);
v___x_451_ = lean_usize_sub(v_depth_437_, v___x_450_);
v___x_452_ = lean_usize_mul(v___x_448_, v___x_451_);
v_h_453_ = lean_usize_shift_right(v_h_447_, v___x_452_);
v___x_454_ = lean_nat_add(v_i_440_, v___x_449_);
lean_dec(v_i_440_);
lean_inc(v_v_445_);
lean_inc(v_k_444_);
v___x_455_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg(v_entries_441_, v_h_453_, v_depth_437_, v_k_444_, v_v_445_);
v_i_440_ = v___x_454_;
v_entries_441_ = v___x_455_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_depth_457_, lean_object* v_keys_458_, lean_object* v_vals_459_, lean_object* v_i_460_, lean_object* v_entries_461_){
_start:
{
size_t v_depth_boxed_462_; lean_object* v_res_463_; 
v_depth_boxed_462_ = lean_unbox_usize(v_depth_457_);
lean_dec(v_depth_457_);
v_res_463_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___redArg(v_depth_boxed_462_, v_keys_458_, v_vals_459_, v_i_460_, v_entries_461_);
lean_dec_ref(v_vals_459_);
lean_dec_ref(v_keys_458_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_464_, lean_object* v_x_465_, lean_object* v_x_466_, lean_object* v_x_467_, lean_object* v_x_468_){
_start:
{
size_t v_x_5950__boxed_469_; size_t v_x_5951__boxed_470_; lean_object* v_res_471_; 
v_x_5950__boxed_469_ = lean_unbox_usize(v_x_465_);
lean_dec(v_x_465_);
v_x_5951__boxed_470_ = lean_unbox_usize(v_x_466_);
lean_dec(v_x_466_);
v_res_471_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg(v_x_464_, v_x_5950__boxed_469_, v_x_5951__boxed_470_, v_x_467_, v_x_468_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0___redArg(lean_object* v_x_472_, lean_object* v_x_473_, lean_object* v_x_474_){
_start:
{
uint64_t v___x_475_; size_t v___x_476_; size_t v___x_477_; lean_object* v___x_478_; 
v___x_475_ = l_Lean_instHashableMVarId_hash(v_x_473_);
v___x_476_ = lean_uint64_to_usize(v___x_475_);
v___x_477_ = ((size_t)1ULL);
v___x_478_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg(v_x_472_, v___x_476_, v___x_477_, v_x_473_, v_x_474_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___redArg(lean_object* v_mvarId_479_, lean_object* v_fvars_480_, lean_object* v_mvarIdPending_481_, lean_object* v___y_482_, lean_object* v___y_483_){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v_mctx_487_; lean_object* v_cache_488_; lean_object* v_zetaDeltaFVarIds_489_; lean_object* v_postponed_490_; lean_object* v_diag_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_520_; 
v___x_485_ = lean_st_ref_get(v___y_483_);
lean_dec(v___x_485_);
v___x_486_ = lean_st_ref_take(v___y_482_);
v_mctx_487_ = lean_ctor_get(v___x_486_, 0);
v_cache_488_ = lean_ctor_get(v___x_486_, 1);
v_zetaDeltaFVarIds_489_ = lean_ctor_get(v___x_486_, 2);
v_postponed_490_ = lean_ctor_get(v___x_486_, 3);
v_diag_491_ = lean_ctor_get(v___x_486_, 4);
v_isSharedCheck_520_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_520_ == 0)
{
v___x_493_ = v___x_486_;
v_isShared_494_ = v_isSharedCheck_520_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_diag_491_);
lean_inc(v_postponed_490_);
lean_inc(v_zetaDeltaFVarIds_489_);
lean_inc(v_cache_488_);
lean_inc(v_mctx_487_);
lean_dec(v___x_486_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_520_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v_depth_495_; lean_object* v_levelAssignDepth_496_; lean_object* v_lmvarCounter_497_; lean_object* v_mvarCounter_498_; lean_object* v_lDecls_499_; lean_object* v_decls_500_; lean_object* v_userNames_501_; lean_object* v_lAssignment_502_; lean_object* v_eAssignment_503_; lean_object* v_dAssignment_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_519_; 
v_depth_495_ = lean_ctor_get(v_mctx_487_, 0);
v_levelAssignDepth_496_ = lean_ctor_get(v_mctx_487_, 1);
v_lmvarCounter_497_ = lean_ctor_get(v_mctx_487_, 2);
v_mvarCounter_498_ = lean_ctor_get(v_mctx_487_, 3);
v_lDecls_499_ = lean_ctor_get(v_mctx_487_, 4);
v_decls_500_ = lean_ctor_get(v_mctx_487_, 5);
v_userNames_501_ = lean_ctor_get(v_mctx_487_, 6);
v_lAssignment_502_ = lean_ctor_get(v_mctx_487_, 7);
v_eAssignment_503_ = lean_ctor_get(v_mctx_487_, 8);
v_dAssignment_504_ = lean_ctor_get(v_mctx_487_, 9);
v_isSharedCheck_519_ = !lean_is_exclusive(v_mctx_487_);
if (v_isSharedCheck_519_ == 0)
{
v___x_506_ = v_mctx_487_;
v_isShared_507_ = v_isSharedCheck_519_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_dAssignment_504_);
lean_inc(v_eAssignment_503_);
lean_inc(v_lAssignment_502_);
lean_inc(v_userNames_501_);
lean_inc(v_decls_500_);
lean_inc(v_lDecls_499_);
lean_inc(v_mvarCounter_498_);
lean_inc(v_lmvarCounter_497_);
lean_inc(v_levelAssignDepth_496_);
lean_inc(v_depth_495_);
lean_dec(v_mctx_487_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_519_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_511_; 
v___x_508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_508_, 0, v_fvars_480_);
lean_ctor_set(v___x_508_, 1, v_mvarIdPending_481_);
v___x_509_ = l_Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0___redArg(v_dAssignment_504_, v_mvarId_479_, v___x_508_);
if (v_isShared_507_ == 0)
{
lean_ctor_set(v___x_506_, 9, v___x_509_);
v___x_511_ = v___x_506_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_depth_495_);
lean_ctor_set(v_reuseFailAlloc_518_, 1, v_levelAssignDepth_496_);
lean_ctor_set(v_reuseFailAlloc_518_, 2, v_lmvarCounter_497_);
lean_ctor_set(v_reuseFailAlloc_518_, 3, v_mvarCounter_498_);
lean_ctor_set(v_reuseFailAlloc_518_, 4, v_lDecls_499_);
lean_ctor_set(v_reuseFailAlloc_518_, 5, v_decls_500_);
lean_ctor_set(v_reuseFailAlloc_518_, 6, v_userNames_501_);
lean_ctor_set(v_reuseFailAlloc_518_, 7, v_lAssignment_502_);
lean_ctor_set(v_reuseFailAlloc_518_, 8, v_eAssignment_503_);
lean_ctor_set(v_reuseFailAlloc_518_, 9, v___x_509_);
v___x_511_ = v_reuseFailAlloc_518_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
lean_object* v___x_513_; 
if (v_isShared_494_ == 0)
{
lean_ctor_set(v___x_493_, 0, v___x_511_);
v___x_513_ = v___x_493_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v___x_511_);
lean_ctor_set(v_reuseFailAlloc_517_, 1, v_cache_488_);
lean_ctor_set(v_reuseFailAlloc_517_, 2, v_zetaDeltaFVarIds_489_);
lean_ctor_set(v_reuseFailAlloc_517_, 3, v_postponed_490_);
lean_ctor_set(v_reuseFailAlloc_517_, 4, v_diag_491_);
v___x_513_ = v_reuseFailAlloc_517_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_514_ = lean_st_ref_set(v___y_482_, v___x_513_);
v___x_515_ = lean_box(0);
v___x_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_516_, 0, v___x_515_);
return v___x_516_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___redArg___boxed(lean_object* v_mvarId_521_, lean_object* v_fvars_522_, lean_object* v_mvarIdPending_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___redArg(v_mvarId_521_, v_fvars_522_, v_mvarIdPending_523_, v___y_524_, v___y_525_);
lean_dec(v___y_525_);
lean_dec(v___y_524_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___redArg(lean_object* v_mvarId_528_, lean_object* v_val_529_, lean_object* v___y_530_, lean_object* v___y_531_){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v_mctx_535_; lean_object* v_cache_536_; lean_object* v_zetaDeltaFVarIds_537_; lean_object* v_postponed_538_; lean_object* v_diag_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_567_; 
v___x_533_ = lean_st_ref_get(v___y_531_);
lean_dec(v___x_533_);
v___x_534_ = lean_st_ref_take(v___y_530_);
v_mctx_535_ = lean_ctor_get(v___x_534_, 0);
v_cache_536_ = lean_ctor_get(v___x_534_, 1);
v_zetaDeltaFVarIds_537_ = lean_ctor_get(v___x_534_, 2);
v_postponed_538_ = lean_ctor_get(v___x_534_, 3);
v_diag_539_ = lean_ctor_get(v___x_534_, 4);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_567_ == 0)
{
v___x_541_ = v___x_534_;
v_isShared_542_ = v_isSharedCheck_567_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_diag_539_);
lean_inc(v_postponed_538_);
lean_inc(v_zetaDeltaFVarIds_537_);
lean_inc(v_cache_536_);
lean_inc(v_mctx_535_);
lean_dec(v___x_534_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_567_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v_depth_543_; lean_object* v_levelAssignDepth_544_; lean_object* v_lmvarCounter_545_; lean_object* v_mvarCounter_546_; lean_object* v_lDecls_547_; lean_object* v_decls_548_; lean_object* v_userNames_549_; lean_object* v_lAssignment_550_; lean_object* v_eAssignment_551_; lean_object* v_dAssignment_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_566_; 
v_depth_543_ = lean_ctor_get(v_mctx_535_, 0);
v_levelAssignDepth_544_ = lean_ctor_get(v_mctx_535_, 1);
v_lmvarCounter_545_ = lean_ctor_get(v_mctx_535_, 2);
v_mvarCounter_546_ = lean_ctor_get(v_mctx_535_, 3);
v_lDecls_547_ = lean_ctor_get(v_mctx_535_, 4);
v_decls_548_ = lean_ctor_get(v_mctx_535_, 5);
v_userNames_549_ = lean_ctor_get(v_mctx_535_, 6);
v_lAssignment_550_ = lean_ctor_get(v_mctx_535_, 7);
v_eAssignment_551_ = lean_ctor_get(v_mctx_535_, 8);
v_dAssignment_552_ = lean_ctor_get(v_mctx_535_, 9);
v_isSharedCheck_566_ = !lean_is_exclusive(v_mctx_535_);
if (v_isSharedCheck_566_ == 0)
{
v___x_554_ = v_mctx_535_;
v_isShared_555_ = v_isSharedCheck_566_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_dAssignment_552_);
lean_inc(v_eAssignment_551_);
lean_inc(v_lAssignment_550_);
lean_inc(v_userNames_549_);
lean_inc(v_decls_548_);
lean_inc(v_lDecls_547_);
lean_inc(v_mvarCounter_546_);
lean_inc(v_lmvarCounter_545_);
lean_inc(v_levelAssignDepth_544_);
lean_inc(v_depth_543_);
lean_dec(v_mctx_535_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_566_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_556_; lean_object* v___x_558_; 
v___x_556_ = l_Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0___redArg(v_eAssignment_551_, v_mvarId_528_, v_val_529_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 8, v___x_556_);
v___x_558_ = v___x_554_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_depth_543_);
lean_ctor_set(v_reuseFailAlloc_565_, 1, v_levelAssignDepth_544_);
lean_ctor_set(v_reuseFailAlloc_565_, 2, v_lmvarCounter_545_);
lean_ctor_set(v_reuseFailAlloc_565_, 3, v_mvarCounter_546_);
lean_ctor_set(v_reuseFailAlloc_565_, 4, v_lDecls_547_);
lean_ctor_set(v_reuseFailAlloc_565_, 5, v_decls_548_);
lean_ctor_set(v_reuseFailAlloc_565_, 6, v_userNames_549_);
lean_ctor_set(v_reuseFailAlloc_565_, 7, v_lAssignment_550_);
lean_ctor_set(v_reuseFailAlloc_565_, 8, v___x_556_);
lean_ctor_set(v_reuseFailAlloc_565_, 9, v_dAssignment_552_);
v___x_558_ = v_reuseFailAlloc_565_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
lean_object* v___x_560_; 
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 0, v___x_558_);
v___x_560_ = v___x_541_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v___x_558_);
lean_ctor_set(v_reuseFailAlloc_564_, 1, v_cache_536_);
lean_ctor_set(v_reuseFailAlloc_564_, 2, v_zetaDeltaFVarIds_537_);
lean_ctor_set(v_reuseFailAlloc_564_, 3, v_postponed_538_);
lean_ctor_set(v_reuseFailAlloc_564_, 4, v_diag_539_);
v___x_560_ = v_reuseFailAlloc_564_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_561_ = lean_st_ref_set(v___y_530_, v___x_560_);
v___x_562_ = lean_box(0);
v___x_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
return v___x_563_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___redArg___boxed(lean_object* v_mvarId_568_, lean_object* v_val_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___redArg(v_mvarId_568_, v_val_569_, v___y_570_, v___y_571_);
lean_dec(v___y_571_);
lean_dec(v___y_570_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__1(lean_object* v___x_574_, lean_object* v_userName_575_, lean_object* v_lctx_576_, lean_object* v_localInstances_577_, lean_object* v_type_578_, lean_object* v_max_579_, lean_object* v_mvarId_580_, lean_object* v_lctx_581_, lean_object* v_localInsts_582_, lean_object* v_fvars_583_, lean_object* v_type_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_){
_start:
{
lean_object* v___x_592_; uint8_t v___x_593_; 
v___x_592_ = lean_array_get_size(v_fvars_583_);
v___x_593_ = lean_nat_dec_eq(v___x_592_, v___x_574_);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; 
v___x_594_ = l_Lean_Meta_Sym_instantiateRevRangeS(v_type_584_, v___x_574_, v___x_592_, v_fvars_583_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
if (lean_obj_tag(v___x_594_) == 0)
{
lean_object* v_a_595_; uint8_t v___x_596_; lean_object* v___x_597_; 
v_a_595_ = lean_ctor_get(v___x_594_, 0);
lean_inc(v_a_595_);
lean_dec_ref(v___x_594_);
v___x_596_ = 2;
lean_inc(v___x_574_);
v___x_597_ = l_Lean_Meta_mkFreshExprMVarAt(v_lctx_581_, v_localInsts_582_, v_a_595_, v___x_596_, v_userName_575_, v___x_574_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
lean_inc(v_a_598_);
lean_dec_ref(v___x_597_);
v___x_599_ = lean_box(0);
lean_inc(v___x_574_);
lean_inc_ref(v_type_578_);
v___x_600_ = l_Lean_Meta_mkFreshExprMVarAt(v_lctx_576_, v_localInstances_577_, v_type_578_, v___x_596_, v___x_599_, v___x_574_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v_a_601_; lean_object* v___x_602_; lean_object* v___y_604_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v_a_601_ = lean_ctor_get(v___x_600_, 0);
lean_inc(v_a_601_);
lean_dec_ref(v___x_600_);
v___x_602_ = l_Lean_Expr_mvarId_x21(v_a_598_);
lean_dec(v_a_598_);
v___x_614_ = l_Lean_Expr_mvarId_x21(v_a_601_);
lean_inc(v___x_602_);
lean_inc_ref(v_fvars_583_);
v___x_615_ = l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___redArg(v___x_614_, v_fvars_583_, v___x_602_, v___y_588_, v___y_590_);
lean_dec_ref(v___x_615_);
v___x_616_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkAppBVars(v_a_601_, v___x_592_);
v___x_617_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkValueLoop(v_max_579_, v___x_574_, v_type_578_, v___x_616_);
lean_dec_ref(v___x_616_);
lean_dec(v___x_574_);
v___x_618_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___redArg(v_mvarId_580_, v___x_617_, v___y_588_, v___y_590_);
v___y_604_ = v___x_618_;
goto v___jp_603_;
v___jp_603_:
{
lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_612_; 
v_isSharedCheck_612_ = !lean_is_exclusive(v___y_604_);
if (v_isSharedCheck_612_ == 0)
{
lean_object* v_unused_613_; 
v_unused_613_ = lean_ctor_get(v___y_604_, 0);
lean_dec(v_unused_613_);
v___x_606_ = v___y_604_;
v_isShared_607_ = v_isSharedCheck_612_;
goto v_resetjp_605_;
}
else
{
lean_dec(v___y_604_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_612_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_608_; lean_object* v___x_610_; 
v___x_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_608_, 0, v_fvars_583_);
lean_ctor_set(v___x_608_, 1, v___x_602_);
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 0, v___x_608_);
v___x_610_ = v___x_606_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_608_);
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
lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_626_; 
lean_dec(v_a_598_);
lean_dec_ref(v_fvars_583_);
lean_dec(v_mvarId_580_);
lean_dec_ref(v_type_578_);
lean_dec(v___x_574_);
v_a_619_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_626_ == 0)
{
v___x_621_ = v___x_600_;
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v___x_600_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_624_; 
if (v_isShared_622_ == 0)
{
v___x_624_ = v___x_621_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_a_619_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
}
}
else
{
lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_634_; 
lean_dec_ref(v_fvars_583_);
lean_dec(v_mvarId_580_);
lean_dec_ref(v_type_578_);
lean_dec_ref(v_localInstances_577_);
lean_dec_ref(v_lctx_576_);
lean_dec(v___x_574_);
v_a_627_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_634_ == 0)
{
v___x_629_ = v___x_597_;
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v___x_597_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_627_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
}
}
else
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
lean_dec_ref(v_fvars_583_);
lean_dec_ref(v_localInsts_582_);
lean_dec_ref(v_lctx_581_);
lean_dec(v_mvarId_580_);
lean_dec_ref(v_type_578_);
lean_dec_ref(v_localInstances_577_);
lean_dec_ref(v_lctx_576_);
lean_dec(v_userName_575_);
lean_dec(v___x_574_);
v_a_635_ = lean_ctor_get(v___x_594_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v___x_594_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_594_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
}
else
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
lean_dec_ref(v_type_584_);
lean_dec_ref(v_fvars_583_);
lean_dec_ref(v_localInsts_582_);
lean_dec_ref(v_lctx_581_);
lean_dec_ref(v_type_578_);
lean_dec_ref(v_localInstances_577_);
lean_dec_ref(v_lctx_576_);
lean_dec(v_userName_575_);
v___x_643_ = lean_mk_empty_array_with_capacity(v___x_574_);
lean_dec(v___x_574_);
v___x_644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_643_);
lean_ctor_set(v___x_644_, 1, v_mvarId_580_);
v___x_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
return v___x_645_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__1___boxed(lean_object** _args){
lean_object* v___x_646_ = _args[0];
lean_object* v_userName_647_ = _args[1];
lean_object* v_lctx_648_ = _args[2];
lean_object* v_localInstances_649_ = _args[3];
lean_object* v_type_650_ = _args[4];
lean_object* v_max_651_ = _args[5];
lean_object* v_mvarId_652_ = _args[6];
lean_object* v_lctx_653_ = _args[7];
lean_object* v_localInsts_654_ = _args[8];
lean_object* v_fvars_655_ = _args[9];
lean_object* v_type_656_ = _args[10];
lean_object* v___y_657_ = _args[11];
lean_object* v___y_658_ = _args[12];
lean_object* v___y_659_ = _args[13];
lean_object* v___y_660_ = _args[14];
lean_object* v___y_661_ = _args[15];
lean_object* v___y_662_ = _args[16];
lean_object* v___y_663_ = _args[17];
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__1(v___x_646_, v_userName_647_, v_lctx_648_, v_localInstances_649_, v_type_650_, v_max_651_, v_mvarId_652_, v_lctx_653_, v_localInsts_654_, v_fvars_655_, v_type_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_);
lean_dec(v___y_662_);
lean_dec_ref(v___y_661_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
lean_dec(v_max_651_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__2(lean_object* v_env_665_, lean_object* v_localInsts_666_, lean_object* v_fvar_667_, lean_object* v_type_668_){
_start:
{
lean_object* v___x_669_; 
v___x_669_ = l_Lean_Meta_Sym_isClass_x3f(v_env_665_, v_type_668_);
if (lean_obj_tag(v___x_669_) == 1)
{
lean_object* v_val_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v_val_670_ = lean_ctor_get(v___x_669_, 0);
lean_inc(v_val_670_);
lean_dec_ref(v___x_669_);
v___x_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_671_, 0, v_val_670_);
lean_ctor_set(v___x_671_, 1, v_fvar_667_);
v___x_672_ = lean_array_push(v_localInsts_666_, v___x_671_);
return v___x_672_;
}
else
{
lean_dec(v___x_669_);
lean_dec_ref(v_fvar_667_);
return v_localInsts_666_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__2(size_t v_sz_673_, size_t v_i_674_, lean_object* v_bs_675_){
_start:
{
uint8_t v___x_676_; 
v___x_676_ = lean_usize_dec_lt(v_i_674_, v_sz_673_);
if (v___x_676_ == 0)
{
return v_bs_675_;
}
else
{
lean_object* v_v_677_; lean_object* v___x_678_; lean_object* v_bs_x27_679_; lean_object* v___x_680_; size_t v___x_681_; size_t v___x_682_; lean_object* v___x_683_; 
v_v_677_ = lean_array_uget(v_bs_675_, v_i_674_);
v___x_678_ = lean_unsigned_to_nat(0u);
v_bs_x27_679_ = lean_array_uset(v_bs_675_, v_i_674_, v___x_678_);
v___x_680_ = l_Lean_Expr_fvarId_x21(v_v_677_);
lean_dec(v_v_677_);
v___x_681_ = ((size_t)1ULL);
v___x_682_ = lean_usize_add(v_i_674_, v___x_681_);
v___x_683_ = lean_array_uset(v_bs_x27_679_, v_i_674_, v___x_680_);
v_i_674_ = v___x_682_;
v_bs_675_ = v___x_683_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__2___boxed(lean_object* v_sz_685_, lean_object* v_i_686_, lean_object* v_bs_687_){
_start:
{
size_t v_sz_boxed_688_; size_t v_i_boxed_689_; lean_object* v_res_690_; 
v_sz_boxed_688_ = lean_unbox_usize(v_sz_685_);
lean_dec(v_sz_685_);
v_i_boxed_689_ = lean_unbox_usize(v_i_686_);
lean_dec(v_i_686_);
v_res_690_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__2(v_sz_boxed_688_, v_i_boxed_689_, v_bs_687_);
return v_res_690_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__0(void){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = lean_unsigned_to_nat(0u);
v___x_692_ = lean_mk_empty_array_with_capacity(v___x_691_);
return v___x_692_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1(void){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_693_ = lean_unsigned_to_nat(0u);
v___x_694_ = lean_mk_empty_array_with_capacity(v___x_693_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore(lean_object* v_mvarId_695_, lean_object* v_max_696_, lean_object* v_names_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_){
_start:
{
lean_object* v___x_705_; uint8_t v___x_706_; 
v___x_705_ = lean_unsigned_to_nat(0u);
v___x_706_ = lean_nat_dec_eq(v_max_696_, v___x_705_);
if (v___x_706_ == 0)
{
lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_707_ = lean_st_ref_get(v_a_703_);
lean_inc(v_mvarId_695_);
v___x_708_ = l_Lean_MVarId_getDecl(v_mvarId_695_, v_a_700_, v_a_701_, v_a_702_, v_a_703_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v_a_709_; lean_object* v_env_710_; lean_object* v_userName_711_; lean_object* v_lctx_712_; lean_object* v_type_713_; lean_object* v_localInstances_714_; lean_object* v___f_715_; lean_object* v___f_716_; lean_object* v___f_717_; lean_object* v___x_718_; lean_object* v___x_719_; 
v_a_709_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_a_709_);
lean_dec_ref(v___x_708_);
v_env_710_ = lean_ctor_get(v___x_707_, 0);
lean_inc_ref(v_env_710_);
lean_dec(v___x_707_);
v_userName_711_ = lean_ctor_get(v_a_709_, 0);
lean_inc(v_userName_711_);
v_lctx_712_ = lean_ctor_get(v_a_709_, 1);
lean_inc_ref_n(v_lctx_712_, 2);
v_type_713_ = lean_ctor_get(v_a_709_, 2);
lean_inc_ref_n(v_type_713_, 2);
v_localInstances_714_ = lean_ctor_get(v_a_709_, 4);
lean_inc_ref_n(v_localInstances_714_, 2);
lean_dec(v_a_709_);
v___f_715_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__0___boxed), 8, 1);
lean_closure_set(v___f_715_, 0, v_names_697_);
lean_inc(v_max_696_);
v___f_716_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__1___boxed), 18, 7);
lean_closure_set(v___f_716_, 0, v___x_705_);
lean_closure_set(v___f_716_, 1, v_userName_711_);
lean_closure_set(v___f_716_, 2, v_lctx_712_);
lean_closure_set(v___f_716_, 3, v_localInstances_714_);
lean_closure_set(v___f_716_, 4, v_type_713_);
lean_closure_set(v___f_716_, 5, v_max_696_);
lean_closure_set(v___f_716_, 6, v_mvarId_695_);
v___f_717_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__2), 4, 1);
lean_closure_set(v___f_717_, 0, v_env_710_);
v___x_718_ = lean_obj_once(&l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__0, &l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__0_once, _init_l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__0);
v___x_719_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit(v_max_696_, v___f_716_, v___f_715_, v___f_717_, v___x_705_, v_lctx_712_, v_localInstances_714_, v___x_718_, v_type_713_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_);
lean_dec(v_max_696_);
if (lean_obj_tag(v___x_719_) == 0)
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_739_; 
v_a_720_ = lean_ctor_get(v___x_719_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_739_ == 0)
{
v___x_722_ = v___x_719_;
v_isShared_723_ = v_isSharedCheck_739_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v___x_719_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_739_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v_fst_724_; lean_object* v_snd_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_738_; 
v_fst_724_ = lean_ctor_get(v_a_720_, 0);
v_snd_725_ = lean_ctor_get(v_a_720_, 1);
v_isSharedCheck_738_ = !lean_is_exclusive(v_a_720_);
if (v_isSharedCheck_738_ == 0)
{
v___x_727_ = v_a_720_;
v_isShared_728_ = v_isSharedCheck_738_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_snd_725_);
lean_inc(v_fst_724_);
lean_dec(v_a_720_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_738_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
size_t v_sz_729_; size_t v___x_730_; lean_object* v___x_731_; lean_object* v___x_733_; 
v_sz_729_ = lean_array_size(v_fst_724_);
v___x_730_ = ((size_t)0ULL);
v___x_731_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__2(v_sz_729_, v___x_730_, v_fst_724_);
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 0, v___x_731_);
v___x_733_ = v___x_727_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v___x_731_);
lean_ctor_set(v_reuseFailAlloc_737_, 1, v_snd_725_);
v___x_733_ = v_reuseFailAlloc_737_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_735_; 
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 0, v___x_733_);
v___x_735_ = v___x_722_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v___x_733_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
}
}
else
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_747_; 
v_a_740_ = lean_ctor_get(v___x_719_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_747_ == 0)
{
v___x_742_ = v___x_719_;
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_719_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_740_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
else
{
lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_755_; 
lean_dec(v___x_707_);
lean_dec_ref(v_names_697_);
lean_dec(v_max_696_);
lean_dec(v_mvarId_695_);
v_a_748_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_755_ == 0)
{
v___x_750_ = v___x_708_;
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_dec(v___x_708_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_753_; 
if (v_isShared_751_ == 0)
{
v___x_753_ = v___x_750_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_a_748_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
}
}
else
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
lean_dec_ref(v_names_697_);
lean_dec(v_max_696_);
v___x_756_ = lean_obj_once(&l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1, &l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1_once, _init_l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1);
v___x_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_757_, 0, v___x_756_);
lean_ctor_set(v___x_757_, 1, v_mvarId_695_);
v___x_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_758_, 0, v___x_757_);
return v___x_758_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___boxed(lean_object* v_mvarId_759_, lean_object* v_max_760_, lean_object* v_names_761_, lean_object* v_a_762_, lean_object* v_a_763_, lean_object* v_a_764_, lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_, lean_object* v_a_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore(v_mvarId_759_, v_max_760_, v_names_761_, v_a_762_, v_a_763_, v_a_764_, v_a_765_, v_a_766_, v_a_767_);
lean_dec(v_a_767_);
lean_dec_ref(v_a_766_);
lean_dec(v_a_765_);
lean_dec_ref(v_a_764_);
lean_dec(v_a_763_);
lean_dec_ref(v_a_762_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0(lean_object* v_mvarId_770_, lean_object* v_fvars_771_, lean_object* v_mvarIdPending_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_){
_start:
{
lean_object* v___x_778_; 
v___x_778_ = l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___redArg(v_mvarId_770_, v_fvars_771_, v_mvarIdPending_772_, v___y_774_, v___y_776_);
return v___x_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___boxed(lean_object* v_mvarId_779_, lean_object* v_fvars_780_, lean_object* v_mvarIdPending_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0(v_mvarId_779_, v_fvars_780_, v_mvarIdPending_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_);
lean_dec(v___y_785_);
lean_dec_ref(v___y_784_);
lean_dec(v___y_783_);
lean_dec_ref(v___y_782_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1(lean_object* v_mvarId_788_, lean_object* v_val_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_){
_start:
{
lean_object* v___x_795_; 
v___x_795_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___redArg(v_mvarId_788_, v_val_789_, v___y_791_, v___y_793_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___boxed(lean_object* v_mvarId_796_, lean_object* v_val_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1(v_mvarId_796_, v_val_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_);
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0(lean_object* v_00_u03b2_804_, lean_object* v_x_805_, lean_object* v_x_806_, lean_object* v_x_807_){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = l_Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0___redArg(v_x_805_, v_x_806_, v_x_807_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_809_, lean_object* v_x_810_, size_t v_x_811_, size_t v_x_812_, lean_object* v_x_813_, lean_object* v_x_814_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg(v_x_810_, v_x_811_, v_x_812_, v_x_813_, v_x_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_816_, lean_object* v_x_817_, lean_object* v_x_818_, lean_object* v_x_819_, lean_object* v_x_820_, lean_object* v_x_821_){
_start:
{
size_t v_x_6537__boxed_822_; size_t v_x_6538__boxed_823_; lean_object* v_res_824_; 
v_x_6537__boxed_822_ = lean_unbox_usize(v_x_818_);
lean_dec(v_x_818_);
v_x_6538__boxed_823_ = lean_unbox_usize(v_x_819_);
lean_dec(v_x_819_);
v_res_824_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1(v_00_u03b2_816_, v_x_817_, v_x_6537__boxed_822_, v_x_6538__boxed_823_, v_x_820_, v_x_821_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_825_, lean_object* v_n_826_, lean_object* v_k_827_, lean_object* v_v_828_){
_start:
{
lean_object* v___x_829_; 
v___x_829_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4___redArg(v_n_826_, v_k_827_, v_v_828_);
return v___x_829_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_830_, size_t v_depth_831_, lean_object* v_keys_832_, lean_object* v_vals_833_, lean_object* v_heq_834_, lean_object* v_i_835_, lean_object* v_entries_836_){
_start:
{
lean_object* v___x_837_; 
v___x_837_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___redArg(v_depth_831_, v_keys_832_, v_vals_833_, v_i_835_, v_entries_836_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03b2_838_, lean_object* v_depth_839_, lean_object* v_keys_840_, lean_object* v_vals_841_, lean_object* v_heq_842_, lean_object* v_i_843_, lean_object* v_entries_844_){
_start:
{
size_t v_depth_boxed_845_; lean_object* v_res_846_; 
v_depth_boxed_845_ = lean_unbox_usize(v_depth_839_);
lean_dec(v_depth_839_);
v_res_846_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5(v_00_u03b2_838_, v_depth_boxed_845_, v_keys_840_, v_vals_841_, v_heq_842_, v_i_843_, v_entries_844_);
lean_dec_ref(v_vals_841_);
lean_dec_ref(v_keys_840_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object* v_00_u03b2_847_, lean_object* v_x_848_, lean_object* v_x_849_, lean_object* v_x_850_, lean_object* v_x_851_){
_start:
{
lean_object* v___x_852_; 
v___x_852_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(v_x_848_, v_x_849_, v_x_850_, v_x_851_);
return v___x_852_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_hugeNat(void){
_start:
{
lean_object* v___x_853_; 
v___x_853_ = lean_unsigned_to_nat(1000000u);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorIdx(lean_object* v_x_854_){
_start:
{
if (lean_obj_tag(v_x_854_) == 0)
{
lean_object* v___x_855_; 
v___x_855_ = lean_unsigned_to_nat(0u);
return v___x_855_;
}
else
{
lean_object* v___x_856_; 
v___x_856_ = lean_unsigned_to_nat(1u);
return v___x_856_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorIdx___boxed(lean_object* v_x_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_Lean_Meta_Sym_IntrosResult_ctorIdx(v_x_857_);
lean_dec(v_x_857_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorElim___redArg(lean_object* v_t_859_, lean_object* v_k_860_){
_start:
{
if (lean_obj_tag(v_t_859_) == 0)
{
return v_k_860_;
}
else
{
lean_object* v_newDecls_861_; lean_object* v_mvarId_862_; lean_object* v___x_863_; 
v_newDecls_861_ = lean_ctor_get(v_t_859_, 0);
lean_inc_ref(v_newDecls_861_);
v_mvarId_862_ = lean_ctor_get(v_t_859_, 1);
lean_inc(v_mvarId_862_);
lean_dec_ref(v_t_859_);
v___x_863_ = lean_apply_2(v_k_860_, v_newDecls_861_, v_mvarId_862_);
return v___x_863_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorElim(lean_object* v_motive_864_, lean_object* v_ctorIdx_865_, lean_object* v_t_866_, lean_object* v_h_867_, lean_object* v_k_868_){
_start:
{
lean_object* v___x_869_; 
v___x_869_ = l_Lean_Meta_Sym_IntrosResult_ctorElim___redArg(v_t_866_, v_k_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorElim___boxed(lean_object* v_motive_870_, lean_object* v_ctorIdx_871_, lean_object* v_t_872_, lean_object* v_h_873_, lean_object* v_k_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l_Lean_Meta_Sym_IntrosResult_ctorElim(v_motive_870_, v_ctorIdx_871_, v_t_872_, v_h_873_, v_k_874_);
lean_dec(v_ctorIdx_871_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_failed_elim___redArg(lean_object* v_t_876_, lean_object* v_failed_877_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_Lean_Meta_Sym_IntrosResult_ctorElim___redArg(v_t_876_, v_failed_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_failed_elim(lean_object* v_motive_879_, lean_object* v_t_880_, lean_object* v_h_881_, lean_object* v_failed_882_){
_start:
{
lean_object* v___x_883_; 
v___x_883_ = l_Lean_Meta_Sym_IntrosResult_ctorElim___redArg(v_t_880_, v_failed_882_);
return v___x_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_goal_elim___redArg(lean_object* v_t_884_, lean_object* v_goal_885_){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = l_Lean_Meta_Sym_IntrosResult_ctorElim___redArg(v_t_884_, v_goal_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_goal_elim(lean_object* v_motive_887_, lean_object* v_t_888_, lean_object* v_h_889_, lean_object* v_goal_890_){
_start:
{
lean_object* v___x_891_; 
v___x_891_ = l_Lean_Meta_Sym_IntrosResult_ctorElim___redArg(v_t_888_, v_goal_890_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_intros(lean_object* v_mvarId_892_, lean_object* v_names_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_){
_start:
{
lean_object* v_result_902_; lean_object* v___x_918_; lean_object* v___x_919_; uint8_t v___x_920_; 
v___x_918_ = lean_array_get_size(v_names_893_);
v___x_919_ = lean_unsigned_to_nat(0u);
v___x_920_ = lean_nat_dec_eq(v___x_918_, v___x_919_);
if (v___x_920_ == 0)
{
lean_object* v___x_921_; 
v___x_921_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore(v_mvarId_892_, v___x_918_, v_names_893_, v_a_894_, v_a_895_, v_a_896_, v_a_897_, v_a_898_, v_a_899_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_a_922_; 
v_a_922_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_a_922_);
lean_dec_ref(v___x_921_);
v_result_902_ = v_a_922_;
goto v___jp_901_;
}
else
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
v_a_923_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_930_ == 0)
{
v___x_925_ = v___x_921_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_921_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_923_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
}
else
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
lean_dec_ref(v_names_893_);
v___x_931_ = lean_unsigned_to_nat(1000000u);
v___x_932_ = lean_obj_once(&l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1, &l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1_once, _init_l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1);
v___x_933_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore(v_mvarId_892_, v___x_931_, v___x_932_, v_a_894_, v_a_895_, v_a_896_, v_a_897_, v_a_898_, v_a_899_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v_a_934_; 
v_a_934_ = lean_ctor_get(v___x_933_, 0);
lean_inc(v_a_934_);
lean_dec_ref(v___x_933_);
v_result_902_ = v_a_934_;
goto v___jp_901_;
}
else
{
lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_942_; 
v_a_935_ = lean_ctor_get(v___x_933_, 0);
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_942_ == 0)
{
v___x_937_ = v___x_933_;
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_dec(v___x_933_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_940_; 
if (v_isShared_938_ == 0)
{
v___x_940_ = v___x_937_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_a_935_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
}
v___jp_901_:
{
lean_object* v_fst_903_; lean_object* v_snd_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_917_; 
v_fst_903_ = lean_ctor_get(v_result_902_, 0);
v_snd_904_ = lean_ctor_get(v_result_902_, 1);
v_isSharedCheck_917_ = !lean_is_exclusive(v_result_902_);
if (v_isSharedCheck_917_ == 0)
{
v___x_906_ = v_result_902_;
v_isShared_907_ = v_isSharedCheck_917_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_snd_904_);
lean_inc(v_fst_903_);
lean_dec(v_result_902_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_917_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_908_; lean_object* v___x_909_; uint8_t v___x_910_; 
v___x_908_ = lean_array_get_size(v_fst_903_);
v___x_909_ = lean_unsigned_to_nat(0u);
v___x_910_ = lean_nat_dec_eq(v___x_908_, v___x_909_);
if (v___x_910_ == 0)
{
lean_object* v___x_912_; 
if (v_isShared_907_ == 0)
{
lean_ctor_set_tag(v___x_906_, 1);
v___x_912_ = v___x_906_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_fst_903_);
lean_ctor_set(v_reuseFailAlloc_914_, 1, v_snd_904_);
v___x_912_ = v_reuseFailAlloc_914_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
lean_object* v___x_913_; 
v___x_913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_913_, 0, v___x_912_);
return v___x_913_;
}
}
else
{
lean_object* v___x_915_; lean_object* v___x_916_; 
lean_del_object(v___x_906_);
lean_dec(v_snd_904_);
lean_dec(v_fst_903_);
v___x_915_ = lean_box(0);
v___x_916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_916_, 0, v___x_915_);
return v___x_916_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_intros___boxed(lean_object* v_mvarId_943_, lean_object* v_names_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Lean_Meta_Sym_intros(v_mvarId_943_, v_names_944_, v_a_945_, v_a_946_, v_a_947_, v_a_948_, v_a_949_, v_a_950_);
lean_dec(v_a_950_);
lean_dec_ref(v_a_949_);
lean_dec(v_a_948_);
lean_dec_ref(v_a_947_);
lean_dec(v_a_946_);
lean_dec_ref(v_a_945_);
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_introN(lean_object* v_mvarId_953_, lean_object* v_num_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_){
_start:
{
lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_962_ = lean_obj_once(&l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1, &l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1_once, _init_l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1);
lean_inc(v_num_954_);
v___x_963_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore(v_mvarId_953_, v_num_954_, v___x_962_, v_a_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_);
if (lean_obj_tag(v___x_963_) == 0)
{
lean_object* v_a_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_986_; 
v_a_964_ = lean_ctor_get(v___x_963_, 0);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_963_);
if (v_isSharedCheck_986_ == 0)
{
v___x_966_ = v___x_963_;
v_isShared_967_ = v_isSharedCheck_986_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_a_964_);
lean_dec(v___x_963_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_986_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v_fst_968_; lean_object* v_snd_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_985_; 
v_fst_968_ = lean_ctor_get(v_a_964_, 0);
v_snd_969_ = lean_ctor_get(v_a_964_, 1);
v_isSharedCheck_985_ = !lean_is_exclusive(v_a_964_);
if (v_isSharedCheck_985_ == 0)
{
v___x_971_ = v_a_964_;
v_isShared_972_ = v_isSharedCheck_985_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_snd_969_);
lean_inc(v_fst_968_);
lean_dec(v_a_964_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_985_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_973_; uint8_t v___x_974_; 
v___x_973_ = lean_array_get_size(v_fst_968_);
v___x_974_ = lean_nat_dec_eq(v___x_973_, v_num_954_);
lean_dec(v_num_954_);
if (v___x_974_ == 0)
{
lean_object* v___x_975_; lean_object* v___x_977_; 
lean_del_object(v___x_971_);
lean_dec(v_snd_969_);
lean_dec(v_fst_968_);
v___x_975_ = lean_box(0);
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 0, v___x_975_);
v___x_977_ = v___x_966_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v___x_975_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
else
{
lean_object* v___x_980_; 
if (v_isShared_972_ == 0)
{
lean_ctor_set_tag(v___x_971_, 1);
v___x_980_ = v___x_971_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_fst_968_);
lean_ctor_set(v_reuseFailAlloc_984_, 1, v_snd_969_);
v___x_980_ = v_reuseFailAlloc_984_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
lean_object* v___x_982_; 
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 0, v___x_980_);
v___x_982_ = v___x_966_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v___x_980_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
}
}
}
else
{
lean_object* v_a_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_994_; 
lean_dec(v_num_954_);
v_a_987_ = lean_ctor_get(v___x_963_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_963_);
if (v_isSharedCheck_994_ == 0)
{
v___x_989_ = v___x_963_;
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_a_987_);
lean_dec(v___x_963_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_992_; 
if (v_isShared_990_ == 0)
{
v___x_992_ = v___x_989_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v_a_987_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
return v___x_992_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_introN___boxed(lean_object* v_mvarId_995_, lean_object* v_num_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l_Lean_Meta_Sym_introN(v_mvarId_995_, v_num_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_, v_a_1001_, v_a_1002_);
lean_dec(v_a_1002_);
lean_dec_ref(v_a_1001_);
lean_dec(v_a_1000_);
lean_dec_ref(v_a_999_);
lean_dec(v_a_998_);
lean_dec_ref(v_a_997_);
return v_res_1004_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_IsClass(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Intro(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_IsClass(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_hugeNat = _init_l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_hugeNat();
lean_mark_persistent(l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_hugeNat);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Intro(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_IsClass(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Intro(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_IsClass(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Intro(builtin);
}
#ifdef __cplusplus
}
#endif
