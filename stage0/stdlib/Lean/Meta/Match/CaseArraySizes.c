// Lean compiler output
// Module: Lean.Meta.Match.CaseArraySizes
// Imports: public import Lean.Meta.Basic public import Lean.Meta.Tactic.FVarSubst import Lean.Meta.Match.CaseValues import Lean.Meta.Tactic.Subst
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assertExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_caseValues(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_substCore(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_get(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_mkArrayLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecideProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0;
static lean_once_cell_t l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedCaseArraySizesSubgoal;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_getArrayArgType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getArrayArgType___closed__0;
static lean_once_cell_t l_Lean_Meta_getArrayArgType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getArrayArgType___closed__1;
static lean_once_cell_t l_Lean_Meta_getArrayArgType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getArrayArgType___closed__2;
static lean_once_cell_t l_Lean_Meta_getArrayArgType___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getArrayArgType___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_getArrayArgType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getArrayArgType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_caseArraySizes___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_caseArraySizes___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_caseArraySizes___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_caseArraySizes___lam__0___closed__1;
static lean_once_cell_t l_Lean_Meta_caseArraySizes___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_caseArraySizes___lam__0___closed__2;
static lean_once_cell_t l_Lean_Meta_caseArraySizes___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_caseArraySizes___lam__0___closed__3;
static lean_once_cell_t l_Lean_Meta_caseArraySizes___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_caseArraySizes___lam__0___closed__4;
static lean_once_cell_t l_Lean_Meta_caseArraySizes___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_caseArraySizes___lam__0___closed__5;
static lean_once_cell_t l_Lean_Meta_caseArraySizes___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_caseArraySizes___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_caseArraySizes___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_caseArraySizes___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_caseArraySizes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_caseArraySizes___closed__0;
static lean_once_cell_t l_Lean_Meta_caseArraySizes___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_caseArraySizes___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_caseArraySizes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_caseArraySizes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_mk_empty_array_with_capacity(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_3_ = lean_box(0);
v___x_4_ = lean_obj_once(&l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0, &l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0_once, _init_l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0);
v___x_5_ = lean_box(0);
v___x_6_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
lean_ctor_set(v___x_6_, 2, v___x_4_);
lean_ctor_set(v___x_6_, 3, v___x_3_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_once(&l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__1, &l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__1_once, _init_l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__1);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedCaseArraySizesSubgoal(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default;
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0_spec__0(lean_object* v_msgData_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_){
_start:
{
lean_object* v___x_15_; lean_object* v_env_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v_mctx_19_; lean_object* v_lctx_20_; lean_object* v_options_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_15_ = lean_st_ref_get(v___y_13_);
v_env_16_ = lean_ctor_get(v___x_15_, 0);
lean_inc_ref(v_env_16_);
lean_dec(v___x_15_);
v___x_17_ = lean_st_ref_get(v___y_13_);
lean_dec(v___x_17_);
v___x_18_ = lean_st_ref_get(v___y_11_);
v_mctx_19_ = lean_ctor_get(v___x_18_, 0);
lean_inc_ref(v_mctx_19_);
lean_dec(v___x_18_);
v_lctx_20_ = lean_ctor_get(v___y_10_, 2);
v_options_21_ = lean_ctor_get(v___y_12_, 2);
lean_inc_ref(v_options_21_);
lean_inc_ref(v_lctx_20_);
v___x_22_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_22_, 0, v_env_16_);
lean_ctor_set(v___x_22_, 1, v_mctx_19_);
lean_ctor_set(v___x_22_, 2, v_lctx_20_);
lean_ctor_set(v___x_22_, 3, v_options_21_);
v___x_23_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
lean_ctor_set(v___x_23_, 1, v_msgData_9_);
v___x_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0_spec__0___boxed(lean_object* v_msgData_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0_spec__0(v_msgData_25_, v___y_26_, v___y_27_, v___y_28_, v___y_29_);
lean_dec(v___y_29_);
lean_dec_ref(v___y_28_);
lean_dec(v___y_27_);
lean_dec_ref(v___y_26_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___redArg(lean_object* v_msg_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
lean_object* v_ref_38_; lean_object* v___x_39_; lean_object* v_a_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_48_; 
v_ref_38_ = lean_ctor_get(v___y_35_, 5);
v___x_39_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0_spec__0(v_msg_32_, v___y_33_, v___y_34_, v___y_35_, v___y_36_);
v_a_40_ = lean_ctor_get(v___x_39_, 0);
v_isSharedCheck_48_ = !lean_is_exclusive(v___x_39_);
if (v_isSharedCheck_48_ == 0)
{
v___x_42_ = v___x_39_;
v_isShared_43_ = v_isSharedCheck_48_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_a_40_);
lean_dec(v___x_39_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_48_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v___x_44_; lean_object* v___x_46_; 
lean_inc(v_ref_38_);
v___x_44_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_44_, 0, v_ref_38_);
lean_ctor_set(v___x_44_, 1, v_a_40_);
if (v_isShared_43_ == 0)
{
lean_ctor_set_tag(v___x_42_, 1);
lean_ctor_set(v___x_42_, 0, v___x_44_);
v___x_46_ = v___x_42_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v___x_44_);
v___x_46_ = v_reuseFailAlloc_47_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
return v___x_46_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___redArg___boxed(lean_object* v_msg_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___redArg(v_msg_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_55_;
}
}
static lean_object* _init_l_Lean_Meta_getArrayArgType___closed__0(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_mk_string_unchecked("Array", 5, 5);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_Meta_getArrayArgType___closed__1(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_obj_once(&l_Lean_Meta_getArrayArgType___closed__0, &l_Lean_Meta_getArrayArgType___closed__0_once, _init_l_Lean_Meta_getArrayArgType___closed__0);
v___x_58_ = l_Lean_Name_mkStr1(v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_l_Lean_Meta_getArrayArgType___closed__2(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_mk_string_unchecked("array expected", 14, 14);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_Meta_getArrayArgType___closed__3(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_obj_once(&l_Lean_Meta_getArrayArgType___closed__2, &l_Lean_Meta_getArrayArgType___closed__2_once, _init_l_Lean_Meta_getArrayArgType___closed__2);
v___x_61_ = l_Lean_stringToMessageData(v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getArrayArgType(lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_){
_start:
{
lean_object* v___x_68_; 
lean_inc(v_a_66_);
lean_inc_ref(v_a_65_);
lean_inc(v_a_64_);
lean_inc_ref(v_a_63_);
lean_inc_ref(v_a_62_);
v___x_68_ = lean_infer_type(v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_);
if (lean_obj_tag(v___x_68_) == 0)
{
lean_object* v_a_69_; lean_object* v___x_70_; 
v_a_69_ = lean_ctor_get(v___x_68_, 0);
lean_inc(v_a_69_);
lean_dec_ref(v___x_68_);
v___x_70_ = l_Lean_Meta_whnfD(v_a_69_, v_a_63_, v_a_64_, v_a_65_, v_a_66_);
if (lean_obj_tag(v___x_70_) == 0)
{
lean_object* v_a_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_95_; 
v_a_71_ = lean_ctor_get(v___x_70_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_95_ == 0)
{
v___x_73_ = v___x_70_;
v_isShared_74_ = v_isSharedCheck_95_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_a_71_);
lean_dec(v___x_70_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_95_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_80_ = lean_obj_once(&l_Lean_Meta_getArrayArgType___closed__1, &l_Lean_Meta_getArrayArgType___closed__1_once, _init_l_Lean_Meta_getArrayArgType___closed__1);
v___x_81_ = lean_unsigned_to_nat(1u);
v___x_82_ = l_Lean_Expr_isAppOfArity(v_a_71_, v___x_80_, v___x_81_);
if (v___x_82_ == 0)
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v_a_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_94_; 
lean_del_object(v___x_73_);
lean_dec(v_a_71_);
v___x_83_ = lean_obj_once(&l_Lean_Meta_getArrayArgType___closed__3, &l_Lean_Meta_getArrayArgType___closed__3_once, _init_l_Lean_Meta_getArrayArgType___closed__3);
v___x_84_ = l_Lean_indentExpr(v_a_62_);
v___x_85_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_83_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___redArg(v___x_85_, v_a_63_, v_a_64_, v_a_65_, v_a_66_);
v_a_87_ = lean_ctor_get(v___x_86_, 0);
v_isSharedCheck_94_ = !lean_is_exclusive(v___x_86_);
if (v_isSharedCheck_94_ == 0)
{
v___x_89_ = v___x_86_;
v_isShared_90_ = v_isSharedCheck_94_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_a_87_);
lean_dec(v___x_86_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_94_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_92_; 
if (v_isShared_90_ == 0)
{
v___x_92_ = v___x_89_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v_a_87_);
v___x_92_ = v_reuseFailAlloc_93_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
return v___x_92_;
}
}
}
else
{
lean_dec_ref(v_a_62_);
goto v___jp_75_;
}
v___jp_75_:
{
lean_object* v___x_76_; lean_object* v___x_78_; 
v___x_76_ = l_Lean_Expr_appArg_x21(v_a_71_);
lean_dec(v_a_71_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 0, v___x_76_);
v___x_78_ = v___x_73_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v___x_76_);
v___x_78_ = v_reuseFailAlloc_79_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
return v___x_78_;
}
}
}
}
else
{
lean_dec_ref(v_a_62_);
return v___x_70_;
}
}
else
{
lean_dec_ref(v_a_62_);
return v___x_68_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getArrayArgType___boxed(lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_Meta_getArrayArgType(v_a_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_);
lean_dec(v_a_100_);
lean_dec_ref(v_a_99_);
lean_dec(v_a_98_);
lean_dec_ref(v_a_97_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0(lean_object* v_00_u03b1_103_, lean_object* v_msg_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___redArg(v_msg_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___boxed(lean_object* v_00_u03b1_111_, lean_object* v_msg_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0(v_00_u03b1_111_, v_msg_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
lean_dec(v___y_114_);
lean_dec_ref(v___y_113_);
return v_res_118_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__0(void){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = lean_mk_string_unchecked("getLit", 6, 6);
return v___x_119_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__1(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_120_ = lean_obj_once(&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__0, &l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__0_once, _init_l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__0);
v___x_121_ = lean_obj_once(&l_Lean_Meta_getArrayArgType___closed__0, &l_Lean_Meta_getArrayArgType___closed__0_once, _init_l_Lean_Meta_getArrayArgType___closed__0);
v___x_122_ = l_Lean_Name_mkStr2(v___x_121_, v___x_120_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit(lean_object* v_a_123_, lean_object* v_i_124_, lean_object* v_n_125_, lean_object* v_h_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_132_ = l_Lean_mkRawNatLit(v_i_124_);
v___x_133_ = l_Lean_mkRawNatLit(v_n_125_);
lean_inc_ref(v___x_132_);
v___x_134_ = l_Lean_Meta_mkLt(v___x_132_, v___x_133_, v_a_127_, v_a_128_, v_a_129_, v_a_130_);
if (lean_obj_tag(v___x_134_) == 0)
{
lean_object* v_a_135_; lean_object* v___x_136_; 
v_a_135_ = lean_ctor_get(v___x_134_, 0);
lean_inc(v_a_135_);
lean_dec_ref(v___x_134_);
v___x_136_ = l_Lean_Meta_mkDecideProof(v_a_135_, v_a_127_, v_a_128_, v_a_129_, v_a_130_);
if (lean_obj_tag(v___x_136_) == 0)
{
lean_object* v_a_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v_a_137_ = lean_ctor_get(v___x_136_, 0);
lean_inc(v_a_137_);
lean_dec_ref(v___x_136_);
v___x_138_ = lean_obj_once(&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__1, &l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__1_once, _init_l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__1);
v___x_139_ = lean_unsigned_to_nat(4u);
v___x_140_ = lean_mk_empty_array_with_capacity(v___x_139_);
v___x_141_ = lean_array_push(v___x_140_, v_a_123_);
v___x_142_ = lean_array_push(v___x_141_, v___x_132_);
v___x_143_ = lean_array_push(v___x_142_, v_h_126_);
v___x_144_ = lean_array_push(v___x_143_, v_a_137_);
v___x_145_ = l_Lean_Meta_mkAppM(v___x_138_, v___x_144_, v_a_127_, v_a_128_, v_a_129_, v_a_130_);
return v___x_145_;
}
else
{
lean_dec_ref(v___x_132_);
lean_dec_ref(v_h_126_);
lean_dec_ref(v_a_123_);
return v___x_136_;
}
}
else
{
lean_dec_ref(v___x_132_);
lean_dec_ref(v_h_126_);
lean_dec_ref(v_a_123_);
return v___x_134_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___boxed(lean_object* v_a_146_, lean_object* v_i_147_, lean_object* v_n_148_, lean_object* v_h_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit(v_a_146_, v_i_147_, v_n_148_, v_h_149_, v_a_150_, v_a_151_, v_a_152_, v_a_153_);
lean_dec(v_a_153_);
lean_dec_ref(v_a_152_);
lean_dec(v_a_151_);
lean_dec_ref(v_a_150_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__0(lean_object* v_mvarId_156_, lean_object* v_xs_157_, uint8_t v___x_158_, lean_object* v_args_159_, lean_object* v_a_160_, lean_object* v_heq_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = l_Lean_MVarId_getType(v_mvarId_156_, v___y_162_, v___y_163_, v___y_164_, v___y_165_);
if (lean_obj_tag(v___x_167_) == 0)
{
lean_object* v_a_168_; lean_object* v___x_169_; uint8_t v___x_170_; uint8_t v___x_171_; lean_object* v___x_172_; 
v_a_168_ = lean_ctor_get(v___x_167_, 0);
lean_inc(v_a_168_);
lean_dec_ref(v___x_167_);
v___x_169_ = lean_array_push(v_xs_157_, v_heq_161_);
v___x_170_ = 1;
v___x_171_ = 1;
v___x_172_ = l_Lean_Meta_mkForallFVars(v___x_169_, v_a_168_, v___x_158_, v___x_170_, v___x_170_, v___x_171_, v___y_162_, v___y_163_, v___y_164_, v___y_165_);
lean_dec_ref(v___x_169_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_182_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_182_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_182_ == 0)
{
v___x_175_ = v___x_172_;
v_isShared_176_ = v_isSharedCheck_182_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_172_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_182_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_180_; 
v___x_177_ = lean_array_push(v_args_159_, v_a_160_);
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v_a_173_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 0, v___x_178_);
v___x_180_ = v___x_175_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v___x_178_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
}
else
{
lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_190_; 
lean_dec_ref(v_a_160_);
lean_dec_ref(v_args_159_);
v_a_183_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_190_ == 0)
{
v___x_185_ = v___x_172_;
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_172_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_188_; 
if (v_isShared_186_ == 0)
{
v___x_188_ = v___x_185_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_a_183_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
else
{
lean_object* v_a_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_198_; 
lean_dec_ref(v_heq_161_);
lean_dec_ref(v_a_160_);
lean_dec_ref(v_args_159_);
lean_dec_ref(v_xs_157_);
v_a_191_ = lean_ctor_get(v___x_167_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_198_ == 0)
{
v___x_193_ = v___x_167_;
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_a_191_);
lean_dec(v___x_167_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_196_; 
if (v_isShared_194_ == 0)
{
v___x_196_ = v___x_193_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_a_191_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__0___boxed(lean_object* v_mvarId_199_, lean_object* v_xs_200_, lean_object* v___x_201_, lean_object* v_args_202_, lean_object* v_a_203_, lean_object* v_heq_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_){
_start:
{
uint8_t v___x_1223__boxed_210_; lean_object* v_res_211_; 
v___x_1223__boxed_210_ = lean_unbox(v___x_201_);
v_res_211_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__0(v_mvarId_199_, v_xs_200_, v___x_1223__boxed_210_, v_args_202_, v_a_203_, v_heq_204_, v___y_205_, v___y_206_, v___y_207_, v___y_208_);
lean_dec(v___y_208_);
lean_dec_ref(v___y_207_);
lean_dec(v___y_206_);
lean_dec_ref(v___y_205_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg___lam__0(lean_object* v_k_212_, lean_object* v_b_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_){
_start:
{
lean_object* v___x_219_; 
lean_inc(v___y_217_);
lean_inc_ref(v___y_216_);
lean_inc(v___y_215_);
lean_inc_ref(v___y_214_);
v___x_219_ = lean_apply_6(v_k_212_, v_b_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_, lean_box(0));
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_220_, lean_object* v_b_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg___lam__0(v_k_220_, v_b_221_, v___y_222_, v___y_223_, v___y_224_, v___y_225_);
lean_dec(v___y_225_);
lean_dec_ref(v___y_224_);
lean_dec(v___y_223_);
lean_dec_ref(v___y_222_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg(lean_object* v_name_228_, uint8_t v_bi_229_, lean_object* v_type_230_, lean_object* v_k_231_, uint8_t v_kind_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
lean_object* v___f_238_; lean_object* v___x_239_; 
v___f_238_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_238_, 0, v_k_231_);
v___x_239_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_228_, v_bi_229_, v_type_230_, v___f_238_, v_kind_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_);
if (lean_obj_tag(v___x_239_) == 0)
{
lean_object* v_a_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_247_; 
v_a_240_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_247_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_247_ == 0)
{
v___x_242_ = v___x_239_;
v_isShared_243_ = v_isSharedCheck_247_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_a_240_);
lean_dec(v___x_239_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_247_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v___x_245_; 
if (v_isShared_243_ == 0)
{
v___x_245_ = v___x_242_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v_a_240_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
}
else
{
lean_object* v_a_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_255_; 
v_a_248_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_255_ == 0)
{
v___x_250_ = v___x_239_;
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_a_248_);
lean_dec(v___x_239_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_253_; 
if (v_isShared_251_ == 0)
{
v___x_253_ = v___x_250_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_a_248_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg___boxed(lean_object* v_name_256_, lean_object* v_bi_257_, lean_object* v_type_258_, lean_object* v_k_259_, lean_object* v_kind_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
uint8_t v_bi_boxed_266_; uint8_t v_kind_boxed_267_; lean_object* v_res_268_; 
v_bi_boxed_266_ = lean_unbox(v_bi_257_);
v_kind_boxed_267_ = lean_unbox(v_kind_260_);
v_res_268_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg(v_name_256_, v_bi_boxed_266_, v_type_258_, v_k_259_, v_kind_boxed_267_, v___y_261_, v___y_262_, v___y_263_, v___y_264_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___redArg(lean_object* v_name_269_, lean_object* v_type_270_, lean_object* v_k_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_){
_start:
{
uint8_t v___x_277_; uint8_t v___x_278_; lean_object* v___x_279_; 
v___x_277_ = 0;
v___x_278_ = 0;
v___x_279_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg(v_name_269_, v___x_277_, v_type_270_, v_k_271_, v___x_278_, v___y_272_, v___y_273_, v___y_274_, v___y_275_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___redArg___boxed(lean_object* v_name_280_, lean_object* v_type_281_, lean_object* v_k_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___redArg(v_name_280_, v_type_281_, v_k_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
lean_dec(v___y_284_);
lean_dec_ref(v___y_283_);
return v_res_288_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__0(void){
_start:
{
lean_object* v___x_289_; 
v___x_289_ = lean_mk_string_unchecked("toArrayLit_eq", 13, 13);
return v___x_289_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__1(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_290_ = lean_obj_once(&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__0, &l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__0_once, _init_l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__0);
v___x_291_ = lean_obj_once(&l_Lean_Meta_getArrayArgType___closed__0, &l_Lean_Meta_getArrayArgType___closed__0_once, _init_l_Lean_Meta_getArrayArgType___closed__0);
v___x_292_ = l_Lean_Name_mkStr2(v___x_291_, v___x_290_);
return v___x_292_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__2(void){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = lean_mk_string_unchecked("hEqALit", 7, 7);
return v___x_293_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__3(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_obj_once(&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__2, &l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__2_once, _init_l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__2);
v___x_295_ = l_Lean_Name_mkStr1(v___x_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__1___boxed(lean_object* v_a_296_, lean_object* v_i_297_, lean_object* v_n_298_, lean_object* v_aSizeEqN_299_, lean_object* v_xs_300_, lean_object* v_args_301_, lean_object* v_mvarId_302_, lean_object* v_xNamePrefix_303_, lean_object* v_00_u03b1_304_, lean_object* v___x_305_, lean_object* v_xi_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__1(v_a_296_, v_i_297_, v_n_298_, v_aSizeEqN_299_, v_xs_300_, v_args_301_, v_mvarId_302_, v_xNamePrefix_303_, v_00_u03b1_304_, v___x_305_, v_xi_306_, v___y_307_, v___y_308_, v___y_309_, v___y_310_);
lean_dec(v___y_310_);
lean_dec_ref(v___y_309_);
lean_dec(v___y_308_);
lean_dec_ref(v___y_307_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop(lean_object* v_mvarId_313_, lean_object* v_a_314_, lean_object* v_n_315_, lean_object* v_xNamePrefix_316_, lean_object* v_aSizeEqN_317_, lean_object* v_00_u03b1_318_, lean_object* v_i_319_, lean_object* v_xs_320_, lean_object* v_args_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_){
_start:
{
uint8_t v___x_327_; 
v___x_327_ = lean_nat_dec_lt(v_i_319_, v_n_315_);
if (v___x_327_ == 0)
{
lean_object* v___x_328_; lean_object* v___x_329_; 
lean_dec(v_i_319_);
lean_dec(v_xNamePrefix_316_);
lean_inc_ref(v_xs_320_);
v___x_328_ = lean_array_to_list(v_xs_320_);
v___x_329_ = l_Lean_Meta_mkArrayLit(v_00_u03b1_318_, v___x_328_, v_a_322_, v_a_323_, v_a_324_, v_a_325_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; lean_object* v___x_331_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_a_330_);
lean_dec_ref(v___x_329_);
lean_inc_ref(v_a_314_);
v___x_331_ = l_Lean_Meta_mkEq(v_a_314_, v_a_330_, v_a_322_, v_a_323_, v_a_324_, v_a_325_);
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v_a_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_a_332_ = lean_ctor_get(v___x_331_, 0);
lean_inc(v_a_332_);
lean_dec_ref(v___x_331_);
v___x_333_ = lean_obj_once(&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__1, &l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__1_once, _init_l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__1);
v___x_334_ = l_Lean_mkRawNatLit(v_n_315_);
v___x_335_ = lean_unsigned_to_nat(3u);
v___x_336_ = lean_mk_empty_array_with_capacity(v___x_335_);
v___x_337_ = lean_array_push(v___x_336_, v_a_314_);
v___x_338_ = lean_array_push(v___x_337_, v___x_334_);
v___x_339_ = lean_array_push(v___x_338_, v_aSizeEqN_317_);
v___x_340_ = l_Lean_Meta_mkAppM(v___x_333_, v___x_339_, v_a_322_, v_a_323_, v_a_324_, v_a_325_);
if (lean_obj_tag(v___x_340_) == 0)
{
lean_object* v_a_341_; lean_object* v___x_342_; lean_object* v___f_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
lean_inc(v_a_341_);
lean_dec_ref(v___x_340_);
v___x_342_ = lean_box(v___x_327_);
v___f_343_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__0___boxed), 11, 5);
lean_closure_set(v___f_343_, 0, v_mvarId_313_);
lean_closure_set(v___f_343_, 1, v_xs_320_);
lean_closure_set(v___f_343_, 2, v___x_342_);
lean_closure_set(v___f_343_, 3, v_args_321_);
lean_closure_set(v___f_343_, 4, v_a_341_);
v___x_344_ = lean_obj_once(&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__3, &l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__3_once, _init_l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__3);
v___x_345_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___redArg(v___x_344_, v_a_332_, v___f_343_, v_a_322_, v_a_323_, v_a_324_, v_a_325_);
return v___x_345_;
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_dec(v_a_332_);
lean_dec_ref(v_args_321_);
lean_dec_ref(v_xs_320_);
lean_dec(v_mvarId_313_);
v_a_346_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_340_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_340_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
lean_dec_ref(v_args_321_);
lean_dec_ref(v_xs_320_);
lean_dec_ref(v_aSizeEqN_317_);
lean_dec(v_n_315_);
lean_dec_ref(v_a_314_);
lean_dec(v_mvarId_313_);
v_a_354_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_331_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_331_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
else
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_369_; 
lean_dec_ref(v_args_321_);
lean_dec_ref(v_xs_320_);
lean_dec_ref(v_aSizeEqN_317_);
lean_dec(v_n_315_);
lean_dec_ref(v_a_314_);
lean_dec(v_mvarId_313_);
v_a_362_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_369_ == 0)
{
v___x_364_ = v___x_329_;
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_329_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
if (v_isShared_365_ == 0)
{
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_a_362_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
else
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___f_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_370_ = lean_unsigned_to_nat(1u);
v___x_371_ = lean_nat_add(v_i_319_, v___x_370_);
lean_inc(v___x_371_);
lean_inc_ref(v_00_u03b1_318_);
lean_inc(v_xNamePrefix_316_);
v___f_372_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__1___boxed), 16, 10);
lean_closure_set(v___f_372_, 0, v_a_314_);
lean_closure_set(v___f_372_, 1, v_i_319_);
lean_closure_set(v___f_372_, 2, v_n_315_);
lean_closure_set(v___f_372_, 3, v_aSizeEqN_317_);
lean_closure_set(v___f_372_, 4, v_xs_320_);
lean_closure_set(v___f_372_, 5, v_args_321_);
lean_closure_set(v___f_372_, 6, v_mvarId_313_);
lean_closure_set(v___f_372_, 7, v_xNamePrefix_316_);
lean_closure_set(v___f_372_, 8, v_00_u03b1_318_);
lean_closure_set(v___f_372_, 9, v___x_371_);
v___x_373_ = lean_name_append_index_after(v_xNamePrefix_316_, v___x_371_);
v___x_374_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___redArg(v___x_373_, v_00_u03b1_318_, v___f_372_, v_a_322_, v_a_323_, v_a_324_, v_a_325_);
return v___x_374_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__1(lean_object* v_a_375_, lean_object* v_i_376_, lean_object* v_n_377_, lean_object* v_aSizeEqN_378_, lean_object* v_xs_379_, lean_object* v_args_380_, lean_object* v_mvarId_381_, lean_object* v_xNamePrefix_382_, lean_object* v_00_u03b1_383_, lean_object* v___x_384_, lean_object* v_xi_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
lean_object* v___x_391_; 
lean_inc_ref(v_aSizeEqN_378_);
lean_inc(v_n_377_);
lean_inc_ref(v_a_375_);
v___x_391_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit(v_a_375_, v_i_376_, v_n_377_, v_aSizeEqN_378_, v___y_386_, v___y_387_, v___y_388_, v___y_389_);
if (lean_obj_tag(v___x_391_) == 0)
{
lean_object* v_a_392_; lean_object* v_xs_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v_a_392_ = lean_ctor_get(v___x_391_, 0);
lean_inc(v_a_392_);
lean_dec_ref(v___x_391_);
v_xs_393_ = lean_array_push(v_xs_379_, v_xi_385_);
v___x_394_ = lean_array_push(v_args_380_, v_a_392_);
v___x_395_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop(v_mvarId_381_, v_a_375_, v_n_377_, v_xNamePrefix_382_, v_aSizeEqN_378_, v_00_u03b1_383_, v___x_384_, v_xs_393_, v___x_394_, v___y_386_, v___y_387_, v___y_388_, v___y_389_);
return v___x_395_;
}
else
{
lean_object* v_a_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_403_; 
lean_dec_ref(v_xi_385_);
lean_dec(v___x_384_);
lean_dec_ref(v_00_u03b1_383_);
lean_dec(v_xNamePrefix_382_);
lean_dec(v_mvarId_381_);
lean_dec_ref(v_args_380_);
lean_dec_ref(v_xs_379_);
lean_dec_ref(v_aSizeEqN_378_);
lean_dec(v_n_377_);
lean_dec_ref(v_a_375_);
v_a_396_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_403_ == 0)
{
v___x_398_ = v___x_391_;
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_a_396_);
lean_dec(v___x_391_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_401_; 
if (v_isShared_399_ == 0)
{
v___x_401_ = v___x_398_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_a_396_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___boxed(lean_object* v_mvarId_404_, lean_object* v_a_405_, lean_object* v_n_406_, lean_object* v_xNamePrefix_407_, lean_object* v_aSizeEqN_408_, lean_object* v_00_u03b1_409_, lean_object* v_i_410_, lean_object* v_xs_411_, lean_object* v_args_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop(v_mvarId_404_, v_a_405_, v_n_406_, v_xNamePrefix_407_, v_aSizeEqN_408_, v_00_u03b1_409_, v_i_410_, v_xs_411_, v_args_412_, v_a_413_, v_a_414_, v_a_415_, v_a_416_);
lean_dec(v_a_416_);
lean_dec_ref(v_a_415_);
lean_dec(v_a_414_);
lean_dec_ref(v_a_413_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0(lean_object* v_00_u03b1_419_, lean_object* v_name_420_, uint8_t v_bi_421_, lean_object* v_type_422_, lean_object* v_k_423_, uint8_t v_kind_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_){
_start:
{
lean_object* v___x_430_; 
v___x_430_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg(v_name_420_, v_bi_421_, v_type_422_, v_k_423_, v_kind_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___boxed(lean_object* v_00_u03b1_431_, lean_object* v_name_432_, lean_object* v_bi_433_, lean_object* v_type_434_, lean_object* v_k_435_, lean_object* v_kind_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
uint8_t v_bi_boxed_442_; uint8_t v_kind_boxed_443_; lean_object* v_res_444_; 
v_bi_boxed_442_ = lean_unbox(v_bi_433_);
v_kind_boxed_443_ = lean_unbox(v_kind_436_);
v_res_444_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0(v_00_u03b1_431_, v_name_432_, v_bi_boxed_442_, v_type_434_, v_k_435_, v_kind_boxed_443_, v___y_437_, v___y_438_, v___y_439_, v___y_440_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0(lean_object* v_00_u03b1_445_, lean_object* v_name_446_, lean_object* v_type_447_, lean_object* v_k_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___redArg(v_name_446_, v_type_447_, v_k_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___boxed(lean_object* v_00_u03b1_455_, lean_object* v_name_456_, lean_object* v_type_457_, lean_object* v_k_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0(v_00_u03b1_455_, v_name_456_, v_type_457_, v_k_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_);
lean_dec(v___y_462_);
lean_dec_ref(v___y_461_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_465_, lean_object* v_x_466_, lean_object* v_x_467_, lean_object* v_x_468_){
_start:
{
lean_object* v_ks_469_; lean_object* v_vs_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_494_; 
v_ks_469_ = lean_ctor_get(v_x_465_, 0);
v_vs_470_ = lean_ctor_get(v_x_465_, 1);
v_isSharedCheck_494_ = !lean_is_exclusive(v_x_465_);
if (v_isSharedCheck_494_ == 0)
{
v___x_472_ = v_x_465_;
v_isShared_473_ = v_isSharedCheck_494_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_vs_470_);
lean_inc(v_ks_469_);
lean_dec(v_x_465_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_494_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_474_; uint8_t v___x_475_; 
v___x_474_ = lean_array_get_size(v_ks_469_);
v___x_475_ = lean_nat_dec_lt(v_x_466_, v___x_474_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_479_; 
lean_dec(v_x_466_);
v___x_476_ = lean_array_push(v_ks_469_, v_x_467_);
v___x_477_ = lean_array_push(v_vs_470_, v_x_468_);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 1, v___x_477_);
lean_ctor_set(v___x_472_, 0, v___x_476_);
v___x_479_ = v___x_472_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v___x_476_);
lean_ctor_set(v_reuseFailAlloc_480_, 1, v___x_477_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
else
{
lean_object* v_k_x27_481_; uint8_t v___x_482_; 
v_k_x27_481_ = lean_array_fget_borrowed(v_ks_469_, v_x_466_);
v___x_482_ = l_Lean_instBEqMVarId_beq(v_x_467_, v_k_x27_481_);
if (v___x_482_ == 0)
{
lean_object* v___x_484_; 
if (v_isShared_473_ == 0)
{
v___x_484_ = v___x_472_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_ks_469_);
lean_ctor_set(v_reuseFailAlloc_488_, 1, v_vs_470_);
v___x_484_ = v_reuseFailAlloc_488_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = lean_unsigned_to_nat(1u);
v___x_486_ = lean_nat_add(v_x_466_, v___x_485_);
lean_dec(v_x_466_);
v_x_465_ = v___x_484_;
v_x_466_ = v___x_486_;
goto _start;
}
}
else
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_492_; 
v___x_489_ = lean_array_fset(v_ks_469_, v_x_466_, v_x_467_);
v___x_490_ = lean_array_fset(v_vs_470_, v_x_466_, v_x_468_);
lean_dec(v_x_466_);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 1, v___x_490_);
lean_ctor_set(v___x_472_, 0, v___x_489_);
v___x_492_ = v___x_472_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_489_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v___x_490_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_n_495_, lean_object* v_k_496_, lean_object* v_v_497_){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = lean_unsigned_to_nat(0u);
v___x_499_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_n_495_, v___x_498_, v_k_496_, v_v_497_);
return v___x_499_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_500_; size_t v___x_501_; size_t v___x_502_; 
v___x_500_ = ((size_t)5ULL);
v___x_501_ = ((size_t)1ULL);
v___x_502_ = lean_usize_shift_left(v___x_501_, v___x_500_);
return v___x_502_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_503_; size_t v___x_504_; size_t v___x_505_; 
v___x_503_ = ((size_t)1ULL);
v___x_504_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_505_ = lean_usize_sub(v___x_504_, v___x_503_);
return v___x_505_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg(lean_object* v_x_507_, size_t v_x_508_, size_t v_x_509_, lean_object* v_x_510_, lean_object* v_x_511_){
_start:
{
if (lean_obj_tag(v_x_507_) == 0)
{
lean_object* v_es_512_; size_t v___x_513_; size_t v___x_514_; size_t v___x_515_; size_t v___x_516_; lean_object* v_j_517_; lean_object* v___x_518_; uint8_t v___x_519_; 
v_es_512_ = lean_ctor_get(v_x_507_, 0);
v___x_513_ = ((size_t)5ULL);
v___x_514_ = ((size_t)1ULL);
v___x_515_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_516_ = lean_usize_land(v_x_508_, v___x_515_);
v_j_517_ = lean_usize_to_nat(v___x_516_);
v___x_518_ = lean_array_get_size(v_es_512_);
v___x_519_ = lean_nat_dec_lt(v_j_517_, v___x_518_);
if (v___x_519_ == 0)
{
lean_dec(v_j_517_);
lean_dec(v_x_511_);
lean_dec(v_x_510_);
return v_x_507_;
}
else
{
lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_556_; 
lean_inc_ref(v_es_512_);
v_isSharedCheck_556_ = !lean_is_exclusive(v_x_507_);
if (v_isSharedCheck_556_ == 0)
{
lean_object* v_unused_557_; 
v_unused_557_ = lean_ctor_get(v_x_507_, 0);
lean_dec(v_unused_557_);
v___x_521_ = v_x_507_;
v_isShared_522_ = v_isSharedCheck_556_;
goto v_resetjp_520_;
}
else
{
lean_dec(v_x_507_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_556_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v_v_523_; lean_object* v___x_524_; lean_object* v_xs_x27_525_; lean_object* v___y_527_; 
v_v_523_ = lean_array_fget(v_es_512_, v_j_517_);
v___x_524_ = lean_box(0);
v_xs_x27_525_ = lean_array_fset(v_es_512_, v_j_517_, v___x_524_);
switch(lean_obj_tag(v_v_523_))
{
case 0:
{
lean_object* v_key_532_; lean_object* v_val_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_543_; 
v_key_532_ = lean_ctor_get(v_v_523_, 0);
v_val_533_ = lean_ctor_get(v_v_523_, 1);
v_isSharedCheck_543_ = !lean_is_exclusive(v_v_523_);
if (v_isSharedCheck_543_ == 0)
{
v___x_535_ = v_v_523_;
v_isShared_536_ = v_isSharedCheck_543_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_val_533_);
lean_inc(v_key_532_);
lean_dec(v_v_523_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_543_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
uint8_t v___x_537_; 
v___x_537_ = l_Lean_instBEqMVarId_beq(v_x_510_, v_key_532_);
if (v___x_537_ == 0)
{
lean_object* v___x_538_; lean_object* v___x_539_; 
lean_del_object(v___x_535_);
v___x_538_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_532_, v_val_533_, v_x_510_, v_x_511_);
v___x_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
v___y_527_ = v___x_539_;
goto v___jp_526_;
}
else
{
lean_object* v___x_541_; 
lean_dec(v_val_533_);
lean_dec(v_key_532_);
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 1, v_x_511_);
lean_ctor_set(v___x_535_, 0, v_x_510_);
v___x_541_ = v___x_535_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_x_510_);
lean_ctor_set(v_reuseFailAlloc_542_, 1, v_x_511_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
v___y_527_ = v___x_541_;
goto v___jp_526_;
}
}
}
}
case 1:
{
lean_object* v_node_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_554_; 
v_node_544_ = lean_ctor_get(v_v_523_, 0);
v_isSharedCheck_554_ = !lean_is_exclusive(v_v_523_);
if (v_isSharedCheck_554_ == 0)
{
v___x_546_ = v_v_523_;
v_isShared_547_ = v_isSharedCheck_554_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_node_544_);
lean_dec(v_v_523_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_554_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
size_t v___x_548_; size_t v___x_549_; lean_object* v___x_550_; lean_object* v___x_552_; 
v___x_548_ = lean_usize_shift_right(v_x_508_, v___x_513_);
v___x_549_ = lean_usize_add(v_x_509_, v___x_514_);
v___x_550_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg(v_node_544_, v___x_548_, v___x_549_, v_x_510_, v_x_511_);
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 0, v___x_550_);
v___x_552_ = v___x_546_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v___x_550_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
v___y_527_ = v___x_552_;
goto v___jp_526_;
}
}
}
default: 
{
lean_object* v___x_555_; 
v___x_555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_555_, 0, v_x_510_);
lean_ctor_set(v___x_555_, 1, v_x_511_);
v___y_527_ = v___x_555_;
goto v___jp_526_;
}
}
v___jp_526_:
{
lean_object* v___x_528_; lean_object* v___x_530_; 
v___x_528_ = lean_array_fset(v_xs_x27_525_, v_j_517_, v___y_527_);
lean_dec(v_j_517_);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 0, v___x_528_);
v___x_530_ = v___x_521_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_528_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
}
else
{
lean_object* v_ks_558_; lean_object* v_vs_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_579_; 
v_ks_558_ = lean_ctor_get(v_x_507_, 0);
v_vs_559_ = lean_ctor_get(v_x_507_, 1);
v_isSharedCheck_579_ = !lean_is_exclusive(v_x_507_);
if (v_isSharedCheck_579_ == 0)
{
v___x_561_ = v_x_507_;
v_isShared_562_ = v_isSharedCheck_579_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_vs_559_);
lean_inc(v_ks_558_);
lean_dec(v_x_507_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_579_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_564_; 
if (v_isShared_562_ == 0)
{
v___x_564_ = v___x_561_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_ks_558_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v_vs_559_);
v___x_564_ = v_reuseFailAlloc_578_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
lean_object* v_newNode_565_; uint8_t v___y_567_; size_t v___x_573_; uint8_t v___x_574_; 
v_newNode_565_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2___redArg(v___x_564_, v_x_510_, v_x_511_);
v___x_573_ = ((size_t)7ULL);
v___x_574_ = lean_usize_dec_le(v___x_573_, v_x_509_);
if (v___x_574_ == 0)
{
lean_object* v___x_575_; lean_object* v___x_576_; uint8_t v___x_577_; 
v___x_575_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_565_);
v___x_576_ = lean_unsigned_to_nat(4u);
v___x_577_ = lean_nat_dec_lt(v___x_575_, v___x_576_);
lean_dec(v___x_575_);
v___y_567_ = v___x_577_;
goto v___jp_566_;
}
else
{
v___y_567_ = v___x_574_;
goto v___jp_566_;
}
v___jp_566_:
{
if (v___y_567_ == 0)
{
lean_object* v_ks_568_; lean_object* v_vs_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v_ks_568_ = lean_ctor_get(v_newNode_565_, 0);
lean_inc_ref(v_ks_568_);
v_vs_569_ = lean_ctor_get(v_newNode_565_, 1);
lean_inc_ref(v_vs_569_);
lean_dec_ref(v_newNode_565_);
v___x_570_ = lean_unsigned_to_nat(0u);
v___x_571_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__2);
v___x_572_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___redArg(v_x_509_, v_ks_568_, v_vs_569_, v___x_570_, v___x_571_);
lean_dec_ref(v_vs_569_);
lean_dec_ref(v_ks_568_);
return v___x_572_;
}
else
{
return v_newNode_565_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___redArg(size_t v_depth_580_, lean_object* v_keys_581_, lean_object* v_vals_582_, lean_object* v_i_583_, lean_object* v_entries_584_){
_start:
{
lean_object* v___x_585_; uint8_t v___x_586_; 
v___x_585_ = lean_array_get_size(v_keys_581_);
v___x_586_ = lean_nat_dec_lt(v_i_583_, v___x_585_);
if (v___x_586_ == 0)
{
lean_dec(v_i_583_);
return v_entries_584_;
}
else
{
lean_object* v_k_587_; lean_object* v_v_588_; uint64_t v___x_589_; size_t v_h_590_; size_t v___x_591_; lean_object* v___x_592_; size_t v___x_593_; size_t v___x_594_; size_t v___x_595_; size_t v_h_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v_k_587_ = lean_array_fget_borrowed(v_keys_581_, v_i_583_);
v_v_588_ = lean_array_fget_borrowed(v_vals_582_, v_i_583_);
v___x_589_ = l_Lean_instHashableMVarId_hash(v_k_587_);
v_h_590_ = lean_uint64_to_usize(v___x_589_);
v___x_591_ = ((size_t)5ULL);
v___x_592_ = lean_unsigned_to_nat(1u);
v___x_593_ = ((size_t)1ULL);
v___x_594_ = lean_usize_sub(v_depth_580_, v___x_593_);
v___x_595_ = lean_usize_mul(v___x_591_, v___x_594_);
v_h_596_ = lean_usize_shift_right(v_h_590_, v___x_595_);
v___x_597_ = lean_nat_add(v_i_583_, v___x_592_);
lean_dec(v_i_583_);
lean_inc(v_v_588_);
lean_inc(v_k_587_);
v___x_598_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg(v_entries_584_, v_h_596_, v_depth_580_, v_k_587_, v_v_588_);
v_i_583_ = v___x_597_;
v_entries_584_ = v___x_598_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_depth_600_, lean_object* v_keys_601_, lean_object* v_vals_602_, lean_object* v_i_603_, lean_object* v_entries_604_){
_start:
{
size_t v_depth_boxed_605_; lean_object* v_res_606_; 
v_depth_boxed_605_ = lean_unbox_usize(v_depth_600_);
lean_dec(v_depth_600_);
v_res_606_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_boxed_605_, v_keys_601_, v_vals_602_, v_i_603_, v_entries_604_);
lean_dec_ref(v_vals_602_);
lean_dec_ref(v_keys_601_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_607_, lean_object* v_x_608_, lean_object* v_x_609_, lean_object* v_x_610_, lean_object* v_x_611_){
_start:
{
size_t v_x_1010__boxed_612_; size_t v_x_1011__boxed_613_; lean_object* v_res_614_; 
v_x_1010__boxed_612_ = lean_unbox_usize(v_x_608_);
lean_dec(v_x_608_);
v_x_1011__boxed_613_ = lean_unbox_usize(v_x_609_);
lean_dec(v_x_609_);
v_res_614_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg(v_x_607_, v_x_1010__boxed_612_, v_x_1011__boxed_613_, v_x_610_, v_x_611_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0___redArg(lean_object* v_x_615_, lean_object* v_x_616_, lean_object* v_x_617_){
_start:
{
uint64_t v___x_618_; size_t v___x_619_; size_t v___x_620_; lean_object* v___x_621_; 
v___x_618_ = l_Lean_instHashableMVarId_hash(v_x_616_);
v___x_619_ = lean_uint64_to_usize(v___x_618_);
v___x_620_ = ((size_t)1ULL);
v___x_621_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg(v_x_615_, v___x_619_, v___x_620_, v_x_616_, v_x_617_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___redArg(lean_object* v_mvarId_622_, lean_object* v_val_623_, lean_object* v___y_624_, lean_object* v___y_625_){
_start:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v_mctx_629_; lean_object* v_cache_630_; lean_object* v_zetaDeltaFVarIds_631_; lean_object* v_postponed_632_; lean_object* v_diag_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_661_; 
v___x_627_ = lean_st_ref_get(v___y_625_);
lean_dec(v___x_627_);
v___x_628_ = lean_st_ref_take(v___y_624_);
v_mctx_629_ = lean_ctor_get(v___x_628_, 0);
v_cache_630_ = lean_ctor_get(v___x_628_, 1);
v_zetaDeltaFVarIds_631_ = lean_ctor_get(v___x_628_, 2);
v_postponed_632_ = lean_ctor_get(v___x_628_, 3);
v_diag_633_ = lean_ctor_get(v___x_628_, 4);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_661_ == 0)
{
v___x_635_ = v___x_628_;
v_isShared_636_ = v_isSharedCheck_661_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_diag_633_);
lean_inc(v_postponed_632_);
lean_inc(v_zetaDeltaFVarIds_631_);
lean_inc(v_cache_630_);
lean_inc(v_mctx_629_);
lean_dec(v___x_628_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_661_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v_depth_637_; lean_object* v_levelAssignDepth_638_; lean_object* v_lmvarCounter_639_; lean_object* v_mvarCounter_640_; lean_object* v_lDecls_641_; lean_object* v_decls_642_; lean_object* v_userNames_643_; lean_object* v_lAssignment_644_; lean_object* v_eAssignment_645_; lean_object* v_dAssignment_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_660_; 
v_depth_637_ = lean_ctor_get(v_mctx_629_, 0);
v_levelAssignDepth_638_ = lean_ctor_get(v_mctx_629_, 1);
v_lmvarCounter_639_ = lean_ctor_get(v_mctx_629_, 2);
v_mvarCounter_640_ = lean_ctor_get(v_mctx_629_, 3);
v_lDecls_641_ = lean_ctor_get(v_mctx_629_, 4);
v_decls_642_ = lean_ctor_get(v_mctx_629_, 5);
v_userNames_643_ = lean_ctor_get(v_mctx_629_, 6);
v_lAssignment_644_ = lean_ctor_get(v_mctx_629_, 7);
v_eAssignment_645_ = lean_ctor_get(v_mctx_629_, 8);
v_dAssignment_646_ = lean_ctor_get(v_mctx_629_, 9);
v_isSharedCheck_660_ = !lean_is_exclusive(v_mctx_629_);
if (v_isSharedCheck_660_ == 0)
{
v___x_648_ = v_mctx_629_;
v_isShared_649_ = v_isSharedCheck_660_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_dAssignment_646_);
lean_inc(v_eAssignment_645_);
lean_inc(v_lAssignment_644_);
lean_inc(v_userNames_643_);
lean_inc(v_decls_642_);
lean_inc(v_lDecls_641_);
lean_inc(v_mvarCounter_640_);
lean_inc(v_lmvarCounter_639_);
lean_inc(v_levelAssignDepth_638_);
lean_inc(v_depth_637_);
lean_dec(v_mctx_629_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_660_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_650_; lean_object* v___x_652_; 
v___x_650_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0___redArg(v_eAssignment_645_, v_mvarId_622_, v_val_623_);
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 8, v___x_650_);
v___x_652_ = v___x_648_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_depth_637_);
lean_ctor_set(v_reuseFailAlloc_659_, 1, v_levelAssignDepth_638_);
lean_ctor_set(v_reuseFailAlloc_659_, 2, v_lmvarCounter_639_);
lean_ctor_set(v_reuseFailAlloc_659_, 3, v_mvarCounter_640_);
lean_ctor_set(v_reuseFailAlloc_659_, 4, v_lDecls_641_);
lean_ctor_set(v_reuseFailAlloc_659_, 5, v_decls_642_);
lean_ctor_set(v_reuseFailAlloc_659_, 6, v_userNames_643_);
lean_ctor_set(v_reuseFailAlloc_659_, 7, v_lAssignment_644_);
lean_ctor_set(v_reuseFailAlloc_659_, 8, v___x_650_);
lean_ctor_set(v_reuseFailAlloc_659_, 9, v_dAssignment_646_);
v___x_652_ = v_reuseFailAlloc_659_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
lean_object* v___x_654_; 
if (v_isShared_636_ == 0)
{
lean_ctor_set(v___x_635_, 0, v___x_652_);
v___x_654_ = v___x_635_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v___x_652_);
lean_ctor_set(v_reuseFailAlloc_658_, 1, v_cache_630_);
lean_ctor_set(v_reuseFailAlloc_658_, 2, v_zetaDeltaFVarIds_631_);
lean_ctor_set(v_reuseFailAlloc_658_, 3, v_postponed_632_);
lean_ctor_set(v_reuseFailAlloc_658_, 4, v_diag_633_);
v___x_654_ = v_reuseFailAlloc_658_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_655_ = lean_st_ref_set(v___y_624_, v___x_654_);
v___x_656_ = lean_box(0);
v___x_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_657_, 0, v___x_656_);
return v___x_657_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___redArg___boxed(lean_object* v_mvarId_662_, lean_object* v_val_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___redArg(v_mvarId_662_, v_val_663_, v___y_664_, v___y_665_);
lean_dec(v___y_665_);
lean_dec(v___y_664_);
return v_res_667_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit___closed__0(void){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = lean_unsigned_to_nat(0u);
v___x_669_ = lean_mk_empty_array_with_capacity(v___x_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit(lean_object* v_mvarId_670_, lean_object* v_a_671_, lean_object* v_n_672_, lean_object* v_xNamePrefix_673_, lean_object* v_aSizeEqN_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_){
_start:
{
lean_object* v___x_680_; 
lean_inc_ref(v_a_671_);
v___x_680_ = l_Lean_Meta_getArrayArgType(v_a_671_, v_a_675_, v_a_676_, v_a_677_, v_a_678_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v_a_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v_a_681_ = lean_ctor_get(v___x_680_, 0);
lean_inc(v_a_681_);
lean_dec_ref(v___x_680_);
v___x_682_ = lean_unsigned_to_nat(0u);
v___x_683_ = lean_obj_once(&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit___closed__0, &l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit___closed__0_once, _init_l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit___closed__0);
lean_inc(v_mvarId_670_);
v___x_684_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop(v_mvarId_670_, v_a_671_, v_n_672_, v_xNamePrefix_673_, v_aSizeEqN_674_, v_a_681_, v___x_682_, v___x_683_, v___x_683_, v_a_675_, v_a_676_, v_a_677_, v_a_678_);
if (lean_obj_tag(v___x_684_) == 0)
{
lean_object* v_a_685_; lean_object* v_fst_686_; lean_object* v_snd_687_; lean_object* v___x_688_; 
v_a_685_ = lean_ctor_get(v___x_684_, 0);
lean_inc(v_a_685_);
lean_dec_ref(v___x_684_);
v_fst_686_ = lean_ctor_get(v_a_685_, 0);
lean_inc(v_fst_686_);
v_snd_687_ = lean_ctor_get(v_a_685_, 1);
lean_inc(v_snd_687_);
lean_dec(v_a_685_);
lean_inc(v_mvarId_670_);
v___x_688_ = l_Lean_MVarId_getTag(v_mvarId_670_, v_a_675_, v_a_676_, v_a_677_, v_a_678_);
if (lean_obj_tag(v___x_688_) == 0)
{
lean_object* v_a_689_; lean_object* v___x_690_; 
v_a_689_ = lean_ctor_get(v___x_688_, 0);
lean_inc(v_a_689_);
lean_dec_ref(v___x_688_);
v___x_690_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_fst_686_, v_a_689_, v_a_675_, v_a_676_, v_a_677_, v_a_678_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v_a_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_701_; 
v_a_691_ = lean_ctor_get(v___x_690_, 0);
lean_inc_n(v_a_691_, 2);
lean_dec_ref(v___x_690_);
v___x_692_ = l_Lean_mkAppN(v_a_691_, v_snd_687_);
lean_dec(v_snd_687_);
v___x_693_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___redArg(v_mvarId_670_, v___x_692_, v_a_676_, v_a_678_);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_693_);
if (v_isSharedCheck_701_ == 0)
{
lean_object* v_unused_702_; 
v_unused_702_ = lean_ctor_get(v___x_693_, 0);
lean_dec(v_unused_702_);
v___x_695_ = v___x_693_;
v_isShared_696_ = v_isSharedCheck_701_;
goto v_resetjp_694_;
}
else
{
lean_dec(v___x_693_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_701_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_697_; lean_object* v___x_699_; 
v___x_697_ = l_Lean_Expr_mvarId_x21(v_a_691_);
lean_dec(v_a_691_);
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 0, v___x_697_);
v___x_699_ = v___x_695_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_697_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
}
else
{
lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_710_; 
lean_dec(v_snd_687_);
lean_dec(v_mvarId_670_);
v_a_703_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_710_ == 0)
{
v___x_705_ = v___x_690_;
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v___x_690_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_708_; 
if (v_isShared_706_ == 0)
{
v___x_708_ = v___x_705_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_703_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
}
else
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_718_; 
lean_dec(v_snd_687_);
lean_dec(v_fst_686_);
lean_dec(v_mvarId_670_);
v_a_711_ = lean_ctor_get(v___x_688_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_688_);
if (v_isSharedCheck_718_ == 0)
{
v___x_713_ = v___x_688_;
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v___x_688_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_716_; 
if (v_isShared_714_ == 0)
{
v___x_716_ = v___x_713_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_a_711_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
}
else
{
lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_726_; 
lean_dec(v_mvarId_670_);
v_a_719_ = lean_ctor_get(v___x_684_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_726_ == 0)
{
v___x_721_ = v___x_684_;
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_dec(v___x_684_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___x_724_; 
if (v_isShared_722_ == 0)
{
v___x_724_ = v___x_721_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_a_719_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
return v___x_724_;
}
}
}
}
else
{
lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_734_; 
lean_dec_ref(v_aSizeEqN_674_);
lean_dec(v_xNamePrefix_673_);
lean_dec(v_n_672_);
lean_dec_ref(v_a_671_);
lean_dec(v_mvarId_670_);
v_a_727_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_734_ == 0)
{
v___x_729_ = v___x_680_;
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___x_680_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_a_727_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit___boxed(lean_object* v_mvarId_735_, lean_object* v_a_736_, lean_object* v_n_737_, lean_object* v_xNamePrefix_738_, lean_object* v_aSizeEqN_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_, lean_object* v_a_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit(v_mvarId_735_, v_a_736_, v_n_737_, v_xNamePrefix_738_, v_aSizeEqN_739_, v_a_740_, v_a_741_, v_a_742_, v_a_743_);
lean_dec(v_a_743_);
lean_dec_ref(v_a_742_);
lean_dec(v_a_741_);
lean_dec_ref(v_a_740_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0(lean_object* v_mvarId_746_, lean_object* v_val_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_){
_start:
{
lean_object* v___x_753_; 
v___x_753_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___redArg(v_mvarId_746_, v_val_747_, v___y_749_, v___y_751_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___boxed(lean_object* v_mvarId_754_, lean_object* v_val_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0(v_mvarId_754_, v_val_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
lean_dec(v___y_759_);
lean_dec_ref(v___y_758_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0(lean_object* v_00_u03b2_762_, lean_object* v_x_763_, lean_object* v_x_764_, lean_object* v_x_765_){
_start:
{
lean_object* v___x_766_; 
v___x_766_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0___redArg(v_x_763_, v_x_764_, v_x_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_767_, lean_object* v_x_768_, size_t v_x_769_, size_t v_x_770_, lean_object* v_x_771_, lean_object* v_x_772_){
_start:
{
lean_object* v___x_773_; 
v___x_773_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg(v_x_768_, v_x_769_, v_x_770_, v_x_771_, v_x_772_);
return v___x_773_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_774_, lean_object* v_x_775_, lean_object* v_x_776_, lean_object* v_x_777_, lean_object* v_x_778_, lean_object* v_x_779_){
_start:
{
size_t v_x_1381__boxed_780_; size_t v_x_1382__boxed_781_; lean_object* v_res_782_; 
v_x_1381__boxed_780_ = lean_unbox_usize(v_x_776_);
lean_dec(v_x_776_);
v_x_1382__boxed_781_ = lean_unbox_usize(v_x_777_);
lean_dec(v_x_777_);
v_res_782_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1(v_00_u03b2_774_, v_x_775_, v_x_1381__boxed_780_, v_x_1382__boxed_781_, v_x_778_, v_x_779_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_783_, lean_object* v_n_784_, lean_object* v_k_785_, lean_object* v_v_786_){
_start:
{
lean_object* v___x_787_; 
v___x_787_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2___redArg(v_n_784_, v_k_785_, v_v_786_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_788_, size_t v_depth_789_, lean_object* v_keys_790_, lean_object* v_vals_791_, lean_object* v_heq_792_, lean_object* v_i_793_, lean_object* v_entries_794_){
_start:
{
lean_object* v___x_795_; 
v___x_795_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_789_, v_keys_790_, v_vals_791_, v_i_793_, v_entries_794_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_796_, lean_object* v_depth_797_, lean_object* v_keys_798_, lean_object* v_vals_799_, lean_object* v_heq_800_, lean_object* v_i_801_, lean_object* v_entries_802_){
_start:
{
size_t v_depth_boxed_803_; lean_object* v_res_804_; 
v_depth_boxed_803_ = lean_unbox_usize(v_depth_797_);
lean_dec(v_depth_797_);
v_res_804_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_796_, v_depth_boxed_803_, v_keys_798_, v_vals_799_, v_heq_800_, v_i_801_, v_entries_802_);
lean_dec_ref(v_vals_799_);
lean_dec_ref(v_keys_798_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_805_, lean_object* v_x_806_, lean_object* v_x_807_, lean_object* v_x_808_, lean_object* v_x_809_){
_start:
{
lean_object* v___x_810_; 
v___x_810_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_x_806_, v_x_807_, v_x_808_, v_x_809_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___redArg(lean_object* v_mvarId_811_, lean_object* v_x_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_811_, v_x_812_, v___y_813_, v___y_814_, v___y_815_, v___y_816_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_826_; 
v_a_819_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_826_ == 0)
{
v___x_821_ = v___x_818_;
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_818_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_824_; 
if (v_isShared_822_ == 0)
{
v___x_824_ = v___x_821_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_a_819_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
else
{
lean_object* v_a_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_834_; 
v_a_827_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_834_ == 0)
{
v___x_829_ = v___x_818_;
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_a_827_);
lean_dec(v___x_818_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_832_; 
if (v_isShared_830_ == 0)
{
v___x_832_ = v___x_829_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_a_827_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___redArg___boxed(lean_object* v_mvarId_835_, lean_object* v_x_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___redArg(v_mvarId_835_, v_x_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2(lean_object* v_00_u03b1_843_, lean_object* v_mvarId_844_, lean_object* v_x_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_){
_start:
{
lean_object* v___x_851_; 
v___x_851_ = l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___redArg(v_mvarId_844_, v_x_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___boxed(lean_object* v_00_u03b1_852_, lean_object* v_mvarId_853_, lean_object* v_x_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2(v_00_u03b1_852_, v_mvarId_853_, v_x_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_);
lean_dec(v___y_858_);
lean_dec_ref(v___y_857_);
lean_dec(v___y_856_);
lean_dec_ref(v___y_855_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__1(lean_object* v_fst_861_, size_t v_sz_862_, size_t v_i_863_, lean_object* v_bs_864_){
_start:
{
uint8_t v___x_865_; 
v___x_865_ = lean_usize_dec_lt(v_i_863_, v_sz_862_);
if (v___x_865_ == 0)
{
return v_bs_864_;
}
else
{
lean_object* v_v_866_; lean_object* v___x_867_; lean_object* v_bs_x27_868_; lean_object* v___x_869_; lean_object* v___x_870_; size_t v___x_871_; size_t v___x_872_; lean_object* v___x_873_; 
v_v_866_ = lean_array_uget(v_bs_864_, v_i_863_);
v___x_867_ = lean_unsigned_to_nat(0u);
v_bs_x27_868_ = lean_array_uset(v_bs_864_, v_i_863_, v___x_867_);
v___x_869_ = l_Lean_Meta_FVarSubst_get(v_fst_861_, v_v_866_);
v___x_870_ = l_Lean_Expr_fvarId_x21(v___x_869_);
lean_dec_ref(v___x_869_);
v___x_871_ = ((size_t)1ULL);
v___x_872_ = lean_usize_add(v_i_863_, v___x_871_);
v___x_873_ = lean_array_uset(v_bs_x27_868_, v_i_863_, v___x_870_);
v_i_863_ = v___x_872_;
v_bs_864_ = v___x_873_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__1___boxed(lean_object* v_fst_875_, lean_object* v_sz_876_, lean_object* v_i_877_, lean_object* v_bs_878_){
_start:
{
size_t v_sz_boxed_879_; size_t v_i_boxed_880_; lean_object* v_res_881_; 
v_sz_boxed_879_ = lean_unbox_usize(v_sz_876_);
lean_dec(v_sz_876_);
v_i_boxed_880_ = lean_unbox_usize(v_i_877_);
lean_dec(v_i_877_);
v_res_881_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__1(v_fst_875_, v_sz_boxed_879_, v_i_boxed_880_, v_bs_878_);
lean_dec(v_fst_875_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg___lam__0(lean_object* v___x_882_, lean_object* v_mvarId_883_, lean_object* v_a_884_, lean_object* v___x_885_, lean_object* v_xNamePrefix_886_, uint8_t v_isZero_887_, lean_object* v___x_888_, lean_object* v_subst_889_, uint8_t v___x_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
lean_object* v___x_896_; 
v___x_896_ = l_Lean_Meta_mkEqSymm(v___x_882_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; lean_object* v___x_898_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_a_897_);
lean_dec_ref(v___x_896_);
lean_inc(v___x_885_);
v___x_898_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit(v_mvarId_883_, v_a_884_, v___x_885_, v_xNamePrefix_886_, v_a_897_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_899_);
lean_dec_ref(v___x_898_);
v___x_900_ = lean_box(0);
v___x_901_ = l_Lean_Meta_introNCore(v_a_899_, v___x_885_, v___x_900_, v_isZero_887_, v_isZero_887_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v_a_902_; lean_object* v_fst_903_; lean_object* v_snd_904_; lean_object* v___x_905_; 
v_a_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_a_902_);
lean_dec_ref(v___x_901_);
v_fst_903_ = lean_ctor_get(v_a_902_, 0);
lean_inc(v_fst_903_);
v_snd_904_ = lean_ctor_get(v_a_902_, 1);
lean_inc(v_snd_904_);
lean_dec(v_a_902_);
v___x_905_ = l_Lean_Meta_intro1Core(v_snd_904_, v_isZero_887_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
if (lean_obj_tag(v___x_905_) == 0)
{
lean_object* v_a_906_; lean_object* v_fst_907_; lean_object* v_snd_908_; lean_object* v___x_909_; 
v_a_906_ = lean_ctor_get(v___x_905_, 0);
lean_inc(v_a_906_);
lean_dec_ref(v___x_905_);
v_fst_907_ = lean_ctor_get(v_a_906_, 0);
lean_inc(v_fst_907_);
v_snd_908_ = lean_ctor_get(v_a_906_, 1);
lean_inc(v_snd_908_);
lean_dec(v_a_906_);
v___x_909_ = l_Lean_MVarId_clear(v_snd_908_, v___x_888_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; lean_object* v___x_911_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_a_910_);
lean_dec_ref(v___x_909_);
v___x_911_ = l_Lean_Meta_substCore(v_a_910_, v_fst_907_, v_isZero_887_, v_subst_889_, v___x_890_, v_isZero_887_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_923_; 
v_a_912_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_923_ == 0)
{
v___x_914_ = v___x_911_;
v_isShared_915_ = v_isSharedCheck_923_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_a_912_);
lean_dec(v___x_911_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_923_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v_fst_916_; lean_object* v_snd_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_921_; 
v_fst_916_ = lean_ctor_get(v_a_912_, 0);
lean_inc(v_fst_916_);
v_snd_917_ = lean_ctor_get(v_a_912_, 1);
lean_inc(v_snd_917_);
lean_dec(v_a_912_);
v___x_918_ = lean_obj_once(&l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0, &l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0_once, _init_l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0);
v___x_919_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_919_, 0, v_snd_917_);
lean_ctor_set(v___x_919_, 1, v_fst_903_);
lean_ctor_set(v___x_919_, 2, v___x_918_);
lean_ctor_set(v___x_919_, 3, v_fst_916_);
if (v_isShared_915_ == 0)
{
lean_ctor_set(v___x_914_, 0, v___x_919_);
v___x_921_ = v___x_914_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v___x_919_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
else
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
lean_dec(v_fst_903_);
v_a_924_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_911_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_911_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
else
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_939_; 
lean_dec(v_fst_907_);
lean_dec(v_fst_903_);
lean_dec(v_subst_889_);
v_a_932_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_939_ == 0)
{
v___x_934_ = v___x_909_;
v_isShared_935_ = v_isSharedCheck_939_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v___x_909_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_939_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_937_; 
if (v_isShared_935_ == 0)
{
v___x_937_ = v___x_934_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v_a_932_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
}
else
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
lean_dec(v_fst_903_);
lean_dec(v_subst_889_);
lean_dec(v___x_888_);
v_a_940_ = lean_ctor_get(v___x_905_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_905_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_905_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_905_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
else
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_955_; 
lean_dec(v_subst_889_);
lean_dec(v___x_888_);
v_a_948_ = lean_ctor_get(v___x_901_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_955_ == 0)
{
v___x_950_ = v___x_901_;
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v___x_901_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_953_; 
if (v_isShared_951_ == 0)
{
v___x_953_ = v___x_950_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_a_948_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
}
else
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
lean_dec(v_subst_889_);
lean_dec(v___x_888_);
lean_dec(v___x_885_);
v_a_956_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_898_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_898_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_956_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
else
{
lean_object* v_a_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_971_; 
lean_dec(v_subst_889_);
lean_dec(v___x_888_);
lean_dec(v_xNamePrefix_886_);
lean_dec(v___x_885_);
lean_dec_ref(v_a_884_);
lean_dec(v_mvarId_883_);
v_a_964_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_971_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_971_ == 0)
{
v___x_966_ = v___x_896_;
v_isShared_967_ = v_isSharedCheck_971_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_a_964_);
lean_dec(v___x_896_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_971_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_969_; 
if (v_isShared_967_ == 0)
{
v___x_969_ = v___x_966_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v_a_964_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg___lam__0___boxed(lean_object* v___x_972_, lean_object* v_mvarId_973_, lean_object* v_a_974_, lean_object* v___x_975_, lean_object* v_xNamePrefix_976_, lean_object* v_isZero_977_, lean_object* v___x_978_, lean_object* v_subst_979_, lean_object* v___x_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
uint8_t v_isZero_boxed_986_; uint8_t v___x_3737__boxed_987_; lean_object* v_res_988_; 
v_isZero_boxed_986_ = lean_unbox(v_isZero_977_);
v___x_3737__boxed_987_ = lean_unbox(v___x_980_);
v_res_988_ = l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg___lam__0(v___x_972_, v_mvarId_973_, v_a_974_, v___x_975_, v_xNamePrefix_976_, v_isZero_boxed_986_, v___x_978_, v_subst_979_, v___x_3737__boxed_987_, v___y_981_, v___y_982_, v___y_983_, v___y_984_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
lean_dec(v___y_982_);
lean_dec_ref(v___y_981_);
return v_res_988_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg(lean_object* v_sizes_989_, lean_object* v_fst_990_, lean_object* v_a_991_, lean_object* v_xNamePrefix_992_, lean_object* v_as_993_, lean_object* v_i_994_, lean_object* v_j_995_, lean_object* v_bs_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_){
_start:
{
lean_object* v_zero_1002_; uint8_t v_isZero_1003_; 
v_zero_1002_ = lean_unsigned_to_nat(0u);
v_isZero_1003_ = lean_nat_dec_eq(v_i_994_, v_zero_1002_);
if (v_isZero_1003_ == 1)
{
lean_object* v___x_1004_; 
lean_dec(v_j_995_);
lean_dec(v_i_994_);
lean_dec(v_xNamePrefix_992_);
lean_dec_ref(v_a_991_);
lean_dec(v_fst_990_);
v___x_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1004_, 0, v_bs_996_);
return v___x_1004_;
}
else
{
lean_object* v___x_1005_; lean_object* v_mvarId_1006_; lean_object* v_newHs_1007_; lean_object* v_subst_1008_; uint8_t v___x_1009_; lean_object* v_one_1010_; lean_object* v_n_1011_; lean_object* v_a_1013_; lean_object* v___x_1017_; uint8_t v___x_1018_; 
v___x_1005_ = lean_array_fget_borrowed(v_as_993_, v_j_995_);
v_mvarId_1006_ = lean_ctor_get(v___x_1005_, 0);
v_newHs_1007_ = lean_ctor_get(v___x_1005_, 1);
v_subst_1008_ = lean_ctor_get(v___x_1005_, 2);
v___x_1009_ = 1;
v_one_1010_ = lean_unsigned_to_nat(1u);
v_n_1011_ = lean_nat_sub(v_i_994_, v_one_1010_);
lean_dec(v_i_994_);
v___x_1017_ = lean_array_get_size(v_sizes_989_);
v___x_1018_ = lean_nat_dec_lt(v_j_995_, v___x_1017_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; 
lean_inc(v_subst_1008_);
lean_inc(v_fst_990_);
lean_inc(v_mvarId_1006_);
v___x_1019_ = l_Lean_Meta_substCore(v_mvarId_1006_, v_fst_990_, v___x_1018_, v_subst_1008_, v___x_1009_, v___x_1018_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; lean_object* v_fst_1021_; lean_object* v_snd_1022_; size_t v_sz_1023_; size_t v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_a_1020_);
lean_dec_ref(v___x_1019_);
v_fst_1021_ = lean_ctor_get(v_a_1020_, 0);
lean_inc(v_fst_1021_);
v_snd_1022_ = lean_ctor_get(v_a_1020_, 1);
lean_inc(v_snd_1022_);
lean_dec(v_a_1020_);
v_sz_1023_ = lean_array_size(v_newHs_1007_);
v___x_1024_ = ((size_t)0ULL);
lean_inc_ref(v_newHs_1007_);
v___x_1025_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__1(v_fst_1021_, v_sz_1023_, v___x_1024_, v_newHs_1007_);
v___x_1026_ = lean_obj_once(&l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0, &l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0_once, _init_l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0);
v___x_1027_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1027_, 0, v_snd_1022_);
lean_ctor_set(v___x_1027_, 1, v___x_1026_);
lean_ctor_set(v___x_1027_, 2, v___x_1025_);
lean_ctor_set(v___x_1027_, 3, v_fst_1021_);
v_a_1013_ = v___x_1027_;
goto v___jp_1012_;
}
else
{
lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1035_; 
lean_dec(v_n_1011_);
lean_dec_ref(v_bs_996_);
lean_dec(v_j_995_);
lean_dec(v_xNamePrefix_992_);
lean_dec_ref(v_a_991_);
lean_dec(v_fst_990_);
v_a_1028_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1030_ = v___x_1019_;
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_1019_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1033_; 
if (v_isShared_1031_ == 0)
{
v___x_1033_ = v___x_1030_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_a_1028_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
return v___x_1033_;
}
}
}
}
else
{
lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___f_1042_; lean_object* v___x_1043_; 
lean_inc(v_fst_990_);
v___x_1036_ = l_Lean_Meta_FVarSubst_get(v_subst_1008_, v_fst_990_);
v___x_1037_ = l_Lean_Expr_fvarId_x21(v___x_1036_);
lean_dec_ref(v___x_1036_);
v___x_1038_ = lean_array_fget_borrowed(v_sizes_989_, v_j_995_);
lean_inc(v___x_1037_);
v___x_1039_ = l_Lean_mkFVar(v___x_1037_);
v___x_1040_ = lean_box(v_isZero_1003_);
v___x_1041_ = lean_box(v___x_1009_);
lean_inc(v_subst_1008_);
lean_inc(v_xNamePrefix_992_);
lean_inc(v___x_1038_);
lean_inc_ref(v_a_991_);
lean_inc_n(v_mvarId_1006_, 2);
v___f_1042_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_1042_, 0, v___x_1039_);
lean_closure_set(v___f_1042_, 1, v_mvarId_1006_);
lean_closure_set(v___f_1042_, 2, v_a_991_);
lean_closure_set(v___f_1042_, 3, v___x_1038_);
lean_closure_set(v___f_1042_, 4, v_xNamePrefix_992_);
lean_closure_set(v___f_1042_, 5, v___x_1040_);
lean_closure_set(v___f_1042_, 6, v___x_1037_);
lean_closure_set(v___f_1042_, 7, v_subst_1008_);
lean_closure_set(v___f_1042_, 8, v___x_1041_);
v___x_1043_ = l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___redArg(v_mvarId_1006_, v___f_1042_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_);
if (lean_obj_tag(v___x_1043_) == 0)
{
lean_object* v_a_1044_; 
v_a_1044_ = lean_ctor_get(v___x_1043_, 0);
lean_inc(v_a_1044_);
lean_dec_ref(v___x_1043_);
v_a_1013_ = v_a_1044_;
goto v___jp_1012_;
}
else
{
lean_object* v_a_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1052_; 
lean_dec(v_n_1011_);
lean_dec_ref(v_bs_996_);
lean_dec(v_j_995_);
lean_dec(v_xNamePrefix_992_);
lean_dec_ref(v_a_991_);
lean_dec(v_fst_990_);
v_a_1045_ = lean_ctor_get(v___x_1043_, 0);
v_isSharedCheck_1052_ = !lean_is_exclusive(v___x_1043_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1047_ = v___x_1043_;
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_a_1045_);
lean_dec(v___x_1043_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1050_; 
if (v_isShared_1048_ == 0)
{
v___x_1050_ = v___x_1047_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_a_1045_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
}
v___jp_1012_:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1014_ = lean_nat_add(v_j_995_, v_one_1010_);
lean_dec(v_j_995_);
v___x_1015_ = lean_array_push(v_bs_996_, v_a_1013_);
v_i_994_ = v_n_1011_;
v_j_995_ = v___x_1014_;
v_bs_996_ = v___x_1015_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg___boxed(lean_object* v_sizes_1053_, lean_object* v_fst_1054_, lean_object* v_a_1055_, lean_object* v_xNamePrefix_1056_, lean_object* v_as_1057_, lean_object* v_i_1058_, lean_object* v_j_1059_, lean_object* v_bs_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg(v_sizes_1053_, v_fst_1054_, v_a_1055_, v_xNamePrefix_1056_, v_as_1057_, v_i_1058_, v_j_1059_, v_bs_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
lean_dec_ref(v_as_1057_);
lean_dec_ref(v_sizes_1053_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__0(size_t v_sz_1067_, size_t v_i_1068_, lean_object* v_bs_1069_){
_start:
{
uint8_t v___x_1070_; 
v___x_1070_ = lean_usize_dec_lt(v_i_1068_, v_sz_1067_);
if (v___x_1070_ == 0)
{
return v_bs_1069_;
}
else
{
lean_object* v_v_1071_; lean_object* v___x_1072_; lean_object* v_bs_x27_1073_; lean_object* v___x_1074_; size_t v___x_1075_; size_t v___x_1076_; lean_object* v___x_1077_; 
v_v_1071_ = lean_array_uget(v_bs_1069_, v_i_1068_);
v___x_1072_ = lean_unsigned_to_nat(0u);
v_bs_x27_1073_ = lean_array_uset(v_bs_1069_, v_i_1068_, v___x_1072_);
v___x_1074_ = l_Lean_mkRawNatLit(v_v_1071_);
v___x_1075_ = ((size_t)1ULL);
v___x_1076_ = lean_usize_add(v_i_1068_, v___x_1075_);
v___x_1077_ = lean_array_uset(v_bs_x27_1073_, v_i_1068_, v___x_1074_);
v_i_1068_ = v___x_1076_;
v_bs_1069_ = v___x_1077_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__0___boxed(lean_object* v_sz_1079_, lean_object* v_i_1080_, lean_object* v_bs_1081_){
_start:
{
size_t v_sz_boxed_1082_; size_t v_i_boxed_1083_; lean_object* v_res_1084_; 
v_sz_boxed_1082_ = lean_unbox_usize(v_sz_1079_);
lean_dec(v_sz_1079_);
v_i_boxed_1083_ = lean_unbox_usize(v_i_1080_);
lean_dec(v_i_1080_);
v_res_1084_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__0(v_sz_boxed_1082_, v_i_boxed_1083_, v_bs_1081_);
return v_res_1084_;
}
}
static lean_object* _init_l_Lean_Meta_caseArraySizes___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1085_; 
v___x_1085_ = lean_mk_string_unchecked("aSize", 5, 5);
return v___x_1085_;
}
}
static lean_object* _init_l_Lean_Meta_caseArraySizes___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1086_ = lean_obj_once(&l_Lean_Meta_caseArraySizes___lam__0___closed__0, &l_Lean_Meta_caseArraySizes___lam__0___closed__0_once, _init_l_Lean_Meta_caseArraySizes___lam__0___closed__0);
v___x_1087_ = l_Lean_Name_mkStr1(v___x_1086_);
return v___x_1087_;
}
}
static lean_object* _init_l_Lean_Meta_caseArraySizes___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1088_; 
v___x_1088_ = lean_mk_string_unchecked("Nat", 3, 3);
return v___x_1088_;
}
}
static lean_object* _init_l_Lean_Meta_caseArraySizes___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1089_ = lean_obj_once(&l_Lean_Meta_caseArraySizes___lam__0___closed__2, &l_Lean_Meta_caseArraySizes___lam__0___closed__2_once, _init_l_Lean_Meta_caseArraySizes___lam__0___closed__2);
v___x_1090_ = l_Lean_Name_mkStr1(v___x_1089_);
return v___x_1090_;
}
}
static lean_object* _init_l_Lean_Meta_caseArraySizes___lam__0___closed__4(void){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1091_ = lean_box(0);
v___x_1092_ = lean_obj_once(&l_Lean_Meta_caseArraySizes___lam__0___closed__3, &l_Lean_Meta_caseArraySizes___lam__0___closed__3_once, _init_l_Lean_Meta_caseArraySizes___lam__0___closed__3);
v___x_1093_ = l_Lean_mkConst(v___x_1092_, v___x_1091_);
return v___x_1093_;
}
}
static lean_object* _init_l_Lean_Meta_caseArraySizes___lam__0___closed__5(void){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = lean_mk_string_unchecked("h", 1, 1);
return v___x_1094_;
}
}
static lean_object* _init_l_Lean_Meta_caseArraySizes___lam__0___closed__6(void){
_start:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1095_ = lean_obj_once(&l_Lean_Meta_caseArraySizes___lam__0___closed__5, &l_Lean_Meta_caseArraySizes___lam__0___closed__5_once, _init_l_Lean_Meta_caseArraySizes___lam__0___closed__5);
v___x_1096_ = l_Lean_Name_mkStr1(v___x_1095_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_caseArraySizes___lam__0(lean_object* v___x_1097_, lean_object* v___x_1098_, lean_object* v_mvarId_1099_, lean_object* v_sizes_1100_, lean_object* v_hNamePrefix_1101_, lean_object* v_a_1102_, lean_object* v_xNamePrefix_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_){
_start:
{
lean_object* v___x_1109_; 
v___x_1109_ = l_Lean_Meta_mkAppM(v___x_1097_, v___x_1098_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
if (lean_obj_tag(v___x_1109_) == 0)
{
lean_object* v_a_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
v_a_1110_ = lean_ctor_get(v___x_1109_, 0);
lean_inc(v_a_1110_);
lean_dec_ref(v___x_1109_);
v___x_1111_ = lean_obj_once(&l_Lean_Meta_caseArraySizes___lam__0___closed__1, &l_Lean_Meta_caseArraySizes___lam__0___closed__1_once, _init_l_Lean_Meta_caseArraySizes___lam__0___closed__1);
v___x_1112_ = lean_obj_once(&l_Lean_Meta_caseArraySizes___lam__0___closed__4, &l_Lean_Meta_caseArraySizes___lam__0___closed__4_once, _init_l_Lean_Meta_caseArraySizes___lam__0___closed__4);
v___x_1113_ = lean_obj_once(&l_Lean_Meta_caseArraySizes___lam__0___closed__6, &l_Lean_Meta_caseArraySizes___lam__0___closed__6_once, _init_l_Lean_Meta_caseArraySizes___lam__0___closed__6);
v___x_1114_ = l_Lean_MVarId_assertExt(v_mvarId_1099_, v___x_1111_, v___x_1112_, v_a_1110_, v___x_1113_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_a_1115_; uint8_t v___x_1116_; lean_object* v___x_1117_; 
v_a_1115_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_a_1115_);
lean_dec_ref(v___x_1114_);
v___x_1116_ = 0;
v___x_1117_ = l_Lean_Meta_intro1Core(v_a_1115_, v___x_1116_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
if (lean_obj_tag(v___x_1117_) == 0)
{
lean_object* v_a_1118_; lean_object* v_fst_1119_; lean_object* v_snd_1120_; lean_object* v___x_1121_; 
v_a_1118_ = lean_ctor_get(v___x_1117_, 0);
lean_inc(v_a_1118_);
lean_dec_ref(v___x_1117_);
v_fst_1119_ = lean_ctor_get(v_a_1118_, 0);
lean_inc(v_fst_1119_);
v_snd_1120_ = lean_ctor_get(v_a_1118_, 1);
lean_inc(v_snd_1120_);
lean_dec(v_a_1118_);
v___x_1121_ = l_Lean_Meta_intro1Core(v_snd_1120_, v___x_1116_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
if (lean_obj_tag(v___x_1121_) == 0)
{
lean_object* v_a_1122_; lean_object* v_fst_1123_; lean_object* v_snd_1124_; size_t v_sz_1125_; size_t v___x_1126_; lean_object* v___x_1127_; uint8_t v___x_1128_; lean_object* v___x_1129_; 
v_a_1122_ = lean_ctor_get(v___x_1121_, 0);
lean_inc(v_a_1122_);
lean_dec_ref(v___x_1121_);
v_fst_1123_ = lean_ctor_get(v_a_1122_, 0);
lean_inc(v_fst_1123_);
v_snd_1124_ = lean_ctor_get(v_a_1122_, 1);
lean_inc(v_snd_1124_);
lean_dec(v_a_1122_);
v_sz_1125_ = lean_array_size(v_sizes_1100_);
v___x_1126_ = ((size_t)0ULL);
lean_inc_ref(v_sizes_1100_);
v___x_1127_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__0(v_sz_1125_, v___x_1126_, v_sizes_1100_);
v___x_1128_ = 1;
v___x_1129_ = l_Lean_Meta_caseValues(v_snd_1124_, v_fst_1119_, v___x_1127_, v_hNamePrefix_1101_, v___x_1128_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
if (lean_obj_tag(v___x_1129_) == 0)
{
lean_object* v_a_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v_a_1130_ = lean_ctor_get(v___x_1129_, 0);
lean_inc(v_a_1130_);
lean_dec_ref(v___x_1129_);
v___x_1131_ = lean_array_get_size(v_a_1130_);
v___x_1132_ = lean_unsigned_to_nat(0u);
v___x_1133_ = lean_mk_empty_array_with_capacity(v___x_1131_);
v___x_1134_ = l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg(v_sizes_1100_, v_fst_1123_, v_a_1102_, v_xNamePrefix_1103_, v_a_1130_, v___x_1131_, v___x_1132_, v___x_1133_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
lean_dec(v_a_1130_);
lean_dec_ref(v_sizes_1100_);
return v___x_1134_;
}
else
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
lean_dec(v_fst_1123_);
lean_dec(v_xNamePrefix_1103_);
lean_dec_ref(v_a_1102_);
lean_dec_ref(v_sizes_1100_);
v_a_1135_ = lean_ctor_get(v___x_1129_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1129_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_1129_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1129_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
}
else
{
lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1150_; 
lean_dec(v_fst_1119_);
lean_dec(v_xNamePrefix_1103_);
lean_dec_ref(v_a_1102_);
lean_dec(v_hNamePrefix_1101_);
lean_dec_ref(v_sizes_1100_);
v_a_1143_ = lean_ctor_get(v___x_1121_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1121_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1145_ = v___x_1121_;
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_dec(v___x_1121_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
if (v_isShared_1146_ == 0)
{
v___x_1148_ = v___x_1145_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_a_1143_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
return v___x_1148_;
}
}
}
}
else
{
lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1158_; 
lean_dec(v_xNamePrefix_1103_);
lean_dec_ref(v_a_1102_);
lean_dec(v_hNamePrefix_1101_);
lean_dec_ref(v_sizes_1100_);
v_a_1151_ = lean_ctor_get(v___x_1117_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1153_ = v___x_1117_;
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1117_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1156_; 
if (v_isShared_1154_ == 0)
{
v___x_1156_ = v___x_1153_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_a_1151_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
}
else
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1166_; 
lean_dec(v_xNamePrefix_1103_);
lean_dec_ref(v_a_1102_);
lean_dec(v_hNamePrefix_1101_);
lean_dec_ref(v_sizes_1100_);
v_a_1159_ = lean_ctor_get(v___x_1114_, 0);
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1161_ = v___x_1114_;
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v___x_1114_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
if (v_isShared_1162_ == 0)
{
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_a_1159_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
}
else
{
lean_object* v_a_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1174_; 
lean_dec(v_xNamePrefix_1103_);
lean_dec_ref(v_a_1102_);
lean_dec(v_hNamePrefix_1101_);
lean_dec_ref(v_sizes_1100_);
lean_dec(v_mvarId_1099_);
v_a_1167_ = lean_ctor_get(v___x_1109_, 0);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1109_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1169_ = v___x_1109_;
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_a_1167_);
lean_dec(v___x_1109_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1172_; 
if (v_isShared_1170_ == 0)
{
v___x_1172_ = v___x_1169_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_a_1167_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_caseArraySizes___lam__0___boxed(lean_object* v___x_1175_, lean_object* v___x_1176_, lean_object* v_mvarId_1177_, lean_object* v_sizes_1178_, lean_object* v_hNamePrefix_1179_, lean_object* v_a_1180_, lean_object* v_xNamePrefix_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lean_Meta_caseArraySizes___lam__0(v___x_1175_, v___x_1176_, v_mvarId_1177_, v_sizes_1178_, v_hNamePrefix_1179_, v_a_1180_, v_xNamePrefix_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
return v_res_1187_;
}
}
static lean_object* _init_l_Lean_Meta_caseArraySizes___closed__0(void){
_start:
{
lean_object* v___x_1188_; 
v___x_1188_ = lean_mk_string_unchecked("size", 4, 4);
return v___x_1188_;
}
}
static lean_object* _init_l_Lean_Meta_caseArraySizes___closed__1(void){
_start:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1189_ = lean_obj_once(&l_Lean_Meta_caseArraySizes___closed__0, &l_Lean_Meta_caseArraySizes___closed__0_once, _init_l_Lean_Meta_caseArraySizes___closed__0);
v___x_1190_ = lean_obj_once(&l_Lean_Meta_getArrayArgType___closed__0, &l_Lean_Meta_getArrayArgType___closed__0_once, _init_l_Lean_Meta_getArrayArgType___closed__0);
v___x_1191_ = l_Lean_Name_mkStr2(v___x_1190_, v___x_1189_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_caseArraySizes(lean_object* v_mvarId_1192_, lean_object* v_fvarId_1193_, lean_object* v_sizes_1194_, lean_object* v_xNamePrefix_1195_, lean_object* v_hNamePrefix_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_){
_start:
{
lean_object* v_a_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___f_1207_; lean_object* v___x_1208_; 
v_a_1202_ = l_Lean_mkFVar(v_fvarId_1193_);
v___x_1203_ = lean_obj_once(&l_Lean_Meta_caseArraySizes___closed__1, &l_Lean_Meta_caseArraySizes___closed__1_once, _init_l_Lean_Meta_caseArraySizes___closed__1);
v___x_1204_ = lean_unsigned_to_nat(1u);
v___x_1205_ = lean_mk_empty_array_with_capacity(v___x_1204_);
lean_inc_ref(v_a_1202_);
v___x_1206_ = lean_array_push(v___x_1205_, v_a_1202_);
lean_inc(v_mvarId_1192_);
v___f_1207_ = lean_alloc_closure((void*)(l_Lean_Meta_caseArraySizes___lam__0___boxed), 12, 7);
lean_closure_set(v___f_1207_, 0, v___x_1203_);
lean_closure_set(v___f_1207_, 1, v___x_1206_);
lean_closure_set(v___f_1207_, 2, v_mvarId_1192_);
lean_closure_set(v___f_1207_, 3, v_sizes_1194_);
lean_closure_set(v___f_1207_, 4, v_hNamePrefix_1196_);
lean_closure_set(v___f_1207_, 5, v_a_1202_);
lean_closure_set(v___f_1207_, 6, v_xNamePrefix_1195_);
v___x_1208_ = l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___redArg(v_mvarId_1192_, v___f_1207_, v_a_1197_, v_a_1198_, v_a_1199_, v_a_1200_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_caseArraySizes___boxed(lean_object* v_mvarId_1209_, lean_object* v_fvarId_1210_, lean_object* v_sizes_1211_, lean_object* v_xNamePrefix_1212_, lean_object* v_hNamePrefix_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_){
_start:
{
lean_object* v_res_1219_; 
v_res_1219_ = l_Lean_Meta_caseArraySizes(v_mvarId_1209_, v_fvarId_1210_, v_sizes_1211_, v_xNamePrefix_1212_, v_hNamePrefix_1213_, v_a_1214_, v_a_1215_, v_a_1216_, v_a_1217_);
lean_dec(v_a_1217_);
lean_dec_ref(v_a_1216_);
lean_dec(v_a_1215_);
lean_dec_ref(v_a_1214_);
return v_res_1219_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3(lean_object* v_sizes_1220_, lean_object* v_fst_1221_, lean_object* v_a_1222_, lean_object* v_xNamePrefix_1223_, lean_object* v_as_1224_, lean_object* v_i_1225_, lean_object* v_j_1226_, lean_object* v_inv_1227_, lean_object* v_bs_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_){
_start:
{
lean_object* v___x_1234_; 
v___x_1234_ = l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg(v_sizes_1220_, v_fst_1221_, v_a_1222_, v_xNamePrefix_1223_, v_as_1224_, v_i_1225_, v_j_1226_, v_bs_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3___boxed(lean_object* v_sizes_1235_, lean_object* v_fst_1236_, lean_object* v_a_1237_, lean_object* v_xNamePrefix_1238_, lean_object* v_as_1239_, lean_object* v_i_1240_, lean_object* v_j_1241_, lean_object* v_inv_1242_, lean_object* v_bs_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_){
_start:
{
lean_object* v_res_1249_; 
v_res_1249_ = l_Array_mapFinIdxM_map___at___00Lean_Meta_caseArraySizes_spec__3(v_sizes_1235_, v_fst_1236_, v_a_1237_, v_xNamePrefix_1238_, v_as_1239_, v_i_1240_, v_j_1241_, v_inv_1242_, v_bs_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1246_);
lean_dec(v___y_1245_);
lean_dec_ref(v___y_1244_);
lean_dec_ref(v_as_1239_);
lean_dec_ref(v_sizes_1235_);
return v_res_1249_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_CaseValues(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Subst(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Match_CaseArraySizes(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_CaseValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default = _init_l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default);
l_Lean_Meta_instInhabitedCaseArraySizesSubgoal = _init_l_Lean_Meta_instInhabitedCaseArraySizesSubgoal();
lean_mark_persistent(l_Lean_Meta_instInhabitedCaseArraySizesSubgoal);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Match_CaseArraySizes(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_CaseValues(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Subst(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match_CaseArraySizes(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_CaseValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_CaseArraySizes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Match_CaseArraySizes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Match_CaseArraySizes(builtin);
}
#ifdef __cplusplus
}
#endif
