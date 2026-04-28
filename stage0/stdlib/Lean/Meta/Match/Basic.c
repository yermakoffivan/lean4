// Lean compiler output
// Module: Lean.Meta.Match.Basic
// Imports: public import Lean.Meta.Tactic.FVarSubst public import Lean.Meta.CollectFVars import Lean.Meta.Match.Value import Lean.Meta.AppBuilder import Lean.Meta.Match.NamedPatterns
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
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Lean_CollectFVars_State_add(lean_object*, lean_object*);
lean_object* l_Lean_Expr_collectFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* l_Lean_LocalDecl_collectFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_get(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_mkInaccessible(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkArrayLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkNamedPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVarId(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_replaceFVarId(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_apply(lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_find_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
uint8_t l_String_Slice_isNat(lean_object*);
lean_object* l_Lean_LocalDecl_applyFVarSubst(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_inaccessible_x3f(lean_object*);
lean_object* l_Lean_Expr_arrayLit_x3f(lean_object*);
lean_object* l_Lean_Meta_Match_isNamedPattern_x3f(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isMatchValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_inaccessible_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_inaccessible_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_var_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_var_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_ctor_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_ctor_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_val_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_val_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_arrayLit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_arrayLit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_as_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_as_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_instInhabitedPattern_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_instInhabitedPattern_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Match_instInhabitedPattern_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_instInhabitedPattern_default___closed__1;
static lean_once_cell_t l_Lean_Meta_Match_instInhabitedPattern_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_instInhabitedPattern_default___closed__2;
static lean_once_cell_t l_Lean_Meta_Match_instInhabitedPattern_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_instInhabitedPattern_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instInhabitedPattern_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instInhabitedPattern;
static lean_once_cell_t l_Lean_Meta_Match_Pattern_toMessageData___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Pattern_toMessageData___closed__0;
static lean_once_cell_t l_Lean_Meta_Match_Pattern_toMessageData___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Pattern_toMessageData___closed__1;
static lean_once_cell_t l_Lean_Meta_Match_Pattern_toMessageData___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Pattern_toMessageData___closed__2;
static lean_once_cell_t l_Lean_Meta_Match_Pattern_toMessageData___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Pattern_toMessageData___closed__3;
static lean_once_cell_t l_Lean_Meta_Match_Pattern_toMessageData___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Pattern_toMessageData___closed__4;
static lean_once_cell_t l_Lean_Meta_Match_Pattern_toMessageData___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Pattern_toMessageData___closed__5;
static lean_once_cell_t l_Lean_Meta_Match_Pattern_toMessageData___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Pattern_toMessageData___closed__6;
static lean_once_cell_t l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__0;
static lean_once_cell_t l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__1;
static lean_once_cell_t l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__2;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_Pattern_toMessageData___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Pattern_toMessageData___closed__7;
static lean_once_cell_t l_Lean_Meta_Match_Pattern_toMessageData___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Pattern_toMessageData___closed__8;
static lean_once_cell_t l_Lean_Meta_Match_Pattern_toMessageData___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Pattern_toMessageData___closed__9;
static lean_once_cell_t l_Lean_Meta_Match_Pattern_toMessageData___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Pattern_toMessageData___closed__10;
static lean_once_cell_t l_Lean_Meta_Match_Pattern_toMessageData___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Pattern_toMessageData___closed__11;
static lean_once_cell_t l_Lean_Meta_Match_Pattern_toMessageData___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Pattern_toMessageData___closed__12;
static lean_once_cell_t l_Lean_Meta_Match_Pattern_toMessageData___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Pattern_toMessageData___closed__13;
static lean_once_cell_t l_Lean_Meta_Match_Pattern_toMessageData___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Pattern_toMessageData___closed__14;
static lean_once_cell_t l_Lean_Meta_Match_Pattern_toMessageData___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Pattern_toMessageData___closed__15;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_toMessageData(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Pattern_toMessageData_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_Basic_0__Lean_Meta_Match_Pattern_toExpr_visit(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Match_Basic_0__Lean_Meta_Match_Pattern_toExpr_visit_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Match_Basic_0__Lean_Meta_Match_Pattern_toExpr_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_Basic_0__Lean_Meta_Match_Pattern_toExpr_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_toExpr(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_toExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Pattern_applyFVarSubst_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_applyFVarSubst(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Pattern_applyFVarSubst_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_replaceFVarId(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Meta_Match_Pattern_hasExprMVar_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Meta_Match_Pattern_hasExprMVar_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Match_Pattern_hasExprMVar(lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Meta_Match_Pattern_hasExprMVar_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Meta_Match_Pattern_hasExprMVar_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_hasExprMVar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Match_Pattern_collectFVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Match_Pattern_collectFVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_collectFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Match_Pattern_collectFVars_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Match_Pattern_collectFVars_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_collectFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_instantiatePatternMVars_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_instantiatePatternMVars_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instantiatePatternMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_instantiatePatternMVars_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_instantiatePatternMVars_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instantiatePatternMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_instInhabitedAltLHS_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_instInhabitedAltLHS_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instInhabitedAltLHS_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instInhabitedAltLHS;
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Match_AltLHS_collectFVars_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Match_AltLHS_collectFVars_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Match_AltLHS_collectFVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Match_AltLHS_collectFVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_AltLHS_collectFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_AltLHS_collectFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLocalDeclMVars___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLocalDeclMVars___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instantiateAltLHSMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instantiateAltLHSMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLocalDeclMVars___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLocalDeclMVars___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_instInhabitedAlt_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_instInhabitedAlt_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Match_instInhabitedAlt_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_instInhabitedAlt_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instInhabitedAlt_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instInhabitedAlt;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_Meta_Match_Alt_toMessageData_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_Meta_Match_Alt_toMessageData_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_Match_Alt_toMessageData_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_Match_Alt_toMessageData_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_Match_Alt_toMessageData_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_Match_Alt_toMessageData_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__0;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__1;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__2;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Alt_toMessageData___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Alt_toMessageData___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4___closed__0;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_Alt_toMessageData___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Alt_toMessageData___closed__0;
static lean_once_cell_t l_Lean_Meta_Match_Alt_toMessageData___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Alt_toMessageData___closed__1;
static lean_once_cell_t l_Lean_Meta_Match_Alt_toMessageData___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Alt_toMessageData___closed__2;
static lean_once_cell_t l_Lean_Meta_Match_Alt_toMessageData___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Alt_toMessageData___closed__3;
static lean_once_cell_t l_Lean_Meta_Match_Alt_toMessageData___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Alt_toMessageData___closed__4;
static lean_once_cell_t l_Lean_Meta_Match_Alt_toMessageData___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Alt_toMessageData___closed__5;
static lean_once_cell_t l_Lean_Meta_Match_Alt_toMessageData___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Alt_toMessageData___closed__6;
static lean_once_cell_t l_Lean_Meta_Match_Alt_toMessageData___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Alt_toMessageData___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Alt_toMessageData(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Alt_toMessageData___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_applyFVarSubst_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_applyFVarSubst_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_applyFVarSubst_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Alt_applyFVarSubst(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Alt_replaceFVarId(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Meta_Match_Alt_isLocalDecl_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Meta_Match_Alt_isLocalDecl_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Match_Alt_isLocalDecl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Alt_isLocalDecl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_var_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_var_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_underscore_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_underscore_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_ctor_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_ctor_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_val_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_val_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_arrayLit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_arrayLit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_replaceFVarId(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Example_replaceFVarId_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Example_replaceFVarId_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_replaceFVarId___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_applyFVarSubst(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Example_applyFVarSubst_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Example_applyFVarSubst_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_applyFVarSubst___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_varsToUnderscore(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Example_varsToUnderscore_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_Example_toMessageData___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Example_toMessageData___closed__0;
static lean_once_cell_t l_Lean_Meta_Match_Example_toMessageData___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Example_toMessageData___closed__1;
static lean_once_cell_t l_Lean_Meta_Match_Example_toMessageData___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Example_toMessageData___closed__2;
static lean_once_cell_t l_List_foldl___at___00Lean_Meta_Match_Example_toMessageData_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Meta_Match_Example_toMessageData_spec__0___closed__0;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Meta_Match_Example_toMessageData_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_Example_toMessageData___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Example_toMessageData___closed__3;
static lean_once_cell_t l_Lean_Meta_Match_Example_toMessageData___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Example_toMessageData___closed__4;
static lean_once_cell_t l_Lean_Meta_Match_Example_toMessageData___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Example_toMessageData___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_toMessageData(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Example_toMessageData_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_examplesToMessageData_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_examplesToMessageData(lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_instInhabitedProblem_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_instInhabitedProblem_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instInhabitedProblem_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instInhabitedProblem;
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Match_withGoalOf_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Match_withGoalOf_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Match_withGoalOf_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Match_withGoalOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_withGoalOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_withGoalOf___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_withGoalOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_withGoalOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_Problem_toMessageData_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_Problem_toMessageData_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_Problem_toMessageData_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_Problem_toMessageData_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__1;
static lean_once_cell_t l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__2;
static lean_once_cell_t l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__3;
static lean_once_cell_t l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__4;
static lean_once_cell_t l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__5;
static lean_once_cell_t l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Problem_toMessageData___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Problem_toMessageData___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Problem_toMessageData(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Problem_toMessageData___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_counterExampleToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_counterExamplesToMessageData_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_counterExamplesToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Match_toPattern_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Match_toPattern_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_toPattern___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_toPattern___closed__0;
static lean_once_cell_t l_Lean_Meta_Match_toPattern___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_toPattern___closed__1;
static lean_once_cell_t l_Lean_Meta_Match_toPattern___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_toPattern___closed__2;
static lean_once_cell_t l_Lean_Meta_Match_toPattern___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_toPattern___closed__3;
static lean_once_cell_t l_Lean_Meta_Match_toPattern___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_toPattern___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Match_toPattern_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_toPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_toPattern_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_toPattern_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Match_toPattern_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_toPattern___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Match_toPattern_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Match_toPattern_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_congrEqnThmSuffixBase___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_congrEqnThmSuffixBase___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_congrEqnThmSuffixBase;
static lean_once_cell_t l_Lean_Meta_Match_congrEqnThmSuffixBasePrefix___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_congrEqnThmSuffixBasePrefix___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_congrEqnThmSuffixBasePrefix;
static lean_once_cell_t l_Lean_Meta_Match_congrEqn1ThmSuffix___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_congrEqn1ThmSuffix___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_congrEqn1ThmSuffix;
static lean_once_cell_t l_Lean_Meta_Match_isCongrEqnReservedNameSuffix___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_isCongrEqnReservedNameSuffix___closed__0;
LEAN_EXPORT uint8_t l_Lean_Meta_Match_isCongrEqnReservedNameSuffix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_isCongrEqnReservedNameSuffix___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_ctorIdx(lean_object* v_x_1_){
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
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
default: 
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_ctorIdx___boxed(lean_object* v_x_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_Meta_Match_Pattern_ctorIdx(v_x_8_);
lean_dec_ref(v_x_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_ctorElim___redArg(lean_object* v_t_10_, lean_object* v_k_11_){
_start:
{
switch(lean_obj_tag(v_t_10_))
{
case 1:
{
lean_object* v_fvarId_12_; lean_object* v___x_13_; 
v_fvarId_12_ = lean_ctor_get(v_t_10_, 0);
lean_inc(v_fvarId_12_);
lean_dec_ref(v_t_10_);
v___x_13_ = lean_apply_1(v_k_11_, v_fvarId_12_);
return v___x_13_;
}
case 2:
{
lean_object* v_ctorName_14_; lean_object* v_us_15_; lean_object* v_params_16_; lean_object* v_fields_17_; lean_object* v___x_18_; 
v_ctorName_14_ = lean_ctor_get(v_t_10_, 0);
lean_inc(v_ctorName_14_);
v_us_15_ = lean_ctor_get(v_t_10_, 1);
lean_inc(v_us_15_);
v_params_16_ = lean_ctor_get(v_t_10_, 2);
lean_inc(v_params_16_);
v_fields_17_ = lean_ctor_get(v_t_10_, 3);
lean_inc(v_fields_17_);
lean_dec_ref(v_t_10_);
v___x_18_ = lean_apply_4(v_k_11_, v_ctorName_14_, v_us_15_, v_params_16_, v_fields_17_);
return v___x_18_;
}
case 4:
{
lean_object* v_type_19_; lean_object* v_xs_20_; lean_object* v___x_21_; 
v_type_19_ = lean_ctor_get(v_t_10_, 0);
lean_inc_ref(v_type_19_);
v_xs_20_ = lean_ctor_get(v_t_10_, 1);
lean_inc(v_xs_20_);
lean_dec_ref(v_t_10_);
v___x_21_ = lean_apply_2(v_k_11_, v_type_19_, v_xs_20_);
return v___x_21_;
}
case 5:
{
lean_object* v_varId_22_; lean_object* v_p_23_; lean_object* v_hId_24_; lean_object* v___x_25_; 
v_varId_22_ = lean_ctor_get(v_t_10_, 0);
lean_inc(v_varId_22_);
v_p_23_ = lean_ctor_get(v_t_10_, 1);
lean_inc_ref(v_p_23_);
v_hId_24_ = lean_ctor_get(v_t_10_, 2);
lean_inc(v_hId_24_);
lean_dec_ref(v_t_10_);
v___x_25_ = lean_apply_3(v_k_11_, v_varId_22_, v_p_23_, v_hId_24_);
return v___x_25_;
}
default: 
{
lean_object* v_e_26_; lean_object* v___x_27_; 
v_e_26_ = lean_ctor_get(v_t_10_, 0);
lean_inc_ref(v_e_26_);
lean_dec_ref(v_t_10_);
v___x_27_ = lean_apply_1(v_k_11_, v_e_26_);
return v___x_27_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_ctorElim(lean_object* v_motive__1_28_, lean_object* v_ctorIdx_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_k_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lean_Meta_Match_Pattern_ctorElim___redArg(v_t_30_, v_k_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_ctorElim___boxed(lean_object* v_motive__1_34_, lean_object* v_ctorIdx_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_k_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_Lean_Meta_Match_Pattern_ctorElim(v_motive__1_34_, v_ctorIdx_35_, v_t_36_, v_h_37_, v_k_38_);
lean_dec(v_ctorIdx_35_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_inaccessible_elim___redArg(lean_object* v_t_40_, lean_object* v_inaccessible_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_Meta_Match_Pattern_ctorElim___redArg(v_t_40_, v_inaccessible_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_inaccessible_elim(lean_object* v_motive__1_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_inaccessible_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Meta_Match_Pattern_ctorElim___redArg(v_t_44_, v_inaccessible_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_var_elim___redArg(lean_object* v_t_48_, lean_object* v_var_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_Meta_Match_Pattern_ctorElim___redArg(v_t_48_, v_var_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_var_elim(lean_object* v_motive__1_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_var_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_Meta_Match_Pattern_ctorElim___redArg(v_t_52_, v_var_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_ctor_elim___redArg(lean_object* v_t_56_, lean_object* v_ctor_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_Meta_Match_Pattern_ctorElim___redArg(v_t_56_, v_ctor_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_ctor_elim(lean_object* v_motive__1_59_, lean_object* v_t_60_, lean_object* v_h_61_, lean_object* v_ctor_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_Meta_Match_Pattern_ctorElim___redArg(v_t_60_, v_ctor_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_val_elim___redArg(lean_object* v_t_64_, lean_object* v_val_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_Lean_Meta_Match_Pattern_ctorElim___redArg(v_t_64_, v_val_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_val_elim(lean_object* v_motive__1_67_, lean_object* v_t_68_, lean_object* v_h_69_, lean_object* v_val_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_Meta_Match_Pattern_ctorElim___redArg(v_t_68_, v_val_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_arrayLit_elim___redArg(lean_object* v_t_72_, lean_object* v_arrayLit_73_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_Lean_Meta_Match_Pattern_ctorElim___redArg(v_t_72_, v_arrayLit_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_arrayLit_elim(lean_object* v_motive__1_75_, lean_object* v_t_76_, lean_object* v_h_77_, lean_object* v_arrayLit_78_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = l_Lean_Meta_Match_Pattern_ctorElim___redArg(v_t_76_, v_arrayLit_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_as_elim___redArg(lean_object* v_t_80_, lean_object* v_as_81_){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = l_Lean_Meta_Match_Pattern_ctorElim___redArg(v_t_80_, v_as_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_as_elim(lean_object* v_motive__1_83_, lean_object* v_t_84_, lean_object* v_h_85_, lean_object* v_as_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = l_Lean_Meta_Match_Pattern_ctorElim___redArg(v_t_84_, v_as_86_);
return v___x_87_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedPattern_default___closed__0(void){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_mk_string_unchecked("_inhabitedExprDummy", 19, 19);
return v___x_88_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedPattern_default___closed__1(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = lean_obj_once(&l_Lean_Meta_Match_instInhabitedPattern_default___closed__0, &l_Lean_Meta_Match_instInhabitedPattern_default___closed__0_once, _init_l_Lean_Meta_Match_instInhabitedPattern_default___closed__0);
v___x_90_ = l_Lean_Name_mkStr1(v___x_89_);
return v___x_90_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedPattern_default___closed__2(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_91_ = lean_box(0);
v___x_92_ = lean_obj_once(&l_Lean_Meta_Match_instInhabitedPattern_default___closed__1, &l_Lean_Meta_Match_instInhabitedPattern_default___closed__1_once, _init_l_Lean_Meta_Match_instInhabitedPattern_default___closed__1);
v___x_93_ = l_Lean_Expr_const___override(v___x_92_, v___x_91_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedPattern_default___closed__3(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lean_obj_once(&l_Lean_Meta_Match_instInhabitedPattern_default___closed__2, &l_Lean_Meta_Match_instInhabitedPattern_default___closed__2_once, _init_l_Lean_Meta_Match_instInhabitedPattern_default___closed__2);
v___x_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedPattern_default(void){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_obj_once(&l_Lean_Meta_Match_instInhabitedPattern_default___closed__3, &l_Lean_Meta_Match_instInhabitedPattern_default___closed__3_once, _init_l_Lean_Meta_Match_instInhabitedPattern_default___closed__3);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedPattern(void){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = l_Lean_Meta_Match_instInhabitedPattern_default;
return v___x_97_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__0(void){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = lean_mk_string_unchecked(".(", 2, 2);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__1(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__0, &l_Lean_Meta_Match_Pattern_toMessageData___closed__0_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__0);
v___x_100_ = l_Lean_stringToMessageData(v___x_99_);
return v___x_100_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__2(void){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_mk_string_unchecked(")", 1, 1);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__3(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__2, &l_Lean_Meta_Match_Pattern_toMessageData___closed__2_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__2);
v___x_103_ = l_Lean_stringToMessageData(v___x_102_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__4(void){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = lean_mk_string_unchecked("(", 1, 1);
return v___x_104_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__5(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__4, &l_Lean_Meta_Match_Pattern_toMessageData___closed__4_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__4);
v___x_106_ = l_Lean_stringToMessageData(v___x_105_);
return v___x_106_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__6(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = lean_box(0);
v___x_108_ = l_Lean_MessageData_ofFormat(v___x_107_);
return v___x_108_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__0(void){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = lean_mk_string_unchecked(" ", 1, 1);
return v___x_109_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__1(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = lean_obj_once(&l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__0, &l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__0_once, _init_l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__0);
v___x_111_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
return v___x_111_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__2(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = lean_obj_once(&l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__1, &l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__1_once, _init_l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__1);
v___x_113_ = l_Lean_MessageData_ofFormat(v___x_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0(lean_object* v_x_114_, lean_object* v_x_115_){
_start:
{
if (lean_obj_tag(v_x_115_) == 0)
{
return v_x_114_;
}
else
{
lean_object* v_head_116_; lean_object* v_tail_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_128_; 
v_head_116_ = lean_ctor_get(v_x_115_, 0);
v_tail_117_ = lean_ctor_get(v_x_115_, 1);
v_isSharedCheck_128_ = !lean_is_exclusive(v_x_115_);
if (v_isSharedCheck_128_ == 0)
{
v___x_119_ = v_x_115_;
v_isShared_120_ = v_isSharedCheck_128_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_tail_117_);
lean_inc(v_head_116_);
lean_dec(v_x_115_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_128_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_121_; lean_object* v___x_123_; 
v___x_121_ = lean_obj_once(&l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__2, &l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__2_once, _init_l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__2);
if (v_isShared_120_ == 0)
{
lean_ctor_set_tag(v___x_119_, 7);
lean_ctor_set(v___x_119_, 1, v___x_121_);
lean_ctor_set(v___x_119_, 0, v_x_114_);
v___x_123_ = v___x_119_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_x_114_);
lean_ctor_set(v_reuseFailAlloc_127_, 1, v___x_121_);
v___x_123_ = v_reuseFailAlloc_127_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_124_ = l_Lean_Meta_Match_Pattern_toMessageData(v_head_116_);
v___x_125_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_123_);
lean_ctor_set(v___x_125_, 1, v___x_124_);
v_x_114_ = v___x_125_;
v_x_115_ = v_tail_117_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__7(void){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = lean_mk_string_unchecked("#[", 2, 2);
return v___x_129_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__8(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__7, &l_Lean_Meta_Match_Pattern_toMessageData___closed__7_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__7);
v___x_131_ = l_Lean_stringToMessageData(v___x_130_);
return v___x_131_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__9(void){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_mk_string_unchecked(", ", 2, 2);
return v___x_132_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__10(void){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_133_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__9, &l_Lean_Meta_Match_Pattern_toMessageData___closed__9_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__9);
v___x_134_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
return v___x_134_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__11(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__10, &l_Lean_Meta_Match_Pattern_toMessageData___closed__10_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__10);
v___x_136_ = l_Lean_MessageData_ofFormat(v___x_135_);
return v___x_136_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__12(void){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lean_mk_string_unchecked("]", 1, 1);
return v___x_137_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__13(void){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_138_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__12, &l_Lean_Meta_Match_Pattern_toMessageData___closed__12_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__12);
v___x_139_ = l_Lean_stringToMessageData(v___x_138_);
return v___x_139_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__14(void){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = lean_mk_string_unchecked("@", 1, 1);
return v___x_140_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__15(void){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__14, &l_Lean_Meta_Match_Pattern_toMessageData___closed__14_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__14);
v___x_142_ = l_Lean_stringToMessageData(v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_toMessageData(lean_object* v_x_143_){
_start:
{
switch(lean_obj_tag(v_x_143_))
{
case 0:
{
lean_object* v_e_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v_e_144_ = lean_ctor_get(v_x_143_, 0);
lean_inc_ref(v_e_144_);
lean_dec_ref(v_x_143_);
v___x_145_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__1, &l_Lean_Meta_Match_Pattern_toMessageData___closed__1_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__1);
v___x_146_ = l_Lean_MessageData_ofExpr(v_e_144_);
v___x_147_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_147_, 0, v___x_145_);
lean_ctor_set(v___x_147_, 1, v___x_146_);
v___x_148_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__3, &l_Lean_Meta_Match_Pattern_toMessageData___closed__3_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__3);
v___x_149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_149_, 0, v___x_147_);
lean_ctor_set(v___x_149_, 1, v___x_148_);
return v___x_149_;
}
case 1:
{
lean_object* v_fvarId_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v_fvarId_150_ = lean_ctor_get(v_x_143_, 0);
lean_inc(v_fvarId_150_);
lean_dec_ref(v_x_143_);
v___x_151_ = l_Lean_mkFVar(v_fvarId_150_);
v___x_152_ = l_Lean_MessageData_ofExpr(v___x_151_);
return v___x_152_;
}
case 2:
{
lean_object* v_fields_153_; 
v_fields_153_ = lean_ctor_get(v_x_143_, 3);
if (lean_obj_tag(v_fields_153_) == 0)
{
lean_object* v_ctorName_154_; lean_object* v___x_155_; 
v_ctorName_154_ = lean_ctor_get(v_x_143_, 0);
lean_inc(v_ctorName_154_);
lean_dec_ref(v_x_143_);
v___x_155_ = l_Lean_MessageData_ofName(v_ctorName_154_);
return v___x_155_;
}
else
{
lean_object* v_ctorName_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
lean_inc(v_fields_153_);
v_ctorName_156_ = lean_ctor_get(v_x_143_, 0);
lean_inc(v_ctorName_156_);
lean_dec_ref(v_x_143_);
v___x_157_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__5, &l_Lean_Meta_Match_Pattern_toMessageData___closed__5_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__5);
v___x_158_ = l_Lean_MessageData_ofName(v_ctorName_156_);
v___x_159_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_157_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
v___x_160_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__6, &l_Lean_Meta_Match_Pattern_toMessageData___closed__6_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__6);
v___x_161_ = l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0(v___x_160_, v_fields_153_);
v___x_162_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_162_, 0, v___x_159_);
lean_ctor_set(v___x_162_, 1, v___x_161_);
v___x_163_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__3, &l_Lean_Meta_Match_Pattern_toMessageData___closed__3_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__3);
v___x_164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_162_);
lean_ctor_set(v___x_164_, 1, v___x_163_);
return v___x_164_;
}
}
case 3:
{
lean_object* v_e_165_; lean_object* v___x_166_; 
v_e_165_ = lean_ctor_get(v_x_143_, 0);
lean_inc_ref(v_e_165_);
lean_dec_ref(v_x_143_);
v___x_166_ = l_Lean_MessageData_ofExpr(v_e_165_);
return v___x_166_;
}
case 4:
{
lean_object* v_xs_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_181_; 
v_xs_167_ = lean_ctor_get(v_x_143_, 1);
v_isSharedCheck_181_ = !lean_is_exclusive(v_x_143_);
if (v_isSharedCheck_181_ == 0)
{
lean_object* v_unused_182_; 
v_unused_182_ = lean_ctor_get(v_x_143_, 0);
lean_dec(v_unused_182_);
v___x_169_ = v_x_143_;
v_isShared_170_ = v_isSharedCheck_181_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_xs_167_);
lean_dec(v_x_143_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_181_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_171_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__8, &l_Lean_Meta_Match_Pattern_toMessageData___closed__8_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__8);
v___x_172_ = lean_box(0);
v___x_173_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Pattern_toMessageData_spec__1(v_xs_167_, v___x_172_);
v___x_174_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__11, &l_Lean_Meta_Match_Pattern_toMessageData___closed__11_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__11);
v___x_175_ = l_Lean_MessageData_joinSep(v___x_173_, v___x_174_);
if (v_isShared_170_ == 0)
{
lean_ctor_set_tag(v___x_169_, 7);
lean_ctor_set(v___x_169_, 1, v___x_175_);
lean_ctor_set(v___x_169_, 0, v___x_171_);
v___x_177_ = v___x_169_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v___x_171_);
lean_ctor_set(v_reuseFailAlloc_180_, 1, v___x_175_);
v___x_177_ = v_reuseFailAlloc_180_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__13, &l_Lean_Meta_Match_Pattern_toMessageData___closed__13_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__13);
v___x_179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_177_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
return v___x_179_;
}
}
}
default: 
{
lean_object* v_varId_183_; lean_object* v_p_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v_varId_183_ = lean_ctor_get(v_x_143_, 0);
lean_inc(v_varId_183_);
v_p_184_ = lean_ctor_get(v_x_143_, 1);
lean_inc_ref(v_p_184_);
lean_dec_ref(v_x_143_);
v___x_185_ = l_Lean_mkFVar(v_varId_183_);
v___x_186_ = l_Lean_MessageData_ofExpr(v___x_185_);
v___x_187_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__15, &l_Lean_Meta_Match_Pattern_toMessageData___closed__15_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__15);
v___x_188_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_186_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
v___x_189_ = l_Lean_Meta_Match_Pattern_toMessageData(v_p_184_);
v___x_190_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_190_, 0, v___x_188_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
return v___x_190_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Pattern_toMessageData_spec__1(lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
if (lean_obj_tag(v_a_191_) == 0)
{
lean_object* v___x_193_; 
v___x_193_ = l_List_reverse___redArg(v_a_192_);
return v___x_193_;
}
else
{
lean_object* v_head_194_; lean_object* v_tail_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_204_; 
v_head_194_ = lean_ctor_get(v_a_191_, 0);
v_tail_195_ = lean_ctor_get(v_a_191_, 1);
v_isSharedCheck_204_ = !lean_is_exclusive(v_a_191_);
if (v_isSharedCheck_204_ == 0)
{
v___x_197_ = v_a_191_;
v_isShared_198_ = v_isSharedCheck_204_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_tail_195_);
lean_inc(v_head_194_);
lean_dec(v_a_191_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_204_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_199_; lean_object* v___x_201_; 
v___x_199_ = l_Lean_Meta_Match_Pattern_toMessageData(v_head_194_);
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 1, v_a_192_);
lean_ctor_set(v___x_197_, 0, v___x_199_);
v___x_201_ = v___x_197_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v___x_199_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v_a_192_);
v___x_201_ = v_reuseFailAlloc_203_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
v_a_191_ = v_tail_195_;
v_a_192_ = v___x_201_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_Basic_0__Lean_Meta_Match_Pattern_toExpr_visit(uint8_t v_annotate_205_, lean_object* v_p_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_){
_start:
{
switch(lean_obj_tag(v_p_206_))
{
case 0:
{
if (v_annotate_205_ == 0)
{
lean_object* v_e_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_219_; 
v_e_212_ = lean_ctor_get(v_p_206_, 0);
v_isSharedCheck_219_ = !lean_is_exclusive(v_p_206_);
if (v_isSharedCheck_219_ == 0)
{
v___x_214_ = v_p_206_;
v_isShared_215_ = v_isSharedCheck_219_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_e_212_);
lean_dec(v_p_206_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_219_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v___x_217_; 
if (v_isShared_215_ == 0)
{
v___x_217_ = v___x_214_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v_e_212_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
}
else
{
lean_object* v_e_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_228_; 
v_e_220_ = lean_ctor_get(v_p_206_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v_p_206_);
if (v_isSharedCheck_228_ == 0)
{
v___x_222_ = v_p_206_;
v_isShared_223_ = v_isSharedCheck_228_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_e_220_);
lean_dec(v_p_206_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_228_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_224_; lean_object* v___x_226_; 
v___x_224_ = l_Lean_mkInaccessible(v_e_220_);
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 0, v___x_224_);
v___x_226_ = v___x_222_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v___x_224_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_237_; 
v_fvarId_229_ = lean_ctor_get(v_p_206_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v_p_206_);
if (v_isSharedCheck_237_ == 0)
{
v___x_231_ = v_p_206_;
v_isShared_232_ = v_isSharedCheck_237_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_fvarId_229_);
lean_dec(v_p_206_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_237_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_233_; lean_object* v___x_235_; 
v___x_233_ = l_Lean_mkFVar(v_fvarId_229_);
if (v_isShared_232_ == 0)
{
lean_ctor_set_tag(v___x_231_, 0);
lean_ctor_set(v___x_231_, 0, v___x_233_);
v___x_235_ = v___x_231_;
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
}
case 2:
{
lean_object* v_ctorName_238_; lean_object* v_us_239_; lean_object* v_params_240_; lean_object* v_fields_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v_ctorName_238_ = lean_ctor_get(v_p_206_, 0);
lean_inc(v_ctorName_238_);
v_us_239_ = lean_ctor_get(v_p_206_, 1);
lean_inc(v_us_239_);
v_params_240_ = lean_ctor_get(v_p_206_, 2);
lean_inc(v_params_240_);
v_fields_241_ = lean_ctor_get(v_p_206_, 3);
lean_inc(v_fields_241_);
lean_dec_ref(v_p_206_);
v___x_242_ = lean_box(0);
v___x_243_ = l_List_mapM_loop___at___00__private_Lean_Meta_Match_Basic_0__Lean_Meta_Match_Pattern_toExpr_visit_spec__0(v_annotate_205_, v_fields_241_, v___x_242_, v_a_207_, v_a_208_, v_a_209_, v_a_210_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v_a_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_255_; 
v_a_244_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_255_ == 0)
{
v___x_246_ = v___x_243_;
v_isShared_247_ = v_isSharedCheck_255_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_a_244_);
lean_dec(v___x_243_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_255_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_253_; 
v___x_248_ = l_Lean_mkConst(v_ctorName_238_, v_us_239_);
v___x_249_ = l_List_appendTR___redArg(v_params_240_, v_a_244_);
v___x_250_ = lean_array_mk(v___x_249_);
v___x_251_ = l_Lean_mkAppN(v___x_248_, v___x_250_);
lean_dec_ref(v___x_250_);
if (v_isShared_247_ == 0)
{
lean_ctor_set(v___x_246_, 0, v___x_251_);
v___x_253_ = v___x_246_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v___x_251_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
}
else
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_263_; 
lean_dec(v_params_240_);
lean_dec(v_us_239_);
lean_dec(v_ctorName_238_);
v_a_256_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_263_ == 0)
{
v___x_258_ = v___x_243_;
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___x_243_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_261_; 
if (v_isShared_259_ == 0)
{
v___x_261_ = v___x_258_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_a_256_);
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
case 3:
{
lean_object* v_e_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
v_e_264_ = lean_ctor_get(v_p_206_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v_p_206_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v_p_206_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_e_264_);
lean_dec(v_p_206_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
lean_ctor_set_tag(v___x_266_, 0);
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_e_264_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
case 4:
{
lean_object* v_type_272_; lean_object* v_xs_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v_type_272_ = lean_ctor_get(v_p_206_, 0);
lean_inc_ref(v_type_272_);
v_xs_273_ = lean_ctor_get(v_p_206_, 1);
lean_inc(v_xs_273_);
lean_dec_ref(v_p_206_);
v___x_274_ = lean_box(0);
v___x_275_ = l_List_mapM_loop___at___00__private_Lean_Meta_Match_Basic_0__Lean_Meta_Match_Pattern_toExpr_visit_spec__0(v_annotate_205_, v_xs_273_, v___x_274_, v_a_207_, v_a_208_, v_a_209_, v_a_210_);
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v_a_276_; lean_object* v___x_277_; 
v_a_276_ = lean_ctor_get(v___x_275_, 0);
lean_inc(v_a_276_);
lean_dec_ref(v___x_275_);
v___x_277_ = l_Lean_Meta_mkArrayLit(v_type_272_, v_a_276_, v_a_207_, v_a_208_, v_a_209_, v_a_210_);
return v___x_277_;
}
else
{
lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_285_; 
lean_dec_ref(v_type_272_);
v_a_278_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_285_ == 0)
{
v___x_280_ = v___x_275_;
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_dec(v___x_275_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_283_; 
if (v_isShared_281_ == 0)
{
v___x_283_ = v___x_280_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_a_278_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
return v___x_283_;
}
}
}
}
default: 
{
if (v_annotate_205_ == 0)
{
lean_object* v_p_286_; 
v_p_286_ = lean_ctor_get(v_p_206_, 1);
lean_inc_ref(v_p_286_);
lean_dec_ref(v_p_206_);
v_p_206_ = v_p_286_;
goto _start;
}
else
{
lean_object* v_varId_288_; lean_object* v_p_289_; lean_object* v_hId_290_; lean_object* v___x_291_; 
v_varId_288_ = lean_ctor_get(v_p_206_, 0);
lean_inc(v_varId_288_);
v_p_289_ = lean_ctor_get(v_p_206_, 1);
lean_inc_ref(v_p_289_);
v_hId_290_ = lean_ctor_get(v_p_206_, 2);
lean_inc(v_hId_290_);
lean_dec_ref(v_p_206_);
v___x_291_ = l___private_Lean_Meta_Match_Basic_0__Lean_Meta_Match_Pattern_toExpr_visit(v_annotate_205_, v_p_289_, v_a_207_, v_a_208_, v_a_209_, v_a_210_);
if (lean_obj_tag(v___x_291_) == 0)
{
lean_object* v_a_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v_a_292_ = lean_ctor_get(v___x_291_, 0);
lean_inc(v_a_292_);
lean_dec_ref(v___x_291_);
v___x_293_ = l_Lean_mkFVar(v_varId_288_);
v___x_294_ = l_Lean_mkFVar(v_hId_290_);
v___x_295_ = l_Lean_Meta_Match_mkNamedPattern(v___x_293_, v___x_294_, v_a_292_, v_a_207_, v_a_208_, v_a_209_, v_a_210_);
return v___x_295_;
}
else
{
lean_dec(v_hId_290_);
lean_dec(v_varId_288_);
return v___x_291_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Match_Basic_0__Lean_Meta_Match_Pattern_toExpr_visit_spec__0(uint8_t v_annotate_296_, lean_object* v_x_297_, lean_object* v_x_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_){
_start:
{
if (lean_obj_tag(v_x_297_) == 0)
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = l_List_reverse___redArg(v_x_298_);
v___x_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
return v___x_305_;
}
else
{
lean_object* v_head_306_; lean_object* v_tail_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_325_; 
v_head_306_ = lean_ctor_get(v_x_297_, 0);
v_tail_307_ = lean_ctor_get(v_x_297_, 1);
v_isSharedCheck_325_ = !lean_is_exclusive(v_x_297_);
if (v_isSharedCheck_325_ == 0)
{
v___x_309_ = v_x_297_;
v_isShared_310_ = v_isSharedCheck_325_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_tail_307_);
lean_inc(v_head_306_);
lean_dec(v_x_297_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_325_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_311_; 
v___x_311_ = l___private_Lean_Meta_Match_Basic_0__Lean_Meta_Match_Pattern_toExpr_visit(v_annotate_296_, v_head_306_, v___y_299_, v___y_300_, v___y_301_, v___y_302_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; lean_object* v___x_314_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
lean_inc(v_a_312_);
lean_dec_ref(v___x_311_);
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 1, v_x_298_);
lean_ctor_set(v___x_309_, 0, v_a_312_);
v___x_314_ = v___x_309_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_a_312_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v_x_298_);
v___x_314_ = v_reuseFailAlloc_316_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
v_x_297_ = v_tail_307_;
v_x_298_ = v___x_314_;
goto _start;
}
}
else
{
lean_object* v_a_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_324_; 
lean_del_object(v___x_309_);
lean_dec(v_tail_307_);
lean_dec(v_x_298_);
v_a_317_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_324_ == 0)
{
v___x_319_ = v___x_311_;
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_a_317_);
lean_dec(v___x_311_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_322_; 
if (v_isShared_320_ == 0)
{
v___x_322_ = v___x_319_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_a_317_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Match_Basic_0__Lean_Meta_Match_Pattern_toExpr_visit_spec__0___boxed(lean_object* v_annotate_326_, lean_object* v_x_327_, lean_object* v_x_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_){
_start:
{
uint8_t v_annotate_boxed_334_; lean_object* v_res_335_; 
v_annotate_boxed_334_ = lean_unbox(v_annotate_326_);
v_res_335_ = l_List_mapM_loop___at___00__private_Lean_Meta_Match_Basic_0__Lean_Meta_Match_Pattern_toExpr_visit_spec__0(v_annotate_boxed_334_, v_x_327_, v_x_328_, v___y_329_, v___y_330_, v___y_331_, v___y_332_);
lean_dec(v___y_332_);
lean_dec_ref(v___y_331_);
lean_dec(v___y_330_);
lean_dec_ref(v___y_329_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_Basic_0__Lean_Meta_Match_Pattern_toExpr_visit___boxed(lean_object* v_annotate_336_, lean_object* v_p_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_){
_start:
{
uint8_t v_annotate_boxed_343_; lean_object* v_res_344_; 
v_annotate_boxed_343_ = lean_unbox(v_annotate_336_);
v_res_344_ = l___private_Lean_Meta_Match_Basic_0__Lean_Meta_Match_Pattern_toExpr_visit(v_annotate_boxed_343_, v_p_337_, v_a_338_, v_a_339_, v_a_340_, v_a_341_);
lean_dec(v_a_341_);
lean_dec_ref(v_a_340_);
lean_dec(v_a_339_);
lean_dec_ref(v_a_338_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_toExpr(lean_object* v_p_345_, uint8_t v_annotate_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = l___private_Lean_Meta_Match_Basic_0__Lean_Meta_Match_Pattern_toExpr_visit(v_annotate_346_, v_p_345_, v_a_347_, v_a_348_, v_a_349_, v_a_350_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_toExpr___boxed(lean_object* v_p_353_, lean_object* v_annotate_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_){
_start:
{
uint8_t v_annotate_boxed_360_; lean_object* v_res_361_; 
v_annotate_boxed_360_ = lean_unbox(v_annotate_354_);
v_res_361_ = l_Lean_Meta_Match_Pattern_toExpr(v_p_353_, v_annotate_boxed_360_, v_a_355_, v_a_356_, v_a_357_, v_a_358_);
lean_dec(v_a_358_);
lean_dec_ref(v_a_357_);
lean_dec(v_a_356_);
lean_dec_ref(v_a_355_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Pattern_applyFVarSubst_spec__0(lean_object* v_s_362_, lean_object* v_a_363_, lean_object* v_a_364_){
_start:
{
if (lean_obj_tag(v_a_363_) == 0)
{
lean_object* v___x_365_; 
lean_dec(v_s_362_);
v___x_365_ = l_List_reverse___redArg(v_a_364_);
return v___x_365_;
}
else
{
lean_object* v_head_366_; lean_object* v_tail_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_376_; 
v_head_366_ = lean_ctor_get(v_a_363_, 0);
v_tail_367_ = lean_ctor_get(v_a_363_, 1);
v_isSharedCheck_376_ = !lean_is_exclusive(v_a_363_);
if (v_isSharedCheck_376_ == 0)
{
v___x_369_ = v_a_363_;
v_isShared_370_ = v_isSharedCheck_376_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_tail_367_);
lean_inc(v_head_366_);
lean_dec(v_a_363_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_376_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_371_; lean_object* v___x_373_; 
lean_inc(v_s_362_);
v___x_371_ = l_Lean_Meta_FVarSubst_apply(v_s_362_, v_head_366_);
lean_dec(v_head_366_);
if (v_isShared_370_ == 0)
{
lean_ctor_set(v___x_369_, 1, v_a_364_);
lean_ctor_set(v___x_369_, 0, v___x_371_);
v___x_373_ = v___x_369_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_371_);
lean_ctor_set(v_reuseFailAlloc_375_, 1, v_a_364_);
v___x_373_ = v_reuseFailAlloc_375_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
v_a_363_ = v_tail_367_;
v_a_364_ = v___x_373_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_applyFVarSubst(lean_object* v_s_377_, lean_object* v_x_378_){
_start:
{
switch(lean_obj_tag(v_x_378_))
{
case 0:
{
lean_object* v_e_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_387_; 
v_e_379_ = lean_ctor_get(v_x_378_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v_x_378_);
if (v_isSharedCheck_387_ == 0)
{
v___x_381_ = v_x_378_;
v_isShared_382_ = v_isSharedCheck_387_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_e_379_);
lean_dec(v_x_378_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_387_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_383_; lean_object* v___x_385_; 
v___x_383_ = l_Lean_Meta_FVarSubst_apply(v_s_377_, v_e_379_);
lean_dec_ref(v_e_379_);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 0, v___x_383_);
v___x_385_ = v___x_381_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v___x_383_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
}
case 1:
{
lean_object* v_fvarId_388_; lean_object* v___x_389_; 
v_fvarId_388_ = lean_ctor_get(v_x_378_, 0);
v___x_389_ = l_Lean_Meta_FVarSubst_find_x3f(v_s_377_, v_fvarId_388_);
lean_dec(v_s_377_);
if (lean_obj_tag(v___x_389_) == 0)
{
return v_x_378_;
}
else
{
lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_397_; 
v_isSharedCheck_397_ = !lean_is_exclusive(v_x_378_);
if (v_isSharedCheck_397_ == 0)
{
lean_object* v_unused_398_; 
v_unused_398_ = lean_ctor_get(v_x_378_, 0);
lean_dec(v_unused_398_);
v___x_391_ = v_x_378_;
v_isShared_392_ = v_isSharedCheck_397_;
goto v_resetjp_390_;
}
else
{
lean_dec(v_x_378_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_397_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v_val_393_; lean_object* v___x_395_; 
v_val_393_ = lean_ctor_get(v___x_389_, 0);
lean_inc(v_val_393_);
lean_dec_ref(v___x_389_);
if (v_isShared_392_ == 0)
{
lean_ctor_set_tag(v___x_391_, 0);
lean_ctor_set(v___x_391_, 0, v_val_393_);
v___x_395_ = v___x_391_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_val_393_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
}
case 2:
{
lean_object* v_ctorName_399_; lean_object* v_us_400_; lean_object* v_params_401_; lean_object* v_fields_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_412_; 
v_ctorName_399_ = lean_ctor_get(v_x_378_, 0);
v_us_400_ = lean_ctor_get(v_x_378_, 1);
v_params_401_ = lean_ctor_get(v_x_378_, 2);
v_fields_402_ = lean_ctor_get(v_x_378_, 3);
v_isSharedCheck_412_ = !lean_is_exclusive(v_x_378_);
if (v_isSharedCheck_412_ == 0)
{
v___x_404_ = v_x_378_;
v_isShared_405_ = v_isSharedCheck_412_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_fields_402_);
lean_inc(v_params_401_);
lean_inc(v_us_400_);
lean_inc(v_ctorName_399_);
lean_dec(v_x_378_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_412_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_410_; 
v___x_406_ = lean_box(0);
lean_inc(v_s_377_);
v___x_407_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Pattern_applyFVarSubst_spec__0(v_s_377_, v_params_401_, v___x_406_);
v___x_408_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Pattern_applyFVarSubst_spec__1(v_s_377_, v_fields_402_, v___x_406_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 3, v___x_408_);
lean_ctor_set(v___x_404_, 2, v___x_407_);
v___x_410_ = v___x_404_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_ctorName_399_);
lean_ctor_set(v_reuseFailAlloc_411_, 1, v_us_400_);
lean_ctor_set(v_reuseFailAlloc_411_, 2, v___x_407_);
lean_ctor_set(v_reuseFailAlloc_411_, 3, v___x_408_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
case 3:
{
lean_object* v_e_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_421_; 
v_e_413_ = lean_ctor_get(v_x_378_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v_x_378_);
if (v_isSharedCheck_421_ == 0)
{
v___x_415_ = v_x_378_;
v_isShared_416_ = v_isSharedCheck_421_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_e_413_);
lean_dec(v_x_378_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_421_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_417_; lean_object* v___x_419_; 
v___x_417_ = l_Lean_Meta_FVarSubst_apply(v_s_377_, v_e_413_);
lean_dec_ref(v_e_413_);
if (v_isShared_416_ == 0)
{
lean_ctor_set(v___x_415_, 0, v___x_417_);
v___x_419_ = v___x_415_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_417_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
case 4:
{
lean_object* v_type_422_; lean_object* v_xs_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_433_; 
v_type_422_ = lean_ctor_get(v_x_378_, 0);
v_xs_423_ = lean_ctor_get(v_x_378_, 1);
v_isSharedCheck_433_ = !lean_is_exclusive(v_x_378_);
if (v_isSharedCheck_433_ == 0)
{
v___x_425_ = v_x_378_;
v_isShared_426_ = v_isSharedCheck_433_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_xs_423_);
lean_inc(v_type_422_);
lean_dec(v_x_378_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_433_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_431_; 
lean_inc(v_s_377_);
v___x_427_ = l_Lean_Meta_FVarSubst_apply(v_s_377_, v_type_422_);
lean_dec_ref(v_type_422_);
v___x_428_ = lean_box(0);
v___x_429_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Pattern_applyFVarSubst_spec__1(v_s_377_, v_xs_423_, v___x_428_);
if (v_isShared_426_ == 0)
{
lean_ctor_set(v___x_425_, 1, v___x_429_);
lean_ctor_set(v___x_425_, 0, v___x_427_);
v___x_431_ = v___x_425_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_427_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v___x_429_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
default: 
{
lean_object* v_varId_434_; lean_object* v_p_435_; lean_object* v_hId_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_446_; 
v_varId_434_ = lean_ctor_get(v_x_378_, 0);
v_p_435_ = lean_ctor_get(v_x_378_, 1);
v_hId_436_ = lean_ctor_get(v_x_378_, 2);
v_isSharedCheck_446_ = !lean_is_exclusive(v_x_378_);
if (v_isSharedCheck_446_ == 0)
{
v___x_438_ = v_x_378_;
v_isShared_439_ = v_isSharedCheck_446_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_hId_436_);
lean_inc(v_p_435_);
lean_inc(v_varId_434_);
lean_dec(v_x_378_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_446_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_440_; 
v___x_440_ = l_Lean_Meta_FVarSubst_find_x3f(v_s_377_, v_varId_434_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v___x_441_; lean_object* v___x_443_; 
v___x_441_ = l_Lean_Meta_Match_Pattern_applyFVarSubst(v_s_377_, v_p_435_);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 1, v___x_441_);
v___x_443_ = v___x_438_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_varId_434_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v___x_441_);
lean_ctor_set(v_reuseFailAlloc_444_, 2, v_hId_436_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
else
{
lean_dec_ref(v___x_440_);
lean_del_object(v___x_438_);
lean_dec(v_hId_436_);
lean_dec(v_varId_434_);
v_x_378_ = v_p_435_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Pattern_applyFVarSubst_spec__1(lean_object* v_s_447_, lean_object* v_a_448_, lean_object* v_a_449_){
_start:
{
if (lean_obj_tag(v_a_448_) == 0)
{
lean_object* v___x_450_; 
lean_dec(v_s_447_);
v___x_450_ = l_List_reverse___redArg(v_a_449_);
return v___x_450_;
}
else
{
lean_object* v_head_451_; lean_object* v_tail_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_461_; 
v_head_451_ = lean_ctor_get(v_a_448_, 0);
v_tail_452_ = lean_ctor_get(v_a_448_, 1);
v_isSharedCheck_461_ = !lean_is_exclusive(v_a_448_);
if (v_isSharedCheck_461_ == 0)
{
v___x_454_ = v_a_448_;
v_isShared_455_ = v_isSharedCheck_461_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_tail_452_);
lean_inc(v_head_451_);
lean_dec(v_a_448_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_461_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_456_; lean_object* v___x_458_; 
lean_inc(v_s_447_);
v___x_456_ = l_Lean_Meta_Match_Pattern_applyFVarSubst(v_s_447_, v_head_451_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 1, v_a_449_);
lean_ctor_set(v___x_454_, 0, v___x_456_);
v___x_458_ = v___x_454_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v___x_456_);
lean_ctor_set(v_reuseFailAlloc_460_, 1, v_a_449_);
v___x_458_ = v_reuseFailAlloc_460_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
v_a_448_ = v_tail_452_;
v_a_449_ = v___x_458_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_replaceFVarId(lean_object* v_fvarId_462_, lean_object* v_v_463_, lean_object* v_p_464_){
_start:
{
lean_object* v_s_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v_s_465_ = lean_box(0);
v___x_466_ = l_Lean_Meta_FVarSubst_insert(v_s_465_, v_fvarId_462_, v_v_463_);
v___x_467_ = l_Lean_Meta_Match_Pattern_applyFVarSubst(v___x_466_, v_p_464_);
return v___x_467_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Meta_Match_Pattern_hasExprMVar_spec__0(lean_object* v_x_468_){
_start:
{
if (lean_obj_tag(v_x_468_) == 0)
{
uint8_t v___x_469_; 
v___x_469_ = 0;
return v___x_469_;
}
else
{
lean_object* v_head_470_; lean_object* v_tail_471_; uint8_t v___x_472_; 
v_head_470_ = lean_ctor_get(v_x_468_, 0);
v_tail_471_ = lean_ctor_get(v_x_468_, 1);
v___x_472_ = l_Lean_Expr_hasExprMVar(v_head_470_);
if (v___x_472_ == 0)
{
v_x_468_ = v_tail_471_;
goto _start;
}
else
{
return v___x_472_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Meta_Match_Pattern_hasExprMVar_spec__0___boxed(lean_object* v_x_474_){
_start:
{
uint8_t v_res_475_; lean_object* v_r_476_; 
v_res_475_ = l_List_any___at___00Lean_Meta_Match_Pattern_hasExprMVar_spec__0(v_x_474_);
lean_dec(v_x_474_);
v_r_476_ = lean_box(v_res_475_);
return v_r_476_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Match_Pattern_hasExprMVar(lean_object* v_x_477_){
_start:
{
switch(lean_obj_tag(v_x_477_))
{
case 0:
{
lean_object* v_e_478_; uint8_t v___x_479_; 
v_e_478_ = lean_ctor_get(v_x_477_, 0);
v___x_479_ = l_Lean_Expr_hasExprMVar(v_e_478_);
return v___x_479_;
}
case 2:
{
lean_object* v_params_480_; lean_object* v_fields_481_; uint8_t v___x_482_; 
v_params_480_ = lean_ctor_get(v_x_477_, 2);
v_fields_481_ = lean_ctor_get(v_x_477_, 3);
v___x_482_ = l_List_any___at___00Lean_Meta_Match_Pattern_hasExprMVar_spec__0(v_params_480_);
if (v___x_482_ == 0)
{
uint8_t v___x_483_; 
v___x_483_ = l_List_any___at___00Lean_Meta_Match_Pattern_hasExprMVar_spec__1(v_fields_481_);
return v___x_483_;
}
else
{
return v___x_482_;
}
}
case 3:
{
lean_object* v_e_484_; uint8_t v___x_485_; 
v_e_484_ = lean_ctor_get(v_x_477_, 0);
v___x_485_ = l_Lean_Expr_hasExprMVar(v_e_484_);
return v___x_485_;
}
case 5:
{
lean_object* v_p_486_; 
v_p_486_ = lean_ctor_get(v_x_477_, 1);
v_x_477_ = v_p_486_;
goto _start;
}
case 4:
{
lean_object* v_type_488_; lean_object* v_xs_489_; uint8_t v___x_490_; 
v_type_488_ = lean_ctor_get(v_x_477_, 0);
v_xs_489_ = lean_ctor_get(v_x_477_, 1);
v___x_490_ = l_Lean_Expr_hasExprMVar(v_type_488_);
if (v___x_490_ == 0)
{
uint8_t v___x_491_; 
v___x_491_ = l_List_any___at___00Lean_Meta_Match_Pattern_hasExprMVar_spec__1(v_xs_489_);
return v___x_491_;
}
else
{
return v___x_490_;
}
}
default: 
{
uint8_t v___x_492_; 
v___x_492_ = 0;
return v___x_492_;
}
}
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Meta_Match_Pattern_hasExprMVar_spec__1(lean_object* v_x_493_){
_start:
{
if (lean_obj_tag(v_x_493_) == 0)
{
uint8_t v___x_494_; 
v___x_494_ = 0;
return v___x_494_;
}
else
{
lean_object* v_head_495_; lean_object* v_tail_496_; uint8_t v___x_497_; 
v_head_495_ = lean_ctor_get(v_x_493_, 0);
v_tail_496_ = lean_ctor_get(v_x_493_, 1);
v___x_497_ = l_Lean_Meta_Match_Pattern_hasExprMVar(v_head_495_);
if (v___x_497_ == 0)
{
v_x_493_ = v_tail_496_;
goto _start;
}
else
{
return v___x_497_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Meta_Match_Pattern_hasExprMVar_spec__1___boxed(lean_object* v_x_499_){
_start:
{
uint8_t v_res_500_; lean_object* v_r_501_; 
v_res_500_ = l_List_any___at___00Lean_Meta_Match_Pattern_hasExprMVar_spec__1(v_x_499_);
lean_dec(v_x_499_);
v_r_501_ = lean_box(v_res_500_);
return v_r_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_hasExprMVar___boxed(lean_object* v_x_502_){
_start:
{
uint8_t v_res_503_; lean_object* v_r_504_; 
v_res_503_ = l_Lean_Meta_Match_Pattern_hasExprMVar(v_x_502_);
lean_dec_ref(v_x_502_);
v_r_504_ = lean_box(v_res_503_);
return v_r_504_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Match_Pattern_collectFVars_spec__0(lean_object* v_as_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_){
_start:
{
if (lean_obj_tag(v_as_505_) == 0)
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = lean_box(0);
v___x_513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
return v___x_513_;
}
else
{
lean_object* v_head_514_; lean_object* v_tail_515_; lean_object* v___x_516_; 
v_head_514_ = lean_ctor_get(v_as_505_, 0);
lean_inc(v_head_514_);
v_tail_515_ = lean_ctor_get(v_as_505_, 1);
lean_inc(v_tail_515_);
lean_dec_ref(v_as_505_);
v___x_516_ = l_Lean_Expr_collectFVars(v_head_514_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_dec_ref(v___x_516_);
v_as_505_ = v_tail_515_;
goto _start;
}
else
{
lean_dec(v_tail_515_);
return v___x_516_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Match_Pattern_collectFVars_spec__0___boxed(lean_object* v_as_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_){
_start:
{
lean_object* v_res_525_; 
v_res_525_ = l_List_forM___at___00Lean_Meta_Match_Pattern_collectFVars_spec__0(v_as_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, v___y_523_);
lean_dec(v___y_523_);
lean_dec_ref(v___y_522_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_collectFVars(lean_object* v_p_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_){
_start:
{
switch(lean_obj_tag(v_p_526_))
{
case 1:
{
lean_object* v_fvarId_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_545_; 
v_fvarId_533_ = lean_ctor_get(v_p_526_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v_p_526_);
if (v_isSharedCheck_545_ == 0)
{
v___x_535_ = v_p_526_;
v_isShared_536_ = v_isSharedCheck_545_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_fvarId_533_);
lean_dec(v_p_526_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_545_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_543_; 
v___x_537_ = lean_st_ref_get(v_a_531_);
lean_dec(v___x_537_);
v___x_538_ = lean_st_ref_take(v_a_527_);
v___x_539_ = l_Lean_CollectFVars_State_add(v___x_538_, v_fvarId_533_);
v___x_540_ = lean_st_ref_set(v_a_527_, v___x_539_);
v___x_541_ = lean_box(0);
if (v_isShared_536_ == 0)
{
lean_ctor_set_tag(v___x_535_, 0);
lean_ctor_set(v___x_535_, 0, v___x_541_);
v___x_543_ = v___x_535_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_541_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
case 2:
{
lean_object* v_params_546_; lean_object* v_fields_547_; lean_object* v___x_548_; 
v_params_546_ = lean_ctor_get(v_p_526_, 2);
lean_inc(v_params_546_);
v_fields_547_ = lean_ctor_get(v_p_526_, 3);
lean_inc(v_fields_547_);
lean_dec_ref(v_p_526_);
v___x_548_ = l_List_forM___at___00Lean_Meta_Match_Pattern_collectFVars_spec__0(v_params_546_, v_a_527_, v_a_528_, v_a_529_, v_a_530_, v_a_531_);
if (lean_obj_tag(v___x_548_) == 0)
{
lean_object* v___x_549_; 
lean_dec_ref(v___x_548_);
v___x_549_ = l_List_forM___at___00Lean_Meta_Match_Pattern_collectFVars_spec__1(v_fields_547_, v_a_527_, v_a_528_, v_a_529_, v_a_530_, v_a_531_);
return v___x_549_;
}
else
{
lean_dec(v_fields_547_);
return v___x_548_;
}
}
case 4:
{
lean_object* v_type_550_; lean_object* v_xs_551_; lean_object* v___x_552_; 
v_type_550_ = lean_ctor_get(v_p_526_, 0);
lean_inc_ref(v_type_550_);
v_xs_551_ = lean_ctor_get(v_p_526_, 1);
lean_inc(v_xs_551_);
lean_dec_ref(v_p_526_);
v___x_552_ = l_Lean_Expr_collectFVars(v_type_550_, v_a_527_, v_a_528_, v_a_529_, v_a_530_, v_a_531_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v___x_553_; 
lean_dec_ref(v___x_552_);
v___x_553_ = l_List_forM___at___00Lean_Meta_Match_Pattern_collectFVars_spec__1(v_xs_551_, v_a_527_, v_a_528_, v_a_529_, v_a_530_, v_a_531_);
return v___x_553_;
}
else
{
lean_dec(v_xs_551_);
return v___x_552_;
}
}
case 5:
{
lean_object* v_varId_554_; lean_object* v_p_555_; lean_object* v_hId_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v_varId_554_ = lean_ctor_get(v_p_526_, 0);
lean_inc(v_varId_554_);
v_p_555_ = lean_ctor_get(v_p_526_, 1);
lean_inc_ref(v_p_555_);
v_hId_556_ = lean_ctor_get(v_p_526_, 2);
lean_inc(v_hId_556_);
lean_dec_ref(v_p_526_);
v___x_557_ = lean_st_ref_get(v_a_531_);
lean_dec(v___x_557_);
v___x_558_ = lean_st_ref_take(v_a_527_);
v___x_559_ = l_Lean_CollectFVars_State_add(v___x_558_, v_varId_554_);
v___x_560_ = l_Lean_CollectFVars_State_add(v___x_559_, v_hId_556_);
v___x_561_ = lean_st_ref_set(v_a_527_, v___x_560_);
v_p_526_ = v_p_555_;
goto _start;
}
default: 
{
lean_object* v_e_563_; lean_object* v___x_564_; 
v_e_563_ = lean_ctor_get(v_p_526_, 0);
lean_inc_ref(v_e_563_);
lean_dec_ref(v_p_526_);
v___x_564_ = l_Lean_Expr_collectFVars(v_e_563_, v_a_527_, v_a_528_, v_a_529_, v_a_530_, v_a_531_);
return v___x_564_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Match_Pattern_collectFVars_spec__1(lean_object* v_as_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_){
_start:
{
if (lean_obj_tag(v_as_565_) == 0)
{
lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_572_ = lean_box(0);
v___x_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
return v___x_573_;
}
else
{
lean_object* v_head_574_; lean_object* v_tail_575_; lean_object* v___x_576_; 
v_head_574_ = lean_ctor_get(v_as_565_, 0);
lean_inc(v_head_574_);
v_tail_575_ = lean_ctor_get(v_as_565_, 1);
lean_inc(v_tail_575_);
lean_dec_ref(v_as_565_);
v___x_576_ = l_Lean_Meta_Match_Pattern_collectFVars(v_head_574_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_);
if (lean_obj_tag(v___x_576_) == 0)
{
lean_dec_ref(v___x_576_);
v_as_565_ = v_tail_575_;
goto _start;
}
else
{
lean_dec(v_tail_575_);
return v___x_576_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Match_Pattern_collectFVars_spec__1___boxed(lean_object* v_as_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l_List_forM___at___00Lean_Meta_Match_Pattern_collectFVars_spec__1(v_as_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_);
lean_dec(v___y_583_);
lean_dec_ref(v___y_582_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
lean_dec(v___y_579_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Pattern_collectFVars___boxed(lean_object* v_p_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lean_Meta_Match_Pattern_collectFVars(v_p_586_, v_a_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_);
lean_dec(v_a_591_);
lean_dec_ref(v_a_590_);
lean_dec(v_a_589_);
lean_dec_ref(v_a_588_);
lean_dec(v_a_587_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0___redArg(lean_object* v_e_594_, lean_object* v___y_595_, lean_object* v___y_596_){
_start:
{
uint8_t v___x_598_; 
v___x_598_ = l_Lean_Expr_hasMVar(v_e_594_);
if (v___x_598_ == 0)
{
lean_object* v___x_599_; 
v___x_599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_599_, 0, v_e_594_);
return v___x_599_;
}
else
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v_mctx_602_; lean_object* v___x_603_; lean_object* v_fst_604_; lean_object* v_snd_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v_cache_608_; lean_object* v_zetaDeltaFVarIds_609_; lean_object* v_postponed_610_; lean_object* v_diag_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_620_; 
v___x_600_ = lean_st_ref_get(v___y_596_);
lean_dec(v___x_600_);
v___x_601_ = lean_st_ref_get(v___y_595_);
v_mctx_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc_ref(v_mctx_602_);
lean_dec(v___x_601_);
v___x_603_ = l_Lean_instantiateMVarsCore(v_mctx_602_, v_e_594_);
v_fst_604_ = lean_ctor_get(v___x_603_, 0);
lean_inc(v_fst_604_);
v_snd_605_ = lean_ctor_get(v___x_603_, 1);
lean_inc(v_snd_605_);
lean_dec_ref(v___x_603_);
v___x_606_ = lean_st_ref_get(v___y_596_);
lean_dec(v___x_606_);
v___x_607_ = lean_st_ref_take(v___y_595_);
v_cache_608_ = lean_ctor_get(v___x_607_, 1);
v_zetaDeltaFVarIds_609_ = lean_ctor_get(v___x_607_, 2);
v_postponed_610_ = lean_ctor_get(v___x_607_, 3);
v_diag_611_ = lean_ctor_get(v___x_607_, 4);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_620_ == 0)
{
lean_object* v_unused_621_; 
v_unused_621_ = lean_ctor_get(v___x_607_, 0);
lean_dec(v_unused_621_);
v___x_613_ = v___x_607_;
v_isShared_614_ = v_isSharedCheck_620_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_diag_611_);
lean_inc(v_postponed_610_);
lean_inc(v_zetaDeltaFVarIds_609_);
lean_inc(v_cache_608_);
lean_dec(v___x_607_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_620_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 0, v_snd_605_);
v___x_616_ = v___x_613_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_snd_605_);
lean_ctor_set(v_reuseFailAlloc_619_, 1, v_cache_608_);
lean_ctor_set(v_reuseFailAlloc_619_, 2, v_zetaDeltaFVarIds_609_);
lean_ctor_set(v_reuseFailAlloc_619_, 3, v_postponed_610_);
lean_ctor_set(v_reuseFailAlloc_619_, 4, v_diag_611_);
v___x_616_ = v_reuseFailAlloc_619_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = lean_st_ref_set(v___y_595_, v___x_616_);
v___x_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_618_, 0, v_fst_604_);
return v___x_618_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0___redArg___boxed(lean_object* v_e_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_){
_start:
{
lean_object* v_res_626_; 
v_res_626_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0___redArg(v_e_622_, v___y_623_, v___y_624_);
lean_dec(v___y_624_);
lean_dec(v___y_623_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0(lean_object* v_e_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0___redArg(v_e_627_, v___y_629_, v___y_631_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0___boxed(lean_object* v_e_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0(v_e_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_);
lean_dec(v___y_638_);
lean_dec_ref(v___y_637_);
lean_dec(v___y_636_);
lean_dec_ref(v___y_635_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_instantiatePatternMVars_spec__1(lean_object* v_x_641_, lean_object* v_x_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_){
_start:
{
if (lean_obj_tag(v_x_641_) == 0)
{
lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_648_ = l_List_reverse___redArg(v_x_642_);
v___x_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_649_, 0, v___x_648_);
return v___x_649_;
}
else
{
lean_object* v_head_650_; lean_object* v_tail_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_661_; 
v_head_650_ = lean_ctor_get(v_x_641_, 0);
v_tail_651_ = lean_ctor_get(v_x_641_, 1);
v_isSharedCheck_661_ = !lean_is_exclusive(v_x_641_);
if (v_isSharedCheck_661_ == 0)
{
v___x_653_ = v_x_641_;
v_isShared_654_ = v_isSharedCheck_661_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_tail_651_);
lean_inc(v_head_650_);
lean_dec(v_x_641_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_661_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_655_; lean_object* v_a_656_; lean_object* v___x_658_; 
v___x_655_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0___redArg(v_head_650_, v___y_644_, v___y_646_);
v_a_656_ = lean_ctor_get(v___x_655_, 0);
lean_inc(v_a_656_);
lean_dec_ref(v___x_655_);
if (v_isShared_654_ == 0)
{
lean_ctor_set(v___x_653_, 1, v_x_642_);
lean_ctor_set(v___x_653_, 0, v_a_656_);
v___x_658_ = v___x_653_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_656_);
lean_ctor_set(v_reuseFailAlloc_660_, 1, v_x_642_);
v___x_658_ = v_reuseFailAlloc_660_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
v_x_641_ = v_tail_651_;
v_x_642_ = v___x_658_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_instantiatePatternMVars_spec__1___boxed(lean_object* v_x_662_, lean_object* v_x_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_){
_start:
{
lean_object* v_res_669_; 
v_res_669_ = l_List_mapM_loop___at___00Lean_Meta_Match_instantiatePatternMVars_spec__1(v_x_662_, v_x_663_, v___y_664_, v___y_665_, v___y_666_, v___y_667_);
lean_dec(v___y_667_);
lean_dec_ref(v___y_666_);
lean_dec(v___y_665_);
lean_dec_ref(v___y_664_);
return v_res_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instantiatePatternMVars(lean_object* v_x_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_){
_start:
{
switch(lean_obj_tag(v_x_670_))
{
case 0:
{
lean_object* v_e_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_700_; 
v_e_676_ = lean_ctor_get(v_x_670_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v_x_670_);
if (v_isSharedCheck_700_ == 0)
{
v___x_678_ = v_x_670_;
v_isShared_679_ = v_isSharedCheck_700_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_e_676_);
lean_dec(v_x_670_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_700_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_680_; 
v___x_680_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0___redArg(v_e_676_, v_a_672_, v_a_674_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_691_; 
v_a_681_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_691_ == 0)
{
v___x_683_ = v___x_680_;
v_isShared_684_ = v_isSharedCheck_691_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_dec(v___x_680_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_691_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 0, v_a_681_);
v___x_686_ = v___x_678_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_a_681_);
v___x_686_ = v_reuseFailAlloc_690_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
lean_object* v___x_688_; 
if (v_isShared_684_ == 0)
{
lean_ctor_set(v___x_683_, 0, v___x_686_);
v___x_688_ = v___x_683_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v___x_686_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
}
}
else
{
lean_object* v_a_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_699_; 
lean_del_object(v___x_678_);
v_a_692_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_699_ == 0)
{
v___x_694_ = v___x_680_;
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_a_692_);
lean_dec(v___x_680_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_697_; 
if (v_isShared_695_ == 0)
{
v___x_697_ = v___x_694_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_a_692_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
case 3:
{
lean_object* v_e_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_725_; 
v_e_701_ = lean_ctor_get(v_x_670_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v_x_670_);
if (v_isSharedCheck_725_ == 0)
{
v___x_703_ = v_x_670_;
v_isShared_704_ = v_isSharedCheck_725_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_e_701_);
lean_dec(v_x_670_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_725_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_705_; 
v___x_705_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0___redArg(v_e_701_, v_a_672_, v_a_674_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v_a_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_716_; 
v_a_706_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_716_ == 0)
{
v___x_708_ = v___x_705_;
v_isShared_709_ = v_isSharedCheck_716_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_a_706_);
lean_dec(v___x_705_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_716_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_711_; 
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 0, v_a_706_);
v___x_711_ = v___x_703_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v_a_706_);
v___x_711_ = v_reuseFailAlloc_715_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
lean_object* v___x_713_; 
if (v_isShared_709_ == 0)
{
lean_ctor_set(v___x_708_, 0, v___x_711_);
v___x_713_ = v___x_708_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v___x_711_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
}
else
{
lean_object* v_a_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_724_; 
lean_del_object(v___x_703_);
v_a_717_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_724_ == 0)
{
v___x_719_ = v___x_705_;
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_a_717_);
lean_dec(v___x_705_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_722_; 
if (v_isShared_720_ == 0)
{
v___x_722_ = v___x_719_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_a_717_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
}
}
}
}
}
case 2:
{
lean_object* v_ctorName_726_; lean_object* v_us_727_; lean_object* v_params_728_; lean_object* v_fields_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_764_; 
v_ctorName_726_ = lean_ctor_get(v_x_670_, 0);
v_us_727_ = lean_ctor_get(v_x_670_, 1);
v_params_728_ = lean_ctor_get(v_x_670_, 2);
v_fields_729_ = lean_ctor_get(v_x_670_, 3);
v_isSharedCheck_764_ = !lean_is_exclusive(v_x_670_);
if (v_isSharedCheck_764_ == 0)
{
v___x_731_ = v_x_670_;
v_isShared_732_ = v_isSharedCheck_764_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_fields_729_);
lean_inc(v_params_728_);
lean_inc(v_us_727_);
lean_inc(v_ctorName_726_);
lean_dec(v_x_670_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_764_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_733_ = lean_box(0);
v___x_734_ = l_List_mapM_loop___at___00Lean_Meta_Match_instantiatePatternMVars_spec__1(v_params_728_, v___x_733_, v_a_671_, v_a_672_, v_a_673_, v_a_674_);
if (lean_obj_tag(v___x_734_) == 0)
{
lean_object* v_a_735_; lean_object* v___x_736_; 
v_a_735_ = lean_ctor_get(v___x_734_, 0);
lean_inc(v_a_735_);
lean_dec_ref(v___x_734_);
v___x_736_ = l_List_mapM_loop___at___00Lean_Meta_Match_instantiatePatternMVars_spec__2(v_fields_729_, v___x_733_, v_a_671_, v_a_672_, v_a_673_, v_a_674_);
if (lean_obj_tag(v___x_736_) == 0)
{
lean_object* v_a_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_747_; 
v_a_737_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_747_ == 0)
{
v___x_739_ = v___x_736_;
v_isShared_740_ = v_isSharedCheck_747_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_a_737_);
lean_dec(v___x_736_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_747_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_742_; 
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 3, v_a_737_);
lean_ctor_set(v___x_731_, 2, v_a_735_);
v___x_742_ = v___x_731_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_ctorName_726_);
lean_ctor_set(v_reuseFailAlloc_746_, 1, v_us_727_);
lean_ctor_set(v_reuseFailAlloc_746_, 2, v_a_735_);
lean_ctor_set(v_reuseFailAlloc_746_, 3, v_a_737_);
v___x_742_ = v_reuseFailAlloc_746_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
lean_object* v___x_744_; 
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 0, v___x_742_);
v___x_744_ = v___x_739_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v___x_742_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
}
else
{
lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_755_; 
lean_dec(v_a_735_);
lean_del_object(v___x_731_);
lean_dec(v_us_727_);
lean_dec(v_ctorName_726_);
v_a_748_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_755_ == 0)
{
v___x_750_ = v___x_736_;
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_dec(v___x_736_);
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
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_763_; 
lean_del_object(v___x_731_);
lean_dec(v_fields_729_);
lean_dec(v_us_727_);
lean_dec(v_ctorName_726_);
v_a_756_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_763_ == 0)
{
v___x_758_ = v___x_734_;
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v___x_734_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_a_756_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
}
case 5:
{
lean_object* v_varId_765_; lean_object* v_p_766_; lean_object* v_hId_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_783_; 
v_varId_765_ = lean_ctor_get(v_x_670_, 0);
v_p_766_ = lean_ctor_get(v_x_670_, 1);
v_hId_767_ = lean_ctor_get(v_x_670_, 2);
v_isSharedCheck_783_ = !lean_is_exclusive(v_x_670_);
if (v_isSharedCheck_783_ == 0)
{
v___x_769_ = v_x_670_;
v_isShared_770_ = v_isSharedCheck_783_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_hId_767_);
lean_inc(v_p_766_);
lean_inc(v_varId_765_);
lean_dec(v_x_670_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_783_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_771_; 
v___x_771_ = l_Lean_Meta_Match_instantiatePatternMVars(v_p_766_, v_a_671_, v_a_672_, v_a_673_, v_a_674_);
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v_a_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_782_; 
v_a_772_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_782_ == 0)
{
v___x_774_ = v___x_771_;
v_isShared_775_ = v_isSharedCheck_782_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_a_772_);
lean_dec(v___x_771_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_782_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_777_; 
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 1, v_a_772_);
v___x_777_ = v___x_769_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_varId_765_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v_a_772_);
lean_ctor_set(v_reuseFailAlloc_781_, 2, v_hId_767_);
v___x_777_ = v_reuseFailAlloc_781_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
lean_object* v___x_779_; 
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 0, v___x_777_);
v___x_779_ = v___x_774_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v___x_777_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
}
}
else
{
lean_del_object(v___x_769_);
lean_dec(v_hId_767_);
lean_dec(v_varId_765_);
return v___x_771_;
}
}
}
case 4:
{
lean_object* v_type_784_; lean_object* v_xs_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_820_; 
v_type_784_ = lean_ctor_get(v_x_670_, 0);
v_xs_785_ = lean_ctor_get(v_x_670_, 1);
v_isSharedCheck_820_ = !lean_is_exclusive(v_x_670_);
if (v_isSharedCheck_820_ == 0)
{
v___x_787_ = v_x_670_;
v_isShared_788_ = v_isSharedCheck_820_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_xs_785_);
lean_inc(v_type_784_);
lean_dec(v_x_670_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_820_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_789_; 
v___x_789_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0___redArg(v_type_784_, v_a_672_, v_a_674_);
if (lean_obj_tag(v___x_789_) == 0)
{
lean_object* v_a_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v_a_790_ = lean_ctor_get(v___x_789_, 0);
lean_inc(v_a_790_);
lean_dec_ref(v___x_789_);
v___x_791_ = lean_box(0);
v___x_792_ = l_List_mapM_loop___at___00Lean_Meta_Match_instantiatePatternMVars_spec__2(v_xs_785_, v___x_791_, v_a_671_, v_a_672_, v_a_673_, v_a_674_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_803_; 
v_a_793_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_803_ == 0)
{
v___x_795_ = v___x_792_;
v_isShared_796_ = v_isSharedCheck_803_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_dec(v___x_792_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_803_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_798_; 
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 1, v_a_793_);
lean_ctor_set(v___x_787_, 0, v_a_790_);
v___x_798_ = v___x_787_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_a_790_);
lean_ctor_set(v_reuseFailAlloc_802_, 1, v_a_793_);
v___x_798_ = v_reuseFailAlloc_802_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
lean_object* v___x_800_; 
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v___x_798_);
v___x_800_ = v___x_795_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v___x_798_);
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
else
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_811_; 
lean_dec(v_a_790_);
lean_del_object(v___x_787_);
v_a_804_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_811_ == 0)
{
v___x_806_ = v___x_792_;
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_792_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_809_; 
if (v_isShared_807_ == 0)
{
v___x_809_ = v___x_806_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_a_804_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
}
else
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_819_; 
lean_del_object(v___x_787_);
lean_dec(v_xs_785_);
v_a_812_ = lean_ctor_get(v___x_789_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v___x_789_);
if (v_isSharedCheck_819_ == 0)
{
v___x_814_ = v___x_789_;
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_789_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_817_; 
if (v_isShared_815_ == 0)
{
v___x_817_ = v___x_814_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_a_812_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
}
}
default: 
{
lean_object* v___x_821_; 
v___x_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_821_, 0, v_x_670_);
return v___x_821_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_instantiatePatternMVars_spec__2(lean_object* v_x_822_, lean_object* v_x_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
if (lean_obj_tag(v_x_822_) == 0)
{
lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_829_ = l_List_reverse___redArg(v_x_823_);
v___x_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_830_, 0, v___x_829_);
return v___x_830_;
}
else
{
lean_object* v_head_831_; lean_object* v_tail_832_; lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_850_; 
v_head_831_ = lean_ctor_get(v_x_822_, 0);
v_tail_832_ = lean_ctor_get(v_x_822_, 1);
v_isSharedCheck_850_ = !lean_is_exclusive(v_x_822_);
if (v_isSharedCheck_850_ == 0)
{
v___x_834_ = v_x_822_;
v_isShared_835_ = v_isSharedCheck_850_;
goto v_resetjp_833_;
}
else
{
lean_inc(v_tail_832_);
lean_inc(v_head_831_);
lean_dec(v_x_822_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_850_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
lean_object* v___x_836_; 
v___x_836_ = l_Lean_Meta_Match_instantiatePatternMVars(v_head_831_, v___y_824_, v___y_825_, v___y_826_, v___y_827_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v_a_837_; lean_object* v___x_839_; 
v_a_837_ = lean_ctor_get(v___x_836_, 0);
lean_inc(v_a_837_);
lean_dec_ref(v___x_836_);
if (v_isShared_835_ == 0)
{
lean_ctor_set(v___x_834_, 1, v_x_823_);
lean_ctor_set(v___x_834_, 0, v_a_837_);
v___x_839_ = v___x_834_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_a_837_);
lean_ctor_set(v_reuseFailAlloc_841_, 1, v_x_823_);
v___x_839_ = v_reuseFailAlloc_841_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
v_x_822_ = v_tail_832_;
v_x_823_ = v___x_839_;
goto _start;
}
}
else
{
lean_object* v_a_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_849_; 
lean_del_object(v___x_834_);
lean_dec(v_tail_832_);
lean_dec(v_x_823_);
v_a_842_ = lean_ctor_get(v___x_836_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_849_ == 0)
{
v___x_844_ = v___x_836_;
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_a_842_);
lean_dec(v___x_836_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_847_; 
if (v_isShared_845_ == 0)
{
v___x_847_ = v___x_844_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_a_842_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_instantiatePatternMVars_spec__2___boxed(lean_object* v_x_851_, lean_object* v_x_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_List_mapM_loop___at___00Lean_Meta_Match_instantiatePatternMVars_spec__2(v_x_851_, v_x_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
lean_dec(v___y_856_);
lean_dec_ref(v___y_855_);
lean_dec(v___y_854_);
lean_dec_ref(v___y_853_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instantiatePatternMVars___boxed(lean_object* v_x_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_){
_start:
{
lean_object* v_res_865_; 
v_res_865_ = l_Lean_Meta_Match_instantiatePatternMVars(v_x_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_);
lean_dec(v_a_863_);
lean_dec_ref(v_a_862_);
lean_dec(v_a_861_);
lean_dec_ref(v_a_860_);
return v_res_865_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedAltLHS_default___closed__0(void){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_866_ = lean_box(0);
v___x_867_ = lean_box(0);
v___x_868_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_868_, 0, v___x_867_);
lean_ctor_set(v___x_868_, 1, v___x_866_);
lean_ctor_set(v___x_868_, 2, v___x_866_);
return v___x_868_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedAltLHS_default(void){
_start:
{
lean_object* v___x_869_; 
v___x_869_ = lean_obj_once(&l_Lean_Meta_Match_instInhabitedAltLHS_default___closed__0, &l_Lean_Meta_Match_instInhabitedAltLHS_default___closed__0_once, _init_l_Lean_Meta_Match_instInhabitedAltLHS_default___closed__0);
return v___x_869_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedAltLHS(void){
_start:
{
lean_object* v___x_870_; 
v___x_870_ = l_Lean_Meta_Match_instInhabitedAltLHS_default;
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Match_AltLHS_collectFVars_spec__1(lean_object* v_as_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_){
_start:
{
if (lean_obj_tag(v_as_871_) == 0)
{
lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_878_ = lean_box(0);
v___x_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_879_, 0, v___x_878_);
return v___x_879_;
}
else
{
lean_object* v_head_880_; lean_object* v_tail_881_; lean_object* v___x_882_; 
v_head_880_ = lean_ctor_get(v_as_871_, 0);
lean_inc(v_head_880_);
v_tail_881_ = lean_ctor_get(v_as_871_, 1);
lean_inc(v_tail_881_);
lean_dec_ref(v_as_871_);
v___x_882_ = l_Lean_Meta_Match_Pattern_collectFVars(v_head_880_, v___y_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_dec_ref(v___x_882_);
v_as_871_ = v_tail_881_;
goto _start;
}
else
{
lean_dec(v_tail_881_);
return v___x_882_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Match_AltLHS_collectFVars_spec__1___boxed(lean_object* v_as_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_List_forM___at___00Lean_Meta_Match_AltLHS_collectFVars_spec__1(v_as_884_, v___y_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_);
lean_dec(v___y_889_);
lean_dec_ref(v___y_888_);
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
lean_dec(v___y_885_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Match_AltLHS_collectFVars_spec__0(lean_object* v_as_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_){
_start:
{
if (lean_obj_tag(v_as_892_) == 0)
{
lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_899_ = lean_box(0);
v___x_900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
return v___x_900_;
}
else
{
lean_object* v_head_901_; lean_object* v_tail_902_; lean_object* v___x_903_; 
v_head_901_ = lean_ctor_get(v_as_892_, 0);
lean_inc(v_head_901_);
v_tail_902_ = lean_ctor_get(v_as_892_, 1);
lean_inc(v_tail_902_);
lean_dec_ref(v_as_892_);
v___x_903_ = l_Lean_LocalDecl_collectFVars(v_head_901_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_);
if (lean_obj_tag(v___x_903_) == 0)
{
lean_dec_ref(v___x_903_);
v_as_892_ = v_tail_902_;
goto _start;
}
else
{
lean_dec(v_tail_902_);
return v___x_903_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Match_AltLHS_collectFVars_spec__0___boxed(lean_object* v_as_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_List_forM___at___00Lean_Meta_Match_AltLHS_collectFVars_spec__0(v_as_905_, v___y_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_);
lean_dec(v___y_910_);
lean_dec_ref(v___y_909_);
lean_dec(v___y_908_);
lean_dec_ref(v___y_907_);
lean_dec(v___y_906_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_AltLHS_collectFVars(lean_object* v_altLHS_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_){
_start:
{
lean_object* v_fvarDecls_920_; lean_object* v_patterns_921_; lean_object* v___x_922_; 
v_fvarDecls_920_ = lean_ctor_get(v_altLHS_913_, 1);
lean_inc(v_fvarDecls_920_);
v_patterns_921_ = lean_ctor_get(v_altLHS_913_, 2);
lean_inc(v_patterns_921_);
lean_dec_ref(v_altLHS_913_);
v___x_922_ = l_List_forM___at___00Lean_Meta_Match_AltLHS_collectFVars_spec__0(v_fvarDecls_920_, v_a_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v___x_923_; 
lean_dec_ref(v___x_922_);
v___x_923_ = l_List_forM___at___00Lean_Meta_Match_AltLHS_collectFVars_spec__1(v_patterns_921_, v_a_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_);
return v___x_923_;
}
else
{
lean_dec(v_patterns_921_);
return v___x_922_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_AltLHS_collectFVars___boxed(lean_object* v_altLHS_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_){
_start:
{
lean_object* v_res_931_; 
v_res_931_ = l_Lean_Meta_Match_AltLHS_collectFVars(v_altLHS_924_, v_a_925_, v_a_926_, v_a_927_, v_a_928_, v_a_929_);
lean_dec(v_a_929_);
lean_dec_ref(v_a_928_);
lean_dec(v_a_927_);
lean_dec_ref(v_a_926_);
lean_dec(v_a_925_);
return v_res_931_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLocalDeclMVars___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__0___redArg(lean_object* v_localDecl_932_, lean_object* v___y_933_, lean_object* v___y_934_){
_start:
{
if (lean_obj_tag(v_localDecl_932_) == 0)
{
lean_object* v_index_936_; lean_object* v_fvarId_937_; lean_object* v_userName_938_; lean_object* v_type_939_; uint8_t v_bi_940_; uint8_t v_kind_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_957_; 
v_index_936_ = lean_ctor_get(v_localDecl_932_, 0);
v_fvarId_937_ = lean_ctor_get(v_localDecl_932_, 1);
v_userName_938_ = lean_ctor_get(v_localDecl_932_, 2);
v_type_939_ = lean_ctor_get(v_localDecl_932_, 3);
v_bi_940_ = lean_ctor_get_uint8(v_localDecl_932_, sizeof(void*)*4);
v_kind_941_ = lean_ctor_get_uint8(v_localDecl_932_, sizeof(void*)*4 + 1);
v_isSharedCheck_957_ = !lean_is_exclusive(v_localDecl_932_);
if (v_isSharedCheck_957_ == 0)
{
v___x_943_ = v_localDecl_932_;
v_isShared_944_ = v_isSharedCheck_957_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_type_939_);
lean_inc(v_userName_938_);
lean_inc(v_fvarId_937_);
lean_inc(v_index_936_);
lean_dec(v_localDecl_932_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_957_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_945_; lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_956_; 
v___x_945_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0___redArg(v_type_939_, v___y_933_, v___y_934_);
v_a_946_ = lean_ctor_get(v___x_945_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_945_);
if (v_isSharedCheck_956_ == 0)
{
v___x_948_ = v___x_945_;
v_isShared_949_ = v_isSharedCheck_956_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_945_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_956_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 3, v_a_946_);
v___x_951_ = v___x_943_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_index_936_);
lean_ctor_set(v_reuseFailAlloc_955_, 1, v_fvarId_937_);
lean_ctor_set(v_reuseFailAlloc_955_, 2, v_userName_938_);
lean_ctor_set(v_reuseFailAlloc_955_, 3, v_a_946_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, sizeof(void*)*4, v_bi_940_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, sizeof(void*)*4 + 1, v_kind_941_);
v___x_951_ = v_reuseFailAlloc_955_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
lean_object* v___x_953_; 
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 0, v___x_951_);
v___x_953_ = v___x_948_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v___x_951_);
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
}
else
{
lean_object* v_index_958_; lean_object* v_fvarId_959_; lean_object* v_userName_960_; lean_object* v_type_961_; lean_object* v_value_962_; uint8_t v_nondep_963_; uint8_t v_kind_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_982_; 
v_index_958_ = lean_ctor_get(v_localDecl_932_, 0);
v_fvarId_959_ = lean_ctor_get(v_localDecl_932_, 1);
v_userName_960_ = lean_ctor_get(v_localDecl_932_, 2);
v_type_961_ = lean_ctor_get(v_localDecl_932_, 3);
v_value_962_ = lean_ctor_get(v_localDecl_932_, 4);
v_nondep_963_ = lean_ctor_get_uint8(v_localDecl_932_, sizeof(void*)*5);
v_kind_964_ = lean_ctor_get_uint8(v_localDecl_932_, sizeof(void*)*5 + 1);
v_isSharedCheck_982_ = !lean_is_exclusive(v_localDecl_932_);
if (v_isSharedCheck_982_ == 0)
{
v___x_966_ = v_localDecl_932_;
v_isShared_967_ = v_isSharedCheck_982_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_value_962_);
lean_inc(v_type_961_);
lean_inc(v_userName_960_);
lean_inc(v_fvarId_959_);
lean_inc(v_index_958_);
lean_dec(v_localDecl_932_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_982_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_968_; lean_object* v_a_969_; lean_object* v___x_970_; lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_981_; 
v___x_968_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0___redArg(v_type_961_, v___y_933_, v___y_934_);
v_a_969_ = lean_ctor_get(v___x_968_, 0);
lean_inc(v_a_969_);
lean_dec_ref(v___x_968_);
v___x_970_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_instantiatePatternMVars_spec__0___redArg(v_value_962_, v___y_933_, v___y_934_);
v_a_971_ = lean_ctor_get(v___x_970_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_981_ == 0)
{
v___x_973_ = v___x_970_;
v_isShared_974_ = v_isSharedCheck_981_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_970_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_981_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 4, v_a_971_);
lean_ctor_set(v___x_966_, 3, v_a_969_);
v___x_976_ = v___x_966_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_index_958_);
lean_ctor_set(v_reuseFailAlloc_980_, 1, v_fvarId_959_);
lean_ctor_set(v_reuseFailAlloc_980_, 2, v_userName_960_);
lean_ctor_set(v_reuseFailAlloc_980_, 3, v_a_969_);
lean_ctor_set(v_reuseFailAlloc_980_, 4, v_a_971_);
lean_ctor_set_uint8(v_reuseFailAlloc_980_, sizeof(void*)*5, v_nondep_963_);
lean_ctor_set_uint8(v_reuseFailAlloc_980_, sizeof(void*)*5 + 1, v_kind_964_);
v___x_976_ = v_reuseFailAlloc_980_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
lean_object* v___x_978_; 
if (v_isShared_974_ == 0)
{
lean_ctor_set(v___x_973_, 0, v___x_976_);
v___x_978_ = v___x_973_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v___x_976_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLocalDeclMVars___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__0___redArg___boxed(lean_object* v_localDecl_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = l_Lean_instantiateLocalDeclMVars___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__0___redArg(v_localDecl_983_, v___y_984_, v___y_985_);
lean_dec(v___y_985_);
lean_dec(v___y_984_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__1(lean_object* v_x_988_, lean_object* v_x_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
if (lean_obj_tag(v_x_988_) == 0)
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = l_List_reverse___redArg(v_x_989_);
v___x_996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_996_, 0, v___x_995_);
return v___x_996_;
}
else
{
lean_object* v_head_997_; lean_object* v_tail_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1016_; 
v_head_997_ = lean_ctor_get(v_x_988_, 0);
v_tail_998_ = lean_ctor_get(v_x_988_, 1);
v_isSharedCheck_1016_ = !lean_is_exclusive(v_x_988_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1000_ = v_x_988_;
v_isShared_1001_ = v_isSharedCheck_1016_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_tail_998_);
lean_inc(v_head_997_);
lean_dec(v_x_988_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1016_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1002_; 
v___x_1002_ = l_Lean_instantiateLocalDeclMVars___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__0___redArg(v_head_997_, v___y_991_, v___y_993_);
if (lean_obj_tag(v___x_1002_) == 0)
{
lean_object* v_a_1003_; lean_object* v___x_1005_; 
v_a_1003_ = lean_ctor_get(v___x_1002_, 0);
lean_inc(v_a_1003_);
lean_dec_ref(v___x_1002_);
if (v_isShared_1001_ == 0)
{
lean_ctor_set(v___x_1000_, 1, v_x_989_);
lean_ctor_set(v___x_1000_, 0, v_a_1003_);
v___x_1005_ = v___x_1000_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_a_1003_);
lean_ctor_set(v_reuseFailAlloc_1007_, 1, v_x_989_);
v___x_1005_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
v_x_988_ = v_tail_998_;
v_x_989_ = v___x_1005_;
goto _start;
}
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1015_; 
lean_del_object(v___x_1000_);
lean_dec(v_tail_998_);
lean_dec(v_x_989_);
v_a_1008_ = lean_ctor_get(v___x_1002_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1010_ = v___x_1002_;
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_a_1008_);
lean_dec(v___x_1002_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1013_; 
if (v_isShared_1011_ == 0)
{
v___x_1013_ = v___x_1010_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_a_1008_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__1___boxed(lean_object* v_x_1017_, lean_object* v_x_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l_List_mapM_loop___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__1(v_x_1017_, v_x_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_);
lean_dec(v___y_1022_);
lean_dec_ref(v___y_1021_);
lean_dec(v___y_1020_);
lean_dec_ref(v___y_1019_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instantiateAltLHSMVars(lean_object* v_altLHS_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_){
_start:
{
lean_object* v_ref_1031_; lean_object* v_fvarDecls_1032_; lean_object* v_patterns_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1068_; 
v_ref_1031_ = lean_ctor_get(v_altLHS_1025_, 0);
v_fvarDecls_1032_ = lean_ctor_get(v_altLHS_1025_, 1);
v_patterns_1033_ = lean_ctor_get(v_altLHS_1025_, 2);
v_isSharedCheck_1068_ = !lean_is_exclusive(v_altLHS_1025_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1035_ = v_altLHS_1025_;
v_isShared_1036_ = v_isSharedCheck_1068_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_patterns_1033_);
lean_inc(v_fvarDecls_1032_);
lean_inc(v_ref_1031_);
lean_dec(v_altLHS_1025_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1068_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1037_ = lean_box(0);
v___x_1038_ = l_List_mapM_loop___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__1(v_fvarDecls_1032_, v___x_1037_, v_a_1026_, v_a_1027_, v_a_1028_, v_a_1029_);
if (lean_obj_tag(v___x_1038_) == 0)
{
lean_object* v_a_1039_; lean_object* v___x_1040_; 
v_a_1039_ = lean_ctor_get(v___x_1038_, 0);
lean_inc(v_a_1039_);
lean_dec_ref(v___x_1038_);
v___x_1040_ = l_List_mapM_loop___at___00Lean_Meta_Match_instantiatePatternMVars_spec__2(v_patterns_1033_, v___x_1037_, v_a_1026_, v_a_1027_, v_a_1028_, v_a_1029_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1051_; 
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1051_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1051_ == 0)
{
v___x_1043_ = v___x_1040_;
v_isShared_1044_ = v_isSharedCheck_1051_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___x_1040_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1051_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1046_; 
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 2, v_a_1041_);
lean_ctor_set(v___x_1035_, 1, v_a_1039_);
v___x_1046_ = v___x_1035_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v_ref_1031_);
lean_ctor_set(v_reuseFailAlloc_1050_, 1, v_a_1039_);
lean_ctor_set(v_reuseFailAlloc_1050_, 2, v_a_1041_);
v___x_1046_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
lean_object* v___x_1048_; 
if (v_isShared_1044_ == 0)
{
lean_ctor_set(v___x_1043_, 0, v___x_1046_);
v___x_1048_ = v___x_1043_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v___x_1046_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
return v___x_1048_;
}
}
}
}
else
{
lean_object* v_a_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1059_; 
lean_dec(v_a_1039_);
lean_del_object(v___x_1035_);
lean_dec(v_ref_1031_);
v_a_1052_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1054_ = v___x_1040_;
v_isShared_1055_ = v_isSharedCheck_1059_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_a_1052_);
lean_dec(v___x_1040_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1059_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1057_; 
if (v_isShared_1055_ == 0)
{
v___x_1057_ = v___x_1054_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v_a_1052_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
}
else
{
lean_object* v_a_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1067_; 
lean_del_object(v___x_1035_);
lean_dec(v_patterns_1033_);
lean_dec(v_ref_1031_);
v_a_1060_ = lean_ctor_get(v___x_1038_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1062_ = v___x_1038_;
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_a_1060_);
lean_dec(v___x_1038_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1065_; 
if (v_isShared_1063_ == 0)
{
v___x_1065_ = v___x_1062_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_a_1060_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_instantiateAltLHSMVars___boxed(lean_object* v_altLHS_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_){
_start:
{
lean_object* v_res_1075_; 
v_res_1075_ = l_Lean_Meta_Match_instantiateAltLHSMVars(v_altLHS_1069_, v_a_1070_, v_a_1071_, v_a_1072_, v_a_1073_);
lean_dec(v_a_1073_);
lean_dec_ref(v_a_1072_);
lean_dec(v_a_1071_);
lean_dec_ref(v_a_1070_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLocalDeclMVars___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__0(lean_object* v_localDecl_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v___x_1082_; 
v___x_1082_ = l_Lean_instantiateLocalDeclMVars___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__0___redArg(v_localDecl_1076_, v___y_1078_, v___y_1080_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLocalDeclMVars___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__0___boxed(lean_object* v_localDecl_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l_Lean_instantiateLocalDeclMVars___at___00Lean_Meta_Match_instantiateAltLHSMVars_spec__0(v_localDecl_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
return v_res_1089_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedAlt_default___closed__0(void){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1090_ = lean_unsigned_to_nat(0u);
v___x_1091_ = lean_mk_empty_array_with_capacity(v___x_1090_);
return v___x_1091_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedAlt_default___closed__1(void){
_start:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1092_ = lean_obj_once(&l_Lean_Meta_Match_instInhabitedAlt_default___closed__0, &l_Lean_Meta_Match_instInhabitedAlt_default___closed__0_once, _init_l_Lean_Meta_Match_instInhabitedAlt_default___closed__0);
v___x_1093_ = lean_box(0);
v___x_1094_ = lean_obj_once(&l_Lean_Meta_Match_instInhabitedPattern_default___closed__2, &l_Lean_Meta_Match_instInhabitedPattern_default___closed__2_once, _init_l_Lean_Meta_Match_instInhabitedPattern_default___closed__2);
v___x_1095_ = lean_unsigned_to_nat(0u);
v___x_1096_ = lean_box(0);
v___x_1097_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
lean_ctor_set(v___x_1097_, 1, v___x_1095_);
lean_ctor_set(v___x_1097_, 2, v___x_1094_);
lean_ctor_set(v___x_1097_, 3, v___x_1093_);
lean_ctor_set(v___x_1097_, 4, v___x_1093_);
lean_ctor_set(v___x_1097_, 5, v___x_1093_);
lean_ctor_set(v___x_1097_, 6, v___x_1092_);
return v___x_1097_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedAlt_default(void){
_start:
{
lean_object* v___x_1098_; 
v___x_1098_ = lean_obj_once(&l_Lean_Meta_Match_instInhabitedAlt_default___closed__1, &l_Lean_Meta_Match_instInhabitedAlt_default___closed__1_once, _init_l_Lean_Meta_Match_instInhabitedAlt_default___closed__1);
return v___x_1098_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedAlt(void){
_start:
{
lean_object* v___x_1099_; 
v___x_1099_ = l_Lean_Meta_Match_instInhabitedAlt_default;
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_Meta_Match_Alt_toMessageData_spec__2(lean_object* v_msgData_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_){
_start:
{
lean_object* v___x_1106_; lean_object* v_env_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v_mctx_1110_; lean_object* v_lctx_1111_; lean_object* v_options_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1106_ = lean_st_ref_get(v___y_1104_);
v_env_1107_ = lean_ctor_get(v___x_1106_, 0);
lean_inc_ref(v_env_1107_);
lean_dec(v___x_1106_);
v___x_1108_ = lean_st_ref_get(v___y_1104_);
lean_dec(v___x_1108_);
v___x_1109_ = lean_st_ref_get(v___y_1102_);
v_mctx_1110_ = lean_ctor_get(v___x_1109_, 0);
lean_inc_ref(v_mctx_1110_);
lean_dec(v___x_1109_);
v_lctx_1111_ = lean_ctor_get(v___y_1101_, 2);
v_options_1112_ = lean_ctor_get(v___y_1103_, 2);
lean_inc_ref(v_options_1112_);
lean_inc_ref(v_lctx_1111_);
v___x_1113_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1113_, 0, v_env_1107_);
lean_ctor_set(v___x_1113_, 1, v_mctx_1110_);
lean_ctor_set(v___x_1113_, 2, v_lctx_1111_);
lean_ctor_set(v___x_1113_, 3, v_options_1112_);
v___x_1114_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1113_);
lean_ctor_set(v___x_1114_, 1, v_msgData_1100_);
v___x_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1114_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_Meta_Match_Alt_toMessageData_spec__2___boxed(lean_object* v_msgData_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_Lean_addMessageContextFull___at___00Lean_Meta_Match_Alt_toMessageData_spec__2(v_msgData_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_);
lean_dec(v___y_1120_);
lean_dec_ref(v___y_1119_);
lean_dec(v___y_1118_);
lean_dec_ref(v___y_1117_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_Match_Alt_toMessageData_spec__3___redArg(lean_object* v_decls_1123_, lean_object* v_x_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_){
_start:
{
lean_object* v___x_1130_; 
v___x_1130_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_box(0), v_decls_1123_, v_x_1124_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_);
if (lean_obj_tag(v___x_1130_) == 0)
{
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1138_; 
v_a_1131_ = lean_ctor_get(v___x_1130_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1133_ = v___x_1130_;
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___x_1130_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1136_; 
if (v_isShared_1134_ == 0)
{
v___x_1136_ = v___x_1133_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_a_1131_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
else
{
lean_object* v_a_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1146_; 
v_a_1139_ = lean_ctor_get(v___x_1130_, 0);
v_isSharedCheck_1146_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1146_ == 0)
{
v___x_1141_ = v___x_1130_;
v_isShared_1142_ = v_isSharedCheck_1146_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_a_1139_);
lean_dec(v___x_1130_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1146_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1144_; 
if (v_isShared_1142_ == 0)
{
v___x_1144_ = v___x_1141_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v_a_1139_);
v___x_1144_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
return v___x_1144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_Match_Alt_toMessageData_spec__3___redArg___boxed(lean_object* v_decls_1147_, lean_object* v_x_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_Match_Alt_toMessageData_spec__3___redArg(v_decls_1147_, v_x_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_);
lean_dec(v___y_1152_);
lean_dec_ref(v___y_1151_);
lean_dec(v___y_1150_);
lean_dec_ref(v___y_1149_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_Match_Alt_toMessageData_spec__3(lean_object* v_00_u03b1_1155_, lean_object* v_decls_1156_, lean_object* v_x_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_){
_start:
{
lean_object* v___x_1163_; 
v___x_1163_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_Match_Alt_toMessageData_spec__3___redArg(v_decls_1156_, v_x_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_Match_Alt_toMessageData_spec__3___boxed(lean_object* v_00_u03b1_1164_, lean_object* v_decls_1165_, lean_object* v_x_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_Match_Alt_toMessageData_spec__3(v_00_u03b1_1164_, v_decls_1165_, v_x_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_);
lean_dec(v___y_1170_);
lean_dec_ref(v___y_1169_);
lean_dec(v___y_1168_);
lean_dec_ref(v___y_1167_);
return v_res_1172_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1173_; 
v___x_1173_ = lean_mk_string_unchecked("\n  | ", 5, 5);
return v___x_1173_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1174_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__0, &l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__0);
v___x_1175_ = l_Lean_stringToMessageData(v___x_1174_);
return v___x_1175_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1176_; 
v___x_1176_ = lean_mk_string_unchecked(" ≋ ", 5, 3);
return v___x_1176_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__2, &l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__2);
v___x_1178_ = l_Lean_stringToMessageData(v___x_1177_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg(lean_object* v_as_x27_1179_, lean_object* v_b_1180_){
_start:
{
if (lean_obj_tag(v_as_x27_1179_) == 0)
{
lean_object* v___x_1182_; 
v___x_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1182_, 0, v_b_1180_);
return v___x_1182_;
}
else
{
lean_object* v_head_1183_; lean_object* v_tail_1184_; lean_object* v_fst_1185_; lean_object* v_snd_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; 
v_head_1183_ = lean_ctor_get(v_as_x27_1179_, 0);
v_tail_1184_ = lean_ctor_get(v_as_x27_1179_, 1);
v_fst_1185_ = lean_ctor_get(v_head_1183_, 0);
v_snd_1186_ = lean_ctor_get(v_head_1183_, 1);
v___x_1187_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__1, &l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__1);
v___x_1188_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1188_, 0, v_b_1180_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
lean_inc(v_fst_1185_);
v___x_1189_ = l_Lean_MessageData_ofExpr(v_fst_1185_);
v___x_1190_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1188_);
lean_ctor_set(v___x_1190_, 1, v___x_1189_);
v___x_1191_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__3, &l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___closed__3);
v___x_1192_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1190_);
lean_ctor_set(v___x_1192_, 1, v___x_1191_);
lean_inc(v_snd_1186_);
v___x_1193_ = l_Lean_MessageData_ofExpr(v_snd_1186_);
v___x_1194_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1192_);
lean_ctor_set(v___x_1194_, 1, v___x_1193_);
v_as_x27_1179_ = v_tail_1184_;
v_b_1180_ = v___x_1194_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg___boxed(lean_object* v_as_x27_1196_, lean_object* v_b_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg(v_as_x27_1196_, v_b_1197_);
lean_dec(v_as_x27_1196_);
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Alt_toMessageData___lam__0(lean_object* v_cnstrs_1200_, lean_object* v_msg_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
lean_object* v___x_1207_; lean_object* v_a_1208_; lean_object* v___x_1209_; 
v___x_1207_ = l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg(v_cnstrs_1200_, v_msg_1201_);
v_a_1208_ = lean_ctor_get(v___x_1207_, 0);
lean_inc(v_a_1208_);
lean_dec_ref(v___x_1207_);
v___x_1209_ = l_Lean_addMessageContextFull___at___00Lean_Meta_Match_Alt_toMessageData_spec__2(v_a_1208_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Alt_toMessageData___lam__0___boxed(lean_object* v_cnstrs_1210_, lean_object* v_msg_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_){
_start:
{
lean_object* v_res_1217_; 
v_res_1217_ = l_Lean_Meta_Match_Alt_toMessageData___lam__0(v_cnstrs_1210_, v_msg_1211_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_);
lean_dec(v___y_1215_);
lean_dec_ref(v___y_1214_);
lean_dec(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_dec(v_cnstrs_1210_);
return v_res_1217_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__0(lean_object* v_a_1218_, lean_object* v_a_1219_){
_start:
{
if (lean_obj_tag(v_a_1218_) == 0)
{
lean_object* v___x_1220_; 
v___x_1220_ = l_List_reverse___redArg(v_a_1219_);
return v___x_1220_;
}
else
{
lean_object* v_head_1221_; lean_object* v_tail_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1230_; 
v_head_1221_ = lean_ctor_get(v_a_1218_, 0);
v_tail_1222_ = lean_ctor_get(v_a_1218_, 1);
v_isSharedCheck_1230_ = !lean_is_exclusive(v_a_1218_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1224_ = v_a_1218_;
v_isShared_1225_ = v_isSharedCheck_1230_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_tail_1222_);
lean_inc(v_head_1221_);
lean_dec(v_a_1218_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1230_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1227_; 
if (v_isShared_1225_ == 0)
{
lean_ctor_set(v___x_1224_, 1, v_a_1219_);
v___x_1227_ = v___x_1224_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_head_1221_);
lean_ctor_set(v_reuseFailAlloc_1229_, 1, v_a_1219_);
v___x_1227_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
v_a_1218_ = v_tail_1222_;
v_a_1219_ = v___x_1227_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1231_; 
v___x_1231_ = lean_mk_string_unchecked(":(", 2, 2);
return v___x_1231_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1232_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4___closed__0, &l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4___closed__0_once, _init_l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4___closed__0);
v___x_1233_ = l_Lean_stringToMessageData(v___x_1232_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4(lean_object* v_a_1234_, lean_object* v_a_1235_){
_start:
{
if (lean_obj_tag(v_a_1234_) == 0)
{
lean_object* v___x_1236_; 
v___x_1236_ = l_List_reverse___redArg(v_a_1235_);
return v___x_1236_;
}
else
{
lean_object* v_head_1237_; lean_object* v_tail_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1255_; 
v_head_1237_ = lean_ctor_get(v_a_1234_, 0);
v_tail_1238_ = lean_ctor_get(v_a_1234_, 1);
v_isSharedCheck_1255_ = !lean_is_exclusive(v_a_1234_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1240_ = v_a_1234_;
v_isShared_1241_ = v_isSharedCheck_1255_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_tail_1238_);
lean_inc(v_head_1237_);
lean_dec(v_a_1234_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1255_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1252_; 
lean_inc(v_head_1237_);
v___x_1242_ = l_Lean_LocalDecl_toExpr(v_head_1237_);
v___x_1243_ = l_Lean_MessageData_ofExpr(v___x_1242_);
v___x_1244_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4___closed__1, &l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4___closed__1_once, _init_l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4___closed__1);
v___x_1245_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1243_);
lean_ctor_set(v___x_1245_, 1, v___x_1244_);
v___x_1246_ = l_Lean_LocalDecl_type(v_head_1237_);
lean_dec(v_head_1237_);
v___x_1247_ = l_Lean_MessageData_ofExpr(v___x_1246_);
v___x_1248_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1245_);
lean_ctor_set(v___x_1248_, 1, v___x_1247_);
v___x_1249_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__3, &l_Lean_Meta_Match_Pattern_toMessageData___closed__3_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__3);
v___x_1250_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1248_);
lean_ctor_set(v___x_1250_, 1, v___x_1249_);
if (v_isShared_1241_ == 0)
{
lean_ctor_set(v___x_1240_, 1, v_a_1235_);
lean_ctor_set(v___x_1240_, 0, v___x_1250_);
v___x_1252_ = v___x_1240_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v___x_1250_);
lean_ctor_set(v_reuseFailAlloc_1254_, 1, v_a_1235_);
v___x_1252_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
v_a_1234_ = v_tail_1238_;
v_a_1235_ = v___x_1252_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Match_Alt_toMessageData___closed__0(void){
_start:
{
lean_object* v___x_1256_; 
v___x_1256_ = lean_mk_string_unchecked("|- ", 3, 3);
return v___x_1256_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Alt_toMessageData___closed__1(void){
_start:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1257_ = lean_obj_once(&l_Lean_Meta_Match_Alt_toMessageData___closed__0, &l_Lean_Meta_Match_Alt_toMessageData___closed__0_once, _init_l_Lean_Meta_Match_Alt_toMessageData___closed__0);
v___x_1258_ = l_Lean_stringToMessageData(v___x_1257_);
return v___x_1258_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Alt_toMessageData___closed__2(void){
_start:
{
lean_object* v___x_1259_; 
v___x_1259_ = lean_mk_string_unchecked(" => ", 4, 4);
return v___x_1259_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Alt_toMessageData___closed__3(void){
_start:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = lean_obj_once(&l_Lean_Meta_Match_Alt_toMessageData___closed__2, &l_Lean_Meta_Match_Alt_toMessageData___closed__2_once, _init_l_Lean_Meta_Match_Alt_toMessageData___closed__2);
v___x_1261_ = l_Lean_stringToMessageData(v___x_1260_);
return v___x_1261_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Alt_toMessageData___closed__4(void){
_start:
{
lean_object* v___x_1262_; 
v___x_1262_ = lean_mk_string_unchecked("\n", 1, 1);
return v___x_1262_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Alt_toMessageData___closed__5(void){
_start:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1263_ = lean_obj_once(&l_Lean_Meta_Match_Alt_toMessageData___closed__4, &l_Lean_Meta_Match_Alt_toMessageData___closed__4_once, _init_l_Lean_Meta_Match_Alt_toMessageData___closed__4);
v___x_1264_ = l_Lean_stringToMessageData(v___x_1263_);
return v___x_1264_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Alt_toMessageData___closed__6(void){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = lean_mk_string_unchecked("", 0, 0);
return v___x_1265_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Alt_toMessageData___closed__7(void){
_start:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = lean_obj_once(&l_Lean_Meta_Match_Alt_toMessageData___closed__6, &l_Lean_Meta_Match_Alt_toMessageData___closed__6_once, _init_l_Lean_Meta_Match_Alt_toMessageData___closed__6);
v___x_1267_ = l_Lean_stringToMessageData(v___x_1266_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Alt_toMessageData(lean_object* v_alt_1268_, lean_object* v_a_1269_, lean_object* v_a_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_){
_start:
{
lean_object* v_rhs_1274_; lean_object* v_fvarDecls_1275_; lean_object* v_patterns_1276_; lean_object* v_cnstrs_1277_; lean_object* v___y_1279_; uint8_t v___x_1293_; 
v_rhs_1274_ = lean_ctor_get(v_alt_1268_, 2);
lean_inc_ref(v_rhs_1274_);
v_fvarDecls_1275_ = lean_ctor_get(v_alt_1268_, 3);
lean_inc(v_fvarDecls_1275_);
v_patterns_1276_ = lean_ctor_get(v_alt_1268_, 4);
lean_inc(v_patterns_1276_);
v_cnstrs_1277_ = lean_ctor_get(v_alt_1268_, 5);
lean_inc(v_cnstrs_1277_);
lean_dec_ref(v_alt_1268_);
v___x_1293_ = l_List_isEmpty___redArg(v_fvarDecls_1275_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1294_ = lean_box(0);
lean_inc(v_fvarDecls_1275_);
v___x_1295_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4(v_fvarDecls_1275_, v___x_1294_);
v___x_1296_ = l_Lean_MessageData_ofList(v___x_1295_);
v___x_1297_ = lean_obj_once(&l_Lean_Meta_Match_Alt_toMessageData___closed__5, &l_Lean_Meta_Match_Alt_toMessageData___closed__5_once, _init_l_Lean_Meta_Match_Alt_toMessageData___closed__5);
v___x_1298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1296_);
lean_ctor_set(v___x_1298_, 1, v___x_1297_);
v___y_1279_ = v___x_1298_;
goto v___jp_1278_;
}
else
{
lean_object* v___x_1299_; 
v___x_1299_ = lean_obj_once(&l_Lean_Meta_Match_Alt_toMessageData___closed__7, &l_Lean_Meta_Match_Alt_toMessageData___closed__7_once, _init_l_Lean_Meta_Match_Alt_toMessageData___closed__7);
v___y_1279_ = v___x_1299_;
goto v___jp_1278_;
}
v___jp_1278_:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v_msg_1290_; lean_object* v___f_1291_; lean_object* v___x_1292_; 
v___x_1280_ = lean_obj_once(&l_Lean_Meta_Match_Alt_toMessageData___closed__1, &l_Lean_Meta_Match_Alt_toMessageData___closed__1_once, _init_l_Lean_Meta_Match_Alt_toMessageData___closed__1);
v___x_1281_ = lean_box(0);
v___x_1282_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Pattern_toMessageData_spec__1(v_patterns_1276_, v___x_1281_);
v___x_1283_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__0(v___x_1282_, v___x_1281_);
v___x_1284_ = l_Lean_MessageData_ofList(v___x_1283_);
v___x_1285_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1280_);
lean_ctor_set(v___x_1285_, 1, v___x_1284_);
v___x_1286_ = lean_obj_once(&l_Lean_Meta_Match_Alt_toMessageData___closed__3, &l_Lean_Meta_Match_Alt_toMessageData___closed__3_once, _init_l_Lean_Meta_Match_Alt_toMessageData___closed__3);
v___x_1287_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1285_);
lean_ctor_set(v___x_1287_, 1, v___x_1286_);
v___x_1288_ = l_Lean_MessageData_ofExpr(v_rhs_1274_);
v___x_1289_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1287_);
lean_ctor_set(v___x_1289_, 1, v___x_1288_);
v_msg_1290_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msg_1290_, 0, v___y_1279_);
lean_ctor_set(v_msg_1290_, 1, v___x_1289_);
v___f_1291_ = lean_alloc_closure((void*)(l_Lean_Meta_Match_Alt_toMessageData___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1291_, 0, v_cnstrs_1277_);
lean_closure_set(v___f_1291_, 1, v_msg_1290_);
v___x_1292_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_Match_Alt_toMessageData_spec__3___redArg(v_fvarDecls_1275_, v___f_1291_, v_a_1269_, v_a_1270_, v_a_1271_, v_a_1272_);
return v___x_1292_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Alt_toMessageData___boxed(lean_object* v_alt_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_Lean_Meta_Match_Alt_toMessageData(v_alt_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_);
lean_dec(v_a_1304_);
lean_dec_ref(v_a_1303_);
lean_dec(v_a_1302_);
lean_dec_ref(v_a_1301_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1(lean_object* v_as_1307_, lean_object* v_as_x27_1308_, lean_object* v_b_1309_, lean_object* v_a_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_){
_start:
{
lean_object* v___x_1316_; 
v___x_1316_ = l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___redArg(v_as_x27_1308_, v_b_1309_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1___boxed(lean_object* v_as_1317_, lean_object* v_as_x27_1318_, lean_object* v_b_1319_, lean_object* v_a_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_){
_start:
{
lean_object* v_res_1326_; 
v_res_1326_ = l_List_forIn_x27_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__1(v_as_1317_, v_as_x27_1318_, v_b_1319_, v_a_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v___y_1321_);
lean_dec(v_as_x27_1318_);
lean_dec(v_as_1317_);
return v_res_1326_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_applyFVarSubst_spec__2(lean_object* v_s_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_){
_start:
{
if (lean_obj_tag(v_a_1328_) == 0)
{
lean_object* v___x_1330_; 
lean_dec(v_s_1327_);
v___x_1330_ = l_List_reverse___redArg(v_a_1329_);
return v___x_1330_;
}
else
{
lean_object* v_head_1331_; lean_object* v_tail_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1351_; 
v_head_1331_ = lean_ctor_get(v_a_1328_, 0);
v_tail_1332_ = lean_ctor_get(v_a_1328_, 1);
v_isSharedCheck_1351_ = !lean_is_exclusive(v_a_1328_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1334_ = v_a_1328_;
v_isShared_1335_ = v_isSharedCheck_1351_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_tail_1332_);
lean_inc(v_head_1331_);
lean_dec(v_a_1328_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1351_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v_fst_1336_; lean_object* v_snd_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1350_; 
v_fst_1336_ = lean_ctor_get(v_head_1331_, 0);
v_snd_1337_ = lean_ctor_get(v_head_1331_, 1);
v_isSharedCheck_1350_ = !lean_is_exclusive(v_head_1331_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1339_ = v_head_1331_;
v_isShared_1340_ = v_isSharedCheck_1350_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_snd_1337_);
lean_inc(v_fst_1336_);
lean_dec(v_head_1331_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1350_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1344_; 
lean_inc_n(v_s_1327_, 2);
v___x_1341_ = l_Lean_Meta_FVarSubst_apply(v_s_1327_, v_fst_1336_);
lean_dec(v_fst_1336_);
v___x_1342_ = l_Lean_Meta_FVarSubst_apply(v_s_1327_, v_snd_1337_);
lean_dec(v_snd_1337_);
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 1, v___x_1342_);
lean_ctor_set(v___x_1339_, 0, v___x_1341_);
v___x_1344_ = v___x_1339_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v___x_1341_);
lean_ctor_set(v_reuseFailAlloc_1349_, 1, v___x_1342_);
v___x_1344_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
lean_object* v___x_1346_; 
if (v_isShared_1335_ == 0)
{
lean_ctor_set(v___x_1334_, 1, v_a_1329_);
lean_ctor_set(v___x_1334_, 0, v___x_1344_);
v___x_1346_ = v___x_1334_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v___x_1344_);
lean_ctor_set(v_reuseFailAlloc_1348_, 1, v_a_1329_);
v___x_1346_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
v_a_1328_ = v_tail_1332_;
v_a_1329_ = v___x_1346_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_applyFVarSubst_spec__1(lean_object* v_s_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_){
_start:
{
if (lean_obj_tag(v_a_1353_) == 0)
{
lean_object* v___x_1355_; 
lean_dec(v_s_1352_);
v___x_1355_ = l_List_reverse___redArg(v_a_1354_);
return v___x_1355_;
}
else
{
lean_object* v_head_1356_; lean_object* v_tail_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1366_; 
v_head_1356_ = lean_ctor_get(v_a_1353_, 0);
v_tail_1357_ = lean_ctor_get(v_a_1353_, 1);
v_isSharedCheck_1366_ = !lean_is_exclusive(v_a_1353_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1359_ = v_a_1353_;
v_isShared_1360_ = v_isSharedCheck_1366_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_tail_1357_);
lean_inc(v_head_1356_);
lean_dec(v_a_1353_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1366_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1361_; lean_object* v___x_1363_; 
lean_inc(v_s_1352_);
v___x_1361_ = l_Lean_Meta_Match_Pattern_applyFVarSubst(v_s_1352_, v_head_1356_);
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 1, v_a_1354_);
lean_ctor_set(v___x_1359_, 0, v___x_1361_);
v___x_1363_ = v___x_1359_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v___x_1361_);
lean_ctor_set(v_reuseFailAlloc_1365_, 1, v_a_1354_);
v___x_1363_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
v_a_1353_ = v_tail_1357_;
v_a_1354_ = v___x_1363_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_applyFVarSubst_spec__0(lean_object* v_s_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_){
_start:
{
if (lean_obj_tag(v_a_1368_) == 0)
{
lean_object* v___x_1370_; 
lean_dec(v_s_1367_);
v___x_1370_ = l_List_reverse___redArg(v_a_1369_);
return v___x_1370_;
}
else
{
lean_object* v_head_1371_; lean_object* v_tail_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1381_; 
v_head_1371_ = lean_ctor_get(v_a_1368_, 0);
v_tail_1372_ = lean_ctor_get(v_a_1368_, 1);
v_isSharedCheck_1381_ = !lean_is_exclusive(v_a_1368_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1374_ = v_a_1368_;
v_isShared_1375_ = v_isSharedCheck_1381_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_tail_1372_);
lean_inc(v_head_1371_);
lean_dec(v_a_1368_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1381_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1376_; lean_object* v___x_1378_; 
lean_inc(v_s_1367_);
v___x_1376_ = l_Lean_LocalDecl_applyFVarSubst(v_s_1367_, v_head_1371_);
if (v_isShared_1375_ == 0)
{
lean_ctor_set(v___x_1374_, 1, v_a_1369_);
lean_ctor_set(v___x_1374_, 0, v___x_1376_);
v___x_1378_ = v___x_1374_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v___x_1376_);
lean_ctor_set(v_reuseFailAlloc_1380_, 1, v_a_1369_);
v___x_1378_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
v_a_1368_ = v_tail_1372_;
v_a_1369_ = v___x_1378_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Alt_applyFVarSubst(lean_object* v_s_1382_, lean_object* v_alt_1383_){
_start:
{
lean_object* v_ref_1384_; lean_object* v_idx_1385_; lean_object* v_rhs_1386_; lean_object* v_fvarDecls_1387_; lean_object* v_patterns_1388_; lean_object* v_cnstrs_1389_; lean_object* v_notAltIdxs_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1402_; 
v_ref_1384_ = lean_ctor_get(v_alt_1383_, 0);
v_idx_1385_ = lean_ctor_get(v_alt_1383_, 1);
v_rhs_1386_ = lean_ctor_get(v_alt_1383_, 2);
v_fvarDecls_1387_ = lean_ctor_get(v_alt_1383_, 3);
v_patterns_1388_ = lean_ctor_get(v_alt_1383_, 4);
v_cnstrs_1389_ = lean_ctor_get(v_alt_1383_, 5);
v_notAltIdxs_1390_ = lean_ctor_get(v_alt_1383_, 6);
v_isSharedCheck_1402_ = !lean_is_exclusive(v_alt_1383_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1392_ = v_alt_1383_;
v_isShared_1393_ = v_isSharedCheck_1402_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_notAltIdxs_1390_);
lean_inc(v_cnstrs_1389_);
lean_inc(v_patterns_1388_);
lean_inc(v_fvarDecls_1387_);
lean_inc(v_rhs_1386_);
lean_inc(v_idx_1385_);
lean_inc(v_ref_1384_);
lean_dec(v_alt_1383_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1402_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1400_; 
lean_inc_n(v_s_1382_, 3);
v___x_1394_ = l_Lean_Meta_FVarSubst_apply(v_s_1382_, v_rhs_1386_);
lean_dec_ref(v_rhs_1386_);
v___x_1395_ = lean_box(0);
v___x_1396_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_applyFVarSubst_spec__0(v_s_1382_, v_fvarDecls_1387_, v___x_1395_);
v___x_1397_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_applyFVarSubst_spec__1(v_s_1382_, v_patterns_1388_, v___x_1395_);
v___x_1398_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_applyFVarSubst_spec__2(v_s_1382_, v_cnstrs_1389_, v___x_1395_);
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 5, v___x_1398_);
lean_ctor_set(v___x_1392_, 4, v___x_1397_);
lean_ctor_set(v___x_1392_, 3, v___x_1396_);
lean_ctor_set(v___x_1392_, 2, v___x_1394_);
v___x_1400_ = v___x_1392_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v_ref_1384_);
lean_ctor_set(v_reuseFailAlloc_1401_, 1, v_idx_1385_);
lean_ctor_set(v_reuseFailAlloc_1401_, 2, v___x_1394_);
lean_ctor_set(v_reuseFailAlloc_1401_, 3, v___x_1396_);
lean_ctor_set(v_reuseFailAlloc_1401_, 4, v___x_1397_);
lean_ctor_set(v_reuseFailAlloc_1401_, 5, v___x_1398_);
lean_ctor_set(v_reuseFailAlloc_1401_, 6, v_notAltIdxs_1390_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__2(lean_object* v_fvarId_1403_, lean_object* v_v_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_){
_start:
{
if (lean_obj_tag(v_a_1405_) == 0)
{
lean_object* v___x_1407_; 
lean_dec_ref(v_v_1404_);
lean_dec(v_fvarId_1403_);
v___x_1407_ = l_List_reverse___redArg(v_a_1406_);
return v___x_1407_;
}
else
{
lean_object* v_head_1408_; lean_object* v_tail_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1418_; 
v_head_1408_ = lean_ctor_get(v_a_1405_, 0);
v_tail_1409_ = lean_ctor_get(v_a_1405_, 1);
v_isSharedCheck_1418_ = !lean_is_exclusive(v_a_1405_);
if (v_isSharedCheck_1418_ == 0)
{
v___x_1411_ = v_a_1405_;
v_isShared_1412_ = v_isSharedCheck_1418_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_tail_1409_);
lean_inc(v_head_1408_);
lean_dec(v_a_1405_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1418_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1413_; lean_object* v___x_1415_; 
lean_inc_ref(v_v_1404_);
lean_inc(v_fvarId_1403_);
v___x_1413_ = l_Lean_Meta_Match_Pattern_replaceFVarId(v_fvarId_1403_, v_v_1404_, v_head_1408_);
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 1, v_a_1406_);
lean_ctor_set(v___x_1411_, 0, v___x_1413_);
v___x_1415_ = v___x_1411_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v___x_1413_);
lean_ctor_set(v_reuseFailAlloc_1417_, 1, v_a_1406_);
v___x_1415_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
v_a_1405_ = v_tail_1409_;
v_a_1406_ = v___x_1415_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__3(lean_object* v_fvarId_1419_, lean_object* v_v_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_){
_start:
{
if (lean_obj_tag(v_a_1421_) == 0)
{
lean_object* v___x_1423_; 
lean_dec(v_fvarId_1419_);
v___x_1423_ = l_List_reverse___redArg(v_a_1422_);
return v___x_1423_;
}
else
{
lean_object* v_head_1424_; lean_object* v_tail_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1444_; 
v_head_1424_ = lean_ctor_get(v_a_1421_, 0);
v_tail_1425_ = lean_ctor_get(v_a_1421_, 1);
v_isSharedCheck_1444_ = !lean_is_exclusive(v_a_1421_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1427_ = v_a_1421_;
v_isShared_1428_ = v_isSharedCheck_1444_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_tail_1425_);
lean_inc(v_head_1424_);
lean_dec(v_a_1421_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1444_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v_fst_1429_; lean_object* v_snd_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1443_; 
v_fst_1429_ = lean_ctor_get(v_head_1424_, 0);
v_snd_1430_ = lean_ctor_get(v_head_1424_, 1);
v_isSharedCheck_1443_ = !lean_is_exclusive(v_head_1424_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1432_ = v_head_1424_;
v_isShared_1433_ = v_isSharedCheck_1443_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_snd_1430_);
lean_inc(v_fst_1429_);
lean_dec(v_head_1424_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1443_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1437_; 
lean_inc_n(v_fvarId_1419_, 2);
v___x_1434_ = l_Lean_Expr_replaceFVarId(v_fst_1429_, v_fvarId_1419_, v_v_1420_);
lean_dec(v_fst_1429_);
v___x_1435_ = l_Lean_Expr_replaceFVarId(v_snd_1430_, v_fvarId_1419_, v_v_1420_);
lean_dec(v_snd_1430_);
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 1, v___x_1435_);
lean_ctor_set(v___x_1432_, 0, v___x_1434_);
v___x_1437_ = v___x_1432_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v___x_1434_);
lean_ctor_set(v_reuseFailAlloc_1442_, 1, v___x_1435_);
v___x_1437_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
lean_object* v___x_1439_; 
if (v_isShared_1428_ == 0)
{
lean_ctor_set(v___x_1427_, 1, v_a_1422_);
lean_ctor_set(v___x_1427_, 0, v___x_1437_);
v___x_1439_ = v___x_1427_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v___x_1437_);
lean_ctor_set(v_reuseFailAlloc_1441_, 1, v_a_1422_);
v___x_1439_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
v_a_1421_ = v_tail_1425_;
v_a_1422_ = v___x_1439_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__3___boxed(lean_object* v_fvarId_1445_, lean_object* v_v_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__3(v_fvarId_1445_, v_v_1446_, v_a_1447_, v_a_1448_);
lean_dec_ref(v_v_1446_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__0(lean_object* v_fvarId_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_){
_start:
{
if (lean_obj_tag(v_a_1451_) == 0)
{
lean_object* v___x_1453_; 
v___x_1453_ = l_List_reverse___redArg(v_a_1452_);
return v___x_1453_;
}
else
{
lean_object* v_head_1454_; lean_object* v_tail_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1466_; 
v_head_1454_ = lean_ctor_get(v_a_1451_, 0);
v_tail_1455_ = lean_ctor_get(v_a_1451_, 1);
v_isSharedCheck_1466_ = !lean_is_exclusive(v_a_1451_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1457_ = v_a_1451_;
v_isShared_1458_ = v_isSharedCheck_1466_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_tail_1455_);
lean_inc(v_head_1454_);
lean_dec(v_a_1451_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1466_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1459_; uint8_t v___x_1460_; 
v___x_1459_ = l_Lean_LocalDecl_fvarId(v_head_1454_);
v___x_1460_ = l_Lean_instBEqFVarId_beq(v___x_1459_, v_fvarId_1450_);
lean_dec(v___x_1459_);
if (v___x_1460_ == 0)
{
lean_object* v___x_1462_; 
if (v_isShared_1458_ == 0)
{
lean_ctor_set(v___x_1457_, 1, v_a_1452_);
v___x_1462_ = v___x_1457_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_head_1454_);
lean_ctor_set(v_reuseFailAlloc_1464_, 1, v_a_1452_);
v___x_1462_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
v_a_1451_ = v_tail_1455_;
v_a_1452_ = v___x_1462_;
goto _start;
}
}
else
{
lean_del_object(v___x_1457_);
lean_dec(v_head_1454_);
v_a_1451_ = v_tail_1455_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__0___boxed(lean_object* v_fvarId_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l_List_filterTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__0(v_fvarId_1467_, v_a_1468_, v_a_1469_);
lean_dec(v_fvarId_1467_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__1(lean_object* v_fvarId_1471_, lean_object* v_v_1472_, lean_object* v_a_1473_, lean_object* v_a_1474_){
_start:
{
if (lean_obj_tag(v_a_1473_) == 0)
{
lean_object* v___x_1475_; 
lean_dec(v_fvarId_1471_);
v___x_1475_ = l_List_reverse___redArg(v_a_1474_);
return v___x_1475_;
}
else
{
lean_object* v_head_1476_; lean_object* v_tail_1477_; lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1486_; 
v_head_1476_ = lean_ctor_get(v_a_1473_, 0);
v_tail_1477_ = lean_ctor_get(v_a_1473_, 1);
v_isSharedCheck_1486_ = !lean_is_exclusive(v_a_1473_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1479_ = v_a_1473_;
v_isShared_1480_ = v_isSharedCheck_1486_;
goto v_resetjp_1478_;
}
else
{
lean_inc(v_tail_1477_);
lean_inc(v_head_1476_);
lean_dec(v_a_1473_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1486_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
lean_object* v___x_1481_; lean_object* v___x_1483_; 
lean_inc(v_fvarId_1471_);
v___x_1481_ = l_Lean_LocalDecl_replaceFVarId(v_fvarId_1471_, v_v_1472_, v_head_1476_);
if (v_isShared_1480_ == 0)
{
lean_ctor_set(v___x_1479_, 1, v_a_1474_);
lean_ctor_set(v___x_1479_, 0, v___x_1481_);
v___x_1483_ = v___x_1479_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v___x_1481_);
lean_ctor_set(v_reuseFailAlloc_1485_, 1, v_a_1474_);
v___x_1483_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
v_a_1473_ = v_tail_1477_;
v_a_1474_ = v___x_1483_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__1___boxed(lean_object* v_fvarId_1487_, lean_object* v_v_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__1(v_fvarId_1487_, v_v_1488_, v_a_1489_, v_a_1490_);
lean_dec_ref(v_v_1488_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Alt_replaceFVarId(lean_object* v_fvarId_1492_, lean_object* v_v_1493_, lean_object* v_alt_1494_){
_start:
{
lean_object* v_ref_1495_; lean_object* v_idx_1496_; lean_object* v_rhs_1497_; lean_object* v_fvarDecls_1498_; lean_object* v_patterns_1499_; lean_object* v_cnstrs_1500_; lean_object* v_notAltIdxs_1501_; lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1514_; 
v_ref_1495_ = lean_ctor_get(v_alt_1494_, 0);
v_idx_1496_ = lean_ctor_get(v_alt_1494_, 1);
v_rhs_1497_ = lean_ctor_get(v_alt_1494_, 2);
v_fvarDecls_1498_ = lean_ctor_get(v_alt_1494_, 3);
v_patterns_1499_ = lean_ctor_get(v_alt_1494_, 4);
v_cnstrs_1500_ = lean_ctor_get(v_alt_1494_, 5);
v_notAltIdxs_1501_ = lean_ctor_get(v_alt_1494_, 6);
v_isSharedCheck_1514_ = !lean_is_exclusive(v_alt_1494_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1503_ = v_alt_1494_;
v_isShared_1504_ = v_isSharedCheck_1514_;
goto v_resetjp_1502_;
}
else
{
lean_inc(v_notAltIdxs_1501_);
lean_inc(v_cnstrs_1500_);
lean_inc(v_patterns_1499_);
lean_inc(v_fvarDecls_1498_);
lean_inc(v_rhs_1497_);
lean_inc(v_idx_1496_);
lean_inc(v_ref_1495_);
lean_dec(v_alt_1494_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1514_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v_decls_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1512_; 
lean_inc_n(v_fvarId_1492_, 3);
v___x_1505_ = l_Lean_Expr_replaceFVarId(v_rhs_1497_, v_fvarId_1492_, v_v_1493_);
lean_dec_ref(v_rhs_1497_);
v___x_1506_ = lean_box(0);
v_decls_1507_ = l_List_filterTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__0(v_fvarId_1492_, v_fvarDecls_1498_, v___x_1506_);
v___x_1508_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__1(v_fvarId_1492_, v_v_1493_, v_decls_1507_, v___x_1506_);
lean_inc_ref(v_v_1493_);
v___x_1509_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__2(v_fvarId_1492_, v_v_1493_, v_patterns_1499_, v___x_1506_);
v___x_1510_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_replaceFVarId_spec__3(v_fvarId_1492_, v_v_1493_, v_cnstrs_1500_, v___x_1506_);
lean_dec_ref(v_v_1493_);
if (v_isShared_1504_ == 0)
{
lean_ctor_set(v___x_1503_, 5, v___x_1510_);
lean_ctor_set(v___x_1503_, 4, v___x_1509_);
lean_ctor_set(v___x_1503_, 3, v___x_1508_);
lean_ctor_set(v___x_1503_, 2, v___x_1505_);
v___x_1512_ = v___x_1503_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_ref_1495_);
lean_ctor_set(v_reuseFailAlloc_1513_, 1, v_idx_1496_);
lean_ctor_set(v_reuseFailAlloc_1513_, 2, v___x_1505_);
lean_ctor_set(v_reuseFailAlloc_1513_, 3, v___x_1508_);
lean_ctor_set(v_reuseFailAlloc_1513_, 4, v___x_1509_);
lean_ctor_set(v_reuseFailAlloc_1513_, 5, v___x_1510_);
lean_ctor_set(v_reuseFailAlloc_1513_, 6, v_notAltIdxs_1501_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Meta_Match_Alt_isLocalDecl_spec__0(lean_object* v_fvarId_1515_, lean_object* v_x_1516_){
_start:
{
if (lean_obj_tag(v_x_1516_) == 0)
{
uint8_t v___x_1517_; 
v___x_1517_ = 0;
return v___x_1517_;
}
else
{
lean_object* v_head_1518_; lean_object* v_tail_1519_; lean_object* v___x_1520_; uint8_t v___x_1521_; 
v_head_1518_ = lean_ctor_get(v_x_1516_, 0);
v_tail_1519_ = lean_ctor_get(v_x_1516_, 1);
v___x_1520_ = l_Lean_LocalDecl_fvarId(v_head_1518_);
v___x_1521_ = l_Lean_instBEqFVarId_beq(v___x_1520_, v_fvarId_1515_);
lean_dec(v___x_1520_);
if (v___x_1521_ == 0)
{
v_x_1516_ = v_tail_1519_;
goto _start;
}
else
{
return v___x_1521_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Meta_Match_Alt_isLocalDecl_spec__0___boxed(lean_object* v_fvarId_1523_, lean_object* v_x_1524_){
_start:
{
uint8_t v_res_1525_; lean_object* v_r_1526_; 
v_res_1525_ = l_List_any___at___00Lean_Meta_Match_Alt_isLocalDecl_spec__0(v_fvarId_1523_, v_x_1524_);
lean_dec(v_x_1524_);
lean_dec(v_fvarId_1523_);
v_r_1526_ = lean_box(v_res_1525_);
return v_r_1526_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Match_Alt_isLocalDecl(lean_object* v_fvarId_1527_, lean_object* v_alt_1528_){
_start:
{
lean_object* v_fvarDecls_1529_; uint8_t v___x_1530_; 
v_fvarDecls_1529_ = lean_ctor_get(v_alt_1528_, 3);
v___x_1530_ = l_List_any___at___00Lean_Meta_Match_Alt_isLocalDecl_spec__0(v_fvarId_1527_, v_fvarDecls_1529_);
return v___x_1530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Alt_isLocalDecl___boxed(lean_object* v_fvarId_1531_, lean_object* v_alt_1532_){
_start:
{
uint8_t v_res_1533_; lean_object* v_r_1534_; 
v_res_1533_ = l_Lean_Meta_Match_Alt_isLocalDecl(v_fvarId_1531_, v_alt_1532_);
lean_dec_ref(v_alt_1532_);
lean_dec(v_fvarId_1531_);
v_r_1534_ = lean_box(v_res_1533_);
return v_r_1534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_ctorIdx(lean_object* v_x_1535_){
_start:
{
switch(lean_obj_tag(v_x_1535_))
{
case 0:
{
lean_object* v___x_1536_; 
v___x_1536_ = lean_unsigned_to_nat(0u);
return v___x_1536_;
}
case 1:
{
lean_object* v___x_1537_; 
v___x_1537_ = lean_unsigned_to_nat(1u);
return v___x_1537_;
}
case 2:
{
lean_object* v___x_1538_; 
v___x_1538_ = lean_unsigned_to_nat(2u);
return v___x_1538_;
}
case 3:
{
lean_object* v___x_1539_; 
v___x_1539_ = lean_unsigned_to_nat(3u);
return v___x_1539_;
}
default: 
{
lean_object* v___x_1540_; 
v___x_1540_ = lean_unsigned_to_nat(4u);
return v___x_1540_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_ctorIdx___boxed(lean_object* v_x_1541_){
_start:
{
lean_object* v_res_1542_; 
v_res_1542_ = l_Lean_Meta_Match_Example_ctorIdx(v_x_1541_);
lean_dec(v_x_1541_);
return v_res_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_ctorElim___redArg(lean_object* v_t_1543_, lean_object* v_k_1544_){
_start:
{
switch(lean_obj_tag(v_t_1543_))
{
case 1:
{
return v_k_1544_;
}
case 2:
{
lean_object* v_a_1545_; lean_object* v_a_1546_; lean_object* v___x_1547_; 
v_a_1545_ = lean_ctor_get(v_t_1543_, 0);
lean_inc(v_a_1545_);
v_a_1546_ = lean_ctor_get(v_t_1543_, 1);
lean_inc(v_a_1546_);
lean_dec_ref(v_t_1543_);
v___x_1547_ = lean_apply_2(v_k_1544_, v_a_1545_, v_a_1546_);
return v___x_1547_;
}
case 3:
{
lean_object* v_a_1548_; lean_object* v___x_1549_; 
v_a_1548_ = lean_ctor_get(v_t_1543_, 0);
lean_inc_ref(v_a_1548_);
lean_dec_ref(v_t_1543_);
v___x_1549_ = lean_apply_1(v_k_1544_, v_a_1548_);
return v___x_1549_;
}
default: 
{
lean_object* v_a_1550_; lean_object* v___x_1551_; 
v_a_1550_ = lean_ctor_get(v_t_1543_, 0);
lean_inc(v_a_1550_);
lean_dec(v_t_1543_);
v___x_1551_ = lean_apply_1(v_k_1544_, v_a_1550_);
return v___x_1551_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_ctorElim(lean_object* v_motive__1_1552_, lean_object* v_ctorIdx_1553_, lean_object* v_t_1554_, lean_object* v_h_1555_, lean_object* v_k_1556_){
_start:
{
lean_object* v___x_1557_; 
v___x_1557_ = l_Lean_Meta_Match_Example_ctorElim___redArg(v_t_1554_, v_k_1556_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_ctorElim___boxed(lean_object* v_motive__1_1558_, lean_object* v_ctorIdx_1559_, lean_object* v_t_1560_, lean_object* v_h_1561_, lean_object* v_k_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_Lean_Meta_Match_Example_ctorElim(v_motive__1_1558_, v_ctorIdx_1559_, v_t_1560_, v_h_1561_, v_k_1562_);
lean_dec(v_ctorIdx_1559_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_var_elim___redArg(lean_object* v_t_1564_, lean_object* v_var_1565_){
_start:
{
lean_object* v___x_1566_; 
v___x_1566_ = l_Lean_Meta_Match_Example_ctorElim___redArg(v_t_1564_, v_var_1565_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_var_elim(lean_object* v_motive__1_1567_, lean_object* v_t_1568_, lean_object* v_h_1569_, lean_object* v_var_1570_){
_start:
{
lean_object* v___x_1571_; 
v___x_1571_ = l_Lean_Meta_Match_Example_ctorElim___redArg(v_t_1568_, v_var_1570_);
return v___x_1571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_underscore_elim___redArg(lean_object* v_t_1572_, lean_object* v_underscore_1573_){
_start:
{
lean_object* v___x_1574_; 
v___x_1574_ = l_Lean_Meta_Match_Example_ctorElim___redArg(v_t_1572_, v_underscore_1573_);
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_underscore_elim(lean_object* v_motive__1_1575_, lean_object* v_t_1576_, lean_object* v_h_1577_, lean_object* v_underscore_1578_){
_start:
{
lean_object* v___x_1579_; 
v___x_1579_ = l_Lean_Meta_Match_Example_ctorElim___redArg(v_t_1576_, v_underscore_1578_);
return v___x_1579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_ctor_elim___redArg(lean_object* v_t_1580_, lean_object* v_ctor_1581_){
_start:
{
lean_object* v___x_1582_; 
v___x_1582_ = l_Lean_Meta_Match_Example_ctorElim___redArg(v_t_1580_, v_ctor_1581_);
return v___x_1582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_ctor_elim(lean_object* v_motive__1_1583_, lean_object* v_t_1584_, lean_object* v_h_1585_, lean_object* v_ctor_1586_){
_start:
{
lean_object* v___x_1587_; 
v___x_1587_ = l_Lean_Meta_Match_Example_ctorElim___redArg(v_t_1584_, v_ctor_1586_);
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_val_elim___redArg(lean_object* v_t_1588_, lean_object* v_val_1589_){
_start:
{
lean_object* v___x_1590_; 
v___x_1590_ = l_Lean_Meta_Match_Example_ctorElim___redArg(v_t_1588_, v_val_1589_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_val_elim(lean_object* v_motive__1_1591_, lean_object* v_t_1592_, lean_object* v_h_1593_, lean_object* v_val_1594_){
_start:
{
lean_object* v___x_1595_; 
v___x_1595_ = l_Lean_Meta_Match_Example_ctorElim___redArg(v_t_1592_, v_val_1594_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_arrayLit_elim___redArg(lean_object* v_t_1596_, lean_object* v_arrayLit_1597_){
_start:
{
lean_object* v___x_1598_; 
v___x_1598_ = l_Lean_Meta_Match_Example_ctorElim___redArg(v_t_1596_, v_arrayLit_1597_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_arrayLit_elim(lean_object* v_motive__1_1599_, lean_object* v_t_1600_, lean_object* v_h_1601_, lean_object* v_arrayLit_1602_){
_start:
{
lean_object* v___x_1603_; 
v___x_1603_ = l_Lean_Meta_Match_Example_ctorElim___redArg(v_t_1600_, v_arrayLit_1602_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_replaceFVarId(lean_object* v_fvarId_1604_, lean_object* v_ex_1605_, lean_object* v_x_1606_){
_start:
{
switch(lean_obj_tag(v_x_1606_))
{
case 0:
{
lean_object* v_a_1607_; uint8_t v___x_1608_; 
v_a_1607_ = lean_ctor_get(v_x_1606_, 0);
v___x_1608_ = l_Lean_instBEqFVarId_beq(v_a_1607_, v_fvarId_1604_);
if (v___x_1608_ == 0)
{
return v_x_1606_;
}
else
{
lean_dec_ref(v_x_1606_);
lean_inc(v_ex_1605_);
return v_ex_1605_;
}
}
case 2:
{
lean_object* v_a_1609_; lean_object* v_a_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1619_; 
v_a_1609_ = lean_ctor_get(v_x_1606_, 0);
v_a_1610_ = lean_ctor_get(v_x_1606_, 1);
v_isSharedCheck_1619_ = !lean_is_exclusive(v_x_1606_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1612_ = v_x_1606_;
v_isShared_1613_ = v_isSharedCheck_1619_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_a_1610_);
lean_inc(v_a_1609_);
lean_dec(v_x_1606_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1619_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1617_; 
v___x_1614_ = lean_box(0);
v___x_1615_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Example_replaceFVarId_spec__0(v_fvarId_1604_, v_ex_1605_, v_a_1610_, v___x_1614_);
if (v_isShared_1613_ == 0)
{
lean_ctor_set(v___x_1612_, 1, v___x_1615_);
v___x_1617_ = v___x_1612_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v_a_1609_);
lean_ctor_set(v_reuseFailAlloc_1618_, 1, v___x_1615_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
}
case 4:
{
lean_object* v_a_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1629_; 
v_a_1620_ = lean_ctor_get(v_x_1606_, 0);
v_isSharedCheck_1629_ = !lean_is_exclusive(v_x_1606_);
if (v_isSharedCheck_1629_ == 0)
{
v___x_1622_ = v_x_1606_;
v_isShared_1623_ = v_isSharedCheck_1629_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_a_1620_);
lean_dec(v_x_1606_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1629_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1627_; 
v___x_1624_ = lean_box(0);
v___x_1625_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Example_replaceFVarId_spec__0(v_fvarId_1604_, v_ex_1605_, v_a_1620_, v___x_1624_);
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 0, v___x_1625_);
v___x_1627_ = v___x_1622_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v___x_1625_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
}
default: 
{
return v_x_1606_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Example_replaceFVarId_spec__0(lean_object* v_fvarId_1630_, lean_object* v_ex_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_){
_start:
{
if (lean_obj_tag(v_a_1632_) == 0)
{
lean_object* v___x_1634_; 
v___x_1634_ = l_List_reverse___redArg(v_a_1633_);
return v___x_1634_;
}
else
{
lean_object* v_head_1635_; lean_object* v_tail_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1645_; 
v_head_1635_ = lean_ctor_get(v_a_1632_, 0);
v_tail_1636_ = lean_ctor_get(v_a_1632_, 1);
v_isSharedCheck_1645_ = !lean_is_exclusive(v_a_1632_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1638_ = v_a_1632_;
v_isShared_1639_ = v_isSharedCheck_1645_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_tail_1636_);
lean_inc(v_head_1635_);
lean_dec(v_a_1632_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1645_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1640_; lean_object* v___x_1642_; 
v___x_1640_ = l_Lean_Meta_Match_Example_replaceFVarId(v_fvarId_1630_, v_ex_1631_, v_head_1635_);
if (v_isShared_1639_ == 0)
{
lean_ctor_set(v___x_1638_, 1, v_a_1633_);
lean_ctor_set(v___x_1638_, 0, v___x_1640_);
v___x_1642_ = v___x_1638_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v___x_1640_);
lean_ctor_set(v_reuseFailAlloc_1644_, 1, v_a_1633_);
v___x_1642_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
v_a_1632_ = v_tail_1636_;
v_a_1633_ = v___x_1642_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Example_replaceFVarId_spec__0___boxed(lean_object* v_fvarId_1646_, lean_object* v_ex_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Example_replaceFVarId_spec__0(v_fvarId_1646_, v_ex_1647_, v_a_1648_, v_a_1649_);
lean_dec(v_ex_1647_);
lean_dec(v_fvarId_1646_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_replaceFVarId___boxed(lean_object* v_fvarId_1651_, lean_object* v_ex_1652_, lean_object* v_x_1653_){
_start:
{
lean_object* v_res_1654_; 
v_res_1654_ = l_Lean_Meta_Match_Example_replaceFVarId(v_fvarId_1651_, v_ex_1652_, v_x_1653_);
lean_dec(v_ex_1652_);
lean_dec(v_fvarId_1651_);
return v_res_1654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_applyFVarSubst(lean_object* v_s_1655_, lean_object* v_x_1656_){
_start:
{
switch(lean_obj_tag(v_x_1656_))
{
case 0:
{
lean_object* v_a_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1667_; 
v_a_1657_ = lean_ctor_get(v_x_1656_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v_x_1656_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1659_ = v_x_1656_;
v_isShared_1660_ = v_isSharedCheck_1667_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_a_1657_);
lean_dec(v_x_1656_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1667_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1661_; 
v___x_1661_ = l_Lean_Meta_FVarSubst_get(v_s_1655_, v_a_1657_);
if (lean_obj_tag(v___x_1661_) == 1)
{
lean_object* v_fvarId_1662_; lean_object* v___x_1664_; 
v_fvarId_1662_ = lean_ctor_get(v___x_1661_, 0);
lean_inc(v_fvarId_1662_);
lean_dec_ref(v___x_1661_);
if (v_isShared_1660_ == 0)
{
lean_ctor_set(v___x_1659_, 0, v_fvarId_1662_);
v___x_1664_ = v___x_1659_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_fvarId_1662_);
v___x_1664_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
return v___x_1664_;
}
}
else
{
lean_object* v___x_1666_; 
lean_dec_ref(v___x_1661_);
lean_del_object(v___x_1659_);
v___x_1666_ = lean_box(1);
return v___x_1666_;
}
}
}
case 2:
{
lean_object* v_a_1668_; lean_object* v_a_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1678_; 
v_a_1668_ = lean_ctor_get(v_x_1656_, 0);
v_a_1669_ = lean_ctor_get(v_x_1656_, 1);
v_isSharedCheck_1678_ = !lean_is_exclusive(v_x_1656_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1671_ = v_x_1656_;
v_isShared_1672_ = v_isSharedCheck_1678_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_a_1669_);
lean_inc(v_a_1668_);
lean_dec(v_x_1656_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1678_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1676_; 
v___x_1673_ = lean_box(0);
v___x_1674_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Example_applyFVarSubst_spec__0(v_s_1655_, v_a_1669_, v___x_1673_);
if (v_isShared_1672_ == 0)
{
lean_ctor_set(v___x_1671_, 1, v___x_1674_);
v___x_1676_ = v___x_1671_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_a_1668_);
lean_ctor_set(v_reuseFailAlloc_1677_, 1, v___x_1674_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
return v___x_1676_;
}
}
}
case 4:
{
lean_object* v_a_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1688_; 
v_a_1679_ = lean_ctor_get(v_x_1656_, 0);
v_isSharedCheck_1688_ = !lean_is_exclusive(v_x_1656_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1681_ = v_x_1656_;
v_isShared_1682_ = v_isSharedCheck_1688_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_a_1679_);
lean_dec(v_x_1656_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1688_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1686_; 
v___x_1683_ = lean_box(0);
v___x_1684_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Example_applyFVarSubst_spec__0(v_s_1655_, v_a_1679_, v___x_1683_);
if (v_isShared_1682_ == 0)
{
lean_ctor_set(v___x_1681_, 0, v___x_1684_);
v___x_1686_ = v___x_1681_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v___x_1684_);
v___x_1686_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
return v___x_1686_;
}
}
}
default: 
{
return v_x_1656_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Example_applyFVarSubst_spec__0(lean_object* v_s_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_){
_start:
{
if (lean_obj_tag(v_a_1690_) == 0)
{
lean_object* v___x_1692_; 
v___x_1692_ = l_List_reverse___redArg(v_a_1691_);
return v___x_1692_;
}
else
{
lean_object* v_head_1693_; lean_object* v_tail_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1703_; 
v_head_1693_ = lean_ctor_get(v_a_1690_, 0);
v_tail_1694_ = lean_ctor_get(v_a_1690_, 1);
v_isSharedCheck_1703_ = !lean_is_exclusive(v_a_1690_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1696_ = v_a_1690_;
v_isShared_1697_ = v_isSharedCheck_1703_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_tail_1694_);
lean_inc(v_head_1693_);
lean_dec(v_a_1690_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1703_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1698_; lean_object* v___x_1700_; 
v___x_1698_ = l_Lean_Meta_Match_Example_applyFVarSubst(v_s_1689_, v_head_1693_);
if (v_isShared_1697_ == 0)
{
lean_ctor_set(v___x_1696_, 1, v_a_1691_);
lean_ctor_set(v___x_1696_, 0, v___x_1698_);
v___x_1700_ = v___x_1696_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v___x_1698_);
lean_ctor_set(v_reuseFailAlloc_1702_, 1, v_a_1691_);
v___x_1700_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
v_a_1690_ = v_tail_1694_;
v_a_1691_ = v___x_1700_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Example_applyFVarSubst_spec__0___boxed(lean_object* v_s_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Example_applyFVarSubst_spec__0(v_s_1704_, v_a_1705_, v_a_1706_);
lean_dec(v_s_1704_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_applyFVarSubst___boxed(lean_object* v_s_1708_, lean_object* v_x_1709_){
_start:
{
lean_object* v_res_1710_; 
v_res_1710_ = l_Lean_Meta_Match_Example_applyFVarSubst(v_s_1708_, v_x_1709_);
lean_dec(v_s_1708_);
return v_res_1710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_varsToUnderscore(lean_object* v_x_1711_){
_start:
{
switch(lean_obj_tag(v_x_1711_))
{
case 0:
{
lean_object* v___x_1712_; 
lean_dec_ref(v_x_1711_);
v___x_1712_ = lean_box(1);
return v___x_1712_;
}
case 2:
{
lean_object* v_a_1713_; lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1723_; 
v_a_1713_ = lean_ctor_get(v_x_1711_, 0);
v_a_1714_ = lean_ctor_get(v_x_1711_, 1);
v_isSharedCheck_1723_ = !lean_is_exclusive(v_x_1711_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1716_ = v_x_1711_;
v_isShared_1717_ = v_isSharedCheck_1723_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_inc(v_a_1713_);
lean_dec(v_x_1711_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1723_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1721_; 
v___x_1718_ = lean_box(0);
v___x_1719_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Example_varsToUnderscore_spec__0(v_a_1714_, v___x_1718_);
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 1, v___x_1719_);
v___x_1721_ = v___x_1716_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v_a_1713_);
lean_ctor_set(v_reuseFailAlloc_1722_, 1, v___x_1719_);
v___x_1721_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
return v___x_1721_;
}
}
}
case 4:
{
lean_object* v_a_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1733_; 
v_a_1724_ = lean_ctor_get(v_x_1711_, 0);
v_isSharedCheck_1733_ = !lean_is_exclusive(v_x_1711_);
if (v_isSharedCheck_1733_ == 0)
{
v___x_1726_ = v_x_1711_;
v_isShared_1727_ = v_isSharedCheck_1733_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_a_1724_);
lean_dec(v_x_1711_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1733_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1731_; 
v___x_1728_ = lean_box(0);
v___x_1729_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Example_varsToUnderscore_spec__0(v_a_1724_, v___x_1728_);
if (v_isShared_1727_ == 0)
{
lean_ctor_set(v___x_1726_, 0, v___x_1729_);
v___x_1731_ = v___x_1726_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v___x_1729_);
v___x_1731_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
return v___x_1731_;
}
}
}
default: 
{
return v_x_1711_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Example_varsToUnderscore_spec__0(lean_object* v_a_1734_, lean_object* v_a_1735_){
_start:
{
if (lean_obj_tag(v_a_1734_) == 0)
{
lean_object* v___x_1736_; 
v___x_1736_ = l_List_reverse___redArg(v_a_1735_);
return v___x_1736_;
}
else
{
lean_object* v_head_1737_; lean_object* v_tail_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1747_; 
v_head_1737_ = lean_ctor_get(v_a_1734_, 0);
v_tail_1738_ = lean_ctor_get(v_a_1734_, 1);
v_isSharedCheck_1747_ = !lean_is_exclusive(v_a_1734_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1740_ = v_a_1734_;
v_isShared_1741_ = v_isSharedCheck_1747_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_tail_1738_);
lean_inc(v_head_1737_);
lean_dec(v_a_1734_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1747_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1742_; lean_object* v___x_1744_; 
v___x_1742_ = l_Lean_Meta_Match_Example_varsToUnderscore(v_head_1737_);
if (v_isShared_1741_ == 0)
{
lean_ctor_set(v___x_1740_, 1, v_a_1735_);
lean_ctor_set(v___x_1740_, 0, v___x_1742_);
v___x_1744_ = v___x_1740_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v___x_1742_);
lean_ctor_set(v_reuseFailAlloc_1746_, 1, v_a_1735_);
v___x_1744_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
v_a_1734_ = v_tail_1738_;
v_a_1735_ = v___x_1744_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Match_Example_toMessageData___closed__0(void){
_start:
{
lean_object* v___x_1748_; 
v___x_1748_ = lean_mk_string_unchecked("_", 1, 1);
return v___x_1748_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Example_toMessageData___closed__1(void){
_start:
{
lean_object* v___x_1749_; lean_object* v___x_1750_; 
v___x_1749_ = lean_obj_once(&l_Lean_Meta_Match_Example_toMessageData___closed__0, &l_Lean_Meta_Match_Example_toMessageData___closed__0_once, _init_l_Lean_Meta_Match_Example_toMessageData___closed__0);
v___x_1750_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1750_, 0, v___x_1749_);
return v___x_1750_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Example_toMessageData___closed__2(void){
_start:
{
lean_object* v___x_1751_; lean_object* v___x_1752_; 
v___x_1751_ = lean_obj_once(&l_Lean_Meta_Match_Example_toMessageData___closed__1, &l_Lean_Meta_Match_Example_toMessageData___closed__1_once, _init_l_Lean_Meta_Match_Example_toMessageData___closed__1);
v___x_1752_ = l_Lean_MessageData_ofFormat(v___x_1751_);
return v___x_1752_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Meta_Match_Example_toMessageData_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; 
v___x_1753_ = lean_obj_once(&l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__0, &l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__0_once, _init_l_List_foldl___at___00Lean_Meta_Match_Pattern_toMessageData_spec__0___closed__0);
v___x_1754_ = l_Lean_stringToMessageData(v___x_1753_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Meta_Match_Example_toMessageData_spec__0(lean_object* v_x_1755_, lean_object* v_x_1756_){
_start:
{
if (lean_obj_tag(v_x_1756_) == 0)
{
return v_x_1755_;
}
else
{
lean_object* v_head_1757_; lean_object* v_tail_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1769_; 
v_head_1757_ = lean_ctor_get(v_x_1756_, 0);
v_tail_1758_ = lean_ctor_get(v_x_1756_, 1);
v_isSharedCheck_1769_ = !lean_is_exclusive(v_x_1756_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1760_ = v_x_1756_;
v_isShared_1761_ = v_isSharedCheck_1769_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_tail_1758_);
lean_inc(v_head_1757_);
lean_dec(v_x_1756_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1769_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1762_; lean_object* v___x_1764_; 
v___x_1762_ = lean_obj_once(&l_List_foldl___at___00Lean_Meta_Match_Example_toMessageData_spec__0___closed__0, &l_List_foldl___at___00Lean_Meta_Match_Example_toMessageData_spec__0___closed__0_once, _init_l_List_foldl___at___00Lean_Meta_Match_Example_toMessageData_spec__0___closed__0);
if (v_isShared_1761_ == 0)
{
lean_ctor_set_tag(v___x_1760_, 7);
lean_ctor_set(v___x_1760_, 1, v___x_1762_);
lean_ctor_set(v___x_1760_, 0, v_x_1755_);
v___x_1764_ = v___x_1760_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_x_1755_);
lean_ctor_set(v_reuseFailAlloc_1768_, 1, v___x_1762_);
v___x_1764_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1765_ = l_Lean_Meta_Match_Example_toMessageData(v_head_1757_);
v___x_1766_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1764_);
lean_ctor_set(v___x_1766_, 1, v___x_1765_);
v_x_1755_ = v___x_1766_;
v_x_1756_ = v_tail_1758_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Match_Example_toMessageData___closed__3(void){
_start:
{
lean_object* v___x_1770_; 
v___x_1770_ = lean_mk_string_unchecked("#", 1, 1);
return v___x_1770_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Example_toMessageData___closed__4(void){
_start:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; 
v___x_1771_ = lean_obj_once(&l_Lean_Meta_Match_Example_toMessageData___closed__3, &l_Lean_Meta_Match_Example_toMessageData___closed__3_once, _init_l_Lean_Meta_Match_Example_toMessageData___closed__3);
v___x_1772_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1771_);
return v___x_1772_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Example_toMessageData___closed__5(void){
_start:
{
lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1773_ = lean_obj_once(&l_Lean_Meta_Match_Example_toMessageData___closed__4, &l_Lean_Meta_Match_Example_toMessageData___closed__4_once, _init_l_Lean_Meta_Match_Example_toMessageData___closed__4);
v___x_1774_ = l_Lean_MessageData_ofFormat(v___x_1773_);
return v___x_1774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Example_toMessageData(lean_object* v_x_1775_){
_start:
{
switch(lean_obj_tag(v_x_1775_))
{
case 0:
{
lean_object* v_a_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; 
v_a_1776_ = lean_ctor_get(v_x_1775_, 0);
lean_inc(v_a_1776_);
lean_dec_ref(v_x_1775_);
v___x_1777_ = l_Lean_mkFVar(v_a_1776_);
v___x_1778_ = l_Lean_MessageData_ofExpr(v___x_1777_);
return v___x_1778_;
}
case 1:
{
lean_object* v___x_1779_; 
v___x_1779_ = lean_obj_once(&l_Lean_Meta_Match_Example_toMessageData___closed__2, &l_Lean_Meta_Match_Example_toMessageData___closed__2_once, _init_l_Lean_Meta_Match_Example_toMessageData___closed__2);
return v___x_1779_;
}
case 2:
{
lean_object* v_a_1780_; 
v_a_1780_ = lean_ctor_get(v_x_1775_, 1);
if (lean_obj_tag(v_a_1780_) == 0)
{
lean_object* v_a_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
v_a_1781_ = lean_ctor_get(v_x_1775_, 0);
lean_inc(v_a_1781_);
lean_dec_ref(v_x_1775_);
v___x_1782_ = lean_box(0);
v___x_1783_ = l_Lean_mkConst(v_a_1781_, v___x_1782_);
v___x_1784_ = l_Lean_MessageData_ofExpr(v___x_1783_);
return v___x_1784_;
}
else
{
lean_object* v_a_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1800_; 
lean_inc(v_a_1780_);
v_a_1785_ = lean_ctor_get(v_x_1775_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v_x_1775_);
if (v_isSharedCheck_1800_ == 0)
{
lean_object* v_unused_1801_; 
v_unused_1801_ = lean_ctor_get(v_x_1775_, 1);
lean_dec(v_unused_1801_);
v___x_1787_ = v_x_1775_;
v_isShared_1788_ = v_isSharedCheck_1800_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_a_1785_);
lean_dec(v_x_1775_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1800_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1789_; uint8_t v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1793_; 
v___x_1789_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__5, &l_Lean_Meta_Match_Pattern_toMessageData___closed__5_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__5);
v___x_1790_ = 0;
v___x_1791_ = l_Lean_MessageData_ofConstName(v_a_1785_, v___x_1790_);
if (v_isShared_1788_ == 0)
{
lean_ctor_set_tag(v___x_1787_, 7);
lean_ctor_set(v___x_1787_, 1, v___x_1791_);
lean_ctor_set(v___x_1787_, 0, v___x_1789_);
v___x_1793_ = v___x_1787_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v___x_1789_);
lean_ctor_set(v_reuseFailAlloc_1799_, 1, v___x_1791_);
v___x_1793_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1794_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__6, &l_Lean_Meta_Match_Pattern_toMessageData___closed__6_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__6);
v___x_1795_ = l_List_foldl___at___00Lean_Meta_Match_Example_toMessageData_spec__0(v___x_1794_, v_a_1780_);
v___x_1796_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1796_, 0, v___x_1793_);
lean_ctor_set(v___x_1796_, 1, v___x_1795_);
v___x_1797_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__3, &l_Lean_Meta_Match_Pattern_toMessageData___closed__3_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__3);
v___x_1798_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1796_);
lean_ctor_set(v___x_1798_, 1, v___x_1797_);
return v___x_1798_;
}
}
}
}
case 3:
{
lean_object* v_a_1802_; lean_object* v___x_1803_; 
v_a_1802_ = lean_ctor_get(v_x_1775_, 0);
lean_inc_ref(v_a_1802_);
lean_dec_ref(v_x_1775_);
v___x_1803_ = l_Lean_MessageData_ofExpr(v_a_1802_);
return v___x_1803_;
}
default: 
{
lean_object* v_a_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; 
v_a_1804_ = lean_ctor_get(v_x_1775_, 0);
lean_inc(v_a_1804_);
lean_dec_ref(v_x_1775_);
v___x_1805_ = lean_obj_once(&l_Lean_Meta_Match_Example_toMessageData___closed__5, &l_Lean_Meta_Match_Example_toMessageData___closed__5_once, _init_l_Lean_Meta_Match_Example_toMessageData___closed__5);
v___x_1806_ = lean_box(0);
v___x_1807_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Example_toMessageData_spec__1(v_a_1804_, v___x_1806_);
v___x_1808_ = l_Lean_MessageData_ofList(v___x_1807_);
v___x_1809_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1805_);
lean_ctor_set(v___x_1809_, 1, v___x_1808_);
return v___x_1809_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_Example_toMessageData_spec__1(lean_object* v_a_1810_, lean_object* v_a_1811_){
_start:
{
if (lean_obj_tag(v_a_1810_) == 0)
{
lean_object* v___x_1812_; 
v___x_1812_ = l_List_reverse___redArg(v_a_1811_);
return v___x_1812_;
}
else
{
lean_object* v_head_1813_; lean_object* v_tail_1814_; lean_object* v___x_1816_; uint8_t v_isShared_1817_; uint8_t v_isSharedCheck_1823_; 
v_head_1813_ = lean_ctor_get(v_a_1810_, 0);
v_tail_1814_ = lean_ctor_get(v_a_1810_, 1);
v_isSharedCheck_1823_ = !lean_is_exclusive(v_a_1810_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1816_ = v_a_1810_;
v_isShared_1817_ = v_isSharedCheck_1823_;
goto v_resetjp_1815_;
}
else
{
lean_inc(v_tail_1814_);
lean_inc(v_head_1813_);
lean_dec(v_a_1810_);
v___x_1816_ = lean_box(0);
v_isShared_1817_ = v_isSharedCheck_1823_;
goto v_resetjp_1815_;
}
v_resetjp_1815_:
{
lean_object* v___x_1818_; lean_object* v___x_1820_; 
v___x_1818_ = l_Lean_Meta_Match_Example_toMessageData(v_head_1813_);
if (v_isShared_1817_ == 0)
{
lean_ctor_set(v___x_1816_, 1, v_a_1811_);
lean_ctor_set(v___x_1816_, 0, v___x_1818_);
v___x_1820_ = v___x_1816_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v___x_1818_);
lean_ctor_set(v_reuseFailAlloc_1822_, 1, v_a_1811_);
v___x_1820_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
v_a_1810_ = v_tail_1814_;
v_a_1811_ = v___x_1820_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_examplesToMessageData_spec__0(lean_object* v_a_1824_, lean_object* v_a_1825_){
_start:
{
if (lean_obj_tag(v_a_1824_) == 0)
{
lean_object* v___x_1826_; 
v___x_1826_ = l_List_reverse___redArg(v_a_1825_);
return v___x_1826_;
}
else
{
lean_object* v_head_1827_; lean_object* v_tail_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1838_; 
v_head_1827_ = lean_ctor_get(v_a_1824_, 0);
v_tail_1828_ = lean_ctor_get(v_a_1824_, 1);
v_isSharedCheck_1838_ = !lean_is_exclusive(v_a_1824_);
if (v_isSharedCheck_1838_ == 0)
{
v___x_1830_ = v_a_1824_;
v_isShared_1831_ = v_isSharedCheck_1838_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_tail_1828_);
lean_inc(v_head_1827_);
lean_dec(v_a_1824_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1838_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1835_; 
v___x_1832_ = l_Lean_Meta_Match_Example_varsToUnderscore(v_head_1827_);
v___x_1833_ = l_Lean_Meta_Match_Example_toMessageData(v___x_1832_);
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 1, v_a_1825_);
lean_ctor_set(v___x_1830_, 0, v___x_1833_);
v___x_1835_ = v___x_1830_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v___x_1833_);
lean_ctor_set(v_reuseFailAlloc_1837_, 1, v_a_1825_);
v___x_1835_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
v_a_1824_ = v_tail_1828_;
v_a_1825_ = v___x_1835_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_examplesToMessageData(lean_object* v_cex_1839_){
_start:
{
lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1840_ = lean_box(0);
v___x_1841_ = l_List_mapTR_loop___at___00Lean_Meta_Match_examplesToMessageData_spec__0(v_cex_1839_, v___x_1840_);
v___x_1842_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__11, &l_Lean_Meta_Match_Pattern_toMessageData___closed__11_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__11);
v___x_1843_ = l_Lean_MessageData_joinSep(v___x_1841_, v___x_1842_);
return v___x_1843_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedProblem_default___closed__0(void){
_start:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1844_ = lean_box(0);
v___x_1845_ = lean_box(0);
v___x_1846_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1845_);
lean_ctor_set(v___x_1846_, 1, v___x_1844_);
lean_ctor_set(v___x_1846_, 2, v___x_1844_);
lean_ctor_set(v___x_1846_, 3, v___x_1844_);
return v___x_1846_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedProblem_default(void){
_start:
{
lean_object* v___x_1847_; 
v___x_1847_ = lean_obj_once(&l_Lean_Meta_Match_instInhabitedProblem_default___closed__0, &l_Lean_Meta_Match_instInhabitedProblem_default___closed__0_once, _init_l_Lean_Meta_Match_instInhabitedProblem_default___closed__0);
return v___x_1847_;
}
}
static lean_object* _init_l_Lean_Meta_Match_instInhabitedProblem(void){
_start:
{
lean_object* v___x_1848_; 
v___x_1848_ = l_Lean_Meta_Match_instInhabitedProblem_default;
return v___x_1848_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Match_withGoalOf_spec__0___redArg(lean_object* v_mvarId_1849_, lean_object* v_x_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_){
_start:
{
lean_object* v___x_1856_; 
v___x_1856_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1849_, v_x_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_);
if (lean_obj_tag(v___x_1856_) == 0)
{
lean_object* v_a_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1864_; 
v_a_1857_ = lean_ctor_get(v___x_1856_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1856_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1859_ = v___x_1856_;
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_a_1857_);
lean_dec(v___x_1856_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1862_; 
if (v_isShared_1860_ == 0)
{
v___x_1862_ = v___x_1859_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_a_1857_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
}
else
{
lean_object* v_a_1865_; lean_object* v___x_1867_; uint8_t v_isShared_1868_; uint8_t v_isSharedCheck_1872_; 
v_a_1865_ = lean_ctor_get(v___x_1856_, 0);
v_isSharedCheck_1872_ = !lean_is_exclusive(v___x_1856_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1867_ = v___x_1856_;
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
else
{
lean_inc(v_a_1865_);
lean_dec(v___x_1856_);
v___x_1867_ = lean_box(0);
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
v_resetjp_1866_:
{
lean_object* v___x_1870_; 
if (v_isShared_1868_ == 0)
{
v___x_1870_ = v___x_1867_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_a_1865_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
return v___x_1870_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Match_withGoalOf_spec__0___redArg___boxed(lean_object* v_mvarId_1873_, lean_object* v_x_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Match_withGoalOf_spec__0___redArg(v_mvarId_1873_, v_x_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_);
lean_dec(v___y_1878_);
lean_dec_ref(v___y_1877_);
lean_dec(v___y_1876_);
lean_dec_ref(v___y_1875_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Match_withGoalOf_spec__0(lean_object* v_00_u03b1_1881_, lean_object* v_mvarId_1882_, lean_object* v_x_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_){
_start:
{
lean_object* v___x_1889_; 
v___x_1889_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Match_withGoalOf_spec__0___redArg(v_mvarId_1882_, v_x_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_);
return v___x_1889_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Match_withGoalOf_spec__0___boxed(lean_object* v_00_u03b1_1890_, lean_object* v_mvarId_1891_, lean_object* v_x_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_){
_start:
{
lean_object* v_res_1898_; 
v_res_1898_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Match_withGoalOf_spec__0(v_00_u03b1_1890_, v_mvarId_1891_, v_x_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_);
lean_dec(v___y_1896_);
lean_dec_ref(v___y_1895_);
lean_dec(v___y_1894_);
lean_dec_ref(v___y_1893_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_withGoalOf___redArg(lean_object* v_p_1899_, lean_object* v_x_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_){
_start:
{
lean_object* v_mvarId_1906_; lean_object* v___x_1907_; 
v_mvarId_1906_ = lean_ctor_get(v_p_1899_, 0);
lean_inc(v_mvarId_1906_);
lean_dec_ref(v_p_1899_);
v___x_1907_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Match_withGoalOf_spec__0___redArg(v_mvarId_1906_, v_x_1900_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_withGoalOf___redArg___boxed(lean_object* v_p_1908_, lean_object* v_x_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_, lean_object* v_a_1914_){
_start:
{
lean_object* v_res_1915_; 
v_res_1915_ = l_Lean_Meta_Match_withGoalOf___redArg(v_p_1908_, v_x_1909_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_);
lean_dec(v_a_1913_);
lean_dec_ref(v_a_1912_);
lean_dec(v_a_1911_);
lean_dec_ref(v_a_1910_);
return v_res_1915_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_withGoalOf(lean_object* v_00_u03b1_1916_, lean_object* v_p_1917_, lean_object* v_x_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_, lean_object* v_a_1921_, lean_object* v_a_1922_){
_start:
{
lean_object* v___x_1924_; 
v___x_1924_ = l_Lean_Meta_Match_withGoalOf___redArg(v_p_1917_, v_x_1918_, v_a_1919_, v_a_1920_, v_a_1921_, v_a_1922_);
return v___x_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_withGoalOf___boxed(lean_object* v_00_u03b1_1925_, lean_object* v_p_1926_, lean_object* v_x_1927_, lean_object* v_a_1928_, lean_object* v_a_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_, lean_object* v_a_1932_){
_start:
{
lean_object* v_res_1933_; 
v_res_1933_ = l_Lean_Meta_Match_withGoalOf(v_00_u03b1_1925_, v_p_1926_, v_x_1927_, v_a_1928_, v_a_1929_, v_a_1930_, v_a_1931_);
lean_dec(v_a_1931_);
lean_dec_ref(v_a_1930_);
lean_dec(v_a_1929_);
lean_dec_ref(v_a_1928_);
return v_res_1933_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_Problem_toMessageData_spec__0(lean_object* v_x_1934_, lean_object* v_x_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_){
_start:
{
if (lean_obj_tag(v_x_1934_) == 0)
{
lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___x_1941_ = l_List_reverse___redArg(v_x_1935_);
v___x_1942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1942_, 0, v___x_1941_);
return v___x_1942_;
}
else
{
lean_object* v_head_1943_; lean_object* v_tail_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1962_; 
v_head_1943_ = lean_ctor_get(v_x_1934_, 0);
v_tail_1944_ = lean_ctor_get(v_x_1934_, 1);
v_isSharedCheck_1962_ = !lean_is_exclusive(v_x_1934_);
if (v_isSharedCheck_1962_ == 0)
{
v___x_1946_ = v_x_1934_;
v_isShared_1947_ = v_isSharedCheck_1962_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_tail_1944_);
lean_inc(v_head_1943_);
lean_dec(v_x_1934_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1962_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1948_; 
v___x_1948_ = l_Lean_Meta_Match_Alt_toMessageData(v_head_1943_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_);
if (lean_obj_tag(v___x_1948_) == 0)
{
lean_object* v_a_1949_; lean_object* v___x_1951_; 
v_a_1949_ = lean_ctor_get(v___x_1948_, 0);
lean_inc(v_a_1949_);
lean_dec_ref(v___x_1948_);
if (v_isShared_1947_ == 0)
{
lean_ctor_set(v___x_1946_, 1, v_x_1935_);
lean_ctor_set(v___x_1946_, 0, v_a_1949_);
v___x_1951_ = v___x_1946_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v_a_1949_);
lean_ctor_set(v_reuseFailAlloc_1953_, 1, v_x_1935_);
v___x_1951_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
v_x_1934_ = v_tail_1944_;
v_x_1935_ = v___x_1951_;
goto _start;
}
}
else
{
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
lean_del_object(v___x_1946_);
lean_dec(v_tail_1944_);
lean_dec(v_x_1935_);
v_a_1954_ = lean_ctor_get(v___x_1948_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1948_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v___x_1948_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v___x_1948_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1959_; 
if (v_isShared_1957_ == 0)
{
v___x_1959_ = v___x_1956_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_a_1954_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_Problem_toMessageData_spec__0___boxed(lean_object* v_x_1963_, lean_object* v_x_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_){
_start:
{
lean_object* v_res_1970_; 
v_res_1970_ = l_List_mapM_loop___at___00Lean_Meta_Match_Problem_toMessageData_spec__0(v_x_1963_, v_x_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_);
lean_dec(v___y_1968_);
lean_dec_ref(v___y_1967_);
lean_dec(v___y_1966_);
lean_dec_ref(v___y_1965_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_Problem_toMessageData_spec__1(lean_object* v_x_1971_, lean_object* v_x_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_){
_start:
{
if (lean_obj_tag(v_x_1971_) == 0)
{
lean_object* v___x_1978_; lean_object* v___x_1979_; 
v___x_1978_ = l_List_reverse___redArg(v_x_1972_);
v___x_1979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1979_, 0, v___x_1978_);
return v___x_1979_;
}
else
{
lean_object* v_head_1980_; lean_object* v_tail_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_2006_; 
v_head_1980_ = lean_ctor_get(v_x_1971_, 0);
v_tail_1981_ = lean_ctor_get(v_x_1971_, 1);
v_isSharedCheck_2006_ = !lean_is_exclusive(v_x_1971_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_1983_ = v_x_1971_;
v_isShared_1984_ = v_isSharedCheck_2006_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_tail_1981_);
lean_inc(v_head_1980_);
lean_dec(v_x_1971_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_2006_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v___x_1985_; 
lean_inc(v___y_1976_);
lean_inc_ref(v___y_1975_);
lean_inc(v___y_1974_);
lean_inc_ref(v___y_1973_);
lean_inc(v_head_1980_);
v___x_1985_ = lean_infer_type(v_head_1980_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_);
if (lean_obj_tag(v___x_1985_) == 0)
{
lean_object* v_a_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1995_; 
v_a_1986_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_a_1986_);
lean_dec_ref(v___x_1985_);
v___x_1987_ = l_Lean_MessageData_ofExpr(v_head_1980_);
v___x_1988_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4___closed__1, &l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4___closed__1_once, _init_l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__4___closed__1);
v___x_1989_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1989_, 0, v___x_1987_);
lean_ctor_set(v___x_1989_, 1, v___x_1988_);
v___x_1990_ = l_Lean_MessageData_ofExpr(v_a_1986_);
v___x_1991_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1991_, 0, v___x_1989_);
lean_ctor_set(v___x_1991_, 1, v___x_1990_);
v___x_1992_ = lean_obj_once(&l_Lean_Meta_Match_Pattern_toMessageData___closed__3, &l_Lean_Meta_Match_Pattern_toMessageData___closed__3_once, _init_l_Lean_Meta_Match_Pattern_toMessageData___closed__3);
v___x_1993_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1993_, 0, v___x_1991_);
lean_ctor_set(v___x_1993_, 1, v___x_1992_);
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 1, v_x_1972_);
lean_ctor_set(v___x_1983_, 0, v___x_1993_);
v___x_1995_ = v___x_1983_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v___x_1993_);
lean_ctor_set(v_reuseFailAlloc_1997_, 1, v_x_1972_);
v___x_1995_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
v_x_1971_ = v_tail_1981_;
v_x_1972_ = v___x_1995_;
goto _start;
}
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
lean_del_object(v___x_1983_);
lean_dec(v_tail_1981_);
lean_dec(v_head_1980_);
lean_dec(v_x_1972_);
v_a_1998_ = lean_ctor_get(v___x_1985_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1985_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v___x_1985_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1985_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_a_1998_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_Problem_toMessageData_spec__1___boxed(lean_object* v_x_2007_, lean_object* v_x_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_){
_start:
{
lean_object* v_res_2014_; 
v_res_2014_ = l_List_mapM_loop___at___00Lean_Meta_Match_Problem_toMessageData_spec__1(v_x_2007_, v_x_2008_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_);
lean_dec(v___y_2012_);
lean_dec_ref(v___y_2011_);
lean_dec(v___y_2010_);
lean_dec_ref(v___y_2009_);
return v_res_2014_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2015_; 
v___x_2015_ = lean_mk_string_unchecked("remaining variables: ", 21, 21);
return v___x_2015_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2016_ = lean_obj_once(&l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__0, &l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__0_once, _init_l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__0);
v___x_2017_ = l_Lean_stringToMessageData(v___x_2016_);
return v___x_2017_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2018_; 
v___x_2018_ = lean_mk_string_unchecked("\nalternatives:", 14, 14);
return v___x_2018_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2019_ = lean_obj_once(&l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__2, &l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__2_once, _init_l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__2);
v___x_2020_ = l_Lean_stringToMessageData(v___x_2019_);
return v___x_2020_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__4(void){
_start:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___x_2021_ = lean_box(1);
v___x_2022_ = l_Lean_MessageData_ofFormat(v___x_2021_);
return v___x_2022_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2023_; 
v___x_2023_ = lean_mk_string_unchecked("\nexamples:", 10, 10);
return v___x_2023_;
}
}
static lean_object* _init_l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__6(void){
_start:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2024_ = lean_obj_once(&l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__5, &l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__5_once, _init_l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__5);
v___x_2025_ = l_Lean_stringToMessageData(v___x_2024_);
return v___x_2025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Problem_toMessageData___lam__0(lean_object* v_alts_2026_, lean_object* v___x_2027_, lean_object* v_vars_2028_, lean_object* v_examples_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_){
_start:
{
lean_object* v___x_2035_; 
lean_inc(v___x_2027_);
v___x_2035_ = l_List_mapM_loop___at___00Lean_Meta_Match_Problem_toMessageData_spec__0(v_alts_2026_, v___x_2027_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_);
if (lean_obj_tag(v___x_2035_) == 0)
{
lean_object* v_a_2036_; lean_object* v___x_2037_; 
v_a_2036_ = lean_ctor_get(v___x_2035_, 0);
lean_inc(v_a_2036_);
lean_dec_ref(v___x_2035_);
lean_inc(v___x_2027_);
v___x_2037_ = l_List_mapM_loop___at___00Lean_Meta_Match_Problem_toMessageData_spec__1(v_vars_2028_, v___x_2027_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_object* v_a_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2061_; 
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2061_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2061_ == 0)
{
v___x_2040_ = v___x_2037_;
v_isShared_2041_ = v_isSharedCheck_2061_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_a_2038_);
lean_dec(v___x_2037_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2061_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2059_; 
v___x_2042_ = lean_obj_once(&l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__1, &l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__1_once, _init_l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__1);
v___x_2043_ = l_List_mapTR_loop___at___00Lean_Meta_Match_Alt_toMessageData_spec__0(v_a_2038_, v___x_2027_);
v___x_2044_ = l_Lean_MessageData_ofList(v___x_2043_);
v___x_2045_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2042_);
lean_ctor_set(v___x_2045_, 1, v___x_2044_);
v___x_2046_ = lean_obj_once(&l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__3, &l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__3_once, _init_l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__3);
v___x_2047_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2047_, 0, v___x_2045_);
lean_ctor_set(v___x_2047_, 1, v___x_2046_);
v___x_2048_ = lean_obj_once(&l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__4, &l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__4_once, _init_l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__4);
v___x_2049_ = l_Lean_MessageData_joinSep(v_a_2036_, v___x_2048_);
v___x_2050_ = l_Lean_indentD(v___x_2049_);
v___x_2051_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2047_);
lean_ctor_set(v___x_2051_, 1, v___x_2050_);
v___x_2052_ = lean_obj_once(&l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__6, &l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__6_once, _init_l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__6);
v___x_2053_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2053_, 0, v___x_2051_);
lean_ctor_set(v___x_2053_, 1, v___x_2052_);
v___x_2054_ = l_Lean_Meta_Match_examplesToMessageData(v_examples_2029_);
v___x_2055_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2053_);
lean_ctor_set(v___x_2055_, 1, v___x_2054_);
v___x_2056_ = lean_obj_once(&l_Lean_Meta_Match_Alt_toMessageData___closed__5, &l_Lean_Meta_Match_Alt_toMessageData___closed__5_once, _init_l_Lean_Meta_Match_Alt_toMessageData___closed__5);
v___x_2057_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2055_);
lean_ctor_set(v___x_2057_, 1, v___x_2056_);
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 0, v___x_2057_);
v___x_2059_ = v___x_2040_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v___x_2057_);
v___x_2059_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
return v___x_2059_;
}
}
}
else
{
lean_object* v_a_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2069_; 
lean_dec(v_a_2036_);
lean_dec(v_examples_2029_);
lean_dec(v___x_2027_);
v_a_2062_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2069_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2064_ = v___x_2037_;
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_a_2062_);
lean_dec(v___x_2037_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2067_; 
if (v_isShared_2065_ == 0)
{
v___x_2067_ = v___x_2064_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v_a_2062_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
return v___x_2067_;
}
}
}
}
else
{
lean_object* v_a_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2077_; 
lean_dec(v_examples_2029_);
lean_dec(v_vars_2028_);
lean_dec(v___x_2027_);
v_a_2070_ = lean_ctor_get(v___x_2035_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_2035_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2072_ = v___x_2035_;
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_a_2070_);
lean_dec(v___x_2035_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2075_; 
if (v_isShared_2073_ == 0)
{
v___x_2075_ = v___x_2072_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_a_2070_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
return v___x_2075_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Problem_toMessageData___lam__0___boxed(lean_object* v_alts_2078_, lean_object* v___x_2079_, lean_object* v_vars_2080_, lean_object* v_examples_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_){
_start:
{
lean_object* v_res_2087_; 
v_res_2087_ = l_Lean_Meta_Match_Problem_toMessageData___lam__0(v_alts_2078_, v___x_2079_, v_vars_2080_, v_examples_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_);
lean_dec(v___y_2085_);
lean_dec_ref(v___y_2084_);
lean_dec(v___y_2083_);
lean_dec_ref(v___y_2082_);
return v_res_2087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Problem_toMessageData(lean_object* v_p_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_){
_start:
{
lean_object* v_vars_2094_; lean_object* v_alts_2095_; lean_object* v_examples_2096_; lean_object* v___x_2097_; lean_object* v___f_2098_; lean_object* v___x_2099_; 
v_vars_2094_ = lean_ctor_get(v_p_2088_, 1);
v_alts_2095_ = lean_ctor_get(v_p_2088_, 2);
v_examples_2096_ = lean_ctor_get(v_p_2088_, 3);
v___x_2097_ = lean_box(0);
lean_inc(v_examples_2096_);
lean_inc(v_vars_2094_);
lean_inc(v_alts_2095_);
v___f_2098_ = lean_alloc_closure((void*)(l_Lean_Meta_Match_Problem_toMessageData___lam__0___boxed), 9, 4);
lean_closure_set(v___f_2098_, 0, v_alts_2095_);
lean_closure_set(v___f_2098_, 1, v___x_2097_);
lean_closure_set(v___f_2098_, 2, v_vars_2094_);
lean_closure_set(v___f_2098_, 3, v_examples_2096_);
v___x_2099_ = l_Lean_Meta_Match_withGoalOf___redArg(v_p_2088_, v___f_2098_, v_a_2089_, v_a_2090_, v_a_2091_, v_a_2092_);
return v___x_2099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_Problem_toMessageData___boxed(lean_object* v_p_2100_, lean_object* v_a_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_){
_start:
{
lean_object* v_res_2106_; 
v_res_2106_ = l_Lean_Meta_Match_Problem_toMessageData(v_p_2100_, v_a_2101_, v_a_2102_, v_a_2103_, v_a_2104_);
lean_dec(v_a_2104_);
lean_dec_ref(v_a_2103_);
lean_dec(v_a_2102_);
lean_dec_ref(v_a_2101_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_counterExampleToMessageData(lean_object* v_cex_2107_){
_start:
{
lean_object* v___x_2108_; 
v___x_2108_ = l_Lean_Meta_Match_examplesToMessageData(v_cex_2107_);
return v___x_2108_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Match_counterExamplesToMessageData_spec__0(lean_object* v_a_2109_, lean_object* v_a_2110_){
_start:
{
if (lean_obj_tag(v_a_2109_) == 0)
{
lean_object* v___x_2111_; 
v___x_2111_ = l_List_reverse___redArg(v_a_2110_);
return v___x_2111_;
}
else
{
lean_object* v_head_2112_; lean_object* v_tail_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2122_; 
v_head_2112_ = lean_ctor_get(v_a_2109_, 0);
v_tail_2113_ = lean_ctor_get(v_a_2109_, 1);
v_isSharedCheck_2122_ = !lean_is_exclusive(v_a_2109_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2115_ = v_a_2109_;
v_isShared_2116_ = v_isSharedCheck_2122_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_tail_2113_);
lean_inc(v_head_2112_);
lean_dec(v_a_2109_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2122_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
lean_object* v___x_2117_; lean_object* v___x_2119_; 
v___x_2117_ = l_Lean_Meta_Match_examplesToMessageData(v_head_2112_);
if (v_isShared_2116_ == 0)
{
lean_ctor_set(v___x_2115_, 1, v_a_2110_);
lean_ctor_set(v___x_2115_, 0, v___x_2117_);
v___x_2119_ = v___x_2115_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v___x_2117_);
lean_ctor_set(v_reuseFailAlloc_2121_, 1, v_a_2110_);
v___x_2119_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
v_a_2109_ = v_tail_2113_;
v_a_2110_ = v___x_2119_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_counterExamplesToMessageData(lean_object* v_cexs_2123_){
_start:
{
lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2124_ = lean_array_to_list(v_cexs_2123_);
v___x_2125_ = lean_box(0);
v___x_2126_ = l_List_mapTR_loop___at___00Lean_Meta_Match_counterExamplesToMessageData_spec__0(v___x_2124_, v___x_2125_);
v___x_2127_ = lean_obj_once(&l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__4, &l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__4_once, _init_l_Lean_Meta_Match_Problem_toMessageData___lam__0___closed__4);
v___x_2128_ = l_Lean_MessageData_joinSep(v___x_2126_, v___x_2127_);
return v___x_2128_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Match_toPattern_spec__0___redArg(lean_object* v_msg_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_){
_start:
{
lean_object* v_ref_2135_; lean_object* v___x_2136_; lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2145_; 
v_ref_2135_ = lean_ctor_get(v___y_2132_, 5);
v___x_2136_ = l_Lean_addMessageContextFull___at___00Lean_Meta_Match_Alt_toMessageData_spec__2(v_msg_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_);
v_a_2137_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2145_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2145_ == 0)
{
v___x_2139_ = v___x_2136_;
v_isShared_2140_ = v_isSharedCheck_2145_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2136_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2145_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2141_; lean_object* v___x_2143_; 
lean_inc(v_ref_2135_);
v___x_2141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2141_, 0, v_ref_2135_);
lean_ctor_set(v___x_2141_, 1, v_a_2137_);
if (v_isShared_2140_ == 0)
{
lean_ctor_set_tag(v___x_2139_, 1);
lean_ctor_set(v___x_2139_, 0, v___x_2141_);
v___x_2143_ = v___x_2139_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v___x_2141_);
v___x_2143_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
return v___x_2143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Match_toPattern_spec__0___redArg___boxed(lean_object* v_msg_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l_Lean_throwError___at___00Lean_Meta_Match_toPattern_spec__0___redArg(v_msg_2146_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
lean_dec(v___y_2148_);
lean_dec_ref(v___y_2147_);
return v_res_2152_;
}
}
static lean_object* _init_l_Lean_Meta_Match_toPattern___closed__0(void){
_start:
{
lean_object* v___x_2153_; 
v___x_2153_ = lean_mk_string_unchecked("Unexpected pattern", 18, 18);
return v___x_2153_;
}
}
static lean_object* _init_l_Lean_Meta_Match_toPattern___closed__1(void){
_start:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; 
v___x_2154_ = lean_obj_once(&l_Lean_Meta_Match_toPattern___closed__0, &l_Lean_Meta_Match_toPattern___closed__0_once, _init_l_Lean_Meta_Match_toPattern___closed__0);
v___x_2155_ = l_Lean_stringToMessageData(v___x_2154_);
return v___x_2155_;
}
}
static lean_object* _init_l_Lean_Meta_Match_toPattern___closed__2(void){
_start:
{
lean_object* v___x_2156_; 
v___x_2156_ = lean_mk_string_unchecked("Unexpected occurrence of auxiliary declaration 'namedPattern'", 61, 61);
return v___x_2156_;
}
}
static lean_object* _init_l_Lean_Meta_Match_toPattern___closed__3(void){
_start:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; 
v___x_2157_ = lean_obj_once(&l_Lean_Meta_Match_toPattern___closed__2, &l_Lean_Meta_Match_toPattern___closed__2_once, _init_l_Lean_Meta_Match_toPattern___closed__2);
v___x_2158_ = l_Lean_stringToMessageData(v___x_2157_);
return v___x_2158_;
}
}
static lean_object* _init_l_Lean_Meta_Match_toPattern___closed__4(void){
_start:
{
lean_object* v___x_2159_; lean_object* v_dummy_2160_; 
v___x_2159_ = lean_box(0);
v_dummy_2160_ = l_Lean_Expr_sort___override(v___x_2159_);
return v_dummy_2160_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Match_toPattern_spec__1(size_t v_sz_2161_, size_t v_i_2162_, lean_object* v_bs_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_){
_start:
{
uint8_t v___x_2169_; 
v___x_2169_ = lean_usize_dec_lt(v_i_2162_, v_sz_2161_);
if (v___x_2169_ == 0)
{
lean_object* v___x_2170_; 
v___x_2170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2170_, 0, v_bs_2163_);
return v___x_2170_;
}
else
{
lean_object* v_v_2171_; lean_object* v___x_2172_; 
v_v_2171_ = lean_array_uget_borrowed(v_bs_2163_, v_i_2162_);
lean_inc(v_v_2171_);
v___x_2172_ = l_Lean_Meta_Match_toPattern(v_v_2171_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_);
if (lean_obj_tag(v___x_2172_) == 0)
{
lean_object* v_a_2173_; lean_object* v___x_2174_; lean_object* v_bs_x27_2175_; size_t v___x_2176_; size_t v___x_2177_; lean_object* v___x_2178_; 
v_a_2173_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_a_2173_);
lean_dec_ref(v___x_2172_);
v___x_2174_ = lean_unsigned_to_nat(0u);
v_bs_x27_2175_ = lean_array_uset(v_bs_2163_, v_i_2162_, v___x_2174_);
v___x_2176_ = ((size_t)1ULL);
v___x_2177_ = lean_usize_add(v_i_2162_, v___x_2176_);
v___x_2178_ = lean_array_uset(v_bs_x27_2175_, v_i_2162_, v_a_2173_);
v_i_2162_ = v___x_2177_;
v_bs_2163_ = v___x_2178_;
goto _start;
}
else
{
lean_object* v_a_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2187_; 
lean_dec_ref(v_bs_2163_);
v_a_2180_ = lean_ctor_get(v___x_2172_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v___x_2172_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2182_ = v___x_2172_;
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_a_2180_);
lean_dec(v___x_2172_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2185_; 
if (v_isShared_2183_ == 0)
{
v___x_2185_ = v___x_2182_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_a_2180_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_toPattern(lean_object* v_e_2188_, lean_object* v_a_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_){
_start:
{
lean_object* v___y_2195_; lean_object* v___y_2196_; lean_object* v___y_2197_; lean_object* v___y_2198_; lean_object* v___x_2203_; 
v___x_2203_ = l_Lean_inaccessible_x3f(v_e_2188_);
if (lean_obj_tag(v___x_2203_) == 0)
{
lean_object* v___x_2204_; 
v___x_2204_ = l_Lean_Expr_arrayLit_x3f(v_e_2188_);
if (lean_obj_tag(v___x_2204_) == 0)
{
lean_object* v___x_2205_; 
v___x_2205_ = l_Lean_Meta_Match_isNamedPattern_x3f(v_e_2188_);
if (lean_obj_tag(v___x_2205_) == 1)
{
lean_object* v_val_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
lean_dec_ref(v_e_2188_);
v_val_2206_ = lean_ctor_get(v___x_2205_, 0);
lean_inc(v_val_2206_);
lean_dec_ref(v___x_2205_);
v___x_2207_ = lean_unsigned_to_nat(2u);
v___x_2208_ = l_Lean_Expr_getAppNumArgs(v_val_2206_);
v___x_2209_ = lean_nat_sub(v___x_2208_, v___x_2207_);
v___x_2210_ = lean_unsigned_to_nat(1u);
v___x_2211_ = lean_nat_sub(v___x_2209_, v___x_2210_);
lean_dec(v___x_2209_);
v___x_2212_ = l_Lean_Expr_getRevArg_x21(v_val_2206_, v___x_2211_);
v___x_2213_ = l_Lean_Meta_Match_toPattern(v___x_2212_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_);
if (lean_obj_tag(v___x_2213_) == 0)
{
lean_object* v_a_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2238_; 
v_a_2214_ = lean_ctor_get(v___x_2213_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2213_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2216_ = v___x_2213_;
v_isShared_2217_ = v_isSharedCheck_2238_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_a_2214_);
lean_dec(v___x_2213_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2238_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___y_2219_; lean_object* v___y_2220_; lean_object* v___y_2221_; lean_object* v___y_2222_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2225_ = lean_nat_sub(v___x_2208_, v___x_2210_);
v___x_2226_ = lean_nat_sub(v___x_2225_, v___x_2210_);
lean_dec(v___x_2225_);
v___x_2227_ = l_Lean_Expr_getRevArg_x21(v_val_2206_, v___x_2226_);
if (lean_obj_tag(v___x_2227_) == 1)
{
lean_object* v_fvarId_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; 
v_fvarId_2228_ = lean_ctor_get(v___x_2227_, 0);
lean_inc(v_fvarId_2228_);
lean_dec_ref(v___x_2227_);
v___x_2229_ = lean_unsigned_to_nat(3u);
v___x_2230_ = lean_nat_sub(v___x_2208_, v___x_2229_);
lean_dec(v___x_2208_);
v___x_2231_ = lean_nat_sub(v___x_2230_, v___x_2210_);
lean_dec(v___x_2230_);
v___x_2232_ = l_Lean_Expr_getRevArg_x21(v_val_2206_, v___x_2231_);
lean_dec(v_val_2206_);
if (lean_obj_tag(v___x_2232_) == 1)
{
lean_object* v_fvarId_2233_; lean_object* v___x_2234_; lean_object* v___x_2236_; 
v_fvarId_2233_ = lean_ctor_get(v___x_2232_, 0);
lean_inc(v_fvarId_2233_);
lean_dec_ref(v___x_2232_);
v___x_2234_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v___x_2234_, 0, v_fvarId_2228_);
lean_ctor_set(v___x_2234_, 1, v_a_2214_);
lean_ctor_set(v___x_2234_, 2, v_fvarId_2233_);
if (v_isShared_2217_ == 0)
{
lean_ctor_set(v___x_2216_, 0, v___x_2234_);
v___x_2236_ = v___x_2216_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v___x_2234_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
else
{
lean_dec_ref(v___x_2232_);
lean_dec(v_fvarId_2228_);
lean_del_object(v___x_2216_);
lean_dec(v_a_2214_);
v___y_2219_ = v_a_2189_;
v___y_2220_ = v_a_2190_;
v___y_2221_ = v_a_2191_;
v___y_2222_ = v_a_2192_;
goto v___jp_2218_;
}
}
else
{
lean_dec_ref(v___x_2227_);
lean_del_object(v___x_2216_);
lean_dec(v_a_2214_);
lean_dec(v___x_2208_);
lean_dec(v_val_2206_);
v___y_2219_ = v_a_2189_;
v___y_2220_ = v_a_2190_;
v___y_2221_ = v_a_2191_;
v___y_2222_ = v_a_2192_;
goto v___jp_2218_;
}
v___jp_2218_:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2223_ = lean_obj_once(&l_Lean_Meta_Match_toPattern___closed__3, &l_Lean_Meta_Match_toPattern___closed__3_once, _init_l_Lean_Meta_Match_toPattern___closed__3);
v___x_2224_ = l_Lean_throwError___at___00Lean_Meta_Match_toPattern_spec__0___redArg(v___x_2223_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_);
return v___x_2224_;
}
}
}
else
{
lean_dec(v___x_2208_);
lean_dec(v_val_2206_);
return v___x_2213_;
}
}
else
{
lean_object* v___x_2239_; 
lean_dec(v___x_2205_);
lean_inc_ref(v_e_2188_);
v___x_2239_ = l_Lean_Meta_isMatchValue(v_e_2188_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_);
if (lean_obj_tag(v___x_2239_) == 0)
{
lean_object* v_a_2240_; lean_object* v___x_2242_; uint8_t v_isShared_2243_; uint8_t v_isSharedCheck_2332_; 
v_a_2240_ = lean_ctor_get(v___x_2239_, 0);
v_isSharedCheck_2332_ = !lean_is_exclusive(v___x_2239_);
if (v_isSharedCheck_2332_ == 0)
{
v___x_2242_ = v___x_2239_;
v_isShared_2243_ = v_isSharedCheck_2332_;
goto v_resetjp_2241_;
}
else
{
lean_inc(v_a_2240_);
lean_dec(v___x_2239_);
v___x_2242_ = lean_box(0);
v_isShared_2243_ = v_isSharedCheck_2332_;
goto v_resetjp_2241_;
}
v_resetjp_2241_:
{
uint8_t v___x_2244_; 
v___x_2244_ = lean_unbox(v_a_2240_);
lean_dec(v_a_2240_);
if (v___x_2244_ == 0)
{
uint8_t v___x_2245_; 
v___x_2245_ = l_Lean_Expr_isFVar(v_e_2188_);
if (v___x_2245_ == 0)
{
lean_object* v___x_2246_; 
lean_del_object(v___x_2242_);
lean_inc(v_a_2192_);
lean_inc_ref(v_a_2191_);
lean_inc(v_a_2190_);
lean_inc_ref(v_a_2189_);
lean_inc_ref(v_e_2188_);
v___x_2246_ = lean_whnf(v_e_2188_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_);
if (lean_obj_tag(v___x_2246_) == 0)
{
lean_object* v_a_2247_; uint8_t v___x_2248_; 
v_a_2247_ = lean_ctor_get(v___x_2246_, 0);
lean_inc(v_a_2247_);
lean_dec_ref(v___x_2246_);
v___x_2248_ = lean_expr_eqv(v_a_2247_, v_e_2188_);
if (v___x_2248_ == 0)
{
lean_dec_ref(v_e_2188_);
v_e_2188_ = v_a_2247_;
goto _start;
}
else
{
if (v___x_2245_ == 0)
{
lean_object* v___x_2250_; 
lean_dec(v_a_2247_);
v___x_2250_ = l_Lean_Expr_getAppFn(v_e_2188_);
if (lean_obj_tag(v___x_2250_) == 4)
{
lean_object* v_declName_2251_; lean_object* v_us_2252_; lean_object* v___x_2253_; lean_object* v_env_2254_; lean_object* v___x_2255_; 
v_declName_2251_ = lean_ctor_get(v___x_2250_, 0);
lean_inc(v_declName_2251_);
v_us_2252_ = lean_ctor_get(v___x_2250_, 1);
lean_inc(v_us_2252_);
lean_dec_ref(v___x_2250_);
v___x_2253_ = lean_st_ref_get(v_a_2192_);
v_env_2254_ = lean_ctor_get(v___x_2253_, 0);
lean_inc_ref(v_env_2254_);
lean_dec(v___x_2253_);
v___x_2255_ = l_Lean_Environment_find_x3f(v_env_2254_, v_declName_2251_, v___x_2245_);
if (lean_obj_tag(v___x_2255_) == 0)
{
lean_dec(v_us_2252_);
v___y_2195_ = v_a_2189_;
v___y_2196_ = v_a_2190_;
v___y_2197_ = v_a_2191_;
v___y_2198_ = v_a_2192_;
goto v___jp_2194_;
}
else
{
lean_object* v_val_2256_; 
v_val_2256_ = lean_ctor_get(v___x_2255_, 0);
lean_inc(v_val_2256_);
lean_dec_ref(v___x_2255_);
if (lean_obj_tag(v_val_2256_) == 6)
{
lean_object* v_val_2257_; lean_object* v_toConstantVal_2258_; lean_object* v_numParams_2259_; lean_object* v_numFields_2260_; lean_object* v_nargs_2261_; lean_object* v_dummy_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___y_2268_; lean_object* v___y_2269_; lean_object* v___y_2270_; lean_object* v___y_2271_; lean_object* v___x_2299_; lean_object* v___x_2300_; uint8_t v___x_2301_; 
v_val_2257_ = lean_ctor_get(v_val_2256_, 0);
lean_inc_ref(v_val_2257_);
lean_dec_ref(v_val_2256_);
v_toConstantVal_2258_ = lean_ctor_get(v_val_2257_, 0);
lean_inc_ref(v_toConstantVal_2258_);
v_numParams_2259_ = lean_ctor_get(v_val_2257_, 3);
lean_inc(v_numParams_2259_);
v_numFields_2260_ = lean_ctor_get(v_val_2257_, 4);
lean_inc(v_numFields_2260_);
lean_dec_ref(v_val_2257_);
v_nargs_2261_ = l_Lean_Expr_getAppNumArgs(v_e_2188_);
v_dummy_2262_ = lean_obj_once(&l_Lean_Meta_Match_toPattern___closed__4, &l_Lean_Meta_Match_toPattern___closed__4_once, _init_l_Lean_Meta_Match_toPattern___closed__4);
lean_inc(v_nargs_2261_);
v___x_2263_ = lean_mk_array(v_nargs_2261_, v_dummy_2262_);
v___x_2264_ = lean_unsigned_to_nat(1u);
v___x_2265_ = lean_nat_sub(v_nargs_2261_, v___x_2264_);
lean_dec(v_nargs_2261_);
lean_inc_ref(v_e_2188_);
v___x_2266_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2188_, v___x_2263_, v___x_2265_);
v___x_2299_ = lean_array_get_size(v___x_2266_);
v___x_2300_ = lean_nat_add(v_numParams_2259_, v_numFields_2260_);
lean_dec(v_numFields_2260_);
v___x_2301_ = lean_nat_dec_eq(v___x_2299_, v___x_2300_);
lean_dec(v___x_2300_);
if (v___x_2301_ == 0)
{
lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
v___x_2302_ = lean_obj_once(&l_Lean_Meta_Match_toPattern___closed__1, &l_Lean_Meta_Match_toPattern___closed__1_once, _init_l_Lean_Meta_Match_toPattern___closed__1);
v___x_2303_ = l_Lean_indentExpr(v_e_2188_);
v___x_2304_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2304_, 0, v___x_2302_);
lean_ctor_set(v___x_2304_, 1, v___x_2303_);
v___x_2305_ = l_Lean_throwError___at___00Lean_Meta_Match_toPattern_spec__0___redArg(v___x_2304_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_);
if (lean_obj_tag(v___x_2305_) == 0)
{
lean_dec_ref(v___x_2305_);
v___y_2268_ = v_a_2189_;
v___y_2269_ = v_a_2190_;
v___y_2270_ = v_a_2191_;
v___y_2271_ = v_a_2192_;
goto v___jp_2267_;
}
else
{
lean_object* v_a_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2313_; 
lean_dec_ref(v___x_2266_);
lean_dec(v_numParams_2259_);
lean_dec_ref(v_toConstantVal_2258_);
lean_dec(v_us_2252_);
v_a_2306_ = lean_ctor_get(v___x_2305_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v___x_2305_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2308_ = v___x_2305_;
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_a_2306_);
lean_dec(v___x_2305_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
lean_object* v___x_2311_; 
if (v_isShared_2309_ == 0)
{
v___x_2311_ = v___x_2308_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v_a_2306_);
v___x_2311_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
return v___x_2311_;
}
}
}
}
else
{
lean_dec_ref(v_e_2188_);
v___y_2268_ = v_a_2189_;
v___y_2269_ = v_a_2190_;
v___y_2270_ = v_a_2191_;
v___y_2271_ = v_a_2192_;
goto v___jp_2267_;
}
v___jp_2267_:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; size_t v_sz_2276_; size_t v___x_2277_; lean_object* v___x_2278_; 
v___x_2272_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2259_);
v___x_2273_ = l_Array_extract___redArg(v___x_2266_, v___x_2272_, v_numParams_2259_);
v___x_2274_ = lean_array_get_size(v___x_2266_);
v___x_2275_ = l_Array_extract___redArg(v___x_2266_, v_numParams_2259_, v___x_2274_);
lean_dec_ref(v___x_2266_);
v_sz_2276_ = lean_array_size(v___x_2275_);
v___x_2277_ = ((size_t)0ULL);
v___x_2278_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Match_toPattern_spec__1(v_sz_2276_, v___x_2277_, v___x_2275_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_);
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_object* v_a_2279_; lean_object* v___x_2281_; uint8_t v_isShared_2282_; uint8_t v_isSharedCheck_2290_; 
v_a_2279_ = lean_ctor_get(v___x_2278_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v___x_2278_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2281_ = v___x_2278_;
v_isShared_2282_ = v_isSharedCheck_2290_;
goto v_resetjp_2280_;
}
else
{
lean_inc(v_a_2279_);
lean_dec(v___x_2278_);
v___x_2281_ = lean_box(0);
v_isShared_2282_ = v_isSharedCheck_2290_;
goto v_resetjp_2280_;
}
v_resetjp_2280_:
{
lean_object* v_name_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2288_; 
v_name_2283_ = lean_ctor_get(v_toConstantVal_2258_, 0);
lean_inc(v_name_2283_);
lean_dec_ref(v_toConstantVal_2258_);
v___x_2284_ = lean_array_to_list(v___x_2273_);
v___x_2285_ = lean_array_to_list(v_a_2279_);
v___x_2286_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_2286_, 0, v_name_2283_);
lean_ctor_set(v___x_2286_, 1, v_us_2252_);
lean_ctor_set(v___x_2286_, 2, v___x_2284_);
lean_ctor_set(v___x_2286_, 3, v___x_2285_);
if (v_isShared_2282_ == 0)
{
lean_ctor_set(v___x_2281_, 0, v___x_2286_);
v___x_2288_ = v___x_2281_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v___x_2286_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
return v___x_2288_;
}
}
}
else
{
lean_object* v_a_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2298_; 
lean_dec_ref(v___x_2273_);
lean_dec_ref(v_toConstantVal_2258_);
lean_dec(v_us_2252_);
v_a_2291_ = lean_ctor_get(v___x_2278_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v___x_2278_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2293_ = v___x_2278_;
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_a_2291_);
lean_dec(v___x_2278_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2296_; 
if (v_isShared_2294_ == 0)
{
v___x_2296_ = v___x_2293_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_a_2291_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
return v___x_2296_;
}
}
}
}
}
else
{
lean_dec(v_val_2256_);
lean_dec(v_us_2252_);
v___y_2195_ = v_a_2189_;
v___y_2196_ = v_a_2190_;
v___y_2197_ = v_a_2191_;
v___y_2198_ = v_a_2192_;
goto v___jp_2194_;
}
}
}
else
{
lean_dec_ref(v___x_2250_);
v___y_2195_ = v_a_2189_;
v___y_2196_ = v_a_2190_;
v___y_2197_ = v_a_2191_;
v___y_2198_ = v_a_2192_;
goto v___jp_2194_;
}
}
else
{
lean_dec_ref(v_e_2188_);
v_e_2188_ = v_a_2247_;
goto _start;
}
}
}
else
{
lean_object* v_a_2315_; lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2322_; 
lean_dec_ref(v_e_2188_);
v_a_2315_ = lean_ctor_get(v___x_2246_, 0);
v_isSharedCheck_2322_ = !lean_is_exclusive(v___x_2246_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2317_ = v___x_2246_;
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
else
{
lean_inc(v_a_2315_);
lean_dec(v___x_2246_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
lean_object* v___x_2320_; 
if (v_isShared_2318_ == 0)
{
v___x_2320_ = v___x_2317_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v_a_2315_);
v___x_2320_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
return v___x_2320_;
}
}
}
}
else
{
lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2326_; 
v___x_2323_ = l_Lean_Expr_fvarId_x21(v_e_2188_);
lean_dec_ref(v_e_2188_);
v___x_2324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2324_, 0, v___x_2323_);
if (v_isShared_2243_ == 0)
{
lean_ctor_set(v___x_2242_, 0, v___x_2324_);
v___x_2326_ = v___x_2242_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2327_; 
v_reuseFailAlloc_2327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2327_, 0, v___x_2324_);
v___x_2326_ = v_reuseFailAlloc_2327_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
return v___x_2326_;
}
}
}
else
{
lean_object* v___x_2328_; lean_object* v___x_2330_; 
v___x_2328_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2328_, 0, v_e_2188_);
if (v_isShared_2243_ == 0)
{
lean_ctor_set(v___x_2242_, 0, v___x_2328_);
v___x_2330_ = v___x_2242_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v___x_2328_);
v___x_2330_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
return v___x_2330_;
}
}
}
}
else
{
lean_object* v_a_2333_; lean_object* v___x_2335_; uint8_t v_isShared_2336_; uint8_t v_isSharedCheck_2340_; 
lean_dec_ref(v_e_2188_);
v_a_2333_ = lean_ctor_get(v___x_2239_, 0);
v_isSharedCheck_2340_ = !lean_is_exclusive(v___x_2239_);
if (v_isSharedCheck_2340_ == 0)
{
v___x_2335_ = v___x_2239_;
v_isShared_2336_ = v_isSharedCheck_2340_;
goto v_resetjp_2334_;
}
else
{
lean_inc(v_a_2333_);
lean_dec(v___x_2239_);
v___x_2335_ = lean_box(0);
v_isShared_2336_ = v_isSharedCheck_2340_;
goto v_resetjp_2334_;
}
v_resetjp_2334_:
{
lean_object* v___x_2338_; 
if (v_isShared_2336_ == 0)
{
v___x_2338_ = v___x_2335_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v_a_2333_);
v___x_2338_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
return v___x_2338_;
}
}
}
}
}
else
{
lean_object* v_val_2341_; lean_object* v_fst_2342_; lean_object* v_snd_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2368_; 
lean_dec_ref(v_e_2188_);
v_val_2341_ = lean_ctor_get(v___x_2204_, 0);
lean_inc(v_val_2341_);
lean_dec_ref(v___x_2204_);
v_fst_2342_ = lean_ctor_get(v_val_2341_, 0);
v_snd_2343_ = lean_ctor_get(v_val_2341_, 1);
v_isSharedCheck_2368_ = !lean_is_exclusive(v_val_2341_);
if (v_isSharedCheck_2368_ == 0)
{
v___x_2345_ = v_val_2341_;
v_isShared_2346_ = v_isSharedCheck_2368_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_snd_2343_);
lean_inc(v_fst_2342_);
lean_dec(v_val_2341_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2368_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2347_; lean_object* v___x_2348_; 
v___x_2347_ = lean_box(0);
v___x_2348_ = l_List_mapM_loop___at___00Lean_Meta_Match_toPattern_spec__2(v_snd_2343_, v___x_2347_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_);
if (lean_obj_tag(v___x_2348_) == 0)
{
lean_object* v_a_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2359_; 
v_a_2349_ = lean_ctor_get(v___x_2348_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2348_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2351_ = v___x_2348_;
v_isShared_2352_ = v_isSharedCheck_2359_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_a_2349_);
lean_dec(v___x_2348_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2359_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2354_; 
if (v_isShared_2346_ == 0)
{
lean_ctor_set_tag(v___x_2345_, 4);
lean_ctor_set(v___x_2345_, 1, v_a_2349_);
v___x_2354_ = v___x_2345_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_fst_2342_);
lean_ctor_set(v_reuseFailAlloc_2358_, 1, v_a_2349_);
v___x_2354_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
lean_object* v___x_2356_; 
if (v_isShared_2352_ == 0)
{
lean_ctor_set(v___x_2351_, 0, v___x_2354_);
v___x_2356_ = v___x_2351_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v___x_2354_);
v___x_2356_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
return v___x_2356_;
}
}
}
}
else
{
lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2367_; 
lean_del_object(v___x_2345_);
lean_dec(v_fst_2342_);
v_a_2360_ = lean_ctor_get(v___x_2348_, 0);
v_isSharedCheck_2367_ = !lean_is_exclusive(v___x_2348_);
if (v_isSharedCheck_2367_ == 0)
{
v___x_2362_ = v___x_2348_;
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v___x_2348_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v___x_2365_; 
if (v_isShared_2363_ == 0)
{
v___x_2365_ = v___x_2362_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v_a_2360_);
v___x_2365_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
return v___x_2365_;
}
}
}
}
}
}
else
{
lean_object* v_val_2369_; lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2377_; 
lean_dec_ref(v_e_2188_);
v_val_2369_ = lean_ctor_get(v___x_2203_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2203_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2371_ = v___x_2203_;
v_isShared_2372_ = v_isSharedCheck_2377_;
goto v_resetjp_2370_;
}
else
{
lean_inc(v_val_2369_);
lean_dec(v___x_2203_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2377_;
goto v_resetjp_2370_;
}
v_resetjp_2370_:
{
lean_object* v___x_2374_; 
if (v_isShared_2372_ == 0)
{
lean_ctor_set_tag(v___x_2371_, 0);
v___x_2374_ = v___x_2371_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_val_2369_);
v___x_2374_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
lean_object* v___x_2375_; 
v___x_2375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2375_, 0, v___x_2374_);
return v___x_2375_;
}
}
}
v___jp_2194_:
{
lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2199_ = lean_obj_once(&l_Lean_Meta_Match_toPattern___closed__1, &l_Lean_Meta_Match_toPattern___closed__1_once, _init_l_Lean_Meta_Match_toPattern___closed__1);
v___x_2200_ = l_Lean_indentExpr(v_e_2188_);
v___x_2201_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2201_, 0, v___x_2199_);
lean_ctor_set(v___x_2201_, 1, v___x_2200_);
v___x_2202_ = l_Lean_throwError___at___00Lean_Meta_Match_toPattern_spec__0___redArg(v___x_2201_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_);
return v___x_2202_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_toPattern_spec__2(lean_object* v_x_2378_, lean_object* v_x_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_){
_start:
{
if (lean_obj_tag(v_x_2378_) == 0)
{
lean_object* v___x_2385_; lean_object* v___x_2386_; 
v___x_2385_ = l_List_reverse___redArg(v_x_2379_);
v___x_2386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2386_, 0, v___x_2385_);
return v___x_2386_;
}
else
{
lean_object* v_head_2387_; lean_object* v_tail_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2406_; 
v_head_2387_ = lean_ctor_get(v_x_2378_, 0);
v_tail_2388_ = lean_ctor_get(v_x_2378_, 1);
v_isSharedCheck_2406_ = !lean_is_exclusive(v_x_2378_);
if (v_isSharedCheck_2406_ == 0)
{
v___x_2390_ = v_x_2378_;
v_isShared_2391_ = v_isSharedCheck_2406_;
goto v_resetjp_2389_;
}
else
{
lean_inc(v_tail_2388_);
lean_inc(v_head_2387_);
lean_dec(v_x_2378_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2406_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2392_; 
v___x_2392_ = l_Lean_Meta_Match_toPattern(v_head_2387_, v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_);
if (lean_obj_tag(v___x_2392_) == 0)
{
lean_object* v_a_2393_; lean_object* v___x_2395_; 
v_a_2393_ = lean_ctor_get(v___x_2392_, 0);
lean_inc(v_a_2393_);
lean_dec_ref(v___x_2392_);
if (v_isShared_2391_ == 0)
{
lean_ctor_set(v___x_2390_, 1, v_x_2379_);
lean_ctor_set(v___x_2390_, 0, v_a_2393_);
v___x_2395_ = v___x_2390_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v_a_2393_);
lean_ctor_set(v_reuseFailAlloc_2397_, 1, v_x_2379_);
v___x_2395_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
v_x_2378_ = v_tail_2388_;
v_x_2379_ = v___x_2395_;
goto _start;
}
}
else
{
lean_object* v_a_2398_; lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2405_; 
lean_del_object(v___x_2390_);
lean_dec(v_tail_2388_);
lean_dec(v_x_2379_);
v_a_2398_ = lean_ctor_get(v___x_2392_, 0);
v_isSharedCheck_2405_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2400_ = v___x_2392_;
v_isShared_2401_ = v_isSharedCheck_2405_;
goto v_resetjp_2399_;
}
else
{
lean_inc(v_a_2398_);
lean_dec(v___x_2392_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2405_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
lean_object* v___x_2403_; 
if (v_isShared_2401_ == 0)
{
v___x_2403_ = v___x_2400_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v_a_2398_);
v___x_2403_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
return v___x_2403_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Match_toPattern_spec__2___boxed(lean_object* v_x_2407_, lean_object* v_x_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_){
_start:
{
lean_object* v_res_2414_; 
v_res_2414_ = l_List_mapM_loop___at___00Lean_Meta_Match_toPattern_spec__2(v_x_2407_, v_x_2408_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_);
lean_dec(v___y_2412_);
lean_dec_ref(v___y_2411_);
lean_dec(v___y_2410_);
lean_dec_ref(v___y_2409_);
return v_res_2414_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Match_toPattern_spec__1___boxed(lean_object* v_sz_2415_, lean_object* v_i_2416_, lean_object* v_bs_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_){
_start:
{
size_t v_sz_boxed_2423_; size_t v_i_boxed_2424_; lean_object* v_res_2425_; 
v_sz_boxed_2423_ = lean_unbox_usize(v_sz_2415_);
lean_dec(v_sz_2415_);
v_i_boxed_2424_ = lean_unbox_usize(v_i_2416_);
lean_dec(v_i_2416_);
v_res_2425_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Match_toPattern_spec__1(v_sz_boxed_2423_, v_i_boxed_2424_, v_bs_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_);
lean_dec(v___y_2421_);
lean_dec_ref(v___y_2420_);
lean_dec(v___y_2419_);
lean_dec_ref(v___y_2418_);
return v_res_2425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_toPattern___boxed(lean_object* v_e_2426_, lean_object* v_a_2427_, lean_object* v_a_2428_, lean_object* v_a_2429_, lean_object* v_a_2430_, lean_object* v_a_2431_){
_start:
{
lean_object* v_res_2432_; 
v_res_2432_ = l_Lean_Meta_Match_toPattern(v_e_2426_, v_a_2427_, v_a_2428_, v_a_2429_, v_a_2430_);
lean_dec(v_a_2430_);
lean_dec_ref(v_a_2429_);
lean_dec(v_a_2428_);
lean_dec_ref(v_a_2427_);
return v_res_2432_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Match_toPattern_spec__0(lean_object* v_00_u03b1_2433_, lean_object* v_msg_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_){
_start:
{
lean_object* v___x_2440_; 
v___x_2440_ = l_Lean_throwError___at___00Lean_Meta_Match_toPattern_spec__0___redArg(v_msg_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Match_toPattern_spec__0___boxed(lean_object* v_00_u03b1_2441_, lean_object* v_msg_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_){
_start:
{
lean_object* v_res_2448_; 
v_res_2448_ = l_Lean_throwError___at___00Lean_Meta_Match_toPattern_spec__0(v_00_u03b1_2441_, v_msg_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_);
lean_dec(v___y_2446_);
lean_dec_ref(v___y_2445_);
lean_dec(v___y_2444_);
lean_dec_ref(v___y_2443_);
return v_res_2448_;
}
}
static lean_object* _init_l_Lean_Meta_Match_congrEqnThmSuffixBase___closed__0(void){
_start:
{
lean_object* v___x_2449_; 
v___x_2449_ = lean_mk_string_unchecked("congr_eq", 8, 8);
return v___x_2449_;
}
}
static lean_object* _init_l_Lean_Meta_Match_congrEqnThmSuffixBase(void){
_start:
{
lean_object* v___x_2450_; 
v___x_2450_ = lean_obj_once(&l_Lean_Meta_Match_congrEqnThmSuffixBase___closed__0, &l_Lean_Meta_Match_congrEqnThmSuffixBase___closed__0_once, _init_l_Lean_Meta_Match_congrEqnThmSuffixBase___closed__0);
return v___x_2450_;
}
}
static lean_object* _init_l_Lean_Meta_Match_congrEqnThmSuffixBasePrefix___closed__0(void){
_start:
{
lean_object* v___x_2451_; 
v___x_2451_ = lean_mk_string_unchecked("congr_eq_", 9, 9);
return v___x_2451_;
}
}
static lean_object* _init_l_Lean_Meta_Match_congrEqnThmSuffixBasePrefix(void){
_start:
{
lean_object* v___x_2452_; 
v___x_2452_ = lean_obj_once(&l_Lean_Meta_Match_congrEqnThmSuffixBasePrefix___closed__0, &l_Lean_Meta_Match_congrEqnThmSuffixBasePrefix___closed__0_once, _init_l_Lean_Meta_Match_congrEqnThmSuffixBasePrefix___closed__0);
return v___x_2452_;
}
}
static lean_object* _init_l_Lean_Meta_Match_congrEqn1ThmSuffix___closed__0(void){
_start:
{
lean_object* v___x_2453_; 
v___x_2453_ = lean_mk_string_unchecked("congr_eq_1", 10, 10);
return v___x_2453_;
}
}
static lean_object* _init_l_Lean_Meta_Match_congrEqn1ThmSuffix(void){
_start:
{
lean_object* v___x_2454_; 
v___x_2454_ = lean_obj_once(&l_Lean_Meta_Match_congrEqn1ThmSuffix___closed__0, &l_Lean_Meta_Match_congrEqn1ThmSuffix___closed__0_once, _init_l_Lean_Meta_Match_congrEqn1ThmSuffix___closed__0);
return v___x_2454_;
}
}
static lean_object* _init_l_Lean_Meta_Match_isCongrEqnReservedNameSuffix___closed__0(void){
_start:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; 
v___x_2455_ = lean_obj_once(&l_Lean_Meta_Match_congrEqnThmSuffixBasePrefix___closed__0, &l_Lean_Meta_Match_congrEqnThmSuffixBasePrefix___closed__0_once, _init_l_Lean_Meta_Match_congrEqnThmSuffixBasePrefix___closed__0);
v___x_2456_ = lean_string_utf8_byte_size(v___x_2455_);
return v___x_2456_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Match_isCongrEqnReservedNameSuffix(lean_object* v_s_2457_){
_start:
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; uint8_t v___x_2461_; 
v___x_2458_ = lean_obj_once(&l_Lean_Meta_Match_congrEqnThmSuffixBasePrefix___closed__0, &l_Lean_Meta_Match_congrEqnThmSuffixBasePrefix___closed__0_once, _init_l_Lean_Meta_Match_congrEqnThmSuffixBasePrefix___closed__0);
v___x_2459_ = lean_string_utf8_byte_size(v_s_2457_);
v___x_2460_ = lean_obj_once(&l_Lean_Meta_Match_isCongrEqnReservedNameSuffix___closed__0, &l_Lean_Meta_Match_isCongrEqnReservedNameSuffix___closed__0_once, _init_l_Lean_Meta_Match_isCongrEqnReservedNameSuffix___closed__0);
v___x_2461_ = lean_nat_dec_le(v___x_2460_, v___x_2459_);
if (v___x_2461_ == 0)
{
lean_dec_ref(v_s_2457_);
return v___x_2461_;
}
else
{
lean_object* v___x_2462_; uint8_t v___x_2463_; 
v___x_2462_ = lean_unsigned_to_nat(0u);
v___x_2463_ = lean_string_memcmp(v_s_2457_, v___x_2458_, v___x_2462_, v___x_2462_, v___x_2460_);
if (v___x_2463_ == 0)
{
lean_dec_ref(v_s_2457_);
return v___x_2463_;
}
else
{
lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; uint8_t v___x_2468_; 
v___x_2464_ = lean_unsigned_to_nat(9u);
lean_inc_ref(v_s_2457_);
v___x_2465_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2465_, 0, v_s_2457_);
lean_ctor_set(v___x_2465_, 1, v___x_2462_);
lean_ctor_set(v___x_2465_, 2, v___x_2459_);
v___x_2466_ = l_String_Slice_Pos_nextn(v___x_2465_, v___x_2462_, v___x_2464_);
lean_dec_ref(v___x_2465_);
v___x_2467_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2467_, 0, v_s_2457_);
lean_ctor_set(v___x_2467_, 1, v___x_2466_);
lean_ctor_set(v___x_2467_, 2, v___x_2459_);
v___x_2468_ = l_String_Slice_isNat(v___x_2467_);
lean_dec_ref(v___x_2467_);
return v___x_2468_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_isCongrEqnReservedNameSuffix___boxed(lean_object* v_s_2469_){
_start:
{
uint8_t v_res_2470_; lean_object* v_r_2471_; 
v_res_2470_ = l_Lean_Meta_Match_isCongrEqnReservedNameSuffix(v_s_2469_);
v_r_2471_ = lean_box(v_res_2470_);
return v_r_2471_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_Value(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_NamedPatterns(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Match_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_NamedPatterns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Match_instInhabitedPattern_default = _init_l_Lean_Meta_Match_instInhabitedPattern_default();
lean_mark_persistent(l_Lean_Meta_Match_instInhabitedPattern_default);
l_Lean_Meta_Match_instInhabitedPattern = _init_l_Lean_Meta_Match_instInhabitedPattern();
lean_mark_persistent(l_Lean_Meta_Match_instInhabitedPattern);
l_Lean_Meta_Match_instInhabitedAltLHS_default = _init_l_Lean_Meta_Match_instInhabitedAltLHS_default();
lean_mark_persistent(l_Lean_Meta_Match_instInhabitedAltLHS_default);
l_Lean_Meta_Match_instInhabitedAltLHS = _init_l_Lean_Meta_Match_instInhabitedAltLHS();
lean_mark_persistent(l_Lean_Meta_Match_instInhabitedAltLHS);
l_Lean_Meta_Match_instInhabitedAlt_default = _init_l_Lean_Meta_Match_instInhabitedAlt_default();
lean_mark_persistent(l_Lean_Meta_Match_instInhabitedAlt_default);
l_Lean_Meta_Match_instInhabitedAlt = _init_l_Lean_Meta_Match_instInhabitedAlt();
lean_mark_persistent(l_Lean_Meta_Match_instInhabitedAlt);
l_Lean_Meta_Match_instInhabitedProblem_default = _init_l_Lean_Meta_Match_instInhabitedProblem_default();
lean_mark_persistent(l_Lean_Meta_Match_instInhabitedProblem_default);
l_Lean_Meta_Match_instInhabitedProblem = _init_l_Lean_Meta_Match_instInhabitedProblem();
lean_mark_persistent(l_Lean_Meta_Match_instInhabitedProblem);
l_Lean_Meta_Match_congrEqnThmSuffixBase = _init_l_Lean_Meta_Match_congrEqnThmSuffixBase();
lean_mark_persistent(l_Lean_Meta_Match_congrEqnThmSuffixBase);
l_Lean_Meta_Match_congrEqnThmSuffixBasePrefix = _init_l_Lean_Meta_Match_congrEqnThmSuffixBasePrefix();
lean_mark_persistent(l_Lean_Meta_Match_congrEqnThmSuffixBasePrefix);
l_Lean_Meta_Match_congrEqn1ThmSuffix = _init_l_Lean_Meta_Match_congrEqn1ThmSuffix();
lean_mark_persistent(l_Lean_Meta_Match_congrEqn1ThmSuffix);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Match_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* initialize_Lean_Meta_CollectFVars(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_Value(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_NamedPatterns(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_NamedPatterns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Match_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Match_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
