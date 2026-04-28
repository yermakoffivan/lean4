// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Diseq
// Imports: public import Lean.Meta.Tactic.Grind.Types import Init.Grind.Lemmas
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
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Meta_Grind_instInhabitedGoalM(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
lean_object* lean_grind_mk_eq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqFalseCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqv___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getDiseqFor_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getDiseqFor_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getDiseqFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getDiseqFor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isDiseq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isDiseq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isDiseq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_Grind_mkDiseqProofUsing_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Grind_mkDiseqProofUsing_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_mkDiseqProofUsing_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_mkDiseqProofUsing_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_mkDiseqProofUsing___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_mkDiseqProofUsing___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_mkDiseqProofUsing___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_mkDiseqProofUsing___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_mkDiseqProofUsing___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_mkDiseqProofUsing___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_mkDiseqProofUsing___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_mkDiseqProofUsing___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_mkDiseqProofUsing___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_mkDiseqProofUsing___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing___closed__9;
static lean_once_cell_t l_Lean_Meta_Grind_mkDiseqProofUsing___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing___closed__10;
static lean_once_cell_t l_Lean_Meta_Grind_mkDiseqProofUsing___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing___closed__11;
static lean_once_cell_t l_Lean_Meta_Grind_mkDiseqProofUsing___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing___closed__12;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkDiseqProof_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkDiseqProof_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_mkDiseqProof___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkDiseqProof___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_mkDiseqProof___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkDiseqProof___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_mkDiseqProof___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkDiseqProof___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_mkDiseqProof___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkDiseqProof___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkDiseqProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkDiseqProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_1_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__0, &l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__0);
v___x_3_ = l_Lean_Name_mkStr1(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_unsigned_to_nat(1u);
v___x_5_ = l_Lean_Level_ofNat(v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__3(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_6_ = lean_box(0);
v___x_7_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__2, &l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__2);
v___x_8_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
lean_ctor_set(v___x_8_, 1, v___x_6_);
return v___x_8_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__4(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_9_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__3, &l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__3);
v___x_10_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__1, &l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__1);
v___x_11_ = l_Lean_mkConst(v___x_10_, v___x_9_);
return v___x_11_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__5(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_mk_string_unchecked("_inhabitedExprDummy", 19, 19);
return v___x_12_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__6(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__5, &l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__5);
v___x_14_ = l_Lean_Name_mkStr1(v___x_13_);
return v___x_14_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__7(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_15_ = lean_box(0);
v___x_16_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__6, &l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__6);
v___x_17_ = l_Lean_Expr_const___override(v___x_16_, v___x_15_);
return v___x_17_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__8(void){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_18_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__7, &l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__7);
v___x_19_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__4, &l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__4);
v___x_20_ = l_Lean_Expr_app___override(v___x_19_, v___x_18_);
return v___x_20_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__8, &l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__8);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v___x_22_, lean_object* v_keys_23_, lean_object* v_vals_24_, lean_object* v_i_25_, lean_object* v_k_26_){
_start:
{
lean_object* v___x_27_; uint8_t v___x_28_; 
v___x_27_ = lean_array_get_size(v_keys_23_);
v___x_28_ = lean_nat_dec_lt(v_i_25_, v___x_27_);
if (v___x_28_ == 0)
{
lean_object* v___x_29_; 
lean_dec_ref(v_k_26_);
lean_dec(v_i_25_);
v___x_29_ = lean_box(0);
return v___x_29_;
}
else
{
lean_object* v_k_x27_30_; uint8_t v___x_31_; 
v_k_x27_30_ = lean_array_fget_borrowed(v_keys_23_, v_i_25_);
lean_inc(v_k_x27_30_);
lean_inc_ref(v_k_26_);
v___x_31_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_22_, v_k_26_, v_k_x27_30_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_unsigned_to_nat(1u);
v___x_33_ = lean_nat_add(v_i_25_, v___x_32_);
lean_dec(v_i_25_);
v_i_25_ = v___x_33_;
goto _start;
}
else
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
lean_dec_ref(v_k_26_);
v___x_35_ = lean_array_fget_borrowed(v_vals_24_, v_i_25_);
lean_dec(v_i_25_);
lean_inc(v___x_35_);
lean_inc(v_k_x27_30_);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v_k_x27_30_);
lean_ctor_set(v___x_36_, 1, v___x_35_);
v___x_37_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
return v___x_37_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v___x_38_, lean_object* v_keys_39_, lean_object* v_vals_40_, lean_object* v_i_41_, lean_object* v_k_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0_spec__1___redArg(v___x_38_, v_keys_39_, v_vals_40_, v_i_41_, v_k_42_);
lean_dec_ref(v_vals_40_);
lean_dec_ref(v_keys_39_);
lean_dec_ref(v___x_38_);
return v_res_43_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_44_; size_t v___x_45_; size_t v___x_46_; 
v___x_44_ = ((size_t)5ULL);
v___x_45_ = ((size_t)1ULL);
v___x_46_ = lean_usize_shift_left(v___x_45_, v___x_44_);
return v___x_46_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_47_; size_t v___x_48_; size_t v___x_49_; 
v___x_47_ = ((size_t)1ULL);
v___x_48_ = lean_usize_once(&l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg___closed__0);
v___x_49_ = lean_usize_sub(v___x_48_, v___x_47_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg(lean_object* v___x_50_, lean_object* v_x_51_, size_t v_x_52_, lean_object* v_x_53_){
_start:
{
if (lean_obj_tag(v_x_51_) == 0)
{
lean_object* v_es_54_; lean_object* v___x_55_; size_t v___x_56_; size_t v___x_57_; size_t v___x_58_; lean_object* v_j_59_; lean_object* v___x_60_; 
v_es_54_ = lean_ctor_get(v_x_51_, 0);
lean_inc_ref(v_es_54_);
lean_dec_ref(v_x_51_);
v___x_55_ = lean_box(2);
v___x_56_ = ((size_t)5ULL);
v___x_57_ = lean_usize_once(&l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg___closed__1);
v___x_58_ = lean_usize_land(v_x_52_, v___x_57_);
v_j_59_ = lean_usize_to_nat(v___x_58_);
v___x_60_ = lean_array_get(v___x_55_, v_es_54_, v_j_59_);
lean_dec(v_j_59_);
lean_dec_ref(v_es_54_);
switch(lean_obj_tag(v___x_60_))
{
case 0:
{
lean_object* v_key_61_; lean_object* v_val_62_; uint8_t v___x_63_; 
v_key_61_ = lean_ctor_get(v___x_60_, 0);
lean_inc_n(v_key_61_, 2);
v_val_62_ = lean_ctor_get(v___x_60_, 1);
lean_inc(v_val_62_);
lean_dec_ref(v___x_60_);
v___x_63_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_50_, v_x_53_, v_key_61_);
if (v___x_63_ == 0)
{
lean_object* v___x_64_; 
lean_dec(v_val_62_);
lean_dec(v_key_61_);
v___x_64_ = lean_box(0);
return v___x_64_;
}
else
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_65_, 0, v_key_61_);
lean_ctor_set(v___x_65_, 1, v_val_62_);
v___x_66_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
return v___x_66_;
}
}
case 1:
{
lean_object* v_node_67_; size_t v___x_68_; 
v_node_67_ = lean_ctor_get(v___x_60_, 0);
lean_inc(v_node_67_);
lean_dec_ref(v___x_60_);
v___x_68_ = lean_usize_shift_right(v_x_52_, v___x_56_);
v_x_51_ = v_node_67_;
v_x_52_ = v___x_68_;
goto _start;
}
default: 
{
lean_object* v___x_70_; 
lean_dec_ref(v_x_53_);
v___x_70_ = lean_box(0);
return v___x_70_;
}
}
}
else
{
lean_object* v_ks_71_; lean_object* v_vs_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v_ks_71_ = lean_ctor_get(v_x_51_, 0);
lean_inc_ref(v_ks_71_);
v_vs_72_ = lean_ctor_get(v_x_51_, 1);
lean_inc_ref(v_vs_72_);
lean_dec_ref(v_x_51_);
v___x_73_ = lean_unsigned_to_nat(0u);
v___x_74_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0_spec__1___redArg(v___x_50_, v_ks_71_, v_vs_72_, v___x_73_, v_x_53_);
lean_dec_ref(v_vs_72_);
lean_dec_ref(v_ks_71_);
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg___boxed(lean_object* v___x_75_, lean_object* v_x_76_, lean_object* v_x_77_, lean_object* v_x_78_){
_start:
{
size_t v_x_5101__boxed_79_; lean_object* v_res_80_; 
v_x_5101__boxed_79_ = lean_unbox_usize(v_x_77_);
lean_dec(v_x_77_);
v_res_80_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg(v___x_75_, v_x_76_, v_x_5101__boxed_79_, v_x_78_);
lean_dec_ref(v___x_75_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0___redArg(lean_object* v___x_81_, lean_object* v_x_82_, lean_object* v_x_83_){
_start:
{
uint64_t v___x_84_; size_t v___x_85_; lean_object* v___x_86_; 
lean_inc_ref(v_x_83_);
v___x_84_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(v___x_81_, v_x_83_);
v___x_85_ = lean_uint64_to_usize(v___x_84_);
lean_inc_ref(v_x_82_);
v___x_86_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg(v___x_81_, v_x_82_, v___x_85_, v_x_83_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0___redArg___boxed(lean_object* v___x_87_, lean_object* v_x_88_, lean_object* v_x_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0___redArg(v___x_87_, v_x_88_, v_x_89_);
lean_dec_ref(v_x_88_);
lean_dec_ref(v___x_87_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getDiseqFor_x3f___redArg(lean_object* v_a_91_, lean_object* v_b_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v_toGoalState_102_; lean_object* v_enodeMap_103_; lean_object* v_congrTable_104_; lean_object* v___x_105_; lean_object* v_key_106_; lean_object* v___x_107_; 
v___x_100_ = lean_st_ref_get(v_a_98_);
lean_dec(v___x_100_);
v___x_101_ = lean_st_ref_get(v_a_93_);
v_toGoalState_102_ = lean_ctor_get(v___x_101_, 0);
lean_inc_ref(v_toGoalState_102_);
lean_dec(v___x_101_);
v_enodeMap_103_ = lean_ctor_get(v_toGoalState_102_, 1);
lean_inc_ref(v_enodeMap_103_);
v_congrTable_104_ = lean_ctor_get(v_toGoalState_102_, 4);
lean_inc_ref(v_congrTable_104_);
lean_dec_ref(v_toGoalState_102_);
v___x_105_ = l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq;
v_key_106_ = l_Lean_mkAppB(v___x_105_, v_a_91_, v_b_92_);
v___x_107_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0___redArg(v_enodeMap_103_, v_congrTable_104_, v_key_106_);
lean_dec_ref(v_congrTable_104_);
lean_dec_ref(v_enodeMap_103_);
if (lean_obj_tag(v___x_107_) == 0)
{
lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_108_ = lean_box(0);
v___x_109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
return v___x_109_;
}
else
{
lean_object* v_val_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_140_; 
v_val_110_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_140_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_140_ == 0)
{
v___x_112_ = v___x_107_;
v_isShared_113_ = v_isSharedCheck_140_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_val_110_);
lean_dec(v___x_107_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_140_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v_fst_114_; lean_object* v___x_115_; 
v_fst_114_ = lean_ctor_get(v_val_110_, 0);
lean_inc_n(v_fst_114_, 2);
lean_dec(v_val_110_);
v___x_115_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_fst_114_, v_a_93_, v_a_94_, v_a_95_, v_a_96_, v_a_97_, v_a_98_);
if (lean_obj_tag(v___x_115_) == 0)
{
lean_object* v_a_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_131_; 
v_a_116_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_131_ == 0)
{
v___x_118_ = v___x_115_;
v_isShared_119_ = v_isSharedCheck_131_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_a_116_);
lean_dec(v___x_115_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_131_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
uint8_t v___x_120_; 
v___x_120_ = lean_unbox(v_a_116_);
lean_dec(v_a_116_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; lean_object* v___x_123_; 
lean_dec(v_fst_114_);
lean_del_object(v___x_112_);
v___x_121_ = lean_box(0);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 0, v___x_121_);
v___x_123_ = v___x_118_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_121_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
else
{
lean_object* v___x_126_; 
if (v_isShared_113_ == 0)
{
lean_ctor_set(v___x_112_, 0, v_fst_114_);
v___x_126_ = v___x_112_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_fst_114_);
v___x_126_ = v_reuseFailAlloc_130_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
lean_object* v___x_128_; 
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 0, v___x_126_);
v___x_128_ = v___x_118_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v___x_126_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
}
}
else
{
lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_139_; 
lean_dec(v_fst_114_);
lean_del_object(v___x_112_);
v_a_132_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_139_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_139_ == 0)
{
v___x_134_ = v___x_115_;
v_isShared_135_ = v_isSharedCheck_139_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_a_132_);
lean_dec(v___x_115_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_139_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_137_; 
if (v_isShared_135_ == 0)
{
v___x_137_ = v___x_134_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_a_132_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getDiseqFor_x3f___redArg___boxed(lean_object* v_a_141_, lean_object* v_b_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l_Lean_Meta_Grind_getDiseqFor_x3f___redArg(v_a_141_, v_b_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_);
lean_dec(v_a_148_);
lean_dec_ref(v_a_147_);
lean_dec(v_a_146_);
lean_dec_ref(v_a_145_);
lean_dec_ref(v_a_144_);
lean_dec(v_a_143_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getDiseqFor_x3f(lean_object* v_a_151_, lean_object* v_b_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = l_Lean_Meta_Grind_getDiseqFor_x3f___redArg(v_a_151_, v_b_152_, v_a_153_, v_a_157_, v_a_159_, v_a_160_, v_a_161_, v_a_162_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getDiseqFor_x3f___boxed(lean_object* v_a_165_, lean_object* v_b_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_Lean_Meta_Grind_getDiseqFor_x3f(v_a_165_, v_b_166_, v_a_167_, v_a_168_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_);
lean_dec(v_a_176_);
lean_dec_ref(v_a_175_);
lean_dec(v_a_174_);
lean_dec_ref(v_a_173_);
lean_dec(v_a_172_);
lean_dec_ref(v_a_171_);
lean_dec(v_a_170_);
lean_dec_ref(v_a_169_);
lean_dec(v_a_168_);
lean_dec(v_a_167_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0(lean_object* v___x_179_, lean_object* v_00_u03b2_180_, lean_object* v_x_181_, lean_object* v_x_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0___redArg(v___x_179_, v_x_181_, v_x_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0___boxed(lean_object* v___x_184_, lean_object* v_00_u03b2_185_, lean_object* v_x_186_, lean_object* v_x_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0(v___x_184_, v_00_u03b2_185_, v_x_186_, v_x_187_);
lean_dec_ref(v_x_186_);
lean_dec_ref(v___x_184_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0(lean_object* v___x_189_, lean_object* v_00_u03b2_190_, lean_object* v_x_191_, size_t v_x_192_, lean_object* v_x_193_){
_start:
{
lean_object* v___x_194_; 
lean_inc_ref(v_x_191_);
v___x_194_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___redArg(v___x_189_, v_x_191_, v_x_192_, v_x_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0___boxed(lean_object* v___x_195_, lean_object* v_00_u03b2_196_, lean_object* v_x_197_, lean_object* v_x_198_, lean_object* v_x_199_){
_start:
{
size_t v_x_5268__boxed_200_; lean_object* v_res_201_; 
v_x_5268__boxed_200_ = lean_unbox_usize(v_x_198_);
lean_dec(v_x_198_);
v_res_201_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0(v___x_195_, v_00_u03b2_196_, v_x_197_, v_x_5268__boxed_200_, v_x_199_);
lean_dec_ref(v_x_197_);
lean_dec_ref(v___x_195_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0_spec__1(lean_object* v___x_202_, lean_object* v_00_u03b2_203_, lean_object* v_keys_204_, lean_object* v_vals_205_, lean_object* v_heq_206_, lean_object* v_i_207_, lean_object* v_k_208_){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0_spec__1___redArg(v___x_202_, v_keys_204_, v_vals_205_, v_i_207_, v_k_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v___x_210_, lean_object* v_00_u03b2_211_, lean_object* v_keys_212_, lean_object* v_vals_213_, lean_object* v_heq_214_, lean_object* v_i_215_, lean_object* v_k_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Grind_getDiseqFor_x3f_spec__0_spec__0_spec__1(v___x_210_, v_00_u03b2_211_, v_keys_212_, v_vals_213_, v_heq_214_, v_i_215_, v_k_216_);
lean_dec_ref(v_vals_213_);
lean_dec_ref(v_keys_212_);
lean_dec_ref(v___x_210_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isDiseq___redArg(lean_object* v_a_218_, lean_object* v_b_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = l_Lean_Meta_Grind_getDiseqFor_x3f___redArg(v_a_218_, v_b_219_, v_a_220_, v_a_221_, v_a_222_, v_a_223_, v_a_224_, v_a_225_);
if (lean_obj_tag(v___x_227_) == 0)
{
lean_object* v_a_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_242_; 
v_a_228_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_242_ == 0)
{
v___x_230_ = v___x_227_;
v_isShared_231_ = v_isSharedCheck_242_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_a_228_);
lean_dec(v___x_227_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_242_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
if (lean_obj_tag(v_a_228_) == 0)
{
uint8_t v___x_232_; lean_object* v___x_233_; lean_object* v___x_235_; 
v___x_232_ = 0;
v___x_233_ = lean_box(v___x_232_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 0, v___x_233_);
v___x_235_ = v___x_230_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_233_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
else
{
uint8_t v___x_237_; lean_object* v___x_238_; lean_object* v___x_240_; 
lean_dec_ref(v_a_228_);
v___x_237_ = 1;
v___x_238_ = lean_box(v___x_237_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 0, v___x_238_);
v___x_240_ = v___x_230_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v___x_238_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
}
}
else
{
lean_object* v_a_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_250_; 
v_a_243_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_250_ == 0)
{
v___x_245_ = v___x_227_;
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_a_243_);
lean_dec(v___x_227_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_248_; 
if (v_isShared_246_ == 0)
{
v___x_248_ = v___x_245_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_a_243_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isDiseq___redArg___boxed(lean_object* v_a_251_, lean_object* v_b_252_, lean_object* v_a_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lean_Meta_Grind_isDiseq___redArg(v_a_251_, v_b_252_, v_a_253_, v_a_254_, v_a_255_, v_a_256_, v_a_257_, v_a_258_);
lean_dec(v_a_258_);
lean_dec_ref(v_a_257_);
lean_dec(v_a_256_);
lean_dec_ref(v_a_255_);
lean_dec_ref(v_a_254_);
lean_dec(v_a_253_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isDiseq(lean_object* v_a_261_, lean_object* v_b_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l_Lean_Meta_Grind_isDiseq___redArg(v_a_261_, v_b_262_, v_a_263_, v_a_267_, v_a_269_, v_a_270_, v_a_271_, v_a_272_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isDiseq___boxed(lean_object* v_a_275_, lean_object* v_b_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lean_Meta_Grind_isDiseq(v_a_275_, v_b_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_, v_a_282_, v_a_283_, v_a_284_, v_a_285_, v_a_286_);
lean_dec(v_a_286_);
lean_dec_ref(v_a_285_);
lean_dec(v_a_284_);
lean_dec_ref(v_a_283_);
lean_dec(v_a_282_);
lean_dec_ref(v_a_281_);
lean_dec(v_a_280_);
lean_dec_ref(v_a_279_);
lean_dec(v_a_278_);
lean_dec(v_a_277_);
return v_res_288_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Grind_mkDiseqProofUsing_spec__0___closed__0(void){
_start:
{
lean_object* v___x_289_; 
v___x_289_ = l_Lean_Meta_Grind_instInhabitedGoalM(lean_box(0));
return v___x_289_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_mkDiseqProofUsing_spec__0(lean_object* v_msg_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_){
_start:
{
lean_object* v___x_302_; lean_object* v___x_12288__overap_303_; lean_object* v___x_304_; 
v___x_302_ = lean_obj_once(&l_panic___at___00Lean_Meta_Grind_mkDiseqProofUsing_spec__0___closed__0, &l_panic___at___00Lean_Meta_Grind_mkDiseqProofUsing_spec__0___closed__0_once, _init_l_panic___at___00Lean_Meta_Grind_mkDiseqProofUsing_spec__0___closed__0);
v___x_12288__overap_303_ = lean_panic_fn_borrowed(v___x_302_, v_msg_290_);
lean_inc(v___y_300_);
lean_inc_ref(v___y_299_);
lean_inc(v___y_298_);
lean_inc_ref(v___y_297_);
lean_inc(v___y_296_);
lean_inc_ref(v___y_295_);
lean_inc(v___y_294_);
lean_inc_ref(v___y_293_);
lean_inc(v___y_292_);
lean_inc(v___y_291_);
v___x_304_ = lean_apply_11(v___x_12288__overap_303_, v___y_291_, v___y_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_, v___y_299_, v___y_300_, lean_box(0));
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_mkDiseqProofUsing_spec__0___boxed(lean_object* v_msg_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_panic___at___00Lean_Meta_Grind_mkDiseqProofUsing_spec__0(v_msg_305_, v___y_306_, v___y_307_, v___y_308_, v___y_309_, v___y_310_, v___y_311_, v___y_312_, v___y_313_, v___y_314_, v___y_315_);
lean_dec(v___y_315_);
lean_dec_ref(v___y_314_);
lean_dec(v___y_313_);
lean_dec_ref(v___y_312_);
lean_dec(v___y_311_);
lean_dec_ref(v___y_310_);
lean_dec(v___y_309_);
lean_dec_ref(v___y_308_);
lean_dec(v___y_307_);
lean_dec(v___y_306_);
return v_res_317_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__0(void){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = lean_mk_string_unchecked("Lean.Meta.Tactic.Grind.Diseq", 28, 28);
return v___x_318_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__1(void){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = lean_mk_string_unchecked("Lean.Meta.Grind.mkDiseqProofUsing", 33, 33);
return v___x_319_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__2(void){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_320_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__3(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_321_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProofUsing___closed__2, &l_Lean_Meta_Grind_mkDiseqProofUsing___closed__2_once, _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__2);
v___x_322_ = lean_unsigned_to_nat(30u);
v___x_323_ = lean_unsigned_to_nat(44u);
v___x_324_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProofUsing___closed__1, &l_Lean_Meta_Grind_mkDiseqProofUsing___closed__1_once, _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__1);
v___x_325_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProofUsing___closed__0, &l_Lean_Meta_Grind_mkDiseqProofUsing___closed__0_once, _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__0);
v___x_326_ = l_mkPanicMessageWithDecl(v___x_325_, v___x_324_, v___x_323_, v___x_322_, v___x_321_);
return v___x_326_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__4(void){
_start:
{
lean_object* v___x_327_; 
v___x_327_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_327_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__5(void){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_328_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__6(void){
_start:
{
lean_object* v___x_329_; 
v___x_329_ = lean_mk_string_unchecked("ne_of_ne_of_eq_right", 20, 20);
return v___x_329_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__7(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_330_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProofUsing___closed__6, &l_Lean_Meta_Grind_mkDiseqProofUsing___closed__6_once, _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__6);
v___x_331_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProofUsing___closed__5, &l_Lean_Meta_Grind_mkDiseqProofUsing___closed__5_once, _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__5);
v___x_332_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProofUsing___closed__4, &l_Lean_Meta_Grind_mkDiseqProofUsing___closed__4_once, _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__4);
v___x_333_ = l_Lean_Name_mkStr3(v___x_332_, v___x_331_, v___x_330_);
return v___x_333_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__8(void){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = lean_mk_string_unchecked("ne_of_ne_of_eq_left", 19, 19);
return v___x_334_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__9(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_335_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProofUsing___closed__8, &l_Lean_Meta_Grind_mkDiseqProofUsing___closed__8_once, _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__8);
v___x_336_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProofUsing___closed__5, &l_Lean_Meta_Grind_mkDiseqProofUsing___closed__5_once, _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__5);
v___x_337_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProofUsing___closed__4, &l_Lean_Meta_Grind_mkDiseqProofUsing___closed__4_once, _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__4);
v___x_338_ = l_Lean_Name_mkStr3(v___x_337_, v___x_336_, v___x_335_);
return v___x_338_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__10(void){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = lean_mk_string_unchecked("Ne", 2, 2);
return v___x_339_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__11(void){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = lean_mk_string_unchecked("symm", 4, 4);
return v___x_340_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__12(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_341_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProofUsing___closed__11, &l_Lean_Meta_Grind_mkDiseqProofUsing___closed__11_once, _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__11);
v___x_342_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProofUsing___closed__10, &l_Lean_Meta_Grind_mkDiseqProofUsing___closed__10_once, _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__10);
v___x_343_ = l_Lean_Name_mkStr2(v___x_342_, v___x_341_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing(lean_object* v_a_344_, lean_object* v_b_345_, lean_object* v_eq_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_){
_start:
{
lean_object* v___y_359_; lean_object* v___y_360_; lean_object* v___y_361_; lean_object* v___y_362_; lean_object* v___y_363_; lean_object* v___y_364_; lean_object* v___y_365_; lean_object* v___y_366_; lean_object* v___y_367_; lean_object* v___y_368_; lean_object* v___x_371_; uint8_t v___x_372_; 
lean_inc_ref(v_eq_346_);
v___x_371_ = l_Lean_Expr_cleanupAnnotations(v_eq_346_);
v___x_372_ = l_Lean_Expr_isApp(v___x_371_);
if (v___x_372_ == 0)
{
lean_dec_ref(v___x_371_);
lean_dec_ref(v_eq_346_);
lean_dec_ref(v_b_345_);
lean_dec_ref(v_a_344_);
v___y_359_ = v_a_347_;
v___y_360_ = v_a_348_;
v___y_361_ = v_a_349_;
v___y_362_ = v_a_350_;
v___y_363_ = v_a_351_;
v___y_364_ = v_a_352_;
v___y_365_ = v_a_353_;
v___y_366_ = v_a_354_;
v___y_367_ = v_a_355_;
v___y_368_ = v_a_356_;
goto v___jp_358_;
}
else
{
lean_object* v_arg_373_; lean_object* v___x_374_; uint8_t v___x_375_; 
v_arg_373_ = lean_ctor_get(v___x_371_, 1);
lean_inc_ref(v_arg_373_);
v___x_374_ = l_Lean_Expr_appFnCleanup___redArg(v___x_371_);
v___x_375_ = l_Lean_Expr_isApp(v___x_374_);
if (v___x_375_ == 0)
{
lean_dec_ref(v___x_374_);
lean_dec_ref(v_arg_373_);
lean_dec_ref(v_eq_346_);
lean_dec_ref(v_b_345_);
lean_dec_ref(v_a_344_);
v___y_359_ = v_a_347_;
v___y_360_ = v_a_348_;
v___y_361_ = v_a_349_;
v___y_362_ = v_a_350_;
v___y_363_ = v_a_351_;
v___y_364_ = v_a_352_;
v___y_365_ = v_a_353_;
v___y_366_ = v_a_354_;
v___y_367_ = v_a_355_;
v___y_368_ = v_a_356_;
goto v___jp_358_;
}
else
{
lean_object* v_arg_376_; lean_object* v___x_377_; uint8_t v___x_378_; 
v_arg_376_ = lean_ctor_get(v___x_374_, 1);
lean_inc_ref(v_arg_376_);
v___x_377_ = l_Lean_Expr_appFnCleanup___redArg(v___x_374_);
v___x_378_ = l_Lean_Expr_isApp(v___x_377_);
if (v___x_378_ == 0)
{
lean_dec_ref(v___x_377_);
lean_dec_ref(v_arg_376_);
lean_dec_ref(v_arg_373_);
lean_dec_ref(v_eq_346_);
lean_dec_ref(v_b_345_);
lean_dec_ref(v_a_344_);
v___y_359_ = v_a_347_;
v___y_360_ = v_a_348_;
v___y_361_ = v_a_349_;
v___y_362_ = v_a_350_;
v___y_363_ = v_a_351_;
v___y_364_ = v_a_352_;
v___y_365_ = v_a_353_;
v___y_366_ = v_a_354_;
v___y_367_ = v_a_355_;
v___y_368_ = v_a_356_;
goto v___jp_358_;
}
else
{
lean_object* v_arg_379_; lean_object* v___x_380_; lean_object* v___x_381_; uint8_t v___x_382_; 
v_arg_379_ = lean_ctor_get(v___x_377_, 1);
lean_inc_ref(v_arg_379_);
v___x_380_ = l_Lean_Expr_appFnCleanup___redArg(v___x_377_);
v___x_381_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__1, &l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq___closed__1);
v___x_382_ = l_Lean_Expr_isConstOf(v___x_380_, v___x_381_);
if (v___x_382_ == 0)
{
lean_dec_ref(v___x_380_);
lean_dec_ref(v_arg_379_);
lean_dec_ref(v_arg_376_);
lean_dec_ref(v_arg_373_);
lean_dec_ref(v_eq_346_);
lean_dec_ref(v_b_345_);
lean_dec_ref(v_a_344_);
v___y_359_ = v_a_347_;
v___y_360_ = v_a_348_;
v___y_361_ = v_a_349_;
v___y_362_ = v_a_350_;
v___y_363_ = v_a_351_;
v___y_364_ = v_a_352_;
v___y_365_ = v_a_353_;
v___y_366_ = v_a_354_;
v___y_367_ = v_a_355_;
v___y_368_ = v_a_356_;
goto v___jp_358_;
}
else
{
lean_object* v___x_383_; 
lean_inc_ref(v_eq_346_);
v___x_383_ = l_Lean_Meta_Grind_mkEqFalseProof(v_eq_346_, v_a_347_, v_a_348_, v_a_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_, v_a_356_);
if (lean_obj_tag(v___x_383_) == 0)
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_458_; 
v_a_384_ = lean_ctor_get(v___x_383_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_383_);
if (v_isSharedCheck_458_ == 0)
{
v___x_386_ = v___x_383_;
v_isShared_387_ = v_isSharedCheck_458_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_383_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_458_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v_u_388_; lean_object* v___y_390_; lean_object* v_h_391_; lean_object* v___y_392_; lean_object* v___y_393_; lean_object* v___y_394_; lean_object* v___y_395_; lean_object* v___y_396_; lean_object* v___y_397_; lean_object* v___y_398_; lean_object* v___y_399_; lean_object* v___y_400_; lean_object* v___y_401_; lean_object* v_fst_419_; lean_object* v_fst_420_; lean_object* v_snd_421_; lean_object* v___y_422_; lean_object* v___y_423_; lean_object* v___y_424_; lean_object* v___y_425_; lean_object* v___y_426_; lean_object* v___y_427_; lean_object* v___y_428_; lean_object* v___y_429_; lean_object* v___y_430_; lean_object* v___y_431_; lean_object* v___x_438_; lean_object* v___y_440_; lean_object* v___x_454_; 
v_u_388_ = l_Lean_Expr_constLevels_x21(v___x_380_);
lean_dec_ref(v___x_380_);
v___x_438_ = l_Lean_Meta_mkOfEqFalseCore(v_eq_346_, v_a_384_);
v___x_454_ = l_Lean_Meta_Grind_isEqv___redArg(v_a_344_, v_arg_376_, v_a_347_, v_a_356_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; uint8_t v___x_456_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_a_455_);
v___x_456_ = lean_unbox(v_a_455_);
lean_dec(v_a_455_);
if (v___x_456_ == 0)
{
v___y_440_ = v___x_454_;
goto v___jp_439_;
}
else
{
lean_object* v___x_457_; 
lean_dec_ref(v___x_454_);
v___x_457_ = l_Lean_Meta_Grind_isEqv___redArg(v_b_345_, v_arg_373_, v_a_347_, v_a_356_);
v___y_440_ = v___x_457_;
goto v___jp_439_;
}
}
else
{
v___y_440_ = v___x_454_;
goto v___jp_439_;
}
v___jp_389_:
{
uint8_t v___x_402_; 
v___x_402_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_b_345_, v___y_390_);
if (v___x_402_ == 0)
{
lean_object* v___x_403_; 
lean_del_object(v___x_386_);
lean_inc(v___y_401_);
lean_inc_ref(v___y_400_);
lean_inc(v___y_399_);
lean_inc_ref(v___y_398_);
lean_inc(v___y_397_);
lean_inc_ref(v___y_396_);
lean_inc(v___y_395_);
lean_inc_ref(v___y_394_);
lean_inc(v___y_393_);
lean_inc(v___y_392_);
lean_inc_ref(v___y_390_);
lean_inc_ref(v_b_345_);
v___x_403_ = lean_grind_mk_eq_proof(v_b_345_, v___y_390_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v_a_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_414_; 
v_a_404_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_414_ == 0)
{
v___x_406_ = v___x_403_;
v_isShared_407_ = v_isSharedCheck_414_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_a_404_);
lean_dec(v___x_403_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_414_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_412_; 
v___x_408_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProofUsing___closed__7, &l_Lean_Meta_Grind_mkDiseqProofUsing___closed__7_once, _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__7);
v___x_409_ = l_Lean_mkConst(v___x_408_, v_u_388_);
v___x_410_ = l_Lean_mkApp6(v___x_409_, v_arg_379_, v_b_345_, v_a_344_, v___y_390_, v_a_404_, v_h_391_);
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 0, v___x_410_);
v___x_412_ = v___x_406_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v___x_410_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
else
{
lean_dec_ref(v_h_391_);
lean_dec_ref(v___y_390_);
lean_dec(v_u_388_);
lean_dec_ref(v_arg_379_);
lean_dec_ref(v_b_345_);
lean_dec_ref(v_a_344_);
return v___x_403_;
}
}
else
{
lean_object* v___x_416_; 
lean_dec_ref(v___y_390_);
lean_dec(v_u_388_);
lean_dec_ref(v_arg_379_);
lean_dec_ref(v_b_345_);
lean_dec_ref(v_a_344_);
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 0, v_h_391_);
v___x_416_ = v___x_386_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_h_391_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
}
v___jp_418_:
{
uint8_t v___x_432_; 
v___x_432_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_a_344_, v_fst_419_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; 
lean_inc(v___y_431_);
lean_inc_ref(v___y_430_);
lean_inc(v___y_429_);
lean_inc_ref(v___y_428_);
lean_inc(v___y_427_);
lean_inc_ref(v___y_426_);
lean_inc(v___y_425_);
lean_inc_ref(v___y_424_);
lean_inc(v___y_423_);
lean_inc(v___y_422_);
lean_inc_ref(v_fst_419_);
lean_inc_ref(v_a_344_);
v___x_433_ = lean_grind_mk_eq_proof(v_a_344_, v_fst_419_, v___y_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_a_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v_a_434_ = lean_ctor_get(v___x_433_, 0);
lean_inc(v_a_434_);
lean_dec_ref(v___x_433_);
v___x_435_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProofUsing___closed__9, &l_Lean_Meta_Grind_mkDiseqProofUsing___closed__9_once, _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__9);
lean_inc(v_u_388_);
v___x_436_ = l_Lean_mkConst(v___x_435_, v_u_388_);
lean_inc_ref(v_fst_420_);
lean_inc_ref(v_a_344_);
lean_inc_ref(v_arg_379_);
v___x_437_ = l_Lean_mkApp6(v___x_436_, v_arg_379_, v_a_344_, v_fst_419_, v_fst_420_, v_a_434_, v_snd_421_);
v___y_390_ = v_fst_420_;
v_h_391_ = v___x_437_;
v___y_392_ = v___y_422_;
v___y_393_ = v___y_423_;
v___y_394_ = v___y_424_;
v___y_395_ = v___y_425_;
v___y_396_ = v___y_426_;
v___y_397_ = v___y_427_;
v___y_398_ = v___y_428_;
v___y_399_ = v___y_429_;
v___y_400_ = v___y_430_;
v___y_401_ = v___y_431_;
goto v___jp_389_;
}
else
{
lean_dec_ref(v_snd_421_);
lean_dec_ref(v_fst_420_);
lean_dec_ref(v_fst_419_);
lean_dec(v_u_388_);
lean_del_object(v___x_386_);
lean_dec_ref(v_arg_379_);
lean_dec_ref(v_b_345_);
lean_dec_ref(v_a_344_);
return v___x_433_;
}
}
else
{
lean_dec_ref(v_fst_419_);
v___y_390_ = v_fst_420_;
v_h_391_ = v_snd_421_;
v___y_392_ = v___y_422_;
v___y_393_ = v___y_423_;
v___y_394_ = v___y_424_;
v___y_395_ = v___y_425_;
v___y_396_ = v___y_426_;
v___y_397_ = v___y_427_;
v___y_398_ = v___y_428_;
v___y_399_ = v___y_429_;
v___y_400_ = v___y_430_;
v___y_401_ = v___y_431_;
goto v___jp_389_;
}
}
v___jp_439_:
{
if (lean_obj_tag(v___y_440_) == 0)
{
lean_object* v_a_441_; uint8_t v___x_442_; 
v_a_441_ = lean_ctor_get(v___y_440_, 0);
lean_inc(v_a_441_);
lean_dec_ref(v___y_440_);
v___x_442_ = lean_unbox(v_a_441_);
lean_dec(v_a_441_);
if (v___x_442_ == 0)
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_443_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProofUsing___closed__12, &l_Lean_Meta_Grind_mkDiseqProofUsing___closed__12_once, _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__12);
lean_inc(v_u_388_);
v___x_444_ = l_Lean_mkConst(v___x_443_, v_u_388_);
lean_inc_ref(v_arg_373_);
lean_inc_ref(v_arg_376_);
lean_inc_ref(v_arg_379_);
v___x_445_ = l_Lean_mkApp4(v___x_444_, v_arg_379_, v_arg_376_, v_arg_373_, v___x_438_);
v_fst_419_ = v_arg_373_;
v_fst_420_ = v_arg_376_;
v_snd_421_ = v___x_445_;
v___y_422_ = v_a_347_;
v___y_423_ = v_a_348_;
v___y_424_ = v_a_349_;
v___y_425_ = v_a_350_;
v___y_426_ = v_a_351_;
v___y_427_ = v_a_352_;
v___y_428_ = v_a_353_;
v___y_429_ = v_a_354_;
v___y_430_ = v_a_355_;
v___y_431_ = v_a_356_;
goto v___jp_418_;
}
else
{
v_fst_419_ = v_arg_376_;
v_fst_420_ = v_arg_373_;
v_snd_421_ = v___x_438_;
v___y_422_ = v_a_347_;
v___y_423_ = v_a_348_;
v___y_424_ = v_a_349_;
v___y_425_ = v_a_350_;
v___y_426_ = v_a_351_;
v___y_427_ = v_a_352_;
v___y_428_ = v_a_353_;
v___y_429_ = v_a_354_;
v___y_430_ = v_a_355_;
v___y_431_ = v_a_356_;
goto v___jp_418_;
}
}
else
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_453_; 
lean_dec_ref(v___x_438_);
lean_dec(v_u_388_);
lean_del_object(v___x_386_);
lean_dec_ref(v_arg_379_);
lean_dec_ref(v_arg_376_);
lean_dec_ref(v_arg_373_);
lean_dec_ref(v_b_345_);
lean_dec_ref(v_a_344_);
v_a_446_ = lean_ctor_get(v___y_440_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___y_440_);
if (v_isSharedCheck_453_ == 0)
{
v___x_448_ = v___y_440_;
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___y_440_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_451_; 
if (v_isShared_449_ == 0)
{
v___x_451_ = v___x_448_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_a_446_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_380_);
lean_dec_ref(v_arg_379_);
lean_dec_ref(v_arg_376_);
lean_dec_ref(v_arg_373_);
lean_dec_ref(v_eq_346_);
lean_dec_ref(v_b_345_);
lean_dec_ref(v_a_344_);
return v___x_383_;
}
}
}
}
}
v___jp_358_:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProofUsing___closed__3, &l_Lean_Meta_Grind_mkDiseqProofUsing___closed__3_once, _init_l_Lean_Meta_Grind_mkDiseqProofUsing___closed__3);
v___x_370_ = l_panic___at___00Lean_Meta_Grind_mkDiseqProofUsing_spec__0(v___x_369_, v___y_359_, v___y_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_);
return v___x_370_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing___boxed(lean_object* v_a_459_, lean_object* v_b_460_, lean_object* v_eq_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Lean_Meta_Grind_mkDiseqProofUsing(v_a_459_, v_b_460_, v_eq_461_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_, v_a_471_);
lean_dec(v_a_471_);
lean_dec_ref(v_a_470_);
lean_dec(v_a_469_);
lean_dec_ref(v_a_468_);
lean_dec(v_a_467_);
lean_dec_ref(v_a_466_);
lean_dec(v_a_465_);
lean_dec_ref(v_a_464_);
lean_dec(v_a_463_);
lean_dec(v_a_462_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkDiseqProof_x3f(lean_object* v_a_474_, lean_object* v_b_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_){
_start:
{
lean_object* v___x_487_; 
lean_inc_ref(v_b_475_);
lean_inc_ref(v_a_474_);
v___x_487_ = l_Lean_Meta_Grind_getDiseqFor_x3f___redArg(v_a_474_, v_b_475_, v_a_476_, v_a_480_, v_a_482_, v_a_483_, v_a_484_, v_a_485_);
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_521_; 
v_a_488_ = lean_ctor_get(v___x_487_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_521_ == 0)
{
v___x_490_ = v___x_487_;
v_isShared_491_ = v_isSharedCheck_521_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v___x_487_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_521_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
if (lean_obj_tag(v_a_488_) == 1)
{
lean_object* v_val_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_516_; 
lean_del_object(v___x_490_);
v_val_492_ = lean_ctor_get(v_a_488_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v_a_488_);
if (v_isSharedCheck_516_ == 0)
{
v___x_494_ = v_a_488_;
v_isShared_495_ = v_isSharedCheck_516_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_val_492_);
lean_dec(v_a_488_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_516_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_496_; 
v___x_496_ = l_Lean_Meta_Grind_mkDiseqProofUsing(v_a_474_, v_b_475_, v_val_492_, v_a_476_, v_a_477_, v_a_478_, v_a_479_, v_a_480_, v_a_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_507_; 
v_a_497_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_507_ == 0)
{
v___x_499_ = v___x_496_;
v_isShared_500_ = v_isSharedCheck_507_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_496_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_507_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_502_; 
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 0, v_a_497_);
v___x_502_ = v___x_494_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_a_497_);
v___x_502_ = v_reuseFailAlloc_506_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
lean_object* v___x_504_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_502_);
v___x_504_ = v___x_499_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
else
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_515_; 
lean_del_object(v___x_494_);
v_a_508_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_515_ == 0)
{
v___x_510_ = v___x_496_;
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___x_496_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_513_; 
if (v_isShared_511_ == 0)
{
v___x_513_ = v___x_510_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v_a_508_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
}
}
else
{
lean_object* v___x_517_; lean_object* v___x_519_; 
lean_dec(v_a_488_);
lean_dec_ref(v_b_475_);
lean_dec_ref(v_a_474_);
v___x_517_ = lean_box(0);
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 0, v___x_517_);
v___x_519_ = v___x_490_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v___x_517_);
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
lean_dec_ref(v_b_475_);
lean_dec_ref(v_a_474_);
return v___x_487_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkDiseqProof_x3f___boxed(lean_object* v_a_522_, lean_object* v_b_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l_Lean_Meta_Grind_mkDiseqProof_x3f(v_a_522_, v_b_523_, v_a_524_, v_a_525_, v_a_526_, v_a_527_, v_a_528_, v_a_529_, v_a_530_, v_a_531_, v_a_532_, v_a_533_);
lean_dec(v_a_533_);
lean_dec_ref(v_a_532_);
lean_dec(v_a_531_);
lean_dec_ref(v_a_530_);
lean_dec(v_a_529_);
lean_dec_ref(v_a_528_);
lean_dec(v_a_527_);
lean_dec_ref(v_a_526_);
lean_dec(v_a_525_);
lean_dec(v_a_524_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0_spec__0(lean_object* v_msgData_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
lean_object* v___x_542_; lean_object* v_env_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v_mctx_546_; lean_object* v_lctx_547_; lean_object* v_options_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_542_ = lean_st_ref_get(v___y_540_);
v_env_543_ = lean_ctor_get(v___x_542_, 0);
lean_inc_ref(v_env_543_);
lean_dec(v___x_542_);
v___x_544_ = lean_st_ref_get(v___y_540_);
lean_dec(v___x_544_);
v___x_545_ = lean_st_ref_get(v___y_538_);
v_mctx_546_ = lean_ctor_get(v___x_545_, 0);
lean_inc_ref(v_mctx_546_);
lean_dec(v___x_545_);
v_lctx_547_ = lean_ctor_get(v___y_537_, 2);
v_options_548_ = lean_ctor_get(v___y_539_, 2);
lean_inc_ref(v_options_548_);
lean_inc_ref(v_lctx_547_);
v___x_549_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_549_, 0, v_env_543_);
lean_ctor_set(v___x_549_, 1, v_mctx_546_);
lean_ctor_set(v___x_549_, 2, v_lctx_547_);
lean_ctor_set(v___x_549_, 3, v_options_548_);
v___x_550_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
lean_ctor_set(v___x_550_, 1, v_msgData_536_);
v___x_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0_spec__0___boxed(lean_object* v_msgData_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0_spec__0(v_msgData_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0___redArg(lean_object* v_msg_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
lean_object* v_ref_565_; lean_object* v___x_566_; lean_object* v_a_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_575_; 
v_ref_565_ = lean_ctor_get(v___y_562_, 5);
v___x_566_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0_spec__0(v_msg_559_, v___y_560_, v___y_561_, v___y_562_, v___y_563_);
v_a_567_ = lean_ctor_get(v___x_566_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_566_);
if (v_isSharedCheck_575_ == 0)
{
v___x_569_ = v___x_566_;
v_isShared_570_ = v_isSharedCheck_575_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_a_567_);
lean_dec(v___x_566_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_575_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_571_; lean_object* v___x_573_; 
lean_inc(v_ref_565_);
v___x_571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_571_, 0, v_ref_565_);
lean_ctor_set(v___x_571_, 1, v_a_567_);
if (v_isShared_570_ == 0)
{
lean_ctor_set_tag(v___x_569_, 1);
lean_ctor_set(v___x_569_, 0, v___x_571_);
v___x_573_ = v___x_569_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v___x_571_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0___redArg___boxed(lean_object* v_msg_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0___redArg(v_msg_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
lean_dec(v___y_578_);
lean_dec_ref(v___y_577_);
return v_res_582_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkDiseqProof___closed__0(void){
_start:
{
lean_object* v___x_583_; 
v___x_583_ = lean_mk_string_unchecked("internal `grind` error, failed to build disequality proof for", 61, 61);
return v___x_583_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkDiseqProof___closed__1(void){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProof___closed__0, &l_Lean_Meta_Grind_mkDiseqProof___closed__0_once, _init_l_Lean_Meta_Grind_mkDiseqProof___closed__0);
v___x_585_ = l_Lean_stringToMessageData(v___x_584_);
return v___x_585_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkDiseqProof___closed__2(void){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = lean_mk_string_unchecked("\nand", 4, 4);
return v___x_586_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkDiseqProof___closed__3(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProof___closed__2, &l_Lean_Meta_Grind_mkDiseqProof___closed__2_once, _init_l_Lean_Meta_Grind_mkDiseqProof___closed__2);
v___x_588_ = l_Lean_stringToMessageData(v___x_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkDiseqProof(lean_object* v_a_589_, lean_object* v_b_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_){
_start:
{
lean_object* v___x_602_; 
lean_inc_ref(v_b_590_);
lean_inc_ref(v_a_589_);
v___x_602_ = l_Lean_Meta_Grind_mkDiseqProof_x3f(v_a_589_, v_b_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_, v_a_600_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v_a_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_619_; 
v_a_603_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_619_ == 0)
{
v___x_605_ = v___x_602_;
v_isShared_606_ = v_isSharedCheck_619_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_dec(v___x_602_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_619_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
if (lean_obj_tag(v_a_603_) == 1)
{
lean_object* v_val_607_; lean_object* v___x_609_; 
lean_dec_ref(v_b_590_);
lean_dec_ref(v_a_589_);
v_val_607_ = lean_ctor_get(v_a_603_, 0);
lean_inc(v_val_607_);
lean_dec_ref(v_a_603_);
if (v_isShared_606_ == 0)
{
lean_ctor_set(v___x_605_, 0, v_val_607_);
v___x_609_ = v___x_605_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_val_607_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
else
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
lean_del_object(v___x_605_);
lean_dec(v_a_603_);
v___x_611_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProof___closed__1, &l_Lean_Meta_Grind_mkDiseqProof___closed__1_once, _init_l_Lean_Meta_Grind_mkDiseqProof___closed__1);
v___x_612_ = l_Lean_indentExpr(v_a_589_);
v___x_613_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_613_, 0, v___x_611_);
lean_ctor_set(v___x_613_, 1, v___x_612_);
v___x_614_ = lean_obj_once(&l_Lean_Meta_Grind_mkDiseqProof___closed__3, &l_Lean_Meta_Grind_mkDiseqProof___closed__3_once, _init_l_Lean_Meta_Grind_mkDiseqProof___closed__3);
v___x_615_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_615_, 0, v___x_613_);
lean_ctor_set(v___x_615_, 1, v___x_614_);
v___x_616_ = l_Lean_indentExpr(v_b_590_);
v___x_617_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_617_, 0, v___x_615_);
lean_ctor_set(v___x_617_, 1, v___x_616_);
v___x_618_ = l_Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0___redArg(v___x_617_, v_a_597_, v_a_598_, v_a_599_, v_a_600_);
return v___x_618_;
}
}
}
else
{
lean_object* v_a_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_627_; 
lean_dec_ref(v_b_590_);
lean_dec_ref(v_a_589_);
v_a_620_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_627_ == 0)
{
v___x_622_ = v___x_602_;
v_isShared_623_ = v_isSharedCheck_627_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_a_620_);
lean_dec(v___x_602_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_627_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_625_; 
if (v_isShared_623_ == 0)
{
v___x_625_ = v___x_622_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v_a_620_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkDiseqProof___boxed(lean_object* v_a_628_, lean_object* v_b_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_){
_start:
{
lean_object* v_res_641_; 
v_res_641_ = l_Lean_Meta_Grind_mkDiseqProof(v_a_628_, v_b_629_, v_a_630_, v_a_631_, v_a_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_, v_a_637_, v_a_638_, v_a_639_);
lean_dec(v_a_639_);
lean_dec_ref(v_a_638_);
lean_dec(v_a_637_);
lean_dec_ref(v_a_636_);
lean_dec(v_a_635_);
lean_dec_ref(v_a_634_);
lean_dec(v_a_633_);
lean_dec_ref(v_a_632_);
lean_dec(v_a_631_);
lean_dec(v_a_630_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0(lean_object* v_00_u03b1_642_, lean_object* v_msg_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = l_Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0___redArg(v_msg_643_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0___boxed(lean_object* v_00_u03b1_656_, lean_object* v_msg_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_){
_start:
{
lean_object* v_res_669_; 
v_res_669_ = l_Lean_throwError___at___00Lean_Meta_Grind_mkDiseqProof_spec__0(v_00_u03b1_656_, v_msg_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, v___y_665_, v___y_666_, v___y_667_);
lean_dec(v___y_667_);
lean_dec_ref(v___y_666_);
lean_dec(v___y_665_);
lean_dec_ref(v___y_664_);
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec(v___y_659_);
lean_dec(v___y_658_);
return v_res_669_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Lemmas(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Diseq(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq = _init_l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Diseq_0__Lean_Meta_Grind_dummyEq);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Diseq(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Init_Grind_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Diseq(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Diseq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Diseq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Diseq(builtin);
}
#ifdef __cplusplus
}
#endif
