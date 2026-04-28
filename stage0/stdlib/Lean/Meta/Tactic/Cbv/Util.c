// Lean compiler output
// Module: Lean.Meta.Tactic.Cbv.Util
// Imports: public import Lean.Meta.Sym.Simp.SimpM import Lean.Meta.Sym.InferType import Lean.Meta.Sym.AlphaShareBuilder import Lean.Meta.Sym.LitValues
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
lean_object* l_Lean_Meta_Sym_getInt64Value_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getInt32Value_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getInt8Value_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getUInt16Value_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getCharValue_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getInt16Value_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getUInt64Value_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getUInt32Value_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getUInt8Value_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getFinValue_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getBitVecValue_x3f(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_instantiate_level_mvars(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getNatValue_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getIntValue_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getStringValue_x3f(lean_object*);
lean_object* l_Lean_Meta_isProofQuick(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_inferType___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isPropQuick(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getRatValue_x3f(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isNatValue(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isNatValue___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isStringValue(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isStringValue___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isIntValue(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isIntValue___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isBitVecValue(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isBitVecValue___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isFinValue(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isFinValue___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isCharValue(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isCharValue___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isRatValue(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isRatValue___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt8Value(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt8Value___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt16Value(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt16Value___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt32Value(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt32Value___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt64Value(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt64Value___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt8Value(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt8Value___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt16Value(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt16Value___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt32Value(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt32Value___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt64Value(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt64Value___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__2___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__3___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__4___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__5___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__6___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__7(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__7___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__8(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__8___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__9(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__9___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__10(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__10___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__11(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__11___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__12(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__12___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__13(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__13___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Meta_Tactic_Cbv_isVal_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Meta_Tactic_Cbv_isVal_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__5;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__6;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__7;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__8;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__9;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__10;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__11;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__12;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__13;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__14;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__15;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__16;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__17;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__18;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__19;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__20;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__21;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__22;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__23;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__24;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__25;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__26;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_isVal___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_isVal___closed__27;
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isBuiltinValue___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isBuiltinValue___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isBuiltinValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isBuiltinValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_guardSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_guardSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isAlwaysZero(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isAlwaysZero___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isProofTerm___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isProofTerm___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isProofTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isProofTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getListLitElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_markAsDoneIfFailed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isNatValue(lean_object* v_e_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = l_Lean_Meta_Sym_getNatValue_x3f(v_e_1_);
if (lean_obj_tag(v___x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 0;
return v___x_3_;
}
else
{
uint8_t v___x_4_; 
lean_dec_ref(v___x_2_);
v___x_4_ = 1;
return v___x_4_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isNatValue___boxed(lean_object* v_e_5_){
_start:
{
uint8_t v_res_6_; lean_object* v_r_7_; 
v_res_6_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isNatValue(v_e_5_);
v_r_7_ = lean_box(v_res_6_);
return v_r_7_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isStringValue(lean_object* v_e_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = l_Lean_Meta_Sym_getStringValue_x3f(v_e_8_);
if (lean_obj_tag(v___x_9_) == 0)
{
uint8_t v___x_10_; 
v___x_10_ = 0;
return v___x_10_;
}
else
{
uint8_t v___x_11_; 
lean_dec_ref(v___x_9_);
v___x_11_ = 1;
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isStringValue___boxed(lean_object* v_e_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isStringValue(v_e_12_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isIntValue(lean_object* v_e_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lean_Meta_Sym_getIntValue_x3f(v_e_15_);
if (lean_obj_tag(v___x_16_) == 0)
{
uint8_t v___x_17_; 
v___x_17_ = 0;
return v___x_17_;
}
else
{
uint8_t v___x_18_; 
lean_dec_ref(v___x_16_);
v___x_18_ = 1;
return v___x_18_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isIntValue___boxed(lean_object* v_e_19_){
_start:
{
uint8_t v_res_20_; lean_object* v_r_21_; 
v_res_20_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isIntValue(v_e_19_);
v_r_21_ = lean_box(v_res_20_);
return v_r_21_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isBitVecValue(lean_object* v_e_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Lean_Meta_Sym_getBitVecValue_x3f(v_e_22_);
if (lean_obj_tag(v___x_23_) == 0)
{
uint8_t v___x_24_; 
v___x_24_ = 0;
return v___x_24_;
}
else
{
uint8_t v___x_25_; 
lean_dec_ref(v___x_23_);
v___x_25_ = 1;
return v___x_25_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isBitVecValue___boxed(lean_object* v_e_26_){
_start:
{
uint8_t v_res_27_; lean_object* v_r_28_; 
v_res_27_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isBitVecValue(v_e_26_);
v_r_28_ = lean_box(v_res_27_);
return v_r_28_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isFinValue(lean_object* v_e_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_Meta_Sym_getFinValue_x3f(v_e_29_);
if (lean_obj_tag(v___x_30_) == 0)
{
uint8_t v___x_31_; 
v___x_31_ = 0;
return v___x_31_;
}
else
{
uint8_t v___x_32_; 
lean_dec_ref(v___x_30_);
v___x_32_ = 1;
return v___x_32_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isFinValue___boxed(lean_object* v_e_33_){
_start:
{
uint8_t v_res_34_; lean_object* v_r_35_; 
v_res_34_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isFinValue(v_e_33_);
v_r_35_ = lean_box(v_res_34_);
return v_r_35_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isCharValue(lean_object* v_e_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_Meta_Sym_getCharValue_x3f(v_e_36_);
if (lean_obj_tag(v___x_37_) == 0)
{
uint8_t v___x_38_; 
v___x_38_ = 0;
return v___x_38_;
}
else
{
uint8_t v___x_39_; 
lean_dec_ref(v___x_37_);
v___x_39_ = 1;
return v___x_39_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isCharValue___boxed(lean_object* v_e_40_){
_start:
{
uint8_t v_res_41_; lean_object* v_r_42_; 
v_res_41_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isCharValue(v_e_40_);
v_r_42_ = lean_box(v_res_41_);
return v_r_42_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isRatValue(lean_object* v_e_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lean_Meta_Sym_getRatValue_x3f(v_e_43_);
if (lean_obj_tag(v___x_44_) == 0)
{
uint8_t v___x_45_; 
v___x_45_ = 0;
return v___x_45_;
}
else
{
uint8_t v___x_46_; 
lean_dec_ref(v___x_44_);
v___x_46_ = 1;
return v___x_46_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isRatValue___boxed(lean_object* v_e_47_){
_start:
{
uint8_t v_res_48_; lean_object* v_r_49_; 
v_res_48_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isRatValue(v_e_47_);
v_r_49_ = lean_box(v_res_48_);
return v_r_49_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt8Value(lean_object* v_e_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_Meta_Sym_getUInt8Value_x3f(v_e_50_);
if (lean_obj_tag(v___x_51_) == 0)
{
uint8_t v___x_52_; 
v___x_52_ = 0;
return v___x_52_;
}
else
{
uint8_t v___x_53_; 
lean_dec_ref(v___x_51_);
v___x_53_ = 1;
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt8Value___boxed(lean_object* v_e_54_){
_start:
{
uint8_t v_res_55_; lean_object* v_r_56_; 
v_res_55_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt8Value(v_e_54_);
v_r_56_ = lean_box(v_res_55_);
return v_r_56_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt16Value(lean_object* v_e_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_Meta_Sym_getUInt16Value_x3f(v_e_57_);
if (lean_obj_tag(v___x_58_) == 0)
{
uint8_t v___x_59_; 
v___x_59_ = 0;
return v___x_59_;
}
else
{
uint8_t v___x_60_; 
lean_dec_ref(v___x_58_);
v___x_60_ = 1;
return v___x_60_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt16Value___boxed(lean_object* v_e_61_){
_start:
{
uint8_t v_res_62_; lean_object* v_r_63_; 
v_res_62_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt16Value(v_e_61_);
v_r_63_ = lean_box(v_res_62_);
return v_r_63_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt32Value(lean_object* v_e_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_Meta_Sym_getUInt32Value_x3f(v_e_64_);
if (lean_obj_tag(v___x_65_) == 0)
{
uint8_t v___x_66_; 
v___x_66_ = 0;
return v___x_66_;
}
else
{
uint8_t v___x_67_; 
lean_dec_ref(v___x_65_);
v___x_67_ = 1;
return v___x_67_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt32Value___boxed(lean_object* v_e_68_){
_start:
{
uint8_t v_res_69_; lean_object* v_r_70_; 
v_res_69_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt32Value(v_e_68_);
v_r_70_ = lean_box(v_res_69_);
return v_r_70_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt64Value(lean_object* v_e_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lean_Meta_Sym_getUInt64Value_x3f(v_e_71_);
if (lean_obj_tag(v___x_72_) == 0)
{
uint8_t v___x_73_; 
v___x_73_ = 0;
return v___x_73_;
}
else
{
uint8_t v___x_74_; 
lean_dec_ref(v___x_72_);
v___x_74_ = 1;
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt64Value___boxed(lean_object* v_e_75_){
_start:
{
uint8_t v_res_76_; lean_object* v_r_77_; 
v_res_76_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isUInt64Value(v_e_75_);
v_r_77_ = lean_box(v_res_76_);
return v_r_77_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt8Value(lean_object* v_e_78_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = l_Lean_Meta_Sym_getInt8Value_x3f(v_e_78_);
if (lean_obj_tag(v___x_79_) == 0)
{
uint8_t v___x_80_; 
v___x_80_ = 0;
return v___x_80_;
}
else
{
uint8_t v___x_81_; 
lean_dec_ref(v___x_79_);
v___x_81_ = 1;
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt8Value___boxed(lean_object* v_e_82_){
_start:
{
uint8_t v_res_83_; lean_object* v_r_84_; 
v_res_83_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt8Value(v_e_82_);
v_r_84_ = lean_box(v_res_83_);
return v_r_84_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt16Value(lean_object* v_e_85_){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l_Lean_Meta_Sym_getInt16Value_x3f(v_e_85_);
if (lean_obj_tag(v___x_86_) == 0)
{
uint8_t v___x_87_; 
v___x_87_ = 0;
return v___x_87_;
}
else
{
uint8_t v___x_88_; 
lean_dec_ref(v___x_86_);
v___x_88_ = 1;
return v___x_88_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt16Value___boxed(lean_object* v_e_89_){
_start:
{
uint8_t v_res_90_; lean_object* v_r_91_; 
v_res_90_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt16Value(v_e_89_);
v_r_91_ = lean_box(v_res_90_);
return v_r_91_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt32Value(lean_object* v_e_92_){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = l_Lean_Meta_Sym_getInt32Value_x3f(v_e_92_);
if (lean_obj_tag(v___x_93_) == 0)
{
uint8_t v___x_94_; 
v___x_94_ = 0;
return v___x_94_;
}
else
{
uint8_t v___x_95_; 
lean_dec_ref(v___x_93_);
v___x_95_ = 1;
return v___x_95_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt32Value___boxed(lean_object* v_e_96_){
_start:
{
uint8_t v_res_97_; lean_object* v_r_98_; 
v_res_97_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt32Value(v_e_96_);
v_r_98_ = lean_box(v_res_97_);
return v_r_98_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt64Value(lean_object* v_e_99_){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = l_Lean_Meta_Sym_getInt64Value_x3f(v_e_99_);
if (lean_obj_tag(v___x_100_) == 0)
{
uint8_t v___x_101_; 
v___x_101_ = 0;
return v___x_101_;
}
else
{
uint8_t v___x_102_; 
lean_dec_ref(v___x_100_);
v___x_102_ = 1;
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt64Value___boxed(lean_object* v_e_103_){
_start:
{
uint8_t v_res_104_; lean_object* v_r_105_; 
v_res_104_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isInt64Value(v_e_103_);
v_r_105_ = lean_box(v_res_104_);
return v_r_105_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__0(lean_object* v___y_106_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = l_Lean_Meta_Sym_getNatValue_x3f(v___y_106_);
if (lean_obj_tag(v___x_107_) == 0)
{
uint8_t v___x_108_; 
v___x_108_ = 0;
return v___x_108_;
}
else
{
uint8_t v___x_109_; 
lean_dec_ref(v___x_107_);
v___x_109_ = 1;
return v___x_109_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__0___boxed(lean_object* v___y_110_){
_start:
{
uint8_t v_res_111_; lean_object* v_r_112_; 
v_res_111_ = l_Lean_Meta_Tactic_Cbv_isVal___lam__0(v___y_110_);
v_r_112_ = lean_box(v_res_111_);
return v_r_112_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__1(lean_object* v___y_113_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lean_Meta_Sym_getStringValue_x3f(v___y_113_);
if (lean_obj_tag(v___x_114_) == 0)
{
uint8_t v___x_115_; 
v___x_115_ = 0;
return v___x_115_;
}
else
{
uint8_t v___x_116_; 
lean_dec_ref(v___x_114_);
v___x_116_ = 1;
return v___x_116_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__1___boxed(lean_object* v___y_117_){
_start:
{
uint8_t v_res_118_; lean_object* v_r_119_; 
v_res_118_ = l_Lean_Meta_Tactic_Cbv_isVal___lam__1(v___y_117_);
v_r_119_ = lean_box(v_res_118_);
return v_r_119_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__2(lean_object* v___y_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = l_Lean_Meta_Sym_getIntValue_x3f(v___y_120_);
if (lean_obj_tag(v___x_121_) == 0)
{
uint8_t v___x_122_; 
v___x_122_ = 0;
return v___x_122_;
}
else
{
uint8_t v___x_123_; 
lean_dec_ref(v___x_121_);
v___x_123_ = 1;
return v___x_123_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__2___boxed(lean_object* v___y_124_){
_start:
{
uint8_t v_res_125_; lean_object* v_r_126_; 
v_res_125_ = l_Lean_Meta_Tactic_Cbv_isVal___lam__2(v___y_124_);
v_r_126_ = lean_box(v_res_125_);
return v_r_126_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__3(lean_object* v___y_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l_Lean_Meta_Sym_getBitVecValue_x3f(v___y_127_);
if (lean_obj_tag(v___x_128_) == 0)
{
uint8_t v___x_129_; 
v___x_129_ = 0;
return v___x_129_;
}
else
{
uint8_t v___x_130_; 
lean_dec_ref(v___x_128_);
v___x_130_ = 1;
return v___x_130_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__3___boxed(lean_object* v___y_131_){
_start:
{
uint8_t v_res_132_; lean_object* v_r_133_; 
v_res_132_ = l_Lean_Meta_Tactic_Cbv_isVal___lam__3(v___y_131_);
v_r_133_ = lean_box(v_res_132_);
return v_r_133_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__4(lean_object* v___y_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_Lean_Meta_Sym_getFinValue_x3f(v___y_134_);
if (lean_obj_tag(v___x_135_) == 0)
{
uint8_t v___x_136_; 
v___x_136_ = 0;
return v___x_136_;
}
else
{
uint8_t v___x_137_; 
lean_dec_ref(v___x_135_);
v___x_137_ = 1;
return v___x_137_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__4___boxed(lean_object* v___y_138_){
_start:
{
uint8_t v_res_139_; lean_object* v_r_140_; 
v_res_139_ = l_Lean_Meta_Tactic_Cbv_isVal___lam__4(v___y_138_);
v_r_140_ = lean_box(v_res_139_);
return v_r_140_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__5(lean_object* v___y_141_){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = l_Lean_Meta_Sym_getCharValue_x3f(v___y_141_);
if (lean_obj_tag(v___x_142_) == 0)
{
uint8_t v___x_143_; 
v___x_143_ = 0;
return v___x_143_;
}
else
{
uint8_t v___x_144_; 
lean_dec_ref(v___x_142_);
v___x_144_ = 1;
return v___x_144_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__5___boxed(lean_object* v___y_145_){
_start:
{
uint8_t v_res_146_; lean_object* v_r_147_; 
v_res_146_ = l_Lean_Meta_Tactic_Cbv_isVal___lam__5(v___y_145_);
v_r_147_ = lean_box(v_res_146_);
return v_r_147_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__6(lean_object* v___y_148_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = l_Lean_Meta_Sym_getUInt8Value_x3f(v___y_148_);
if (lean_obj_tag(v___x_149_) == 0)
{
uint8_t v___x_150_; 
v___x_150_ = 0;
return v___x_150_;
}
else
{
uint8_t v___x_151_; 
lean_dec_ref(v___x_149_);
v___x_151_ = 1;
return v___x_151_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__6___boxed(lean_object* v___y_152_){
_start:
{
uint8_t v_res_153_; lean_object* v_r_154_; 
v_res_153_ = l_Lean_Meta_Tactic_Cbv_isVal___lam__6(v___y_152_);
v_r_154_ = lean_box(v_res_153_);
return v_r_154_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__7(lean_object* v___y_155_){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = l_Lean_Meta_Sym_getUInt16Value_x3f(v___y_155_);
if (lean_obj_tag(v___x_156_) == 0)
{
uint8_t v___x_157_; 
v___x_157_ = 0;
return v___x_157_;
}
else
{
uint8_t v___x_158_; 
lean_dec_ref(v___x_156_);
v___x_158_ = 1;
return v___x_158_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__7___boxed(lean_object* v___y_159_){
_start:
{
uint8_t v_res_160_; lean_object* v_r_161_; 
v_res_160_ = l_Lean_Meta_Tactic_Cbv_isVal___lam__7(v___y_159_);
v_r_161_ = lean_box(v_res_160_);
return v_r_161_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__8(lean_object* v___y_162_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = l_Lean_Meta_Sym_getUInt32Value_x3f(v___y_162_);
if (lean_obj_tag(v___x_163_) == 0)
{
uint8_t v___x_164_; 
v___x_164_ = 0;
return v___x_164_;
}
else
{
uint8_t v___x_165_; 
lean_dec_ref(v___x_163_);
v___x_165_ = 1;
return v___x_165_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__8___boxed(lean_object* v___y_166_){
_start:
{
uint8_t v_res_167_; lean_object* v_r_168_; 
v_res_167_ = l_Lean_Meta_Tactic_Cbv_isVal___lam__8(v___y_166_);
v_r_168_ = lean_box(v_res_167_);
return v_r_168_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__9(lean_object* v___y_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = l_Lean_Meta_Sym_getUInt64Value_x3f(v___y_169_);
if (lean_obj_tag(v___x_170_) == 0)
{
uint8_t v___x_171_; 
v___x_171_ = 0;
return v___x_171_;
}
else
{
uint8_t v___x_172_; 
lean_dec_ref(v___x_170_);
v___x_172_ = 1;
return v___x_172_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__9___boxed(lean_object* v___y_173_){
_start:
{
uint8_t v_res_174_; lean_object* v_r_175_; 
v_res_174_ = l_Lean_Meta_Tactic_Cbv_isVal___lam__9(v___y_173_);
v_r_175_ = lean_box(v_res_174_);
return v_r_175_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__10(lean_object* v___y_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = l_Lean_Meta_Sym_getInt8Value_x3f(v___y_176_);
if (lean_obj_tag(v___x_177_) == 0)
{
uint8_t v___x_178_; 
v___x_178_ = 0;
return v___x_178_;
}
else
{
uint8_t v___x_179_; 
lean_dec_ref(v___x_177_);
v___x_179_ = 1;
return v___x_179_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__10___boxed(lean_object* v___y_180_){
_start:
{
uint8_t v_res_181_; lean_object* v_r_182_; 
v_res_181_ = l_Lean_Meta_Tactic_Cbv_isVal___lam__10(v___y_180_);
v_r_182_ = lean_box(v_res_181_);
return v_r_182_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__11(lean_object* v___y_183_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = l_Lean_Meta_Sym_getInt16Value_x3f(v___y_183_);
if (lean_obj_tag(v___x_184_) == 0)
{
uint8_t v___x_185_; 
v___x_185_ = 0;
return v___x_185_;
}
else
{
uint8_t v___x_186_; 
lean_dec_ref(v___x_184_);
v___x_186_ = 1;
return v___x_186_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__11___boxed(lean_object* v___y_187_){
_start:
{
uint8_t v_res_188_; lean_object* v_r_189_; 
v_res_188_ = l_Lean_Meta_Tactic_Cbv_isVal___lam__11(v___y_187_);
v_r_189_ = lean_box(v_res_188_);
return v_r_189_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__12(lean_object* v___y_190_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lean_Meta_Sym_getInt32Value_x3f(v___y_190_);
if (lean_obj_tag(v___x_191_) == 0)
{
uint8_t v___x_192_; 
v___x_192_ = 0;
return v___x_192_;
}
else
{
uint8_t v___x_193_; 
lean_dec_ref(v___x_191_);
v___x_193_ = 1;
return v___x_193_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__12___boxed(lean_object* v___y_194_){
_start:
{
uint8_t v_res_195_; lean_object* v_r_196_; 
v_res_195_ = l_Lean_Meta_Tactic_Cbv_isVal___lam__12(v___y_194_);
v_r_196_ = lean_box(v_res_195_);
return v_r_196_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal___lam__13(lean_object* v___y_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = l_Lean_Meta_Sym_getInt64Value_x3f(v___y_197_);
if (lean_obj_tag(v___x_198_) == 0)
{
uint8_t v___x_199_; 
v___x_199_ = 0;
return v___x_199_;
}
else
{
uint8_t v___x_200_; 
lean_dec_ref(v___x_198_);
v___x_200_ = 1;
return v___x_200_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___lam__13___boxed(lean_object* v___y_201_){
_start:
{
uint8_t v_res_202_; lean_object* v_r_203_; 
v_res_202_ = l_Lean_Meta_Tactic_Cbv_isVal___lam__13(v___y_201_);
v_r_203_ = lean_box(v_res_202_);
return v_r_203_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Meta_Tactic_Cbv_isVal_spec__0(lean_object* v_e_204_, lean_object* v_x_205_){
_start:
{
if (lean_obj_tag(v_x_205_) == 0)
{
uint8_t v___x_206_; 
lean_dec_ref(v_e_204_);
v___x_206_ = 0;
return v___x_206_;
}
else
{
lean_object* v_head_207_; lean_object* v_tail_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
v_head_207_ = lean_ctor_get(v_x_205_, 0);
lean_inc(v_head_207_);
v_tail_208_ = lean_ctor_get(v_x_205_, 1);
lean_inc(v_tail_208_);
lean_dec_ref(v_x_205_);
lean_inc_ref(v_e_204_);
v___x_209_ = lean_apply_1(v_head_207_, v_e_204_);
v___x_210_ = lean_unbox(v___x_209_);
if (v___x_210_ == 0)
{
v_x_205_ = v_tail_208_;
goto _start;
}
else
{
uint8_t v___x_212_; 
lean_dec(v_tail_208_);
lean_dec_ref(v_e_204_);
v___x_212_ = lean_unbox(v___x_209_);
return v___x_212_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Meta_Tactic_Cbv_isVal_spec__0___boxed(lean_object* v_e_213_, lean_object* v_x_214_){
_start:
{
uint8_t v_res_215_; lean_object* v_r_216_; 
v_res_215_ = l_List_any___at___00Lean_Meta_Tactic_Cbv_isVal_spec__0(v_e_213_, v_x_214_);
v_r_216_ = lean_box(v_res_215_);
return v_r_216_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__0(void){
_start:
{
lean_object* v___f_217_; 
v___f_217_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_isVal___lam__0___boxed), 1, 0);
return v___f_217_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__1(void){
_start:
{
lean_object* v___f_218_; 
v___f_218_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_isVal___lam__1___boxed), 1, 0);
return v___f_218_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__2(void){
_start:
{
lean_object* v___f_219_; 
v___f_219_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_isVal___lam__2___boxed), 1, 0);
return v___f_219_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__3(void){
_start:
{
lean_object* v___f_220_; 
v___f_220_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_isVal___lam__3___boxed), 1, 0);
return v___f_220_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__4(void){
_start:
{
lean_object* v___f_221_; 
v___f_221_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_isVal___lam__4___boxed), 1, 0);
return v___f_221_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__5(void){
_start:
{
lean_object* v___f_222_; 
v___f_222_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_isVal___lam__5___boxed), 1, 0);
return v___f_222_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__6(void){
_start:
{
lean_object* v___f_223_; 
v___f_223_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_isVal___lam__6___boxed), 1, 0);
return v___f_223_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__7(void){
_start:
{
lean_object* v___f_224_; 
v___f_224_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_isVal___lam__7___boxed), 1, 0);
return v___f_224_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__8(void){
_start:
{
lean_object* v___f_225_; 
v___f_225_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_isVal___lam__8___boxed), 1, 0);
return v___f_225_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__9(void){
_start:
{
lean_object* v___f_226_; 
v___f_226_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_isVal___lam__9___boxed), 1, 0);
return v___f_226_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__10(void){
_start:
{
lean_object* v___f_227_; 
v___f_227_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_isVal___lam__10___boxed), 1, 0);
return v___f_227_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__11(void){
_start:
{
lean_object* v___f_228_; 
v___f_228_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_isVal___lam__11___boxed), 1, 0);
return v___f_228_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__12(void){
_start:
{
lean_object* v___f_229_; 
v___f_229_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_isVal___lam__12___boxed), 1, 0);
return v___f_229_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__13(void){
_start:
{
lean_object* v___f_230_; 
v___f_230_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_isVal___lam__13___boxed), 1, 0);
return v___f_230_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__14(void){
_start:
{
lean_object* v___x_231_; lean_object* v___f_232_; lean_object* v___x_233_; 
v___x_231_ = lean_box(0);
v___f_232_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__13, &l_Lean_Meta_Tactic_Cbv_isVal___closed__13_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__13);
v___x_233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_233_, 0, v___f_232_);
lean_ctor_set(v___x_233_, 1, v___x_231_);
return v___x_233_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__15(void){
_start:
{
lean_object* v___x_234_; lean_object* v___f_235_; lean_object* v___x_236_; 
v___x_234_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__14, &l_Lean_Meta_Tactic_Cbv_isVal___closed__14_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__14);
v___f_235_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__12, &l_Lean_Meta_Tactic_Cbv_isVal___closed__12_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__12);
v___x_236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_236_, 0, v___f_235_);
lean_ctor_set(v___x_236_, 1, v___x_234_);
return v___x_236_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__16(void){
_start:
{
lean_object* v___x_237_; lean_object* v___f_238_; lean_object* v___x_239_; 
v___x_237_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__15, &l_Lean_Meta_Tactic_Cbv_isVal___closed__15_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__15);
v___f_238_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__11, &l_Lean_Meta_Tactic_Cbv_isVal___closed__11_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__11);
v___x_239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_239_, 0, v___f_238_);
lean_ctor_set(v___x_239_, 1, v___x_237_);
return v___x_239_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__17(void){
_start:
{
lean_object* v___x_240_; lean_object* v___f_241_; lean_object* v___x_242_; 
v___x_240_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__16, &l_Lean_Meta_Tactic_Cbv_isVal___closed__16_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__16);
v___f_241_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__10, &l_Lean_Meta_Tactic_Cbv_isVal___closed__10_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__10);
v___x_242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_242_, 0, v___f_241_);
lean_ctor_set(v___x_242_, 1, v___x_240_);
return v___x_242_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__18(void){
_start:
{
lean_object* v___x_243_; lean_object* v___f_244_; lean_object* v___x_245_; 
v___x_243_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__17, &l_Lean_Meta_Tactic_Cbv_isVal___closed__17_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__17);
v___f_244_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__9, &l_Lean_Meta_Tactic_Cbv_isVal___closed__9_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__9);
v___x_245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_245_, 0, v___f_244_);
lean_ctor_set(v___x_245_, 1, v___x_243_);
return v___x_245_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__19(void){
_start:
{
lean_object* v___x_246_; lean_object* v___f_247_; lean_object* v___x_248_; 
v___x_246_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__18, &l_Lean_Meta_Tactic_Cbv_isVal___closed__18_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__18);
v___f_247_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__8, &l_Lean_Meta_Tactic_Cbv_isVal___closed__8_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__8);
v___x_248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_248_, 0, v___f_247_);
lean_ctor_set(v___x_248_, 1, v___x_246_);
return v___x_248_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__20(void){
_start:
{
lean_object* v___x_249_; lean_object* v___f_250_; lean_object* v___x_251_; 
v___x_249_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__19, &l_Lean_Meta_Tactic_Cbv_isVal___closed__19_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__19);
v___f_250_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__7, &l_Lean_Meta_Tactic_Cbv_isVal___closed__7_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__7);
v___x_251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_251_, 0, v___f_250_);
lean_ctor_set(v___x_251_, 1, v___x_249_);
return v___x_251_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__21(void){
_start:
{
lean_object* v___x_252_; lean_object* v___f_253_; lean_object* v___x_254_; 
v___x_252_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__20, &l_Lean_Meta_Tactic_Cbv_isVal___closed__20_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__20);
v___f_253_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__6, &l_Lean_Meta_Tactic_Cbv_isVal___closed__6_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__6);
v___x_254_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_254_, 0, v___f_253_);
lean_ctor_set(v___x_254_, 1, v___x_252_);
return v___x_254_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__22(void){
_start:
{
lean_object* v___x_255_; lean_object* v___f_256_; lean_object* v___x_257_; 
v___x_255_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__21, &l_Lean_Meta_Tactic_Cbv_isVal___closed__21_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__21);
v___f_256_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__5, &l_Lean_Meta_Tactic_Cbv_isVal___closed__5_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__5);
v___x_257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_257_, 0, v___f_256_);
lean_ctor_set(v___x_257_, 1, v___x_255_);
return v___x_257_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__23(void){
_start:
{
lean_object* v___x_258_; lean_object* v___f_259_; lean_object* v___x_260_; 
v___x_258_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__22, &l_Lean_Meta_Tactic_Cbv_isVal___closed__22_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__22);
v___f_259_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__4, &l_Lean_Meta_Tactic_Cbv_isVal___closed__4_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__4);
v___x_260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_260_, 0, v___f_259_);
lean_ctor_set(v___x_260_, 1, v___x_258_);
return v___x_260_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__24(void){
_start:
{
lean_object* v___x_261_; lean_object* v___f_262_; lean_object* v___x_263_; 
v___x_261_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__23, &l_Lean_Meta_Tactic_Cbv_isVal___closed__23_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__23);
v___f_262_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__3, &l_Lean_Meta_Tactic_Cbv_isVal___closed__3_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__3);
v___x_263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_263_, 0, v___f_262_);
lean_ctor_set(v___x_263_, 1, v___x_261_);
return v___x_263_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__25(void){
_start:
{
lean_object* v___x_264_; lean_object* v___f_265_; lean_object* v___x_266_; 
v___x_264_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__24, &l_Lean_Meta_Tactic_Cbv_isVal___closed__24_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__24);
v___f_265_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__2, &l_Lean_Meta_Tactic_Cbv_isVal___closed__2_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__2);
v___x_266_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_266_, 0, v___f_265_);
lean_ctor_set(v___x_266_, 1, v___x_264_);
return v___x_266_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__26(void){
_start:
{
lean_object* v___x_267_; lean_object* v___f_268_; lean_object* v___x_269_; 
v___x_267_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__25, &l_Lean_Meta_Tactic_Cbv_isVal___closed__25_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__25);
v___f_268_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__1, &l_Lean_Meta_Tactic_Cbv_isVal___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__1);
v___x_269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_269_, 0, v___f_268_);
lean_ctor_set(v___x_269_, 1, v___x_267_);
return v___x_269_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__27(void){
_start:
{
lean_object* v___x_270_; lean_object* v___f_271_; lean_object* v___x_272_; 
v___x_270_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__26, &l_Lean_Meta_Tactic_Cbv_isVal___closed__26_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__26);
v___f_271_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__0, &l_Lean_Meta_Tactic_Cbv_isVal___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__0);
v___x_272_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_272_, 0, v___f_271_);
lean_ctor_set(v___x_272_, 1, v___x_270_);
return v___x_272_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_isVal(lean_object* v_e_273_){
_start:
{
lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_274_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_isVal___closed__27, &l_Lean_Meta_Tactic_Cbv_isVal___closed__27_once, _init_l_Lean_Meta_Tactic_Cbv_isVal___closed__27);
v___x_275_ = l_List_any___at___00Lean_Meta_Tactic_Cbv_isVal_spec__0(v_e_273_, v___x_274_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isVal___boxed(lean_object* v_e_276_){
_start:
{
uint8_t v_res_277_; lean_object* v_r_278_; 
v_res_277_ = l_Lean_Meta_Tactic_Cbv_isVal(v_e_276_);
v_r_278_ = lean_box(v_res_277_);
return v_r_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isBuiltinValue___redArg(lean_object* v_e_279_){
_start:
{
uint8_t v___x_281_; uint8_t v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_281_ = l_Lean_Meta_Tactic_Cbv_isVal(v_e_279_);
v___x_282_ = 0;
v___x_283_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_283_, 0, v___x_281_);
lean_ctor_set_uint8(v___x_283_, 1, v___x_282_);
v___x_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isBuiltinValue___redArg___boxed(lean_object* v_e_285_, lean_object* v_a_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Lean_Meta_Tactic_Cbv_isBuiltinValue___redArg(v_e_285_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isBuiltinValue(lean_object* v_e_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = l_Lean_Meta_Tactic_Cbv_isBuiltinValue___redArg(v_e_288_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isBuiltinValue___boxed(lean_object* v_e_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l_Lean_Meta_Tactic_Cbv_isBuiltinValue(v_e_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_, v_a_305_, v_a_306_, v_a_307_, v_a_308_, v_a_309_);
lean_dec(v_a_309_);
lean_dec_ref(v_a_308_);
lean_dec(v_a_307_);
lean_dec_ref(v_a_306_);
lean_dec(v_a_305_);
lean_dec_ref(v_a_304_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
lean_dec(v_a_301_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_guardSimproc(lean_object* v_p_312_, lean_object* v_s_313_, lean_object* v_e_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_){
_start:
{
lean_object* v___x_325_; uint8_t v___x_326_; 
lean_inc_ref(v_e_314_);
v___x_325_ = lean_apply_1(v_p_312_, v_e_314_);
v___x_326_ = lean_unbox(v___x_325_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; uint8_t v___x_328_; uint8_t v___x_329_; lean_object* v___x_330_; 
lean_dec_ref(v_e_314_);
lean_dec_ref(v_s_313_);
v___x_327_ = lean_alloc_ctor(0, 0, 2);
v___x_328_ = lean_unbox(v___x_325_);
lean_ctor_set_uint8(v___x_327_, 0, v___x_328_);
v___x_329_ = lean_unbox(v___x_325_);
lean_ctor_set_uint8(v___x_327_, 1, v___x_329_);
v___x_330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_330_, 0, v___x_327_);
return v___x_330_;
}
else
{
lean_object* v___x_331_; 
lean_inc(v_a_323_);
lean_inc_ref(v_a_322_);
lean_inc(v_a_321_);
lean_inc_ref(v_a_320_);
lean_inc(v_a_319_);
lean_inc_ref(v_a_318_);
lean_inc(v_a_317_);
lean_inc_ref(v_a_316_);
lean_inc(v_a_315_);
v___x_331_ = lean_apply_11(v_s_313_, v_e_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, lean_box(0));
return v___x_331_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_guardSimproc___boxed(lean_object* v_p_332_, lean_object* v_s_333_, lean_object* v_e_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l_Lean_Meta_Tactic_Cbv_guardSimproc(v_p_332_, v_s_333_, v_e_334_, v_a_335_, v_a_336_, v_a_337_, v_a_338_, v_a_339_, v_a_340_, v_a_341_, v_a_342_, v_a_343_);
lean_dec(v_a_343_);
lean_dec_ref(v_a_342_);
lean_dec(v_a_341_);
lean_dec_ref(v_a_340_);
lean_dec(v_a_339_);
lean_dec_ref(v_a_338_);
lean_dec(v_a_337_);
lean_dec_ref(v_a_336_);
lean_dec(v_a_335_);
return v_res_345_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isAlwaysZero(lean_object* v_x_346_){
_start:
{
switch(lean_obj_tag(v_x_346_))
{
case 0:
{
uint8_t v___x_347_; 
v___x_347_ = 1;
return v___x_347_;
}
case 2:
{
lean_object* v_a_348_; lean_object* v_a_349_; uint8_t v___x_350_; 
v_a_348_ = lean_ctor_get(v_x_346_, 0);
v_a_349_ = lean_ctor_get(v_x_346_, 1);
v___x_350_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isAlwaysZero(v_a_348_);
if (v___x_350_ == 0)
{
return v___x_350_;
}
else
{
v_x_346_ = v_a_349_;
goto _start;
}
}
case 3:
{
lean_object* v_a_352_; 
v_a_352_ = lean_ctor_get(v_x_346_, 1);
v_x_346_ = v_a_352_;
goto _start;
}
default: 
{
uint8_t v___x_354_; 
v___x_354_ = 0;
return v___x_354_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isAlwaysZero___boxed(lean_object* v_x_355_){
_start:
{
uint8_t v_res_356_; lean_object* v_r_357_; 
v_res_356_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isAlwaysZero(v_x_355_);
lean_dec(v_x_355_);
v_r_357_ = lean_box(v_res_356_);
return v_r_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp_spec__0___redArg(lean_object* v_l_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v_mctx_364_; lean_object* v___x_365_; lean_object* v_fst_366_; lean_object* v_snd_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v_cache_370_; lean_object* v_zetaDeltaFVarIds_371_; lean_object* v_postponed_372_; lean_object* v_diag_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_382_; 
v___x_362_ = lean_st_ref_get(v___y_360_);
lean_dec(v___x_362_);
v___x_363_ = lean_st_ref_get(v___y_359_);
v_mctx_364_ = lean_ctor_get(v___x_363_, 0);
lean_inc_ref(v_mctx_364_);
lean_dec(v___x_363_);
v___x_365_ = lean_instantiate_level_mvars(v_mctx_364_, v_l_358_);
v_fst_366_ = lean_ctor_get(v___x_365_, 0);
lean_inc(v_fst_366_);
v_snd_367_ = lean_ctor_get(v___x_365_, 1);
lean_inc(v_snd_367_);
lean_dec_ref(v___x_365_);
v___x_368_ = lean_st_ref_get(v___y_360_);
lean_dec(v___x_368_);
v___x_369_ = lean_st_ref_take(v___y_359_);
v_cache_370_ = lean_ctor_get(v___x_369_, 1);
v_zetaDeltaFVarIds_371_ = lean_ctor_get(v___x_369_, 2);
v_postponed_372_ = lean_ctor_get(v___x_369_, 3);
v_diag_373_ = lean_ctor_get(v___x_369_, 4);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_382_ == 0)
{
lean_object* v_unused_383_; 
v_unused_383_ = lean_ctor_get(v___x_369_, 0);
lean_dec(v_unused_383_);
v___x_375_ = v___x_369_;
v_isShared_376_ = v_isSharedCheck_382_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_diag_373_);
lean_inc(v_postponed_372_);
lean_inc(v_zetaDeltaFVarIds_371_);
lean_inc(v_cache_370_);
lean_dec(v___x_369_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_382_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v_fst_366_);
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_fst_366_);
lean_ctor_set(v_reuseFailAlloc_381_, 1, v_cache_370_);
lean_ctor_set(v_reuseFailAlloc_381_, 2, v_zetaDeltaFVarIds_371_);
lean_ctor_set(v_reuseFailAlloc_381_, 3, v_postponed_372_);
lean_ctor_set(v_reuseFailAlloc_381_, 4, v_diag_373_);
v___x_378_ = v_reuseFailAlloc_381_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_st_ref_set(v___y_359_, v___x_378_);
v___x_380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_380_, 0, v_snd_367_);
return v___x_380_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp_spec__0___redArg___boxed(lean_object* v_l_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp_spec__0___redArg(v_l_384_, v___y_385_, v___y_386_);
lean_dec(v___y_386_);
lean_dec(v___y_385_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp_spec__0(lean_object* v_l_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp_spec__0___redArg(v_l_389_, v___y_393_, v___y_395_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp_spec__0___boxed(lean_object* v_l_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp_spec__0(v_l_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_);
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp(lean_object* v_e_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_){
_start:
{
lean_object* v___x_415_; 
lean_inc_ref(v_e_407_);
v___x_415_ = l_Lean_Meta_isPropQuick(v_e_407_, v_a_410_, v_a_411_, v_a_412_, v_a_413_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_472_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_472_ == 0)
{
v___x_418_ = v___x_415_;
v_isShared_419_ = v_isSharedCheck_472_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_a_416_);
lean_dec(v___x_415_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_472_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
uint8_t v___x_420_; 
v___x_420_ = lean_unbox(v_a_416_);
lean_dec(v_a_416_);
switch(v___x_420_)
{
case 0:
{
uint8_t v___x_421_; lean_object* v___x_422_; lean_object* v___x_424_; 
lean_dec_ref(v_e_407_);
v___x_421_ = 0;
v___x_422_ = lean_box(v___x_421_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v___x_422_);
v___x_424_ = v___x_418_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v___x_422_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
case 1:
{
uint8_t v___x_426_; lean_object* v___x_427_; lean_object* v___x_429_; 
lean_dec_ref(v_e_407_);
v___x_426_ = 1;
v___x_427_ = lean_box(v___x_426_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v___x_427_);
v___x_429_ = v___x_418_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_427_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
default: 
{
lean_object* v___x_431_; 
lean_del_object(v___x_418_);
v___x_431_ = l_Lean_Meta_Sym_inferType___redArg(v_e_407_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_);
if (lean_obj_tag(v___x_431_) == 0)
{
lean_object* v_a_432_; lean_object* v___x_433_; 
v_a_432_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_a_432_);
lean_dec_ref(v___x_431_);
v___x_433_ = l_Lean_Meta_whnfD(v_a_432_, v_a_410_, v_a_411_, v_a_412_, v_a_413_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_455_; 
v_a_434_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_455_ == 0)
{
v___x_436_ = v___x_433_;
v_isShared_437_ = v_isSharedCheck_455_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_433_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_455_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
if (lean_obj_tag(v_a_434_) == 3)
{
lean_object* v_u_438_; lean_object* v___x_439_; lean_object* v_a_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_449_; 
lean_del_object(v___x_436_);
v_u_438_ = lean_ctor_get(v_a_434_, 0);
lean_inc(v_u_438_);
lean_dec_ref(v_a_434_);
v___x_439_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp_spec__0___redArg(v_u_438_, v_a_411_, v_a_413_);
v_a_440_ = lean_ctor_get(v___x_439_, 0);
v_isSharedCheck_449_ = !lean_is_exclusive(v___x_439_);
if (v_isSharedCheck_449_ == 0)
{
v___x_442_ = v___x_439_;
v_isShared_443_ = v_isSharedCheck_449_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_a_440_);
lean_dec(v___x_439_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_449_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
uint8_t v___x_444_; lean_object* v___x_445_; lean_object* v___x_447_; 
v___x_444_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isAlwaysZero(v_a_440_);
lean_dec(v_a_440_);
v___x_445_ = lean_box(v___x_444_);
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 0, v___x_445_);
v___x_447_ = v___x_442_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v___x_445_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
}
else
{
uint8_t v___x_450_; lean_object* v___x_451_; lean_object* v___x_453_; 
lean_dec(v_a_434_);
v___x_450_ = 0;
v___x_451_ = lean_box(v___x_450_);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_451_);
v___x_453_ = v___x_436_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v___x_451_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
else
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_463_; 
v_a_456_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v___x_433_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_433_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_461_; 
if (v_isShared_459_ == 0)
{
v___x_461_ = v___x_458_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_a_456_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
}
else
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_471_; 
v_a_464_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_471_ == 0)
{
v___x_466_ = v___x_431_;
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_431_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_469_; 
if (v_isShared_467_ == 0)
{
v___x_469_ = v___x_466_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_a_464_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_480_; 
lean_dec_ref(v_e_407_);
v_a_473_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_480_ == 0)
{
v___x_475_ = v___x_415_;
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_415_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp___boxed(lean_object* v_e_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp(v_e_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_);
lean_dec(v_a_487_);
lean_dec_ref(v_a_486_);
lean_dec(v_a_485_);
lean_dec_ref(v_a_484_);
lean_dec(v_a_483_);
lean_dec_ref(v_a_482_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProof(lean_object* v_e_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_){
_start:
{
lean_object* v___x_498_; 
lean_inc_ref(v_e_490_);
v___x_498_ = l_Lean_Meta_isProofQuick(v_e_490_, v_a_493_, v_a_494_, v_a_495_, v_a_496_);
if (lean_obj_tag(v___x_498_) == 0)
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_525_; 
v_a_499_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_525_ == 0)
{
v___x_501_ = v___x_498_;
v_isShared_502_ = v_isSharedCheck_525_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_498_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_525_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
uint8_t v___x_503_; 
v___x_503_ = lean_unbox(v_a_499_);
lean_dec(v_a_499_);
switch(v___x_503_)
{
case 0:
{
uint8_t v___x_504_; lean_object* v___x_505_; lean_object* v___x_507_; 
lean_dec_ref(v_e_490_);
v___x_504_ = 0;
v___x_505_ = lean_box(v___x_504_);
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 0, v___x_505_);
v___x_507_ = v___x_501_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v___x_505_);
v___x_507_ = v_reuseFailAlloc_508_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
return v___x_507_;
}
}
case 1:
{
uint8_t v___x_509_; lean_object* v___x_510_; lean_object* v___x_512_; 
lean_dec_ref(v_e_490_);
v___x_509_ = 1;
v___x_510_ = lean_box(v___x_509_);
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 0, v___x_510_);
v___x_512_ = v___x_501_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_510_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
default: 
{
lean_object* v___x_514_; 
lean_del_object(v___x_501_);
v___x_514_ = l_Lean_Meta_Sym_inferType___redArg(v_e_490_, v_a_492_, v_a_493_, v_a_494_, v_a_495_, v_a_496_);
if (lean_obj_tag(v___x_514_) == 0)
{
lean_object* v_a_515_; lean_object* v___x_516_; 
v_a_515_ = lean_ctor_get(v___x_514_, 0);
lean_inc(v_a_515_);
lean_dec_ref(v___x_514_);
v___x_516_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProp(v_a_515_, v_a_491_, v_a_492_, v_a_493_, v_a_494_, v_a_495_, v_a_496_);
return v___x_516_;
}
else
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_524_; 
v_a_517_ = lean_ctor_get(v___x_514_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_514_);
if (v_isSharedCheck_524_ == 0)
{
v___x_519_ = v___x_514_;
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v___x_514_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_522_; 
if (v_isShared_520_ == 0)
{
v___x_522_ = v___x_519_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_a_517_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
lean_dec_ref(v_e_490_);
v_a_526_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_498_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_498_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProof___boxed(lean_object* v_e_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProof(v_e_534_, v_a_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_);
lean_dec(v_a_540_);
lean_dec_ref(v_a_539_);
lean_dec(v_a_538_);
lean_dec_ref(v_a_537_);
lean_dec(v_a_536_);
lean_dec_ref(v_a_535_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isProofTerm___redArg(lean_object* v_e_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_){
_start:
{
lean_object* v___x_551_; 
v___x_551_ = l___private_Lean_Meta_Tactic_Cbv_Util_0__Lean_Meta_Tactic_Cbv_isProof(v_e_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_, v_a_549_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_562_; 
v_a_552_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_562_ == 0)
{
v___x_554_ = v___x_551_;
v_isShared_555_ = v_isSharedCheck_562_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_551_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_562_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
uint8_t v___x_556_; lean_object* v___x_557_; uint8_t v___x_558_; lean_object* v___x_560_; 
v___x_556_ = 0;
v___x_557_ = lean_alloc_ctor(0, 0, 2);
v___x_558_ = lean_unbox(v_a_552_);
lean_dec(v_a_552_);
lean_ctor_set_uint8(v___x_557_, 0, v___x_558_);
lean_ctor_set_uint8(v___x_557_, 1, v___x_556_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 0, v___x_557_);
v___x_560_ = v___x_554_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v___x_557_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
else
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_570_; 
v_a_563_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_570_ == 0)
{
v___x_565_ = v___x_551_;
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_551_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_568_; 
if (v_isShared_566_ == 0)
{
v___x_568_ = v___x_565_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_563_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isProofTerm___redArg___boxed(lean_object* v_e_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lean_Meta_Tactic_Cbv_isProofTerm___redArg(v_e_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_, v_a_576_, v_a_577_);
lean_dec(v_a_577_);
lean_dec_ref(v_a_576_);
lean_dec(v_a_575_);
lean_dec_ref(v_a_574_);
lean_dec(v_a_573_);
lean_dec_ref(v_a_572_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isProofTerm(lean_object* v_e_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_Lean_Meta_Tactic_Cbv_isProofTerm___redArg(v_e_580_, v_a_584_, v_a_585_, v_a_586_, v_a_587_, v_a_588_, v_a_589_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isProofTerm___boxed(lean_object* v_e_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_Lean_Meta_Tactic_Cbv_isProofTerm(v_e_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_, v_a_600_, v_a_601_);
lean_dec(v_a_601_);
lean_dec_ref(v_a_600_);
lean_dec(v_a_599_);
lean_dec_ref(v_a_598_);
lean_dec(v_a_597_);
lean_dec_ref(v_a_596_);
lean_dec(v_a_595_);
lean_dec_ref(v_a_594_);
lean_dec(v_a_593_);
return v_res_603_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__0(void){
_start:
{
lean_object* v___x_604_; 
v___x_604_ = lean_mk_string_unchecked("List", 4, 4);
return v___x_604_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__1(void){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = lean_mk_string_unchecked("nil", 3, 3);
return v___x_605_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__2(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_606_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__1, &l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__1);
v___x_607_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__0, &l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__0);
v___x_608_ = l_Lean_Name_mkStr2(v___x_607_, v___x_606_);
return v___x_608_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__3(void){
_start:
{
lean_object* v___x_609_; 
v___x_609_ = lean_mk_string_unchecked("cons", 4, 4);
return v___x_609_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__4(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_610_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__3, &l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__3_once, _init_l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__3);
v___x_611_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__0, &l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__0);
v___x_612_ = l_Lean_Name_mkStr2(v___x_611_, v___x_610_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getListLitElems(lean_object* v_e_613_, lean_object* v_acc_614_){
_start:
{
lean_object* v___x_615_; uint8_t v___x_616_; 
v___x_615_ = l_Lean_Expr_cleanupAnnotations(v_e_613_);
v___x_616_ = l_Lean_Expr_isApp(v___x_615_);
if (v___x_616_ == 0)
{
lean_object* v___x_617_; 
lean_dec_ref(v___x_615_);
lean_dec_ref(v_acc_614_);
v___x_617_ = lean_box(0);
return v___x_617_;
}
else
{
lean_object* v_arg_618_; lean_object* v___x_619_; lean_object* v___x_620_; uint8_t v___x_621_; 
v_arg_618_ = lean_ctor_get(v___x_615_, 1);
lean_inc_ref(v_arg_618_);
v___x_619_ = l_Lean_Expr_appFnCleanup___redArg(v___x_615_);
v___x_620_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__2, &l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__2_once, _init_l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__2);
v___x_621_ = l_Lean_Expr_isConstOf(v___x_619_, v___x_620_);
if (v___x_621_ == 0)
{
uint8_t v___x_622_; 
v___x_622_ = l_Lean_Expr_isApp(v___x_619_);
if (v___x_622_ == 0)
{
lean_object* v___x_623_; 
lean_dec_ref(v___x_619_);
lean_dec_ref(v_arg_618_);
lean_dec_ref(v_acc_614_);
v___x_623_ = lean_box(0);
return v___x_623_;
}
else
{
lean_object* v_arg_624_; lean_object* v___x_625_; uint8_t v___x_626_; 
v_arg_624_ = lean_ctor_get(v___x_619_, 1);
lean_inc_ref(v_arg_624_);
v___x_625_ = l_Lean_Expr_appFnCleanup___redArg(v___x_619_);
v___x_626_ = l_Lean_Expr_isApp(v___x_625_);
if (v___x_626_ == 0)
{
lean_object* v___x_627_; 
lean_dec_ref(v___x_625_);
lean_dec_ref(v_arg_624_);
lean_dec_ref(v_arg_618_);
lean_dec_ref(v_acc_614_);
v___x_627_ = lean_box(0);
return v___x_627_;
}
else
{
lean_object* v___x_628_; lean_object* v___x_629_; uint8_t v___x_630_; 
v___x_628_ = l_Lean_Expr_appFnCleanup___redArg(v___x_625_);
v___x_629_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__4, &l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__4_once, _init_l_Lean_Meta_Tactic_Cbv_getListLitElems___closed__4);
v___x_630_ = l_Lean_Expr_isConstOf(v___x_628_, v___x_629_);
lean_dec_ref(v___x_628_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; 
lean_dec_ref(v_arg_624_);
lean_dec_ref(v_arg_618_);
lean_dec_ref(v_acc_614_);
v___x_631_ = lean_box(0);
return v___x_631_;
}
else
{
lean_object* v___x_632_; 
v___x_632_ = lean_array_push(v_acc_614_, v_arg_624_);
v_e_613_ = v_arg_618_;
v_acc_614_ = v___x_632_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_634_; 
lean_dec_ref(v___x_619_);
lean_dec_ref(v_arg_618_);
v___x_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_634_, 0, v_acc_614_);
return v___x_634_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_markAsDoneIfFailed(lean_object* v_x_635_){
_start:
{
if (lean_obj_tag(v_x_635_) == 0)
{
uint8_t v_contextDependent_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_644_; 
v_contextDependent_636_ = lean_ctor_get_uint8(v_x_635_, 1);
v_isSharedCheck_644_ = !lean_is_exclusive(v_x_635_);
if (v_isSharedCheck_644_ == 0)
{
v___x_638_ = v_x_635_;
v_isShared_639_ = v_isSharedCheck_644_;
goto v_resetjp_637_;
}
else
{
lean_dec(v_x_635_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_644_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
uint8_t v___x_640_; lean_object* v___x_642_; 
v___x_640_ = 1;
if (v_isShared_639_ == 0)
{
v___x_642_ = v___x_638_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v_reuseFailAlloc_643_, 1, v_contextDependent_636_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
lean_ctor_set_uint8(v___x_642_, 0, v___x_640_);
return v___x_642_;
}
}
}
else
{
return v_x_635_;
}
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_LitValues(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Cbv_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Cbv_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_LitValues(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Cbv_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cbv_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Cbv_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Cbv_Util(builtin);
}
#ifdef __cplusplus
}
#endif
